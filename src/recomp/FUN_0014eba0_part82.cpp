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


void FUN_0014eba0_part82(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x176470u: goto label_176470;
        case 0x176474u: goto label_176474;
        case 0x176478u: goto label_176478;
        case 0x17647cu: goto label_17647c;
        case 0x176480u: goto label_176480;
        case 0x176484u: goto label_176484;
        case 0x176488u: goto label_176488;
        case 0x17648cu: goto label_17648c;
        case 0x176490u: goto label_176490;
        case 0x176494u: goto label_176494;
        case 0x176498u: goto label_176498;
        case 0x17649cu: goto label_17649c;
        case 0x1764a0u: goto label_1764a0;
        case 0x1764a4u: goto label_1764a4;
        case 0x1764a8u: goto label_1764a8;
        case 0x1764acu: goto label_1764ac;
        case 0x1764b0u: goto label_1764b0;
        case 0x1764b4u: goto label_1764b4;
        case 0x1764b8u: goto label_1764b8;
        case 0x1764bcu: goto label_1764bc;
        case 0x1764c0u: goto label_1764c0;
        case 0x1764c4u: goto label_1764c4;
        case 0x1764c8u: goto label_1764c8;
        case 0x1764ccu: goto label_1764cc;
        case 0x1764d0u: goto label_1764d0;
        case 0x1764d4u: goto label_1764d4;
        case 0x1764d8u: goto label_1764d8;
        case 0x1764dcu: goto label_1764dc;
        case 0x1764e0u: goto label_1764e0;
        case 0x1764e4u: goto label_1764e4;
        case 0x1764e8u: goto label_1764e8;
        case 0x1764ecu: goto label_1764ec;
        case 0x1764f0u: goto label_1764f0;
        case 0x1764f4u: goto label_1764f4;
        case 0x1764f8u: goto label_1764f8;
        case 0x1764fcu: goto label_1764fc;
        case 0x176500u: goto label_176500;
        case 0x176504u: goto label_176504;
        case 0x176508u: goto label_176508;
        case 0x17650cu: goto label_17650c;
        case 0x176510u: goto label_176510;
        case 0x176514u: goto label_176514;
        case 0x176518u: goto label_176518;
        case 0x17651cu: goto label_17651c;
        case 0x176520u: goto label_176520;
        case 0x176524u: goto label_176524;
        case 0x176528u: goto label_176528;
        case 0x17652cu: goto label_17652c;
        case 0x176530u: goto label_176530;
        case 0x176534u: goto label_176534;
        case 0x176538u: goto label_176538;
        case 0x17653cu: goto label_17653c;
        case 0x176540u: goto label_176540;
        case 0x176544u: goto label_176544;
        case 0x176548u: goto label_176548;
        case 0x17654cu: goto label_17654c;
        case 0x176550u: goto label_176550;
        case 0x176554u: goto label_176554;
        case 0x176558u: goto label_176558;
        case 0x17655cu: goto label_17655c;
        case 0x176560u: goto label_176560;
        case 0x176564u: goto label_176564;
        case 0x176568u: goto label_176568;
        case 0x17656cu: goto label_17656c;
        case 0x176570u: goto label_176570;
        case 0x176574u: goto label_176574;
        case 0x176578u: goto label_176578;
        case 0x17657cu: goto label_17657c;
        case 0x176580u: goto label_176580;
        case 0x176584u: goto label_176584;
        case 0x176588u: goto label_176588;
        case 0x17658cu: goto label_17658c;
        case 0x176590u: goto label_176590;
        case 0x176594u: goto label_176594;
        case 0x176598u: goto label_176598;
        case 0x17659cu: goto label_17659c;
        case 0x1765a0u: goto label_1765a0;
        case 0x1765a4u: goto label_1765a4;
        case 0x1765a8u: goto label_1765a8;
        case 0x1765acu: goto label_1765ac;
        case 0x1765b0u: goto label_1765b0;
        case 0x1765b4u: goto label_1765b4;
        case 0x1765b8u: goto label_1765b8;
        case 0x1765bcu: goto label_1765bc;
        case 0x1765c0u: goto label_1765c0;
        case 0x1765c4u: goto label_1765c4;
        case 0x1765c8u: goto label_1765c8;
        case 0x1765ccu: goto label_1765cc;
        case 0x1765d0u: goto label_1765d0;
        case 0x1765d4u: goto label_1765d4;
        case 0x1765d8u: goto label_1765d8;
        case 0x1765dcu: goto label_1765dc;
        case 0x1765e0u: goto label_1765e0;
        case 0x1765e4u: goto label_1765e4;
        case 0x1765e8u: goto label_1765e8;
        case 0x1765ecu: goto label_1765ec;
        case 0x1765f0u: goto label_1765f0;
        case 0x1765f4u: goto label_1765f4;
        case 0x1765f8u: goto label_1765f8;
        case 0x1765fcu: goto label_1765fc;
        case 0x176600u: goto label_176600;
        case 0x176604u: goto label_176604;
        case 0x176608u: goto label_176608;
        case 0x17660cu: goto label_17660c;
        case 0x176610u: goto label_176610;
        case 0x176614u: goto label_176614;
        case 0x176618u: goto label_176618;
        case 0x17661cu: goto label_17661c;
        case 0x176620u: goto label_176620;
        case 0x176624u: goto label_176624;
        case 0x176628u: goto label_176628;
        case 0x17662cu: goto label_17662c;
        case 0x176630u: goto label_176630;
        case 0x176634u: goto label_176634;
        case 0x176638u: goto label_176638;
        case 0x17663cu: goto label_17663c;
        case 0x176640u: goto label_176640;
        case 0x176644u: goto label_176644;
        case 0x176648u: goto label_176648;
        case 0x17664cu: goto label_17664c;
        case 0x176650u: goto label_176650;
        case 0x176654u: goto label_176654;
        case 0x176658u: goto label_176658;
        case 0x17665cu: goto label_17665c;
        case 0x176660u: goto label_176660;
        case 0x176664u: goto label_176664;
        case 0x176668u: goto label_176668;
        case 0x17666cu: goto label_17666c;
        case 0x176670u: goto label_176670;
        case 0x176674u: goto label_176674;
        case 0x176678u: goto label_176678;
        case 0x17667cu: goto label_17667c;
        case 0x176680u: goto label_176680;
        case 0x176684u: goto label_176684;
        case 0x176688u: goto label_176688;
        case 0x17668cu: goto label_17668c;
        case 0x176690u: goto label_176690;
        case 0x176694u: goto label_176694;
        case 0x176698u: goto label_176698;
        case 0x17669cu: goto label_17669c;
        case 0x1766a0u: goto label_1766a0;
        case 0x1766a4u: goto label_1766a4;
        case 0x1766a8u: goto label_1766a8;
        case 0x1766acu: goto label_1766ac;
        case 0x1766b0u: goto label_1766b0;
        case 0x1766b4u: goto label_1766b4;
        case 0x1766b8u: goto label_1766b8;
        case 0x1766bcu: goto label_1766bc;
        case 0x1766c0u: goto label_1766c0;
        case 0x1766c4u: goto label_1766c4;
        case 0x1766c8u: goto label_1766c8;
        case 0x1766ccu: goto label_1766cc;
        case 0x1766d0u: goto label_1766d0;
        case 0x1766d4u: goto label_1766d4;
        case 0x1766d8u: goto label_1766d8;
        case 0x1766dcu: goto label_1766dc;
        case 0x1766e0u: goto label_1766e0;
        case 0x1766e4u: goto label_1766e4;
        case 0x1766e8u: goto label_1766e8;
        case 0x1766ecu: goto label_1766ec;
        case 0x1766f0u: goto label_1766f0;
        case 0x1766f4u: goto label_1766f4;
        case 0x1766f8u: goto label_1766f8;
        case 0x1766fcu: goto label_1766fc;
        case 0x176700u: goto label_176700;
        case 0x176704u: goto label_176704;
        case 0x176708u: goto label_176708;
        case 0x17670cu: goto label_17670c;
        case 0x176710u: goto label_176710;
        case 0x176714u: goto label_176714;
        case 0x176718u: goto label_176718;
        case 0x17671cu: goto label_17671c;
        case 0x176720u: goto label_176720;
        case 0x176724u: goto label_176724;
        case 0x176728u: goto label_176728;
        case 0x17672cu: goto label_17672c;
        case 0x176730u: goto label_176730;
        case 0x176734u: goto label_176734;
        case 0x176738u: goto label_176738;
        case 0x17673cu: goto label_17673c;
        case 0x176740u: goto label_176740;
        case 0x176744u: goto label_176744;
        case 0x176748u: goto label_176748;
        case 0x17674cu: goto label_17674c;
        case 0x176750u: goto label_176750;
        case 0x176754u: goto label_176754;
        case 0x176758u: goto label_176758;
        case 0x17675cu: goto label_17675c;
        case 0x176760u: goto label_176760;
        case 0x176764u: goto label_176764;
        case 0x176768u: goto label_176768;
        case 0x17676cu: goto label_17676c;
        case 0x176770u: goto label_176770;
        case 0x176774u: goto label_176774;
        case 0x176778u: goto label_176778;
        case 0x17677cu: goto label_17677c;
        case 0x176780u: goto label_176780;
        case 0x176784u: goto label_176784;
        case 0x176788u: goto label_176788;
        case 0x17678cu: goto label_17678c;
        case 0x176790u: goto label_176790;
        case 0x176794u: goto label_176794;
        case 0x176798u: goto label_176798;
        case 0x17679cu: goto label_17679c;
        case 0x1767a0u: goto label_1767a0;
        case 0x1767a4u: goto label_1767a4;
        case 0x1767a8u: goto label_1767a8;
        case 0x1767acu: goto label_1767ac;
        case 0x1767b0u: goto label_1767b0;
        case 0x1767b4u: goto label_1767b4;
        case 0x1767b8u: goto label_1767b8;
        case 0x1767bcu: goto label_1767bc;
        case 0x1767c0u: goto label_1767c0;
        case 0x1767c4u: goto label_1767c4;
        case 0x1767c8u: goto label_1767c8;
        case 0x1767ccu: goto label_1767cc;
        case 0x1767d0u: goto label_1767d0;
        case 0x1767d4u: goto label_1767d4;
        case 0x1767d8u: goto label_1767d8;
        case 0x1767dcu: goto label_1767dc;
        case 0x1767e0u: goto label_1767e0;
        case 0x1767e4u: goto label_1767e4;
        case 0x1767e8u: goto label_1767e8;
        case 0x1767ecu: goto label_1767ec;
        case 0x1767f0u: goto label_1767f0;
        case 0x1767f4u: goto label_1767f4;
        case 0x1767f8u: goto label_1767f8;
        case 0x1767fcu: goto label_1767fc;
        case 0x176800u: goto label_176800;
        case 0x176804u: goto label_176804;
        case 0x176808u: goto label_176808;
        case 0x17680cu: goto label_17680c;
        case 0x176810u: goto label_176810;
        case 0x176814u: goto label_176814;
        case 0x176818u: goto label_176818;
        case 0x17681cu: goto label_17681c;
        case 0x176820u: goto label_176820;
        case 0x176824u: goto label_176824;
        case 0x176828u: goto label_176828;
        case 0x17682cu: goto label_17682c;
        case 0x176830u: goto label_176830;
        case 0x176834u: goto label_176834;
        case 0x176838u: goto label_176838;
        case 0x17683cu: goto label_17683c;
        case 0x176840u: goto label_176840;
        case 0x176844u: goto label_176844;
        case 0x176848u: goto label_176848;
        case 0x17684cu: goto label_17684c;
        case 0x176850u: goto label_176850;
        case 0x176854u: goto label_176854;
        case 0x176858u: goto label_176858;
        case 0x17685cu: goto label_17685c;
        case 0x176860u: goto label_176860;
        case 0x176864u: goto label_176864;
        case 0x176868u: goto label_176868;
        case 0x17686cu: goto label_17686c;
        case 0x176870u: goto label_176870;
        case 0x176874u: goto label_176874;
        case 0x176878u: goto label_176878;
        case 0x17687cu: goto label_17687c;
        case 0x176880u: goto label_176880;
        case 0x176884u: goto label_176884;
        case 0x176888u: goto label_176888;
        case 0x17688cu: goto label_17688c;
        case 0x176890u: goto label_176890;
        case 0x176894u: goto label_176894;
        case 0x176898u: goto label_176898;
        case 0x17689cu: goto label_17689c;
        case 0x1768a0u: goto label_1768a0;
        case 0x1768a4u: goto label_1768a4;
        case 0x1768a8u: goto label_1768a8;
        case 0x1768acu: goto label_1768ac;
        case 0x1768b0u: goto label_1768b0;
        case 0x1768b4u: goto label_1768b4;
        case 0x1768b8u: goto label_1768b8;
        case 0x1768bcu: goto label_1768bc;
        case 0x1768c0u: goto label_1768c0;
        case 0x1768c4u: goto label_1768c4;
        case 0x1768c8u: goto label_1768c8;
        case 0x1768ccu: goto label_1768cc;
        case 0x1768d0u: goto label_1768d0;
        case 0x1768d4u: goto label_1768d4;
        case 0x1768d8u: goto label_1768d8;
        case 0x1768dcu: goto label_1768dc;
        case 0x1768e0u: goto label_1768e0;
        case 0x1768e4u: goto label_1768e4;
        case 0x1768e8u: goto label_1768e8;
        case 0x1768ecu: goto label_1768ec;
        case 0x1768f0u: goto label_1768f0;
        case 0x1768f4u: goto label_1768f4;
        case 0x1768f8u: goto label_1768f8;
        case 0x1768fcu: goto label_1768fc;
        case 0x176900u: goto label_176900;
        case 0x176904u: goto label_176904;
        case 0x176908u: goto label_176908;
        case 0x17690cu: goto label_17690c;
        case 0x176910u: goto label_176910;
        case 0x176914u: goto label_176914;
        case 0x176918u: goto label_176918;
        case 0x17691cu: goto label_17691c;
        case 0x176920u: goto label_176920;
        case 0x176924u: goto label_176924;
        case 0x176928u: goto label_176928;
        case 0x17692cu: goto label_17692c;
        case 0x176930u: goto label_176930;
        case 0x176934u: goto label_176934;
        case 0x176938u: goto label_176938;
        case 0x17693cu: goto label_17693c;
        case 0x176940u: goto label_176940;
        case 0x176944u: goto label_176944;
        case 0x176948u: goto label_176948;
        case 0x17694cu: goto label_17694c;
        case 0x176950u: goto label_176950;
        case 0x176954u: goto label_176954;
        case 0x176958u: goto label_176958;
        case 0x17695cu: goto label_17695c;
        case 0x176960u: goto label_176960;
        case 0x176964u: goto label_176964;
        case 0x176968u: goto label_176968;
        case 0x17696cu: goto label_17696c;
        case 0x176970u: goto label_176970;
        case 0x176974u: goto label_176974;
        case 0x176978u: goto label_176978;
        case 0x17697cu: goto label_17697c;
        case 0x176980u: goto label_176980;
        case 0x176984u: goto label_176984;
        case 0x176988u: goto label_176988;
        case 0x17698cu: goto label_17698c;
        case 0x176990u: goto label_176990;
        case 0x176994u: goto label_176994;
        case 0x176998u: goto label_176998;
        case 0x17699cu: goto label_17699c;
        case 0x1769a0u: goto label_1769a0;
        case 0x1769a4u: goto label_1769a4;
        case 0x1769a8u: goto label_1769a8;
        case 0x1769acu: goto label_1769ac;
        case 0x1769b0u: goto label_1769b0;
        case 0x1769b4u: goto label_1769b4;
        case 0x1769b8u: goto label_1769b8;
        case 0x1769bcu: goto label_1769bc;
        case 0x1769c0u: goto label_1769c0;
        case 0x1769c4u: goto label_1769c4;
        case 0x1769c8u: goto label_1769c8;
        case 0x1769ccu: goto label_1769cc;
        case 0x1769d0u: goto label_1769d0;
        case 0x1769d4u: goto label_1769d4;
        case 0x1769d8u: goto label_1769d8;
        case 0x1769dcu: goto label_1769dc;
        case 0x1769e0u: goto label_1769e0;
        case 0x1769e4u: goto label_1769e4;
        case 0x1769e8u: goto label_1769e8;
        case 0x1769ecu: goto label_1769ec;
        case 0x1769f0u: goto label_1769f0;
        case 0x1769f4u: goto label_1769f4;
        case 0x1769f8u: goto label_1769f8;
        case 0x1769fcu: goto label_1769fc;
        case 0x176a00u: goto label_176a00;
        case 0x176a04u: goto label_176a04;
        case 0x176a08u: goto label_176a08;
        case 0x176a0cu: goto label_176a0c;
        case 0x176a10u: goto label_176a10;
        case 0x176a14u: goto label_176a14;
        case 0x176a18u: goto label_176a18;
        case 0x176a1cu: goto label_176a1c;
        case 0x176a20u: goto label_176a20;
        case 0x176a24u: goto label_176a24;
        case 0x176a28u: goto label_176a28;
        case 0x176a2cu: goto label_176a2c;
        case 0x176a30u: goto label_176a30;
        case 0x176a34u: goto label_176a34;
        case 0x176a38u: goto label_176a38;
        case 0x176a3cu: goto label_176a3c;
        case 0x176a40u: goto label_176a40;
        case 0x176a44u: goto label_176a44;
        case 0x176a48u: goto label_176a48;
        case 0x176a4cu: goto label_176a4c;
        case 0x176a50u: goto label_176a50;
        case 0x176a54u: goto label_176a54;
        case 0x176a58u: goto label_176a58;
        case 0x176a5cu: goto label_176a5c;
        case 0x176a60u: goto label_176a60;
        case 0x176a64u: goto label_176a64;
        case 0x176a68u: goto label_176a68;
        case 0x176a6cu: goto label_176a6c;
        case 0x176a70u: goto label_176a70;
        case 0x176a74u: goto label_176a74;
        case 0x176a78u: goto label_176a78;
        case 0x176a7cu: goto label_176a7c;
        case 0x176a80u: goto label_176a80;
        case 0x176a84u: goto label_176a84;
        case 0x176a88u: goto label_176a88;
        case 0x176a8cu: goto label_176a8c;
        case 0x176a90u: goto label_176a90;
        case 0x176a94u: goto label_176a94;
        case 0x176a98u: goto label_176a98;
        case 0x176a9cu: goto label_176a9c;
        case 0x176aa0u: goto label_176aa0;
        case 0x176aa4u: goto label_176aa4;
        case 0x176aa8u: goto label_176aa8;
        case 0x176aacu: goto label_176aac;
        case 0x176ab0u: goto label_176ab0;
        case 0x176ab4u: goto label_176ab4;
        case 0x176ab8u: goto label_176ab8;
        case 0x176abcu: goto label_176abc;
        case 0x176ac0u: goto label_176ac0;
        case 0x176ac4u: goto label_176ac4;
        case 0x176ac8u: goto label_176ac8;
        case 0x176accu: goto label_176acc;
        case 0x176ad0u: goto label_176ad0;
        case 0x176ad4u: goto label_176ad4;
        case 0x176ad8u: goto label_176ad8;
        case 0x176adcu: goto label_176adc;
        case 0x176ae0u: goto label_176ae0;
        case 0x176ae4u: goto label_176ae4;
        case 0x176ae8u: goto label_176ae8;
        case 0x176aecu: goto label_176aec;
        case 0x176af0u: goto label_176af0;
        case 0x176af4u: goto label_176af4;
        case 0x176af8u: goto label_176af8;
        case 0x176afcu: goto label_176afc;
        case 0x176b00u: goto label_176b00;
        case 0x176b04u: goto label_176b04;
        case 0x176b08u: goto label_176b08;
        case 0x176b0cu: goto label_176b0c;
        case 0x176b10u: goto label_176b10;
        case 0x176b14u: goto label_176b14;
        case 0x176b18u: goto label_176b18;
        case 0x176b1cu: goto label_176b1c;
        case 0x176b20u: goto label_176b20;
        case 0x176b24u: goto label_176b24;
        case 0x176b28u: goto label_176b28;
        case 0x176b2cu: goto label_176b2c;
        case 0x176b30u: goto label_176b30;
        case 0x176b34u: goto label_176b34;
        case 0x176b38u: goto label_176b38;
        case 0x176b3cu: goto label_176b3c;
        case 0x176b40u: goto label_176b40;
        case 0x176b44u: goto label_176b44;
        case 0x176b48u: goto label_176b48;
        case 0x176b4cu: goto label_176b4c;
        case 0x176b50u: goto label_176b50;
        case 0x176b54u: goto label_176b54;
        case 0x176b58u: goto label_176b58;
        case 0x176b5cu: goto label_176b5c;
        case 0x176b60u: goto label_176b60;
        case 0x176b64u: goto label_176b64;
        case 0x176b68u: goto label_176b68;
        case 0x176b6cu: goto label_176b6c;
        case 0x176b70u: goto label_176b70;
        case 0x176b74u: goto label_176b74;
        case 0x176b78u: goto label_176b78;
        case 0x176b7cu: goto label_176b7c;
        case 0x176b80u: goto label_176b80;
        case 0x176b84u: goto label_176b84;
        case 0x176b88u: goto label_176b88;
        case 0x176b8cu: goto label_176b8c;
        case 0x176b90u: goto label_176b90;
        case 0x176b94u: goto label_176b94;
        case 0x176b98u: goto label_176b98;
        case 0x176b9cu: goto label_176b9c;
        case 0x176ba0u: goto label_176ba0;
        case 0x176ba4u: goto label_176ba4;
        case 0x176ba8u: goto label_176ba8;
        case 0x176bacu: goto label_176bac;
        case 0x176bb0u: goto label_176bb0;
        case 0x176bb4u: goto label_176bb4;
        case 0x176bb8u: goto label_176bb8;
        case 0x176bbcu: goto label_176bbc;
        case 0x176bc0u: goto label_176bc0;
        case 0x176bc4u: goto label_176bc4;
        case 0x176bc8u: goto label_176bc8;
        case 0x176bccu: goto label_176bcc;
        case 0x176bd0u: goto label_176bd0;
        case 0x176bd4u: goto label_176bd4;
        case 0x176bd8u: goto label_176bd8;
        case 0x176bdcu: goto label_176bdc;
        case 0x176be0u: goto label_176be0;
        case 0x176be4u: goto label_176be4;
        case 0x176be8u: goto label_176be8;
        case 0x176becu: goto label_176bec;
        case 0x176bf0u: goto label_176bf0;
        case 0x176bf4u: goto label_176bf4;
        case 0x176bf8u: goto label_176bf8;
        case 0x176bfcu: goto label_176bfc;
        case 0x176c00u: goto label_176c00;
        case 0x176c04u: goto label_176c04;
        case 0x176c08u: goto label_176c08;
        case 0x176c0cu: goto label_176c0c;
        case 0x176c10u: goto label_176c10;
        case 0x176c14u: goto label_176c14;
        case 0x176c18u: goto label_176c18;
        case 0x176c1cu: goto label_176c1c;
        case 0x176c20u: goto label_176c20;
        case 0x176c24u: goto label_176c24;
        case 0x176c28u: goto label_176c28;
        case 0x176c2cu: goto label_176c2c;
        case 0x176c30u: goto label_176c30;
        case 0x176c34u: goto label_176c34;
        case 0x176c38u: goto label_176c38;
        case 0x176c3cu: goto label_176c3c;
        default: return;
    }

label_176470:
    // 0x176470: 0xa0400015  sb          $zero, 0x15($v0)
    ctx->pc = 0x176470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 0));
label_176474:
    // 0x176474: 0x92050023  lbu         $a1, 0x23($s0)
    ctx->pc = 0x176474u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
label_176478:
    // 0x176478: 0xc0449d4  jal         func_112750
label_17647c:
    if (ctx->pc == 0x17647Cu) {
        ctx->pc = 0x17647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176478u;
        // 0x17647c: 0x92040022  lbu         $a0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176480u;
        goto label_176480;
    }
    ctx->pc = 0x176478u;
    SET_GPR_U32(ctx, 31, 0x176480u);
    ctx->pc = 0x17647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176478u;
    // 0x17647c: 0x92040022  lbu         $a0, 0x22($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x176478u, 0x176480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176480u;
label_176480:
    // 0x176480: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x176480u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_176484:
    // 0x176484: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x176484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_176488:
    // 0x176488: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x176488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_17648c:
    // 0x17648c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17648cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_176490:
    // 0x176490: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x176490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_176494:
    // 0x176494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x176494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_176498:
    // 0x176498: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x176498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_17649c:
    // 0x17649c: 0x92040034  lbu         $a0, 0x34($s0)
    ctx->pc = 0x17649cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1764a0:
    // 0x1764a0: 0x9202002a  lbu         $v0, 0x2A($s0)
    ctx->pc = 0x1764a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1764a4:
    // 0x1764a4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1764a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1764a8:
    // 0x1764a8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1764a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1764ac:
    // 0x1764ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1764b0:
    // 0x1764b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1764b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1764b4:
    // 0x1764b4: 0x92050027  lbu         $a1, 0x27($s0)
    ctx->pc = 0x1764b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
label_1764b8:
    // 0x1764b8: 0xc0449d4  jal         func_112750
label_1764bc:
    if (ctx->pc == 0x1764BCu) {
        ctx->pc = 0x1764BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764B8u;
        // 0x1764bc: 0x92040026  lbu         $a0, 0x26($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764C0u;
        goto label_1764c0;
    }
    ctx->pc = 0x1764B8u;
    SET_GPR_U32(ctx, 31, 0x1764C0u);
    ctx->pc = 0x1764BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764B8u;
    // 0x1764bc: 0x92040026  lbu         $a0, 0x26($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x1764B8u, 0x1764C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764C0u;
label_1764c0:
    // 0x1764c0: 0x92060034  lbu         $a2, 0x34($s0)
    ctx->pc = 0x1764c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_1764c4:
    // 0x1764c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1764c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1764c8:
    // 0x1764c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1764c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1764cc:
    // 0x1764cc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1764d0:
    // 0x1764d0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1764d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1764d4:
    // 0x1764d4: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1764d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1764d8:
    // 0x1764d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1764d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1764dc:
    // 0x1764dc: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x1764dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_1764e0:
    // 0x1764e0: 0x9206002b  lbu         $a2, 0x2B($s0)
    ctx->pc = 0x1764e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
label_1764e4:
    // 0x1764e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1764e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1764e8:
    // 0x1764e8: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x1764e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
label_1764ec:
    // 0x1764ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1764ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1764f0:
    // 0x1764f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1764f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1764f4:
    // 0x1764f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1764f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1764f8:
    // 0x1764f8: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1764f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1764fc:
    // 0x1764fc: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_176500:
    if (ctx->pc == 0x176500u) {
        ctx->pc = 0x176504u;
        goto label_176504;
    }
    ctx->pc = 0x1764FCu;
    {
        const bool branch_taken_0x1764fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1764fc) {
            ctx->pc = 0x17652Cu;
            goto label_17652c;
        }
    }
    ctx->pc = 0x176504u;
label_176504:
    // 0x176504: 0x9205003f  lbu         $a1, 0x3F($s0)
    ctx->pc = 0x176504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
label_176508:
    // 0x176508: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_17650c:
    // 0x17650c: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x17650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_176510:
    // 0x176510: 0x8c264900  lw          $a2, 0x4900($at)
    ctx->pc = 0x176510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_176514:
    // 0x176514: 0x246324b4  addiu       $v1, $v1, 0x24B4
    ctx->pc = 0x176514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9396));
label_176518:
    // 0x176518: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x176518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_17651c:
    // 0x17651c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_176520:
    // 0x176520: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x176520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_176524:
    // 0x176524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_176528:
    // 0x176528: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x176528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_17652c:
    // 0x17652c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x17652cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176530:
    // 0x176530: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x176530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_176534:
    // 0x176534: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x176534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_176538:
    // 0x176538: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_17653c:
    if (ctx->pc == 0x17653Cu) {
        ctx->pc = 0x17653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176538u;
        // 0x17653c: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176540u;
        goto label_176540;
    }
    ctx->pc = 0x176538u;
    {
        const bool branch_taken_0x176538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x17653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176538u;
        // 0x17653c: 0x24030041  addiu       $v1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176538) {
            ctx->pc = 0x176574u;
            goto label_176574;
        }
    }
    ctx->pc = 0x176540u;
label_176540:
    // 0x176540: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_176544:
    // 0x176544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176548:
    // 0x176548: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x176548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_17654c:
    // 0x17654c: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
label_176550:
    if (ctx->pc == 0x176550u) {
        ctx->pc = 0x176554u;
        goto label_176554;
    }
    ctx->pc = 0x17654Cu;
    {
        const bool branch_taken_0x17654c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17654c) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176554u;
label_176554:
    // 0x176554: 0x90a40015  lbu         $a0, 0x15($a1)
    ctx->pc = 0x176554u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
label_176558:
    // 0x176558: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_17655c:
    if (ctx->pc == 0x17655Cu) {
        ctx->pc = 0x17655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176558u;
        // 0x17655c: 0x24a60015  addiu       $a2, $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176560u;
        goto label_176560;
    }
    ctx->pc = 0x176558u;
    {
        const bool branch_taken_0x176558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176558u;
        // 0x17655c: 0x24a60015  addiu       $a2, $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176558) {
            ctx->pc = 0x17656Cu;
            goto label_17656c;
        }
    }
    ctx->pc = 0x176560u;
label_176560:
    // 0x176560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176564:
    // 0x176564: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_176568:
    if (ctx->pc == 0x176568u) {
        ctx->pc = 0x17656Cu;
        goto label_17656c;
    }
    ctx->pc = 0x176564u;
    {
        const bool branch_taken_0x176564 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176564) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x17656Cu;
label_17656c:
    // 0x17656c: 0x1000000f  b           . + 4 + (0xF << 2)
label_176570:
    if (ctx->pc == 0x176570u) {
        ctx->pc = 0x176570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17656Cu;
        // 0x176570: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176574u;
        goto label_176574;
    }
    ctx->pc = 0x17656Cu;
    {
        const bool branch_taken_0x17656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17656Cu;
        // 0x176570: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17656c) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176574u;
label_176574:
    // 0x176574: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_176578:
    if (ctx->pc == 0x176578u) {
        ctx->pc = 0x17657Cu;
        goto label_17657c;
    }
    ctx->pc = 0x176574u;
    {
        const bool branch_taken_0x176574 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176574) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x17657Cu;
label_17657c:
    // 0x17657c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17657cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_176580:
    // 0x176580: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176584:
    // 0x176584: 0x90a40012  lbu         $a0, 0x12($a1)
    ctx->pc = 0x176584u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_176588:
    // 0x176588: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_17658c:
    if (ctx->pc == 0x17658Cu) {
        ctx->pc = 0x176590u;
        goto label_176590;
    }
    ctx->pc = 0x176588u;
    {
        const bool branch_taken_0x176588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176588) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x176590u;
label_176590:
    // 0x176590: 0x90a40015  lbu         $a0, 0x15($a1)
    ctx->pc = 0x176590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 21)));
label_176594:
    // 0x176594: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_176598:
    if (ctx->pc == 0x176598u) {
        ctx->pc = 0x176598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176594u;
        // 0x176598: 0x24a60015  addiu       $a2, $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17659Cu;
        goto label_17659c;
    }
    ctx->pc = 0x176594u;
    {
        const bool branch_taken_0x176594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x176598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176594u;
        // 0x176598: 0x24a60015  addiu       $a2, $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176594) {
            ctx->pc = 0x1765A8u;
            goto label_1765a8;
        }
    }
    ctx->pc = 0x17659Cu;
label_17659c:
    // 0x17659c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1765a0:
    // 0x1765a0: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_1765a4:
    if (ctx->pc == 0x1765A4u) {
        ctx->pc = 0x1765A8u;
        goto label_1765a8;
    }
    ctx->pc = 0x1765A0u;
    {
        const bool branch_taken_0x1765a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1765a0) {
            ctx->pc = 0x1765ACu;
            goto label_1765ac;
        }
    }
    ctx->pc = 0x1765A8u;
label_1765a8:
    // 0x1765a8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x1765a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_1765ac:
    // 0x1765ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1765acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1765b0:
    // 0x1765b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1765b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1765b4:
    // 0x1765b4: 0x3e00008  jr          $ra
label_1765b8:
    if (ctx->pc == 0x1765B8u) {
        ctx->pc = 0x1765B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765B4u;
        // 0x1765b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1765BCu;
        goto label_1765bc;
    }
    ctx->pc = 0x1765B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1765B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765B4u;
        // 0x1765b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1765B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1765BCu;
label_1765bc:
    // 0x1765bc: 0x0  nop
    ctx->pc = 0x1765bcu;
    // NOP
label_1765c0:
    // 0x1765c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1765c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1765c4:
    // 0x1765c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1765c8:
    if (ctx->pc == 0x1765C8u) {
        ctx->pc = 0x1765C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765C4u;
        // 0x1765c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1765CCu;
        goto label_1765cc;
    }
    ctx->pc = 0x1765C4u;
    {
        const bool branch_taken_0x1765c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765C4u;
        // 0x1765c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765c4) {
            ctx->pc = 0x1765D4u;
            goto label_1765d4;
        }
    }
    ctx->pc = 0x1765CCu;
label_1765cc:
    // 0x1765cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1765d0:
    if (ctx->pc == 0x1765D0u) {
        ctx->pc = 0x1765D4u;
        goto label_1765d4;
    }
    ctx->pc = 0x1765CCu;
    {
        const bool branch_taken_0x1765cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1765cc) {
            ctx->pc = 0x1765E8u;
            goto label_1765e8;
        }
    }
    ctx->pc = 0x1765D4u;
label_1765d4:
    // 0x1765d4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1765d8:
    // 0x1765d8: 0xa42051f6  sh          $zero, 0x51F6($at)
    ctx->pc = 0x1765d8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20982), (uint16_t)GPR_U32(ctx, 0));
label_1765dc:
    // 0x1765dc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1765e0:
    // 0x1765e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1765e4:
    if (ctx->pc == 0x1765E4u) {
        ctx->pc = 0x1765E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765E0u;
        // 0x1765e4: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1765E8u;
        goto label_1765e8;
    }
    ctx->pc = 0x1765E0u;
    {
        const bool branch_taken_0x1765e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765E0u;
        // 0x1765e4: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765e0) {
            ctx->pc = 0x176608u;
            goto label_176608;
        }
    }
    ctx->pc = 0x1765E8u;
label_1765e8:
    // 0x1765e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1765ec:
    if (ctx->pc == 0x1765ECu) {
        ctx->pc = 0x1765F0u;
        goto label_1765f0;
    }
    ctx->pc = 0x1765E8u;
    {
        const bool branch_taken_0x1765e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765e8) {
            ctx->pc = 0x176608u;
            goto label_176608;
        }
    }
    ctx->pc = 0x1765F0u;
label_1765f0:
    // 0x1765f0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1765f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1765f4:
    // 0x1765f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1765f8:
    // 0x1765f8: 0xa42251f4  sh          $v0, 0x51F4($at)
    ctx->pc = 0x1765f8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 2));
label_1765fc:
    // 0x1765fc: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_176600:
    // 0x176600: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176604:
    // 0x176604: 0xa42251f6  sh          $v0, 0x51F6($at)
    ctx->pc = 0x176604u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20982), (uint16_t)GPR_U32(ctx, 2));
label_176608:
    // 0x176608: 0xc058d08  jal         func_163420
label_17660c:
    if (ctx->pc == 0x17660Cu) {
        ctx->pc = 0x176610u;
        goto label_176610;
    }
    ctx->pc = 0x176608u;
    SET_GPR_U32(ctx, 31, 0x176610u);
    ctx->pc = 0x163420u;
    { ctx->pc = 0x163420; return; }
    ctx->pc = 0x176610u;
label_176610:
    // 0x176610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176614:
    // 0x176614: 0x3e00008  jr          $ra
label_176618:
    if (ctx->pc == 0x176618u) {
        ctx->pc = 0x176618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176614u;
        // 0x176618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17661Cu;
        goto label_17661c;
    }
    ctx->pc = 0x176614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176614u;
        // 0x176618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17661Cu;
label_17661c:
    // 0x17661c: 0x0  nop
    ctx->pc = 0x17661cu;
    // NOP
label_176620:
    // 0x176620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_176624:
    // 0x176624: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_176628:
    if (ctx->pc == 0x176628u) {
        ctx->pc = 0x176628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176624u;
        // 0x176628: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17662Cu;
        goto label_17662c;
    }
    ctx->pc = 0x176624u;
    {
        const bool branch_taken_0x176624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176624u;
        // 0x176628: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176624) {
            ctx->pc = 0x176644u;
            goto label_176644;
        }
    }
    ctx->pc = 0x17662Cu;
label_17662c:
    // 0x17662c: 0x28a10017  slti        $at, $a1, 0x17
    ctx->pc = 0x17662cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
label_176630:
    // 0x176630: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_176634:
    if (ctx->pc == 0x176634u) {
        ctx->pc = 0x176634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176630u;
        // 0x176634: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176638u;
        goto label_176638;
    }
    ctx->pc = 0x176630u;
    {
        const bool branch_taken_0x176630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x176634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176630u;
        // 0x176634: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176630) {
            ctx->pc = 0x176648u;
            goto label_176648;
        }
    }
    ctx->pc = 0x176638u;
label_176638:
    // 0x176638: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x176638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17663c:
    // 0x17663c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_176640:
    if (ctx->pc == 0x176640u) {
        ctx->pc = 0x176644u;
        goto label_176644;
    }
    ctx->pc = 0x17663Cu;
    {
        const bool branch_taken_0x17663c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x17663c) {
            ctx->pc = 0x176650u;
            goto label_176650;
        }
    }
    ctx->pc = 0x176644u;
label_176644:
    // 0x176644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176648:
    // 0x176648: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_17664c:
    if (ctx->pc == 0x17664Cu) {
        ctx->pc = 0x176650u;
        goto label_176650;
    }
    ctx->pc = 0x176648u;
    {
        const bool branch_taken_0x176648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176648) {
            ctx->pc = 0x176658u;
            goto label_176658;
        }
    }
    ctx->pc = 0x176650u;
label_176650:
    // 0x176650: 0xc05d99c  jal         func_176670
label_176654:
    if (ctx->pc == 0x176654u) {
        ctx->pc = 0x176658u;
        goto label_176658;
    }
    ctx->pc = 0x176650u;
    SET_GPR_U32(ctx, 31, 0x176658u);
    ctx->pc = 0x176670u;
    goto label_176670;
    ctx->pc = 0x176658u;
label_176658:
    // 0x176658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17665c:
    // 0x17665c: 0x3e00008  jr          $ra
label_176660:
    if (ctx->pc == 0x176660u) {
        ctx->pc = 0x176660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17665Cu;
        // 0x176660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176664u;
        goto label_176664;
    }
    ctx->pc = 0x17665Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17665Cu;
        // 0x176660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17665Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176664u;
label_176664:
    // 0x176664: 0x0  nop
    ctx->pc = 0x176664u;
    // NOP
label_176668:
    // 0x176668: 0x0  nop
    ctx->pc = 0x176668u;
    // NOP
label_17666c:
    // 0x17666c: 0x0  nop
    ctx->pc = 0x17666cu;
    // NOP
label_176670:
    // 0x176670: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x176670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_176674:
    // 0x176674: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x176674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_176678:
    // 0x176678: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17667c:
    // 0x17667c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_176680:
    // 0x176680: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x176680u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176684:
    // 0x176684: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_176688:
    // 0x176688: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x176688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17668c:
    // 0x17668c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_176690:
    // 0x176690: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x176690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_176694:
    // 0x176694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_176698:
    // 0x176698: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x176698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17669c:
    // 0x17669c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1766a0:
    // 0x1766a0: 0x241100f0  addiu       $s1, $zero, 0xF0
    ctx->pc = 0x1766a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_1766a4:
    // 0x1766a4: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1766a8:
    // 0x1766a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1766ac:
    // 0x1766ac: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1766acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1766b0:
    // 0x1766b0: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x1766b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_1766b4:
    // 0x1766b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1766b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1766b8:
    // 0x1766b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1766b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1766bc:
    // 0x1766bc: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1766bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1766c0:
    // 0x1766c0: 0x246406bc  addiu       $a0, $v1, 0x6BC
    ctx->pc = 0x1766c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1724));
label_1766c4:
    // 0x1766c4: 0x244506bc  addiu       $a1, $v0, 0x6BC
    ctx->pc = 0x1766c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1724));
label_1766c8:
    // 0x1766c8: 0xc08e93e  jal         func_23A4F8
label_1766cc:
    if (ctx->pc == 0x1766CCu) {
        ctx->pc = 0x1766CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766C8u;
        // 0x1766cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1766D0u;
        goto label_1766d0;
    }
    ctx->pc = 0x1766C8u;
    SET_GPR_U32(ctx, 31, 0x1766D0u);
    ctx->pc = 0x1766CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766C8u;
    // 0x1766cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1766D0u;
label_1766d0:
    // 0x1766d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1766d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1766d4:
    // 0x1766d4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
label_1766d8:
    if (ctx->pc == 0x1766D8u) {
        ctx->pc = 0x1766D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766D4u;
        // 0x1766d8: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1766DCu;
        goto label_1766dc;
    }
    ctx->pc = 0x1766D4u;
    {
        const bool branch_taken_0x1766d4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1766D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766D4u;
        // 0x1766d8: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766d4) {
            ctx->pc = 0x1766A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1766a8;
        }
    }
    ctx->pc = 0x1766DCu;
label_1766dc:
    // 0x1766dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1766dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1766e0:
    // 0x1766e0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1766e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1766e4:
    // 0x1766e4: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x1766e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_1766e8:
    // 0x1766e8: 0x24a550ec  addiu       $a1, $a1, 0x50EC
    ctx->pc = 0x1766e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20716));
label_1766ec:
    // 0x1766ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1766ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1766f0:
    // 0x1766f0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x1766f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_1766f4:
    // 0x1766f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1766f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1766f8:
    // 0x1766f8: 0xa0b5000a  sb          $s5, 0xA($a1)
    ctx->pc = 0x1766f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 21));
label_1766fc:
    // 0x1766fc: 0xa0b4000b  sb          $s4, 0xB($a1)
    ctx->pc = 0x1766fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 20));
label_176700:
    // 0x176700: 0xa4b3000c  sh          $s3, 0xC($a1)
    ctx->pc = 0x176700u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 19));
label_176704:
    // 0x176704: 0xa4b2000e  sh          $s2, 0xE($a1)
    ctx->pc = 0x176704u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 18));
label_176708:
    // 0x176708: 0x842451f4  lh          $a0, 0x51F4($at)
    ctx->pc = 0x176708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20980)));
label_17670c:
    // 0x17670c: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x17670cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_176710:
    // 0x176710: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176714:
    // 0x176714: 0x842451f6  lh          $a0, 0x51F6($at)
    ctx->pc = 0x176714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20982)));
label_176718:
    // 0x176718: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x176718u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
label_17671c:
    // 0x17671c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x17671cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176720:
    // 0x176720: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x176720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
label_176724:
    // 0x176724: 0xa42051f6  sh          $zero, 0x51F6($at)
    ctx->pc = 0x176724u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20982), (uint16_t)GPR_U32(ctx, 0));
label_176728:
    // 0x176728: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_17672c:
    // 0x17672c: 0xa42051f4  sh          $zero, 0x51F4($at)
    ctx->pc = 0x17672cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
label_176730:
    // 0x176730: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x176730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_176734:
    // 0x176734: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x176734u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_176738:
    // 0x176738: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x176738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17673c:
    // 0x17673c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17673cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_176740:
    // 0x176740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_176744:
    // 0x176744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_176748:
    // 0x176748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17674c:
    // 0x17674c: 0x3e00008  jr          $ra
label_176750:
    if (ctx->pc == 0x176750u) {
        ctx->pc = 0x176750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17674Cu;
        // 0x176750: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176754u;
        goto label_176754;
    }
    ctx->pc = 0x17674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17674Cu;
        // 0x176750: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17674Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176754u;
label_176754:
    // 0x176754: 0x0  nop
    ctx->pc = 0x176754u;
    // NOP
label_176758:
    // 0x176758: 0x0  nop
    ctx->pc = 0x176758u;
    // NOP
label_17675c:
    // 0x17675c: 0x0  nop
    ctx->pc = 0x17675cu;
    // NOP
label_176760:
    // 0x176760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176764:
    // 0x176764: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x176764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_176768:
    // 0x176768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17676c:
    // 0x17676c: 0x10a30050  beq         $a1, $v1, . + 4 + (0x50 << 2)
label_176770:
    if (ctx->pc == 0x176770u) {
        ctx->pc = 0x176770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17676Cu;
        // 0x176770: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176774u;
        goto label_176774;
    }
    ctx->pc = 0x17676Cu;
    {
        const bool branch_taken_0x17676c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x176770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17676Cu;
        // 0x176770: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17676c) {
            ctx->pc = 0x1768B0u;
            goto label_1768b0;
        }
    }
    ctx->pc = 0x176774u;
label_176774:
    // 0x176774: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x176774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176778:
    // 0x176778: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
label_17677c:
    if (ctx->pc == 0x17677Cu) {
        ctx->pc = 0x17677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176778u;
        // 0x17677c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176780u;
        goto label_176780;
    }
    ctx->pc = 0x176778u;
    {
        const bool branch_taken_0x176778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176778u;
        // 0x17677c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176778) {
            ctx->pc = 0x17684Cu;
            goto label_17684c;
        }
    }
    ctx->pc = 0x176780u;
label_176780:
    // 0x176780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176784:
    // 0x176784: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_176788:
    if (ctx->pc == 0x176788u) {
        ctx->pc = 0x17678Cu;
        goto label_17678c;
    }
    ctx->pc = 0x176784u;
    {
        const bool branch_taken_0x176784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x176784) {
            ctx->pc = 0x1767B4u;
            goto label_1767b4;
        }
    }
    ctx->pc = 0x17678Cu;
label_17678c:
    // 0x17678c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_176790:
    if (ctx->pc == 0x176790u) {
        ctx->pc = 0x176794u;
        goto label_176794;
    }
    ctx->pc = 0x17678Cu;
    {
        const bool branch_taken_0x17678c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17678c) {
            ctx->pc = 0x17679Cu;
            goto label_17679c;
        }
    }
    ctx->pc = 0x176794u;
label_176794:
    // 0x176794: 0x1000006e  b           . + 4 + (0x6E << 2)
label_176798:
    if (ctx->pc == 0x176798u) {
        ctx->pc = 0x176798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176794u;
        // 0x176798: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17679Cu;
        goto label_17679c;
    }
    ctx->pc = 0x176794u;
    {
        const bool branch_taken_0x176794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176794u;
        // 0x176798: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176794) {
            ctx->pc = 0x176950u;
            goto label_176950;
        }
    }
    ctx->pc = 0x17679Cu;
label_17679c:
    // 0x17679c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17679cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1767a0:
    // 0x1767a0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1767a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1767a4:
    // 0x1767a4: 0xc072ecc  jal         func_1CBB30
label_1767a8:
    if (ctx->pc == 0x1767A8u) {
        ctx->pc = 0x1767A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767A4u;
        // 0x1767a8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767ACu;
        goto label_1767ac;
    }
    ctx->pc = 0x1767A4u;
    SET_GPR_U32(ctx, 31, 0x1767ACu);
    ctx->pc = 0x1767A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767A4u;
    // 0x1767a8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBB30u;
    { ctx->pc = 0x1cbb30; return; }
    ctx->pc = 0x1767ACu;
label_1767ac:
    // 0x1767ac: 0x10000067  b           . + 4 + (0x67 << 2)
label_1767b0:
    if (ctx->pc == 0x1767B0u) {
        ctx->pc = 0x1767B4u;
        goto label_1767b4;
    }
    ctx->pc = 0x1767ACu;
    {
        const bool branch_taken_0x1767ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767ac) {
            ctx->pc = 0x17694Cu;
            goto label_17694c;
        }
    }
    ctx->pc = 0x1767B4u;
label_1767b4:
    // 0x1767b4: 0x24020195  addiu       $v0, $zero, 0x195
    ctx->pc = 0x1767b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_1767b8:
    // 0x1767b8: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
label_1767bc:
    if (ctx->pc == 0x1767BCu) {
        ctx->pc = 0x1767BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767B8u;
        // 0x1767bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767C0u;
        goto label_1767c0;
    }
    ctx->pc = 0x1767B8u;
    {
        const bool branch_taken_0x1767b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1767BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767B8u;
        // 0x1767bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767b8) {
            ctx->pc = 0x1767E4u;
            goto label_1767e4;
        }
    }
    ctx->pc = 0x1767C0u;
label_1767c0:
    // 0x1767c0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_1767c4:
    // 0x1767c4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1767c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1767c8:
    // 0x1767c8: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1767c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
label_1767cc:
    // 0x1767cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1767ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1767d0:
    // 0x1767d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1767d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1767d4:
    // 0x1767d4: 0xc08f20e  jal         func_23C838
label_1767d8:
    if (ctx->pc == 0x1767D8u) {
        ctx->pc = 0x1767D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767D4u;
        // 0x1767d8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767DCu;
        goto label_1767dc;
    }
    ctx->pc = 0x1767D4u;
    SET_GPR_U32(ctx, 31, 0x1767DCu);
    ctx->pc = 0x1767D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1767D4u;
    // 0x1767d8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1767DCu;
label_1767dc:
    // 0x1767dc: 0x10000019  b           . + 4 + (0x19 << 2)
label_1767e0:
    if (ctx->pc == 0x1767E0u) {
        ctx->pc = 0x1767E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767DCu;
        // 0x1767e0: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1767E4u;
        goto label_1767e4;
    }
    ctx->pc = 0x1767DCu;
    {
        const bool branch_taken_0x1767dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1767E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1767DCu;
        // 0x1767e0: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1767dc) {
            ctx->pc = 0x176844u;
            goto label_176844;
        }
    }
    ctx->pc = 0x1767E4u;
label_1767e4:
    // 0x1767e4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1767e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1767e8:
    // 0x1767e8: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
label_1767ec:
    // 0x1767ec: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1767ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1767f0:
    // 0x1767f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1767f4:
    // 0x1767f4: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1767f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1767f8:
    // 0x1767f8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1767f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1767fc:
    // 0x1767fc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1767fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_176800:
    // 0x176800: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_176804:
    // 0x176804: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x176804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_176808:
    // 0x176808: 0x24e72930  addiu       $a3, $a3, 0x2930
    ctx->pc = 0x176808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10544));
label_17680c:
    // 0x17680c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_176810:
    // 0x176810: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x176810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_176814:
    // 0x176814: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x176814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_176818:
    // 0x176818: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_17681c:
    // 0x17681c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_176820:
    // 0x176820: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_176824:
    // 0x176824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_176828:
    // 0x176828: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x176828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_17682c:
    // 0x17682c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17682cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_176830:
    // 0x176830: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_176834:
    // 0x176834: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x176834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_176838:
    // 0x176838: 0xc08f20e  jal         func_23C838
label_17683c:
    if (ctx->pc == 0x17683Cu) {
        ctx->pc = 0x17683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176838u;
        // 0x17683c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176840u;
        goto label_176840;
    }
    ctx->pc = 0x176838u;
    SET_GPR_U32(ctx, 31, 0x176840u);
    ctx->pc = 0x17683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176838u;
    // 0x17683c: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x176840u;
label_176840:
    // 0x176840: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_176844:
    // 0x176844: 0x10000041  b           . + 4 + (0x41 << 2)
label_176848:
    if (ctx->pc == 0x176848u) {
        ctx->pc = 0x17684Cu;
        goto label_17684c;
    }
    ctx->pc = 0x176844u;
    {
        const bool branch_taken_0x176844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176844) {
            ctx->pc = 0x17694Cu;
            goto label_17694c;
        }
    }
    ctx->pc = 0x17684Cu;
label_17684c:
    // 0x17684c: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x17684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
label_176850:
    // 0x176850: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x176850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_176854:
    // 0x176854: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_176858:
    // 0x176858: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x176858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17685c:
    // 0x17685c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_176860:
    // 0x176860: 0x478023  subu        $s0, $v0, $a3
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_176864:
    // 0x176864: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
label_176868:
    // 0x176868: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x176868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_17686c:
    // 0x17686c: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_176870:
    // 0x176870: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x176870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_176874:
    // 0x176874: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x176874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_176878:
    // 0x176878: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x176878u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_17687c:
    // 0x17687c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_176880:
    // 0x176880: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x176880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
label_176884:
    // 0x176884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_176888:
    // 0x176888: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x176888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17688c:
    // 0x17688c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x17688cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_176890:
    // 0x176890: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x176890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_176894:
    // 0x176894: 0xc08f20e  jal         func_23C838
label_176898:
    if (ctx->pc == 0x176898u) {
        ctx->pc = 0x176898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176894u;
        // 0x176898: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17689Cu;
        goto label_17689c;
    }
    ctx->pc = 0x176894u;
    SET_GPR_U32(ctx, 31, 0x17689Cu);
    ctx->pc = 0x176898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176894u;
    // 0x176898: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x17689Cu;
label_17689c:
    // 0x17689c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x17689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1768a0:
    // 0x1768a0: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x1768a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
label_1768a4:
    // 0x1768a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1768a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1768a8:
    // 0x1768a8: 0x10000028  b           . + 4 + (0x28 << 2)
label_1768ac:
    if (ctx->pc == 0x1768ACu) {
        ctx->pc = 0x1768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768A8u;
        // 0x1768ac: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1768B0u;
        goto label_1768b0;
    }
    ctx->pc = 0x1768A8u;
    {
        const bool branch_taken_0x1768a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1768ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1768A8u;
        // 0x1768ac: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1768a8) {
            ctx->pc = 0x17694Cu;
            goto label_17694c;
        }
    }
    ctx->pc = 0x1768B0u;
label_1768b0:
    // 0x1768b0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1768b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1768b4:
    // 0x1768b4: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x1768b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
label_1768b8:
    // 0x1768b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1768b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1768bc:
    // 0x1768bc: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1768bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1768c0:
    // 0x1768c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1768c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1768c4:
    // 0x1768c4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1768c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1768c8:
    // 0x1768c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1768cc:
    // 0x1768cc: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1768d0:
    // 0x1768d0: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1768d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
label_1768d4:
    // 0x1768d4: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1768d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
label_1768d8:
    // 0x1768d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1768d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1768dc:
    // 0x1768dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1768dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1768e0:
    // 0x1768e0: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1768e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
label_1768e4:
    // 0x1768e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1768e8:
    // 0x1768e8: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1768e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1768ec:
    // 0x1768ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1768ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_1768f0:
    // 0x1768f0: 0x24634670  addiu       $v1, $v1, 0x4670
    ctx->pc = 0x1768f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18032));
label_1768f4:
    // 0x1768f4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1768f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1768f8:
    // 0x1768f8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1768f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1768fc:
    // 0x1768fc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1768fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_176900:
    // 0x176900: 0x739c0  sll         $a3, $a3, 7
    ctx->pc = 0x176900u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_176904:
    // 0x176904: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x176904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_176908:
    // 0x176908: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x176908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_17690c:
    // 0x17690c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x17690cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_176910:
    // 0x176910: 0x24c20000  addiu       $v0, $a2, 0x0
    ctx->pc = 0x176910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_176914:
    // 0x176914: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x176914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_176918:
    // 0x176918: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x176918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_17691c:
    // 0x17691c: 0x4a8023  subu        $s0, $v0, $t2
    ctx->pc = 0x17691cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_176920:
    // 0x176920: 0x1301021  addu        $v0, $t1, $s0
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_176924:
    // 0x176924: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_176928:
    // 0x176928: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17692c:
    // 0x17692c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x17692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_176930:
    // 0x176930: 0xc08f20e  jal         func_23C838
label_176934:
    if (ctx->pc == 0x176934u) {
        ctx->pc = 0x176934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176930u;
        // 0x176934: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176938u;
        goto label_176938;
    }
    ctx->pc = 0x176930u;
    SET_GPR_U32(ctx, 31, 0x176938u);
    ctx->pc = 0x176934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176930u;
    // 0x176934: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x176938u;
label_176938:
    // 0x176938: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_17693c:
    // 0x17693c: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
label_176940:
    // 0x176940: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x176940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_176944:
    // 0x176944: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_176948:
    // 0x176948: 0x0  nop
    ctx->pc = 0x176948u;
    // NOP
label_17694c:
    // 0x17694c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17694cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176950:
    // 0x176950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_176954:
    // 0x176954: 0x3e00008  jr          $ra
label_176958:
    if (ctx->pc == 0x176958u) {
        ctx->pc = 0x176958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176954u;
        // 0x176958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17695Cu;
        goto label_17695c;
    }
    ctx->pc = 0x176954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176954u;
        // 0x176958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17695Cu;
label_17695c:
    // 0x17695c: 0x0  nop
    ctx->pc = 0x17695cu;
    // NOP
label_176960:
    // 0x176960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_176964:
    // 0x176964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176968:
    // 0x176968: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x176968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17696c:
    // 0x17696c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x17696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_176970:
    // 0x176970: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_176974:
    // 0x176974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_176978:
    // 0x176978: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x176978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17697c:
    // 0x17697c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17697cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_176980:
    // 0x176980: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x176980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_176984:
    // 0x176984: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x176984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_176988:
    // 0x176988: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_17698c:
    if (ctx->pc == 0x17698Cu) {
        ctx->pc = 0x17698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176988u;
        // 0x17698c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176990u;
        goto label_176990;
    }
    ctx->pc = 0x176988u;
    {
        const bool branch_taken_0x176988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176988u;
        // 0x17698c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176988) {
            ctx->pc = 0x1769A0u;
            goto label_1769a0;
        }
    }
    ctx->pc = 0x176990u;
label_176990:
    // 0x176990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176994:
    // 0x176994: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_176998:
    if (ctx->pc == 0x176998u) {
        ctx->pc = 0x17699Cu;
        goto label_17699c;
    }
    ctx->pc = 0x176994u;
    {
        const bool branch_taken_0x176994 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x176994) {
            ctx->pc = 0x1769A0u;
            goto label_1769a0;
        }
    }
    ctx->pc = 0x17699Cu;
label_17699c:
    // 0x17699c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x17699cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1769a0:
    // 0x1769a0: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x1769a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_1769a4:
    // 0x1769a4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x1769a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1769a8:
    // 0x1769a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1769ac:
    if (ctx->pc == 0x1769ACu) {
        ctx->pc = 0x1769B0u;
        goto label_1769b0;
    }
    ctx->pc = 0x1769A8u;
    {
        const bool branch_taken_0x1769a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1769a8) {
            ctx->pc = 0x1769B8u;
            goto label_1769b8;
        }
    }
    ctx->pc = 0x1769B0u;
label_1769b0:
    // 0x1769b0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1769b4:
    if (ctx->pc == 0x1769B4u) {
        ctx->pc = 0x1769B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769B0u;
        // 0x1769b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1769B8u;
        goto label_1769b8;
    }
    ctx->pc = 0x1769B0u;
    {
        const bool branch_taken_0x1769b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1769B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769B0u;
        // 0x1769b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769b0) {
            ctx->pc = 0x1769E0u;
            goto label_1769e0;
        }
    }
    ctx->pc = 0x1769B8u;
label_1769b8:
    // 0x1769b8: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x1769b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1769bc:
    // 0x1769bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1769bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1769c0:
    // 0x1769c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1769c4:
    // 0x1769c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1769c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1769c8:
    // 0x1769c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1769c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1769cc:
    // 0x1769cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1769ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1769d0:
    // 0x1769d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1769d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1769d4:
    // 0x1769d4: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_1769d8:
    if (ctx->pc == 0x1769D8u) {
        ctx->pc = 0x1769DCu;
        goto label_1769dc;
    }
    ctx->pc = 0x1769D4u;
    {
        const bool branch_taken_0x1769d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1769d4) {
            ctx->pc = 0x1769E0u;
            goto label_1769e0;
        }
    }
    ctx->pc = 0x1769DCu;
label_1769dc:
    // 0x1769dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1769dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1769e0:
    // 0x1769e0: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x1769e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
label_1769e4:
    // 0x1769e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1769e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1769e8:
    // 0x1769e8: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x1769e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1769ec:
    // 0x1769ec: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
label_1769f0:
    if (ctx->pc == 0x1769F0u) {
        ctx->pc = 0x1769F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769ECu;
        // 0x1769f0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1769F4u;
        goto label_1769f4;
    }
    ctx->pc = 0x1769ECu;
    {
        const bool branch_taken_0x1769ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1769F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769ECu;
        // 0x1769f0: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1769ec) {
            ctx->pc = 0x176AECu;
            goto label_176aec;
        }
    }
    ctx->pc = 0x1769F4u;
label_1769f4:
    // 0x1769f4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1769f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1769f8:
    // 0x1769f8: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x1769f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
label_1769fc:
    // 0x1769fc: 0x34435000  ori         $v1, $v0, 0x5000
    ctx->pc = 0x1769fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_176a00:
    // 0x176a00: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x176a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_176a04:
    // 0x176a04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x176a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_176a08:
    // 0x176a08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x176a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_176a0c:
    // 0x176a0c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x176a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_176a10:
    // 0x176a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176a14:
    // 0x176a14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x176a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176a18:
    // 0x176a18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x176a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_176a1c:
    // 0x176a1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x176a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_176a20:
    // 0x176a20: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x176a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_176a24:
    // 0x176a24: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x176a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_176a28:
    // 0x176a28: 0xc05f3d0  jal         func_17CF40
label_176a2c:
    if (ctx->pc == 0x176A2Cu) {
        ctx->pc = 0x176A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176A28u;
        // 0x176a2c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176A30u;
        goto label_176a30;
    }
    ctx->pc = 0x176A28u;
    SET_GPR_U32(ctx, 31, 0x176A30u);
    ctx->pc = 0x176A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176A28u;
    // 0x176a2c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    { ctx->pc = 0x17cf40; return; }
    ctx->pc = 0x176A30u;
label_176a30:
    // 0x176a30: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x176a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_176a34:
    // 0x176a34: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x176a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_176a38:
    // 0x176a38: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x176a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176a3c:
    // 0x176a3c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x176a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_176a40:
    // 0x176a40: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x176a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_176a44:
    // 0x176a44: 0x24a53b82  addiu       $a1, $a1, 0x3B82
    ctx->pc = 0x176a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15234));
label_176a48:
    // 0x176a48: 0x24633b84  addiu       $v1, $v1, 0x3B84
    ctx->pc = 0x176a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15236));
label_176a4c:
    // 0x176a4c: 0x24423b8d  addiu       $v0, $v0, 0x3B8D
    ctx->pc = 0x176a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15245));
label_176a50:
    // 0x176a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176a54:
    // 0x176a54: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x176a54u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_176a58:
    // 0x176a58: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x176a58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_176a5c:
    // 0x176a5c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x176a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_176a60:
    // 0x176a60: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x176a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_176a64:
    // 0x176a64: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x176a64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_176a68:
    // 0x176a68: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x176a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_176a6c:
    // 0x176a6c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x176a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176a70:
    // 0x176a70: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x176a70u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_176a74:
    // 0x176a74: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x176a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_176a78:
    // 0x176a78: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x176a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_176a7c:
    // 0x176a7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x176a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_176a80:
    // 0x176a80: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x176a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_176a84:
    // 0x176a84: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x176a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_176a88:
    // 0x176a88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176a8c:
    // 0x176a8c: 0x9465000a  lhu         $a1, 0xA($v1)
    ctx->pc = 0x176a8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_176a90:
    // 0x176a90: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x176a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_176a94:
    // 0x176a94: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x176a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_176a98:
    // 0x176a98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_176a9c:
    // 0x176a9c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_176aa0:
    // 0x176aa0: 0xc043f7c  jal         func_10FDF0
label_176aa4:
    if (ctx->pc == 0x176AA4u) {
        ctx->pc = 0x176AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AA0u;
        // 0x176aa4: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AA8u;
        goto label_176aa8;
    }
    ctx->pc = 0x176AA0u;
    SET_GPR_U32(ctx, 31, 0x176AA8u);
    ctx->pc = 0x176AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AA0u;
    // 0x176aa4: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDF0u, 0x176AA0u, 0x176AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AA8u;
label_176aa8:
    // 0x176aa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x176aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_176aac:
    // 0x176aac: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x176aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_176ab0:
    // 0x176ab0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x176ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_176ab4:
    // 0x176ab4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x176ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176ab8:
    // 0x176ab8: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x176ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_176abc:
    // 0x176abc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_176ac0:
    if (ctx->pc == 0x176AC0u) {
        ctx->pc = 0x176AC4u;
        goto label_176ac4;
    }
    ctx->pc = 0x176ABCu;
    {
        const bool branch_taken_0x176abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x176abc) {
            ctx->pc = 0x176AD0u;
            goto label_176ad0;
        }
    }
    ctx->pc = 0x176AC4u;
label_176ac4:
    // 0x176ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176ac8:
    // 0x176ac8: 0x10000021  b           . + 4 + (0x21 << 2)
label_176acc:
    if (ctx->pc == 0x176ACCu) {
        ctx->pc = 0x176ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AC8u;
        // 0x176acc: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AD0u;
        goto label_176ad0;
    }
    ctx->pc = 0x176AC8u;
    {
        const bool branch_taken_0x176ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AC8u;
        // 0x176acc: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ac8) {
            ctx->pc = 0x176B50u;
            goto label_176b50;
        }
    }
    ctx->pc = 0x176AD0u;
label_176ad0:
    // 0x176ad0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x176ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_176ad4:
    // 0x176ad4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_176ad8:
    if (ctx->pc == 0x176AD8u) {
        ctx->pc = 0x176AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AD4u;
        // 0x176ad8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176ADCu;
        goto label_176adc;
    }
    ctx->pc = 0x176AD4u;
    {
        const bool branch_taken_0x176ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x176AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AD4u;
        // 0x176ad8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ad4) {
            ctx->pc = 0x176AE4u;
            goto label_176ae4;
        }
    }
    ctx->pc = 0x176ADCu;
label_176adc:
    // 0x176adc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_176ae0:
    if (ctx->pc == 0x176AE0u) {
        ctx->pc = 0x176AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176ADCu;
        // 0x176ae0: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AE4u;
        goto label_176ae4;
    }
    ctx->pc = 0x176ADCu;
    {
        const bool branch_taken_0x176adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176ADCu;
        // 0x176ae0: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176adc) {
            ctx->pc = 0x176B50u;
            goto label_176b50;
        }
    }
    ctx->pc = 0x176AE4u;
label_176ae4:
    // 0x176ae4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_176ae8:
    if (ctx->pc == 0x176AE8u) {
        ctx->pc = 0x176AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AE4u;
        // 0x176ae8: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AECu;
        goto label_176aec;
    }
    ctx->pc = 0x176AE4u;
    {
        const bool branch_taken_0x176ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AE4u;
        // 0x176ae8: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176ae4) {
            ctx->pc = 0x176B50u;
            goto label_176b50;
        }
    }
    ctx->pc = 0x176AECu;
label_176aec:
    // 0x176aec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x176aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_176af0:
    // 0x176af0: 0xc066e26  jal         func_19B898
label_176af4:
    if (ctx->pc == 0x176AF4u) {
        ctx->pc = 0x176AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AF0u;
        // 0x176af4: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AF8u;
        goto label_176af8;
    }
    ctx->pc = 0x176AF0u;
    SET_GPR_U32(ctx, 31, 0x176AF8u);
    ctx->pc = 0x176AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AF0u;
    // 0x176af4: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x176AF8u;
label_176af8:
    // 0x176af8: 0x92030242  lbu         $v1, 0x242($s0)
    ctx->pc = 0x176af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 578)));
label_176afc:
    // 0x176afc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x176afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_176b00:
    // 0x176b00: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x176b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_176b04:
    // 0x176b04: 0x92030244  lbu         $v1, 0x244($s0)
    ctx->pc = 0x176b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 580)));
label_176b08:
    // 0x176b08: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x176b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_176b0c:
    // 0x176b0c: 0x92030247  lbu         $v1, 0x247($s0)
    ctx->pc = 0x176b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 583)));
label_176b10:
    // 0x176b10: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x176b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_176b14:
    // 0x176b14: 0x92030245  lbu         $v1, 0x245($s0)
    ctx->pc = 0x176b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 581)));
label_176b18:
    // 0x176b18: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x176b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_176b1c:
    // 0x176b1c: 0x92030231  lbu         $v1, 0x231($s0)
    ctx->pc = 0x176b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 561)));
label_176b20:
    // 0x176b20: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_176b24:
    if (ctx->pc == 0x176B24u) {
        ctx->pc = 0x176B28u;
        goto label_176b28;
    }
    ctx->pc = 0x176B20u;
    {
        const bool branch_taken_0x176b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x176b20) {
            ctx->pc = 0x176B4Cu;
            goto label_176b4c;
        }
    }
    ctx->pc = 0x176B28u;
label_176b28:
    // 0x176b28: 0x92020246  lbu         $v0, 0x246($s0)
    ctx->pc = 0x176b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 582)));
label_176b2c:
    // 0x176b2c: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x176b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_176b30:
    // 0x176b30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_176b34:
    if (ctx->pc == 0x176B34u) {
        ctx->pc = 0x176B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B30u;
        // 0x176b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B38u;
        goto label_176b38;
    }
    ctx->pc = 0x176B30u;
    {
        const bool branch_taken_0x176b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B30u;
        // 0x176b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b30) {
            ctx->pc = 0x176B44u;
            goto label_176b44;
        }
    }
    ctx->pc = 0x176B38u;
label_176b38:
    // 0x176b38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x176b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_176b3c:
    // 0x176b3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_176b40:
    if (ctx->pc == 0x176B40u) {
        ctx->pc = 0x176B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B3Cu;
        // 0x176b40: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B44u;
        goto label_176b44;
    }
    ctx->pc = 0x176B3Cu;
    {
        const bool branch_taken_0x176b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B3Cu;
        // 0x176b40: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b3c) {
            ctx->pc = 0x176B50u;
            goto label_176b50;
        }
    }
    ctx->pc = 0x176B44u;
label_176b44:
    // 0x176b44: 0x10000002  b           . + 4 + (0x2 << 2)
label_176b48:
    if (ctx->pc == 0x176B48u) {
        ctx->pc = 0x176B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B44u;
        // 0x176b48: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B4Cu;
        goto label_176b4c;
    }
    ctx->pc = 0x176B44u;
    {
        const bool branch_taken_0x176b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B44u;
        // 0x176b48: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b44) {
            ctx->pc = 0x176B50u;
            goto label_176b50;
        }
    }
    ctx->pc = 0x176B4Cu;
label_176b4c:
    // 0x176b4c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x176b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_176b50:
    // 0x176b50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x176b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_176b54:
    // 0x176b54: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
label_176b58:
    if (ctx->pc == 0x176B58u) {
        ctx->pc = 0x176B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B54u;
        // 0x176b58: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B5Cu;
        goto label_176b5c;
    }
    ctx->pc = 0x176B54u;
    {
        const bool branch_taken_0x176b54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x176B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B54u;
        // 0x176b58: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b54) {
            ctx->pc = 0x176B68u;
            goto label_176b68;
        }
    }
    ctx->pc = 0x176B5Cu;
label_176b5c:
    // 0x176b5c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x176b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_176b60:
    // 0x176b60: 0x10000002  b           . + 4 + (0x2 << 2)
label_176b64:
    if (ctx->pc == 0x176B64u) {
        ctx->pc = 0x176B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B60u;
        // 0x176b64: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B68u;
        goto label_176b68;
    }
    ctx->pc = 0x176B60u;
    {
        const bool branch_taken_0x176b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B60u;
        // 0x176b64: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176b60) {
            ctx->pc = 0x176B6Cu;
            goto label_176b6c;
        }
    }
    ctx->pc = 0x176B68u;
label_176b68:
    // 0x176b68: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x176b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_176b6c:
    // 0x176b6c: 0xc04d848  jal         func_136120
label_176b70:
    if (ctx->pc == 0x176B70u) {
        ctx->pc = 0x176B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B6Cu;
        // 0x176b70: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B74u;
        goto label_176b74;
    }
    ctx->pc = 0x176B6Cu;
    SET_GPR_U32(ctx, 31, 0x176B74u);
    ctx->pc = 0x176B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176B6Cu;
    // 0x176b70: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136120u, 0x176B6Cu, 0x176B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176B74u;
label_176b74:
    // 0x176b74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x176b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_176b78:
    // 0x176b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_176b7c:
    // 0x176b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_176b80:
    // 0x176b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_176b84:
    // 0x176b84: 0x3e00008  jr          $ra
label_176b88:
    if (ctx->pc == 0x176B88u) {
        ctx->pc = 0x176B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B84u;
        // 0x176b88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B8Cu;
        goto label_176b8c;
    }
    ctx->pc = 0x176B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B84u;
        // 0x176b88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176B8Cu;
label_176b8c:
    // 0x176b8c: 0x0  nop
    ctx->pc = 0x176b8cu;
    // NOP
label_176b90:
    // 0x176b90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x176b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_176b94:
    // 0x176b94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176b98:
    // 0x176b98: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x176b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_176b9c:
    // 0x176b9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_176ba0:
    // 0x176ba0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x176ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_176ba4:
    // 0x176ba4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_176ba8:
    // 0x176ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_176bac:
    // 0x176bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_176bb0:
    // 0x176bb0: 0xc0896fc  jal         func_225BF0
label_176bb4:
    if (ctx->pc == 0x176BB4u) {
        ctx->pc = 0x176BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BB0u;
        // 0x176bb4: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176BB8u;
        goto label_176bb8;
    }
    ctx->pc = 0x176BB0u;
    SET_GPR_U32(ctx, 31, 0x176BB8u);
    ctx->pc = 0x176BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BB0u;
    // 0x176bb4: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225BF0u;
    { ctx->pc = 0x225bf0; return; }
    ctx->pc = 0x176BB8u;
label_176bb8:
    // 0x176bb8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176bbc:
    // 0x176bbc: 0xc089fcc  jal         func_227F30
label_176bc0:
    if (ctx->pc == 0x176BC0u) {
        ctx->pc = 0x176BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BBCu;
        // 0x176bc0: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176BC4u;
        goto label_176bc4;
    }
    ctx->pc = 0x176BBCu;
    SET_GPR_U32(ctx, 31, 0x176BC4u);
    ctx->pc = 0x176BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BBCu;
    // 0x176bc0: 0x9024490c  lbu         $a0, 0x490C($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F30u;
    { ctx->pc = 0x227f30; return; }
    ctx->pc = 0x176BC4u;
label_176bc4:
    // 0x176bc4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176bc8:
    // 0x176bc8: 0xc05dc20  jal         func_177080
label_176bcc:
    if (ctx->pc == 0x176BCCu) {
        ctx->pc = 0x176BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BC8u;
        // 0x176bcc: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176BD0u;
        goto label_176bd0;
    }
    ctx->pc = 0x176BC8u;
    SET_GPR_U32(ctx, 31, 0x176BD0u);
    ctx->pc = 0x176BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176BC8u;
    // 0x176bcc: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177080u;
    { ctx->pc = 0x177080; return; }
    ctx->pc = 0x176BD0u;
label_176bd0:
    // 0x176bd0: 0xc072fac  jal         func_1CBEB0
label_176bd4:
    if (ctx->pc == 0x176BD4u) {
        ctx->pc = 0x176BD8u;
        goto label_176bd8;
    }
    ctx->pc = 0x176BD0u;
    SET_GPR_U32(ctx, 31, 0x176BD8u);
    ctx->pc = 0x1CBEB0u;
    { ctx->pc = 0x1cbeb0; return; }
    ctx->pc = 0x176BD8u;
label_176bd8:
    // 0x176bd8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176bdc:
    // 0x176bdc: 0x90224af0  lbu         $v0, 0x4AF0($at)
    ctx->pc = 0x176bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19184)));
label_176be0:
    // 0x176be0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_176be4:
    if (ctx->pc == 0x176BE4u) {
        ctx->pc = 0x176BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BE0u;
        // 0x176be4: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176BE8u;
        goto label_176be8;
    }
    ctx->pc = 0x176BE0u;
    {
        const bool branch_taken_0x176be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BE0u;
        // 0x176be4: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176be0) {
            ctx->pc = 0x176BF8u;
            goto label_176bf8;
        }
    }
    ctx->pc = 0x176BE8u;
label_176be8:
    // 0x176be8: 0xc090060  jal         func_240180
label_176bec:
    if (ctx->pc == 0x176BECu) {
        ctx->pc = 0x176BF0u;
        goto label_176bf0;
    }
    ctx->pc = 0x176BE8u;
    SET_GPR_U32(ctx, 31, 0x176BF0u);
    ctx->pc = 0x240180u;
    { ctx->pc = 0x240180; return; }
    ctx->pc = 0x176BF0u;
label_176bf0:
    // 0x176bf0: 0x10000095  b           . + 4 + (0x95 << 2)
label_176bf4:
    if (ctx->pc == 0x176BF4u) {
        ctx->pc = 0x176BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BF0u;
        // 0x176bf4: 0xaf808748  sw          $zero, -0x78B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176BF8u;
        goto label_176bf8;
    }
    ctx->pc = 0x176BF0u;
    {
        const bool branch_taken_0x176bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176BF0u;
        // 0x176bf4: 0xaf808748  sw          $zero, -0x78B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176bf0) {
            ctx->pc = 0x176E48u;
            { ctx->pc = 0x176e48; return; }
        }
    }
    ctx->pc = 0x176BF8u;
label_176bf8:
    // 0x176bf8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x176bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_176bfc:
    // 0x176bfc: 0xa42051ee  sh          $zero, 0x51EE($at)
    ctx->pc = 0x176bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 20974), (uint16_t)GPR_U32(ctx, 0));
label_176c00:
    // 0x176c00: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176c04:
    // 0x176c04: 0xa02251ec  sb          $v0, 0x51EC($at)
    ctx->pc = 0x176c04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20972), (uint8_t)GPR_U32(ctx, 2));
label_176c08:
    // 0x176c08: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176c0c:
    // 0x176c0c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_176c10:
    // 0x176c10: 0xa02051ed  sb          $zero, 0x51ED($at)
    ctx->pc = 0x176c10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20973), (uint8_t)GPR_U32(ctx, 0));
label_176c14:
    // 0x176c14: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176c18:
    // 0x176c18: 0xac2051f0  sw          $zero, 0x51F0($at)
    ctx->pc = 0x176c18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20976), GPR_U32(ctx, 0));
label_176c1c:
    // 0x176c1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176c20:
    // 0x176c20: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x176c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_176c24:
    // 0x176c24: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_176c28:
    if (ctx->pc == 0x176C28u) {
        ctx->pc = 0x176C2Cu;
        goto label_176c2c;
    }
    ctx->pc = 0x176C24u;
    {
        const bool branch_taken_0x176c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x176c24) {
            ctx->pc = 0x176C48u;
            { ctx->pc = 0x176c48; return; }
        }
    }
    ctx->pc = 0x176C2Cu;
label_176c2c:
    // 0x176c2c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x176c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_176c30:
    // 0x176c30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176c34:
    // 0x176c34: 0x8c224900  lw          $v0, 0x4900($at)
    ctx->pc = 0x176c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_176c38:
    // 0x176c38: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_176c3c:
    // 0x176c3c: 0xac2351f0  sw          $v1, 0x51F0($at)
    ctx->pc = 0x176c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20976), GPR_U32(ctx, 3));
    ctx->pc = 0x176c40u;
    return;
}

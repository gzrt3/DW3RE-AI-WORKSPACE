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


void FUN_0014eba0_part377(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x206520u: goto label_206520;
        case 0x206524u: goto label_206524;
        case 0x206528u: goto label_206528;
        case 0x20652cu: goto label_20652c;
        case 0x206530u: goto label_206530;
        case 0x206534u: goto label_206534;
        case 0x206538u: goto label_206538;
        case 0x20653cu: goto label_20653c;
        case 0x206540u: goto label_206540;
        case 0x206544u: goto label_206544;
        case 0x206548u: goto label_206548;
        case 0x20654cu: goto label_20654c;
        case 0x206550u: goto label_206550;
        case 0x206554u: goto label_206554;
        case 0x206558u: goto label_206558;
        case 0x20655cu: goto label_20655c;
        case 0x206560u: goto label_206560;
        case 0x206564u: goto label_206564;
        case 0x206568u: goto label_206568;
        case 0x20656cu: goto label_20656c;
        case 0x206570u: goto label_206570;
        case 0x206574u: goto label_206574;
        case 0x206578u: goto label_206578;
        case 0x20657cu: goto label_20657c;
        case 0x206580u: goto label_206580;
        case 0x206584u: goto label_206584;
        case 0x206588u: goto label_206588;
        case 0x20658cu: goto label_20658c;
        case 0x206590u: goto label_206590;
        case 0x206594u: goto label_206594;
        case 0x206598u: goto label_206598;
        case 0x20659cu: goto label_20659c;
        case 0x2065a0u: goto label_2065a0;
        case 0x2065a4u: goto label_2065a4;
        case 0x2065a8u: goto label_2065a8;
        case 0x2065acu: goto label_2065ac;
        case 0x2065b0u: goto label_2065b0;
        case 0x2065b4u: goto label_2065b4;
        case 0x2065b8u: goto label_2065b8;
        case 0x2065bcu: goto label_2065bc;
        case 0x2065c0u: goto label_2065c0;
        case 0x2065c4u: goto label_2065c4;
        case 0x2065c8u: goto label_2065c8;
        case 0x2065ccu: goto label_2065cc;
        case 0x2065d0u: goto label_2065d0;
        case 0x2065d4u: goto label_2065d4;
        case 0x2065d8u: goto label_2065d8;
        case 0x2065dcu: goto label_2065dc;
        case 0x2065e0u: goto label_2065e0;
        case 0x2065e4u: goto label_2065e4;
        case 0x2065e8u: goto label_2065e8;
        case 0x2065ecu: goto label_2065ec;
        case 0x2065f0u: goto label_2065f0;
        case 0x2065f4u: goto label_2065f4;
        case 0x2065f8u: goto label_2065f8;
        case 0x2065fcu: goto label_2065fc;
        case 0x206600u: goto label_206600;
        case 0x206604u: goto label_206604;
        case 0x206608u: goto label_206608;
        case 0x20660cu: goto label_20660c;
        case 0x206610u: goto label_206610;
        case 0x206614u: goto label_206614;
        case 0x206618u: goto label_206618;
        case 0x20661cu: goto label_20661c;
        case 0x206620u: goto label_206620;
        case 0x206624u: goto label_206624;
        case 0x206628u: goto label_206628;
        case 0x20662cu: goto label_20662c;
        case 0x206630u: goto label_206630;
        case 0x206634u: goto label_206634;
        case 0x206638u: goto label_206638;
        case 0x20663cu: goto label_20663c;
        case 0x206640u: goto label_206640;
        case 0x206644u: goto label_206644;
        case 0x206648u: goto label_206648;
        case 0x20664cu: goto label_20664c;
        case 0x206650u: goto label_206650;
        case 0x206654u: goto label_206654;
        case 0x206658u: goto label_206658;
        case 0x20665cu: goto label_20665c;
        case 0x206660u: goto label_206660;
        case 0x206664u: goto label_206664;
        case 0x206668u: goto label_206668;
        case 0x20666cu: goto label_20666c;
        case 0x206670u: goto label_206670;
        case 0x206674u: goto label_206674;
        case 0x206678u: goto label_206678;
        case 0x20667cu: goto label_20667c;
        case 0x206680u: goto label_206680;
        case 0x206684u: goto label_206684;
        case 0x206688u: goto label_206688;
        case 0x20668cu: goto label_20668c;
        case 0x206690u: goto label_206690;
        case 0x206694u: goto label_206694;
        case 0x206698u: goto label_206698;
        case 0x20669cu: goto label_20669c;
        case 0x2066a0u: goto label_2066a0;
        case 0x2066a4u: goto label_2066a4;
        case 0x2066a8u: goto label_2066a8;
        case 0x2066acu: goto label_2066ac;
        case 0x2066b0u: goto label_2066b0;
        case 0x2066b4u: goto label_2066b4;
        case 0x2066b8u: goto label_2066b8;
        case 0x2066bcu: goto label_2066bc;
        case 0x2066c0u: goto label_2066c0;
        case 0x2066c4u: goto label_2066c4;
        case 0x2066c8u: goto label_2066c8;
        case 0x2066ccu: goto label_2066cc;
        case 0x2066d0u: goto label_2066d0;
        case 0x2066d4u: goto label_2066d4;
        case 0x2066d8u: goto label_2066d8;
        case 0x2066dcu: goto label_2066dc;
        case 0x2066e0u: goto label_2066e0;
        case 0x2066e4u: goto label_2066e4;
        case 0x2066e8u: goto label_2066e8;
        case 0x2066ecu: goto label_2066ec;
        case 0x2066f0u: goto label_2066f0;
        case 0x2066f4u: goto label_2066f4;
        case 0x2066f8u: goto label_2066f8;
        case 0x2066fcu: goto label_2066fc;
        case 0x206700u: goto label_206700;
        case 0x206704u: goto label_206704;
        case 0x206708u: goto label_206708;
        case 0x20670cu: goto label_20670c;
        case 0x206710u: goto label_206710;
        case 0x206714u: goto label_206714;
        case 0x206718u: goto label_206718;
        case 0x20671cu: goto label_20671c;
        case 0x206720u: goto label_206720;
        case 0x206724u: goto label_206724;
        case 0x206728u: goto label_206728;
        case 0x20672cu: goto label_20672c;
        case 0x206730u: goto label_206730;
        case 0x206734u: goto label_206734;
        case 0x206738u: goto label_206738;
        case 0x20673cu: goto label_20673c;
        case 0x206740u: goto label_206740;
        case 0x206744u: goto label_206744;
        case 0x206748u: goto label_206748;
        case 0x20674cu: goto label_20674c;
        case 0x206750u: goto label_206750;
        case 0x206754u: goto label_206754;
        case 0x206758u: goto label_206758;
        case 0x20675cu: goto label_20675c;
        case 0x206760u: goto label_206760;
        case 0x206764u: goto label_206764;
        case 0x206768u: goto label_206768;
        case 0x20676cu: goto label_20676c;
        case 0x206770u: goto label_206770;
        case 0x206774u: goto label_206774;
        case 0x206778u: goto label_206778;
        case 0x20677cu: goto label_20677c;
        case 0x206780u: goto label_206780;
        case 0x206784u: goto label_206784;
        case 0x206788u: goto label_206788;
        case 0x20678cu: goto label_20678c;
        case 0x206790u: goto label_206790;
        case 0x206794u: goto label_206794;
        case 0x206798u: goto label_206798;
        case 0x20679cu: goto label_20679c;
        case 0x2067a0u: goto label_2067a0;
        case 0x2067a4u: goto label_2067a4;
        case 0x2067a8u: goto label_2067a8;
        case 0x2067acu: goto label_2067ac;
        case 0x2067b0u: goto label_2067b0;
        case 0x2067b4u: goto label_2067b4;
        case 0x2067b8u: goto label_2067b8;
        case 0x2067bcu: goto label_2067bc;
        case 0x2067c0u: goto label_2067c0;
        case 0x2067c4u: goto label_2067c4;
        case 0x2067c8u: goto label_2067c8;
        case 0x2067ccu: goto label_2067cc;
        case 0x2067d0u: goto label_2067d0;
        case 0x2067d4u: goto label_2067d4;
        case 0x2067d8u: goto label_2067d8;
        case 0x2067dcu: goto label_2067dc;
        case 0x2067e0u: goto label_2067e0;
        case 0x2067e4u: goto label_2067e4;
        case 0x2067e8u: goto label_2067e8;
        case 0x2067ecu: goto label_2067ec;
        case 0x2067f0u: goto label_2067f0;
        case 0x2067f4u: goto label_2067f4;
        case 0x2067f8u: goto label_2067f8;
        case 0x2067fcu: goto label_2067fc;
        case 0x206800u: goto label_206800;
        case 0x206804u: goto label_206804;
        case 0x206808u: goto label_206808;
        case 0x20680cu: goto label_20680c;
        case 0x206810u: goto label_206810;
        case 0x206814u: goto label_206814;
        case 0x206818u: goto label_206818;
        case 0x20681cu: goto label_20681c;
        case 0x206820u: goto label_206820;
        case 0x206824u: goto label_206824;
        case 0x206828u: goto label_206828;
        case 0x20682cu: goto label_20682c;
        case 0x206830u: goto label_206830;
        case 0x206834u: goto label_206834;
        case 0x206838u: goto label_206838;
        case 0x20683cu: goto label_20683c;
        case 0x206840u: goto label_206840;
        case 0x206844u: goto label_206844;
        case 0x206848u: goto label_206848;
        case 0x20684cu: goto label_20684c;
        case 0x206850u: goto label_206850;
        case 0x206854u: goto label_206854;
        case 0x206858u: goto label_206858;
        case 0x20685cu: goto label_20685c;
        case 0x206860u: goto label_206860;
        case 0x206864u: goto label_206864;
        case 0x206868u: goto label_206868;
        case 0x20686cu: goto label_20686c;
        case 0x206870u: goto label_206870;
        case 0x206874u: goto label_206874;
        case 0x206878u: goto label_206878;
        case 0x20687cu: goto label_20687c;
        case 0x206880u: goto label_206880;
        case 0x206884u: goto label_206884;
        case 0x206888u: goto label_206888;
        case 0x20688cu: goto label_20688c;
        case 0x206890u: goto label_206890;
        case 0x206894u: goto label_206894;
        case 0x206898u: goto label_206898;
        case 0x20689cu: goto label_20689c;
        case 0x2068a0u: goto label_2068a0;
        case 0x2068a4u: goto label_2068a4;
        case 0x2068a8u: goto label_2068a8;
        case 0x2068acu: goto label_2068ac;
        case 0x2068b0u: goto label_2068b0;
        case 0x2068b4u: goto label_2068b4;
        case 0x2068b8u: goto label_2068b8;
        case 0x2068bcu: goto label_2068bc;
        case 0x2068c0u: goto label_2068c0;
        case 0x2068c4u: goto label_2068c4;
        case 0x2068c8u: goto label_2068c8;
        case 0x2068ccu: goto label_2068cc;
        case 0x2068d0u: goto label_2068d0;
        case 0x2068d4u: goto label_2068d4;
        case 0x2068d8u: goto label_2068d8;
        case 0x2068dcu: goto label_2068dc;
        case 0x2068e0u: goto label_2068e0;
        case 0x2068e4u: goto label_2068e4;
        case 0x2068e8u: goto label_2068e8;
        case 0x2068ecu: goto label_2068ec;
        case 0x2068f0u: goto label_2068f0;
        case 0x2068f4u: goto label_2068f4;
        case 0x2068f8u: goto label_2068f8;
        case 0x2068fcu: goto label_2068fc;
        case 0x206900u: goto label_206900;
        case 0x206904u: goto label_206904;
        case 0x206908u: goto label_206908;
        case 0x20690cu: goto label_20690c;
        case 0x206910u: goto label_206910;
        case 0x206914u: goto label_206914;
        case 0x206918u: goto label_206918;
        case 0x20691cu: goto label_20691c;
        case 0x206920u: goto label_206920;
        case 0x206924u: goto label_206924;
        case 0x206928u: goto label_206928;
        case 0x20692cu: goto label_20692c;
        case 0x206930u: goto label_206930;
        case 0x206934u: goto label_206934;
        case 0x206938u: goto label_206938;
        case 0x20693cu: goto label_20693c;
        case 0x206940u: goto label_206940;
        case 0x206944u: goto label_206944;
        case 0x206948u: goto label_206948;
        case 0x20694cu: goto label_20694c;
        case 0x206950u: goto label_206950;
        case 0x206954u: goto label_206954;
        case 0x206958u: goto label_206958;
        case 0x20695cu: goto label_20695c;
        case 0x206960u: goto label_206960;
        case 0x206964u: goto label_206964;
        case 0x206968u: goto label_206968;
        case 0x20696cu: goto label_20696c;
        case 0x206970u: goto label_206970;
        case 0x206974u: goto label_206974;
        case 0x206978u: goto label_206978;
        case 0x20697cu: goto label_20697c;
        case 0x206980u: goto label_206980;
        case 0x206984u: goto label_206984;
        case 0x206988u: goto label_206988;
        case 0x20698cu: goto label_20698c;
        case 0x206990u: goto label_206990;
        case 0x206994u: goto label_206994;
        case 0x206998u: goto label_206998;
        case 0x20699cu: goto label_20699c;
        case 0x2069a0u: goto label_2069a0;
        case 0x2069a4u: goto label_2069a4;
        case 0x2069a8u: goto label_2069a8;
        case 0x2069acu: goto label_2069ac;
        case 0x2069b0u: goto label_2069b0;
        case 0x2069b4u: goto label_2069b4;
        case 0x2069b8u: goto label_2069b8;
        case 0x2069bcu: goto label_2069bc;
        case 0x2069c0u: goto label_2069c0;
        case 0x2069c4u: goto label_2069c4;
        case 0x2069c8u: goto label_2069c8;
        case 0x2069ccu: goto label_2069cc;
        case 0x2069d0u: goto label_2069d0;
        case 0x2069d4u: goto label_2069d4;
        case 0x2069d8u: goto label_2069d8;
        case 0x2069dcu: goto label_2069dc;
        case 0x2069e0u: goto label_2069e0;
        case 0x2069e4u: goto label_2069e4;
        case 0x2069e8u: goto label_2069e8;
        case 0x2069ecu: goto label_2069ec;
        case 0x2069f0u: goto label_2069f0;
        case 0x2069f4u: goto label_2069f4;
        case 0x2069f8u: goto label_2069f8;
        case 0x2069fcu: goto label_2069fc;
        case 0x206a00u: goto label_206a00;
        case 0x206a04u: goto label_206a04;
        case 0x206a08u: goto label_206a08;
        case 0x206a0cu: goto label_206a0c;
        case 0x206a10u: goto label_206a10;
        case 0x206a14u: goto label_206a14;
        case 0x206a18u: goto label_206a18;
        case 0x206a1cu: goto label_206a1c;
        case 0x206a20u: goto label_206a20;
        case 0x206a24u: goto label_206a24;
        case 0x206a28u: goto label_206a28;
        case 0x206a2cu: goto label_206a2c;
        case 0x206a30u: goto label_206a30;
        case 0x206a34u: goto label_206a34;
        case 0x206a38u: goto label_206a38;
        case 0x206a3cu: goto label_206a3c;
        case 0x206a40u: goto label_206a40;
        case 0x206a44u: goto label_206a44;
        case 0x206a48u: goto label_206a48;
        case 0x206a4cu: goto label_206a4c;
        case 0x206a50u: goto label_206a50;
        case 0x206a54u: goto label_206a54;
        case 0x206a58u: goto label_206a58;
        case 0x206a5cu: goto label_206a5c;
        case 0x206a60u: goto label_206a60;
        case 0x206a64u: goto label_206a64;
        case 0x206a68u: goto label_206a68;
        case 0x206a6cu: goto label_206a6c;
        case 0x206a70u: goto label_206a70;
        case 0x206a74u: goto label_206a74;
        case 0x206a78u: goto label_206a78;
        case 0x206a7cu: goto label_206a7c;
        case 0x206a80u: goto label_206a80;
        case 0x206a84u: goto label_206a84;
        case 0x206a88u: goto label_206a88;
        case 0x206a8cu: goto label_206a8c;
        case 0x206a90u: goto label_206a90;
        case 0x206a94u: goto label_206a94;
        case 0x206a98u: goto label_206a98;
        case 0x206a9cu: goto label_206a9c;
        case 0x206aa0u: goto label_206aa0;
        case 0x206aa4u: goto label_206aa4;
        case 0x206aa8u: goto label_206aa8;
        case 0x206aacu: goto label_206aac;
        case 0x206ab0u: goto label_206ab0;
        case 0x206ab4u: goto label_206ab4;
        case 0x206ab8u: goto label_206ab8;
        case 0x206abcu: goto label_206abc;
        case 0x206ac0u: goto label_206ac0;
        case 0x206ac4u: goto label_206ac4;
        case 0x206ac8u: goto label_206ac8;
        case 0x206accu: goto label_206acc;
        case 0x206ad0u: goto label_206ad0;
        case 0x206ad4u: goto label_206ad4;
        case 0x206ad8u: goto label_206ad8;
        case 0x206adcu: goto label_206adc;
        case 0x206ae0u: goto label_206ae0;
        case 0x206ae4u: goto label_206ae4;
        case 0x206ae8u: goto label_206ae8;
        case 0x206aecu: goto label_206aec;
        case 0x206af0u: goto label_206af0;
        case 0x206af4u: goto label_206af4;
        case 0x206af8u: goto label_206af8;
        case 0x206afcu: goto label_206afc;
        case 0x206b00u: goto label_206b00;
        case 0x206b04u: goto label_206b04;
        case 0x206b08u: goto label_206b08;
        case 0x206b0cu: goto label_206b0c;
        case 0x206b10u: goto label_206b10;
        case 0x206b14u: goto label_206b14;
        case 0x206b18u: goto label_206b18;
        case 0x206b1cu: goto label_206b1c;
        case 0x206b20u: goto label_206b20;
        case 0x206b24u: goto label_206b24;
        case 0x206b28u: goto label_206b28;
        case 0x206b2cu: goto label_206b2c;
        case 0x206b30u: goto label_206b30;
        case 0x206b34u: goto label_206b34;
        case 0x206b38u: goto label_206b38;
        case 0x206b3cu: goto label_206b3c;
        case 0x206b40u: goto label_206b40;
        case 0x206b44u: goto label_206b44;
        case 0x206b48u: goto label_206b48;
        case 0x206b4cu: goto label_206b4c;
        case 0x206b50u: goto label_206b50;
        case 0x206b54u: goto label_206b54;
        case 0x206b58u: goto label_206b58;
        case 0x206b5cu: goto label_206b5c;
        case 0x206b60u: goto label_206b60;
        case 0x206b64u: goto label_206b64;
        case 0x206b68u: goto label_206b68;
        case 0x206b6cu: goto label_206b6c;
        case 0x206b70u: goto label_206b70;
        case 0x206b74u: goto label_206b74;
        case 0x206b78u: goto label_206b78;
        case 0x206b7cu: goto label_206b7c;
        case 0x206b80u: goto label_206b80;
        case 0x206b84u: goto label_206b84;
        case 0x206b88u: goto label_206b88;
        case 0x206b8cu: goto label_206b8c;
        case 0x206b90u: goto label_206b90;
        case 0x206b94u: goto label_206b94;
        case 0x206b98u: goto label_206b98;
        case 0x206b9cu: goto label_206b9c;
        case 0x206ba0u: goto label_206ba0;
        case 0x206ba4u: goto label_206ba4;
        case 0x206ba8u: goto label_206ba8;
        case 0x206bacu: goto label_206bac;
        case 0x206bb0u: goto label_206bb0;
        case 0x206bb4u: goto label_206bb4;
        case 0x206bb8u: goto label_206bb8;
        case 0x206bbcu: goto label_206bbc;
        case 0x206bc0u: goto label_206bc0;
        case 0x206bc4u: goto label_206bc4;
        case 0x206bc8u: goto label_206bc8;
        case 0x206bccu: goto label_206bcc;
        case 0x206bd0u: goto label_206bd0;
        case 0x206bd4u: goto label_206bd4;
        case 0x206bd8u: goto label_206bd8;
        case 0x206bdcu: goto label_206bdc;
        case 0x206be0u: goto label_206be0;
        case 0x206be4u: goto label_206be4;
        case 0x206be8u: goto label_206be8;
        case 0x206becu: goto label_206bec;
        case 0x206bf0u: goto label_206bf0;
        case 0x206bf4u: goto label_206bf4;
        case 0x206bf8u: goto label_206bf8;
        case 0x206bfcu: goto label_206bfc;
        case 0x206c00u: goto label_206c00;
        case 0x206c04u: goto label_206c04;
        case 0x206c08u: goto label_206c08;
        case 0x206c0cu: goto label_206c0c;
        case 0x206c10u: goto label_206c10;
        case 0x206c14u: goto label_206c14;
        case 0x206c18u: goto label_206c18;
        case 0x206c1cu: goto label_206c1c;
        case 0x206c20u: goto label_206c20;
        case 0x206c24u: goto label_206c24;
        case 0x206c28u: goto label_206c28;
        case 0x206c2cu: goto label_206c2c;
        case 0x206c30u: goto label_206c30;
        case 0x206c34u: goto label_206c34;
        case 0x206c38u: goto label_206c38;
        case 0x206c3cu: goto label_206c3c;
        case 0x206c40u: goto label_206c40;
        case 0x206c44u: goto label_206c44;
        case 0x206c48u: goto label_206c48;
        case 0x206c4cu: goto label_206c4c;
        case 0x206c50u: goto label_206c50;
        case 0x206c54u: goto label_206c54;
        case 0x206c58u: goto label_206c58;
        case 0x206c5cu: goto label_206c5c;
        case 0x206c60u: goto label_206c60;
        case 0x206c64u: goto label_206c64;
        case 0x206c68u: goto label_206c68;
        case 0x206c6cu: goto label_206c6c;
        case 0x206c70u: goto label_206c70;
        case 0x206c74u: goto label_206c74;
        case 0x206c78u: goto label_206c78;
        case 0x206c7cu: goto label_206c7c;
        case 0x206c80u: goto label_206c80;
        case 0x206c84u: goto label_206c84;
        case 0x206c88u: goto label_206c88;
        case 0x206c8cu: goto label_206c8c;
        case 0x206c90u: goto label_206c90;
        case 0x206c94u: goto label_206c94;
        case 0x206c98u: goto label_206c98;
        case 0x206c9cu: goto label_206c9c;
        case 0x206ca0u: goto label_206ca0;
        case 0x206ca4u: goto label_206ca4;
        case 0x206ca8u: goto label_206ca8;
        case 0x206cacu: goto label_206cac;
        case 0x206cb0u: goto label_206cb0;
        case 0x206cb4u: goto label_206cb4;
        case 0x206cb8u: goto label_206cb8;
        case 0x206cbcu: goto label_206cbc;
        case 0x206cc0u: goto label_206cc0;
        case 0x206cc4u: goto label_206cc4;
        case 0x206cc8u: goto label_206cc8;
        case 0x206cccu: goto label_206ccc;
        case 0x206cd0u: goto label_206cd0;
        case 0x206cd4u: goto label_206cd4;
        case 0x206cd8u: goto label_206cd8;
        case 0x206cdcu: goto label_206cdc;
        case 0x206ce0u: goto label_206ce0;
        case 0x206ce4u: goto label_206ce4;
        case 0x206ce8u: goto label_206ce8;
        case 0x206cecu: goto label_206cec;
        default: return;
    }

label_206520:
    // 0x206520: 0x15c30003  bne         $t6, $v1, . + 4 + (0x3 << 2)
label_206524:
    if (ctx->pc == 0x206524u) {
        ctx->pc = 0x206528u;
        goto label_206528;
    }
    ctx->pc = 0x206520u;
    {
        const bool branch_taken_0x206520 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 3));
        if (branch_taken_0x206520) {
            ctx->pc = 0x206530u;
            goto label_206530;
        }
    }
    ctx->pc = 0x206528u;
label_206528:
    // 0x206528: 0x1448ffdd  bne         $v0, $t0, . + 4 + (-0x23 << 2)
label_20652c:
    if (ctx->pc == 0x20652Cu) {
        ctx->pc = 0x206530u;
        goto label_206530;
    }
    ctx->pc = 0x206528u;
    {
        const bool branch_taken_0x206528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x206528) {
            ctx->pc = 0x2064A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2064a0; return; }
        }
    }
    ctx->pc = 0x206530u;
label_206530:
    // 0x206530: 0xc056958  jal         func_15A560
label_206534:
    if (ctx->pc == 0x206534u) {
        ctx->pc = 0x206534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206530u;
        // 0x206534: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206538u;
        goto label_206538;
    }
    ctx->pc = 0x206530u;
    SET_GPR_U32(ctx, 31, 0x206538u);
    ctx->pc = 0x206534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206530u;
    // 0x206534: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A560u;
    { ctx->pc = 0x15a560; return; }
    ctx->pc = 0x206538u;
label_206538:
    // 0x206538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20653c:
    // 0x20653c: 0x3e00008  jr          $ra
label_206540:
    if (ctx->pc == 0x206540u) {
        ctx->pc = 0x206540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20653Cu;
        // 0x206540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206544u;
        goto label_206544;
    }
    ctx->pc = 0x20653Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20653Cu;
        // 0x206540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20653Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206544u;
label_206544:
    // 0x206544: 0x0  nop
    ctx->pc = 0x206544u;
    // NOP
label_206548:
    // 0x206548: 0x0  nop
    ctx->pc = 0x206548u;
    // NOP
label_20654c:
    // 0x20654c: 0x0  nop
    ctx->pc = 0x20654cu;
    // NOP
label_206550:
    // 0x206550: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x206550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_206554:
    // 0x206554: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x206554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_206558:
    // 0x206558: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x206558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20655c:
    // 0x20655c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206560:
    // 0x206560: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206564:
    // 0x206564: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x206564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_206568:
    // 0x206568: 0x2442498b  addiu       $v0, $v0, 0x498B
    ctx->pc = 0x206568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18827));
label_20656c:
    // 0x20656c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20656cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206570:
    // 0x206570: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_206574:
    if (ctx->pc == 0x206574u) {
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206578u;
        goto label_206578;
    }
    ctx->pc = 0x206570u;
    {
        const bool branch_taken_0x206570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206570) {
            ctx->pc = 0x206590u;
            goto label_206590;
        }
    }
    ctx->pc = 0x206578u;
label_206578:
    // 0x206578: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x206578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20657c:
    // 0x20657c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x20657cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_206580:
    // 0x206580: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_206584:
    if (ctx->pc == 0x206584u) {
        ctx->pc = 0x206588u;
        goto label_206588;
    }
    ctx->pc = 0x206580u;
    {
        const bool branch_taken_0x206580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206580) {
            ctx->pc = 0x2065A4u;
            goto label_2065a4;
        }
    }
    ctx->pc = 0x206588u;
label_206588:
    // 0x206588: 0x10000006  b           . + 4 + (0x6 << 2)
label_20658c:
    if (ctx->pc == 0x20658Cu) {
        ctx->pc = 0x20658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206588u;
        // 0x20658c: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206590u;
        goto label_206590;
    }
    ctx->pc = 0x206588u;
    {
        const bool branch_taken_0x206588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206588u;
        // 0x20658c: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206588) {
            ctx->pc = 0x2065A4u;
            goto label_2065a4;
        }
    }
    ctx->pc = 0x206590u;
label_206590:
    // 0x206590: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x206590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_206594:
    // 0x206594: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x206594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_206598:
    // 0x206598: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_20659c:
    if (ctx->pc == 0x20659Cu) {
        ctx->pc = 0x2065A0u;
        goto label_2065a0;
    }
    ctx->pc = 0x206598u;
    {
        const bool branch_taken_0x206598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206598) {
            ctx->pc = 0x2065A4u;
            goto label_2065a4;
        }
    }
    ctx->pc = 0x2065A0u;
label_2065a0:
    // 0x2065a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2065a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2065a4:
    // 0x2065a4: 0xc056960  jal         func_15A580
label_2065a8:
    if (ctx->pc == 0x2065A8u) {
        ctx->pc = 0x2065ACu;
        goto label_2065ac;
    }
    ctx->pc = 0x2065A4u;
    SET_GPR_U32(ctx, 31, 0x2065ACu);
    ctx->pc = 0x15A580u;
    { ctx->pc = 0x15a580; return; }
    ctx->pc = 0x2065ACu;
label_2065ac:
    // 0x2065ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2065acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2065b0:
    // 0x2065b0: 0x3e00008  jr          $ra
label_2065b4:
    if (ctx->pc == 0x2065B4u) {
        ctx->pc = 0x2065B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065B0u;
        // 0x2065b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2065B8u;
        goto label_2065b8;
    }
    ctx->pc = 0x2065B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065B0u;
        // 0x2065b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2065B8u;
label_2065b8:
    // 0x2065b8: 0x0  nop
    ctx->pc = 0x2065b8u;
    // NOP
label_2065bc:
    // 0x2065bc: 0x0  nop
    ctx->pc = 0x2065bcu;
    // NOP
label_2065c0:
    // 0x2065c0: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x2065c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2065c4:
    // 0x2065c4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2065c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_2065c8:
    // 0x2065c8: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x2065c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2065cc:
    // 0x2065cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2065ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2065d0:
    // 0x2065d0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x2065d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_2065d4:
    // 0x2065d4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2065d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2065d8:
    // 0x2065d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2065d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2065dc:
    // 0x2065dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2065dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2065e0:
    // 0x2065e0: 0x90673686  lbu         $a3, 0x3686($v1)
    ctx->pc = 0x2065e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13958)));
label_2065e4:
    // 0x2065e4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x2065e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_2065e8:
    // 0x2065e8: 0x24c65370  addiu       $a2, $a2, 0x5370
    ctx->pc = 0x2065e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21360));
label_2065ec:
    // 0x2065ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2065ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2065f0:
    // 0x2065f0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_2065f4:
    // 0x2065f4: 0x9063368a  lbu         $v1, 0x368A($v1)
    ctx->pc = 0x2065f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13962)));
label_2065f8:
    // 0x2065f8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2065f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2065fc:
    // 0x2065fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2065fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_206600:
    // 0x206600: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_206604:
    if (ctx->pc == 0x206604u) {
        ctx->pc = 0x206604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206600u;
        // 0x206604: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206608u;
        goto label_206608;
    }
    ctx->pc = 0x206600u;
    {
        const bool branch_taken_0x206600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x206604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206600u;
        // 0x206604: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206600) {
            ctx->pc = 0x206624u;
            goto label_206624;
        }
    }
    ctx->pc = 0x206608u;
label_206608:
    // 0x206608: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x206608u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_20660c:
    // 0x20660c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_206610:
    if (ctx->pc == 0x206610u) {
        ctx->pc = 0x206610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20660Cu;
        // 0x206610: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206614u;
        goto label_206614;
    }
    ctx->pc = 0x20660Cu;
    {
        const bool branch_taken_0x20660c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20660Cu;
        // 0x206610: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20660c) {
            ctx->pc = 0x206638u;
            goto label_206638;
        }
    }
    ctx->pc = 0x206614u;
label_206614:
    // 0x206614: 0xc056968  jal         func_15A5A0
label_206618:
    if (ctx->pc == 0x206618u) {
        ctx->pc = 0x20661Cu;
        goto label_20661c;
    }
    ctx->pc = 0x206614u;
    SET_GPR_U32(ctx, 31, 0x20661Cu);
    ctx->pc = 0x15A5A0u;
    { ctx->pc = 0x15a5a0; return; }
    ctx->pc = 0x20661Cu;
label_20661c:
    // 0x20661c: 0x10000006  b           . + 4 + (0x6 << 2)
label_206620:
    if (ctx->pc == 0x206620u) {
        ctx->pc = 0x206620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20661Cu;
        // 0x206620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206624u;
        goto label_206624;
    }
    ctx->pc = 0x20661Cu;
    {
        const bool branch_taken_0x20661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20661Cu;
        // 0x206620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20661c) {
            ctx->pc = 0x206638u;
            goto label_206638;
        }
    }
    ctx->pc = 0x206624u;
label_206624:
    // 0x206624: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
label_206628:
    if (ctx->pc == 0x206628u) {
        ctx->pc = 0x206628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206624u;
        // 0x206628: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20662Cu;
        goto label_20662c;
    }
    ctx->pc = 0x206624u;
    {
        const bool branch_taken_0x206624 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x206628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206624u;
        // 0x206628: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206624) {
            ctx->pc = 0x206638u;
            goto label_206638;
        }
    }
    ctx->pc = 0x20662Cu;
label_20662c:
    // 0x20662c: 0xc056968  jal         func_15A5A0
label_206630:
    if (ctx->pc == 0x206630u) {
        ctx->pc = 0x206634u;
        goto label_206634;
    }
    ctx->pc = 0x20662Cu;
    SET_GPR_U32(ctx, 31, 0x206634u);
    ctx->pc = 0x15A5A0u;
    { ctx->pc = 0x15a5a0; return; }
    ctx->pc = 0x206634u;
label_206634:
    // 0x206634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206638:
    // 0x206638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20663c:
    // 0x20663c: 0x3e00008  jr          $ra
label_206640:
    if (ctx->pc == 0x206640u) {
        ctx->pc = 0x206640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20663Cu;
        // 0x206640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206644u;
        goto label_206644;
    }
    ctx->pc = 0x20663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20663Cu;
        // 0x206640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206644u;
label_206644:
    // 0x206644: 0x0  nop
    ctx->pc = 0x206644u;
    // NOP
label_206648:
    // 0x206648: 0x0  nop
    ctx->pc = 0x206648u;
    // NOP
label_20664c:
    // 0x20664c: 0x0  nop
    ctx->pc = 0x20664cu;
    // NOP
label_206650:
    // 0x206650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x206650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_206654:
    // 0x206654: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x206654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_206658:
    // 0x206658: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x206658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20665c:
    // 0x20665c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206660:
    // 0x206660: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x206660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_206664:
    // 0x206664: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_206668:
    // 0x206668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x206668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20666c:
    // 0x20666c: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x20666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_206670:
    // 0x206670: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_206674:
    // 0x206674: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x206674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_206678:
    // 0x206678: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20667c:
    // 0x20667c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_206680:
    // 0x206680: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x206680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_206684:
    // 0x206684: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
label_206688:
    if (ctx->pc == 0x206688u) {
        ctx->pc = 0x206688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206684u;
        // 0x206688: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20668Cu;
        goto label_20668c;
    }
    ctx->pc = 0x206684u;
    {
        const bool branch_taken_0x206684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x206688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206684u;
        // 0x206688: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206684) {
            ctx->pc = 0x2066FCu;
            goto label_2066fc;
        }
    }
    ctx->pc = 0x20668Cu;
label_20668c:
    // 0x20668c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206690:
    // 0x206690: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_206694:
    if (ctx->pc == 0x206694u) {
        ctx->pc = 0x206694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206690u;
        // 0x206694: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206698u;
        goto label_206698;
    }
    ctx->pc = 0x206690u;
    {
        const bool branch_taken_0x206690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206690u;
        // 0x206694: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206690) {
            ctx->pc = 0x20669Cu;
            goto label_20669c;
        }
    }
    ctx->pc = 0x206698u;
label_206698:
    // 0x206698: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x206698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20669c:
    // 0x20669c: 0x3a440001  xori        $a0, $s2, 0x1
    ctx->pc = 0x20669cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_2066a0:
    // 0x2066a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2066a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2066a4:
    // 0x2066a4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2066a8:
    // 0x2066a8: 0x2442497c  addiu       $v0, $v0, 0x497C
    ctx->pc = 0x2066a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18812));
label_2066ac:
    // 0x2066ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2066b0:
    // 0x2066b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2066b4:
    // 0x2066b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2066b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2066b8:
    // 0x2066b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2066b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2066bc:
    // 0x2066bc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2066c0:
    if (ctx->pc == 0x2066C0u) {
        ctx->pc = 0x2066C4u;
        goto label_2066c4;
    }
    ctx->pc = 0x2066BCu;
    {
        const bool branch_taken_0x2066bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066bc) {
            ctx->pc = 0x20675Cu;
            goto label_20675c;
        }
    }
    ctx->pc = 0x2066C4u;
label_2066c4:
    // 0x2066c4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x2066c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_2066c8:
    // 0x2066c8: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x2066c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_2066cc:
    // 0x2066cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2066ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2066d0:
    // 0x2066d0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2066d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2066d4:
    // 0x2066d4: 0x16220021  bne         $s1, $v0, . + 4 + (0x21 << 2)
label_2066d8:
    if (ctx->pc == 0x2066D8u) {
        ctx->pc = 0x2066DCu;
        goto label_2066dc;
    }
    ctx->pc = 0x2066D4u;
    {
        const bool branch_taken_0x2066d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2066d4) {
            ctx->pc = 0x20675Cu;
            goto label_20675c;
        }
    }
    ctx->pc = 0x2066DCu;
label_2066dc:
    // 0x2066dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2066dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2066e0:
    // 0x2066e0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_2066e4:
    if (ctx->pc == 0x2066E4u) {
        ctx->pc = 0x2066E8u;
        goto label_2066e8;
    }
    ctx->pc = 0x2066E0u;
    {
        const bool branch_taken_0x2066e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2066e0) {
            ctx->pc = 0x2066F0u;
            goto label_2066f0;
        }
    }
    ctx->pc = 0x2066E8u;
label_2066e8:
    // 0x2066e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2066ec:
    if (ctx->pc == 0x2066ECu) {
        ctx->pc = 0x2066ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066E8u;
        // 0x2066ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2066F0u;
        goto label_2066f0;
    }
    ctx->pc = 0x2066E8u;
    {
        const bool branch_taken_0x2066e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066E8u;
        // 0x2066ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066e8) {
            ctx->pc = 0x2066F4u;
            goto label_2066f4;
        }
    }
    ctx->pc = 0x2066F0u;
label_2066f0:
    // 0x2066f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2066f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2066f4:
    // 0x2066f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_2066f8:
    if (ctx->pc == 0x2066F8u) {
        ctx->pc = 0x2066FCu;
        goto label_2066fc;
    }
    ctx->pc = 0x2066F4u;
    {
        const bool branch_taken_0x2066f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2066f4) {
            ctx->pc = 0x20675Cu;
            goto label_20675c;
        }
    }
    ctx->pc = 0x2066FCu;
label_2066fc:
    // 0x2066fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_206700:
    if (ctx->pc == 0x206700u) {
        ctx->pc = 0x206700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066FCu;
        // 0x206700: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206704u;
        goto label_206704;
    }
    ctx->pc = 0x2066FCu;
    {
        const bool branch_taken_0x2066fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066FCu;
        // 0x206700: 0x2471ffff  addiu       $s1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066fc) {
            ctx->pc = 0x206708u;
            goto label_206708;
        }
    }
    ctx->pc = 0x206704u;
label_206704:
    // 0x206704: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206708:
    // 0x206708: 0x3a440001  xori        $a0, $s2, 0x1
    ctx->pc = 0x206708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_20670c:
    // 0x20670c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206710:
    // 0x206710: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x206710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_206714:
    // 0x206714: 0x2442497c  addiu       $v0, $v0, 0x497C
    ctx->pc = 0x206714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18812));
label_206718:
    // 0x206718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20671c:
    // 0x20671c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_206720:
    // 0x206720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_206724:
    // 0x206724: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x206724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_206728:
    // 0x206728: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20672c:
    if (ctx->pc == 0x20672Cu) {
        ctx->pc = 0x206730u;
        goto label_206730;
    }
    ctx->pc = 0x206728u;
    {
        const bool branch_taken_0x206728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206728) {
            ctx->pc = 0x20675Cu;
            goto label_20675c;
        }
    }
    ctx->pc = 0x206730u;
label_206730:
    // 0x206730: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206734:
    // 0x206734: 0x24424990  addiu       $v0, $v0, 0x4990
    ctx->pc = 0x206734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18832));
label_206738:
    // 0x206738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20673c:
    // 0x20673c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x20673cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_206740:
    // 0x206740: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_206744:
    if (ctx->pc == 0x206744u) {
        ctx->pc = 0x206748u;
        goto label_206748;
    }
    ctx->pc = 0x206740u;
    {
        const bool branch_taken_0x206740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x206740) {
            ctx->pc = 0x20675Cu;
            goto label_20675c;
        }
    }
    ctx->pc = 0x206748u;
label_206748:
    // 0x206748: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_20674c:
    if (ctx->pc == 0x20674Cu) {
        ctx->pc = 0x206750u;
        goto label_206750;
    }
    ctx->pc = 0x206748u;
    {
        const bool branch_taken_0x206748 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x206748) {
            ctx->pc = 0x206758u;
            goto label_206758;
        }
    }
    ctx->pc = 0x206750u;
label_206750:
    // 0x206750: 0x10000002  b           . + 4 + (0x2 << 2)
label_206754:
    if (ctx->pc == 0x206754u) {
        ctx->pc = 0x206754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206750u;
        // 0x206754: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206758u;
        goto label_206758;
    }
    ctx->pc = 0x206750u;
    {
        const bool branch_taken_0x206750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206750u;
        // 0x206754: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206750) {
            ctx->pc = 0x20675Cu;
            goto label_20675c;
        }
    }
    ctx->pc = 0x206758u;
label_206758:
    // 0x206758: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x206758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_20675c:
    // 0x20675c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_206760:
    // 0x206760: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x206760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_206764:
    // 0x206764: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x206764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_206768:
    // 0x206768: 0x24533620  addiu       $s3, $v0, 0x3620
    ctx->pc = 0x206768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_20676c:
    // 0x20676c: 0xc05680c  jal         func_15A030
label_206770:
    if (ctx->pc == 0x206770u) {
        ctx->pc = 0x206770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20676Cu;
        // 0x206770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206774u;
        goto label_206774;
    }
    ctx->pc = 0x20676Cu;
    SET_GPR_U32(ctx, 31, 0x206774u);
    ctx->pc = 0x206770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20676Cu;
    // 0x206770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A030u;
    { ctx->pc = 0x15a030; return; }
    ctx->pc = 0x206774u;
label_206774:
    // 0x206774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206778:
    // 0x206778: 0xc056994  jal         func_15A650
label_20677c:
    if (ctx->pc == 0x20677Cu) {
        ctx->pc = 0x20677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206778u;
        // 0x20677c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206780u;
        goto label_206780;
    }
    ctx->pc = 0x206778u;
    SET_GPR_U32(ctx, 31, 0x206780u);
    ctx->pc = 0x20677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206778u;
    // 0x20677c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A650u;
    { ctx->pc = 0x15a650; return; }
    ctx->pc = 0x206780u;
label_206780:
    // 0x206780: 0xc056834  jal         func_15A0D0
label_206784:
    if (ctx->pc == 0x206784u) {
        ctx->pc = 0x206784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206780u;
        // 0x206784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206788u;
        goto label_206788;
    }
    ctx->pc = 0x206780u;
    SET_GPR_U32(ctx, 31, 0x206788u);
    ctx->pc = 0x206784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206780u;
    // 0x206784: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A0D0u;
    { ctx->pc = 0x15a0d0; return; }
    ctx->pc = 0x206788u;
label_206788:
    // 0x206788: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x206788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_20678c:
    // 0x20678c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20678cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_206790:
    // 0x206790: 0x2442498a  addiu       $v0, $v0, 0x498A
    ctx->pc = 0x206790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18826));
label_206794:
    // 0x206794: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x206794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_206798:
    // 0x206798: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x206798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20679c:
    // 0x20679c: 0xc056968  jal         func_15A5A0
label_2067a0:
    if (ctx->pc == 0x2067A0u) {
        ctx->pc = 0x2067A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20679Cu;
        // 0x2067a0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067A4u;
        goto label_2067a4;
    }
    ctx->pc = 0x20679Cu;
    SET_GPR_U32(ctx, 31, 0x2067A4u);
    ctx->pc = 0x2067A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20679Cu;
    // 0x2067a0: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    { ctx->pc = 0x15a5a0; return; }
    ctx->pc = 0x2067A4u;
label_2067a4:
    // 0x2067a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2067a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2067a8:
    // 0x2067a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2067a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2067ac:
    // 0x2067ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2067acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2067b0:
    // 0x2067b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2067b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2067b4:
    // 0x2067b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2067b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2067b8:
    // 0x2067b8: 0x3e00008  jr          $ra
label_2067bc:
    if (ctx->pc == 0x2067BCu) {
        ctx->pc = 0x2067BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067B8u;
        // 0x2067bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067C0u;
        goto label_2067c0;
    }
    ctx->pc = 0x2067B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2067BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067B8u;
        // 0x2067bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2067B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2067C0u;
label_2067c0:
    // 0x2067c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2067c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2067c4:
    // 0x2067c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2067c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2067c8:
    // 0x2067c8: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x2067c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2067cc:
    // 0x2067cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2067d0:
    if (ctx->pc == 0x2067D0u) {
        ctx->pc = 0x2067D4u;
        goto label_2067d4;
    }
    ctx->pc = 0x2067CCu;
    {
        const bool branch_taken_0x2067cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2067cc) {
            ctx->pc = 0x2067E0u;
            goto label_2067e0;
        }
    }
    ctx->pc = 0x2067D4u;
label_2067d4:
    // 0x2067d4: 0xc070038  jal         func_1C00E0
label_2067d8:
    if (ctx->pc == 0x2067D8u) {
        ctx->pc = 0x2067DCu;
        goto label_2067dc;
    }
    ctx->pc = 0x2067D4u;
    SET_GPR_U32(ctx, 31, 0x2067DCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x2067DCu;
label_2067dc:
    // 0x2067dc: 0xaf8090fc  sw          $zero, -0x6F04($gp)
    ctx->pc = 0x2067dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938876), GPR_U32(ctx, 0));
label_2067e0:
    // 0x2067e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2067e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2067e4:
    // 0x2067e4: 0x3e00008  jr          $ra
label_2067e8:
    if (ctx->pc == 0x2067E8u) {
        ctx->pc = 0x2067E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067E4u;
        // 0x2067e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2067ECu;
        goto label_2067ec;
    }
    ctx->pc = 0x2067E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2067E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067E4u;
        // 0x2067e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2067E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2067ECu;
label_2067ec:
    // 0x2067ec: 0x0  nop
    ctx->pc = 0x2067ecu;
    // NOP
label_2067f0:
    // 0x2067f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2067f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2067f4:
    // 0x2067f4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2067f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2067f8:
    // 0x2067f8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2067f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_2067fc:
    // 0x2067fc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2067fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_206800:
    // 0x206800: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x206800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_206804:
    // 0x206804: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x206804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_206808:
    // 0x206808: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x206808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_20680c:
    // 0x20680c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_206810:
    // 0x206810: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x206810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_206814:
    // 0x206814: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x206814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_206818:
    // 0x206818: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_20681c:
    // 0x20681c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_206820:
    if (ctx->pc == 0x206820u) {
        ctx->pc = 0x206820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20681Cu;
        // 0x206820: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206824u;
        goto label_206824;
    }
    ctx->pc = 0x20681Cu;
    {
        const bool branch_taken_0x20681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20681Cu;
        // 0x206820: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20681c) {
            ctx->pc = 0x206834u;
            goto label_206834;
        }
    }
    ctx->pc = 0x206824u;
label_206824:
    // 0x206824: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x206824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206828:
    // 0x206828: 0xc070080  jal         func_1C0200
label_20682c:
    if (ctx->pc == 0x20682Cu) {
        ctx->pc = 0x20682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206828u;
        // 0x20682c: 0x3445e330  ori         $a1, $v0, 0xE330 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58160);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206830u;
        goto label_206830;
    }
    ctx->pc = 0x206828u;
    SET_GPR_U32(ctx, 31, 0x206830u);
    ctx->pc = 0x20682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206828u;
    // 0x20682c: 0x3445e330  ori         $a1, $v0, 0xE330 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58160);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x206830u;
label_206830:
    // 0x206830: 0xaf8290fc  sw          $v0, -0x6F04($gp)
    ctx->pc = 0x206830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938876), GPR_U32(ctx, 2));
label_206834:
    // 0x206834: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206838:
    // 0x206838: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_20683c:
    // 0x20683c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_206840:
    // 0x206840: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x206840u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206844:
    // 0x206844: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x206844u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206848:
    // 0x206848: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206848u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20684c:
    // 0x20684c: 0xac20e2e0  sw          $zero, -0x1D20($at)
    ctx->pc = 0x20684cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959840), GPR_U32(ctx, 0));
label_206850:
    // 0x206850: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206854:
    // 0x206854: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206858:
    // 0x206858: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206858u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20685c:
    // 0x20685c: 0xac20e2e4  sw          $zero, -0x1D1C($at)
    ctx->pc = 0x20685cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959844), GPR_U32(ctx, 0));
label_206860:
    // 0x206860: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206864:
    // 0x206864: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206868:
    // 0x206868: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206868u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20686c:
    // 0x20686c: 0xac20e2e8  sw          $zero, -0x1D18($at)
    ctx->pc = 0x20686cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959848), GPR_U32(ctx, 0));
label_206870:
    // 0x206870: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206874:
    // 0x206874: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206878:
    // 0x206878: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20687c:
    // 0x20687c: 0xac20e2ec  sw          $zero, -0x1D14($at)
    ctx->pc = 0x20687cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959852), GPR_U32(ctx, 0));
label_206880:
    // 0x206880: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206884:
    // 0x206884: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206888:
    // 0x206888: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206888u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20688c:
    // 0x20688c: 0xac20e2f0  sw          $zero, -0x1D10($at)
    ctx->pc = 0x20688cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959856), GPR_U32(ctx, 0));
label_206890:
    // 0x206890: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206894:
    // 0x206894: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206898:
    // 0x206898: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206898u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20689c:
    // 0x20689c: 0xac20e2f4  sw          $zero, -0x1D0C($at)
    ctx->pc = 0x20689cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959860), GPR_U32(ctx, 0));
label_2068a0:
    // 0x2068a0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2068a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2068a4:
    // 0x2068a4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2068a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2068a8:
    // 0x2068a8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2068a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2068ac:
    // 0x2068ac: 0xac20e2f8  sw          $zero, -0x1D08($at)
    ctx->pc = 0x2068acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959864), GPR_U32(ctx, 0));
label_2068b0:
    // 0x2068b0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2068b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2068b4:
    // 0x2068b4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2068b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2068b8:
    // 0x2068b8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2068b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2068bc:
    // 0x2068bc: 0xac20e2fc  sw          $zero, -0x1D04($at)
    ctx->pc = 0x2068bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959868), GPR_U32(ctx, 0));
label_2068c0:
    // 0x2068c0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2068c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2068c4:
    // 0x2068c4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2068c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2068c8:
    // 0x2068c8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2068c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2068cc:
    // 0x2068cc: 0xac20e300  sw          $zero, -0x1D00($at)
    ctx->pc = 0x2068ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959872), GPR_U32(ctx, 0));
label_2068d0:
    // 0x2068d0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2068d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2068d4:
    // 0x2068d4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2068d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2068d8:
    // 0x2068d8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2068d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2068dc:
    // 0x2068dc: 0xac20e304  sw          $zero, -0x1CFC($at)
    ctx->pc = 0x2068dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959876), GPR_U32(ctx, 0));
label_2068e0:
    // 0x2068e0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2068e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2068e4:
    // 0x2068e4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2068e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2068e8:
    // 0x2068e8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2068e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2068ec:
    // 0x2068ec: 0xac20e308  sw          $zero, -0x1CF8($at)
    ctx->pc = 0x2068ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959880), GPR_U32(ctx, 0));
label_2068f0:
    // 0x2068f0: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x2068f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_2068f4:
    // 0x2068f4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2068f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_2068f8:
    // 0x2068f8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2068f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2068fc:
    // 0x2068fc: 0xac23e30c  sw          $v1, -0x1CF4($at)
    ctx->pc = 0x2068fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959884), GPR_U32(ctx, 3));
label_206900:
    // 0x206900: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206904:
    // 0x206904: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206908:
    // 0x206908: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206908u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20690c:
    // 0x20690c: 0xac20e310  sw          $zero, -0x1CF0($at)
    ctx->pc = 0x20690cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959888), GPR_U32(ctx, 0));
label_206910:
    // 0x206910: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206914:
    // 0x206914: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206918:
    // 0x206918: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206918u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20691c:
    // 0x20691c: 0xac20e314  sw          $zero, -0x1CEC($at)
    ctx->pc = 0x20691cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959892), GPR_U32(ctx, 0));
label_206920:
    // 0x206920: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206924:
    // 0x206924: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206928:
    // 0x206928: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206928u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20692c:
    // 0x20692c: 0xac20e318  sw          $zero, -0x1CE8($at)
    ctx->pc = 0x20692cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959896), GPR_U32(ctx, 0));
label_206930:
    // 0x206930: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206934:
    // 0x206934: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206938:
    // 0x206938: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206938u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20693c:
    // 0x20693c: 0xac20e31c  sw          $zero, -0x1CE4($at)
    ctx->pc = 0x20693cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959900), GPR_U32(ctx, 0));
label_206940:
    // 0x206940: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206944:
    // 0x206944: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206948:
    // 0x206948: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206948u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20694c:
    // 0x20694c: 0xac20e320  sw          $zero, -0x1CE0($at)
    ctx->pc = 0x20694cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959904), GPR_U32(ctx, 0));
label_206950:
    // 0x206950: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206954:
    // 0x206954: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x206954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_206958:
    // 0x206958: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x206958u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_20695c:
    // 0x20695c: 0xac20e324  sw          $zero, -0x1CDC($at)
    ctx->pc = 0x20695cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959908), GPR_U32(ctx, 0));
label_206960:
    // 0x206960: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x206960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
label_206964:
    // 0x206964: 0x24050f16  addiu       $a1, $zero, 0xF16
    ctx->pc = 0x206964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3862));
label_206968:
    // 0x206968: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x206968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20696c:
    // 0x20696c: 0xc05e234  jal         func_1788D0
label_206970:
    if (ctx->pc == 0x206970u) {
        ctx->pc = 0x206970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20696Cu;
        // 0x206970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206974u;
        goto label_206974;
    }
    ctx->pc = 0x20696Cu;
    SET_GPR_U32(ctx, 31, 0x206974u);
    ctx->pc = 0x206970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20696Cu;
    // 0x206970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x206974u;
label_206974:
    // 0x206974: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x206974u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206978:
    // 0x206978: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x206978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_20697c:
    // 0x20697c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x20697cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206980:
    // 0x206980: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x206980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206984:
    // 0x206984: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x206984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_206988:
    // 0x206988: 0x240900b8  addiu       $t1, $zero, 0xB8
    ctx->pc = 0x206988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_20698c:
    // 0x20698c: 0xc07c1f4  jal         func_1F07D0
label_206990:
    if (ctx->pc == 0x206990u) {
        ctx->pc = 0x206990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20698Cu;
        // 0x206990: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206994u;
        goto label_206994;
    }
    ctx->pc = 0x20698Cu;
    SET_GPR_U32(ctx, 31, 0x206994u);
    ctx->pc = 0x206990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20698Cu;
    // 0x206990: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x206994u;
label_206994:
    // 0x206994: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x206994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_206998:
    // 0x206998: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x206998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20699c:
    // 0x20699c: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x20699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_2069a0:
    // 0x2069a0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2069a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2069a4:
    // 0x2069a4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2069a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2069a8:
    // 0x2069a8: 0x260405b0  addiu       $a0, $s0, 0x5B0
    ctx->pc = 0x2069a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
label_2069ac:
    // 0x2069ac: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2069acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_2069b0:
    // 0x2069b0: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2069b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2069b4:
    // 0x2069b4: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2069b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2069b8:
    // 0x2069b8: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2069b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2069bc:
    // 0x2069bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2069bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2069c0:
    // 0x2069c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2069c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2069c4:
    // 0x2069c4: 0xc07c110  jal         func_1F0440
label_2069c8:
    if (ctx->pc == 0x2069C8u) {
        ctx->pc = 0x2069C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069C4u;
        // 0x2069c8: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2069CCu;
        goto label_2069cc;
    }
    ctx->pc = 0x2069C4u;
    SET_GPR_U32(ctx, 31, 0x2069CCu);
    ctx->pc = 0x2069C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069C4u;
    // 0x2069c8: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x2069CCu;
label_2069cc:
    // 0x2069cc: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x2069ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2069d0:
    // 0x2069d0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2069d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2069d4:
    // 0x2069d4: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x2069d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_2069d8:
    // 0x2069d8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2069d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2069dc:
    // 0x2069dc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2069dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_2069e0:
    // 0x2069e0: 0x26040920  addiu       $a0, $s0, 0x920
    ctx->pc = 0x2069e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
label_2069e4:
    // 0x2069e4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2069e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_2069e8:
    // 0x2069e8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2069e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2069ec:
    // 0x2069ec: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2069ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_2069f0:
    // 0x2069f0: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2069f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_2069f4:
    // 0x2069f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2069f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2069f8:
    // 0x2069f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2069f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2069fc:
    // 0x2069fc: 0xc07c110  jal         func_1F0440
label_206a00:
    if (ctx->pc == 0x206A00u) {
        ctx->pc = 0x206A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069FCu;
        // 0x206a00: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A04u;
        goto label_206a04;
    }
    ctx->pc = 0x2069FCu;
    SET_GPR_U32(ctx, 31, 0x206A04u);
    ctx->pc = 0x206A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069FCu;
    // 0x206a00: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x206A04u;
label_206a04:
    // 0x206a04: 0xc07082c  jal         func_1C20B0
label_206a08:
    if (ctx->pc == 0x206A08u) {
        ctx->pc = 0x206A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A04u;
        // 0x206a08: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A0Cu;
        goto label_206a0c;
    }
    ctx->pc = 0x206A04u;
    SET_GPR_U32(ctx, 31, 0x206A0Cu);
    ctx->pc = 0x206A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A04u;
    // 0x206a08: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x206A0Cu;
label_206a0c:
    // 0x206a0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206a10:
    // 0x206a10: 0x26040c90  addiu       $a0, $s0, 0xC90
    ctx->pc = 0x206a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3216));
label_206a14:
    // 0x206a14: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x206a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206a18:
    // 0x206a18: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206a1c:
    // 0x206a1c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206a20:
    // 0x206a20: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206a24:
    // 0x206a24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206a28:
    // 0x206a28: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206a28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206a2c:
    // 0x206a2c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206a30:
    // 0x206a30: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x206a30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_206a34:
    // 0x206a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206a38:
    // 0x206a38: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206a3c:
    // 0x206a3c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206a40:
    // 0x206a40: 0x240a0188  addiu       $t2, $zero, 0x188
    ctx->pc = 0x206a40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_206a44:
    // 0x206a44: 0xc05de30  jal         func_1778C0
label_206a48:
    if (ctx->pc == 0x206A48u) {
        ctx->pc = 0x206A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A44u;
        // 0x206a48: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A4Cu;
        goto label_206a4c;
    }
    ctx->pc = 0x206A44u;
    SET_GPR_U32(ctx, 31, 0x206A4Cu);
    ctx->pc = 0x206A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A44u;
    // 0x206a48: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x206A4Cu;
label_206a4c:
    // 0x206a4c: 0x26040d30  addiu       $a0, $s0, 0xD30
    ctx->pc = 0x206a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
label_206a50:
    // 0x206a50: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x206a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206a54:
    // 0x206a54: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x206a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206a58:
    // 0x206a58: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x206a58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206a5c:
    // 0x206a5c: 0x240800d8  addiu       $t0, $zero, 0xD8
    ctx->pc = 0x206a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_206a60:
    // 0x206a60: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x206a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206a64:
    // 0x206a64: 0xc07c084  jal         func_1F0210
label_206a68:
    if (ctx->pc == 0x206A68u) {
        ctx->pc = 0x206A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A64u;
        // 0x206a68: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A6Cu;
        goto label_206a6c;
    }
    ctx->pc = 0x206A64u;
    SET_GPR_U32(ctx, 31, 0x206A6Cu);
    ctx->pc = 0x206A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A64u;
    // 0x206a68: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x206A6Cu;
label_206a6c:
    // 0x206a6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x206a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206a70:
    // 0x206a70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x206a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206a74:
    // 0x206a74: 0x0  nop
    ctx->pc = 0x206a74u;
    // NOP
label_206a78:
    // 0x206a78: 0xc070834  jal         func_1C20D0
label_206a7c:
    if (ctx->pc == 0x206A7Cu) {
        ctx->pc = 0x206A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A78u;
        // 0x206a7c: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A80u;
        goto label_206a80;
    }
    ctx->pc = 0x206A78u;
    SET_GPR_U32(ctx, 31, 0x206A80u);
    ctx->pc = 0x206A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A78u;
    // 0x206a7c: 0x2404002f  addiu       $a0, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206A80u;
label_206a80:
    // 0x206a80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206a84:
    // 0x206a84: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x206a84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206a88:
    // 0x206a88: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x206a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_206a8c:
    // 0x206a8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206a90:
    // 0x206a90: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206a94:
    // 0x206a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206a98:
    // 0x206a98: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x206a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_206a9c:
    // 0x206a9c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206aa0:
    // 0x206aa0: 0x24440ff0  addiu       $a0, $v0, 0xFF0
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4080));
label_206aa4:
    // 0x206aa4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x206aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_206aa8:
    // 0x206aa8: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x206aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_206aac:
    // 0x206aac: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206ab0:
    // 0x206ab0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x206ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_206ab4:
    // 0x206ab4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206ab8:
    // 0x206ab8: 0x24420178  addiu       $v0, $v0, 0x178
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 376));
label_206abc:
    // 0x206abc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206abcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206ac0:
    // 0x206ac0: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x206ac0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_206ac4:
    // 0x206ac4: 0xc05de30  jal         func_1778C0
label_206ac8:
    if (ctx->pc == 0x206AC8u) {
        ctx->pc = 0x206AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AC4u;
        // 0x206ac8: 0x240a00c0  addiu       $t2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206ACCu;
        goto label_206acc;
    }
    ctx->pc = 0x206AC4u;
    SET_GPR_U32(ctx, 31, 0x206ACCu);
    ctx->pc = 0x206AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AC4u;
    // 0x206ac8: 0x240a00c0  addiu       $t2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x206ACCu;
label_206acc:
    // 0x206acc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x206accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_206ad0:
    // 0x206ad0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x206ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_206ad4:
    // 0x206ad4: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_206ad8:
    if (ctx->pc == 0x206AD8u) {
        ctx->pc = 0x206AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AD4u;
        // 0x206ad8: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206ADCu;
        goto label_206adc;
    }
    ctx->pc = 0x206AD4u;
    {
        const bool branch_taken_0x206ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AD4u;
        // 0x206ad8: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ad4) {
            ctx->pc = 0x206A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206a74;
        }
    }
    ctx->pc = 0x206ADCu;
label_206adc:
    // 0x206adc: 0xc070834  jal         func_1C20D0
label_206ae0:
    if (ctx->pc == 0x206AE0u) {
        ctx->pc = 0x206AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206ADCu;
        // 0x206ae0: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206AE4u;
        goto label_206ae4;
    }
    ctx->pc = 0x206ADCu;
    SET_GPR_U32(ctx, 31, 0x206AE4u);
    ctx->pc = 0x206AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206ADCu;
    // 0x206ae0: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206AE4u;
label_206ae4:
    // 0x206ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206ae8:
    // 0x206ae8: 0x26041130  addiu       $a0, $s0, 0x1130
    ctx->pc = 0x206ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4400));
label_206aec:
    // 0x206aec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x206aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206af0:
    // 0x206af0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206af4:
    // 0x206af4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206af8:
    // 0x206af8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206afc:
    // 0x206afc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206b00:
    // 0x206b00: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206b00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206b04:
    // 0x206b04: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206b08:
    // 0x206b08: 0x240902f8  addiu       $t1, $zero, 0x2F8
    ctx->pc = 0x206b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
label_206b0c:
    // 0x206b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206b10:
    // 0x206b10: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206b14:
    // 0x206b14: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206b18:
    // 0x206b18: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x206b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_206b1c:
    // 0x206b1c: 0xc05de30  jal         func_1778C0
label_206b20:
    if (ctx->pc == 0x206B20u) {
        ctx->pc = 0x206B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B1Cu;
        // 0x206b20: 0x240b0028  addiu       $t3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B24u;
        goto label_206b24;
    }
    ctx->pc = 0x206B1Cu;
    SET_GPR_U32(ctx, 31, 0x206B24u);
    ctx->pc = 0x206B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B1Cu;
    // 0x206b20: 0x240b0028  addiu       $t3, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x206B24u;
label_206b24:
    // 0x206b24: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x206b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_206b28:
    // 0x206b28: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x206b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_206b2c:
    // 0x206b2c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x206b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_206b30:
    // 0x206b30: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206b34:
    // 0x206b34: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x206b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206b38:
    // 0x206b38: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x206b38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206b3c:
    // 0x206b3c: 0xc054e5c  jal         func_153970
label_206b40:
    if (ctx->pc == 0x206B40u) {
        ctx->pc = 0x206B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B3Cu;
        // 0x206b40: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B44u;
        goto label_206b44;
    }
    ctx->pc = 0x206B3Cu;
    SET_GPR_U32(ctx, 31, 0x206B44u);
    ctx->pc = 0x206B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B3Cu;
    // 0x206b40: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    { ctx->pc = 0x153970; return; }
    ctx->pc = 0x206B44u;
label_206b44:
    // 0x206b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206b48:
    // 0x206b48: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x206b48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_206b4c:
    // 0x206b4c: 0x260411d0  addiu       $a0, $s0, 0x11D0
    ctx->pc = 0x206b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4560));
label_206b50:
    // 0x206b50: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x206b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_206b54:
    // 0x206b54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206b58:
    // 0x206b58: 0xc054e74  jal         func_1539D0
label_206b5c:
    if (ctx->pc == 0x206B5Cu) {
        ctx->pc = 0x206B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B58u;
        // 0x206b5c: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B60u;
        goto label_206b60;
    }
    ctx->pc = 0x206B58u;
    SET_GPR_U32(ctx, 31, 0x206B60u);
    ctx->pc = 0x206B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B58u;
    // 0x206b5c: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    { ctx->pc = 0x1539d0; return; }
    ctx->pc = 0x206B60u;
label_206b60:
    // 0x206b60: 0xc070834  jal         func_1C20D0
label_206b64:
    if (ctx->pc == 0x206B64u) {
        ctx->pc = 0x206B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B60u;
        // 0x206b64: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B68u;
        goto label_206b68;
    }
    ctx->pc = 0x206B60u;
    SET_GPR_U32(ctx, 31, 0x206B68u);
    ctx->pc = 0x206B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B60u;
    // 0x206b64: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206B68u;
label_206b68:
    // 0x206b68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206b6c:
    // 0x206b6c: 0x26041c60  addiu       $a0, $s0, 0x1C60
    ctx->pc = 0x206b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7264));
label_206b70:
    // 0x206b70: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206b74:
    // 0x206b74: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206b78:
    // 0x206b78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206b7c:
    // 0x206b7c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206b80:
    // 0x206b80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206b84:
    // 0x206b84: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206b84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206b88:
    // 0x206b88: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206b8c:
    // 0x206b8c: 0x2409020e  addiu       $t1, $zero, 0x20E
    ctx->pc = 0x206b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
label_206b90:
    // 0x206b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206b94:
    // 0x206b94: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206b98:
    // 0x206b98: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206b9c:
    // 0x206b9c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x206b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_206ba0:
    // 0x206ba0: 0xc05de30  jal         func_1778C0
label_206ba4:
    if (ctx->pc == 0x206BA4u) {
        ctx->pc = 0x206BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BA0u;
        // 0x206ba4: 0x240b002a  addiu       $t3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BA8u;
        goto label_206ba8;
    }
    ctx->pc = 0x206BA0u;
    SET_GPR_U32(ctx, 31, 0x206BA8u);
    ctx->pc = 0x206BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BA0u;
    // 0x206ba4: 0x240b002a  addiu       $t3, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x206BA8u;
label_206ba8:
    // 0x206ba8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x206ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_206bac:
    // 0x206bac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x206bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_206bb0:
    // 0x206bb0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x206bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_206bb4:
    // 0x206bb4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206bb8:
    // 0x206bb8: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x206bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206bbc:
    // 0x206bbc: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x206bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206bc0:
    // 0x206bc0: 0xc054e5c  jal         func_153970
label_206bc4:
    if (ctx->pc == 0x206BC4u) {
        ctx->pc = 0x206BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BC0u;
        // 0x206bc4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BC8u;
        goto label_206bc8;
    }
    ctx->pc = 0x206BC0u;
    SET_GPR_U32(ctx, 31, 0x206BC8u);
    ctx->pc = 0x206BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BC0u;
    // 0x206bc4: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    { ctx->pc = 0x153970; return; }
    ctx->pc = 0x206BC8u;
label_206bc8:
    // 0x206bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206bcc:
    // 0x206bcc: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x206bccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_206bd0:
    // 0x206bd0: 0x26041d00  addiu       $a0, $s0, 0x1D00
    ctx->pc = 0x206bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7424));
label_206bd4:
    // 0x206bd4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x206bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_206bd8:
    // 0x206bd8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206bdc:
    // 0x206bdc: 0xc054e74  jal         func_1539D0
label_206be0:
    if (ctx->pc == 0x206BE0u) {
        ctx->pc = 0x206BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BDCu;
        // 0x206be0: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BE4u;
        goto label_206be4;
    }
    ctx->pc = 0x206BDCu;
    SET_GPR_U32(ctx, 31, 0x206BE4u);
    ctx->pc = 0x206BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BDCu;
    // 0x206be0: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    { ctx->pc = 0x1539d0; return; }
    ctx->pc = 0x206BE4u;
label_206be4:
    // 0x206be4: 0xc070834  jal         func_1C20D0
label_206be8:
    if (ctx->pc == 0x206BE8u) {
        ctx->pc = 0x206BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE4u;
        // 0x206be8: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BECu;
        goto label_206bec;
    }
    ctx->pc = 0x206BE4u;
    SET_GPR_U32(ctx, 31, 0x206BECu);
    ctx->pc = 0x206BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BE4u;
    // 0x206be8: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206BECu;
label_206bec:
    // 0x206bec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206bf0:
    // 0x206bf0: 0x26042380  addiu       $a0, $s0, 0x2380
    ctx->pc = 0x206bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9088));
label_206bf4:
    // 0x206bf4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x206bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206bf8:
    // 0x206bf8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206bfc:
    // 0x206bfc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206c00:
    // 0x206c00: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206c04:
    // 0x206c04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206c08:
    // 0x206c08: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206c08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206c0c:
    // 0x206c0c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206c10:
    // 0x206c10: 0x2409020e  addiu       $t1, $zero, 0x20E
    ctx->pc = 0x206c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
label_206c14:
    // 0x206c14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206c18:
    // 0x206c18: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206c1c:
    // 0x206c1c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206c20:
    // 0x206c20: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x206c20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_206c24:
    // 0x206c24: 0xc05de30  jal         func_1778C0
label_206c28:
    if (ctx->pc == 0x206C28u) {
        ctx->pc = 0x206C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C24u;
        // 0x206c28: 0x240b002a  addiu       $t3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C2Cu;
        goto label_206c2c;
    }
    ctx->pc = 0x206C24u;
    SET_GPR_U32(ctx, 31, 0x206C2Cu);
    ctx->pc = 0x206C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C24u;
    // 0x206c28: 0x240b002a  addiu       $t3, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x206C2Cu;
label_206c2c:
    // 0x206c2c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x206c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_206c30:
    // 0x206c30: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x206c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_206c34:
    // 0x206c34: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x206c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_206c38:
    // 0x206c38: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206c3c:
    // 0x206c3c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x206c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206c40:
    // 0x206c40: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x206c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206c44:
    // 0x206c44: 0xc054e5c  jal         func_153970
label_206c48:
    if (ctx->pc == 0x206C48u) {
        ctx->pc = 0x206C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C44u;
        // 0x206c48: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C4Cu;
        goto label_206c4c;
    }
    ctx->pc = 0x206C44u;
    SET_GPR_U32(ctx, 31, 0x206C4Cu);
    ctx->pc = 0x206C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C44u;
    // 0x206c48: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    { ctx->pc = 0x153970; return; }
    ctx->pc = 0x206C4Cu;
label_206c4c:
    // 0x206c4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206c50:
    // 0x206c50: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x206c50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_206c54:
    // 0x206c54: 0x26042420  addiu       $a0, $s0, 0x2420
    ctx->pc = 0x206c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9248));
label_206c58:
    // 0x206c58: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x206c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_206c5c:
    // 0x206c5c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x206c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_206c60:
    // 0x206c60: 0xc054e74  jal         func_1539D0
label_206c64:
    if (ctx->pc == 0x206C64u) {
        ctx->pc = 0x206C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C60u;
        // 0x206c64: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C68u;
        goto label_206c68;
    }
    ctx->pc = 0x206C60u;
    SET_GPR_U32(ctx, 31, 0x206C68u);
    ctx->pc = 0x206C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C60u;
    // 0x206c64: 0x2508e028  addiu       $t0, $t0, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    { ctx->pc = 0x1539d0; return; }
    ctx->pc = 0x206C68u;
label_206c68:
    // 0x206c68: 0xc070834  jal         func_1C20D0
label_206c6c:
    if (ctx->pc == 0x206C6Cu) {
        ctx->pc = 0x206C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C68u;
        // 0x206c6c: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C70u;
        goto label_206c70;
    }
    ctx->pc = 0x206C68u;
    SET_GPR_U32(ctx, 31, 0x206C70u);
    ctx->pc = 0x206C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C68u;
    // 0x206c6c: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206C70u;
label_206c70:
    // 0x206c70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206c74:
    // 0x206c74: 0x26042aa0  addiu       $a0, $s0, 0x2AA0
    ctx->pc = 0x206c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10912));
label_206c78:
    // 0x206c78: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x206c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206c7c:
    // 0x206c7c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206c80:
    // 0x206c80: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206c84:
    // 0x206c84: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206c88:
    // 0x206c88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206c8c:
    // 0x206c8c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206c8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206c90:
    // 0x206c90: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206c94:
    // 0x206c94: 0x24090238  addiu       $t1, $zero, 0x238
    ctx->pc = 0x206c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
label_206c98:
    // 0x206c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206c9c:
    // 0x206c9c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206ca0:
    // 0x206ca0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206ca4:
    // 0x206ca4: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_206ca8:
    // 0x206ca8: 0xc05de30  jal         func_1778C0
label_206cac:
    if (ctx->pc == 0x206CACu) {
        ctx->pc = 0x206CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CA8u;
        // 0x206cac: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CB0u;
        goto label_206cb0;
    }
    ctx->pc = 0x206CA8u;
    SET_GPR_U32(ctx, 31, 0x206CB0u);
    ctx->pc = 0x206CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CA8u;
    // 0x206cac: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x206CB0u;
label_206cb0:
    // 0x206cb0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x206cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206cb4:
    // 0x206cb4: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x206cb4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_206cb8:
    // 0x206cb8: 0x26042b40  addiu       $a0, $s0, 0x2B40
    ctx->pc = 0x206cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
label_206cbc:
    // 0x206cbc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x206cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_206cc0:
    // 0x206cc0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206cc4:
    // 0x206cc4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206cc8:
    // 0x206cc8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206cc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206ccc:
    // 0x206ccc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x206cccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_206cd0:
    // 0x206cd0: 0xc0708ac  jal         func_1C22B0
label_206cd4:
    if (ctx->pc == 0x206CD4u) {
        ctx->pc = 0x206CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CD0u;
        // 0x206cd4: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CD8u;
        goto label_206cd8;
    }
    ctx->pc = 0x206CD0u;
    SET_GPR_U32(ctx, 31, 0x206CD8u);
    ctx->pc = 0x206CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CD0u;
    // 0x206cd4: 0x256be028  addiu       $t3, $t3, -0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x206CD8u;
label_206cd8:
    // 0x206cd8: 0xc070834  jal         func_1C20D0
label_206cdc:
    if (ctx->pc == 0x206CDCu) {
        ctx->pc = 0x206CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206CD8u;
        // 0x206cdc: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206CE0u;
        goto label_206ce0;
    }
    ctx->pc = 0x206CD8u;
    SET_GPR_U32(ctx, 31, 0x206CE0u);
    ctx->pc = 0x206CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206CD8u;
    // 0x206cdc: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206CE0u;
label_206ce0:
    // 0x206ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206ce4:
    // 0x206ce4: 0x26042e60  addiu       $a0, $s0, 0x2E60
    ctx->pc = 0x206ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11872));
label_206ce8:
    // 0x206ce8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x206ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_206cec:
    // 0x206cec: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->pc = 0x206cf0u;
    return;
}

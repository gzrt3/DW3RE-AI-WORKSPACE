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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x206cf0u: goto label_206cf0;
        case 0x206cf4u: goto label_206cf4;
        case 0x206cf8u: goto label_206cf8;
        case 0x206cfcu: goto label_206cfc;
        case 0x206d00u: goto label_206d00;
        case 0x206d04u: goto label_206d04;
        case 0x206d08u: goto label_206d08;
        case 0x206d0cu: goto label_206d0c;
        case 0x206d10u: goto label_206d10;
        case 0x206d14u: goto label_206d14;
        case 0x206d18u: goto label_206d18;
        case 0x206d1cu: goto label_206d1c;
        case 0x206d20u: goto label_206d20;
        case 0x206d24u: goto label_206d24;
        case 0x206d28u: goto label_206d28;
        case 0x206d2cu: goto label_206d2c;
        case 0x206d30u: goto label_206d30;
        case 0x206d34u: goto label_206d34;
        case 0x206d38u: goto label_206d38;
        case 0x206d3cu: goto label_206d3c;
        case 0x206d40u: goto label_206d40;
        case 0x206d44u: goto label_206d44;
        case 0x206d48u: goto label_206d48;
        case 0x206d4cu: goto label_206d4c;
        case 0x206d50u: goto label_206d50;
        case 0x206d54u: goto label_206d54;
        case 0x206d58u: goto label_206d58;
        case 0x206d5cu: goto label_206d5c;
        case 0x206d60u: goto label_206d60;
        case 0x206d64u: goto label_206d64;
        case 0x206d68u: goto label_206d68;
        case 0x206d6cu: goto label_206d6c;
        case 0x206d70u: goto label_206d70;
        case 0x206d74u: goto label_206d74;
        case 0x206d78u: goto label_206d78;
        case 0x206d7cu: goto label_206d7c;
        case 0x206d80u: goto label_206d80;
        case 0x206d84u: goto label_206d84;
        case 0x206d88u: goto label_206d88;
        case 0x206d8cu: goto label_206d8c;
        case 0x206d90u: goto label_206d90;
        case 0x206d94u: goto label_206d94;
        case 0x206d98u: goto label_206d98;
        case 0x206d9cu: goto label_206d9c;
        case 0x206da0u: goto label_206da0;
        case 0x206da4u: goto label_206da4;
        case 0x206da8u: goto label_206da8;
        case 0x206dacu: goto label_206dac;
        case 0x206db0u: goto label_206db0;
        case 0x206db4u: goto label_206db4;
        case 0x206db8u: goto label_206db8;
        case 0x206dbcu: goto label_206dbc;
        case 0x206dc0u: goto label_206dc0;
        case 0x206dc4u: goto label_206dc4;
        case 0x206dc8u: goto label_206dc8;
        case 0x206dccu: goto label_206dcc;
        case 0x206dd0u: goto label_206dd0;
        case 0x206dd4u: goto label_206dd4;
        case 0x206dd8u: goto label_206dd8;
        case 0x206ddcu: goto label_206ddc;
        case 0x206de0u: goto label_206de0;
        case 0x206de4u: goto label_206de4;
        case 0x206de8u: goto label_206de8;
        case 0x206decu: goto label_206dec;
        case 0x206df0u: goto label_206df0;
        case 0x206df4u: goto label_206df4;
        case 0x206df8u: goto label_206df8;
        case 0x206dfcu: goto label_206dfc;
        case 0x206e00u: goto label_206e00;
        case 0x206e04u: goto label_206e04;
        case 0x206e08u: goto label_206e08;
        case 0x206e0cu: goto label_206e0c;
        case 0x206e10u: goto label_206e10;
        case 0x206e14u: goto label_206e14;
        case 0x206e18u: goto label_206e18;
        case 0x206e1cu: goto label_206e1c;
        case 0x206e20u: goto label_206e20;
        case 0x206e24u: goto label_206e24;
        case 0x206e28u: goto label_206e28;
        case 0x206e2cu: goto label_206e2c;
        case 0x206e30u: goto label_206e30;
        case 0x206e34u: goto label_206e34;
        case 0x206e38u: goto label_206e38;
        case 0x206e3cu: goto label_206e3c;
        case 0x206e40u: goto label_206e40;
        case 0x206e44u: goto label_206e44;
        case 0x206e48u: goto label_206e48;
        case 0x206e4cu: goto label_206e4c;
        case 0x206e50u: goto label_206e50;
        case 0x206e54u: goto label_206e54;
        case 0x206e58u: goto label_206e58;
        case 0x206e5cu: goto label_206e5c;
        case 0x206e60u: goto label_206e60;
        case 0x206e64u: goto label_206e64;
        case 0x206e68u: goto label_206e68;
        case 0x206e6cu: goto label_206e6c;
        case 0x206e70u: goto label_206e70;
        case 0x206e74u: goto label_206e74;
        case 0x206e78u: goto label_206e78;
        case 0x206e7cu: goto label_206e7c;
        case 0x206e80u: goto label_206e80;
        case 0x206e84u: goto label_206e84;
        case 0x206e88u: goto label_206e88;
        case 0x206e8cu: goto label_206e8c;
        case 0x206e90u: goto label_206e90;
        case 0x206e94u: goto label_206e94;
        case 0x206e98u: goto label_206e98;
        case 0x206e9cu: goto label_206e9c;
        case 0x206ea0u: goto label_206ea0;
        case 0x206ea4u: goto label_206ea4;
        case 0x206ea8u: goto label_206ea8;
        case 0x206eacu: goto label_206eac;
        case 0x206eb0u: goto label_206eb0;
        case 0x206eb4u: goto label_206eb4;
        case 0x206eb8u: goto label_206eb8;
        case 0x206ebcu: goto label_206ebc;
        case 0x206ec0u: goto label_206ec0;
        case 0x206ec4u: goto label_206ec4;
        case 0x206ec8u: goto label_206ec8;
        case 0x206eccu: goto label_206ecc;
        case 0x206ed0u: goto label_206ed0;
        case 0x206ed4u: goto label_206ed4;
        case 0x206ed8u: goto label_206ed8;
        case 0x206edcu: goto label_206edc;
        case 0x206ee0u: goto label_206ee0;
        case 0x206ee4u: goto label_206ee4;
        case 0x206ee8u: goto label_206ee8;
        case 0x206eecu: goto label_206eec;
        case 0x206ef0u: goto label_206ef0;
        case 0x206ef4u: goto label_206ef4;
        case 0x206ef8u: goto label_206ef8;
        case 0x206efcu: goto label_206efc;
        case 0x206f00u: goto label_206f00;
        case 0x206f04u: goto label_206f04;
        case 0x206f08u: goto label_206f08;
        case 0x206f0cu: goto label_206f0c;
        default: return;
    }

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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A030u, 0x20676Cu, 0x206774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A650u, 0x206778u, 0x206780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A0D0u, 0x206780u, 0x206788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x20679Cu, 0x2067A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20696Cu, 0x206974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206A44u, 0x206A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206AC4u, 0x206ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206B1Cu, 0x206B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x206B3Cu, 0x206B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x206B58u, 0x206B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206BA0u, 0x206BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x206BC0u, 0x206BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x206BDCu, 0x206BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206C24u, 0x206C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x206C44u, 0x206C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x206C60u, 0x206C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206CA8u, 0x206CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
label_206cf0:
    // 0x206cf0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206cf4:
    // 0x206cf4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206cf8:
    // 0x206cf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206cfc:
    // 0x206cfc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206d00:
    // 0x206d00: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206d04:
    // 0x206d04: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x206d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_206d08:
    // 0x206d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206d0c:
    // 0x206d0c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206d10:
    // 0x206d10: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206d14:
    // 0x206d14: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x206d14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_206d18:
    // 0x206d18: 0xc05de30  jal         func_1778C0
label_206d1c:
    if (ctx->pc == 0x206D1Cu) {
        ctx->pc = 0x206D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D18u;
        // 0x206d1c: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D20u;
        goto label_206d20;
    }
    ctx->pc = 0x206D18u;
    SET_GPR_U32(ctx, 31, 0x206D20u);
    ctx->pc = 0x206D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D18u;
    // 0x206d1c: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206D18u, 0x206D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D20u;
label_206d20:
    // 0x206d20: 0xc070834  jal         func_1C20D0
label_206d24:
    if (ctx->pc == 0x206D24u) {
        ctx->pc = 0x206D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D20u;
        // 0x206d24: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D28u;
        goto label_206d28;
    }
    ctx->pc = 0x206D20u;
    SET_GPR_U32(ctx, 31, 0x206D28u);
    ctx->pc = 0x206D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D20u;
    // 0x206d24: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x206D28u;
label_206d28:
    // 0x206d28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x206d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206d2c:
    // 0x206d2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x206d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206d30:
    // 0x206d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x206d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206d34:
    // 0x206d34: 0x0  nop
    ctx->pc = 0x206d34u;
    // NOP
label_206d38:
    // 0x206d38: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x206d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206d3c:
    // 0x206d3c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206d40:
    // 0x206d40: 0x2119021  addu        $s2, $s0, $s1
    ctx->pc = 0x206d40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_206d44:
    // 0x206d44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206d48:
    // 0x206d48: 0x26442f00  addiu       $a0, $s2, 0x2F00
    ctx->pc = 0x206d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12032));
label_206d4c:
    // 0x206d4c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206d50:
    // 0x206d50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206d54:
    // 0x206d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206d58:
    // 0x206d58: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206d5c:
    // 0x206d5c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206d60:
    // 0x206d60: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206d64:
    // 0x206d64: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206d68:
    // 0x206d68: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206d68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206d6c:
    // 0x206d6c: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x206d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_206d70:
    // 0x206d70: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x206d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_206d74:
    // 0x206d74: 0xc05de30  jal         func_1778C0
label_206d78:
    if (ctx->pc == 0x206D78u) {
        ctx->pc = 0x206D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D74u;
        // 0x206d78: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D7Cu;
        goto label_206d7c;
    }
    ctx->pc = 0x206D74u;
    SET_GPR_U32(ctx, 31, 0x206D7Cu);
    ctx->pc = 0x206D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206D74u;
    // 0x206d78: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206D74u, 0x206D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D7Cu;
label_206d7c:
    // 0x206d7c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x206d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_206d80:
    // 0x206d80: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x206d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_206d84:
    // 0x206d84: 0xa2432f70  sb          $v1, 0x2F70($s2)
    ctx->pc = 0x206d84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12144), (uint8_t)GPR_U32(ctx, 3));
label_206d88:
    // 0x206d88: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x206d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_206d8c:
    // 0x206d8c: 0xa2432f71  sb          $v1, 0x2F71($s2)
    ctx->pc = 0x206d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12145), (uint8_t)GPR_U32(ctx, 3));
label_206d90:
    // 0x206d90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x206d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206d94:
    // 0x206d94: 0xa2432f72  sb          $v1, 0x2F72($s2)
    ctx->pc = 0x206d94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12146), (uint8_t)GPR_U32(ctx, 3));
label_206d98:
    // 0x206d98: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206d9c:
    // 0x206d9c: 0xa2422f73  sb          $v0, 0x2F73($s2)
    ctx->pc = 0x206d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12147), (uint8_t)GPR_U32(ctx, 2));
label_206da0:
    // 0x206da0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206da4:
    // 0x206da4: 0xae442f74  sw          $a0, 0x2F74($s2)
    ctx->pc = 0x206da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12148), GPR_U32(ctx, 4));
label_206da8:
    // 0x206da8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206dac:
    // 0x206dac: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x206dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_206db0:
    // 0x206db0: 0x26443180  addiu       $a0, $s2, 0x3180
    ctx->pc = 0x206db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12672));
label_206db4:
    // 0x206db4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x206db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_206db8:
    // 0x206db8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x206db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_206dbc:
    // 0x206dbc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206dc0:
    // 0x206dc0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206dc4:
    // 0x206dc4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206dc8:
    // 0x206dc8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206dc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206dcc:
    // 0x206dcc: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x206dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_206dd0:
    // 0x206dd0: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x206dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_206dd4:
    // 0x206dd4: 0xc05de30  jal         func_1778C0
label_206dd8:
    if (ctx->pc == 0x206DD8u) {
        ctx->pc = 0x206DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DD4u;
        // 0x206dd8: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206DDCu;
        goto label_206ddc;
    }
    ctx->pc = 0x206DD4u;
    SET_GPR_U32(ctx, 31, 0x206DDCu);
    ctx->pc = 0x206DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206DD4u;
    // 0x206dd8: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206DD4u, 0x206DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206DDCu;
label_206ddc:
    // 0x206ddc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x206ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_206de0:
    // 0x206de0: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x206de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_206de4:
    // 0x206de4: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_206de8:
    if (ctx->pc == 0x206DE8u) {
        ctx->pc = 0x206DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DE4u;
        // 0x206de8: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206DECu;
        goto label_206dec;
    }
    ctx->pc = 0x206DE4u;
    {
        const bool branch_taken_0x206de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206DE4u;
        // 0x206de8: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206de4) {
            ctx->pc = 0x206D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206d34;
        }
    }
    ctx->pc = 0x206DECu;
label_206dec:
    // 0x206dec: 0x24090023  addiu       $t1, $zero, 0x23
    ctx->pc = 0x206decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_206df0:
    // 0x206df0: 0x2408005f  addiu       $t0, $zero, 0x5F
    ctx->pc = 0x206df0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_206df4:
    // 0x206df4: 0xa20931f0  sb          $t1, 0x31F0($s0)
    ctx->pc = 0x206df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12784), (uint8_t)GPR_U32(ctx, 9));
label_206df8:
    // 0x206df8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x206df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_206dfc:
    // 0x206dfc: 0xa20831f1  sb          $t0, 0x31F1($s0)
    ctx->pc = 0x206dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12785), (uint8_t)GPR_U32(ctx, 8));
label_206e00:
    // 0x206e00: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x206e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_206e04:
    // 0x206e04: 0xa20831f2  sb          $t0, 0x31F2($s0)
    ctx->pc = 0x206e04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12786), (uint8_t)GPR_U32(ctx, 8));
label_206e08:
    // 0x206e08: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x206e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_206e0c:
    // 0x206e0c: 0xa20731f3  sb          $a3, 0x31F3($s0)
    ctx->pc = 0x206e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12787), (uint8_t)GPR_U32(ctx, 7));
label_206e10:
    // 0x206e10: 0x2404004b  addiu       $a0, $zero, 0x4B
    ctx->pc = 0x206e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_206e14:
    // 0x206e14: 0xae0631f4  sw          $a2, 0x31F4($s0)
    ctx->pc = 0x206e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12788), GPR_U32(ctx, 6));
label_206e18:
    // 0x206e18: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x206e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_206e1c:
    // 0x206e1c: 0xa2083290  sb          $t0, 0x3290($s0)
    ctx->pc = 0x206e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12944), (uint8_t)GPR_U32(ctx, 8));
label_206e20:
    // 0x206e20: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x206e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_206e24:
    // 0x206e24: 0xa2053291  sb          $a1, 0x3291($s0)
    ctx->pc = 0x206e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12945), (uint8_t)GPR_U32(ctx, 5));
label_206e28:
    // 0x206e28: 0xa2043292  sb          $a0, 0x3292($s0)
    ctx->pc = 0x206e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12946), (uint8_t)GPR_U32(ctx, 4));
label_206e2c:
    // 0x206e2c: 0xa2073293  sb          $a3, 0x3293($s0)
    ctx->pc = 0x206e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12947), (uint8_t)GPR_U32(ctx, 7));
label_206e30:
    // 0x206e30: 0xae063294  sw          $a2, 0x3294($s0)
    ctx->pc = 0x206e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12948), GPR_U32(ctx, 6));
label_206e34:
    // 0x206e34: 0xa2083330  sb          $t0, 0x3330($s0)
    ctx->pc = 0x206e34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13104), (uint8_t)GPR_U32(ctx, 8));
label_206e38:
    // 0x206e38: 0xa2033331  sb          $v1, 0x3331($s0)
    ctx->pc = 0x206e38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13105), (uint8_t)GPR_U32(ctx, 3));
label_206e3c:
    // 0x206e3c: 0xa2053332  sb          $a1, 0x3332($s0)
    ctx->pc = 0x206e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13106), (uint8_t)GPR_U32(ctx, 5));
label_206e40:
    // 0x206e40: 0xa2073333  sb          $a3, 0x3333($s0)
    ctx->pc = 0x206e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13107), (uint8_t)GPR_U32(ctx, 7));
label_206e44:
    // 0x206e44: 0xae063334  sw          $a2, 0x3334($s0)
    ctx->pc = 0x206e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13108), GPR_U32(ctx, 6));
label_206e48:
    // 0x206e48: 0xa20933d0  sb          $t1, 0x33D0($s0)
    ctx->pc = 0x206e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13264), (uint8_t)GPR_U32(ctx, 9));
label_206e4c:
    // 0x206e4c: 0xa20833d1  sb          $t0, 0x33D1($s0)
    ctx->pc = 0x206e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13265), (uint8_t)GPR_U32(ctx, 8));
label_206e50:
    // 0x206e50: 0xa20233d2  sb          $v0, 0x33D2($s0)
    ctx->pc = 0x206e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13266), (uint8_t)GPR_U32(ctx, 2));
label_206e54:
    // 0x206e54: 0xa20733d3  sb          $a3, 0x33D3($s0)
    ctx->pc = 0x206e54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13267), (uint8_t)GPR_U32(ctx, 7));
label_206e58:
    // 0x206e58: 0xc070820  jal         func_1C2080
label_206e5c:
    if (ctx->pc == 0x206E5Cu) {
        ctx->pc = 0x206E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E58u;
        // 0x206e5c: 0xae0633d4  sw          $a2, 0x33D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 13268), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206E60u;
        goto label_206e60;
    }
    ctx->pc = 0x206E58u;
    SET_GPR_U32(ctx, 31, 0x206E60u);
    ctx->pc = 0x206E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E58u;
    // 0x206e5c: 0xae0633d4  sw          $a2, 0x33D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 13268), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2080u;
    { ctx->pc = 0x1c2080; return; }
    ctx->pc = 0x206E60u;
label_206e60:
    // 0x206e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206e64:
    // 0x206e64: 0x260435e0  addiu       $a0, $s0, 0x35E0
    ctx->pc = 0x206e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13792));
label_206e68:
    // 0x206e68: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206e6c:
    // 0x206e6c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206e70:
    // 0x206e70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206e74:
    // 0x206e74: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206e78:
    // 0x206e78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206e7c:
    // 0x206e7c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206e7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206e80:
    // 0x206e80: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206e84:
    // 0x206e84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x206e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206e88:
    // 0x206e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206e8c:
    // 0x206e8c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206e90:
    // 0x206e90: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206e94:
    // 0x206e94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x206e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206e98:
    // 0x206e98: 0xc05de30  jal         func_1778C0
label_206e9c:
    if (ctx->pc == 0x206E9Cu) {
        ctx->pc = 0x206E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206E98u;
        // 0x206e9c: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EA0u;
        goto label_206ea0;
    }
    ctx->pc = 0x206E98u;
    SET_GPR_U32(ctx, 31, 0x206EA0u);
    ctx->pc = 0x206E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206E98u;
    // 0x206e9c: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206E98u, 0x206EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206EA0u;
label_206ea0:
    // 0x206ea0: 0xc07082c  jal         func_1C20B0
label_206ea4:
    if (ctx->pc == 0x206EA4u) {
        ctx->pc = 0x206EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EA0u;
        // 0x206ea4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EA8u;
        goto label_206ea8;
    }
    ctx->pc = 0x206EA0u;
    SET_GPR_U32(ctx, 31, 0x206EA8u);
    ctx->pc = 0x206EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206EA0u;
    // 0x206ea4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x206EA8u;
label_206ea8:
    // 0x206ea8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206eac:
    // 0x206eac: 0x26043400  addiu       $a0, $s0, 0x3400
    ctx->pc = 0x206eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13312));
label_206eb0:
    // 0x206eb0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206eb4:
    // 0x206eb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206eb8:
    // 0x206eb8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206ebc:
    // 0x206ebc: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x206ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_206ec0:
    // 0x206ec0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206ec4:
    // 0x206ec4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x206ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_206ec8:
    // 0x206ec8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_206ecc:
    // 0x206ecc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x206eccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_206ed0:
    // 0x206ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206ed4:
    // 0x206ed4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206ed8:
    // 0x206ed8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_206edc:
    // 0x206edc: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x206edcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_206ee0:
    // 0x206ee0: 0x240a01b8  addiu       $t2, $zero, 0x1B8
    ctx->pc = 0x206ee0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
label_206ee4:
    // 0x206ee4: 0xc05de30  jal         func_1778C0
label_206ee8:
    if (ctx->pc == 0x206EE8u) {
        ctx->pc = 0x206EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EE4u;
        // 0x206ee8: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EECu;
        goto label_206eec;
    }
    ctx->pc = 0x206EE4u;
    SET_GPR_U32(ctx, 31, 0x206EECu);
    ctx->pc = 0x206EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206EE4u;
    // 0x206ee8: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x206EE4u, 0x206EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206EECu;
label_206eec:
    // 0x206eec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x206eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_206ef0:
    // 0x206ef0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_206ef4:
    // 0x206ef4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_206ef8:
    // 0x206ef8: 0x260434a0  addiu       $a0, $s0, 0x34A0
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 13472));
label_206efc:
    // 0x206efc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x206efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_206f00:
    // 0x206f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206f04:
    // 0x206f04: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x206f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_206f08:
    // 0x206f08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206f0c:
    // 0x206f0c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x206f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->pc = 0x206f10u;
    return;
}

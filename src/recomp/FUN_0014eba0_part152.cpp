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


void FUN_0014eba0_part152(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x198750u: goto label_198750;
        case 0x198754u: goto label_198754;
        case 0x198758u: goto label_198758;
        case 0x19875cu: goto label_19875c;
        case 0x198760u: goto label_198760;
        case 0x198764u: goto label_198764;
        case 0x198768u: goto label_198768;
        case 0x19876cu: goto label_19876c;
        case 0x198770u: goto label_198770;
        case 0x198774u: goto label_198774;
        case 0x198778u: goto label_198778;
        case 0x19877cu: goto label_19877c;
        case 0x198780u: goto label_198780;
        case 0x198784u: goto label_198784;
        case 0x198788u: goto label_198788;
        case 0x19878cu: goto label_19878c;
        case 0x198790u: goto label_198790;
        case 0x198794u: goto label_198794;
        case 0x198798u: goto label_198798;
        case 0x19879cu: goto label_19879c;
        case 0x1987a0u: goto label_1987a0;
        case 0x1987a4u: goto label_1987a4;
        case 0x1987a8u: goto label_1987a8;
        case 0x1987acu: goto label_1987ac;
        case 0x1987b0u: goto label_1987b0;
        case 0x1987b4u: goto label_1987b4;
        case 0x1987b8u: goto label_1987b8;
        case 0x1987bcu: goto label_1987bc;
        case 0x1987c0u: goto label_1987c0;
        case 0x1987c4u: goto label_1987c4;
        case 0x1987c8u: goto label_1987c8;
        case 0x1987ccu: goto label_1987cc;
        case 0x1987d0u: goto label_1987d0;
        case 0x1987d4u: goto label_1987d4;
        case 0x1987d8u: goto label_1987d8;
        case 0x1987dcu: goto label_1987dc;
        case 0x1987e0u: goto label_1987e0;
        case 0x1987e4u: goto label_1987e4;
        case 0x1987e8u: goto label_1987e8;
        case 0x1987ecu: goto label_1987ec;
        case 0x1987f0u: goto label_1987f0;
        case 0x1987f4u: goto label_1987f4;
        case 0x1987f8u: goto label_1987f8;
        case 0x1987fcu: goto label_1987fc;
        case 0x198800u: goto label_198800;
        case 0x198804u: goto label_198804;
        case 0x198808u: goto label_198808;
        case 0x19880cu: goto label_19880c;
        case 0x198810u: goto label_198810;
        case 0x198814u: goto label_198814;
        case 0x198818u: goto label_198818;
        case 0x19881cu: goto label_19881c;
        case 0x198820u: goto label_198820;
        case 0x198824u: goto label_198824;
        case 0x198828u: goto label_198828;
        case 0x19882cu: goto label_19882c;
        case 0x198830u: goto label_198830;
        case 0x198834u: goto label_198834;
        case 0x198838u: goto label_198838;
        case 0x19883cu: goto label_19883c;
        case 0x198840u: goto label_198840;
        case 0x198844u: goto label_198844;
        case 0x198848u: goto label_198848;
        case 0x19884cu: goto label_19884c;
        case 0x198850u: goto label_198850;
        case 0x198854u: goto label_198854;
        case 0x198858u: goto label_198858;
        case 0x19885cu: goto label_19885c;
        case 0x198860u: goto label_198860;
        case 0x198864u: goto label_198864;
        case 0x198868u: goto label_198868;
        case 0x19886cu: goto label_19886c;
        case 0x198870u: goto label_198870;
        case 0x198874u: goto label_198874;
        case 0x198878u: goto label_198878;
        case 0x19887cu: goto label_19887c;
        case 0x198880u: goto label_198880;
        case 0x198884u: goto label_198884;
        case 0x198888u: goto label_198888;
        case 0x19888cu: goto label_19888c;
        case 0x198890u: goto label_198890;
        case 0x198894u: goto label_198894;
        case 0x198898u: goto label_198898;
        case 0x19889cu: goto label_19889c;
        case 0x1988a0u: goto label_1988a0;
        case 0x1988a4u: goto label_1988a4;
        case 0x1988a8u: goto label_1988a8;
        case 0x1988acu: goto label_1988ac;
        case 0x1988b0u: goto label_1988b0;
        case 0x1988b4u: goto label_1988b4;
        case 0x1988b8u: goto label_1988b8;
        case 0x1988bcu: goto label_1988bc;
        case 0x1988c0u: goto label_1988c0;
        case 0x1988c4u: goto label_1988c4;
        case 0x1988c8u: goto label_1988c8;
        case 0x1988ccu: goto label_1988cc;
        case 0x1988d0u: goto label_1988d0;
        case 0x1988d4u: goto label_1988d4;
        case 0x1988d8u: goto label_1988d8;
        case 0x1988dcu: goto label_1988dc;
        case 0x1988e0u: goto label_1988e0;
        case 0x1988e4u: goto label_1988e4;
        case 0x1988e8u: goto label_1988e8;
        case 0x1988ecu: goto label_1988ec;
        case 0x1988f0u: goto label_1988f0;
        case 0x1988f4u: goto label_1988f4;
        case 0x1988f8u: goto label_1988f8;
        case 0x1988fcu: goto label_1988fc;
        case 0x198900u: goto label_198900;
        case 0x198904u: goto label_198904;
        case 0x198908u: goto label_198908;
        case 0x19890cu: goto label_19890c;
        case 0x198910u: goto label_198910;
        case 0x198914u: goto label_198914;
        case 0x198918u: goto label_198918;
        case 0x19891cu: goto label_19891c;
        case 0x198920u: goto label_198920;
        case 0x198924u: goto label_198924;
        case 0x198928u: goto label_198928;
        case 0x19892cu: goto label_19892c;
        case 0x198930u: goto label_198930;
        case 0x198934u: goto label_198934;
        case 0x198938u: goto label_198938;
        case 0x19893cu: goto label_19893c;
        case 0x198940u: goto label_198940;
        case 0x198944u: goto label_198944;
        case 0x198948u: goto label_198948;
        case 0x19894cu: goto label_19894c;
        case 0x198950u: goto label_198950;
        case 0x198954u: goto label_198954;
        case 0x198958u: goto label_198958;
        case 0x19895cu: goto label_19895c;
        case 0x198960u: goto label_198960;
        case 0x198964u: goto label_198964;
        case 0x198968u: goto label_198968;
        case 0x19896cu: goto label_19896c;
        case 0x198970u: goto label_198970;
        case 0x198974u: goto label_198974;
        case 0x198978u: goto label_198978;
        case 0x19897cu: goto label_19897c;
        case 0x198980u: goto label_198980;
        case 0x198984u: goto label_198984;
        case 0x198988u: goto label_198988;
        case 0x19898cu: goto label_19898c;
        case 0x198990u: goto label_198990;
        case 0x198994u: goto label_198994;
        case 0x198998u: goto label_198998;
        case 0x19899cu: goto label_19899c;
        case 0x1989a0u: goto label_1989a0;
        case 0x1989a4u: goto label_1989a4;
        case 0x1989a8u: goto label_1989a8;
        case 0x1989acu: goto label_1989ac;
        case 0x1989b0u: goto label_1989b0;
        case 0x1989b4u: goto label_1989b4;
        case 0x1989b8u: goto label_1989b8;
        case 0x1989bcu: goto label_1989bc;
        case 0x1989c0u: goto label_1989c0;
        case 0x1989c4u: goto label_1989c4;
        case 0x1989c8u: goto label_1989c8;
        case 0x1989ccu: goto label_1989cc;
        case 0x1989d0u: goto label_1989d0;
        case 0x1989d4u: goto label_1989d4;
        case 0x1989d8u: goto label_1989d8;
        case 0x1989dcu: goto label_1989dc;
        case 0x1989e0u: goto label_1989e0;
        case 0x1989e4u: goto label_1989e4;
        case 0x1989e8u: goto label_1989e8;
        case 0x1989ecu: goto label_1989ec;
        case 0x1989f0u: goto label_1989f0;
        case 0x1989f4u: goto label_1989f4;
        case 0x1989f8u: goto label_1989f8;
        case 0x1989fcu: goto label_1989fc;
        case 0x198a00u: goto label_198a00;
        case 0x198a04u: goto label_198a04;
        case 0x198a08u: goto label_198a08;
        case 0x198a0cu: goto label_198a0c;
        case 0x198a10u: goto label_198a10;
        case 0x198a14u: goto label_198a14;
        case 0x198a18u: goto label_198a18;
        case 0x198a1cu: goto label_198a1c;
        case 0x198a20u: goto label_198a20;
        case 0x198a24u: goto label_198a24;
        case 0x198a28u: goto label_198a28;
        case 0x198a2cu: goto label_198a2c;
        case 0x198a30u: goto label_198a30;
        case 0x198a34u: goto label_198a34;
        case 0x198a38u: goto label_198a38;
        case 0x198a3cu: goto label_198a3c;
        case 0x198a40u: goto label_198a40;
        case 0x198a44u: goto label_198a44;
        case 0x198a48u: goto label_198a48;
        case 0x198a4cu: goto label_198a4c;
        case 0x198a50u: goto label_198a50;
        case 0x198a54u: goto label_198a54;
        case 0x198a58u: goto label_198a58;
        case 0x198a5cu: goto label_198a5c;
        case 0x198a60u: goto label_198a60;
        case 0x198a64u: goto label_198a64;
        case 0x198a68u: goto label_198a68;
        case 0x198a6cu: goto label_198a6c;
        case 0x198a70u: goto label_198a70;
        case 0x198a74u: goto label_198a74;
        case 0x198a78u: goto label_198a78;
        case 0x198a7cu: goto label_198a7c;
        case 0x198a80u: goto label_198a80;
        case 0x198a84u: goto label_198a84;
        case 0x198a88u: goto label_198a88;
        case 0x198a8cu: goto label_198a8c;
        case 0x198a90u: goto label_198a90;
        case 0x198a94u: goto label_198a94;
        case 0x198a98u: goto label_198a98;
        case 0x198a9cu: goto label_198a9c;
        case 0x198aa0u: goto label_198aa0;
        case 0x198aa4u: goto label_198aa4;
        case 0x198aa8u: goto label_198aa8;
        case 0x198aacu: goto label_198aac;
        case 0x198ab0u: goto label_198ab0;
        case 0x198ab4u: goto label_198ab4;
        case 0x198ab8u: goto label_198ab8;
        case 0x198abcu: goto label_198abc;
        case 0x198ac0u: goto label_198ac0;
        case 0x198ac4u: goto label_198ac4;
        case 0x198ac8u: goto label_198ac8;
        case 0x198accu: goto label_198acc;
        case 0x198ad0u: goto label_198ad0;
        case 0x198ad4u: goto label_198ad4;
        case 0x198ad8u: goto label_198ad8;
        case 0x198adcu: goto label_198adc;
        case 0x198ae0u: goto label_198ae0;
        case 0x198ae4u: goto label_198ae4;
        case 0x198ae8u: goto label_198ae8;
        case 0x198aecu: goto label_198aec;
        case 0x198af0u: goto label_198af0;
        case 0x198af4u: goto label_198af4;
        case 0x198af8u: goto label_198af8;
        case 0x198afcu: goto label_198afc;
        case 0x198b00u: goto label_198b00;
        case 0x198b04u: goto label_198b04;
        case 0x198b08u: goto label_198b08;
        case 0x198b0cu: goto label_198b0c;
        case 0x198b10u: goto label_198b10;
        case 0x198b14u: goto label_198b14;
        case 0x198b18u: goto label_198b18;
        case 0x198b1cu: goto label_198b1c;
        case 0x198b20u: goto label_198b20;
        case 0x198b24u: goto label_198b24;
        case 0x198b28u: goto label_198b28;
        case 0x198b2cu: goto label_198b2c;
        case 0x198b30u: goto label_198b30;
        case 0x198b34u: goto label_198b34;
        case 0x198b38u: goto label_198b38;
        case 0x198b3cu: goto label_198b3c;
        case 0x198b40u: goto label_198b40;
        case 0x198b44u: goto label_198b44;
        case 0x198b48u: goto label_198b48;
        case 0x198b4cu: goto label_198b4c;
        case 0x198b50u: goto label_198b50;
        case 0x198b54u: goto label_198b54;
        case 0x198b58u: goto label_198b58;
        case 0x198b5cu: goto label_198b5c;
        case 0x198b60u: goto label_198b60;
        case 0x198b64u: goto label_198b64;
        case 0x198b68u: goto label_198b68;
        case 0x198b6cu: goto label_198b6c;
        case 0x198b70u: goto label_198b70;
        case 0x198b74u: goto label_198b74;
        case 0x198b78u: goto label_198b78;
        case 0x198b7cu: goto label_198b7c;
        case 0x198b80u: goto label_198b80;
        case 0x198b84u: goto label_198b84;
        case 0x198b88u: goto label_198b88;
        case 0x198b8cu: goto label_198b8c;
        case 0x198b90u: goto label_198b90;
        case 0x198b94u: goto label_198b94;
        case 0x198b98u: goto label_198b98;
        case 0x198b9cu: goto label_198b9c;
        case 0x198ba0u: goto label_198ba0;
        case 0x198ba4u: goto label_198ba4;
        case 0x198ba8u: goto label_198ba8;
        case 0x198bacu: goto label_198bac;
        case 0x198bb0u: goto label_198bb0;
        case 0x198bb4u: goto label_198bb4;
        case 0x198bb8u: goto label_198bb8;
        case 0x198bbcu: goto label_198bbc;
        case 0x198bc0u: goto label_198bc0;
        case 0x198bc4u: goto label_198bc4;
        case 0x198bc8u: goto label_198bc8;
        case 0x198bccu: goto label_198bcc;
        case 0x198bd0u: goto label_198bd0;
        case 0x198bd4u: goto label_198bd4;
        case 0x198bd8u: goto label_198bd8;
        case 0x198bdcu: goto label_198bdc;
        case 0x198be0u: goto label_198be0;
        case 0x198be4u: goto label_198be4;
        case 0x198be8u: goto label_198be8;
        case 0x198becu: goto label_198bec;
        case 0x198bf0u: goto label_198bf0;
        case 0x198bf4u: goto label_198bf4;
        case 0x198bf8u: goto label_198bf8;
        case 0x198bfcu: goto label_198bfc;
        case 0x198c00u: goto label_198c00;
        case 0x198c04u: goto label_198c04;
        case 0x198c08u: goto label_198c08;
        case 0x198c0cu: goto label_198c0c;
        case 0x198c10u: goto label_198c10;
        case 0x198c14u: goto label_198c14;
        case 0x198c18u: goto label_198c18;
        case 0x198c1cu: goto label_198c1c;
        case 0x198c20u: goto label_198c20;
        case 0x198c24u: goto label_198c24;
        case 0x198c28u: goto label_198c28;
        case 0x198c2cu: goto label_198c2c;
        case 0x198c30u: goto label_198c30;
        case 0x198c34u: goto label_198c34;
        case 0x198c38u: goto label_198c38;
        case 0x198c3cu: goto label_198c3c;
        case 0x198c40u: goto label_198c40;
        case 0x198c44u: goto label_198c44;
        case 0x198c48u: goto label_198c48;
        case 0x198c4cu: goto label_198c4c;
        case 0x198c50u: goto label_198c50;
        case 0x198c54u: goto label_198c54;
        case 0x198c58u: goto label_198c58;
        case 0x198c5cu: goto label_198c5c;
        case 0x198c60u: goto label_198c60;
        case 0x198c64u: goto label_198c64;
        case 0x198c68u: goto label_198c68;
        case 0x198c6cu: goto label_198c6c;
        case 0x198c70u: goto label_198c70;
        case 0x198c74u: goto label_198c74;
        case 0x198c78u: goto label_198c78;
        case 0x198c7cu: goto label_198c7c;
        case 0x198c80u: goto label_198c80;
        case 0x198c84u: goto label_198c84;
        case 0x198c88u: goto label_198c88;
        case 0x198c8cu: goto label_198c8c;
        case 0x198c90u: goto label_198c90;
        case 0x198c94u: goto label_198c94;
        case 0x198c98u: goto label_198c98;
        case 0x198c9cu: goto label_198c9c;
        case 0x198ca0u: goto label_198ca0;
        case 0x198ca4u: goto label_198ca4;
        case 0x198ca8u: goto label_198ca8;
        case 0x198cacu: goto label_198cac;
        case 0x198cb0u: goto label_198cb0;
        case 0x198cb4u: goto label_198cb4;
        case 0x198cb8u: goto label_198cb8;
        case 0x198cbcu: goto label_198cbc;
        case 0x198cc0u: goto label_198cc0;
        case 0x198cc4u: goto label_198cc4;
        case 0x198cc8u: goto label_198cc8;
        case 0x198cccu: goto label_198ccc;
        case 0x198cd0u: goto label_198cd0;
        case 0x198cd4u: goto label_198cd4;
        case 0x198cd8u: goto label_198cd8;
        case 0x198cdcu: goto label_198cdc;
        case 0x198ce0u: goto label_198ce0;
        case 0x198ce4u: goto label_198ce4;
        case 0x198ce8u: goto label_198ce8;
        case 0x198cecu: goto label_198cec;
        case 0x198cf0u: goto label_198cf0;
        case 0x198cf4u: goto label_198cf4;
        case 0x198cf8u: goto label_198cf8;
        case 0x198cfcu: goto label_198cfc;
        case 0x198d00u: goto label_198d00;
        case 0x198d04u: goto label_198d04;
        case 0x198d08u: goto label_198d08;
        case 0x198d0cu: goto label_198d0c;
        case 0x198d10u: goto label_198d10;
        case 0x198d14u: goto label_198d14;
        case 0x198d18u: goto label_198d18;
        case 0x198d1cu: goto label_198d1c;
        case 0x198d20u: goto label_198d20;
        case 0x198d24u: goto label_198d24;
        case 0x198d28u: goto label_198d28;
        case 0x198d2cu: goto label_198d2c;
        case 0x198d30u: goto label_198d30;
        case 0x198d34u: goto label_198d34;
        case 0x198d38u: goto label_198d38;
        case 0x198d3cu: goto label_198d3c;
        case 0x198d40u: goto label_198d40;
        case 0x198d44u: goto label_198d44;
        case 0x198d48u: goto label_198d48;
        case 0x198d4cu: goto label_198d4c;
        case 0x198d50u: goto label_198d50;
        case 0x198d54u: goto label_198d54;
        case 0x198d58u: goto label_198d58;
        case 0x198d5cu: goto label_198d5c;
        case 0x198d60u: goto label_198d60;
        case 0x198d64u: goto label_198d64;
        case 0x198d68u: goto label_198d68;
        case 0x198d6cu: goto label_198d6c;
        case 0x198d70u: goto label_198d70;
        case 0x198d74u: goto label_198d74;
        case 0x198d78u: goto label_198d78;
        case 0x198d7cu: goto label_198d7c;
        case 0x198d80u: goto label_198d80;
        case 0x198d84u: goto label_198d84;
        case 0x198d88u: goto label_198d88;
        case 0x198d8cu: goto label_198d8c;
        case 0x198d90u: goto label_198d90;
        case 0x198d94u: goto label_198d94;
        case 0x198d98u: goto label_198d98;
        case 0x198d9cu: goto label_198d9c;
        case 0x198da0u: goto label_198da0;
        case 0x198da4u: goto label_198da4;
        case 0x198da8u: goto label_198da8;
        case 0x198dacu: goto label_198dac;
        case 0x198db0u: goto label_198db0;
        case 0x198db4u: goto label_198db4;
        case 0x198db8u: goto label_198db8;
        case 0x198dbcu: goto label_198dbc;
        case 0x198dc0u: goto label_198dc0;
        case 0x198dc4u: goto label_198dc4;
        case 0x198dc8u: goto label_198dc8;
        case 0x198dccu: goto label_198dcc;
        case 0x198dd0u: goto label_198dd0;
        case 0x198dd4u: goto label_198dd4;
        case 0x198dd8u: goto label_198dd8;
        case 0x198ddcu: goto label_198ddc;
        case 0x198de0u: goto label_198de0;
        case 0x198de4u: goto label_198de4;
        case 0x198de8u: goto label_198de8;
        case 0x198decu: goto label_198dec;
        case 0x198df0u: goto label_198df0;
        case 0x198df4u: goto label_198df4;
        case 0x198df8u: goto label_198df8;
        case 0x198dfcu: goto label_198dfc;
        case 0x198e00u: goto label_198e00;
        case 0x198e04u: goto label_198e04;
        case 0x198e08u: goto label_198e08;
        case 0x198e0cu: goto label_198e0c;
        case 0x198e10u: goto label_198e10;
        case 0x198e14u: goto label_198e14;
        case 0x198e18u: goto label_198e18;
        case 0x198e1cu: goto label_198e1c;
        case 0x198e20u: goto label_198e20;
        case 0x198e24u: goto label_198e24;
        case 0x198e28u: goto label_198e28;
        case 0x198e2cu: goto label_198e2c;
        case 0x198e30u: goto label_198e30;
        case 0x198e34u: goto label_198e34;
        case 0x198e38u: goto label_198e38;
        case 0x198e3cu: goto label_198e3c;
        case 0x198e40u: goto label_198e40;
        case 0x198e44u: goto label_198e44;
        case 0x198e48u: goto label_198e48;
        case 0x198e4cu: goto label_198e4c;
        case 0x198e50u: goto label_198e50;
        case 0x198e54u: goto label_198e54;
        case 0x198e58u: goto label_198e58;
        case 0x198e5cu: goto label_198e5c;
        case 0x198e60u: goto label_198e60;
        case 0x198e64u: goto label_198e64;
        case 0x198e68u: goto label_198e68;
        case 0x198e6cu: goto label_198e6c;
        case 0x198e70u: goto label_198e70;
        case 0x198e74u: goto label_198e74;
        case 0x198e78u: goto label_198e78;
        case 0x198e7cu: goto label_198e7c;
        case 0x198e80u: goto label_198e80;
        case 0x198e84u: goto label_198e84;
        case 0x198e88u: goto label_198e88;
        case 0x198e8cu: goto label_198e8c;
        case 0x198e90u: goto label_198e90;
        case 0x198e94u: goto label_198e94;
        case 0x198e98u: goto label_198e98;
        case 0x198e9cu: goto label_198e9c;
        case 0x198ea0u: goto label_198ea0;
        case 0x198ea4u: goto label_198ea4;
        case 0x198ea8u: goto label_198ea8;
        case 0x198eacu: goto label_198eac;
        case 0x198eb0u: goto label_198eb0;
        case 0x198eb4u: goto label_198eb4;
        case 0x198eb8u: goto label_198eb8;
        case 0x198ebcu: goto label_198ebc;
        case 0x198ec0u: goto label_198ec0;
        case 0x198ec4u: goto label_198ec4;
        case 0x198ec8u: goto label_198ec8;
        case 0x198eccu: goto label_198ecc;
        case 0x198ed0u: goto label_198ed0;
        case 0x198ed4u: goto label_198ed4;
        case 0x198ed8u: goto label_198ed8;
        case 0x198edcu: goto label_198edc;
        case 0x198ee0u: goto label_198ee0;
        case 0x198ee4u: goto label_198ee4;
        case 0x198ee8u: goto label_198ee8;
        case 0x198eecu: goto label_198eec;
        case 0x198ef0u: goto label_198ef0;
        case 0x198ef4u: goto label_198ef4;
        case 0x198ef8u: goto label_198ef8;
        case 0x198efcu: goto label_198efc;
        case 0x198f00u: goto label_198f00;
        case 0x198f04u: goto label_198f04;
        case 0x198f08u: goto label_198f08;
        case 0x198f0cu: goto label_198f0c;
        case 0x198f10u: goto label_198f10;
        case 0x198f14u: goto label_198f14;
        case 0x198f18u: goto label_198f18;
        case 0x198f1cu: goto label_198f1c;
        default: return;
    }

label_198750:
    if (ctx->pc == 0x198750u) {
        ctx->pc = 0x198750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19874Cu;
        // 0x198750: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198754u;
        goto label_198754;
    }
    ctx->pc = 0x19874Cu;
    {
        const bool branch_taken_0x19874c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x198750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19874Cu;
        // 0x198750: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19874c) {
            ctx->pc = 0x198764u;
            goto label_198764;
        }
    }
    ctx->pc = 0x198754u;
label_198754:
    // 0x198754: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_198758:
    // 0x198758: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x198758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_19875c:
    // 0x19875c: 0x10000003  b           . + 4 + (0x3 << 2)
label_198760:
    if (ctx->pc == 0x198760u) {
        ctx->pc = 0x198760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19875Cu;
        // 0x198760: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198764u;
        goto label_198764;
    }
    ctx->pc = 0x19875Cu;
    {
        const bool branch_taken_0x19875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19875Cu;
        // 0x198760: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19875c) {
            ctx->pc = 0x19876Cu;
            goto label_19876c;
        }
    }
    ctx->pc = 0x198764u;
label_198764:
    // 0x198764: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_198768:
    // 0x198768: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x198768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_19876c:
    // 0x19876c: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x19876cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
label_198770:
    // 0x198770: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x198770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_198774:
    // 0x198774: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_198778:
    // 0x198778: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x198778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_19877c:
    // 0x19877c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_198780:
    if (ctx->pc == 0x198780u) {
        ctx->pc = 0x198780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19877Cu;
        // 0x198780: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198784u;
        goto label_198784;
    }
    ctx->pc = 0x19877Cu;
    {
        const bool branch_taken_0x19877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19877Cu;
        // 0x198780: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19877c) {
            ctx->pc = 0x1987E8u;
            goto label_1987e8;
        }
    }
    ctx->pc = 0x198784u;
label_198784:
    // 0x198784: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x198784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_198788:
    // 0x198788: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x198788u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_19878c:
    // 0x19878c: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x19878cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
label_198790:
    // 0x198790: 0x26450024  addiu       $a1, $s2, 0x24
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_198794:
    // 0x198794: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_198798:
    if (ctx->pc == 0x198798u) {
        ctx->pc = 0x198798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198794u;
        // 0x198798: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19879Cu;
        goto label_19879c;
    }
    ctx->pc = 0x198794u;
    {
        const bool branch_taken_0x198794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198794) {
            ctx->pc = 0x198798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198794u;
            // 0x198798: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19879Cu;
            goto label_19879c;
        }
    }
    ctx->pc = 0x19879Cu;
label_19879c:
    // 0x19879c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x19879cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
label_1987a0:
    // 0x1987a0: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x1987a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
label_1987a4:
    // 0x1987a4: 0x1012  mflo        $v0
    ctx->pc = 0x1987a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1987a8:
    // 0x1987a8: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x1987a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1987ac:
    // 0x1987ac: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x1987acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1987b0:
    // 0x1987b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1987b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1987b4:
    // 0x1987b4: 0x64e30290  daddiu      $v1, $a3, 0x290
    ctx->pc = 0x1987b4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)656);
label_1987b8:
    // 0x1987b8: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1987b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
label_1987bc:
    // 0x1987bc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1987bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1987c0:
    // 0x1987c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1987c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1987c4:
    // 0x1987c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1987c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1987c8:
    // 0x1987c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1987c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1987cc:
    // 0x1987cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1987ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1987d0:
    // 0x1987d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1987d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1987d4:
    // 0x1987d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1987d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1987d8:
    // 0x1987d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1987dc:
    if (ctx->pc == 0x1987DCu) {
        ctx->pc = 0x1987DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987D8u;
        // 0x1987dc: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1987E0u;
        goto label_1987e0;
    }
    ctx->pc = 0x1987D8u;
    {
        const bool branch_taken_0x1987d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987D8u;
        // 0x1987dc: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987d8) {
            ctx->pc = 0x1987E8u;
            goto label_1987e8;
        }
    }
    ctx->pc = 0x1987E0u;
label_1987e0:
    // 0x1987e0: 0xc08ee2e  jal         func_23B8B8
label_1987e4:
    if (ctx->pc == 0x1987E4u) {
        ctx->pc = 0x1987E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987E0u;
        // 0x1987e4: 0x24849a68  addiu       $a0, $a0, -0x6598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1987E8u;
        goto label_1987e8;
    }
    ctx->pc = 0x1987E0u;
    SET_GPR_U32(ctx, 31, 0x1987E8u);
    ctx->pc = 0x1987E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1987E0u;
    // 0x1987e4: 0x24849a68  addiu       $a0, $a0, -0x6598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1987E8u;
label_1987e8:
    // 0x1987e8: 0xfe200020  sd          $zero, 0x20($s1)
    ctx->pc = 0x1987e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 0));
label_1987ec:
    // 0x1987ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1987ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1987f0:
    // 0x1987f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1987f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1987f4:
    // 0x1987f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1987f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1987f8:
    // 0x1987f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1987f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1987fc:
    // 0x1987fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1987fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198800:
    // 0x198800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_198804:
    // 0x198804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198808:
    // 0x198808: 0x3e00008  jr          $ra
label_19880c:
    if (ctx->pc == 0x19880Cu) {
        ctx->pc = 0x19880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198808u;
        // 0x19880c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198810u;
        goto label_198810;
    }
    ctx->pc = 0x198808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198808u;
        // 0x19880c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198810u;
label_198810:
    // 0x198810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_198814:
    // 0x198814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_198818:
    // 0x198818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19881c:
    // 0x19881c: 0xc06614a  jal         func_198528
label_198820:
    if (ctx->pc == 0x198820u) {
        ctx->pc = 0x198820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19881Cu;
        // 0x198820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198824u;
        goto label_198824;
    }
    ctx->pc = 0x19881Cu;
    SET_GPR_U32(ctx, 31, 0x198824u);
    ctx->pc = 0x198820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19881Cu;
    // 0x198820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x198824u;
label_198824:
    // 0x198824: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x198824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_198828:
    // 0x198828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19882c:
    // 0x19882c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_198830:
    if (ctx->pc == 0x198830u) {
        ctx->pc = 0x198830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19882Cu;
        // 0x198830: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198834u;
        goto label_198834;
    }
    ctx->pc = 0x19882Cu;
    {
        const bool branch_taken_0x19882c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19882Cu;
        // 0x198830: 0xde040000  ld          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19882c) {
            ctx->pc = 0x198874u;
            goto label_198874;
        }
    }
    ctx->pc = 0x198834u;
label_198834:
    // 0x198834: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x198834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_198838:
    // 0x198838: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_19883c:
    // 0x19883c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
label_198840:
    // 0x198840: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x198840u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
label_198844:
    // 0x198844: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x198844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
label_198848:
    // 0x198848: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x198848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
label_19884c:
    // 0x19884c: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x19884cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
label_198850:
    // 0x198850: 0xde050010  ld          $a1, 0x10($s0)
    ctx->pc = 0x198850u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_198854:
    // 0x198854: 0x348400c0  ori         $a0, $a0, 0xC0
    ctx->pc = 0x198854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
label_198858:
    // 0x198858: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x198858u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_19885c:
    // 0x19885c: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x19885cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_198860:
    // 0x198860: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x198860u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_198864:
    // 0x198864: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x198864u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_198868:
    // 0x198868: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x198868u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_19886c:
    // 0x19886c: 0x10000014  b           . + 4 + (0x14 << 2)
label_198870:
    if (ctx->pc == 0x198870u) {
        ctx->pc = 0x198870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19886Cu;
        // 0x198870: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198874u;
        goto label_198874;
    }
    ctx->pc = 0x19886Cu;
    {
        const bool branch_taken_0x19886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19886Cu;
        // 0x198870: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19886c) {
            ctx->pc = 0x1988C0u;
            goto label_1988c0;
        }
    }
    ctx->pc = 0x198874u;
label_198874:
    // 0x198874: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x198874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
label_198878:
    // 0x198878: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x198878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
label_19887c:
    // 0x19887c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x19887cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
label_198880:
    // 0x198880: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x198880u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
label_198884:
    // 0x198884: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x198884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_198888:
    // 0x198888: 0x34c60090  ori         $a2, $a2, 0x90
    ctx->pc = 0x198888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
label_19888c:
    // 0x19888c: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x19888cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
label_198890:
    // 0x198890: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x198890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_198894:
    // 0x198894: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x198894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
label_198898:
    // 0x198898: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x198898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
label_19889c:
    // 0x19889c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x19889cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1988a0:
    // 0x1988a0: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x1988a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
label_1988a4:
    // 0x1988a4: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1988a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1988a8:
    // 0x1988a8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1988a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_1988ac:
    // 0x1988ac: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1988acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1988b0:
    // 0x1988b0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1988b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_1988b4:
    // 0x1988b4: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x1988b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1988b8:
    // 0x1988b8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1988b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_1988bc:
    // 0x1988bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1988bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1988c0:
    // 0x1988c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1988c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1988c4:
    // 0x1988c4: 0x3e00008  jr          $ra
label_1988c8:
    if (ctx->pc == 0x1988C8u) {
        ctx->pc = 0x1988C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988C4u;
        // 0x1988c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1988CCu;
        goto label_1988cc;
    }
    ctx->pc = 0x1988C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1988C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988C4u;
        // 0x1988c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1988C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1988CCu;
label_1988cc:
    // 0x1988cc: 0x0  nop
    ctx->pc = 0x1988ccu;
    // NOP
label_1988d0:
    // 0x1988d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1988d4:
    // 0x1988d4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1988d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_1988d8:
    // 0x1988d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1988d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1988dc:
    // 0x1988dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1988dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1988e0:
    // 0x1988e0: 0x48c00  sll         $s1, $a0, 16
    ctx->pc = 0x1988e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1988e4:
    // 0x1988e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1988e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1988e8:
    // 0x1988e8: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x1988e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1988ec:
    // 0x1988ec: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x1988ecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_1988f0:
    // 0x1988f0: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x1988f0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
label_1988f4:
    // 0x1988f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1988f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1988f8:
    // 0x1988f8: 0xc06614a  jal         func_198528
label_1988fc:
    if (ctx->pc == 0x1988FCu) {
        ctx->pc = 0x1988FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988F8u;
        // 0x1988fc: 0x69403  sra         $s2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198900u;
        goto label_198900;
    }
    ctx->pc = 0x1988F8u;
    SET_GPR_U32(ctx, 31, 0x198900u);
    ctx->pc = 0x1988FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988F8u;
    // 0x1988fc: 0x69403  sra         $s2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x198900u;
label_198900:
    // 0x198900: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x198900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
label_198904:
    // 0x198904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198908:
    // 0x198908: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x198908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19890c:
    // 0x19890c: 0x2610007e  addiu       $s0, $s0, 0x7E
    ctx->pc = 0x19890cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 126));
label_198910:
    // 0x198910: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x198910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_198914:
    // 0x198914: 0x32310002  andi        $s1, $s1, 0x2
    ctx->pc = 0x198914u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_198918:
    // 0x198918: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x198918u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_19891c:
    // 0x19891c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_198920:
    if (ctx->pc == 0x198920u) {
        ctx->pc = 0x198920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19891Cu;
        // 0x198920: 0x108183  sra         $s0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198924u;
        goto label_198924;
    }
    ctx->pc = 0x19891Cu;
    {
        const bool branch_taken_0x19891c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x198920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19891Cu;
        // 0x198920: 0x108183  sra         $s0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19891c) {
            ctx->pc = 0x19893Cu;
            goto label_19893c;
        }
    }
    ctx->pc = 0x198924u;
label_198924:
    // 0x198924: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x198924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_198928:
    // 0x198928: 0x2643007e  addiu       $v1, $s2, 0x7E
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 126));
label_19892c:
    // 0x19892c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x19892cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_198930:
    // 0x198930: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x198930u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_198934:
    // 0x198934: 0x10000006  b           . + 4 + (0x6 << 2)
label_198938:
    if (ctx->pc == 0x198938u) {
        ctx->pc = 0x198938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198934u;
        // 0x198938: 0x33183  sra         $a2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19893Cu;
        goto label_19893c;
    }
    ctx->pc = 0x198934u;
    {
        const bool branch_taken_0x198934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198934u;
        // 0x198938: 0x33183  sra         $a2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198934) {
            ctx->pc = 0x198950u;
            goto label_198950;
        }
    }
    ctx->pc = 0x19893Cu;
label_19893c:
    // 0x19893c: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x19893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
label_198940:
    // 0x198940: 0x2643003e  addiu       $v1, $s2, 0x3E
    ctx->pc = 0x198940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
label_198944:
    // 0x198944: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x198944u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_198948:
    // 0x198948: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x198948u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_19894c:
    // 0x19894c: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x19894cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
label_198950:
    // 0x198950: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x198950u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_198954:
    // 0x198954: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x198954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_198958:
    // 0x198958: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_19895c:
    // 0x19895c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19895cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_198960:
    // 0x198960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198964:
    // 0x198964: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x198964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_198968:
    // 0x198968: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_19896c:
    if (ctx->pc == 0x19896Cu) {
        ctx->pc = 0x19896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198968u;
        // 0x19896c: 0x2061018  mult        $v0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x198970u;
        goto label_198970;
    }
    ctx->pc = 0x198968u;
    {
        const bool branch_taken_0x198968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x19896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198968u;
        // 0x19896c: 0x2061018  mult        $v0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198968) {
            ctx->pc = 0x198978u;
            goto label_198978;
        }
    }
    ctx->pc = 0x198970u;
label_198970:
    // 0x198970: 0x10000002  b           . + 4 + (0x2 << 2)
label_198974:
    if (ctx->pc == 0x198974u) {
        ctx->pc = 0x198974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198970u;
        // 0x198974: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198978u;
        goto label_198978;
    }
    ctx->pc = 0x198970u;
    {
        const bool branch_taken_0x198970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198970u;
        // 0x198974: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198970) {
            ctx->pc = 0x19897Cu;
            goto label_19897c;
        }
    }
    ctx->pc = 0x198978u;
label_198978:
    // 0x198978: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x198978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_19897c:
    // 0x19897c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19897cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_198980:
    // 0x198980: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x198980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198984:
    // 0x198984: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198988:
    // 0x198988: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19898c:
    // 0x19898c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19898cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198990:
    // 0x198990: 0x3e00008  jr          $ra
label_198994:
    if (ctx->pc == 0x198994u) {
        ctx->pc = 0x198994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198990u;
        // 0x198994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198998u;
        goto label_198998;
    }
    ctx->pc = 0x198990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198990u;
        // 0x198994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198998u;
label_198998:
    // 0x198998: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19899c:
    // 0x19899c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19899cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_1989a0:
    // 0x1989a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1989a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1989a4:
    // 0x1989a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1989a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1989a8:
    // 0x1989a8: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1989a8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
label_1989ac:
    // 0x1989ac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1989acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1989b0:
    // 0x1989b0: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x1989b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
label_1989b4:
    // 0x1989b4: 0x5a403  sra         $s4, $a1, 16
    ctx->pc = 0x1989b4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 5), 16));
label_1989b8:
    // 0x1989b8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1989b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1989bc:
    // 0x1989bc: 0x3283000f  andi        $v1, $s4, 0xF
    ctx->pc = 0x1989bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_1989c0:
    // 0x1989c0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1989c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_1989c4:
    // 0x1989c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1989c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1989c8:
    // 0x1989c8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1989c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_1989cc:
    // 0x1989cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1989ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1989d0:
    // 0x1989d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1989d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1989d4:
    // 0x1989d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1989d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1989d8:
    // 0x1989d8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1989d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1989dc:
    // 0x1989dc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1989e0:
    // 0x1989e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1989e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1989e4:
    // 0x1989e4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1989e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_1989e8:
    // 0x1989e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1989e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1989ec:
    // 0x1989ec: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_1989f0:
    // 0x1989f0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1989f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1989f4:
    // 0x1989f4: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1989f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1989f8:
    // 0x1989f8: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1989f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1989fc:
    // 0x1989fc: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x1989fcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
label_198a00:
    // 0x198a00: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x198a00u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
label_198a04:
    // 0x198a04: 0x99c03  sra         $s3, $t1, 16
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 9), 16));
label_198a08:
    // 0x198a08: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x198a08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_198a0c:
    // 0x198a0c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x198a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_198a10:
    // 0x198a10: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
label_198a14:
    if (ctx->pc == 0x198A14u) {
        ctx->pc = 0x198A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A10u;
        // 0x198a14: 0xfe040018  sd          $a0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A18u;
        goto label_198a18;
    }
    ctx->pc = 0x198A10u;
    {
        const bool branch_taken_0x198a10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x198A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A10u;
        // 0x198a14: 0xfe040018  sd          $a0, 0x18($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a10) {
            ctx->pc = 0x198A4Cu;
            goto label_198a4c;
        }
    }
    ctx->pc = 0x198A18u;
label_198a18:
    // 0x198a18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198a1c:
    // 0x198a1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x198a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198a20:
    // 0x198a20: 0xc066234  jal         func_1988D0
label_198a24:
    if (ctx->pc == 0x198A24u) {
        ctx->pc = 0x198A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A20u;
        // 0x198a24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A28u;
        goto label_198a28;
    }
    ctx->pc = 0x198A20u;
    SET_GPR_U32(ctx, 31, 0x198A28u);
    ctx->pc = 0x198A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A20u;
    // 0x198a24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    goto label_1988d0;
    ctx->pc = 0x198A28u;
label_198a28:
    // 0x198a28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_198a2c:
    // 0x198a2c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x198a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_198a30:
    // 0x198a30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_198a34:
    // 0x198a34: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x198a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_198a38:
    // 0x198a38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_198a3c:
    // 0x198a3c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x198a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_198a40:
    // 0x198a40: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x198a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
label_198a44:
    // 0x198a44: 0x1000000a  b           . + 4 + (0xA << 2)
label_198a48:
    if (ctx->pc == 0x198A48u) {
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A4Cu;
        goto label_198a4c;
    }
    ctx->pc = 0x198A44u;
    {
        const bool branch_taken_0x198a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A44u;
        // 0x198a48: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198a44) {
            ctx->pc = 0x198A70u;
            goto label_198a70;
        }
    }
    ctx->pc = 0x198A4Cu;
label_198a4c:
    // 0x198a4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198a50:
    // 0x198a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x198a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198a54:
    // 0x198a54: 0xc066234  jal         func_1988D0
label_198a58:
    if (ctx->pc == 0x198A58u) {
        ctx->pc = 0x198A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A54u;
        // 0x198a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A5Cu;
        goto label_198a5c;
    }
    ctx->pc = 0x198A54u;
    SET_GPR_U32(ctx, 31, 0x198A5Cu);
    ctx->pc = 0x198A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A54u;
    // 0x198a58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    goto label_1988d0;
    ctx->pc = 0x198A5Cu;
label_198a5c:
    // 0x198a5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_198a60:
    // 0x198a60: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x198a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_198a64:
    // 0x198a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_198a68:
    // 0x198a68: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x198a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_198a6c:
    // 0x198a6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_198a70:
    // 0x198a70: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x198a70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_198a74:
    // 0x198a74: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x198a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_198a78:
    // 0x198a78: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_198a7c:
    // 0x198a7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_198a80:
    // 0x198a80: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_198a84:
    // 0x198a84: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x198a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_198a88:
    // 0x198a88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_198a8c:
    // 0x198a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x198a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_198a90:
    // 0x198a90: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x198a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_198a94:
    // 0x198a94: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x198a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
label_198a98:
    // 0x198a98: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_198a9c:
    // 0x198a9c: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x198a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_198aa0:
    // 0x198aa0: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_198aa4:
    // 0x198aa4: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x198aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_198aa8:
    // 0x198aa8: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x198aa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_198aac:
    // 0x198aac: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
label_198ab0:
    // 0x198ab0: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x198ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_198ab4:
    // 0x198ab4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_198ab8:
    // 0x198ab8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x198ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_198abc:
    // 0x198abc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198ac0:
    // 0x198ac0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_198ac4:
    // 0x198ac4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_198ac8:
    // 0x198ac8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_198acc:
    // 0x198acc: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x198accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
label_198ad0:
    // 0x198ad0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x198ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_198ad4:
    // 0x198ad4: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_198ad8:
    // 0x198ad8: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_198adc:
    // 0x198adc: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x198adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_198ae0:
    // 0x198ae0: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x198ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
label_198ae4:
    // 0x198ae4: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x198ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
label_198ae8:
    // 0x198ae8: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x198ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_198aec:
    // 0x198aec: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x198aecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
label_198af0:
    // 0x198af0: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x198af0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
label_198af4:
    // 0x198af4: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x198af4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
label_198af8:
    // 0x198af8: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x198af8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
label_198afc:
    // 0x198afc: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x198afcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
label_198b00:
    // 0x198b00: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x198b00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
label_198b04:
    // 0x198b04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_198b08:
    if (ctx->pc == 0x198B08u) {
        ctx->pc = 0x198B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B04u;
        // 0x198b08: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B0Cu;
        goto label_198b0c;
    }
    ctx->pc = 0x198B04u;
    {
        const bool branch_taken_0x198b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B04u;
        // 0x198b08: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b04) {
            ctx->pc = 0x198B18u;
            goto label_198b18;
        }
    }
    ctx->pc = 0x198B0Cu;
label_198b0c:
    // 0x198b0c: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x198b0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_198b10:
    // 0x198b10: 0x10000004  b           . + 4 + (0x4 << 2)
label_198b14:
    if (ctx->pc == 0x198B14u) {
        ctx->pc = 0x198B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B10u;
        // 0x198b14: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B18u;
        goto label_198b18;
    }
    ctx->pc = 0x198B10u;
    {
        const bool branch_taken_0x198b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B10u;
        // 0x198b14: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b10) {
            ctx->pc = 0x198B24u;
            goto label_198b24;
        }
    }
    ctx->pc = 0x198B18u;
label_198b18:
    // 0x198b18: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x198b18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_198b1c:
    // 0x198b1c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x198b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_198b20:
    // 0x198b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x198b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_198b24:
    // 0x198b24: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x198b24u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
label_198b28:
    // 0x198b28: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x198b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_198b2c:
    // 0x198b2c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_198b30:
    if (ctx->pc == 0x198B30u) {
        ctx->pc = 0x198B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B2Cu;
        // 0x198b30: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B34u;
        goto label_198b34;
    }
    ctx->pc = 0x198B2Cu;
    {
        const bool branch_taken_0x198b2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B2Cu;
        // 0x198b30: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b2c) {
            ctx->pc = 0x198B48u;
            goto label_198b48;
        }
    }
    ctx->pc = 0x198B34u;
label_198b34:
    // 0x198b34: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x198b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
label_198b38:
    // 0x198b38: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x198b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_198b3c:
    // 0x198b3c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_198b40:
    // 0x198b40: 0x10000002  b           . + 4 + (0x2 << 2)
label_198b44:
    if (ctx->pc == 0x198B44u) {
        ctx->pc = 0x198B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B40u;
        // 0x198b44: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B48u;
        goto label_198b48;
    }
    ctx->pc = 0x198B40u;
    {
        const bool branch_taken_0x198b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B40u;
        // 0x198b44: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b40) {
            ctx->pc = 0x198B4Cu;
            goto label_198b4c;
        }
    }
    ctx->pc = 0x198B48u;
label_198b48:
    // 0x198b48: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x198b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_198b4c:
    // 0x198b4c: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x198b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
label_198b50:
    // 0x198b50: 0xf  sync
    ctx->pc = 0x198b50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_198b54:
    // 0x198b54: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x198b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_198b58:
    // 0x198b58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x198b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_198b5c:
    // 0x198b5c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x198b5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_198b60:
    // 0x198b60: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x198b60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198b64:
    // 0x198b64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x198b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198b68:
    // 0x198b68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198b6c:
    // 0x198b6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_198b70:
    // 0x198b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198b74:
    // 0x198b74: 0x3e00008  jr          $ra
label_198b78:
    if (ctx->pc == 0x198B78u) {
        ctx->pc = 0x198B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B74u;
        // 0x198b78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B7Cu;
        goto label_198b7c;
    }
    ctx->pc = 0x198B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B74u;
        // 0x198b78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B7Cu;
label_198b7c:
    // 0x198b7c: 0x0  nop
    ctx->pc = 0x198b7cu;
    // NOP
label_198b80:
    // 0x198b80: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x198b80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_198b84:
    // 0x198b84: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x198b84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_198b88:
    // 0x198b88: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x198b88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
label_198b8c:
    // 0x198b8c: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x198b8cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
label_198b90:
    // 0x198b90: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_198b94:
    // 0x198b94: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_198b98:
    // 0x198b98: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x198b98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_198b9c:
    // 0x198b9c: 0x93ac0000  lbu         $t4, 0x0($sp)
    ctx->pc = 0x198b9cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_198ba0:
    // 0x198ba0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x198ba0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_198ba4:
    // 0x198ba4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
label_198ba8:
    // 0x198ba8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_198bac:
    // 0x198bac: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x198bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_198bb0:
    // 0x198bb0: 0x9fa30010  lwu         $v1, 0x10($sp)
    ctx->pc = 0x198bb0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_198bb4:
    // 0x198bb4: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x198bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_198bb8:
    // 0x198bb8: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x198bb8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_198bbc:
    // 0x198bbc: 0x93ad0008  lbu         $t5, 0x8($sp)
    ctx->pc = 0x198bbcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_198bc0:
    // 0x198bc0: 0xb5a38  dsll        $t3, $t3, 8
    ctx->pc = 0x198bc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 8);
label_198bc4:
    // 0x198bc4: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x198bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_198bc8:
    // 0x198bc8: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x198bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
label_198bcc:
    // 0x198bcc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x198bccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_198bd0:
    // 0x198bd0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x198bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_198bd4:
    // 0x198bd4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x198bd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_198bd8:
    // 0x198bd8: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
label_198bdc:
    // 0x198bdc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x198bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_198be0:
    // 0x198be0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x198be0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
label_198be4:
    // 0x198be4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_198be8:
    // 0x198be8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x198be8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_198bec:
    // 0x198bec: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x198becu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_198bf0:
    // 0x198bf0: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x198bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_198bf4:
    // 0x198bf4: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x198bf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_198bf8:
    // 0x198bf8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x198bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_198bfc:
    // 0x198bfc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x198bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198c00:
    // 0x198c00: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x198c00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_198c04:
    // 0x198c04: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x198c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_198c08:
    // 0x198c08: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x198c08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
label_198c0c:
    // 0x198c0c: 0xd6e38  dsll        $t5, $t5, 24
    ctx->pc = 0x198c0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 24);
label_198c10:
    // 0x198c10: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x198c10u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
label_198c14:
    // 0x198c14: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_198c18:
    // 0x198c18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x198c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_198c1c:
    // 0x198c1c: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x198c1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
label_198c20:
    // 0x198c20: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
label_198c24:
    // 0x198c24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_198c28:
    // 0x198c28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198c2c:
    // 0x198c2c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x198c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_198c30:
    // 0x198c30: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x198c30u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
label_198c34:
    // 0x198c34: 0xfcca0020  sd          $t2, 0x20($a2)
    ctx->pc = 0x198c34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 10));
label_198c38:
    // 0x198c38: 0xfcc70030  sd          $a3, 0x30($a2)
    ctx->pc = 0x198c38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 7));
label_198c3c:
    // 0x198c3c: 0xfcc50048  sd          $a1, 0x48($a2)
    ctx->pc = 0x198c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 5));
label_198c40:
    // 0x198c40: 0xfcc90040  sd          $t1, 0x40($a2)
    ctx->pc = 0x198c40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 9));
label_198c44:
    // 0x198c44: 0xfcc40058  sd          $a0, 0x58($a2)
    ctx->pc = 0x198c44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 4));
label_198c48:
    // 0x198c48: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x198c48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
label_198c4c:
    // 0x198c4c: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x198c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
label_198c50:
    // 0x198c50: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x198c50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
label_198c54:
    // 0x198c54: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
label_198c58:
    if (ctx->pc == 0x198C58u) {
        ctx->pc = 0x198C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C54u;
        // 0x198c58: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C5Cu;
        goto label_198c5c;
    }
    ctx->pc = 0x198C54u;
    {
        const bool branch_taken_0x198c54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C54u;
        // 0x198c58: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c54) {
            ctx->pc = 0x198C74u;
            goto label_198c74;
        }
    }
    ctx->pc = 0x198C5Cu;
label_198c5c:
    // 0x198c5c: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x198c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_198c60:
    // 0x198c60: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x198c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_198c64:
    // 0x198c64: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x198c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_198c68:
    // 0x198c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_198c6c:
    // 0x198c6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_198c70:
    if (ctx->pc == 0x198C70u) {
        ctx->pc = 0x198C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C6Cu;
        // 0x198c70: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C74u;
        goto label_198c74;
    }
    ctx->pc = 0x198C6Cu;
    {
        const bool branch_taken_0x198c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C6Cu;
        // 0x198c70: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c6c) {
            ctx->pc = 0x198C78u;
            goto label_198c78;
        }
    }
    ctx->pc = 0x198C74u;
label_198c74:
    // 0x198c74: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x198c74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
label_198c78:
    // 0x198c78: 0xf  sync
    ctx->pc = 0x198c78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_198c7c:
    // 0x198c7c: 0x3e00008  jr          $ra
label_198c80:
    if (ctx->pc == 0x198C80u) {
        ctx->pc = 0x198C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C7Cu;
        // 0x198c80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198C84u;
        goto label_198c84;
    }
    ctx->pc = 0x198C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C7Cu;
        // 0x198c80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198C84u;
label_198c84:
    // 0x198c84: 0x0  nop
    ctx->pc = 0x198c84u;
    // NOP
label_198c88:
    // 0x198c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_198c8c:
    // 0x198c8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198c90:
    // 0x198c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_198c94:
    // 0x198c94: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_198c98:
    // 0x198c98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x198c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198c9c:
    // 0x198c9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_198ca0:
    // 0x198ca0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_198ca4:
    // 0x198ca4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_198ca8:
    if (ctx->pc == 0x198CA8u) {
        ctx->pc = 0x198CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CA4u;
        // 0x198ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CACu;
        goto label_198cac;
    }
    ctx->pc = 0x198CA4u;
    {
        const bool branch_taken_0x198ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CA4u;
        // 0x198ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ca4) {
            ctx->pc = 0x198CDCu;
            goto label_198cdc;
        }
    }
    ctx->pc = 0x198CACu;
label_198cac:
    // 0x198cac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198cb0:
    // 0x198cb0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x198cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_198cb4:
    // 0x198cb4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_198cb8:
    // 0x198cb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x198cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198cbc:
    // 0x198cbc: 0x0  nop
    ctx->pc = 0x198cbcu;
    // NOP
label_198cc0:
    // 0x198cc0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x198cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_198cc4:
    // 0x198cc4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_198cc8:
    if (ctx->pc == 0x198CC8u) {
        ctx->pc = 0x198CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC4u;
        // 0x198cc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CCCu;
        goto label_198ccc;
    }
    ctx->pc = 0x198CC4u;
    {
        const bool branch_taken_0x198cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC4u;
        // 0x198cc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cc4) {
            ctx->pc = 0x198D28u;
            goto label_198d28;
        }
    }
    ctx->pc = 0x198CCCu;
label_198ccc:
    // 0x198ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_198cd0:
    // 0x198cd0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_198cd4:
    // 0x198cd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_198cd8:
    if (ctx->pc == 0x198CD8u) {
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198CDCu;
        goto label_198cdc;
    }
    ctx->pc = 0x198CD4u;
    {
        const bool branch_taken_0x198cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cd4) {
            ctx->pc = 0x198CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198cc0;
        }
    }
    ctx->pc = 0x198CDCu;
label_198cdc:
    // 0x198cdc: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x198cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_198ce0:
    // 0x198ce0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198ce4:
    // 0x198ce4: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x198ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
label_198ce8:
    // 0x198ce8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_198cec:
    // 0x198cec: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x198cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_198cf0:
    // 0x198cf0: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x198cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_198cf4:
    // 0x198cf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x198cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_198cf8:
    // 0x198cf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x198cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_198cfc:
    // 0x198cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_198d00:
    // 0x198d00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_198d04:
    // 0x198d04: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
label_198d08:
    if (ctx->pc == 0x198D08u) {
        ctx->pc = 0x198D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D04u;
        // 0x198d08: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D0Cu;
        goto label_198d0c;
    }
    ctx->pc = 0x198D04u;
    {
        const bool branch_taken_0x198d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x198D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D04u;
        // 0x198d08: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d04) {
            ctx->pc = 0x198D3Cu;
            goto label_198d3c;
        }
    }
    ctx->pc = 0x198D0Cu;
label_198d0c:
    // 0x198d0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198d10:
    // 0x198d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_198d14:
    // 0x198d14: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_198d18:
    // 0x198d18: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x198d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_198d1c:
    // 0x198d1c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x198d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_198d20:
    // 0x198d20: 0x1000000a  b           . + 4 + (0xA << 2)
label_198d24:
    if (ctx->pc == 0x198D24u) {
        ctx->pc = 0x198D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D20u;
        // 0x198d24: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D28u;
        goto label_198d28;
    }
    ctx->pc = 0x198D20u;
    {
        const bool branch_taken_0x198d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D20u;
        // 0x198d24: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d20) {
            ctx->pc = 0x198D4Cu;
            goto label_198d4c;
        }
    }
    ctx->pc = 0x198D28u;
label_198d28:
    // 0x198d28: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_198d2c:
    // 0x198d2c: 0xc08ee2e  jal         func_23B8B8
label_198d30:
    if (ctx->pc == 0x198D30u) {
        ctx->pc = 0x198D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D2Cu;
        // 0x198d30: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D34u;
        goto label_198d34;
    }
    ctx->pc = 0x198D2Cu;
    SET_GPR_U32(ctx, 31, 0x198D34u);
    ctx->pc = 0x198D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D2Cu;
    // 0x198d30: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x198D34u;
label_198d34:
    // 0x198d34: 0x1000000b  b           . + 4 + (0xB << 2)
label_198d38:
    if (ctx->pc == 0x198D38u) {
        ctx->pc = 0x198D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D34u;
        // 0x198d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D3Cu;
        goto label_198d3c;
    }
    ctx->pc = 0x198D34u;
    {
        const bool branch_taken_0x198d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D34u;
        // 0x198d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d34) {
            ctx->pc = 0x198D64u;
            goto label_198d64;
        }
    }
    ctx->pc = 0x198D3Cu;
label_198d3c:
    // 0x198d3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198d40:
    // 0x198d40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_198d44:
    // 0x198d44: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x198d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_198d48:
    // 0x198d48: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x198d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_198d4c:
    // 0x198d4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_198d50:
    // 0x198d50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_198d54:
    // 0x198d54: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x198d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_198d58:
    // 0x198d58: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_198d5c:
    // 0x198d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198d60:
    // 0x198d60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x198d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_198d64:
    // 0x198d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198d68:
    // 0x198d68: 0x3e00008  jr          $ra
label_198d6c:
    if (ctx->pc == 0x198D6Cu) {
        ctx->pc = 0x198D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D68u;
        // 0x198d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198D70u;
        goto label_198d70;
    }
    ctx->pc = 0x198D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D68u;
        // 0x198d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198D70u;
label_198d70:
    // 0x198d70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_198d74:
    // 0x198d74: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x198d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_198d78:
    // 0x198d78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x198d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_198d7c:
    // 0x198d7c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_198d80:
    // 0x198d80: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x198d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_198d84:
    // 0x198d84: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x198d84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_198d88:
    // 0x198d88: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x198d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_198d8c:
    // 0x198d8c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x198d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_198d90:
    // 0x198d90: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x198d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_198d94:
    // 0x198d94: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x198d94u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_198d98:
    // 0x198d98: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x198d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_198d9c:
    // 0x198d9c: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x198d9cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
label_198da0:
    // 0x198da0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x198da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_198da4:
    // 0x198da4: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x198da4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
label_198da8:
    // 0x198da8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x198da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_198dac:
    // 0x198dac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x198dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198db0:
    // 0x198db0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x198db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_198db4:
    // 0x198db4: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x198db4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
label_198db8:
    // 0x198db8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x198db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_198dbc:
    // 0x198dbc: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x198dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_198dc0:
    // 0x198dc0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x198dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_198dc4:
    // 0x198dc4: 0xc06614a  jal         func_198528
label_198dc8:
    if (ctx->pc == 0x198DC8u) {
        ctx->pc = 0x198DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DC4u;
        // 0x198dc8: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198DCCu;
        goto label_198dcc;
    }
    ctx->pc = 0x198DC4u;
    SET_GPR_U32(ctx, 31, 0x198DCCu);
    ctx->pc = 0x198DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DC4u;
    // 0x198dc8: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x198DCCu;
label_198dcc:
    // 0x198dcc: 0x119c03  sra         $s3, $s1, 16
    ctx->pc = 0x198dccu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 16));
label_198dd0:
    // 0x198dd0: 0x1ea403  sra         $s4, $fp, 16
    ctx->pc = 0x198dd0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 30), 16));
label_198dd4:
    // 0x198dd4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x198dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_198dd8:
    // 0x198dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198ddc:
    // 0x198ddc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198de0:
    // 0x198de0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198de4:
    // 0x198de4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198de8:
    // 0x198de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198dec:
    // 0x198dec: 0xc066168  jal         func_1985A0
label_198df0:
    if (ctx->pc == 0x198DF0u) {
        ctx->pc = 0x198DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DECu;
        // 0x198df0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198DF4u;
        goto label_198df4;
    }
    ctx->pc = 0x198DECu;
    SET_GPR_U32(ctx, 31, 0x198DF4u);
    ctx->pc = 0x198DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DECu;
    // 0x198df0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    { ctx->pc = 0x1985a0; return; }
    ctx->pc = 0x198DF4u;
label_198df4:
    // 0x198df4: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x198df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_198df8:
    // 0x198df8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198dfc:
    // 0x198dfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198e00:
    // 0x198e00: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198e04:
    // 0x198e04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198e08:
    // 0x198e08: 0xc066168  jal         func_1985A0
label_198e0c:
    if (ctx->pc == 0x198E0Cu) {
        ctx->pc = 0x198E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E08u;
        // 0x198e0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E10u;
        goto label_198e10;
    }
    ctx->pc = 0x198E08u;
    SET_GPR_U32(ctx, 31, 0x198E10u);
    ctx->pc = 0x198E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E08u;
    // 0x198e0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    { ctx->pc = 0x1985a0; return; }
    ctx->pc = 0x198E10u;
label_198e10:
    // 0x198e10: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x198e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_198e14:
    // 0x198e14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198e18:
    // 0x198e18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198e1c:
    // 0x198e1c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198e20:
    // 0x198e20: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x198e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198e24:
    // 0x198e24: 0xc066266  jal         func_198998
label_198e28:
    if (ctx->pc == 0x198E28u) {
        ctx->pc = 0x198E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E24u;
        // 0x198e28: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E2Cu;
        goto label_198e2c;
    }
    ctx->pc = 0x198E24u;
    SET_GPR_U32(ctx, 31, 0x198E2Cu);
    ctx->pc = 0x198E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E24u;
    // 0x198e28: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    goto label_198998;
    ctx->pc = 0x198E2Cu;
label_198e2c:
    // 0x198e2c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x198e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198e30:
    // 0x198e30: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_198e34:
    // 0x198e34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_198e38:
    // 0x198e38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198e3c:
    // 0x198e3c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198e40:
    // 0x198e40: 0xc066266  jal         func_198998
label_198e44:
    if (ctx->pc == 0x198E44u) {
        ctx->pc = 0x198E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E40u;
        // 0x198e44: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E48u;
        goto label_198e48;
    }
    ctx->pc = 0x198E40u;
    SET_GPR_U32(ctx, 31, 0x198E48u);
    ctx->pc = 0x198E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E40u;
    // 0x198e44: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    goto label_198998;
    ctx->pc = 0x198E48u;
label_198e48:
    // 0x198e48: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
label_198e4c:
    if (ctx->pc == 0x198E4Cu) {
        ctx->pc = 0x198E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E48u;
        // 0x198e4c: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E50u;
        goto label_198e50;
    }
    ctx->pc = 0x198E48u;
    {
        const bool branch_taken_0x198e48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E48u;
        // 0x198e4c: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e48) {
            ctx->pc = 0x198EC0u;
            goto label_198ec0;
        }
    }
    ctx->pc = 0x198E50u;
label_198e50:
    // 0x198e50: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x198e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_198e54:
    // 0x198e54: 0x1e8c43  sra         $s1, $fp, 17
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 17));
label_198e58:
    // 0x198e58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x198e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_198e5c:
    // 0x198e5c: 0x2118823  subu        $s1, $s0, $s1
    ctx->pc = 0x198e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_198e60:
    // 0x198e60: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x198e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_198e64:
    // 0x198e64: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x198e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_198e68:
    // 0x198e68: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x198e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_198e6c:
    // 0x198e6c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x198e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_198e70:
    // 0x198e70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x198e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198e74:
    // 0x198e74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x198e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198e78:
    // 0x198e78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x198e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198e7c:
    // 0x198e7c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198e80:
    // 0x198e80: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x198e80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198e84:
    // 0x198e84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198e84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198e88:
    // 0x198e88: 0xc0662e0  jal         func_198B80
label_198e8c:
    if (ctx->pc == 0x198E8Cu) {
        ctx->pc = 0x198E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E88u;
        // 0x198e8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E90u;
        goto label_198e90;
    }
    ctx->pc = 0x198E88u;
    SET_GPR_U32(ctx, 31, 0x198E90u);
    ctx->pc = 0x198E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E88u;
    // 0x198e8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    goto label_198b80;
    ctx->pc = 0x198E90u;
label_198e90:
    // 0x198e90: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x198e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_198e94:
    // 0x198e94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x198e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198e98:
    // 0x198e98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x198e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198e9c:
    // 0x198e9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x198e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_198ea0:
    // 0x198ea0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x198ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_198ea4:
    // 0x198ea4: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_198ea8:
    // 0x198ea8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x198ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_198eac:
    // 0x198eac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198eb0:
    // 0x198eb0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x198eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_198eb4:
    // 0x198eb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198eb8:
    // 0x198eb8: 0xc0662e0  jal         func_198B80
label_198ebc:
    if (ctx->pc == 0x198EBCu) {
        ctx->pc = 0x198EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB8u;
        // 0x198ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EC0u;
        goto label_198ec0;
    }
    ctx->pc = 0x198EB8u;
    SET_GPR_U32(ctx, 31, 0x198EC0u);
    ctx->pc = 0x198EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198EB8u;
    // 0x198ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    goto label_198b80;
    ctx->pc = 0x198EC0u;
label_198ec0:
    // 0x198ec0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x198ec0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_198ec4:
    // 0x198ec4: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x198ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_198ec8:
    // 0x198ec8: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x198ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
label_198ecc:
    // 0x198ecc: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x198eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_198ed0:
    // 0x198ed0: 0x7e420140  sq          $v0, 0x140($s2)
    ctx->pc = 0x198ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 2));
label_198ed4:
    // 0x198ed4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x198ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_198ed8:
    // 0x198ed8: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x198ed8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
label_198edc:
    // 0x198edc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x198edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_198ee0:
    // 0x198ee0: 0xde460140  ld          $a2, 0x140($s2)
    ctx->pc = 0x198ee0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 320)));
label_198ee4:
    // 0x198ee4: 0x137100b  movn        $v0, $t1, $s7
    ctx->pc = 0x198ee4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
label_198ee8:
    // 0x198ee8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x198ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_198eec:
    // 0x198eec: 0x137180b  movn        $v1, $t1, $s7
    ctx->pc = 0x198eecu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_198ef0:
    // 0x198ef0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x198ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_198ef4:
    // 0x198ef4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_198ef8:
    // 0x198ef8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x198ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_198efc:
    // 0x198efc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x198efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_198f00:
    // 0x198f00: 0xde470058  ld          $a3, 0x58($s2)
    ctx->pc = 0x198f00u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 88)));
label_198f04:
    // 0x198f04: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x198f04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_198f08:
    // 0x198f08: 0xde480148  ld          $t0, 0x148($s2)
    ctx->pc = 0x198f08u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 328)));
label_198f0c:
    // 0x198f0c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_198f10:
    // 0x198f10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x198f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_198f14:
    // 0x198f14: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x198f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
label_198f18:
    // 0x198f18: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x198f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_198f1c:
    // 0x198f1c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x198f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x198f20u;
    return;
}

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

// Function: FUN_00247410
// Address: 0x247410 - 0x2874a4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_00247410_part26(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x253760u: goto label_253760;
        case 0x253764u: goto label_253764;
        case 0x253768u: goto label_253768;
        case 0x25376cu: goto label_25376c;
        case 0x253770u: goto label_253770;
        case 0x253774u: goto label_253774;
        case 0x253778u: goto label_253778;
        case 0x25377cu: goto label_25377c;
        case 0x253780u: goto label_253780;
        case 0x253784u: goto label_253784;
        case 0x253788u: goto label_253788;
        case 0x25378cu: goto label_25378c;
        case 0x253790u: goto label_253790;
        case 0x253794u: goto label_253794;
        case 0x253798u: goto label_253798;
        case 0x25379cu: goto label_25379c;
        case 0x2537a0u: goto label_2537a0;
        case 0x2537a4u: goto label_2537a4;
        case 0x2537a8u: goto label_2537a8;
        case 0x2537acu: goto label_2537ac;
        case 0x2537b0u: goto label_2537b0;
        case 0x2537b4u: goto label_2537b4;
        case 0x2537b8u: goto label_2537b8;
        case 0x2537bcu: goto label_2537bc;
        case 0x2537c0u: goto label_2537c0;
        case 0x2537c4u: goto label_2537c4;
        case 0x2537c8u: goto label_2537c8;
        case 0x2537ccu: goto label_2537cc;
        case 0x2537d0u: goto label_2537d0;
        case 0x2537d4u: goto label_2537d4;
        case 0x2537d8u: goto label_2537d8;
        case 0x2537dcu: goto label_2537dc;
        case 0x2537e0u: goto label_2537e0;
        case 0x2537e4u: goto label_2537e4;
        case 0x2537e8u: goto label_2537e8;
        case 0x2537ecu: goto label_2537ec;
        case 0x2537f0u: goto label_2537f0;
        case 0x2537f4u: goto label_2537f4;
        case 0x2537f8u: goto label_2537f8;
        case 0x2537fcu: goto label_2537fc;
        case 0x253800u: goto label_253800;
        case 0x253804u: goto label_253804;
        case 0x253808u: goto label_253808;
        case 0x25380cu: goto label_25380c;
        case 0x253810u: goto label_253810;
        case 0x253814u: goto label_253814;
        case 0x253818u: goto label_253818;
        case 0x25381cu: goto label_25381c;
        case 0x253820u: goto label_253820;
        case 0x253824u: goto label_253824;
        case 0x253828u: goto label_253828;
        case 0x25382cu: goto label_25382c;
        case 0x253830u: goto label_253830;
        case 0x253834u: goto label_253834;
        case 0x253838u: goto label_253838;
        case 0x25383cu: goto label_25383c;
        case 0x253840u: goto label_253840;
        case 0x253844u: goto label_253844;
        case 0x253848u: goto label_253848;
        case 0x25384cu: goto label_25384c;
        case 0x253850u: goto label_253850;
        case 0x253854u: goto label_253854;
        case 0x253858u: goto label_253858;
        case 0x25385cu: goto label_25385c;
        case 0x253860u: goto label_253860;
        case 0x253864u: goto label_253864;
        case 0x253868u: goto label_253868;
        case 0x25386cu: goto label_25386c;
        case 0x253870u: goto label_253870;
        case 0x253874u: goto label_253874;
        case 0x253878u: goto label_253878;
        case 0x25387cu: goto label_25387c;
        case 0x253880u: goto label_253880;
        case 0x253884u: goto label_253884;
        case 0x253888u: goto label_253888;
        case 0x25388cu: goto label_25388c;
        case 0x253890u: goto label_253890;
        case 0x253894u: goto label_253894;
        case 0x253898u: goto label_253898;
        case 0x25389cu: goto label_25389c;
        case 0x2538a0u: goto label_2538a0;
        case 0x2538a4u: goto label_2538a4;
        case 0x2538a8u: goto label_2538a8;
        case 0x2538acu: goto label_2538ac;
        case 0x2538b0u: goto label_2538b0;
        case 0x2538b4u: goto label_2538b4;
        case 0x2538b8u: goto label_2538b8;
        case 0x2538bcu: goto label_2538bc;
        case 0x2538c0u: goto label_2538c0;
        case 0x2538c4u: goto label_2538c4;
        case 0x2538c8u: goto label_2538c8;
        case 0x2538ccu: goto label_2538cc;
        case 0x2538d0u: goto label_2538d0;
        case 0x2538d4u: goto label_2538d4;
        case 0x2538d8u: goto label_2538d8;
        case 0x2538dcu: goto label_2538dc;
        case 0x2538e0u: goto label_2538e0;
        case 0x2538e4u: goto label_2538e4;
        case 0x2538e8u: goto label_2538e8;
        case 0x2538ecu: goto label_2538ec;
        case 0x2538f0u: goto label_2538f0;
        case 0x2538f4u: goto label_2538f4;
        case 0x2538f8u: goto label_2538f8;
        case 0x2538fcu: goto label_2538fc;
        case 0x253900u: goto label_253900;
        case 0x253904u: goto label_253904;
        case 0x253908u: goto label_253908;
        case 0x25390cu: goto label_25390c;
        case 0x253910u: goto label_253910;
        case 0x253914u: goto label_253914;
        case 0x253918u: goto label_253918;
        case 0x25391cu: goto label_25391c;
        case 0x253920u: goto label_253920;
        case 0x253924u: goto label_253924;
        case 0x253928u: goto label_253928;
        case 0x25392cu: goto label_25392c;
        case 0x253930u: goto label_253930;
        case 0x253934u: goto label_253934;
        case 0x253938u: goto label_253938;
        case 0x25393cu: goto label_25393c;
        case 0x253940u: goto label_253940;
        case 0x253944u: goto label_253944;
        case 0x253948u: goto label_253948;
        case 0x25394cu: goto label_25394c;
        case 0x253950u: goto label_253950;
        case 0x253954u: goto label_253954;
        case 0x253958u: goto label_253958;
        case 0x25395cu: goto label_25395c;
        case 0x253960u: goto label_253960;
        case 0x253964u: goto label_253964;
        case 0x253968u: goto label_253968;
        case 0x25396cu: goto label_25396c;
        case 0x253970u: goto label_253970;
        case 0x253974u: goto label_253974;
        case 0x253978u: goto label_253978;
        case 0x25397cu: goto label_25397c;
        case 0x253980u: goto label_253980;
        case 0x253984u: goto label_253984;
        case 0x253988u: goto label_253988;
        case 0x25398cu: goto label_25398c;
        case 0x253990u: goto label_253990;
        case 0x253994u: goto label_253994;
        case 0x253998u: goto label_253998;
        case 0x25399cu: goto label_25399c;
        case 0x2539a0u: goto label_2539a0;
        case 0x2539a4u: goto label_2539a4;
        case 0x2539a8u: goto label_2539a8;
        case 0x2539acu: goto label_2539ac;
        case 0x2539b0u: goto label_2539b0;
        case 0x2539b4u: goto label_2539b4;
        case 0x2539b8u: goto label_2539b8;
        case 0x2539bcu: goto label_2539bc;
        case 0x2539c0u: goto label_2539c0;
        case 0x2539c4u: goto label_2539c4;
        case 0x2539c8u: goto label_2539c8;
        case 0x2539ccu: goto label_2539cc;
        case 0x2539d0u: goto label_2539d0;
        case 0x2539d4u: goto label_2539d4;
        case 0x2539d8u: goto label_2539d8;
        case 0x2539dcu: goto label_2539dc;
        case 0x2539e0u: goto label_2539e0;
        case 0x2539e4u: goto label_2539e4;
        case 0x2539e8u: goto label_2539e8;
        case 0x2539ecu: goto label_2539ec;
        case 0x2539f0u: goto label_2539f0;
        case 0x2539f4u: goto label_2539f4;
        case 0x2539f8u: goto label_2539f8;
        case 0x2539fcu: goto label_2539fc;
        case 0x253a00u: goto label_253a00;
        case 0x253a04u: goto label_253a04;
        case 0x253a08u: goto label_253a08;
        case 0x253a0cu: goto label_253a0c;
        case 0x253a10u: goto label_253a10;
        case 0x253a14u: goto label_253a14;
        case 0x253a18u: goto label_253a18;
        case 0x253a1cu: goto label_253a1c;
        case 0x253a20u: goto label_253a20;
        case 0x253a24u: goto label_253a24;
        case 0x253a28u: goto label_253a28;
        case 0x253a2cu: goto label_253a2c;
        case 0x253a30u: goto label_253a30;
        case 0x253a34u: goto label_253a34;
        case 0x253a38u: goto label_253a38;
        case 0x253a3cu: goto label_253a3c;
        case 0x253a40u: goto label_253a40;
        case 0x253a44u: goto label_253a44;
        case 0x253a48u: goto label_253a48;
        case 0x253a4cu: goto label_253a4c;
        case 0x253a50u: goto label_253a50;
        case 0x253a54u: goto label_253a54;
        case 0x253a58u: goto label_253a58;
        case 0x253a5cu: goto label_253a5c;
        case 0x253a60u: goto label_253a60;
        case 0x253a64u: goto label_253a64;
        case 0x253a68u: goto label_253a68;
        case 0x253a6cu: goto label_253a6c;
        case 0x253a70u: goto label_253a70;
        case 0x253a74u: goto label_253a74;
        case 0x253a78u: goto label_253a78;
        case 0x253a7cu: goto label_253a7c;
        case 0x253a80u: goto label_253a80;
        case 0x253a84u: goto label_253a84;
        case 0x253a88u: goto label_253a88;
        case 0x253a8cu: goto label_253a8c;
        case 0x253a90u: goto label_253a90;
        case 0x253a94u: goto label_253a94;
        case 0x253a98u: goto label_253a98;
        case 0x253a9cu: goto label_253a9c;
        case 0x253aa0u: goto label_253aa0;
        case 0x253aa4u: goto label_253aa4;
        case 0x253aa8u: goto label_253aa8;
        case 0x253aacu: goto label_253aac;
        case 0x253ab0u: goto label_253ab0;
        case 0x253ab4u: goto label_253ab4;
        case 0x253ab8u: goto label_253ab8;
        case 0x253abcu: goto label_253abc;
        case 0x253ac0u: goto label_253ac0;
        case 0x253ac4u: goto label_253ac4;
        case 0x253ac8u: goto label_253ac8;
        case 0x253accu: goto label_253acc;
        case 0x253ad0u: goto label_253ad0;
        case 0x253ad4u: goto label_253ad4;
        case 0x253ad8u: goto label_253ad8;
        case 0x253adcu: goto label_253adc;
        case 0x253ae0u: goto label_253ae0;
        case 0x253ae4u: goto label_253ae4;
        case 0x253ae8u: goto label_253ae8;
        case 0x253aecu: goto label_253aec;
        case 0x253af0u: goto label_253af0;
        case 0x253af4u: goto label_253af4;
        case 0x253af8u: goto label_253af8;
        case 0x253afcu: goto label_253afc;
        case 0x253b00u: goto label_253b00;
        case 0x253b04u: goto label_253b04;
        case 0x253b08u: goto label_253b08;
        case 0x253b0cu: goto label_253b0c;
        case 0x253b10u: goto label_253b10;
        case 0x253b14u: goto label_253b14;
        case 0x253b18u: goto label_253b18;
        case 0x253b1cu: goto label_253b1c;
        case 0x253b20u: goto label_253b20;
        case 0x253b24u: goto label_253b24;
        case 0x253b28u: goto label_253b28;
        case 0x253b2cu: goto label_253b2c;
        case 0x253b30u: goto label_253b30;
        case 0x253b34u: goto label_253b34;
        case 0x253b38u: goto label_253b38;
        case 0x253b3cu: goto label_253b3c;
        case 0x253b40u: goto label_253b40;
        case 0x253b44u: goto label_253b44;
        case 0x253b48u: goto label_253b48;
        case 0x253b4cu: goto label_253b4c;
        case 0x253b50u: goto label_253b50;
        case 0x253b54u: goto label_253b54;
        case 0x253b58u: goto label_253b58;
        case 0x253b5cu: goto label_253b5c;
        case 0x253b60u: goto label_253b60;
        case 0x253b64u: goto label_253b64;
        case 0x253b68u: goto label_253b68;
        case 0x253b6cu: goto label_253b6c;
        case 0x253b70u: goto label_253b70;
        case 0x253b74u: goto label_253b74;
        case 0x253b78u: goto label_253b78;
        case 0x253b7cu: goto label_253b7c;
        case 0x253b80u: goto label_253b80;
        case 0x253b84u: goto label_253b84;
        case 0x253b88u: goto label_253b88;
        case 0x253b8cu: goto label_253b8c;
        case 0x253b90u: goto label_253b90;
        case 0x253b94u: goto label_253b94;
        case 0x253b98u: goto label_253b98;
        case 0x253b9cu: goto label_253b9c;
        case 0x253ba0u: goto label_253ba0;
        case 0x253ba4u: goto label_253ba4;
        case 0x253ba8u: goto label_253ba8;
        case 0x253bacu: goto label_253bac;
        case 0x253bb0u: goto label_253bb0;
        case 0x253bb4u: goto label_253bb4;
        case 0x253bb8u: goto label_253bb8;
        case 0x253bbcu: goto label_253bbc;
        case 0x253bc0u: goto label_253bc0;
        case 0x253bc4u: goto label_253bc4;
        case 0x253bc8u: goto label_253bc8;
        case 0x253bccu: goto label_253bcc;
        case 0x253bd0u: goto label_253bd0;
        case 0x253bd4u: goto label_253bd4;
        case 0x253bd8u: goto label_253bd8;
        case 0x253bdcu: goto label_253bdc;
        case 0x253be0u: goto label_253be0;
        case 0x253be4u: goto label_253be4;
        case 0x253be8u: goto label_253be8;
        case 0x253becu: goto label_253bec;
        case 0x253bf0u: goto label_253bf0;
        case 0x253bf4u: goto label_253bf4;
        case 0x253bf8u: goto label_253bf8;
        case 0x253bfcu: goto label_253bfc;
        case 0x253c00u: goto label_253c00;
        case 0x253c04u: goto label_253c04;
        case 0x253c08u: goto label_253c08;
        case 0x253c0cu: goto label_253c0c;
        case 0x253c10u: goto label_253c10;
        case 0x253c14u: goto label_253c14;
        case 0x253c18u: goto label_253c18;
        case 0x253c1cu: goto label_253c1c;
        case 0x253c20u: goto label_253c20;
        case 0x253c24u: goto label_253c24;
        case 0x253c28u: goto label_253c28;
        case 0x253c2cu: goto label_253c2c;
        case 0x253c30u: goto label_253c30;
        case 0x253c34u: goto label_253c34;
        case 0x253c38u: goto label_253c38;
        case 0x253c3cu: goto label_253c3c;
        case 0x253c40u: goto label_253c40;
        case 0x253c44u: goto label_253c44;
        case 0x253c48u: goto label_253c48;
        case 0x253c4cu: goto label_253c4c;
        case 0x253c50u: goto label_253c50;
        case 0x253c54u: goto label_253c54;
        case 0x253c58u: goto label_253c58;
        case 0x253c5cu: goto label_253c5c;
        case 0x253c60u: goto label_253c60;
        case 0x253c64u: goto label_253c64;
        case 0x253c68u: goto label_253c68;
        case 0x253c6cu: goto label_253c6c;
        case 0x253c70u: goto label_253c70;
        case 0x253c74u: goto label_253c74;
        case 0x253c78u: goto label_253c78;
        case 0x253c7cu: goto label_253c7c;
        case 0x253c80u: goto label_253c80;
        case 0x253c84u: goto label_253c84;
        case 0x253c88u: goto label_253c88;
        case 0x253c8cu: goto label_253c8c;
        case 0x253c90u: goto label_253c90;
        case 0x253c94u: goto label_253c94;
        case 0x253c98u: goto label_253c98;
        case 0x253c9cu: goto label_253c9c;
        case 0x253ca0u: goto label_253ca0;
        case 0x253ca4u: goto label_253ca4;
        case 0x253ca8u: goto label_253ca8;
        case 0x253cacu: goto label_253cac;
        case 0x253cb0u: goto label_253cb0;
        case 0x253cb4u: goto label_253cb4;
        case 0x253cb8u: goto label_253cb8;
        case 0x253cbcu: goto label_253cbc;
        case 0x253cc0u: goto label_253cc0;
        case 0x253cc4u: goto label_253cc4;
        case 0x253cc8u: goto label_253cc8;
        case 0x253cccu: goto label_253ccc;
        case 0x253cd0u: goto label_253cd0;
        case 0x253cd4u: goto label_253cd4;
        case 0x253cd8u: goto label_253cd8;
        case 0x253cdcu: goto label_253cdc;
        case 0x253ce0u: goto label_253ce0;
        case 0x253ce4u: goto label_253ce4;
        case 0x253ce8u: goto label_253ce8;
        case 0x253cecu: goto label_253cec;
        case 0x253cf0u: goto label_253cf0;
        case 0x253cf4u: goto label_253cf4;
        case 0x253cf8u: goto label_253cf8;
        case 0x253cfcu: goto label_253cfc;
        case 0x253d00u: goto label_253d00;
        case 0x253d04u: goto label_253d04;
        case 0x253d08u: goto label_253d08;
        case 0x253d0cu: goto label_253d0c;
        case 0x253d10u: goto label_253d10;
        case 0x253d14u: goto label_253d14;
        case 0x253d18u: goto label_253d18;
        case 0x253d1cu: goto label_253d1c;
        case 0x253d20u: goto label_253d20;
        case 0x253d24u: goto label_253d24;
        case 0x253d28u: goto label_253d28;
        case 0x253d2cu: goto label_253d2c;
        case 0x253d30u: goto label_253d30;
        case 0x253d34u: goto label_253d34;
        case 0x253d38u: goto label_253d38;
        case 0x253d3cu: goto label_253d3c;
        case 0x253d40u: goto label_253d40;
        case 0x253d44u: goto label_253d44;
        case 0x253d48u: goto label_253d48;
        case 0x253d4cu: goto label_253d4c;
        case 0x253d50u: goto label_253d50;
        case 0x253d54u: goto label_253d54;
        case 0x253d58u: goto label_253d58;
        case 0x253d5cu: goto label_253d5c;
        case 0x253d60u: goto label_253d60;
        case 0x253d64u: goto label_253d64;
        case 0x253d68u: goto label_253d68;
        case 0x253d6cu: goto label_253d6c;
        case 0x253d70u: goto label_253d70;
        case 0x253d74u: goto label_253d74;
        case 0x253d78u: goto label_253d78;
        case 0x253d7cu: goto label_253d7c;
        case 0x253d80u: goto label_253d80;
        case 0x253d84u: goto label_253d84;
        case 0x253d88u: goto label_253d88;
        case 0x253d8cu: goto label_253d8c;
        case 0x253d90u: goto label_253d90;
        case 0x253d94u: goto label_253d94;
        case 0x253d98u: goto label_253d98;
        case 0x253d9cu: goto label_253d9c;
        case 0x253da0u: goto label_253da0;
        case 0x253da4u: goto label_253da4;
        case 0x253da8u: goto label_253da8;
        case 0x253dacu: goto label_253dac;
        case 0x253db0u: goto label_253db0;
        case 0x253db4u: goto label_253db4;
        case 0x253db8u: goto label_253db8;
        case 0x253dbcu: goto label_253dbc;
        case 0x253dc0u: goto label_253dc0;
        case 0x253dc4u: goto label_253dc4;
        case 0x253dc8u: goto label_253dc8;
        case 0x253dccu: goto label_253dcc;
        case 0x253dd0u: goto label_253dd0;
        case 0x253dd4u: goto label_253dd4;
        case 0x253dd8u: goto label_253dd8;
        case 0x253ddcu: goto label_253ddc;
        case 0x253de0u: goto label_253de0;
        case 0x253de4u: goto label_253de4;
        case 0x253de8u: goto label_253de8;
        case 0x253decu: goto label_253dec;
        case 0x253df0u: goto label_253df0;
        case 0x253df4u: goto label_253df4;
        case 0x253df8u: goto label_253df8;
        case 0x253dfcu: goto label_253dfc;
        case 0x253e00u: goto label_253e00;
        case 0x253e04u: goto label_253e04;
        case 0x253e08u: goto label_253e08;
        case 0x253e0cu: goto label_253e0c;
        case 0x253e10u: goto label_253e10;
        case 0x253e14u: goto label_253e14;
        case 0x253e18u: goto label_253e18;
        case 0x253e1cu: goto label_253e1c;
        case 0x253e20u: goto label_253e20;
        case 0x253e24u: goto label_253e24;
        case 0x253e28u: goto label_253e28;
        case 0x253e2cu: goto label_253e2c;
        case 0x253e30u: goto label_253e30;
        case 0x253e34u: goto label_253e34;
        case 0x253e38u: goto label_253e38;
        case 0x253e3cu: goto label_253e3c;
        case 0x253e40u: goto label_253e40;
        case 0x253e44u: goto label_253e44;
        case 0x253e48u: goto label_253e48;
        case 0x253e4cu: goto label_253e4c;
        case 0x253e50u: goto label_253e50;
        case 0x253e54u: goto label_253e54;
        case 0x253e58u: goto label_253e58;
        case 0x253e5cu: goto label_253e5c;
        case 0x253e60u: goto label_253e60;
        case 0x253e64u: goto label_253e64;
        case 0x253e68u: goto label_253e68;
        case 0x253e6cu: goto label_253e6c;
        case 0x253e70u: goto label_253e70;
        case 0x253e74u: goto label_253e74;
        case 0x253e78u: goto label_253e78;
        case 0x253e7cu: goto label_253e7c;
        case 0x253e80u: goto label_253e80;
        case 0x253e84u: goto label_253e84;
        case 0x253e88u: goto label_253e88;
        case 0x253e8cu: goto label_253e8c;
        case 0x253e90u: goto label_253e90;
        case 0x253e94u: goto label_253e94;
        case 0x253e98u: goto label_253e98;
        case 0x253e9cu: goto label_253e9c;
        case 0x253ea0u: goto label_253ea0;
        case 0x253ea4u: goto label_253ea4;
        case 0x253ea8u: goto label_253ea8;
        case 0x253eacu: goto label_253eac;
        case 0x253eb0u: goto label_253eb0;
        case 0x253eb4u: goto label_253eb4;
        case 0x253eb8u: goto label_253eb8;
        case 0x253ebcu: goto label_253ebc;
        case 0x253ec0u: goto label_253ec0;
        case 0x253ec4u: goto label_253ec4;
        case 0x253ec8u: goto label_253ec8;
        case 0x253eccu: goto label_253ecc;
        case 0x253ed0u: goto label_253ed0;
        case 0x253ed4u: goto label_253ed4;
        case 0x253ed8u: goto label_253ed8;
        case 0x253edcu: goto label_253edc;
        case 0x253ee0u: goto label_253ee0;
        case 0x253ee4u: goto label_253ee4;
        case 0x253ee8u: goto label_253ee8;
        case 0x253eecu: goto label_253eec;
        case 0x253ef0u: goto label_253ef0;
        case 0x253ef4u: goto label_253ef4;
        case 0x253ef8u: goto label_253ef8;
        case 0x253efcu: goto label_253efc;
        case 0x253f00u: goto label_253f00;
        case 0x253f04u: goto label_253f04;
        case 0x253f08u: goto label_253f08;
        case 0x253f0cu: goto label_253f0c;
        case 0x253f10u: goto label_253f10;
        case 0x253f14u: goto label_253f14;
        case 0x253f18u: goto label_253f18;
        case 0x253f1cu: goto label_253f1c;
        case 0x253f20u: goto label_253f20;
        case 0x253f24u: goto label_253f24;
        case 0x253f28u: goto label_253f28;
        case 0x253f2cu: goto label_253f2c;
        default: return;
    }

label_253760:
    if (ctx->pc == 0x253760u) {
        ctx->pc = 0x253760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25375Cu;
        // 0x253760: 0xb010a  .word       0x000B010A                   # movz        $zero, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253764u;
        goto label_253764;
    }
    ctx->pc = 0x25375Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x253760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25375Cu;
        // 0x253760: 0xb010a  .word       0x000B010A                   # movz        $zero, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25375Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253764u;
label_253764:
    // 0x253764: 0x170012  .word       0x00170012                   # mflo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253764u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253768:
    // 0x253768: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253768u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25376c:
    // 0x25376c: 0x1070005  .word       0x01070005                   # INVALID     $t0, $a3, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25376cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25376C raw=0x01070005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253770:
    // 0x253770: 0x10c0108  .word       0x010C0108                   # jr          $t0 # 000C0100 <InstrIdType: CPU_SPECIAL>
label_253774:
    if (ctx->pc == 0x253774u) {
        ctx->pc = 0x253774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253770u;
        // 0x253774: 0x120110  .word       0x00120110                   # mfhi        $zero # 00120100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253778u;
        goto label_253778;
    }
    ctx->pc = 0x253770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253770u;
        // 0x253774: 0x120110  .word       0x00120110                   # mfhi        $zero # 00120100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253770u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253778u;
label_253778:
    // 0x253778: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253778u;
    ctx->lo = GPR_U64(ctx, 0);
label_25377c:
    // 0x25377c: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x25377cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253780:
    // 0x253780: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x253780u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_253784:
    // 0x253784: 0x2080001  .word       0x02080001                   # INVALID     $s0, $t0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253784u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253784 raw=0x02080001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253788:
    // 0x253788: 0x10e020c  .word       0x010E020C                   # syscall     8 # 010E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253788u;
    ctx->pc = 0x25378Cu;
runtime->handleSyscall(rdram, ctx, 0x43808u);
label_25378c:
    // 0x25378c: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25378cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253790:
    // 0x253790: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253790u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253794:
    // 0x253794: 0x2080016  dsrlv       $zero, $t0, $s0
    ctx->pc = 0x253794u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) >> (GPR_U32(ctx, 16) & 0x3F));
label_253798:
    // 0x253798: 0x20c010b  .word       0x020C010B                   # movn        $zero, $s0, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253798u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 16));
label_25379c:
    // 0x25379c: 0x10f010e  .word       0x010F010E                   # INVALID     $t0, $t7, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25379cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25379C raw=0x010F010E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2537a0:
    // 0x2537a0: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537a0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2537a4:
    // 0x2537a4: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537a8:
    // 0x2537a8: 0x80007  srav        $zero, $t0, $zero
    ctx->pc = 0x2537a8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 0) & 0x1F));
label_2537ac:
    // 0x2537ac: 0x15000e  .word       0x0015000E                   # INVALID     $zero, $s5, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2537AC raw=0x0015000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2537b0:
    // 0x2537b0: 0x10000f  .word       0x0010000F                   # sync # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2537b4:
    // 0x2537b4: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537b4u;
    ctx->lo = GPR_U64(ctx, 0);
label_2537b8:
    // 0x2537b8: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537b8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537bc:
    // 0x2537bc: 0x140000  sll         $zero, $s4, 0
    ctx->pc = 0x2537bcu;
    
label_2537c0:
    // 0x2537c0: 0x20207  .word       0x00020207                   # srav        $zero, $v0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537c0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_2537c4:
    // 0x2537c4: 0x10e0208  .word       0x010E0208                   # jr          $t0 # 000E0200 <InstrIdType: CPU_SPECIAL>
label_2537c8:
    if (ctx->pc == 0x2537C8u) {
        ctx->pc = 0x2537C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537C4u;
        // 0x2537c8: 0x17000f  .word       0x0017000F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x2537CCu;
        goto label_2537cc;
    }
    ctx->pc = 0x2537C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x2537C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537C4u;
        // 0x2537c8: 0x17000f  .word       0x0017000F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2537CCu;
label_2537cc:
    // 0x2537cc: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537d0:
    // 0x2537d0: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2537d0u;
    
label_2537d4:
    // 0x2537d4: 0x50003  sra         $zero, $a1, 0
    ctx->pc = 0x2537d4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), 0));
label_2537d8:
    // 0x2537d8: 0xb010a  .word       0x000B010A                   # movz        $zero, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537d8u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2537dc:
    // 0x2537dc: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537dcu;
    ctx->lo = GPR_U64(ctx, 0);
label_2537e0:
    // 0x2537e0: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537e4:
    // 0x2537e4: 0x1070005  .word       0x01070005                   # INVALID     $t0, $a3, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2537E4 raw=0x01070005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2537e8:
    // 0x2537e8: 0x10d0108  .word       0x010D0108                   # jr          $t0 # 000D0100 <InstrIdType: CPU_SPECIAL>
label_2537ec:
    if (ctx->pc == 0x2537ECu) {
        ctx->pc = 0x2537ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537E8u;
        // 0x2537ec: 0x120110  .word       0x00120110                   # mfhi        $zero # 00120100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2537F0u;
        goto label_2537f0;
    }
    ctx->pc = 0x2537E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x2537ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2537E8u;
        // 0x2537ec: 0x120110  .word       0x00120110                   # mfhi        $zero # 00120100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2537E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2537F0u;
label_2537f0:
    // 0x2537f0: 0x170113  .word       0x00170113                   # mtlo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537f0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2537f4:
    // 0x2537f4: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2537f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2537f8:
    // 0x2537f8: 0x10015  .word       0x00010015                   # INVALID     $zero, $at, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2537F8 raw=0x00010015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2537fc:
    // 0x2537fc: 0x1080107  .word       0x01080107                   # srav        $zero, $t0, $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2537fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 8) & 0x1F));
label_253800:
    // 0x253800: 0x11000b  movn        $zero, $zero, $s1
    ctx->pc = 0x253800u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_253804:
    // 0x253804: 0x170012  .word       0x00170012                   # mflo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253804u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253808:
    // 0x253808: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253808u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25380c:
    // 0x25380c: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x25380cu;
    
label_253810:
    // 0x253810: 0x2080002  .word       0x02080002                   # srl         $zero, $t0, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253810u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_253814:
    // 0x253814: 0x111010e  .word       0x0111010E                   # INVALID     $t0, $s1, 0x10E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x253814 raw=0x0111010E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253818:
    // 0x253818: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253818u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_25381c:
    // 0x25381c: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x25381cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253820:
    // 0x253820: 0x40001  .word       0x00040001                   # INVALID     $zero, $a0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253820u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253820 raw=0x00040001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253824:
    // 0x253824: 0x10b0208  .word       0x010B0208                   # jr          $t0 # 000B0200 <InstrIdType: CPU_SPECIAL>
label_253828:
    if (ctx->pc == 0x253828u) {
        ctx->pc = 0x253828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253824u;
        // 0x253828: 0x10e020c  .word       0x010E020C                   # syscall     8 # 010E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x25382Cu;
        runtime->handleSyscall(rdram, ctx, 0x43808u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25382Cu;
        goto label_25382c;
    }
    ctx->pc = 0x253824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253824u;
        // 0x253828: 0x10e020c  .word       0x010E020C                   # syscall     8 # 010E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x25382Cu;
        runtime->handleSyscall(rdram, ctx, 0x43808u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253824u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25382Cu;
label_25382c:
    // 0x25382c: 0x17010f  .word       0x0017010F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25382cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253830:
    // 0x253830: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253830u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253834:
    // 0x253834: 0x150000  sll         $zero, $s5, 0
    ctx->pc = 0x253834u;
    
label_253838:
    // 0x253838: 0x70001  .word       0x00070001                   # INVALID     $zero, $a3, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253838u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253838 raw=0x00070001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25383c:
    // 0x25383c: 0x10000e  .word       0x0010000E                   # INVALID     $zero, $s0, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25383cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25383C raw=0x0010000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253840:
    // 0x253840: 0x170013  .word       0x00170013                   # mtlo        $zero # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253840u;
    ctx->lo = GPR_U64(ctx, 0);
label_253844:
    // 0x253844: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253848:
    // 0x253848: 0x70001  .word       0x00070001                   # INVALID     $zero, $a3, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253848u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253848 raw=0x00070001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25384c:
    // 0x25384c: 0x90008  .word       0x00090008                   # jr          $zero # 00090000 <InstrIdType: CPU_SPECIAL>
label_253850:
    if (ctx->pc == 0x253850u) {
        ctx->pc = 0x253850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25384Cu;
        // 0x253850: 0x14000e  .word       0x0014000E                   # INVALID     $zero, $s4, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x253850 raw=0x0014000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253854u;
        goto label_253854;
    }
    ctx->pc = 0x25384Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x253850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25384Cu;
        // 0x253850: 0x14000e  .word       0x0014000E                   # INVALID     $zero, $s4, 0xE # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x253850 raw=0x0014000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25384Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253854u;
label_253854:
    // 0x253854: 0x17000f  .word       0x0017000F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253854u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253858:
    // 0x253858: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253858u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_25385c:
    // 0x25385c: 0x9010f  .word       0x0009010F                   # sync # 00090000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25385cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253860:
    // 0x253860: 0x20e0307  .word       0x020E0307                   # srav        $zero, $t6, $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253860u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 16) & 0x1F));
label_253864:
    // 0x253864: 0x1120004  sllv        $zero, $s2, $t0
    ctx->pc = 0x253864u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 8) & 0x1F));
label_253868:
    // 0x253868: 0x170100  sll         $zero, $s7, 4
    ctx->pc = 0x253868u;
    
label_25386c:
    // 0x25386c: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x25386cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253870:
    // 0x253870: 0x16010f  .word       0x0016010F                   # sync # 00160000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253870u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_253874:
    // 0x253874: 0x2010308  .word       0x02010308                   # jr          $s0 # 00010300 <InstrIdType: CPU_SPECIAL>
label_253878:
    if (ctx->pc == 0x253878u) {
        ctx->pc = 0x253878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253874u;
        // 0x253878: 0x20b0011  .word       0x020B0011                   # mthi        $s0 # 000B0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25387Cu;
        goto label_25387c;
    }
    ctx->pc = 0x253874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        ctx->pc = 0x253878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253874u;
        // 0x253878: 0x20b0011  .word       0x020B0011                   # mthi        $s0 # 000B0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 16);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253874u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25387Cu;
label_25387c:
    // 0x25387c: 0x170212  .word       0x00170212                   # mflo        $zero # 00170200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25387cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253880:
    // 0x253880: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253880u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253884:
    // 0x253884: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x253884u;
    
label_253888:
    // 0x253888: 0x40002  srl         $zero, $a0, 0
    ctx->pc = 0x253888u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
label_25388c:
    // 0x25388c: 0x10e0208  .word       0x010E0208                   # jr          $t0 # 000E0200 <InstrIdType: CPU_SPECIAL>
label_253890:
    if (ctx->pc == 0x253890u) {
        ctx->pc = 0x253890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25388Cu;
        // 0x253890: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253894u;
        goto label_253894;
    }
    ctx->pc = 0x25388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x253890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25388Cu;
        // 0x253890: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25388Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253894u;
label_253894:
    // 0x253894: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x253894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_253898:
    // 0x253898: 0x10016  dsrlv       $zero, $at, $zero
    ctx->pc = 0x253898u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_25389c:
    // 0x25389c: 0x140208  .word       0x00140208                   # jr          $zero # 00140200 <InstrIdType: CPU_SPECIAL>
label_2538a0:
    if (ctx->pc == 0x2538A0u) {
        ctx->pc = 0x2538A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25389Cu;
        // 0x2538a0: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538A4u;
        goto label_2538a4;
    }
    ctx->pc = 0x25389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2538A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25389Cu;
        // 0x2538a0: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25389Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2538A4u;
label_2538a4:
    // 0x2538a4: 0x17010f  .word       0x0017010F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2538a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2538a8:
    // 0x2538a8: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2538a8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2538ac:
    // 0x2538ac: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2538acu;
    
label_2538b0:
    // 0x2538b0: 0x40002  srl         $zero, $a0, 0
    ctx->pc = 0x2538b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
label_2538b4:
    // 0x2538b4: 0x10e0208  .word       0x010E0208                   # jr          $t0 # 000E0200 <InstrIdType: CPU_SPECIAL>
label_2538b8:
    if (ctx->pc == 0x2538B8u) {
        ctx->pc = 0x2538B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538B4u;
        // 0x2538b8: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538BCu;
        goto label_2538bc;
    }
    ctx->pc = 0x2538B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x2538B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538B4u;
        // 0x2538b8: 0x170112  .word       0x00170112                   # mflo        $zero # 00170100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2538B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2538BCu;
label_2538bc:
    // 0x2538bc: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2538bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2538c0:
    // 0x2538c0: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x2538c0u;
    
label_2538c4:
    // 0x2538c4: 0x140208  .word       0x00140208                   # jr          $zero # 00140200 <InstrIdType: CPU_SPECIAL>
label_2538c8:
    if (ctx->pc == 0x2538C8u) {
        ctx->pc = 0x2538C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538C4u;
        // 0x2538c8: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538CCu;
        goto label_2538cc;
    }
    ctx->pc = 0x2538C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2538C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538C4u;
        // 0x2538c8: 0x10e010b  .word       0x010E010B                   # movn        $zero, $t0, $t6 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2538C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2538CCu;
label_2538cc:
    // 0x2538cc: 0x17010f  .word       0x0017010F                   # sync # 00170000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2538ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2538d0:
    // 0x2538d0: 0x170017  dsrav       $zero, $s7, $zero
    ctx->pc = 0x2538d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 0) & 0x3F));
label_2538d4:
    // 0x2538d4: 0x0  nop
    ctx->pc = 0x2538d4u;
    // NOP
label_2538d8:
    // 0x2538d8: 0x0  nop
    ctx->pc = 0x2538d8u;
    // NOP
label_2538dc:
    // 0x2538dc: 0x0  nop
    ctx->pc = 0x2538dcu;
    // NOP
label_2538e0:
    // 0x2538e0: 0x50500  sll         $zero, $a1, 20
    ctx->pc = 0x2538e0u;
    
label_2538e4:
    // 0x2538e4: 0x10d0d01  .word       0x010D0D01                   # INVALID     $t0, $t5, 0xD01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2538e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2538E4 raw=0x010D0D01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2538e8:
    // 0x2538e8: 0x8101008  j           func_404020
label_2538ec:
    if (ctx->pc == 0x2538ECu) {
        ctx->pc = 0x2538ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538E8u;
        // 0x2538ec: 0x70f0f07  .word       0x070F0F07                   # INVALID     $t8, $t7, 0xF07 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x2538EC raw=0x070F0F07");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538F0u;
        goto label_2538f0;
    }
    ctx->pc = 0x2538E8u;
    ctx->pc = 0x2538ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538E8u;
    // 0x2538ec: 0x70f0f07  .word       0x070F0F07                   # INVALID     $t8, $t7, 0xF07 # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0xF at 0x2538EC raw=0x070F0F07");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x404020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x404020u, 0x2538E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2538F0u;
label_2538f0:
    // 0x2538f0: 0x9010109  j           func_4040424
label_2538f4:
    if (ctx->pc == 0x2538F4u) {
        ctx->pc = 0x2538F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538F0u;
        // 0x2538f4: 0x70e0e07  tnei        $t8, 0xE07 (Delay Slot)
        if (GPR_S64(ctx, 24) != (int64_t)(int32_t)3591) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538F8u;
        goto label_2538f8;
    }
    ctx->pc = 0x2538F0u;
    ctx->pc = 0x2538F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538F0u;
    // 0x2538f4: 0x70e0e07  tnei        $t8, 0xE07 (Delay Slot)
    if (GPR_S64(ctx, 24) != (int64_t)(int32_t)3591) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4040424u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4040424u, 0x2538F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2538F8u;
label_2538f8:
    // 0x2538f8: 0xc07070c  jal         func_1C1C30
label_2538fc:
    if (ctx->pc == 0x2538FCu) {
        ctx->pc = 0x2538FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538F8u;
        // 0x2538fc: 0xb07070b  j           func_C1C1C2C (Delay Slot)
        // J 0xC1C1C2C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253900u;
        goto label_253900;
    }
    ctx->pc = 0x2538F8u;
    SET_GPR_U32(ctx, 31, 0x253900u);
    ctx->pc = 0x2538FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538F8u;
    // 0x2538fc: 0xb07070b  j           func_C1C1C2C (Delay Slot)
    // J 0xC1C1C2C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1C30u, 0x2538F8u, 0x253900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253900u;
label_253900:
    // 0x253900: 0x1070701  .word       0x01070701                   # INVALID     $t0, $a3, 0x701 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253900u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253900 raw=0x01070701"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253904:
    // 0x253904: 0x110b0701  beq         $t0, $t3, . + 4 + (0x701 << 2)
label_253908:
    if (ctx->pc == 0x253908u) {
        ctx->pc = 0x253908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253904u;
        // 0x253908: 0x7010b11  bgez        $t8, . + 4 + (0xB11 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x256550 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25390Cu;
        goto label_25390c;
    }
    ctx->pc = 0x253904u;
    {
        const bool branch_taken_0x253904 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x253908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253904u;
        // 0x253908: 0x7010b11  bgez        $t8, . + 4 + (0xB11 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x256550 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253904) {
            ctx->pc = 0x25550Cu;
            { ctx->pc = 0x25550c; return; }
        }
    }
    ctx->pc = 0x25390Cu;
label_25390c:
    // 0x25390c: 0x3020107  .word       0x03020107                   # srav        $zero, $v0, $t8 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25390cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
label_253910:
    // 0x253910: 0x1040203  .word       0x01040203                   # sra         $zero, $a0, 8 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253910u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 8));
label_253914:
    // 0x253914: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2)
label_253918:
    if (ctx->pc == 0x253918u) {
        ctx->pc = 0x253918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253914u;
        // 0x253918: 0x4020204  bltzl       $zero, . + 4 + (0x204 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x25412C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25391Cu;
        goto label_25391c;
    }
    ctx->pc = 0x253914u;
    {
        const bool branch_taken_0x253914 = (GPR_S32(ctx, 0) >= 0);
        ctx->pc = 0x253918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253914u;
        // 0x253918: 0x4020204  bltzl       $zero, . + 4 + (0x204 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x25412C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253914) {
            ctx->pc = 0x25491Cu;
            { ctx->pc = 0x25491c; return; }
        }
    }
    ctx->pc = 0x25391Cu;
label_25391c:
    // 0x25391c: 0x4030304  bgezl       $zero, . + 4 + (0x304 << 2)
label_253920:
    if (ctx->pc == 0x253920u) {
        ctx->pc = 0x253920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25391Cu;
        // 0x253920: 0x6030604  bgezl       $s0, . + 4 + (0x604 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x255134 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253924u;
        goto label_253924;
    }
    ctx->pc = 0x25391Cu;
    {
        const bool branch_taken_0x25391c = (GPR_S32(ctx, 0) >= 0);
        if (branch_taken_0x25391c) {
            ctx->pc = 0x253920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25391Cu;
            // 0x253920: 0x6030604  bgezl       $s0, . + 4 + (0x604 << 2) (Delay Slot)
            // REGIMM branch instruction to 0x255134 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x254530u;
            { ctx->pc = 0x254530; return; }
        }
    }
    ctx->pc = 0x253924u;
label_253924:
    // 0x253924: 0x2040406  .word       0x02040406                   # srlv        $zero, $a0, $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253924u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
label_253928:
    // 0x253928: 0x3020402  .word       0x03020402                   # srl         $zero, $v0, 16 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253928u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_25392c:
    // 0x25392c: 0x3020203  .word       0x03020203                   # sra         $zero, $v0, 8 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25392cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 8));
label_253930:
    // 0x253930: 0x2040203  .word       0x02040203                   # sra         $zero, $a0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253930u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 8));
label_253934:
    // 0x253934: 0x12190402  beq         $s0, $t9, . + 4 + (0x402 << 2)
label_253938:
    if (ctx->pc == 0x253938u) {
        ctx->pc = 0x253938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253934u;
        // 0x253938: 0x14191319  bne         $zero, $t9, . + 4 + (0x1319 << 2) (Delay Slot)
        // Likely branch instruction at 0x253938 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25393Cu;
        goto label_25393c;
    }
    ctx->pc = 0x253934u;
    {
        const bool branch_taken_0x253934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 25));
        ctx->pc = 0x253938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253934u;
        // 0x253938: 0x14191319  bne         $zero, $t9, . + 4 + (0x1319 << 2) (Delay Slot)
        // Likely branch instruction at 0x253938 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253934) {
            ctx->pc = 0x254940u;
            { ctx->pc = 0x254940; return; }
        }
    }
    ctx->pc = 0x25393Cu;
label_25393c:
    // 0x25393c: 0x1090d01  .word       0x01090D01                   # INVALID     $t0, $t1, 0xD01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25393cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25393C raw=0x01090D01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253940:
    // 0x253940: 0x701070b  bgez        $t8, . + 4 + (0x70B << 2)
label_253944:
    if (ctx->pc == 0x253944u) {
        ctx->pc = 0x253944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253940u;
        // 0x253944: 0x2040104  .word       0x02040104                   # sllv        $zero, $a0, $s0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253948u;
        goto label_253948;
    }
    ctx->pc = 0x253940u;
    {
        const bool branch_taken_0x253940 = (GPR_S32(ctx, 24) >= 0);
        ctx->pc = 0x253944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253940u;
        // 0x253944: 0x2040104  .word       0x02040104                   # sllv        $zero, $a0, $s0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253940) {
            ctx->pc = 0x255570u;
            { ctx->pc = 0x255570; return; }
        }
    }
    ctx->pc = 0x253948u;
label_253948:
    // 0x253948: 0x2040304  .word       0x02040304                   # sllv        $zero, $a0, $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253948u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
label_25394c:
    // 0x25394c: 0x13190701  beq         $t8, $t9, . + 4 + (0x701 << 2)
label_253950:
    if (ctx->pc == 0x253950u) {
        ctx->pc = 0x253950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25394Cu;
        // 0x253950: 0x1060005  .word       0x01060005                   # INVALID     $t0, $a2, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253950 raw=0x01060005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253954u;
        goto label_253954;
    }
    ctx->pc = 0x25394Cu;
    {
        const bool branch_taken_0x25394c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 25));
        ctx->pc = 0x253950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25394Cu;
        // 0x253950: 0x1060005  .word       0x01060005                   # INVALID     $t0, $a2, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253950 raw=0x01060005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x25394c) {
            ctx->pc = 0x255554u;
            { ctx->pc = 0x255554; return; }
        }
    }
    ctx->pc = 0x253954u;
label_253954:
    // 0x253954: 0xd01010d  jal         func_4040434
label_253958:
    if (ctx->pc == 0x253958u) {
        ctx->pc = 0x253958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253954u;
        // 0x253958: 0x50d06  .word       0x00050D06                   # srlv        $at, $a1, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25395Cu;
        goto label_25395c;
    }
    ctx->pc = 0x253954u;
    SET_GPR_U32(ctx, 31, 0x25395Cu);
    ctx->pc = 0x253958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253954u;
    // 0x253958: 0x50d06  .word       0x00050D06                   # srlv        $at, $a1, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 0) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4040434u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4040434u, 0x253954u, 0x25395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25395Cu;
label_25395c:
    // 0x25395c: 0x106010d  break       262, 4
    ctx->pc = 0x25395cu;
    runtime->handleBreak(rdram, ctx);
label_253960:
    // 0x253960: 0x70e070d  tnei        $t8, 0x70D
    ctx->pc = 0x253960u;
    if (GPR_S64(ctx, 24) != (int64_t)(int32_t)1805) { runtime->handleTrap(rdram, ctx); }
label_253964:
    // 0x253964: 0x16151516  bne         $s0, $s5, . + 4 + (0x1516 << 2)
label_253968:
    if (ctx->pc == 0x253968u) {
        ctx->pc = 0x253968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253964u;
        // 0x253968: 0xb0e0b0d  j           func_C382C34 (Delay Slot)
        // J 0xC382C34 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x25396Cu;
        goto label_25396c;
    }
    ctx->pc = 0x253964u;
    {
        const bool branch_taken_0x253964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x253968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253964u;
        // 0x253968: 0xb0e0b0d  j           func_C382C34 (Delay Slot)
        // J 0xC382C34 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253964) {
            ctx->pc = 0x258DC0u;
            { ctx->pc = 0x258dc0; return; }
        }
    }
    ctx->pc = 0x25396Cu;
label_25396c:
    // 0x25396c: 0x4060005  .word       0x04060005                   # INVALID     $zero, $a2, 0x5 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x25396cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x25396C raw=0x04060005");
 /* MITIGATED */
label_253970:
    // 0x253970: 0x160d0d16  bne         $s0, $t5, . + 4 + (0xD16 << 2)
label_253974:
    if (ctx->pc == 0x253974u) {
        ctx->pc = 0x253974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253970u;
        // 0x253974: 0x2060005  .word       0x02060005                   # INVALID     $s0, $a2, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253974 raw=0x02060005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253978u;
        goto label_253978;
    }
    ctx->pc = 0x253970u;
    {
        const bool branch_taken_0x253970 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 13));
        ctx->pc = 0x253974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253970u;
        // 0x253974: 0x2060005  .word       0x02060005                   # INVALID     $s0, $a2, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253974 raw=0x02060005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x253970) {
            ctx->pc = 0x256DCCu;
            { ctx->pc = 0x256dcc; return; }
        }
    }
    ctx->pc = 0x253978u;
label_253978:
    // 0x253978: 0x10d0406  .word       0x010D0406                   # srlv        $zero, $t5, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253978u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 8) & 0x1F));
label_25397c:
    // 0x25397c: 0x30e030d  break       782, 12
    ctx->pc = 0x25397cu;
    runtime->handleBreak(rdram, ctx);
label_253980:
    // 0x253980: 0x10e0306  .word       0x010E0306                   # srlv        $zero, $t6, $t0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253980u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
label_253984:
    // 0x253984: 0x40d040d  .word       0x040D040D                   # INVALID     $zero, $t5, 0x40D # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x253984u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0xD at 0x253984 raw=0x040D040D");
 /* MITIGATED */
label_253988:
    // 0x253988: 0x3060405  .word       0x03060405                   # INVALID     $t8, $a2, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253988u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253988 raw=0x03060405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25398c:
    // 0x25398c: 0x4060605  .word       0x04060605                   # INVALID     $zero, $a2, 0x605 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x25398cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x25398C raw=0x04060605");
 /* MITIGATED */
label_253990:
    // 0x253990: 0x306070e  .word       0x0306070E                   # INVALID     $t8, $a2, 0x70E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x253990 raw=0x0306070E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253994:
    // 0x253994: 0x217030d  break       535, 12
    ctx->pc = 0x253994u;
    runtime->handleBreak(rdram, ctx);
label_253998:
    // 0x253998: 0x40d0118  .word       0x040D0118                   # INVALID     $zero, $t5, 0x118 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x253998u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0xD at 0x253998 raw=0x040D0118");
 /* MITIGATED */
label_25399c:
    // 0x25399c: 0x1205070e  beq         $s0, $a1, . + 4 + (0x70E << 2)
label_2539a0:
    if (ctx->pc == 0x2539A0u) {
        ctx->pc = 0x2539A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25399Cu;
        // 0x2539a0: 0x306130d  break       774, 76 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2539A4u;
        goto label_2539a4;
    }
    ctx->pc = 0x25399Cu;
    {
        const bool branch_taken_0x25399c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2539A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25399Cu;
        // 0x2539a0: 0x306130d  break       774, 76 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25399c) {
            ctx->pc = 0x2555D8u;
            { ctx->pc = 0x2555d8; return; }
        }
    }
    ctx->pc = 0x2539A4u;
label_2539a4:
    // 0x2539a4: 0x1010101  .word       0x01010101                   # INVALID     $t0, $at, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2539A4 raw=0x01010101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2539a8:
    // 0x2539a8: 0x101  .word       0x00000101                   # INVALID     $zero, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2539A8 raw=0x00000101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2539ac:
    // 0x2539ac: 0x0  nop
    ctx->pc = 0x2539acu;
    // NOP
label_2539b0:
    // 0x2539b0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539b4:
    // 0x2539b4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539b8:
    // 0x2539b8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539b8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539bc:
    // 0x2539bc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539c0:
    // 0x2539c0: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539c4:
    // 0x2539c4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539c8:
    // 0x2539c8: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539cc:
    // 0x2539cc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539ccu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539d0:
    // 0x2539d0: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539d4:
    // 0x2539d4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539d8:
    // 0x2539d8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539dc:
    // 0x2539dc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539dcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539e0:
    // 0x2539e0: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539e4:
    // 0x2539e4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_2539e8:
    // 0x2539e8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539ec:
    // 0x2539ec: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539ecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539f0:
    // 0x2539f0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539f4:
    // 0x2539f4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539f8:
    // 0x2539f8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_2539fc:
    // 0x2539fc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2539fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a00:
    // 0x253a00: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a04:
    // 0x253a04: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a08:
    // 0x253a08: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a0c:
    // 0x253a0c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a10:
    // 0x253a10: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a14:
    // 0x253a14: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a18:
    // 0x253a18: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a1c:
    // 0x253a1c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a1cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a20:
    // 0x253a20: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a24:
    // 0x253a24: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a28:
    // 0x253a28: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a2c:
    // 0x253a2c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a30:
    // 0x253a30: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a34:
    // 0x253a34: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a38:
    // 0x253a38: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a3c:
    // 0x253a3c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a3cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a40:
    // 0x253a40: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a44:
    // 0x253a44: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a48:
    // 0x253a48: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a4c:
    // 0x253a4c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a4cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a50:
    // 0x253a50: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a54:
    // 0x253a54: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a58:
    // 0x253a58: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a58u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a5c:
    // 0x253a5c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a5cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a60:
    // 0x253a60: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a64:
    // 0x253a64: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253a68:
    // 0x253a68: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a6c:
    // 0x253a6c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a6cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a70:
    // 0x253a70: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a70u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a74:
    // 0x253a74: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a78:
    // 0x253a78: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a78u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a7c:
    // 0x253a7c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a7cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a80:
    // 0x253a80: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a84:
    // 0x253a84: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a88:
    // 0x253a88: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a8c:
    // 0x253a8c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a8cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a90:
    // 0x253a90: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a90u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a94:
    // 0x253a94: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a98:
    // 0x253a98: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a98u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253a9c:
    // 0x253a9c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253a9cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253aa0:
    // 0x253aa0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aa0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253aa4:
    // 0x253aa4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253aa8:
    // 0x253aa8: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aa8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253aac:
    // 0x253aac: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aacu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253ab0:
    // 0x253ab0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ab0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ab4:
    // 0x253ab4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ab8:
    // 0x253ab8: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ab8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253abc:
    // 0x253abc: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253abcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253ac0:
    // 0x253ac0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ac0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ac4:
    // 0x253ac4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ac8:
    // 0x253ac8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ac8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253acc:
    // 0x253acc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253accu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ad0:
    // 0x253ad0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ad0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ad4:
    // 0x253ad4: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ad8:
    // 0x253ad8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ad8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253adc:
    // 0x253adc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253adcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253ae0:
    // 0x253ae0: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ae0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253ae4:
    // 0x253ae4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253ae8:
    // 0x253ae8: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ae8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253aec:
    // 0x253aec: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253aecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253af0:
    // 0x253af0: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253af0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253af4:
    // 0x253af4: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253af4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253af8:
    // 0x253af8: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253af8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253afc:
    // 0x253afc: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253afcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b00:
    // 0x253b00: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b00u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b04:
    // 0x253b04: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b08:
    // 0x253b08: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b0c:
    // 0x253b0c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b0cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b10:
    // 0x253b10: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b10u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b14:
    // 0x253b14: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b18:
    // 0x253b18: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b18u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b1c:
    // 0x253b1c: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b1cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b20:
    // 0x253b20: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b24:
    // 0x253b24: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b28:
    // 0x253b28: 0x4f1a0  .word       0x0004F1A0                   # add         $fp, $zero, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_253b2c:
    // 0x253b2c: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b30:
    // 0x253b30: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b30u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b34:
    // 0x253b34: 0x1a5e0  .word       0x0001A5E0                   # add         $s4, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_253b38:
    // 0x253b38: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_253b3c:
    // 0x253b3c: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b3cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_253b40:
    // 0x253b40: 0x2a30  tge         $zero, $zero, 168
    ctx->pc = 0x253b40u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_253b44:
    // 0x253b44: 0x0  nop
    ctx->pc = 0x253b44u;
    // NOP
label_253b48:
    // 0x253b48: 0x0  nop
    ctx->pc = 0x253b48u;
    // NOP
label_253b4c:
    // 0x253b4c: 0x0  nop
    ctx->pc = 0x253b4cu;
    // NOP
label_253b50:
    // 0x253b50: 0xf0f1010  jal         func_C3C4040
label_253b54:
    if (ctx->pc == 0x253B54u) {
        ctx->pc = 0x253B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B50u;
        // 0x253b54: 0xe0e0e0f  jal         func_838383C (Delay Slot)
        // JAL 0x838383C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B58u;
        goto label_253b58;
    }
    ctx->pc = 0x253B50u;
    SET_GPR_U32(ctx, 31, 0x253B58u);
    ctx->pc = 0x253B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B50u;
    // 0x253b54: 0xe0e0e0f  jal         func_838383C (Delay Slot)
    // JAL 0x838383C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3C4040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3C4040u, 0x253B50u, 0x253B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B58u;
label_253b58:
    // 0x253b58: 0xd0d0d0e  jal         func_4343438
label_253b5c:
    if (ctx->pc == 0x253B5Cu) {
        ctx->pc = 0x253B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B58u;
        // 0x253b5c: 0xc0c0c0d  jal         func_303034 (Delay Slot)
        // JAL 0x303034 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B60u;
        goto label_253b60;
    }
    ctx->pc = 0x253B58u;
    SET_GPR_U32(ctx, 31, 0x253B60u);
    ctx->pc = 0x253B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B58u;
    // 0x253b5c: 0xc0c0c0d  jal         func_303034 (Delay Slot)
    // JAL 0x303034 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4343438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4343438u, 0x253B58u, 0x253B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B60u;
label_253b60:
    // 0x253b60: 0xb0b0b0c  j           func_C2C2C30
label_253b64:
    if (ctx->pc == 0x253B64u) {
        ctx->pc = 0x253B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B60u;
        // 0x253b64: 0xa0a0a0b  j           func_828282C (Delay Slot)
        // J 0x828282C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B68u;
        goto label_253b68;
    }
    ctx->pc = 0x253B60u;
    ctx->pc = 0x253B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B60u;
    // 0x253b64: 0xa0a0a0b  j           func_828282C (Delay Slot)
    // J 0x828282C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2C30u, 0x253B60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253B68u;
label_253b68:
    // 0x253b68: 0x909090a  j           func_4242428
label_253b6c:
    if (ctx->pc == 0x253B6Cu) {
        ctx->pc = 0x253B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B68u;
        // 0x253b6c: 0x7080809  tgei        $t8, 0x809 (Delay Slot)
        if (GPR_S64(ctx, 24) >= (int64_t)(int32_t)2057) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B70u;
        goto label_253b70;
    }
    ctx->pc = 0x253B68u;
    ctx->pc = 0x253B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B68u;
    // 0x253b6c: 0x7080809  tgei        $t8, 0x809 (Delay Slot)
    if (GPR_S64(ctx, 24) >= (int64_t)(int32_t)2057) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4242428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4242428u, 0x253B68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253B70u;
label_253b70:
    // 0x253b70: 0x5060607  .word       0x05060607                   # INVALID     $t0, $a2, 0x607 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x253b70u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x253B70 raw=0x05060607");
 /* MITIGATED */
label_253b74:
    // 0x253b74: 0x3040405  .word       0x03040405                   # INVALID     $t8, $a0, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253B74 raw=0x03040405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253b78:
    // 0x253b78: 0x2020203  .word       0x02020203                   # sra         $zero, $v0, 8 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b78u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 8));
label_253b7c:
    // 0x253b7c: 0x102  srl         $zero, $zero, 4
    ctx->pc = 0x253b7cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_253b80:
    // 0x253b80: 0x0  nop
    ctx->pc = 0x253b80u;
    // NOP
label_253b84:
    // 0x253b84: 0x4b4b0300  vaddx.xz    $vf12, $vf0, $vf11x
    ctx->pc = 0x253b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_253b88:
    // 0x253b88: 0x50784b4b  beql        $v1, $t8, . + 4 + (0x4B4B << 2)
label_253b8c:
    if (ctx->pc == 0x253B8Cu) {
        ctx->pc = 0x253B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B88u;
        // 0x253b8c: 0x1733091  .word       0x01733091                   # mthi        $t3 # 00133080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 11);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B90u;
        goto label_253b90;
    }
    ctx->pc = 0x253B88u;
    {
        const bool branch_taken_0x253b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x253b88) {
            ctx->pc = 0x253B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253B88u;
            // 0x253b8c: 0x1733091  .word       0x01733091                   # mthi        $t3 # 00133080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            ctx->hi = GPR_U64(ctx, 11);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2668B8u;
            { ctx->pc = 0x2668b8; return; }
        }
    }
    ctx->pc = 0x253B90u;
label_253b90:
    // 0x253b90: 0x1000101  .word       0x01000101                   # INVALID     $t0, $zero, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253b90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253B90 raw=0x01000101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253b94:
    // 0x253b94: 0x56425405  bnel        $s2, $v0, . + 4 + (0x5405 << 2)
label_253b98:
    if (ctx->pc == 0x253B98u) {
        ctx->pc = 0x253B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B94u;
        // 0x253b98: 0x874b6e40  lh          $t3, 0x6E40($k0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B9Cu;
        goto label_253b9c;
    }
    ctx->pc = 0x253B94u;
    {
        const bool branch_taken_0x253b94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x253b94) {
            ctx->pc = 0x253B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253B94u;
            // 0x253b98: 0x874b6e40  lh          $t3, 0x6E40($k0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 26), 28224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268BACu;
            { ctx->pc = 0x268bac; return; }
        }
    }
    ctx->pc = 0x253B9Cu;
label_253b9c:
    // 0x253b9c: 0x1027331  tgeu        $t0, $v0, 460
    ctx->pc = 0x253b9cu;
    if (GPR_U64(ctx, 8) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_253ba0:
    // 0x253ba0: 0x3020002  .word       0x03020002                   # srl         $zero, $v0, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ba0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 0));
label_253ba4:
    // 0x253ba4: 0x44524452  .word       0x44524452                   # cfc1        $s2, $8 # 00000452 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253ba4u;
    SET_GPR_U32(ctx, 18, 0); // Unimplemented FCR8
label_253ba8:
    // 0x253ba8: 0x32824664  andi        $v0, $s4, 0x4664
    ctx->pc = 0x253ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)18020);
label_253bac:
    // 0x253bac: 0x3010373  tltu        $t8, $at, 13
    ctx->pc = 0x253bacu;
    if (GPR_U64(ctx, 24) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_253bb0:
    // 0x253bb0: 0x56030300  bnel        $s0, $v1, . + 4 + (0x300 << 2)
label_253bb4:
    if (ctx->pc == 0x253BB4u) {
        ctx->pc = 0x253BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BB0u;
        // 0x253bb4: 0x7d484e40  sq          $t0, 0x4E40($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 20032), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BB8u;
        goto label_253bb8;
    }
    ctx->pc = 0x253BB0u;
    {
        const bool branch_taken_0x253bb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x253bb0) {
            ctx->pc = 0x253BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BB0u;
            // 0x253bb4: 0x7d484e40  sq          $t0, 0x4E40($t2) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 10), 20032), GPR_VEC(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2547B4u;
            { ctx->pc = 0x2547b4; return; }
        }
    }
    ctx->pc = 0x253BB8u;
label_253bb8:
    // 0x253bb8: 0x73339655  .word       0x73339655                   # INVALID     $t9, $s3, -0x69AB # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x253bb8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253BB8 raw=0x73339655"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253bbc:
    // 0x253bbc: 0x40004  sllv        $zero, $a0, $zero
    ctx->pc = 0x253bbcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_253bc0:
    // 0x253bc0: 0x5a440304  .word       0x5A440304                   # blezl       $s2, . + 4 + (0x304 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_253bc4:
    if (ctx->pc == 0x253BC4u) {
        ctx->pc = 0x253BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BC0u;
        // 0x253bc4: 0x41644846  .word       0x41644846                   # INVALID     $t3, $a0, 0x4846 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x253BC4 raw=0x41644846"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BC8u;
        goto label_253bc8;
    }
    ctx->pc = 0x253BC0u;
    {
        const bool branch_taken_0x253bc0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x253bc0) {
            ctx->pc = 0x253BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BC0u;
            // 0x253bc4: 0x41644846  .word       0x41644846                   # INVALID     $t3, $a0, 0x4846 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
// //             throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x253BC4 raw=0x41644846"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2547D4u;
            { ctx->pc = 0x2547d4; return; }
        }
    }
    ctx->pc = 0x253BC8u;
label_253bc8:
    // 0x253bc8: 0x573347d  bgezall     $t3, . + 4 + (0x347D << 2)
label_253bcc:
    if (ctx->pc == 0x253BCCu) {
        ctx->pc = 0x253BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BC8u;
        // 0x253bcc: 0x5000501  bltz        $t0, . + 4 + (0x501 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x254FD4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BD0u;
        goto label_253bd0;
    }
    ctx->pc = 0x253BC8u;
    {
        const bool branch_taken_0x253bc8 = (GPR_S32(ctx, 11) >= 0);
        if (branch_taken_0x253bc8) {
            SET_GPR_U32(ctx, 31, 0x253BD0u);
            ctx->pc = 0x253BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BC8u;
            // 0x253bcc: 0x5000501  bltz        $t0, . + 4 + (0x501 << 2) (Delay Slot)
            // REGIMM branch instruction to 0x254FD4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x260DC0u;
            { ctx->pc = 0x260dc0; return; }
        }
    }
    ctx->pc = 0x253BD0u;
label_253bd0:
    // 0x253bd0: 0x4e4a4c03  .word       0x4E4A4C03                   # INVALID     $s2, $t2, 0x4C03 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253bd0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253BD0 raw=0x4E4A4C03");
 /* MITIGATED */
label_253bd4:
    // 0x253bd4: 0x783c5a48  lq          $gp, 0x5A48($at)
    ctx->pc = 0x253bd4u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 1), 23112)));
label_253bd8:
    // 0x253bd8: 0x2067335  .word       0x02067335                   # INVALID     $s0, $a2, 0x7335 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253bd8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x253BD8 raw=0x02067335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253bdc:
    // 0x253bdc: 0x3060006  srlv        $zero, $a2, $t8
    ctx->pc = 0x253bdcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 24) & 0x1F));
label_253be0:
    // 0x253be0: 0x50465244  beql        $v0, $a2, . + 4 + (0x5244 << 2)
label_253be4:
    if (ctx->pc == 0x253BE4u) {
        ctx->pc = 0x253BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BE0u;
        // 0x253be4: 0x369b5a82  ori         $k1, $s4, 0x5A82 (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)23170);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BE8u;
        goto label_253be8;
    }
    ctx->pc = 0x253BE0u;
    {
        const bool branch_taken_0x253be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x253be0) {
            ctx->pc = 0x253BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253BE0u;
            // 0x253be4: 0x369b5a82  ori         $k1, $s4, 0x5A82 (Delay Slot)
            SET_GPR_U64(ctx, 27, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)23170);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2684F4u;
            { ctx->pc = 0x2684f4; return; }
        }
    }
    ctx->pc = 0x253BE8u;
label_253be8:
    // 0x253be8: 0x700076b  bltz        $t8, . + 4 + (0x76B << 2)
label_253bec:
    if (ctx->pc == 0x253BECu) {
        ctx->pc = 0x253BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BE8u;
        // 0x253bec: 0x46030700  add.s       $f28, $f0, $f3 (Delay Slot)
        ctx->f[28] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253BF0u;
        goto label_253bf0;
    }
    ctx->pc = 0x253BE8u;
    {
        const bool branch_taken_0x253be8 = (GPR_S32(ctx, 24) < 0);
        ctx->pc = 0x253BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BE8u;
        // 0x253bec: 0x46030700  add.s       $f28, $f0, $f3 (Delay Slot)
        ctx->f[28] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253be8) {
            ctx->pc = 0x255998u;
            { ctx->pc = 0x255998; return; }
        }
    }
    ctx->pc = 0x253BF0u;
label_253bf0:
    // 0x253bf0: 0x8c524450  lw          $s2, 0x4450($v0)
    ctx->pc = 0x253bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17488)));
label_253bf4:
    // 0x253bf4: 0x6b379b64  ldl         $s7, -0x649C($t9)
    ctx->pc = 0x253bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294941540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_253bf8:
    // 0x253bf8: 0x80008  .word       0x00080008                   # jr          $zero # 00080000 <InstrIdType: CPU_SPECIAL>
label_253bfc:
    if (ctx->pc == 0x253BFCu) {
        ctx->pc = 0x253BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BF8u;
        // 0x253bfc: 0x52440308  beql        $s2, $a0, . + 4 + (0x308 << 2) (Delay Slot)
        // Likely branch instruction at 0x253BFC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C00u;
        goto label_253c00;
    }
    ctx->pc = 0x253BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x253BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BF8u;
        // 0x253bfc: 0x52440308  beql        $s2, $a0, . + 4 + (0x308 << 2) (Delay Slot)
        // Likely branch instruction at 0x253BFC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253BF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253C00u;
label_253c00:
    // 0x253c00: 0x4b6e4254  vminix.xzw  $vf9, $vf8, $vf14x
    ctx->pc = 0x253c00u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
label_253c04:
    // 0x253c04: 0x9733887  j           func_5CCE21C
label_253c08:
    if (ctx->pc == 0x253C08u) {
        ctx->pc = 0x253C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C04u;
        // 0x253c08: 0x9000900  j           func_4002400 (Delay Slot)
        // J 0x4002400 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C0Cu;
        goto label_253c0c;
    }
    ctx->pc = 0x253C04u;
    ctx->pc = 0x253C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C04u;
    // 0x253c08: 0x9000900  j           func_4002400 (Delay Slot)
    // J 0x4002400 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x5CCE21Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5CCE21Cu, 0x253C04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253C0Cu;
label_253c0c:
    // 0x253c0c: 0x48544203  .word       0x48544203                   # cfc2.i      $s4, $vi8 # 00000202 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x253c0cu;
    SET_GPR_U32(ctx, 20, static_cast<uint32_t>(ctx->vi[8]));
label_253c10:
    // 0x253c10: 0x9b55874e  lwr         $s5, -0x78B2($k0)
    ctx->pc = 0x253c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294936398); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 21) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 21) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 21, merged64); }
label_253c14:
    // 0x253c14: 0x10a6739  .word       0x010A6739                   # INVALID     $t0, $t2, 0x6739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x253C14 raw=0x010A6739"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c18:
    // 0x253c18: 0x30a000a  movz        $zero, $t8, $t2
    ctx->pc = 0x253c18u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 24));
label_253c1c:
    // 0x253c1c: 0x5e386036  .word       0x5E386036                   # bgtzl       $s1, . + 4 + (0x6036 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_253c20:
    if (ctx->pc == 0x253C20u) {
        ctx->pc = 0x253C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C1Cu;
        // 0x253c20: 0x3a8c5082  xori        $t4, $s4, 0x5082 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)20610);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C24u;
        goto label_253c24;
    }
    ctx->pc = 0x253C1Cu;
    {
        const bool branch_taken_0x253c1c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x253c1c) {
            ctx->pc = 0x253C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C1Cu;
            // 0x253c20: 0x3a8c5082  xori        $t4, $s4, 0x5082 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)20610);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BCF8u;
            { ctx->pc = 0x26bcf8; return; }
        }
    }
    ctx->pc = 0x253C24u;
label_253c24:
    // 0x253c24: 0xb030b7e  j           func_C0C2DF8
label_253c28:
    if (ctx->pc == 0x253C28u) {
        ctx->pc = 0x253C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C24u;
        // 0x253c28: 0x4a030b00  vaddx       $vf12, $vf1, $vf3x (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C2Cu;
        goto label_253c2c;
    }
    ctx->pc = 0x253C24u;
    ctx->pc = 0x253C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C24u;
    // 0x253c28: 0x4a030b00  vaddx       $vf12, $vf1, $vf3x (Delay Slot)
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C2DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C2DF8u, 0x253C24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253C2Cu;
label_253c2c:
    // 0x253c2c: 0x7d484e4c  sq          $t0, 0x4E4C($t2)
    ctx->pc = 0x253c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 20044), GPR_VEC(ctx, 8));
label_253c30:
    // 0x253c30: 0x7f3b9155  sq          $k1, -0x6EAB($t9)
    ctx->pc = 0x253c30u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 4294938965), GPR_VEC(ctx, 27));
label_253c34:
    // 0x253c34: 0xc020c  .word       0x000C020C                   # syscall     8 # 000C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c34u;
    ctx->pc = 0x253C38u;
runtime->handleSyscall(rdram, ctx, 0x3008u);
label_253c38:
    // 0x253c38: 0x5a5a050c  .word       0x5A5A050C                   # blezl       $s2, . + 4 + (0x50C << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_253c3c:
    if (ctx->pc == 0x253C3Cu) {
        ctx->pc = 0x253C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C38u;
        // 0x253c3c: 0x508c5a5a  beql        $a0, $t4, . + 4 + (0x5A5A << 2) (Delay Slot)
        // Likely branch instruction at 0x253C3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C40u;
        goto label_253c40;
    }
    ctx->pc = 0x253C38u;
    {
        const bool branch_taken_0x253c38 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x253c38) {
            ctx->pc = 0x253C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C38u;
            // 0x253c3c: 0x508c5a5a  beql        $a0, $t4, . + 4 + (0x5A5A << 2) (Delay Slot)
            // Likely branch instruction at 0x253C3C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x25506Cu;
            { ctx->pc = 0x25506c; return; }
        }
    }
    ctx->pc = 0x253C40u;
label_253c40:
    // 0x253c40: 0xd7f3c9b  jal         func_5FCF26C
label_253c44:
    if (ctx->pc == 0x253C44u) {
        ctx->pc = 0x253C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C40u;
        // 0x253c44: 0xd000d01  jal         func_4003404 (Delay Slot)
        // JAL 0x4003404 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C48u;
        goto label_253c48;
    }
    ctx->pc = 0x253C40u;
    SET_GPR_U32(ctx, 31, 0x253C48u);
    ctx->pc = 0x253C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C40u;
    // 0x253c44: 0xd000d01  jal         func_4003404 (Delay Slot)
    // JAL 0x4003404 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x5FCF26Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5FCF26Cu, 0x253C40u, 0x253C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C48u;
label_253c48:
    // 0x253c48: 0x464c4a03  .word       0x464C4A03                   # INVALID     $s2, $t4, 0x4A03 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253c48u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x253C48 raw=0x464C4A03"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c4c:
    // 0x253c4c: 0x9b5f8750  lwr         $ra, -0x78B0($k0)
    ctx->pc = 0x253c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294936400); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 31) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 31) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 31, merged64); }
label_253c50:
    // 0x253c50: 0x30e673d  .word       0x030E673D                   # INVALID     $t8, $t6, 0x673D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x253C50 raw=0x030E673D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c54:
    // 0x253c54: 0x412000e  bltzall     $zero, . + 4 + (0xE << 2)
label_253c58:
    if (ctx->pc == 0x253C58u) {
        ctx->pc = 0x253C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C54u;
        // 0x253c58: 0x4c4a4a4c  .word       0x4C4A4A4C                   # INVALID     $v0, $t2, 0x4A4C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C58 raw=0x4C4A4A4C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C5Cu;
        goto label_253c5c;
    }
    ctx->pc = 0x253C54u;
    {
        const bool branch_taken_0x253c54 = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x253c54) {
            SET_GPR_U32(ctx, 31, 0x253C5Cu);
            ctx->pc = 0x253C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C54u;
            // 0x253c58: 0x4c4a4a4c  .word       0x4C4A4A4C                   # INVALID     $v0, $t2, 0x4A4C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C58 raw=0x4C4A4A4C");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x253C90u;
            goto label_253c90;
        }
    }
    ctx->pc = 0x253C5Cu;
label_253c5c:
    // 0x253c5c: 0x3e8c5078  .word       0x3E8C5078                   # lui         $t4, 0x5078 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253c5cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20600 << 16));
label_253c60:
    // 0x253c60: 0xf030f6b  jal         func_C0C3DAC
label_253c64:
    if (ctx->pc == 0x253C64u) {
        ctx->pc = 0x253C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C60u;
        // 0x253c64: 0x4e031200  .word       0x4E031200                   # INVALID     $s0, $v1, 0x1200 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C64 raw=0x4E031200");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C68u;
        goto label_253c68;
    }
    ctx->pc = 0x253C60u;
    SET_GPR_U32(ctx, 31, 0x253C68u);
    ctx->pc = 0x253C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C60u;
    // 0x253c64: 0x4e031200  .word       0x4E031200                   # INVALID     $s0, $v1, 0x1200 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C64 raw=0x4E031200");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3DACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3DACu, 0x253C60u, 0x253C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C68u;
label_253c68:
    // 0x253c68: 0x7d465048  sq          $a2, 0x5048($t2)
    ctx->pc = 0x253c68u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 20552), GPR_VEC(ctx, 6));
label_253c6c:
    // 0x253c6c: 0x7b3f8755  lq          $ra, -0x78AB($t9)
    ctx->pc = 0x253c6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 25), 4294936405)));
label_253c70:
    // 0x253c70: 0x100310  .word       0x00100310                   # mfhi        $zero # 00100300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c70u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_253c74:
    // 0x253c74: 0x50460312  beql        $v0, $a2, . + 4 + (0x312 << 2)
label_253c78:
    if (ctx->pc == 0x253C78u) {
        ctx->pc = 0x253C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C74u;
        // 0x253c78: 0x50784e48  beql        $v1, $t8, . + 4 + (0x4E48 << 2) (Delay Slot)
        // Likely branch instruction at 0x253C78 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C7Cu;
        goto label_253c7c;
    }
    ctx->pc = 0x253C74u;
    {
        const bool branch_taken_0x253c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x253c74) {
            ctx->pc = 0x253C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253C74u;
            // 0x253c78: 0x50784e48  beql        $v1, $t8, . + 4 + (0x4E48 << 2) (Delay Slot)
            // Likely branch instruction at 0x253C78 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2548C0u;
            { ctx->pc = 0x2548c0; return; }
        }
    }
    ctx->pc = 0x253C7Cu;
label_253c7c:
    // 0x253c7c: 0x117b408c  beq         $t3, $k1, . + 4 + (0x408C << 2)
label_253c80:
    if (ctx->pc == 0x253C80u) {
        ctx->pc = 0x253C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C7Cu;
        // 0x253c80: 0x12001103  beqz        $s0, . + 4 + (0x1103 << 2) (Delay Slot)
        // Likely branch instruction at 0x253C80 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253C84u;
        goto label_253c84;
    }
    ctx->pc = 0x253C7Cu;
    {
        const bool branch_taken_0x253c7c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 27));
        ctx->pc = 0x253C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C7Cu;
        // 0x253c80: 0x12001103  beqz        $s0, . + 4 + (0x1103 << 2) (Delay Slot)
        // Likely branch instruction at 0x253C80 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c7c) {
            ctx->pc = 0x263EB0u;
            { ctx->pc = 0x263eb0; return; }
        }
    }
    ctx->pc = 0x253C84u;
label_253c84:
    // 0x253c84: 0x4e484e03  .word       0x4E484E03                   # INVALID     $s2, $t0, 0x4E03 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253c84u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C84 raw=0x4E484E03");
 /* MITIGATED */
label_253c88:
    // 0x253c88: 0x82466e48  lb          $a2, 0x6E48($s2)
    ctx->pc = 0x253c88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28232)));
label_253c8c:
    // 0x253c8c: 0x3126341  .word       0x03126341                   # INVALID     $t8, $s2, 0x6341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x253C8C raw=0x03126341"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c90:
    // 0x253c90: 0x3120012  .word       0x03120012                   # mflo        $zero # 03120000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253c90u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_253c94:
    // 0x253c94: 0x4c4a4c4a  .word       0x4C4A4C4A                   # INVALID     $v0, $t2, 0x4C4A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253c94u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253C94 raw=0x4C4A4C4A");
 /* MITIGATED */
label_253c98:
    // 0x253c98: 0x42874b73  .word       0x42874B73                   # INVALID     $s4, $a3, 0x4B73 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x253c98u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x253C98 raw=0x42874B73"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253c9c:
    // 0x253c9c: 0x1301137b  beq         $t8, $at, . + 4 + (0x137B << 2)
label_253ca0:
    if (ctx->pc == 0x253CA0u) {
        ctx->pc = 0x253CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C9Cu;
        // 0x253ca0: 0x46031500  add.s       $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CA4u;
        goto label_253ca4;
    }
    ctx->pc = 0x253C9Cu;
    {
        const bool branch_taken_0x253c9c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 1));
        ctx->pc = 0x253CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253C9Cu;
        // 0x253ca0: 0x46031500  add.s       $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253c9c) {
            ctx->pc = 0x258A8Cu;
            { ctx->pc = 0x258a8c; return; }
        }
    }
    ctx->pc = 0x253CA4u;
label_253ca4:
    // 0x253ca4: 0x7d5a643c  sq          $k0, 0x643C($t2)
    ctx->pc = 0x253ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 25660), GPR_VEC(ctx, 26));
label_253ca8:
    // 0x253ca8: 0x73439155  .word       0x73439155                   # INVALID     $k0, $v1, -0x6EAB # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x253ca8u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253CA8 raw=0x73439155"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253cac:
    // 0x253cac: 0x140114  .word       0x00140114                   # dsllv       $zero, $s4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253cacu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 20) << (GPR_U32(ctx, 0) & 0x3F));
label_253cb0:
    // 0x253cb0: 0x50640311  beql        $v1, $a0, . + 4 + (0x311 << 2)
label_253cb4:
    if (ctx->pc == 0x253CB4u) {
        ctx->pc = 0x253CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CB0u;
        // 0x253cb4: 0x506e4646  beql        $v1, $t6, . + 4 + (0x4646 << 2) (Delay Slot)
        // Likely branch instruction at 0x253CB4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CB8u;
        goto label_253cb8;
    }
    ctx->pc = 0x253CB0u;
    {
        const bool branch_taken_0x253cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x253cb0) {
            ctx->pc = 0x253CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253CB0u;
            // 0x253cb4: 0x506e4646  beql        $v1, $t6, . + 4 + (0x4646 << 2) (Delay Slot)
            // Likely branch instruction at 0x253CB4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2548F8u;
            { ctx->pc = 0x2548f8; return; }
        }
    }
    ctx->pc = 0x253CB8u;
label_253cb8:
    // 0x253cb8: 0x1573448c  bne         $t3, $s3, . + 4 + (0x448C << 2)
label_253cbc:
    if (ctx->pc == 0x253CBCu) {
        ctx->pc = 0x253CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CB8u;
        // 0x253cbc: 0x11001501  beqz        $t0, . + 4 + (0x1501 << 2) (Delay Slot)
        // Likely branch instruction at 0x253CBC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CC0u;
        goto label_253cc0;
    }
    ctx->pc = 0x253CB8u;
    {
        const bool branch_taken_0x253cb8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 19));
        ctx->pc = 0x253CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CB8u;
        // 0x253cbc: 0x11001501  beqz        $t0, . + 4 + (0x1501 << 2) (Delay Slot)
        // Likely branch instruction at 0x253CBC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cb8) {
            ctx->pc = 0x264EECu;
            { ctx->pc = 0x264eec; return; }
        }
    }
    ctx->pc = 0x253CC0u;
label_253cc0:
    // 0x253cc0: 0x4e3a5c03  .word       0x4E3A5C03                   # INVALID     $s1, $k0, 0x5C03 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253cc0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253CC0 raw=0x4E3A5C03");
 /* MITIGATED */
label_253cc4:
    // 0x253cc4: 0x82466e48  lb          $a2, 0x6E48($s2)
    ctx->pc = 0x253cc4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28232)));
label_253cc8:
    // 0x253cc8: 0x1167345  .word       0x01167345                   # INVALID     $t0, $s6, 0x7345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253cc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x253CC8 raw=0x01167345"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253ccc:
    // 0x253ccc: 0x3170016  dsrlv       $zero, $s7, $t8
    ctx->pc = 0x253cccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) >> (GPR_U32(ctx, 24) & 0x3F));
label_253cd0:
    // 0x253cd0: 0x484e4452  .word       0x484E4452                   # cfc2.ni     $t6, $vi8 # 00000452 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x253cd0u;
    SET_GPR_U32(ctx, 14, static_cast<uint32_t>(ctx->vi[8]));
label_253cd4:
    // 0x253cd4: 0x468c5078  .word       0x468C5078                   # INVALID     $s4, $t4, 0x5078 # 00000000 <InstrIdType: CPU_COP1_FPUW>
    ctx->pc = 0x253cd4u;
// //     throw std::runtime_error("Unhandled FPU.W instruction: function 0x38 at 0x253CD4 raw=0x468C5078"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253cd8:
    // 0x253cd8: 0x17001773  bnez        $t8, . + 4 + (0x1773 << 2)
label_253cdc:
    if (ctx->pc == 0x253CDCu) {
        ctx->pc = 0x253CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CD8u;
        // 0x253cdc: 0x38030a00  xori        $v1, $zero, 0xA00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)2560);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CE0u;
        goto label_253ce0;
    }
    ctx->pc = 0x253CD8u;
    {
        const bool branch_taken_0x253cd8 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x253CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CD8u;
        // 0x253cdc: 0x38030a00  xori        $v1, $zero, 0xA00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)2560);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cd8) {
            ctx->pc = 0x259AA8u;
            { ctx->pc = 0x259aa8; return; }
        }
    }
    ctx->pc = 0x253CE0u;
label_253ce0:
    // 0x253ce0: 0x6e5c3a5e  ldr         $gp, 0x3A5E($s2)
    ctx->pc = 0x253ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14942); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem >> shift)); }
label_253ce4:
    // 0x253ce4: 0x7e478250  sq          $a3, -0x7DB0($s2)
    ctx->pc = 0x253ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 4294935120), GPR_VEC(ctx, 7));
label_253ce8:
    // 0x253ce8: 0x180118  .word       0x00180118                   # mult        $zero, $zero, $t8 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_253cec:
    // 0x253cec: 0x4b4b0317  vminiw.xz   $vf12, $vf0, $vf11w
    ctx->pc = 0x253cecu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_253cf0:
    // 0x253cf0: 0x557d4b4b  bnel        $t3, $sp, . + 4 + (0x4B4B << 2)
label_253cf4:
    if (ctx->pc == 0x253CF4u) {
        ctx->pc = 0x253CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF0u;
        // 0x253cf4: 0x197b4891  .word       0x197B4891                   # blez        $t3, . + 4 + (0x4891 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x253CF4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253CF8u;
        goto label_253cf8;
    }
    ctx->pc = 0x253CF0u;
    {
        const bool branch_taken_0x253cf0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 29));
        if (branch_taken_0x253cf0) {
            ctx->pc = 0x253CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253CF0u;
            // 0x253cf4: 0x197b4891  .word       0x197B4891                   # blez        $t3, . + 4 + (0x4891 << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x253CF4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x266A20u;
            { ctx->pc = 0x266a20; return; }
        }
    }
    ctx->pc = 0x253CF8u;
label_253cf8:
    // 0x253cf8: 0x11001901  beqz        $t0, . + 4 + (0x1901 << 2)
label_253cfc:
    if (ctx->pc == 0x253CFCu) {
        ctx->pc = 0x253CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF8u;
        // 0x253cfc: 0x46425403  .word       0x46425403                   # INVALID     $s2, $v0, 0x5403 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x253CFC raw=0x46425403"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D00u;
        goto label_253d00;
    }
    ctx->pc = 0x253CF8u;
    {
        const bool branch_taken_0x253cf8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x253CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253CF8u;
        // 0x253cfc: 0x46425403  .word       0x46425403                   # INVALID     $s2, $v0, 0x5403 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
// //         throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x253CFC raw=0x46425403"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x253cf8) {
            ctx->pc = 0x25A100u;
            { ctx->pc = 0x25a100; return; }
        }
    }
    ctx->pc = 0x253D00u;
label_253d00:
    // 0x253d00: 0x965a8250  lhu         $k0, -0x7DB0($s2)
    ctx->pc = 0x253d00u;
    SET_GPR_ZE32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294935120)));
label_253d04:
    // 0x253d04: 0x1a7349  .word       0x001A7349                   # jalr        $t6, $zero # 001A0340 <InstrIdType: CPU_SPECIAL>
label_253d08:
    if (ctx->pc == 0x253D08u) {
        ctx->pc = 0x253D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D04u;
        // 0x253d08: 0x315001a  div         $zero, $t8, $s5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 24);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D0Cu;
        goto label_253d0c;
    }
    ctx->pc = 0x253D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x253D0Cu);
        ctx->pc = 0x253D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D04u;
        // 0x253d08: 0x315001a  div         $zero, $t8, $s5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 21);    int32_t dividend = GPR_S32(ctx, 24);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253D04u, 0x253D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253D0Cu;
label_253d0c:
    // 0x253d0c: 0x4c4a4c4a  .word       0x4C4A4C4A                   # INVALID     $v0, $t2, 0x4C4A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x253d0cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D0C raw=0x4C4A4C4A");
 /* MITIGATED */
label_253d10:
    // 0x253d10: 0x4a91557d  .word       0x4A91557D                   # INVALID     $s4, $s1, 0x557D # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x253d10u;
//     throw std::runtime_error("Unhandled VU0 Special2 function: 0x55 at 0x253D10 raw=0x4A91557D");
 /* MITIGATED */
label_253d14:
    // 0x253d14: 0x1b031b4b  .word       0x1B031B4B                   # blez        $t8, . + 4 + (0x1B4B << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_253d18:
    if (ctx->pc == 0x253D18u) {
        ctx->pc = 0x253D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D14u;
        // 0x253d18: 0x46032000  add.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D1Cu;
        goto label_253d1c;
    }
    ctx->pc = 0x253D14u;
    {
        const bool branch_taken_0x253d14 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x253D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D14u;
        // 0x253d18: 0x46032000  add.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d14) {
            ctx->pc = 0x25AA44u;
            { ctx->pc = 0x25aa44; return; }
        }
    }
    ctx->pc = 0x253D1Cu;
label_253d1c:
    // 0x253d1c: 0x78554150  lq          $s5, 0x4150($v0)
    ctx->pc = 0x253d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 2), 16720)));
label_253d20:
    // 0x253d20: 0x674b8250  daddiu      $t3, $k0, -0x7DB0
    ctx->pc = 0x253d20u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)4294935120);
label_253d24:
    // 0x253d24: 0x1c011c  .word       0x001C011C                   # dmult       $zero, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253d24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x253D24 raw=0x001C011C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253d28:
    // 0x253d28: 0x4452031a  .word       0x4452031A                   # cfc1        $s2, $0 # 0000031A <InstrIdType: R5900_COP1>
    ctx->pc = 0x253d28u;
    SET_GPR_U32(ctx, 18, 0x00000000);
label_253d2c:
    // 0x253d2c: 0x5078484e  beql        $v1, $t8, . + 4 + (0x484E << 2)
label_253d30:
    if (ctx->pc == 0x253D30u) {
        ctx->pc = 0x253D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D2Cu;
        // 0x253d30: 0x1d674c8c  .word       0x1D674C8C                   # bgtz        $t3, . + 4 + (0x4C8C << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x253D30 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D34u;
        goto label_253d34;
    }
    ctx->pc = 0x253D2Cu;
    {
        const bool branch_taken_0x253d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x253d2c) {
            ctx->pc = 0x253D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D2Cu;
            // 0x253d30: 0x1d674c8c  .word       0x1D674C8C                   # bgtz        $t3, . + 4 + (0x4C8C << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x253D30 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x265E68u;
            { ctx->pc = 0x265e68; return; }
        }
    }
    ctx->pc = 0x253D34u;
label_253d34:
    // 0x253d34: 0x1b001d01  blez        $t8, . + 4 + (0x1D01 << 2)
label_253d38:
    if (ctx->pc == 0x253D38u) {
        ctx->pc = 0x253D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D34u;
        // 0x253d38: 0x40544203  .word       0x40544203                   # cfc0        $s4, BadVaddr # 00000203 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x253D38 raw=0x40544203"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D3Cu;
        goto label_253d3c;
    }
    ctx->pc = 0x253D34u;
    {
        const bool branch_taken_0x253d34 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x253D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D34u;
        // 0x253d38: 0x40544203  .word       0x40544203                   # cfc0        $s4, BadVaddr # 00000203 <InstrIdType: R5900_COP0> (Delay Slot)
// //         throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x253D38 raw=0x40544203"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d34) {
            ctx->pc = 0x25B13Cu;
            { ctx->pc = 0x25b13c; return; }
        }
    }
    ctx->pc = 0x253D3Cu;
label_253d3c:
    // 0x253d3c: 0xa05a8c56  sb          $k0, -0x73AA($v0)
    ctx->pc = 0x253d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294937686), (uint8_t)GPR_U32(ctx, 26));
label_253d40:
    // 0x253d40: 0x11e674d  break       286, 413
    ctx->pc = 0x253d40u;
    runtime->handleBreak(rdram, ctx);
label_253d44:
    // 0x253d44: 0x31c001e  ddiv        $zero, $t8, $gp
    ctx->pc = 0x253d44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x253D44 raw=0x031C001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253d48:
    // 0x253d48: 0x52444e48  beql        $s2, $a0, . + 4 + (0x4E48 << 2)
label_253d4c:
    if (ctx->pc == 0x253D4Cu) {
        ctx->pc = 0x253D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D48u;
        // 0x253d4c: 0x4e965a82  .word       0x4E965A82                   # INVALID     $s4, $s6, 0x5A82 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D4C raw=0x4E965A82");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D50u;
        goto label_253d50;
    }
    ctx->pc = 0x253D48u;
    {
        const bool branch_taken_0x253d48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x253d48) {
            ctx->pc = 0x253D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D48u;
            // 0x253d4c: 0x4e965a82  .word       0x4E965A82                   # INVALID     $s4, $s6, 0x5A82 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//             throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D4C raw=0x4E965A82");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x26766Cu;
            { ctx->pc = 0x26766c; return; }
        }
    }
    ctx->pc = 0x253D50u;
label_253d50:
    // 0x253d50: 0x1f011f67  .word       0x1F011F67                   # bgtz        $t8, . + 4 + (0x1F67 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_253d54:
    if (ctx->pc == 0x253D54u) {
        ctx->pc = 0x253D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D50u;
        // 0x253d54: 0x4e031d00  .word       0x4E031D00                   # INVALID     $s0, $v1, 0x1D00 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D54 raw=0x4E031D00");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D58u;
        goto label_253d58;
    }
    ctx->pc = 0x253D50u;
    {
        const bool branch_taken_0x253d50 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x253D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D50u;
        // 0x253d54: 0x4e031d00  .word       0x4E031D00                   # INVALID     $s0, $v1, 0x1D00 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x253D54 raw=0x4E031D00");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d50) {
            ctx->pc = 0x25BAF0u;
            { ctx->pc = 0x25baf0; return; }
        }
    }
    ctx->pc = 0x253D58u;
label_253d58:
    // 0x253d58: 0x6e4c4a48  ldr         $t4, 0x4A48($s2)
    ctx->pc = 0x253d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19016); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_253d5c:
    // 0x253d5c: 0x674f824b  daddiu      $t7, $k0, -0x7DB5
    ctx->pc = 0x253d5cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)4294935115);
label_253d60:
    // 0x253d60: 0x200020  add         $zero, $at, $zero
    ctx->pc = 0x253d60u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_253d64:
    // 0x253d64: 0x4254031e  .word       0x4254031E                   # INVALID     $s2, $s4, 0x31E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x253d64u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x253D64 raw=0x4254031E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253d68:
    // 0x253d68: 0x55824452  bnel        $t4, $v0, . + 4 + (0x4452 << 2)
label_253d6c:
    if (ctx->pc == 0x253D6Cu) {
        ctx->pc = 0x253D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D68u;
        // 0x253d6c: 0x21675091  addi        $a3, $t3, 0x5091 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)20625, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D70u;
        goto label_253d70;
    }
    ctx->pc = 0x253D68u;
    {
        const bool branch_taken_0x253d68 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x253d68) {
            ctx->pc = 0x253D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D68u;
            // 0x253d6c: 0x21675091  addi        $a3, $t3, 0x5091 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)20625, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x264EB4u;
            { ctx->pc = 0x264eb4; return; }
        }
    }
    ctx->pc = 0x253D70u;
label_253d70:
    // 0x253d70: 0x1f002100  bgtz        $t8, . + 4 + (0x2100 << 2)
label_253d74:
    if (ctx->pc == 0x253D74u) {
        ctx->pc = 0x253D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D70u;
        // 0x253d74: 0x54425403  bnel        $v0, $v0, . + 4 + (0x5403 << 2) (Delay Slot)
        // Likely branch instruction at 0x253D74 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D78u;
        goto label_253d78;
    }
    ctx->pc = 0x253D70u;
    {
        const bool branch_taken_0x253d70 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x253D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D70u;
        // 0x253d74: 0x54425403  bnel        $v0, $v0, . + 4 + (0x5403 << 2) (Delay Slot)
        // Likely branch instruction at 0x253D74 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253d70) {
            ctx->pc = 0x25C174u;
            { ctx->pc = 0x25c174; return; }
        }
    }
    ctx->pc = 0x253D78u;
label_253d78:
    // 0x253d78: 0x8c507842  lw          $s0, 0x7842($v0)
    ctx->pc = 0x253d78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30786)));
label_253d7c:
    // 0x253d7c: 0x226751  .word       0x00226751                   # mthi        $at # 00026740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253d7cu;
    ctx->hi = GPR_U64(ctx, 1);
label_253d80:
    // 0x253d80: 0x3200022  sub         $zero, $t9, $zero
    ctx->pc = 0x253d80u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 25), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_253d84:
    // 0x253d84: 0x5a3c6234  .word       0x5A3C6234                   # blezl       $s1, . + 4 + (0x6234 << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
label_253d88:
    if (ctx->pc == 0x253D88u) {
        ctx->pc = 0x253D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D84u;
        // 0x253d88: 0x528c5078  beql        $s4, $t4, . + 4 + (0x5078 << 2) (Delay Slot)
        // Likely branch instruction at 0x253D88 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D8Cu;
        goto label_253d8c;
    }
    ctx->pc = 0x253D84u;
    {
        const bool branch_taken_0x253d84 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x253d84) {
            ctx->pc = 0x253D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D84u;
            // 0x253d88: 0x528c5078  beql        $s4, $t4, . + 4 + (0x5078 << 2) (Delay Slot)
            // Likely branch instruction at 0x253D88 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C658u;
            { ctx->pc = 0x26c658; return; }
        }
    }
    ctx->pc = 0x253D8Cu;
label_253d8c:
    // 0x253d8c: 0x23002367  addi        $zero, $t8, 0x2367
    ctx->pc = 0x253d8cu;
    // NOP (addi to $zero)
label_253d90:
    // 0x253d90: 0x50032100  beql        $zero, $v1, . + 4 + (0x2100 << 2)
label_253d94:
    if (ctx->pc == 0x253D94u) {
        ctx->pc = 0x253D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253D90u;
        // 0x253d94: 0x5a3c5a46  .word       0x5A3C5A46                   # blezl       $s1, . + 4 + (0x5A46 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x253D94 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253D98u;
        goto label_253d98;
    }
    ctx->pc = 0x253D90u;
    {
        const bool branch_taken_0x253d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x253d90) {
            ctx->pc = 0x253D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253D90u;
            // 0x253d94: 0x5a3c5a46  .word       0x5A3C5A46                   # blezl       $s1, . + 4 + (0x5A46 << 2) # 001C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x253D94 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C194u;
            { ctx->pc = 0x25c194; return; }
        }
    }
    ctx->pc = 0x253D98u;
label_253d98:
    // 0x253d98: 0x67537d41  daddiu      $s3, $k0, 0x7D41
    ctx->pc = 0x253d98u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)32065);
label_253d9c:
    // 0x253d9c: 0x240024  and         $zero, $at, $a0
    ctx->pc = 0x253d9cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & GPR_U64(ctx, 4));
label_253da0:
    // 0x253da0: 0x40560322  .word       0x40560322                   # cfc0        $s6, Index # 00000322 <InstrIdType: R5900_COP0>
    ctx->pc = 0x253da0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x253DA0 raw=0x40560322"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253da4:
    // 0x253da4: 0x557d3e58  bnel        $t3, $sp, . + 4 + (0x3E58 << 2)
label_253da8:
    if (ctx->pc == 0x253DA8u) {
        ctx->pc = 0x253DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DA4u;
        // 0x253da8: 0x25675491  addiu       $a3, $t3, 0x5491 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 21649));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253DACu;
        goto label_253dac;
    }
    ctx->pc = 0x253DA4u;
    {
        const bool branch_taken_0x253da4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 29));
        if (branch_taken_0x253da4) {
            ctx->pc = 0x253DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253DA4u;
            // 0x253da8: 0x25675491  addiu       $a3, $t3, 0x5491 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 21649));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263708u;
            { ctx->pc = 0x263708; return; }
        }
    }
    ctx->pc = 0x253DACu;
label_253dac:
    // 0x253dac: 0x23002501  addi        $zero, $t8, 0x2501
    ctx->pc = 0x253dacu;
    // NOP (addi to $zero)
label_253db0:
    // 0x253db0: 0x44524403  .word       0x44524403                   # cfc1        $s2, $8 # 00000403 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253db0u;
    SET_GPR_U32(ctx, 18, 0); // Unimplemented FCR8
label_253db4:
    // 0x253db4: 0x965a8252  lhu         $k0, -0x7DAE($s2)
    ctx->pc = 0x253db4u;
    SET_GPR_ZE32(ctx, 26, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294935122)));
label_253db8:
    // 0x253db8: 0x1266755  .word       0x01266755                   # INVALID     $t1, $a2, 0x6755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253db8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x253DB8 raw=0x01266755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253dbc:
    // 0x253dbc: 0x3230026  xor         $zero, $t9, $v1
    ctx->pc = 0x253dbcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 25) ^ GPR_U64(ctx, 3));
label_253dc0:
    // 0x253dc0: 0x50465442  beql        $v0, $a2, . + 4 + (0x5442 << 2)
label_253dc4:
    if (ctx->pc == 0x253DC4u) {
        ctx->pc = 0x253DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DC0u;
        // 0x253dc4: 0x56915880  bnel        $s4, $s1, . + 4 + (0x5880 << 2) (Delay Slot)
        // Likely branch instruction at 0x253DC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253DC8u;
        goto label_253dc8;
    }
    ctx->pc = 0x253DC0u;
    {
        const bool branch_taken_0x253dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x253dc0) {
            ctx->pc = 0x253DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253DC0u;
            // 0x253dc4: 0x56915880  bnel        $s4, $s1, . + 4 + (0x5880 << 2) (Delay Slot)
            // Likely branch instruction at 0x253DC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x268ECCu;
            { ctx->pc = 0x268ecc; return; }
        }
    }
    ctx->pc = 0x253DC8u;
label_253dc8:
    // 0x253dc8: 0x27012767  addiu       $at, $t8, 0x2767
    ctx->pc = 0x253dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 24), 10087));
label_253dcc:
    // 0x253dcc: 0x4b022400  vaddx.x     $vf16, $vf4, $vf2x
    ctx->pc = 0x253dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_253dd0:
    // 0x253dd0: 0x6e4b4b4b  ldr         $t3, 0x4B4B($s2)
    ctx->pc = 0x253dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_253dd4:
    // 0x253dd4: 0x6757824b  daddiu      $s7, $k0, -0x7DB5
    ctx->pc = 0x253dd4u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 26) + (int64_t)(int32_t)4294935115);
label_253dd8:
    // 0x253dd8: 0x280128  .word       0x00280128                   # mfsa        $zero # 00280100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x253dd8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_253ddc:
    // 0x253ddc: 0x50460225  beql        $v0, $a2, . + 4 + (0x225 << 2)
label_253de0:
    if (ctx->pc == 0x253DE0u) {
        ctx->pc = 0x253DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DDCu;
        // 0x253de0: 0x55825046  bnel        $t4, $v0, . + 4 + (0x5046 << 2) (Delay Slot)
        // Likely branch instruction at 0x253DE0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253DE4u;
        goto label_253de4;
    }
    ctx->pc = 0x253DDCu;
    {
        const bool branch_taken_0x253ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x253ddc) {
            ctx->pc = 0x253DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253DDCu;
            // 0x253de0: 0x55825046  bnel        $t4, $v0, . + 4 + (0x5046 << 2) (Delay Slot)
            // Likely branch instruction at 0x253DE0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x254674u;
            { ctx->pc = 0x254674; return; }
        }
    }
    ctx->pc = 0x253DE4u;
label_253de4:
    // 0x253de4: 0x675896  .word       0x00675896                   # dsrlv       $t3, $a3, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253de4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 3) & 0x3F));
label_253de8:
    // 0x253de8: 0x15083101  bne         $t0, $t0, . + 4 + (0x3101 << 2)
label_253dec:
    if (ctx->pc == 0x253DECu) {
        ctx->pc = 0x253DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DE8u;
        // 0x253dec: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253DF0u;
        goto label_253df0;
    }
    ctx->pc = 0x253DE8u;
    {
        const bool branch_taken_0x253de8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x253DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253DE8u;
        // 0x253dec: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253de8) {
            ctx->pc = 0x2601F0u;
            { ctx->pc = 0x2601f0; return; }
        }
    }
    ctx->pc = 0x253DF0u;
label_253df0:
    // 0x253df0: 0x0  nop
    ctx->pc = 0x253df0u;
    // NOP
label_253df4:
    // 0x253df4: 0x10000ff  .word       0x010000FF                   # dsra32      $zero, $zero, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_253df8:
    // 0x253df8: 0x2150831  tgeu        $s0, $s5, 32
    ctx->pc = 0x253df8u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_253dfc:
    // 0x253dfc: 0x0  nop
    ctx->pc = 0x253dfcu;
    // NOP
label_253e00:
    // 0x253e00: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x253e00u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_253e04:
    // 0x253e04: 0x31010000  andi        $at, $t0, 0x0
    ctx->pc = 0x253e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_253e08:
    // 0x253e08: 0x21508  .word       0x00021508                   # jr          $zero # 00021500 <InstrIdType: CPU_SPECIAL>
label_253e0c:
    if (ctx->pc == 0x253E0Cu) {
        ctx->pc = 0x253E10u;
        goto label_253e10;
    }
    ctx->pc = 0x253E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253E08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x253E10u;
label_253e10:
    // 0x253e10: 0xff0000  .word       0x00FF0000                   # sll         $zero, $ra, 0 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253e10u;
    
label_253e14:
    // 0x253e14: 0x4310129  bgezal      $at, . + 4 + (0x129 << 2)
label_253e18:
    if (ctx->pc == 0x253E18u) {
        ctx->pc = 0x253E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E14u;
        // 0x253e18: 0x4b4b0211  vmaxy.xz    $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E1Cu;
        goto label_253e1c;
    }
    ctx->pc = 0x253E14u;
    {
        const bool branch_taken_0x253e14 = (GPR_S32(ctx, 1) >= 0);
        SET_GPR_U32(ctx, 31, 0x253E1Cu);
        ctx->pc = 0x253E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E14u;
        // 0x253e18: 0x4b4b0211  vmaxy.xz    $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e14) {
            ctx->pc = 0x2542BCu;
            { ctx->pc = 0x2542bc; return; }
        }
    }
    ctx->pc = 0x253E1Cu;
label_253e1c:
    // 0x253e1c: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x253e1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_253e20:
    // 0x253e20: 0x2a00ff78  slti        $zero, $s0, -0x88
    ctx->pc = 0x253e20u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967160) ? 1 : 0);
label_253e24:
    // 0x253e24: 0x15053101  bne         $t0, $a1, . + 4 + (0x3101 << 2)
label_253e28:
    if (ctx->pc == 0x253E28u) {
        ctx->pc = 0x253E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E24u;
        // 0x253e28: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E2Cu;
        goto label_253e2c;
    }
    ctx->pc = 0x253E24u;
    {
        const bool branch_taken_0x253e24 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x253E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E24u;
        // 0x253e28: 0x4b4b4b02  vaddz.xz    $vf12, $vf9, $vf11z (Delay Slot)
        { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e24) {
            ctx->pc = 0x26022Cu;
            { ctx->pc = 0x26022c; return; }
        }
    }
    ctx->pc = 0x253E2Cu;
label_253e2c:
    // 0x253e2c: 0x784b694b  lq          $t3, 0x694B($v0)
    ctx->pc = 0x253e2cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 26955)));
label_253e30:
    // 0x253e30: 0x12b00ff  .word       0x012B00FF                   # dsra32      $zero, $t3, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253e30u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 11) >> (32 + 3));
label_253e34:
    // 0x253e34: 0x2170431  tgeu        $s0, $s7, 16
    ctx->pc = 0x253e34u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_253e38:
    // 0x253e38: 0x4b4b4b4b  vmaddw.xz   $vf13, $vf9, $vf11w
    ctx->pc = 0x253e38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_253e3c:
    // 0x253e3c: 0xff784b69  sd          $t8, 0x4B69($k1)
    ctx->pc = 0x253e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 27), 19305), GPR_U64(ctx, 24));
label_253e40:
    // 0x253e40: 0x31012c00  andi        $at, $t0, 0x2C00
    ctx->pc = 0x253e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)11264);
label_253e44:
    // 0x253e44: 0x4b021105  vsuby.x     $vf4, $vf2, $vf2y
    ctx->pc = 0x253e44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_253e48:
    // 0x253e48: 0x694b4b4b  ldl         $t3, 0x4B4B($t2)
    ctx->pc = 0x253e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_253e4c:
    // 0x253e4c: 0xff784b  .word       0x00FF784B                   # movn        $t7, $a3, $ra # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253e4cu;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 7));
label_253e50:
    // 0x253e50: 0x431012d  bgezal      $at, . + 4 + (0x12D << 2)
label_253e54:
    if (ctx->pc == 0x253E54u) {
        ctx->pc = 0x253E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E50u;
        // 0x253e54: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E58u;
        goto label_253e58;
    }
    ctx->pc = 0x253E50u;
    {
        const bool branch_taken_0x253e50 = (GPR_S32(ctx, 1) >= 0);
        SET_GPR_U32(ctx, 31, 0x253E58u);
        ctx->pc = 0x253E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E50u;
        // 0x253e54: 0x4b4b0215  vminiy.xz   $vf8, $vf0, $vf11y (Delay Slot)
        { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e50) {
            ctx->pc = 0x254308u;
            { ctx->pc = 0x254308; return; }
        }
    }
    ctx->pc = 0x253E58u;
label_253e58:
    // 0x253e58: 0x4b694b4b  vmaddw.xzw  $vf13, $vf9, $vf9w
    ctx->pc = 0x253e58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
label_253e5c:
    // 0x253e5c: 0x2e00ff78  sltiu       $zero, $s0, -0x88
    ctx->pc = 0x253e5cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4294967160) ? 1 : 0);
label_253e60:
    // 0x253e60: 0x17053201  bne         $t8, $a1, . + 4 + (0x3201 << 2)
label_253e64:
    if (ctx->pc == 0x253E64u) {
        ctx->pc = 0x253E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E60u;
        // 0x253e64: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253E64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E68u;
        goto label_253e68;
    }
    ctx->pc = 0x253E60u;
    {
        const bool branch_taken_0x253e60 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 5));
        ctx->pc = 0x253E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E60u;
        // 0x253e64: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253E64 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e60) {
            ctx->pc = 0x260668u;
            { ctx->pc = 0x260668; return; }
        }
    }
    ctx->pc = 0x253E68u;
label_253e68:
    // 0x253e68: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x253e68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_253e6c:
    // 0x253e6c: 0x12f00ff  .word       0x012F00FF                   # dsra32      $zero, $t7, 3 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 15) >> (32 + 3));
label_253e70:
    // 0x253e70: 0x2110031  tgeu        $s0, $s1, 0
    ctx->pc = 0x253e70u;
    if (GPR_U64(ctx, 16) >= GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_253e74:
    // 0x253e74: 0x50505050  beql        $v0, $s0, . + 4 + (0x5050 << 2)
label_253e78:
    if (ctx->pc == 0x253E78u) {
        ctx->pc = 0x253E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E74u;
        // 0x253e78: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E7Cu;
        goto label_253e7c;
    }
    ctx->pc = 0x253E74u;
    {
        const bool branch_taken_0x253e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x253e74) {
            ctx->pc = 0x253E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E74u;
            // 0x253e78: 0xff8c4b6e  sd          $t4, 0x4B6E($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x267FB8u;
            { ctx->pc = 0x267fb8; return; }
        }
    }
    ctx->pc = 0x253E7Cu;
label_253e7c:
    // 0x253e7c: 0x31013031  andi        $at, $t0, 0x3031
    ctx->pc = 0x253e7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)12337);
label_253e80:
    // 0x253e80: 0x50021702  beql        $zero, $v0, . + 4 + (0x1702 << 2)
label_253e84:
    if (ctx->pc == 0x253E84u) {
        ctx->pc = 0x253E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E80u;
        // 0x253e84: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E88u;
        goto label_253e88;
    }
    ctx->pc = 0x253E80u;
    {
        const bool branch_taken_0x253e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x253e80) {
            ctx->pc = 0x253E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253E80u;
            // 0x253e84: 0x6e505050  ldr         $s0, 0x5050($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x259A8Cu;
            { ctx->pc = 0x259a8c; return; }
        }
    }
    ctx->pc = 0x253E88u;
label_253e88:
    // 0x253e88: 0x32ff8c4b  andi        $ra, $s7, 0x8C4B
    ctx->pc = 0x253e88u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)35915);
label_253e8c:
    // 0x253e8c: 0x8310100  j           func_C40400
label_253e90:
    if (ctx->pc == 0x253E90u) {
        ctx->pc = 0x253E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E8Cu;
        // 0x253e90: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x253E90 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253E94u;
        goto label_253e94;
    }
    ctx->pc = 0x253E8Cu;
    ctx->pc = 0x253E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E8Cu;
    // 0x253e90: 0x215  .word       0x00000215                   # INVALID     $zero, $zero, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x253E90 raw=0x00000215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC40400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC40400u, 0x253E8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253E94u;
label_253e94:
    // 0x253e94: 0x0  nop
    ctx->pc = 0x253e94u;
    // NOP
label_253e98:
    // 0x253e98: 0x3100ff00  andi        $zero, $t0, 0xFF00
    ctx->pc = 0x253e98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
label_253e9c:
    // 0x253e9c: 0x11033101  beq         $t0, $v1, . + 4 + (0x3101 << 2)
label_253ea0:
    if (ctx->pc == 0x253EA0u) {
        ctx->pc = 0x253EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E9Cu;
        // 0x253ea0: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253EA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EA4u;
        goto label_253ea4;
    }
    ctx->pc = 0x253E9Cu;
    {
        const bool branch_taken_0x253e9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x253EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253E9Cu;
        // 0x253ea0: 0x50505002  beql        $v0, $s0, . + 4 + (0x5002 << 2) (Delay Slot)
        // Likely branch instruction at 0x253EA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e9c) {
            ctx->pc = 0x2602A4u;
            { ctx->pc = 0x2602a4; return; }
        }
    }
    ctx->pc = 0x253EA4u;
label_253ea4:
    // 0x253ea4: 0x8c4b6e50  lw          $t3, 0x6E50($v0)
    ctx->pc = 0x253ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28240)));
label_253ea8:
    // 0x253ea8: 0x3232ff  .word       0x003232FF                   # dsra32      $a2, $s2, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ea8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 18) >> (32 + 11));
label_253eac:
    // 0x253eac: 0x2110833  tltu        $s0, $s1, 32
    ctx->pc = 0x253eacu;
    if (GPR_U64(ctx, 16) < GPR_U64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_253eb0:
    // 0x253eb0: 0x46464646  .word       0x46464646                   # INVALID     $s2, $a2, 0x4646 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x253eb0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x6 at 0x253EB0 raw=0x46464646"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253eb4:
    // 0x253eb4: 0xff8c4b6e  sd          $t4, 0x4B6E($gp)
    ctx->pc = 0x253eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 19310), GPR_U64(ctx, 12));
label_253eb8:
    // 0x253eb8: 0x33003322  andi        $zero, $t8, 0x3322
    ctx->pc = 0x253eb8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)13090);
label_253ebc:
    // 0x253ebc: 0x46021109  .word       0x46021109                   # trunc.l.s   $f4, $f2 # 00020000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x253ebcu;
// //     throw std::runtime_error("Unhandled FPU.S instruction: function 0x9 at 0x253EBC raw=0x46021109"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_253ec0:
    // 0x253ec0: 0x6e464646  ldr         $a2, 0x4646($s2)
    ctx->pc = 0x253ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 17990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_253ec4:
    // 0x253ec4: 0x21ff8c4b  addi        $ra, $t7, -0x73B5
    ctx->pc = 0x253ec4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294937675, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_253ec8:
    // 0x253ec8: 0x8320034  j           func_C800D0
label_253ecc:
    if (ctx->pc == 0x253ECCu) {
        ctx->pc = 0x253ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EC8u;
        // 0x253ecc: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x253ECC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253ED0u;
        goto label_253ed0;
    }
    ctx->pc = 0x253EC8u;
    ctx->pc = 0x253ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EC8u;
    // 0x253ecc: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
    // Likely branch instruction at 0x253ECC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC800D0u, 0x253EC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253ED0u;
label_253ed0:
    // 0x253ed0: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x253ed0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_253ed4:
    // 0x253ed4: 0x3511ff8c  ori         $s1, $t0, 0xFF8C
    ctx->pc = 0x253ed4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65420);
label_253ed8:
    // 0x253ed8: 0x11093200  beq         $t0, $t1, . + 4 + (0x3200 << 2)
label_253edc:
    if (ctx->pc == 0x253EDCu) {
        ctx->pc = 0x253EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253ED8u;
        // 0x253edc: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x253EDC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EE0u;
        goto label_253ee0;
    }
    ctx->pc = 0x253ED8u;
    {
        const bool branch_taken_0x253ed8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x253EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253ED8u;
        // 0x253edc: 0x55555502  bnel        $t2, $s5, . + 4 + (0x5502 << 2) (Delay Slot)
        // Likely branch instruction at 0x253EDC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ed8) {
            ctx->pc = 0x2606DCu;
            { ctx->pc = 0x2606dc; return; }
        }
    }
    ctx->pc = 0x253EE0u;
label_253ee0:
    // 0x253ee0: 0x8c4b7355  lw          $t3, 0x7355($v0)
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29525)));
label_253ee4:
    // 0x253ee4: 0x3601ff  .word       0x003601FF                   # dsra32      $zero, $s6, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 22) >> (32 + 7));
label_253ee8:
    // 0x253ee8: 0x2110032  tlt         $s0, $s1, 0
    ctx->pc = 0x253ee8u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_253eec:
    // 0x253eec: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_253ef0:
    if (ctx->pc == 0x253EF0u) {
        ctx->pc = 0x253EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EECu;
        // 0x253ef0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253EF4u;
        goto label_253ef4;
    }
    ctx->pc = 0x253EECu;
    {
        const bool branch_taken_0x253eec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x253eec) {
            ctx->pc = 0x253EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253EECu;
            // 0x253ef0: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269444u;
            { ctx->pc = 0x269444; return; }
        }
    }
    ctx->pc = 0x253EF4u;
label_253ef4:
    // 0x253ef4: 0x32013731  andi        $at, $s0, 0x3731
    ctx->pc = 0x253ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)14129);
label_253ef8:
    // 0x253ef8: 0x55021108  bnel        $t0, $v0, . + 4 + (0x1108 << 2)
label_253efc:
    if (ctx->pc == 0x253EFCu) {
        ctx->pc = 0x253EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253EF8u;
        // 0x253efc: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253EFC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F00u;
        goto label_253f00;
    }
    ctx->pc = 0x253EF8u;
    {
        const bool branch_taken_0x253ef8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x253ef8) {
            ctx->pc = 0x253EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253EF8u;
            // 0x253efc: 0x73555555  .word       0x73555555                   # INVALID     $k0, $s5, 0x5555 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //             throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x253EFC raw=0x73555555"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x25831Cu;
            { ctx->pc = 0x25831c; return; }
        }
    }
    ctx->pc = 0x253F00u;
label_253f00:
    // 0x253f00: 0x61ff8c4b  daddi       $ra, $t7, -0x73B5
    ctx->pc = 0x253f00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 15); int64_t imm = (int64_t)(int32_t)4294937675; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_253f04:
    // 0x253f04: 0x9320138  j           func_4C804E0
label_253f08:
    if (ctx->pc == 0x253F08u) {
        ctx->pc = 0x253F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F04u;
        // 0x253f08: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
        // Likely branch instruction at 0x253F08 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F0Cu;
        goto label_253f0c;
    }
    ctx->pc = 0x253F04u;
    ctx->pc = 0x253F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253F04u;
    // 0x253f08: 0x55550211  bnel        $t2, $s5, . + 4 + (0x211 << 2) (Delay Slot)
    // Likely branch instruction at 0x253F08 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C804E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C804E0u, 0x253F04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x253F0Cu;
label_253f0c:
    // 0x253f0c: 0x4b735555  vminiy.xzw  $vf21, $vf10, $vf19y
    ctx->pc = 0x253f0cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[19], ctx->vu0_vf[19], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_253f10:
    // 0x253f10: 0x61ff8c  .word       0x0061FF8C                   # syscall     1022 # 00610000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253f10u;
    ctx->pc = 0x253F14u;
runtime->handleSyscall(rdram, ctx, 0x187FEu);
label_253f14:
    // 0x253f14: 0x15083101  bne         $t0, $t0, . + 4 + (0x3101 << 2)
label_253f18:
    if (ctx->pc == 0x253F18u) {
        ctx->pc = 0x253F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F14u;
        // 0x253f18: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F1Cu;
        goto label_253f1c;
    }
    ctx->pc = 0x253F14u;
    {
        const bool branch_taken_0x253f14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 8));
        ctx->pc = 0x253F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F14u;
        // 0x253f18: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f14) {
            ctx->pc = 0x26031Cu;
            { ctx->pc = 0x26031c; return; }
        }
    }
    ctx->pc = 0x253F1Cu;
label_253f1c:
    // 0x253f1c: 0x0  nop
    ctx->pc = 0x253f1cu;
    // NOP
label_253f20:
    // 0x253f20: 0x33900ff  .word       0x033900FF                   # dsra32      $zero, $t9, 3 # 03200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x253f20u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 25) >> (32 + 3));
label_253f24:
    // 0x253f24: 0x2120432  tlt         $s0, $s2, 16
    ctx->pc = 0x253f24u;
    if (GPR_S64(ctx, 16) < GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_253f28:
    // 0x253f28: 0x55555555  bnel        $t2, $s5, . + 4 + (0x5555 << 2)
label_253f2c:
    if (ctx->pc == 0x253F2Cu) {
        ctx->pc = 0x253F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253F28u;
        // 0x253f2c: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253F30u;
        { ctx->pc = 0x253f30; return; }
    }
    ctx->pc = 0x253F28u;
    {
        const bool branch_taken_0x253f28 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 21));
        if (branch_taken_0x253f28) {
            ctx->pc = 0x253F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253F28u;
            // 0x253f2c: 0xff8c4b73  sd          $t4, 0x4B73($gp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 28), 19315), GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269480u;
            { ctx->pc = 0x269480; return; }
        }
    }
    ctx->pc = 0x253F30u;
    ctx->pc = 0x253f30u;
    return;
}

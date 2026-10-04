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


void FUN_001e9120_part51(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2017c0u: goto label_2017c0;
        case 0x2017c4u: goto label_2017c4;
        case 0x2017c8u: goto label_2017c8;
        case 0x2017ccu: goto label_2017cc;
        case 0x2017d0u: goto label_2017d0;
        case 0x2017d4u: goto label_2017d4;
        case 0x2017d8u: goto label_2017d8;
        case 0x2017dcu: goto label_2017dc;
        case 0x2017e0u: goto label_2017e0;
        case 0x2017e4u: goto label_2017e4;
        case 0x2017e8u: goto label_2017e8;
        case 0x2017ecu: goto label_2017ec;
        case 0x2017f0u: goto label_2017f0;
        case 0x2017f4u: goto label_2017f4;
        case 0x2017f8u: goto label_2017f8;
        case 0x2017fcu: goto label_2017fc;
        case 0x201800u: goto label_201800;
        case 0x201804u: goto label_201804;
        case 0x201808u: goto label_201808;
        case 0x20180cu: goto label_20180c;
        case 0x201810u: goto label_201810;
        case 0x201814u: goto label_201814;
        case 0x201818u: goto label_201818;
        case 0x20181cu: goto label_20181c;
        case 0x201820u: goto label_201820;
        case 0x201824u: goto label_201824;
        case 0x201828u: goto label_201828;
        case 0x20182cu: goto label_20182c;
        case 0x201830u: goto label_201830;
        case 0x201834u: goto label_201834;
        case 0x201838u: goto label_201838;
        case 0x20183cu: goto label_20183c;
        case 0x201840u: goto label_201840;
        case 0x201844u: goto label_201844;
        case 0x201848u: goto label_201848;
        case 0x20184cu: goto label_20184c;
        case 0x201850u: goto label_201850;
        case 0x201854u: goto label_201854;
        case 0x201858u: goto label_201858;
        case 0x20185cu: goto label_20185c;
        case 0x201860u: goto label_201860;
        case 0x201864u: goto label_201864;
        case 0x201868u: goto label_201868;
        case 0x20186cu: goto label_20186c;
        case 0x201870u: goto label_201870;
        case 0x201874u: goto label_201874;
        case 0x201878u: goto label_201878;
        case 0x20187cu: goto label_20187c;
        case 0x201880u: goto label_201880;
        case 0x201884u: goto label_201884;
        case 0x201888u: goto label_201888;
        case 0x20188cu: goto label_20188c;
        case 0x201890u: goto label_201890;
        case 0x201894u: goto label_201894;
        case 0x201898u: goto label_201898;
        case 0x20189cu: goto label_20189c;
        case 0x2018a0u: goto label_2018a0;
        case 0x2018a4u: goto label_2018a4;
        case 0x2018a8u: goto label_2018a8;
        case 0x2018acu: goto label_2018ac;
        case 0x2018b0u: goto label_2018b0;
        case 0x2018b4u: goto label_2018b4;
        case 0x2018b8u: goto label_2018b8;
        case 0x2018bcu: goto label_2018bc;
        case 0x2018c0u: goto label_2018c0;
        case 0x2018c4u: goto label_2018c4;
        case 0x2018c8u: goto label_2018c8;
        case 0x2018ccu: goto label_2018cc;
        case 0x2018d0u: goto label_2018d0;
        case 0x2018d4u: goto label_2018d4;
        case 0x2018d8u: goto label_2018d8;
        case 0x2018dcu: goto label_2018dc;
        case 0x2018e0u: goto label_2018e0;
        case 0x2018e4u: goto label_2018e4;
        case 0x2018e8u: goto label_2018e8;
        case 0x2018ecu: goto label_2018ec;
        case 0x2018f0u: goto label_2018f0;
        case 0x2018f4u: goto label_2018f4;
        case 0x2018f8u: goto label_2018f8;
        case 0x2018fcu: goto label_2018fc;
        case 0x201900u: goto label_201900;
        case 0x201904u: goto label_201904;
        case 0x201908u: goto label_201908;
        case 0x20190cu: goto label_20190c;
        case 0x201910u: goto label_201910;
        case 0x201914u: goto label_201914;
        case 0x201918u: goto label_201918;
        case 0x20191cu: goto label_20191c;
        case 0x201920u: goto label_201920;
        case 0x201924u: goto label_201924;
        case 0x201928u: goto label_201928;
        case 0x20192cu: goto label_20192c;
        case 0x201930u: goto label_201930;
        case 0x201934u: goto label_201934;
        case 0x201938u: goto label_201938;
        case 0x20193cu: goto label_20193c;
        case 0x201940u: goto label_201940;
        case 0x201944u: goto label_201944;
        case 0x201948u: goto label_201948;
        case 0x20194cu: goto label_20194c;
        case 0x201950u: goto label_201950;
        case 0x201954u: goto label_201954;
        case 0x201958u: goto label_201958;
        case 0x20195cu: goto label_20195c;
        case 0x201960u: goto label_201960;
        case 0x201964u: goto label_201964;
        case 0x201968u: goto label_201968;
        case 0x20196cu: goto label_20196c;
        case 0x201970u: goto label_201970;
        case 0x201974u: goto label_201974;
        case 0x201978u: goto label_201978;
        case 0x20197cu: goto label_20197c;
        case 0x201980u: goto label_201980;
        case 0x201984u: goto label_201984;
        case 0x201988u: goto label_201988;
        case 0x20198cu: goto label_20198c;
        case 0x201990u: goto label_201990;
        case 0x201994u: goto label_201994;
        case 0x201998u: goto label_201998;
        case 0x20199cu: goto label_20199c;
        case 0x2019a0u: goto label_2019a0;
        case 0x2019a4u: goto label_2019a4;
        case 0x2019a8u: goto label_2019a8;
        case 0x2019acu: goto label_2019ac;
        case 0x2019b0u: goto label_2019b0;
        case 0x2019b4u: goto label_2019b4;
        case 0x2019b8u: goto label_2019b8;
        case 0x2019bcu: goto label_2019bc;
        case 0x2019c0u: goto label_2019c0;
        case 0x2019c4u: goto label_2019c4;
        case 0x2019c8u: goto label_2019c8;
        case 0x2019ccu: goto label_2019cc;
        case 0x2019d0u: goto label_2019d0;
        case 0x2019d4u: goto label_2019d4;
        case 0x2019d8u: goto label_2019d8;
        case 0x2019dcu: goto label_2019dc;
        case 0x2019e0u: goto label_2019e0;
        case 0x2019e4u: goto label_2019e4;
        case 0x2019e8u: goto label_2019e8;
        case 0x2019ecu: goto label_2019ec;
        case 0x2019f0u: goto label_2019f0;
        case 0x2019f4u: goto label_2019f4;
        case 0x2019f8u: goto label_2019f8;
        case 0x2019fcu: goto label_2019fc;
        case 0x201a00u: goto label_201a00;
        case 0x201a04u: goto label_201a04;
        case 0x201a08u: goto label_201a08;
        case 0x201a0cu: goto label_201a0c;
        case 0x201a10u: goto label_201a10;
        case 0x201a14u: goto label_201a14;
        case 0x201a18u: goto label_201a18;
        case 0x201a1cu: goto label_201a1c;
        case 0x201a20u: goto label_201a20;
        case 0x201a24u: goto label_201a24;
        case 0x201a28u: goto label_201a28;
        case 0x201a2cu: goto label_201a2c;
        case 0x201a30u: goto label_201a30;
        case 0x201a34u: goto label_201a34;
        case 0x201a38u: goto label_201a38;
        case 0x201a3cu: goto label_201a3c;
        case 0x201a40u: goto label_201a40;
        case 0x201a44u: goto label_201a44;
        case 0x201a48u: goto label_201a48;
        case 0x201a4cu: goto label_201a4c;
        case 0x201a50u: goto label_201a50;
        case 0x201a54u: goto label_201a54;
        case 0x201a58u: goto label_201a58;
        case 0x201a5cu: goto label_201a5c;
        case 0x201a60u: goto label_201a60;
        case 0x201a64u: goto label_201a64;
        case 0x201a68u: goto label_201a68;
        case 0x201a6cu: goto label_201a6c;
        case 0x201a70u: goto label_201a70;
        case 0x201a74u: goto label_201a74;
        case 0x201a78u: goto label_201a78;
        case 0x201a7cu: goto label_201a7c;
        case 0x201a80u: goto label_201a80;
        case 0x201a84u: goto label_201a84;
        case 0x201a88u: goto label_201a88;
        case 0x201a8cu: goto label_201a8c;
        case 0x201a90u: goto label_201a90;
        case 0x201a94u: goto label_201a94;
        case 0x201a98u: goto label_201a98;
        case 0x201a9cu: goto label_201a9c;
        case 0x201aa0u: goto label_201aa0;
        case 0x201aa4u: goto label_201aa4;
        case 0x201aa8u: goto label_201aa8;
        case 0x201aacu: goto label_201aac;
        case 0x201ab0u: goto label_201ab0;
        case 0x201ab4u: goto label_201ab4;
        case 0x201ab8u: goto label_201ab8;
        case 0x201abcu: goto label_201abc;
        case 0x201ac0u: goto label_201ac0;
        case 0x201ac4u: goto label_201ac4;
        case 0x201ac8u: goto label_201ac8;
        case 0x201accu: goto label_201acc;
        case 0x201ad0u: goto label_201ad0;
        case 0x201ad4u: goto label_201ad4;
        case 0x201ad8u: goto label_201ad8;
        case 0x201adcu: goto label_201adc;
        case 0x201ae0u: goto label_201ae0;
        case 0x201ae4u: goto label_201ae4;
        case 0x201ae8u: goto label_201ae8;
        case 0x201aecu: goto label_201aec;
        case 0x201af0u: goto label_201af0;
        case 0x201af4u: goto label_201af4;
        case 0x201af8u: goto label_201af8;
        case 0x201afcu: goto label_201afc;
        case 0x201b00u: goto label_201b00;
        case 0x201b04u: goto label_201b04;
        case 0x201b08u: goto label_201b08;
        case 0x201b0cu: goto label_201b0c;
        case 0x201b10u: goto label_201b10;
        case 0x201b14u: goto label_201b14;
        case 0x201b18u: goto label_201b18;
        case 0x201b1cu: goto label_201b1c;
        case 0x201b20u: goto label_201b20;
        case 0x201b24u: goto label_201b24;
        case 0x201b28u: goto label_201b28;
        case 0x201b2cu: goto label_201b2c;
        case 0x201b30u: goto label_201b30;
        case 0x201b34u: goto label_201b34;
        case 0x201b38u: goto label_201b38;
        case 0x201b3cu: goto label_201b3c;
        case 0x201b40u: goto label_201b40;
        case 0x201b44u: goto label_201b44;
        case 0x201b48u: goto label_201b48;
        case 0x201b4cu: goto label_201b4c;
        case 0x201b50u: goto label_201b50;
        case 0x201b54u: goto label_201b54;
        case 0x201b58u: goto label_201b58;
        case 0x201b5cu: goto label_201b5c;
        case 0x201b60u: goto label_201b60;
        case 0x201b64u: goto label_201b64;
        case 0x201b68u: goto label_201b68;
        case 0x201b6cu: goto label_201b6c;
        case 0x201b70u: goto label_201b70;
        case 0x201b74u: goto label_201b74;
        case 0x201b78u: goto label_201b78;
        case 0x201b7cu: goto label_201b7c;
        case 0x201b80u: goto label_201b80;
        case 0x201b84u: goto label_201b84;
        case 0x201b88u: goto label_201b88;
        case 0x201b8cu: goto label_201b8c;
        case 0x201b90u: goto label_201b90;
        case 0x201b94u: goto label_201b94;
        case 0x201b98u: goto label_201b98;
        case 0x201b9cu: goto label_201b9c;
        case 0x201ba0u: goto label_201ba0;
        case 0x201ba4u: goto label_201ba4;
        case 0x201ba8u: goto label_201ba8;
        case 0x201bacu: goto label_201bac;
        case 0x201bb0u: goto label_201bb0;
        case 0x201bb4u: goto label_201bb4;
        case 0x201bb8u: goto label_201bb8;
        case 0x201bbcu: goto label_201bbc;
        case 0x201bc0u: goto label_201bc0;
        case 0x201bc4u: goto label_201bc4;
        case 0x201bc8u: goto label_201bc8;
        case 0x201bccu: goto label_201bcc;
        case 0x201bd0u: goto label_201bd0;
        case 0x201bd4u: goto label_201bd4;
        case 0x201bd8u: goto label_201bd8;
        case 0x201bdcu: goto label_201bdc;
        case 0x201be0u: goto label_201be0;
        case 0x201be4u: goto label_201be4;
        case 0x201be8u: goto label_201be8;
        case 0x201becu: goto label_201bec;
        case 0x201bf0u: goto label_201bf0;
        case 0x201bf4u: goto label_201bf4;
        case 0x201bf8u: goto label_201bf8;
        case 0x201bfcu: goto label_201bfc;
        case 0x201c00u: goto label_201c00;
        case 0x201c04u: goto label_201c04;
        case 0x201c08u: goto label_201c08;
        case 0x201c0cu: goto label_201c0c;
        case 0x201c10u: goto label_201c10;
        case 0x201c14u: goto label_201c14;
        case 0x201c18u: goto label_201c18;
        case 0x201c1cu: goto label_201c1c;
        case 0x201c20u: goto label_201c20;
        case 0x201c24u: goto label_201c24;
        case 0x201c28u: goto label_201c28;
        case 0x201c2cu: goto label_201c2c;
        case 0x201c30u: goto label_201c30;
        case 0x201c34u: goto label_201c34;
        case 0x201c38u: goto label_201c38;
        case 0x201c3cu: goto label_201c3c;
        case 0x201c40u: goto label_201c40;
        case 0x201c44u: goto label_201c44;
        case 0x201c48u: goto label_201c48;
        case 0x201c4cu: goto label_201c4c;
        case 0x201c50u: goto label_201c50;
        case 0x201c54u: goto label_201c54;
        case 0x201c58u: goto label_201c58;
        case 0x201c5cu: goto label_201c5c;
        case 0x201c60u: goto label_201c60;
        case 0x201c64u: goto label_201c64;
        case 0x201c68u: goto label_201c68;
        case 0x201c6cu: goto label_201c6c;
        case 0x201c70u: goto label_201c70;
        case 0x201c74u: goto label_201c74;
        case 0x201c78u: goto label_201c78;
        case 0x201c7cu: goto label_201c7c;
        case 0x201c80u: goto label_201c80;
        case 0x201c84u: goto label_201c84;
        case 0x201c88u: goto label_201c88;
        case 0x201c8cu: goto label_201c8c;
        case 0x201c90u: goto label_201c90;
        case 0x201c94u: goto label_201c94;
        case 0x201c98u: goto label_201c98;
        case 0x201c9cu: goto label_201c9c;
        case 0x201ca0u: goto label_201ca0;
        case 0x201ca4u: goto label_201ca4;
        case 0x201ca8u: goto label_201ca8;
        case 0x201cacu: goto label_201cac;
        case 0x201cb0u: goto label_201cb0;
        case 0x201cb4u: goto label_201cb4;
        case 0x201cb8u: goto label_201cb8;
        case 0x201cbcu: goto label_201cbc;
        case 0x201cc0u: goto label_201cc0;
        case 0x201cc4u: goto label_201cc4;
        case 0x201cc8u: goto label_201cc8;
        case 0x201cccu: goto label_201ccc;
        case 0x201cd0u: goto label_201cd0;
        case 0x201cd4u: goto label_201cd4;
        case 0x201cd8u: goto label_201cd8;
        case 0x201cdcu: goto label_201cdc;
        case 0x201ce0u: goto label_201ce0;
        case 0x201ce4u: goto label_201ce4;
        case 0x201ce8u: goto label_201ce8;
        case 0x201cecu: goto label_201cec;
        case 0x201cf0u: goto label_201cf0;
        case 0x201cf4u: goto label_201cf4;
        case 0x201cf8u: goto label_201cf8;
        case 0x201cfcu: goto label_201cfc;
        case 0x201d00u: goto label_201d00;
        case 0x201d04u: goto label_201d04;
        case 0x201d08u: goto label_201d08;
        case 0x201d0cu: goto label_201d0c;
        case 0x201d10u: goto label_201d10;
        case 0x201d14u: goto label_201d14;
        case 0x201d18u: goto label_201d18;
        case 0x201d1cu: goto label_201d1c;
        case 0x201d20u: goto label_201d20;
        case 0x201d24u: goto label_201d24;
        case 0x201d28u: goto label_201d28;
        case 0x201d2cu: goto label_201d2c;
        case 0x201d30u: goto label_201d30;
        case 0x201d34u: goto label_201d34;
        case 0x201d38u: goto label_201d38;
        case 0x201d3cu: goto label_201d3c;
        case 0x201d40u: goto label_201d40;
        case 0x201d44u: goto label_201d44;
        case 0x201d48u: goto label_201d48;
        case 0x201d4cu: goto label_201d4c;
        case 0x201d50u: goto label_201d50;
        case 0x201d54u: goto label_201d54;
        case 0x201d58u: goto label_201d58;
        case 0x201d5cu: goto label_201d5c;
        case 0x201d60u: goto label_201d60;
        case 0x201d64u: goto label_201d64;
        case 0x201d68u: goto label_201d68;
        case 0x201d6cu: goto label_201d6c;
        case 0x201d70u: goto label_201d70;
        case 0x201d74u: goto label_201d74;
        case 0x201d78u: goto label_201d78;
        case 0x201d7cu: goto label_201d7c;
        case 0x201d80u: goto label_201d80;
        case 0x201d84u: goto label_201d84;
        case 0x201d88u: goto label_201d88;
        case 0x201d8cu: goto label_201d8c;
        case 0x201d90u: goto label_201d90;
        case 0x201d94u: goto label_201d94;
        case 0x201d98u: goto label_201d98;
        case 0x201d9cu: goto label_201d9c;
        case 0x201da0u: goto label_201da0;
        case 0x201da4u: goto label_201da4;
        case 0x201da8u: goto label_201da8;
        case 0x201dacu: goto label_201dac;
        case 0x201db0u: goto label_201db0;
        case 0x201db4u: goto label_201db4;
        case 0x201db8u: goto label_201db8;
        case 0x201dbcu: goto label_201dbc;
        case 0x201dc0u: goto label_201dc0;
        case 0x201dc4u: goto label_201dc4;
        case 0x201dc8u: goto label_201dc8;
        case 0x201dccu: goto label_201dcc;
        case 0x201dd0u: goto label_201dd0;
        case 0x201dd4u: goto label_201dd4;
        case 0x201dd8u: goto label_201dd8;
        case 0x201ddcu: goto label_201ddc;
        case 0x201de0u: goto label_201de0;
        case 0x201de4u: goto label_201de4;
        case 0x201de8u: goto label_201de8;
        case 0x201decu: goto label_201dec;
        case 0x201df0u: goto label_201df0;
        case 0x201df4u: goto label_201df4;
        case 0x201df8u: goto label_201df8;
        case 0x201dfcu: goto label_201dfc;
        case 0x201e00u: goto label_201e00;
        case 0x201e04u: goto label_201e04;
        case 0x201e08u: goto label_201e08;
        case 0x201e0cu: goto label_201e0c;
        case 0x201e10u: goto label_201e10;
        case 0x201e14u: goto label_201e14;
        case 0x201e18u: goto label_201e18;
        case 0x201e1cu: goto label_201e1c;
        case 0x201e20u: goto label_201e20;
        case 0x201e24u: goto label_201e24;
        case 0x201e28u: goto label_201e28;
        case 0x201e2cu: goto label_201e2c;
        case 0x201e30u: goto label_201e30;
        case 0x201e34u: goto label_201e34;
        case 0x201e38u: goto label_201e38;
        case 0x201e3cu: goto label_201e3c;
        case 0x201e40u: goto label_201e40;
        case 0x201e44u: goto label_201e44;
        case 0x201e48u: goto label_201e48;
        case 0x201e4cu: goto label_201e4c;
        case 0x201e50u: goto label_201e50;
        case 0x201e54u: goto label_201e54;
        case 0x201e58u: goto label_201e58;
        case 0x201e5cu: goto label_201e5c;
        case 0x201e60u: goto label_201e60;
        case 0x201e64u: goto label_201e64;
        case 0x201e68u: goto label_201e68;
        case 0x201e6cu: goto label_201e6c;
        case 0x201e70u: goto label_201e70;
        case 0x201e74u: goto label_201e74;
        case 0x201e78u: goto label_201e78;
        case 0x201e7cu: goto label_201e7c;
        case 0x201e80u: goto label_201e80;
        case 0x201e84u: goto label_201e84;
        case 0x201e88u: goto label_201e88;
        case 0x201e8cu: goto label_201e8c;
        case 0x201e90u: goto label_201e90;
        case 0x201e94u: goto label_201e94;
        case 0x201e98u: goto label_201e98;
        case 0x201e9cu: goto label_201e9c;
        case 0x201ea0u: goto label_201ea0;
        case 0x201ea4u: goto label_201ea4;
        case 0x201ea8u: goto label_201ea8;
        case 0x201eacu: goto label_201eac;
        case 0x201eb0u: goto label_201eb0;
        case 0x201eb4u: goto label_201eb4;
        case 0x201eb8u: goto label_201eb8;
        case 0x201ebcu: goto label_201ebc;
        case 0x201ec0u: goto label_201ec0;
        case 0x201ec4u: goto label_201ec4;
        case 0x201ec8u: goto label_201ec8;
        case 0x201eccu: goto label_201ecc;
        case 0x201ed0u: goto label_201ed0;
        case 0x201ed4u: goto label_201ed4;
        case 0x201ed8u: goto label_201ed8;
        case 0x201edcu: goto label_201edc;
        case 0x201ee0u: goto label_201ee0;
        case 0x201ee4u: goto label_201ee4;
        case 0x201ee8u: goto label_201ee8;
        case 0x201eecu: goto label_201eec;
        case 0x201ef0u: goto label_201ef0;
        case 0x201ef4u: goto label_201ef4;
        case 0x201ef8u: goto label_201ef8;
        case 0x201efcu: goto label_201efc;
        case 0x201f00u: goto label_201f00;
        case 0x201f04u: goto label_201f04;
        case 0x201f08u: goto label_201f08;
        case 0x201f0cu: goto label_201f0c;
        case 0x201f10u: goto label_201f10;
        case 0x201f14u: goto label_201f14;
        case 0x201f18u: goto label_201f18;
        case 0x201f1cu: goto label_201f1c;
        case 0x201f20u: goto label_201f20;
        case 0x201f24u: goto label_201f24;
        case 0x201f28u: goto label_201f28;
        case 0x201f2cu: goto label_201f2c;
        case 0x201f30u: goto label_201f30;
        case 0x201f34u: goto label_201f34;
        case 0x201f38u: goto label_201f38;
        case 0x201f3cu: goto label_201f3c;
        case 0x201f40u: goto label_201f40;
        case 0x201f44u: goto label_201f44;
        case 0x201f48u: goto label_201f48;
        case 0x201f4cu: goto label_201f4c;
        case 0x201f50u: goto label_201f50;
        case 0x201f54u: goto label_201f54;
        case 0x201f58u: goto label_201f58;
        case 0x201f5cu: goto label_201f5c;
        case 0x201f60u: goto label_201f60;
        case 0x201f64u: goto label_201f64;
        case 0x201f68u: goto label_201f68;
        case 0x201f6cu: goto label_201f6c;
        case 0x201f70u: goto label_201f70;
        case 0x201f74u: goto label_201f74;
        case 0x201f78u: goto label_201f78;
        case 0x201f7cu: goto label_201f7c;
        case 0x201f80u: goto label_201f80;
        case 0x201f84u: goto label_201f84;
        case 0x201f88u: goto label_201f88;
        case 0x201f8cu: goto label_201f8c;
        default: return;
    }

label_2017c0:
    // 0x2017c0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2017c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_2017c4:
    // 0x2017c4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2017c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_2017c8:
    // 0x2017c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2017c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2017cc:
    // 0x2017cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2017ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_2017d0:
    // 0x2017d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2017d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2017d4:
    // 0x2017d4: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x2017d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
label_2017d8:
    // 0x2017d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2017d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2017dc:
    // 0x2017dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2017dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2017e0:
    // 0x2017e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2017e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2017e4:
    // 0x2017e4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x2017e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_2017e8:
    // 0x2017e8: 0x8c25f468  lw          $a1, -0xB98($at)
    ctx->pc = 0x2017e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_2017ec:
    // 0x2017ec: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2017ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_2017f0:
    // 0x2017f0: 0x2610f440  addiu       $s0, $s0, -0xBC0
    ctx->pc = 0x2017f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964288));
label_2017f4:
    // 0x2017f4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2017f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2017f8:
    // 0x2017f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2017fc:
    // 0x2017fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2017fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_201800:
    // 0x201800: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x201800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_201804:
    // 0x201804: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x201804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_201808:
    // 0x201808: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x201808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20180c:
    // 0x20180c: 0x8e43048c  lw          $v1, 0x48C($s2)
    ctx->pc = 0x20180cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_201810:
    // 0x201810: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_201814:
    if (ctx->pc == 0x201814u) {
        ctx->pc = 0x201814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201810u;
        // 0x201814: 0x2631f460  addiu       $s1, $s1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201818u;
        goto label_201818;
    }
    ctx->pc = 0x201810u;
    {
        const bool branch_taken_0x201810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201810u;
        // 0x201814: 0x2631f460  addiu       $s1, $s1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201810) {
            ctx->pc = 0x2019FCu;
            goto label_2019fc;
        }
    }
    ctx->pc = 0x201818u;
label_201818:
    // 0x201818: 0xc080f84  jal         func_203E10
label_20181c:
    if (ctx->pc == 0x20181Cu) {
        ctx->pc = 0x20181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201818u;
        // 0x20181c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201820u;
        goto label_201820;
    }
    ctx->pc = 0x201818u;
    SET_GPR_U32(ctx, 31, 0x201820u);
    ctx->pc = 0x20181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201818u;
    // 0x20181c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E10u;
    { ctx->pc = 0x203e10; return; }
    ctx->pc = 0x201820u;
label_201820:
    // 0x201820: 0x10000064  b           . + 4 + (0x64 << 2)
label_201824:
    if (ctx->pc == 0x201824u) {
        ctx->pc = 0x201828u;
        goto label_201828;
    }
    ctx->pc = 0x201820u;
    {
        const bool branch_taken_0x201820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201820) {
            ctx->pc = 0x2019B4u;
            goto label_2019b4;
        }
    }
    ctx->pc = 0x201828u;
label_201828:
    // 0x201828: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x201828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20182c:
    // 0x20182c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201830:
    // 0x201830: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_201834:
    if (ctx->pc == 0x201834u) {
        ctx->pc = 0x201834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201830u;
        // 0x201834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201838u;
        goto label_201838;
    }
    ctx->pc = 0x201830u;
    {
        const bool branch_taken_0x201830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201830u;
        // 0x201834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201830) {
            ctx->pc = 0x201884u;
            goto label_201884;
        }
    }
    ctx->pc = 0x201838u;
label_201838:
    // 0x201838: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_20183c:
    if (ctx->pc == 0x20183Cu) {
        ctx->pc = 0x201840u;
        goto label_201840;
    }
    ctx->pc = 0x201838u;
    {
        const bool branch_taken_0x201838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x201838) {
            ctx->pc = 0x201858u;
            goto label_201858;
        }
    }
    ctx->pc = 0x201840u;
label_201840:
    // 0x201840: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_201844:
    if (ctx->pc == 0x201844u) {
        ctx->pc = 0x201848u;
        goto label_201848;
    }
    ctx->pc = 0x201840u;
    {
        const bool branch_taken_0x201840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201840) {
            ctx->pc = 0x201850u;
            goto label_201850;
        }
    }
    ctx->pc = 0x201848u;
label_201848:
    // 0x201848: 0x1000000c  b           . + 4 + (0xC << 2)
label_20184c:
    if (ctx->pc == 0x20184Cu) {
        ctx->pc = 0x201850u;
        goto label_201850;
    }
    ctx->pc = 0x201848u;
    {
        const bool branch_taken_0x201848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201848) {
            ctx->pc = 0x20187Cu;
            goto label_20187c;
        }
    }
    ctx->pc = 0x201850u;
label_201850:
    // 0x201850: 0x1000000a  b           . + 4 + (0xA << 2)
label_201854:
    if (ctx->pc == 0x201854u) {
        ctx->pc = 0x201854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201850u;
        // 0x201854: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201858u;
        goto label_201858;
    }
    ctx->pc = 0x201850u;
    {
        const bool branch_taken_0x201850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201850u;
        // 0x201854: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201850) {
            ctx->pc = 0x20187Cu;
            goto label_20187c;
        }
    }
    ctx->pc = 0x201858u;
label_201858:
    // 0x201858: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x201858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_20185c:
    // 0x20185c: 0xc080fe4  jal         func_203F90
label_201860:
    if (ctx->pc == 0x201860u) {
        ctx->pc = 0x201860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20185Cu;
        // 0x201860: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201864u;
        goto label_201864;
    }
    ctx->pc = 0x20185Cu;
    SET_GPR_U32(ctx, 31, 0x201864u);
    ctx->pc = 0x201860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20185Cu;
    // 0x201860: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x201864u;
label_201864:
    // 0x201864: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x201864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_201868:
    // 0x201868: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x201868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20186c:
    // 0x20186c: 0xc08f390  jal         func_23CE40
label_201870:
    if (ctx->pc == 0x201870u) {
        ctx->pc = 0x201870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20186Cu;
        // 0x201870: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201874u;
        goto label_201874;
    }
    ctx->pc = 0x20186Cu;
    SET_GPR_U32(ctx, 31, 0x201874u);
    ctx->pc = 0x201870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20186Cu;
    // 0x201870: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x20186Cu, 0x201874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201874u;
label_201874:
    // 0x201874: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x201874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_201878:
    // 0x201878: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x201878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20187c:
    // 0x20187c: 0x0  nop
    ctx->pc = 0x20187cu;
    // NOP
label_201880:
    // 0x201880: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x201880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_201884:
    // 0x201884: 0x0  nop
    ctx->pc = 0x201884u;
    // NOP
label_201888:
    // 0x201888: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_20188c:
    // 0x20188c: 0x8c22f460  lw          $v0, -0xBA0($at)
    ctx->pc = 0x20188cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964320)));
label_201890:
    // 0x201890: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x201890u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_201894:
    // 0x201894: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x201894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201898:
    // 0x201898: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
label_20189c:
    if (ctx->pc == 0x20189Cu) {
        ctx->pc = 0x20189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201898u;
        // 0x20189c: 0x2673f460  addiu       $s3, $s3, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018A0u;
        goto label_2018a0;
    }
    ctx->pc = 0x201898u;
    {
        const bool branch_taken_0x201898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201898u;
        // 0x20189c: 0x2673f460  addiu       $s3, $s3, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201898) {
            ctx->pc = 0x2018C0u;
            goto label_2018c0;
        }
    }
    ctx->pc = 0x2018A0u;
label_2018a0:
    // 0x2018a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2018a4:
    if (ctx->pc == 0x2018A4u) {
        ctx->pc = 0x2018A8u;
        goto label_2018a8;
    }
    ctx->pc = 0x2018A0u;
    {
        const bool branch_taken_0x2018a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2018a0) {
            ctx->pc = 0x2018B0u;
            goto label_2018b0;
        }
    }
    ctx->pc = 0x2018A8u;
label_2018a8:
    // 0x2018a8: 0x10000028  b           . + 4 + (0x28 << 2)
label_2018ac:
    if (ctx->pc == 0x2018ACu) {
        ctx->pc = 0x2018B0u;
        goto label_2018b0;
    }
    ctx->pc = 0x2018A8u;
    {
        const bool branch_taken_0x2018a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2018a8) {
            ctx->pc = 0x20194Cu;
            goto label_20194c;
        }
    }
    ctx->pc = 0x2018B0u;
label_2018b0:
    // 0x2018b0: 0xc0810f0  jal         func_2043C0
label_2018b4:
    if (ctx->pc == 0x2018B4u) {
        ctx->pc = 0x2018B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018B0u;
        // 0x2018b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018B8u;
        goto label_2018b8;
    }
    ctx->pc = 0x2018B0u;
    SET_GPR_U32(ctx, 31, 0x2018B8u);
    ctx->pc = 0x2018B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018B0u;
    // 0x2018b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2043C0u;
    { ctx->pc = 0x2043c0; return; }
    ctx->pc = 0x2018B8u;
label_2018b8:
    // 0x2018b8: 0x10000024  b           . + 4 + (0x24 << 2)
label_2018bc:
    if (ctx->pc == 0x2018BCu) {
        ctx->pc = 0x2018C0u;
        goto label_2018c0;
    }
    ctx->pc = 0x2018B8u;
    {
        const bool branch_taken_0x2018b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2018b8) {
            ctx->pc = 0x20194Cu;
            goto label_20194c;
        }
    }
    ctx->pc = 0x2018C0u;
label_2018c0:
    // 0x2018c0: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x2018c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_2018c4:
    // 0x2018c4: 0xc06c672  jal         func_1B19C8
label_2018c8:
    if (ctx->pc == 0x2018C8u) {
        ctx->pc = 0x2018C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018C4u;
        // 0x2018c8: 0x27a60158  addiu       $a2, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018CCu;
        goto label_2018cc;
    }
    ctx->pc = 0x2018C4u;
    SET_GPR_U32(ctx, 31, 0x2018CCu);
    ctx->pc = 0x2018C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018C4u;
    // 0x2018c8: 0x27a60158  addiu       $a2, $sp, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19C8u, 0x2018C4u, 0x2018CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018CCu;
label_2018cc:
    // 0x2018cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2018ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2018d0:
    // 0x2018d0: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_2018d4:
    if (ctx->pc == 0x2018D4u) {
        ctx->pc = 0x2018D8u;
        goto label_2018d8;
    }
    ctx->pc = 0x2018D0u;
    {
        const bool branch_taken_0x2018d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2018d0) {
            ctx->pc = 0x20194Cu;
            goto label_20194c;
        }
    }
    ctx->pc = 0x2018D8u;
label_2018d8:
    // 0x2018d8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2018d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2018dc:
    // 0x2018dc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2018dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2018e0:
    // 0x2018e0: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x2018e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_2018e4:
    // 0x2018e4: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x2018e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2018e8:
    // 0x2018e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2018e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2018ec:
    // 0x2018ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2018ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2018f0:
    // 0x2018f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2018f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2018f4:
    // 0x2018f4: 0x40f809  jalr        $v0
label_2018f8:
    if (ctx->pc == 0x2018F8u) {
        ctx->pc = 0x2018F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018F4u;
        // 0x2018f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2018FCu;
        goto label_2018fc;
    }
    ctx->pc = 0x2018F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2018FCu);
        ctx->pc = 0x2018F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018F4u;
        // 0x2018f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018F4u, 0x2018FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2018FCu;
label_2018fc:
    // 0x2018fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_201900:
    if (ctx->pc == 0x201900u) {
        ctx->pc = 0x201904u;
        goto label_201904;
    }
    ctx->pc = 0x2018FCu;
    {
        const bool branch_taken_0x2018fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2018fc) {
            ctx->pc = 0x201910u;
            goto label_201910;
        }
    }
    ctx->pc = 0x201904u;
label_201904:
    // 0x201904: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201908:
    // 0x201908: 0x1000000f  b           . + 4 + (0xF << 2)
label_20190c:
    if (ctx->pc == 0x20190Cu) {
        ctx->pc = 0x20190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201908u;
        // 0x20190c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201910u;
        goto label_201910;
    }
    ctx->pc = 0x201908u;
    {
        const bool branch_taken_0x201908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201908u;
        // 0x20190c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201908) {
            ctx->pc = 0x201948u;
            goto label_201948;
        }
    }
    ctx->pc = 0x201910u;
label_201910:
    // 0x201910: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x201910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_201914:
    // 0x201914: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_201918:
    if (ctx->pc == 0x201918u) {
        ctx->pc = 0x20191Cu;
        goto label_20191c;
    }
    ctx->pc = 0x201914u;
    {
        const bool branch_taken_0x201914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201914) {
            ctx->pc = 0x201938u;
            goto label_201938;
        }
    }
    ctx->pc = 0x20191Cu;
label_20191c:
    // 0x20191c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x20191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_201920:
    // 0x201920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_201924:
    // 0x201924: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x201924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_201928:
    // 0x201928: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20192c:
    if (ctx->pc == 0x20192Cu) {
        ctx->pc = 0x20192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201928u;
        // 0x20192c: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201930u;
        goto label_201930;
    }
    ctx->pc = 0x201928u;
    {
        const bool branch_taken_0x201928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201928u;
        // 0x20192c: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201928) {
            ctx->pc = 0x201938u;
            goto label_201938;
        }
    }
    ctx->pc = 0x201930u;
label_201930:
    // 0x201930: 0x10000006  b           . + 4 + (0x6 << 2)
label_201934:
    if (ctx->pc == 0x201934u) {
        ctx->pc = 0x201934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201930u;
        // 0x201934: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201938u;
        goto label_201938;
    }
    ctx->pc = 0x201930u;
    {
        const bool branch_taken_0x201930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201930u;
        // 0x201934: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201930) {
            ctx->pc = 0x20194Cu;
            goto label_20194c;
        }
    }
    ctx->pc = 0x201938u;
label_201938:
    // 0x201938: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_20193c:
    // 0x20193c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201940:
    // 0x201940: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x201940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_201944:
    // 0x201944: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x201944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_201948:
    // 0x201948: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x201948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_20194c:
    // 0x20194c: 0x0  nop
    ctx->pc = 0x20194cu;
    // NOP
label_201950:
    // 0x201950: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x201950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_201954:
    // 0x201954: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x201954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_201958:
    // 0x201958: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x201958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20195c:
    // 0x20195c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_201960:
    if (ctx->pc == 0x201960u) {
        ctx->pc = 0x201964u;
        goto label_201964;
    }
    ctx->pc = 0x20195Cu;
    {
        const bool branch_taken_0x20195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20195c) {
            ctx->pc = 0x20196Cu;
            goto label_20196c;
        }
    }
    ctx->pc = 0x201964u;
label_201964:
    // 0x201964: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x201964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_201968:
    // 0x201968: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x201968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20196c:
    // 0x20196c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_201970:
    if (ctx->pc == 0x201970u) {
        ctx->pc = 0x201974u;
        goto label_201974;
    }
    ctx->pc = 0x20196Cu;
    {
        const bool branch_taken_0x20196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20196c) {
            ctx->pc = 0x2019B4u;
            goto label_2019b4;
        }
    }
    ctx->pc = 0x201974u;
label_201974:
    // 0x201974: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x201974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_201978:
    // 0x201978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20197c:
    // 0x20197c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_201980:
    if (ctx->pc == 0x201980u) {
        ctx->pc = 0x201980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20197Cu;
        // 0x201980: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201984u;
        goto label_201984;
    }
    ctx->pc = 0x20197Cu;
    {
        const bool branch_taken_0x20197c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20197Cu;
        // 0x201980: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20197c) {
            ctx->pc = 0x2019B0u;
            goto label_2019b0;
        }
    }
    ctx->pc = 0x201984u;
label_201984:
    // 0x201984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x201984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_201988:
    // 0x201988: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20198c:
    if (ctx->pc == 0x20198Cu) {
        ctx->pc = 0x201990u;
        goto label_201990;
    }
    ctx->pc = 0x201988u;
    {
        const bool branch_taken_0x201988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201988) {
            ctx->pc = 0x201998u;
            goto label_201998;
        }
    }
    ctx->pc = 0x201990u;
label_201990:
    // 0x201990: 0x10000007  b           . + 4 + (0x7 << 2)
label_201994:
    if (ctx->pc == 0x201994u) {
        ctx->pc = 0x201998u;
        goto label_201998;
    }
    ctx->pc = 0x201990u;
    {
        const bool branch_taken_0x201990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201990) {
            ctx->pc = 0x2019B0u;
            goto label_2019b0;
        }
    }
    ctx->pc = 0x201998u;
label_201998:
    // 0x201998: 0x8e430480  lw          $v1, 0x480($s2)
    ctx->pc = 0x201998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
label_20199c:
    // 0x20199c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x20199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_2019a0:
    // 0x2019a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2019a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2019a4:
    // 0x2019a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2019a8:
    if (ctx->pc == 0x2019A8u) {
        ctx->pc = 0x2019ACu;
        goto label_2019ac;
    }
    ctx->pc = 0x2019A4u;
    {
        const bool branch_taken_0x2019a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2019a4) {
            ctx->pc = 0x2019B0u;
            goto label_2019b0;
        }
    }
    ctx->pc = 0x2019ACu;
label_2019ac:
    // 0x2019ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2019acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2019b0:
    // 0x2019b0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2019b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2019b4:
    // 0x2019b4: 0x0  nop
    ctx->pc = 0x2019b4u;
    // NOP
label_2019b8:
    // 0x2019b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2019b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2019bc:
    // 0x2019bc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2019bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2019c0:
    // 0x2019c0: 0x1482ff99  bne         $a0, $v0, . + 4 + (-0x67 << 2)
label_2019c4:
    if (ctx->pc == 0x2019C4u) {
        ctx->pc = 0x2019C8u;
        goto label_2019c8;
    }
    ctx->pc = 0x2019C0u;
    {
        const bool branch_taken_0x2019c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2019c0) {
            ctx->pc = 0x201828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201828;
        }
    }
    ctx->pc = 0x2019C8u;
label_2019c8:
    // 0x2019c8: 0xc070e28  jal         func_1C38A0
label_2019cc:
    if (ctx->pc == 0x2019CCu) {
        ctx->pc = 0x2019CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019C8u;
        // 0x2019cc: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2019D0u;
        goto label_2019d0;
    }
    ctx->pc = 0x2019C8u;
    SET_GPR_U32(ctx, 31, 0x2019D0u);
    ctx->pc = 0x2019CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019C8u;
    // 0x2019cc: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38A0u, 0x2019C8u, 0x2019D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019D0u;
label_2019d0:
    // 0x2019d0: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_2019d4:
    if (ctx->pc == 0x2019D4u) {
        ctx->pc = 0x2019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019D0u;
        // 0x2019d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2019D8u;
        goto label_2019d8;
    }
    ctx->pc = 0x2019D0u;
    {
        const bool branch_taken_0x2019d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019D0u;
        // 0x2019d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019d0) {
            ctx->pc = 0x2019F0u;
            goto label_2019f0;
        }
    }
    ctx->pc = 0x2019D8u;
label_2019d8:
    // 0x2019d8: 0xc070de0  jal         func_1C3780
label_2019dc:
    if (ctx->pc == 0x2019DCu) {
        ctx->pc = 0x2019E0u;
        goto label_2019e0;
    }
    ctx->pc = 0x2019D8u;
    SET_GPR_U32(ctx, 31, 0x2019E0u);
    ctx->pc = 0x1C3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3780u, 0x2019D8u, 0x2019E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019E0u;
label_2019e0:
    // 0x2019e0: 0xc070e60  jal         func_1C3980
label_2019e4:
    if (ctx->pc == 0x2019E4u) {
        ctx->pc = 0x2019E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019E0u;
        // 0x2019e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2019E8u;
        goto label_2019e8;
    }
    ctx->pc = 0x2019E0u;
    SET_GPR_U32(ctx, 31, 0x2019E8u);
    ctx->pc = 0x2019E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2019E0u;
    // 0x2019e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3980u, 0x2019E0u, 0x2019E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019E8u;
label_2019e8:
    // 0x2019e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2019ec:
    if (ctx->pc == 0x2019ECu) {
        ctx->pc = 0x2019ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019E8u;
        // 0x2019ec: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2019F0u;
        goto label_2019f0;
    }
    ctx->pc = 0x2019E8u;
    {
        const bool branch_taken_0x2019e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2019ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019E8u;
        // 0x2019ec: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019e8) {
            ctx->pc = 0x2019FCu;
            goto label_2019fc;
        }
    }
    ctx->pc = 0x2019F0u;
label_2019f0:
    // 0x2019f0: 0xc070038  jal         func_1C00E0
label_2019f4:
    if (ctx->pc == 0x2019F4u) {
        ctx->pc = 0x2019F8u;
        goto label_2019f8;
    }
    ctx->pc = 0x2019F0u;
    SET_GPR_U32(ctx, 31, 0x2019F8u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x2019F0u, 0x2019F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2019F8u;
label_2019f8:
    // 0x2019f8: 0xaf8090f0  sw          $zero, -0x6F10($gp)
    ctx->pc = 0x2019f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
label_2019fc:
    // 0x2019fc: 0x8e430480  lw          $v1, 0x480($s2)
    ctx->pc = 0x2019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1152)));
label_201a00:
    // 0x201a00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x201a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_201a04:
    // 0x201a04: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_201a08:
    if (ctx->pc == 0x201A08u) {
        ctx->pc = 0x201A0Cu;
        goto label_201a0c;
    }
    ctx->pc = 0x201A04u;
    {
        const bool branch_taken_0x201a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201a04) {
            ctx->pc = 0x201A40u;
            goto label_201a40;
        }
    }
    ctx->pc = 0x201A0Cu;
label_201a0c:
    // 0x201a0c: 0x8e43048c  lw          $v1, 0x48C($s2)
    ctx->pc = 0x201a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_201a10:
    // 0x201a10: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_201a14:
    if (ctx->pc == 0x201A14u) {
        ctx->pc = 0x201A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A10u;
        // 0x201a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A18u;
        goto label_201a18;
    }
    ctx->pc = 0x201A10u;
    {
        const bool branch_taken_0x201a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x201A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A10u;
        // 0x201a14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a10) {
            ctx->pc = 0x201A40u;
            goto label_201a40;
        }
    }
    ctx->pc = 0x201A18u;
label_201a18:
    // 0x201a18: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x201a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_201a1c:
    // 0x201a1c: 0xc080984  jal         func_202610
label_201a20:
    if (ctx->pc == 0x201A20u) {
        ctx->pc = 0x201A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A1Cu;
        // 0x201a20: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A24u;
        goto label_201a24;
    }
    ctx->pc = 0x201A1Cu;
    SET_GPR_U32(ctx, 31, 0x201A24u);
    ctx->pc = 0x201A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201A1Cu;
    // 0x201a20: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202610u;
    { ctx->pc = 0x202610; return; }
    ctx->pc = 0x201A24u;
label_201a24:
    // 0x201a24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x201a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201a28:
    // 0x201a28: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_201a2c:
    if (ctx->pc == 0x201A2Cu) {
        ctx->pc = 0x201A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A28u;
        // 0x201a2c: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A30u;
        goto label_201a30;
    }
    ctx->pc = 0x201A28u;
    {
        const bool branch_taken_0x201a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x201A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A28u;
        // 0x201a2c: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201a28) {
            ctx->pc = 0x201A40u;
            goto label_201a40;
        }
    }
    ctx->pc = 0x201A30u;
label_201a30:
    // 0x201a30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201a34:
    // 0x201a34: 0xac20c994  sw          $zero, -0x366C($at)
    ctx->pc = 0x201a34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953364), GPR_U32(ctx, 0));
label_201a38:
    // 0x201a38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x201a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_201a3c:
    // 0x201a3c: 0xac23c9c0  sw          $v1, -0x3640($at)
    ctx->pc = 0x201a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953408), GPR_U32(ctx, 3));
label_201a40:
    // 0x201a40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x201a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_201a44:
    // 0x201a44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201a44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201a48:
    // 0x201a48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201a48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201a4c:
    // 0x201a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201a50:
    // 0x201a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201a54:
    // 0x201a54: 0x3e00008  jr          $ra
label_201a58:
    if (ctx->pc == 0x201A58u) {
        ctx->pc = 0x201A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A54u;
        // 0x201a58: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201A5Cu;
        goto label_201a5c;
    }
    ctx->pc = 0x201A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201A54u;
        // 0x201a58: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201A5Cu;
label_201a5c:
    // 0x201a5c: 0x0  nop
    ctx->pc = 0x201a5cu;
    // NOP
label_201a60:
    // 0x201a60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x201a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_201a64:
    // 0x201a64: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x201a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_201a68:
    // 0x201a68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x201a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_201a6c:
    // 0x201a6c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_201a70:
    // 0x201a70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x201a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_201a74:
    // 0x201a74: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x201a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
label_201a78:
    // 0x201a78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_201a7c:
    // 0x201a7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x201a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_201a80:
    // 0x201a80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_201a84:
    // 0x201a84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201a88:
    // 0x201a88: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x201a88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_201a8c:
    // 0x201a8c: 0x8c25f468  lw          $a1, -0xB98($at)
    ctx->pc = 0x201a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_201a90:
    // 0x201a90: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x201a90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_201a94:
    // 0x201a94: 0x2610f440  addiu       $s0, $s0, -0xBC0
    ctx->pc = 0x201a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964288));
label_201a98:
    // 0x201a98: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x201a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_201a9c:
    // 0x201a9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x201a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_201aa0:
    // 0x201aa0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x201aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_201aa4:
    // 0x201aa4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x201aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_201aa8:
    // 0x201aa8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x201aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_201aac:
    // 0x201aac: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x201aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_201ab0:
    // 0x201ab0: 0x8e43048c  lw          $v1, 0x48C($s2)
    ctx->pc = 0x201ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
label_201ab4:
    // 0x201ab4: 0x1c60009e  bgtz        $v1, . + 4 + (0x9E << 2)
label_201ab8:
    if (ctx->pc == 0x201AB8u) {
        ctx->pc = 0x201AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AB4u;
        // 0x201ab8: 0x2631f460  addiu       $s1, $s1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201ABCu;
        goto label_201abc;
    }
    ctx->pc = 0x201AB4u;
    {
        const bool branch_taken_0x201ab4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x201AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AB4u;
        // 0x201ab8: 0x2631f460  addiu       $s1, $s1, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ab4) {
            ctx->pc = 0x201D30u;
            goto label_201d30;
        }
    }
    ctx->pc = 0x201ABCu;
label_201abc:
    // 0x201abc: 0x8e430488  lw          $v1, 0x488($s2)
    ctx->pc = 0x201abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1160)));
label_201ac0:
    // 0x201ac0: 0x286100c6  slti        $at, $v1, 0xC6
    ctx->pc = 0x201ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)198) ? 1 : 0);
label_201ac4:
    // 0x201ac4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_201ac8:
    if (ctx->pc == 0x201AC8u) {
        ctx->pc = 0x201AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AC4u;
        // 0x201ac8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201ACCu;
        goto label_201acc;
    }
    ctx->pc = 0x201AC4u;
    {
        const bool branch_taken_0x201ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x201AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AC4u;
        // 0x201ac8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ac4) {
            ctx->pc = 0x201AD8u;
            goto label_201ad8;
        }
    }
    ctx->pc = 0x201ACCu;
label_201acc:
    // 0x201acc: 0x10000099  b           . + 4 + (0x99 << 2)
label_201ad0:
    if (ctx->pc == 0x201AD0u) {
        ctx->pc = 0x201AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201ACCu;
        // 0x201ad0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201AD4u;
        goto label_201ad4;
    }
    ctx->pc = 0x201ACCu;
    {
        const bool branch_taken_0x201acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201ACCu;
        // 0x201ad0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201acc) {
            ctx->pc = 0x201D34u;
            goto label_201d34;
        }
    }
    ctx->pc = 0x201AD4u;
label_201ad4:
    // 0x201ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201ad8:
    // 0x201ad8: 0xc080f84  jal         func_203E10
label_201adc:
    if (ctx->pc == 0x201ADCu) {
        ctx->pc = 0x201AE0u;
        goto label_201ae0;
    }
    ctx->pc = 0x201AD8u;
    SET_GPR_U32(ctx, 31, 0x201AE0u);
    ctx->pc = 0x203E10u;
    { ctx->pc = 0x203e10; return; }
    ctx->pc = 0x201AE0u;
label_201ae0:
    // 0x201ae0: 0xc07a854  jal         func_1EA150
label_201ae4:
    if (ctx->pc == 0x201AE4u) {
        ctx->pc = 0x201AE8u;
        goto label_201ae8;
    }
    ctx->pc = 0x201AE0u;
    SET_GPR_U32(ctx, 31, 0x201AE8u);
    ctx->pc = 0x1EA150u;
    { ctx->pc = 0x1ea150; return; }
    ctx->pc = 0x201AE8u;
label_201ae8:
    // 0x201ae8: 0x10000049  b           . + 4 + (0x49 << 2)
label_201aec:
    if (ctx->pc == 0x201AECu) {
        ctx->pc = 0x201AF0u;
        goto label_201af0;
    }
    ctx->pc = 0x201AE8u;
    {
        const bool branch_taken_0x201ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201ae8) {
            ctx->pc = 0x201C10u;
            goto label_201c10;
        }
    }
    ctx->pc = 0x201AF0u;
label_201af0:
    // 0x201af0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x201af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_201af4:
    // 0x201af4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201af8:
    // 0x201af8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_201afc:
    if (ctx->pc == 0x201AFCu) {
        ctx->pc = 0x201B00u;
        goto label_201b00;
    }
    ctx->pc = 0x201AF8u;
    {
        const bool branch_taken_0x201af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201af8) {
            ctx->pc = 0x201B0Cu;
            goto label_201b0c;
        }
    }
    ctx->pc = 0x201B00u;
label_201b00:
    // 0x201b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201b04:
    // 0x201b04: 0xc080754  jal         func_201D50
label_201b08:
    if (ctx->pc == 0x201B08u) {
        ctx->pc = 0x201B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B04u;
        // 0x201b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B0Cu;
        goto label_201b0c;
    }
    ctx->pc = 0x201B04u;
    SET_GPR_U32(ctx, 31, 0x201B0Cu);
    ctx->pc = 0x201B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B04u;
    // 0x201b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D50u;
    goto label_201d50;
    ctx->pc = 0x201B0Cu;
label_201b0c:
    // 0x201b0c: 0x0  nop
    ctx->pc = 0x201b0cu;
    // NOP
label_201b10:
    // 0x201b10: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_201b14:
    // 0x201b14: 0x8c22f460  lw          $v0, -0xBA0($at)
    ctx->pc = 0x201b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964320)));
label_201b18:
    // 0x201b18: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x201b18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_201b1c:
    // 0x201b1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x201b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201b20:
    // 0x201b20: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
label_201b24:
    if (ctx->pc == 0x201B24u) {
        ctx->pc = 0x201B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B20u;
        // 0x201b24: 0x2694f460  addiu       $s4, $s4, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B28u;
        goto label_201b28;
    }
    ctx->pc = 0x201B20u;
    {
        const bool branch_taken_0x201b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x201B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B20u;
        // 0x201b24: 0x2694f460  addiu       $s4, $s4, -0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b20) {
            ctx->pc = 0x201B48u;
            goto label_201b48;
        }
    }
    ctx->pc = 0x201B28u;
label_201b28:
    // 0x201b28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_201b2c:
    if (ctx->pc == 0x201B2Cu) {
        ctx->pc = 0x201B30u;
        goto label_201b30;
    }
    ctx->pc = 0x201B28u;
    {
        const bool branch_taken_0x201b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b28) {
            ctx->pc = 0x201B38u;
            goto label_201b38;
        }
    }
    ctx->pc = 0x201B30u;
label_201b30:
    // 0x201b30: 0x10000028  b           . + 4 + (0x28 << 2)
label_201b34:
    if (ctx->pc == 0x201B34u) {
        ctx->pc = 0x201B38u;
        goto label_201b38;
    }
    ctx->pc = 0x201B30u;
    {
        const bool branch_taken_0x201b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b30) {
            ctx->pc = 0x201BD4u;
            goto label_201bd4;
        }
    }
    ctx->pc = 0x201B38u;
label_201b38:
    // 0x201b38: 0xc0810f0  jal         func_2043C0
label_201b3c:
    if (ctx->pc == 0x201B3Cu) {
        ctx->pc = 0x201B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B38u;
        // 0x201b3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B40u;
        goto label_201b40;
    }
    ctx->pc = 0x201B38u;
    SET_GPR_U32(ctx, 31, 0x201B40u);
    ctx->pc = 0x201B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B38u;
    // 0x201b3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2043C0u;
    { ctx->pc = 0x2043c0; return; }
    ctx->pc = 0x201B40u;
label_201b40:
    // 0x201b40: 0x10000024  b           . + 4 + (0x24 << 2)
label_201b44:
    if (ctx->pc == 0x201B44u) {
        ctx->pc = 0x201B48u;
        goto label_201b48;
    }
    ctx->pc = 0x201B40u;
    {
        const bool branch_taken_0x201b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b40) {
            ctx->pc = 0x201BD4u;
            goto label_201bd4;
        }
    }
    ctx->pc = 0x201B48u;
label_201b48:
    // 0x201b48: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x201b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_201b4c:
    // 0x201b4c: 0xc06c672  jal         func_1B19C8
label_201b50:
    if (ctx->pc == 0x201B50u) {
        ctx->pc = 0x201B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B4Cu;
        // 0x201b50: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B54u;
        goto label_201b54;
    }
    ctx->pc = 0x201B4Cu;
    SET_GPR_U32(ctx, 31, 0x201B54u);
    ctx->pc = 0x201B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B4Cu;
    // 0x201b50: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19C8u, 0x201B4Cu, 0x201B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B54u;
label_201b54:
    // 0x201b54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201b58:
    // 0x201b58: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_201b5c:
    if (ctx->pc == 0x201B5Cu) {
        ctx->pc = 0x201B60u;
        goto label_201b60;
    }
    ctx->pc = 0x201B58u;
    {
        const bool branch_taken_0x201b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201b58) {
            ctx->pc = 0x201BD4u;
            goto label_201bd4;
        }
    }
    ctx->pc = 0x201B60u;
label_201b60:
    // 0x201b60: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x201b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_201b64:
    // 0x201b64: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x201b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_201b68:
    // 0x201b68: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x201b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
label_201b6c:
    // 0x201b6c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x201b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_201b70:
    // 0x201b70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x201b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_201b74:
    // 0x201b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_201b78:
    // 0x201b78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x201b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201b7c:
    // 0x201b7c: 0x40f809  jalr        $v0
label_201b80:
    if (ctx->pc == 0x201B80u) {
        ctx->pc = 0x201B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B7Cu;
        // 0x201b80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B84u;
        goto label_201b84;
    }
    ctx->pc = 0x201B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201B84u);
        ctx->pc = 0x201B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B7Cu;
        // 0x201b80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B7Cu, 0x201B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201B84u;
label_201b84:
    // 0x201b84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_201b88:
    if (ctx->pc == 0x201B88u) {
        ctx->pc = 0x201B8Cu;
        goto label_201b8c;
    }
    ctx->pc = 0x201B84u;
    {
        const bool branch_taken_0x201b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b84) {
            ctx->pc = 0x201B98u;
            goto label_201b98;
        }
    }
    ctx->pc = 0x201B8Cu;
label_201b8c:
    // 0x201b8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201b90:
    // 0x201b90: 0x1000000f  b           . + 4 + (0xF << 2)
label_201b94:
    if (ctx->pc == 0x201B94u) {
        ctx->pc = 0x201B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B90u;
        // 0x201b94: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B98u;
        goto label_201b98;
    }
    ctx->pc = 0x201B90u;
    {
        const bool branch_taken_0x201b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B90u;
        // 0x201b94: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b90) {
            ctx->pc = 0x201BD0u;
            goto label_201bd0;
        }
    }
    ctx->pc = 0x201B98u;
label_201b98:
    // 0x201b98: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x201b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_201b9c:
    // 0x201b9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_201ba0:
    if (ctx->pc == 0x201BA0u) {
        ctx->pc = 0x201BA4u;
        goto label_201ba4;
    }
    ctx->pc = 0x201B9Cu;
    {
        const bool branch_taken_0x201b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201b9c) {
            ctx->pc = 0x201BC0u;
            goto label_201bc0;
        }
    }
    ctx->pc = 0x201BA4u;
label_201ba4:
    // 0x201ba4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x201ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_201ba8:
    // 0x201ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_201bac:
    // 0x201bac: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x201bacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_201bb0:
    // 0x201bb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_201bb4:
    if (ctx->pc == 0x201BB4u) {
        ctx->pc = 0x201BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BB0u;
        // 0x201bb4: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201BB8u;
        goto label_201bb8;
    }
    ctx->pc = 0x201BB0u;
    {
        const bool branch_taken_0x201bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BB0u;
        // 0x201bb4: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bb0) {
            ctx->pc = 0x201BC0u;
            goto label_201bc0;
        }
    }
    ctx->pc = 0x201BB8u;
label_201bb8:
    // 0x201bb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_201bbc:
    if (ctx->pc == 0x201BBCu) {
        ctx->pc = 0x201BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BB8u;
        // 0x201bbc: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201BC0u;
        goto label_201bc0;
    }
    ctx->pc = 0x201BB8u;
    {
        const bool branch_taken_0x201bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BB8u;
        // 0x201bbc: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bb8) {
            ctx->pc = 0x201BD4u;
            goto label_201bd4;
        }
    }
    ctx->pc = 0x201BC0u;
label_201bc0:
    // 0x201bc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x201bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_201bc4:
    // 0x201bc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x201bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201bc8:
    // 0x201bc8: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x201bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
label_201bcc:
    // 0x201bcc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x201bccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_201bd0:
    // 0x201bd0: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x201bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_201bd4:
    // 0x201bd4: 0x0  nop
    ctx->pc = 0x201bd4u;
    // NOP
label_201bd8:
    // 0x201bd8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_201bdc:
    // 0x201bdc: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x201bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_201be0:
    // 0x201be0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x201be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_201be4:
    // 0x201be4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_201be8:
    if (ctx->pc == 0x201BE8u) {
        ctx->pc = 0x201BECu;
        goto label_201bec;
    }
    ctx->pc = 0x201BE4u;
    {
        const bool branch_taken_0x201be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201be4) {
            ctx->pc = 0x201BF4u;
            goto label_201bf4;
        }
    }
    ctx->pc = 0x201BECu;
label_201bec:
    // 0x201bec: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x201becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_201bf0:
    // 0x201bf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x201bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_201bf4:
    // 0x201bf4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_201bf8:
    if (ctx->pc == 0x201BF8u) {
        ctx->pc = 0x201BFCu;
        goto label_201bfc;
    }
    ctx->pc = 0x201BF4u;
    {
        const bool branch_taken_0x201bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201bf4) {
            ctx->pc = 0x201C10u;
            goto label_201c10;
        }
    }
    ctx->pc = 0x201BFCu;
label_201bfc:
    // 0x201bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201c00:
    // 0x201c00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x201c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201c04:
    // 0x201c04: 0xc0807bc  jal         func_201EF0
label_201c08:
    if (ctx->pc == 0x201C08u) {
        ctx->pc = 0x201C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C04u;
        // 0x201c08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C0Cu;
        goto label_201c0c;
    }
    ctx->pc = 0x201C04u;
    SET_GPR_U32(ctx, 31, 0x201C0Cu);
    ctx->pc = 0x201C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C04u;
    // 0x201c08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EF0u;
    goto label_201ef0;
    ctx->pc = 0x201C0Cu;
label_201c0c:
    // 0x201c0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x201c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201c10:
    // 0x201c10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x201c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_201c14:
    // 0x201c14: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x201c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_201c18:
    // 0x201c18: 0x1462ffb5  bne         $v1, $v0, . + 4 + (-0x4B << 2)
label_201c1c:
    if (ctx->pc == 0x201C1Cu) {
        ctx->pc = 0x201C20u;
        goto label_201c20;
    }
    ctx->pc = 0x201C18u;
    {
        const bool branch_taken_0x201c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201c18) {
            ctx->pc = 0x201AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201af0;
        }
    }
    ctx->pc = 0x201C20u;
label_201c20:
    // 0x201c20: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
label_201c24:
    if (ctx->pc == 0x201C24u) {
        ctx->pc = 0x201C28u;
        goto label_201c28;
    }
    ctx->pc = 0x201C20u;
    {
        const bool branch_taken_0x201c20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x201c20) {
            ctx->pc = 0x201CF0u;
            goto label_201cf0;
        }
    }
    ctx->pc = 0x201C28u;
label_201c28:
    // 0x201c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201c2c:
    // 0x201c2c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x201c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_201c30:
    // 0x201c30: 0xc080984  jal         func_202610
label_201c34:
    if (ctx->pc == 0x201C34u) {
        ctx->pc = 0x201C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C30u;
        // 0x201c34: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C38u;
        goto label_201c38;
    }
    ctx->pc = 0x201C30u;
    SET_GPR_U32(ctx, 31, 0x201C38u);
    ctx->pc = 0x201C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C30u;
    // 0x201c34: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202610u;
    { ctx->pc = 0x202610; return; }
    ctx->pc = 0x201C38u;
label_201c38:
    // 0x201c38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x201c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201c3c:
    // 0x201c3c: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
label_201c40:
    if (ctx->pc == 0x201C40u) {
        ctx->pc = 0x201C44u;
        goto label_201c44;
    }
    ctx->pc = 0x201C3Cu;
    {
        const bool branch_taken_0x201c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201c3c) {
            ctx->pc = 0x201CF0u;
            goto label_201cf0;
        }
    }
    ctx->pc = 0x201C44u;
label_201c44:
    // 0x201c44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x201c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_201c48:
    // 0x201c48: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x201c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_201c4c:
    // 0x201c4c: 0xc070080  jal         func_1C0200
label_201c50:
    if (ctx->pc == 0x201C50u) {
        ctx->pc = 0x201C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C4Cu;
        // 0x201c50: 0x34455400  ori         $a1, $v0, 0x5400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C54u;
        goto label_201c54;
    }
    ctx->pc = 0x201C4Cu;
    SET_GPR_U32(ctx, 31, 0x201C54u);
    ctx->pc = 0x201C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C4Cu;
    // 0x201c50: 0x34455400  ori         $a1, $v0, 0x5400 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x201C4Cu, 0x201C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C54u;
label_201c54:
    // 0x201c54: 0xaf8290f4  sw          $v0, -0x6F0C($gp)
    ctx->pc = 0x201c54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938868), GPR_U32(ctx, 2));
label_201c58:
    // 0x201c58: 0x8f8490f4  lw          $a0, -0x6F0C($gp)
    ctx->pc = 0x201c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938868)));
label_201c5c:
    // 0x201c5c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x201c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_201c60:
    // 0x201c60: 0x8f8590f0  lw          $a1, -0x6F10($gp)
    ctx->pc = 0x201c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_201c64:
    // 0x201c64: 0xc08e93e  jal         func_23A4F8
label_201c68:
    if (ctx->pc == 0x201C68u) {
        ctx->pc = 0x201C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C64u;
        // 0x201c68: 0x34465400  ori         $a2, $v0, 0x5400 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C6Cu;
        goto label_201c6c;
    }
    ctx->pc = 0x201C64u;
    SET_GPR_U32(ctx, 31, 0x201C6Cu);
    ctx->pc = 0x201C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C64u;
    // 0x201c68: 0x34465400  ori         $a2, $v0, 0x5400 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21504);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x201C64u, 0x201C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C6Cu;
label_201c6c:
    // 0x201c6c: 0xc070e28  jal         func_1C38A0
label_201c70:
    if (ctx->pc == 0x201C70u) {
        ctx->pc = 0x201C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C6Cu;
        // 0x201c70: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C74u;
        goto label_201c74;
    }
    ctx->pc = 0x201C6Cu;
    SET_GPR_U32(ctx, 31, 0x201C74u);
    ctx->pc = 0x201C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C6Cu;
    // 0x201c70: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38A0u, 0x201C6Cu, 0x201C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C74u;
label_201c74:
    // 0x201c74: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_201c78:
    if (ctx->pc == 0x201C78u) {
        ctx->pc = 0x201C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C74u;
        // 0x201c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C7Cu;
        goto label_201c7c;
    }
    ctx->pc = 0x201C74u;
    {
        const bool branch_taken_0x201c74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x201C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C74u;
        // 0x201c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c74) {
            ctx->pc = 0x201C98u;
            goto label_201c98;
        }
    }
    ctx->pc = 0x201C7Cu;
label_201c7c:
    // 0x201c7c: 0xc070de0  jal         func_1C3780
label_201c80:
    if (ctx->pc == 0x201C80u) {
        ctx->pc = 0x201C84u;
        goto label_201c84;
    }
    ctx->pc = 0x201C7Cu;
    SET_GPR_U32(ctx, 31, 0x201C84u);
    ctx->pc = 0x1C3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3780u, 0x201C7Cu, 0x201C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C84u;
label_201c84:
    // 0x201c84: 0xc070e60  jal         func_1C3980
label_201c88:
    if (ctx->pc == 0x201C88u) {
        ctx->pc = 0x201C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C84u;
        // 0x201c88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C8Cu;
        goto label_201c8c;
    }
    ctx->pc = 0x201C84u;
    SET_GPR_U32(ctx, 31, 0x201C8Cu);
    ctx->pc = 0x201C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C84u;
    // 0x201c88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3980u, 0x201C84u, 0x201C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C8Cu;
label_201c8c:
    // 0x201c8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_201c90:
    if (ctx->pc == 0x201C90u) {
        ctx->pc = 0x201C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C8Cu;
        // 0x201c90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C94u;
        goto label_201c94;
    }
    ctx->pc = 0x201C8Cu;
    {
        const bool branch_taken_0x201c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C8Cu;
        // 0x201c90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c8c) {
            ctx->pc = 0x201CA4u;
            goto label_201ca4;
        }
    }
    ctx->pc = 0x201C94u;
label_201c94:
    // 0x201c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201c98:
    // 0x201c98: 0xc070038  jal         func_1C00E0
label_201c9c:
    if (ctx->pc == 0x201C9Cu) {
        ctx->pc = 0x201CA0u;
        goto label_201ca0;
    }
    ctx->pc = 0x201C98u;
    SET_GPR_U32(ctx, 31, 0x201CA0u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x201C98u, 0x201CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CA0u;
label_201ca0:
    // 0x201ca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201ca4:
    // 0x201ca4: 0xc080f84  jal         func_203E10
label_201ca8:
    if (ctx->pc == 0x201CA8u) {
        ctx->pc = 0x201CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CA4u;
        // 0x201ca8: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CACu;
        goto label_201cac;
    }
    ctx->pc = 0x201CA4u;
    SET_GPR_U32(ctx, 31, 0x201CACu);
    ctx->pc = 0x201CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CA4u;
    // 0x201ca8: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E10u;
    { ctx->pc = 0x203e10; return; }
    ctx->pc = 0x201CACu;
label_201cac:
    // 0x201cac: 0xc080a24  jal         func_202890
label_201cb0:
    if (ctx->pc == 0x201CB0u) {
        ctx->pc = 0x201CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CACu;
        // 0x201cb0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CB4u;
        goto label_201cb4;
    }
    ctx->pc = 0x201CACu;
    SET_GPR_U32(ctx, 31, 0x201CB4u);
    ctx->pc = 0x201CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CACu;
    // 0x201cb0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202890u;
    { ctx->pc = 0x202890; return; }
    ctx->pc = 0x201CB4u;
label_201cb4:
    // 0x201cb4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_201cb8:
    if (ctx->pc == 0x201CB8u) {
        ctx->pc = 0x201CBCu;
        goto label_201cbc;
    }
    ctx->pc = 0x201CB4u;
    {
        const bool branch_taken_0x201cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201cb4) {
            ctx->pc = 0x201CE4u;
            goto label_201ce4;
        }
    }
    ctx->pc = 0x201CBCu;
label_201cbc:
    // 0x201cbc: 0xc07a9d8  jal         func_1EA760
label_201cc0:
    if (ctx->pc == 0x201CC0u) {
        ctx->pc = 0x201CC4u;
        goto label_201cc4;
    }
    ctx->pc = 0x201CBCu;
    SET_GPR_U32(ctx, 31, 0x201CC4u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x201CC4u;
label_201cc4:
    // 0x201cc4: 0xc07a86c  jal         func_1EA1B0
label_201cc8:
    if (ctx->pc == 0x201CC8u) {
        ctx->pc = 0x201CCCu;
        goto label_201ccc;
    }
    ctx->pc = 0x201CC4u;
    SET_GPR_U32(ctx, 31, 0x201CCCu);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x201CCCu;
label_201ccc:
    // 0x201ccc: 0xc05b578  jal         func_16D5E0
label_201cd0:
    if (ctx->pc == 0x201CD0u) {
        ctx->pc = 0x201CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CCCu;
        // 0x201cd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CD4u;
        goto label_201cd4;
    }
    ctx->pc = 0x201CCCu;
    SET_GPR_U32(ctx, 31, 0x201CD4u);
    ctx->pc = 0x201CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CCCu;
    // 0x201cd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x201CCCu, 0x201CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CD4u;
label_201cd4:
    // 0x201cd4: 0xc060258  jal         func_180960
label_201cd8:
    if (ctx->pc == 0x201CD8u) {
        ctx->pc = 0x201CDCu;
        goto label_201cdc;
    }
    ctx->pc = 0x201CD4u;
    SET_GPR_U32(ctx, 31, 0x201CDCu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x201CD4u, 0x201CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CDCu;
label_201cdc:
    // 0x201cdc: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_201ce0:
    if (ctx->pc == 0x201CE0u) {
        ctx->pc = 0x201CE4u;
        goto label_201ce4;
    }
    ctx->pc = 0x201CDCu;
    {
        const bool branch_taken_0x201cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201cdc) {
            ctx->pc = 0x201CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201cac;
        }
    }
    ctx->pc = 0x201CE4u;
label_201ce4:
    // 0x201ce4: 0x0  nop
    ctx->pc = 0x201ce4u;
    // NOP
label_201ce8:
    // 0x201ce8: 0xc070038  jal         func_1C00E0
label_201cec:
    if (ctx->pc == 0x201CECu) {
        ctx->pc = 0x201CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CE8u;
        // 0x201cec: 0x8f8490f4  lw          $a0, -0x6F0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CF0u;
        goto label_201cf0;
    }
    ctx->pc = 0x201CE8u;
    SET_GPR_U32(ctx, 31, 0x201CF0u);
    ctx->pc = 0x201CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CE8u;
    // 0x201cec: 0x8f8490f4  lw          $a0, -0x6F0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x201CE8u, 0x201CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CF0u;
label_201cf0:
    // 0x201cf0: 0xc07a854  jal         func_1EA150
label_201cf4:
    if (ctx->pc == 0x201CF4u) {
        ctx->pc = 0x201CF8u;
        goto label_201cf8;
    }
    ctx->pc = 0x201CF0u;
    SET_GPR_U32(ctx, 31, 0x201CF8u);
    ctx->pc = 0x1EA150u;
    { ctx->pc = 0x1ea150; return; }
    ctx->pc = 0x201CF8u;
label_201cf8:
    // 0x201cf8: 0xc070e28  jal         func_1C38A0
label_201cfc:
    if (ctx->pc == 0x201CFCu) {
        ctx->pc = 0x201CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CF8u;
        // 0x201cfc: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D00u;
        goto label_201d00;
    }
    ctx->pc = 0x201CF8u;
    SET_GPR_U32(ctx, 31, 0x201D00u);
    ctx->pc = 0x201CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CF8u;
    // 0x201cfc: 0x8f9090f0  lw          $s0, -0x6F10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38A0u, 0x201CF8u, 0x201D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D00u;
label_201d00:
    // 0x201d00: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_201d04:
    if (ctx->pc == 0x201D04u) {
        ctx->pc = 0x201D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D00u;
        // 0x201d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D08u;
        goto label_201d08;
    }
    ctx->pc = 0x201D00u;
    {
        const bool branch_taken_0x201d00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x201D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D00u;
        // 0x201d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d00) {
            ctx->pc = 0x201D24u;
            goto label_201d24;
        }
    }
    ctx->pc = 0x201D08u;
label_201d08:
    // 0x201d08: 0xc070de0  jal         func_1C3780
label_201d0c:
    if (ctx->pc == 0x201D0Cu) {
        ctx->pc = 0x201D10u;
        goto label_201d10;
    }
    ctx->pc = 0x201D08u;
    SET_GPR_U32(ctx, 31, 0x201D10u);
    ctx->pc = 0x1C3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3780u, 0x201D08u, 0x201D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D10u;
label_201d10:
    // 0x201d10: 0xc070e60  jal         func_1C3980
label_201d14:
    if (ctx->pc == 0x201D14u) {
        ctx->pc = 0x201D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D10u;
        // 0x201d14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D18u;
        goto label_201d18;
    }
    ctx->pc = 0x201D10u;
    SET_GPR_U32(ctx, 31, 0x201D18u);
    ctx->pc = 0x201D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D10u;
    // 0x201d14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3980u, 0x201D10u, 0x201D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D18u;
label_201d18:
    // 0x201d18: 0x10000005  b           . + 4 + (0x5 << 2)
label_201d1c:
    if (ctx->pc == 0x201D1Cu) {
        ctx->pc = 0x201D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D18u;
        // 0x201d1c: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D20u;
        goto label_201d20;
    }
    ctx->pc = 0x201D18u;
    {
        const bool branch_taken_0x201d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D18u;
        // 0x201d1c: 0xaf8090f0  sw          $zero, -0x6F10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d18) {
            ctx->pc = 0x201D30u;
            goto label_201d30;
        }
    }
    ctx->pc = 0x201D20u;
label_201d20:
    // 0x201d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201d24:
    // 0x201d24: 0xc070038  jal         func_1C00E0
label_201d28:
    if (ctx->pc == 0x201D28u) {
        ctx->pc = 0x201D2Cu;
        goto label_201d2c;
    }
    ctx->pc = 0x201D24u;
    SET_GPR_U32(ctx, 31, 0x201D2Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x201D24u, 0x201D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D2Cu;
label_201d2c:
    // 0x201d2c: 0xaf8090f0  sw          $zero, -0x6F10($gp)
    ctx->pc = 0x201d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 0));
label_201d30:
    // 0x201d30: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x201d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_201d34:
    // 0x201d34: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x201d34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201d38:
    // 0x201d38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x201d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_201d3c:
    // 0x201d3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201d40:
    // 0x201d40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x201d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201d44:
    // 0x201d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201d48:
    // 0x201d48: 0x3e00008  jr          $ra
label_201d4c:
    if (ctx->pc == 0x201D4Cu) {
        ctx->pc = 0x201D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D48u;
        // 0x201d4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D50u;
        goto label_201d50;
    }
    ctx->pc = 0x201D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D48u;
        // 0x201d4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201D50u;
label_201d50:
    // 0x201d50: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x201d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_201d54:
    // 0x201d54: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x201d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_201d58:
    // 0x201d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_201d5c:
    // 0x201d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201d60:
    // 0x201d60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x201d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_201d64:
    // 0x201d64: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
label_201d68:
    if (ctx->pc == 0x201D68u) {
        ctx->pc = 0x201D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D64u;
        // 0x201d68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D6Cu;
        goto label_201d6c;
    }
    ctx->pc = 0x201D64u;
    {
        const bool branch_taken_0x201d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D64u;
        // 0x201d68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d64) {
            ctx->pc = 0x201ED0u;
            goto label_201ed0;
        }
    }
    ctx->pc = 0x201D6Cu;
label_201d6c:
    // 0x201d6c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x201d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_201d70:
    // 0x201d70: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
label_201d74:
    if (ctx->pc == 0x201D74u) {
        ctx->pc = 0x201D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D70u;
        // 0x201d74: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D78u;
        goto label_201d78;
    }
    ctx->pc = 0x201D70u;
    {
        const bool branch_taken_0x201d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D70u;
        // 0x201d74: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d70) {
            ctx->pc = 0x201E80u;
            goto label_201e80;
        }
    }
    ctx->pc = 0x201D78u;
label_201d78:
    // 0x201d78: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x201d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_201d7c:
    // 0x201d7c: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
label_201d80:
    if (ctx->pc == 0x201D80u) {
        ctx->pc = 0x201D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D7Cu;
        // 0x201d80: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D84u;
        goto label_201d84;
    }
    ctx->pc = 0x201D7Cu;
    {
        const bool branch_taken_0x201d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D7Cu;
        // 0x201d80: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d7c) {
            ctx->pc = 0x201E3Cu;
            goto label_201e3c;
        }
    }
    ctx->pc = 0x201D84u;
label_201d84:
    // 0x201d84: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x201d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_201d88:
    // 0x201d88: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_201d8c:
    if (ctx->pc == 0x201D8Cu) {
        ctx->pc = 0x201D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D88u;
        // 0x201d8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D90u;
        goto label_201d90;
    }
    ctx->pc = 0x201D88u;
    {
        const bool branch_taken_0x201d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D88u;
        // 0x201d8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d88) {
            ctx->pc = 0x201DD8u;
            goto label_201dd8;
        }
    }
    ctx->pc = 0x201D90u;
label_201d90:
    // 0x201d90: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_201d94:
    if (ctx->pc == 0x201D94u) {
        ctx->pc = 0x201D98u;
        goto label_201d98;
    }
    ctx->pc = 0x201D90u;
    {
        const bool branch_taken_0x201d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x201d90) {
            ctx->pc = 0x201DB0u;
            goto label_201db0;
        }
    }
    ctx->pc = 0x201D98u;
label_201d98:
    // 0x201d98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_201d9c:
    if (ctx->pc == 0x201D9Cu) {
        ctx->pc = 0x201DA0u;
        goto label_201da0;
    }
    ctx->pc = 0x201D98u;
    {
        const bool branch_taken_0x201d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d98) {
            ctx->pc = 0x201DA8u;
            goto label_201da8;
        }
    }
    ctx->pc = 0x201DA0u;
label_201da0:
    // 0x201da0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_201da4:
    if (ctx->pc == 0x201DA4u) {
        ctx->pc = 0x201DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA0u;
        // 0x201da4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DA8u;
        goto label_201da8;
    }
    ctx->pc = 0x201DA0u;
    {
        const bool branch_taken_0x201da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA0u;
        // 0x201da4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201da0) {
            ctx->pc = 0x201EDCu;
            goto label_201edc;
        }
    }
    ctx->pc = 0x201DA8u;
label_201da8:
    // 0x201da8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_201dac:
    if (ctx->pc == 0x201DACu) {
        ctx->pc = 0x201DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA8u;
        // 0x201dac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DB0u;
        goto label_201db0;
    }
    ctx->pc = 0x201DA8u;
    {
        const bool branch_taken_0x201da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA8u;
        // 0x201dac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201da8) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201DB0u;
label_201db0:
    // 0x201db0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x201db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_201db4:
    // 0x201db4: 0xc080fe4  jal         func_203F90
label_201db8:
    if (ctx->pc == 0x201DB8u) {
        ctx->pc = 0x201DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DB4u;
        // 0x201db8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DBCu;
        goto label_201dbc;
    }
    ctx->pc = 0x201DB4u;
    SET_GPR_U32(ctx, 31, 0x201DBCu);
    ctx->pc = 0x201DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DB4u;
    // 0x201db8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x201DBCu;
label_201dbc:
    // 0x201dbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x201dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_201dc0:
    // 0x201dc0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x201dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_201dc4:
    // 0x201dc4: 0xc08f390  jal         func_23CE40
label_201dc8:
    if (ctx->pc == 0x201DC8u) {
        ctx->pc = 0x201DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DC4u;
        // 0x201dc8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DCCu;
        goto label_201dcc;
    }
    ctx->pc = 0x201DC4u;
    SET_GPR_U32(ctx, 31, 0x201DCCu);
    ctx->pc = 0x201DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DC4u;
    // 0x201dc8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x201DC4u, 0x201DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DCCu;
label_201dcc:
    // 0x201dcc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_201dd0:
    // 0x201dd0: 0x10000041  b           . + 4 + (0x41 << 2)
label_201dd4:
    if (ctx->pc == 0x201DD4u) {
        ctx->pc = 0x201DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DD0u;
        // 0x201dd4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DD8u;
        goto label_201dd8;
    }
    ctx->pc = 0x201DD0u;
    {
        const bool branch_taken_0x201dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DD0u;
        // 0x201dd4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dd0) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201DD8u;
label_201dd8:
    // 0x201dd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x201dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201ddc:
    // 0x201ddc: 0xc080fe4  jal         func_203F90
label_201de0:
    if (ctx->pc == 0x201DE0u) {
        ctx->pc = 0x201DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DDCu;
        // 0x201de0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DE4u;
        goto label_201de4;
    }
    ctx->pc = 0x201DDCu;
    SET_GPR_U32(ctx, 31, 0x201DE4u);
    ctx->pc = 0x201DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DDCu;
    // 0x201de0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    { ctx->pc = 0x203f90; return; }
    ctx->pc = 0x201DE4u;
label_201de4:
    // 0x201de4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_201de8:
    // 0x201de8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x201de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_201dec:
    // 0x201dec: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x201decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_201df0:
    // 0x201df0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
label_201df4:
    // 0x201df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201df8:
    // 0x201df8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_201dfc:
    // 0x201dfc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x201dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_201e00:
    // 0x201e00: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x201e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_201e04:
    // 0x201e04: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x201e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_201e08:
    // 0x201e08: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x201e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_201e0c:
    // 0x201e0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_201e10:
    // 0x201e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_201e14:
    // 0x201e14: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x201e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
label_201e18:
    // 0x201e18: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x201e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_201e1c:
    // 0x201e1c: 0xc08f390  jal         func_23CE40
label_201e20:
    if (ctx->pc == 0x201E20u) {
        ctx->pc = 0x201E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E1Cu;
        // 0x201e20: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E24u;
        goto label_201e24;
    }
    ctx->pc = 0x201E1Cu;
    SET_GPR_U32(ctx, 31, 0x201E24u);
    ctx->pc = 0x201E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E1Cu;
    // 0x201e20: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x201E1Cu, 0x201E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E24u;
label_201e24:
    // 0x201e24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201e28:
    // 0x201e28: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_201e2c:
    // 0x201e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201e30:
    // 0x201e30: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201e30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_201e34:
    // 0x201e34: 0x10000028  b           . + 4 + (0x28 << 2)
label_201e38:
    if (ctx->pc == 0x201E38u) {
        ctx->pc = 0x201E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E34u;
        // 0x201e38: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E3Cu;
        goto label_201e3c;
    }
    ctx->pc = 0x201E34u;
    {
        const bool branch_taken_0x201e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E34u;
        // 0x201e38: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e34) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201E3Cu;
label_201e3c:
    // 0x201e3c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x201e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_201e40:
    // 0x201e40: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x201e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_201e44:
    // 0x201e44: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x201e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
label_201e48:
    // 0x201e48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201e4c:
    // 0x201e4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x201e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201e50:
    // 0x201e50: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_201e54:
    // 0x201e54: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_201e58:
    // 0x201e58: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x201e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_201e5c:
    // 0x201e5c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_201e60:
    // 0x201e60: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_201e64:
    // 0x201e64: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_201e68:
    // 0x201e68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x201e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_201e6c:
    // 0x201e6c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x201e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
label_201e70:
    // 0x201e70: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x201e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
label_201e74:
    // 0x201e74: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201e74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_201e78:
    // 0x201e78: 0x10000017  b           . + 4 + (0x17 << 2)
label_201e7c:
    if (ctx->pc == 0x201E7Cu) {
        ctx->pc = 0x201E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E78u;
        // 0x201e7c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E80u;
        goto label_201e80;
    }
    ctx->pc = 0x201E78u;
    {
        const bool branch_taken_0x201e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E78u;
        // 0x201e7c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e78) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201E80u;
label_201e80:
    // 0x201e80: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_201e84:
    // 0x201e84: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x201e84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
label_201e88:
    // 0x201e88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x201e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_201e8c:
    // 0x201e8c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
label_201e90:
    // 0x201e90: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
label_201e94:
    // 0x201e94: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
label_201e98:
    // 0x201e98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201e9c:
    // 0x201e9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x201e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_201ea0:
    // 0x201ea0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_201ea4:
    // 0x201ea4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
label_201ea8:
    // 0x201ea8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x201ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_201eac:
    // 0x201eac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_201eb0:
    // 0x201eb0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_201eb4:
    // 0x201eb4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_201eb8:
    // 0x201eb8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_201ebc:
    // 0x201ebc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x201ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
label_201ec0:
    // 0x201ec0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x201ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
label_201ec4:
    // 0x201ec4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
label_201ec8:
    // 0x201ec8: 0x10000003  b           . + 4 + (0x3 << 2)
label_201ecc:
    if (ctx->pc == 0x201ECCu) {
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC8u;
        // 0x201ecc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201ED0u;
        goto label_201ed0;
    }
    ctx->pc = 0x201EC8u;
    {
        const bool branch_taken_0x201ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC8u;
        // 0x201ecc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ec8) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201ED0u;
label_201ed0:
    // 0x201ed0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x201ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_201ed4:
    // 0x201ed4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x201ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_201ed8:
    // 0x201ed8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x201ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_201edc:
    // 0x201edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_201ee0:
    // 0x201ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201ee4:
    // 0x201ee4: 0x3e00008  jr          $ra
label_201ee8:
    if (ctx->pc == 0x201EE8u) {
        ctx->pc = 0x201EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EE4u;
        // 0x201ee8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EECu;
        goto label_201eec;
    }
    ctx->pc = 0x201EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EE4u;
        // 0x201ee8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201EECu;
label_201eec:
    // 0x201eec: 0x0  nop
    ctx->pc = 0x201eecu;
    // NOP
label_201ef0:
    // 0x201ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x201ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_201ef4:
    // 0x201ef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201ef8:
    // 0x201ef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x201ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_201efc:
    // 0x201efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x201efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_201f00:
    // 0x201f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x201f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_201f04:
    // 0x201f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x201f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201f08:
    // 0x201f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_201f0c:
    // 0x201f0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x201f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201f10:
    // 0x201f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_201f14:
    // 0x201f14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x201f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201f18:
    // 0x201f18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201f1c:
    // 0x201f1c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_201f20:
    if (ctx->pc == 0x201F20u) {
        ctx->pc = 0x201F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F1Cu;
        // 0x201f20: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F24u;
        goto label_201f24;
    }
    ctx->pc = 0x201F1Cu;
    {
        const bool branch_taken_0x201f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F1Cu;
        // 0x201f20: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f1c) {
            ctx->pc = 0x201FF4u;
            { ctx->pc = 0x201ff4; return; }
        }
    }
    ctx->pc = 0x201F24u;
label_201f24:
    // 0x201f24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x201f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_201f28:
    // 0x201f28: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x201f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_201f2c:
    // 0x201f2c: 0x10a20022  beq         $a1, $v0, . + 4 + (0x22 << 2)
label_201f30:
    if (ctx->pc == 0x201F30u) {
        ctx->pc = 0x201F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F2Cu;
        // 0x201f30: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F34u;
        goto label_201f34;
    }
    ctx->pc = 0x201F2Cu;
    {
        const bool branch_taken_0x201f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x201F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F2Cu;
        // 0x201f30: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f2c) {
            ctx->pc = 0x201FB8u;
            { ctx->pc = 0x201fb8; return; }
        }
    }
    ctx->pc = 0x201F34u;
label_201f34:
    // 0x201f34: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_201f38:
    if (ctx->pc == 0x201F38u) {
        ctx->pc = 0x201F3Cu;
        goto label_201f3c;
    }
    ctx->pc = 0x201F34u;
    {
        const bool branch_taken_0x201f34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x201f34) {
            ctx->pc = 0x201FB0u;
            { ctx->pc = 0x201fb0; return; }
        }
    }
    ctx->pc = 0x201F3Cu;
label_201f3c:
    // 0x201f3c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x201f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_201f40:
    // 0x201f40: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
label_201f44:
    if (ctx->pc == 0x201F44u) {
        ctx->pc = 0x201F48u;
        goto label_201f48;
    }
    ctx->pc = 0x201F40u;
    {
        const bool branch_taken_0x201f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x201f40) {
            ctx->pc = 0x201FA8u;
            { ctx->pc = 0x201fa8; return; }
        }
    }
    ctx->pc = 0x201F48u;
label_201f48:
    // 0x201f48: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x201f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_201f4c:
    // 0x201f4c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_201f50:
    if (ctx->pc == 0x201F50u) {
        ctx->pc = 0x201F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F4Cu;
        // 0x201f50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F54u;
        goto label_201f54;
    }
    ctx->pc = 0x201F4Cu;
    {
        const bool branch_taken_0x201f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x201F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F4Cu;
        // 0x201f50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f4c) {
            ctx->pc = 0x201FA0u;
            { ctx->pc = 0x201fa0; return; }
        }
    }
    ctx->pc = 0x201F54u;
label_201f54:
    // 0x201f54: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
label_201f58:
    if (ctx->pc == 0x201F58u) {
        ctx->pc = 0x201F5Cu;
        goto label_201f5c;
    }
    ctx->pc = 0x201F54u;
    {
        const bool branch_taken_0x201f54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x201f54) {
            ctx->pc = 0x201F8Cu;
            goto label_201f8c;
        }
    }
    ctx->pc = 0x201F5Cu;
label_201f5c:
    // 0x201f5c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_201f60:
    if (ctx->pc == 0x201F60u) {
        ctx->pc = 0x201F64u;
        goto label_201f64;
    }
    ctx->pc = 0x201F5Cu;
    {
        const bool branch_taken_0x201f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f5c) {
            ctx->pc = 0x201F6Cu;
            goto label_201f6c;
        }
    }
    ctx->pc = 0x201F64u;
label_201f64:
    // 0x201f64: 0x10000024  b           . + 4 + (0x24 << 2)
label_201f68:
    if (ctx->pc == 0x201F68u) {
        ctx->pc = 0x201F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F64u;
        // 0x201f68: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F6Cu;
        goto label_201f6c;
    }
    ctx->pc = 0x201F64u;
    {
        const bool branch_taken_0x201f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F64u;
        // 0x201f68: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f64) {
            ctx->pc = 0x201FF8u;
            { ctx->pc = 0x201ff8; return; }
        }
    }
    ctx->pc = 0x201F6Cu;
label_201f6c:
    // 0x201f6c: 0x8cc30480  lw          $v1, 0x480($a2)
    ctx->pc = 0x201f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1152)));
label_201f70:
    // 0x201f70: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x201f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_201f74:
    // 0x201f74: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x201f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_201f78:
    // 0x201f78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x201f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_201f7c:
    // 0x201f7c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_201f80:
    if (ctx->pc == 0x201F80u) {
        ctx->pc = 0x201F84u;
        goto label_201f84;
    }
    ctx->pc = 0x201F7Cu;
    {
        const bool branch_taken_0x201f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201f7c) {
            ctx->pc = 0x201FF4u;
            { ctx->pc = 0x201ff4; return; }
        }
    }
    ctx->pc = 0x201F84u;
label_201f84:
    // 0x201f84: 0x1000001b  b           . + 4 + (0x1B << 2)
label_201f88:
    if (ctx->pc == 0x201F88u) {
        ctx->pc = 0x201F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F84u;
        // 0x201f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F8Cu;
        goto label_201f8c;
    }
    ctx->pc = 0x201F84u;
    {
        const bool branch_taken_0x201f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F84u;
        // 0x201f88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f84) {
            ctx->pc = 0x201FF4u;
            { ctx->pc = 0x201ff4; return; }
        }
    }
    ctx->pc = 0x201F8Cu;
label_201f8c:
    // 0x201f8c: 0x8cc2048c  lw          $v0, 0x48C($a2)
    ctx->pc = 0x201f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1164)));
    ctx->pc = 0x201f90u;
    return;
}

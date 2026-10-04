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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part123(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8dd8u: goto label_1b8dd8;
        case 0x1b8ddcu: goto label_1b8ddc;
        case 0x1b8de0u: goto label_1b8de0;
        case 0x1b8de4u: goto label_1b8de4;
        case 0x1b8de8u: goto label_1b8de8;
        case 0x1b8decu: goto label_1b8dec;
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8df4u: goto label_1b8df4;
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8dfcu: goto label_1b8dfc;
        case 0x1b8e00u: goto label_1b8e00;
        case 0x1b8e04u: goto label_1b8e04;
        case 0x1b8e08u: goto label_1b8e08;
        case 0x1b8e0cu: goto label_1b8e0c;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e18u: goto label_1b8e18;
        case 0x1b8e1cu: goto label_1b8e1c;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e24u: goto label_1b8e24;
        case 0x1b8e28u: goto label_1b8e28;
        case 0x1b8e2cu: goto label_1b8e2c;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e34u: goto label_1b8e34;
        case 0x1b8e38u: goto label_1b8e38;
        case 0x1b8e3cu: goto label_1b8e3c;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e44u: goto label_1b8e44;
        case 0x1b8e48u: goto label_1b8e48;
        case 0x1b8e4cu: goto label_1b8e4c;
        case 0x1b8e50u: goto label_1b8e50;
        case 0x1b8e54u: goto label_1b8e54;
        case 0x1b8e58u: goto label_1b8e58;
        case 0x1b8e5cu: goto label_1b8e5c;
        case 0x1b8e60u: goto label_1b8e60;
        case 0x1b8e64u: goto label_1b8e64;
        case 0x1b8e68u: goto label_1b8e68;
        case 0x1b8e6cu: goto label_1b8e6c;
        case 0x1b8e70u: goto label_1b8e70;
        case 0x1b8e74u: goto label_1b8e74;
        case 0x1b8e78u: goto label_1b8e78;
        case 0x1b8e7cu: goto label_1b8e7c;
        case 0x1b8e80u: goto label_1b8e80;
        case 0x1b8e84u: goto label_1b8e84;
        case 0x1b8e88u: goto label_1b8e88;
        case 0x1b8e8cu: goto label_1b8e8c;
        case 0x1b8e90u: goto label_1b8e90;
        case 0x1b8e94u: goto label_1b8e94;
        case 0x1b8e98u: goto label_1b8e98;
        case 0x1b8e9cu: goto label_1b8e9c;
        case 0x1b8ea0u: goto label_1b8ea0;
        case 0x1b8ea4u: goto label_1b8ea4;
        case 0x1b8ea8u: goto label_1b8ea8;
        case 0x1b8eacu: goto label_1b8eac;
        case 0x1b8eb0u: goto label_1b8eb0;
        case 0x1b8eb4u: goto label_1b8eb4;
        case 0x1b8eb8u: goto label_1b8eb8;
        case 0x1b8ebcu: goto label_1b8ebc;
        case 0x1b8ec0u: goto label_1b8ec0;
        case 0x1b8ec4u: goto label_1b8ec4;
        case 0x1b8ec8u: goto label_1b8ec8;
        case 0x1b8eccu: goto label_1b8ecc;
        case 0x1b8ed0u: goto label_1b8ed0;
        case 0x1b8ed4u: goto label_1b8ed4;
        case 0x1b8ed8u: goto label_1b8ed8;
        case 0x1b8edcu: goto label_1b8edc;
        case 0x1b8ee0u: goto label_1b8ee0;
        case 0x1b8ee4u: goto label_1b8ee4;
        case 0x1b8ee8u: goto label_1b8ee8;
        case 0x1b8eecu: goto label_1b8eec;
        case 0x1b8ef0u: goto label_1b8ef0;
        case 0x1b8ef4u: goto label_1b8ef4;
        case 0x1b8ef8u: goto label_1b8ef8;
        case 0x1b8efcu: goto label_1b8efc;
        case 0x1b8f00u: goto label_1b8f00;
        case 0x1b8f04u: goto label_1b8f04;
        case 0x1b8f08u: goto label_1b8f08;
        case 0x1b8f0cu: goto label_1b8f0c;
        case 0x1b8f10u: goto label_1b8f10;
        case 0x1b8f14u: goto label_1b8f14;
        case 0x1b8f18u: goto label_1b8f18;
        case 0x1b8f1cu: goto label_1b8f1c;
        case 0x1b8f20u: goto label_1b8f20;
        case 0x1b8f24u: goto label_1b8f24;
        case 0x1b8f28u: goto label_1b8f28;
        case 0x1b8f2cu: goto label_1b8f2c;
        case 0x1b8f30u: goto label_1b8f30;
        case 0x1b8f34u: goto label_1b8f34;
        case 0x1b8f38u: goto label_1b8f38;
        case 0x1b8f3cu: goto label_1b8f3c;
        case 0x1b8f40u: goto label_1b8f40;
        case 0x1b8f44u: goto label_1b8f44;
        case 0x1b8f48u: goto label_1b8f48;
        case 0x1b8f4cu: goto label_1b8f4c;
        case 0x1b8f50u: goto label_1b8f50;
        case 0x1b8f54u: goto label_1b8f54;
        case 0x1b8f58u: goto label_1b8f58;
        case 0x1b8f5cu: goto label_1b8f5c;
        case 0x1b8f60u: goto label_1b8f60;
        case 0x1b8f64u: goto label_1b8f64;
        case 0x1b8f68u: goto label_1b8f68;
        case 0x1b8f6cu: goto label_1b8f6c;
        case 0x1b8f70u: goto label_1b8f70;
        case 0x1b8f74u: goto label_1b8f74;
        case 0x1b8f78u: goto label_1b8f78;
        case 0x1b8f7cu: goto label_1b8f7c;
        case 0x1b8f80u: goto label_1b8f80;
        case 0x1b8f84u: goto label_1b8f84;
        case 0x1b8f88u: goto label_1b8f88;
        case 0x1b8f8cu: goto label_1b8f8c;
        case 0x1b8f90u: goto label_1b8f90;
        case 0x1b8f94u: goto label_1b8f94;
        case 0x1b8f98u: goto label_1b8f98;
        case 0x1b8f9cu: goto label_1b8f9c;
        case 0x1b8fa0u: goto label_1b8fa0;
        case 0x1b8fa4u: goto label_1b8fa4;
        case 0x1b8fa8u: goto label_1b8fa8;
        case 0x1b8facu: goto label_1b8fac;
        case 0x1b8fb0u: goto label_1b8fb0;
        case 0x1b8fb4u: goto label_1b8fb4;
        case 0x1b8fb8u: goto label_1b8fb8;
        case 0x1b8fbcu: goto label_1b8fbc;
        case 0x1b8fc0u: goto label_1b8fc0;
        case 0x1b8fc4u: goto label_1b8fc4;
        case 0x1b8fc8u: goto label_1b8fc8;
        case 0x1b8fccu: goto label_1b8fcc;
        case 0x1b8fd0u: goto label_1b8fd0;
        case 0x1b8fd4u: goto label_1b8fd4;
        case 0x1b8fd8u: goto label_1b8fd8;
        case 0x1b8fdcu: goto label_1b8fdc;
        case 0x1b8fe0u: goto label_1b8fe0;
        case 0x1b8fe4u: goto label_1b8fe4;
        case 0x1b8fe8u: goto label_1b8fe8;
        case 0x1b8fecu: goto label_1b8fec;
        case 0x1b8ff0u: goto label_1b8ff0;
        case 0x1b8ff4u: goto label_1b8ff4;
        case 0x1b8ff8u: goto label_1b8ff8;
        case 0x1b8ffcu: goto label_1b8ffc;
        case 0x1b9000u: goto label_1b9000;
        case 0x1b9004u: goto label_1b9004;
        case 0x1b9008u: goto label_1b9008;
        case 0x1b900cu: goto label_1b900c;
        case 0x1b9010u: goto label_1b9010;
        case 0x1b9014u: goto label_1b9014;
        case 0x1b9018u: goto label_1b9018;
        case 0x1b901cu: goto label_1b901c;
        case 0x1b9020u: goto label_1b9020;
        case 0x1b9024u: goto label_1b9024;
        case 0x1b9028u: goto label_1b9028;
        case 0x1b902cu: goto label_1b902c;
        case 0x1b9030u: goto label_1b9030;
        case 0x1b9034u: goto label_1b9034;
        case 0x1b9038u: goto label_1b9038;
        case 0x1b903cu: goto label_1b903c;
        case 0x1b9040u: goto label_1b9040;
        case 0x1b9044u: goto label_1b9044;
        case 0x1b9048u: goto label_1b9048;
        case 0x1b904cu: goto label_1b904c;
        case 0x1b9050u: goto label_1b9050;
        case 0x1b9054u: goto label_1b9054;
        case 0x1b9058u: goto label_1b9058;
        case 0x1b905cu: goto label_1b905c;
        case 0x1b9060u: goto label_1b9060;
        case 0x1b9064u: goto label_1b9064;
        case 0x1b9068u: goto label_1b9068;
        case 0x1b906cu: goto label_1b906c;
        case 0x1b9070u: goto label_1b9070;
        case 0x1b9074u: goto label_1b9074;
        case 0x1b9078u: goto label_1b9078;
        case 0x1b907cu: goto label_1b907c;
        case 0x1b9080u: goto label_1b9080;
        case 0x1b9084u: goto label_1b9084;
        case 0x1b9088u: goto label_1b9088;
        case 0x1b908cu: goto label_1b908c;
        case 0x1b9090u: goto label_1b9090;
        case 0x1b9094u: goto label_1b9094;
        case 0x1b9098u: goto label_1b9098;
        case 0x1b909cu: goto label_1b909c;
        case 0x1b90a0u: goto label_1b90a0;
        case 0x1b90a4u: goto label_1b90a4;
        case 0x1b90a8u: goto label_1b90a8;
        case 0x1b90acu: goto label_1b90ac;
        case 0x1b90b0u: goto label_1b90b0;
        case 0x1b90b4u: goto label_1b90b4;
        case 0x1b90b8u: goto label_1b90b8;
        case 0x1b90bcu: goto label_1b90bc;
        case 0x1b90c0u: goto label_1b90c0;
        case 0x1b90c4u: goto label_1b90c4;
        case 0x1b90c8u: goto label_1b90c8;
        case 0x1b90ccu: goto label_1b90cc;
        case 0x1b90d0u: goto label_1b90d0;
        case 0x1b90d4u: goto label_1b90d4;
        case 0x1b90d8u: goto label_1b90d8;
        case 0x1b90dcu: goto label_1b90dc;
        case 0x1b90e0u: goto label_1b90e0;
        case 0x1b90e4u: goto label_1b90e4;
        case 0x1b90e8u: goto label_1b90e8;
        case 0x1b90ecu: goto label_1b90ec;
        case 0x1b90f0u: goto label_1b90f0;
        case 0x1b90f4u: goto label_1b90f4;
        case 0x1b90f8u: goto label_1b90f8;
        case 0x1b90fcu: goto label_1b90fc;
        case 0x1b9100u: goto label_1b9100;
        case 0x1b9104u: goto label_1b9104;
        case 0x1b9108u: goto label_1b9108;
        case 0x1b910cu: goto label_1b910c;
        case 0x1b9110u: goto label_1b9110;
        case 0x1b9114u: goto label_1b9114;
        case 0x1b9118u: goto label_1b9118;
        case 0x1b911cu: goto label_1b911c;
        case 0x1b9120u: goto label_1b9120;
        case 0x1b9124u: goto label_1b9124;
        case 0x1b9128u: goto label_1b9128;
        case 0x1b912cu: goto label_1b912c;
        case 0x1b9130u: goto label_1b9130;
        case 0x1b9134u: goto label_1b9134;
        case 0x1b9138u: goto label_1b9138;
        case 0x1b913cu: goto label_1b913c;
        case 0x1b9140u: goto label_1b9140;
        case 0x1b9144u: goto label_1b9144;
        case 0x1b9148u: goto label_1b9148;
        case 0x1b914cu: goto label_1b914c;
        case 0x1b9150u: goto label_1b9150;
        case 0x1b9154u: goto label_1b9154;
        case 0x1b9158u: goto label_1b9158;
        case 0x1b915cu: goto label_1b915c;
        case 0x1b9160u: goto label_1b9160;
        case 0x1b9164u: goto label_1b9164;
        case 0x1b9168u: goto label_1b9168;
        case 0x1b916cu: goto label_1b916c;
        case 0x1b9170u: goto label_1b9170;
        case 0x1b9174u: goto label_1b9174;
        case 0x1b9178u: goto label_1b9178;
        case 0x1b917cu: goto label_1b917c;
        case 0x1b9180u: goto label_1b9180;
        case 0x1b9184u: goto label_1b9184;
        case 0x1b9188u: goto label_1b9188;
        case 0x1b918cu: goto label_1b918c;
        case 0x1b9190u: goto label_1b9190;
        case 0x1b9194u: goto label_1b9194;
        case 0x1b9198u: goto label_1b9198;
        case 0x1b919cu: goto label_1b919c;
        case 0x1b91a0u: goto label_1b91a0;
        case 0x1b91a4u: goto label_1b91a4;
        case 0x1b91a8u: goto label_1b91a8;
        case 0x1b91acu: goto label_1b91ac;
        case 0x1b91b0u: goto label_1b91b0;
        case 0x1b91b4u: goto label_1b91b4;
        case 0x1b91b8u: goto label_1b91b8;
        case 0x1b91bcu: goto label_1b91bc;
        case 0x1b91c0u: goto label_1b91c0;
        case 0x1b91c4u: goto label_1b91c4;
        case 0x1b91c8u: goto label_1b91c8;
        case 0x1b91ccu: goto label_1b91cc;
        case 0x1b91d0u: goto label_1b91d0;
        case 0x1b91d4u: goto label_1b91d4;
        case 0x1b91d8u: goto label_1b91d8;
        case 0x1b91dcu: goto label_1b91dc;
        case 0x1b91e0u: goto label_1b91e0;
        case 0x1b91e4u: goto label_1b91e4;
        case 0x1b91e8u: goto label_1b91e8;
        case 0x1b91ecu: goto label_1b91ec;
        case 0x1b91f0u: goto label_1b91f0;
        case 0x1b91f4u: goto label_1b91f4;
        case 0x1b91f8u: goto label_1b91f8;
        case 0x1b91fcu: goto label_1b91fc;
        case 0x1b9200u: goto label_1b9200;
        case 0x1b9204u: goto label_1b9204;
        case 0x1b9208u: goto label_1b9208;
        case 0x1b920cu: goto label_1b920c;
        case 0x1b9210u: goto label_1b9210;
        case 0x1b9214u: goto label_1b9214;
        case 0x1b9218u: goto label_1b9218;
        case 0x1b921cu: goto label_1b921c;
        case 0x1b9220u: goto label_1b9220;
        case 0x1b9224u: goto label_1b9224;
        case 0x1b9228u: goto label_1b9228;
        case 0x1b922cu: goto label_1b922c;
        case 0x1b9230u: goto label_1b9230;
        case 0x1b9234u: goto label_1b9234;
        case 0x1b9238u: goto label_1b9238;
        case 0x1b923cu: goto label_1b923c;
        case 0x1b9240u: goto label_1b9240;
        case 0x1b9244u: goto label_1b9244;
        case 0x1b9248u: goto label_1b9248;
        case 0x1b924cu: goto label_1b924c;
        case 0x1b9250u: goto label_1b9250;
        case 0x1b9254u: goto label_1b9254;
        case 0x1b9258u: goto label_1b9258;
        case 0x1b925cu: goto label_1b925c;
        case 0x1b9260u: goto label_1b9260;
        case 0x1b9264u: goto label_1b9264;
        case 0x1b9268u: goto label_1b9268;
        case 0x1b926cu: goto label_1b926c;
        case 0x1b9270u: goto label_1b9270;
        case 0x1b9274u: goto label_1b9274;
        case 0x1b9278u: goto label_1b9278;
        case 0x1b927cu: goto label_1b927c;
        case 0x1b9280u: goto label_1b9280;
        case 0x1b9284u: goto label_1b9284;
        case 0x1b9288u: goto label_1b9288;
        case 0x1b928cu: goto label_1b928c;
        case 0x1b9290u: goto label_1b9290;
        case 0x1b9294u: goto label_1b9294;
        case 0x1b9298u: goto label_1b9298;
        case 0x1b929cu: goto label_1b929c;
        case 0x1b92a0u: goto label_1b92a0;
        case 0x1b92a4u: goto label_1b92a4;
        case 0x1b92a8u: goto label_1b92a8;
        case 0x1b92acu: goto label_1b92ac;
        case 0x1b92b0u: goto label_1b92b0;
        case 0x1b92b4u: goto label_1b92b4;
        case 0x1b92b8u: goto label_1b92b8;
        case 0x1b92bcu: goto label_1b92bc;
        case 0x1b92c0u: goto label_1b92c0;
        case 0x1b92c4u: goto label_1b92c4;
        case 0x1b92c8u: goto label_1b92c8;
        case 0x1b92ccu: goto label_1b92cc;
        case 0x1b92d0u: goto label_1b92d0;
        case 0x1b92d4u: goto label_1b92d4;
        case 0x1b92d8u: goto label_1b92d8;
        case 0x1b92dcu: goto label_1b92dc;
        case 0x1b92e0u: goto label_1b92e0;
        case 0x1b92e4u: goto label_1b92e4;
        case 0x1b92e8u: goto label_1b92e8;
        case 0x1b92ecu: goto label_1b92ec;
        case 0x1b92f0u: goto label_1b92f0;
        case 0x1b92f4u: goto label_1b92f4;
        case 0x1b92f8u: goto label_1b92f8;
        case 0x1b92fcu: goto label_1b92fc;
        case 0x1b9300u: goto label_1b9300;
        case 0x1b9304u: goto label_1b9304;
        case 0x1b9308u: goto label_1b9308;
        case 0x1b930cu: goto label_1b930c;
        case 0x1b9310u: goto label_1b9310;
        case 0x1b9314u: goto label_1b9314;
        case 0x1b9318u: goto label_1b9318;
        case 0x1b931cu: goto label_1b931c;
        case 0x1b9320u: goto label_1b9320;
        case 0x1b9324u: goto label_1b9324;
        case 0x1b9328u: goto label_1b9328;
        case 0x1b932cu: goto label_1b932c;
        case 0x1b9330u: goto label_1b9330;
        case 0x1b9334u: goto label_1b9334;
        case 0x1b9338u: goto label_1b9338;
        case 0x1b933cu: goto label_1b933c;
        case 0x1b9340u: goto label_1b9340;
        case 0x1b9344u: goto label_1b9344;
        case 0x1b9348u: goto label_1b9348;
        case 0x1b934cu: goto label_1b934c;
        case 0x1b9350u: goto label_1b9350;
        case 0x1b9354u: goto label_1b9354;
        case 0x1b9358u: goto label_1b9358;
        case 0x1b935cu: goto label_1b935c;
        case 0x1b9360u: goto label_1b9360;
        case 0x1b9364u: goto label_1b9364;
        case 0x1b9368u: goto label_1b9368;
        case 0x1b936cu: goto label_1b936c;
        case 0x1b9370u: goto label_1b9370;
        case 0x1b9374u: goto label_1b9374;
        case 0x1b9378u: goto label_1b9378;
        case 0x1b937cu: goto label_1b937c;
        case 0x1b9380u: goto label_1b9380;
        case 0x1b9384u: goto label_1b9384;
        case 0x1b9388u: goto label_1b9388;
        case 0x1b938cu: goto label_1b938c;
        case 0x1b9390u: goto label_1b9390;
        case 0x1b9394u: goto label_1b9394;
        case 0x1b9398u: goto label_1b9398;
        case 0x1b939cu: goto label_1b939c;
        case 0x1b93a0u: goto label_1b93a0;
        case 0x1b93a4u: goto label_1b93a4;
        case 0x1b93a8u: goto label_1b93a8;
        case 0x1b93acu: goto label_1b93ac;
        case 0x1b93b0u: goto label_1b93b0;
        case 0x1b93b4u: goto label_1b93b4;
        case 0x1b93b8u: goto label_1b93b8;
        case 0x1b93bcu: goto label_1b93bc;
        case 0x1b93c0u: goto label_1b93c0;
        case 0x1b93c4u: goto label_1b93c4;
        case 0x1b93c8u: goto label_1b93c8;
        case 0x1b93ccu: goto label_1b93cc;
        case 0x1b93d0u: goto label_1b93d0;
        case 0x1b93d4u: goto label_1b93d4;
        case 0x1b93d8u: goto label_1b93d8;
        case 0x1b93dcu: goto label_1b93dc;
        case 0x1b93e0u: goto label_1b93e0;
        case 0x1b93e4u: goto label_1b93e4;
        case 0x1b93e8u: goto label_1b93e8;
        case 0x1b93ecu: goto label_1b93ec;
        case 0x1b93f0u: goto label_1b93f0;
        case 0x1b93f4u: goto label_1b93f4;
        case 0x1b93f8u: goto label_1b93f8;
        case 0x1b93fcu: goto label_1b93fc;
        case 0x1b9400u: goto label_1b9400;
        case 0x1b9404u: goto label_1b9404;
        case 0x1b9408u: goto label_1b9408;
        case 0x1b940cu: goto label_1b940c;
        case 0x1b9410u: goto label_1b9410;
        case 0x1b9414u: goto label_1b9414;
        case 0x1b9418u: goto label_1b9418;
        case 0x1b941cu: goto label_1b941c;
        case 0x1b9420u: goto label_1b9420;
        case 0x1b9424u: goto label_1b9424;
        case 0x1b9428u: goto label_1b9428;
        case 0x1b942cu: goto label_1b942c;
        case 0x1b9430u: goto label_1b9430;
        case 0x1b9434u: goto label_1b9434;
        case 0x1b9438u: goto label_1b9438;
        case 0x1b943cu: goto label_1b943c;
        case 0x1b9440u: goto label_1b9440;
        case 0x1b9444u: goto label_1b9444;
        case 0x1b9448u: goto label_1b9448;
        case 0x1b944cu: goto label_1b944c;
        case 0x1b9450u: goto label_1b9450;
        case 0x1b9454u: goto label_1b9454;
        case 0x1b9458u: goto label_1b9458;
        case 0x1b945cu: goto label_1b945c;
        case 0x1b9460u: goto label_1b9460;
        case 0x1b9464u: goto label_1b9464;
        case 0x1b9468u: goto label_1b9468;
        case 0x1b946cu: goto label_1b946c;
        case 0x1b9470u: goto label_1b9470;
        case 0x1b9474u: goto label_1b9474;
        case 0x1b9478u: goto label_1b9478;
        case 0x1b947cu: goto label_1b947c;
        case 0x1b9480u: goto label_1b9480;
        case 0x1b9484u: goto label_1b9484;
        case 0x1b9488u: goto label_1b9488;
        case 0x1b948cu: goto label_1b948c;
        case 0x1b9490u: goto label_1b9490;
        case 0x1b9494u: goto label_1b9494;
        case 0x1b9498u: goto label_1b9498;
        case 0x1b949cu: goto label_1b949c;
        case 0x1b94a0u: goto label_1b94a0;
        case 0x1b94a4u: goto label_1b94a4;
        case 0x1b94a8u: goto label_1b94a8;
        case 0x1b94acu: goto label_1b94ac;
        case 0x1b94b0u: goto label_1b94b0;
        case 0x1b94b4u: goto label_1b94b4;
        case 0x1b94b8u: goto label_1b94b8;
        case 0x1b94bcu: goto label_1b94bc;
        case 0x1b94c0u: goto label_1b94c0;
        case 0x1b94c4u: goto label_1b94c4;
        case 0x1b94c8u: goto label_1b94c8;
        case 0x1b94ccu: goto label_1b94cc;
        case 0x1b94d0u: goto label_1b94d0;
        case 0x1b94d4u: goto label_1b94d4;
        case 0x1b94d8u: goto label_1b94d8;
        case 0x1b94dcu: goto label_1b94dc;
        case 0x1b94e0u: goto label_1b94e0;
        case 0x1b94e4u: goto label_1b94e4;
        case 0x1b94e8u: goto label_1b94e8;
        case 0x1b94ecu: goto label_1b94ec;
        case 0x1b94f0u: goto label_1b94f0;
        case 0x1b94f4u: goto label_1b94f4;
        case 0x1b94f8u: goto label_1b94f8;
        case 0x1b94fcu: goto label_1b94fc;
        default: return;
    }

label_1b8d30:
    // 0x1b8d30: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1b8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1b8d34:
    // 0x1b8d34: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
label_1b8d38:
    if (ctx->pc == 0x1B8D38u) {
        ctx->pc = 0x1B8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D34u;
        // 0x1b8d38: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D3Cu;
        goto label_1b8d3c;
    }
    ctx->pc = 0x1B8D34u;
    {
        const bool branch_taken_0x1b8d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D34u;
        // 0x1b8d38: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d34) {
            ctx->pc = 0x1B8BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1b8bc8; return; }
        }
    }
    ctx->pc = 0x1B8D3Cu;
label_1b8d3c:
    // 0x1b8d3c: 0x0  nop
    ctx->pc = 0x1b8d3cu;
    // NOP
label_1b8d40:
    // 0x1b8d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8d44:
    // 0x1b8d44: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
label_1b8d48:
    if (ctx->pc == 0x1B8D48u) {
        ctx->pc = 0x1B8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D44u;
        // 0x1b8d48: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D4Cu;
        goto label_1b8d4c;
    }
    ctx->pc = 0x1B8D44u;
    {
        const bool branch_taken_0x1b8d44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D44u;
        // 0x1b8d48: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d44) {
            ctx->pc = 0x1B8D54u;
            goto label_1b8d54;
        }
    }
    ctx->pc = 0x1B8D4Cu;
label_1b8d4c:
    // 0x1b8d4c: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
label_1b8d50:
    if (ctx->pc == 0x1B8D50u) {
        ctx->pc = 0x1B8D54u;
        goto label_1b8d54;
    }
    ctx->pc = 0x1B8D4Cu;
    {
        const bool branch_taken_0x1b8d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d4c) {
            ctx->pc = 0x1B8B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1b8b98; return; }
        }
    }
    ctx->pc = 0x1B8D54u;
label_1b8d54:
    // 0x1b8d54: 0x0  nop
    ctx->pc = 0x1b8d54u;
    // NOP
label_1b8d58:
    // 0x1b8d58: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_1b8d5c:
    if (ctx->pc == 0x1B8D5Cu) {
        ctx->pc = 0x1B8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D58u;
        // 0x1b8d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D60u;
        goto label_1b8d60;
    }
    ctx->pc = 0x1B8D58u;
    {
        const bool branch_taken_0x1b8d58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D58u;
        // 0x1b8d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d58) {
            ctx->pc = 0x1B8D94u;
            goto label_1b8d94;
        }
    }
    ctx->pc = 0x1B8D60u;
label_1b8d60:
    // 0x1b8d60: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8d64:
    // 0x1b8d64: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1b8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1b8d68:
    // 0x1b8d68: 0x90233534  lbu         $v1, 0x3534($at)
    ctx->pc = 0x1b8d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 13620)));
label_1b8d6c:
    // 0x1b8d6c: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1b8d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_1b8d70:
    // 0x1b8d70: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8d74:
    // 0x1b8d74: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1b8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1b8d78:
    // 0x1b8d78: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b8d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b8d7c:
    // 0x1b8d7c: 0x90233535  lbu         $v1, 0x3535($at)
    ctx->pc = 0x1b8d7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 13621)));
label_1b8d80:
    // 0x1b8d80: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1b8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1b8d84:
    // 0x1b8d84: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x1b8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_1b8d88:
    // 0x1b8d88: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1b8d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_1b8d8c:
    // 0x1b8d8c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1b8d90:
    if (ctx->pc == 0x1B8D90u) {
        ctx->pc = 0x1B8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D8Cu;
        // 0x1b8d90: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D94u;
        goto label_1b8d94;
    }
    ctx->pc = 0x1B8D8Cu;
    {
        const bool branch_taken_0x1b8d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D8Cu;
        // 0x1b8d90: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d8c) {
            ctx->pc = 0x1B8DF4u;
            goto label_1b8df4;
        }
    }
    ctx->pc = 0x1B8D94u;
label_1b8d94:
    // 0x1b8d94: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
label_1b8d98:
    if (ctx->pc == 0x1B8D98u) {
        ctx->pc = 0x1B8D9Cu;
        goto label_1b8d9c;
    }
    ctx->pc = 0x1B8D94u;
    {
        const bool branch_taken_0x1b8d94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8d94) {
            ctx->pc = 0x1B8DDCu;
            goto label_1b8ddc;
        }
    }
    ctx->pc = 0x1B8D9Cu;
label_1b8d9c:
    // 0x1b8d9c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1b8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b8da0:
    // 0x1b8da0: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x1b8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1b8da4:
    // 0x1b8da4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1b8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1b8da8:
    // 0x1b8da8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8dac:
    // 0x1b8dac: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1b8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_1b8db0:
    // 0x1b8db0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b8db0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b8db4:
    // 0x1b8db4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8db8:
    // 0x1b8db8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1b8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1b8dbc:
    // 0x1b8dbc: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x1b8dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_1b8dc0:
    // 0x1b8dc0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1b8dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b8dc4:
    // 0x1b8dc4: 0x90233524  lbu         $v1, 0x3524($at)
    ctx->pc = 0x1b8dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 13604)));
label_1b8dc8:
    // 0x1b8dc8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8dcc:
    // 0x1b8dcc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1b8dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1b8dd0:
    // 0x1b8dd0: 0x90223525  lbu         $v0, 0x3525($at)
    ctx->pc = 0x1b8dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 13605)));
label_1b8dd4:
    // 0x1b8dd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b8dd8:
    if (ctx->pc == 0x1B8DD8u) {
        ctx->pc = 0x1B8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DD4u;
        // 0x1b8dd8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DDCu;
        goto label_1b8ddc;
    }
    ctx->pc = 0x1B8DD4u;
    {
        const bool branch_taken_0x1b8dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DD4u;
        // 0x1b8dd8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dd4) {
            ctx->pc = 0x1B8DF4u;
            goto label_1b8df4;
        }
    }
    ctx->pc = 0x1B8DDCu;
label_1b8ddc:
    // 0x1b8ddc: 0x83a300c0  lb          $v1, 0xC0($sp)
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_1b8de0:
    // 0x1b8de0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1b8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1b8de4:
    // 0x1b8de4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b8de4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1b8de8:
    // 0x1b8de8: 0x83a300c4  lb          $v1, 0xC4($sp)
    ctx->pc = 0x1b8de8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 196)));
label_1b8dec:
    // 0x1b8dec: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1b8decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1b8df0:
    // 0x1b8df0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1b8df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b8df4:
    // 0x1b8df4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1b8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1b8df8:
    // 0x1b8df8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1b8dfc:
    if (ctx->pc == 0x1B8DFCu) {
        ctx->pc = 0x1B8E00u;
        goto label_1b8e00;
    }
    ctx->pc = 0x1B8DF8u;
    {
        const bool branch_taken_0x1b8df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8df8) {
            ctx->pc = 0x1B8E4Cu;
            goto label_1b8e4c;
        }
    }
    ctx->pc = 0x1B8E00u;
label_1b8e00:
    // 0x1b8e00: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1b8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b8e04:
    // 0x1b8e04: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x1b8e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1b8e08:
    // 0x1b8e08: 0x14860005  bne         $a0, $a2, . + 4 + (0x5 << 2)
label_1b8e0c:
    if (ctx->pc == 0x1B8E0Cu) {
        ctx->pc = 0x1B8E10u;
        goto label_1b8e10;
    }
    ctx->pc = 0x1B8E08u;
    {
        const bool branch_taken_0x1b8e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x1b8e08) {
            ctx->pc = 0x1B8E20u;
            goto label_1b8e20;
        }
    }
    ctx->pc = 0x1B8E10u;
label_1b8e10:
    // 0x1b8e10: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1b8e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1b8e14:
    // 0x1b8e14: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x1b8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1b8e18:
    // 0x1b8e18: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1b8e1c:
    if (ctx->pc == 0x1B8E1Cu) {
        ctx->pc = 0x1B8E20u;
        goto label_1b8e20;
    }
    ctx->pc = 0x1B8E18u;
    {
        const bool branch_taken_0x1b8e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b8e18) {
            ctx->pc = 0x1B8E4Cu;
            goto label_1b8e4c;
        }
    }
    ctx->pc = 0x1B8E20u;
label_1b8e20:
    // 0x1b8e20: 0x83a200c4  lb          $v0, 0xC4($sp)
    ctx->pc = 0x1b8e20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 196)));
label_1b8e24:
    // 0x1b8e24: 0x27a500ee  addiu       $a1, $sp, 0xEE
    ctx->pc = 0x1b8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 238));
label_1b8e28:
    // 0x1b8e28: 0xa3a400ec  sb          $a0, 0xEC($sp)
    ctx->pc = 0x1b8e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 236), (uint8_t)GPR_U32(ctx, 4));
label_1b8e2c:
    // 0x1b8e2c: 0x27a400ec  addiu       $a0, $sp, 0xEC
    ctx->pc = 0x1b8e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_1b8e30:
    // 0x1b8e30: 0xa3a200ed  sb          $v0, 0xED($sp)
    ctx->pc = 0x1b8e30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 237), (uint8_t)GPR_U32(ctx, 2));
label_1b8e34:
    // 0x1b8e34: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x1b8e34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
label_1b8e38:
    // 0x1b8e38: 0x83a200cc  lb          $v0, 0xCC($sp)
    ctx->pc = 0x1b8e38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 204)));
label_1b8e3c:
    // 0x1b8e3c: 0xc06e5f8  jal         func_1B97E0
label_1b8e40:
    if (ctx->pc == 0x1B8E40u) {
        ctx->pc = 0x1B8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E3Cu;
        // 0x1b8e40: 0xa3a200ef  sb          $v0, 0xEF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E44u;
        goto label_1b8e44;
    }
    ctx->pc = 0x1B8E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E44u);
    ctx->pc = 0x1B8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E3Cu;
    // 0x1b8e40: 0xa3a200ef  sb          $v0, 0xEF($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B97E0u;
    { ctx->pc = 0x1b97e0; return; }
    ctx->pc = 0x1B8E44u;
label_1b8e44:
    // 0x1b8e44: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1b8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1b8e48:
    // 0x1b8e48: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1b8e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b8e4c:
    // 0x1b8e4c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1b8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_1b8e50:
    // 0x1b8e50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b8e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b8e54:
    // 0x1b8e54: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b8e54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b8e58:
    // 0x1b8e58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b8e58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b8e5c:
    // 0x1b8e5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b8e5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b8e60:
    // 0x1b8e60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b8e60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b8e64:
    // 0x1b8e64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b8e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8e68:
    // 0x1b8e68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b8e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8e6c:
    // 0x1b8e6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b8e6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8e70:
    // 0x1b8e70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8e74:
    // 0x1b8e74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8e78:
    // 0x1b8e78: 0x3e00008  jr          $ra
label_1b8e7c:
    if (ctx->pc == 0x1B8E7Cu) {
        ctx->pc = 0x1B8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E78u;
        // 0x1b8e7c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E80u;
        goto label_1b8e80;
    }
    ctx->pc = 0x1B8E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E78u;
        // 0x1b8e7c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8E80u;
label_1b8e80:
    // 0x1b8e80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b8e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b8e84:
    // 0x1b8e84: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1b8e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_1b8e88:
    // 0x1b8e88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b8e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b8e8c:
    // 0x1b8e8c: 0x24e73520  addiu       $a3, $a3, 0x3520
    ctx->pc = 0x1b8e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13600));
label_1b8e90:
    // 0x1b8e90: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b8e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1b8e94:
    // 0x1b8e94: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1b8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b8e98:
    // 0x1b8e98: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b8e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b8e9c:
    // 0x1b8e9c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1b8e9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8ea0:
    // 0x1b8ea0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b8ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b8ea4:
    // 0x1b8ea4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1b8ea4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ea8:
    // 0x1b8ea8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b8ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b8eac:
    // 0x1b8eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8eb0:
    // 0x1b8eb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b8eb4:
    // 0x1b8eb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b8eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b8eb8:
    // 0x1b8eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b8ebc:
    // 0x1b8ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8ec0:
    // 0x1b8ec0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b8ec4:
    if (ctx->pc == 0x1B8EC4u) {
        ctx->pc = 0x1B8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EC0u;
        // 0x1b8ec4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EC8u;
        goto label_1b8ec8;
    }
    ctx->pc = 0x1B8EC0u;
    {
        const bool branch_taken_0x1b8ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EC0u;
        // 0x1b8ec4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ec0) {
            ctx->pc = 0x1B8EDCu;
            goto label_1b8edc;
        }
    }
    ctx->pc = 0x1B8EC8u;
label_1b8ec8:
    // 0x1b8ec8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1b8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1b8ecc:
    // 0x1b8ecc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b8eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b8ed0:
    // 0x1b8ed0: 0xa0e00006  sb          $zero, 0x6($a3)
    ctx->pc = 0x1b8ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
label_1b8ed4:
    // 0x1b8ed4: 0xa0e00007  sb          $zero, 0x7($a3)
    ctx->pc = 0x1b8ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 0));
label_1b8ed8:
    // 0x1b8ed8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1b8ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1b8edc:
    // 0x1b8edc: 0x0  nop
    ctx->pc = 0x1b8edcu;
    // NOP
label_1b8ee0:
    // 0x1b8ee0: 0x8f8288e0  lw          $v0, -0x7720($gp)
    ctx->pc = 0x1b8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b8ee4:
    // 0x1b8ee4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1b8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1b8ee8:
    // 0x1b8ee8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1b8ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b8eec:
    // 0x1b8eec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1b8ef0:
    if (ctx->pc == 0x1B8EF0u) {
        ctx->pc = 0x1B8EF4u;
        goto label_1b8ef4;
    }
    ctx->pc = 0x1B8EECu;
    {
        const bool branch_taken_0x1b8eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8eec) {
            ctx->pc = 0x1B8EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8ec8;
        }
    }
    ctx->pc = 0x1B8EF4u;
label_1b8ef4:
    // 0x1b8ef4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1b8ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8ef8:
    // 0x1b8ef8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8efc:
    // 0x1b8efc: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x1b8efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_1b8f00:
    // 0x1b8f00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b8f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b8f04:
    // 0x1b8f04: 0xa0233524  sb          $v1, 0x3524($at)
    ctx->pc = 0x1b8f04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 13604), (uint8_t)GPR_U32(ctx, 3));
label_1b8f08:
    // 0x1b8f08: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x1b8f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1b8f0c:
    // 0x1b8f0c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8f10:
    // 0x1b8f10: 0xa0233525  sb          $v1, 0x3525($at)
    ctx->pc = 0x1b8f10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 13605), (uint8_t)GPR_U32(ctx, 3));
label_1b8f14:
    // 0x1b8f14: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1b8f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1b8f18:
    // 0x1b8f18: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8f1c:
    // 0x1b8f1c: 0xa0233534  sb          $v1, 0x3534($at)
    ctx->pc = 0x1b8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 13620), (uint8_t)GPR_U32(ctx, 3));
label_1b8f20:
    // 0x1b8f20: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1b8f20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1b8f24:
    // 0x1b8f24: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8f28:
    // 0x1b8f28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b8f2c:
    if (ctx->pc == 0x1B8F2Cu) {
        ctx->pc = 0x1B8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F28u;
        // 0x1b8f2c: 0xa0233535  sb          $v1, 0x3535($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 13621), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F30u;
        goto label_1b8f30;
    }
    ctx->pc = 0x1B8F28u;
    {
        const bool branch_taken_0x1b8f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F28u;
        // 0x1b8f2c: 0xa0233535  sb          $v1, 0x3535($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 13621), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f28) {
            ctx->pc = 0x1B8F3Cu;
            goto label_1b8f3c;
        }
    }
    ctx->pc = 0x1B8F30u;
label_1b8f30:
    // 0x1b8f30: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x1b8f30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
label_1b8f34:
    // 0x1b8f34: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b8f38:
    if (ctx->pc == 0x1B8F38u) {
        ctx->pc = 0x1B8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F34u;
        // 0x1b8f38: 0x261029b0  addiu       $s0, $s0, 0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F3Cu;
        goto label_1b8f3c;
    }
    ctx->pc = 0x1B8F34u;
    {
        const bool branch_taken_0x1b8f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F34u;
        // 0x1b8f38: 0x261029b0  addiu       $s0, $s0, 0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f34) {
            ctx->pc = 0x1B8F44u;
            goto label_1b8f44;
        }
    }
    ctx->pc = 0x1B8F3Cu;
label_1b8f3c:
    // 0x1b8f3c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x1b8f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
label_1b8f40:
    // 0x1b8f40: 0x26101e40  addiu       $s0, $s0, 0x1E40
    ctx->pc = 0x1b8f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7744));
label_1b8f44:
    // 0x1b8f44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b8f44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f48:
    // 0x1b8f48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b8f48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f4c:
    // 0x1b8f4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b8f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f50:
    // 0x1b8f50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b8f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f54:
    // 0x1b8f54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b8f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f58:
    // 0x1b8f58: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b8f5c:
    if (ctx->pc == 0x1B8F5Cu) {
        ctx->pc = 0x1B8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F58u;
        // 0x1b8f5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F60u;
        goto label_1b8f60;
    }
    ctx->pc = 0x1B8F58u;
    {
        const bool branch_taken_0x1b8f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F58u;
        // 0x1b8f5c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f58) {
            ctx->pc = 0x1B8FB4u;
            goto label_1b8fb4;
        }
    }
    ctx->pc = 0x1B8F60u;
label_1b8f60:
    // 0x1b8f60: 0x0  nop
    ctx->pc = 0x1b8f60u;
    // NOP
label_1b8f64:
    // 0x1b8f64: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x1b8f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_1b8f68:
    // 0x1b8f68: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1b8f6c:
    if (ctx->pc == 0x1B8F6Cu) {
        ctx->pc = 0x1B8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F68u;
        // 0x1b8f6c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F70u;
        goto label_1b8f70;
    }
    ctx->pc = 0x1B8F68u;
    {
        const bool branch_taken_0x1b8f68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F68u;
        // 0x1b8f6c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8f68) {
            ctx->pc = 0x1B8FA4u;
            goto label_1b8fa4;
        }
    }
    ctx->pc = 0x1B8F70u;
label_1b8f70:
    // 0x1b8f70: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1b8f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b8f74:
    // 0x1b8f74: 0x24423520  addiu       $v0, $v0, 0x3520
    ctx->pc = 0x1b8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
label_1b8f78:
    // 0x1b8f78: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x1b8f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1b8f7c:
    // 0x1b8f7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1b8f80:
    // 0x1b8f80: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1b8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1b8f84:
    // 0x1b8f84: 0xc06e4d0  jal         func_1B9340
label_1b8f88:
    if (ctx->pc == 0x1B8F88u) {
        ctx->pc = 0x1B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8F84u;
        // 0x1b8f88: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8F8Cu;
        goto label_1b8f8c;
    }
    ctx->pc = 0x1B8F84u;
    SET_GPR_U32(ctx, 31, 0x1B8F8Cu);
    ctx->pc = 0x1B8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8F84u;
    // 0x1b8f88: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9340u;
    goto label_1b9340;
    ctx->pc = 0x1B8F8Cu;
label_1b8f8c:
    // 0x1b8f8c: 0x2152021  addu        $a0, $s0, $s5
    ctx->pc = 0x1b8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_1b8f90:
    // 0x1b8f90: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x1b8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1b8f94:
    // 0x1b8f94: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1b8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1b8f98:
    // 0x1b8f98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1b8f9c:
    // 0x1b8f9c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1b8f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b8fa0:
    // 0x1b8fa0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1b8fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b8fa4:
    // 0x1b8fa4: 0x0  nop
    ctx->pc = 0x1b8fa4u;
    // NOP
label_1b8fa8:
    // 0x1b8fa8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1b8fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b8fac:
    // 0x1b8fac: 0x26730036  addiu       $s3, $s3, 0x36
    ctx->pc = 0x1b8facu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 54));
label_1b8fb0:
    // 0x1b8fb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b8fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b8fb4:
    // 0x1b8fb4: 0x0  nop
    ctx->pc = 0x1b8fb4u;
    // NOP
label_1b8fb8:
    // 0x1b8fb8: 0x8f8288e0  lw          $v0, -0x7720($gp)
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b8fbc:
    // 0x1b8fbc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1b8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1b8fc0:
    // 0x1b8fc0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b8fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b8fc4:
    // 0x1b8fc4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_1b8fc8:
    if (ctx->pc == 0x1B8FC8u) {
        ctx->pc = 0x1B8FCCu;
        goto label_1b8fcc;
    }
    ctx->pc = 0x1B8FC4u;
    {
        const bool branch_taken_0x1b8fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8fc4) {
            ctx->pc = 0x1B8F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8f60;
        }
    }
    ctx->pc = 0x1B8FCCu;
label_1b8fcc:
    // 0x1b8fcc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b8fccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1b8fd0:
    // 0x1b8fd0: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b8fd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1b8fd4:
    // 0x1b8fd4: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x1b8fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b8fd8:
    // 0x1b8fd8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1b8fdc:
    if (ctx->pc == 0x1B8FDCu) {
        ctx->pc = 0x1B8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FD8u;
        // 0x1b8fdc: 0x26940036  addiu       $s4, $s4, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8FE0u;
        goto label_1b8fe0;
    }
    ctx->pc = 0x1B8FD8u;
    {
        const bool branch_taken_0x1b8fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8FD8u;
        // 0x1b8fdc: 0x26940036  addiu       $s4, $s4, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8fd8) {
            ctx->pc = 0x1B8F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8f50;
        }
    }
    ctx->pc = 0x1B8FE0u;
label_1b8fe0:
    // 0x1b8fe0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b8fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b8fe4:
    // 0x1b8fe4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1b8fe4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8fe8:
    // 0x1b8fe8: 0xac203530  sw          $zero, 0x3530($at)
    ctx->pc = 0x1b8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13616), GPR_U32(ctx, 0));
label_1b8fec:
    // 0x1b8fec: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x1b8fecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
label_1b8ff0:
    // 0x1b8ff0: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x1b8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_1b8ff4:
    // 0x1b8ff4: 0x26943520  addiu       $s4, $s4, 0x3520
    ctx->pc = 0x1b8ff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 13600));
label_1b8ff8:
    // 0x1b8ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8ffc:
    // 0x1b8ffc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1b8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1b9000:
    // 0x1b9000: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x1b9000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b9004:
    // 0x1b9004: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1b9004u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b9008:
    // 0x1b9008: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x1b9008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 3));
label_1b900c:
    // 0x1b900c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1b9010:
    if (ctx->pc == 0x1B9010u) {
        ctx->pc = 0x1B9010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B900Cu;
        // 0x1b9010: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9014u;
        goto label_1b9014;
    }
    ctx->pc = 0x1B900Cu;
    {
        const bool branch_taken_0x1b900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B900Cu;
        // 0x1b9010: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b900c) {
            ctx->pc = 0x1B9108u;
            goto label_1b9108;
        }
    }
    ctx->pc = 0x1B9014u;
label_1b9014:
    // 0x1b9014: 0x0  nop
    ctx->pc = 0x1b9014u;
    // NOP
label_1b9018:
    // 0x1b9018: 0x0  nop
    ctx->pc = 0x1b9018u;
    // NOP
label_1b901c:
    // 0x1b901c: 0x92820006  lbu         $v0, 0x6($s4)
    ctx->pc = 0x1b901cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
label_1b9020:
    // 0x1b9020: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_1b9024:
    if (ctx->pc == 0x1B9024u) {
        ctx->pc = 0x1B9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9020u;
        // 0x1b9024: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9028u;
        goto label_1b9028;
    }
    ctx->pc = 0x1B9020u;
    {
        const bool branch_taken_0x1b9020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9020u;
        // 0x1b9024: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9020) {
            ctx->pc = 0x1B9100u;
            goto label_1b9100;
        }
    }
    ctx->pc = 0x1B9028u;
label_1b9028:
    // 0x1b9028: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1b9028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1b902c:
    // 0x1b902c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b902cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b9030:
    // 0x1b9030: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b9030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9034:
    // 0x1b9034: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b9034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b9038:
    // 0x1b9038: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b903c:
    // 0x1b903c: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x1b903cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1b9040:
    // 0x1b9040: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x1b9040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9044:
    // 0x1b9044: 0x288100ff  slti        $at, $a0, 0xFF
    ctx->pc = 0x1b9044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
label_1b9048:
    // 0x1b9048: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_1b904c:
    if (ctx->pc == 0x1B904Cu) {
        ctx->pc = 0x1B9050u;
        goto label_1b9050;
    }
    ctx->pc = 0x1B9048u;
    {
        const bool branch_taken_0x1b9048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9048) {
            ctx->pc = 0x1B90E4u;
            goto label_1b90e4;
        }
    }
    ctx->pc = 0x1B9050u;
label_1b9050:
    // 0x1b9050: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b9050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b9054:
    // 0x1b9054: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1b9054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1b9058:
    // 0x1b9058: 0x24423520  addiu       $v0, $v0, 0x3520
    ctx->pc = 0x1b9058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
label_1b905c:
    // 0x1b905c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1b905cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b9060:
    // 0x1b9060: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1b9060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9064:
    // 0x1b9064: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b9064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9068:
    // 0x1b9068: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1b9068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b906c:
    // 0x1b906c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1b906cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b9070:
    // 0x1b9070: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1b9074:
    if (ctx->pc == 0x1B9074u) {
        ctx->pc = 0x1B9078u;
        goto label_1b9078;
    }
    ctx->pc = 0x1B9070u;
    {
        const bool branch_taken_0x1b9070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9070) {
            ctx->pc = 0x1B90CCu;
            goto label_1b90cc;
        }
    }
    ctx->pc = 0x1B9078u;
label_1b9078:
    // 0x1b9078: 0x14a3001a  bne         $a1, $v1, . + 4 + (0x1A << 2)
label_1b907c:
    if (ctx->pc == 0x1B907Cu) {
        ctx->pc = 0x1B9080u;
        goto label_1b9080;
    }
    ctx->pc = 0x1B9078u;
    {
        const bool branch_taken_0x1b9078 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b9078) {
            ctx->pc = 0x1B90E4u;
            goto label_1b90e4;
        }
    }
    ctx->pc = 0x1B9080u;
label_1b9080:
    // 0x1b9080: 0xc08f0cc  jal         func_23C330
label_1b9084:
    if (ctx->pc == 0x1B9084u) {
        ctx->pc = 0x1B9088u;
        goto label_1b9088;
    }
    ctx->pc = 0x1B9080u;
    SET_GPR_U32(ctx, 31, 0x1B9088u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1B9088u;
label_1b9088:
    // 0x1b9088: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b9088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b908c:
    // 0x1b908c: 0x0  nop
    ctx->pc = 0x1b908cu;
    // NOP
label_1b9090:
    // 0x1b9090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b9090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b9094:
    // 0x1b9094: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b9094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b9098:
    // 0x1b9098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b909c:
    // 0x1b909c: 0x0  nop
    ctx->pc = 0x1b909cu;
    // NOP
label_1b90a0:
    // 0x1b90a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b90a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b90a4:
    // 0x1b90a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1b90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1b90a8:
    // 0x1b90a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b90a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b90ac:
    // 0x1b90ac: 0x0  nop
    ctx->pc = 0x1b90acu;
    // NOP
label_1b90b0:
    // 0x1b90b0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b90b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1b90b4:
    // 0x1b90b4: 0x0  nop
    ctx->pc = 0x1b90b4u;
    // NOP
label_1b90b8:
    // 0x1b90b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b90b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b90bc:
    // 0x1b90bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b90bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b90c0:
    // 0x1b90c0: 0x0  nop
    ctx->pc = 0x1b90c0u;
    // NOP
label_1b90c4:
    // 0x1b90c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b90c8:
    if (ctx->pc == 0x1B90C8u) {
        ctx->pc = 0x1B90CCu;
        goto label_1b90cc;
    }
    ctx->pc = 0x1B90C4u;
    {
        const bool branch_taken_0x1b90c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b90c4) {
            ctx->pc = 0x1B90E4u;
            goto label_1b90e4;
        }
    }
    ctx->pc = 0x1B90CCu;
label_1b90cc:
    // 0x1b90cc: 0x0  nop
    ctx->pc = 0x1b90ccu;
    // NOP
label_1b90d0:
    // 0x1b90d0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1b90d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1b90d4:
    // 0x1b90d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1b90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1b90d8:
    // 0x1b90d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b90dc:
    // 0x1b90dc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1b90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1b90e0:
    // 0x1b90e0: 0xa2910007  sb          $s1, 0x7($s4)
    ctx->pc = 0x1b90e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 7), (uint8_t)GPR_U32(ctx, 17));
label_1b90e4:
    // 0x1b90e4: 0x0  nop
    ctx->pc = 0x1b90e4u;
    // NOP
label_1b90e8:
    // 0x1b90e8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1b90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b90ec:
    // 0x1b90ec: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x1b90ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_1b90f0:
    // 0x1b90f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b90f4:
    if (ctx->pc == 0x1B90F4u) {
        ctx->pc = 0x1B90F8u;
        goto label_1b90f8;
    }
    ctx->pc = 0x1B90F0u;
    {
        const bool branch_taken_0x1b90f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b90f0) {
            ctx->pc = 0x1B9100u;
            goto label_1b9100;
        }
    }
    ctx->pc = 0x1B90F8u;
label_1b90f8:
    // 0x1b90f8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1b90f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b90fc:
    // 0x1b90fc: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x1b90fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b9100:
    // 0x1b9100: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b9100u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1b9104:
    // 0x1b9104: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1b9104u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1b9108:
    // 0x1b9108: 0x8f8288e0  lw          $v0, -0x7720($gp)
    ctx->pc = 0x1b9108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b910c:
    // 0x1b910c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1b910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1b9110:
    // 0x1b9110: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1b9110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b9114:
    // 0x1b9114: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_1b9118:
    if (ctx->pc == 0x1B9118u) {
        ctx->pc = 0x1B911Cu;
        goto label_1b911c;
    }
    ctx->pc = 0x1B9114u;
    {
        const bool branch_taken_0x1b9114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9114) {
            ctx->pc = 0x1B9014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9014;
        }
    }
    ctx->pc = 0x1B911Cu;
label_1b911c:
    // 0x1b911c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_1b9120:
    if (ctx->pc == 0x1B9120u) {
        ctx->pc = 0x1B9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B911Cu;
        // 0x1b9120: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9124u;
        goto label_1b9124;
    }
    ctx->pc = 0x1B911Cu;
    {
        const bool branch_taken_0x1b911c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B911Cu;
        // 0x1b9120: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b911c) {
            ctx->pc = 0x1B9134u;
            goto label_1b9134;
        }
    }
    ctx->pc = 0x1B9124u;
label_1b9124:
    // 0x1b9124: 0x1637ffb1  bne         $s1, $s7, . + 4 + (-0x4F << 2)
label_1b9128:
    if (ctx->pc == 0x1B9128u) {
        ctx->pc = 0x1B912Cu;
        goto label_1b912c;
    }
    ctx->pc = 0x1B9124u;
    {
        const bool branch_taken_0x1b9124 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x1b9124) {
            ctx->pc = 0x1B8FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8fec;
        }
    }
    ctx->pc = 0x1B912Cu;
label_1b912c:
    // 0x1b912c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b912cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9130:
    // 0x1b9130: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1b9130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b9134:
    // 0x1b9134: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b9134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b9138:
    // 0x1b9138: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b9138u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b913c:
    // 0x1b913c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b913cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b9140:
    // 0x1b9140: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b9140u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b9144:
    // 0x1b9144: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b9144u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9148:
    // 0x1b9148: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b9148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b914c:
    // 0x1b914c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b914cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b9150:
    // 0x1b9150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9154:
    // 0x1b9154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9158:
    // 0x1b9158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b915c:
    // 0x1b915c: 0x3e00008  jr          $ra
label_1b9160:
    if (ctx->pc == 0x1B9160u) {
        ctx->pc = 0x1B9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B915Cu;
        // 0x1b9160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9164u;
        goto label_1b9164;
    }
    ctx->pc = 0x1B915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B915Cu;
        // 0x1b9160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9164u;
label_1b9164:
    // 0x1b9164: 0x0  nop
    ctx->pc = 0x1b9164u;
    // NOP
label_1b9168:
    // 0x1b9168: 0x0  nop
    ctx->pc = 0x1b9168u;
    // NOP
label_1b916c:
    // 0x1b916c: 0x0  nop
    ctx->pc = 0x1b916cu;
    // NOP
label_1b9170:
    // 0x1b9170: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b9170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b9174:
    // 0x1b9174: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b9174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1b9178:
    // 0x1b9178: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b9178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b917c:
    // 0x1b917c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b917cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b9180:
    // 0x1b9180: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b9180u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9184:
    // 0x1b9184: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b9184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b9188:
    // 0x1b9188: 0x2415006c  addiu       $s5, $zero, 0x6C
    ctx->pc = 0x1b9188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1b918c:
    // 0x1b918c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b918cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b9190:
    // 0x1b9190: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x1b9190u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b9194:
    // 0x1b9194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b9198:
    // 0x1b9198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b919c:
    // 0x1b919c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b91a0:
    // 0x1b91a0: 0x10000027  b           . + 4 + (0x27 << 2)
label_1b91a4:
    if (ctx->pc == 0x1B91A4u) {
        ctx->pc = 0x1B91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91A0u;
        // 0x1b91a4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91A8u;
        goto label_1b91a8;
    }
    ctx->pc = 0x1B91A0u;
    {
        const bool branch_taken_0x1b91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91A0u;
        // 0x1b91a4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91a0) {
            ctx->pc = 0x1B9240u;
            goto label_1b9240;
        }
    }
    ctx->pc = 0x1B91A8u;
label_1b91a8:
    // 0x1b91a8: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x1b91a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b91ac:
    // 0x1b91ac: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1b91b0:
    if (ctx->pc == 0x1B91B0u) {
        ctx->pc = 0x1B91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91ACu;
        // 0x1b91b0: 0x2413006c  addiu       $s3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91B4u;
        goto label_1b91b4;
    }
    ctx->pc = 0x1B91ACu;
    {
        const bool branch_taken_0x1b91ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91ACu;
        // 0x1b91b0: 0x2413006c  addiu       $s3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b91ac) {
            ctx->pc = 0x1B921Cu;
            goto label_1b921c;
        }
    }
    ctx->pc = 0x1B91B4u;
label_1b91b4:
    // 0x1b91b4: 0x0  nop
    ctx->pc = 0x1b91b4u;
    // NOP
label_1b91b8:
    // 0x1b91b8: 0x0  nop
    ctx->pc = 0x1b91b8u;
    // NOP
label_1b91bc:
    // 0x1b91bc: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x1b91bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b91c0:
    // 0x1b91c0: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_1b91c4:
    if (ctx->pc == 0x1B91C4u) {
        ctx->pc = 0x1B91C8u;
        goto label_1b91c8;
    }
    ctx->pc = 0x1B91C0u;
    {
        const bool branch_taken_0x1b91c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b91c0) {
            ctx->pc = 0x1B9210u;
            goto label_1b9210;
        }
    }
    ctx->pc = 0x1B91C8u;
label_1b91c8:
    // 0x1b91c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b91cc:
    // 0x1b91cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b91ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b91d0:
    // 0x1b91d0: 0x24423520  addiu       $v0, $v0, 0x3520
    ctx->pc = 0x1b91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
label_1b91d4:
    // 0x1b91d4: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1b91d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1b91d8:
    // 0x1b91d8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1b91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1b91dc:
    // 0x1b91dc: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1b91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1b91e0:
    // 0x1b91e0: 0xc06e4d0  jal         func_1B9340
label_1b91e4:
    if (ctx->pc == 0x1B91E4u) {
        ctx->pc = 0x1B91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B91E0u;
        // 0x1b91e4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B91E8u;
        goto label_1b91e8;
    }
    ctx->pc = 0x1B91E0u;
    SET_GPR_U32(ctx, 31, 0x1B91E8u);
    ctx->pc = 0x1B91E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B91E0u;
    // 0x1b91e4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9340u;
    goto label_1b9340;
    ctx->pc = 0x1B91E8u;
label_1b91e8:
    // 0x1b91e8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1b91ec:
    // 0x1b91ec: 0x246329b0  addiu       $v1, $v1, 0x29B0
    ctx->pc = 0x1b91ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10672));
label_1b91f0:
    // 0x1b91f0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1b91f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1b91f4:
    // 0x1b91f4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1b91f8:
    // 0x1b91f8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1b91f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1b91fc:
    // 0x1b91fc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b91fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b9200:
    // 0x1b9200: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1b9200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1b9204:
    // 0x1b9204: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1b9204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1b9208:
    // 0x1b9208: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1b9208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b920c:
    // 0x1b920c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1b920cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b9210:
    // 0x1b9210: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1b9210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b9214:
    // 0x1b9214: 0x26730036  addiu       $s3, $s3, 0x36
    ctx->pc = 0x1b9214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 54));
label_1b9218:
    // 0x1b9218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b921c:
    // 0x1b921c: 0x0  nop
    ctx->pc = 0x1b921cu;
    // NOP
label_1b9220:
    // 0x1b9220: 0x8f8388e0  lw          $v1, -0x7720($gp)
    ctx->pc = 0x1b9220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b9224:
    // 0x1b9224: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1b9224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1b9228:
    // 0x1b9228: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1b9228u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b922c:
    // 0x1b922c: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_1b9230:
    if (ctx->pc == 0x1B9230u) {
        ctx->pc = 0x1B9234u;
        goto label_1b9234;
    }
    ctx->pc = 0x1B922Cu;
    {
        const bool branch_taken_0x1b922c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b922c) {
            ctx->pc = 0x1B91B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b91b4;
        }
    }
    ctx->pc = 0x1B9234u;
label_1b9234:
    // 0x1b9234: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1b9234u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1b9238:
    // 0x1b9238: 0x26b50036  addiu       $s5, $s5, 0x36
    ctx->pc = 0x1b9238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 54));
label_1b923c:
    // 0x1b923c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b923cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b9240:
    // 0x1b9240: 0x8f8388e0  lw          $v1, -0x7720($gp)
    ctx->pc = 0x1b9240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b9244:
    // 0x1b9244: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1b9244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1b9248:
    // 0x1b9248: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1b9248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b924c:
    // 0x1b924c: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_1b9250:
    if (ctx->pc == 0x1B9250u) {
        ctx->pc = 0x1B9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B924Cu;
        // 0x1b9250: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9254u;
        goto label_1b9254;
    }
    ctx->pc = 0x1B924Cu;
    {
        const bool branch_taken_0x1b924c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B924Cu;
        // 0x1b9250: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b924c) {
            ctx->pc = 0x1B91A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b91a8;
        }
    }
    ctx->pc = 0x1B9254u;
label_1b9254:
    // 0x1b9254: 0x12c0002f  beqz        $s6, . + 4 + (0x2F << 2)
label_1b9258:
    if (ctx->pc == 0x1B9258u) {
        ctx->pc = 0x1B9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9254u;
        // 0x1b9258: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B925Cu;
        goto label_1b925c;
    }
    ctx->pc = 0x1B9254u;
    {
        const bool branch_taken_0x1b9254 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9254u;
        // 0x1b9258: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9254) {
            ctx->pc = 0x1B9314u;
            goto label_1b9314;
        }
    }
    ctx->pc = 0x1B925Cu;
label_1b925c:
    // 0x1b925c: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x1b925cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b9260:
    // 0x1b9260: 0x10000027  b           . + 4 + (0x27 << 2)
label_1b9264:
    if (ctx->pc == 0x1B9264u) {
        ctx->pc = 0x1B9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9260u;
        // 0x1b9264: 0x2413006c  addiu       $s3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9268u;
        goto label_1b9268;
    }
    ctx->pc = 0x1B9260u;
    {
        const bool branch_taken_0x1b9260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9260u;
        // 0x1b9264: 0x2413006c  addiu       $s3, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9260) {
            ctx->pc = 0x1B9300u;
            goto label_1b9300;
        }
    }
    ctx->pc = 0x1B9268u;
label_1b9268:
    // 0x1b9268: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1b9268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b926c:
    // 0x1b926c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1b9270:
    if (ctx->pc == 0x1B9270u) {
        ctx->pc = 0x1B9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B926Cu;
        // 0x1b9270: 0x2411006c  addiu       $s1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9274u;
        goto label_1b9274;
    }
    ctx->pc = 0x1B926Cu;
    {
        const bool branch_taken_0x1b926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B926Cu;
        // 0x1b9270: 0x2411006c  addiu       $s1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b926c) {
            ctx->pc = 0x1B92DCu;
            goto label_1b92dc;
        }
    }
    ctx->pc = 0x1B9274u;
label_1b9274:
    // 0x1b9274: 0x0  nop
    ctx->pc = 0x1b9274u;
    // NOP
label_1b9278:
    // 0x1b9278: 0x0  nop
    ctx->pc = 0x1b9278u;
    // NOP
label_1b927c:
    // 0x1b927c: 0x2b4082a  slt         $at, $s5, $s4
    ctx->pc = 0x1b927cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1b9280:
    // 0x1b9280: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
label_1b9284:
    if (ctx->pc == 0x1B9284u) {
        ctx->pc = 0x1B9288u;
        goto label_1b9288;
    }
    ctx->pc = 0x1B9280u;
    {
        const bool branch_taken_0x1b9280 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9280) {
            ctx->pc = 0x1B92D0u;
            goto label_1b92d0;
        }
    }
    ctx->pc = 0x1B9288u;
label_1b9288:
    // 0x1b9288: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b9288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b928c:
    // 0x1b928c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b9290:
    // 0x1b9290: 0x24423520  addiu       $v0, $v0, 0x3520
    ctx->pc = 0x1b9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13600));
label_1b9294:
    // 0x1b9294: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1b9294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1b9298:
    // 0x1b9298: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b9298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1b929c:
    // 0x1b929c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x1b929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1b92a0:
    // 0x1b92a0: 0xc06e4d0  jal         func_1B9340
label_1b92a4:
    if (ctx->pc == 0x1B92A4u) {
        ctx->pc = 0x1B92A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B92A0u;
        // 0x1b92a4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B92A8u;
        goto label_1b92a8;
    }
    ctx->pc = 0x1B92A0u;
    SET_GPR_U32(ctx, 31, 0x1B92A8u);
    ctx->pc = 0x1B92A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B92A0u;
    // 0x1b92a4: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9340u;
    goto label_1b9340;
    ctx->pc = 0x1B92A8u;
label_1b92a8:
    // 0x1b92a8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1b92ac:
    // 0x1b92ac: 0x24631e40  addiu       $v1, $v1, 0x1E40
    ctx->pc = 0x1b92acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7744));
label_1b92b0:
    // 0x1b92b0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1b92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1b92b4:
    // 0x1b92b4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1b92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1b92b8:
    // 0x1b92b8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1b92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1b92bc:
    // 0x1b92bc: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1b92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1b92c0:
    // 0x1b92c0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1b92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1b92c4:
    // 0x1b92c4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1b92c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1b92c8:
    // 0x1b92c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1b92c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b92cc:
    // 0x1b92cc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1b92ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1b92d0:
    // 0x1b92d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1b92d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1b92d4:
    // 0x1b92d4: 0x26310036  addiu       $s1, $s1, 0x36
    ctx->pc = 0x1b92d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
label_1b92d8:
    // 0x1b92d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b92d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1b92dc:
    // 0x1b92dc: 0x0  nop
    ctx->pc = 0x1b92dcu;
    // NOP
label_1b92e0:
    // 0x1b92e0: 0x8f8388e0  lw          $v1, -0x7720($gp)
    ctx->pc = 0x1b92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b92e4:
    // 0x1b92e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1b92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1b92e8:
    // 0x1b92e8: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x1b92e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b92ec:
    // 0x1b92ec: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_1b92f0:
    if (ctx->pc == 0x1B92F0u) {
        ctx->pc = 0x1B92F4u;
        goto label_1b92f4;
    }
    ctx->pc = 0x1B92ECu;
    {
        const bool branch_taken_0x1b92ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b92ec) {
            ctx->pc = 0x1B9274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9274;
        }
    }
    ctx->pc = 0x1B92F4u;
label_1b92f4:
    // 0x1b92f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1b92f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1b92f8:
    // 0x1b92f8: 0x26730036  addiu       $s3, $s3, 0x36
    ctx->pc = 0x1b92f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 54));
label_1b92fc:
    // 0x1b92fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b92fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b9300:
    // 0x1b9300: 0x8f8388e0  lw          $v1, -0x7720($gp)
    ctx->pc = 0x1b9300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936800)));
label_1b9304:
    // 0x1b9304: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1b9304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1b9308:
    // 0x1b9308: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x1b9308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b930c:
    // 0x1b930c: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_1b9310:
    if (ctx->pc == 0x1B9310u) {
        ctx->pc = 0x1B9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B930Cu;
        // 0x1b9310: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9314u;
        goto label_1b9314;
    }
    ctx->pc = 0x1B930Cu;
    {
        const bool branch_taken_0x1b930c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B930Cu;
        // 0x1b9310: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b930c) {
            ctx->pc = 0x1B9268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9268;
        }
    }
    ctx->pc = 0x1B9314u;
label_1b9314:
    // 0x1b9314: 0x0  nop
    ctx->pc = 0x1b9314u;
    // NOP
label_1b9318:
    // 0x1b9318: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b9318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b931c:
    // 0x1b931c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b931cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b9320:
    // 0x1b9320: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b9320u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b9324:
    // 0x1b9324: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b9324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b9328:
    // 0x1b9328: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b9328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b932c:
    // 0x1b932c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b932cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9330:
    // 0x1b9330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9334:
    // 0x1b9334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9338:
    // 0x1b9338: 0x3e00008  jr          $ra
label_1b933c:
    if (ctx->pc == 0x1B933Cu) {
        ctx->pc = 0x1B933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9338u;
        // 0x1b933c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9340u;
        goto label_1b9340;
    }
    ctx->pc = 0x1B9338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9338u;
        // 0x1b933c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9340u;
label_1b9340:
    // 0x1b9340: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b9340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1b9344:
    // 0x1b9344: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b9344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b9348:
    // 0x1b9348: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b9348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1b934c:
    // 0x1b934c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b9350:
    // 0x1b9350: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b9350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b9354:
    // 0x1b9354: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b9354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b9358:
    // 0x1b9358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b9358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b935c:
    // 0x1b935c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b935cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9360:
    // 0x1b9360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b9360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b9364:
    // 0x1b9364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b9368:
    // 0x1b9368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b936c:
    // 0x1b936c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b9370:
    // 0x1b9370: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b9370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9374:
    // 0x1b9374: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1b9374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_1b9378:
    // 0x1b9378: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1b9378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1b937c:
    // 0x1b937c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1b937cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1b9380:
    // 0x1b9380: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x1b9380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1b9384:
    // 0x1b9384: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b9384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b9388:
    // 0x1b9388: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b9388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b938c:
    // 0x1b938c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b9390:
    // 0x1b9390: 0xc044974  jal         func_1125D0
label_1b9394:
    if (ctx->pc == 0x1B9394u) {
        ctx->pc = 0x1B9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9390u;
        // 0x1b9394: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9398u;
        goto label_1b9398;
    }
    ctx->pc = 0x1B9390u;
    SET_GPR_U32(ctx, 31, 0x1B9398u);
    ctx->pc = 0x1B9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9390u;
    // 0x1b9394: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125D0u, 0x1B9390u, 0x1B9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9398u;
label_1b9398:
    // 0x1b9398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b9398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b939c:
    // 0x1b939c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b93a0:
    // 0x1b93a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b93a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b93a4:
    // 0x1b93a4: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b93a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b93a8:
    // 0x1b93a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1b93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b93ac:
    // 0x1b93ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b93acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b93b0:
    // 0x1b93b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b93b4:
    // 0x1b93b4: 0xc044974  jal         func_1125D0
label_1b93b8:
    if (ctx->pc == 0x1B93B8u) {
        ctx->pc = 0x1B93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93B4u;
        // 0x1b93b8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93BCu;
        goto label_1b93bc;
    }
    ctx->pc = 0x1B93B4u;
    SET_GPR_U32(ctx, 31, 0x1B93BCu);
    ctx->pc = 0x1B93B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93B4u;
    // 0x1b93b8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1125D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1125D0u, 0x1B93B4u, 0x1B93BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93BCu;
label_1b93bc:
    // 0x1b93bc: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x1b93bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1b93c0:
    // 0x1b93c0: 0x2041824  and         $v1, $s0, $a0
    ctx->pc = 0x1b93c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_1b93c4:
    // 0x1b93c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1b93c8:
    if (ctx->pc == 0x1B93C8u) {
        ctx->pc = 0x1B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93C4u;
        // 0x1b93c8: 0x441824  and         $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93CCu;
        goto label_1b93cc;
    }
    ctx->pc = 0x1B93C4u;
    {
        const bool branch_taken_0x1b93c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93C4u;
        // 0x1b93c8: 0x441824  and         $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93c4) {
            ctx->pc = 0x1B93DCu;
            goto label_1b93dc;
        }
    }
    ctx->pc = 0x1B93CCu;
label_1b93cc:
    // 0x1b93cc: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x1b93ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_1b93d0:
    // 0x1b93d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1b93d4:
    if (ctx->pc == 0x1B93D4u) {
        ctx->pc = 0x1B93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93D0u;
        // 0x1b93d4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93D8u;
        goto label_1b93d8;
    }
    ctx->pc = 0x1B93D0u;
    {
        const bool branch_taken_0x1b93d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93D0u;
        // 0x1b93d4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93d0) {
            ctx->pc = 0x1B93F4u;
            goto label_1b93f4;
        }
    }
    ctx->pc = 0x1B93D8u;
label_1b93d8:
    // 0x1b93d8: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x1b93d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1b93dc:
    // 0x1b93dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1b93e0:
    if (ctx->pc == 0x1B93E0u) {
        ctx->pc = 0x1B93E4u;
        goto label_1b93e4;
    }
    ctx->pc = 0x1B93DCu;
    {
        const bool branch_taken_0x1b93dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b93dc) {
            ctx->pc = 0x1B93FCu;
            goto label_1b93fc;
        }
    }
    ctx->pc = 0x1B93E4u;
label_1b93e4:
    // 0x1b93e4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1b93e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1b93e8:
    // 0x1b93e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b93ec:
    if (ctx->pc == 0x1B93ECu) {
        ctx->pc = 0x1B93F0u;
        goto label_1b93f0;
    }
    ctx->pc = 0x1B93E8u;
    {
        const bool branch_taken_0x1b93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b93e8) {
            ctx->pc = 0x1B93FCu;
            goto label_1b93fc;
        }
    }
    ctx->pc = 0x1B93F0u;
label_1b93f0:
    // 0x1b93f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1b93f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b93f4:
    // 0x1b93f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1b93f8:
    if (ctx->pc == 0x1B93F8u) {
        ctx->pc = 0x1B93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93F4u;
        // 0x1b93f8: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93FCu;
        goto label_1b93fc;
    }
    ctx->pc = 0x1B93F4u;
    {
        const bool branch_taken_0x1b93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93F4u;
        // 0x1b93f8: 0x241100ff  addiu       $s1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93f4) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B93FCu;
label_1b93fc:
    // 0x1b93fc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9400:
    // 0x1b9400: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1b9400u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9404:
    // 0x1b9404: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b9404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b9408:
    // 0x1b9408: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1b9408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b940c:
    // 0x1b940c: 0x14a4000a  bne         $a1, $a0, . + 4 + (0xA << 2)
label_1b9410:
    if (ctx->pc == 0x1B9410u) {
        ctx->pc = 0x1B9414u;
        goto label_1b9414;
    }
    ctx->pc = 0x1B940Cu;
    {
        const bool branch_taken_0x1b940c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b940c) {
            ctx->pc = 0x1B9438u;
            goto label_1b9438;
        }
    }
    ctx->pc = 0x1B9414u;
label_1b9414:
    // 0x1b9414: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b9414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9418:
    // 0x1b9418: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1b9418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b941c:
    // 0x1b941c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b9420:
    // 0x1b9420: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b9420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9424:
    // 0x1b9424: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1b9428:
    if (ctx->pc == 0x1B9428u) {
        ctx->pc = 0x1B942Cu;
        goto label_1b942c;
    }
    ctx->pc = 0x1B9424u;
    {
        const bool branch_taken_0x1b9424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b9424) {
            ctx->pc = 0x1B9438u;
            goto label_1b9438;
        }
    }
    ctx->pc = 0x1B942Cu;
label_1b942c:
    // 0x1b942c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b942cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9430:
    // 0x1b9430: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b9434:
    if (ctx->pc == 0x1B9434u) {
        ctx->pc = 0x1B9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9430u;
        // 0x1b9434: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9438u;
        goto label_1b9438;
    }
    ctx->pc = 0x1B9430u;
    {
        const bool branch_taken_0x1b9430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9430u;
        // 0x1b9434: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9430) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B9438u;
label_1b9438:
    // 0x1b9438: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
label_1b943c:
    if (ctx->pc == 0x1B943Cu) {
        ctx->pc = 0x1B943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9438u;
        // 0x1b943c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9440u;
        goto label_1b9440;
    }
    ctx->pc = 0x1B9438u;
    {
        const bool branch_taken_0x1b9438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9438u;
        // 0x1b943c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9438) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B9440u;
label_1b9440:
    // 0x1b9440: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b9440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9444:
    // 0x1b9444: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1b9444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9448:
    // 0x1b9448: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b9448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b944c:
    // 0x1b944c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b944cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9450:
    // 0x1b9450: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_1b9454:
    if (ctx->pc == 0x1B9454u) {
        ctx->pc = 0x1B9458u;
        goto label_1b9458;
    }
    ctx->pc = 0x1B9450u;
    {
        const bool branch_taken_0x1b9450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9450) {
            ctx->pc = 0x1B945Cu;
            goto label_1b945c;
        }
    }
    ctx->pc = 0x1B9458u;
label_1b9458:
    // 0x1b9458: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x1b9458u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b945c:
    // 0x1b945c: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x1b945cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_1b9460:
    // 0x1b9460: 0x1020007f  beqz        $at, . + 4 + (0x7F << 2)
label_1b9464:
    if (ctx->pc == 0x1B9464u) {
        ctx->pc = 0x1B9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9460u;
        // 0x1b9464: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9468u;
        goto label_1b9468;
    }
    ctx->pc = 0x1B9460u;
    {
        const bool branch_taken_0x1b9460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9460u;
        // 0x1b9464: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9460) {
            ctx->pc = 0x1B9660u;
            { ctx->pc = 0x1b9660; return; }
        }
    }
    ctx->pc = 0x1B9468u;
label_1b9468:
    // 0x1b9468: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_1b946c:
    if (ctx->pc == 0x1B946Cu) {
        ctx->pc = 0x1B9470u;
        goto label_1b9470;
    }
    ctx->pc = 0x1B9468u;
    {
        const bool branch_taken_0x1b9468 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9468) {
            ctx->pc = 0x1B949Cu;
            goto label_1b949c;
        }
    }
    ctx->pc = 0x1B9470u;
label_1b9470:
    // 0x1b9470: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b9470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9474:
    // 0x1b9474: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b9474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9478:
    // 0x1b9478: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b9478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1b947c:
    // 0x1b947c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b9480:
    // 0x1b9480: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b9480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9484:
    // 0x1b9484: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1b9484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_1b9488:
    // 0x1b9488: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b9488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b948c:
    // 0x1b948c: 0x90570000  lbu         $s7, 0x0($v0)
    ctx->pc = 0x1b948cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9490:
    // 0x1b9490: 0x90520001  lbu         $s2, 0x1($v0)
    ctx->pc = 0x1b9490u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b9494:
    // 0x1b9494: 0x10000010  b           . + 4 + (0x10 << 2)
label_1b9498:
    if (ctx->pc == 0x1B9498u) {
        ctx->pc = 0x1B9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9494u;
        // 0x1b9498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B949Cu;
        goto label_1b949c;
    }
    ctx->pc = 0x1B9494u;
    {
        const bool branch_taken_0x1b9494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9494u;
        // 0x1b9498: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9494) {
            ctx->pc = 0x1B94D8u;
            goto label_1b94d8;
        }
    }
    ctx->pc = 0x1B949Cu;
label_1b949c:
    // 0x1b949c: 0x0  nop
    ctx->pc = 0x1b949cu;
    // NOP
label_1b94a0:
    // 0x1b94a0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1b94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b94a4:
    // 0x1b94a4: 0x1222006e  beq         $s1, $v0, . + 4 + (0x6E << 2)
label_1b94a8:
    if (ctx->pc == 0x1B94A8u) {
        ctx->pc = 0x1B94ACu;
        goto label_1b94ac;
    }
    ctx->pc = 0x1B94A4u;
    {
        const bool branch_taken_0x1b94a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b94a4) {
            ctx->pc = 0x1B9660u;
            { ctx->pc = 0x1b9660; return; }
        }
    }
    ctx->pc = 0x1B94ACu;
label_1b94ac:
    // 0x1b94ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b94acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b94b0:
    // 0x1b94b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b94b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b94b4:
    // 0x1b94b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1b94b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b94b8:
    // 0x1b94b8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1b94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1b94bc:
    // 0x1b94bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1b94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1b94c0:
    // 0x1b94c0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1b94c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b94c4:
    // 0x1b94c4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1b94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_1b94c8:
    // 0x1b94c8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1b94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1b94cc:
    // 0x1b94cc: 0x90570000  lbu         $s7, 0x0($v0)
    ctx->pc = 0x1b94ccu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1b94d0:
    // 0x1b94d0: 0x90520001  lbu         $s2, 0x1($v0)
    ctx->pc = 0x1b94d0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1b94d4:
    // 0x1b94d4: 0x0  nop
    ctx->pc = 0x1b94d4u;
    // NOP
label_1b94d8:
    // 0x1b94d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1b94dc:
    // 0x1b94dc: 0x14570003  bne         $v0, $s7, . + 4 + (0x3 << 2)
label_1b94e0:
    if (ctx->pc == 0x1B94E0u) {
        ctx->pc = 0x1B94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94DCu;
        // 0x1b94e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B94E4u;
        goto label_1b94e4;
    }
    ctx->pc = 0x1B94DCu;
    {
        const bool branch_taken_0x1b94dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x1B94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94DCu;
        // 0x1b94e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94dc) {
            ctx->pc = 0x1B94ECu;
            goto label_1b94ec;
        }
    }
    ctx->pc = 0x1B94E4u;
label_1b94e4:
    // 0x1b94e4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b94e8:
    if (ctx->pc == 0x1B94E8u) {
        ctx->pc = 0x1B94ECu;
        goto label_1b94ec;
    }
    ctx->pc = 0x1B94E4u;
    {
        const bool branch_taken_0x1b94e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b94e4) {
            ctx->pc = 0x1B950Cu;
            { ctx->pc = 0x1b950c; return; }
        }
    }
    ctx->pc = 0x1B94ECu;
label_1b94ec:
    // 0x1b94ec: 0x0  nop
    ctx->pc = 0x1b94ecu;
    // NOP
label_1b94f0:
    // 0x1b94f0: 0x57082a  slt         $at, $v0, $s7
    ctx->pc = 0x1b94f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1b94f4:
    // 0x1b94f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1b94f8:
    if (ctx->pc == 0x1B94F8u) {
        ctx->pc = 0x1B94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94F4u;
        // 0x1b94f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B94FCu;
        goto label_1b94fc;
    }
    ctx->pc = 0x1B94F4u;
    {
        const bool branch_taken_0x1b94f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94F4u;
        // 0x1b94f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94f4) {
            ctx->pc = 0x1B9504u;
            { ctx->pc = 0x1b9504; return; }
        }
    }
    ctx->pc = 0x1B94FCu;
label_1b94fc:
    // 0x1b94fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1b9500u;
    return;
}

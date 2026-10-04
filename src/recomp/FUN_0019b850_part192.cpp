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


void FUN_0019b850_part192(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f8c80u: goto label_1f8c80;
        case 0x1f8c84u: goto label_1f8c84;
        case 0x1f8c88u: goto label_1f8c88;
        case 0x1f8c8cu: goto label_1f8c8c;
        case 0x1f8c90u: goto label_1f8c90;
        case 0x1f8c94u: goto label_1f8c94;
        case 0x1f8c98u: goto label_1f8c98;
        case 0x1f8c9cu: goto label_1f8c9c;
        case 0x1f8ca0u: goto label_1f8ca0;
        case 0x1f8ca4u: goto label_1f8ca4;
        case 0x1f8ca8u: goto label_1f8ca8;
        case 0x1f8cacu: goto label_1f8cac;
        case 0x1f8cb0u: goto label_1f8cb0;
        case 0x1f8cb4u: goto label_1f8cb4;
        case 0x1f8cb8u: goto label_1f8cb8;
        case 0x1f8cbcu: goto label_1f8cbc;
        case 0x1f8cc0u: goto label_1f8cc0;
        case 0x1f8cc4u: goto label_1f8cc4;
        case 0x1f8cc8u: goto label_1f8cc8;
        case 0x1f8cccu: goto label_1f8ccc;
        case 0x1f8cd0u: goto label_1f8cd0;
        case 0x1f8cd4u: goto label_1f8cd4;
        case 0x1f8cd8u: goto label_1f8cd8;
        case 0x1f8cdcu: goto label_1f8cdc;
        case 0x1f8ce0u: goto label_1f8ce0;
        case 0x1f8ce4u: goto label_1f8ce4;
        case 0x1f8ce8u: goto label_1f8ce8;
        case 0x1f8cecu: goto label_1f8cec;
        case 0x1f8cf0u: goto label_1f8cf0;
        case 0x1f8cf4u: goto label_1f8cf4;
        case 0x1f8cf8u: goto label_1f8cf8;
        case 0x1f8cfcu: goto label_1f8cfc;
        case 0x1f8d00u: goto label_1f8d00;
        case 0x1f8d04u: goto label_1f8d04;
        case 0x1f8d08u: goto label_1f8d08;
        case 0x1f8d0cu: goto label_1f8d0c;
        case 0x1f8d10u: goto label_1f8d10;
        case 0x1f8d14u: goto label_1f8d14;
        case 0x1f8d18u: goto label_1f8d18;
        case 0x1f8d1cu: goto label_1f8d1c;
        case 0x1f8d20u: goto label_1f8d20;
        case 0x1f8d24u: goto label_1f8d24;
        case 0x1f8d28u: goto label_1f8d28;
        case 0x1f8d2cu: goto label_1f8d2c;
        case 0x1f8d30u: goto label_1f8d30;
        case 0x1f8d34u: goto label_1f8d34;
        case 0x1f8d38u: goto label_1f8d38;
        case 0x1f8d3cu: goto label_1f8d3c;
        case 0x1f8d40u: goto label_1f8d40;
        case 0x1f8d44u: goto label_1f8d44;
        case 0x1f8d48u: goto label_1f8d48;
        case 0x1f8d4cu: goto label_1f8d4c;
        case 0x1f8d50u: goto label_1f8d50;
        case 0x1f8d54u: goto label_1f8d54;
        case 0x1f8d58u: goto label_1f8d58;
        case 0x1f8d5cu: goto label_1f8d5c;
        case 0x1f8d60u: goto label_1f8d60;
        case 0x1f8d64u: goto label_1f8d64;
        case 0x1f8d68u: goto label_1f8d68;
        case 0x1f8d6cu: goto label_1f8d6c;
        case 0x1f8d70u: goto label_1f8d70;
        case 0x1f8d74u: goto label_1f8d74;
        case 0x1f8d78u: goto label_1f8d78;
        case 0x1f8d7cu: goto label_1f8d7c;
        case 0x1f8d80u: goto label_1f8d80;
        case 0x1f8d84u: goto label_1f8d84;
        case 0x1f8d88u: goto label_1f8d88;
        case 0x1f8d8cu: goto label_1f8d8c;
        case 0x1f8d90u: goto label_1f8d90;
        case 0x1f8d94u: goto label_1f8d94;
        case 0x1f8d98u: goto label_1f8d98;
        case 0x1f8d9cu: goto label_1f8d9c;
        case 0x1f8da0u: goto label_1f8da0;
        case 0x1f8da4u: goto label_1f8da4;
        case 0x1f8da8u: goto label_1f8da8;
        case 0x1f8dacu: goto label_1f8dac;
        case 0x1f8db0u: goto label_1f8db0;
        case 0x1f8db4u: goto label_1f8db4;
        case 0x1f8db8u: goto label_1f8db8;
        case 0x1f8dbcu: goto label_1f8dbc;
        case 0x1f8dc0u: goto label_1f8dc0;
        case 0x1f8dc4u: goto label_1f8dc4;
        case 0x1f8dc8u: goto label_1f8dc8;
        case 0x1f8dccu: goto label_1f8dcc;
        case 0x1f8dd0u: goto label_1f8dd0;
        case 0x1f8dd4u: goto label_1f8dd4;
        case 0x1f8dd8u: goto label_1f8dd8;
        case 0x1f8ddcu: goto label_1f8ddc;
        case 0x1f8de0u: goto label_1f8de0;
        case 0x1f8de4u: goto label_1f8de4;
        case 0x1f8de8u: goto label_1f8de8;
        case 0x1f8decu: goto label_1f8dec;
        case 0x1f8df0u: goto label_1f8df0;
        case 0x1f8df4u: goto label_1f8df4;
        case 0x1f8df8u: goto label_1f8df8;
        case 0x1f8dfcu: goto label_1f8dfc;
        case 0x1f8e00u: goto label_1f8e00;
        case 0x1f8e04u: goto label_1f8e04;
        case 0x1f8e08u: goto label_1f8e08;
        case 0x1f8e0cu: goto label_1f8e0c;
        case 0x1f8e10u: goto label_1f8e10;
        case 0x1f8e14u: goto label_1f8e14;
        case 0x1f8e18u: goto label_1f8e18;
        case 0x1f8e1cu: goto label_1f8e1c;
        case 0x1f8e20u: goto label_1f8e20;
        case 0x1f8e24u: goto label_1f8e24;
        case 0x1f8e28u: goto label_1f8e28;
        case 0x1f8e2cu: goto label_1f8e2c;
        case 0x1f8e30u: goto label_1f8e30;
        case 0x1f8e34u: goto label_1f8e34;
        case 0x1f8e38u: goto label_1f8e38;
        case 0x1f8e3cu: goto label_1f8e3c;
        case 0x1f8e40u: goto label_1f8e40;
        case 0x1f8e44u: goto label_1f8e44;
        case 0x1f8e48u: goto label_1f8e48;
        case 0x1f8e4cu: goto label_1f8e4c;
        case 0x1f8e50u: goto label_1f8e50;
        case 0x1f8e54u: goto label_1f8e54;
        case 0x1f8e58u: goto label_1f8e58;
        case 0x1f8e5cu: goto label_1f8e5c;
        case 0x1f8e60u: goto label_1f8e60;
        case 0x1f8e64u: goto label_1f8e64;
        case 0x1f8e68u: goto label_1f8e68;
        case 0x1f8e6cu: goto label_1f8e6c;
        case 0x1f8e70u: goto label_1f8e70;
        case 0x1f8e74u: goto label_1f8e74;
        case 0x1f8e78u: goto label_1f8e78;
        case 0x1f8e7cu: goto label_1f8e7c;
        case 0x1f8e80u: goto label_1f8e80;
        case 0x1f8e84u: goto label_1f8e84;
        case 0x1f8e88u: goto label_1f8e88;
        case 0x1f8e8cu: goto label_1f8e8c;
        case 0x1f8e90u: goto label_1f8e90;
        case 0x1f8e94u: goto label_1f8e94;
        case 0x1f8e98u: goto label_1f8e98;
        case 0x1f8e9cu: goto label_1f8e9c;
        case 0x1f8ea0u: goto label_1f8ea0;
        case 0x1f8ea4u: goto label_1f8ea4;
        case 0x1f8ea8u: goto label_1f8ea8;
        case 0x1f8eacu: goto label_1f8eac;
        case 0x1f8eb0u: goto label_1f8eb0;
        case 0x1f8eb4u: goto label_1f8eb4;
        case 0x1f8eb8u: goto label_1f8eb8;
        case 0x1f8ebcu: goto label_1f8ebc;
        case 0x1f8ec0u: goto label_1f8ec0;
        case 0x1f8ec4u: goto label_1f8ec4;
        case 0x1f8ec8u: goto label_1f8ec8;
        case 0x1f8eccu: goto label_1f8ecc;
        case 0x1f8ed0u: goto label_1f8ed0;
        case 0x1f8ed4u: goto label_1f8ed4;
        case 0x1f8ed8u: goto label_1f8ed8;
        case 0x1f8edcu: goto label_1f8edc;
        case 0x1f8ee0u: goto label_1f8ee0;
        case 0x1f8ee4u: goto label_1f8ee4;
        case 0x1f8ee8u: goto label_1f8ee8;
        case 0x1f8eecu: goto label_1f8eec;
        case 0x1f8ef0u: goto label_1f8ef0;
        case 0x1f8ef4u: goto label_1f8ef4;
        case 0x1f8ef8u: goto label_1f8ef8;
        case 0x1f8efcu: goto label_1f8efc;
        case 0x1f8f00u: goto label_1f8f00;
        case 0x1f8f04u: goto label_1f8f04;
        case 0x1f8f08u: goto label_1f8f08;
        case 0x1f8f0cu: goto label_1f8f0c;
        case 0x1f8f10u: goto label_1f8f10;
        case 0x1f8f14u: goto label_1f8f14;
        case 0x1f8f18u: goto label_1f8f18;
        case 0x1f8f1cu: goto label_1f8f1c;
        case 0x1f8f20u: goto label_1f8f20;
        case 0x1f8f24u: goto label_1f8f24;
        case 0x1f8f28u: goto label_1f8f28;
        case 0x1f8f2cu: goto label_1f8f2c;
        case 0x1f8f30u: goto label_1f8f30;
        case 0x1f8f34u: goto label_1f8f34;
        case 0x1f8f38u: goto label_1f8f38;
        case 0x1f8f3cu: goto label_1f8f3c;
        case 0x1f8f40u: goto label_1f8f40;
        case 0x1f8f44u: goto label_1f8f44;
        case 0x1f8f48u: goto label_1f8f48;
        case 0x1f8f4cu: goto label_1f8f4c;
        case 0x1f8f50u: goto label_1f8f50;
        case 0x1f8f54u: goto label_1f8f54;
        case 0x1f8f58u: goto label_1f8f58;
        case 0x1f8f5cu: goto label_1f8f5c;
        case 0x1f8f60u: goto label_1f8f60;
        case 0x1f8f64u: goto label_1f8f64;
        case 0x1f8f68u: goto label_1f8f68;
        case 0x1f8f6cu: goto label_1f8f6c;
        case 0x1f8f70u: goto label_1f8f70;
        case 0x1f8f74u: goto label_1f8f74;
        case 0x1f8f78u: goto label_1f8f78;
        case 0x1f8f7cu: goto label_1f8f7c;
        case 0x1f8f80u: goto label_1f8f80;
        case 0x1f8f84u: goto label_1f8f84;
        case 0x1f8f88u: goto label_1f8f88;
        case 0x1f8f8cu: goto label_1f8f8c;
        case 0x1f8f90u: goto label_1f8f90;
        case 0x1f8f94u: goto label_1f8f94;
        case 0x1f8f98u: goto label_1f8f98;
        case 0x1f8f9cu: goto label_1f8f9c;
        case 0x1f8fa0u: goto label_1f8fa0;
        case 0x1f8fa4u: goto label_1f8fa4;
        case 0x1f8fa8u: goto label_1f8fa8;
        case 0x1f8facu: goto label_1f8fac;
        case 0x1f8fb0u: goto label_1f8fb0;
        case 0x1f8fb4u: goto label_1f8fb4;
        case 0x1f8fb8u: goto label_1f8fb8;
        case 0x1f8fbcu: goto label_1f8fbc;
        case 0x1f8fc0u: goto label_1f8fc0;
        case 0x1f8fc4u: goto label_1f8fc4;
        case 0x1f8fc8u: goto label_1f8fc8;
        case 0x1f8fccu: goto label_1f8fcc;
        case 0x1f8fd0u: goto label_1f8fd0;
        case 0x1f8fd4u: goto label_1f8fd4;
        case 0x1f8fd8u: goto label_1f8fd8;
        case 0x1f8fdcu: goto label_1f8fdc;
        case 0x1f8fe0u: goto label_1f8fe0;
        case 0x1f8fe4u: goto label_1f8fe4;
        case 0x1f8fe8u: goto label_1f8fe8;
        case 0x1f8fecu: goto label_1f8fec;
        case 0x1f8ff0u: goto label_1f8ff0;
        case 0x1f8ff4u: goto label_1f8ff4;
        case 0x1f8ff8u: goto label_1f8ff8;
        case 0x1f8ffcu: goto label_1f8ffc;
        case 0x1f9000u: goto label_1f9000;
        case 0x1f9004u: goto label_1f9004;
        case 0x1f9008u: goto label_1f9008;
        case 0x1f900cu: goto label_1f900c;
        case 0x1f9010u: goto label_1f9010;
        case 0x1f9014u: goto label_1f9014;
        case 0x1f9018u: goto label_1f9018;
        case 0x1f901cu: goto label_1f901c;
        case 0x1f9020u: goto label_1f9020;
        case 0x1f9024u: goto label_1f9024;
        case 0x1f9028u: goto label_1f9028;
        case 0x1f902cu: goto label_1f902c;
        case 0x1f9030u: goto label_1f9030;
        case 0x1f9034u: goto label_1f9034;
        case 0x1f9038u: goto label_1f9038;
        case 0x1f903cu: goto label_1f903c;
        case 0x1f9040u: goto label_1f9040;
        case 0x1f9044u: goto label_1f9044;
        case 0x1f9048u: goto label_1f9048;
        case 0x1f904cu: goto label_1f904c;
        case 0x1f9050u: goto label_1f9050;
        case 0x1f9054u: goto label_1f9054;
        case 0x1f9058u: goto label_1f9058;
        case 0x1f905cu: goto label_1f905c;
        case 0x1f9060u: goto label_1f9060;
        case 0x1f9064u: goto label_1f9064;
        case 0x1f9068u: goto label_1f9068;
        case 0x1f906cu: goto label_1f906c;
        case 0x1f9070u: goto label_1f9070;
        case 0x1f9074u: goto label_1f9074;
        case 0x1f9078u: goto label_1f9078;
        case 0x1f907cu: goto label_1f907c;
        case 0x1f9080u: goto label_1f9080;
        case 0x1f9084u: goto label_1f9084;
        case 0x1f9088u: goto label_1f9088;
        case 0x1f908cu: goto label_1f908c;
        case 0x1f9090u: goto label_1f9090;
        case 0x1f9094u: goto label_1f9094;
        case 0x1f9098u: goto label_1f9098;
        case 0x1f909cu: goto label_1f909c;
        case 0x1f90a0u: goto label_1f90a0;
        case 0x1f90a4u: goto label_1f90a4;
        case 0x1f90a8u: goto label_1f90a8;
        case 0x1f90acu: goto label_1f90ac;
        case 0x1f90b0u: goto label_1f90b0;
        case 0x1f90b4u: goto label_1f90b4;
        case 0x1f90b8u: goto label_1f90b8;
        case 0x1f90bcu: goto label_1f90bc;
        case 0x1f90c0u: goto label_1f90c0;
        case 0x1f90c4u: goto label_1f90c4;
        case 0x1f90c8u: goto label_1f90c8;
        case 0x1f90ccu: goto label_1f90cc;
        case 0x1f90d0u: goto label_1f90d0;
        case 0x1f90d4u: goto label_1f90d4;
        case 0x1f90d8u: goto label_1f90d8;
        case 0x1f90dcu: goto label_1f90dc;
        case 0x1f90e0u: goto label_1f90e0;
        case 0x1f90e4u: goto label_1f90e4;
        case 0x1f90e8u: goto label_1f90e8;
        case 0x1f90ecu: goto label_1f90ec;
        case 0x1f90f0u: goto label_1f90f0;
        case 0x1f90f4u: goto label_1f90f4;
        case 0x1f90f8u: goto label_1f90f8;
        case 0x1f90fcu: goto label_1f90fc;
        case 0x1f9100u: goto label_1f9100;
        case 0x1f9104u: goto label_1f9104;
        case 0x1f9108u: goto label_1f9108;
        case 0x1f910cu: goto label_1f910c;
        case 0x1f9110u: goto label_1f9110;
        case 0x1f9114u: goto label_1f9114;
        case 0x1f9118u: goto label_1f9118;
        case 0x1f911cu: goto label_1f911c;
        case 0x1f9120u: goto label_1f9120;
        case 0x1f9124u: goto label_1f9124;
        case 0x1f9128u: goto label_1f9128;
        case 0x1f912cu: goto label_1f912c;
        case 0x1f9130u: goto label_1f9130;
        case 0x1f9134u: goto label_1f9134;
        case 0x1f9138u: goto label_1f9138;
        case 0x1f913cu: goto label_1f913c;
        case 0x1f9140u: goto label_1f9140;
        case 0x1f9144u: goto label_1f9144;
        case 0x1f9148u: goto label_1f9148;
        case 0x1f914cu: goto label_1f914c;
        case 0x1f9150u: goto label_1f9150;
        case 0x1f9154u: goto label_1f9154;
        case 0x1f9158u: goto label_1f9158;
        case 0x1f915cu: goto label_1f915c;
        case 0x1f9160u: goto label_1f9160;
        case 0x1f9164u: goto label_1f9164;
        case 0x1f9168u: goto label_1f9168;
        case 0x1f916cu: goto label_1f916c;
        case 0x1f9170u: goto label_1f9170;
        case 0x1f9174u: goto label_1f9174;
        case 0x1f9178u: goto label_1f9178;
        case 0x1f917cu: goto label_1f917c;
        case 0x1f9180u: goto label_1f9180;
        case 0x1f9184u: goto label_1f9184;
        case 0x1f9188u: goto label_1f9188;
        case 0x1f918cu: goto label_1f918c;
        case 0x1f9190u: goto label_1f9190;
        case 0x1f9194u: goto label_1f9194;
        case 0x1f9198u: goto label_1f9198;
        case 0x1f919cu: goto label_1f919c;
        case 0x1f91a0u: goto label_1f91a0;
        case 0x1f91a4u: goto label_1f91a4;
        case 0x1f91a8u: goto label_1f91a8;
        case 0x1f91acu: goto label_1f91ac;
        case 0x1f91b0u: goto label_1f91b0;
        case 0x1f91b4u: goto label_1f91b4;
        case 0x1f91b8u: goto label_1f91b8;
        case 0x1f91bcu: goto label_1f91bc;
        case 0x1f91c0u: goto label_1f91c0;
        case 0x1f91c4u: goto label_1f91c4;
        case 0x1f91c8u: goto label_1f91c8;
        case 0x1f91ccu: goto label_1f91cc;
        case 0x1f91d0u: goto label_1f91d0;
        case 0x1f91d4u: goto label_1f91d4;
        case 0x1f91d8u: goto label_1f91d8;
        case 0x1f91dcu: goto label_1f91dc;
        case 0x1f91e0u: goto label_1f91e0;
        case 0x1f91e4u: goto label_1f91e4;
        case 0x1f91e8u: goto label_1f91e8;
        case 0x1f91ecu: goto label_1f91ec;
        case 0x1f91f0u: goto label_1f91f0;
        case 0x1f91f4u: goto label_1f91f4;
        case 0x1f91f8u: goto label_1f91f8;
        case 0x1f91fcu: goto label_1f91fc;
        case 0x1f9200u: goto label_1f9200;
        case 0x1f9204u: goto label_1f9204;
        case 0x1f9208u: goto label_1f9208;
        case 0x1f920cu: goto label_1f920c;
        case 0x1f9210u: goto label_1f9210;
        case 0x1f9214u: goto label_1f9214;
        case 0x1f9218u: goto label_1f9218;
        case 0x1f921cu: goto label_1f921c;
        case 0x1f9220u: goto label_1f9220;
        case 0x1f9224u: goto label_1f9224;
        case 0x1f9228u: goto label_1f9228;
        case 0x1f922cu: goto label_1f922c;
        case 0x1f9230u: goto label_1f9230;
        case 0x1f9234u: goto label_1f9234;
        case 0x1f9238u: goto label_1f9238;
        case 0x1f923cu: goto label_1f923c;
        case 0x1f9240u: goto label_1f9240;
        case 0x1f9244u: goto label_1f9244;
        case 0x1f9248u: goto label_1f9248;
        case 0x1f924cu: goto label_1f924c;
        case 0x1f9250u: goto label_1f9250;
        case 0x1f9254u: goto label_1f9254;
        case 0x1f9258u: goto label_1f9258;
        case 0x1f925cu: goto label_1f925c;
        case 0x1f9260u: goto label_1f9260;
        case 0x1f9264u: goto label_1f9264;
        case 0x1f9268u: goto label_1f9268;
        case 0x1f926cu: goto label_1f926c;
        case 0x1f9270u: goto label_1f9270;
        case 0x1f9274u: goto label_1f9274;
        case 0x1f9278u: goto label_1f9278;
        case 0x1f927cu: goto label_1f927c;
        case 0x1f9280u: goto label_1f9280;
        case 0x1f9284u: goto label_1f9284;
        case 0x1f9288u: goto label_1f9288;
        case 0x1f928cu: goto label_1f928c;
        case 0x1f9290u: goto label_1f9290;
        case 0x1f9294u: goto label_1f9294;
        case 0x1f9298u: goto label_1f9298;
        case 0x1f929cu: goto label_1f929c;
        case 0x1f92a0u: goto label_1f92a0;
        case 0x1f92a4u: goto label_1f92a4;
        case 0x1f92a8u: goto label_1f92a8;
        case 0x1f92acu: goto label_1f92ac;
        case 0x1f92b0u: goto label_1f92b0;
        case 0x1f92b4u: goto label_1f92b4;
        case 0x1f92b8u: goto label_1f92b8;
        case 0x1f92bcu: goto label_1f92bc;
        case 0x1f92c0u: goto label_1f92c0;
        case 0x1f92c4u: goto label_1f92c4;
        case 0x1f92c8u: goto label_1f92c8;
        case 0x1f92ccu: goto label_1f92cc;
        case 0x1f92d0u: goto label_1f92d0;
        case 0x1f92d4u: goto label_1f92d4;
        case 0x1f92d8u: goto label_1f92d8;
        case 0x1f92dcu: goto label_1f92dc;
        case 0x1f92e0u: goto label_1f92e0;
        case 0x1f92e4u: goto label_1f92e4;
        case 0x1f92e8u: goto label_1f92e8;
        case 0x1f92ecu: goto label_1f92ec;
        case 0x1f92f0u: goto label_1f92f0;
        case 0x1f92f4u: goto label_1f92f4;
        case 0x1f92f8u: goto label_1f92f8;
        case 0x1f92fcu: goto label_1f92fc;
        case 0x1f9300u: goto label_1f9300;
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9308u: goto label_1f9308;
        case 0x1f930cu: goto label_1f930c;
        case 0x1f9310u: goto label_1f9310;
        case 0x1f9314u: goto label_1f9314;
        case 0x1f9318u: goto label_1f9318;
        case 0x1f931cu: goto label_1f931c;
        case 0x1f9320u: goto label_1f9320;
        case 0x1f9324u: goto label_1f9324;
        case 0x1f9328u: goto label_1f9328;
        case 0x1f932cu: goto label_1f932c;
        case 0x1f9330u: goto label_1f9330;
        case 0x1f9334u: goto label_1f9334;
        case 0x1f9338u: goto label_1f9338;
        case 0x1f933cu: goto label_1f933c;
        case 0x1f9340u: goto label_1f9340;
        case 0x1f9344u: goto label_1f9344;
        case 0x1f9348u: goto label_1f9348;
        case 0x1f934cu: goto label_1f934c;
        case 0x1f9350u: goto label_1f9350;
        case 0x1f9354u: goto label_1f9354;
        case 0x1f9358u: goto label_1f9358;
        case 0x1f935cu: goto label_1f935c;
        case 0x1f9360u: goto label_1f9360;
        case 0x1f9364u: goto label_1f9364;
        case 0x1f9368u: goto label_1f9368;
        case 0x1f936cu: goto label_1f936c;
        case 0x1f9370u: goto label_1f9370;
        case 0x1f9374u: goto label_1f9374;
        case 0x1f9378u: goto label_1f9378;
        case 0x1f937cu: goto label_1f937c;
        case 0x1f9380u: goto label_1f9380;
        case 0x1f9384u: goto label_1f9384;
        case 0x1f9388u: goto label_1f9388;
        case 0x1f938cu: goto label_1f938c;
        case 0x1f9390u: goto label_1f9390;
        case 0x1f9394u: goto label_1f9394;
        case 0x1f9398u: goto label_1f9398;
        case 0x1f939cu: goto label_1f939c;
        case 0x1f93a0u: goto label_1f93a0;
        case 0x1f93a4u: goto label_1f93a4;
        case 0x1f93a8u: goto label_1f93a8;
        case 0x1f93acu: goto label_1f93ac;
        case 0x1f93b0u: goto label_1f93b0;
        case 0x1f93b4u: goto label_1f93b4;
        case 0x1f93b8u: goto label_1f93b8;
        case 0x1f93bcu: goto label_1f93bc;
        case 0x1f93c0u: goto label_1f93c0;
        case 0x1f93c4u: goto label_1f93c4;
        case 0x1f93c8u: goto label_1f93c8;
        case 0x1f93ccu: goto label_1f93cc;
        case 0x1f93d0u: goto label_1f93d0;
        case 0x1f93d4u: goto label_1f93d4;
        case 0x1f93d8u: goto label_1f93d8;
        case 0x1f93dcu: goto label_1f93dc;
        case 0x1f93e0u: goto label_1f93e0;
        case 0x1f93e4u: goto label_1f93e4;
        case 0x1f93e8u: goto label_1f93e8;
        case 0x1f93ecu: goto label_1f93ec;
        case 0x1f93f0u: goto label_1f93f0;
        case 0x1f93f4u: goto label_1f93f4;
        case 0x1f93f8u: goto label_1f93f8;
        case 0x1f93fcu: goto label_1f93fc;
        case 0x1f9400u: goto label_1f9400;
        case 0x1f9404u: goto label_1f9404;
        case 0x1f9408u: goto label_1f9408;
        case 0x1f940cu: goto label_1f940c;
        case 0x1f9410u: goto label_1f9410;
        case 0x1f9414u: goto label_1f9414;
        case 0x1f9418u: goto label_1f9418;
        case 0x1f941cu: goto label_1f941c;
        case 0x1f9420u: goto label_1f9420;
        case 0x1f9424u: goto label_1f9424;
        case 0x1f9428u: goto label_1f9428;
        case 0x1f942cu: goto label_1f942c;
        case 0x1f9430u: goto label_1f9430;
        case 0x1f9434u: goto label_1f9434;
        case 0x1f9438u: goto label_1f9438;
        case 0x1f943cu: goto label_1f943c;
        case 0x1f9440u: goto label_1f9440;
        case 0x1f9444u: goto label_1f9444;
        case 0x1f9448u: goto label_1f9448;
        case 0x1f944cu: goto label_1f944c;
        default: return;
    }

label_1f8c80:
    // 0x1f8c80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f8c80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8c84:
    // 0x1f8c84: 0x0  nop
    ctx->pc = 0x1f8c84u;
    // NOP
label_1f8c88:
    // 0x1f8c88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8c88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8c8c:
    // 0x1f8c8c: 0x0  nop
    ctx->pc = 0x1f8c8cu;
    // NOP
label_1f8c90:
    // 0x1f8c90: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1f8c94:
    if (ctx->pc == 0x1F8C94u) {
        ctx->pc = 0x1F8C98u;
        goto label_1f8c98;
    }
    ctx->pc = 0x1F8C90u;
    {
        const bool branch_taken_0x1f8c90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8c90) {
            ctx->pc = 0x1F8CB4u;
            goto label_1f8cb4;
        }
    }
    ctx->pc = 0x1F8C98u;
label_1f8c98:
    // 0x1f8c98: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1f8c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8c9c:
    // 0x1f8c9c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1f8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1f8ca0:
    // 0x1f8ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8ca4:
    // 0x1f8ca4: 0x0  nop
    ctx->pc = 0x1f8ca4u;
    // NOP
label_1f8ca8:
    // 0x1f8ca8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f8cac:
    // 0x1f8cac: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1f8cb0:
    if (ctx->pc == 0x1F8CB0u) {
        ctx->pc = 0x1F8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CACu;
        // 0x1f8cb0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8CB4u;
        goto label_1f8cb4;
    }
    ctx->pc = 0x1F8CACu;
    {
        const bool branch_taken_0x1f8cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CACu;
        // 0x1f8cb0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cac) {
            ctx->pc = 0x1F8D20u;
            goto label_1f8d20;
        }
    }
    ctx->pc = 0x1F8CB4u;
label_1f8cb4:
    // 0x1f8cb4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f8cb8:
    if (ctx->pc == 0x1F8CB8u) {
        ctx->pc = 0x1F8CBCu;
        goto label_1f8cbc;
    }
    ctx->pc = 0x1F8CB4u;
    {
        const bool branch_taken_0x1f8cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8cb4) {
            ctx->pc = 0x1F8CE4u;
            goto label_1f8ce4;
        }
    }
    ctx->pc = 0x1F8CBCu;
label_1f8cbc:
    // 0x1f8cbc: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1f8cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1f8cc0:
    // 0x1f8cc0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f8cc4:
    if (ctx->pc == 0x1F8CC4u) {
        ctx->pc = 0x1F8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CC0u;
        // 0x1f8cc4: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8CC8u;
        goto label_1f8cc8;
    }
    ctx->pc = 0x1F8CC0u;
    {
        const bool branch_taken_0x1f8cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CC0u;
        // 0x1f8cc4: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cc0) {
            ctx->pc = 0x1F8CD8u;
            goto label_1f8cd8;
        }
    }
    ctx->pc = 0x1F8CC8u;
label_1f8cc8:
    // 0x1f8cc8: 0x30430020  andi        $v1, $v0, 0x20
    ctx->pc = 0x1f8cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1f8ccc:
    // 0x1f8ccc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1f8cd0:
    if (ctx->pc == 0x1F8CD0u) {
        ctx->pc = 0x1F8CD4u;
        goto label_1f8cd4;
    }
    ctx->pc = 0x1F8CCCu;
    {
        const bool branch_taken_0x1f8ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ccc) {
            ctx->pc = 0x1F8CE4u;
            goto label_1f8ce4;
        }
    }
    ctx->pc = 0x1F8CD4u;
label_1f8cd4:
    // 0x1f8cd4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1f8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1f8cd8:
    // 0x1f8cd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f8cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f8cdc:
    // 0x1f8cdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f8ce0:
    if (ctx->pc == 0x1F8CE0u) {
        ctx->pc = 0x1F8CE4u;
        goto label_1f8ce4;
    }
    ctx->pc = 0x1F8CDCu;
    {
        const bool branch_taken_0x1f8cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8cdc) {
            ctx->pc = 0x1F8CECu;
            goto label_1f8cec;
        }
    }
    ctx->pc = 0x1F8CE4u;
label_1f8ce4:
    // 0x1f8ce4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f8ce8:
    if (ctx->pc == 0x1F8CE8u) {
        ctx->pc = 0x1F8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CE4u;
        // 0x1f8ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8CECu;
        goto label_1f8cec;
    }
    ctx->pc = 0x1F8CE4u;
    {
        const bool branch_taken_0x1f8ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CE4u;
        // 0x1f8ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ce4) {
            ctx->pc = 0x1F8CF0u;
            goto label_1f8cf0;
        }
    }
    ctx->pc = 0x1F8CECu;
label_1f8cec:
    // 0x1f8cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f8cf0:
    // 0x1f8cf0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f8cf4:
    if (ctx->pc == 0x1F8CF4u) {
        ctx->pc = 0x1F8CF8u;
        goto label_1f8cf8;
    }
    ctx->pc = 0x1F8CF0u;
    {
        const bool branch_taken_0x1f8cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8cf0) {
            ctx->pc = 0x1F8D1Cu;
            goto label_1f8d1c;
        }
    }
    ctx->pc = 0x1F8CF8u;
label_1f8cf8:
    // 0x1f8cf8: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1f8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
label_1f8cfc:
    // 0x1f8cfc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f8cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1f8d00:
    // 0x1f8d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8d04:
    // 0x1f8d04: 0x0  nop
    ctx->pc = 0x1f8d04u;
    // NOP
label_1f8d08:
    // 0x1f8d08: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f8d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8d0c:
    // 0x1f8d0c: 0x0  nop
    ctx->pc = 0x1f8d0cu;
    // NOP
label_1f8d10:
    // 0x1f8d10: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1f8d14:
    if (ctx->pc == 0x1F8D14u) {
        ctx->pc = 0x1F8D18u;
        goto label_1f8d18;
    }
    ctx->pc = 0x1F8D10u;
    {
        const bool branch_taken_0x1f8d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8d10) {
            ctx->pc = 0x1F8D1Cu;
            goto label_1f8d1c;
        }
    }
    ctx->pc = 0x1F8D18u;
label_1f8d18:
    // 0x1f8d18: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f8d18u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f8d1c:
    // 0x1f8d1c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1f8d1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1f8d20:
    // 0x1f8d20: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f8d20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8d24:
    // 0x1f8d24: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f8d28:
    // 0x1f8d28: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f8d2c:
    // 0x1f8d2c: 0x2442c5a8  addiu       $v0, $v0, -0x3A58
    ctx->pc = 0x1f8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952360));
label_1f8d30:
    // 0x1f8d30: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8d34:
    // 0x1f8d34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8d38:
    // 0x1f8d38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f8d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8d3c:
    // 0x1f8d3c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f8d40:
    // 0x1f8d40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8d44:
    // 0x1f8d44: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8d48:
    // 0x1f8d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f8d4c:
    // 0x1f8d4c: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1f8d4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8d50:
    // 0x1f8d50: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1f8d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1f8d54:
    // 0x1f8d54: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_1f8d58:
    if (ctx->pc == 0x1F8D58u) {
        ctx->pc = 0x1F8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D54u;
        // 0x1f8d58: 0x30a600ff  andi        $a2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D5Cu;
        goto label_1f8d5c;
    }
    ctx->pc = 0x1F8D54u;
    {
        const bool branch_taken_0x1f8d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D54u;
        // 0x1f8d58: 0x30a600ff  andi        $a2, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d54) {
            ctx->pc = 0x1F8EB4u;
            goto label_1f8eb4;
        }
    }
    ctx->pc = 0x1F8D5Cu;
label_1f8d5c:
    // 0x1f8d5c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1f8d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1f8d60:
    // 0x1f8d60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f8d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f8d64:
    // 0x1f8d64: 0xc0552b0  jal         func_154AC0
label_1f8d68:
    if (ctx->pc == 0x1F8D68u) {
        ctx->pc = 0x1F8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D64u;
        // 0x1f8d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D6Cu;
        goto label_1f8d6c;
    }
    ctx->pc = 0x1F8D64u;
    SET_GPR_U32(ctx, 31, 0x1F8D6Cu);
    ctx->pc = 0x1F8D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D64u;
    // 0x1f8d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F8D64u, 0x1F8D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D6Cu;
label_1f8d6c:
    // 0x1f8d6c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8d6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8d70:
    // 0x1f8d70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f8d74:
    // 0x1f8d74: 0xc0552b0  jal         func_154AC0
label_1f8d78:
    if (ctx->pc == 0x1F8D78u) {
        ctx->pc = 0x1F8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D74u;
        // 0x1f8d78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D7Cu;
        goto label_1f8d7c;
    }
    ctx->pc = 0x1F8D74u;
    SET_GPR_U32(ctx, 31, 0x1F8D7Cu);
    ctx->pc = 0x1F8D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D74u;
    // 0x1f8d78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F8D74u, 0x1F8D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D7Cu;
label_1f8d7c:
    // 0x1f8d7c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8d7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8d80:
    // 0x1f8d80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f8d84:
    // 0x1f8d84: 0xc0552b0  jal         func_154AC0
label_1f8d88:
    if (ctx->pc == 0x1F8D88u) {
        ctx->pc = 0x1F8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D84u;
        // 0x1f8d88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D8Cu;
        goto label_1f8d8c;
    }
    ctx->pc = 0x1F8D84u;
    SET_GPR_U32(ctx, 31, 0x1F8D8Cu);
    ctx->pc = 0x1F8D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D84u;
    // 0x1f8d88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F8D84u, 0x1F8D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D8Cu;
label_1f8d8c:
    // 0x1f8d8c: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f8d8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8d90:
    // 0x1f8d90: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f8d94:
    // 0x1f8d94: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f8d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f8d98:
    // 0x1f8d98: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x1f8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
label_1f8d9c:
    // 0x1f8d9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f8d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f8da0:
    // 0x1f8da0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f8da0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8da4:
    // 0x1f8da4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8da8:
    // 0x1f8da8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f8da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8dac:
    // 0x1f8dac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f8dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f8db0:
    // 0x1f8db0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8db4:
    // 0x1f8db4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8db8:
    // 0x1f8db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f8dbc:
    // 0x1f8dbc: 0xc066e26  jal         func_19B898
label_1f8dc0:
    if (ctx->pc == 0x1F8DC0u) {
        ctx->pc = 0x1F8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DBCu;
        // 0x1f8dc0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8DC4u;
        goto label_1f8dc4;
    }
    ctx->pc = 0x1F8DBCu;
    SET_GPR_U32(ctx, 31, 0x1F8DC4u);
    ctx->pc = 0x1F8DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8DBCu;
    // 0x1f8dc0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1F8DC4u;
label_1f8dc4:
    // 0x1f8dc4: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f8dc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8dc8:
    // 0x1f8dc8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f8dcc:
    // 0x1f8dcc: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f8dd0:
    // 0x1f8dd0: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x1f8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
label_1f8dd4:
    // 0x1f8dd4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1f8dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1f8dd8:
    // 0x1f8dd8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f8dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8ddc:
    // 0x1f8ddc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8de0:
    // 0x1f8de0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f8de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8de4:
    // 0x1f8de4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f8de8:
    // 0x1f8de8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8dec:
    // 0x1f8dec: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8df0:
    // 0x1f8df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f8df4:
    // 0x1f8df4: 0xc066e26  jal         func_19B898
label_1f8df8:
    if (ctx->pc == 0x1F8DF8u) {
        ctx->pc = 0x1F8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DF4u;
        // 0x1f8df8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8DFCu;
        goto label_1f8dfc;
    }
    ctx->pc = 0x1F8DF4u;
    SET_GPR_U32(ctx, 31, 0x1F8DFCu);
    ctx->pc = 0x1F8DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8DF4u;
    // 0x1f8df8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1F8DFCu;
label_1f8dfc:
    // 0x1f8dfc: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f8dfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8e00:
    // 0x1f8e00: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f8e04:
    // 0x1f8e04: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f8e08:
    // 0x1f8e08: 0x2442c550  addiu       $v0, $v0, -0x3AB0
    ctx->pc = 0x1f8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952272));
label_1f8e0c:
    // 0x1f8e0c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1f8e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1f8e10:
    // 0x1f8e10: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f8e10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8e14:
    // 0x1f8e14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8e18:
    // 0x1f8e18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f8e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8e1c:
    // 0x1f8e1c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1f8e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f8e20:
    // 0x1f8e20: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f8e24:
    // 0x1f8e24: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8e28:
    // 0x1f8e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f8e2c:
    // 0x1f8e2c: 0xc066e26  jal         func_19B898
label_1f8e30:
    if (ctx->pc == 0x1F8E30u) {
        ctx->pc = 0x1F8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E2Cu;
        // 0x1f8e30: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E34u;
        goto label_1f8e34;
    }
    ctx->pc = 0x1F8E2Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E34u);
    ctx->pc = 0x1F8E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E2Cu;
    // 0x1f8e30: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1F8E34u;
label_1f8e34:
    // 0x1f8e34: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1f8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1f8e38:
    // 0x1f8e38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f8e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f8e3c:
    // 0x1f8e3c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1f8e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_1f8e40:
    // 0x1f8e40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8e44:
    // 0x1f8e44: 0xc07e640  jal         func_1F9900
label_1f8e48:
    if (ctx->pc == 0x1F8E48u) {
        ctx->pc = 0x1F8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E44u;
        // 0x1f8e48: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E4Cu;
        goto label_1f8e4c;
    }
    ctx->pc = 0x1F8E44u;
    SET_GPR_U32(ctx, 31, 0x1F8E4Cu);
    ctx->pc = 0x1F8E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E44u;
    // 0x1f8e48: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9900u;
    { ctx->pc = 0x1f9900; return; }
    ctx->pc = 0x1F8E4Cu;
label_1f8e4c:
    // 0x1f8e4c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1f8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1f8e50:
    // 0x1f8e50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f8e54:
    // 0x1f8e54: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1f8e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_1f8e58:
    // 0x1f8e58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8e5c:
    // 0x1f8e5c: 0xc07e640  jal         func_1F9900
label_1f8e60:
    if (ctx->pc == 0x1F8E60u) {
        ctx->pc = 0x1F8E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E5Cu;
        // 0x1f8e60: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E64u;
        goto label_1f8e64;
    }
    ctx->pc = 0x1F8E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E64u);
    ctx->pc = 0x1F8E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E5Cu;
    // 0x1f8e60: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9900u;
    { ctx->pc = 0x1f9900; return; }
    ctx->pc = 0x1F8E64u;
label_1f8e64:
    // 0x1f8e64: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1f8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1f8e68:
    // 0x1f8e68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f8e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f8e6c:
    // 0x1f8e6c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1f8e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_1f8e70:
    // 0x1f8e70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8e74:
    // 0x1f8e74: 0xc07e640  jal         func_1F9900
label_1f8e78:
    if (ctx->pc == 0x1F8E78u) {
        ctx->pc = 0x1F8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E74u;
        // 0x1f8e78: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E7Cu;
        goto label_1f8e7c;
    }
    ctx->pc = 0x1F8E74u;
    SET_GPR_U32(ctx, 31, 0x1F8E7Cu);
    ctx->pc = 0x1F8E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E74u;
    // 0x1f8e78: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9900u;
    { ctx->pc = 0x1f9900; return; }
    ctx->pc = 0x1F8E7Cu;
label_1f8e7c:
    // 0x1f8e7c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8e7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8e80:
    // 0x1f8e80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f8e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1f8e84:
    // 0x1f8e84: 0xc05524c  jal         func_154930
label_1f8e88:
    if (ctx->pc == 0x1F8E88u) {
        ctx->pc = 0x1F8E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E84u;
        // 0x1f8e88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E8Cu;
        goto label_1f8e8c;
    }
    ctx->pc = 0x1F8E84u;
    SET_GPR_U32(ctx, 31, 0x1F8E8Cu);
    ctx->pc = 0x1F8E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E84u;
    // 0x1f8e88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F8E84u, 0x1F8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E8Cu;
label_1f8e8c:
    // 0x1f8e8c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8e8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8e90:
    // 0x1f8e90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f8e94:
    // 0x1f8e94: 0xc05524c  jal         func_154930
label_1f8e98:
    if (ctx->pc == 0x1F8E98u) {
        ctx->pc = 0x1F8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E94u;
        // 0x1f8e98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8E9Cu;
        goto label_1f8e9c;
    }
    ctx->pc = 0x1F8E94u;
    SET_GPR_U32(ctx, 31, 0x1F8E9Cu);
    ctx->pc = 0x1F8E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E94u;
    // 0x1f8e98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F8E94u, 0x1F8E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8E9Cu;
label_1f8e9c:
    // 0x1f8e9c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8e9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8ea0:
    // 0x1f8ea0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1f8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1f8ea4:
    // 0x1f8ea4: 0xc05524c  jal         func_154930
label_1f8ea8:
    if (ctx->pc == 0x1F8EA8u) {
        ctx->pc = 0x1F8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EA4u;
        // 0x1f8ea8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8EACu;
        goto label_1f8eac;
    }
    ctx->pc = 0x1F8EA4u;
    SET_GPR_U32(ctx, 31, 0x1F8EACu);
    ctx->pc = 0x1F8EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EA4u;
    // 0x1f8ea8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F8EA4u, 0x1F8EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EACu;
label_1f8eac:
    // 0x1f8eac: 0x10000034  b           . + 4 + (0x34 << 2)
label_1f8eb0:
    if (ctx->pc == 0x1F8EB0u) {
        ctx->pc = 0x1F8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EACu;
        // 0x1f8eb0: 0x92050010  lbu         $a1, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8EB4u;
        goto label_1f8eb4;
    }
    ctx->pc = 0x1F8EACu;
    {
        const bool branch_taken_0x1f8eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EACu;
        // 0x1f8eb0: 0x92050010  lbu         $a1, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8eac) {
            ctx->pc = 0x1F8F80u;
            goto label_1f8f80;
        }
    }
    ctx->pc = 0x1F8EB4u;
label_1f8eb4:
    // 0x1f8eb4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1f8eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1f8eb8:
    // 0x1f8eb8: 0xc0552b0  jal         func_154AC0
label_1f8ebc:
    if (ctx->pc == 0x1F8EBCu) {
        ctx->pc = 0x1F8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EB8u;
        // 0x1f8ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8EC0u;
        goto label_1f8ec0;
    }
    ctx->pc = 0x1F8EB8u;
    SET_GPR_U32(ctx, 31, 0x1F8EC0u);
    ctx->pc = 0x1F8EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EB8u;
    // 0x1f8ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F8EB8u, 0x1F8EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EC0u;
label_1f8ec0:
    // 0x1f8ec0: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8ec0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8ec4:
    // 0x1f8ec4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1f8ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1f8ec8:
    // 0x1f8ec8: 0xc0552b0  jal         func_154AC0
label_1f8ecc:
    if (ctx->pc == 0x1F8ECCu) {
        ctx->pc = 0x1F8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EC8u;
        // 0x1f8ecc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8ED0u;
        goto label_1f8ed0;
    }
    ctx->pc = 0x1F8EC8u;
    SET_GPR_U32(ctx, 31, 0x1F8ED0u);
    ctx->pc = 0x1F8ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EC8u;
    // 0x1f8ecc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F8EC8u, 0x1F8ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8ED0u;
label_1f8ed0:
    // 0x1f8ed0: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8ed0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8ed4:
    // 0x1f8ed4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1f8ed8:
    // 0x1f8ed8: 0xc0552b0  jal         func_154AC0
label_1f8edc:
    if (ctx->pc == 0x1F8EDCu) {
        ctx->pc = 0x1F8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8ED8u;
        // 0x1f8edc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8EE0u;
        goto label_1f8ee0;
    }
    ctx->pc = 0x1F8ED8u;
    SET_GPR_U32(ctx, 31, 0x1F8EE0u);
    ctx->pc = 0x1F8EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8ED8u;
    // 0x1f8edc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AC0u, 0x1F8ED8u, 0x1F8EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EE0u;
label_1f8ee0:
    // 0x1f8ee0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1f8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1f8ee4:
    // 0x1f8ee4: 0xc0552d8  jal         func_154B60
label_1f8ee8:
    if (ctx->pc == 0x1F8EE8u) {
        ctx->pc = 0x1F8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EE4u;
        // 0x1f8ee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8EECu;
        goto label_1f8eec;
    }
    ctx->pc = 0x1F8EE4u;
    SET_GPR_U32(ctx, 31, 0x1F8EECu);
    ctx->pc = 0x1F8EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EE4u;
    // 0x1f8ee8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F8EE4u, 0x1F8EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EECu;
label_1f8eec:
    // 0x1f8eec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1f8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1f8ef0:
    // 0x1f8ef0: 0xc0552d8  jal         func_154B60
label_1f8ef4:
    if (ctx->pc == 0x1F8EF4u) {
        ctx->pc = 0x1F8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EF0u;
        // 0x1f8ef4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8EF8u;
        goto label_1f8ef8;
    }
    ctx->pc = 0x1F8EF0u;
    SET_GPR_U32(ctx, 31, 0x1F8EF8u);
    ctx->pc = 0x1F8EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EF0u;
    // 0x1f8ef4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F8EF0u, 0x1F8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EF8u;
label_1f8ef8:
    // 0x1f8ef8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1f8ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1f8efc:
    // 0x1f8efc: 0xc0552d8  jal         func_154B60
label_1f8f00:
    if (ctx->pc == 0x1F8F00u) {
        ctx->pc = 0x1F8F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EFCu;
        // 0x1f8f00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F04u;
        goto label_1f8f04;
    }
    ctx->pc = 0x1F8EFCu;
    SET_GPR_U32(ctx, 31, 0x1F8F04u);
    ctx->pc = 0x1F8F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EFCu;
    // 0x1f8f00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F8EFCu, 0x1F8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F04u;
label_1f8f04:
    // 0x1f8f04: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1f8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1f8f08:
    // 0x1f8f08: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1f8f0c:
    // 0x1f8f0c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1f8f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_1f8f10:
    // 0x1f8f10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8f14:
    // 0x1f8f14: 0xc07e640  jal         func_1F9900
label_1f8f18:
    if (ctx->pc == 0x1F8F18u) {
        ctx->pc = 0x1F8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F14u;
        // 0x1f8f18: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F1Cu;
        goto label_1f8f1c;
    }
    ctx->pc = 0x1F8F14u;
    SET_GPR_U32(ctx, 31, 0x1F8F1Cu);
    ctx->pc = 0x1F8F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F14u;
    // 0x1f8f18: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9900u;
    { ctx->pc = 0x1f9900; return; }
    ctx->pc = 0x1F8F1Cu;
label_1f8f1c:
    // 0x1f8f1c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1f8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1f8f20:
    // 0x1f8f20: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1f8f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1f8f24:
    // 0x1f8f24: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1f8f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_1f8f28:
    // 0x1f8f28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8f2c:
    // 0x1f8f2c: 0xc07e640  jal         func_1F9900
label_1f8f30:
    if (ctx->pc == 0x1F8F30u) {
        ctx->pc = 0x1F8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F2Cu;
        // 0x1f8f30: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F34u;
        goto label_1f8f34;
    }
    ctx->pc = 0x1F8F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F8F34u);
    ctx->pc = 0x1F8F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F2Cu;
    // 0x1f8f30: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9900u;
    { ctx->pc = 0x1f9900; return; }
    ctx->pc = 0x1F8F34u;
label_1f8f34:
    // 0x1f8f34: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1f8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1f8f38:
    // 0x1f8f38: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1f8f3c:
    // 0x1f8f3c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1f8f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_1f8f40:
    // 0x1f8f40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f8f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f8f44:
    // 0x1f8f44: 0xc07e640  jal         func_1F9900
label_1f8f48:
    if (ctx->pc == 0x1F8F48u) {
        ctx->pc = 0x1F8F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F44u;
        // 0x1f8f48: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F4Cu;
        goto label_1f8f4c;
    }
    ctx->pc = 0x1F8F44u;
    SET_GPR_U32(ctx, 31, 0x1F8F4Cu);
    ctx->pc = 0x1F8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F44u;
    // 0x1f8f48: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9900u;
    { ctx->pc = 0x1f9900; return; }
    ctx->pc = 0x1F8F4Cu;
label_1f8f4c:
    // 0x1f8f4c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8f4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8f50:
    // 0x1f8f50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1f8f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1f8f54:
    // 0x1f8f54: 0xc05524c  jal         func_154930
label_1f8f58:
    if (ctx->pc == 0x1F8F58u) {
        ctx->pc = 0x1F8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F54u;
        // 0x1f8f58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F5Cu;
        goto label_1f8f5c;
    }
    ctx->pc = 0x1F8F54u;
    SET_GPR_U32(ctx, 31, 0x1F8F5Cu);
    ctx->pc = 0x1F8F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F54u;
    // 0x1f8f58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F8F54u, 0x1F8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F5Cu;
label_1f8f5c:
    // 0x1f8f5c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8f5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8f60:
    // 0x1f8f60: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1f8f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1f8f64:
    // 0x1f8f64: 0xc05524c  jal         func_154930
label_1f8f68:
    if (ctx->pc == 0x1F8F68u) {
        ctx->pc = 0x1F8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F64u;
        // 0x1f8f68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F6Cu;
        goto label_1f8f6c;
    }
    ctx->pc = 0x1F8F64u;
    SET_GPR_U32(ctx, 31, 0x1F8F6Cu);
    ctx->pc = 0x1F8F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F64u;
    // 0x1f8f68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F8F64u, 0x1F8F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F6Cu;
label_1f8f6c:
    // 0x1f8f6c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f8f6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8f70:
    // 0x1f8f70: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1f8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1f8f74:
    // 0x1f8f74: 0xc05524c  jal         func_154930
label_1f8f78:
    if (ctx->pc == 0x1F8F78u) {
        ctx->pc = 0x1F8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F74u;
        // 0x1f8f78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8F7Cu;
        goto label_1f8f7c;
    }
    ctx->pc = 0x1F8F74u;
    SET_GPR_U32(ctx, 31, 0x1F8F7Cu);
    ctx->pc = 0x1F8F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F74u;
    // 0x1f8f78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F8F74u, 0x1F8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F7Cu;
label_1f8f7c:
    // 0x1f8f7c: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f8f7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f8f80:
    // 0x1f8f80: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f8f84:
    // 0x1f8f84: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f8f88:
    // 0x1f8f88: 0x2442c5a8  addiu       $v0, $v0, -0x3A58
    ctx->pc = 0x1f8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952360));
label_1f8f8c:
    // 0x1f8f8c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1f8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f8f90:
    // 0x1f8f90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8f94:
    // 0x1f8f94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f8f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f8f98:
    // 0x1f8f98: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f8f9c:
    // 0x1f8f9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f8fa0:
    // 0x1f8fa0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f8fa4:
    // 0x1f8fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f8fa8:
    // 0x1f8fa8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1f8fa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1f8fac:
    // 0x1f8fac: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1f8facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1f8fb0:
    // 0x1f8fb0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_1f8fb4:
    if (ctx->pc == 0x1F8FB4u) {
        ctx->pc = 0x1F8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FB0u;
        // 0x1f8fb4: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8FB8u;
        goto label_1f8fb8;
    }
    ctx->pc = 0x1F8FB0u;
    {
        const bool branch_taken_0x1f8fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FB0u;
        // 0x1f8fb4: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8fb0) {
            ctx->pc = 0x1F9094u;
            goto label_1f9094;
        }
    }
    ctx->pc = 0x1F8FB8u;
label_1f8fb8:
    // 0x1f8fb8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1f8fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1f8fbc:
    // 0x1f8fbc: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f8fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f8fc0:
    // 0x1f8fc0: 0xc0646ac  jal         func_191AB0
label_1f8fc4:
    if (ctx->pc == 0x1F8FC4u) {
        ctx->pc = 0x1F8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FC0u;
        // 0x1f8fc4: 0x24a5a5c0  addiu       $a1, $a1, -0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8FC8u;
        goto label_1f8fc8;
    }
    ctx->pc = 0x1F8FC0u;
    SET_GPR_U32(ctx, 31, 0x1F8FC8u);
    ctx->pc = 0x1F8FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8FC0u;
    // 0x1f8fc4: 0x24a5a5c0  addiu       $a1, $a1, -0x5A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191AB0u, 0x1F8FC0u, 0x1F8FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8FC8u;
label_1f8fc8:
    // 0x1f8fc8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1f8fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1f8fcc:
    // 0x1f8fcc: 0xc421a5c0  lwc1        $f1, -0x5A40($at)
    ctx->pc = 0x1f8fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8fd0:
    // 0x1f8fd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f8fd4:
    // 0x1f8fd4: 0x0  nop
    ctx->pc = 0x1f8fd4u;
    // NOP
label_1f8fd8:
    // 0x1f8fd8: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x1f8fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1f8fdc:
    // 0x1f8fdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1f8fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1f8fe0:
    // 0x1f8fe0: 0xc421a5c8  lwc1        $f1, -0x5A38($at)
    ctx->pc = 0x1f8fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294944200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8fe4:
    // 0x1f8fe4: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x1f8fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1f8fe8:
    // 0x1f8fe8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1f8fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f8fec:
    // 0x1f8fec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f8fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f8ff0:
    // 0x1f8ff0: 0x0  nop
    ctx->pc = 0x1f8ff0u;
    // NOP
label_1f8ff4:
    // 0x1f8ff4: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1f8ff8:
    if (ctx->pc == 0x1F8FF8u) {
        ctx->pc = 0x1F8FFCu;
        goto label_1f8ffc;
    }
    ctx->pc = 0x1F8FF4u;
    {
        const bool branch_taken_0x1f8ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8ff4) {
            ctx->pc = 0x1F903Cu;
            goto label_1f903c;
        }
    }
    ctx->pc = 0x1F8FFCu;
label_1f8ffc:
    // 0x1f8ffc: 0xc08f0cc  jal         func_23C330
label_1f9000:
    if (ctx->pc == 0x1F9000u) {
        ctx->pc = 0x1F9004u;
        goto label_1f9004;
    }
    ctx->pc = 0x1F8FFCu;
    SET_GPR_U32(ctx, 31, 0x1F9004u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F9004u;
label_1f9004:
    // 0x1f9004: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9008:
    // 0x1f9008: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x1f9008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_1f900c:
    // 0x1f900c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f900cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1f9010:
    // 0x1f9010: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f9010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1f9014:
    // 0x1f9014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9018:
    // 0x1f9018: 0x0  nop
    ctx->pc = 0x1f9018u;
    // NOP
label_1f901c:
    // 0x1f901c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1f901cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_1f9020:
    // 0x1f9020: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f9020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1f9024:
    // 0x1f9024: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9028:
    // 0x1f9028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f902c:
    // 0x1f902c: 0x0  nop
    ctx->pc = 0x1f902cu;
    // NOP
label_1f9030:
    // 0x1f9030: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f9030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1f9034:
    // 0x1f9034: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f9034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1f9038:
    // 0x1f9038: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1f9038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1f903c:
    // 0x1f903c: 0xc08f0cc  jal         func_23C330
label_1f9040:
    if (ctx->pc == 0x1F9040u) {
        ctx->pc = 0x1F9044u;
        goto label_1f9044;
    }
    ctx->pc = 0x1F903Cu;
    SET_GPR_U32(ctx, 31, 0x1F9044u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F9044u;
label_1f9044:
    // 0x1f9044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9048:
    // 0x1f9048: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f9048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f904c:
    // 0x1f904c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1f904cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f9050:
    // 0x1f9050: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f9050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1f9054:
    // 0x1f9054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9058:
    // 0x1f9058: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1f9058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f905c:
    // 0x1f905c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1f905cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1f9060:
    // 0x1f9060: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1f9060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_1f9064:
    // 0x1f9064: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f9064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1f9068:
    // 0x1f9068: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f9068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f906c:
    // 0x1f906c: 0x0  nop
    ctx->pc = 0x1f906cu;
    // NOP
label_1f9070:
    // 0x1f9070: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1f9070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1f9074:
    // 0x1f9074: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1f9074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1f9078:
    // 0x1f9078: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f907c:
    // 0x1f907c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1f907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1f9080:
    // 0x1f9080: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f9080u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9084:
    // 0x1f9084: 0xc05524c  jal         func_154930
label_1f9088:
    if (ctx->pc == 0x1F9088u) {
        ctx->pc = 0x1F9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9084u;
        // 0x1f9088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F908Cu;
        goto label_1f908c;
    }
    ctx->pc = 0x1F9084u;
    SET_GPR_U32(ctx, 31, 0x1F908Cu);
    ctx->pc = 0x1F9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9084u;
    // 0x1f9088: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F9084u, 0x1F908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F908Cu;
label_1f908c:
    // 0x1f908c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1f9090:
    if (ctx->pc == 0x1F9090u) {
        ctx->pc = 0x1F9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F908Cu;
        // 0x1f9090: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9094u;
        goto label_1f9094;
    }
    ctx->pc = 0x1F908Cu;
    {
        const bool branch_taken_0x1f908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F908Cu;
        // 0x1f9090: 0x92040010  lbu         $a0, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f908c) {
            ctx->pc = 0x1F9110u;
            goto label_1f9110;
        }
    }
    ctx->pc = 0x1F9094u;
label_1f9094:
    // 0x1f9094: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_1f9098:
    if (ctx->pc == 0x1F9098u) {
        ctx->pc = 0x1F9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9094u;
        // 0x1f9098: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F909Cu;
        goto label_1f909c;
    }
    ctx->pc = 0x1F9094u;
    {
        const bool branch_taken_0x1f9094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9094u;
        // 0x1f9098: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9094) {
            ctx->pc = 0x1F90F4u;
            goto label_1f90f4;
        }
    }
    ctx->pc = 0x1F909Cu;
label_1f909c:
    // 0x1f909c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f90a0:
    // 0x1f90a0: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1f90a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1f90a4:
    // 0x1f90a4: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1f90a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1f90a8:
    // 0x1f90a8: 0xc04f328  jal         func_13CCA0
label_1f90ac:
    if (ctx->pc == 0x1F90ACu) {
        ctx->pc = 0x1F90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90A8u;
        // 0x1f90ac: 0x24a5a5b0  addiu       $a1, $a1, -0x5A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90B0u;
        goto label_1f90b0;
    }
    ctx->pc = 0x1F90A8u;
    SET_GPR_U32(ctx, 31, 0x1F90B0u);
    ctx->pc = 0x1F90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90A8u;
    // 0x1f90ac: 0x24a5a5b0  addiu       $a1, $a1, -0x5A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCA0u, 0x1F90A8u, 0x1F90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90B0u;
label_1f90b0:
    // 0x1f90b0: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f90b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f90b4:
    // 0x1f90b4: 0x2484a5b0  addiu       $a0, $a0, -0x5A50
    ctx->pc = 0x1f90b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944176));
label_1f90b8:
    // 0x1f90b8: 0xc066daa  jal         func_19B6A8
label_1f90bc:
    if (ctx->pc == 0x1F90BCu) {
        ctx->pc = 0x1F90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90B8u;
        // 0x1f90bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90C0u;
        goto label_1f90c0;
    }
    ctx->pc = 0x1F90B8u;
    SET_GPR_U32(ctx, 31, 0x1F90C0u);
    ctx->pc = 0x1F90BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90B8u;
    // 0x1f90bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x1F90B8u, 0x1F90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90C0u;
label_1f90c0:
    // 0x1f90c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1f90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1f90c4:
    // 0x1f90c4: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f90c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f90c8:
    // 0x1f90c8: 0x2484a5b0  addiu       $a0, $a0, -0x5A50
    ctx->pc = 0x1f90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944176));
label_1f90cc:
    // 0x1f90cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f90ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f90d0:
    // 0x1f90d0: 0xc066e14  jal         func_19B850
label_1f90d4:
    if (ctx->pc == 0x1F90D4u) {
        ctx->pc = 0x1F90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90D0u;
        // 0x1f90d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90D8u;
        goto label_1f90d8;
    }
    ctx->pc = 0x1F90D0u;
    SET_GPR_U32(ctx, 31, 0x1F90D8u);
    ctx->pc = 0x1F90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90D0u;
    // 0x1f90d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1F90D8u;
label_1f90d8:
    // 0x1f90d8: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f90d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f90dc:
    // 0x1f90dc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1f90dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1f90e0:
    // 0x1f90e0: 0x2484a5b0  addiu       $a0, $a0, -0x5A50
    ctx->pc = 0x1f90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944176));
label_1f90e4:
    // 0x1f90e4: 0xc05524c  jal         func_154930
label_1f90e8:
    if (ctx->pc == 0x1F90E8u) {
        ctx->pc = 0x1F90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90E4u;
        // 0x1f90e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90ECu;
        goto label_1f90ec;
    }
    ctx->pc = 0x1F90E4u;
    SET_GPR_U32(ctx, 31, 0x1F90ECu);
    ctx->pc = 0x1F90E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90E4u;
    // 0x1f90e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F90E4u, 0x1F90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90ECu;
label_1f90ec:
    // 0x1f90ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f90f0:
    if (ctx->pc == 0x1F90F0u) {
        ctx->pc = 0x1F90F4u;
        goto label_1f90f4;
    }
    ctx->pc = 0x1F90ECu;
    {
        const bool branch_taken_0x1f90ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f90ec) {
            ctx->pc = 0x1F910Cu;
            goto label_1f910c;
        }
    }
    ctx->pc = 0x1F90F4u;
label_1f90f4:
    // 0x1f90f4: 0xc0552d8  jal         func_154B60
label_1f90f8:
    if (ctx->pc == 0x1F90F8u) {
        ctx->pc = 0x1F90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90F4u;
        // 0x1f90f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F90FCu;
        goto label_1f90fc;
    }
    ctx->pc = 0x1F90F4u;
    SET_GPR_U32(ctx, 31, 0x1F90FCu);
    ctx->pc = 0x1F90F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90F4u;
    // 0x1f90f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B60u, 0x1F90F4u, 0x1F90FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90FCu;
label_1f90fc:
    // 0x1f90fc: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x1f90fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9100:
    // 0x1f9100: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1f9100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1f9104:
    // 0x1f9104: 0xc05524c  jal         func_154930
label_1f9108:
    if (ctx->pc == 0x1F9108u) {
        ctx->pc = 0x1F9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9104u;
        // 0x1f9108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F910Cu;
        goto label_1f910c;
    }
    ctx->pc = 0x1F9104u;
    SET_GPR_U32(ctx, 31, 0x1F910Cu);
    ctx->pc = 0x1F9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9104u;
    // 0x1f9108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154930u, 0x1F9104u, 0x1F910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F910Cu;
label_1f910c:
    // 0x1f910c: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f910cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9110:
    // 0x1f9110: 0x27828238  addiu       $v0, $gp, -0x7DC8
    ctx->pc = 0x1f9110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935096));
label_1f9114:
    // 0x1f9114: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f9114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f9118:
    // 0x1f9118: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f911c:
    // 0x1f911c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f9120:
    // 0x1f9120: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1f9124:
    if (ctx->pc == 0x1F9124u) {
        ctx->pc = 0x1F9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9120u;
        // 0x1f9124: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9128u;
        goto label_1f9128;
    }
    ctx->pc = 0x1F9120u;
    {
        const bool branch_taken_0x1f9120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9120u;
        // 0x1f9124: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9120) {
            ctx->pc = 0x1F9168u;
            goto label_1f9168;
        }
    }
    ctx->pc = 0x1F9128u;
label_1f9128:
    // 0x1f9128: 0x27828240  addiu       $v0, $gp, -0x7DC0
    ctx->pc = 0x1f9128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
label_1f912c:
    // 0x1f912c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f912cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f9130:
    // 0x1f9130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9134:
    // 0x1f9134: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9138:
    // 0x1f9138: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1f913c:
    if (ctx->pc == 0x1F913Cu) {
        ctx->pc = 0x1F913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9138u;
        // 0x1f913c: 0x27828250  addiu       $v0, $gp, -0x7DB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9140u;
        goto label_1f9140;
    }
    ctx->pc = 0x1F9138u;
    {
        const bool branch_taken_0x1f9138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9138u;
        // 0x1f913c: 0x27828250  addiu       $v0, $gp, -0x7DB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9138) {
            ctx->pc = 0x1F9168u;
            goto label_1f9168;
        }
    }
    ctx->pc = 0x1F9140u;
label_1f9140:
    // 0x1f9140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9144:
    // 0x1f9144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9148:
    // 0x1f9148: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f914c:
    if (ctx->pc == 0x1F914Cu) {
        ctx->pc = 0x1F9150u;
        goto label_1f9150;
    }
    ctx->pc = 0x1F9148u;
    {
        const bool branch_taken_0x1f9148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9148) {
            ctx->pc = 0x1F9168u;
            goto label_1f9168;
        }
    }
    ctx->pc = 0x1F9150u;
label_1f9150:
    // 0x1f9150: 0x27828268  addiu       $v0, $gp, -0x7D98
    ctx->pc = 0x1f9150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
label_1f9154:
    // 0x1f9154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9158:
    // 0x1f9158: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f915c:
    // 0x1f915c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1f9160:
    if (ctx->pc == 0x1F9160u) {
        ctx->pc = 0x1F9164u;
        goto label_1f9164;
    }
    ctx->pc = 0x1F915Cu;
    {
        const bool branch_taken_0x1f915c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f915c) {
            ctx->pc = 0x1F9168u;
            goto label_1f9168;
        }
    }
    ctx->pc = 0x1F9164u;
label_1f9164:
    // 0x1f9164: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f9164u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1f9168:
    // 0x1f9168: 0xc08f0cc  jal         func_23C330
label_1f916c:
    if (ctx->pc == 0x1F916Cu) {
        ctx->pc = 0x1F9170u;
        goto label_1f9170;
    }
    ctx->pc = 0x1F9168u;
    SET_GPR_U32(ctx, 31, 0x1F9170u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F9170u;
label_1f9170:
    // 0x1f9170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9174:
    // 0x1f9174: 0x0  nop
    ctx->pc = 0x1f9174u;
    // NOP
label_1f9178:
    // 0x1f9178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f9178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f917c:
    // 0x1f917c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1f917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1f9180:
    // 0x1f9180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9184:
    // 0x1f9184: 0x0  nop
    ctx->pc = 0x1f9184u;
    // NOP
label_1f9188:
    // 0x1f9188: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f9188u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1f918c:
    // 0x1f918c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1f918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_1f9190:
    // 0x1f9190: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f9190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1f9194:
    // 0x1f9194: 0x0  nop
    ctx->pc = 0x1f9194u;
    // NOP
label_1f9198:
    // 0x1f9198: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f919c:
    // 0x1f919c: 0x0  nop
    ctx->pc = 0x1f919cu;
    // NOP
label_1f91a0:
    // 0x1f91a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f91a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f91a4:
    // 0x1f91a4: 0x0  nop
    ctx->pc = 0x1f91a4u;
    // NOP
label_1f91a8:
    // 0x1f91a8: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
label_1f91ac:
    if (ctx->pc == 0x1F91ACu) {
        ctx->pc = 0x1F91B0u;
        goto label_1f91b0;
    }
    ctx->pc = 0x1F91A8u;
    {
        const bool branch_taken_0x1f91a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f91a8) {
            ctx->pc = 0x1F9314u;
            goto label_1f9314;
        }
    }
    ctx->pc = 0x1F91B0u;
label_1f91b0:
    // 0x1f91b0: 0x92120010  lbu         $s2, 0x10($s0)
    ctx->pc = 0x1f91b0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f91b4:
    // 0x1f91b4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f91b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f91b8:
    // 0x1f91b8: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f91b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f91bc:
    // 0x1f91bc: 0x27828240  addiu       $v0, $gp, -0x7DC0
    ctx->pc = 0x1f91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
label_1f91c0:
    // 0x1f91c0: 0x2463c550  addiu       $v1, $v1, -0x3AB0
    ctx->pc = 0x1f91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952272));
label_1f91c4:
    // 0x1f91c4: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x1f91c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1f91c8:
    // 0x1f91c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1f91cc:
    // 0x1f91cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f91d0:
    // 0x1f91d0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1f91d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f91d4:
    // 0x1f91d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f91d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f91d8:
    // 0x1f91d8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1f91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f91dc:
    // 0x1f91dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f91e0:
    // 0x1f91e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f91e4:
    // 0x1f91e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f91e8:
    // 0x1f91e8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f91e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f91ec:
    // 0x1f91ec: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x1f91ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f91f0:
    // 0x1f91f0: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_1f91f4:
    if (ctx->pc == 0x1F91F4u) {
        ctx->pc = 0x1F91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F0u;
        // 0x1f91f4: 0x46082a  slt         $at, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F91F8u;
        goto label_1f91f8;
    }
    ctx->pc = 0x1F91F0u;
    {
        const bool branch_taken_0x1f91f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F91F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F0u;
        // 0x1f91f4: 0x46082a  slt         $at, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f91f0) {
            ctx->pc = 0x1F9284u;
            goto label_1f9284;
        }
    }
    ctx->pc = 0x1F91F8u;
label_1f91f8:
    // 0x1f91f8: 0xc0590dc  jal         func_164370
label_1f91fc:
    if (ctx->pc == 0x1F91FCu) {
        ctx->pc = 0x1F91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91F8u;
        // 0x1f91fc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9200u;
        goto label_1f9200;
    }
    ctx->pc = 0x1F91F8u;
    SET_GPR_U32(ctx, 31, 0x1F9200u);
    ctx->pc = 0x1F91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F91F8u;
    // 0x1f91fc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1F91F8u, 0x1F9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9200u;
label_1f9200:
    // 0x1f9200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f9200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9204:
    // 0x1f9204: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_1f9208:
    if (ctx->pc == 0x1F9208u) {
        ctx->pc = 0x1F9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9204u;
        // 0x1f9208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F920Cu;
        goto label_1f920c;
    }
    ctx->pc = 0x1F9204u;
    {
        const bool branch_taken_0x1f9204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9204u;
        // 0x1f9208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9204) {
            ctx->pc = 0x1F926Cu;
            goto label_1f926c;
        }
    }
    ctx->pc = 0x1F920Cu;
label_1f920c:
    // 0x1f920c: 0xc0646d4  jal         func_191B50
label_1f9210:
    if (ctx->pc == 0x1F9210u) {
        ctx->pc = 0x1F9210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F920Cu;
        // 0x1f9210: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9214u;
        goto label_1f9214;
    }
    ctx->pc = 0x1F920Cu;
    SET_GPR_U32(ctx, 31, 0x1F9214u);
    ctx->pc = 0x1F9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F920Cu;
    // 0x1f9210: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1F920Cu, 0x1F9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9214u;
label_1f9214:
    // 0x1f9214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9218:
    // 0x1f9218: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1f9218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1f921c:
    // 0x1f921c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1f921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f9220:
    // 0x1f9220: 0xc07f064  jal         func_1FC190
label_1f9224:
    if (ctx->pc == 0x1F9224u) {
        ctx->pc = 0x1F9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9220u;
        // 0x1f9224: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9228u;
        goto label_1f9228;
    }
    ctx->pc = 0x1F9220u;
    SET_GPR_U32(ctx, 31, 0x1F9228u);
    ctx->pc = 0x1F9224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9220u;
    // 0x1f9224: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC190u;
    { ctx->pc = 0x1fc190; return; }
    ctx->pc = 0x1F9228u;
label_1f9228:
    // 0x1f9228: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f9228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1f922c:
    // 0x1f922c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1f9230:
    // 0x1f9230: 0x2463b8f0  addiu       $v1, $v1, -0x4710
    ctx->pc = 0x1f9230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949104));
label_1f9234:
    // 0x1f9234: 0x2442c0f0  addiu       $v0, $v0, -0x3F10
    ctx->pc = 0x1f9234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951152));
label_1f9238:
    // 0x1f9238: 0xae231558  sw          $v1, 0x1558($s1)
    ctx->pc = 0x1f9238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5464), GPR_U32(ctx, 3));
label_1f923c:
    // 0x1f923c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f923cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9240:
    // 0x1f9240: 0xc07ef80  jal         func_1FBE00
label_1f9244:
    if (ctx->pc == 0x1F9244u) {
        ctx->pc = 0x1F9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9240u;
        // 0x1f9244: 0xae22155c  sw          $v0, 0x155C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9248u;
        goto label_1f9248;
    }
    ctx->pc = 0x1F9240u;
    SET_GPR_U32(ctx, 31, 0x1F9248u);
    ctx->pc = 0x1F9244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9240u;
    // 0x1f9244: 0xae22155c  sw          $v0, 0x155C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE00u;
    { ctx->pc = 0x1fbe00; return; }
    ctx->pc = 0x1F9248u;
label_1f9248:
    // 0x1f9248: 0xae201540  sw          $zero, 0x1540($s1)
    ctx->pc = 0x1f9248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5440), GPR_U32(ctx, 0));
label_1f924c:
    // 0x1f924c: 0x27828240  addiu       $v0, $gp, -0x7DC0
    ctx->pc = 0x1f924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935104));
label_1f9250:
    // 0x1f9250: 0xa2320fe4  sb          $s2, 0xFE4($s1)
    ctx->pc = 0x1f9250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4068), (uint8_t)GPR_U32(ctx, 18));
label_1f9254:
    // 0x1f9254: 0x92230fe4  lbu         $v1, 0xFE4($s1)
    ctx->pc = 0x1f9254u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4068)));
label_1f9258:
    // 0x1f9258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f925c:
    // 0x1f925c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9260:
    // 0x1f9260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9264:
    // 0x1f9264: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f9268:
    // 0x1f9268: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f9268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f926c:
    // 0x1f926c: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x1f926cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9270:
    // 0x1f9270: 0x27828248  addiu       $v0, $gp, -0x7DB8
    ctx->pc = 0x1f9270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
label_1f9274:
    // 0x1f9274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f9278:
    // 0x1f9278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f927c:
    // 0x1f927c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f9280:
    if (ctx->pc == 0x1F9280u) {
        ctx->pc = 0x1F9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F927Cu;
        // 0x1f9280: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9284u;
        goto label_1f9284;
    }
    ctx->pc = 0x1F927Cu;
    {
        const bool branch_taken_0x1f927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F927Cu;
        // 0x1f9280: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f927c) {
            ctx->pc = 0x1F9298u;
            goto label_1f9298;
        }
    }
    ctx->pc = 0x1F9284u;
label_1f9284:
    // 0x1f9284: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f9288:
    if (ctx->pc == 0x1F9288u) {
        ctx->pc = 0x1F9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9284u;
        // 0x1f9288: 0x27828248  addiu       $v0, $gp, -0x7DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F928Cu;
        goto label_1f928c;
    }
    ctx->pc = 0x1F9284u;
    {
        const bool branch_taken_0x1f9284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9284u;
        // 0x1f9288: 0x27828248  addiu       $v0, $gp, -0x7DB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9284) {
            ctx->pc = 0x1F9298u;
            goto label_1f9298;
        }
    }
    ctx->pc = 0x1F928Cu;
label_1f928c:
    // 0x1f928c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9290:
    // 0x1f9290: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f9294:
    // 0x1f9294: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f9298:
    // 0x1f9298: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f9298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f929c:
    // 0x1f929c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f929cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f92a0:
    // 0x1f92a0: 0x27858278  addiu       $a1, $gp, -0x7D88
    ctx->pc = 0x1f92a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f92a4:
    // 0x1f92a4: 0x27828250  addiu       $v0, $gp, -0x7DB0
    ctx->pc = 0x1f92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935120));
label_1f92a8:
    // 0x1f92a8: 0x2463c551  addiu       $v1, $v1, -0x3AAF
    ctx->pc = 0x1f92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952273));
label_1f92ac:
    // 0x1f92ac: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1f92acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f92b0:
    // 0x1f92b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f92b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f92b4:
    // 0x1f92b4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f92b8:
    // 0x1f92b8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1f92b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f92bc:
    // 0x1f92bc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f92bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f92c0:
    // 0x1f92c0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1f92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1f92c4:
    // 0x1f92c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f92c8:
    // 0x1f92c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f92cc:
    // 0x1f92cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f92d0:
    // 0x1f92d0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f92d4:
    // 0x1f92d4: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x1f92d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f92d8:
    // 0x1f92d8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1f92dc:
    if (ctx->pc == 0x1F92DCu) {
        ctx->pc = 0x1F92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92D8u;
        // 0x1f92dc: 0x47082a  slt         $at, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F92E0u;
        goto label_1f92e0;
    }
    ctx->pc = 0x1F92D8u;
    {
        const bool branch_taken_0x1f92d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92D8u;
        // 0x1f92dc: 0x47082a  slt         $at, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92d8) {
            ctx->pc = 0x1F9300u;
            goto label_1f9300;
        }
    }
    ctx->pc = 0x1F92E0u;
label_1f92e0:
    // 0x1f92e0: 0xc07ebe0  jal         func_1FAF80
label_1f92e4:
    if (ctx->pc == 0x1F92E4u) {
        ctx->pc = 0x1F92E8u;
        goto label_1f92e8;
    }
    ctx->pc = 0x1F92E0u;
    SET_GPR_U32(ctx, 31, 0x1F92E8u);
    ctx->pc = 0x1FAF80u;
    { ctx->pc = 0x1faf80; return; }
    ctx->pc = 0x1F92E8u;
label_1f92e8:
    // 0x1f92e8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x1f92e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f92ec:
    // 0x1f92ec: 0x27828258  addiu       $v0, $gp, -0x7DA8
    ctx->pc = 0x1f92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
label_1f92f0:
    // 0x1f92f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f92f4:
    // 0x1f92f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f92f8:
    // 0x1f92f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f92fc:
    if (ctx->pc == 0x1F92FCu) {
        ctx->pc = 0x1F92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F8u;
        // 0x1f92fc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9300u;
        goto label_1f9300;
    }
    ctx->pc = 0x1F92F8u;
    {
        const bool branch_taken_0x1f92f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F92F8u;
        // 0x1f92fc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f92f8) {
            ctx->pc = 0x1F9314u;
            goto label_1f9314;
        }
    }
    ctx->pc = 0x1F9300u;
label_1f9300:
    // 0x1f9300: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f9304:
    if (ctx->pc == 0x1F9304u) {
        ctx->pc = 0x1F9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9300u;
        // 0x1f9304: 0x27828258  addiu       $v0, $gp, -0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9308u;
        goto label_1f9308;
    }
    ctx->pc = 0x1F9300u;
    {
        const bool branch_taken_0x1f9300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9300u;
        // 0x1f9304: 0x27828258  addiu       $v0, $gp, -0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9300) {
            ctx->pc = 0x1F9314u;
            goto label_1f9314;
        }
    }
    ctx->pc = 0x1F9308u;
label_1f9308:
    // 0x1f9308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f930c:
    // 0x1f930c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f9310:
    // 0x1f9310: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f9314:
    // 0x1f9314: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f9314u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9318:
    // 0x1f9318: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1f9318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1f931c:
    // 0x1f931c: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9320:
    // 0x1f9320: 0x2442c5a8  addiu       $v0, $v0, -0x3A58
    ctx->pc = 0x1f9320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952360));
label_1f9324:
    // 0x1f9324: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1f9324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f9328:
    // 0x1f9328: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f9328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f932c:
    // 0x1f932c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9330:
    // 0x1f9330: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f9330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9334:
    // 0x1f9334: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f9334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f9338:
    // 0x1f9338: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f933c:
    // 0x1f933c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f933cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f9340:
    // 0x1f9340: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f9344:
    // 0x1f9344: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1f9344u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1f9348:
    // 0x1f9348: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f9348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1f934c:
    // 0x1f934c: 0xc08f0cc  jal         func_23C330
label_1f9350:
    if (ctx->pc == 0x1F9350u) {
        ctx->pc = 0x1F9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F934Cu;
        // 0x1f9350: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9354u;
        goto label_1f9354;
    }
    ctx->pc = 0x1F934Cu;
    SET_GPR_U32(ctx, 31, 0x1F9354u);
    ctx->pc = 0x1F9350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F934Cu;
    // 0x1f9350: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1F9354u;
label_1f9354:
    // 0x1f9354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f9354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f9358:
    // 0x1f9358: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1f9358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1f935c:
    // 0x1f935c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f935cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f9360:
    // 0x1f9360: 0x0  nop
    ctx->pc = 0x1f9360u;
    // NOP
label_1f9364:
    // 0x1f9364: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f9364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1f9368:
    // 0x1f9368: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1f9368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_1f936c:
    // 0x1f936c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1f936cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_1f9370:
    // 0x1f9370: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f9370u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1f9374:
    // 0x1f9374: 0x0  nop
    ctx->pc = 0x1f9374u;
    // NOP
label_1f9378:
    // 0x1f9378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f9378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f937c:
    // 0x1f937c: 0x0  nop
    ctx->pc = 0x1f937cu;
    // NOP
label_1f9380:
    // 0x1f9380: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f9380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f9384:
    // 0x1f9384: 0x0  nop
    ctx->pc = 0x1f9384u;
    // NOP
label_1f9388:
    // 0x1f9388: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1f938c:
    if (ctx->pc == 0x1F938Cu) {
        ctx->pc = 0x1F9390u;
        goto label_1f9390;
    }
    ctx->pc = 0x1F9388u;
    {
        const bool branch_taken_0x1f9388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9388) {
            ctx->pc = 0x1F93E4u;
            goto label_1f93e4;
        }
    }
    ctx->pc = 0x1F9390u;
label_1f9390:
    // 0x1f9390: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f9390u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9394:
    // 0x1f9394: 0x27838268  addiu       $v1, $gp, -0x7D98
    ctx->pc = 0x1f9394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935144));
label_1f9398:
    // 0x1f9398: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1f9398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f939c:
    // 0x1f939c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f939cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f93a0:
    // 0x1f93a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f93a4:
    // 0x1f93a4: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x1f93a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1f93a8:
    // 0x1f93a8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1f93ac:
    if (ctx->pc == 0x1F93ACu) {
        ctx->pc = 0x1F93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93A8u;
        // 0x1f93ac: 0x223082a  slt         $at, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F93B0u;
        goto label_1f93b0;
    }
    ctx->pc = 0x1F93A8u;
    {
        const bool branch_taken_0x1f93a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93A8u;
        // 0x1f93ac: 0x223082a  slt         $at, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93a8) {
            ctx->pc = 0x1F93D0u;
            goto label_1f93d0;
        }
    }
    ctx->pc = 0x1F93B0u;
label_1f93b0:
    // 0x1f93b0: 0xc07e824  jal         func_1FA090
label_1f93b4:
    if (ctx->pc == 0x1F93B4u) {
        ctx->pc = 0x1F93B8u;
        goto label_1f93b8;
    }
    ctx->pc = 0x1F93B0u;
    SET_GPR_U32(ctx, 31, 0x1F93B8u);
    ctx->pc = 0x1FA090u;
    { ctx->pc = 0x1fa090; return; }
    ctx->pc = 0x1F93B8u;
label_1f93b8:
    // 0x1f93b8: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f93b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f93bc:
    // 0x1f93bc: 0x27838270  addiu       $v1, $gp, -0x7D90
    ctx->pc = 0x1f93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
label_1f93c0:
    // 0x1f93c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f93c4:
    // 0x1f93c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f93c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f93c8:
    // 0x1f93c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f93cc:
    if (ctx->pc == 0x1F93CCu) {
        ctx->pc = 0x1F93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93C8u;
        // 0x1f93cc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F93D0u;
        goto label_1f93d0;
    }
    ctx->pc = 0x1F93C8u;
    {
        const bool branch_taken_0x1f93c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93C8u;
        // 0x1f93cc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93c8) {
            ctx->pc = 0x1F93E4u;
            goto label_1f93e4;
        }
    }
    ctx->pc = 0x1F93D0u;
label_1f93d0:
    // 0x1f93d0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f93d4:
    if (ctx->pc == 0x1F93D4u) {
        ctx->pc = 0x1F93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93D0u;
        // 0x1f93d4: 0x27838270  addiu       $v1, $gp, -0x7D90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F93D8u;
        goto label_1f93d8;
    }
    ctx->pc = 0x1F93D0u;
    {
        const bool branch_taken_0x1f93d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93D0u;
        // 0x1f93d4: 0x27838270  addiu       $v1, $gp, -0x7D90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93d0) {
            ctx->pc = 0x1F93E4u;
            goto label_1f93e4;
        }
    }
    ctx->pc = 0x1F93D8u;
label_1f93d8:
    // 0x1f93d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f93dc:
    // 0x1f93dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f93e0:
    // 0x1f93e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f93e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f93e4:
    // 0x1f93e4: 0x8f83903c  lw          $v1, -0x6FC4($gp)
    ctx->pc = 0x1f93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938684)));
label_1f93e8:
    // 0x1f93e8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_1f93ec:
    if (ctx->pc == 0x1F93ECu) {
        ctx->pc = 0x1F93F0u;
        goto label_1f93f0;
    }
    ctx->pc = 0x1F93E8u;
    {
        const bool branch_taken_0x1f93e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f93e8) {
            ctx->pc = 0x1F9434u;
            goto label_1f9434;
        }
    }
    ctx->pc = 0x1F93F0u;
label_1f93f0:
    // 0x1f93f0: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1f93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1f93f4:
    // 0x1f93f4: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1f93f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1f93f8:
    // 0x1f93f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f93fc:
    if (ctx->pc == 0x1F93FCu) {
        ctx->pc = 0x1F93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F8u;
        // 0x1f93fc: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9400u;
        goto label_1f9400;
    }
    ctx->pc = 0x1F93F8u;
    {
        const bool branch_taken_0x1f93f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F93F8u;
        // 0x1f93fc: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f93f8) {
            ctx->pc = 0x1F9408u;
            goto label_1f9408;
        }
    }
    ctx->pc = 0x1F9400u;
label_1f9400:
    // 0x1f9400: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1f9404:
    if (ctx->pc == 0x1F9404u) {
        ctx->pc = 0x1F9408u;
        goto label_1f9408;
    }
    ctx->pc = 0x1F9400u;
    {
        const bool branch_taken_0x1f9400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9400) {
            ctx->pc = 0x1F9434u;
            goto label_1f9434;
        }
    }
    ctx->pc = 0x1F9408u;
label_1f9408:
    // 0x1f9408: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f9408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f940c:
    // 0x1f940c: 0xc06468c  jal         func_191A30
label_1f9410:
    if (ctx->pc == 0x1F9410u) {
        ctx->pc = 0x1F9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F940Cu;
        // 0x1f9410: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9414u;
        goto label_1f9414;
    }
    ctx->pc = 0x1F940Cu;
    SET_GPR_U32(ctx, 31, 0x1F9414u);
    ctx->pc = 0x1F9410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F940Cu;
    // 0x1f9410: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x1F940Cu, 0x1F9414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9414u;
label_1f9414:
    // 0x1f9414: 0xc07e7cc  jal         func_1F9F30
label_1f9418:
    if (ctx->pc == 0x1F9418u) {
        ctx->pc = 0x1F9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9414u;
        // 0x1f9418: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F941Cu;
        goto label_1f941c;
    }
    ctx->pc = 0x1F9414u;
    SET_GPR_U32(ctx, 31, 0x1F941Cu);
    ctx->pc = 0x1F9418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9414u;
    // 0x1f9418: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F30u;
    { ctx->pc = 0x1f9f30; return; }
    ctx->pc = 0x1F941Cu;
label_1f941c:
    // 0x1f941c: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x1f941cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9420:
    // 0x1f9420: 0x27838278  addiu       $v1, $gp, -0x7D88
    ctx->pc = 0x1f9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9424:
    // 0x1f9424: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f9424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f9428:
    // 0x1f9428: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f9428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f942c:
    // 0x1f942c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f9430:
    // 0x1f9430: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f9430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f9434:
    // 0x1f9434: 0xaf80903c  sw          $zero, -0x6FC4($gp)
    ctx->pc = 0x1f9434u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938684), GPR_U32(ctx, 0));
label_1f9438:
    // 0x1f9438: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1f9438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1f943c:
    // 0x1f943c: 0x92050010  lbu         $a1, 0x10($s0)
    ctx->pc = 0x1f943cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_1f9440:
    // 0x1f9440: 0x27848278  addiu       $a0, $gp, -0x7D88
    ctx->pc = 0x1f9440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935160));
label_1f9444:
    // 0x1f9444: 0x2463c5a8  addiu       $v1, $v1, -0x3A58
    ctx->pc = 0x1f9444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952360));
label_1f9448:
    // 0x1f9448: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1f9448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f944c:
    // 0x1f944c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->pc = 0x1f9450u;
    return;
}

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


void FUN_0019b850_part22(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a5c60u: goto label_1a5c60;
        case 0x1a5c64u: goto label_1a5c64;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5c70u: goto label_1a5c70;
        case 0x1a5c74u: goto label_1a5c74;
        case 0x1a5c78u: goto label_1a5c78;
        case 0x1a5c7cu: goto label_1a5c7c;
        case 0x1a5c80u: goto label_1a5c80;
        case 0x1a5c84u: goto label_1a5c84;
        case 0x1a5c88u: goto label_1a5c88;
        case 0x1a5c8cu: goto label_1a5c8c;
        case 0x1a5c90u: goto label_1a5c90;
        case 0x1a5c94u: goto label_1a5c94;
        case 0x1a5c98u: goto label_1a5c98;
        case 0x1a5c9cu: goto label_1a5c9c;
        case 0x1a5ca0u: goto label_1a5ca0;
        case 0x1a5ca4u: goto label_1a5ca4;
        case 0x1a5ca8u: goto label_1a5ca8;
        case 0x1a5cacu: goto label_1a5cac;
        case 0x1a5cb0u: goto label_1a5cb0;
        case 0x1a5cb4u: goto label_1a5cb4;
        case 0x1a5cb8u: goto label_1a5cb8;
        case 0x1a5cbcu: goto label_1a5cbc;
        case 0x1a5cc0u: goto label_1a5cc0;
        case 0x1a5cc4u: goto label_1a5cc4;
        case 0x1a5cc8u: goto label_1a5cc8;
        case 0x1a5cccu: goto label_1a5ccc;
        case 0x1a5cd0u: goto label_1a5cd0;
        case 0x1a5cd4u: goto label_1a5cd4;
        case 0x1a5cd8u: goto label_1a5cd8;
        case 0x1a5cdcu: goto label_1a5cdc;
        case 0x1a5ce0u: goto label_1a5ce0;
        case 0x1a5ce4u: goto label_1a5ce4;
        case 0x1a5ce8u: goto label_1a5ce8;
        case 0x1a5cecu: goto label_1a5cec;
        case 0x1a5cf0u: goto label_1a5cf0;
        case 0x1a5cf4u: goto label_1a5cf4;
        case 0x1a5cf8u: goto label_1a5cf8;
        case 0x1a5cfcu: goto label_1a5cfc;
        case 0x1a5d00u: goto label_1a5d00;
        case 0x1a5d04u: goto label_1a5d04;
        case 0x1a5d08u: goto label_1a5d08;
        case 0x1a5d0cu: goto label_1a5d0c;
        case 0x1a5d10u: goto label_1a5d10;
        case 0x1a5d14u: goto label_1a5d14;
        case 0x1a5d18u: goto label_1a5d18;
        case 0x1a5d1cu: goto label_1a5d1c;
        case 0x1a5d20u: goto label_1a5d20;
        case 0x1a5d24u: goto label_1a5d24;
        case 0x1a5d28u: goto label_1a5d28;
        case 0x1a5d2cu: goto label_1a5d2c;
        case 0x1a5d30u: goto label_1a5d30;
        case 0x1a5d34u: goto label_1a5d34;
        case 0x1a5d38u: goto label_1a5d38;
        case 0x1a5d3cu: goto label_1a5d3c;
        case 0x1a5d40u: goto label_1a5d40;
        case 0x1a5d44u: goto label_1a5d44;
        case 0x1a5d48u: goto label_1a5d48;
        case 0x1a5d4cu: goto label_1a5d4c;
        case 0x1a5d50u: goto label_1a5d50;
        case 0x1a5d54u: goto label_1a5d54;
        case 0x1a5d58u: goto label_1a5d58;
        case 0x1a5d5cu: goto label_1a5d5c;
        case 0x1a5d60u: goto label_1a5d60;
        case 0x1a5d64u: goto label_1a5d64;
        case 0x1a5d68u: goto label_1a5d68;
        case 0x1a5d6cu: goto label_1a5d6c;
        case 0x1a5d70u: goto label_1a5d70;
        case 0x1a5d74u: goto label_1a5d74;
        case 0x1a5d78u: goto label_1a5d78;
        case 0x1a5d7cu: goto label_1a5d7c;
        case 0x1a5d80u: goto label_1a5d80;
        case 0x1a5d84u: goto label_1a5d84;
        case 0x1a5d88u: goto label_1a5d88;
        case 0x1a5d8cu: goto label_1a5d8c;
        case 0x1a5d90u: goto label_1a5d90;
        case 0x1a5d94u: goto label_1a5d94;
        case 0x1a5d98u: goto label_1a5d98;
        case 0x1a5d9cu: goto label_1a5d9c;
        case 0x1a5da0u: goto label_1a5da0;
        case 0x1a5da4u: goto label_1a5da4;
        case 0x1a5da8u: goto label_1a5da8;
        case 0x1a5dacu: goto label_1a5dac;
        case 0x1a5db0u: goto label_1a5db0;
        case 0x1a5db4u: goto label_1a5db4;
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dbcu: goto label_1a5dbc;
        case 0x1a5dc0u: goto label_1a5dc0;
        case 0x1a5dc4u: goto label_1a5dc4;
        case 0x1a5dc8u: goto label_1a5dc8;
        case 0x1a5dccu: goto label_1a5dcc;
        case 0x1a5dd0u: goto label_1a5dd0;
        case 0x1a5dd4u: goto label_1a5dd4;
        case 0x1a5dd8u: goto label_1a5dd8;
        case 0x1a5ddcu: goto label_1a5ddc;
        case 0x1a5de0u: goto label_1a5de0;
        case 0x1a5de4u: goto label_1a5de4;
        case 0x1a5de8u: goto label_1a5de8;
        case 0x1a5decu: goto label_1a5dec;
        case 0x1a5df0u: goto label_1a5df0;
        case 0x1a5df4u: goto label_1a5df4;
        case 0x1a5df8u: goto label_1a5df8;
        case 0x1a5dfcu: goto label_1a5dfc;
        case 0x1a5e00u: goto label_1a5e00;
        case 0x1a5e04u: goto label_1a5e04;
        case 0x1a5e08u: goto label_1a5e08;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e10u: goto label_1a5e10;
        case 0x1a5e14u: goto label_1a5e14;
        case 0x1a5e18u: goto label_1a5e18;
        case 0x1a5e1cu: goto label_1a5e1c;
        case 0x1a5e20u: goto label_1a5e20;
        case 0x1a5e24u: goto label_1a5e24;
        case 0x1a5e28u: goto label_1a5e28;
        case 0x1a5e2cu: goto label_1a5e2c;
        case 0x1a5e30u: goto label_1a5e30;
        case 0x1a5e34u: goto label_1a5e34;
        case 0x1a5e38u: goto label_1a5e38;
        case 0x1a5e3cu: goto label_1a5e3c;
        case 0x1a5e40u: goto label_1a5e40;
        case 0x1a5e44u: goto label_1a5e44;
        case 0x1a5e48u: goto label_1a5e48;
        case 0x1a5e4cu: goto label_1a5e4c;
        case 0x1a5e50u: goto label_1a5e50;
        case 0x1a5e54u: goto label_1a5e54;
        case 0x1a5e58u: goto label_1a5e58;
        case 0x1a5e5cu: goto label_1a5e5c;
        case 0x1a5e60u: goto label_1a5e60;
        case 0x1a5e64u: goto label_1a5e64;
        case 0x1a5e68u: goto label_1a5e68;
        case 0x1a5e6cu: goto label_1a5e6c;
        case 0x1a5e70u: goto label_1a5e70;
        case 0x1a5e74u: goto label_1a5e74;
        case 0x1a5e78u: goto label_1a5e78;
        case 0x1a5e7cu: goto label_1a5e7c;
        case 0x1a5e80u: goto label_1a5e80;
        case 0x1a5e84u: goto label_1a5e84;
        case 0x1a5e88u: goto label_1a5e88;
        case 0x1a5e8cu: goto label_1a5e8c;
        case 0x1a5e90u: goto label_1a5e90;
        case 0x1a5e94u: goto label_1a5e94;
        case 0x1a5e98u: goto label_1a5e98;
        case 0x1a5e9cu: goto label_1a5e9c;
        case 0x1a5ea0u: goto label_1a5ea0;
        case 0x1a5ea4u: goto label_1a5ea4;
        case 0x1a5ea8u: goto label_1a5ea8;
        case 0x1a5eacu: goto label_1a5eac;
        case 0x1a5eb0u: goto label_1a5eb0;
        case 0x1a5eb4u: goto label_1a5eb4;
        case 0x1a5eb8u: goto label_1a5eb8;
        case 0x1a5ebcu: goto label_1a5ebc;
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5ec4u: goto label_1a5ec4;
        case 0x1a5ec8u: goto label_1a5ec8;
        case 0x1a5eccu: goto label_1a5ecc;
        case 0x1a5ed0u: goto label_1a5ed0;
        case 0x1a5ed4u: goto label_1a5ed4;
        case 0x1a5ed8u: goto label_1a5ed8;
        case 0x1a5edcu: goto label_1a5edc;
        case 0x1a5ee0u: goto label_1a5ee0;
        case 0x1a5ee4u: goto label_1a5ee4;
        case 0x1a5ee8u: goto label_1a5ee8;
        case 0x1a5eecu: goto label_1a5eec;
        case 0x1a5ef0u: goto label_1a5ef0;
        case 0x1a5ef4u: goto label_1a5ef4;
        case 0x1a5ef8u: goto label_1a5ef8;
        case 0x1a5efcu: goto label_1a5efc;
        case 0x1a5f00u: goto label_1a5f00;
        case 0x1a5f04u: goto label_1a5f04;
        case 0x1a5f08u: goto label_1a5f08;
        case 0x1a5f0cu: goto label_1a5f0c;
        case 0x1a5f10u: goto label_1a5f10;
        case 0x1a5f14u: goto label_1a5f14;
        case 0x1a5f18u: goto label_1a5f18;
        case 0x1a5f1cu: goto label_1a5f1c;
        case 0x1a5f20u: goto label_1a5f20;
        case 0x1a5f24u: goto label_1a5f24;
        case 0x1a5f28u: goto label_1a5f28;
        case 0x1a5f2cu: goto label_1a5f2c;
        case 0x1a5f30u: goto label_1a5f30;
        case 0x1a5f34u: goto label_1a5f34;
        case 0x1a5f38u: goto label_1a5f38;
        case 0x1a5f3cu: goto label_1a5f3c;
        case 0x1a5f40u: goto label_1a5f40;
        case 0x1a5f44u: goto label_1a5f44;
        case 0x1a5f48u: goto label_1a5f48;
        case 0x1a5f4cu: goto label_1a5f4c;
        case 0x1a5f50u: goto label_1a5f50;
        case 0x1a5f54u: goto label_1a5f54;
        case 0x1a5f58u: goto label_1a5f58;
        case 0x1a5f5cu: goto label_1a5f5c;
        case 0x1a5f60u: goto label_1a5f60;
        case 0x1a5f64u: goto label_1a5f64;
        case 0x1a5f68u: goto label_1a5f68;
        case 0x1a5f6cu: goto label_1a5f6c;
        case 0x1a5f70u: goto label_1a5f70;
        case 0x1a5f74u: goto label_1a5f74;
        case 0x1a5f78u: goto label_1a5f78;
        case 0x1a5f7cu: goto label_1a5f7c;
        case 0x1a5f80u: goto label_1a5f80;
        case 0x1a5f84u: goto label_1a5f84;
        case 0x1a5f88u: goto label_1a5f88;
        case 0x1a5f8cu: goto label_1a5f8c;
        case 0x1a5f90u: goto label_1a5f90;
        case 0x1a5f94u: goto label_1a5f94;
        case 0x1a5f98u: goto label_1a5f98;
        case 0x1a5f9cu: goto label_1a5f9c;
        case 0x1a5fa0u: goto label_1a5fa0;
        case 0x1a5fa4u: goto label_1a5fa4;
        case 0x1a5fa8u: goto label_1a5fa8;
        case 0x1a5facu: goto label_1a5fac;
        case 0x1a5fb0u: goto label_1a5fb0;
        case 0x1a5fb4u: goto label_1a5fb4;
        case 0x1a5fb8u: goto label_1a5fb8;
        case 0x1a5fbcu: goto label_1a5fbc;
        case 0x1a5fc0u: goto label_1a5fc0;
        case 0x1a5fc4u: goto label_1a5fc4;
        case 0x1a5fc8u: goto label_1a5fc8;
        case 0x1a5fccu: goto label_1a5fcc;
        case 0x1a5fd0u: goto label_1a5fd0;
        case 0x1a5fd4u: goto label_1a5fd4;
        case 0x1a5fd8u: goto label_1a5fd8;
        case 0x1a5fdcu: goto label_1a5fdc;
        case 0x1a5fe0u: goto label_1a5fe0;
        case 0x1a5fe4u: goto label_1a5fe4;
        case 0x1a5fe8u: goto label_1a5fe8;
        case 0x1a5fecu: goto label_1a5fec;
        case 0x1a5ff0u: goto label_1a5ff0;
        case 0x1a5ff4u: goto label_1a5ff4;
        case 0x1a5ff8u: goto label_1a5ff8;
        case 0x1a5ffcu: goto label_1a5ffc;
        case 0x1a6000u: goto label_1a6000;
        case 0x1a6004u: goto label_1a6004;
        case 0x1a6008u: goto label_1a6008;
        case 0x1a600cu: goto label_1a600c;
        case 0x1a6010u: goto label_1a6010;
        case 0x1a6014u: goto label_1a6014;
        case 0x1a6018u: goto label_1a6018;
        case 0x1a601cu: goto label_1a601c;
        case 0x1a6020u: goto label_1a6020;
        case 0x1a6024u: goto label_1a6024;
        case 0x1a6028u: goto label_1a6028;
        case 0x1a602cu: goto label_1a602c;
        case 0x1a6030u: goto label_1a6030;
        case 0x1a6034u: goto label_1a6034;
        case 0x1a6038u: goto label_1a6038;
        case 0x1a603cu: goto label_1a603c;
        case 0x1a6040u: goto label_1a6040;
        case 0x1a6044u: goto label_1a6044;
        case 0x1a6048u: goto label_1a6048;
        case 0x1a604cu: goto label_1a604c;
        case 0x1a6050u: goto label_1a6050;
        case 0x1a6054u: goto label_1a6054;
        case 0x1a6058u: goto label_1a6058;
        case 0x1a605cu: goto label_1a605c;
        case 0x1a6060u: goto label_1a6060;
        case 0x1a6064u: goto label_1a6064;
        case 0x1a6068u: goto label_1a6068;
        case 0x1a606cu: goto label_1a606c;
        case 0x1a6070u: goto label_1a6070;
        case 0x1a6074u: goto label_1a6074;
        case 0x1a6078u: goto label_1a6078;
        case 0x1a607cu: goto label_1a607c;
        case 0x1a6080u: goto label_1a6080;
        case 0x1a6084u: goto label_1a6084;
        case 0x1a6088u: goto label_1a6088;
        case 0x1a608cu: goto label_1a608c;
        case 0x1a6090u: goto label_1a6090;
        case 0x1a6094u: goto label_1a6094;
        case 0x1a6098u: goto label_1a6098;
        case 0x1a609cu: goto label_1a609c;
        case 0x1a60a0u: goto label_1a60a0;
        case 0x1a60a4u: goto label_1a60a4;
        case 0x1a60a8u: goto label_1a60a8;
        case 0x1a60acu: goto label_1a60ac;
        case 0x1a60b0u: goto label_1a60b0;
        case 0x1a60b4u: goto label_1a60b4;
        case 0x1a60b8u: goto label_1a60b8;
        case 0x1a60bcu: goto label_1a60bc;
        case 0x1a60c0u: goto label_1a60c0;
        case 0x1a60c4u: goto label_1a60c4;
        case 0x1a60c8u: goto label_1a60c8;
        case 0x1a60ccu: goto label_1a60cc;
        case 0x1a60d0u: goto label_1a60d0;
        case 0x1a60d4u: goto label_1a60d4;
        case 0x1a60d8u: goto label_1a60d8;
        case 0x1a60dcu: goto label_1a60dc;
        case 0x1a60e0u: goto label_1a60e0;
        case 0x1a60e4u: goto label_1a60e4;
        case 0x1a60e8u: goto label_1a60e8;
        case 0x1a60ecu: goto label_1a60ec;
        case 0x1a60f0u: goto label_1a60f0;
        case 0x1a60f4u: goto label_1a60f4;
        case 0x1a60f8u: goto label_1a60f8;
        case 0x1a60fcu: goto label_1a60fc;
        case 0x1a6100u: goto label_1a6100;
        case 0x1a6104u: goto label_1a6104;
        case 0x1a6108u: goto label_1a6108;
        case 0x1a610cu: goto label_1a610c;
        case 0x1a6110u: goto label_1a6110;
        case 0x1a6114u: goto label_1a6114;
        case 0x1a6118u: goto label_1a6118;
        case 0x1a611cu: goto label_1a611c;
        case 0x1a6120u: goto label_1a6120;
        case 0x1a6124u: goto label_1a6124;
        case 0x1a6128u: goto label_1a6128;
        case 0x1a612cu: goto label_1a612c;
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6134u: goto label_1a6134;
        case 0x1a6138u: goto label_1a6138;
        case 0x1a613cu: goto label_1a613c;
        case 0x1a6140u: goto label_1a6140;
        case 0x1a6144u: goto label_1a6144;
        case 0x1a6148u: goto label_1a6148;
        case 0x1a614cu: goto label_1a614c;
        case 0x1a6150u: goto label_1a6150;
        case 0x1a6154u: goto label_1a6154;
        case 0x1a6158u: goto label_1a6158;
        case 0x1a615cu: goto label_1a615c;
        case 0x1a6160u: goto label_1a6160;
        case 0x1a6164u: goto label_1a6164;
        case 0x1a6168u: goto label_1a6168;
        case 0x1a616cu: goto label_1a616c;
        case 0x1a6170u: goto label_1a6170;
        case 0x1a6174u: goto label_1a6174;
        case 0x1a6178u: goto label_1a6178;
        case 0x1a617cu: goto label_1a617c;
        case 0x1a6180u: goto label_1a6180;
        case 0x1a6184u: goto label_1a6184;
        case 0x1a6188u: goto label_1a6188;
        case 0x1a618cu: goto label_1a618c;
        case 0x1a6190u: goto label_1a6190;
        case 0x1a6194u: goto label_1a6194;
        case 0x1a6198u: goto label_1a6198;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61a0u: goto label_1a61a0;
        case 0x1a61a4u: goto label_1a61a4;
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61b0u: goto label_1a61b0;
        case 0x1a61b4u: goto label_1a61b4;
        case 0x1a61b8u: goto label_1a61b8;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61c0u: goto label_1a61c0;
        case 0x1a61c4u: goto label_1a61c4;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        case 0x1a61f8u: goto label_1a61f8;
        case 0x1a61fcu: goto label_1a61fc;
        case 0x1a6200u: goto label_1a6200;
        case 0x1a6204u: goto label_1a6204;
        case 0x1a6208u: goto label_1a6208;
        case 0x1a620cu: goto label_1a620c;
        case 0x1a6210u: goto label_1a6210;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6218u: goto label_1a6218;
        case 0x1a621cu: goto label_1a621c;
        case 0x1a6220u: goto label_1a6220;
        case 0x1a6224u: goto label_1a6224;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a622cu: goto label_1a622c;
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6234u: goto label_1a6234;
        case 0x1a6238u: goto label_1a6238;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6240u: goto label_1a6240;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6248u: goto label_1a6248;
        case 0x1a624cu: goto label_1a624c;
        case 0x1a6250u: goto label_1a6250;
        case 0x1a6254u: goto label_1a6254;
        case 0x1a6258u: goto label_1a6258;
        case 0x1a625cu: goto label_1a625c;
        case 0x1a6260u: goto label_1a6260;
        case 0x1a6264u: goto label_1a6264;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a626cu: goto label_1a626c;
        case 0x1a6270u: goto label_1a6270;
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6278u: goto label_1a6278;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a6280u: goto label_1a6280;
        case 0x1a6284u: goto label_1a6284;
        case 0x1a6288u: goto label_1a6288;
        case 0x1a628cu: goto label_1a628c;
        case 0x1a6290u: goto label_1a6290;
        case 0x1a6294u: goto label_1a6294;
        case 0x1a6298u: goto label_1a6298;
        case 0x1a629cu: goto label_1a629c;
        case 0x1a62a0u: goto label_1a62a0;
        case 0x1a62a4u: goto label_1a62a4;
        case 0x1a62a8u: goto label_1a62a8;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62b0u: goto label_1a62b0;
        case 0x1a62b4u: goto label_1a62b4;
        case 0x1a62b8u: goto label_1a62b8;
        case 0x1a62bcu: goto label_1a62bc;
        case 0x1a62c0u: goto label_1a62c0;
        case 0x1a62c4u: goto label_1a62c4;
        case 0x1a62c8u: goto label_1a62c8;
        case 0x1a62ccu: goto label_1a62cc;
        case 0x1a62d0u: goto label_1a62d0;
        case 0x1a62d4u: goto label_1a62d4;
        case 0x1a62d8u: goto label_1a62d8;
        case 0x1a62dcu: goto label_1a62dc;
        case 0x1a62e0u: goto label_1a62e0;
        case 0x1a62e4u: goto label_1a62e4;
        case 0x1a62e8u: goto label_1a62e8;
        case 0x1a62ecu: goto label_1a62ec;
        case 0x1a62f0u: goto label_1a62f0;
        case 0x1a62f4u: goto label_1a62f4;
        case 0x1a62f8u: goto label_1a62f8;
        case 0x1a62fcu: goto label_1a62fc;
        case 0x1a6300u: goto label_1a6300;
        case 0x1a6304u: goto label_1a6304;
        case 0x1a6308u: goto label_1a6308;
        case 0x1a630cu: goto label_1a630c;
        case 0x1a6310u: goto label_1a6310;
        case 0x1a6314u: goto label_1a6314;
        case 0x1a6318u: goto label_1a6318;
        case 0x1a631cu: goto label_1a631c;
        case 0x1a6320u: goto label_1a6320;
        case 0x1a6324u: goto label_1a6324;
        case 0x1a6328u: goto label_1a6328;
        case 0x1a632cu: goto label_1a632c;
        case 0x1a6330u: goto label_1a6330;
        case 0x1a6334u: goto label_1a6334;
        case 0x1a6338u: goto label_1a6338;
        case 0x1a633cu: goto label_1a633c;
        case 0x1a6340u: goto label_1a6340;
        case 0x1a6344u: goto label_1a6344;
        case 0x1a6348u: goto label_1a6348;
        case 0x1a634cu: goto label_1a634c;
        case 0x1a6350u: goto label_1a6350;
        case 0x1a6354u: goto label_1a6354;
        case 0x1a6358u: goto label_1a6358;
        case 0x1a635cu: goto label_1a635c;
        case 0x1a6360u: goto label_1a6360;
        case 0x1a6364u: goto label_1a6364;
        case 0x1a6368u: goto label_1a6368;
        case 0x1a636cu: goto label_1a636c;
        case 0x1a6370u: goto label_1a6370;
        case 0x1a6374u: goto label_1a6374;
        case 0x1a6378u: goto label_1a6378;
        case 0x1a637cu: goto label_1a637c;
        case 0x1a6380u: goto label_1a6380;
        case 0x1a6384u: goto label_1a6384;
        case 0x1a6388u: goto label_1a6388;
        case 0x1a638cu: goto label_1a638c;
        case 0x1a6390u: goto label_1a6390;
        case 0x1a6394u: goto label_1a6394;
        case 0x1a6398u: goto label_1a6398;
        case 0x1a639cu: goto label_1a639c;
        case 0x1a63a0u: goto label_1a63a0;
        case 0x1a63a4u: goto label_1a63a4;
        case 0x1a63a8u: goto label_1a63a8;
        case 0x1a63acu: goto label_1a63ac;
        case 0x1a63b0u: goto label_1a63b0;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a63b8u: goto label_1a63b8;
        case 0x1a63bcu: goto label_1a63bc;
        case 0x1a63c0u: goto label_1a63c0;
        case 0x1a63c4u: goto label_1a63c4;
        case 0x1a63c8u: goto label_1a63c8;
        case 0x1a63ccu: goto label_1a63cc;
        case 0x1a63d0u: goto label_1a63d0;
        case 0x1a63d4u: goto label_1a63d4;
        case 0x1a63d8u: goto label_1a63d8;
        case 0x1a63dcu: goto label_1a63dc;
        case 0x1a63e0u: goto label_1a63e0;
        case 0x1a63e4u: goto label_1a63e4;
        case 0x1a63e8u: goto label_1a63e8;
        case 0x1a63ecu: goto label_1a63ec;
        case 0x1a63f0u: goto label_1a63f0;
        case 0x1a63f4u: goto label_1a63f4;
        case 0x1a63f8u: goto label_1a63f8;
        case 0x1a63fcu: goto label_1a63fc;
        case 0x1a6400u: goto label_1a6400;
        case 0x1a6404u: goto label_1a6404;
        case 0x1a6408u: goto label_1a6408;
        case 0x1a640cu: goto label_1a640c;
        case 0x1a6410u: goto label_1a6410;
        case 0x1a6414u: goto label_1a6414;
        case 0x1a6418u: goto label_1a6418;
        case 0x1a641cu: goto label_1a641c;
        case 0x1a6420u: goto label_1a6420;
        case 0x1a6424u: goto label_1a6424;
        case 0x1a6428u: goto label_1a6428;
        case 0x1a642cu: goto label_1a642c;
        default: return;
    }

label_1a5c60:
    if (ctx->pc == 0x1A5C60u) {
        ctx->pc = 0x1A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C5Cu;
        // 0x1a5c60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C64u;
        goto label_1a5c64;
    }
    ctx->pc = 0x1A5C5Cu;
    {
        const bool branch_taken_0x1a5c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C5Cu;
        // 0x1a5c60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c5c) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5C64u;
label_1a5c64:
    // 0x1a5c64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c68:
    // 0x1a5c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a5c6c:
    if (ctx->pc == 0x1A5C6Cu) {
        ctx->pc = 0x1A5C70u;
        goto label_1a5c70;
    }
    ctx->pc = 0x1A5C68u;
    {
        const bool branch_taken_0x1a5c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c68) {
            ctx->pc = 0x1A5C80u;
            goto label_1a5c80;
        }
    }
    ctx->pc = 0x1A5C70u;
label_1a5c70:
    // 0x1a5c70: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a5c74:
    // 0x1a5c74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c78:
    // 0x1a5c78: 0xc069a22  jal         func_1A6888
label_1a5c7c:
    if (ctx->pc == 0x1A5C7Cu) {
        ctx->pc = 0x1A5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C78u;
        // 0x1a5c7c: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C80u;
        goto label_1a5c80;
    }
    ctx->pc = 0x1A5C78u;
    SET_GPR_U32(ctx, 31, 0x1A5C80u);
    ctx->pc = 0x1A5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C78u;
    // 0x1a5c7c: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5C80u;
label_1a5c80:
    // 0x1a5c80: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1a5c84:
    // 0x1a5c84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a5c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5c88:
    // 0x1a5c88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5c8c:
    // 0x1a5c8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5c90:
    // 0x1a5c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5c94:
    // 0x1a5c94: 0x3e00008  jr          $ra
label_1a5c98:
    if (ctx->pc == 0x1A5C98u) {
        ctx->pc = 0x1A5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C94u;
        // 0x1a5c98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C9Cu;
        goto label_1a5c9c;
    }
    ctx->pc = 0x1A5C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C94u;
        // 0x1a5c98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5C9Cu;
label_1a5c9c:
    // 0x1a5c9c: 0x0  nop
    ctx->pc = 0x1a5c9cu;
    // NOP
label_1a5ca0:
    // 0x1a5ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a5ca4:
    // 0x1a5ca4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a5ca8:
    // 0x1a5ca8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a5cac:
    // 0x1a5cac: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a5cacu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a5cb0:
    // 0x1a5cb0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a5cb4:
    // 0x1a5cb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cb8:
    // 0x1a5cb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5cbc:
    // 0x1a5cbc: 0x26b31410  addiu       $s3, $s5, 0x1410
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
label_1a5cc0:
    // 0x1a5cc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5cc4:
    // 0x1a5cc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cc8:
    // 0x1a5cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5ccc:
    // 0x1a5ccc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cd0:
    // 0x1a5cd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a5cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a5cd4:
    // 0x1a5cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cd8:
    // 0x1a5cd8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1a5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1a5cdc:
    // 0x1a5cdc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1a5ce0:
    if (ctx->pc == 0x1A5CE0u) {
        ctx->pc = 0x1A5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CDCu;
        // 0x1a5ce0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5CE4u;
        goto label_1a5ce4;
    }
    ctx->pc = 0x1A5CDCu;
    {
        const bool branch_taken_0x1a5cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CDCu;
        // 0x1a5ce0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cdc) {
            ctx->pc = 0x1A5DCCu;
            goto label_1a5dcc;
        }
    }
    ctx->pc = 0x1A5CE4u;
label_1a5ce4:
    // 0x1a5ce4: 0xc06b518  jal         func_1AD460
label_1a5ce8:
    if (ctx->pc == 0x1A5CE8u) {
        ctx->pc = 0x1A5CECu;
        goto label_1a5cec;
    }
    ctx->pc = 0x1A5CE4u;
    SET_GPR_U32(ctx, 31, 0x1A5CECu);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5CECu;
label_1a5cec:
    // 0x1a5cec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5cf0:
    // 0x1a5cf0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a5cf4:
    // 0x1a5cf4: 0x24421440  addiu       $v0, $v0, 0x1440
    ctx->pc = 0x1a5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
label_1a5cf8:
    // 0x1a5cf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5cfc:
    // 0x1a5cfc: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a5cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a5d00:
    // 0x1a5d00: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x1a5d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
label_1a5d04:
    // 0x1a5d04: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x1a5d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
label_1a5d08:
    // 0x1a5d08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a5d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a5d0c:
    // 0x1a5d0c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a5d10:
    // 0x1a5d10: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a5d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a5d14:
    // 0x1a5d14: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x1a5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1a5d18:
    // 0x1a5d18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a5d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1a5d1c:
    // 0x1a5d1c: 0x52480012  beql        $s2, $t0, . + 4 + (0x12 << 2)
label_1a5d20:
    if (ctx->pc == 0x1A5D20u) {
        ctx->pc = 0x1A5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D1Cu;
        // 0x1a5d20: 0x26b01410  addiu       $s0, $s5, 0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D24u;
        goto label_1a5d24;
    }
    ctx->pc = 0x1A5D1Cu;
    {
        const bool branch_taken_0x1a5d1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x1a5d1c) {
            ctx->pc = 0x1A5D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5D1Cu;
            // 0x1a5d20: 0x26b01410  addiu       $s0, $s5, 0x1410 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D68u;
            goto label_1a5d68;
        }
    }
    ctx->pc = 0x1A5D24u;
label_1a5d24:
    // 0x1a5d24: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a5d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5d28:
    // 0x1a5d28: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
label_1a5d2c:
    if (ctx->pc == 0x1A5D2Cu) {
        ctx->pc = 0x1A5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D28u;
        // 0x1a5d2c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D30u;
        goto label_1a5d30;
    }
    ctx->pc = 0x1A5D28u;
    {
        const bool branch_taken_0x1a5d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1A5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D28u;
        // 0x1a5d2c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d28) {
            ctx->pc = 0x1A5D48u;
            goto label_1a5d48;
        }
    }
    ctx->pc = 0x1A5D30u;
label_1a5d30:
    // 0x1a5d30: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1a5d30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_1a5d34:
    // 0x1a5d34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a5d38:
    // 0x1a5d38: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1a5d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
label_1a5d3c:
    // 0x1a5d3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a5d40:
    if (ctx->pc == 0x1A5D40u) {
        ctx->pc = 0x1A5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D3Cu;
        // 0x1a5d40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D44u;
        goto label_1a5d44;
    }
    ctx->pc = 0x1A5D3Cu;
    {
        const bool branch_taken_0x1a5d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D3Cu;
        // 0x1a5d40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d3c) {
            ctx->pc = 0x1A5D64u;
            goto label_1a5d64;
        }
    }
    ctx->pc = 0x1A5D44u;
label_1a5d44:
    // 0x1a5d44: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1a5d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5d48:
    // 0x1a5d48: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a5d48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a5d4c:
    // 0x1a5d4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a5d50:
    // 0x1a5d50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a5d54:
    // 0x1a5d54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a5d58:
    // 0x1a5d58: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1a5d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
label_1a5d5c:
    // 0x1a5d5c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1a5d60:
    if (ctx->pc == 0x1A5D60u) {
        ctx->pc = 0x1A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D5Cu;
        // 0x1a5d60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D64u;
        goto label_1a5d64;
    }
    ctx->pc = 0x1A5D5Cu;
    {
        const bool branch_taken_0x1a5d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D5Cu;
        // 0x1a5d60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d5c) {
            ctx->pc = 0x1A5D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5d18;
        }
    }
    ctx->pc = 0x1A5D64u;
label_1a5d64:
    // 0x1a5d64: 0x26b01410  addiu       $s0, $s5, 0x1410
    ctx->pc = 0x1a5d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
label_1a5d68:
    // 0x1a5d68: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1a5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1a5d6c:
    // 0x1a5d6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a5d70:
    // 0x1a5d70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5d74:
    // 0x1a5d74: 0x80c50007  lb          $a1, 0x7($a2)
    ctx->pc = 0x1a5d74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_1a5d78:
    // 0x1a5d78: 0x8ea41410  lw          $a0, 0x1410($s5)
    ctx->pc = 0x1a5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5136)));
label_1a5d7c:
    // 0x1a5d7c: 0xc06963c  jal         func_1A58F0
label_1a5d80:
    if (ctx->pc == 0x1A5D80u) {
        ctx->pc = 0x1A5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D7Cu;
        // 0x1a5d80: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D84u;
        goto label_1a5d84;
    }
    ctx->pc = 0x1A5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D84u);
    ctx->pc = 0x1A5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D7Cu;
    // 0x1a5d80: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58F0u;
    { ctx->pc = 0x1a58f0; return; }
    ctx->pc = 0x1A5D84u;
label_1a5d84:
    // 0x1a5d84: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1a5d88:
    if (ctx->pc == 0x1A5D88u) {
        ctx->pc = 0x1A5D8Cu;
        goto label_1a5d8c;
    }
    ctx->pc = 0x1A5D84u;
    {
        const bool branch_taken_0x1a5d84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a5d84) {
            ctx->pc = 0x1A5D9Cu;
            goto label_1a5d9c;
        }
    }
    ctx->pc = 0x1A5D8Cu;
label_1a5d8c:
    // 0x1a5d8c: 0xc06b52a  jal         func_1AD4A8
label_1a5d90:
    if (ctx->pc == 0x1A5D90u) {
        ctx->pc = 0x1A5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D8Cu;
        // 0x1a5d90: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D94u;
        goto label_1a5d94;
    }
    ctx->pc = 0x1A5D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D94u);
    ctx->pc = 0x1A5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D8Cu;
    // 0x1a5d90: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A5D94u;
label_1a5d94:
    // 0x1a5d94: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a5d98:
    if (ctx->pc == 0x1A5D98u) {
        ctx->pc = 0x1A5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D94u;
        // 0x1a5d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D9Cu;
        goto label_1a5d9c;
    }
    ctx->pc = 0x1A5D94u;
    {
        const bool branch_taken_0x1a5d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D94u;
        // 0x1a5d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d94) {
            ctx->pc = 0x1A5DCCu;
            goto label_1a5dcc;
        }
    }
    ctx->pc = 0x1A5D9Cu;
label_1a5d9c:
    // 0x1a5d9c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a5da0:
    // 0x1a5da0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a5da4:
    if (ctx->pc == 0x1A5DA4u) {
        ctx->pc = 0x1A5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DA0u;
        // 0x1a5da4: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5DA8u;
        goto label_1a5da8;
    }
    ctx->pc = 0x1A5DA0u;
    {
        const bool branch_taken_0x1a5da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DA0u;
        // 0x1a5da4: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5da0) {
            ctx->pc = 0x1A5DC0u;
            goto label_1a5dc0;
        }
    }
    ctx->pc = 0x1A5DA8u;
label_1a5da8:
    // 0x1a5da8: 0x8e241410  lw          $a0, 0x1410($s1)
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5136)));
label_1a5dac:
    // 0x1a5dac: 0xc069648  jal         func_1A5920
label_1a5db0:
    if (ctx->pc == 0x1A5DB0u) {
        ctx->pc = 0x1A5DB4u;
        goto label_1a5db4;
    }
    ctx->pc = 0x1A5DACu;
    SET_GPR_U32(ctx, 31, 0x1A5DB4u);
    ctx->pc = 0x1A5920u;
    { ctx->pc = 0x1a5920; return; }
    ctx->pc = 0x1A5DB4u;
label_1a5db4:
    // 0x1a5db4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a5db8:
    // 0x1a5db8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1a5dbc:
    if (ctx->pc == 0x1A5DBCu) {
        ctx->pc = 0x1A5DC0u;
        goto label_1a5dc0;
    }
    ctx->pc = 0x1A5DB8u;
    {
        const bool branch_taken_0x1a5db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5db8) {
            ctx->pc = 0x1A5DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5da8;
        }
    }
    ctx->pc = 0x1A5DC0u;
label_1a5dc0:
    // 0x1a5dc0: 0xc06b52a  jal         func_1AD4A8
label_1a5dc4:
    if (ctx->pc == 0x1A5DC4u) {
        ctx->pc = 0x1A5DC8u;
        goto label_1a5dc8;
    }
    ctx->pc = 0x1A5DC0u;
    SET_GPR_U32(ctx, 31, 0x1A5DC8u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A5DC8u;
label_1a5dc8:
    // 0x1a5dc8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a5dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a5dcc:
    // 0x1a5dcc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a5dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5dd0:
    // 0x1a5dd0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a5dd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5dd4:
    // 0x1a5dd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a5dd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5dd8:
    // 0x1a5dd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a5dd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5ddc:
    // 0x1a5ddc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5ddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5de0:
    // 0x1a5de0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5de4:
    // 0x1a5de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5de8:
    // 0x1a5de8: 0x3e00008  jr          $ra
label_1a5dec:
    if (ctx->pc == 0x1A5DECu) {
        ctx->pc = 0x1A5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DE8u;
        // 0x1a5dec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5DF0u;
        goto label_1a5df0;
    }
    ctx->pc = 0x1A5DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DE8u;
        // 0x1a5dec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5DF0u;
label_1a5df0:
    // 0x1a5df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a5df4:
    // 0x1a5df4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5df8:
    // 0x1a5df8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a5dfc:
    // 0x1a5dfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5e00:
    // 0x1a5e00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a5e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e04:
    // 0x1a5e04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a5e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a5e08:
    // 0x1a5e08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e0c:
    // 0x1a5e0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a5e10:
    // 0x1a5e10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5e14:
    // 0x1a5e14: 0x1a400021  blez        $s2, . + 4 + (0x21 << 2)
label_1a5e18:
    if (ctx->pc == 0x1A5E18u) {
        ctx->pc = 0x1A5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E14u;
        // 0x1a5e18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E1Cu;
        goto label_1a5e1c;
    }
    ctx->pc = 0x1A5E14u;
    {
        const bool branch_taken_0x1a5e14 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1A5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E14u;
        // 0x1a5e18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e14) {
            ctx->pc = 0x1A5E9Cu;
            goto label_1a5e9c;
        }
    }
    ctx->pc = 0x1A5E1Cu;
label_1a5e1c:
    // 0x1a5e1c: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1a5e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1a5e20:
    // 0x1a5e20: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5e24:
    // 0x1a5e24: 0x0  nop
    ctx->pc = 0x1a5e24u;
    // NOP
label_1a5e28:
    // 0x1a5e28: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a5e2c:
    // 0x1a5e2c: 0x8c441428  lw          $a0, 0x1428($v0)
    ctx->pc = 0x1a5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5160)));
label_1a5e30:
    // 0x1a5e30: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x1a5e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a5e34:
    // 0x1a5e34: 0x0  nop
    ctx->pc = 0x1a5e34u;
    // NOP
label_1a5e38:
    // 0x1a5e38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5e3c:
    // 0x1a5e3c: 0x0  nop
    ctx->pc = 0x1a5e3cu;
    // NOP
label_1a5e40:
    // 0x1a5e40: 0x0  nop
    ctx->pc = 0x1a5e40u;
    // NOP
label_1a5e44:
    // 0x1a5e44: 0x0  nop
    ctx->pc = 0x1a5e44u;
    // NOP
label_1a5e48:
    // 0x1a5e48: 0x0  nop
    ctx->pc = 0x1a5e48u;
    // NOP
label_1a5e4c:
    // 0x1a5e4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1a5e50:
    if (ctx->pc == 0x1A5E50u) {
        ctx->pc = 0x1A5E54u;
        goto label_1a5e54;
    }
    ctx->pc = 0x1A5E4Cu;
    {
        const bool branch_taken_0x1a5e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e4c) {
            ctx->pc = 0x1A5E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5e38;
        }
    }
    ctx->pc = 0x1A5E54u;
label_1a5e54:
    // 0x1a5e54: 0x26651410  addiu       $a1, $s3, 0x1410
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5136));
label_1a5e58:
    // 0x1a5e58: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1a5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1a5e5c:
    // 0x1a5e5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a5e60:
    // 0x1a5e60: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a5e60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5e64:
    // 0x1a5e64: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1a5e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a5e68:
    // 0x1a5e68: 0xc0696b2  jal         func_1A5AC8
label_1a5e6c:
    if (ctx->pc == 0x1A5E6Cu) {
        ctx->pc = 0x1A5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E68u;
        // 0x1a5e6c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E70u;
        goto label_1a5e70;
    }
    ctx->pc = 0x1A5E68u;
    SET_GPR_U32(ctx, 31, 0x1A5E70u);
    ctx->pc = 0x1A5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E68u;
    // 0x1a5e6c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5AC8u;
    { ctx->pc = 0x1a5ac8; return; }
    ctx->pc = 0x1A5E70u;
label_1a5e70:
    // 0x1a5e70: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1a5e70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5e74:
    // 0x1a5e74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a5e78:
    // 0x1a5e78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a5e7c:
    if (ctx->pc == 0x1A5E7Cu) {
        ctx->pc = 0x1A5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E78u;
        // 0x1a5e7c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E80u;
        goto label_1a5e80;
    }
    ctx->pc = 0x1A5E78u;
    {
        const bool branch_taken_0x1a5e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E78u;
        // 0x1a5e7c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e78) {
            ctx->pc = 0x1A5E88u;
            goto label_1a5e88;
        }
    }
    ctx->pc = 0x1A5E80u;
label_1a5e80:
    // 0x1a5e80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1a5e84:
    if (ctx->pc == 0x1A5E84u) {
        ctx->pc = 0x1A5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E80u;
        // 0x1a5e84: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E88u;
        goto label_1a5e88;
    }
    ctx->pc = 0x1A5E80u;
    {
        const bool branch_taken_0x1a5e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E80u;
        // 0x1a5e84: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e80) {
            ctx->pc = 0x1A5E90u;
            goto label_1a5e90;
        }
    }
    ctx->pc = 0x1A5E88u;
label_1a5e88:
    // 0x1a5e88: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a5e8c:
    if (ctx->pc == 0x1A5E8Cu) {
        ctx->pc = 0x1A5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E88u;
        // 0x1a5e8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E90u;
        goto label_1a5e90;
    }
    ctx->pc = 0x1A5E88u;
    {
        const bool branch_taken_0x1a5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E88u;
        // 0x1a5e8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e88) {
            ctx->pc = 0x1A5EA0u;
            goto label_1a5ea0;
        }
    }
    ctx->pc = 0x1A5E90u;
label_1a5e90:
    // 0x1a5e90: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x1a5e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1a5e94:
    // 0x1a5e94: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_1a5e98:
    if (ctx->pc == 0x1A5E98u) {
        ctx->pc = 0x1A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E94u;
        // 0x1a5e98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E9Cu;
        goto label_1a5e9c;
    }
    ctx->pc = 0x1A5E94u;
    {
        const bool branch_taken_0x1a5e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E94u;
        // 0x1a5e98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e94) {
            ctx->pc = 0x1A5E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5e28;
        }
    }
    ctx->pc = 0x1A5E9Cu;
label_1a5e9c:
    // 0x1a5e9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a5e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ea0:
    // 0x1a5ea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a5ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5ea4:
    // 0x1a5ea4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a5ea4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5ea8:
    // 0x1a5ea8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a5ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5eac:
    // 0x1a5eac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5eb0:
    // 0x1a5eb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5eb4:
    // 0x1a5eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5eb8:
    // 0x1a5eb8: 0x3e00008  jr          $ra
label_1a5ebc:
    if (ctx->pc == 0x1A5EBCu) {
        ctx->pc = 0x1A5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EB8u;
        // 0x1a5ebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EC0u;
        goto label_1a5ec0;
    }
    ctx->pc = 0x1A5EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EB8u;
        // 0x1a5ebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5EC0u;
label_1a5ec0:
    // 0x1a5ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a5ec4:
    // 0x1a5ec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ec8:
    // 0x1a5ec8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5ecc:
    // 0x1a5ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5ed0:
    // 0x1a5ed0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a5ed4:
    // 0x1a5ed4: 0xc0692a8  jal         func_1A4AA0
label_1a5ed8:
    if (ctx->pc == 0x1A5ED8u) {
        ctx->pc = 0x1A5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5ED4u;
        // 0x1a5ed8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EDCu;
        goto label_1a5edc;
    }
    ctx->pc = 0x1A5ED4u;
    SET_GPR_U32(ctx, 31, 0x1A5EDCu);
    ctx->pc = 0x1A5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5ED4u;
    // 0x1a5ed8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1A5EDCu;
label_1a5edc:
    // 0x1a5edc: 0x26111410  addiu       $s1, $s0, 0x1410
    ctx->pc = 0x1a5edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5136));
label_1a5ee0:
    // 0x1a5ee0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a5ee4:
    // 0x1a5ee4: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x1a5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1a5ee8:
    // 0x1a5ee8: 0x24c65b08  addiu       $a2, $a2, 0x5B08
    ctx->pc = 0x1a5ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23304));
label_1a5eec:
    // 0x1a5eec: 0xc069620  jal         func_1A5880
label_1a5ef0:
    if (ctx->pc == 0x1A5EF0u) {
        ctx->pc = 0x1A5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EECu;
        // 0x1a5ef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EF4u;
        goto label_1a5ef4;
    }
    ctx->pc = 0x1A5EECu;
    SET_GPR_U32(ctx, 31, 0x1A5EF4u);
    ctx->pc = 0x1A5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EECu;
    // 0x1a5ef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5880u;
    { ctx->pc = 0x1a5880; return; }
    ctx->pc = 0x1A5EF4u;
label_1a5ef4:
    // 0x1a5ef4: 0xae021410  sw          $v0, 0x1410($s0)
    ctx->pc = 0x1a5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5136), GPR_U32(ctx, 2));
label_1a5ef8:
    // 0x1a5ef8: 0x8e021410  lw          $v0, 0x1410($s0)
    ctx->pc = 0x1a5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5136)));
label_1a5efc:
    // 0x1a5efc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1a5f00:
    if (ctx->pc == 0x1A5F00u) {
        ctx->pc = 0x1A5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EFCu;
        // 0x1a5f00: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F04u;
        goto label_1a5f04;
    }
    ctx->pc = 0x1A5EFCu;
    {
        const bool branch_taken_0x1a5efc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EFCu;
        // 0x1a5f00: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5efc) {
            ctx->pc = 0x1A5F0Cu;
            goto label_1a5f0c;
        }
    }
    ctx->pc = 0x1A5F04u;
label_1a5f04:
    // 0x1a5f04: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a5f08:
    if (ctx->pc == 0x1A5F08u) {
        ctx->pc = 0x1A5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F04u;
        // 0x1a5f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F0Cu;
        goto label_1a5f0c;
    }
    ctx->pc = 0x1A5F04u;
    {
        const bool branch_taken_0x1a5f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F04u;
        // 0x1a5f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f04) {
            ctx->pc = 0x1A5F68u;
            goto label_1a5f68;
        }
    }
    ctx->pc = 0x1A5F0Cu;
label_1a5f0c:
    // 0x1a5f0c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5f10:
    // 0x1a5f10: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a5f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1a5f14:
    // 0x1a5f14: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a5f18:
    // 0x1a5f18: 0x24841580  addiu       $a0, $a0, 0x1580
    ctx->pc = 0x1a5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5504));
label_1a5f1c:
    // 0x1a5f1c: 0x24421440  addiu       $v0, $v0, 0x1440
    ctx->pc = 0x1a5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
label_1a5f20:
    // 0x1a5f20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a5f24:
    // 0x1a5f24: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1a5f28:
    // 0x1a5f28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a5f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1a5f2c:
    // 0x1a5f2c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a5f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a5f30:
    // 0x1a5f30: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1a5f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_1a5f34:
    // 0x1a5f34: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x1a5f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1a5f38:
    // 0x1a5f38: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1a5f3c:
    // 0x1a5f3c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1a5f40:
    // 0x1a5f40: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1a5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1a5f44:
    // 0x1a5f44: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1a5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a5f48:
    // 0x1a5f48: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x1a5f48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
label_1a5f4c:
    // 0x1a5f4c: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x1a5f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 5));
label_1a5f50:
    // 0x1a5f50: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x1a5f50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
label_1a5f54:
    // 0x1a5f54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a5f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1a5f58:
    // 0x1a5f58: 0xc069698  jal         func_1A5A60
label_1a5f5c:
    if (ctx->pc == 0x1A5F5Cu) {
        ctx->pc = 0x1A5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F58u;
        // 0x1a5f5c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F60u;
        goto label_1a5f60;
    }
    ctx->pc = 0x1A5F58u;
    SET_GPR_U32(ctx, 31, 0x1A5F60u);
    ctx->pc = 0x1A5F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5F58u;
    // 0x1a5f5c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A60u;
    { ctx->pc = 0x1a5a60; return; }
    ctx->pc = 0x1A5F60u;
label_1a5f60:
    // 0x1a5f60: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1a5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1a5f64:
    // 0x1a5f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5f68:
    // 0x1a5f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5f6c:
    // 0x1a5f6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5f70:
    // 0x1a5f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5f74:
    // 0x1a5f74: 0x3e00008  jr          $ra
label_1a5f78:
    if (ctx->pc == 0x1A5F78u) {
        ctx->pc = 0x1A5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F74u;
        // 0x1a5f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F7Cu;
        goto label_1a5f7c;
    }
    ctx->pc = 0x1A5F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F74u;
        // 0x1a5f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F7Cu;
label_1a5f7c:
    // 0x1a5f7c: 0x0  nop
    ctx->pc = 0x1a5f7cu;
    // NOP
label_1a5f80:
    // 0x1a5f80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a5f84:
    // 0x1a5f84: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x1a5f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_1a5f88:
    // 0x1a5f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5f8c:
    // 0x1a5f8c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a5f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1a5f90:
    // 0x1a5f90: 0x0  nop
    ctx->pc = 0x1a5f90u;
    // NOP
label_1a5f94:
    // 0x1a5f94: 0x0  nop
    ctx->pc = 0x1a5f94u;
    // NOP
label_1a5f98:
    // 0x1a5f98: 0x0  nop
    ctx->pc = 0x1a5f98u;
    // NOP
label_1a5f9c:
    // 0x1a5f9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a5fa0:
    if (ctx->pc == 0x1A5FA0u) {
        ctx->pc = 0x1A5FA4u;
        goto label_1a5fa4;
    }
    ctx->pc = 0x1A5F9Cu;
    {
        const bool branch_taken_0x1a5f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f9c) {
            ctx->pc = 0x1A5F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5f88;
        }
    }
    ctx->pc = 0x1A5FA4u;
label_1a5fa4:
    // 0x1a5fa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a5fa8:
    // 0x1a5fa8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a5fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5fac:
    // 0x1a5fac: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x1a5facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
label_1a5fb0:
    // 0x1a5fb0: 0x3e00008  jr          $ra
label_1a5fb4:
    if (ctx->pc == 0x1A5FB4u) {
        ctx->pc = 0x1A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB0u;
        // 0x1a5fb4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FB8u;
        goto label_1a5fb8;
    }
    ctx->pc = 0x1A5FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB0u;
        // 0x1a5fb4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5FB8u;
label_1a5fb8:
    // 0x1a5fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a5fbc:
    // 0x1a5fbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5fc0:
    // 0x1a5fc0: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_1a5fc4:
    // 0x1a5fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5fc8:
    // 0x1a5fc8: 0x8e255b60  lw          $a1, 0x5B60($s1)
    ctx->pc = 0x1a5fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23392)));
label_1a5fcc:
    // 0x1a5fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5fd0:
    // 0x1a5fd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a5fd4:
    // 0x1a5fd4: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x1a5fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
label_1a5fd8:
    // 0x1a5fd8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1a5fdc:
    if (ctx->pc == 0x1A5FDCu) {
        ctx->pc = 0x1A5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FD8u;
        // 0x1a5fdc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FE0u;
        goto label_1a5fe0;
    }
    ctx->pc = 0x1A5FD8u;
    {
        const bool branch_taken_0x1a5fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FD8u;
        // 0x1a5fdc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fd8) {
            ctx->pc = 0x1A6000u;
            goto label_1a6000;
        }
    }
    ctx->pc = 0x1A5FE0u;
label_1a5fe0:
    // 0x1a5fe0: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a5fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a5fe4:
    // 0x1a5fe4: 0xae205b60  sw          $zero, 0x5B60($s1)
    ctx->pc = 0x1a5fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 0));
label_1a5fe8:
    // 0x1a5fe8: 0x264216c0  addiu       $v0, $s2, 0x16C0
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_1a5fec:
    // 0x1a5fec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ff0:
    // 0x1a5ff0: 0xc06968e  jal         func_1A5A38
label_1a5ff4:
    if (ctx->pc == 0x1A5FF4u) {
        ctx->pc = 0x1A5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF0u;
        // 0x1a5ff4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FF8u;
        goto label_1a5ff8;
    }
    ctx->pc = 0x1A5FF0u;
    SET_GPR_U32(ctx, 31, 0x1A5FF8u);
    ctx->pc = 0x1A5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5FF0u;
    // 0x1a5ff4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A38u;
    { ctx->pc = 0x1a5a38; return; }
    ctx->pc = 0x1A5FF8u;
label_1a5ff8:
    // 0x1a5ff8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5ffc:
    if (ctx->pc == 0x1A5FFCu) {
        ctx->pc = 0x1A5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF8u;
        // 0x1a5ffc: 0x8e255b60  lw          $a1, 0x5B60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6000u;
        goto label_1a6000;
    }
    ctx->pc = 0x1A5FF8u;
    {
        const bool branch_taken_0x1a5ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF8u;
        // 0x1a5ffc: 0x8e255b60  lw          $a1, 0x5B60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff8) {
            ctx->pc = 0x1A6004u;
            goto label_1a6004;
        }
    }
    ctx->pc = 0x1A6000u;
label_1a6000:
    // 0x1a6000: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a6004:
    // 0x1a6004: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a6004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a6008:
    // 0x1a6008: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1a600c:
    if (ctx->pc == 0x1A600Cu) {
        ctx->pc = 0x1A600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6008u;
        // 0x1a600c: 0x264216c0  addiu       $v0, $s2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6010u;
        goto label_1a6010;
    }
    ctx->pc = 0x1A6008u;
    {
        const bool branch_taken_0x1a6008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6008u;
        // 0x1a600c: 0x264216c0  addiu       $v0, $s2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6008) {
            ctx->pc = 0x1A6040u;
            goto label_1a6040;
        }
    }
    ctx->pc = 0x1A6010u;
label_1a6010:
    // 0x1a6010: 0x264416c0  addiu       $a0, $s2, 0x16C0
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_1a6014:
    // 0x1a6014: 0xae205b60  sw          $zero, 0x5B60($s1)
    ctx->pc = 0x1a6014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 0));
label_1a6018:
    // 0x1a6018: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1a601c:
    // 0x1a601c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6020:
    // 0x1a6020: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1a6020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1a6024:
    // 0x1a6024: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6028:
    // 0x1a6028: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a602c:
    // 0x1a602c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a602cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6030:
    // 0x1a6030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6034:
    // 0x1a6034: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a6034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1a6038:
    // 0x1a6038: 0x806968e  j           func_1A5A38
label_1a603c:
    if (ctx->pc == 0x1A603Cu) {
        ctx->pc = 0x1A603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6038u;
        // 0x1a603c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6040u;
        goto label_1a6040;
    }
    ctx->pc = 0x1A6038u;
    ctx->pc = 0x1A603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6038u;
    // 0x1a603c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A38u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a5a38; return; }
    ctx->pc = 0x1A6040u;
label_1a6040:
    // 0x1a6040: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1a6040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a6044:
    // 0x1a6044: 0xae235b60  sw          $v1, 0x5B60($s1)
    ctx->pc = 0x1a6044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 3));
label_1a6048:
    // 0x1a6048: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a604c:
    // 0x1a604c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1a604cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1a6050:
    // 0x1a6050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a6050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6054:
    // 0x1a6054: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6058:
    // 0x1a6058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a605c:
    // 0x1a605c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a605cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6060:
    // 0x1a6060: 0x3e00008  jr          $ra
label_1a6064:
    if (ctx->pc == 0x1A6064u) {
        ctx->pc = 0x1A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6060u;
        // 0x1a6064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6068u;
        goto label_1a6068;
    }
    ctx->pc = 0x1A6060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6060u;
        // 0x1a6064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6068u;
label_1a6068:
    // 0x1a6068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a606c:
    // 0x1a606c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a6070:
    // 0x1a6070: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1a6074:
    if (ctx->pc == 0x1A6074u) {
        ctx->pc = 0x1A6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6070u;
        // 0x1a6074: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6078u;
        goto label_1a6078;
    }
    ctx->pc = 0x1A6070u;
    {
        const bool branch_taken_0x1a6070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6070u;
        // 0x1a6074: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6070) {
            ctx->pc = 0x1A6090u;
            goto label_1a6090;
        }
    }
    ctx->pc = 0x1A6078u;
label_1a6078:
    // 0x1a6078: 0xc0697e0  jal         func_1A5F80
label_1a607c:
    if (ctx->pc == 0x1A607Cu) {
        ctx->pc = 0x1A607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6078u;
        // 0x1a607c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6080u;
        goto label_1a6080;
    }
    ctx->pc = 0x1A6078u;
    SET_GPR_U32(ctx, 31, 0x1A6080u);
    ctx->pc = 0x1A607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6078u;
    // 0x1a607c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    goto label_1a5f80;
    ctx->pc = 0x1A6080u;
label_1a6080:
    // 0x1a6080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6084:
    // 0x1a6084: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a6084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a6088:
    // 0x1a6088: 0x80697e0  j           func_1A5F80
label_1a608c:
    if (ctx->pc == 0x1A608Cu) {
        ctx->pc = 0x1A608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6088u;
        // 0x1a608c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6090u;
        goto label_1a6090;
    }
    ctx->pc = 0x1A6088u;
    ctx->pc = 0x1A608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6088u;
    // 0x1a608c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a5f80;
    ctx->pc = 0x1A6090u;
label_1a6090:
    // 0x1a6090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6094:
    // 0x1a6094: 0x80697e0  j           func_1A5F80
label_1a6098:
    if (ctx->pc == 0x1A6098u) {
        ctx->pc = 0x1A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6094u;
        // 0x1a6098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A609Cu;
        goto label_1a609c;
    }
    ctx->pc = 0x1A6094u;
    ctx->pc = 0x1A6098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6094u;
    // 0x1a6098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a5f80;
    ctx->pc = 0x1A609Cu;
label_1a609c:
    // 0x1a609c: 0x0  nop
    ctx->pc = 0x1a609cu;
    // NOP
label_1a60a0:
    // 0x1a60a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a60a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a60a4:
    // 0x1a60a4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x1a60a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
label_1a60a8:
    // 0x1a60a8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x1a60a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
label_1a60ac:
    // 0x1a60ac: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x1a60acu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
label_1a60b0:
    // 0x1a60b0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x1a60b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
label_1a60b4:
    // 0x1a60b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a60b8:
    if (ctx->pc == 0x1A60B8u) {
        ctx->pc = 0x1A60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60B4u;
        // 0x1a60b8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60BCu;
        goto label_1a60bc;
    }
    ctx->pc = 0x1A60B4u;
    {
        const bool branch_taken_0x1a60b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60B4u;
        // 0x1a60b8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60b4) {
            ctx->pc = 0x1A60C4u;
            goto label_1a60c4;
        }
    }
    ctx->pc = 0x1A60BCu;
label_1a60bc:
    // 0x1a60bc: 0x3e00008  jr          $ra
label_1a60c0:
    if (ctx->pc == 0x1A60C0u) {
        ctx->pc = 0x1A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60BCu;
        // 0x1a60c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60C4u;
        goto label_1a60c4;
    }
    ctx->pc = 0x1A60BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60BCu;
        // 0x1a60c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A60C4u;
label_1a60c4:
    // 0x1a60c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a60c8:
    if (ctx->pc == 0x1A60C8u) {
        ctx->pc = 0x1A60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C4u;
        // 0x1a60c8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60CCu;
        goto label_1a60cc;
    }
    ctx->pc = 0x1A60C4u;
    {
        const bool branch_taken_0x1a60c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C4u;
        // 0x1a60c8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60c4) {
            ctx->pc = 0x1A60D4u;
            goto label_1a60d4;
        }
    }
    ctx->pc = 0x1A60CCu;
label_1a60cc:
    // 0x1a60cc: 0x3e00008  jr          $ra
label_1a60d0:
    if (ctx->pc == 0x1A60D0u) {
        ctx->pc = 0x1A60D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60CCu;
        // 0x1a60d0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60D4u;
        goto label_1a60d4;
    }
    ctx->pc = 0x1A60CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A60D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60CCu;
        // 0x1a60d0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A60D4u;
label_1a60d4:
    // 0x1a60d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1a60d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1a60d8:
    // 0x1a60d8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a60d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
label_1a60dc:
    // 0x1a60dc: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x1a60dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
label_1a60e0:
    // 0x1a60e0: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
label_1a60e4:
    if (ctx->pc == 0x1A60E4u) {
        ctx->pc = 0x1A60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60E0u;
        // 0x1a60e4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60E8u;
        goto label_1a60e8;
    }
    ctx->pc = 0x1A60E0u;
    {
        const bool branch_taken_0x1a60e0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1A60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60E0u;
        // 0x1a60e4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60e0) {
            ctx->pc = 0x1A6118u;
            goto label_1a6118;
        }
    }
    ctx->pc = 0x1A60E8u;
label_1a60e8:
    // 0x1a60e8: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x1a60e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
label_1a60ec:
    // 0x1a60ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a60f0:
    // 0x1a60f0: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x1a60f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
label_1a60f4:
    // 0x1a60f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a60f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a60f8:
    // 0x1a60f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1a60f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1a60fc:
    // 0x1a60fc: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x1a60fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
label_1a6100:
    // 0x1a6100: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x1a6100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_1a6104:
    // 0x1a6104: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
label_1a6108:
    if (ctx->pc == 0x1A6108u) {
        ctx->pc = 0x1A6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6104u;
        // 0x1a6108: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A610Cu;
        goto label_1a610c;
    }
    ctx->pc = 0x1A6104u;
    {
        const bool branch_taken_0x1a6104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6104) {
            ctx->pc = 0x1A6108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6104u;
            // 0x1a6108: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6124u;
            goto label_1a6124;
        }
    }
    ctx->pc = 0x1A610Cu;
label_1a610c:
    // 0x1a610c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x1a610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
label_1a6110:
    // 0x1a6110: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a6114:
    if (ctx->pc == 0x1A6114u) {
        ctx->pc = 0x1A6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6110u;
        // 0x1a6114: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6118u;
        goto label_1a6118;
    }
    ctx->pc = 0x1A6110u;
    {
        const bool branch_taken_0x1a6110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6110u;
        // 0x1a6114: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6110) {
            ctx->pc = 0x1A6124u;
            goto label_1a6124;
        }
    }
    ctx->pc = 0x1A6118u;
label_1a6118:
    // 0x1a6118: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1a6118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1a611c:
    // 0x1a611c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a611cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a6120:
    // 0x1a6120: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x1a6120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_1a6124:
    // 0x1a6124: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1a6124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1a6128:
    // 0x1a6128: 0x3e00008  jr          $ra
label_1a612c:
    if (ctx->pc == 0x1A612Cu) {
        ctx->pc = 0x1A612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6128u;
        // 0x1a612c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6130u;
        goto label_1a6130;
    }
    ctx->pc = 0x1A6128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6128u;
        // 0x1a612c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6130u;
label_1a6130:
    // 0x1a6130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a6134:
    // 0x1a6134: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a6138:
    // 0x1a6138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a613c:
    // 0x1a613c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a613cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6140:
    // 0x1a6140: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a6140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a6144:
    // 0x1a6144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6148:
    // 0x1a6148: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a6148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a614c:
    // 0x1a614c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a614cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6150:
    // 0x1a6150: 0xc06def6  jal         func_1B7BD8
label_1a6154:
    if (ctx->pc == 0x1A6154u) {
        ctx->pc = 0x1A6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6150u;
        // 0x1a6154: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6158u;
        goto label_1a6158;
    }
    ctx->pc = 0x1A6150u;
    SET_GPR_U32(ctx, 31, 0x1A6158u);
    ctx->pc = 0x1A6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6150u;
    // 0x1a6154: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A6158u;
label_1a6158:
    // 0x1a6158: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_1a615c:
    if (ctx->pc == 0x1A615Cu) {
        ctx->pc = 0x1A615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6158u;
        // 0x1a615c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6160u;
        goto label_1a6160;
    }
    ctx->pc = 0x1A6158u;
    {
        const bool branch_taken_0x1a6158 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6158u;
        // 0x1a615c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6158) {
            ctx->pc = 0x1A617Cu;
            goto label_1a617c;
        }
    }
    ctx->pc = 0x1A6160u;
label_1a6160:
    // 0x1a6160: 0xc06dd8a  jal         func_1B7628
label_1a6164:
    if (ctx->pc == 0x1A6164u) {
        ctx->pc = 0x1A6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6160u;
        // 0x1a6164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6168u;
        goto label_1a6168;
    }
    ctx->pc = 0x1A6160u;
    SET_GPR_U32(ctx, 31, 0x1A6168u);
    ctx->pc = 0x1A6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6160u;
    // 0x1a6164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x1A6168u;
label_1a6168:
    // 0x1a6168: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a6168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a616c:
    // 0x1a616c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a616cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6170:
    // 0x1a6170: 0x8c625b64  lw          $v0, 0x5B64($v1)
    ctx->pc = 0x1a6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23396)));
label_1a6174:
    // 0x1a6174: 0x40f809  jalr        $v0
label_1a6178:
    if (ctx->pc == 0x1A6178u) {
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6174u;
        // 0x1a6178: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A617Cu;
        goto label_1a617c;
    }
    ctx->pc = 0x1A6174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A617Cu);
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6174u;
        // 0x1a6178: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6174u, 0x1A617Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A617Cu;
label_1a617c:
    // 0x1a617c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a6180:
    // 0x1a6180: 0xdc25a578  ld          $a1, -0x5A88($at)
    ctx->pc = 0x1a6180u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944120)));
label_1a6184:
    // 0x1a6184: 0xc06def6  jal         func_1B7BD8
label_1a6188:
    if (ctx->pc == 0x1A6188u) {
        ctx->pc = 0x1A6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6184u;
        // 0x1a6188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A618Cu;
        goto label_1a618c;
    }
    ctx->pc = 0x1A6184u;
    SET_GPR_U32(ctx, 31, 0x1A618Cu);
    ctx->pc = 0x1A6188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6184u;
    // 0x1a6188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A618Cu;
label_1a618c:
    // 0x1a618c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_1a6190:
    if (ctx->pc == 0x1A6190u) {
        ctx->pc = 0x1A6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A618Cu;
        // 0x1a6190: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6194u;
        goto label_1a6194;
    }
    ctx->pc = 0x1A618Cu;
    {
        const bool branch_taken_0x1a618c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A618Cu;
        // 0x1a6190: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a618c) {
            ctx->pc = 0x1A61D4u;
            goto label_1a61d4;
        }
    }
    ctx->pc = 0x1A6194u;
label_1a6194:
    // 0x1a6194: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a6198:
    if (ctx->pc == 0x1A6198u) {
        ctx->pc = 0x1A619Cu;
        goto label_1a619c;
    }
    ctx->pc = 0x1A6194u;
    {
        const bool branch_taken_0x1a6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6194) {
            ctx->pc = 0x1A61B4u;
            goto label_1a61b4;
        }
    }
    ctx->pc = 0x1A619Cu;
label_1a619c:
    // 0x1a619c: 0x0  nop
    ctx->pc = 0x1a619cu;
    // NOP
label_1a61a0:
    // 0x1a61a0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1a61a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1a61a4:
    // 0x1a61a4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1a61a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1a61a8:
    // 0x1a61a8: 0xc06dda4  jal         func_1B7690
label_1a61ac:
    if (ctx->pc == 0x1A61ACu) {
        ctx->pc = 0x1A61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A8u;
        // 0x1a61ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61B0u;
        goto label_1a61b0;
    }
    ctx->pc = 0x1A61A8u;
    SET_GPR_U32(ctx, 31, 0x1A61B0u);
    ctx->pc = 0x1A61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61A8u;
    // 0x1a61ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1A61B0u;
label_1a61b0:
    // 0x1a61b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a61b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a61b4:
    // 0x1a61b4: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a61b8:
    // 0x1a61b8: 0xdc25a580  ld          $a1, -0x5A80($at)
    ctx->pc = 0x1a61b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944128)));
label_1a61bc:
    // 0x1a61bc: 0xc06def6  jal         func_1B7BD8
label_1a61c0:
    if (ctx->pc == 0x1A61C0u) {
        ctx->pc = 0x1A61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61BCu;
        // 0x1a61c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61C4u;
        goto label_1a61c4;
    }
    ctx->pc = 0x1A61BCu;
    SET_GPR_U32(ctx, 31, 0x1A61C4u);
    ctx->pc = 0x1A61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61BCu;
    // 0x1a61c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A61C4u;
label_1a61c4:
    // 0x1a61c4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_1a61c8:
    if (ctx->pc == 0x1A61C8u) {
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61CCu;
        goto label_1a61cc;
    }
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a61a0;
        }
    }
    ctx->pc = 0x1A61CCu;
label_1a61cc:
    // 0x1a61cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a61d0:
    if (ctx->pc == 0x1A61D0u) {
        ctx->pc = 0x1A61D4u;
        goto label_1a61d4;
    }
    ctx->pc = 0x1A61CCu;
    {
        const bool branch_taken_0x1a61cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61cc) {
            ctx->pc = 0x1A6224u;
            goto label_1a6224;
        }
    }
    ctx->pc = 0x1A61D4u;
label_1a61d4:
    // 0x1a61d4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a61d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a61d8:
    // 0x1a61d8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a61d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1a61dc:
    // 0x1a61dc: 0xc06def6  jal         func_1B7BD8
label_1a61e0:
    if (ctx->pc == 0x1A61E0u) {
        ctx->pc = 0x1A61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61DCu;
        // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61E4u;
        goto label_1a61e4;
    }
    ctx->pc = 0x1A61DCu;
    SET_GPR_U32(ctx, 31, 0x1A61E4u);
    ctx->pc = 0x1A61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61DCu;
    // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A61E4u;
label_1a61e4:
    // 0x1a61e4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_1a61e8:
    if (ctx->pc == 0x1A61E8u) {
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61ECu;
        goto label_1a61ec;
    }
    ctx->pc = 0x1A61E4u;
    {
        const bool branch_taken_0x1a61e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61e4) {
            ctx->pc = 0x1A6224u;
            goto label_1a6224;
        }
    }
    ctx->pc = 0x1A61ECu;
label_1a61ec:
    // 0x1a61ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a61f0:
    if (ctx->pc == 0x1A61F0u) {
        ctx->pc = 0x1A61F4u;
        goto label_1a61f4;
    }
    ctx->pc = 0x1A61ECu;
    {
        const bool branch_taken_0x1a61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61ec) {
            ctx->pc = 0x1A620Cu;
            goto label_1a620c;
        }
    }
    ctx->pc = 0x1A61F4u;
label_1a61f4:
    // 0x1a61f4: 0x0  nop
    ctx->pc = 0x1a61f4u;
    // NOP
label_1a61f8:
    // 0x1a61f8: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1a61f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1a61fc:
    // 0x1a61fc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1a61fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1a6200:
    // 0x1a6200: 0xc06de50  jal         func_1B7940
label_1a6204:
    if (ctx->pc == 0x1A6204u) {
        ctx->pc = 0x1A6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6200u;
        // 0x1a6204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6208u;
        goto label_1a6208;
    }
    ctx->pc = 0x1A6200u;
    SET_GPR_U32(ctx, 31, 0x1A6208u);
    ctx->pc = 0x1A6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6200u;
    // 0x1a6204: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7940u;
    { ctx->pc = 0x1b7940; return; }
    ctx->pc = 0x1A6208u;
label_1a6208:
    // 0x1a6208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a620c:
    // 0x1a620c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a620cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a6210:
    // 0x1a6210: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a6210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1a6214:
    // 0x1a6214: 0xc06def6  jal         func_1B7BD8
label_1a6218:
    if (ctx->pc == 0x1A6218u) {
        ctx->pc = 0x1A6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6214u;
        // 0x1a6218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A621Cu;
        goto label_1a621c;
    }
    ctx->pc = 0x1A6214u;
    SET_GPR_U32(ctx, 31, 0x1A621Cu);
    ctx->pc = 0x1A6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6214u;
    // 0x1a6218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A621Cu;
label_1a621c:
    // 0x1a621c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_1a6220:
    if (ctx->pc == 0x1A6220u) {
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A621Cu;
        // 0x1a6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6224u;
        goto label_1a6224;
    }
    ctx->pc = 0x1A621Cu;
    {
        const bool branch_taken_0x1a621c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A621Cu;
        // 0x1a6220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a621c) {
            ctx->pc = 0x1A61F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a61f8;
        }
    }
    ctx->pc = 0x1A6224u;
label_1a6224:
    // 0x1a6224: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a6228:
    // 0x1a6228: 0xdc25a588  ld          $a1, -0x5A78($at)
    ctx->pc = 0x1a6228u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944136)));
label_1a622c:
    // 0x1a622c: 0xc06dda4  jal         func_1B7690
label_1a6230:
    if (ctx->pc == 0x1A6230u) {
        ctx->pc = 0x1A6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A622Cu;
        // 0x1a6230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6234u;
        goto label_1a6234;
    }
    ctx->pc = 0x1A622Cu;
    SET_GPR_U32(ctx, 31, 0x1A6234u);
    ctx->pc = 0x1A6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A622Cu;
    // 0x1a6230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1A6234u;
label_1a6234:
    // 0x1a6234: 0xc06dbbc  jal         func_1B6EF0
label_1a6238:
    if (ctx->pc == 0x1A6238u) {
        ctx->pc = 0x1A6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6234u;
        // 0x1a6238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A623Cu;
        goto label_1a623c;
    }
    ctx->pc = 0x1A6234u;
    SET_GPR_U32(ctx, 31, 0x1A623Cu);
    ctx->pc = 0x1A6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6234u;
    // 0x1a6238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EF0u;
    { ctx->pc = 0x1b6ef0; return; }
    ctx->pc = 0x1A623Cu;
label_1a623c:
    // 0x1a623c: 0xc069828  jal         func_1A60A0
label_1a6240:
    if (ctx->pc == 0x1A6240u) {
        ctx->pc = 0x1A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A623Cu;
        // 0x1a6240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6244u;
        goto label_1a6244;
    }
    ctx->pc = 0x1A623Cu;
    SET_GPR_U32(ctx, 31, 0x1A6244u);
    ctx->pc = 0x1A6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A623Cu;
    // 0x1a6240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60A0u;
    goto label_1a60a0;
    ctx->pc = 0x1A6244u;
label_1a6244:
    // 0x1a6244: 0x2644a560  addiu       $a0, $s2, -0x5AA0
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944096));
label_1a6248:
    // 0x1a6248: 0xc069a22  jal         func_1A6888
label_1a624c:
    if (ctx->pc == 0x1A624Cu) {
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6248u;
        // 0x1a624c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6250u;
        goto label_1a6250;
    }
    ctx->pc = 0x1A6248u;
    SET_GPR_U32(ctx, 31, 0x1A6250u);
    ctx->pc = 0x1A624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6248u;
    // 0x1a624c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A6250u;
label_1a6250:
    // 0x1a6250: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
label_1a6254:
    if (ctx->pc == 0x1A6254u) {
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6258u;
        goto label_1a6258;
    }
    ctx->pc = 0x1A6250u;
    {
        const bool branch_taken_0x1a6250 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6250) {
            ctx->pc = 0x1A6278u;
            goto label_1a6278;
        }
    }
    ctx->pc = 0x1A6258u;
label_1a6258:
    // 0x1a6258: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a625c:
    // 0x1a625c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6260:
    // 0x1a6260: 0x2484a568  addiu       $a0, $a0, -0x5A98
    ctx->pc = 0x1a6260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944104));
label_1a6264:
    // 0x1a6264: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6268:
    // 0x1a6268: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a626c:
    // 0x1a626c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a626cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6270:
    // 0x1a6270: 0x8069a22  j           func_1A6888
label_1a6274:
    if (ctx->pc == 0x1A6274u) {
        ctx->pc = 0x1A6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6270u;
        // 0x1a6274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6278u;
        goto label_1a6278;
    }
    ctx->pc = 0x1A6270u;
    ctx->pc = 0x1A6274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6270u;
    // 0x1a6274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A6278u;
label_1a6278:
    // 0x1a6278: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a6278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a627c:
    // 0x1a627c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a627cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6280:
    // 0x1a6280: 0x2484a570  addiu       $a0, $a0, -0x5A90
    ctx->pc = 0x1a6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944112));
label_1a6284:
    // 0x1a6284: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6288:
    // 0x1a6288: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a628c:
    // 0x1a628c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a628cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6290:
    // 0x1a6290: 0x8069a22  j           func_1A6888
label_1a6294:
    if (ctx->pc == 0x1A6294u) {
        ctx->pc = 0x1A6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6290u;
        // 0x1a6294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6298u;
        goto label_1a6298;
    }
    ctx->pc = 0x1A6290u;
    ctx->pc = 0x1A6294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6290u;
    // 0x1a6294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A6298u;
label_1a6298:
    // 0x1a6298: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a6298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a629c:
    // 0x1a629c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a62a0:
    // 0x1a62a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a62a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a62a4:
    // 0x1a62a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a62a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a62a8:
    // 0x1a62a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a62a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a62ac:
    // 0x1a62ac: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a62acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1a62b0:
    // 0x1a62b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a62b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a62b4:
    // 0x1a62b4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a62b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_1a62b8:
    // 0x1a62b8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a62b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a62bc:
    // 0x1a62bc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a62c0:
    // 0x1a62c0: 0xc06b518  jal         func_1AD460
label_1a62c4:
    if (ctx->pc == 0x1A62C4u) {
        ctx->pc = 0x1A62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62C0u;
        // 0x1a62c4: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62C8u;
        goto label_1a62c8;
    }
    ctx->pc = 0x1A62C0u;
    SET_GPR_U32(ctx, 31, 0x1A62C8u);
    ctx->pc = 0x1A62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62C0u;
    // 0x1a62c4: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A62C8u;
label_1a62c8:
    // 0x1a62c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a62c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a62cc:
    // 0x1a62cc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a62ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a62d0:
    // 0x1a62d0: 0x1040015e  beqz        $v0, . + 4 + (0x15E << 2)
label_1a62d4:
    if (ctx->pc == 0x1A62D4u) {
        ctx->pc = 0x1A62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62D0u;
        // 0x1a62d4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62D8u;
        goto label_1a62d8;
    }
    ctx->pc = 0x1A62D0u;
    {
        const bool branch_taken_0x1a62d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62D0u;
        // 0x1a62d4: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62d0) {
            ctx->pc = 0x1A684Cu;
            { ctx->pc = 0x1a684c; return; }
        }
    }
    ctx->pc = 0x1A62D8u;
label_1a62d8:
    // 0x1a62d8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1a62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1a62dc:
    // 0x1a62dc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a62dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a62e0:
    // 0x1a62e0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1a62e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_1a62e4:
    // 0x1a62e4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1a62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1a62e8:
    // 0x1a62e8: 0x1482014b  bne         $a0, $v0, . + 4 + (0x14B << 2)
label_1a62ec:
    if (ctx->pc == 0x1A62ECu) {
        ctx->pc = 0x1A62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62E8u;
        // 0x1a62ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62F0u;
        goto label_1a62f0;
    }
    ctx->pc = 0x1A62E8u;
    {
        const bool branch_taken_0x1a62e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62E8u;
        // 0x1a62ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62e8) {
            ctx->pc = 0x1A6818u;
            { ctx->pc = 0x1a6818; return; }
        }
    }
    ctx->pc = 0x1A62F0u;
label_1a62f0:
    // 0x1a62f0: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1a62f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a62f4:
    // 0x1a62f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a62f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a62f8:
    // 0x1a62f8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a62f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a62fc:
    // 0x1a62fc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1a62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1a6300:
    // 0x1a6300: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a6300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1a6304:
    // 0x1a6304: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x1a6304u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_1a6308:
    // 0x1a6308: 0x2c830049  sltiu       $v1, $a0, 0x49
    ctx->pc = 0x1a6308u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
label_1a630c:
    // 0x1a630c: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
label_1a6310:
    if (ctx->pc == 0x1A6310u) {
        ctx->pc = 0x1A6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A630Cu;
        // 0x1a6310: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6314u;
        goto label_1a6314;
    }
    ctx->pc = 0x1A630Cu;
    {
        const bool branch_taken_0x1a630c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A630Cu;
        // 0x1a6310: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a630c) {
            ctx->pc = 0x1A6830u;
            { ctx->pc = 0x1a6830; return; }
        }
    }
    ctx->pc = 0x1A6314u;
label_1a6314:
    // 0x1a6314: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a6314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a6318:
    // 0x1a6318: 0x2442a590  addiu       $v0, $v0, -0x5A70
    ctx->pc = 0x1a6318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944144));
label_1a631c:
    // 0x1a631c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a6320:
    // 0x1a6320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a6320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a6324:
    // 0x1a6324: 0x800008  jr          $a0
label_1a6328:
    if (ctx->pc == 0x1A6328u) {
        ctx->pc = 0x1A632Cu;
        goto label_1a632c;
    }
    ctx->pc = 0x1A6324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A632Cu: goto label_1a632c;
            case 0x1A63B0u: goto label_1a63b0;
            case 0x1A63BCu: goto label_1a63bc;
            case 0x1A63C4u: goto label_1a63c4;
            case 0x1A6480u: { ctx->pc = 0x1a6480; return; }
            case 0x1A6540u: { ctx->pc = 0x1a6540; return; }
            case 0x1A6630u: { ctx->pc = 0x1a6630; return; }
            case 0x1A6700u: { ctx->pc = 0x1a6700; return; }
            case 0x1A674Cu: { ctx->pc = 0x1a674c; return; }
            case 0x1A67F0u: { ctx->pc = 0x1a67f0; return; }
            case 0x1A6838u: { ctx->pc = 0x1a6838; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A632Cu;
label_1a632c:
    // 0x1a632c: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x1a632cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_1a6330:
    // 0x1a6330: 0x2465ffd0  addiu       $a1, $v1, -0x30
    ctx->pc = 0x1a6330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_1a6334:
    // 0x1a6334: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a6334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1a6338:
    // 0x1a6338: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1a6338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a633c:
    // 0x1a633c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1a6340:
    if (ctx->pc == 0x1A6340u) {
        ctx->pc = 0x1A6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A633Cu;
        // 0x1a6340: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6344u;
        goto label_1a6344;
    }
    ctx->pc = 0x1A633Cu;
    {
        const bool branch_taken_0x1a633c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A633Cu;
        // 0x1a6340: 0x82460002  lb          $a2, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a633c) {
            ctx->pc = 0x1A63B4u;
            goto label_1a63b4;
        }
    }
    ctx->pc = 0x1A6344u;
label_1a6344:
    // 0x1a6344: 0x24c2ffd0  addiu       $v0, $a2, -0x30
    ctx->pc = 0x1a6344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_1a6348:
    // 0x1a6348: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1a6348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a634c:
    // 0x1a634c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a6350:
    if (ctx->pc == 0x1A6350u) {
        ctx->pc = 0x1A6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A634Cu;
        // 0x1a6350: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6354u;
        goto label_1a6354;
    }
    ctx->pc = 0x1A634Cu;
    {
        const bool branch_taken_0x1a634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A634Cu;
        // 0x1a6350: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a634c) {
            ctx->pc = 0x1A6374u;
            goto label_1a6374;
        }
    }
    ctx->pc = 0x1A6354u;
label_1a6354:
    // 0x1a6354: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1a6354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a6358:
    // 0x1a6358: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a6358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a635c:
    // 0x1a635c: 0x26500002  addiu       $s0, $s2, 0x2
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1a6360:
    // 0x1a6360: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1a6360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_1a6364:
    // 0x1a6364: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1a6364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a6368:
    // 0x1a6368: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1a6368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1a636c:
    // 0x1a636c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a6370:
    if (ctx->pc == 0x1A6370u) {
        ctx->pc = 0x1A6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A636Cu;
        // 0x1a6370: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6374u;
        goto label_1a6374;
    }
    ctx->pc = 0x1A636Cu;
    {
        const bool branch_taken_0x1a636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A636Cu;
        // 0x1a6370: 0x82280a  movz        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a636c) {
            ctx->pc = 0x1A6378u;
            goto label_1a6378;
        }
    }
    ctx->pc = 0x1A6374u;
label_1a6374:
    // 0x1a6374: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a6378:
    // 0x1a6378: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x1a6378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1a637c:
    // 0x1a637c: 0x18a0ffdc  blez        $a1, . + 4 + (-0x24 << 2)
label_1a6380:
    if (ctx->pc == 0x1A6380u) {
        ctx->pc = 0x1A6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A637Cu;
        // 0x1a6380: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6384u;
        goto label_1a6384;
    }
    ctx->pc = 0x1A637Cu;
    {
        const bool branch_taken_0x1a637c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A637Cu;
        // 0x1a6380: 0x45a023  subu        $s4, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a637c) {
            ctx->pc = 0x1A62F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a62f0;
        }
    }
    ctx->pc = 0x1A6384u;
label_1a6384:
    // 0x1a6384: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1a6384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a6388:
    // 0x1a6388: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1a6388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a638c:
    // 0x1a638c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a6390:
    // 0x1a6390: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a6390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a6394:
    // 0x1a6394: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1a6394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1a6398:
    // 0x1a6398: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1a6398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1a639c:
    // 0x1a639c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a639cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a63a0:
    // 0x1a63a0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1a63a4:
    if (ctx->pc == 0x1A63A4u) {
        ctx->pc = 0x1A63A8u;
        goto label_1a63a8;
    }
    ctx->pc = 0x1A63A0u;
    {
        const bool branch_taken_0x1a63a0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1a63a0) {
            ctx->pc = 0x1A6388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6388;
        }
    }
    ctx->pc = 0x1A63A8u;
label_1a63a8:
    // 0x1a63a8: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_1a63ac:
    if (ctx->pc == 0x1A63ACu) {
        ctx->pc = 0x1A63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63A8u;
        // 0x1a63ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63B0u;
        goto label_1a63b0;
    }
    ctx->pc = 0x1A63A8u;
    {
        const bool branch_taken_0x1a63a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63A8u;
        // 0x1a63ac: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63a8) {
            ctx->pc = 0x1A62F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a62f8;
        }
    }
    ctx->pc = 0x1A63B0u;
label_1a63b0:
    // 0x1a63b0: 0x2407006c  addiu       $a3, $zero, 0x6C
    ctx->pc = 0x1a63b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a63b4:
    // 0x1a63b4: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_1a63b8:
    if (ctx->pc == 0x1A63B8u) {
        ctx->pc = 0x1A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63B4u;
        // 0x1a63b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63BCu;
        goto label_1a63bc;
    }
    ctx->pc = 0x1A63B4u;
    {
        const bool branch_taken_0x1a63b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63B4u;
        // 0x1a63b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63b4) {
            ctx->pc = 0x1A62F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a62f4;
        }
    }
    ctx->pc = 0x1A63BCu;
label_1a63bc:
    // 0x1a63bc: 0x1000fffd  b           . + 4 + (-0x3 << 2)
label_1a63c0:
    if (ctx->pc == 0x1A63C0u) {
        ctx->pc = 0x1A63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63BCu;
        // 0x1a63c0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63C4u;
        goto label_1a63c4;
    }
    ctx->pc = 0x1A63BCu;
    {
        const bool branch_taken_0x1a63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63BCu;
        // 0x1a63c0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63bc) {
            ctx->pc = 0x1A63B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a63b4;
        }
    }
    ctx->pc = 0x1A63C4u;
label_1a63c4:
    // 0x1a63c4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1a63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a63c8:
    // 0x1a63c8: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1a63cc:
    if (ctx->pc == 0x1A63CCu) {
        ctx->pc = 0x1A63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63C8u;
        // 0x1a63cc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63D0u;
        goto label_1a63d0;
    }
    ctx->pc = 0x1A63C8u;
    {
        const bool branch_taken_0x1a63c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63C8u;
        // 0x1a63cc: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63c8) {
            ctx->pc = 0x1A63DCu;
            goto label_1a63dc;
        }
    }
    ctx->pc = 0x1A63D0u;
label_1a63d0:
    // 0x1a63d0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1a63d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1a63d4:
    // 0x1a63d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a63d8:
    if (ctx->pc == 0x1A63D8u) {
        ctx->pc = 0x1A63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63D4u;
        // 0x1a63d8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63DCu;
        goto label_1a63dc;
    }
    ctx->pc = 0x1A63D4u;
    {
        const bool branch_taken_0x1a63d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63D4u;
        // 0x1a63d8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63d4) {
            ctx->pc = 0x1A63F0u;
            goto label_1a63f0;
        }
    }
    ctx->pc = 0x1A63DCu;
label_1a63dc:
    // 0x1a63dc: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1a63e0:
    if (ctx->pc == 0x1A63E0u) {
        ctx->pc = 0x1A63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63DCu;
        // 0x1a63e0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63E4u;
        goto label_1a63e4;
    }
    ctx->pc = 0x1A63DCu;
    {
        const bool branch_taken_0x1a63dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63DCu;
        // 0x1a63e0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63dc) {
            ctx->pc = 0x1A63ECu;
            goto label_1a63ec;
        }
    }
    ctx->pc = 0x1A63E4u;
label_1a63e4:
    // 0x1a63e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a63e8:
    if (ctx->pc == 0x1A63E8u) {
        ctx->pc = 0x1A63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63E4u;
        // 0x1a63e8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63ECu;
        goto label_1a63ec;
    }
    ctx->pc = 0x1A63E4u;
    {
        const bool branch_taken_0x1a63e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63E4u;
        // 0x1a63e8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63e4) {
            ctx->pc = 0x1A63F0u;
            goto label_1a63f0;
        }
    }
    ctx->pc = 0x1A63ECu;
label_1a63ec:
    // 0x1a63ec: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x1a63ecu;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_1a63f0:
    // 0x1a63f0: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x1a63f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_1a63f4:
    // 0x1a63f4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1a63f8:
    if (ctx->pc == 0x1A63F8u) {
        ctx->pc = 0x1A63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63F4u;
        // 0x1a63f8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A63FCu;
        goto label_1a63fc;
    }
    ctx->pc = 0x1A63F4u;
    {
        const bool branch_taken_0x1a63f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63F4u;
        // 0x1a63f8: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63f4) {
            ctx->pc = 0x1A6410u;
            goto label_1a6410;
        }
    }
    ctx->pc = 0x1A63FCu;
label_1a63fc:
    // 0x1a63fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1a63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a6400:
    // 0x1a6400: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x1a6400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
label_1a6404:
    // 0x1a6404: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x1a6404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
label_1a6408:
    // 0x1a6408: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a640c:
    if (ctx->pc == 0x1A640Cu) {
        ctx->pc = 0x1A640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6408u;
        // 0x1a640c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6410u;
        goto label_1a6410;
    }
    ctx->pc = 0x1A6408u;
    {
        const bool branch_taken_0x1a6408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6408u;
        // 0x1a640c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6408) {
            ctx->pc = 0x1A6438u;
            { ctx->pc = 0x1a6438; return; }
        }
    }
    ctx->pc = 0x1A6410u;
label_1a6410:
    // 0x1a6410: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a6414:
    // 0x1a6414: 0x0  nop
    ctx->pc = 0x1a6414u;
    // NOP
label_1a6418:
    // 0x1a6418: 0x32220007  andi        $v0, $s1, 0x7
    ctx->pc = 0x1a6418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
label_1a641c:
    // 0x1a641c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a6420:
    // 0x1a6420: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x1a6420u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_1a6424:
    // 0x1a6424: 0x1188fa  dsrl        $s1, $s1, 3
    ctx->pc = 0x1a6424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 3);
label_1a6428:
    // 0x1a6428: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a6428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a642c:
    // 0x1a642c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1a642cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a6430u;
    return;
}

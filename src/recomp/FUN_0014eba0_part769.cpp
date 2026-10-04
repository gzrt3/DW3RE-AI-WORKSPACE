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


void FUN_0014eba0_part769(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c5ba0u: goto label_2c5ba0;
        case 0x2c5ba4u: goto label_2c5ba4;
        case 0x2c5ba8u: goto label_2c5ba8;
        case 0x2c5bacu: goto label_2c5bac;
        case 0x2c5bb0u: goto label_2c5bb0;
        case 0x2c5bb4u: goto label_2c5bb4;
        case 0x2c5bb8u: goto label_2c5bb8;
        case 0x2c5bbcu: goto label_2c5bbc;
        case 0x2c5bc0u: goto label_2c5bc0;
        case 0x2c5bc4u: goto label_2c5bc4;
        case 0x2c5bc8u: goto label_2c5bc8;
        case 0x2c5bccu: goto label_2c5bcc;
        case 0x2c5bd0u: goto label_2c5bd0;
        case 0x2c5bd4u: goto label_2c5bd4;
        case 0x2c5bd8u: goto label_2c5bd8;
        case 0x2c5bdcu: goto label_2c5bdc;
        case 0x2c5be0u: goto label_2c5be0;
        case 0x2c5be4u: goto label_2c5be4;
        case 0x2c5be8u: goto label_2c5be8;
        case 0x2c5becu: goto label_2c5bec;
        case 0x2c5bf0u: goto label_2c5bf0;
        case 0x2c5bf4u: goto label_2c5bf4;
        case 0x2c5bf8u: goto label_2c5bf8;
        case 0x2c5bfcu: goto label_2c5bfc;
        case 0x2c5c00u: goto label_2c5c00;
        case 0x2c5c04u: goto label_2c5c04;
        case 0x2c5c08u: goto label_2c5c08;
        case 0x2c5c0cu: goto label_2c5c0c;
        case 0x2c5c10u: goto label_2c5c10;
        case 0x2c5c14u: goto label_2c5c14;
        case 0x2c5c18u: goto label_2c5c18;
        case 0x2c5c1cu: goto label_2c5c1c;
        case 0x2c5c20u: goto label_2c5c20;
        case 0x2c5c24u: goto label_2c5c24;
        case 0x2c5c28u: goto label_2c5c28;
        case 0x2c5c2cu: goto label_2c5c2c;
        case 0x2c5c30u: goto label_2c5c30;
        case 0x2c5c34u: goto label_2c5c34;
        case 0x2c5c38u: goto label_2c5c38;
        case 0x2c5c3cu: goto label_2c5c3c;
        case 0x2c5c40u: goto label_2c5c40;
        case 0x2c5c44u: goto label_2c5c44;
        case 0x2c5c48u: goto label_2c5c48;
        case 0x2c5c4cu: goto label_2c5c4c;
        case 0x2c5c50u: goto label_2c5c50;
        case 0x2c5c54u: goto label_2c5c54;
        case 0x2c5c58u: goto label_2c5c58;
        case 0x2c5c5cu: goto label_2c5c5c;
        case 0x2c5c60u: goto label_2c5c60;
        case 0x2c5c64u: goto label_2c5c64;
        case 0x2c5c68u: goto label_2c5c68;
        case 0x2c5c6cu: goto label_2c5c6c;
        case 0x2c5c70u: goto label_2c5c70;
        case 0x2c5c74u: goto label_2c5c74;
        case 0x2c5c78u: goto label_2c5c78;
        case 0x2c5c7cu: goto label_2c5c7c;
        case 0x2c5c80u: goto label_2c5c80;
        case 0x2c5c84u: goto label_2c5c84;
        case 0x2c5c88u: goto label_2c5c88;
        case 0x2c5c8cu: goto label_2c5c8c;
        case 0x2c5c90u: goto label_2c5c90;
        case 0x2c5c94u: goto label_2c5c94;
        case 0x2c5c98u: goto label_2c5c98;
        case 0x2c5c9cu: goto label_2c5c9c;
        case 0x2c5ca0u: goto label_2c5ca0;
        case 0x2c5ca4u: goto label_2c5ca4;
        case 0x2c5ca8u: goto label_2c5ca8;
        case 0x2c5cacu: goto label_2c5cac;
        case 0x2c5cb0u: goto label_2c5cb0;
        case 0x2c5cb4u: goto label_2c5cb4;
        case 0x2c5cb8u: goto label_2c5cb8;
        case 0x2c5cbcu: goto label_2c5cbc;
        case 0x2c5cc0u: goto label_2c5cc0;
        case 0x2c5cc4u: goto label_2c5cc4;
        case 0x2c5cc8u: goto label_2c5cc8;
        case 0x2c5cccu: goto label_2c5ccc;
        case 0x2c5cd0u: goto label_2c5cd0;
        case 0x2c5cd4u: goto label_2c5cd4;
        case 0x2c5cd8u: goto label_2c5cd8;
        case 0x2c5cdcu: goto label_2c5cdc;
        case 0x2c5ce0u: goto label_2c5ce0;
        case 0x2c5ce4u: goto label_2c5ce4;
        case 0x2c5ce8u: goto label_2c5ce8;
        case 0x2c5cecu: goto label_2c5cec;
        case 0x2c5cf0u: goto label_2c5cf0;
        case 0x2c5cf4u: goto label_2c5cf4;
        case 0x2c5cf8u: goto label_2c5cf8;
        case 0x2c5cfcu: goto label_2c5cfc;
        case 0x2c5d00u: goto label_2c5d00;
        case 0x2c5d04u: goto label_2c5d04;
        case 0x2c5d08u: goto label_2c5d08;
        case 0x2c5d0cu: goto label_2c5d0c;
        case 0x2c5d10u: goto label_2c5d10;
        case 0x2c5d14u: goto label_2c5d14;
        case 0x2c5d18u: goto label_2c5d18;
        case 0x2c5d1cu: goto label_2c5d1c;
        case 0x2c5d20u: goto label_2c5d20;
        case 0x2c5d24u: goto label_2c5d24;
        case 0x2c5d28u: goto label_2c5d28;
        case 0x2c5d2cu: goto label_2c5d2c;
        case 0x2c5d30u: goto label_2c5d30;
        case 0x2c5d34u: goto label_2c5d34;
        case 0x2c5d38u: goto label_2c5d38;
        case 0x2c5d3cu: goto label_2c5d3c;
        case 0x2c5d40u: goto label_2c5d40;
        case 0x2c5d44u: goto label_2c5d44;
        case 0x2c5d48u: goto label_2c5d48;
        case 0x2c5d4cu: goto label_2c5d4c;
        case 0x2c5d50u: goto label_2c5d50;
        case 0x2c5d54u: goto label_2c5d54;
        case 0x2c5d58u: goto label_2c5d58;
        case 0x2c5d5cu: goto label_2c5d5c;
        case 0x2c5d60u: goto label_2c5d60;
        case 0x2c5d64u: goto label_2c5d64;
        case 0x2c5d68u: goto label_2c5d68;
        case 0x2c5d6cu: goto label_2c5d6c;
        case 0x2c5d70u: goto label_2c5d70;
        case 0x2c5d74u: goto label_2c5d74;
        case 0x2c5d78u: goto label_2c5d78;
        case 0x2c5d7cu: goto label_2c5d7c;
        case 0x2c5d80u: goto label_2c5d80;
        case 0x2c5d84u: goto label_2c5d84;
        case 0x2c5d88u: goto label_2c5d88;
        case 0x2c5d8cu: goto label_2c5d8c;
        case 0x2c5d90u: goto label_2c5d90;
        case 0x2c5d94u: goto label_2c5d94;
        case 0x2c5d98u: goto label_2c5d98;
        case 0x2c5d9cu: goto label_2c5d9c;
        case 0x2c5da0u: goto label_2c5da0;
        case 0x2c5da4u: goto label_2c5da4;
        case 0x2c5da8u: goto label_2c5da8;
        case 0x2c5dacu: goto label_2c5dac;
        case 0x2c5db0u: goto label_2c5db0;
        case 0x2c5db4u: goto label_2c5db4;
        case 0x2c5db8u: goto label_2c5db8;
        case 0x2c5dbcu: goto label_2c5dbc;
        case 0x2c5dc0u: goto label_2c5dc0;
        case 0x2c5dc4u: goto label_2c5dc4;
        case 0x2c5dc8u: goto label_2c5dc8;
        case 0x2c5dccu: goto label_2c5dcc;
        case 0x2c5dd0u: goto label_2c5dd0;
        case 0x2c5dd4u: goto label_2c5dd4;
        case 0x2c5dd8u: goto label_2c5dd8;
        case 0x2c5ddcu: goto label_2c5ddc;
        case 0x2c5de0u: goto label_2c5de0;
        case 0x2c5de4u: goto label_2c5de4;
        case 0x2c5de8u: goto label_2c5de8;
        case 0x2c5decu: goto label_2c5dec;
        case 0x2c5df0u: goto label_2c5df0;
        case 0x2c5df4u: goto label_2c5df4;
        case 0x2c5df8u: goto label_2c5df8;
        case 0x2c5dfcu: goto label_2c5dfc;
        case 0x2c5e00u: goto label_2c5e00;
        case 0x2c5e04u: goto label_2c5e04;
        case 0x2c5e08u: goto label_2c5e08;
        case 0x2c5e0cu: goto label_2c5e0c;
        case 0x2c5e10u: goto label_2c5e10;
        case 0x2c5e14u: goto label_2c5e14;
        case 0x2c5e18u: goto label_2c5e18;
        case 0x2c5e1cu: goto label_2c5e1c;
        case 0x2c5e20u: goto label_2c5e20;
        case 0x2c5e24u: goto label_2c5e24;
        case 0x2c5e28u: goto label_2c5e28;
        case 0x2c5e2cu: goto label_2c5e2c;
        case 0x2c5e30u: goto label_2c5e30;
        case 0x2c5e34u: goto label_2c5e34;
        case 0x2c5e38u: goto label_2c5e38;
        case 0x2c5e3cu: goto label_2c5e3c;
        case 0x2c5e40u: goto label_2c5e40;
        case 0x2c5e44u: goto label_2c5e44;
        case 0x2c5e48u: goto label_2c5e48;
        case 0x2c5e4cu: goto label_2c5e4c;
        case 0x2c5e50u: goto label_2c5e50;
        case 0x2c5e54u: goto label_2c5e54;
        case 0x2c5e58u: goto label_2c5e58;
        case 0x2c5e5cu: goto label_2c5e5c;
        case 0x2c5e60u: goto label_2c5e60;
        case 0x2c5e64u: goto label_2c5e64;
        case 0x2c5e68u: goto label_2c5e68;
        case 0x2c5e6cu: goto label_2c5e6c;
        case 0x2c5e70u: goto label_2c5e70;
        case 0x2c5e74u: goto label_2c5e74;
        case 0x2c5e78u: goto label_2c5e78;
        case 0x2c5e7cu: goto label_2c5e7c;
        case 0x2c5e80u: goto label_2c5e80;
        case 0x2c5e84u: goto label_2c5e84;
        case 0x2c5e88u: goto label_2c5e88;
        case 0x2c5e8cu: goto label_2c5e8c;
        case 0x2c5e90u: goto label_2c5e90;
        case 0x2c5e94u: goto label_2c5e94;
        case 0x2c5e98u: goto label_2c5e98;
        case 0x2c5e9cu: goto label_2c5e9c;
        case 0x2c5ea0u: goto label_2c5ea0;
        case 0x2c5ea4u: goto label_2c5ea4;
        case 0x2c5ea8u: goto label_2c5ea8;
        case 0x2c5eacu: goto label_2c5eac;
        case 0x2c5eb0u: goto label_2c5eb0;
        case 0x2c5eb4u: goto label_2c5eb4;
        case 0x2c5eb8u: goto label_2c5eb8;
        case 0x2c5ebcu: goto label_2c5ebc;
        case 0x2c5ec0u: goto label_2c5ec0;
        case 0x2c5ec4u: goto label_2c5ec4;
        case 0x2c5ec8u: goto label_2c5ec8;
        case 0x2c5eccu: goto label_2c5ecc;
        case 0x2c5ed0u: goto label_2c5ed0;
        case 0x2c5ed4u: goto label_2c5ed4;
        case 0x2c5ed8u: goto label_2c5ed8;
        case 0x2c5edcu: goto label_2c5edc;
        case 0x2c5ee0u: goto label_2c5ee0;
        case 0x2c5ee4u: goto label_2c5ee4;
        case 0x2c5ee8u: goto label_2c5ee8;
        case 0x2c5eecu: goto label_2c5eec;
        case 0x2c5ef0u: goto label_2c5ef0;
        case 0x2c5ef4u: goto label_2c5ef4;
        case 0x2c5ef8u: goto label_2c5ef8;
        case 0x2c5efcu: goto label_2c5efc;
        case 0x2c5f00u: goto label_2c5f00;
        case 0x2c5f04u: goto label_2c5f04;
        case 0x2c5f08u: goto label_2c5f08;
        case 0x2c5f0cu: goto label_2c5f0c;
        case 0x2c5f10u: goto label_2c5f10;
        case 0x2c5f14u: goto label_2c5f14;
        case 0x2c5f18u: goto label_2c5f18;
        case 0x2c5f1cu: goto label_2c5f1c;
        case 0x2c5f20u: goto label_2c5f20;
        case 0x2c5f24u: goto label_2c5f24;
        case 0x2c5f28u: goto label_2c5f28;
        case 0x2c5f2cu: goto label_2c5f2c;
        case 0x2c5f30u: goto label_2c5f30;
        case 0x2c5f34u: goto label_2c5f34;
        case 0x2c5f38u: goto label_2c5f38;
        case 0x2c5f3cu: goto label_2c5f3c;
        case 0x2c5f40u: goto label_2c5f40;
        case 0x2c5f44u: goto label_2c5f44;
        case 0x2c5f48u: goto label_2c5f48;
        case 0x2c5f4cu: goto label_2c5f4c;
        case 0x2c5f50u: goto label_2c5f50;
        case 0x2c5f54u: goto label_2c5f54;
        case 0x2c5f58u: goto label_2c5f58;
        case 0x2c5f5cu: goto label_2c5f5c;
        case 0x2c5f60u: goto label_2c5f60;
        case 0x2c5f64u: goto label_2c5f64;
        case 0x2c5f68u: goto label_2c5f68;
        case 0x2c5f6cu: goto label_2c5f6c;
        case 0x2c5f70u: goto label_2c5f70;
        case 0x2c5f74u: goto label_2c5f74;
        case 0x2c5f78u: goto label_2c5f78;
        case 0x2c5f7cu: goto label_2c5f7c;
        case 0x2c5f80u: goto label_2c5f80;
        case 0x2c5f84u: goto label_2c5f84;
        case 0x2c5f88u: goto label_2c5f88;
        case 0x2c5f8cu: goto label_2c5f8c;
        case 0x2c5f90u: goto label_2c5f90;
        case 0x2c5f94u: goto label_2c5f94;
        case 0x2c5f98u: goto label_2c5f98;
        case 0x2c5f9cu: goto label_2c5f9c;
        case 0x2c5fa0u: goto label_2c5fa0;
        case 0x2c5fa4u: goto label_2c5fa4;
        case 0x2c5fa8u: goto label_2c5fa8;
        case 0x2c5facu: goto label_2c5fac;
        case 0x2c5fb0u: goto label_2c5fb0;
        case 0x2c5fb4u: goto label_2c5fb4;
        case 0x2c5fb8u: goto label_2c5fb8;
        case 0x2c5fbcu: goto label_2c5fbc;
        case 0x2c5fc0u: goto label_2c5fc0;
        case 0x2c5fc4u: goto label_2c5fc4;
        case 0x2c5fc8u: goto label_2c5fc8;
        case 0x2c5fccu: goto label_2c5fcc;
        case 0x2c5fd0u: goto label_2c5fd0;
        case 0x2c5fd4u: goto label_2c5fd4;
        case 0x2c5fd8u: goto label_2c5fd8;
        case 0x2c5fdcu: goto label_2c5fdc;
        case 0x2c5fe0u: goto label_2c5fe0;
        case 0x2c5fe4u: goto label_2c5fe4;
        case 0x2c5fe8u: goto label_2c5fe8;
        case 0x2c5fecu: goto label_2c5fec;
        case 0x2c5ff0u: goto label_2c5ff0;
        case 0x2c5ff4u: goto label_2c5ff4;
        case 0x2c5ff8u: goto label_2c5ff8;
        case 0x2c5ffcu: goto label_2c5ffc;
        case 0x2c6000u: goto label_2c6000;
        case 0x2c6004u: goto label_2c6004;
        case 0x2c6008u: goto label_2c6008;
        case 0x2c600cu: goto label_2c600c;
        case 0x2c6010u: goto label_2c6010;
        case 0x2c6014u: goto label_2c6014;
        case 0x2c6018u: goto label_2c6018;
        case 0x2c601cu: goto label_2c601c;
        case 0x2c6020u: goto label_2c6020;
        case 0x2c6024u: goto label_2c6024;
        case 0x2c6028u: goto label_2c6028;
        case 0x2c602cu: goto label_2c602c;
        case 0x2c6030u: goto label_2c6030;
        case 0x2c6034u: goto label_2c6034;
        case 0x2c6038u: goto label_2c6038;
        case 0x2c603cu: goto label_2c603c;
        case 0x2c6040u: goto label_2c6040;
        case 0x2c6044u: goto label_2c6044;
        case 0x2c6048u: goto label_2c6048;
        case 0x2c604cu: goto label_2c604c;
        case 0x2c6050u: goto label_2c6050;
        case 0x2c6054u: goto label_2c6054;
        case 0x2c6058u: goto label_2c6058;
        case 0x2c605cu: goto label_2c605c;
        case 0x2c6060u: goto label_2c6060;
        case 0x2c6064u: goto label_2c6064;
        case 0x2c6068u: goto label_2c6068;
        case 0x2c606cu: goto label_2c606c;
        case 0x2c6070u: goto label_2c6070;
        case 0x2c6074u: goto label_2c6074;
        case 0x2c6078u: goto label_2c6078;
        case 0x2c607cu: goto label_2c607c;
        case 0x2c6080u: goto label_2c6080;
        case 0x2c6084u: goto label_2c6084;
        case 0x2c6088u: goto label_2c6088;
        case 0x2c608cu: goto label_2c608c;
        case 0x2c6090u: goto label_2c6090;
        case 0x2c6094u: goto label_2c6094;
        case 0x2c6098u: goto label_2c6098;
        case 0x2c609cu: goto label_2c609c;
        case 0x2c60a0u: goto label_2c60a0;
        case 0x2c60a4u: goto label_2c60a4;
        case 0x2c60a8u: goto label_2c60a8;
        case 0x2c60acu: goto label_2c60ac;
        case 0x2c60b0u: goto label_2c60b0;
        case 0x2c60b4u: goto label_2c60b4;
        case 0x2c60b8u: goto label_2c60b8;
        case 0x2c60bcu: goto label_2c60bc;
        case 0x2c60c0u: goto label_2c60c0;
        case 0x2c60c4u: goto label_2c60c4;
        case 0x2c60c8u: goto label_2c60c8;
        case 0x2c60ccu: goto label_2c60cc;
        case 0x2c60d0u: goto label_2c60d0;
        case 0x2c60d4u: goto label_2c60d4;
        case 0x2c60d8u: goto label_2c60d8;
        case 0x2c60dcu: goto label_2c60dc;
        case 0x2c60e0u: goto label_2c60e0;
        case 0x2c60e4u: goto label_2c60e4;
        case 0x2c60e8u: goto label_2c60e8;
        case 0x2c60ecu: goto label_2c60ec;
        case 0x2c60f0u: goto label_2c60f0;
        case 0x2c60f4u: goto label_2c60f4;
        case 0x2c60f8u: goto label_2c60f8;
        case 0x2c60fcu: goto label_2c60fc;
        case 0x2c6100u: goto label_2c6100;
        case 0x2c6104u: goto label_2c6104;
        case 0x2c6108u: goto label_2c6108;
        case 0x2c610cu: goto label_2c610c;
        case 0x2c6110u: goto label_2c6110;
        case 0x2c6114u: goto label_2c6114;
        case 0x2c6118u: goto label_2c6118;
        case 0x2c611cu: goto label_2c611c;
        case 0x2c6120u: goto label_2c6120;
        case 0x2c6124u: goto label_2c6124;
        case 0x2c6128u: goto label_2c6128;
        case 0x2c612cu: goto label_2c612c;
        case 0x2c6130u: goto label_2c6130;
        case 0x2c6134u: goto label_2c6134;
        case 0x2c6138u: goto label_2c6138;
        case 0x2c613cu: goto label_2c613c;
        case 0x2c6140u: goto label_2c6140;
        case 0x2c6144u: goto label_2c6144;
        case 0x2c6148u: goto label_2c6148;
        case 0x2c614cu: goto label_2c614c;
        case 0x2c6150u: goto label_2c6150;
        case 0x2c6154u: goto label_2c6154;
        case 0x2c6158u: goto label_2c6158;
        case 0x2c615cu: goto label_2c615c;
        case 0x2c6160u: goto label_2c6160;
        case 0x2c6164u: goto label_2c6164;
        case 0x2c6168u: goto label_2c6168;
        case 0x2c616cu: goto label_2c616c;
        case 0x2c6170u: goto label_2c6170;
        case 0x2c6174u: goto label_2c6174;
        case 0x2c6178u: goto label_2c6178;
        case 0x2c617cu: goto label_2c617c;
        case 0x2c6180u: goto label_2c6180;
        case 0x2c6184u: goto label_2c6184;
        case 0x2c6188u: goto label_2c6188;
        case 0x2c618cu: goto label_2c618c;
        case 0x2c6190u: goto label_2c6190;
        case 0x2c6194u: goto label_2c6194;
        case 0x2c6198u: goto label_2c6198;
        case 0x2c619cu: goto label_2c619c;
        case 0x2c61a0u: goto label_2c61a0;
        case 0x2c61a4u: goto label_2c61a4;
        case 0x2c61a8u: goto label_2c61a8;
        case 0x2c61acu: goto label_2c61ac;
        case 0x2c61b0u: goto label_2c61b0;
        case 0x2c61b4u: goto label_2c61b4;
        case 0x2c61b8u: goto label_2c61b8;
        case 0x2c61bcu: goto label_2c61bc;
        case 0x2c61c0u: goto label_2c61c0;
        case 0x2c61c4u: goto label_2c61c4;
        case 0x2c61c8u: goto label_2c61c8;
        case 0x2c61ccu: goto label_2c61cc;
        case 0x2c61d0u: goto label_2c61d0;
        case 0x2c61d4u: goto label_2c61d4;
        case 0x2c61d8u: goto label_2c61d8;
        case 0x2c61dcu: goto label_2c61dc;
        case 0x2c61e0u: goto label_2c61e0;
        case 0x2c61e4u: goto label_2c61e4;
        case 0x2c61e8u: goto label_2c61e8;
        case 0x2c61ecu: goto label_2c61ec;
        case 0x2c61f0u: goto label_2c61f0;
        case 0x2c61f4u: goto label_2c61f4;
        case 0x2c61f8u: goto label_2c61f8;
        case 0x2c61fcu: goto label_2c61fc;
        case 0x2c6200u: goto label_2c6200;
        case 0x2c6204u: goto label_2c6204;
        case 0x2c6208u: goto label_2c6208;
        case 0x2c620cu: goto label_2c620c;
        case 0x2c6210u: goto label_2c6210;
        case 0x2c6214u: goto label_2c6214;
        case 0x2c6218u: goto label_2c6218;
        case 0x2c621cu: goto label_2c621c;
        case 0x2c6220u: goto label_2c6220;
        case 0x2c6224u: goto label_2c6224;
        case 0x2c6228u: goto label_2c6228;
        case 0x2c622cu: goto label_2c622c;
        case 0x2c6230u: goto label_2c6230;
        case 0x2c6234u: goto label_2c6234;
        case 0x2c6238u: goto label_2c6238;
        case 0x2c623cu: goto label_2c623c;
        case 0x2c6240u: goto label_2c6240;
        case 0x2c6244u: goto label_2c6244;
        case 0x2c6248u: goto label_2c6248;
        case 0x2c624cu: goto label_2c624c;
        case 0x2c6250u: goto label_2c6250;
        case 0x2c6254u: goto label_2c6254;
        case 0x2c6258u: goto label_2c6258;
        case 0x2c625cu: goto label_2c625c;
        case 0x2c6260u: goto label_2c6260;
        case 0x2c6264u: goto label_2c6264;
        case 0x2c6268u: goto label_2c6268;
        case 0x2c626cu: goto label_2c626c;
        case 0x2c6270u: goto label_2c6270;
        case 0x2c6274u: goto label_2c6274;
        case 0x2c6278u: goto label_2c6278;
        case 0x2c627cu: goto label_2c627c;
        case 0x2c6280u: goto label_2c6280;
        case 0x2c6284u: goto label_2c6284;
        case 0x2c6288u: goto label_2c6288;
        case 0x2c628cu: goto label_2c628c;
        case 0x2c6290u: goto label_2c6290;
        case 0x2c6294u: goto label_2c6294;
        case 0x2c6298u: goto label_2c6298;
        case 0x2c629cu: goto label_2c629c;
        case 0x2c62a0u: goto label_2c62a0;
        case 0x2c62a4u: goto label_2c62a4;
        case 0x2c62a8u: goto label_2c62a8;
        case 0x2c62acu: goto label_2c62ac;
        case 0x2c62b0u: goto label_2c62b0;
        case 0x2c62b4u: goto label_2c62b4;
        case 0x2c62b8u: goto label_2c62b8;
        case 0x2c62bcu: goto label_2c62bc;
        case 0x2c62c0u: goto label_2c62c0;
        case 0x2c62c4u: goto label_2c62c4;
        case 0x2c62c8u: goto label_2c62c8;
        case 0x2c62ccu: goto label_2c62cc;
        case 0x2c62d0u: goto label_2c62d0;
        case 0x2c62d4u: goto label_2c62d4;
        case 0x2c62d8u: goto label_2c62d8;
        case 0x2c62dcu: goto label_2c62dc;
        case 0x2c62e0u: goto label_2c62e0;
        case 0x2c62e4u: goto label_2c62e4;
        case 0x2c62e8u: goto label_2c62e8;
        case 0x2c62ecu: goto label_2c62ec;
        case 0x2c62f0u: goto label_2c62f0;
        case 0x2c62f4u: goto label_2c62f4;
        case 0x2c62f8u: goto label_2c62f8;
        case 0x2c62fcu: goto label_2c62fc;
        case 0x2c6300u: goto label_2c6300;
        case 0x2c6304u: goto label_2c6304;
        case 0x2c6308u: goto label_2c6308;
        case 0x2c630cu: goto label_2c630c;
        case 0x2c6310u: goto label_2c6310;
        case 0x2c6314u: goto label_2c6314;
        case 0x2c6318u: goto label_2c6318;
        case 0x2c631cu: goto label_2c631c;
        case 0x2c6320u: goto label_2c6320;
        case 0x2c6324u: goto label_2c6324;
        case 0x2c6328u: goto label_2c6328;
        case 0x2c632cu: goto label_2c632c;
        case 0x2c6330u: goto label_2c6330;
        case 0x2c6334u: goto label_2c6334;
        case 0x2c6338u: goto label_2c6338;
        case 0x2c633cu: goto label_2c633c;
        case 0x2c6340u: goto label_2c6340;
        case 0x2c6344u: goto label_2c6344;
        case 0x2c6348u: goto label_2c6348;
        case 0x2c634cu: goto label_2c634c;
        case 0x2c6350u: goto label_2c6350;
        case 0x2c6354u: goto label_2c6354;
        case 0x2c6358u: goto label_2c6358;
        case 0x2c635cu: goto label_2c635c;
        case 0x2c6360u: goto label_2c6360;
        case 0x2c6364u: goto label_2c6364;
        case 0x2c6368u: goto label_2c6368;
        case 0x2c636cu: goto label_2c636c;
        default: return;
    }

label_2c5ba0:
    // 0x2c5ba0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5ba0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5ba4:
    // 0x2c5ba4: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5ba4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5BA4 raw=0x74746142");
 /* MITIGATED */
label_2c5ba8:
    // 0x2c5ba8: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5ba8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5bac:
    // 0x2c5bac: 0x6f542074  ldr         $s4, 0x2074($k0)
    ctx->pc = 0x2c5bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c5bb0:
    // 0x2c5bb0: 0x4720676e  .word       0x4720676E                   # INVALID     $t9, $zero, 0x676E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c5bb0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x2E at 0x2C5BB0 raw=0x4720676E");
 /* MITIGATED */
label_2c5bb4:
    // 0x2c5bb4: 0x657461  .word       0x00657461                   # addu        $t6, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5bb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c5bb8:
    // 0x2c5bb8: 0x0  nop
    ctx->pc = 0x2c5bb8u;
    // NOP
label_2c5bbc:
    // 0x2c5bbc: 0x0  nop
    ctx->pc = 0x2c5bbcu;
    // NOP
label_2c5bc0:
    // 0x2c5bc0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5bc0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5bc4:
    // 0x2c5bc4: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5bc4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5BC4 raw=0x74746142");
 /* MITIGATED */
label_2c5bc8:
    // 0x2c5bc8: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5bc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5bcc:
    // 0x2c5bcc: 0x65482074  daddiu      $t0, $t2, 0x2074
    ctx->pc = 0x2c5bccu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8308);
label_2c5bd0:
    // 0x2c5bd0: 0x69654620  ldl         $a1, 0x4620($t3)
    ctx->pc = 0x2c5bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2c5bd4:
    // 0x2c5bd4: 0x0  nop
    ctx->pc = 0x2c5bd4u;
    // NOP
label_2c5bd8:
    // 0x2c5bd8: 0x0  nop
    ctx->pc = 0x2c5bd8u;
    // NOP
label_2c5bdc:
    // 0x2c5bdc: 0x0  nop
    ctx->pc = 0x2c5bdcu;
    // NOP
label_2c5be0:
    // 0x2c5be0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5be0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5be4:
    // 0x2c5be4: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5be4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5BE4 raw=0x74746142");
 /* MITIGATED */
label_2c5be8:
    // 0x2c5be8: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5be8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5bec:
    // 0x2c5bec: 0x61462074  daddi       $a2, $t2, 0x2074
    ctx->pc = 0x2c5becu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_2c5bf0:
    // 0x2c5bf0: 0x6143206e  daddi       $v1, $t2, 0x206E
    ctx->pc = 0x2c5bf0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2c5bf4:
    // 0x2c5bf4: 0x656c7473  daddiu      $t4, $t3, 0x7473
    ctx->pc = 0x2c5bf4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29811);
label_2c5bf8:
    // 0x2c5bf8: 0x0  nop
    ctx->pc = 0x2c5bf8u;
    // NOP
label_2c5bfc:
    // 0x2c5bfc: 0x0  nop
    ctx->pc = 0x2c5bfcu;
    // NOP
label_2c5c00:
    // 0x2c5c00: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5c00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5c04:
    // 0x2c5c04: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5c04u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5C04 raw=0x74746142");
 /* MITIGATED */
label_2c5c08:
    // 0x2c5c08: 0x6f20656c  ldr         $zero, 0x656C($t9)
    ctx->pc = 0x2c5c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c5c0c:
    // 0x2c5c0c: 0x744d2066  .word       0x744D2066                   # INVALID     $v0, $t5, 0x2066 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5c0cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5C0C raw=0x744D2066");
 /* MITIGATED */
label_2c5c10:
    // 0x2c5c10: 0x6944202e  ldl         $a0, 0x202E($t2)
    ctx->pc = 0x2c5c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8238); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2c5c14:
    // 0x2c5c14: 0x4a20676e  vopmsub.w   $vf29, $vf12, $vf0
    ctx->pc = 0x2c5c14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
label_2c5c18:
    // 0x2c5c18: 0x6e75  .word       0x00006E75                   # INVALID     $zero, $zero, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5c18u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C5C18 raw=0x00006E75");
 /* MITIGATED */
label_2c5c1c:
    // 0x2c5c1c: 0x0  nop
    ctx->pc = 0x2c5c1cu;
    // NOP
label_2c5c20:
    // 0x2c5c20: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5c20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5c24:
    // 0x2c5c24: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5c24u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5C24 raw=0x74746142");
 /* MITIGATED */
label_2c5c28:
    // 0x2c5c28: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5c28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5c2c:
    // 0x2c5c2c: 0x69592074  ldl         $t9, 0x2074($t2)
    ctx->pc = 0x2c5c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
label_2c5c30:
    // 0x2c5c30: 0x6e694c20  ldr         $t1, 0x4C20($s3)
    ctx->pc = 0x2c5c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c5c34:
    // 0x2c5c34: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5c34u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c5c38:
    // 0x2c5c38: 0x0  nop
    ctx->pc = 0x2c5c38u;
    // NOP
label_2c5c3c:
    // 0x2c5c3c: 0x0  nop
    ctx->pc = 0x2c5c3cu;
    // NOP
label_2c5c40:
    // 0x2c5c40: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5c40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5c44:
    // 0x2c5c44: 0x6d6e614e  ldr         $t6, 0x614E($t3)
    ctx->pc = 0x2c5c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24910); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c5c48:
    // 0x2c5c48: 0x43206e61  .word       0x43206E61                   # INVALID     $t9, $zero, 0x6E61 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5c48u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C5C48 raw=0x43206E61");
 /* MITIGATED */
label_2c5c4c:
    // 0x2c5c4c: 0x61706d61  daddi       $s0, $t3, 0x6D61
    ctx->pc = 0x2c5c4cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28001; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_2c5c50:
    // 0x2c5c50: 0x6e6769  .word       0x006E6769                   # mtsa        $v1 # 000E6740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5c50u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c5c54:
    // 0x2c5c54: 0x0  nop
    ctx->pc = 0x2c5c54u;
    // NOP
label_2c5c58:
    // 0x2c5c58: 0x0  nop
    ctx->pc = 0x2c5c58u;
    // NOP
label_2c5c5c:
    // 0x2c5c5c: 0x0  nop
    ctx->pc = 0x2c5c5cu;
    // NOP
label_2c5c60:
    // 0x2c5c60: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5c60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5c64:
    // 0x2c5c64: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5c64u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5C64 raw=0x74746142");
 /* MITIGATED */
label_2c5c68:
    // 0x2c5c68: 0x6f20656c  ldr         $zero, 0x656C($t9)
    ctx->pc = 0x2c5c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c5c6c:
    // 0x2c5c6c: 0x694a2066  ldl         $t2, 0x2066($t2)
    ctx->pc = 0x2c5c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2c5c70:
    // 0x2c5c70: 0x69542065  ldl         $s4, 0x2065($t2)
    ctx->pc = 0x2c5c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c5c74:
    // 0x2c5c74: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5c74u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c5c78:
    // 0x2c5c78: 0x0  nop
    ctx->pc = 0x2c5c78u;
    // NOP
label_2c5c7c:
    // 0x2c5c7c: 0x0  nop
    ctx->pc = 0x2c5c7cu;
    // NOP
label_2c5c80:
    // 0x2c5c80: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5c80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5c84:
    // 0x2c5c84: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5c84u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5C84 raw=0x74746142");
 /* MITIGATED */
label_2c5c88:
    // 0x2c5c88: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5c88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5c8c:
    // 0x2c5c8c: 0x6f592074  ldr         $t9, 0x2074($k0)
    ctx->pc = 0x2c5c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c5c90:
    // 0x2c5c90: 0x69542075  ldl         $s4, 0x2075($t2)
    ctx->pc = 0x2c5c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c5c94:
    // 0x2c5c94: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5c94u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c5c98:
    // 0x2c5c98: 0x0  nop
    ctx->pc = 0x2c5c98u;
    // NOP
label_2c5c9c:
    // 0x2c5c9c: 0x0  nop
    ctx->pc = 0x2c5c9cu;
    // NOP
label_2c5ca0:
    // 0x2c5ca0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5ca0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5ca4:
    // 0x2c5ca4: 0x67656953  daddiu      $a1, $k1, 0x6953
    ctx->pc = 0x2c5ca4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26963);
label_2c5ca8:
    // 0x2c5ca8: 0x666f2065  daddiu      $t7, $s3, 0x2065
    ctx->pc = 0x2c5ca8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)8293);
label_2c5cac:
    // 0x2c5cac: 0x20654820  addi        $a1, $v1, 0x4820
    ctx->pc = 0x2c5cacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)18464, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5cb0:
    // 0x2c5cb0: 0x20696546  addi        $t1, $v1, 0x6546
    ctx->pc = 0x2c5cb0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25926, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c5cb4:
    // 0x2c5cb4: 0x74736143  .word       0x74736143                   # INVALID     $v1, $s3, 0x6143 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5cb4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5CB4 raw=0x74736143");
 /* MITIGATED */
label_2c5cb8:
    // 0x2c5cb8: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5cb8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c5cbc:
    // 0x2c5cbc: 0x0  nop
    ctx->pc = 0x2c5cbcu;
    // NOP
label_2c5cc0:
    // 0x2c5cc0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5cc0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5cc4:
    // 0x2c5cc4: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5cc4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5CC4 raw=0x74746142");
 /* MITIGATED */
label_2c5cc8:
    // 0x2c5cc8: 0x6120656c  daddi       $zero, $t1, 0x656C
    ctx->pc = 0x2c5cc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c5ccc:
    // 0x2c5ccc: 0x75572074  .word       0x75572074                   # INVALID     $t2, $s7, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5cccu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5CCC raw=0x75572074");
 /* MITIGATED */
label_2c5cd0:
    // 0x2c5cd0: 0x61685a20  daddi       $t0, $t3, 0x5A20
    ctx->pc = 0x2c5cd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)23072; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c5cd4:
    // 0x2c5cd4: 0x5020676e  beql        $at, $zero, . + 4 + (0x676E << 2)
label_2c5cd8:
    if (ctx->pc == 0x2C5CD8u) {
        ctx->pc = 0x2C5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CD4u;
        // 0x2c5cd8: 0x6e69616c  ldr         $t1, 0x616C($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5CDCu;
        goto label_2c5cdc;
    }
    ctx->pc = 0x2C5CD4u;
    {
        const bool branch_taken_0x2c5cd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5cd4) {
            ctx->pc = 0x2C5CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5CD4u;
            // 0x2c5cd8: 0x6e69616c  ldr         $t1, 0x616C($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA90u;
            return;
        }
    }
    ctx->pc = 0x2C5CDCu;
label_2c5cdc:
    // 0x2c5cdc: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c5cdcu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c5ce0:
    // 0x2c5ce0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5ce0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5ce4:
    // 0x2c5ce4: 0x6e756f4d  ldr         $s5, 0x6F4D($s3)
    ctx->pc = 0x2c5ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28493); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c5ce8:
    // 0x2c5ce8: 0x6e696174  ldr         $t1, 0x6174($s3)
    ctx->pc = 0x2c5ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c5cec:
    // 0x2c5cec: 0x6e614220  ldr         $at, 0x4220($s3)
    ctx->pc = 0x2c5cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5cf0:
    // 0x2c5cf0: 0x20746964  addi        $s4, $v1, 0x6964
    ctx->pc = 0x2c5cf0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26980, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c5cf4:
    // 0x2c5cf4: 0x706d6143  .word       0x706D6143                   # INVALID     $v1, $t5, 0x6143 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5cf4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 13); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c5cf8:
    // 0x2c5cf8: 0x6e676961  ldr         $a3, 0x6961($s3)
    ctx->pc = 0x2c5cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26977); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2c5cfc:
    // 0x2c5cfc: 0x0  nop
    ctx->pc = 0x2c5cfcu;
    // NOP
label_2c5d00:
    // 0x2c5d00: 0x64696152  daddiu      $t1, $v1, 0x6152
    ctx->pc = 0x2c5d00u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24914);
label_2c5d04:
    // 0x2c5d04: 0x206e6f20  addi        $t6, $v1, 0x6F20
    ctx->pc = 0x2c5d04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c5d08:
    // 0x2c5d08: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2c5d08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5d0c:
    // 0x2c5d0c: 0x75676f52  .word       0x75676F52                   # INVALID     $t3, $a3, 0x6F52 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5d0cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5D0C raw=0x75676F52");
 /* MITIGATED */
label_2c5d10:
    // 0x2c5d10: 0x6f462065  ldr         $a2, 0x2065($k0)
    ctx->pc = 0x2c5d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c5d14:
    // 0x2c5d14: 0x65727472  daddiu      $s2, $t3, 0x7472
    ctx->pc = 0x2c5d14u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29810);
label_2c5d18:
    // 0x2c5d18: 0x7373  tltu        $zero, $zero, 461
    ctx->pc = 0x2c5d18u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c5d1c:
    // 0x2c5d1c: 0x0  nop
    ctx->pc = 0x2c5d1cu;
    // NOP
label_2c5d20:
    // 0x2c5d20: 0x61726950  daddi       $s2, $t3, 0x6950
    ctx->pc = 0x2c5d20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26960; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c5d24:
    // 0x2c5d24: 0x41206574  .word       0x41206574                   # INVALID     $t1, $zero, 0x6574 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5d24u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2C5D24 raw=0x41206574");
 /* MITIGATED */
label_2c5d28:
    // 0x2c5d28: 0x63617474  daddi       $at, $k1, 0x7474
    ctx->pc = 0x2c5d28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29812; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c5d2c:
    // 0x2c5d2c: 0x6e6f206b  ldr         $t7, 0x206B($s3)
    ctx->pc = 0x2c5d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c5d30:
    // 0x2c5d30: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2c5d30u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2c5d34:
    // 0x2c5d34: 0x67694820  daddiu      $t1, $k1, 0x4820
    ctx->pc = 0x2c5d34u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)18464);
label_2c5d38:
    // 0x2c5d38: 0x65532068  daddiu      $s3, $t2, 0x2068
    ctx->pc = 0x2c5d38u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c5d3c:
    // 0x2c5d3c: 0x7361  .word       0x00007361                   # addu        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5d3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c5d40:
    // 0x2c5d40: 0x6c6c6559  ldr         $t4, 0x6559($v1)
    ctx->pc = 0x2c5d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25945); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c5d44:
    // 0x2c5d44: 0x5420776f  bnel        $at, $zero, . + 4 + (0x776F << 2)
label_2c5d48:
    if (ctx->pc == 0x2C5D48u) {
        ctx->pc = 0x2C5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D44u;
        // 0x2c5d48: 0x61627275  daddi       $v0, $t3, 0x7275 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D4Cu;
        goto label_2c5d4c;
    }
    ctx->pc = 0x2C5D44u;
    {
        const bool branch_taken_0x2c5d44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d44) {
            ctx->pc = 0x2C5D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5D44u;
            // 0x2c5d48: 0x61627275  daddi       $v0, $t3, 0x7275 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3B04u;
            return;
        }
    }
    ctx->pc = 0x2C5D4Cu;
label_2c5d4c:
    // 0x2c5d4c: 0x736e  .word       0x0000736E                   # dsub        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5d4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c5d50:
    // 0x2c5d50: 0x4c207548  .word       0x4C207548                   # INVALID     $at, $zero, 0x7548 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5d50u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5D50 raw=0x4C207548");
 /* MITIGATED */
label_2c5d54:
    // 0x2c5d54: 0x47206f61  .word       0x47206F61                   # INVALID     $t9, $zero, 0x6F61 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c5d54u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x21 at 0x2C5D54 raw=0x47206F61");
 /* MITIGATED */
label_2c5d58:
    // 0x2c5d58: 0x657461  .word       0x00657461                   # addu        $t6, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5d58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c5d5c:
    // 0x2c5d5c: 0x0  nop
    ctx->pc = 0x2c5d5cu;
    // NOP
label_2c5d60:
    // 0x2c5d60: 0x70727553  .word       0x70727553                   # mtlo1       $v1 # 00127540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5d60u;
    ctx->lo1 = GPR_U64(ctx, 3);
label_2c5d64:
    // 0x2c5d64: 0x65736972  daddiu      $s3, $t3, 0x6972
    ctx->pc = 0x2c5d64u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26994);
label_2c5d68:
    // 0x2c5d68: 0x74744120  .word       0x74744120                   # INVALID     $v1, $s4, 0x4120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5d68u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5D68 raw=0x74744120");
 /* MITIGATED */
label_2c5d6c:
    // 0x2c5d6c: 0x6b6361  .word       0x006B6361                   # addu        $t4, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5d6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_2c5d70:
    // 0x2c5d70: 0x206e6157  addi        $t6, $v1, 0x6157
    ctx->pc = 0x2c5d70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24919, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c5d74:
    // 0x2c5d74: 0x74736143  .word       0x74736143                   # INVALID     $v1, $s3, 0x6143 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5d74u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5D74 raw=0x74736143");
 /* MITIGATED */
label_2c5d78:
    // 0x2c5d78: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5d78u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c5d7c:
    // 0x2c5d7c: 0x0  nop
    ctx->pc = 0x2c5d7cu;
    // NOP
label_2c5d80:
    // 0x2c5d80: 0x54207557  bnel        $at, $zero, . + 4 + (0x7557 << 2)
label_2c5d84:
    if (ctx->pc == 0x2C5D84u) {
        ctx->pc = 0x2C5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D80u;
        // 0x2c5d84: 0x69727265  ldl         $s2, 0x7265($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5D88u;
        goto label_2c5d88;
    }
    ctx->pc = 0x2C5D80u;
    {
        const bool branch_taken_0x2c5d80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5d80) {
            ctx->pc = 0x2C5D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5D80u;
            // 0x2c5d84: 0x69727265  ldl         $s2, 0x7265($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E32E0u;
            return;
        }
    }
    ctx->pc = 0x2C5D88u;
label_2c5d88:
    // 0x2c5d88: 0x79726f74  lq          $s2, 0x6F74($t3)
    ctx->pc = 0x2c5d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 28532)));
label_2c5d8c:
    // 0x2c5d8c: 0x0  nop
    ctx->pc = 0x2c5d8cu;
    // NOP
label_2c5d90:
    // 0x2c5d90: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c5d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5d94:
    // 0x2c5d94: 0x754420  .word       0x00754420                   # add         $t0, $v1, $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5d94u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2c5d98:
    // 0x2c5d98: 0x6e616843  ldr         $at, 0x6843($s3)
    ctx->pc = 0x2c5d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5d9c:
    // 0x2c5d9c: 0x61422067  daddi       $v0, $t2, 0x2067
    ctx->pc = 0x2c5d9cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2c5da0:
    // 0x2c5da0: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5da0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c5da4:
    // 0x2c5da4: 0x0  nop
    ctx->pc = 0x2c5da4u;
    // NOP
label_2c5da8:
    // 0x2c5da8: 0x20696843  addi        $t1, $v1, 0x6843
    ctx->pc = 0x2c5da8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26691, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c5dac:
    // 0x2c5dac: 0x6942  srl         $t5, $zero, 5
    ctx->pc = 0x2c5dacu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), 5));
label_2c5db0:
    // 0x2c5db0: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c5db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c5db4:
    // 0x2c5db4: 0x75442067  .word       0x75442067                   # INVALID     $t2, $a0, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5db4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5DB4 raw=0x75442067");
 /* MITIGATED */
label_2c5db8:
    // 0x2c5db8: 0x0  nop
    ctx->pc = 0x2c5db8u;
    // NOP
label_2c5dbc:
    // 0x2c5dbc: 0x0  nop
    ctx->pc = 0x2c5dbcu;
    // NOP
label_2c5dc0:
    // 0x2c5dc0: 0x676e6f54  daddiu      $t6, $k1, 0x6F54
    ctx->pc = 0x2c5dc0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28500);
label_2c5dc4:
    // 0x2c5dc4: 0x74614720  .word       0x74614720                   # INVALID     $v1, $at, 0x4720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5dc4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5DC4 raw=0x74614720");
 /* MITIGATED */
label_2c5dc8:
    // 0x2c5dc8: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5dc8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c5dcc:
    // 0x2c5dcc: 0x0  nop
    ctx->pc = 0x2c5dccu;
    // NOP
label_2c5dd0:
    // 0x2c5dd0: 0x46206548  .word       0x46206548                   # INVALID     $s1, $zero, 0x6548 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c5dd0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x8 at 0x2C5DD0 raw=0x46206548");
 /* MITIGATED */
label_2c5dd4:
    // 0x2c5dd4: 0x6965  .word       0x00006965                   # move        $t5, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5dd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c5dd8:
    // 0x2c5dd8: 0x206e6146  addi        $t6, $v1, 0x6146
    ctx->pc = 0x2c5dd8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24902, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c5ddc:
    // 0x2c5ddc: 0x74736143  .word       0x74736143                   # INVALID     $v1, $s3, 0x6143 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5ddcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5DDC raw=0x74736143");
 /* MITIGATED */
label_2c5de0:
    // 0x2c5de0: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5de0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c5de4:
    // 0x2c5de4: 0x0  nop
    ctx->pc = 0x2c5de4u;
    // NOP
label_2c5de8:
    // 0x2c5de8: 0x202e744d  addi        $t6, $at, 0x744D
    ctx->pc = 0x2c5de8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29773, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c5dec:
    // 0x2c5dec: 0x676e6944  daddiu      $t6, $k1, 0x6944
    ctx->pc = 0x2c5decu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26948);
label_2c5df0:
    // 0x2c5df0: 0x6e754a20  ldr         $s5, 0x4A20($s3)
    ctx->pc = 0x2c5df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18976); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c5df4:
    // 0x2c5df4: 0x0  nop
    ctx->pc = 0x2c5df4u;
    // NOP
label_2c5df8:
    // 0x2c5df8: 0x4c206959  .word       0x4C206959                   # INVALID     $at, $zero, 0x6959 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5df8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5DF8 raw=0x4C206959");
 /* MITIGATED */
label_2c5dfc:
    // 0x2c5dfc: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5dfcu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c5e00:
    // 0x2c5e00: 0x6d6e614e  ldr         $t6, 0x614E($t3)
    ctx->pc = 0x2c5e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24910); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c5e04:
    // 0x2c5e04: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5e04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c5e08:
    // 0x2c5e08: 0x2065694a  addi        $a1, $v1, 0x694A
    ctx->pc = 0x2c5e08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26954, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5e0c:
    // 0x2c5e0c: 0x676e6954  daddiu      $t6, $k1, 0x6954
    ctx->pc = 0x2c5e0cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26964);
label_2c5e10:
    // 0x2c5e10: 0x0  nop
    ctx->pc = 0x2c5e10u;
    // NOP
label_2c5e14:
    // 0x2c5e14: 0x0  nop
    ctx->pc = 0x2c5e14u;
    // NOP
label_2c5e18:
    // 0x2c5e18: 0x46206548  .word       0x46206548                   # INVALID     $s1, $zero, 0x6548 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c5e18u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x8 at 0x2C5E18 raw=0x46206548");
 /* MITIGATED */
label_2c5e1c:
    // 0x2c5e1c: 0x43206965  .word       0x43206965                   # INVALID     $t9, $zero, 0x6965 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5e1cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C5E1C raw=0x43206965");
 /* MITIGATED */
label_2c5e20:
    // 0x2c5e20: 0x6c747361  ldr         $s4, 0x7361($v1)
    ctx->pc = 0x2c5e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29537); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c5e24:
    // 0x2c5e24: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5e24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c5e28:
    // 0x2c5e28: 0x0  nop
    ctx->pc = 0x2c5e28u;
    // NOP
label_2c5e2c:
    // 0x2c5e2c: 0x0  nop
    ctx->pc = 0x2c5e2cu;
    // NOP
label_2c5e30:
    // 0x2c5e30: 0x5a207557  blezl       $s1, . + 4 + (0x7557 << 2)
label_2c5e34:
    if (ctx->pc == 0x2C5E34u) {
        ctx->pc = 0x2C5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E30u;
        // 0x2c5e34: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5E38u;
        goto label_2c5e38;
    }
    ctx->pc = 0x2C5E30u;
    {
        const bool branch_taken_0x2c5e30 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c5e30) {
            ctx->pc = 0x2C5E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5E30u;
            // 0x2c5e34: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3390u;
            return;
        }
    }
    ctx->pc = 0x2C5E38u;
label_2c5e38:
    // 0x2c5e38: 0x616c5020  daddi       $t4, $t3, 0x5020
    ctx->pc = 0x2c5e38u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20512; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c5e3c:
    // 0x2c5e3c: 0x736e69  .word       0x00736E69                   # mtsa        $v1 # 00136E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5e3cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c5e40:
    // 0x2c5e40: 0x646e6142  daddiu      $t6, $v1, 0x6142
    ctx->pc = 0x2c5e40u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24898);
label_2c5e44:
    // 0x2c5e44: 0x43207469  .word       0x43207469                   # INVALID     $t9, $zero, 0x7469 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5e44u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C5E44 raw=0x43207469");
 /* MITIGATED */
label_2c5e48:
    // 0x2c5e48: 0x61706d61  daddi       $s0, $t3, 0x6D61
    ctx->pc = 0x2c5e48u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28001; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_2c5e4c:
    // 0x2c5e4c: 0x6e6769  .word       0x006E6769                   # mtsa        $v1 # 000E6740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5e4cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c5e50:
    // 0x2c5e50: 0x75676f52  .word       0x75676F52                   # INVALID     $t3, $a3, 0x6F52 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5e50u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5E50 raw=0x75676F52");
 /* MITIGATED */
label_2c5e54:
    // 0x2c5e54: 0x6f462065  ldr         $a2, 0x2065($k0)
    ctx->pc = 0x2c5e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c5e58:
    // 0x2c5e58: 0x65727472  daddiu      $s2, $t3, 0x7472
    ctx->pc = 0x2c5e58u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29810);
label_2c5e5c:
    // 0x2c5e5c: 0x7373  tltu        $zero, $zero, 461
    ctx->pc = 0x2c5e5cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c5e60:
    // 0x2c5e60: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5e60u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5E60 raw=0x74746142");
 /* MITIGATED */
label_2c5e64:
    // 0x2c5e64: 0x6f20656c  ldr         $zero, 0x656C($t9)
    ctx->pc = 0x2c5e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c5e68:
    // 0x2c5e68: 0x75522066  .word       0x75522066                   # INVALID     $t2, $s2, 0x2066 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5e68u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5E68 raw=0x75522066");
 /* MITIGATED */
label_2c5e6c:
    // 0x2c5e6c: 0x6e614e20  ldr         $at, 0x4E20($s3)
    ctx->pc = 0x2c5e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20000); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5e70:
    // 0x2c5e70: 0x0  nop
    ctx->pc = 0x2c5e70u;
    // NOP
label_2c5e74:
    // 0x2c5e74: 0x0  nop
    ctx->pc = 0x2c5e74u;
    // NOP
label_2c5e78:
    // 0x2c5e78: 0x0  nop
    ctx->pc = 0x2c5e78u;
    // NOP
label_2c5e7c:
    // 0x2c5e7c: 0x0  nop
    ctx->pc = 0x2c5e7cu;
    // NOP
label_2c5e80:
    // 0x2c5e80: 0x6f616944  ldr         $at, 0x6944($k1)
    ctx->pc = 0x2c5e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5e84:
    // 0x2c5e84: 0x61684320  daddi       $t0, $t3, 0x4320
    ctx->pc = 0x2c5e84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17184; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c5e88:
    // 0x2c5e88: 0x2073276e  addi        $s3, $v1, 0x276E
    ctx->pc = 0x2c5e88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10094, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c5e8c:
    // 0x2c5e8c: 0x61637345  daddi       $v1, $t3, 0x7345
    ctx->pc = 0x2c5e8cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29509; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2c5e90:
    // 0x2c5e90: 0x6570  tge         $zero, $zero, 405
    ctx->pc = 0x2c5e90u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c5e94:
    // 0x2c5e94: 0x0  nop
    ctx->pc = 0x2c5e94u;
    // NOP
label_2c5e98:
    // 0x2c5e98: 0x0  nop
    ctx->pc = 0x2c5e98u;
    // NOP
label_2c5e9c:
    // 0x2c5e9c: 0x0  nop
    ctx->pc = 0x2c5e9cu;
    // NOP
label_2c5ea0:
    // 0x2c5ea0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c5ea0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c5ea4:
    // 0x2c5ea4: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5ea4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5EA4 raw=0x74746142");
 /* MITIGATED */
label_2c5ea8:
    // 0x2c5ea8: 0x6f20656c  ldr         $zero, 0x656C($t9)
    ctx->pc = 0x2c5ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c5eac:
    // 0x2c5eac: 0x6f592066  ldr         $t9, 0x2066($k0)
    ctx->pc = 0x2c5eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c5eb0:
    // 0x2c5eb0: 0x69542075  ldl         $s4, 0x2075($t2)
    ctx->pc = 0x2c5eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c5eb4:
    // 0x2c5eb4: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5eb4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c5eb8:
    // 0x2c5eb8: 0x0  nop
    ctx->pc = 0x2c5eb8u;
    // NOP
label_2c5ebc:
    // 0x2c5ebc: 0x0  nop
    ctx->pc = 0x2c5ebcu;
    // NOP
label_2c5ec0:
    // 0x2c5ec0: 0x4e207557  .word       0x4E207557                   # INVALID     $s1, $zero, 0x7557 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5ec0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5EC0 raw=0x4E207557");
 /* MITIGATED */
label_2c5ec4:
    // 0x2c5ec4: 0x20797661  addi        $t9, $v1, 0x7661
    ctx->pc = 0x2c5ec4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2c5ec8:
    // 0x2c5ec8: 0x72696b53  .word       0x72696B53                   # mtlo1       $s3 # 00096B40 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5ec8u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c5ecc:
    // 0x2c5ecc: 0x6873696d  ldl         $s3, 0x696D($v1)
    ctx->pc = 0x2c5eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2c5ed0:
    // 0x2c5ed0: 0x0  nop
    ctx->pc = 0x2c5ed0u;
    // NOP
label_2c5ed4:
    // 0x2c5ed4: 0x0  nop
    ctx->pc = 0x2c5ed4u;
    // NOP
label_2c5ed8:
    // 0x2c5ed8: 0x0  nop
    ctx->pc = 0x2c5ed8u;
    // NOP
label_2c5edc:
    // 0x2c5edc: 0x0  nop
    ctx->pc = 0x2c5edcu;
    // NOP
label_2c5ee0:
    // 0x2c5ee0: 0x4e207552  .word       0x4E207552                   # INVALID     $s1, $zero, 0x7552 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5ee0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C5EE0 raw=0x4E207552");
 /* MITIGATED */
label_2c5ee4:
    // 0x2c5ee4: 0x28206e61  slti        $zero, $at, 0x6E61
    ctx->pc = 0x2c5ee4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)28257) ? 1 : 0);
label_2c5ee8:
    // 0x2c5ee8: 0x6c6c6559  ldr         $t4, 0x6559($v1)
    ctx->pc = 0x2c5ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25945); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c5eec:
    // 0x2c5eec: 0x5420776f  bnel        $at, $zero, . + 4 + (0x776F << 2)
label_2c5ef0:
    if (ctx->pc == 0x2C5EF0u) {
        ctx->pc = 0x2C5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EECu;
        // 0x2c5ef0: 0x61627275  daddi       $v0, $t3, 0x7275 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5EF4u;
        goto label_2c5ef4;
    }
    ctx->pc = 0x2C5EECu;
    {
        const bool branch_taken_0x2c5eec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5eec) {
            ctx->pc = 0x2C5EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5EECu;
            // 0x2c5ef0: 0x61627275  daddi       $v0, $t3, 0x7275 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3CACu;
            return;
        }
    }
    ctx->pc = 0x2C5EF4u;
label_2c5ef4:
    // 0x2c5ef4: 0x29736e  .word       0x0029736E                   # dsub        $t6, $at, $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5ef4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 9); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c5ef8:
    // 0x2c5ef8: 0x206e6144  addi        $t6, $v1, 0x6144
    ctx->pc = 0x2c5ef8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24900, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c5efc:
    // 0x2c5efc: 0x676e6954  daddiu      $t6, $k1, 0x6954
    ctx->pc = 0x2c5efcu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26964);
label_2c5f00:
    // 0x2c5f00: 0x0  nop
    ctx->pc = 0x2c5f00u;
    // NOP
label_2c5f04:
    // 0x2c5f04: 0x0  nop
    ctx->pc = 0x2c5f04u;
    // NOP
label_2c5f08:
    // 0x2c5f08: 0x0  nop
    ctx->pc = 0x2c5f08u;
    // NOP
label_2c5f0c:
    // 0x2c5f0c: 0x0  nop
    ctx->pc = 0x2c5f0cu;
    // NOP
label_2c5f10:
    // 0x2c5f10: 0x6176614e  daddi       $s6, $t3, 0x614E
    ctx->pc = 0x2c5f10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24910; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2c5f14:
    // 0x2c5f14: 0x7341206c  .word       0x7341206C                   # INVALID     $k0, $at, 0x206C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5f14u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2C5F14 raw=0x7341206C");
 /* MITIGATED */
label_2c5f18:
    // 0x2c5f18: 0x6c756173  ldr         $s5, 0x6173($v1)
    ctx->pc = 0x2c5f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c5f1c:
    // 0x2c5f1c: 0x6e6f2074  ldr         $t7, 0x2074($s3)
    ctx->pc = 0x2c5f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c5f20:
    // 0x2c5f20: 0x755720  .word       0x00755720                   # add         $t2, $v1, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5f20u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2c5f24:
    // 0x2c5f24: 0x0  nop
    ctx->pc = 0x2c5f24u;
    // NOP
label_2c5f28:
    // 0x2c5f28: 0x6f61685a  ldr         $at, 0x685A($k1)
    ctx->pc = 0x2c5f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5f2c:
    // 0x2c5f2c: 0x6e755920  ldr         $s5, 0x5920($s3)
    ctx->pc = 0x2c5f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 22816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c5f30:
    // 0x2c5f30: 0x0  nop
    ctx->pc = 0x2c5f30u;
    // NOP
label_2c5f34:
    // 0x2c5f34: 0x0  nop
    ctx->pc = 0x2c5f34u;
    // NOP
label_2c5f38:
    // 0x2c5f38: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c5f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5f3c:
    // 0x2c5f3c: 0x755920  .word       0x00755920                   # add         $t3, $v1, $s5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5f3cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2c5f40:
    // 0x2c5f40: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c5f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5f44:
    // 0x2c5f44: 0x65462067  daddiu      $a2, $t2, 0x2067
    ctx->pc = 0x2c5f44u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8295);
label_2c5f48:
    // 0x2c5f48: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5f48u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c5f4c:
    // 0x2c5f4c: 0x0  nop
    ctx->pc = 0x2c5f4cu;
    // NOP
label_2c5f50:
    // 0x2c5f50: 0x68616958  ldl         $at, 0x6958($v1)
    ctx->pc = 0x2c5f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c5f54:
    // 0x2c5f54: 0x4420756f  .word       0x4420756F                   # dmfc1       $zero, $f14 # 0000056F <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c5f54u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x2F at 0x2C5F54 raw=0x4420756F");
 /* MITIGATED */
label_2c5f58:
    // 0x2c5f58: 0x6e75  .word       0x00006E75                   # INVALID     $zero, $zero, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5f58u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C5F58 raw=0x00006E75");
 /* MITIGATED */
label_2c5f5c:
    // 0x2c5f5c: 0x0  nop
    ctx->pc = 0x2c5f5cu;
    // NOP
label_2c5f60:
    // 0x2c5f60: 0x6e616944  ldr         $at, 0x6944($s3)
    ctx->pc = 0x2c5f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5f64:
    // 0x2c5f64: 0x69655720  ldl         $a1, 0x5720($t3)
    ctx->pc = 0x2c5f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 22304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2c5f68:
    // 0x2c5f68: 0x0  nop
    ctx->pc = 0x2c5f68u;
    // NOP
label_2c5f6c:
    // 0x2c5f6c: 0x0  nop
    ctx->pc = 0x2c5f6cu;
    // NOP
label_2c5f70:
    // 0x2c5f70: 0x5a207558  blezl       $s1, . + 4 + (0x7558 << 2)
label_2c5f74:
    if (ctx->pc == 0x2C5F74u) {
        ctx->pc = 0x2C5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F70u;
        // 0x2c5f74: 0x7568  .word       0x00007568                   # mfsa        $t6 # 00000540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 14, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F78u;
        goto label_2c5f78;
    }
    ctx->pc = 0x2C5F70u;
    {
        const bool branch_taken_0x2c5f70 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c5f70) {
            ctx->pc = 0x2C5F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5F70u;
            // 0x2c5f74: 0x7568  .word       0x00007568                   # mfsa        $t6 # 00000540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            SET_GPR_U32(ctx, 14, ctx->sa);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E34D4u;
            return;
        }
    }
    ctx->pc = 0x2C5F78u;
label_2c5f78:
    // 0x2c5f78: 0x756f685a  .word       0x756F685A                   # INVALID     $t3, $t7, 0x685A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c5f78u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C5F78 raw=0x756F685A");
 /* MITIGATED */
label_2c5f7c:
    // 0x2c5f7c: 0x755920  .word       0x00755920                   # add         $t3, $v1, $s5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5f7cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2c5f80:
    // 0x2c5f80: 0x5820754c  blezl       $at, . + 4 + (0x754C << 2)
label_2c5f84:
    if (ctx->pc == 0x2C5F84u) {
        ctx->pc = 0x2C5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F80u;
        // 0x2c5f84: 0x6e75  .word       0x00006E75                   # INVALID     $zero, $zero, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C5F84 raw=0x00006E75");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5F88u;
        goto label_2c5f88;
    }
    ctx->pc = 0x2C5F80u;
    {
        const bool branch_taken_0x2c5f80 = (GPR_S32(ctx, 1) <= 0);
        if (branch_taken_0x2c5f80) {
            ctx->pc = 0x2C5F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5F80u;
            // 0x2c5f84: 0x6e75  .word       0x00006E75                   # INVALID     $zero, $zero, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//             throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C5F84 raw=0x00006E75");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E34B4u;
            return;
        }
    }
    ctx->pc = 0x2C5F88u;
label_2c5f88:
    // 0x2c5f88: 0x73696154  .word       0x73696154                   # INVALID     $k1, $t1, 0x6154 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c5f88u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x2C5F88 raw=0x73696154");
 /* MITIGATED */
label_2c5f8c:
    // 0x2c5f8c: 0x43206968  .word       0x43206968                   # INVALID     $t9, $zero, 0x6968 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5f8cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C5F8C raw=0x43206968");
 /* MITIGATED */
label_2c5f90:
    // 0x2c5f90: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c5f90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c5f94:
    // 0x2c5f94: 0x0  nop
    ctx->pc = 0x2c5f94u;
    // NOP
label_2c5f98:
    // 0x2c5f98: 0x6f616944  ldr         $at, 0x6944($k1)
    ctx->pc = 0x2c5f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5f9c:
    // 0x2c5f9c: 0x61684320  daddi       $t0, $t3, 0x4320
    ctx->pc = 0x2c5f9cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17184; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c5fa0:
    // 0x2c5fa0: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5fa0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c5fa4:
    // 0x2c5fa4: 0x0  nop
    ctx->pc = 0x2c5fa4u;
    // NOP
label_2c5fa8:
    // 0x2c5fa8: 0x6775685a  daddiu      $s5, $k1, 0x685A
    ctx->pc = 0x2c5fa8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26714);
label_2c5fac:
    // 0x2c5fac: 0x694c2065  ldl         $t4, 0x2065($t2)
    ctx->pc = 0x2c5facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c5fb0:
    // 0x2c5fb0: 0x676e61  .word       0x00676E61                   # addu        $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5fb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c5fb4:
    // 0x2c5fb4: 0x0  nop
    ctx->pc = 0x2c5fb4u;
    // NOP
label_2c5fb8:
    // 0x2c5fb8: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c5fb8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c5fbc:
    // 0x2c5fbc: 0x6f6143  .word       0x006F6143                   # sra         $t4, $t7, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5fbcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 15), 5));
label_2c5fc0:
    // 0x2c5fc0: 0x4220754c  .word       0x4220754C                   # INVALID     $s1, $zero, 0x754C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c5fc0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C5FC0 raw=0x4220754C");
 /* MITIGATED */
label_2c5fc4:
    // 0x2c5fc4: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5fc4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C5FC4 raw=0x00000075");
 /* MITIGATED */
label_2c5fc8:
    // 0x2c5fc8: 0x0  nop
    ctx->pc = 0x2c5fc8u;
    // NOP
label_2c5fcc:
    // 0x2c5fcc: 0x0  nop
    ctx->pc = 0x2c5fccu;
    // NOP
label_2c5fd0:
    // 0x2c5fd0: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c5fd0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c5fd4:
    // 0x2c5fd4: 0x6e616853  ldr         $at, 0x6853($s3)
    ctx->pc = 0x2c5fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26707); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5fd8:
    // 0x2c5fd8: 0x69582067  ldl         $t8, 0x2067($t2)
    ctx->pc = 0x2c5fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2c5fdc:
    // 0x2c5fdc: 0x676e61  .word       0x00676E61                   # addu        $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5fdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c5fe0:
    // 0x2c5fe0: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c5fe0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c5fe4:
    // 0x2c5fe4: 0x696542  .word       0x00696542                   # srl         $t4, $t1, 21 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c5fe4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 9), 21));
label_2c5fe8:
    // 0x2c5fe8: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c5fe8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c5fec:
    // 0x2c5fec: 0x6e61694a  ldr         $at, 0x694A($s3)
    ctx->pc = 0x2c5fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c5ff0:
    // 0x2c5ff0: 0x0  nop
    ctx->pc = 0x2c5ff0u;
    // NOP
label_2c5ff4:
    // 0x2c5ff4: 0x0  nop
    ctx->pc = 0x2c5ff4u;
    // NOP
label_2c5ff8:
    // 0x2c5ff8: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c5ff8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c5ffc:
    // 0x2c5ffc: 0x6e617551  ldr         $at, 0x7551($s3)
    ctx->pc = 0x2c5ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30033); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6000:
    // 0x2c6000: 0x0  nop
    ctx->pc = 0x2c6000u;
    // NOP
label_2c6004:
    // 0x2c6004: 0x0  nop
    ctx->pc = 0x2c6004u;
    // NOP
label_2c6008:
    // 0x2c6008: 0x676e6f44  daddiu      $t6, $k1, 0x6F44
    ctx->pc = 0x2c6008u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28484);
label_2c600c:
    // 0x2c600c: 0x75685a20  .word       0x75685A20                   # INVALID     $t3, $t0, 0x5A20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c600cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C600C raw=0x75685A20");
 /* MITIGATED */
label_2c6010:
    // 0x2c6010: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6010u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c6014:
    // 0x2c6014: 0x0  nop
    ctx->pc = 0x2c6014u;
    // NOP
label_2c6018:
    // 0x2c6018: 0x6e617559  ldr         $at, 0x7559($s3)
    ctx->pc = 0x2c6018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30041); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c601c:
    // 0x2c601c: 0x61685320  daddi       $t0, $t3, 0x5320
    ctx->pc = 0x2c601cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c6020:
    // 0x2c6020: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6020u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c6024:
    // 0x2c6024: 0x0  nop
    ctx->pc = 0x2c6024u;
    // NOP
label_2c6028:
    // 0x2c6028: 0x4320614d  .word       0x4320614D                   # INVALID     $t9, $zero, 0x614D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c6028u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C6028 raw=0x4320614D");
 /* MITIGATED */
label_2c602c:
    // 0x2c602c: 0x6f6168  .word       0x006F6168                   # mfsa        $t4 # 006F0140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c602cu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2c6030:
    // 0x2c6030: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c6030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6034:
    // 0x2c6034: 0x685a2067  ldl         $k0, 0x2067($v0)
    ctx->pc = 0x2c6034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 26, (GPR_U64(ctx, 26) & keepMask) | (mem << shift)); }
label_2c6038:
    // 0x2c6038: 0x676e6f  .word       0x00676E6F                   # dsubu       $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6038u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
label_2c603c:
    // 0x2c603c: 0x0  nop
    ctx->pc = 0x2c603cu;
    // NOP
label_2c6040:
    // 0x2c6040: 0x68616958  ldl         $at, 0x6958($v1)
    ctx->pc = 0x2c6040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c6044:
    // 0x2c6044: 0x5920756f  blezl       $t1, . + 4 + (0x756F << 2)
label_2c6048:
    if (ctx->pc == 0x2C6048u) {
        ctx->pc = 0x2C6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6044u;
        // 0x2c6048: 0x6e6175  .word       0x006E6175                   # INVALID     $v1, $t6, 0x6175 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C6048 raw=0x006E6175");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C604Cu;
        goto label_2c604c;
    }
    ctx->pc = 0x2C6044u;
    {
        const bool branch_taken_0x2c6044 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x2c6044) {
            ctx->pc = 0x2C6048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6044u;
            // 0x2c6048: 0x6e6175  .word       0x006E6175                   # INVALID     $v1, $t6, 0x6175 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//             throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C6048 raw=0x006E6175");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3604u;
            return;
        }
    }
    ctx->pc = 0x2C604Cu;
label_2c604c:
    // 0x2c604c: 0x0  nop
    ctx->pc = 0x2c604cu;
    // NOP
label_2c6050:
    // 0x2c6050: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6054:
    // 0x2c6054: 0x694c2067  ldl         $t4, 0x2067($t2)
    ctx->pc = 0x2c6054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c6058:
    // 0x2c6058: 0x6f61  .word       0x00006F61                   # addu        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6058u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c605c:
    // 0x2c605c: 0x0  nop
    ctx->pc = 0x2c605cu;
    // NOP
label_2c6060:
    // 0x2c6060: 0x616d6953  daddi       $t5, $t3, 0x6953
    ctx->pc = 0x2c6060u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26963; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c6064:
    // 0x2c6064: 0x695920  .word       0x00695920                   # add         $t3, $v1, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6064u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2c6068:
    // 0x2c6068: 0x4d20754c  .word       0x4D20754C                   # INVALID     $t1, $zero, 0x754C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6068u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C6068 raw=0x4D20754C");
 /* MITIGATED */
label_2c606c:
    // 0x2c606c: 0x676e65  .word       0x00676E65                   # or          $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c606cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_2c6070:
    // 0x2c6070: 0x206e6147  addi        $t6, $v1, 0x6147
    ctx->pc = 0x2c6070u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24903, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6074:
    // 0x2c6074: 0x676e694e  daddiu      $t6, $k1, 0x694E
    ctx->pc = 0x2c6074u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26958);
label_2c6078:
    // 0x2c6078: 0x0  nop
    ctx->pc = 0x2c6078u;
    // NOP
label_2c607c:
    // 0x2c607c: 0x0  nop
    ctx->pc = 0x2c607cu;
    // NOP
label_2c6080:
    // 0x2c6080: 0x6e61694a  ldr         $at, 0x694A($s3)
    ctx->pc = 0x2c6080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6084:
    // 0x2c6084: 0x65572067  daddiu      $s7, $t2, 0x2067
    ctx->pc = 0x2c6084u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8295);
label_2c6088:
    // 0x2c6088: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6088u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c608c:
    // 0x2c608c: 0x0  nop
    ctx->pc = 0x2c608cu;
    // NOP
label_2c6090:
    // 0x2c6090: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6094:
    // 0x2c6094: 0x694a2067  ldl         $t2, 0x2067($t2)
    ctx->pc = 0x2c6094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2c6098:
    // 0x2c6098: 0x6f61  .word       0x00006F61                   # addu        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6098u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c609c:
    // 0x2c609c: 0x0  nop
    ctx->pc = 0x2c609cu;
    // NOP
label_2c60a0:
    // 0x2c60a0: 0x48207558  .word       0x48207558                   # qmfc2.ni    $zero, $vf14 # 00000558 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c60a0u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[14]));
label_2c60a4:
    // 0x2c60a4: 0x676e6175  daddiu      $t6, $k1, 0x6175
    ctx->pc = 0x2c60a4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24949);
label_2c60a8:
    // 0x2c60a8: 0x0  nop
    ctx->pc = 0x2c60a8u;
    // NOP
label_2c60ac:
    // 0x2c60ac: 0x0  nop
    ctx->pc = 0x2c60acu;
    // NOP
label_2c60b0:
    // 0x2c60b0: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c60b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c60b4:
    // 0x2c60b4: 0x65482067  daddiu      $t0, $t2, 0x2067
    ctx->pc = 0x2c60b4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8295);
label_2c60b8:
    // 0x2c60b8: 0x0  nop
    ctx->pc = 0x2c60b8u;
    // NOP
label_2c60bc:
    // 0x2c60bc: 0x0  nop
    ctx->pc = 0x2c60bcu;
    // NOP
label_2c60c0:
    // 0x2c60c0: 0x6e65685a  ldr         $a1, 0x685A($s3)
    ctx->pc = 0x2c60c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c60c4:
    // 0x2c60c4: 0x694a20  .word       0x00694A20                   # add         $t1, $v1, $t1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c60c4u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2c60c8:
    // 0x2c60c8: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c60c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c60cc:
    // 0x2c60cc: 0x61472067  daddi       $a3, $t2, 0x2067
    ctx->pc = 0x2c60ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_2c60d0:
    // 0x2c60d0: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c60d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c60d4:
    // 0x2c60d4: 0x0  nop
    ctx->pc = 0x2c60d4u;
    // NOP
label_2c60d8:
    // 0x2c60d8: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c60d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c60dc:
    // 0x2c60dc: 0x6543  sra         $t4, $zero, 21
    ctx->pc = 0x2c60dcu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 0), 21));
label_2c60e0:
    // 0x2c60e0: 0x20696557  addi        $t1, $v1, 0x6557
    ctx->pc = 0x2c60e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c60e4:
    // 0x2c60e4: 0x6e6159  .word       0x006E6159                   # multu       $v1, $t6 # 00006140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c60e4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c60e8:
    // 0x2c60e8: 0x676e6150  daddiu      $t6, $k1, 0x6150
    ctx->pc = 0x2c60e8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24912);
label_2c60ec:
    // 0x2c60ec: 0x6e6f5420  ldr         $t7, 0x5420($s3)
    ctx->pc = 0x2c60ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c60f0:
    // 0x2c60f0: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c60f0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c60f4:
    // 0x2c60f4: 0x0  nop
    ctx->pc = 0x2c60f4u;
    // NOP
label_2c60f8:
    // 0x2c60f8: 0x676e654d  daddiu      $t6, $k1, 0x654D
    ctx->pc = 0x2c60f8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25933);
label_2c60fc:
    // 0x2c60fc: 0x6f754820  ldr         $s5, 0x4820($k1)
    ctx->pc = 0x2c60fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c6100:
    // 0x2c6100: 0x0  nop
    ctx->pc = 0x2c6100u;
    // NOP
label_2c6104:
    // 0x2c6104: 0x0  nop
    ctx->pc = 0x2c6104u;
    // NOP
label_2c6108:
    // 0x2c6108: 0x2075685a  addi        $s5, $v1, 0x685A
    ctx->pc = 0x2c6108u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26714, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c610c:
    // 0x2c610c: 0x676e6f52  daddiu      $t6, $k1, 0x6F52
    ctx->pc = 0x2c610cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28498);
label_2c6110:
    // 0x2c6110: 0x0  nop
    ctx->pc = 0x2c6110u;
    // NOP
label_2c6114:
    // 0x2c6114: 0x0  nop
    ctx->pc = 0x2c6114u;
    // NOP
label_2c6118:
    // 0x2c6118: 0x51206144  beql        $t1, $zero, . + 4 + (0x6144 << 2)
label_2c611c:
    if (ctx->pc == 0x2C611Cu) {
        ctx->pc = 0x2C611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6118u;
        // 0x2c611c: 0x6f6169  .word       0x006F6169                   # mtsa        $v1 # 000F6140 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        ctx->sa = GPR_U32(ctx, 3) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6120u;
        goto label_2c6120;
    }
    ctx->pc = 0x2C6118u;
    {
        const bool branch_taken_0x2c6118 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6118) {
            ctx->pc = 0x2C611Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6118u;
            // 0x2c611c: 0x6f6169  .word       0x006F6169                   # mtsa        $v1 # 000F6140 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            ctx->sa = GPR_U32(ctx, 3) & 0x7F;
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE62Cu;
            return;
        }
    }
    ctx->pc = 0x2C6120u;
label_2c6120:
    // 0x2c6120: 0x6f616958  ldr         $at, 0x6958($k1)
    ctx->pc = 0x2c6120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6124:
    // 0x2c6124: 0x61695120  daddi       $t1, $t3, 0x5120
    ctx->pc = 0x2c6124u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20768; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2c6128:
    // 0x2c6128: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6128u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c612c:
    // 0x2c612c: 0x0  nop
    ctx->pc = 0x2c612cu;
    // NOP
label_2c6130:
    // 0x2c6130: 0x58207546  blezl       $at, . + 4 + (0x7546 << 2)
label_2c6134:
    if (ctx->pc == 0x2C6134u) {
        ctx->pc = 0x2C6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6130u;
        // 0x2c6134: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        ctx->sa = GPR_U32(ctx, 0) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6138u;
        goto label_2c6138;
    }
    ctx->pc = 0x2C6130u;
    {
        const bool branch_taken_0x2c6130 = (GPR_S32(ctx, 1) <= 0);
        if (branch_taken_0x2c6130) {
            ctx->pc = 0x2C6134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6130u;
            // 0x2c6134: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            ctx->sa = GPR_U32(ctx, 0) & 0x7F;
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E364Cu;
            return;
        }
    }
    ctx->pc = 0x2C6138u;
label_2c6138:
    // 0x2c6138: 0x5720754e  bnel        $t9, $zero, . + 4 + (0x754E << 2)
label_2c613c:
    if (ctx->pc == 0x2C613Cu) {
        ctx->pc = 0x2C613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6138u;
        // 0x2c613c: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6140u;
        goto label_2c6140;
    }
    ctx->pc = 0x2C6138u;
    {
        const bool branch_taken_0x2c6138 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6138) {
            ctx->pc = 0x2C613Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6138u;
            // 0x2c613c: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3674u;
            return;
        }
    }
    ctx->pc = 0x2C6140u;
label_2c6140:
    // 0x2c6140: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c6140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6144:
    // 0x2c6144: 0x69592067  ldl         $t9, 0x2067($t2)
    ctx->pc = 0x2c6144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
label_2c6148:
    // 0x2c6148: 0x0  nop
    ctx->pc = 0x2c6148u;
    // NOP
label_2c614c:
    // 0x2c614c: 0x0  nop
    ctx->pc = 0x2c614cu;
    // NOP
label_2c6150:
    // 0x2c6150: 0x20756f48  addi        $s5, $v1, 0x6F48
    ctx->pc = 0x2c6150u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28488, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6154:
    // 0x2c6154: 0x6e617558  ldr         $at, 0x7558($s3)
    ctx->pc = 0x2c6154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30040); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6158:
    // 0x2c6158: 0x0  nop
    ctx->pc = 0x2c6158u;
    // NOP
label_2c615c:
    // 0x2c615c: 0x0  nop
    ctx->pc = 0x2c615cu;
    // NOP
label_2c6160:
    // 0x2c6160: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c6160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6164:
    // 0x2c6164: 0x69592067  ldl         $t9, 0x2067($t2)
    ctx->pc = 0x2c6164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
label_2c6168:
    // 0x2c6168: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6168u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c616c:
    // 0x2c616c: 0x0  nop
    ctx->pc = 0x2c616cu;
    // NOP
label_2c6170:
    // 0x2c6170: 0x676e6159  daddiu      $t6, $k1, 0x6159
    ctx->pc = 0x2c6170u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24921);
label_2c6174:
    // 0x2c6174: 0x75695120  .word       0x75695120                   # INVALID     $t3, $t1, 0x5120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6174u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6174 raw=0x75695120");
 /* MITIGATED */
label_2c6178:
    // 0x2c6178: 0x0  nop
    ctx->pc = 0x2c6178u;
    // NOP
label_2c617c:
    // 0x2c617c: 0x0  nop
    ctx->pc = 0x2c617cu;
    // NOP
label_2c6180:
    // 0x2c6180: 0x4b20694c  vmsubx.xw   $vf5, $vf13, $vf0x
    ctx->pc = 0x2c6180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2c6184:
    // 0x2c6184: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6184u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c6188:
    // 0x2c6188: 0x206e6148  addi        $t6, $v1, 0x6148
    ctx->pc = 0x2c6188u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c618c:
    // 0x2c618c: 0x697553  .word       0x00697553                   # mtlo        $v1 # 00097540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c618cu;
    ctx->lo = GPR_U64(ctx, 3);
label_2c6190:
    // 0x2c6190: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c6190u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c6194:
    // 0x2c6194: 0x6e6552  .word       0x006E6552                   # mflo        $t4 # 006E0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6194u;
    SET_GPR_U64(ctx, 12, ctx->lo);
label_2c6198:
    // 0x2c6198: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c6198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c619c:
    // 0x2c619c: 0x75502067  .word       0x75502067                   # INVALID     $t2, $s0, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c619cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C619C raw=0x75502067");
 /* MITIGATED */
label_2c61a0:
    // 0x2c61a0: 0x0  nop
    ctx->pc = 0x2c61a0u;
    // NOP
label_2c61a4:
    // 0x2c61a4: 0x0  nop
    ctx->pc = 0x2c61a4u;
    // NOP
label_2c61a8:
    // 0x2c61a8: 0x206e6148  addi        $t6, $v1, 0x6148
    ctx->pc = 0x2c61a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c61ac:
    // 0x2c61ac: 0x676e6144  daddiu      $t6, $k1, 0x6144
    ctx->pc = 0x2c61acu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24900);
label_2c61b0:
    // 0x2c61b0: 0x0  nop
    ctx->pc = 0x2c61b0u;
    // NOP
label_2c61b4:
    // 0x2c61b4: 0x0  nop
    ctx->pc = 0x2c61b4u;
    // NOP
label_2c61b8:
    // 0x2c61b8: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c61b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c61bc:
    // 0x2c61bc: 0x61422067  daddi       $v0, $t2, 0x2067
    ctx->pc = 0x2c61bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2c61c0:
    // 0x2c61c0: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c61c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c61c4:
    // 0x2c61c4: 0x0  nop
    ctx->pc = 0x2c61c4u;
    // NOP
label_2c61c8:
    // 0x2c61c8: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c61c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c61cc:
    // 0x2c61cc: 0x694c2067  ldl         $t4, 0x2067($t2)
    ctx->pc = 0x2c61ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c61d0:
    // 0x2c61d0: 0x676e61  .word       0x00676E61                   # addu        $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c61d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2c61d4:
    // 0x2c61d4: 0x0  nop
    ctx->pc = 0x2c61d4u;
    // NOP
label_2c61d8:
    // 0x2c61d8: 0x0  nop
    ctx->pc = 0x2c61d8u;
    // NOP
label_2c61dc:
    // 0x2c61dc: 0x0  nop
    ctx->pc = 0x2c61dcu;
    // NOP
label_2c61e0:
    // 0x2c61e0: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c61e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c61e4:
    // 0x2c61e4: 0x614d2067  daddi       $t5, $t2, 0x2067
    ctx->pc = 0x2c61e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c61e8:
    // 0x2c61e8: 0x6843206e  ldl         $v1, 0x206E($v0)
    ctx->pc = 0x2c61e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2c61ec:
    // 0x2c61ec: 0x676e65  .word       0x00676E65                   # or          $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c61ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_2c61f0:
    // 0x2c61f0: 0x5a206f42  blezl       $s1, . + 4 + (0x6F42 << 2)
label_2c61f4:
    if (ctx->pc == 0x2C61F4u) {
        ctx->pc = 0x2C61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61F0u;
        // 0x2c61f4: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C61F8u;
        goto label_2c61f8;
    }
    ctx->pc = 0x2C61F0u;
    {
        const bool branch_taken_0x2c61f0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c61f0) {
            ctx->pc = 0x2C61F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C61F0u;
            // 0x2c61f4: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1EFCu;
            return;
        }
    }
    ctx->pc = 0x2C61F8u;
label_2c61f8:
    // 0x2c61f8: 0x0  nop
    ctx->pc = 0x2c61f8u;
    // NOP
label_2c61fc:
    // 0x2c61fc: 0x0  nop
    ctx->pc = 0x2c61fcu;
    // NOP
label_2c6200:
    // 0x2c6200: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c6200u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c6204:
    // 0x2c6204: 0x676e6f48  daddiu      $t6, $k1, 0x6F48
    ctx->pc = 0x2c6204u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28488);
label_2c6208:
    // 0x2c6208: 0x0  nop
    ctx->pc = 0x2c6208u;
    // NOP
label_2c620c:
    // 0x2c620c: 0x0  nop
    ctx->pc = 0x2c620cu;
    // NOP
label_2c6210:
    // 0x2c6210: 0x206e6159  addi        $t6, $v1, 0x6159
    ctx->pc = 0x2c6210u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24921, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6214:
    // 0x2c6214: 0x6e61694c  ldr         $at, 0x694C($s3)
    ctx->pc = 0x2c6214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6218:
    // 0x2c6218: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6218u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c621c:
    // 0x2c621c: 0x0  nop
    ctx->pc = 0x2c621cu;
    // NOP
label_2c6220:
    // 0x2c6220: 0x206e6557  addi        $t6, $v1, 0x6557
    ctx->pc = 0x2c6220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6224:
    // 0x2c6224: 0x756f6843  .word       0x756F6843                   # INVALID     $t3, $t7, 0x6843 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6224u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6224 raw=0x756F6843");
 /* MITIGATED */
label_2c6228:
    // 0x2c6228: 0x0  nop
    ctx->pc = 0x2c6228u;
    // NOP
label_2c622c:
    // 0x2c622c: 0x0  nop
    ctx->pc = 0x2c622cu;
    // NOP
label_2c6230:
    // 0x2c6230: 0x676e6f47  daddiu      $t6, $k1, 0x6F47
    ctx->pc = 0x2c6230u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28487);
label_2c6234:
    // 0x2c6234: 0x206e7573  addi        $t6, $v1, 0x7573
    ctx->pc = 0x2c6234u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30067, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6238:
    // 0x2c6238: 0x6e615a  .word       0x006E615A                   # div         $t4, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6238u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c623c:
    // 0x2c623c: 0x0  nop
    ctx->pc = 0x2c623cu;
    // NOP
label_2c6240:
    // 0x2c6240: 0x20617548  addi        $at, $v1, 0x7548
    ctx->pc = 0x2c6240u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30024, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2c6244:
    // 0x2c6244: 0x6e6f6958  ldr         $t7, 0x6958($s3)
    ctx->pc = 0x2c6244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c6248:
    // 0x2c6248: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6248u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c624c:
    // 0x2c624c: 0x0  nop
    ctx->pc = 0x2c624cu;
    // NOP
label_2c6250:
    // 0x2c6250: 0x52207558  beql        $s1, $zero, . + 4 + (0x7558 << 2)
label_2c6254:
    if (ctx->pc == 0x2C6254u) {
        ctx->pc = 0x2C6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6250u;
        // 0x2c6254: 0x676e6f  .word       0x00676E6F                   # dsubu       $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6258u;
        goto label_2c6258;
    }
    ctx->pc = 0x2C6250u;
    {
        const bool branch_taken_0x2c6250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6250) {
            ctx->pc = 0x2C6254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6250u;
            // 0x2c6254: 0x676e6f  .word       0x00676E6F                   # dsubu       $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E37B4u;
            return;
        }
    }
    ctx->pc = 0x2C6258u;
label_2c6258:
    // 0x2c6258: 0x206f6147  addi        $t7, $v1, 0x6147
    ctx->pc = 0x2c6258u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24903, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c625c:
    // 0x2c625c: 0x6e756853  ldr         $s5, 0x6853($s3)
    ctx->pc = 0x2c625cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26707); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c6260:
    // 0x2c6260: 0x0  nop
    ctx->pc = 0x2c6260u;
    // NOP
label_2c6264:
    // 0x2c6264: 0x0  nop
    ctx->pc = 0x2c6264u;
    // NOP
label_2c6268:
    // 0x2c6268: 0x5220694c  beql        $s1, $zero, . + 4 + (0x694C << 2)
label_2c626c:
    if (ctx->pc == 0x2C626Cu) {
        ctx->pc = 0x2C626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6268u;
        // 0x2c626c: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C626C raw=0x00000075");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6270u;
        goto label_2c6270;
    }
    ctx->pc = 0x2C6268u;
    {
        const bool branch_taken_0x2c6268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6268) {
            ctx->pc = 0x2C626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6268u;
            // 0x2c626c: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//             throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C626C raw=0x00000075");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E079Cu;
            return;
        }
    }
    ctx->pc = 0x2C6270u;
label_2c6270:
    // 0x2c6270: 0x4a20694c  vmsubx.w    $vf5, $vf13, $vf0x
    ctx->pc = 0x2c6270u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2c6274:
    // 0x2c6274: 0x6575  .word       0x00006575                   # INVALID     $zero, $zero, 0x6575 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6274u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C6274 raw=0x00006575");
 /* MITIGATED */
label_2c6278:
    // 0x2c6278: 0x2061694a  addi        $at, $v1, 0x694A
    ctx->pc = 0x2c6278u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26954, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2c627c:
    // 0x2c627c: 0x7558  .word       0x00007558                   # mult        $t6, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c627cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c6280:
    // 0x2c6280: 0x206f7547  addi        $t7, $v1, 0x7547
    ctx->pc = 0x2c6280u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30023, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c6284:
    // 0x2c6284: 0x6953  .word       0x00006953                   # mtlo        $zero # 00006940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6284u;
    ctx->lo = GPR_U64(ctx, 0);
label_2c6288:
    // 0x2c6288: 0x5a207548  blezl       $s1, . + 4 + (0x7548 << 2)
label_2c628c:
    if (ctx->pc == 0x2C628Cu) {
        ctx->pc = 0x2C628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6288u;
        // 0x2c628c: 0x6e6568  .word       0x006E6568                   # mfsa        $t4 # 006E0540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 12, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6290u;
        goto label_2c6290;
    }
    ctx->pc = 0x2C6288u;
    {
        const bool branch_taken_0x2c6288 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2c6288) {
            ctx->pc = 0x2C628Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6288u;
            // 0x2c628c: 0x6e6568  .word       0x006E6568                   # mfsa        $t4 # 006E0540 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            SET_GPR_U32(ctx, 12, ctx->sa);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E37ACu;
            return;
        }
    }
    ctx->pc = 0x2C6290u;
label_2c6290:
    // 0x2c6290: 0x4a207559  vmuly.w     $vf21, $vf14, $vf0y
    ctx->pc = 0x2c6290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2c6294:
    // 0x2c6294: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6294u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c6298:
    // 0x2c6298: 0x6e756843  ldr         $s5, 0x6843($s3)
    ctx->pc = 0x2c6298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c629c:
    // 0x2c629c: 0x71755920  .word       0x71755920                   # madd1       $t3, $t3, $s5 # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c629cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_2c62a0:
    // 0x2c62a0: 0x676e6f69  daddiu      $t6, $k1, 0x6F69
    ctx->pc = 0x2c62a0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28521);
label_2c62a4:
    // 0x2c62a4: 0x0  nop
    ctx->pc = 0x2c62a4u;
    // NOP
label_2c62a8:
    // 0x2c62a8: 0x20657559  addi        $a1, $v1, 0x7559
    ctx->pc = 0x2c62a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30041, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c62ac:
    // 0x2c62ac: 0x6e694a  .word       0x006E694A                   # movz        $t5, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c62acu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
label_2c62b0:
    // 0x2c62b0: 0x4420694c  .word       0x4420694C                   # dmfc1       $zero, $f13 # 0000014C <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c62b0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0xC at 0x2C62B0 raw=0x4420694C");
 /* MITIGATED */
label_2c62b4:
    // 0x2c62b4: 0x6e6169  .word       0x006E6169                   # mtsa        $v1 # 000E6140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c62b4u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c62b8:
    // 0x2c62b8: 0x68616958  ldl         $at, 0x6958($v1)
    ctx->pc = 0x2c62b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26968); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c62bc:
    // 0x2c62bc: 0x4520756f  .word       0x4520756F                   # INVALID     $t1, $zero, 0x756F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c62bcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x2F at 0x2C62BC raw=0x4520756F");
 /* MITIGATED */
label_2c62c0:
    // 0x2c62c0: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c62c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c62c4:
    // 0x2c62c4: 0x0  nop
    ctx->pc = 0x2c62c4u;
    // NOP
label_2c62c8:
    // 0x2c62c8: 0x6e656843  ldr         $a1, 0x6843($s3)
    ctx->pc = 0x2c62c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c62cc:
    // 0x2c62cc: 0x75592067  .word       0x75592067                   # INVALID     $t2, $t9, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c62ccu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C62CC raw=0x75592067");
 /* MITIGATED */
label_2c62d0:
    // 0x2c62d0: 0x0  nop
    ctx->pc = 0x2c62d0u;
    // NOP
label_2c62d4:
    // 0x2c62d4: 0x0  nop
    ctx->pc = 0x2c62d4u;
    // NOP
label_2c62d8:
    // 0x2c62d8: 0x206e7558  addi        $t6, $v1, 0x7558
    ctx->pc = 0x2c62d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30040, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c62dc:
    // 0x2c62dc: 0x756f59  .word       0x00756F59                   # multu       $v1, $s5 # 00006F40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c62dcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c62e0:
    // 0x2c62e0: 0x756f685a  .word       0x756F685A                   # INVALID     $t3, $t7, 0x685A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c62e0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C62E0 raw=0x756F685A");
 /* MITIGATED */
label_2c62e4:
    // 0x2c62e4: 0x69615420  ldl         $at, 0x5420($t3)
    ctx->pc = 0x2c62e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c62e8:
    // 0x2c62e8: 0x0  nop
    ctx->pc = 0x2c62e8u;
    // NOP
label_2c62ec:
    // 0x2c62ec: 0x0  nop
    ctx->pc = 0x2c62ecu;
    // NOP
label_2c62f0:
    // 0x2c62f0: 0x676e694c  daddiu      $t6, $k1, 0x694C
    ctx->pc = 0x2c62f0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26956);
label_2c62f4:
    // 0x2c62f4: 0x6e6f5420  ldr         $t7, 0x5420($s3)
    ctx->pc = 0x2c62f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c62f8:
    // 0x2c62f8: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c62f8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c62fc:
    // 0x2c62fc: 0x0  nop
    ctx->pc = 0x2c62fcu;
    // NOP
label_2c6300:
    // 0x2c6300: 0x53207558  beql        $t9, $zero, . + 4 + (0x7558 << 2)
label_2c6304:
    if (ctx->pc == 0x2C6304u) {
        ctx->pc = 0x2C6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6300u;
        // 0x2c6304: 0x676e6568  daddiu      $t6, $k1, 0x6568 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6308u;
        goto label_2c6308;
    }
    ctx->pc = 0x2C6300u;
    {
        const bool branch_taken_0x2c6300 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6300) {
            ctx->pc = 0x2C6304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6300u;
            // 0x2c6304: 0x676e6568  daddiu      $t6, $k1, 0x6568 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25960);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3864u;
            return;
        }
    }
    ctx->pc = 0x2C6308u;
label_2c6308:
    // 0x2c6308: 0x0  nop
    ctx->pc = 0x2c6308u;
    // NOP
label_2c630c:
    // 0x2c630c: 0x0  nop
    ctx->pc = 0x2c630cu;
    // NOP
label_2c6310:
    // 0x2c6310: 0x676e6944  daddiu      $t6, $k1, 0x6944
    ctx->pc = 0x2c6310u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26948);
label_2c6314:
    // 0x2c6314: 0x6e654620  ldr         $a1, 0x4620($s3)
    ctx->pc = 0x2c6314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6318:
    // 0x2c6318: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6318u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c631c:
    // 0x2c631c: 0x0  nop
    ctx->pc = 0x2c631cu;
    // NOP
label_2c6320:
    // 0x2c6320: 0x676e6150  daddiu      $t6, $k1, 0x6150
    ctx->pc = 0x2c6320u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24912);
label_2c6324:
    // 0x2c6324: 0x654420  .word       0x00654420                   # add         $t0, $v1, $a1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6324u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2c6328:
    // 0x2c6328: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c6328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c632c:
    // 0x2c632c: 0x75512067  .word       0x75512067                   # INVALID     $t2, $s1, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c632cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C632C raw=0x75512067");
 /* MITIGATED */
label_2c6330:
    // 0x2c6330: 0x6e61  .word       0x00006E61                   # addu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6330u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c6334:
    // 0x2c6334: 0x0  nop
    ctx->pc = 0x2c6334u;
    // NOP
label_2c6338:
    // 0x2c6338: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c6338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c633c:
    // 0x2c633c: 0x6e695820  ldr         $t1, 0x5820($s3)
    ctx->pc = 0x2c633cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 22560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c6340:
    // 0x2c6340: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6340u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c6344:
    // 0x2c6344: 0x0  nop
    ctx->pc = 0x2c6344u;
    // NOP
label_2c6348:
    // 0x2c6348: 0x6d616853  ldr         $at, 0x6853($t3)
    ctx->pc = 0x2c6348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26707); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c634c:
    // 0x2c634c: 0x656b6f  .word       0x00656B6F                   # dsubu       $t5, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c634cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_2c6350:
    // 0x2c6350: 0x676e6544  daddiu      $t6, $k1, 0x6544
    ctx->pc = 0x2c6350u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25924);
label_2c6354:
    // 0x2c6354: 0x694120  .word       0x00694120                   # add         $t0, $v1, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6354u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2c6358:
    // 0x2c6358: 0x4420614d  .word       0x4420614D                   # dmfc1       $zero, $f12 # 0000014D <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6358u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0xD at 0x2C6358 raw=0x4420614D");
 /* MITIGATED */
label_2c635c:
    // 0x2c635c: 0x6961  .word       0x00006961                   # addu        $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c635cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c6360:
    // 0x2c6360: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c6360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6364:
    // 0x2c6364: 0x6f755320  ldr         $s5, 0x5320($k1)
    ctx->pc = 0x2c6364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c6368:
    // 0x2c6368: 0x0  nop
    ctx->pc = 0x2c6368u;
    // NOP
label_2c636c:
    // 0x2c636c: 0x0  nop
    ctx->pc = 0x2c636cu;
    // NOP
    ctx->pc = 0x2c6370u;
    return;
}

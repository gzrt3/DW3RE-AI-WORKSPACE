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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part636(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b5b90u: goto label_2b5b90;
        case 0x2b5b94u: goto label_2b5b94;
        case 0x2b5b98u: goto label_2b5b98;
        case 0x2b5b9cu: goto label_2b5b9c;
        case 0x2b5ba0u: goto label_2b5ba0;
        case 0x2b5ba4u: goto label_2b5ba4;
        case 0x2b5ba8u: goto label_2b5ba8;
        case 0x2b5bacu: goto label_2b5bac;
        case 0x2b5bb0u: goto label_2b5bb0;
        case 0x2b5bb4u: goto label_2b5bb4;
        case 0x2b5bb8u: goto label_2b5bb8;
        case 0x2b5bbcu: goto label_2b5bbc;
        case 0x2b5bc0u: goto label_2b5bc0;
        case 0x2b5bc4u: goto label_2b5bc4;
        case 0x2b5bc8u: goto label_2b5bc8;
        case 0x2b5bccu: goto label_2b5bcc;
        case 0x2b5bd0u: goto label_2b5bd0;
        case 0x2b5bd4u: goto label_2b5bd4;
        case 0x2b5bd8u: goto label_2b5bd8;
        case 0x2b5bdcu: goto label_2b5bdc;
        case 0x2b5be0u: goto label_2b5be0;
        case 0x2b5be4u: goto label_2b5be4;
        case 0x2b5be8u: goto label_2b5be8;
        case 0x2b5becu: goto label_2b5bec;
        case 0x2b5bf0u: goto label_2b5bf0;
        case 0x2b5bf4u: goto label_2b5bf4;
        case 0x2b5bf8u: goto label_2b5bf8;
        case 0x2b5bfcu: goto label_2b5bfc;
        case 0x2b5c00u: goto label_2b5c00;
        case 0x2b5c04u: goto label_2b5c04;
        case 0x2b5c08u: goto label_2b5c08;
        case 0x2b5c0cu: goto label_2b5c0c;
        case 0x2b5c10u: goto label_2b5c10;
        case 0x2b5c14u: goto label_2b5c14;
        case 0x2b5c18u: goto label_2b5c18;
        case 0x2b5c1cu: goto label_2b5c1c;
        case 0x2b5c20u: goto label_2b5c20;
        case 0x2b5c24u: goto label_2b5c24;
        case 0x2b5c28u: goto label_2b5c28;
        case 0x2b5c2cu: goto label_2b5c2c;
        case 0x2b5c30u: goto label_2b5c30;
        case 0x2b5c34u: goto label_2b5c34;
        case 0x2b5c38u: goto label_2b5c38;
        case 0x2b5c3cu: goto label_2b5c3c;
        case 0x2b5c40u: goto label_2b5c40;
        case 0x2b5c44u: goto label_2b5c44;
        case 0x2b5c48u: goto label_2b5c48;
        case 0x2b5c4cu: goto label_2b5c4c;
        case 0x2b5c50u: goto label_2b5c50;
        case 0x2b5c54u: goto label_2b5c54;
        case 0x2b5c58u: goto label_2b5c58;
        case 0x2b5c5cu: goto label_2b5c5c;
        case 0x2b5c60u: goto label_2b5c60;
        case 0x2b5c64u: goto label_2b5c64;
        case 0x2b5c68u: goto label_2b5c68;
        case 0x2b5c6cu: goto label_2b5c6c;
        case 0x2b5c70u: goto label_2b5c70;
        case 0x2b5c74u: goto label_2b5c74;
        case 0x2b5c78u: goto label_2b5c78;
        case 0x2b5c7cu: goto label_2b5c7c;
        case 0x2b5c80u: goto label_2b5c80;
        case 0x2b5c84u: goto label_2b5c84;
        case 0x2b5c88u: goto label_2b5c88;
        case 0x2b5c8cu: goto label_2b5c8c;
        case 0x2b5c90u: goto label_2b5c90;
        case 0x2b5c94u: goto label_2b5c94;
        case 0x2b5c98u: goto label_2b5c98;
        case 0x2b5c9cu: goto label_2b5c9c;
        case 0x2b5ca0u: goto label_2b5ca0;
        case 0x2b5ca4u: goto label_2b5ca4;
        case 0x2b5ca8u: goto label_2b5ca8;
        case 0x2b5cacu: goto label_2b5cac;
        case 0x2b5cb0u: goto label_2b5cb0;
        case 0x2b5cb4u: goto label_2b5cb4;
        case 0x2b5cb8u: goto label_2b5cb8;
        case 0x2b5cbcu: goto label_2b5cbc;
        case 0x2b5cc0u: goto label_2b5cc0;
        case 0x2b5cc4u: goto label_2b5cc4;
        case 0x2b5cc8u: goto label_2b5cc8;
        case 0x2b5cccu: goto label_2b5ccc;
        case 0x2b5cd0u: goto label_2b5cd0;
        case 0x2b5cd4u: goto label_2b5cd4;
        case 0x2b5cd8u: goto label_2b5cd8;
        case 0x2b5cdcu: goto label_2b5cdc;
        case 0x2b5ce0u: goto label_2b5ce0;
        case 0x2b5ce4u: goto label_2b5ce4;
        case 0x2b5ce8u: goto label_2b5ce8;
        case 0x2b5cecu: goto label_2b5cec;
        case 0x2b5cf0u: goto label_2b5cf0;
        case 0x2b5cf4u: goto label_2b5cf4;
        case 0x2b5cf8u: goto label_2b5cf8;
        case 0x2b5cfcu: goto label_2b5cfc;
        case 0x2b5d00u: goto label_2b5d00;
        case 0x2b5d04u: goto label_2b5d04;
        case 0x2b5d08u: goto label_2b5d08;
        case 0x2b5d0cu: goto label_2b5d0c;
        case 0x2b5d10u: goto label_2b5d10;
        case 0x2b5d14u: goto label_2b5d14;
        case 0x2b5d18u: goto label_2b5d18;
        case 0x2b5d1cu: goto label_2b5d1c;
        case 0x2b5d20u: goto label_2b5d20;
        case 0x2b5d24u: goto label_2b5d24;
        case 0x2b5d28u: goto label_2b5d28;
        case 0x2b5d2cu: goto label_2b5d2c;
        case 0x2b5d30u: goto label_2b5d30;
        case 0x2b5d34u: goto label_2b5d34;
        case 0x2b5d38u: goto label_2b5d38;
        case 0x2b5d3cu: goto label_2b5d3c;
        case 0x2b5d40u: goto label_2b5d40;
        case 0x2b5d44u: goto label_2b5d44;
        case 0x2b5d48u: goto label_2b5d48;
        case 0x2b5d4cu: goto label_2b5d4c;
        case 0x2b5d50u: goto label_2b5d50;
        case 0x2b5d54u: goto label_2b5d54;
        case 0x2b5d58u: goto label_2b5d58;
        case 0x2b5d5cu: goto label_2b5d5c;
        case 0x2b5d60u: goto label_2b5d60;
        case 0x2b5d64u: goto label_2b5d64;
        case 0x2b5d68u: goto label_2b5d68;
        case 0x2b5d6cu: goto label_2b5d6c;
        case 0x2b5d70u: goto label_2b5d70;
        case 0x2b5d74u: goto label_2b5d74;
        case 0x2b5d78u: goto label_2b5d78;
        case 0x2b5d7cu: goto label_2b5d7c;
        case 0x2b5d80u: goto label_2b5d80;
        case 0x2b5d84u: goto label_2b5d84;
        case 0x2b5d88u: goto label_2b5d88;
        case 0x2b5d8cu: goto label_2b5d8c;
        case 0x2b5d90u: goto label_2b5d90;
        case 0x2b5d94u: goto label_2b5d94;
        case 0x2b5d98u: goto label_2b5d98;
        case 0x2b5d9cu: goto label_2b5d9c;
        case 0x2b5da0u: goto label_2b5da0;
        case 0x2b5da4u: goto label_2b5da4;
        case 0x2b5da8u: goto label_2b5da8;
        case 0x2b5dacu: goto label_2b5dac;
        case 0x2b5db0u: goto label_2b5db0;
        case 0x2b5db4u: goto label_2b5db4;
        case 0x2b5db8u: goto label_2b5db8;
        case 0x2b5dbcu: goto label_2b5dbc;
        case 0x2b5dc0u: goto label_2b5dc0;
        case 0x2b5dc4u: goto label_2b5dc4;
        case 0x2b5dc8u: goto label_2b5dc8;
        case 0x2b5dccu: goto label_2b5dcc;
        case 0x2b5dd0u: goto label_2b5dd0;
        case 0x2b5dd4u: goto label_2b5dd4;
        case 0x2b5dd8u: goto label_2b5dd8;
        case 0x2b5ddcu: goto label_2b5ddc;
        case 0x2b5de0u: goto label_2b5de0;
        case 0x2b5de4u: goto label_2b5de4;
        case 0x2b5de8u: goto label_2b5de8;
        case 0x2b5decu: goto label_2b5dec;
        case 0x2b5df0u: goto label_2b5df0;
        case 0x2b5df4u: goto label_2b5df4;
        case 0x2b5df8u: goto label_2b5df8;
        case 0x2b5dfcu: goto label_2b5dfc;
        case 0x2b5e00u: goto label_2b5e00;
        case 0x2b5e04u: goto label_2b5e04;
        case 0x2b5e08u: goto label_2b5e08;
        case 0x2b5e0cu: goto label_2b5e0c;
        case 0x2b5e10u: goto label_2b5e10;
        case 0x2b5e14u: goto label_2b5e14;
        case 0x2b5e18u: goto label_2b5e18;
        case 0x2b5e1cu: goto label_2b5e1c;
        case 0x2b5e20u: goto label_2b5e20;
        case 0x2b5e24u: goto label_2b5e24;
        case 0x2b5e28u: goto label_2b5e28;
        case 0x2b5e2cu: goto label_2b5e2c;
        case 0x2b5e30u: goto label_2b5e30;
        case 0x2b5e34u: goto label_2b5e34;
        case 0x2b5e38u: goto label_2b5e38;
        case 0x2b5e3cu: goto label_2b5e3c;
        case 0x2b5e40u: goto label_2b5e40;
        case 0x2b5e44u: goto label_2b5e44;
        case 0x2b5e48u: goto label_2b5e48;
        case 0x2b5e4cu: goto label_2b5e4c;
        case 0x2b5e50u: goto label_2b5e50;
        case 0x2b5e54u: goto label_2b5e54;
        case 0x2b5e58u: goto label_2b5e58;
        case 0x2b5e5cu: goto label_2b5e5c;
        case 0x2b5e60u: goto label_2b5e60;
        case 0x2b5e64u: goto label_2b5e64;
        case 0x2b5e68u: goto label_2b5e68;
        case 0x2b5e6cu: goto label_2b5e6c;
        case 0x2b5e70u: goto label_2b5e70;
        case 0x2b5e74u: goto label_2b5e74;
        case 0x2b5e78u: goto label_2b5e78;
        case 0x2b5e7cu: goto label_2b5e7c;
        case 0x2b5e80u: goto label_2b5e80;
        case 0x2b5e84u: goto label_2b5e84;
        case 0x2b5e88u: goto label_2b5e88;
        case 0x2b5e8cu: goto label_2b5e8c;
        case 0x2b5e90u: goto label_2b5e90;
        case 0x2b5e94u: goto label_2b5e94;
        case 0x2b5e98u: goto label_2b5e98;
        case 0x2b5e9cu: goto label_2b5e9c;
        case 0x2b5ea0u: goto label_2b5ea0;
        case 0x2b5ea4u: goto label_2b5ea4;
        case 0x2b5ea8u: goto label_2b5ea8;
        case 0x2b5eacu: goto label_2b5eac;
        case 0x2b5eb0u: goto label_2b5eb0;
        case 0x2b5eb4u: goto label_2b5eb4;
        case 0x2b5eb8u: goto label_2b5eb8;
        case 0x2b5ebcu: goto label_2b5ebc;
        case 0x2b5ec0u: goto label_2b5ec0;
        case 0x2b5ec4u: goto label_2b5ec4;
        case 0x2b5ec8u: goto label_2b5ec8;
        case 0x2b5eccu: goto label_2b5ecc;
        case 0x2b5ed0u: goto label_2b5ed0;
        case 0x2b5ed4u: goto label_2b5ed4;
        case 0x2b5ed8u: goto label_2b5ed8;
        case 0x2b5edcu: goto label_2b5edc;
        case 0x2b5ee0u: goto label_2b5ee0;
        case 0x2b5ee4u: goto label_2b5ee4;
        case 0x2b5ee8u: goto label_2b5ee8;
        case 0x2b5eecu: goto label_2b5eec;
        case 0x2b5ef0u: goto label_2b5ef0;
        case 0x2b5ef4u: goto label_2b5ef4;
        case 0x2b5ef8u: goto label_2b5ef8;
        case 0x2b5efcu: goto label_2b5efc;
        case 0x2b5f00u: goto label_2b5f00;
        case 0x2b5f04u: goto label_2b5f04;
        case 0x2b5f08u: goto label_2b5f08;
        case 0x2b5f0cu: goto label_2b5f0c;
        case 0x2b5f10u: goto label_2b5f10;
        case 0x2b5f14u: goto label_2b5f14;
        case 0x2b5f18u: goto label_2b5f18;
        case 0x2b5f1cu: goto label_2b5f1c;
        case 0x2b5f20u: goto label_2b5f20;
        case 0x2b5f24u: goto label_2b5f24;
        case 0x2b5f28u: goto label_2b5f28;
        case 0x2b5f2cu: goto label_2b5f2c;
        case 0x2b5f30u: goto label_2b5f30;
        case 0x2b5f34u: goto label_2b5f34;
        case 0x2b5f38u: goto label_2b5f38;
        case 0x2b5f3cu: goto label_2b5f3c;
        case 0x2b5f40u: goto label_2b5f40;
        case 0x2b5f44u: goto label_2b5f44;
        case 0x2b5f48u: goto label_2b5f48;
        case 0x2b5f4cu: goto label_2b5f4c;
        case 0x2b5f50u: goto label_2b5f50;
        case 0x2b5f54u: goto label_2b5f54;
        case 0x2b5f58u: goto label_2b5f58;
        case 0x2b5f5cu: goto label_2b5f5c;
        case 0x2b5f60u: goto label_2b5f60;
        case 0x2b5f64u: goto label_2b5f64;
        case 0x2b5f68u: goto label_2b5f68;
        case 0x2b5f6cu: goto label_2b5f6c;
        case 0x2b5f70u: goto label_2b5f70;
        case 0x2b5f74u: goto label_2b5f74;
        case 0x2b5f78u: goto label_2b5f78;
        case 0x2b5f7cu: goto label_2b5f7c;
        case 0x2b5f80u: goto label_2b5f80;
        case 0x2b5f84u: goto label_2b5f84;
        case 0x2b5f88u: goto label_2b5f88;
        case 0x2b5f8cu: goto label_2b5f8c;
        case 0x2b5f90u: goto label_2b5f90;
        case 0x2b5f94u: goto label_2b5f94;
        case 0x2b5f98u: goto label_2b5f98;
        case 0x2b5f9cu: goto label_2b5f9c;
        case 0x2b5fa0u: goto label_2b5fa0;
        case 0x2b5fa4u: goto label_2b5fa4;
        case 0x2b5fa8u: goto label_2b5fa8;
        case 0x2b5facu: goto label_2b5fac;
        case 0x2b5fb0u: goto label_2b5fb0;
        case 0x2b5fb4u: goto label_2b5fb4;
        case 0x2b5fb8u: goto label_2b5fb8;
        case 0x2b5fbcu: goto label_2b5fbc;
        case 0x2b5fc0u: goto label_2b5fc0;
        case 0x2b5fc4u: goto label_2b5fc4;
        case 0x2b5fc8u: goto label_2b5fc8;
        case 0x2b5fccu: goto label_2b5fcc;
        case 0x2b5fd0u: goto label_2b5fd0;
        case 0x2b5fd4u: goto label_2b5fd4;
        case 0x2b5fd8u: goto label_2b5fd8;
        case 0x2b5fdcu: goto label_2b5fdc;
        case 0x2b5fe0u: goto label_2b5fe0;
        case 0x2b5fe4u: goto label_2b5fe4;
        case 0x2b5fe8u: goto label_2b5fe8;
        case 0x2b5fecu: goto label_2b5fec;
        case 0x2b5ff0u: goto label_2b5ff0;
        case 0x2b5ff4u: goto label_2b5ff4;
        case 0x2b5ff8u: goto label_2b5ff8;
        case 0x2b5ffcu: goto label_2b5ffc;
        case 0x2b6000u: goto label_2b6000;
        case 0x2b6004u: goto label_2b6004;
        case 0x2b6008u: goto label_2b6008;
        case 0x2b600cu: goto label_2b600c;
        case 0x2b6010u: goto label_2b6010;
        case 0x2b6014u: goto label_2b6014;
        case 0x2b6018u: goto label_2b6018;
        case 0x2b601cu: goto label_2b601c;
        case 0x2b6020u: goto label_2b6020;
        case 0x2b6024u: goto label_2b6024;
        case 0x2b6028u: goto label_2b6028;
        case 0x2b602cu: goto label_2b602c;
        case 0x2b6030u: goto label_2b6030;
        case 0x2b6034u: goto label_2b6034;
        case 0x2b6038u: goto label_2b6038;
        case 0x2b603cu: goto label_2b603c;
        case 0x2b6040u: goto label_2b6040;
        case 0x2b6044u: goto label_2b6044;
        case 0x2b6048u: goto label_2b6048;
        case 0x2b604cu: goto label_2b604c;
        case 0x2b6050u: goto label_2b6050;
        case 0x2b6054u: goto label_2b6054;
        case 0x2b6058u: goto label_2b6058;
        case 0x2b605cu: goto label_2b605c;
        case 0x2b6060u: goto label_2b6060;
        case 0x2b6064u: goto label_2b6064;
        case 0x2b6068u: goto label_2b6068;
        case 0x2b606cu: goto label_2b606c;
        case 0x2b6070u: goto label_2b6070;
        case 0x2b6074u: goto label_2b6074;
        case 0x2b6078u: goto label_2b6078;
        case 0x2b607cu: goto label_2b607c;
        case 0x2b6080u: goto label_2b6080;
        case 0x2b6084u: goto label_2b6084;
        case 0x2b6088u: goto label_2b6088;
        case 0x2b608cu: goto label_2b608c;
        case 0x2b6090u: goto label_2b6090;
        case 0x2b6094u: goto label_2b6094;
        case 0x2b6098u: goto label_2b6098;
        case 0x2b609cu: goto label_2b609c;
        case 0x2b60a0u: goto label_2b60a0;
        case 0x2b60a4u: goto label_2b60a4;
        case 0x2b60a8u: goto label_2b60a8;
        case 0x2b60acu: goto label_2b60ac;
        case 0x2b60b0u: goto label_2b60b0;
        case 0x2b60b4u: goto label_2b60b4;
        case 0x2b60b8u: goto label_2b60b8;
        case 0x2b60bcu: goto label_2b60bc;
        case 0x2b60c0u: goto label_2b60c0;
        case 0x2b60c4u: goto label_2b60c4;
        case 0x2b60c8u: goto label_2b60c8;
        case 0x2b60ccu: goto label_2b60cc;
        case 0x2b60d0u: goto label_2b60d0;
        case 0x2b60d4u: goto label_2b60d4;
        case 0x2b60d8u: goto label_2b60d8;
        case 0x2b60dcu: goto label_2b60dc;
        case 0x2b60e0u: goto label_2b60e0;
        case 0x2b60e4u: goto label_2b60e4;
        case 0x2b60e8u: goto label_2b60e8;
        case 0x2b60ecu: goto label_2b60ec;
        case 0x2b60f0u: goto label_2b60f0;
        case 0x2b60f4u: goto label_2b60f4;
        case 0x2b60f8u: goto label_2b60f8;
        case 0x2b60fcu: goto label_2b60fc;
        case 0x2b6100u: goto label_2b6100;
        case 0x2b6104u: goto label_2b6104;
        case 0x2b6108u: goto label_2b6108;
        case 0x2b610cu: goto label_2b610c;
        case 0x2b6110u: goto label_2b6110;
        case 0x2b6114u: goto label_2b6114;
        case 0x2b6118u: goto label_2b6118;
        case 0x2b611cu: goto label_2b611c;
        case 0x2b6120u: goto label_2b6120;
        case 0x2b6124u: goto label_2b6124;
        case 0x2b6128u: goto label_2b6128;
        case 0x2b612cu: goto label_2b612c;
        case 0x2b6130u: goto label_2b6130;
        case 0x2b6134u: goto label_2b6134;
        case 0x2b6138u: goto label_2b6138;
        case 0x2b613cu: goto label_2b613c;
        case 0x2b6140u: goto label_2b6140;
        case 0x2b6144u: goto label_2b6144;
        case 0x2b6148u: goto label_2b6148;
        case 0x2b614cu: goto label_2b614c;
        case 0x2b6150u: goto label_2b6150;
        case 0x2b6154u: goto label_2b6154;
        case 0x2b6158u: goto label_2b6158;
        case 0x2b615cu: goto label_2b615c;
        case 0x2b6160u: goto label_2b6160;
        case 0x2b6164u: goto label_2b6164;
        case 0x2b6168u: goto label_2b6168;
        case 0x2b616cu: goto label_2b616c;
        case 0x2b6170u: goto label_2b6170;
        case 0x2b6174u: goto label_2b6174;
        case 0x2b6178u: goto label_2b6178;
        case 0x2b617cu: goto label_2b617c;
        case 0x2b6180u: goto label_2b6180;
        case 0x2b6184u: goto label_2b6184;
        case 0x2b6188u: goto label_2b6188;
        case 0x2b618cu: goto label_2b618c;
        case 0x2b6190u: goto label_2b6190;
        case 0x2b6194u: goto label_2b6194;
        case 0x2b6198u: goto label_2b6198;
        case 0x2b619cu: goto label_2b619c;
        case 0x2b61a0u: goto label_2b61a0;
        case 0x2b61a4u: goto label_2b61a4;
        case 0x2b61a8u: goto label_2b61a8;
        case 0x2b61acu: goto label_2b61ac;
        case 0x2b61b0u: goto label_2b61b0;
        case 0x2b61b4u: goto label_2b61b4;
        case 0x2b61b8u: goto label_2b61b8;
        case 0x2b61bcu: goto label_2b61bc;
        case 0x2b61c0u: goto label_2b61c0;
        case 0x2b61c4u: goto label_2b61c4;
        case 0x2b61c8u: goto label_2b61c8;
        case 0x2b61ccu: goto label_2b61cc;
        case 0x2b61d0u: goto label_2b61d0;
        case 0x2b61d4u: goto label_2b61d4;
        case 0x2b61d8u: goto label_2b61d8;
        case 0x2b61dcu: goto label_2b61dc;
        case 0x2b61e0u: goto label_2b61e0;
        case 0x2b61e4u: goto label_2b61e4;
        case 0x2b61e8u: goto label_2b61e8;
        case 0x2b61ecu: goto label_2b61ec;
        case 0x2b61f0u: goto label_2b61f0;
        case 0x2b61f4u: goto label_2b61f4;
        case 0x2b61f8u: goto label_2b61f8;
        case 0x2b61fcu: goto label_2b61fc;
        case 0x2b6200u: goto label_2b6200;
        case 0x2b6204u: goto label_2b6204;
        case 0x2b6208u: goto label_2b6208;
        case 0x2b620cu: goto label_2b620c;
        case 0x2b6210u: goto label_2b6210;
        case 0x2b6214u: goto label_2b6214;
        case 0x2b6218u: goto label_2b6218;
        case 0x2b621cu: goto label_2b621c;
        case 0x2b6220u: goto label_2b6220;
        case 0x2b6224u: goto label_2b6224;
        case 0x2b6228u: goto label_2b6228;
        case 0x2b622cu: goto label_2b622c;
        case 0x2b6230u: goto label_2b6230;
        case 0x2b6234u: goto label_2b6234;
        case 0x2b6238u: goto label_2b6238;
        case 0x2b623cu: goto label_2b623c;
        case 0x2b6240u: goto label_2b6240;
        case 0x2b6244u: goto label_2b6244;
        case 0x2b6248u: goto label_2b6248;
        case 0x2b624cu: goto label_2b624c;
        case 0x2b6250u: goto label_2b6250;
        case 0x2b6254u: goto label_2b6254;
        case 0x2b6258u: goto label_2b6258;
        case 0x2b625cu: goto label_2b625c;
        case 0x2b6260u: goto label_2b6260;
        case 0x2b6264u: goto label_2b6264;
        case 0x2b6268u: goto label_2b6268;
        case 0x2b626cu: goto label_2b626c;
        case 0x2b6270u: goto label_2b6270;
        case 0x2b6274u: goto label_2b6274;
        case 0x2b6278u: goto label_2b6278;
        case 0x2b627cu: goto label_2b627c;
        case 0x2b6280u: goto label_2b6280;
        case 0x2b6284u: goto label_2b6284;
        case 0x2b6288u: goto label_2b6288;
        case 0x2b628cu: goto label_2b628c;
        case 0x2b6290u: goto label_2b6290;
        case 0x2b6294u: goto label_2b6294;
        case 0x2b6298u: goto label_2b6298;
        case 0x2b629cu: goto label_2b629c;
        case 0x2b62a0u: goto label_2b62a0;
        case 0x2b62a4u: goto label_2b62a4;
        case 0x2b62a8u: goto label_2b62a8;
        case 0x2b62acu: goto label_2b62ac;
        case 0x2b62b0u: goto label_2b62b0;
        case 0x2b62b4u: goto label_2b62b4;
        case 0x2b62b8u: goto label_2b62b8;
        case 0x2b62bcu: goto label_2b62bc;
        case 0x2b62c0u: goto label_2b62c0;
        case 0x2b62c4u: goto label_2b62c4;
        case 0x2b62c8u: goto label_2b62c8;
        case 0x2b62ccu: goto label_2b62cc;
        case 0x2b62d0u: goto label_2b62d0;
        case 0x2b62d4u: goto label_2b62d4;
        case 0x2b62d8u: goto label_2b62d8;
        case 0x2b62dcu: goto label_2b62dc;
        case 0x2b62e0u: goto label_2b62e0;
        case 0x2b62e4u: goto label_2b62e4;
        case 0x2b62e8u: goto label_2b62e8;
        case 0x2b62ecu: goto label_2b62ec;
        case 0x2b62f0u: goto label_2b62f0;
        case 0x2b62f4u: goto label_2b62f4;
        case 0x2b62f8u: goto label_2b62f8;
        case 0x2b62fcu: goto label_2b62fc;
        case 0x2b6300u: goto label_2b6300;
        case 0x2b6304u: goto label_2b6304;
        case 0x2b6308u: goto label_2b6308;
        case 0x2b630cu: goto label_2b630c;
        case 0x2b6310u: goto label_2b6310;
        case 0x2b6314u: goto label_2b6314;
        case 0x2b6318u: goto label_2b6318;
        case 0x2b631cu: goto label_2b631c;
        case 0x2b6320u: goto label_2b6320;
        case 0x2b6324u: goto label_2b6324;
        case 0x2b6328u: goto label_2b6328;
        case 0x2b632cu: goto label_2b632c;
        case 0x2b6330u: goto label_2b6330;
        case 0x2b6334u: goto label_2b6334;
        case 0x2b6338u: goto label_2b6338;
        case 0x2b633cu: goto label_2b633c;
        case 0x2b6340u: goto label_2b6340;
        case 0x2b6344u: goto label_2b6344;
        case 0x2b6348u: goto label_2b6348;
        case 0x2b634cu: goto label_2b634c;
        case 0x2b6350u: goto label_2b6350;
        case 0x2b6354u: goto label_2b6354;
        case 0x2b6358u: goto label_2b6358;
        case 0x2b635cu: goto label_2b635c;
        default: return;
    }

label_2b5b90:
    // 0x2b5b90: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b5b90u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b5b94:
    // 0x2b5b94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5b98:
    // 0x2b5b98: 0x88e080a  j           func_2382028
label_2b5b9c:
    if (ctx->pc == 0x2B5B9Cu) {
        ctx->pc = 0x2B5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B98u;
        // 0x2b5b9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5BA0u;
        goto label_2b5ba0;
    }
    ctx->pc = 0x2B5B98u;
    ctx->pc = 0x2B5B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B98u;
    // 0x2b5b9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382028u, 0x2B5B98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B5BA0u;
label_2b5ba0:
    // 0x2b5ba0: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2b5ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2b5ba4:
    // 0x2b5ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ba8:
    // 0x2b5ba8: 0x52010040  beql        $s0, $at, . + 4 + (0x40 << 2)
label_2b5bac:
    if (ctx->pc == 0x2B5BACu) {
        ctx->pc = 0x2B5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BA8u;
        // 0x2b5bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5BB0u;
        goto label_2b5bb0;
    }
    ctx->pc = 0x2B5BA8u;
    {
        const bool branch_taken_0x2b5ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b5ba8) {
            ctx->pc = 0x2B5BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5BA8u;
            // 0x2b5bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5CACu;
            goto label_2b5cac;
        }
    }
    ctx->pc = 0x2B5BB0u;
label_2b5bb0:
    // 0x2b5bb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5bb4:
    // 0x2b5bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5bb8:
    // 0x2b5bb8: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2b5bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2b5bbc:
    // 0x2b5bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5bc0:
    // 0x2b5bc0: 0x5201003d  beql        $s0, $at, . + 4 + (0x3D << 2)
label_2b5bc4:
    if (ctx->pc == 0x2B5BC4u) {
        ctx->pc = 0x2B5BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BC0u;
        // 0x2b5bc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5BC8u;
        goto label_2b5bc8;
    }
    ctx->pc = 0x2B5BC0u;
    {
        const bool branch_taken_0x2b5bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b5bc0) {
            ctx->pc = 0x2B5BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5BC0u;
            // 0x2b5bc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5CB8u;
            goto label_2b5cb8;
        }
    }
    ctx->pc = 0x2B5BC8u;
label_2b5bc8:
    // 0x2b5bc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5bc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5bcc:
    // 0x2b5bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5bd0:
    // 0x2b5bd0: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2b5bd0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2b5bd4:
    // 0x2b5bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5bd8:
    // 0x2b5bd8: 0x5201003a  beql        $s0, $at, . + 4 + (0x3A << 2)
label_2b5bdc:
    if (ctx->pc == 0x2B5BDCu) {
        ctx->pc = 0x2B5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BD8u;
        // 0x2b5bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5BE0u;
        goto label_2b5be0;
    }
    ctx->pc = 0x2B5BD8u;
    {
        const bool branch_taken_0x2b5bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b5bd8) {
            ctx->pc = 0x2B5BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5BD8u;
            // 0x2b5bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5CC4u;
            goto label_2b5cc4;
        }
    }
    ctx->pc = 0x2B5BE0u;
label_2b5be0:
    // 0x2b5be0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5be4:
    // 0x2b5be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5be8:
    // 0x2b5be8: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2b5be8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2b5bec:
    // 0x2b5bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5bf0:
    // 0x2b5bf0: 0x52010037  beql        $s0, $at, . + 4 + (0x37 << 2)
label_2b5bf4:
    if (ctx->pc == 0x2B5BF4u) {
        ctx->pc = 0x2B5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BF0u;
        // 0x2b5bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5BF8u;
        goto label_2b5bf8;
    }
    ctx->pc = 0x2B5BF0u;
    {
        const bool branch_taken_0x2b5bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b5bf0) {
            ctx->pc = 0x2B5BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5BF0u;
            // 0x2b5bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5CD0u;
            goto label_2b5cd0;
        }
    }
    ctx->pc = 0x2B5BF8u;
label_2b5bf8:
    // 0x2b5bf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5bf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5bfc:
    // 0x2b5bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c00:
    // 0x2b5c00: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2b5c04:
    // 0x2b5c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c08:
    // 0x2b5c08: 0x52010034  beql        $s0, $at, . + 4 + (0x34 << 2)
label_2b5c0c:
    if (ctx->pc == 0x2B5C0Cu) {
        ctx->pc = 0x2B5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C08u;
        // 0x2b5c0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C10u;
        goto label_2b5c10;
    }
    ctx->pc = 0x2B5C08u;
    {
        const bool branch_taken_0x2b5c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b5c08) {
            ctx->pc = 0x2B5C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5C08u;
            // 0x2b5c0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5CDCu;
            goto label_2b5cdc;
        }
    }
    ctx->pc = 0x2B5C10u;
label_2b5c10:
    // 0x2b5c10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5c10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5c14:
    // 0x2b5c14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c18:
    // 0x2b5c18: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2b5c18u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2b5c1c:
    // 0x2b5c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c20:
    // 0x2b5c20: 0x52010031  beql        $s0, $at, . + 4 + (0x31 << 2)
label_2b5c24:
    if (ctx->pc == 0x2B5C24u) {
        ctx->pc = 0x2B5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C20u;
        // 0x2b5c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C28u;
        goto label_2b5c28;
    }
    ctx->pc = 0x2B5C20u;
    {
        const bool branch_taken_0x2b5c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b5c20) {
            ctx->pc = 0x2B5C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5C20u;
            // 0x2b5c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5CE8u;
            goto label_2b5ce8;
        }
    }
    ctx->pc = 0x2B5C28u;
label_2b5c28:
    // 0x2b5c28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5c28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5c2c:
    // 0x2b5c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c30:
    // 0x2b5c30: 0x120f7048  beq         $s0, $t7, . + 4 + (0x7048 << 2)
label_2b5c34:
    if (ctx->pc == 0x2B5C34u) {
        ctx->pc = 0x2B5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C30u;
        // 0x2b5c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C38u;
        goto label_2b5c38;
    }
    ctx->pc = 0x2B5C30u;
    {
        const bool branch_taken_0x2b5c30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B5C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C30u;
        // 0x2b5c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c30) {
            ctx->pc = 0x2D1D54u;
            return;
        }
    }
    ctx->pc = 0x2B5C38u;
label_2b5c38:
    // 0x2b5c38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5c38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5c3c:
    // 0x2b5c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c40:
    // 0x2b5c40: 0x5a007826  blezl       $s0, . + 4 + (0x7826 << 2)
label_2b5c44:
    if (ctx->pc == 0x2B5C44u) {
        ctx->pc = 0x2B5C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C40u;
        // 0x2b5c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C48u;
        goto label_2b5c48;
    }
    ctx->pc = 0x2B5C40u;
    {
        const bool branch_taken_0x2b5c40 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b5c40) {
            ctx->pc = 0x2B5C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5C40u;
            // 0x2b5c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3CDCu;
            return;
        }
    }
    ctx->pc = 0x2B5C48u;
label_2b5c48:
    // 0x2b5c48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5c48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5c4c:
    // 0x2b5c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c50:
    // 0x2b5c50: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b5c54:
    if (ctx->pc == 0x2B5C54u) {
        ctx->pc = 0x2B5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C50u;
        // 0x2b5c54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5C58u;
        goto label_2b5c58;
    }
    ctx->pc = 0x2B5C50u;
    {
        const bool branch_taken_0x2b5c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C50u;
        // 0x2b5c54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c50) {
            ctx->pc = 0x2D1C9Cu;
            return;
        }
    }
    ctx->pc = 0x2B5C58u;
label_2b5c58:
    // 0x2b5c58: 0x1d61ff7  .word       0x01D61FF7                   # INVALID     $t6, $s6, 0x1FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c58u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2B5C58 raw=0x01D61FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5c5c:
    // 0x2b5c5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c60:
    // 0x2b5c60: 0x1d71ffa  .word       0x01D71FFA                   # dsrl        $v1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) >> 31);
label_2b5c64:
    // 0x2b5c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c68:
    // 0x2b5c68: 0x1d81ffd  .word       0x01D81FFD                   # INVALID     $t6, $t8, 0x1FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B5C68 raw=0x01D81FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5c6c:
    // 0x2b5c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c70:
    // 0x2b5c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5c74:
    // 0x2b5c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5c78:
    // 0x2b5c78: 0x1f937f8  .word       0x01F937F8                   # dsll        $a2, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 25) << 31);
label_2b5c7c:
    // 0x2b5c7c: 0x960582  .word       0x00960582                   # srl         $zero, $s6, 22 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c7cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 22), 22));
label_2b5c80:
    // 0x2b5c80: 0x1fb37fb  .word       0x01FB37FB                   # dsra        $a2, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c80u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 27) >> 31);
label_2b5c84:
    // 0x2b5c84: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c84u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b5c88:
    // 0x2b5c88: 0x1fc37fe  .word       0x01FC37FE                   # dsrl32      $a2, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 28) >> (32 + 31));
label_2b5c8c:
    // 0x2b5c8c: 0x9705c2  .word       0x009705C2                   # srl         $zero, $s7, 23 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c8cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 23), 23));
label_2b5c90:
    // 0x2b5c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5c94:
    // 0x2b5c94: 0x4005c3  .word       0x004005C3                   # sra         $zero, $zero, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c94u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 23));
label_2b5c98:
    // 0x2b5c98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5c98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5c9c:
    // 0x2b5c9c: 0x980602  .word       0x00980602                   # srl         $zero, $t8, 24 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5c9cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 24), 24));
label_2b5ca0:
    // 0x2b5ca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5ca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5ca4:
    // 0x2b5ca4: 0x400603  .word       0x00400603                   # sra         $zero, $zero, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5ca4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 24));
label_2b5ca8:
    // 0x2b5ca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5ca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5cac:
    // 0x2b5cac: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5cacu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2b5cb0:
    // 0x2b5cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5cb4:
    // 0x2b5cb4: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5cb4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2b5cb8:
    // 0x2b5cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5cbc:
    // 0x2b5cbc: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5cbcu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2b5cc0:
    // 0x2b5cc0: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2b5cc4:
    // 0x2b5cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5cc8:
    // 0x2b5cc8: 0x3ef8804  sllv        $s1, $t7, $ra
    ctx->pc = 0x2b5cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b5ccc:
    // 0x2b5ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5cd0:
    // 0x2b5cd0: 0x3ef9008  .word       0x03EF9008                   # jr          $ra # 000F9000 <InstrIdType: CPU_SPECIAL>
label_2b5cd4:
    if (ctx->pc == 0x2B5CD4u) {
        ctx->pc = 0x2B5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CD0u;
        // 0x2b5cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CD8u;
        goto label_2b5cd8;
    }
    ctx->pc = 0x2B5CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CD0u;
        // 0x2b5cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5CD8u;
label_2b5cd8:
    // 0x2b5cd8: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5cd8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B5CD8 raw=0x03EFC801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5cdc:
    // 0x2b5cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ce0:
    // 0x2b5ce0: 0x3efd805  .word       0x03EFD805                   # INVALID     $ra, $t7, -0x27FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5ce0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B5CE0 raw=0x03EFD805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5ce4:
    // 0x2b5ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ce8:
    // 0x2b5ce8: 0x3efe009  .word       0x03EFE009                   # jalr        $gp, $ra # 000F0000 <InstrIdType: CPU_SPECIAL>
label_2b5cec:
    if (ctx->pc == 0x2B5CECu) {
        ctx->pc = 0x2B5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CE8u;
        // 0x2b5cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5CF0u;
        goto label_2b5cf0;
    }
    ctx->pc = 0x2B5CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 28, 0x2B5CF0u);
        ctx->pc = 0x2B5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CE8u;
        // 0x2b5cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5CE8u, 0x2B5CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5CF0u;
label_2b5cf0:
    // 0x2b5cf0: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5cf0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2b5cf4:
    // 0x2b5cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5cf8:
    // 0x2b5cf8: 0x3efb806  srlv        $s7, $t7, $ra
    ctx->pc = 0x2b5cf8u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b5cfc:
    // 0x2b5cfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5cfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d00:
    // 0x2b5d00: 0x3efc00a  movz        $t8, $ra, $t7
    ctx->pc = 0x2b5d00u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2b5d04:
    // 0x2b5d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d08:
    // 0x2b5d08: 0x1991ff8  .word       0x01991FF8                   # dsll        $v1, $t9, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) << 31);
label_2b5d0c:
    // 0x2b5d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d10:
    // 0x2b5d10: 0x19b1ffb  .word       0x019B1FFB                   # dsra        $v1, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5d10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 27) >> 31);
label_2b5d14:
    // 0x2b5d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d18:
    // 0x2b5d18: 0x19c1ffe  .word       0x019C1FFE                   # dsrl32      $v1, $gp, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 28) >> (32 + 31));
label_2b5d1c:
    // 0x2b5d1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d20:
    // 0x2b5d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5d24:
    // 0x2b5d24: 0x400643  .word       0x00400643                   # sra         $zero, $zero, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5d24u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 25));
label_2b5d28:
    // 0x2b5d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5d2c:
    // 0x2b5d2c: 0x4006c3  .word       0x004006C3                   # sra         $zero, $zero, 27 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5d2cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 27));
label_2b5d30:
    // 0x2b5d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5d34:
    // 0x2b5d34: 0x400703  .word       0x00400703                   # sra         $zero, $zero, 28 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5d34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b5d38:
    // 0x2b5d38: 0x3efc803  .word       0x03EFC803                   # sra         $t9, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5d38u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 15), 0));
label_2b5d3c:
    // 0x2b5d3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d40:
    // 0x2b5d40: 0x3efd807  srav        $k1, $t7, $ra
    ctx->pc = 0x2b5d40u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b5d44:
    // 0x2b5d44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d48:
    // 0x2b5d48: 0x3efe00b  movn        $gp, $ra, $t7
    ctx->pc = 0x2b5d48u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 31));
label_2b5d4c:
    // 0x2b5d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d50:
    // 0x2b5d50: 0x100e700c  beq         $zero, $t6, . + 4 + (0x700C << 2)
label_2b5d54:
    if (ctx->pc == 0x2B5D54u) {
        ctx->pc = 0x2B5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D50u;
        // 0x2b5d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D58u;
        goto label_2b5d58;
    }
    ctx->pc = 0x2B5D50u;
    {
        const bool branch_taken_0x2b5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D50u;
        // 0x2b5d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d50) {
            ctx->pc = 0x2D1D84u;
            return;
        }
    }
    ctx->pc = 0x2B5D58u;
label_2b5d58:
    // 0x2b5d58: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b5d58u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b5d5c:
    // 0x2b5d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d60:
    // 0x2b5d60: 0xa8e080a  j           func_A382028
label_2b5d64:
    if (ctx->pc == 0x2B5D64u) {
        ctx->pc = 0x2B5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D60u;
        // 0x2b5d64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D68u;
        goto label_2b5d68;
    }
    ctx->pc = 0x2B5D60u;
    ctx->pc = 0x2B5D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D60u;
    // 0x2b5d64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382028u, 0x2B5D60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B5D68u;
label_2b5d68:
    // 0x2b5d68: 0x40000008  .word       0x40000008                   # mfc0        $zero, Index # 00000008 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b5d68u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b5d6c:
    // 0x2b5d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d70:
    // 0x2b5d70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5d70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5d74:
    // 0x2b5d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d78:
    // 0x2b5d78: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b5d78u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b5d7c:
    // 0x2b5d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d80:
    // 0x2b5d80: 0x420f000b  .word       0x420F000B                   # INVALID     $s0, $t7, 0xB # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b5d80u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0xB at 0x2B5D80 raw=0x420F000B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5d84:
    // 0x2b5d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d88:
    // 0x2b5d88: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2b5d8c:
    if (ctx->pc == 0x2B5D8Cu) {
        ctx->pc = 0x2B5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D88u;
        // 0x2b5d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D90u;
        goto label_2b5d90;
    }
    ctx->pc = 0x2B5D88u;
    {
        const bool branch_taken_0x2b5d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D88u;
        // 0x2b5d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d88) {
            ctx->pc = 0x2B60F8u;
            goto label_2b60f8;
        }
    }
    ctx->pc = 0x2B5D90u;
label_2b5d90:
    // 0x2b5d90: 0x420f0036  .word       0x420F0036                   # INVALID     $s0, $t7, 0x36 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b5d90u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x36 at 0x2B5D90 raw=0x420F0036"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5d94:
    // 0x2b5d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5d98:
    // 0x2b5d98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5d98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5d9c:
    // 0x2b5d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5da0:
    // 0x2b5da0: 0x420f001d  .word       0x420F001D                   # INVALID     $s0, $t7, 0x1D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b5da0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x2B5DA0 raw=0x420F001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5da4:
    // 0x2b5da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5da8:
    // 0x2b5da8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5da8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5dac:
    // 0x2b5dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5db0:
    // 0x2b5db0: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b5db4:
    if (ctx->pc == 0x2B5DB4u) {
        ctx->pc = 0x2B5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DB0u;
        // 0x2b5db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DB8u;
        goto label_2b5db8;
    }
    ctx->pc = 0x2B5DB0u;
    {
        const bool branch_taken_0x2b5db0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DB0u;
        // 0x2b5db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5db0) {
            ctx->pc = 0x2BBDB0u;
            { ctx->pc = 0x2bbdb0; return; }
        }
    }
    ctx->pc = 0x2B5DB8u;
label_2b5db8:
    // 0x2b5db8: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b5db8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b5dbc:
    // 0x2b5dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5dc0:
    // 0x2b5dc0: 0xa212fff  j           func_884BFFC
label_2b5dc4:
    if (ctx->pc == 0x2B5DC4u) {
        ctx->pc = 0x2B5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DC0u;
        // 0x2b5dc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DC8u;
        goto label_2b5dc8;
    }
    ctx->pc = 0x2B5DC0u;
    ctx->pc = 0x2B5DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DC0u;
    // 0x2b5dc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884BFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884BFFCu, 0x2B5DC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B5DC8u;
label_2b5dc8:
    // 0x2b5dc8: 0xa2137ff  j           func_884DFFC
label_2b5dcc:
    if (ctx->pc == 0x2B5DCCu) {
        ctx->pc = 0x2B5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DC8u;
        // 0x2b5dcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DD0u;
        goto label_2b5dd0;
    }
    ctx->pc = 0x2B5DC8u;
    ctx->pc = 0x2B5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DC8u;
    // 0x2b5dcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884DFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884DFFCu, 0x2B5DC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B5DD0u;
label_2b5dd0:
    // 0x2b5dd0: 0x40000797  .word       0x40000797                   # mfc0        $zero, Index # 00000797 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b5dd0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b5dd4:
    // 0x2b5dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5dd8:
    // 0x2b5dd8: 0x0  nop
    ctx->pc = 0x2b5dd8u;
    // NOP
label_2b5ddc:
    // 0x2b5ddc: 0x4a000100  vaddx       $vf4, $vf0, $vf0x
    ctx->pc = 0x2b5ddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2b5de0:
    // 0x2b5de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5de4:
    // 0x2b5de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5de8:
    // 0x2b5de8: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2b5de8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2b5dec:
    // 0x2b5dec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5decu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5df0:
    // 0x2b5df0: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2b5df0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2b5df4:
    // 0x2b5df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5df8:
    // 0x2b5df8: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2b5df8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2b5dfc:
    // 0x2b5dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e00:
    // 0x2b5e00: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2b5e00u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2b5e04:
    // 0x2b5e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e08:
    // 0x2b5e08: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2b5e08u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2b5e0c:
    // 0x2b5e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e10:
    // 0x2b5e10: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b5e14:
    if (ctx->pc == 0x2B5E14u) {
        ctx->pc = 0x2B5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E10u;
        // 0x2b5e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E18u;
        goto label_2b5e18;
    }
    ctx->pc = 0x2B5E10u;
    {
        const bool branch_taken_0x2b5e10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E10u;
        // 0x2b5e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e10) {
            ctx->pc = 0x2D1E18u;
            return;
        }
    }
    ctx->pc = 0x2B5E18u;
label_2b5e18:
    // 0x2b5e18: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2b5e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b5e1c:
    // 0x2b5e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e20:
    // 0x2b5e20: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2b5e20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b5e24:
    // 0x2b5e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e28:
    // 0x2b5e28: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2b5e28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b5e2c:
    // 0x2b5e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e30:
    // 0x2b5e30: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2b5e30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b5e34:
    // 0x2b5e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e38:
    // 0x2b5e38: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b5e3c:
    if (ctx->pc == 0x2B5E3Cu) {
        ctx->pc = 0x2B5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E38u;
        // 0x2b5e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E40u;
        goto label_2b5e40;
    }
    ctx->pc = 0x2B5E38u;
    {
        const bool branch_taken_0x2b5e38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E38u;
        // 0x2b5e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e38) {
            ctx->pc = 0x2D1E40u;
            return;
        }
    }
    ctx->pc = 0x2B5E40u;
label_2b5e40:
    // 0x2b5e40: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2b5e40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b5e44:
    // 0x2b5e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e48:
    // 0x2b5e48: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2b5e48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b5e4c:
    // 0x2b5e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e50:
    // 0x2b5e50: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2b5e50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b5e54:
    // 0x2b5e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e58:
    // 0x2b5e58: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2b5e58u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b5e5c:
    // 0x2b5e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e60:
    // 0x2b5e60: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b5e64:
    if (ctx->pc == 0x2B5E64u) {
        ctx->pc = 0x2B5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E60u;
        // 0x2b5e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E68u;
        goto label_2b5e68;
    }
    ctx->pc = 0x2B5E60u;
    {
        const bool branch_taken_0x2b5e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E60u;
        // 0x2b5e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e60) {
            ctx->pc = 0x2D1E68u;
            return;
        }
    }
    ctx->pc = 0x2B5E68u;
label_2b5e68:
    // 0x2b5e68: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2b5e68u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b5e6c:
    // 0x2b5e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e70:
    // 0x2b5e70: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2b5e70u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b5e74:
    // 0x2b5e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e78:
    // 0x2b5e78: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2b5e78u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b5e7c:
    // 0x2b5e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e80:
    // 0x2b5e80: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2b5e80u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b5e84:
    // 0x2b5e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e88:
    // 0x2b5e88: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b5e88u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B5E88 raw=0x48007800");
 /* MITIGATED */
label_2b5e8c:
    // 0x2b5e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e90:
    // 0x2b5e90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5e90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5e94:
    // 0x2b5e94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5e98:
    // 0x2b5e98: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2b5e98u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2b5e9c:
    // 0x2b5e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ea0:
    // 0x2b5ea0: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2b5ea0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b5ea4:
    // 0x2b5ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ea8:
    // 0x2b5ea8: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2b5ea8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b5eac:
    // 0x2b5eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5eb0:
    // 0x2b5eb0: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2b5eb0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b5eb4:
    // 0x2b5eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5eb8:
    // 0x2b5eb8: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2b5eb8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b5ebc:
    // 0x2b5ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ec0:
    // 0x2b5ec0: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b5ec4:
    if (ctx->pc == 0x2B5EC4u) {
        ctx->pc = 0x2B5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EC0u;
        // 0x2b5ec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EC8u;
        goto label_2b5ec8;
    }
    ctx->pc = 0x2B5EC0u;
    {
        const bool branch_taken_0x2b5ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EC0u;
        // 0x2b5ec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ec0) {
            ctx->pc = 0x2D1EC8u;
            return;
        }
    }
    ctx->pc = 0x2B5EC8u;
label_2b5ec8:
    // 0x2b5ec8: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2b5ec8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b5ecc:
    // 0x2b5ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ed0:
    // 0x2b5ed0: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2b5ed0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b5ed4:
    // 0x2b5ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ed8:
    // 0x2b5ed8: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2b5ed8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b5edc:
    // 0x2b5edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ee0:
    // 0x2b5ee0: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2b5ee0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b5ee4:
    // 0x2b5ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ee8:
    // 0x2b5ee8: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b5eec:
    if (ctx->pc == 0x2B5EECu) {
        ctx->pc = 0x2B5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EE8u;
        // 0x2b5eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EF0u;
        goto label_2b5ef0;
    }
    ctx->pc = 0x2B5EE8u;
    {
        const bool branch_taken_0x2b5ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EE8u;
        // 0x2b5eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ee8) {
            ctx->pc = 0x2D1EF0u;
            return;
        }
    }
    ctx->pc = 0x2B5EF0u;
label_2b5ef0:
    // 0x2b5ef0: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2b5ef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b5ef4:
    // 0x2b5ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ef8:
    // 0x2b5ef8: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2b5ef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b5efc:
    // 0x2b5efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f00:
    // 0x2b5f00: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2b5f00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b5f04:
    // 0x2b5f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f08:
    // 0x2b5f08: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2b5f08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b5f0c:
    // 0x2b5f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f10:
    // 0x2b5f10: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b5f14:
    if (ctx->pc == 0x2B5F14u) {
        ctx->pc = 0x2B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F10u;
        // 0x2b5f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F18u;
        goto label_2b5f18;
    }
    ctx->pc = 0x2B5F10u;
    {
        const bool branch_taken_0x2b5f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F10u;
        // 0x2b5f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f10) {
            ctx->pc = 0x2D1F18u;
            return;
        }
    }
    ctx->pc = 0x2B5F18u;
label_2b5f18:
    // 0x2b5f18: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2b5f18u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b5f1c:
    // 0x2b5f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f20:
    // 0x2b5f20: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2b5f20u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b5f24:
    // 0x2b5f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f28:
    // 0x2b5f28: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2b5f28u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b5f2c:
    // 0x2b5f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f30:
    // 0x2b5f30: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2b5f30u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b5f34:
    // 0x2b5f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f38:
    // 0x2b5f38: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2b5f38u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b5f3c:
    // 0x2b5f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f40:
    // 0x2b5f40: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b5f40u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B5F40 raw=0x48000800");
 /* MITIGATED */
label_2b5f44:
    // 0x2b5f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f48:
    // 0x2b5f48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5f48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5f4c:
    // 0x2b5f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f50:
    // 0x2b5f50: 0x1d61ff7  .word       0x01D61FF7                   # INVALID     $t6, $s6, 0x1FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2B5F50 raw=0x01D61FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5f54:
    // 0x2b5f54: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b5f54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b5f58:
    // 0x2b5f58: 0x1d71ffa  .word       0x01D71FFA                   # dsrl        $v1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) >> 31);
label_2b5f5c:
    // 0x2b5f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f60:
    // 0x2b5f60: 0x1d81ffd  .word       0x01D81FFD                   # INVALID     $t6, $t8, 0x1FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B5F60 raw=0x01D81FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5f64:
    // 0x2b5f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f68:
    // 0x2b5f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5f6c:
    // 0x2b5f6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5f6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5f70:
    // 0x2b5f70: 0x1f337f8  .word       0x01F337F8                   # dsll        $a2, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << 31);
label_2b5f74:
    // 0x2b5f74: 0x960582  .word       0x00960582                   # srl         $zero, $s6, 22 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 22), 22));
label_2b5f78:
    // 0x2b5f78: 0x1f437fb  .word       0x01F437FB                   # dsra        $a2, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f78u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 20) >> 31);
label_2b5f7c:
    // 0x2b5f7c: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f7cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b5f80:
    // 0x2b5f80: 0x1f537fe  .word       0x01F537FE                   # dsrl32      $a2, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) >> (32 + 31));
label_2b5f84:
    // 0x2b5f84: 0x9705c2  .word       0x009705C2                   # srl         $zero, $s7, 23 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 23), 23));
label_2b5f88:
    // 0x2b5f88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5f88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5f8c:
    // 0x2b5f8c: 0x4005c3  .word       0x004005C3                   # sra         $zero, $zero, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f8cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 23));
label_2b5f90:
    // 0x2b5f90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5f90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5f94:
    // 0x2b5f94: 0x980602  .word       0x00980602                   # srl         $zero, $t8, 24 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f94u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 24), 24));
label_2b5f98:
    // 0x2b5f98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5f98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5f9c:
    // 0x2b5f9c: 0x400603  .word       0x00400603                   # sra         $zero, $zero, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5f9cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 24));
label_2b5fa0:
    // 0x2b5fa0: 0x1991ff8  .word       0x01991FF8                   # dsll        $v1, $t9, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) << 31);
label_2b5fa4:
    // 0x2b5fa4: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fa4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
label_2b5fa8:
    // 0x2b5fa8: 0x19a1ffb  .word       0x019A1FFB                   # dsra        $v1, $k0, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 26) >> 31);
label_2b5fac:
    // 0x2b5fac: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5facu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
label_2b5fb0:
    // 0x2b5fb0: 0x19b1ffe  .word       0x019B1FFE                   # dsrl32      $v1, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 27) >> (32 + 31));
label_2b5fb4:
    // 0x2b5fb4: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2b5fb8:
    // 0x2b5fb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5fb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5fbc:
    // 0x2b5fbc: 0x400643  .word       0x00400643                   # sra         $zero, $zero, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fbcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 25));
label_2b5fc0:
    // 0x2b5fc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5fc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5fc4:
    // 0x2b5fc4: 0x400683  .word       0x00400683                   # sra         $zero, $zero, 26 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fc4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 26));
label_2b5fc8:
    // 0x2b5fc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b5fc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b5fcc:
    // 0x2b5fcc: 0x4006c3  .word       0x004006C3                   # sra         $zero, $zero, 27 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 27));
label_2b5fd0:
    // 0x2b5fd0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b5fd4:
    // 0x2b5fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5fd8:
    // 0x2b5fd8: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2b5fdc:
    if (ctx->pc == 0x2B5FDCu) {
        ctx->pc = 0x2B5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FD8u;
        // 0x2b5fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FE0u;
        goto label_2b5fe0;
    }
    ctx->pc = 0x2B5FD8u;
    {
        const bool branch_taken_0x2b5fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FD8u;
        // 0x2b5fdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fd8) {
            ctx->pc = 0x2B6174u;
            goto label_2b6174;
        }
    }
    ctx->pc = 0x2B5FE0u;
label_2b5fe0:
    // 0x2b5fe0: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2b5fe4:
    if (ctx->pc == 0x2B5FE4u) {
        ctx->pc = 0x2B5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FE0u;
        // 0x2b5fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FE8u;
        goto label_2b5fe8;
    }
    ctx->pc = 0x2B5FE0u;
    {
        const bool branch_taken_0x2b5fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FE0u;
        // 0x2b5fe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fe0) {
            ctx->pc = 0x2B61FCu;
            goto label_2b61fc;
        }
    }
    ctx->pc = 0x2B5FE8u;
label_2b5fe8:
    // 0x2b5fe8: 0x3e89801  .word       0x03E89801                   # INVALID     $ra, $t0, -0x67FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5fe8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B5FE8 raw=0x03E89801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5fec:
    // 0x2b5fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ff0:
    // 0x2b5ff0: 0x3e8a005  .word       0x03E8A005                   # INVALID     $ra, $t0, -0x5FFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b5ff0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B5FF0 raw=0x03E8A005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b5ff4:
    // 0x2b5ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b5ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b5ff8:
    // 0x2b5ff8: 0x3e8a809  .word       0x03E8A809                   # jalr        $s5, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b5ffc:
    if (ctx->pc == 0x2B5FFCu) {
        ctx->pc = 0x2B5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FF8u;
        // 0x2b5ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6000u;
        goto label_2b6000;
    }
    ctx->pc = 0x2B5FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 21, 0x2B6000u);
        ctx->pc = 0x2B5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FF8u;
        // 0x2b5ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5FF8u, 0x2B6000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6000u;
label_2b6000:
    // 0x2b6000: 0x3e8980d  break       1000, 608
    ctx->pc = 0x2b6000u;
    runtime->handleBreak(rdram, ctx);
label_2b6004:
    // 0x2b6004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6008:
    // 0x2b6008: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6008u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b600c:
    // 0x2b600c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b600cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6010:
    // 0x2b6010: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2b6010u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b6014:
    // 0x2b6014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6018:
    // 0x2b6018: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2b6018u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2b601c:
    // 0x2b601c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b601cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6020:
    // 0x2b6020: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2B6020 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6024:
    // 0x2b6024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6028:
    // 0x2b6028: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6028u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2b602c:
    // 0x2b602c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b602cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6030:
    // 0x2b6030: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2b6030u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b6034:
    // 0x2b6034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6038:
    // 0x2b6038: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2b6038u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2b603c:
    // 0x2b603c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b603cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6040:
    // 0x2b6040: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6040u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b6044:
    // 0x2b6044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6048:
    // 0x2b6048: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b6048u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b604c:
    // 0x2b604c: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b604cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b6050:
    // 0x2b6050: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b6050u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b6054:
    // 0x2b6054: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b6054u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b6058:
    // 0x2b6058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b605c:
    // 0x2b605c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b605cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6060:
    // 0x2b6060: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6060u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6064:
    // 0x2b6064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6068:
    // 0x2b6068: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b606c:
    // 0x2b606c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b606cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6070:
    // 0x2b6070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6074:
    // 0x2b6074: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6074u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B6074 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6078:
    // 0x2b6078: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6078u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b607c:
    // 0x2b607c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b607cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6080:
    // 0x2b6080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6084:
    // 0x2b6084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6088:
    // 0x2b6088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b608c:
    // 0x2b608c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b608cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6090:
    // 0x2b6090: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6090u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6094:
    // 0x2b6094: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6094u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b6098:
    // 0x2b6098: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6098u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b609c:
    // 0x2b609c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b609cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b60a0:
    // 0x2b60a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60a4:
    // 0x2b60a4: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b60a8:
    // 0x2b60a8: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b60a8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b60ac:
    // 0x2b60ac: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b60acu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b60b0:
    // 0x2b60b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60b4:
    // 0x2b60b4: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60b4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b60b8:
    // 0x2b60b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60bc:
    // 0x2b60bc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60bcu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b60c0:
    // 0x2b60c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60c4:
    // 0x2b60c4: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60c4u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b60c8:
    // 0x2b60c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60cc:
    // 0x2b60cc: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60ccu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b60d0:
    // 0x2b60d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b60d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b60d4:
    // 0x2b60d4: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60d4u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b60d8:
    // 0x2b60d8: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b60d8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B60D8 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b60dc:
    // 0x2b60dc: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b60dcu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b60e0:
    // 0x2b60e0: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60e0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b60e4:
    // 0x2b60e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b60e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b60e8:
    // 0x2b60e8: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2b60e8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b60ec:
    // 0x2b60ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b60ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b60f0:
    // 0x2b60f0: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b60f4:
    if (ctx->pc == 0x2B60F4u) {
        ctx->pc = 0x2B60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60F0u;
        // 0x2b60f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B60F8u;
        goto label_2b60f8;
    }
    ctx->pc = 0x2B60F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60F0u;
        // 0x2b60f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B60F8u;
label_2b60f8:
    // 0x2b60f8: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b60f8u;
    ctx->pc = 0x2B60FCu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2b60fc:
    // 0x2b60fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b60fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6100:
    // 0x2b6100: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b6100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b6104:
    // 0x2b6104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6108:
    // 0x2b6108: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2b610c:
    if (ctx->pc == 0x2B610Cu) {
        ctx->pc = 0x2B610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6108u;
        // 0x2b610c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6110u;
        goto label_2b6110;
    }
    ctx->pc = 0x2B6108u;
    {
        const bool branch_taken_0x2b6108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6108u;
        // 0x2b610c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6108) {
            ctx->pc = 0x2B610Cu;
            goto label_2b610c;
        }
    }
    ctx->pc = 0x2B6110u;
label_2b6110:
    // 0x2b6110: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2b6114:
    if (ctx->pc == 0x2B6114u) {
        ctx->pc = 0x2B6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6110u;
        // 0x2b6114: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6118u;
        goto label_2b6118;
    }
    ctx->pc = 0x2B6110u;
    {
        const bool branch_taken_0x2b6110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6110u;
        // 0x2b6114: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6110) {
            ctx->pc = 0x2B6194u;
            goto label_2b6194;
        }
    }
    ctx->pc = 0x2B6118u;
label_2b6118:
    // 0x2b6118: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2b611c:
    if (ctx->pc == 0x2B611Cu) {
        ctx->pc = 0x2B611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6118u;
        // 0x2b611c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6120u;
        goto label_2b6120;
    }
    ctx->pc = 0x2B6118u;
    {
        const bool branch_taken_0x2b6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6118u;
        // 0x2b611c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6118) {
            ctx->pc = 0x2B6124u;
            goto label_2b6124;
        }
    }
    ctx->pc = 0x2B6120u;
label_2b6120:
    // 0x2b6120: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b6124:
    if (ctx->pc == 0x2B6124u) {
        ctx->pc = 0x2B6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6120u;
        // 0x2b6124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6128u;
        goto label_2b6128;
    }
    ctx->pc = 0x2B6120u;
    {
        const bool branch_taken_0x2b6120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6120u;
        // 0x2b6124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6120) {
            ctx->pc = 0x2BC124u;
            { ctx->pc = 0x2bc124; return; }
        }
    }
    ctx->pc = 0x2B6128u;
label_2b6128:
    // 0x2b6128: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b612c:
    if (ctx->pc == 0x2B612Cu) {
        ctx->pc = 0x2B612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6128u;
        // 0x2b612c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6130u;
        goto label_2b6130;
    }
    ctx->pc = 0x2B6128u;
    {
        const bool branch_taken_0x2b6128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6128u;
        // 0x2b612c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6128) {
            ctx->pc = 0x2BC1ACu;
            { ctx->pc = 0x2bc1ac; return; }
        }
    }
    ctx->pc = 0x2B6130u;
label_2b6130:
    // 0x2b6130: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2b6134:
    if (ctx->pc == 0x2B6134u) {
        ctx->pc = 0x2B6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6130u;
        // 0x2b6134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6138u;
        goto label_2b6138;
    }
    ctx->pc = 0x2B6130u;
    {
        const bool branch_taken_0x2b6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6130u;
        // 0x2b6134: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6130) {
            ctx->pc = 0x2B6140u;
            goto label_2b6140;
        }
    }
    ctx->pc = 0x2B6138u;
label_2b6138:
    // 0x2b6138: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b613c:
    if (ctx->pc == 0x2B613Cu) {
        ctx->pc = 0x2B613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6138u;
        // 0x2b613c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6140u;
        goto label_2b6140;
    }
    ctx->pc = 0x2B6138u;
    {
        const bool branch_taken_0x2b6138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6138u;
        // 0x2b613c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6138) {
            ctx->pc = 0x2B613Cu;
            goto label_2b613c;
        }
    }
    ctx->pc = 0x2B6140u;
label_2b6140:
    // 0x2b6140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6144:
    // 0x2b6144: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6144u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b6148:
    // 0x2b6148: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b6148u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b614c:
    // 0x2b614c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b614cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6150:
    // 0x2b6150: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b6150u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6154:
    // 0x2b6154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6158:
    // 0x2b6158: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b6158u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b615c:
    // 0x2b615c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b615cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6160:
    // 0x2b6160: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b6160u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6164:
    // 0x2b6164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6168:
    // 0x2b6168: 0x42020096  .word       0x42020096                   # INVALID     $s0, $v0, 0x96 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6168u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x16 at 0x2B6168 raw=0x42020096"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b616c:
    // 0x2b616c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b616cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6170:
    // 0x2b6170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6174:
    // 0x2b6174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6178:
    // 0x2b6178: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b617c:
    if (ctx->pc == 0x2B617Cu) {
        ctx->pc = 0x2B617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6178u;
        // 0x2b617c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6180u;
        goto label_2b6180;
    }
    ctx->pc = 0x2B6178u;
    {
        const bool branch_taken_0x2b6178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6178u;
        // 0x2b617c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6178) {
            ctx->pc = 0x2CA180u;
            return;
        }
    }
    ctx->pc = 0x2B6180u;
label_2b6180:
    // 0x2b6180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6184:
    // 0x2b6184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6188:
    // 0x2b6188: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b618c:
    if (ctx->pc == 0x2B618Cu) {
        ctx->pc = 0x2B618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6188u;
        // 0x2b618c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6190u;
        goto label_2b6190;
    }
    ctx->pc = 0x2B6188u;
    {
        const bool branch_taken_0x2b6188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b6188) {
            ctx->pc = 0x2B618Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6188u;
            // 0x2b618c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8178u;
            { ctx->pc = 0x2b8178; return; }
        }
    }
    ctx->pc = 0x2B6190u;
label_2b6190:
    // 0x2b6190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6194:
    // 0x2b6194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6198:
    // 0x2b6198: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b619c:
    if (ctx->pc == 0x2B619Cu) {
        ctx->pc = 0x2B619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6198u;
        // 0x2b619c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61A0u;
        goto label_2b61a0;
    }
    ctx->pc = 0x2B6198u;
    {
        const bool branch_taken_0x2b6198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6198u;
        // 0x2b619c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6198) {
            ctx->pc = 0x2BC21Cu;
            { ctx->pc = 0x2bc21c; return; }
        }
    }
    ctx->pc = 0x2B61A0u;
label_2b61a0:
    // 0x2b61a0: 0x42020084  .word       0x42020084                   # INVALID     $s0, $v0, 0x84 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b61a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x4 at 0x2B61A0 raw=0x42020084"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b61a4:
    // 0x2b61a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b61a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b61a8:
    // 0x2b61a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b61a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b61ac:
    // 0x2b61ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b61acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b61b0:
    // 0x2b61b0: 0x500b0080  beql        $zero, $t3, . + 4 + (0x80 << 2)
label_2b61b4:
    if (ctx->pc == 0x2B61B4u) {
        ctx->pc = 0x2B61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61B0u;
        // 0x2b61b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61B8u;
        goto label_2b61b8;
    }
    ctx->pc = 0x2B61B0u;
    {
        const bool branch_taken_0x2b61b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b61b0) {
            ctx->pc = 0x2B61B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B61B0u;
            // 0x2b61b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B63B4u;
            { ctx->pc = 0x2b63b4; return; }
        }
    }
    ctx->pc = 0x2B61B8u;
label_2b61b8:
    // 0x2b61b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b61b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b61bc:
    // 0x2b61bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b61bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b61c0:
    // 0x2b61c0: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2b61c4:
    if (ctx->pc == 0x2B61C4u) {
        ctx->pc = 0x2B61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C0u;
        // 0x2b61c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61C8u;
        goto label_2b61c8;
    }
    ctx->pc = 0x2B61C0u;
    {
        const bool branch_taken_0x2b61c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C0u;
        // 0x2b61c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61c0) {
            ctx->pc = 0x2B63C4u;
            { ctx->pc = 0x2b63c4; return; }
        }
    }
    ctx->pc = 0x2B61C8u;
label_2b61c8:
    // 0x2b61c8: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2b61cc:
    if (ctx->pc == 0x2B61CCu) {
        ctx->pc = 0x2B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C8u;
        // 0x2b61cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61D0u;
        goto label_2b61d0;
    }
    ctx->pc = 0x2B61C8u;
    {
        const bool branch_taken_0x2b61c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61C8u;
        // 0x2b61cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61c8) {
            ctx->pc = 0x2B61D4u;
            goto label_2b61d4;
        }
    }
    ctx->pc = 0x2B61D0u;
label_2b61d0:
    // 0x2b61d0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b61d4:
    if (ctx->pc == 0x2B61D4u) {
        ctx->pc = 0x2B61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D0u;
        // 0x2b61d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61D8u;
        goto label_2b61d8;
    }
    ctx->pc = 0x2B61D0u;
    {
        const bool branch_taken_0x2b61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D0u;
        // 0x2b61d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61d0) {
            ctx->pc = 0x2B61D4u;
            goto label_2b61d4;
        }
    }
    ctx->pc = 0x2B61D8u;
label_2b61d8:
    // 0x2b61d8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b61dc:
    if (ctx->pc == 0x2B61DCu) {
        ctx->pc = 0x2B61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D8u;
        // 0x2b61dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61E0u;
        goto label_2b61e0;
    }
    ctx->pc = 0x2B61D8u;
    {
        const bool branch_taken_0x2b61d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61D8u;
        // 0x2b61dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61d8) {
            ctx->pc = 0x2BC25Cu;
            { ctx->pc = 0x2bc25c; return; }
        }
    }
    ctx->pc = 0x2B61E0u;
label_2b61e0:
    // 0x2b61e0: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b61e4:
    if (ctx->pc == 0x2B61E4u) {
        ctx->pc = 0x2B61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61E0u;
        // 0x2b61e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61E8u;
        goto label_2b61e8;
    }
    ctx->pc = 0x2B61E0u;
    {
        const bool branch_taken_0x2b61e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61E0u;
        // 0x2b61e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61e0) {
            ctx->pc = 0x2BC1E4u;
            { ctx->pc = 0x2bc1e4; return; }
        }
    }
    ctx->pc = 0x2B61E8u;
label_2b61e8:
    // 0x2b61e8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b61e8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b61ec:
    // 0x2b61ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b61ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b61f0:
    // 0x2b61f0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b61f4:
    if (ctx->pc == 0x2B61F4u) {
        ctx->pc = 0x2B61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61F0u;
        // 0x2b61f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B61F8u;
        goto label_2b61f8;
    }
    ctx->pc = 0x2B61F0u;
    {
        const bool branch_taken_0x2b61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61F0u;
        // 0x2b61f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61f0) {
            ctx->pc = 0x2B61F4u;
            goto label_2b61f4;
        }
    }
    ctx->pc = 0x2B61F8u;
label_2b61f8:
    // 0x2b61f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b61f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b61fc:
    // 0x2b61fc: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b61fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b6200:
    // 0x2b6200: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b6200u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6204:
    // 0x2b6204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6208:
    // 0x2b6208: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b6208u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b620c:
    // 0x2b620c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b620cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6210:
    // 0x2b6210: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b6210u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b6214:
    // 0x2b6214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6218:
    // 0x2b6218: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b6218u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b621c:
    // 0x2b621c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b621cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6220:
    // 0x2b6220: 0x4202007f  .word       0x4202007F                   # INVALID     $s0, $v0, 0x7F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6220u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2B6220 raw=0x4202007F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6224:
    // 0x2b6224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6228:
    // 0x2b6228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b622c:
    // 0x2b622c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b622cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6230:
    // 0x2b6230: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b6234:
    if (ctx->pc == 0x2B6234u) {
        ctx->pc = 0x2B6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6230u;
        // 0x2b6234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6238u;
        goto label_2b6238;
    }
    ctx->pc = 0x2B6230u;
    {
        const bool branch_taken_0x2b6230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B6234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6230u;
        // 0x2b6234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6230) {
            ctx->pc = 0x2CA238u;
            return;
        }
    }
    ctx->pc = 0x2B6238u;
label_2b6238:
    // 0x2b6238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b623c:
    // 0x2b623c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b623cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6240:
    // 0x2b6240: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b6244:
    if (ctx->pc == 0x2B6244u) {
        ctx->pc = 0x2B6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6240u;
        // 0x2b6244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6248u;
        goto label_2b6248;
    }
    ctx->pc = 0x2B6240u;
    {
        const bool branch_taken_0x2b6240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b6240) {
            ctx->pc = 0x2B6244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6240u;
            // 0x2b6244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8230u;
            { ctx->pc = 0x2b8230; return; }
        }
    }
    ctx->pc = 0x2B6248u;
label_2b6248:
    // 0x2b6248: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6248u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b624c:
    // 0x2b624c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b624cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6250:
    // 0x2b6250: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b6254:
    if (ctx->pc == 0x2B6254u) {
        ctx->pc = 0x2B6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6250u;
        // 0x2b6254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6258u;
        goto label_2b6258;
    }
    ctx->pc = 0x2B6250u;
    {
        const bool branch_taken_0x2b6250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6250u;
        // 0x2b6254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6250) {
            ctx->pc = 0x2BC254u;
            { ctx->pc = 0x2bc254; return; }
        }
    }
    ctx->pc = 0x2B6258u;
label_2b6258:
    // 0x2b6258: 0x4202006d  .word       0x4202006D                   # INVALID     $s0, $v0, 0x6D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6258u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2D at 0x2B6258 raw=0x4202006D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b625c:
    // 0x2b625c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b625cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6260:
    // 0x2b6260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6264:
    // 0x2b6264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6268:
    // 0x2b6268: 0x500b0069  beql        $zero, $t3, . + 4 + (0x69 << 2)
label_2b626c:
    if (ctx->pc == 0x2B626Cu) {
        ctx->pc = 0x2B626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6268u;
        // 0x2b626c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6270u;
        goto label_2b6270;
    }
    ctx->pc = 0x2B6268u;
    {
        const bool branch_taken_0x2b6268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b6268) {
            ctx->pc = 0x2B626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6268u;
            // 0x2b626c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6410u;
            { ctx->pc = 0x2b6410; return; }
        }
    }
    ctx->pc = 0x2B6270u;
label_2b6270:
    // 0x2b6270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6274:
    // 0x2b6274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6278:
    // 0x2b6278: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2b627c:
    if (ctx->pc == 0x2B627Cu) {
        ctx->pc = 0x2B627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6278u;
        // 0x2b627c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6280u;
        goto label_2b6280;
    }
    ctx->pc = 0x2B6278u;
    {
        const bool branch_taken_0x2b6278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6278u;
        // 0x2b627c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6278) {
            ctx->pc = 0x2B637Cu;
            { ctx->pc = 0x2b637c; return; }
        }
    }
    ctx->pc = 0x2B6280u;
label_2b6280:
    // 0x2b6280: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2b6284:
    if (ctx->pc == 0x2B6284u) {
        ctx->pc = 0x2B6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6280u;
        // 0x2b6284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6288u;
        goto label_2b6288;
    }
    ctx->pc = 0x2B6280u;
    {
        const bool branch_taken_0x2b6280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6280u;
        // 0x2b6284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6280) {
            ctx->pc = 0x2B6288u;
            goto label_2b6288;
        }
    }
    ctx->pc = 0x2B6288u;
label_2b6288:
    // 0x2b6288: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b628c:
    if (ctx->pc == 0x2B628Cu) {
        ctx->pc = 0x2B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6288u;
        // 0x2b628c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6290u;
        goto label_2b6290;
    }
    ctx->pc = 0x2B6288u;
    {
        const bool branch_taken_0x2b6288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6288u;
        // 0x2b628c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6288) {
            ctx->pc = 0x2B628Cu;
            goto label_2b628c;
        }
    }
    ctx->pc = 0x2B6290u;
label_2b6290:
    // 0x2b6290: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b6294:
    if (ctx->pc == 0x2B6294u) {
        ctx->pc = 0x2B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6290u;
        // 0x2b6294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6298u;
        goto label_2b6298;
    }
    ctx->pc = 0x2B6290u;
    {
        const bool branch_taken_0x2b6290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6290u;
        // 0x2b6294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6290) {
            ctx->pc = 0x2BC294u;
            { ctx->pc = 0x2bc294; return; }
        }
    }
    ctx->pc = 0x2B6298u;
label_2b6298:
    // 0x2b6298: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b629c:
    if (ctx->pc == 0x2B629Cu) {
        ctx->pc = 0x2B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6298u;
        // 0x2b629c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B62A0u;
        goto label_2b62a0;
    }
    ctx->pc = 0x2B6298u;
    {
        const bool branch_taken_0x2b6298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6298u;
        // 0x2b629c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6298) {
            ctx->pc = 0x2BC31Cu;
            { ctx->pc = 0x2bc31c; return; }
        }
    }
    ctx->pc = 0x2B62A0u;
label_2b62a0:
    // 0x2b62a0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b62a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b62a4:
    // 0x2b62a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62a8:
    // 0x2b62a8: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b62ac:
    if (ctx->pc == 0x2B62ACu) {
        ctx->pc = 0x2B62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62A8u;
        // 0x2b62ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B62B0u;
        goto label_2b62b0;
    }
    ctx->pc = 0x2B62A8u;
    {
        const bool branch_taken_0x2b62a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62A8u;
        // 0x2b62ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62a8) {
            ctx->pc = 0x2B62ACu;
            goto label_2b62ac;
        }
    }
    ctx->pc = 0x2B62B0u;
label_2b62b0:
    // 0x2b62b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b62b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b62b4:
    // 0x2b62b4: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b62b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b62b8:
    // 0x2b62b8: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b62b8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b62bc:
    // 0x2b62bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62c0:
    // 0x2b62c0: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b62c0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b62c4:
    // 0x2b62c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62c8:
    // 0x2b62c8: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b62c8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b62cc:
    // 0x2b62cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62d0:
    // 0x2b62d0: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2b62d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b62d4:
    // 0x2b62d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62d8:
    // 0x2b62d8: 0x42020068  .word       0x42020068                   # INVALID     $s0, $v0, 0x68 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b62d8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x28 at 0x2B62D8 raw=0x42020068"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b62dc:
    // 0x2b62dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62e0:
    // 0x2b62e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b62e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b62e4:
    // 0x2b62e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62e8:
    // 0x2b62e8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b62ec:
    if (ctx->pc == 0x2B62ECu) {
        ctx->pc = 0x2B62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62E8u;
        // 0x2b62ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B62F0u;
        goto label_2b62f0;
    }
    ctx->pc = 0x2B62E8u;
    {
        const bool branch_taken_0x2b62e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62E8u;
        // 0x2b62ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62e8) {
            ctx->pc = 0x2CA2F0u;
            return;
        }
    }
    ctx->pc = 0x2B62F0u;
label_2b62f0:
    // 0x2b62f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b62f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b62f4:
    // 0x2b62f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b62f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b62f8:
    // 0x2b62f8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b62fc:
    if (ctx->pc == 0x2B62FCu) {
        ctx->pc = 0x2B62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62F8u;
        // 0x2b62fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6300u;
        goto label_2b6300;
    }
    ctx->pc = 0x2B62F8u;
    {
        const bool branch_taken_0x2b62f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b62f8) {
            ctx->pc = 0x2B62FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B62F8u;
            // 0x2b62fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B82E8u;
            { ctx->pc = 0x2b82e8; return; }
        }
    }
    ctx->pc = 0x2B6300u;
label_2b6300:
    // 0x2b6300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b6304:
    // 0x2b6304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6308:
    // 0x2b6308: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b630c:
    if (ctx->pc == 0x2B630Cu) {
        ctx->pc = 0x2B630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6308u;
        // 0x2b630c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6310u;
        goto label_2b6310;
    }
    ctx->pc = 0x2B6308u;
    {
        const bool branch_taken_0x2b6308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6308u;
        // 0x2b630c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6308) {
            ctx->pc = 0x2BC38Cu;
            { ctx->pc = 0x2bc38c; return; }
        }
    }
    ctx->pc = 0x2B6310u;
label_2b6310:
    // 0x2b6310: 0x42020056  .word       0x42020056                   # INVALID     $s0, $v0, 0x56 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b6310u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x16 at 0x2B6310 raw=0x42020056"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b6314:
    // 0x2b6314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b6314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6318:
    // 0x2b6318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b631c:
    // 0x2b631c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b631cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6320:
    // 0x2b6320: 0x500b0052  beql        $zero, $t3, . + 4 + (0x52 << 2)
label_2b6324:
    if (ctx->pc == 0x2B6324u) {
        ctx->pc = 0x2B6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6320u;
        // 0x2b6324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6328u;
        goto label_2b6328;
    }
    ctx->pc = 0x2B6320u;
    {
        const bool branch_taken_0x2b6320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b6320) {
            ctx->pc = 0x2B6324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6320u;
            // 0x2b6324: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B646Cu;
            { ctx->pc = 0x2b646c; return; }
        }
    }
    ctx->pc = 0x2B6328u;
label_2b6328:
    // 0x2b6328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b6328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b632c:
    // 0x2b632c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b632cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b6330:
    // 0x2b6330: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2b6334:
    if (ctx->pc == 0x2B6334u) {
        ctx->pc = 0x2B6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6330u;
        // 0x2b6334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6338u;
        goto label_2b6338;
    }
    ctx->pc = 0x2B6330u;
    {
        const bool branch_taken_0x2b6330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6330u;
        // 0x2b6334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6330) {
            ctx->pc = 0x2B6B34u;
            { ctx->pc = 0x2b6b34; return; }
        }
    }
    ctx->pc = 0x2B6338u;
label_2b6338:
    // 0x2b6338: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2b633c:
    if (ctx->pc == 0x2B633Cu) {
        ctx->pc = 0x2B633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6338u;
        // 0x2b633c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6340u;
        goto label_2b6340;
    }
    ctx->pc = 0x2B6338u;
    {
        const bool branch_taken_0x2b6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6338u;
        // 0x2b633c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6338) {
            ctx->pc = 0x2B635Cu;
            goto label_2b635c;
        }
    }
    ctx->pc = 0x2B6340u;
label_2b6340:
    // 0x2b6340: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b6344:
    if (ctx->pc == 0x2B6344u) {
        ctx->pc = 0x2B6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6340u;
        // 0x2b6344: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6348u;
        goto label_2b6348;
    }
    ctx->pc = 0x2B6340u;
    {
        const bool branch_taken_0x2b6340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6340u;
        // 0x2b6344: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6340) {
            ctx->pc = 0x2B6348u;
            goto label_2b6348;
        }
    }
    ctx->pc = 0x2B6348u;
label_2b6348:
    // 0x2b6348: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b634c:
    if (ctx->pc == 0x2B634Cu) {
        ctx->pc = 0x2B634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6348u;
        // 0x2b634c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6350u;
        goto label_2b6350;
    }
    ctx->pc = 0x2B6348u;
    {
        const bool branch_taken_0x2b6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6348u;
        // 0x2b634c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6348) {
            ctx->pc = 0x2BC3CCu;
            { ctx->pc = 0x2bc3cc; return; }
        }
    }
    ctx->pc = 0x2B6350u;
label_2b6350:
    // 0x2b6350: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b6354:
    if (ctx->pc == 0x2B6354u) {
        ctx->pc = 0x2B6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6350u;
        // 0x2b6354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6358u;
        goto label_2b6358;
    }
    ctx->pc = 0x2B6350u;
    {
        const bool branch_taken_0x2b6350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6350u;
        // 0x2b6354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6350) {
            ctx->pc = 0x2BC354u;
            { ctx->pc = 0x2bc354; return; }
        }
    }
    ctx->pc = 0x2B6358u;
label_2b6358:
    // 0x2b6358: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b6358u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b635c:
    // 0x2b635c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b635cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b6360u;
    return;
}

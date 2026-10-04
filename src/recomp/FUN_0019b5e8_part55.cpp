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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part55(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b5bc8u: goto label_1b5bc8;
        case 0x1b5bccu: goto label_1b5bcc;
        case 0x1b5bd0u: goto label_1b5bd0;
        case 0x1b5bd4u: goto label_1b5bd4;
        case 0x1b5bd8u: goto label_1b5bd8;
        case 0x1b5bdcu: goto label_1b5bdc;
        case 0x1b5be0u: goto label_1b5be0;
        case 0x1b5be4u: goto label_1b5be4;
        case 0x1b5be8u: goto label_1b5be8;
        case 0x1b5becu: goto label_1b5bec;
        case 0x1b5bf0u: goto label_1b5bf0;
        case 0x1b5bf4u: goto label_1b5bf4;
        case 0x1b5bf8u: goto label_1b5bf8;
        case 0x1b5bfcu: goto label_1b5bfc;
        case 0x1b5c00u: goto label_1b5c00;
        case 0x1b5c04u: goto label_1b5c04;
        case 0x1b5c08u: goto label_1b5c08;
        case 0x1b5c0cu: goto label_1b5c0c;
        case 0x1b5c10u: goto label_1b5c10;
        case 0x1b5c14u: goto label_1b5c14;
        case 0x1b5c18u: goto label_1b5c18;
        case 0x1b5c1cu: goto label_1b5c1c;
        case 0x1b5c20u: goto label_1b5c20;
        case 0x1b5c24u: goto label_1b5c24;
        case 0x1b5c28u: goto label_1b5c28;
        case 0x1b5c2cu: goto label_1b5c2c;
        case 0x1b5c30u: goto label_1b5c30;
        case 0x1b5c34u: goto label_1b5c34;
        case 0x1b5c38u: goto label_1b5c38;
        case 0x1b5c3cu: goto label_1b5c3c;
        case 0x1b5c40u: goto label_1b5c40;
        case 0x1b5c44u: goto label_1b5c44;
        case 0x1b5c48u: goto label_1b5c48;
        case 0x1b5c4cu: goto label_1b5c4c;
        case 0x1b5c50u: goto label_1b5c50;
        case 0x1b5c54u: goto label_1b5c54;
        case 0x1b5c58u: goto label_1b5c58;
        case 0x1b5c5cu: goto label_1b5c5c;
        case 0x1b5c60u: goto label_1b5c60;
        case 0x1b5c64u: goto label_1b5c64;
        case 0x1b5c68u: goto label_1b5c68;
        case 0x1b5c6cu: goto label_1b5c6c;
        case 0x1b5c70u: goto label_1b5c70;
        case 0x1b5c74u: goto label_1b5c74;
        case 0x1b5c78u: goto label_1b5c78;
        case 0x1b5c7cu: goto label_1b5c7c;
        case 0x1b5c80u: goto label_1b5c80;
        case 0x1b5c84u: goto label_1b5c84;
        case 0x1b5c88u: goto label_1b5c88;
        case 0x1b5c8cu: goto label_1b5c8c;
        case 0x1b5c90u: goto label_1b5c90;
        case 0x1b5c94u: goto label_1b5c94;
        case 0x1b5c98u: goto label_1b5c98;
        case 0x1b5c9cu: goto label_1b5c9c;
        case 0x1b5ca0u: goto label_1b5ca0;
        case 0x1b5ca4u: goto label_1b5ca4;
        case 0x1b5ca8u: goto label_1b5ca8;
        case 0x1b5cacu: goto label_1b5cac;
        case 0x1b5cb0u: goto label_1b5cb0;
        case 0x1b5cb4u: goto label_1b5cb4;
        case 0x1b5cb8u: goto label_1b5cb8;
        case 0x1b5cbcu: goto label_1b5cbc;
        case 0x1b5cc0u: goto label_1b5cc0;
        case 0x1b5cc4u: goto label_1b5cc4;
        case 0x1b5cc8u: goto label_1b5cc8;
        case 0x1b5cccu: goto label_1b5ccc;
        case 0x1b5cd0u: goto label_1b5cd0;
        case 0x1b5cd4u: goto label_1b5cd4;
        case 0x1b5cd8u: goto label_1b5cd8;
        case 0x1b5cdcu: goto label_1b5cdc;
        case 0x1b5ce0u: goto label_1b5ce0;
        case 0x1b5ce4u: goto label_1b5ce4;
        case 0x1b5ce8u: goto label_1b5ce8;
        case 0x1b5cecu: goto label_1b5cec;
        case 0x1b5cf0u: goto label_1b5cf0;
        case 0x1b5cf4u: goto label_1b5cf4;
        case 0x1b5cf8u: goto label_1b5cf8;
        case 0x1b5cfcu: goto label_1b5cfc;
        case 0x1b5d00u: goto label_1b5d00;
        case 0x1b5d04u: goto label_1b5d04;
        case 0x1b5d08u: goto label_1b5d08;
        case 0x1b5d0cu: goto label_1b5d0c;
        case 0x1b5d10u: goto label_1b5d10;
        case 0x1b5d14u: goto label_1b5d14;
        case 0x1b5d18u: goto label_1b5d18;
        case 0x1b5d1cu: goto label_1b5d1c;
        case 0x1b5d20u: goto label_1b5d20;
        case 0x1b5d24u: goto label_1b5d24;
        case 0x1b5d28u: goto label_1b5d28;
        case 0x1b5d2cu: goto label_1b5d2c;
        case 0x1b5d30u: goto label_1b5d30;
        case 0x1b5d34u: goto label_1b5d34;
        case 0x1b5d38u: goto label_1b5d38;
        case 0x1b5d3cu: goto label_1b5d3c;
        case 0x1b5d40u: goto label_1b5d40;
        case 0x1b5d44u: goto label_1b5d44;
        case 0x1b5d48u: goto label_1b5d48;
        case 0x1b5d4cu: goto label_1b5d4c;
        case 0x1b5d50u: goto label_1b5d50;
        case 0x1b5d54u: goto label_1b5d54;
        case 0x1b5d58u: goto label_1b5d58;
        case 0x1b5d5cu: goto label_1b5d5c;
        case 0x1b5d60u: goto label_1b5d60;
        case 0x1b5d64u: goto label_1b5d64;
        case 0x1b5d68u: goto label_1b5d68;
        case 0x1b5d6cu: goto label_1b5d6c;
        case 0x1b5d70u: goto label_1b5d70;
        case 0x1b5d74u: goto label_1b5d74;
        case 0x1b5d78u: goto label_1b5d78;
        case 0x1b5d7cu: goto label_1b5d7c;
        case 0x1b5d80u: goto label_1b5d80;
        case 0x1b5d84u: goto label_1b5d84;
        case 0x1b5d88u: goto label_1b5d88;
        case 0x1b5d8cu: goto label_1b5d8c;
        case 0x1b5d90u: goto label_1b5d90;
        case 0x1b5d94u: goto label_1b5d94;
        case 0x1b5d98u: goto label_1b5d98;
        case 0x1b5d9cu: goto label_1b5d9c;
        case 0x1b5da0u: goto label_1b5da0;
        case 0x1b5da4u: goto label_1b5da4;
        case 0x1b5da8u: goto label_1b5da8;
        case 0x1b5dacu: goto label_1b5dac;
        case 0x1b5db0u: goto label_1b5db0;
        case 0x1b5db4u: goto label_1b5db4;
        case 0x1b5db8u: goto label_1b5db8;
        case 0x1b5dbcu: goto label_1b5dbc;
        case 0x1b5dc0u: goto label_1b5dc0;
        case 0x1b5dc4u: goto label_1b5dc4;
        case 0x1b5dc8u: goto label_1b5dc8;
        case 0x1b5dccu: goto label_1b5dcc;
        case 0x1b5dd0u: goto label_1b5dd0;
        case 0x1b5dd4u: goto label_1b5dd4;
        case 0x1b5dd8u: goto label_1b5dd8;
        case 0x1b5ddcu: goto label_1b5ddc;
        case 0x1b5de0u: goto label_1b5de0;
        case 0x1b5de4u: goto label_1b5de4;
        case 0x1b5de8u: goto label_1b5de8;
        case 0x1b5decu: goto label_1b5dec;
        case 0x1b5df0u: goto label_1b5df0;
        case 0x1b5df4u: goto label_1b5df4;
        case 0x1b5df8u: goto label_1b5df8;
        case 0x1b5dfcu: goto label_1b5dfc;
        case 0x1b5e00u: goto label_1b5e00;
        case 0x1b5e04u: goto label_1b5e04;
        case 0x1b5e08u: goto label_1b5e08;
        case 0x1b5e0cu: goto label_1b5e0c;
        case 0x1b5e10u: goto label_1b5e10;
        case 0x1b5e14u: goto label_1b5e14;
        case 0x1b5e18u: goto label_1b5e18;
        case 0x1b5e1cu: goto label_1b5e1c;
        case 0x1b5e20u: goto label_1b5e20;
        case 0x1b5e24u: goto label_1b5e24;
        case 0x1b5e28u: goto label_1b5e28;
        case 0x1b5e2cu: goto label_1b5e2c;
        case 0x1b5e30u: goto label_1b5e30;
        case 0x1b5e34u: goto label_1b5e34;
        case 0x1b5e38u: goto label_1b5e38;
        case 0x1b5e3cu: goto label_1b5e3c;
        case 0x1b5e40u: goto label_1b5e40;
        case 0x1b5e44u: goto label_1b5e44;
        case 0x1b5e48u: goto label_1b5e48;
        case 0x1b5e4cu: goto label_1b5e4c;
        case 0x1b5e50u: goto label_1b5e50;
        case 0x1b5e54u: goto label_1b5e54;
        case 0x1b5e58u: goto label_1b5e58;
        case 0x1b5e5cu: goto label_1b5e5c;
        case 0x1b5e60u: goto label_1b5e60;
        case 0x1b5e64u: goto label_1b5e64;
        case 0x1b5e68u: goto label_1b5e68;
        case 0x1b5e6cu: goto label_1b5e6c;
        case 0x1b5e70u: goto label_1b5e70;
        case 0x1b5e74u: goto label_1b5e74;
        case 0x1b5e78u: goto label_1b5e78;
        case 0x1b5e7cu: goto label_1b5e7c;
        case 0x1b5e80u: goto label_1b5e80;
        case 0x1b5e84u: goto label_1b5e84;
        case 0x1b5e88u: goto label_1b5e88;
        case 0x1b5e8cu: goto label_1b5e8c;
        case 0x1b5e90u: goto label_1b5e90;
        case 0x1b5e94u: goto label_1b5e94;
        case 0x1b5e98u: goto label_1b5e98;
        case 0x1b5e9cu: goto label_1b5e9c;
        case 0x1b5ea0u: goto label_1b5ea0;
        case 0x1b5ea4u: goto label_1b5ea4;
        case 0x1b5ea8u: goto label_1b5ea8;
        case 0x1b5eacu: goto label_1b5eac;
        case 0x1b5eb0u: goto label_1b5eb0;
        case 0x1b5eb4u: goto label_1b5eb4;
        case 0x1b5eb8u: goto label_1b5eb8;
        case 0x1b5ebcu: goto label_1b5ebc;
        case 0x1b5ec0u: goto label_1b5ec0;
        case 0x1b5ec4u: goto label_1b5ec4;
        case 0x1b5ec8u: goto label_1b5ec8;
        case 0x1b5eccu: goto label_1b5ecc;
        case 0x1b5ed0u: goto label_1b5ed0;
        case 0x1b5ed4u: goto label_1b5ed4;
        case 0x1b5ed8u: goto label_1b5ed8;
        case 0x1b5edcu: goto label_1b5edc;
        case 0x1b5ee0u: goto label_1b5ee0;
        case 0x1b5ee4u: goto label_1b5ee4;
        case 0x1b5ee8u: goto label_1b5ee8;
        case 0x1b5eecu: goto label_1b5eec;
        case 0x1b5ef0u: goto label_1b5ef0;
        case 0x1b5ef4u: goto label_1b5ef4;
        case 0x1b5ef8u: goto label_1b5ef8;
        case 0x1b5efcu: goto label_1b5efc;
        case 0x1b5f00u: goto label_1b5f00;
        case 0x1b5f04u: goto label_1b5f04;
        case 0x1b5f08u: goto label_1b5f08;
        case 0x1b5f0cu: goto label_1b5f0c;
        case 0x1b5f10u: goto label_1b5f10;
        case 0x1b5f14u: goto label_1b5f14;
        case 0x1b5f18u: goto label_1b5f18;
        case 0x1b5f1cu: goto label_1b5f1c;
        case 0x1b5f20u: goto label_1b5f20;
        case 0x1b5f24u: goto label_1b5f24;
        case 0x1b5f28u: goto label_1b5f28;
        case 0x1b5f2cu: goto label_1b5f2c;
        case 0x1b5f30u: goto label_1b5f30;
        case 0x1b5f34u: goto label_1b5f34;
        case 0x1b5f38u: goto label_1b5f38;
        case 0x1b5f3cu: goto label_1b5f3c;
        case 0x1b5f40u: goto label_1b5f40;
        case 0x1b5f44u: goto label_1b5f44;
        case 0x1b5f48u: goto label_1b5f48;
        case 0x1b5f4cu: goto label_1b5f4c;
        case 0x1b5f50u: goto label_1b5f50;
        case 0x1b5f54u: goto label_1b5f54;
        case 0x1b5f58u: goto label_1b5f58;
        case 0x1b5f5cu: goto label_1b5f5c;
        case 0x1b5f60u: goto label_1b5f60;
        case 0x1b5f64u: goto label_1b5f64;
        case 0x1b5f68u: goto label_1b5f68;
        case 0x1b5f6cu: goto label_1b5f6c;
        case 0x1b5f70u: goto label_1b5f70;
        case 0x1b5f74u: goto label_1b5f74;
        case 0x1b5f78u: goto label_1b5f78;
        case 0x1b5f7cu: goto label_1b5f7c;
        case 0x1b5f80u: goto label_1b5f80;
        case 0x1b5f84u: goto label_1b5f84;
        case 0x1b5f88u: goto label_1b5f88;
        case 0x1b5f8cu: goto label_1b5f8c;
        case 0x1b5f90u: goto label_1b5f90;
        case 0x1b5f94u: goto label_1b5f94;
        case 0x1b5f98u: goto label_1b5f98;
        case 0x1b5f9cu: goto label_1b5f9c;
        case 0x1b5fa0u: goto label_1b5fa0;
        case 0x1b5fa4u: goto label_1b5fa4;
        case 0x1b5fa8u: goto label_1b5fa8;
        case 0x1b5facu: goto label_1b5fac;
        case 0x1b5fb0u: goto label_1b5fb0;
        case 0x1b5fb4u: goto label_1b5fb4;
        case 0x1b5fb8u: goto label_1b5fb8;
        case 0x1b5fbcu: goto label_1b5fbc;
        case 0x1b5fc0u: goto label_1b5fc0;
        case 0x1b5fc4u: goto label_1b5fc4;
        case 0x1b5fc8u: goto label_1b5fc8;
        case 0x1b5fccu: goto label_1b5fcc;
        case 0x1b5fd0u: goto label_1b5fd0;
        case 0x1b5fd4u: goto label_1b5fd4;
        case 0x1b5fd8u: goto label_1b5fd8;
        case 0x1b5fdcu: goto label_1b5fdc;
        case 0x1b5fe0u: goto label_1b5fe0;
        case 0x1b5fe4u: goto label_1b5fe4;
        case 0x1b5fe8u: goto label_1b5fe8;
        case 0x1b5fecu: goto label_1b5fec;
        case 0x1b5ff0u: goto label_1b5ff0;
        case 0x1b5ff4u: goto label_1b5ff4;
        case 0x1b5ff8u: goto label_1b5ff8;
        case 0x1b5ffcu: goto label_1b5ffc;
        case 0x1b6000u: goto label_1b6000;
        case 0x1b6004u: goto label_1b6004;
        case 0x1b6008u: goto label_1b6008;
        case 0x1b600cu: goto label_1b600c;
        case 0x1b6010u: goto label_1b6010;
        case 0x1b6014u: goto label_1b6014;
        case 0x1b6018u: goto label_1b6018;
        case 0x1b601cu: goto label_1b601c;
        case 0x1b6020u: goto label_1b6020;
        case 0x1b6024u: goto label_1b6024;
        case 0x1b6028u: goto label_1b6028;
        case 0x1b602cu: goto label_1b602c;
        case 0x1b6030u: goto label_1b6030;
        case 0x1b6034u: goto label_1b6034;
        case 0x1b6038u: goto label_1b6038;
        case 0x1b603cu: goto label_1b603c;
        case 0x1b6040u: goto label_1b6040;
        case 0x1b6044u: goto label_1b6044;
        case 0x1b6048u: goto label_1b6048;
        case 0x1b604cu: goto label_1b604c;
        case 0x1b6050u: goto label_1b6050;
        case 0x1b6054u: goto label_1b6054;
        case 0x1b6058u: goto label_1b6058;
        case 0x1b605cu: goto label_1b605c;
        case 0x1b6060u: goto label_1b6060;
        case 0x1b6064u: goto label_1b6064;
        case 0x1b6068u: goto label_1b6068;
        case 0x1b606cu: goto label_1b606c;
        case 0x1b6070u: goto label_1b6070;
        case 0x1b6074u: goto label_1b6074;
        case 0x1b6078u: goto label_1b6078;
        case 0x1b607cu: goto label_1b607c;
        case 0x1b6080u: goto label_1b6080;
        case 0x1b6084u: goto label_1b6084;
        case 0x1b6088u: goto label_1b6088;
        case 0x1b608cu: goto label_1b608c;
        case 0x1b6090u: goto label_1b6090;
        case 0x1b6094u: goto label_1b6094;
        case 0x1b6098u: goto label_1b6098;
        case 0x1b609cu: goto label_1b609c;
        case 0x1b60a0u: goto label_1b60a0;
        case 0x1b60a4u: goto label_1b60a4;
        case 0x1b60a8u: goto label_1b60a8;
        case 0x1b60acu: goto label_1b60ac;
        case 0x1b60b0u: goto label_1b60b0;
        case 0x1b60b4u: goto label_1b60b4;
        case 0x1b60b8u: goto label_1b60b8;
        case 0x1b60bcu: goto label_1b60bc;
        case 0x1b60c0u: goto label_1b60c0;
        case 0x1b60c4u: goto label_1b60c4;
        case 0x1b60c8u: goto label_1b60c8;
        case 0x1b60ccu: goto label_1b60cc;
        case 0x1b60d0u: goto label_1b60d0;
        case 0x1b60d4u: goto label_1b60d4;
        case 0x1b60d8u: goto label_1b60d8;
        case 0x1b60dcu: goto label_1b60dc;
        case 0x1b60e0u: goto label_1b60e0;
        case 0x1b60e4u: goto label_1b60e4;
        case 0x1b60e8u: goto label_1b60e8;
        case 0x1b60ecu: goto label_1b60ec;
        case 0x1b60f0u: goto label_1b60f0;
        case 0x1b60f4u: goto label_1b60f4;
        case 0x1b60f8u: goto label_1b60f8;
        case 0x1b60fcu: goto label_1b60fc;
        case 0x1b6100u: goto label_1b6100;
        case 0x1b6104u: goto label_1b6104;
        case 0x1b6108u: goto label_1b6108;
        case 0x1b610cu: goto label_1b610c;
        case 0x1b6110u: goto label_1b6110;
        case 0x1b6114u: goto label_1b6114;
        case 0x1b6118u: goto label_1b6118;
        case 0x1b611cu: goto label_1b611c;
        case 0x1b6120u: goto label_1b6120;
        case 0x1b6124u: goto label_1b6124;
        case 0x1b6128u: goto label_1b6128;
        case 0x1b612cu: goto label_1b612c;
        case 0x1b6130u: goto label_1b6130;
        case 0x1b6134u: goto label_1b6134;
        case 0x1b6138u: goto label_1b6138;
        case 0x1b613cu: goto label_1b613c;
        case 0x1b6140u: goto label_1b6140;
        case 0x1b6144u: goto label_1b6144;
        case 0x1b6148u: goto label_1b6148;
        case 0x1b614cu: goto label_1b614c;
        case 0x1b6150u: goto label_1b6150;
        case 0x1b6154u: goto label_1b6154;
        case 0x1b6158u: goto label_1b6158;
        case 0x1b615cu: goto label_1b615c;
        case 0x1b6160u: goto label_1b6160;
        case 0x1b6164u: goto label_1b6164;
        case 0x1b6168u: goto label_1b6168;
        case 0x1b616cu: goto label_1b616c;
        case 0x1b6170u: goto label_1b6170;
        case 0x1b6174u: goto label_1b6174;
        case 0x1b6178u: goto label_1b6178;
        case 0x1b617cu: goto label_1b617c;
        case 0x1b6180u: goto label_1b6180;
        case 0x1b6184u: goto label_1b6184;
        case 0x1b6188u: goto label_1b6188;
        case 0x1b618cu: goto label_1b618c;
        case 0x1b6190u: goto label_1b6190;
        case 0x1b6194u: goto label_1b6194;
        case 0x1b6198u: goto label_1b6198;
        case 0x1b619cu: goto label_1b619c;
        case 0x1b61a0u: goto label_1b61a0;
        case 0x1b61a4u: goto label_1b61a4;
        case 0x1b61a8u: goto label_1b61a8;
        case 0x1b61acu: goto label_1b61ac;
        case 0x1b61b0u: goto label_1b61b0;
        case 0x1b61b4u: goto label_1b61b4;
        case 0x1b61b8u: goto label_1b61b8;
        case 0x1b61bcu: goto label_1b61bc;
        case 0x1b61c0u: goto label_1b61c0;
        case 0x1b61c4u: goto label_1b61c4;
        case 0x1b61c8u: goto label_1b61c8;
        case 0x1b61ccu: goto label_1b61cc;
        case 0x1b61d0u: goto label_1b61d0;
        case 0x1b61d4u: goto label_1b61d4;
        case 0x1b61d8u: goto label_1b61d8;
        case 0x1b61dcu: goto label_1b61dc;
        case 0x1b61e0u: goto label_1b61e0;
        case 0x1b61e4u: goto label_1b61e4;
        case 0x1b61e8u: goto label_1b61e8;
        case 0x1b61ecu: goto label_1b61ec;
        case 0x1b61f0u: goto label_1b61f0;
        case 0x1b61f4u: goto label_1b61f4;
        case 0x1b61f8u: goto label_1b61f8;
        case 0x1b61fcu: goto label_1b61fc;
        case 0x1b6200u: goto label_1b6200;
        case 0x1b6204u: goto label_1b6204;
        case 0x1b6208u: goto label_1b6208;
        case 0x1b620cu: goto label_1b620c;
        case 0x1b6210u: goto label_1b6210;
        case 0x1b6214u: goto label_1b6214;
        case 0x1b6218u: goto label_1b6218;
        case 0x1b621cu: goto label_1b621c;
        case 0x1b6220u: goto label_1b6220;
        case 0x1b6224u: goto label_1b6224;
        case 0x1b6228u: goto label_1b6228;
        case 0x1b622cu: goto label_1b622c;
        case 0x1b6230u: goto label_1b6230;
        case 0x1b6234u: goto label_1b6234;
        case 0x1b6238u: goto label_1b6238;
        case 0x1b623cu: goto label_1b623c;
        case 0x1b6240u: goto label_1b6240;
        case 0x1b6244u: goto label_1b6244;
        case 0x1b6248u: goto label_1b6248;
        case 0x1b624cu: goto label_1b624c;
        case 0x1b6250u: goto label_1b6250;
        case 0x1b6254u: goto label_1b6254;
        case 0x1b6258u: goto label_1b6258;
        case 0x1b625cu: goto label_1b625c;
        case 0x1b6260u: goto label_1b6260;
        case 0x1b6264u: goto label_1b6264;
        case 0x1b6268u: goto label_1b6268;
        case 0x1b626cu: goto label_1b626c;
        case 0x1b6270u: goto label_1b6270;
        case 0x1b6274u: goto label_1b6274;
        case 0x1b6278u: goto label_1b6278;
        case 0x1b627cu: goto label_1b627c;
        case 0x1b6280u: goto label_1b6280;
        case 0x1b6284u: goto label_1b6284;
        case 0x1b6288u: goto label_1b6288;
        case 0x1b628cu: goto label_1b628c;
        case 0x1b6290u: goto label_1b6290;
        case 0x1b6294u: goto label_1b6294;
        case 0x1b6298u: goto label_1b6298;
        case 0x1b629cu: goto label_1b629c;
        case 0x1b62a0u: goto label_1b62a0;
        case 0x1b62a4u: goto label_1b62a4;
        case 0x1b62a8u: goto label_1b62a8;
        case 0x1b62acu: goto label_1b62ac;
        case 0x1b62b0u: goto label_1b62b0;
        case 0x1b62b4u: goto label_1b62b4;
        case 0x1b62b8u: goto label_1b62b8;
        case 0x1b62bcu: goto label_1b62bc;
        case 0x1b62c0u: goto label_1b62c0;
        case 0x1b62c4u: goto label_1b62c4;
        case 0x1b62c8u: goto label_1b62c8;
        case 0x1b62ccu: goto label_1b62cc;
        case 0x1b62d0u: goto label_1b62d0;
        case 0x1b62d4u: goto label_1b62d4;
        case 0x1b62d8u: goto label_1b62d8;
        case 0x1b62dcu: goto label_1b62dc;
        case 0x1b62e0u: goto label_1b62e0;
        case 0x1b62e4u: goto label_1b62e4;
        case 0x1b62e8u: goto label_1b62e8;
        case 0x1b62ecu: goto label_1b62ec;
        case 0x1b62f0u: goto label_1b62f0;
        case 0x1b62f4u: goto label_1b62f4;
        case 0x1b62f8u: goto label_1b62f8;
        case 0x1b62fcu: goto label_1b62fc;
        case 0x1b6300u: goto label_1b6300;
        case 0x1b6304u: goto label_1b6304;
        case 0x1b6308u: goto label_1b6308;
        case 0x1b630cu: goto label_1b630c;
        case 0x1b6310u: goto label_1b6310;
        case 0x1b6314u: goto label_1b6314;
        case 0x1b6318u: goto label_1b6318;
        case 0x1b631cu: goto label_1b631c;
        case 0x1b6320u: goto label_1b6320;
        case 0x1b6324u: goto label_1b6324;
        case 0x1b6328u: goto label_1b6328;
        case 0x1b632cu: goto label_1b632c;
        case 0x1b6330u: goto label_1b6330;
        case 0x1b6334u: goto label_1b6334;
        case 0x1b6338u: goto label_1b6338;
        case 0x1b633cu: goto label_1b633c;
        case 0x1b6340u: goto label_1b6340;
        case 0x1b6344u: goto label_1b6344;
        case 0x1b6348u: goto label_1b6348;
        case 0x1b634cu: goto label_1b634c;
        case 0x1b6350u: goto label_1b6350;
        case 0x1b6354u: goto label_1b6354;
        case 0x1b6358u: goto label_1b6358;
        case 0x1b635cu: goto label_1b635c;
        case 0x1b6360u: goto label_1b6360;
        case 0x1b6364u: goto label_1b6364;
        case 0x1b6368u: goto label_1b6368;
        case 0x1b636cu: goto label_1b636c;
        case 0x1b6370u: goto label_1b6370;
        case 0x1b6374u: goto label_1b6374;
        case 0x1b6378u: goto label_1b6378;
        case 0x1b637cu: goto label_1b637c;
        case 0x1b6380u: goto label_1b6380;
        case 0x1b6384u: goto label_1b6384;
        case 0x1b6388u: goto label_1b6388;
        case 0x1b638cu: goto label_1b638c;
        case 0x1b6390u: goto label_1b6390;
        case 0x1b6394u: goto label_1b6394;
        default: return;
    }

label_1b5bc8:
    // 0x1b5bc8: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x1b5bc8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
label_1b5bcc:
    // 0x1b5bcc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1b5bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b5bd0:
    // 0x1b5bd0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1b5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b5bd4:
    // 0x1b5bd4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b5bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b5bd8:
    // 0x1b5bd8: 0x1c41825  or          $v1, $t6, $a0
    ctx->pc = 0x1b5bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
label_1b5bdc:
    // 0x1b5bdc: 0x3e00008  jr          $ra
label_1b5be0:
    if (ctx->pc == 0x1B5BE0u) {
        ctx->pc = 0x1B5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BDCu;
        // 0x1b5be0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5BE4u;
        goto label_1b5be4;
    }
    ctx->pc = 0x1B5BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5BDCu;
        // 0x1b5be0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5BE4u;
label_1b5be4:
    // 0x1b5be4: 0x0  nop
    ctx->pc = 0x1b5be4u;
    // NOP
label_1b5be8:
    // 0x1b5be8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1b5be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5bec:
    // 0x1b5bec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b5bf0:
    // 0x1b5bf0: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x1b5bf0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_1b5bf4:
    // 0x1b5bf4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b5bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b5bf8:
    // 0x1b5bf8: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x1b5bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
label_1b5bfc:
    // 0x1b5bfc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b5bfcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1b5c00:
    // 0x1b5c00: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
label_1b5c04:
    if (ctx->pc == 0x1B5C04u) {
        ctx->pc = 0x1B5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C00u;
        // 0x1b5c04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5C08u;
        goto label_1b5c08;
    }
    ctx->pc = 0x1B5C00u;
    {
        const bool branch_taken_0x1b5c00 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C00u;
        // 0x1b5c04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c00) {
            ctx->pc = 0x1B5C5Cu;
            goto label_1b5c5c;
        }
    }
    ctx->pc = 0x1B5C08u;
label_1b5c08:
    // 0x1b5c08: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x1b5c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_1b5c0c:
    // 0x1b5c0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b5c0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b5c10:
    // 0x1b5c10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5c14:
    // 0x1b5c14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b5c18:
    // 0x1b5c18: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b5c1c:
    // 0x1b5c1c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b5c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b5c20:
    // 0x1b5c20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b5c24:
    // 0x1b5c24: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1b5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1b5c28:
    // 0x1b5c28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b5c2c:
    // 0x1b5c2c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1b5c30:
    // 0x1b5c30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b5c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1b5c34:
    // 0x1b5c34: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b5c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1b5c38:
    // 0x1b5c38: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1b5c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5c3c:
    // 0x1b5c3c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1b5c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1b5c40:
    // 0x1b5c40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b5c40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b5c44:
    // 0x1b5c44: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1b5c44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1b5c48:
    // 0x1b5c48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b5c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b5c4c:
    // 0x1b5c4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b5c50:
    // 0x1b5c50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b5c54:
    // 0x1b5c54: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x1b5c54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1b5c58:
    // 0x1b5c58: 0x8503f  dsra32      $t2, $t0, 0
    ctx->pc = 0x1b5c58u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 8) >> (32 + 0));
label_1b5c5c:
    // 0x1b5c5c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x1b5c5cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
label_1b5c60:
    // 0x1b5c60: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
label_1b5c64:
    if (ctx->pc == 0x1B5C64u) {
        ctx->pc = 0x1B5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C60u;
        // 0x1b5c64: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5C68u;
        goto label_1b5c68;
    }
    ctx->pc = 0x1B5C60u;
    {
        const bool branch_taken_0x1b5c60 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C60u;
        // 0x1b5c64: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c60) {
            ctx->pc = 0x1B5CB0u;
            goto label_1b5cb0;
        }
    }
    ctx->pc = 0x1B5C68u;
label_1b5c68:
    // 0x1b5c68: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b5c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1b5c6c:
    // 0x1b5c6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b5c6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b5c70:
    // 0x1b5c70: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1b5c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1b5c74:
    // 0x1b5c74: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b5c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_1b5c78:
    // 0x1b5c78: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b5c7c:
    // 0x1b5c7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5c80:
    // 0x1b5c80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b5c84:
    // 0x1b5c84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b5c88:
    // 0x1b5c88: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1b5c88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1b5c8c:
    // 0x1b5c8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b5c90:
    // 0x1b5c90: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1b5c90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1b5c94:
    // 0x1b5c94: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1b5c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_1b5c98:
    // 0x1b5c98: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b5c98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1b5c9c:
    // 0x1b5c9c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x1b5c9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_1b5ca0:
    // 0x1b5ca0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1b5ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b5ca4:
    // 0x1b5ca4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1b5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b5ca8:
    // 0x1b5ca8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b5ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b5cac:
    // 0x1b5cac: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x1b5cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_1b5cb0:
    // 0x1b5cb0: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x1b5cb0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
label_1b5cb4:
    // 0x1b5cb4: 0x8683c  dsll32      $t5, $t0, 0
    ctx->pc = 0x1b5cb4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) << (32 + 0));
label_1b5cb8:
    // 0x1b5cb8: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1b5cb8u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_1b5cbc:
    // 0x1b5cbc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1b5cbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
label_1b5cc0:
    // 0x1b5cc0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x1b5cc0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
label_1b5cc4:
    // 0x1b5cc4: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x1b5cc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
label_1b5cc8:
    // 0x1b5cc8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1b5cc8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_1b5ccc:
    // 0x1b5ccc: 0x152000b0  bnez        $t1, . + 4 + (0xB0 << 2)
label_1b5cd0:
    if (ctx->pc == 0x1B5CD0u) {
        ctx->pc = 0x1B5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CCCu;
        // 0x1b5cd0: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5CD4u;
        goto label_1b5cd4;
    }
    ctx->pc = 0x1B5CCCu;
    {
        const bool branch_taken_0x1b5ccc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CCCu;
        // 0x1b5cd0: 0x3a0c82d  daddu       $t9, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ccc) {
            ctx->pc = 0x1B5F90u;
            goto label_1b5f90;
        }
    }
    ctx->pc = 0x1B5CD4u;
label_1b5cd4:
    // 0x1b5cd4: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1b5cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5cd8:
    // 0x1b5cd8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1b5cdc:
    if (ctx->pc == 0x1B5CDCu) {
        ctx->pc = 0x1B5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CD8u;
        // 0x1b5cdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5CE0u;
        goto label_1b5ce0;
    }
    ctx->pc = 0x1B5CD8u;
    {
        const bool branch_taken_0x1b5cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CD8u;
        // 0x1b5cdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cd8) {
            ctx->pc = 0x1B5D58u;
            goto label_1b5d58;
        }
    }
    ctx->pc = 0x1B5CE0u;
label_1b5ce0:
    // 0x1b5ce0: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b5ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5ce4:
    // 0x1b5ce4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b5ce8:
    if (ctx->pc == 0x1B5CE8u) {
        ctx->pc = 0x1B5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CE4u;
        // 0x1b5ce8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5CECu;
        goto label_1b5cec;
    }
    ctx->pc = 0x1B5CE4u;
    {
        const bool branch_taken_0x1b5ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CE4u;
        // 0x1b5ce8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ce4) {
            ctx->pc = 0x1B5D00u;
            goto label_1b5d00;
        }
    }
    ctx->pc = 0x1B5CECu;
label_1b5cec:
    // 0x1b5cec: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1b5cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b5cf0:
    // 0x1b5cf0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b5cf4:
    // 0x1b5cf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b5cf8:
    if (ctx->pc == 0x1B5CF8u) {
        ctx->pc = 0x1B5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CF4u;
        // 0x1b5cf8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5CFCu;
        goto label_1b5cfc;
    }
    ctx->pc = 0x1B5CF4u;
    {
        const bool branch_taken_0x1b5cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CF4u;
        // 0x1b5cf8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cf4) {
            ctx->pc = 0x1B5D14u;
            goto label_1b5d14;
        }
    }
    ctx->pc = 0x1B5CFCu;
label_1b5cfc:
    // 0x1b5cfc: 0x0  nop
    ctx->pc = 0x1b5cfcu;
    // NOP
label_1b5d00:
    // 0x1b5d00: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b5d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b5d04:
    // 0x1b5d04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5d08:
    // 0x1b5d08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b5d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b5d0c:
    // 0x1b5d0c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b5d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5d10:
    // 0x1b5d10: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b5d10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b5d14:
    // 0x1b5d14: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1b5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_1b5d18:
    // 0x1b5d18: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b5d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b5d1c:
    // 0x1b5d1c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b5d20:
    // 0x1b5d20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5d24:
    // 0x1b5d24: 0x9042b3b0  lbu         $v0, -0x4C50($v0)
    ctx->pc = 0x1b5d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947760)));
label_1b5d28:
    // 0x1b5d28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b5d2c:
    // 0x1b5d2c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b5d2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b5d30:
    // 0x1b5d30: 0x11800006  beqz        $t4, . + 4 + (0x6 << 2)
label_1b5d34:
    if (ctx->pc == 0x1B5D34u) {
        ctx->pc = 0x1B5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D30u;
        // 0x1b5d34: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D38u;
        goto label_1b5d38;
    }
    ctx->pc = 0x1B5D30u;
    {
        const bool branch_taken_0x1b5d30 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D30u;
        // 0x1b5d34: 0xac1023  subu        $v0, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d30) {
            ctx->pc = 0x1B5D4Cu;
            goto label_1b5d4c;
        }
    }
    ctx->pc = 0x1B5D38u;
label_1b5d38:
    // 0x1b5d38: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1b5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
label_1b5d3c:
    // 0x1b5d3c: 0x4d1006  srlv        $v0, $t5, $v0
    ctx->pc = 0x1b5d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
label_1b5d40:
    // 0x1b5d40: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b5d40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
label_1b5d44:
    // 0x1b5d44: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b5d44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b5d48:
    // 0x1b5d48: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b5d48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1b5d4c:
    // 0x1b5d4c: 0x73402  srl         $a2, $a3, 16
    ctx->pc = 0x1b5d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1b5d50:
    // 0x1b5d50: 0x10000059  b           . + 4 + (0x59 << 2)
label_1b5d54:
    if (ctx->pc == 0x1B5D54u) {
        ctx->pc = 0x1B5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D50u;
        // 0x1b5d54: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D58u;
        goto label_1b5d58;
    }
    ctx->pc = 0x1B5D50u;
    {
        const bool branch_taken_0x1b5d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D50u;
        // 0x1b5d54: 0x30e9ffff  andi        $t1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d50) {
            ctx->pc = 0x1B5EB8u;
            goto label_1b5eb8;
        }
    }
    ctx->pc = 0x1B5D58u;
label_1b5d58:
    // 0x1b5d58: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_1b5d5c:
    if (ctx->pc == 0x1B5D5Cu) {
        ctx->pc = 0x1B5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D58u;
        // 0x1b5d5c: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D60u;
        goto label_1b5d60;
    }
    ctx->pc = 0x1B5D58u;
    {
        const bool branch_taken_0x1b5d58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D58u;
        // 0x1b5d5c: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d58) {
            ctx->pc = 0x1B5D80u;
            goto label_1b5d80;
        }
    }
    ctx->pc = 0x1B5D60u;
label_1b5d60:
    // 0x1b5d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5d64:
    // 0x1b5d64: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_1b5d68:
    if (ctx->pc == 0x1B5D68u) {
        ctx->pc = 0x1B5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D64u;
        // 0x1b5d68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D6Cu;
        goto label_1b5d6c;
    }
    ctx->pc = 0x1B5D64u;
    {
        const bool branch_taken_0x1b5d64 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5d64) {
            ctx->pc = 0x1B5D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5D64u;
            // 0x1b5d68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D6Cu;
            goto label_1b5d6c;
        }
    }
    ctx->pc = 0x1B5D6Cu;
label_1b5d6c:
    // 0x1b5d6c: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x1b5d6cu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1b5d70:
    // 0x1b5d70: 0x1012  mflo        $v0
    ctx->pc = 0x1b5d70u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b5d74:
    // 0x1b5d74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b5d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5d78:
    // 0x1b5d78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b5d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1b5d7c:
    // 0x1b5d7c: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b5d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5d80:
    // 0x1b5d80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b5d84:
    if (ctx->pc == 0x1B5D84u) {
        ctx->pc = 0x1B5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D80u;
        // 0x1b5d84: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D88u;
        goto label_1b5d88;
    }
    ctx->pc = 0x1B5D80u;
    {
        const bool branch_taken_0x1b5d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D80u;
        // 0x1b5d84: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d80) {
            ctx->pc = 0x1B5D98u;
            goto label_1b5d98;
        }
    }
    ctx->pc = 0x1B5D88u;
label_1b5d88:
    // 0x1b5d88: 0x2ce20100  sltiu       $v0, $a3, 0x100
    ctx->pc = 0x1b5d88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b5d8c:
    // 0x1b5d8c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b5d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b5d90:
    // 0x1b5d90: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b5d94:
    if (ctx->pc == 0x1B5D94u) {
        ctx->pc = 0x1B5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D90u;
        // 0x1b5d94: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5D98u;
        goto label_1b5d98;
    }
    ctx->pc = 0x1B5D90u;
    {
        const bool branch_taken_0x1b5d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5D90u;
        // 0x1b5d94: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d90) {
            ctx->pc = 0x1B5DACu;
            goto label_1b5dac;
        }
    }
    ctx->pc = 0x1B5D98u;
label_1b5d98:
    // 0x1b5d98: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b5d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b5d9c:
    // 0x1b5d9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5da0:
    // 0x1b5da0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b5da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b5da4:
    // 0x1b5da4: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b5da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5da8:
    // 0x1b5da8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b5da8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b5dac:
    // 0x1b5dac: 0x871806  srlv        $v1, $a3, $a0
    ctx->pc = 0x1b5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_1b5db0:
    // 0x1b5db0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b5db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b5db4:
    // 0x1b5db4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b5db8:
    // 0x1b5db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b5dbc:
    // 0x1b5dbc: 0x9042b3b0  lbu         $v0, -0x4C50($v0)
    ctx->pc = 0x1b5dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947760)));
label_1b5dc0:
    // 0x1b5dc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b5dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b5dc4:
    // 0x1b5dc4: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b5dc4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b5dc8:
    // 0x1b5dc8: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
label_1b5dcc:
    if (ctx->pc == 0x1B5DCCu) {
        ctx->pc = 0x1B5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DC8u;
        // 0x1b5dcc: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DD0u;
        goto label_1b5dd0;
    }
    ctx->pc = 0x1B5DC8u;
    {
        const bool branch_taken_0x1b5dc8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DC8u;
        // 0x1b5dcc: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dc8) {
            ctx->pc = 0x1B5DE0u;
            goto label_1b5de0;
        }
    }
    ctx->pc = 0x1B5DD0u;
label_1b5dd0:
    // 0x1b5dd0: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1b5dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1b5dd4:
    // 0x1b5dd4: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1b5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1b5dd8:
    // 0x1b5dd8: 0x10000035  b           . + 4 + (0x35 << 2)
label_1b5ddc:
    if (ctx->pc == 0x1B5DDCu) {
        ctx->pc = 0x1B5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DD8u;
        // 0x1b5ddc: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5DE0u;
        goto label_1b5de0;
    }
    ctx->pc = 0x1B5DD8u;
    {
        const bool branch_taken_0x1b5dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DD8u;
        // 0x1b5ddc: 0x30eeffff  andi        $t6, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dd8) {
            ctx->pc = 0x1B5EB0u;
            goto label_1b5eb0;
        }
    }
    ctx->pc = 0x1B5DE0u;
label_1b5de0:
    // 0x1b5de0: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1b5de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
label_1b5de4:
    // 0x1b5de4: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x1b5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
label_1b5de8:
    // 0x1b5de8: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b5de8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
label_1b5dec:
    // 0x1b5dec: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1b5decu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
label_1b5df0:
    // 0x1b5df0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b5df0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b5df4:
    // 0x1b5df4: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b5df4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1b5df8:
    // 0x1b5df8: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1b5df8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_1b5dfc:
    // 0x1b5dfc: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1b5dfcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1b5e00:
    // 0x1b5e00: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_1b5e04:
    // 0x1b5e04: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x1b5e04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1b5e08:
    // 0x1b5e08: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1b5e08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e0c:
    // 0x1b5e0c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
label_1b5e10:
    if (ctx->pc == 0x1B5E10u) {
        ctx->pc = 0x1B5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E0Cu;
        // 0x1b5e10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E14u;
        goto label_1b5e14;
    }
    ctx->pc = 0x1B5E0Cu;
    {
        const bool branch_taken_0x1b5e0c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e0c) {
            ctx->pc = 0x1B5E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5E0Cu;
            // 0x1b5e10: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E14u;
            goto label_1b5e14;
        }
    }
    ctx->pc = 0x1B5E14u;
label_1b5e14:
    // 0x1b5e14: 0x1012  mflo        $v0
    ctx->pc = 0x1b5e14u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b5e18:
    // 0x1b5e18: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5e18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b5e1c:
    // 0x1b5e1c: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1b5e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b5e20:
    // 0x1b5e20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b5e24:
    // 0x1b5e24: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1b5e24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b5e28:
    // 0x1b5e28: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1b5e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b5e2c:
    // 0x1b5e2c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b5e30:
    if (ctx->pc == 0x1B5E30u) {
        ctx->pc = 0x1B5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E2Cu;
        // 0x1b5e30: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E34u;
        goto label_1b5e34;
    }
    ctx->pc = 0x1B5E2Cu;
    {
        const bool branch_taken_0x1b5e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E2Cu;
        // 0x1b5e30: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e2c) {
            ctx->pc = 0x1B5E58u;
            goto label_1b5e58;
        }
    }
    ctx->pc = 0x1B5E34u;
label_1b5e34:
    // 0x1b5e34: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1b5e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1b5e38:
    // 0x1b5e38: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1b5e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5e3c:
    // 0x1b5e3c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b5e40:
    if (ctx->pc == 0x1B5E40u) {
        ctx->pc = 0x1B5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E3Cu;
        // 0x1b5e40: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E44u;
        goto label_1b5e44;
    }
    ctx->pc = 0x1B5E3Cu;
    {
        const bool branch_taken_0x1b5e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e3c) {
            ctx->pc = 0x1B5E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5E3Cu;
            // 0x1b5e40: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E5Cu;
            goto label_1b5e5c;
        }
    }
    ctx->pc = 0x1B5E44u;
label_1b5e44:
    // 0x1b5e44: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1b5e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b5e48:
    // 0x1b5e48: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1b5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1b5e4c:
    // 0x1b5e4c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b5e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b5e50:
    // 0x1b5e50: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1b5e50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1b5e54:
    // 0x1b5e54: 0x0  nop
    ctx->pc = 0x1b5e54u;
    // NOP
label_1b5e58:
    // 0x1b5e58: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1b5e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1b5e5c:
    // 0x1b5e5c: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b5e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1b5e60:
    // 0x1b5e60: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1b5e60u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_1b5e64:
    // 0x1b5e64: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
label_1b5e68:
    if (ctx->pc == 0x1B5E68u) {
        ctx->pc = 0x1B5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E64u;
        // 0x1b5e68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E6Cu;
        goto label_1b5e6c;
    }
    ctx->pc = 0x1B5E64u;
    {
        const bool branch_taken_0x1b5e64 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5e64) {
            ctx->pc = 0x1B5E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5E64u;
            // 0x1b5e68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E6Cu;
            goto label_1b5e6c;
        }
    }
    ctx->pc = 0x1B5E6Cu;
label_1b5e6c:
    // 0x1b5e6c: 0x1012  mflo        $v0
    ctx->pc = 0x1b5e6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b5e70:
    // 0x1b5e70: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5e70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b5e74:
    // 0x1b5e74: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1b5e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b5e78:
    // 0x1b5e78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b5e7c:
    // 0x1b5e7c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b5e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b5e80:
    // 0x1b5e80: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b5e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b5e84:
    // 0x1b5e84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b5e88:
    if (ctx->pc == 0x1B5E88u) {
        ctx->pc = 0x1B5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E84u;
        // 0x1b5e88: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E8Cu;
        goto label_1b5e8c;
    }
    ctx->pc = 0x1B5E84u;
    {
        const bool branch_taken_0x1b5e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E84u;
        // 0x1b5e88: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e84) {
            ctx->pc = 0x1B5EB0u;
            goto label_1b5eb0;
        }
    }
    ctx->pc = 0x1B5E8Cu;
label_1b5e8c:
    // 0x1b5e8c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b5e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b5e90:
    // 0x1b5e90: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1b5e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5e94:
    // 0x1b5e94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b5e98:
    if (ctx->pc == 0x1B5E98u) {
        ctx->pc = 0x1B5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E94u;
        // 0x1b5e98: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E9Cu;
        goto label_1b5e9c;
    }
    ctx->pc = 0x1B5E94u;
    {
        const bool branch_taken_0x1b5e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E94u;
        // 0x1b5e98: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e94) {
            ctx->pc = 0x1B5EB0u;
            goto label_1b5eb0;
        }
    }
    ctx->pc = 0x1B5E9Cu;
label_1b5e9c:
    // 0x1b5e9c: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b5e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b5ea0:
    // 0x1b5ea0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b5ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b5ea4:
    // 0x1b5ea4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b5ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b5ea8:
    // 0x1b5ea8: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b5ea8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b5eac:
    // 0x1b5eac: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1b5eacu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1b5eb0:
    // 0x1b5eb0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b5eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b5eb4:
    // 0x1b5eb4: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1b5eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1b5eb8:
    // 0x1b5eb8: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1b5eb8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
label_1b5ebc:
    // 0x1b5ebc: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x1b5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
label_1b5ec0:
    // 0x1b5ec0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b5ec4:
    if (ctx->pc == 0x1B5EC4u) {
        ctx->pc = 0x1B5EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EC0u;
        // 0x1b5ec4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EC8u;
        goto label_1b5ec8;
    }
    ctx->pc = 0x1B5EC0u;
    {
        const bool branch_taken_0x1b5ec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ec0) {
            ctx->pc = 0x1B5EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EC0u;
            // 0x1b5ec4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5EC8u;
            goto label_1b5ec8;
        }
    }
    ctx->pc = 0x1B5EC8u;
label_1b5ec8:
    // 0x1b5ec8: 0x1012  mflo        $v0
    ctx->pc = 0x1b5ec8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b5ecc:
    // 0x1b5ecc: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5eccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b5ed0:
    // 0x1b5ed0: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1b5ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b5ed4:
    // 0x1b5ed4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b5ed8:
    // 0x1b5ed8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b5ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b5edc:
    // 0x1b5edc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b5edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b5ee0:
    // 0x1b5ee0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1b5ee4:
    if (ctx->pc == 0x1B5EE4u) {
        ctx->pc = 0x1B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EE0u;
        // 0x1b5ee4: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EE8u;
        goto label_1b5ee8;
    }
    ctx->pc = 0x1B5EE0u;
    {
        const bool branch_taken_0x1b5ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ee0) {
            ctx->pc = 0x1B5EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EE0u;
            // 0x1b5ee4: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F0Cu;
            goto label_1b5f0c;
        }
    }
    ctx->pc = 0x1B5EE8u;
label_1b5ee8:
    // 0x1b5ee8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1b5ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1b5eec:
    // 0x1b5eec: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1b5eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5ef0:
    // 0x1b5ef0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1b5ef4:
    if (ctx->pc == 0x1B5EF4u) {
        ctx->pc = 0x1B5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EF0u;
        // 0x1b5ef4: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EF8u;
        goto label_1b5ef8;
    }
    ctx->pc = 0x1B5EF0u;
    {
        const bool branch_taken_0x1b5ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ef0) {
            ctx->pc = 0x1B5EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EF0u;
            // 0x1b5ef4: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F0Cu;
            goto label_1b5f0c;
        }
    }
    ctx->pc = 0x1B5EF8u;
label_1b5ef8:
    // 0x1b5ef8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b5ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b5efc:
    // 0x1b5efc: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1b5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1b5f00:
    // 0x1b5f00: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b5f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b5f04:
    // 0x1b5f04: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1b5f04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_1b5f08:
    // 0x1b5f08: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b5f08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1b5f0c:
    // 0x1b5f0c: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x1b5f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
label_1b5f10:
    // 0x1b5f10: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1b5f10u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_1b5f14:
    // 0x1b5f14: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b5f18:
    if (ctx->pc == 0x1B5F18u) {
        ctx->pc = 0x1B5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F14u;
        // 0x1b5f18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F1Cu;
        goto label_1b5f1c;
    }
    ctx->pc = 0x1B5F14u;
    {
        const bool branch_taken_0x1b5f14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f14) {
            ctx->pc = 0x1B5F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5F14u;
            // 0x1b5f18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5F1Cu;
            goto label_1b5f1c;
        }
    }
    ctx->pc = 0x1B5F1Cu;
label_1b5f1c:
    // 0x1b5f1c: 0x1012  mflo        $v0
    ctx->pc = 0x1b5f1cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b5f20:
    // 0x1b5f20: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5f20u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b5f24:
    // 0x1b5f24: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1b5f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b5f28:
    // 0x1b5f28: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b5f2c:
    // 0x1b5f2c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b5f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b5f30:
    // 0x1b5f30: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b5f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b5f34:
    // 0x1b5f34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b5f38:
    if (ctx->pc == 0x1B5F38u) {
        ctx->pc = 0x1B5F3Cu;
        goto label_1b5f3c;
    }
    ctx->pc = 0x1B5F34u;
    {
        const bool branch_taken_0x1b5f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5f34) {
            ctx->pc = 0x1B5F58u;
            goto label_1b5f58;
        }
    }
    ctx->pc = 0x1B5F3Cu;
label_1b5f3c:
    // 0x1b5f3c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b5f40:
    // 0x1b5f40: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1b5f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b5f44:
    // 0x1b5f44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b5f48:
    if (ctx->pc == 0x1B5F48u) {
        ctx->pc = 0x1B5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F44u;
        // 0x1b5f48: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F4Cu;
        goto label_1b5f4c;
    }
    ctx->pc = 0x1B5F44u;
    {
        const bool branch_taken_0x1b5f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F44u;
        // 0x1b5f48: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f44) {
            ctx->pc = 0x1B5F58u;
            goto label_1b5f58;
        }
    }
    ctx->pc = 0x1B5F4Cu;
label_1b5f4c:
    // 0x1b5f4c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b5f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b5f50:
    // 0x1b5f50: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b5f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1b5f54:
    // 0x1b5f54: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b5f54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b5f58:
    // 0x1b5f58: 0x132000ac  beqz        $t9, . + 4 + (0xAC << 2)
label_1b5f5c:
    if (ctx->pc == 0x1B5F5Cu) {
        ctx->pc = 0x1B5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F58u;
        // 0x1b5f5c: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F60u;
        goto label_1b5f60;
    }
    ctx->pc = 0x1B5F58u;
    {
        const bool branch_taken_0x1b5f58 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F58u;
        // 0x1b5f5c: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f58) {
            ctx->pc = 0x1B620Cu;
            goto label_1b620c;
        }
    }
    ctx->pc = 0x1B5F60u;
label_1b5f60:
    // 0x1b5f60: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1b5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
label_1b5f64:
    // 0x1b5f64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5f68:
    // 0x1b5f68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b5f6c:
    // 0x1b5f6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b5f70:
    // 0x1b5f70: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b5f70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b5f74:
    // 0x1b5f74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b5f78:
    // 0x1b5f78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b5f7c:
    // 0x1b5f7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1b5f80:
    // 0x1b5f80: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b5f80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b5f84:
    // 0x1b5f84: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1b5f88:
    if (ctx->pc == 0x1B5F88u) {
        ctx->pc = 0x1B5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F84u;
        // 0x1b5f88: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F8Cu;
        goto label_1b5f8c;
    }
    ctx->pc = 0x1B5F84u;
    {
        const bool branch_taken_0x1b5f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F84u;
        // 0x1b5f88: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f84) {
            ctx->pc = 0x1B6208u;
            goto label_1b6208;
        }
    }
    ctx->pc = 0x1B5F8Cu;
label_1b5f8c:
    // 0x1b5f8c: 0x0  nop
    ctx->pc = 0x1b5f8cu;
    // NOP
label_1b5f90:
    // 0x1b5f90: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1b5f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b5f94:
    // 0x1b5f94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b5f98:
    if (ctx->pc == 0x1B5F98u) {
        ctx->pc = 0x1B5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F94u;
        // 0x1b5f98: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F9Cu;
        goto label_1b5f9c;
    }
    ctx->pc = 0x1B5F94u;
    {
        const bool branch_taken_0x1b5f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F94u;
        // 0x1b5f98: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5f94) {
            ctx->pc = 0x1B5FD0u;
            goto label_1b5fd0;
        }
    }
    ctx->pc = 0x1B5F9Cu;
label_1b5f9c:
    // 0x1b5f9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5fa0:
    // 0x1b5fa0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b5fa4:
    // 0x1b5fa4: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1b5fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
label_1b5fa8:
    // 0x1b5fa8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b5fac:
    // 0x1b5fac: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b5facu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b5fb0:
    // 0x1b5fb0: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b5fb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b5fb4:
    // 0x1b5fb4: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1b5fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_1b5fb8:
    // 0x1b5fb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b5fbc:
    // 0x1b5fbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b5fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1b5fc0:
    // 0x1b5fc0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b5fc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b5fc4:
    // 0x1b5fc4: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b5fc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b5fc8:
    // 0x1b5fc8: 0x10000090  b           . + 4 + (0x90 << 2)
label_1b5fcc:
    if (ctx->pc == 0x1B5FCCu) {
        ctx->pc = 0x1B5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FC8u;
        // 0x1b5fcc: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FD0u;
        goto label_1b5fd0;
    }
    ctx->pc = 0x1B5FC8u;
    {
        const bool branch_taken_0x1b5fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FC8u;
        // 0x1b5fcc: 0xffab0000  sd          $t3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fc8) {
            ctx->pc = 0x1B620Cu;
            goto label_1b620c;
        }
    }
    ctx->pc = 0x1B5FD0u;
label_1b5fd0:
    // 0x1b5fd0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b5fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b5fd4:
    // 0x1b5fd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b5fd8:
    if (ctx->pc == 0x1B5FD8u) {
        ctx->pc = 0x1B5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FD4u;
        // 0x1b5fd8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FDCu;
        goto label_1b5fdc;
    }
    ctx->pc = 0x1B5FD4u;
    {
        const bool branch_taken_0x1b5fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FD4u;
        // 0x1b5fd8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fd4) {
            ctx->pc = 0x1B5FF0u;
            goto label_1b5ff0;
        }
    }
    ctx->pc = 0x1B5FDCu;
label_1b5fdc:
    // 0x1b5fdc: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b5fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b5fe0:
    // 0x1b5fe0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b5fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b5fe4:
    // 0x1b5fe4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b5fe8:
    if (ctx->pc == 0x1B5FE8u) {
        ctx->pc = 0x1B5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FE4u;
        // 0x1b5fe8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5FECu;
        goto label_1b5fec;
    }
    ctx->pc = 0x1B5FE4u;
    {
        const bool branch_taken_0x1b5fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5FE4u;
        // 0x1b5fe8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5fe4) {
            ctx->pc = 0x1B6004u;
            goto label_1b6004;
        }
    }
    ctx->pc = 0x1B5FECu;
label_1b5fec:
    // 0x1b5fec: 0x0  nop
    ctx->pc = 0x1b5fecu;
    // NOP
label_1b5ff0:
    // 0x1b5ff0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b5ff4:
    // 0x1b5ff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5ff8:
    // 0x1b5ff8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b5ffc:
    // 0x1b5ffc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b5ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6000:
    // 0x1b6000: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6000u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b6004:
    // 0x1b6004: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b6004u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
label_1b6008:
    // 0x1b6008: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b6008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b600c:
    // 0x1b600c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b6010:
    // 0x1b6010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b6014:
    // 0x1b6014: 0x9042b3b0  lbu         $v0, -0x4C50($v0)
    ctx->pc = 0x1b6014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947760)));
label_1b6018:
    // 0x1b6018: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b601c:
    // 0x1b601c: 0xa26023  subu        $t4, $a1, $v0
    ctx->pc = 0x1b601cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b6020:
    // 0x1b6020: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
label_1b6024:
    if (ctx->pc == 0x1B6024u) {
        ctx->pc = 0x1B6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6020u;
        // 0x1b6024: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6028u;
        goto label_1b6028;
    }
    ctx->pc = 0x1B6020u;
    {
        const bool branch_taken_0x1b6020 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6020u;
        // 0x1b6024: 0xac7823  subu        $t7, $a1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6020) {
            ctx->pc = 0x1B6088u;
            goto label_1b6088;
        }
    }
    ctx->pc = 0x1B6028u;
label_1b6028:
    // 0x1b6028: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x1b6028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_1b602c:
    // 0x1b602c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b6030:
    if (ctx->pc == 0x1B6030u) {
        ctx->pc = 0x1B6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B602Cu;
        // 0x1b6030: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6034u;
        goto label_1b6034;
    }
    ctx->pc = 0x1B602Cu;
    {
        const bool branch_taken_0x1b602c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B602Cu;
        // 0x1b6030: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b602c) {
            ctx->pc = 0x1B6040u;
            goto label_1b6040;
        }
    }
    ctx->pc = 0x1B6034u;
label_1b6034:
    // 0x1b6034: 0x1a7102b  sltu        $v0, $t5, $a3
    ctx->pc = 0x1b6034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b6038:
    // 0x1b6038: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b603c:
    if (ctx->pc == 0x1B603Cu) {
        ctx->pc = 0x1B603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6038u;
        // 0x1b603c: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6040u;
        goto label_1b6040;
    }
    ctx->pc = 0x1B6038u;
    {
        const bool branch_taken_0x1b6038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6038u;
        // 0x1b603c: 0x1a71023  subu        $v0, $t5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6038) {
            ctx->pc = 0x1B6050u;
            goto label_1b6050;
        }
    }
    ctx->pc = 0x1B6040u;
label_1b6040:
    // 0x1b6040: 0x1492023  subu        $a0, $t2, $t1
    ctx->pc = 0x1b6040u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_1b6044:
    // 0x1b6044: 0x1a2182b  sltu        $v1, $t5, $v0
    ctx->pc = 0x1b6044u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b6048:
    // 0x1b6048: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x1b6048u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b604c:
    // 0x1b604c: 0x835023  subu        $t2, $a0, $v1
    ctx->pc = 0x1b604cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b6050:
    // 0x1b6050: 0x1320006e  beqz        $t9, . + 4 + (0x6E << 2)
label_1b6054:
    if (ctx->pc == 0x1B6054u) {
        ctx->pc = 0x1B6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6050u;
        // 0x1b6054: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6058u;
        goto label_1b6058;
    }
    ctx->pc = 0x1B6050u;
    {
        const bool branch_taken_0x1b6050 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6050u;
        // 0x1b6054: 0xd103c  dsll32      $v0, $t5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6050) {
            ctx->pc = 0x1B620Cu;
            goto label_1b620c;
        }
    }
    ctx->pc = 0x1B6058u;
label_1b6058:
    // 0x1b6058: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b605c:
    // 0x1b605c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6060:
    // 0x1b6060: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6064:
    // 0x1b6064: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6064u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b6068:
    // 0x1b6068: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6068u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b606c:
    // 0x1b606c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1b606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_1b6070:
    // 0x1b6070: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1b6074:
    // 0x1b6074: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1b6078:
    // 0x1b6078: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6078u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b607c:
    // 0x1b607c: 0x10000062  b           . + 4 + (0x62 << 2)
label_1b6080:
    if (ctx->pc == 0x1B6080u) {
        ctx->pc = 0x1B6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B607Cu;
        // 0x1b6080: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6084u;
        goto label_1b6084;
    }
    ctx->pc = 0x1B607Cu;
    {
        const bool branch_taken_0x1b607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B607Cu;
        // 0x1b6080: 0x1625825  or          $t3, $t3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b607c) {
            ctx->pc = 0x1B6208u;
            goto label_1b6208;
        }
    }
    ctx->pc = 0x1B6084u;
label_1b6084:
    // 0x1b6084: 0x0  nop
    ctx->pc = 0x1b6084u;
    // NOP
label_1b6088:
    // 0x1b6088: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x1b6088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
label_1b608c:
    // 0x1b608c: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x1b608cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
label_1b6090:
    // 0x1b6090: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x1b6090u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
label_1b6094:
    // 0x1b6094: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x1b6094u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
label_1b6098:
    // 0x1b6098: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6098u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
label_1b609c:
    // 0x1b609c: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x1b609cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1b60a0:
    // 0x1b60a0: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1b60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
label_1b60a4:
    // 0x1b60a4: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b60a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
label_1b60a8:
    // 0x1b60a8: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x1b60a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1b60ac:
    // 0x1b60ac: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1b60acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1b60b0:
    // 0x1b60b0: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1b60b0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_1b60b4:
    // 0x1b60b4: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b60b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
label_1b60b8:
    // 0x1b60b8: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1b60b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_1b60bc:
    // 0x1b60bc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b60c0:
    if (ctx->pc == 0x1B60C0u) {
        ctx->pc = 0x1B60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60BCu;
        // 0x1b60c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60C4u;
        goto label_1b60c4;
    }
    ctx->pc = 0x1B60BCu;
    {
        const bool branch_taken_0x1b60bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60bc) {
            ctx->pc = 0x1B60C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B60BCu;
            // 0x1b60c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B60C4u;
            goto label_1b60c4;
        }
    }
    ctx->pc = 0x1B60C4u;
label_1b60c4:
    // 0x1b60c4: 0x1012  mflo        $v0
    ctx->pc = 0x1b60c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b60c8:
    // 0x1b60c8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b60c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b60cc:
    // 0x1b60cc: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1b60ccu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b60d0:
    // 0x1b60d0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b60d4:
    // 0x1b60d4: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x1b60d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b60d8:
    // 0x1b60d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b60d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b60dc:
    // 0x1b60dc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b60dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b60e0:
    // 0x1b60e0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1b60e4:
    if (ctx->pc == 0x1B60E4u) {
        ctx->pc = 0x1B60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60E0u;
        // 0x1b60e4: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60E8u;
        goto label_1b60e8;
    }
    ctx->pc = 0x1B60E0u;
    {
        const bool branch_taken_0x1b60e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60e0) {
            ctx->pc = 0x1B60E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B60E0u;
            // 0x1b60e4: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6114u;
            goto label_1b6114;
        }
    }
    ctx->pc = 0x1B60E8u;
label_1b60e8:
    // 0x1b60e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b60ec:
    // 0x1b60ec: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b60ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b60f0:
    // 0x1b60f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b60f4:
    if (ctx->pc == 0x1B60F4u) {
        ctx->pc = 0x1B60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60F0u;
        // 0x1b60f4: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60F8u;
        goto label_1b60f8;
    }
    ctx->pc = 0x1B60F0u;
    {
        const bool branch_taken_0x1b60f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60F0u;
        // 0x1b60f4: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b60f0) {
            ctx->pc = 0x1B6110u;
            goto label_1b6110;
        }
    }
    ctx->pc = 0x1B60F8u;
label_1b60f8:
    // 0x1b60f8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b60f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b60fc:
    // 0x1b60fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b6100:
    if (ctx->pc == 0x1B6100u) {
        ctx->pc = 0x1B6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60FCu;
        // 0x1b6100: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6104u;
        goto label_1b6104;
    }
    ctx->pc = 0x1B60FCu;
    {
        const bool branch_taken_0x1b60fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60fc) {
            ctx->pc = 0x1B6100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B60FCu;
            // 0x1b6100: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6114u;
            goto label_1b6114;
        }
    }
    ctx->pc = 0x1B6104u;
label_1b6104:
    // 0x1b6104: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1b6104u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_1b6108:
    // 0x1b6108: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b610c:
    // 0x1b610c: 0x0  nop
    ctx->pc = 0x1b610cu;
    // NOP
label_1b6110:
    // 0x1b6110: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1b6110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1b6114:
    // 0x1b6114: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6118:
    if (ctx->pc == 0x1B6118u) {
        ctx->pc = 0x1B6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6114u;
        // 0x1b6118: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B611Cu;
        goto label_1b611c;
    }
    ctx->pc = 0x1B6114u;
    {
        const bool branch_taken_0x1b6114 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6114) {
            ctx->pc = 0x1B6118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6114u;
            // 0x1b6118: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B611Cu;
            goto label_1b611c;
        }
    }
    ctx->pc = 0x1B611Cu;
label_1b611c:
    // 0x1b611c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b611cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1b6120:
    // 0x1b6120: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b6120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1b6124:
    // 0x1b6124: 0x1012  mflo        $v0
    ctx->pc = 0x1b6124u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6128:
    // 0x1b6128: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6128u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b612c:
    // 0x1b612c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b612cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6130:
    // 0x1b6130: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b6134:
    // 0x1b6134: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x1b6134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1b6138:
    // 0x1b6138: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b6138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b613c:
    // 0x1b613c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b613cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b6140:
    // 0x1b6140: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_1b6144:
    if (ctx->pc == 0x1B6144u) {
        ctx->pc = 0x1B6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6140u;
        // 0x1b6144: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6148u;
        goto label_1b6148;
    }
    ctx->pc = 0x1B6140u;
    {
        const bool branch_taken_0x1b6140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6140) {
            ctx->pc = 0x1B6144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6140u;
            // 0x1b6144: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6170u;
            goto label_1b6170;
        }
    }
    ctx->pc = 0x1B6148u;
label_1b6148:
    // 0x1b6148: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1b6148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1b614c:
    // 0x1b614c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1b614cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6150:
    // 0x1b6150: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b6154:
    if (ctx->pc == 0x1B6154u) {
        ctx->pc = 0x1B6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6150u;
        // 0x1b6154: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6158u;
        goto label_1b6158;
    }
    ctx->pc = 0x1B6150u;
    {
        const bool branch_taken_0x1b6150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6150u;
        // 0x1b6154: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6150) {
            ctx->pc = 0x1B616Cu;
            goto label_1b616c;
        }
    }
    ctx->pc = 0x1B6158u;
label_1b6158:
    // 0x1b6158: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_1b615c:
    // 0x1b615c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b6160:
    if (ctx->pc == 0x1B6160u) {
        ctx->pc = 0x1B6160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B615Cu;
        // 0x1b6160: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6164u;
        goto label_1b6164;
    }
    ctx->pc = 0x1B615Cu;
    {
        const bool branch_taken_0x1b615c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b615c) {
            ctx->pc = 0x1B6160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B615Cu;
            // 0x1b6160: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6170u;
            goto label_1b6170;
        }
    }
    ctx->pc = 0x1B6164u;
label_1b6164:
    // 0x1b6164: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b6164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b6168:
    // 0x1b6168: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1b6168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1b616c:
    // 0x1b616c: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b616cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1b6170:
    // 0x1b6170: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x1b6170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1b6174:
    // 0x1b6174: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1b6174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1b6178:
    // 0x1b6178: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1b6178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b617c:
    // 0x1b617c: 0x470019  multu       $v0, $a3
    ctx->pc = 0x1b617cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1b6180:
    // 0x1b6180: 0x3010  mfhi        $a2
    ctx->pc = 0x1b6180u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1b6184:
    // 0x1b6184: 0x4012  mflo        $t0
    ctx->pc = 0x1b6184u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_1b6188:
    // 0x1b6188: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x1b6188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1b618c:
    // 0x1b618c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1b6190:
    if (ctx->pc == 0x1B6190u) {
        ctx->pc = 0x1B6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B618Cu;
        // 0x1b6190: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6194u;
        goto label_1b6194;
    }
    ctx->pc = 0x1B618Cu;
    {
        const bool branch_taken_0x1b618c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B618Cu;
        // 0x1b6190: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b618c) {
            ctx->pc = 0x1B61A8u;
            goto label_1b61a8;
        }
    }
    ctx->pc = 0x1B6194u;
label_1b6194:
    // 0x1b6194: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
label_1b6198:
    if (ctx->pc == 0x1B6198u) {
        ctx->pc = 0x1B6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6194u;
        // 0x1b6198: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B619Cu;
        goto label_1b619c;
    }
    ctx->pc = 0x1B6194u;
    {
        const bool branch_taken_0x1b6194 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x1B6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6194u;
        // 0x1b6198: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6194) {
            ctx->pc = 0x1B61B8u;
            goto label_1b61b8;
        }
    }
    ctx->pc = 0x1B619Cu;
label_1b619c:
    // 0x1b619c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b61a0:
    if (ctx->pc == 0x1B61A0u) {
        ctx->pc = 0x1B61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B619Cu;
        // 0x1b61a0: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B61A4u;
        goto label_1b61a4;
    }
    ctx->pc = 0x1B619Cu;
    {
        const bool branch_taken_0x1b619c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B619Cu;
        // 0x1b61a0: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b619c) {
            ctx->pc = 0x1B61B8u;
            goto label_1b61b8;
        }
    }
    ctx->pc = 0x1B61A4u;
label_1b61a4:
    // 0x1b61a4: 0x0  nop
    ctx->pc = 0x1b61a4u;
    // NOP
label_1b61a8:
    // 0x1b61a8: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x1b61a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1b61ac:
    // 0x1b61ac: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x1b61acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b61b0:
    // 0x1b61b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b61b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b61b4:
    // 0x1b61b4: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x1b61b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b61b8:
    // 0x1b61b8: 0x13200014  beqz        $t9, . + 4 + (0x14 << 2)
label_1b61bc:
    if (ctx->pc == 0x1B61BCu) {
        ctx->pc = 0x1B61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61B8u;
        // 0x1b61bc: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B61C0u;
        goto label_1b61c0;
    }
    ctx->pc = 0x1B61B8u;
    {
        const bool branch_taken_0x1b61b8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61B8u;
        // 0x1b61bc: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61b8) {
            ctx->pc = 0x1B620Cu;
            goto label_1b620c;
        }
    }
    ctx->pc = 0x1B61C0u;
label_1b61c0:
    // 0x1b61c0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1b61c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1b61c4:
    // 0x1b61c4: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x1b61c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b61c8:
    // 0x1b61c8: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x1b61c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b61cc:
    // 0x1b61cc: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x1b61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
label_1b61d0:
    // 0x1b61d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b61d4:
    // 0x1b61d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b61d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b61d8:
    // 0x1b61d8: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x1b61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
label_1b61dc:
    // 0x1b61dc: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b61dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_1b61e0:
    // 0x1b61e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b61e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1b61e4:
    // 0x1b61e4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1b61e8:
    // 0x1b61e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b61e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1b61ec:
    // 0x1b61ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b61ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b61f0:
    // 0x1b61f0: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x1b61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
label_1b61f4:
    // 0x1b61f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b61f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b61f8:
    // 0x1b61f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b61f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b61fc:
    // 0x1b61fc: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b61fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_1b6200:
    // 0x1b6200: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x1b6200u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
label_1b6204:
    // 0x1b6204: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1b6204u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_1b6208:
    // 0x1b6208: 0xff2b0000  sd          $t3, 0x0($t9)
    ctx->pc = 0x1b6208u;
    WRITE64(ADD32(GPR_U32(ctx, 25), 0), GPR_U64(ctx, 11));
label_1b620c:
    // 0x1b620c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_1b6210:
    if (ctx->pc == 0x1B6210u) {
        ctx->pc = 0x1B6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B620Cu;
        // 0x1b6210: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6214u;
        goto label_1b6214;
    }
    ctx->pc = 0x1B620Cu;
    {
        const bool branch_taken_0x1b620c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B620Cu;
        // 0x1b6210: 0xdfa30000  ld          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b620c) {
            ctx->pc = 0x1B6268u;
            goto label_1b6268;
        }
    }
    ctx->pc = 0x1B6214u;
label_1b6214:
    // 0x1b6214: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b6214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6218:
    // 0x1b6218: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b6218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1b621c:
    // 0x1b621c: 0x304c024  and         $t8, $t8, $a0
    ctx->pc = 0x1b621cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 4));
label_1b6220:
    // 0x1b6220: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b6220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_1b6224:
    // 0x1b6224: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b6224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b6228:
    // 0x1b6228: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b6228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1b622c:
    // 0x1b622c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b622cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b6230:
    // 0x1b6230: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1b6230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1b6234:
    // 0x1b6234: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b6238:
    // 0x1b6238: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b623c:
    // 0x1b623c: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x1b623cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
label_1b6240:
    // 0x1b6240: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b6240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b6244:
    // 0x1b6244: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6248:
    // 0x1b6248: 0x18203c  dsll32      $a0, $t8, 0
    ctx->pc = 0x1b6248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) << (32 + 0));
label_1b624c:
    // 0x1b624c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b624cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1b6250:
    // 0x1b6250: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x1b6250u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
label_1b6254:
    // 0x1b6254: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x1b6254u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b6258:
    // 0x1b6258: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b6258u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b625c:
    // 0x1b625c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b625cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1b6260:
    // 0x1b6260: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x1b6260u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
label_1b6264:
    // 0x1b6264: 0xffb80000  sd          $t8, 0x0($sp)
    ctx->pc = 0x1b6264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 24));
label_1b6268:
    // 0x1b6268: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x1b6268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b626c:
    // 0x1b626c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b626cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6270:
    // 0x1b6270: 0x3e00008  jr          $ra
label_1b6274:
    if (ctx->pc == 0x1B6274u) {
        ctx->pc = 0x1B6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6270u;
        // 0x1b6274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6278u;
        goto label_1b6278;
    }
    ctx->pc = 0x1B6270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6270u;
        // 0x1b6274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6278u;
label_1b6278:
    // 0x1b6278: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x1b6278u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
label_1b627c:
    // 0x1b627c: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x1b627cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
label_1b6280:
    // 0x1b6280: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1b6280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
label_1b6284:
    // 0x1b6284: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1b6284u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_1b6288:
    // 0x1b6288: 0x4583c  dsll32      $t3, $a0, 0
    ctx->pc = 0x1b6288u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 0));
label_1b628c:
    // 0x1b628c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1b628cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_1b6290:
    // 0x1b6290: 0x150000e1  bnez        $t0, . + 4 + (0xE1 << 2)
label_1b6294:
    if (ctx->pc == 0x1B6294u) {
        ctx->pc = 0x1B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6290u;
        // 0x1b6294: 0x148102b  sltu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6298u;
        goto label_1b6298;
    }
    ctx->pc = 0x1B6290u;
    {
        const bool branch_taken_0x1b6290 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6290u;
        // 0x1b6294: 0x148102b  sltu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6290) {
            ctx->pc = 0x1B6618u;
            { ctx->pc = 0x1b6618; return; }
        }
    }
    ctx->pc = 0x1B6298u;
label_1b6298:
    // 0x1b6298: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1b6298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b629c:
    // 0x1b629c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_1b62a0:
    if (ctx->pc == 0x1B62A0u) {
        ctx->pc = 0x1B62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B629Cu;
        // 0x1b62a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62A4u;
        goto label_1b62a4;
    }
    ctx->pc = 0x1B629Cu;
    {
        const bool branch_taken_0x1b629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B629Cu;
        // 0x1b62a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b629c) {
            ctx->pc = 0x1B63D8u;
            { ctx->pc = 0x1b63d8; return; }
        }
    }
    ctx->pc = 0x1B62A4u;
label_1b62a4:
    // 0x1b62a4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b62a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b62a8:
    // 0x1b62a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b62ac:
    if (ctx->pc == 0x1B62ACu) {
        ctx->pc = 0x1B62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62A8u;
        // 0x1b62ac: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62B0u;
        goto label_1b62b0;
    }
    ctx->pc = 0x1B62A8u;
    {
        const bool branch_taken_0x1b62a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62A8u;
        // 0x1b62ac: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62a8) {
            ctx->pc = 0x1B62C0u;
            goto label_1b62c0;
        }
    }
    ctx->pc = 0x1B62B0u;
label_1b62b0:
    // 0x1b62b0: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b62b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1b62b4:
    // 0x1b62b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b62b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b62b8:
    // 0x1b62b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b62bc:
    if (ctx->pc == 0x1B62BCu) {
        ctx->pc = 0x1B62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62B8u;
        // 0x1b62bc: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62C0u;
        goto label_1b62c0;
    }
    ctx->pc = 0x1B62B8u;
    {
        const bool branch_taken_0x1b62b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62B8u;
        // 0x1b62bc: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62b8) {
            ctx->pc = 0x1B62D4u;
            goto label_1b62d4;
        }
    }
    ctx->pc = 0x1B62C0u;
label_1b62c0:
    // 0x1b62c0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1b62c4:
    // 0x1b62c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b62c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b62c8:
    // 0x1b62c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b62c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b62cc:
    // 0x1b62cc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b62ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b62d0:
    // 0x1b62d0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b62d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b62d4:
    // 0x1b62d4: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b62d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
label_1b62d8:
    // 0x1b62d8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b62d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1b62dc:
    // 0x1b62dc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b62e0:
    // 0x1b62e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b62e4:
    // 0x1b62e4: 0x9042b4b0  lbu         $v0, -0x4B50($v0)
    ctx->pc = 0x1b62e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948016)));
label_1b62e8:
    // 0x1b62e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b62ec:
    // 0x1b62ec: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b62ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b62f0:
    // 0x1b62f0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1b62f4:
    if (ctx->pc == 0x1B62F4u) {
        ctx->pc = 0x1B62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62F0u;
        // 0x1b62f4: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62F8u;
        goto label_1b62f8;
    }
    ctx->pc = 0x1B62F0u;
    {
        const bool branch_taken_0x1b62f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62F0u;
        // 0x1b62f4: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62f0) {
            ctx->pc = 0x1B630Cu;
            goto label_1b630c;
        }
    }
    ctx->pc = 0x1B62F8u;
label_1b62f8:
    // 0x1b62f8: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1b62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
label_1b62fc:
    // 0x1b62fc: 0x4b1006  srlv        $v0, $t3, $v0
    ctx->pc = 0x1b62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
label_1b6300:
    // 0x1b6300: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1b6300u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
label_1b6304:
    // 0x1b6304: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b6304u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b6308:
    // 0x1b6308: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1b6308u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
label_1b630c:
    // 0x1b630c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1b630cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1b6310:
    // 0x1b6310: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x1b6310u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_1b6314:
    // 0x1b6314: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1b6314u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
label_1b6318:
    // 0x1b6318: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1b6318u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1b631c:
    // 0x1b631c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6320:
    if (ctx->pc == 0x1B6320u) {
        ctx->pc = 0x1B6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B631Cu;
        // 0x1b6320: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6324u;
        goto label_1b6324;
    }
    ctx->pc = 0x1B631Cu;
    {
        const bool branch_taken_0x1b631c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b631c) {
            ctx->pc = 0x1B6320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B631Cu;
            // 0x1b6320: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6324u;
            goto label_1b6324;
        }
    }
    ctx->pc = 0x1B6324u;
label_1b6324:
    // 0x1b6324: 0x1012  mflo        $v0
    ctx->pc = 0x1b6324u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6328:
    // 0x1b6328: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6328u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b632c:
    // 0x1b632c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b632cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6330:
    // 0x1b6330: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b6334:
    // 0x1b6334: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1b6334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b6338:
    // 0x1b6338: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b6338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b633c:
    // 0x1b633c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b633cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b6340:
    // 0x1b6340: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1b6344:
    if (ctx->pc == 0x1B6344u) {
        ctx->pc = 0x1B6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6340u;
        // 0x1b6344: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6348u;
        goto label_1b6348;
    }
    ctx->pc = 0x1B6340u;
    {
        const bool branch_taken_0x1b6340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6340) {
            ctx->pc = 0x1B6344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6340u;
            // 0x1b6344: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6374u;
            goto label_1b6374;
        }
    }
    ctx->pc = 0x1B6348u;
label_1b6348:
    // 0x1b6348: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b634c:
    // 0x1b634c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b634cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b6350:
    // 0x1b6350: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b6354:
    if (ctx->pc == 0x1B6354u) {
        ctx->pc = 0x1B6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6350u;
        // 0x1b6354: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6358u;
        goto label_1b6358;
    }
    ctx->pc = 0x1B6350u;
    {
        const bool branch_taken_0x1b6350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6350u;
        // 0x1b6354: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6350) {
            ctx->pc = 0x1B6370u;
            goto label_1b6370;
        }
    }
    ctx->pc = 0x1B6358u;
label_1b6358:
    // 0x1b6358: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b6358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b635c:
    // 0x1b635c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b6360:
    if (ctx->pc == 0x1B6360u) {
        ctx->pc = 0x1B6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B635Cu;
        // 0x1b6360: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6364u;
        goto label_1b6364;
    }
    ctx->pc = 0x1B635Cu;
    {
        const bool branch_taken_0x1b635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b635c) {
            ctx->pc = 0x1B6360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B635Cu;
            // 0x1b6360: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6374u;
            goto label_1b6374;
        }
    }
    ctx->pc = 0x1B6364u;
label_1b6364:
    // 0x1b6364: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1b6368:
    // 0x1b6368: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b636c:
    // 0x1b636c: 0x0  nop
    ctx->pc = 0x1b636cu;
    // NOP
label_1b6370:
    // 0x1b6370: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b6370u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b6374:
    // 0x1b6374: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1b6378:
    if (ctx->pc == 0x1B6378u) {
        ctx->pc = 0x1B6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6374u;
        // 0x1b6378: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B637Cu;
        goto label_1b637c;
    }
    ctx->pc = 0x1B6374u;
    {
        const bool branch_taken_0x1b6374 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6374) {
            ctx->pc = 0x1B6378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6374u;
            // 0x1b6378: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B637Cu;
            goto label_1b637c;
        }
    }
    ctx->pc = 0x1B637Cu;
label_1b637c:
    // 0x1b637c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b637cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_1b6380:
    // 0x1b6380: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1b6380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_1b6384:
    // 0x1b6384: 0x1012  mflo        $v0
    ctx->pc = 0x1b6384u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1b6388:
    // 0x1b6388: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6388u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1b638c:
    // 0x1b638c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b638cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6390:
    // 0x1b6390: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1b6394:
    // 0x1b6394: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x1b6394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->pc = 0x1b6398u;
    return;
}

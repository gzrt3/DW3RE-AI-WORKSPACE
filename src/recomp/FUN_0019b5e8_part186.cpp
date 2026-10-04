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


void FUN_0019b5e8_part186(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f5b38u: goto label_1f5b38;
        case 0x1f5b3cu: goto label_1f5b3c;
        case 0x1f5b40u: goto label_1f5b40;
        case 0x1f5b44u: goto label_1f5b44;
        case 0x1f5b48u: goto label_1f5b48;
        case 0x1f5b4cu: goto label_1f5b4c;
        case 0x1f5b50u: goto label_1f5b50;
        case 0x1f5b54u: goto label_1f5b54;
        case 0x1f5b58u: goto label_1f5b58;
        case 0x1f5b5cu: goto label_1f5b5c;
        case 0x1f5b60u: goto label_1f5b60;
        case 0x1f5b64u: goto label_1f5b64;
        case 0x1f5b68u: goto label_1f5b68;
        case 0x1f5b6cu: goto label_1f5b6c;
        case 0x1f5b70u: goto label_1f5b70;
        case 0x1f5b74u: goto label_1f5b74;
        case 0x1f5b78u: goto label_1f5b78;
        case 0x1f5b7cu: goto label_1f5b7c;
        case 0x1f5b80u: goto label_1f5b80;
        case 0x1f5b84u: goto label_1f5b84;
        case 0x1f5b88u: goto label_1f5b88;
        case 0x1f5b8cu: goto label_1f5b8c;
        case 0x1f5b90u: goto label_1f5b90;
        case 0x1f5b94u: goto label_1f5b94;
        case 0x1f5b98u: goto label_1f5b98;
        case 0x1f5b9cu: goto label_1f5b9c;
        case 0x1f5ba0u: goto label_1f5ba0;
        case 0x1f5ba4u: goto label_1f5ba4;
        case 0x1f5ba8u: goto label_1f5ba8;
        case 0x1f5bacu: goto label_1f5bac;
        case 0x1f5bb0u: goto label_1f5bb0;
        case 0x1f5bb4u: goto label_1f5bb4;
        case 0x1f5bb8u: goto label_1f5bb8;
        case 0x1f5bbcu: goto label_1f5bbc;
        case 0x1f5bc0u: goto label_1f5bc0;
        case 0x1f5bc4u: goto label_1f5bc4;
        case 0x1f5bc8u: goto label_1f5bc8;
        case 0x1f5bccu: goto label_1f5bcc;
        case 0x1f5bd0u: goto label_1f5bd0;
        case 0x1f5bd4u: goto label_1f5bd4;
        case 0x1f5bd8u: goto label_1f5bd8;
        case 0x1f5bdcu: goto label_1f5bdc;
        case 0x1f5be0u: goto label_1f5be0;
        case 0x1f5be4u: goto label_1f5be4;
        case 0x1f5be8u: goto label_1f5be8;
        case 0x1f5becu: goto label_1f5bec;
        case 0x1f5bf0u: goto label_1f5bf0;
        case 0x1f5bf4u: goto label_1f5bf4;
        case 0x1f5bf8u: goto label_1f5bf8;
        case 0x1f5bfcu: goto label_1f5bfc;
        case 0x1f5c00u: goto label_1f5c00;
        case 0x1f5c04u: goto label_1f5c04;
        case 0x1f5c08u: goto label_1f5c08;
        case 0x1f5c0cu: goto label_1f5c0c;
        case 0x1f5c10u: goto label_1f5c10;
        case 0x1f5c14u: goto label_1f5c14;
        case 0x1f5c18u: goto label_1f5c18;
        case 0x1f5c1cu: goto label_1f5c1c;
        case 0x1f5c20u: goto label_1f5c20;
        case 0x1f5c24u: goto label_1f5c24;
        case 0x1f5c28u: goto label_1f5c28;
        case 0x1f5c2cu: goto label_1f5c2c;
        case 0x1f5c30u: goto label_1f5c30;
        case 0x1f5c34u: goto label_1f5c34;
        case 0x1f5c38u: goto label_1f5c38;
        case 0x1f5c3cu: goto label_1f5c3c;
        case 0x1f5c40u: goto label_1f5c40;
        case 0x1f5c44u: goto label_1f5c44;
        case 0x1f5c48u: goto label_1f5c48;
        case 0x1f5c4cu: goto label_1f5c4c;
        case 0x1f5c50u: goto label_1f5c50;
        case 0x1f5c54u: goto label_1f5c54;
        case 0x1f5c58u: goto label_1f5c58;
        case 0x1f5c5cu: goto label_1f5c5c;
        case 0x1f5c60u: goto label_1f5c60;
        case 0x1f5c64u: goto label_1f5c64;
        case 0x1f5c68u: goto label_1f5c68;
        case 0x1f5c6cu: goto label_1f5c6c;
        case 0x1f5c70u: goto label_1f5c70;
        case 0x1f5c74u: goto label_1f5c74;
        case 0x1f5c78u: goto label_1f5c78;
        case 0x1f5c7cu: goto label_1f5c7c;
        case 0x1f5c80u: goto label_1f5c80;
        case 0x1f5c84u: goto label_1f5c84;
        case 0x1f5c88u: goto label_1f5c88;
        case 0x1f5c8cu: goto label_1f5c8c;
        case 0x1f5c90u: goto label_1f5c90;
        case 0x1f5c94u: goto label_1f5c94;
        case 0x1f5c98u: goto label_1f5c98;
        case 0x1f5c9cu: goto label_1f5c9c;
        case 0x1f5ca0u: goto label_1f5ca0;
        case 0x1f5ca4u: goto label_1f5ca4;
        case 0x1f5ca8u: goto label_1f5ca8;
        case 0x1f5cacu: goto label_1f5cac;
        case 0x1f5cb0u: goto label_1f5cb0;
        case 0x1f5cb4u: goto label_1f5cb4;
        case 0x1f5cb8u: goto label_1f5cb8;
        case 0x1f5cbcu: goto label_1f5cbc;
        case 0x1f5cc0u: goto label_1f5cc0;
        case 0x1f5cc4u: goto label_1f5cc4;
        case 0x1f5cc8u: goto label_1f5cc8;
        case 0x1f5cccu: goto label_1f5ccc;
        case 0x1f5cd0u: goto label_1f5cd0;
        case 0x1f5cd4u: goto label_1f5cd4;
        case 0x1f5cd8u: goto label_1f5cd8;
        case 0x1f5cdcu: goto label_1f5cdc;
        case 0x1f5ce0u: goto label_1f5ce0;
        case 0x1f5ce4u: goto label_1f5ce4;
        case 0x1f5ce8u: goto label_1f5ce8;
        case 0x1f5cecu: goto label_1f5cec;
        case 0x1f5cf0u: goto label_1f5cf0;
        case 0x1f5cf4u: goto label_1f5cf4;
        case 0x1f5cf8u: goto label_1f5cf8;
        case 0x1f5cfcu: goto label_1f5cfc;
        case 0x1f5d00u: goto label_1f5d00;
        case 0x1f5d04u: goto label_1f5d04;
        case 0x1f5d08u: goto label_1f5d08;
        case 0x1f5d0cu: goto label_1f5d0c;
        case 0x1f5d10u: goto label_1f5d10;
        case 0x1f5d14u: goto label_1f5d14;
        case 0x1f5d18u: goto label_1f5d18;
        case 0x1f5d1cu: goto label_1f5d1c;
        case 0x1f5d20u: goto label_1f5d20;
        case 0x1f5d24u: goto label_1f5d24;
        case 0x1f5d28u: goto label_1f5d28;
        case 0x1f5d2cu: goto label_1f5d2c;
        case 0x1f5d30u: goto label_1f5d30;
        case 0x1f5d34u: goto label_1f5d34;
        case 0x1f5d38u: goto label_1f5d38;
        case 0x1f5d3cu: goto label_1f5d3c;
        case 0x1f5d40u: goto label_1f5d40;
        case 0x1f5d44u: goto label_1f5d44;
        case 0x1f5d48u: goto label_1f5d48;
        case 0x1f5d4cu: goto label_1f5d4c;
        case 0x1f5d50u: goto label_1f5d50;
        case 0x1f5d54u: goto label_1f5d54;
        case 0x1f5d58u: goto label_1f5d58;
        case 0x1f5d5cu: goto label_1f5d5c;
        case 0x1f5d60u: goto label_1f5d60;
        case 0x1f5d64u: goto label_1f5d64;
        case 0x1f5d68u: goto label_1f5d68;
        case 0x1f5d6cu: goto label_1f5d6c;
        case 0x1f5d70u: goto label_1f5d70;
        case 0x1f5d74u: goto label_1f5d74;
        case 0x1f5d78u: goto label_1f5d78;
        case 0x1f5d7cu: goto label_1f5d7c;
        case 0x1f5d80u: goto label_1f5d80;
        case 0x1f5d84u: goto label_1f5d84;
        case 0x1f5d88u: goto label_1f5d88;
        case 0x1f5d8cu: goto label_1f5d8c;
        case 0x1f5d90u: goto label_1f5d90;
        case 0x1f5d94u: goto label_1f5d94;
        case 0x1f5d98u: goto label_1f5d98;
        case 0x1f5d9cu: goto label_1f5d9c;
        case 0x1f5da0u: goto label_1f5da0;
        case 0x1f5da4u: goto label_1f5da4;
        case 0x1f5da8u: goto label_1f5da8;
        case 0x1f5dacu: goto label_1f5dac;
        case 0x1f5db0u: goto label_1f5db0;
        case 0x1f5db4u: goto label_1f5db4;
        case 0x1f5db8u: goto label_1f5db8;
        case 0x1f5dbcu: goto label_1f5dbc;
        case 0x1f5dc0u: goto label_1f5dc0;
        case 0x1f5dc4u: goto label_1f5dc4;
        case 0x1f5dc8u: goto label_1f5dc8;
        case 0x1f5dccu: goto label_1f5dcc;
        case 0x1f5dd0u: goto label_1f5dd0;
        case 0x1f5dd4u: goto label_1f5dd4;
        case 0x1f5dd8u: goto label_1f5dd8;
        case 0x1f5ddcu: goto label_1f5ddc;
        case 0x1f5de0u: goto label_1f5de0;
        case 0x1f5de4u: goto label_1f5de4;
        case 0x1f5de8u: goto label_1f5de8;
        case 0x1f5decu: goto label_1f5dec;
        case 0x1f5df0u: goto label_1f5df0;
        case 0x1f5df4u: goto label_1f5df4;
        case 0x1f5df8u: goto label_1f5df8;
        case 0x1f5dfcu: goto label_1f5dfc;
        case 0x1f5e00u: goto label_1f5e00;
        case 0x1f5e04u: goto label_1f5e04;
        case 0x1f5e08u: goto label_1f5e08;
        case 0x1f5e0cu: goto label_1f5e0c;
        case 0x1f5e10u: goto label_1f5e10;
        case 0x1f5e14u: goto label_1f5e14;
        case 0x1f5e18u: goto label_1f5e18;
        case 0x1f5e1cu: goto label_1f5e1c;
        case 0x1f5e20u: goto label_1f5e20;
        case 0x1f5e24u: goto label_1f5e24;
        case 0x1f5e28u: goto label_1f5e28;
        case 0x1f5e2cu: goto label_1f5e2c;
        case 0x1f5e30u: goto label_1f5e30;
        case 0x1f5e34u: goto label_1f5e34;
        case 0x1f5e38u: goto label_1f5e38;
        case 0x1f5e3cu: goto label_1f5e3c;
        case 0x1f5e40u: goto label_1f5e40;
        case 0x1f5e44u: goto label_1f5e44;
        case 0x1f5e48u: goto label_1f5e48;
        case 0x1f5e4cu: goto label_1f5e4c;
        case 0x1f5e50u: goto label_1f5e50;
        case 0x1f5e54u: goto label_1f5e54;
        case 0x1f5e58u: goto label_1f5e58;
        case 0x1f5e5cu: goto label_1f5e5c;
        case 0x1f5e60u: goto label_1f5e60;
        case 0x1f5e64u: goto label_1f5e64;
        case 0x1f5e68u: goto label_1f5e68;
        case 0x1f5e6cu: goto label_1f5e6c;
        case 0x1f5e70u: goto label_1f5e70;
        case 0x1f5e74u: goto label_1f5e74;
        case 0x1f5e78u: goto label_1f5e78;
        case 0x1f5e7cu: goto label_1f5e7c;
        case 0x1f5e80u: goto label_1f5e80;
        case 0x1f5e84u: goto label_1f5e84;
        case 0x1f5e88u: goto label_1f5e88;
        case 0x1f5e8cu: goto label_1f5e8c;
        case 0x1f5e90u: goto label_1f5e90;
        case 0x1f5e94u: goto label_1f5e94;
        case 0x1f5e98u: goto label_1f5e98;
        case 0x1f5e9cu: goto label_1f5e9c;
        case 0x1f5ea0u: goto label_1f5ea0;
        case 0x1f5ea4u: goto label_1f5ea4;
        case 0x1f5ea8u: goto label_1f5ea8;
        case 0x1f5eacu: goto label_1f5eac;
        case 0x1f5eb0u: goto label_1f5eb0;
        case 0x1f5eb4u: goto label_1f5eb4;
        case 0x1f5eb8u: goto label_1f5eb8;
        case 0x1f5ebcu: goto label_1f5ebc;
        case 0x1f5ec0u: goto label_1f5ec0;
        case 0x1f5ec4u: goto label_1f5ec4;
        case 0x1f5ec8u: goto label_1f5ec8;
        case 0x1f5eccu: goto label_1f5ecc;
        case 0x1f5ed0u: goto label_1f5ed0;
        case 0x1f5ed4u: goto label_1f5ed4;
        case 0x1f5ed8u: goto label_1f5ed8;
        case 0x1f5edcu: goto label_1f5edc;
        case 0x1f5ee0u: goto label_1f5ee0;
        case 0x1f5ee4u: goto label_1f5ee4;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5eecu: goto label_1f5eec;
        case 0x1f5ef0u: goto label_1f5ef0;
        case 0x1f5ef4u: goto label_1f5ef4;
        case 0x1f5ef8u: goto label_1f5ef8;
        case 0x1f5efcu: goto label_1f5efc;
        case 0x1f5f00u: goto label_1f5f00;
        case 0x1f5f04u: goto label_1f5f04;
        case 0x1f5f08u: goto label_1f5f08;
        case 0x1f5f0cu: goto label_1f5f0c;
        case 0x1f5f10u: goto label_1f5f10;
        case 0x1f5f14u: goto label_1f5f14;
        case 0x1f5f18u: goto label_1f5f18;
        case 0x1f5f1cu: goto label_1f5f1c;
        case 0x1f5f20u: goto label_1f5f20;
        case 0x1f5f24u: goto label_1f5f24;
        case 0x1f5f28u: goto label_1f5f28;
        case 0x1f5f2cu: goto label_1f5f2c;
        case 0x1f5f30u: goto label_1f5f30;
        case 0x1f5f34u: goto label_1f5f34;
        case 0x1f5f38u: goto label_1f5f38;
        case 0x1f5f3cu: goto label_1f5f3c;
        case 0x1f5f40u: goto label_1f5f40;
        case 0x1f5f44u: goto label_1f5f44;
        case 0x1f5f48u: goto label_1f5f48;
        case 0x1f5f4cu: goto label_1f5f4c;
        case 0x1f5f50u: goto label_1f5f50;
        case 0x1f5f54u: goto label_1f5f54;
        case 0x1f5f58u: goto label_1f5f58;
        case 0x1f5f5cu: goto label_1f5f5c;
        case 0x1f5f60u: goto label_1f5f60;
        case 0x1f5f64u: goto label_1f5f64;
        case 0x1f5f68u: goto label_1f5f68;
        case 0x1f5f6cu: goto label_1f5f6c;
        case 0x1f5f70u: goto label_1f5f70;
        case 0x1f5f74u: goto label_1f5f74;
        case 0x1f5f78u: goto label_1f5f78;
        case 0x1f5f7cu: goto label_1f5f7c;
        case 0x1f5f80u: goto label_1f5f80;
        case 0x1f5f84u: goto label_1f5f84;
        case 0x1f5f88u: goto label_1f5f88;
        case 0x1f5f8cu: goto label_1f5f8c;
        case 0x1f5f90u: goto label_1f5f90;
        case 0x1f5f94u: goto label_1f5f94;
        case 0x1f5f98u: goto label_1f5f98;
        case 0x1f5f9cu: goto label_1f5f9c;
        case 0x1f5fa0u: goto label_1f5fa0;
        case 0x1f5fa4u: goto label_1f5fa4;
        case 0x1f5fa8u: goto label_1f5fa8;
        case 0x1f5facu: goto label_1f5fac;
        case 0x1f5fb0u: goto label_1f5fb0;
        case 0x1f5fb4u: goto label_1f5fb4;
        case 0x1f5fb8u: goto label_1f5fb8;
        case 0x1f5fbcu: goto label_1f5fbc;
        case 0x1f5fc0u: goto label_1f5fc0;
        case 0x1f5fc4u: goto label_1f5fc4;
        case 0x1f5fc8u: goto label_1f5fc8;
        case 0x1f5fccu: goto label_1f5fcc;
        case 0x1f5fd0u: goto label_1f5fd0;
        case 0x1f5fd4u: goto label_1f5fd4;
        case 0x1f5fd8u: goto label_1f5fd8;
        case 0x1f5fdcu: goto label_1f5fdc;
        case 0x1f5fe0u: goto label_1f5fe0;
        case 0x1f5fe4u: goto label_1f5fe4;
        case 0x1f5fe8u: goto label_1f5fe8;
        case 0x1f5fecu: goto label_1f5fec;
        case 0x1f5ff0u: goto label_1f5ff0;
        case 0x1f5ff4u: goto label_1f5ff4;
        case 0x1f5ff8u: goto label_1f5ff8;
        case 0x1f5ffcu: goto label_1f5ffc;
        case 0x1f6000u: goto label_1f6000;
        case 0x1f6004u: goto label_1f6004;
        case 0x1f6008u: goto label_1f6008;
        case 0x1f600cu: goto label_1f600c;
        case 0x1f6010u: goto label_1f6010;
        case 0x1f6014u: goto label_1f6014;
        case 0x1f6018u: goto label_1f6018;
        case 0x1f601cu: goto label_1f601c;
        case 0x1f6020u: goto label_1f6020;
        case 0x1f6024u: goto label_1f6024;
        case 0x1f6028u: goto label_1f6028;
        case 0x1f602cu: goto label_1f602c;
        case 0x1f6030u: goto label_1f6030;
        case 0x1f6034u: goto label_1f6034;
        case 0x1f6038u: goto label_1f6038;
        case 0x1f603cu: goto label_1f603c;
        case 0x1f6040u: goto label_1f6040;
        case 0x1f6044u: goto label_1f6044;
        case 0x1f6048u: goto label_1f6048;
        case 0x1f604cu: goto label_1f604c;
        case 0x1f6050u: goto label_1f6050;
        case 0x1f6054u: goto label_1f6054;
        case 0x1f6058u: goto label_1f6058;
        case 0x1f605cu: goto label_1f605c;
        case 0x1f6060u: goto label_1f6060;
        case 0x1f6064u: goto label_1f6064;
        case 0x1f6068u: goto label_1f6068;
        case 0x1f606cu: goto label_1f606c;
        case 0x1f6070u: goto label_1f6070;
        case 0x1f6074u: goto label_1f6074;
        case 0x1f6078u: goto label_1f6078;
        case 0x1f607cu: goto label_1f607c;
        case 0x1f6080u: goto label_1f6080;
        case 0x1f6084u: goto label_1f6084;
        case 0x1f6088u: goto label_1f6088;
        case 0x1f608cu: goto label_1f608c;
        case 0x1f6090u: goto label_1f6090;
        case 0x1f6094u: goto label_1f6094;
        case 0x1f6098u: goto label_1f6098;
        case 0x1f609cu: goto label_1f609c;
        case 0x1f60a0u: goto label_1f60a0;
        case 0x1f60a4u: goto label_1f60a4;
        case 0x1f60a8u: goto label_1f60a8;
        case 0x1f60acu: goto label_1f60ac;
        case 0x1f60b0u: goto label_1f60b0;
        case 0x1f60b4u: goto label_1f60b4;
        case 0x1f60b8u: goto label_1f60b8;
        case 0x1f60bcu: goto label_1f60bc;
        case 0x1f60c0u: goto label_1f60c0;
        case 0x1f60c4u: goto label_1f60c4;
        case 0x1f60c8u: goto label_1f60c8;
        case 0x1f60ccu: goto label_1f60cc;
        case 0x1f60d0u: goto label_1f60d0;
        case 0x1f60d4u: goto label_1f60d4;
        case 0x1f60d8u: goto label_1f60d8;
        case 0x1f60dcu: goto label_1f60dc;
        case 0x1f60e0u: goto label_1f60e0;
        case 0x1f60e4u: goto label_1f60e4;
        case 0x1f60e8u: goto label_1f60e8;
        case 0x1f60ecu: goto label_1f60ec;
        case 0x1f60f0u: goto label_1f60f0;
        case 0x1f60f4u: goto label_1f60f4;
        case 0x1f60f8u: goto label_1f60f8;
        case 0x1f60fcu: goto label_1f60fc;
        case 0x1f6100u: goto label_1f6100;
        case 0x1f6104u: goto label_1f6104;
        case 0x1f6108u: goto label_1f6108;
        case 0x1f610cu: goto label_1f610c;
        case 0x1f6110u: goto label_1f6110;
        case 0x1f6114u: goto label_1f6114;
        case 0x1f6118u: goto label_1f6118;
        case 0x1f611cu: goto label_1f611c;
        case 0x1f6120u: goto label_1f6120;
        case 0x1f6124u: goto label_1f6124;
        case 0x1f6128u: goto label_1f6128;
        case 0x1f612cu: goto label_1f612c;
        case 0x1f6130u: goto label_1f6130;
        case 0x1f6134u: goto label_1f6134;
        case 0x1f6138u: goto label_1f6138;
        case 0x1f613cu: goto label_1f613c;
        case 0x1f6140u: goto label_1f6140;
        case 0x1f6144u: goto label_1f6144;
        case 0x1f6148u: goto label_1f6148;
        case 0x1f614cu: goto label_1f614c;
        case 0x1f6150u: goto label_1f6150;
        case 0x1f6154u: goto label_1f6154;
        case 0x1f6158u: goto label_1f6158;
        case 0x1f615cu: goto label_1f615c;
        case 0x1f6160u: goto label_1f6160;
        case 0x1f6164u: goto label_1f6164;
        case 0x1f6168u: goto label_1f6168;
        case 0x1f616cu: goto label_1f616c;
        case 0x1f6170u: goto label_1f6170;
        case 0x1f6174u: goto label_1f6174;
        case 0x1f6178u: goto label_1f6178;
        case 0x1f617cu: goto label_1f617c;
        case 0x1f6180u: goto label_1f6180;
        case 0x1f6184u: goto label_1f6184;
        case 0x1f6188u: goto label_1f6188;
        case 0x1f618cu: goto label_1f618c;
        case 0x1f6190u: goto label_1f6190;
        case 0x1f6194u: goto label_1f6194;
        case 0x1f6198u: goto label_1f6198;
        case 0x1f619cu: goto label_1f619c;
        case 0x1f61a0u: goto label_1f61a0;
        case 0x1f61a4u: goto label_1f61a4;
        case 0x1f61a8u: goto label_1f61a8;
        case 0x1f61acu: goto label_1f61ac;
        case 0x1f61b0u: goto label_1f61b0;
        case 0x1f61b4u: goto label_1f61b4;
        case 0x1f61b8u: goto label_1f61b8;
        case 0x1f61bcu: goto label_1f61bc;
        case 0x1f61c0u: goto label_1f61c0;
        case 0x1f61c4u: goto label_1f61c4;
        case 0x1f61c8u: goto label_1f61c8;
        case 0x1f61ccu: goto label_1f61cc;
        case 0x1f61d0u: goto label_1f61d0;
        case 0x1f61d4u: goto label_1f61d4;
        case 0x1f61d8u: goto label_1f61d8;
        case 0x1f61dcu: goto label_1f61dc;
        case 0x1f61e0u: goto label_1f61e0;
        case 0x1f61e4u: goto label_1f61e4;
        case 0x1f61e8u: goto label_1f61e8;
        case 0x1f61ecu: goto label_1f61ec;
        case 0x1f61f0u: goto label_1f61f0;
        case 0x1f61f4u: goto label_1f61f4;
        case 0x1f61f8u: goto label_1f61f8;
        case 0x1f61fcu: goto label_1f61fc;
        case 0x1f6200u: goto label_1f6200;
        case 0x1f6204u: goto label_1f6204;
        case 0x1f6208u: goto label_1f6208;
        case 0x1f620cu: goto label_1f620c;
        case 0x1f6210u: goto label_1f6210;
        case 0x1f6214u: goto label_1f6214;
        case 0x1f6218u: goto label_1f6218;
        case 0x1f621cu: goto label_1f621c;
        case 0x1f6220u: goto label_1f6220;
        case 0x1f6224u: goto label_1f6224;
        case 0x1f6228u: goto label_1f6228;
        case 0x1f622cu: goto label_1f622c;
        case 0x1f6230u: goto label_1f6230;
        case 0x1f6234u: goto label_1f6234;
        case 0x1f6238u: goto label_1f6238;
        case 0x1f623cu: goto label_1f623c;
        case 0x1f6240u: goto label_1f6240;
        case 0x1f6244u: goto label_1f6244;
        case 0x1f6248u: goto label_1f6248;
        case 0x1f624cu: goto label_1f624c;
        case 0x1f6250u: goto label_1f6250;
        case 0x1f6254u: goto label_1f6254;
        case 0x1f6258u: goto label_1f6258;
        case 0x1f625cu: goto label_1f625c;
        case 0x1f6260u: goto label_1f6260;
        case 0x1f6264u: goto label_1f6264;
        case 0x1f6268u: goto label_1f6268;
        case 0x1f626cu: goto label_1f626c;
        case 0x1f6270u: goto label_1f6270;
        case 0x1f6274u: goto label_1f6274;
        case 0x1f6278u: goto label_1f6278;
        case 0x1f627cu: goto label_1f627c;
        case 0x1f6280u: goto label_1f6280;
        case 0x1f6284u: goto label_1f6284;
        case 0x1f6288u: goto label_1f6288;
        case 0x1f628cu: goto label_1f628c;
        case 0x1f6290u: goto label_1f6290;
        case 0x1f6294u: goto label_1f6294;
        case 0x1f6298u: goto label_1f6298;
        case 0x1f629cu: goto label_1f629c;
        case 0x1f62a0u: goto label_1f62a0;
        case 0x1f62a4u: goto label_1f62a4;
        case 0x1f62a8u: goto label_1f62a8;
        case 0x1f62acu: goto label_1f62ac;
        case 0x1f62b0u: goto label_1f62b0;
        case 0x1f62b4u: goto label_1f62b4;
        case 0x1f62b8u: goto label_1f62b8;
        case 0x1f62bcu: goto label_1f62bc;
        case 0x1f62c0u: goto label_1f62c0;
        case 0x1f62c4u: goto label_1f62c4;
        case 0x1f62c8u: goto label_1f62c8;
        case 0x1f62ccu: goto label_1f62cc;
        case 0x1f62d0u: goto label_1f62d0;
        case 0x1f62d4u: goto label_1f62d4;
        case 0x1f62d8u: goto label_1f62d8;
        case 0x1f62dcu: goto label_1f62dc;
        case 0x1f62e0u: goto label_1f62e0;
        case 0x1f62e4u: goto label_1f62e4;
        case 0x1f62e8u: goto label_1f62e8;
        case 0x1f62ecu: goto label_1f62ec;
        case 0x1f62f0u: goto label_1f62f0;
        case 0x1f62f4u: goto label_1f62f4;
        case 0x1f62f8u: goto label_1f62f8;
        case 0x1f62fcu: goto label_1f62fc;
        case 0x1f6300u: goto label_1f6300;
        case 0x1f6304u: goto label_1f6304;
        default: return;
    }

label_1f5b38:
    // 0x1f5b38: 0x0  nop
    ctx->pc = 0x1f5b38u;
    // NOP
label_1f5b3c:
    // 0x1f5b3c: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5b3cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5b40:
    // 0x1f5b40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f5b44:
    // 0x1f5b44: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1f5b44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f5b48:
    // 0x1f5b48: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f5b4c:
    if (ctx->pc == 0x1F5B4Cu) {
        ctx->pc = 0x1F5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B48u;
        // 0x1f5b4c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B50u;
        goto label_1f5b50;
    }
    ctx->pc = 0x1F5B48u;
    {
        const bool branch_taken_0x1f5b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B48u;
        // 0x1f5b4c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b48) {
            ctx->pc = 0x1F5B88u;
            goto label_1f5b88;
        }
    }
    ctx->pc = 0x1F5B50u;
label_1f5b50:
    // 0x1f5b50: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5b54:
    // 0x1f5b54: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f5b58:
    if (ctx->pc == 0x1F5B58u) {
        ctx->pc = 0x1F5B5Cu;
        goto label_1f5b5c;
    }
    ctx->pc = 0x1F5B54u;
    {
        const bool branch_taken_0x1f5b54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f5b54) {
            ctx->pc = 0x1F5B60u;
            goto label_1f5b60;
        }
    }
    ctx->pc = 0x1F5B5Cu;
label_1f5b5c:
    // 0x1f5b5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5b5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b60:
    // 0x1f5b60: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1f5b60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1f5b64:
    // 0x1f5b64: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x1f5b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
label_1f5b68:
    // 0x1f5b68: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1f5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f5b6c:
    // 0x1f5b6c: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x1f5b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_1f5b70:
    // 0x1f5b70: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1f5b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5b74:
    // 0x1f5b74: 0x0  nop
    ctx->pc = 0x1f5b74u;
    // NOP
label_1f5b78:
    // 0x1f5b78: 0x0  nop
    ctx->pc = 0x1f5b78u;
    // NOP
label_1f5b7c:
    // 0x1f5b7c: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5b7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5b80:
    // 0x1f5b80: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1f5b80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1f5b84:
    // 0x1f5b84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5b88:
    // 0x1f5b88: 0xa222009b  sb          $v0, 0x9B($s1)
    ctx->pc = 0x1f5b88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 2));
label_1f5b8c:
    // 0x1f5b8c: 0xa2220083  sb          $v0, 0x83($s1)
    ctx->pc = 0x1f5b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 131), (uint8_t)GPR_U32(ctx, 2));
label_1f5b90:
    // 0x1f5b90: 0xa22300cb  sb          $v1, 0xCB($s1)
    ctx->pc = 0x1f5b90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 203), (uint8_t)GPR_U32(ctx, 3));
label_1f5b94:
    // 0x1f5b94: 0xa22300b3  sb          $v1, 0xB3($s1)
    ctx->pc = 0x1f5b94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 179), (uint8_t)GPR_U32(ctx, 3));
label_1f5b98:
    // 0x1f5b98: 0xa222016b  sb          $v0, 0x16B($s1)
    ctx->pc = 0x1f5b98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 363), (uint8_t)GPR_U32(ctx, 2));
label_1f5b9c:
    // 0x1f5b9c: 0xa2220153  sb          $v0, 0x153($s1)
    ctx->pc = 0x1f5b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 339), (uint8_t)GPR_U32(ctx, 2));
label_1f5ba0:
    // 0x1f5ba0: 0xa223019b  sb          $v1, 0x19B($s1)
    ctx->pc = 0x1f5ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 411), (uint8_t)GPR_U32(ctx, 3));
label_1f5ba4:
    // 0x1f5ba4: 0xa2230183  sb          $v1, 0x183($s1)
    ctx->pc = 0x1f5ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 387), (uint8_t)GPR_U32(ctx, 3));
label_1f5ba8:
    // 0x1f5ba8: 0xa222023b  sb          $v0, 0x23B($s1)
    ctx->pc = 0x1f5ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 571), (uint8_t)GPR_U32(ctx, 2));
label_1f5bac:
    // 0x1f5bac: 0xa2220223  sb          $v0, 0x223($s1)
    ctx->pc = 0x1f5bacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 547), (uint8_t)GPR_U32(ctx, 2));
label_1f5bb0:
    // 0x1f5bb0: 0xa223026b  sb          $v1, 0x26B($s1)
    ctx->pc = 0x1f5bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 619), (uint8_t)GPR_U32(ctx, 3));
label_1f5bb4:
    // 0x1f5bb4: 0xa2230253  sb          $v1, 0x253($s1)
    ctx->pc = 0x1f5bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 595), (uint8_t)GPR_U32(ctx, 3));
label_1f5bb8:
    // 0x1f5bb8: 0xa222030b  sb          $v0, 0x30B($s1)
    ctx->pc = 0x1f5bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 779), (uint8_t)GPR_U32(ctx, 2));
label_1f5bbc:
    // 0x1f5bbc: 0xa22202f3  sb          $v0, 0x2F3($s1)
    ctx->pc = 0x1f5bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 755), (uint8_t)GPR_U32(ctx, 2));
label_1f5bc0:
    // 0x1f5bc0: 0xa223033b  sb          $v1, 0x33B($s1)
    ctx->pc = 0x1f5bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 827), (uint8_t)GPR_U32(ctx, 3));
label_1f5bc4:
    // 0x1f5bc4: 0xa2230323  sb          $v1, 0x323($s1)
    ctx->pc = 0x1f5bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 803), (uint8_t)GPR_U32(ctx, 3));
label_1f5bc8:
    // 0x1f5bc8: 0xa22203db  sb          $v0, 0x3DB($s1)
    ctx->pc = 0x1f5bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 987), (uint8_t)GPR_U32(ctx, 2));
label_1f5bcc:
    // 0x1f5bcc: 0xa22203c3  sb          $v0, 0x3C3($s1)
    ctx->pc = 0x1f5bccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 963), (uint8_t)GPR_U32(ctx, 2));
label_1f5bd0:
    // 0x1f5bd0: 0xa223040b  sb          $v1, 0x40B($s1)
    ctx->pc = 0x1f5bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1035), (uint8_t)GPR_U32(ctx, 3));
label_1f5bd4:
    // 0x1f5bd4: 0xa22303f3  sb          $v1, 0x3F3($s1)
    ctx->pc = 0x1f5bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1011), (uint8_t)GPR_U32(ctx, 3));
label_1f5bd8:
    // 0x1f5bd8: 0xa22204ab  sb          $v0, 0x4AB($s1)
    ctx->pc = 0x1f5bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1195), (uint8_t)GPR_U32(ctx, 2));
label_1f5bdc:
    // 0x1f5bdc: 0xa2220493  sb          $v0, 0x493($s1)
    ctx->pc = 0x1f5bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1171), (uint8_t)GPR_U32(ctx, 2));
label_1f5be0:
    // 0x1f5be0: 0xa22304db  sb          $v1, 0x4DB($s1)
    ctx->pc = 0x1f5be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1243), (uint8_t)GPR_U32(ctx, 3));
label_1f5be4:
    // 0x1f5be4: 0xa22304c3  sb          $v1, 0x4C3($s1)
    ctx->pc = 0x1f5be4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1219), (uint8_t)GPR_U32(ctx, 3));
label_1f5be8:
    // 0x1f5be8: 0xa222057b  sb          $v0, 0x57B($s1)
    ctx->pc = 0x1f5be8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1403), (uint8_t)GPR_U32(ctx, 2));
label_1f5bec:
    // 0x1f5bec: 0xa2220563  sb          $v0, 0x563($s1)
    ctx->pc = 0x1f5becu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1379), (uint8_t)GPR_U32(ctx, 2));
label_1f5bf0:
    // 0x1f5bf0: 0xa22305ab  sb          $v1, 0x5AB($s1)
    ctx->pc = 0x1f5bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1451), (uint8_t)GPR_U32(ctx, 3));
label_1f5bf4:
    // 0x1f5bf4: 0xa2230593  sb          $v1, 0x593($s1)
    ctx->pc = 0x1f5bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1427), (uint8_t)GPR_U32(ctx, 3));
label_1f5bf8:
    // 0x1f5bf8: 0xa222064b  sb          $v0, 0x64B($s1)
    ctx->pc = 0x1f5bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1611), (uint8_t)GPR_U32(ctx, 2));
label_1f5bfc:
    // 0x1f5bfc: 0xa2220633  sb          $v0, 0x633($s1)
    ctx->pc = 0x1f5bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1587), (uint8_t)GPR_U32(ctx, 2));
label_1f5c00:
    // 0x1f5c00: 0xa223067b  sb          $v1, 0x67B($s1)
    ctx->pc = 0x1f5c00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1659), (uint8_t)GPR_U32(ctx, 3));
label_1f5c04:
    // 0x1f5c04: 0xa2230663  sb          $v1, 0x663($s1)
    ctx->pc = 0x1f5c04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1635), (uint8_t)GPR_U32(ctx, 3));
label_1f5c08:
    // 0x1f5c08: 0x9265000a  lbu         $a1, 0xA($s3)
    ctx->pc = 0x1f5c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
label_1f5c0c:
    // 0x1f5c0c: 0x9266000b  lbu         $a2, 0xB($s3)
    ctx->pc = 0x1f5c0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11)));
label_1f5c10:
    // 0x1f5c10: 0x8667000c  lh          $a3, 0xC($s3)
    ctx->pc = 0x1f5c10u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_1f5c14:
    // 0x1f5c14: 0x8668000e  lh          $t0, 0xE($s3)
    ctx->pc = 0x1f5c14u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_1f5c18:
    // 0x1f5c18: 0xc05d9d8  jal         func_176760
label_1f5c1c:
    if (ctx->pc == 0x1F5C1Cu) {
        ctx->pc = 0x1F5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C18u;
        // 0x1f5c1c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C20u;
        goto label_1f5c20;
    }
    ctx->pc = 0x1F5C18u;
    SET_GPR_U32(ctx, 31, 0x1F5C20u);
    ctx->pc = 0x1F5C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C18u;
    // 0x1f5c1c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176760u, 0x1F5C18u, 0x1F5C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C20u;
label_1f5c20:
    // 0x1f5c20: 0x260900dd  addiu       $t1, $s0, 0xDD
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 221));
label_1f5c24:
    // 0x1f5c24: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1f5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1f5c28:
    // 0x1f5c28: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f5c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f5c2c:
    // 0x1f5c2c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1f5c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1f5c30:
    // 0x1f5c30: 0x2407002a  addiu       $a3, $zero, 0x2A
    ctx->pc = 0x1f5c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1f5c34:
    // 0x1f5c34: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1f5c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f5c38:
    // 0x1f5c38: 0xc054e5c  jal         func_153970
label_1f5c3c:
    if (ctx->pc == 0x1F5C3Cu) {
        ctx->pc = 0x1F5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C38u;
        // 0x1f5c3c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C40u;
        goto label_1f5c40;
    }
    ctx->pc = 0x1F5C38u;
    SET_GPR_U32(ctx, 31, 0x1F5C40u);
    ctx->pc = 0x1F5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C38u;
    // 0x1f5c3c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1F5C38u, 0x1F5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C40u;
label_1f5c40:
    // 0x1f5c40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5c44:
    // 0x1f5c44: 0x26240690  addiu       $a0, $s1, 0x690
    ctx->pc = 0x1f5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1680));
label_1f5c48:
    // 0x1f5c48: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1f5c4c:
    // 0x1f5c4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f5c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c50:
    // 0x1f5c50: 0xc054e74  jal         func_1539D0
label_1f5c54:
    if (ctx->pc == 0x1F5C54u) {
        ctx->pc = 0x1F5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C50u;
        // 0x1f5c54: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C58u;
        goto label_1f5c58;
    }
    ctx->pc = 0x1F5C50u;
    SET_GPR_U32(ctx, 31, 0x1F5C58u);
    ctx->pc = 0x1F5C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C50u;
    // 0x1f5c54: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1F5C50u, 0x1F5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C58u;
label_1f5c58:
    // 0x1f5c58: 0x26030015  addiu       $v1, $s0, 0x15
    ctx->pc = 0x1f5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
label_1f5c5c:
    // 0x1f5c5c: 0x28610026  slti        $at, $v1, 0x26
    ctx->pc = 0x1f5c5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)38) ? 1 : 0);
label_1f5c60:
    // 0x1f5c60: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1f5c64:
    if (ctx->pc == 0x1F5C64u) {
        ctx->pc = 0x1F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C60u;
        // 0x1f5c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C68u;
        goto label_1f5c68;
    }
    ctx->pc = 0x1F5C60u;
    {
        const bool branch_taken_0x1f5c60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C60u;
        // 0x1f5c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c60) {
            ctx->pc = 0x1F5C78u;
            goto label_1f5c78;
        }
    }
    ctx->pc = 0x1F5C68u;
label_1f5c68:
    // 0x1f5c68: 0x286200bb  slti        $v0, $v1, 0xBB
    ctx->pc = 0x1f5c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)187) ? 1 : 0);
label_1f5c6c:
    // 0x1f5c6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f5c70:
    if (ctx->pc == 0x1F5C70u) {
        ctx->pc = 0x1F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C6Cu;
        // 0x1f5c70: 0x2862004b  slti        $v0, $v1, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C74u;
        goto label_1f5c74;
    }
    ctx->pc = 0x1F5C6Cu;
    {
        const bool branch_taken_0x1f5c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C6Cu;
        // 0x1f5c70: 0x2862004b  slti        $v0, $v1, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c6c) {
            ctx->pc = 0x1F5C80u;
            goto label_1f5c80;
        }
    }
    ctx->pc = 0x1F5C74u;
label_1f5c74:
    // 0x1f5c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5c78:
    // 0x1f5c78: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f5c7c:
    if (ctx->pc == 0x1F5C7Cu) {
        ctx->pc = 0x1F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C78u;
        // 0x1f5c7c: 0x2604002a  addiu       $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C80u;
        goto label_1f5c80;
    }
    ctx->pc = 0x1F5C78u;
    {
        const bool branch_taken_0x1f5c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C78u;
        // 0x1f5c7c: 0x2604002a  addiu       $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c78) {
            ctx->pc = 0x1F5D24u;
            goto label_1f5d24;
        }
    }
    ctx->pc = 0x1F5C80u;
label_1f5c80:
    // 0x1f5c80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1f5c84:
    if (ctx->pc == 0x1F5C84u) {
        ctx->pc = 0x1F5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C80u;
        // 0x1f5c84: 0x28610097  slti        $at, $v1, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C88u;
        goto label_1f5c88;
    }
    ctx->pc = 0x1F5C80u;
    {
        const bool branch_taken_0x1f5c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C80u;
        // 0x1f5c84: 0x28610097  slti        $at, $v1, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c80) {
            ctx->pc = 0x1F5C98u;
            goto label_1f5c98;
        }
    }
    ctx->pc = 0x1F5C88u;
label_1f5c88:
    // 0x1f5c88: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f5c8c:
    if (ctx->pc == 0x1F5C8Cu) {
        ctx->pc = 0x1F5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C88u;
        // 0x1f5c8c: 0x26030015  addiu       $v1, $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C90u;
        goto label_1f5c90;
    }
    ctx->pc = 0x1F5C88u;
    {
        const bool branch_taken_0x1f5c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C88u;
        // 0x1f5c8c: 0x26030015  addiu       $v1, $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c88) {
            ctx->pc = 0x1F5C9Cu;
            goto label_1f5c9c;
        }
    }
    ctx->pc = 0x1F5C90u;
label_1f5c90:
    // 0x1f5c90: 0x10000023  b           . + 4 + (0x23 << 2)
label_1f5c94:
    if (ctx->pc == 0x1F5C94u) {
        ctx->pc = 0x1F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C90u;
        // 0x1f5c94: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5C98u;
        goto label_1f5c98;
    }
    ctx->pc = 0x1F5C90u;
    {
        const bool branch_taken_0x1f5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C90u;
        // 0x1f5c94: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c90) {
            ctx->pc = 0x1F5D20u;
            goto label_1f5d20;
        }
    }
    ctx->pc = 0x1F5C98u;
label_1f5c98:
    // 0x1f5c98: 0x26030015  addiu       $v1, $s0, 0x15
    ctx->pc = 0x1f5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
label_1f5c9c:
    // 0x1f5c9c: 0x2861004b  slti        $at, $v1, 0x4B
    ctx->pc = 0x1f5c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)75) ? 1 : 0);
label_1f5ca0:
    // 0x1f5ca0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1f5ca4:
    if (ctx->pc == 0x1F5CA4u) {
        ctx->pc = 0x1F5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CA0u;
        // 0x1f5ca4: 0x240200a8  addiu       $v0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5CA8u;
        goto label_1f5ca8;
    }
    ctx->pc = 0x1F5CA0u;
    {
        const bool branch_taken_0x1f5ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CA0u;
        // 0x1f5ca4: 0x240200a8  addiu       $v0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ca0) {
            ctx->pc = 0x1F5CE8u;
            goto label_1f5ce8;
        }
    }
    ctx->pc = 0x1F5CA8u;
label_1f5ca8:
    // 0x1f5ca8: 0x2602ffdd  addiu       $v0, $s0, -0x23
    ctx->pc = 0x1f5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967261));
label_1f5cac:
    // 0x1f5cac: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1f5cb0:
    if (ctx->pc == 0x1F5CB0u) {
        ctx->pc = 0x1F5CB4u;
        goto label_1f5cb4;
    }
    ctx->pc = 0x1F5CACu;
    {
        const bool branch_taken_0x1f5cac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5cac) {
            ctx->pc = 0x1F5CB8u;
            goto label_1f5cb8;
        }
    }
    ctx->pc = 0x1F5CB4u;
label_1f5cb4:
    // 0x1f5cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5cb8:
    // 0x1f5cb8: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x1f5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1f5cbc:
    // 0x1f5cbc: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
label_1f5cc0:
    // 0x1f5cc0: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f5cc4:
    // 0x1f5cc4: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x1f5cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
label_1f5cc8:
    // 0x1f5cc8: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f5cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5ccc:
    // 0x1f5ccc: 0x0  nop
    ctx->pc = 0x1f5cccu;
    // NOP
label_1f5cd0:
    // 0x1f5cd0: 0x0  nop
    ctx->pc = 0x1f5cd0u;
    // NOP
label_1f5cd4:
    // 0x1f5cd4: 0x1010  mfhi        $v0
    ctx->pc = 0x1f5cd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f5cd8:
    // 0x1f5cd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f5cdc:
    // 0x1f5cdc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1f5ce0:
    // 0x1f5ce0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f5ce4:
    if (ctx->pc == 0x1F5CE4u) {
        ctx->pc = 0x1F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CE0u;
        // 0x1f5ce4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5CE8u;
        goto label_1f5ce8;
    }
    ctx->pc = 0x1F5CE0u;
    {
        const bool branch_taken_0x1f5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CE0u;
        // 0x1f5ce4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ce0) {
            ctx->pc = 0x1F5D20u;
            goto label_1f5d20;
        }
    }
    ctx->pc = 0x1F5CE8u;
label_1f5ce8:
    // 0x1f5ce8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5cec:
    // 0x1f5cec: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_1f5cf0:
    if (ctx->pc == 0x1F5CF0u) {
        ctx->pc = 0x1F5CF4u;
        goto label_1f5cf4;
    }
    ctx->pc = 0x1F5CECu;
    {
        const bool branch_taken_0x1f5cec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f5cec) {
            ctx->pc = 0x1F5CF8u;
            goto label_1f5cf8;
        }
    }
    ctx->pc = 0x1F5CF4u;
label_1f5cf4:
    // 0x1f5cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5cf8:
    // 0x1f5cf8: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x1f5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1f5cfc:
    // 0x1f5cfc: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x1f5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
label_1f5d00:
    // 0x1f5d00: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1f5d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1f5d04:
    // 0x1f5d04: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x1f5d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_1f5d08:
    // 0x1f5d08: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1f5d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5d0c:
    // 0x1f5d0c: 0x0  nop
    ctx->pc = 0x1f5d0cu;
    // NOP
label_1f5d10:
    // 0x1f5d10: 0x0  nop
    ctx->pc = 0x1f5d10u;
    // NOP
label_1f5d14:
    // 0x1f5d14: 0x1010  mfhi        $v0
    ctx->pc = 0x1f5d14u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f5d18:
    // 0x1f5d18: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1f5d18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1f5d1c:
    // 0x1f5d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5d20:
    // 0x1f5d20: 0x2604002a  addiu       $a0, $s0, 0x2A
    ctx->pc = 0x1f5d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
label_1f5d24:
    // 0x1f5d24: 0x28810026  slti        $at, $a0, 0x26
    ctx->pc = 0x1f5d24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)38) ? 1 : 0);
label_1f5d28:
    // 0x1f5d28: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1f5d2c:
    if (ctx->pc == 0x1F5D2Cu) {
        ctx->pc = 0x1F5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D28u;
        // 0x1f5d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D30u;
        goto label_1f5d30;
    }
    ctx->pc = 0x1F5D28u;
    {
        const bool branch_taken_0x1f5d28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D28u;
        // 0x1f5d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d28) {
            ctx->pc = 0x1F5D3Cu;
            goto label_1f5d3c;
        }
    }
    ctx->pc = 0x1F5D30u;
label_1f5d30:
    // 0x1f5d30: 0x288300bb  slti        $v1, $a0, 0xBB
    ctx->pc = 0x1f5d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)187) ? 1 : 0);
label_1f5d34:
    // 0x1f5d34: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1f5d38:
    if (ctx->pc == 0x1F5D38u) {
        ctx->pc = 0x1F5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D34u;
        // 0x1f5d38: 0x2883004b  slti        $v1, $a0, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D3Cu;
        goto label_1f5d3c;
    }
    ctx->pc = 0x1F5D34u;
    {
        const bool branch_taken_0x1f5d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D34u;
        // 0x1f5d38: 0x2883004b  slti        $v1, $a0, 0x4B (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d34) {
            ctx->pc = 0x1F5D44u;
            goto label_1f5d44;
        }
    }
    ctx->pc = 0x1F5D3Cu;
label_1f5d3c:
    // 0x1f5d3c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f5d40:
    if (ctx->pc == 0x1F5D40u) {
        ctx->pc = 0x1F5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D3Cu;
        // 0x1f5d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D44u;
        goto label_1f5d44;
    }
    ctx->pc = 0x1F5D3Cu;
    {
        const bool branch_taken_0x1f5d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D3Cu;
        // 0x1f5d40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d3c) {
            ctx->pc = 0x1F5DE8u;
            goto label_1f5de8;
        }
    }
    ctx->pc = 0x1F5D44u;
label_1f5d44:
    // 0x1f5d44: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1f5d48:
    if (ctx->pc == 0x1F5D48u) {
        ctx->pc = 0x1F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D44u;
        // 0x1f5d48: 0x28810097  slti        $at, $a0, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D4Cu;
        goto label_1f5d4c;
    }
    ctx->pc = 0x1F5D44u;
    {
        const bool branch_taken_0x1f5d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D44u;
        // 0x1f5d48: 0x28810097  slti        $at, $a0, 0x97 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)151) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d44) {
            ctx->pc = 0x1F5D5Cu;
            goto label_1f5d5c;
        }
    }
    ctx->pc = 0x1F5D4Cu;
label_1f5d4c:
    // 0x1f5d4c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1f5d50:
    if (ctx->pc == 0x1F5D50u) {
        ctx->pc = 0x1F5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D4Cu;
        // 0x1f5d50: 0x2604002a  addiu       $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D54u;
        goto label_1f5d54;
    }
    ctx->pc = 0x1F5D4Cu;
    {
        const bool branch_taken_0x1f5d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D4Cu;
        // 0x1f5d50: 0x2604002a  addiu       $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d4c) {
            ctx->pc = 0x1F5D60u;
            goto label_1f5d60;
        }
    }
    ctx->pc = 0x1F5D54u;
label_1f5d54:
    // 0x1f5d54: 0x10000023  b           . + 4 + (0x23 << 2)
label_1f5d58:
    if (ctx->pc == 0x1F5D58u) {
        ctx->pc = 0x1F5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D54u;
        // 0x1f5d58: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D5Cu;
        goto label_1f5d5c;
    }
    ctx->pc = 0x1F5D54u;
    {
        const bool branch_taken_0x1f5d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D54u;
        // 0x1f5d58: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d54) {
            ctx->pc = 0x1F5DE4u;
            goto label_1f5de4;
        }
    }
    ctx->pc = 0x1F5D5Cu;
label_1f5d5c:
    // 0x1f5d5c: 0x2604002a  addiu       $a0, $s0, 0x2A
    ctx->pc = 0x1f5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 42));
label_1f5d60:
    // 0x1f5d60: 0x2881004b  slti        $at, $a0, 0x4B
    ctx->pc = 0x1f5d60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)75) ? 1 : 0);
label_1f5d64:
    // 0x1f5d64: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1f5d68:
    if (ctx->pc == 0x1F5D68u) {
        ctx->pc = 0x1F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D64u;
        // 0x1f5d68: 0x240300a8  addiu       $v1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5D6Cu;
        goto label_1f5d6c;
    }
    ctx->pc = 0x1F5D64u;
    {
        const bool branch_taken_0x1f5d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D64u;
        // 0x1f5d68: 0x240300a8  addiu       $v1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d64) {
            ctx->pc = 0x1F5DACu;
            goto label_1f5dac;
        }
    }
    ctx->pc = 0x1F5D6Cu;
label_1f5d6c:
    // 0x1f5d6c: 0x2603fff2  addiu       $v1, $s0, -0xE
    ctx->pc = 0x1f5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967282));
label_1f5d70:
    // 0x1f5d70: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f5d74:
    if (ctx->pc == 0x1F5D74u) {
        ctx->pc = 0x1F5D78u;
        goto label_1f5d78;
    }
    ctx->pc = 0x1F5D70u;
    {
        const bool branch_taken_0x1f5d70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f5d70) {
            ctx->pc = 0x1F5D7Cu;
            goto label_1f5d7c;
        }
    }
    ctx->pc = 0x1F5D78u;
label_1f5d78:
    // 0x1f5d78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d7c:
    // 0x1f5d7c: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1f5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1f5d80:
    // 0x1f5d80: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x1f5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
label_1f5d84:
    // 0x1f5d84: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1f5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f5d88:
    // 0x1f5d88: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x1f5d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
label_1f5d8c:
    // 0x1f5d8c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1f5d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5d90:
    // 0x1f5d90: 0x0  nop
    ctx->pc = 0x1f5d90u;
    // NOP
label_1f5d94:
    // 0x1f5d94: 0x0  nop
    ctx->pc = 0x1f5d94u;
    // NOP
label_1f5d98:
    // 0x1f5d98: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5d98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5d9c:
    // 0x1f5d9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f5da0:
    // 0x1f5da0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1f5da0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f5da4:
    // 0x1f5da4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f5da8:
    if (ctx->pc == 0x1F5DA8u) {
        ctx->pc = 0x1F5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DA4u;
        // 0x1f5da8: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5DACu;
        goto label_1f5dac;
    }
    ctx->pc = 0x1F5DA4u;
    {
        const bool branch_taken_0x1f5da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DA4u;
        // 0x1f5da8: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5da4) {
            ctx->pc = 0x1F5DE4u;
            goto label_1f5de4;
        }
    }
    ctx->pc = 0x1F5DACu;
label_1f5dac:
    // 0x1f5dac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5db0:
    // 0x1f5db0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_1f5db4:
    if (ctx->pc == 0x1F5DB4u) {
        ctx->pc = 0x1F5DB8u;
        goto label_1f5db8;
    }
    ctx->pc = 0x1F5DB0u;
    {
        const bool branch_taken_0x1f5db0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f5db0) {
            ctx->pc = 0x1F5DBCu;
            goto label_1f5dbc;
        }
    }
    ctx->pc = 0x1F5DB8u;
label_1f5db8:
    // 0x1f5db8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f5db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5dbc:
    // 0x1f5dbc: 0x329c0  sll         $a1, $v1, 7
    ctx->pc = 0x1f5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1f5dc0:
    // 0x1f5dc0: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
label_1f5dc4:
    // 0x1f5dc4: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1f5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1f5dc8:
    // 0x1f5dc8: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x1f5dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_1f5dcc:
    // 0x1f5dcc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1f5dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f5dd0:
    // 0x1f5dd0: 0x0  nop
    ctx->pc = 0x1f5dd0u;
    // NOP
label_1f5dd4:
    // 0x1f5dd4: 0x0  nop
    ctx->pc = 0x1f5dd4u;
    // NOP
label_1f5dd8:
    // 0x1f5dd8: 0x1810  mfhi        $v1
    ctx->pc = 0x1f5dd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f5ddc:
    // 0x1f5ddc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1f5de0:
    // 0x1f5de0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5de4:
    // 0x1f5de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5de8:
    // 0x1f5de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5dec:
    // 0x1f5dec: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x1f5decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1f5df0:
    // 0x1f5df0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1f5df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1f5df4:
    // 0x1f5df4: 0xa0e2071b  sb          $v0, 0x71B($a3)
    ctx->pc = 0x1f5df4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1819), (uint8_t)GPR_U32(ctx, 2));
label_1f5df8:
    // 0x1f5df8: 0x28830077  slti        $v1, $a0, 0x77
    ctx->pc = 0x1f5df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)119) ? 1 : 0);
label_1f5dfc:
    // 0x1f5dfc: 0xa0e20703  sb          $v0, 0x703($a3)
    ctx->pc = 0x1f5dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1795), (uint8_t)GPR_U32(ctx, 2));
label_1f5e00:
    // 0x1f5e00: 0x24c60680  addiu       $a2, $a2, 0x680
    ctx->pc = 0x1f5e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1664));
label_1f5e04:
    // 0x1f5e04: 0xa0e5074b  sb          $a1, 0x74B($a3)
    ctx->pc = 0x1f5e04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1867), (uint8_t)GPR_U32(ctx, 5));
label_1f5e08:
    // 0x1f5e08: 0xa0e50733  sb          $a1, 0x733($a3)
    ctx->pc = 0x1f5e08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1843), (uint8_t)GPR_U32(ctx, 5));
label_1f5e0c:
    // 0x1f5e0c: 0xa0e207eb  sb          $v0, 0x7EB($a3)
    ctx->pc = 0x1f5e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2027), (uint8_t)GPR_U32(ctx, 2));
label_1f5e10:
    // 0x1f5e10: 0xa0e207d3  sb          $v0, 0x7D3($a3)
    ctx->pc = 0x1f5e10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2003), (uint8_t)GPR_U32(ctx, 2));
label_1f5e14:
    // 0x1f5e14: 0xa0e5081b  sb          $a1, 0x81B($a3)
    ctx->pc = 0x1f5e14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2075), (uint8_t)GPR_U32(ctx, 5));
label_1f5e18:
    // 0x1f5e18: 0xa0e50803  sb          $a1, 0x803($a3)
    ctx->pc = 0x1f5e18u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2051), (uint8_t)GPR_U32(ctx, 5));
label_1f5e1c:
    // 0x1f5e1c: 0xa0e208bb  sb          $v0, 0x8BB($a3)
    ctx->pc = 0x1f5e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2235), (uint8_t)GPR_U32(ctx, 2));
label_1f5e20:
    // 0x1f5e20: 0xa0e208a3  sb          $v0, 0x8A3($a3)
    ctx->pc = 0x1f5e20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2211), (uint8_t)GPR_U32(ctx, 2));
label_1f5e24:
    // 0x1f5e24: 0xa0e508eb  sb          $a1, 0x8EB($a3)
    ctx->pc = 0x1f5e24u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2283), (uint8_t)GPR_U32(ctx, 5));
label_1f5e28:
    // 0x1f5e28: 0xa0e508d3  sb          $a1, 0x8D3($a3)
    ctx->pc = 0x1f5e28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2259), (uint8_t)GPR_U32(ctx, 5));
label_1f5e2c:
    // 0x1f5e2c: 0xa0e2098b  sb          $v0, 0x98B($a3)
    ctx->pc = 0x1f5e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2443), (uint8_t)GPR_U32(ctx, 2));
label_1f5e30:
    // 0x1f5e30: 0xa0e20973  sb          $v0, 0x973($a3)
    ctx->pc = 0x1f5e30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2419), (uint8_t)GPR_U32(ctx, 2));
label_1f5e34:
    // 0x1f5e34: 0xa0e509bb  sb          $a1, 0x9BB($a3)
    ctx->pc = 0x1f5e34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2491), (uint8_t)GPR_U32(ctx, 5));
label_1f5e38:
    // 0x1f5e38: 0xa0e509a3  sb          $a1, 0x9A3($a3)
    ctx->pc = 0x1f5e38u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2467), (uint8_t)GPR_U32(ctx, 5));
label_1f5e3c:
    // 0x1f5e3c: 0xa0e20a5b  sb          $v0, 0xA5B($a3)
    ctx->pc = 0x1f5e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2651), (uint8_t)GPR_U32(ctx, 2));
label_1f5e40:
    // 0x1f5e40: 0xa0e20a43  sb          $v0, 0xA43($a3)
    ctx->pc = 0x1f5e40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2627), (uint8_t)GPR_U32(ctx, 2));
label_1f5e44:
    // 0x1f5e44: 0xa0e50a8b  sb          $a1, 0xA8B($a3)
    ctx->pc = 0x1f5e44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2699), (uint8_t)GPR_U32(ctx, 5));
label_1f5e48:
    // 0x1f5e48: 0xa0e50a73  sb          $a1, 0xA73($a3)
    ctx->pc = 0x1f5e48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2675), (uint8_t)GPR_U32(ctx, 5));
label_1f5e4c:
    // 0x1f5e4c: 0xa0e20b2b  sb          $v0, 0xB2B($a3)
    ctx->pc = 0x1f5e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2859), (uint8_t)GPR_U32(ctx, 2));
label_1f5e50:
    // 0x1f5e50: 0xa0e20b13  sb          $v0, 0xB13($a3)
    ctx->pc = 0x1f5e50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2835), (uint8_t)GPR_U32(ctx, 2));
label_1f5e54:
    // 0x1f5e54: 0xa0e50b5b  sb          $a1, 0xB5B($a3)
    ctx->pc = 0x1f5e54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2907), (uint8_t)GPR_U32(ctx, 5));
label_1f5e58:
    // 0x1f5e58: 0xa0e50b43  sb          $a1, 0xB43($a3)
    ctx->pc = 0x1f5e58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2883), (uint8_t)GPR_U32(ctx, 5));
label_1f5e5c:
    // 0x1f5e5c: 0xa0e20bfb  sb          $v0, 0xBFB($a3)
    ctx->pc = 0x1f5e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3067), (uint8_t)GPR_U32(ctx, 2));
label_1f5e60:
    // 0x1f5e60: 0xa0e20be3  sb          $v0, 0xBE3($a3)
    ctx->pc = 0x1f5e60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3043), (uint8_t)GPR_U32(ctx, 2));
label_1f5e64:
    // 0x1f5e64: 0xa0e50c2b  sb          $a1, 0xC2B($a3)
    ctx->pc = 0x1f5e64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3115), (uint8_t)GPR_U32(ctx, 5));
label_1f5e68:
    // 0x1f5e68: 0xa0e50c13  sb          $a1, 0xC13($a3)
    ctx->pc = 0x1f5e68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3091), (uint8_t)GPR_U32(ctx, 5));
label_1f5e6c:
    // 0x1f5e6c: 0xa0e20ccb  sb          $v0, 0xCCB($a3)
    ctx->pc = 0x1f5e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3275), (uint8_t)GPR_U32(ctx, 2));
label_1f5e70:
    // 0x1f5e70: 0xa0e20cb3  sb          $v0, 0xCB3($a3)
    ctx->pc = 0x1f5e70u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3251), (uint8_t)GPR_U32(ctx, 2));
label_1f5e74:
    // 0x1f5e74: 0xa0e50cfb  sb          $a1, 0xCFB($a3)
    ctx->pc = 0x1f5e74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3323), (uint8_t)GPR_U32(ctx, 5));
label_1f5e78:
    // 0x1f5e78: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_1f5e7c:
    if (ctx->pc == 0x1F5E7Cu) {
        ctx->pc = 0x1F5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E78u;
        // 0x1f5e7c: 0xa0e50ce3  sb          $a1, 0xCE3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3299), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5E80u;
        goto label_1f5e80;
    }
    ctx->pc = 0x1F5E78u;
    {
        const bool branch_taken_0x1f5e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E78u;
        // 0x1f5e7c: 0xa0e50ce3  sb          $a1, 0xCE3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3299), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e78) {
            ctx->pc = 0x1F5DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5dec;
        }
    }
    ctx->pc = 0x1F5E80u;
label_1f5e80:
    // 0x1f5e80: 0x2881007f  slti        $at, $a0, 0x7F
    ctx->pc = 0x1f5e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)127) ? 1 : 0);
label_1f5e84:
    // 0x1f5e84: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1f5e88:
    if (ctx->pc == 0x1F5E88u) {
        ctx->pc = 0x1F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E84u;
        // 0x1f5e88: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5E8Cu;
        goto label_1f5e8c;
    }
    ctx->pc = 0x1F5E84u;
    {
        const bool branch_taken_0x1f5e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E84u;
        // 0x1f5e88: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e84) {
            ctx->pc = 0x1F5EC0u;
            goto label_1f5ec0;
        }
    }
    ctx->pc = 0x1F5E8Cu;
label_1f5e8c:
    // 0x1f5e8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5e90:
    // 0x1f5e90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f5e94:
    // 0x1f5e94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f5e98:
    // 0x1f5e98: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f5e9c:
    // 0x1f5e9c: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1f5ea0:
    // 0x1f5ea0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f5ea4:
    // 0x1f5ea4: 0xa0e2071b  sb          $v0, 0x71B($a3)
    ctx->pc = 0x1f5ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1819), (uint8_t)GPR_U32(ctx, 2));
label_1f5ea8:
    // 0x1f5ea8: 0x2883007f  slti        $v1, $a0, 0x7F
    ctx->pc = 0x1f5ea8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)127) ? 1 : 0);
label_1f5eac:
    // 0x1f5eac: 0xa0e20703  sb          $v0, 0x703($a3)
    ctx->pc = 0x1f5eacu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1795), (uint8_t)GPR_U32(ctx, 2));
label_1f5eb0:
    // 0x1f5eb0: 0x24c600d0  addiu       $a2, $a2, 0xD0
    ctx->pc = 0x1f5eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
label_1f5eb4:
    // 0x1f5eb4: 0xa0e5074b  sb          $a1, 0x74B($a3)
    ctx->pc = 0x1f5eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1867), (uint8_t)GPR_U32(ctx, 5));
label_1f5eb8:
    // 0x1f5eb8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1f5ebc:
    if (ctx->pc == 0x1F5EBCu) {
        ctx->pc = 0x1F5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EB8u;
        // 0x1f5ebc: 0xa0e50733  sb          $a1, 0x733($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1843), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EC0u;
        goto label_1f5ec0;
    }
    ctx->pc = 0x1F5EB8u;
    {
        const bool branch_taken_0x1f5eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EB8u;
        // 0x1f5ebc: 0xa0e50733  sb          $a1, 0x733($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1843), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5eb8) {
            ctx->pc = 0x1F5E9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5e9c;
        }
    }
    ctx->pc = 0x1F5EC0u;
label_1f5ec0:
    // 0x1f5ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ec4:
    // 0x1f5ec4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ec8:
    // 0x1f5ec8: 0x240606dc  addiu       $a2, $zero, 0x6DC
    ctx->pc = 0x1f5ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1756));
label_1f5ecc:
    // 0x1f5ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ed0:
    // 0x1f5ed0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ed4:
    // 0x1f5ed4: 0xc066c72  jal         func_19B1C8
label_1f5ed8:
    if (ctx->pc == 0x1F5ED8u) {
        ctx->pc = 0x1F5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5ED4u;
        // 0x1f5ed8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EDCu;
        goto label_1f5edc;
    }
    ctx->pc = 0x1F5ED4u;
    SET_GPR_U32(ctx, 31, 0x1F5EDCu);
    ctx->pc = 0x1F5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5ED4u;
    // 0x1f5ed8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F5ED4u, 0x1F5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EDCu;
label_1f5edc:
    // 0x1f5edc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5ee0:
    // 0x1f5ee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5ee4:
    // 0x1f5ee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5ee8:
    // 0x1f5ee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5ee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5eec:
    // 0x1f5eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5ef0:
    // 0x1f5ef0: 0x3e00008  jr          $ra
label_1f5ef4:
    if (ctx->pc == 0x1F5EF4u) {
        ctx->pc = 0x1F5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EF0u;
        // 0x1f5ef4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5EF8u;
        goto label_1f5ef8;
    }
    ctx->pc = 0x1F5EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EF0u;
        // 0x1f5ef4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5EF8u;
label_1f5ef8:
    // 0x1f5ef8: 0x0  nop
    ctx->pc = 0x1f5ef8u;
    // NOP
label_1f5efc:
    // 0x1f5efc: 0x0  nop
    ctx->pc = 0x1f5efcu;
    // NOP
label_1f5f00:
    // 0x1f5f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f5f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f5f04:
    // 0x1f5f04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f5f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f5f08:
    // 0x1f5f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5f0c:
    // 0x1f5f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5f10:
    // 0x1f5f10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f5f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f14:
    // 0x1f5f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5f18:
    // 0x1f5f18: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1f5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f5f1c:
    // 0x1f5f1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f5f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f20:
    // 0x1f5f20: 0xc078050  jal         func_1E0140
label_1f5f24:
    if (ctx->pc == 0x1F5F24u) {
        ctx->pc = 0x1F5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F20u;
        // 0x1f5f24: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F28u;
        goto label_1f5f28;
    }
    ctx->pc = 0x1F5F20u;
    SET_GPR_U32(ctx, 31, 0x1F5F28u);
    ctx->pc = 0x1F5F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F20u;
    // 0x1f5f24: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1F5F28u;
label_1f5f28:
    // 0x1f5f28: 0xc078070  jal         func_1E01C0
label_1f5f2c:
    if (ctx->pc == 0x1F5F2Cu) {
        ctx->pc = 0x1F5F30u;
        goto label_1f5f30;
    }
    ctx->pc = 0x1F5F28u;
    SET_GPR_U32(ctx, 31, 0x1F5F30u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1F5F30u;
label_1f5f30:
    // 0x1f5f30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f5f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5f34:
    // 0x1f5f34: 0xaf809020  sw          $zero, -0x6FE0($gp)
    ctx->pc = 0x1f5f34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 0));
label_1f5f38:
    // 0x1f5f38: 0xaf869024  sw          $a2, -0x6FDC($gp)
    ctx->pc = 0x1f5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 6));
label_1f5f3c:
    // 0x1f5f3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f5f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f40:
    // 0x1f5f40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f5f40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f44:
    // 0x1f5f44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f5f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f5f48:
    // 0x1f5f48: 0x27849000  addiu       $a0, $gp, -0x7000
    ctx->pc = 0x1f5f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
label_1f5f4c:
    // 0x1f5f4c: 0x27859008  addiu       $a1, $gp, -0x6FF8
    ctx->pc = 0x1f5f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938632));
label_1f5f50:
    // 0x1f5f50: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1f5f54:
    // 0x1f5f54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5f58:
    // 0x1f5f58: 0x14020007  bne         $zero, $v0, . + 4 + (0x7 << 2)
label_1f5f5c:
    if (ctx->pc == 0x1F5F5Cu) {
        ctx->pc = 0x1F5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F58u;
        // 0x1f5f5c: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F60u;
        goto label_1f5f60;
    }
    ctx->pc = 0x1F5F58u;
    {
        const bool branch_taken_0x1f5f58 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F58u;
        // 0x1f5f5c: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f58) {
            ctx->pc = 0x1F5F78u;
            goto label_1f5f78;
        }
    }
    ctx->pc = 0x1F5F60u;
label_1f5f60:
    // 0x1f5f60: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x1f5f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1f5f64:
    // 0x1f5f64: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_1f5f68:
    if (ctx->pc == 0x1F5F68u) {
        ctx->pc = 0x1F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F64u;
        // 0x1f5f68: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F6Cu;
        goto label_1f5f6c;
    }
    ctx->pc = 0x1F5F64u;
    {
        const bool branch_taken_0x1f5f64 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F64u;
        // 0x1f5f68: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f64) {
            ctx->pc = 0x1F5F78u;
            goto label_1f5f78;
        }
    }
    ctx->pc = 0x1F5F6Cu;
label_1f5f6c:
    // 0x1f5f6c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f5f70:
    // 0x1f5f70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f5f74:
    // 0x1f5f74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f5f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f5f78:
    // 0x1f5f78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f5f7c:
    // 0x1f5f7c: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f5f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f5f80:
    // 0x1f5f80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f5f84:
    if (ctx->pc == 0x1F5F84u) {
        ctx->pc = 0x1F5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F80u;
        // 0x1f5f84: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5F88u;
        goto label_1f5f88;
    }
    ctx->pc = 0x1F5F80u;
    {
        const bool branch_taken_0x1f5f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F80u;
        // 0x1f5f84: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f80) {
            ctx->pc = 0x1F5F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5f50;
        }
    }
    ctx->pc = 0x1F5F88u;
label_1f5f88:
    // 0x1f5f88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f5f8c:
    // 0x1f5f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f90:
    // 0x1f5f90: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1f5f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1f5f94:
    // 0x1f5f94: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1f5f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f5f98:
    // 0x1f5f98: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f5f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f5f9c:
    // 0x1f5f9c: 0xc05b468  jal         func_16D1A0
label_1f5fa0:
    if (ctx->pc == 0x1F5FA0u) {
        ctx->pc = 0x1F5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F9Cu;
        // 0x1f5fa0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FA4u;
        goto label_1f5fa4;
    }
    ctx->pc = 0x1F5F9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5FA4u);
    ctx->pc = 0x1F5FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F9Cu;
    // 0x1f5fa0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D1A0u, 0x1F5F9Cu, 0x1F5FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FA4u;
label_1f5fa4:
    // 0x1f5fa4: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1f5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1f5fa8:
    // 0x1f5fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5fac:
    if (ctx->pc == 0x1F5FACu) {
        ctx->pc = 0x1F5FB0u;
        goto label_1f5fb0;
    }
    ctx->pc = 0x1F5FA8u;
    {
        const bool branch_taken_0x1f5fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5fa8) {
            ctx->pc = 0x1F5FB8u;
            goto label_1f5fb8;
        }
    }
    ctx->pc = 0x1F5FB0u;
label_1f5fb0:
    // 0x1f5fb0: 0x10000071  b           . + 4 + (0x71 << 2)
label_1f5fb4:
    if (ctx->pc == 0x1F5FB4u) {
        ctx->pc = 0x1F5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FB0u;
        // 0x1f5fb4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FB8u;
        goto label_1f5fb8;
    }
    ctx->pc = 0x1F5FB0u;
    {
        const bool branch_taken_0x1f5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FB0u;
        // 0x1f5fb4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fb0) {
            ctx->pc = 0x1F6178u;
            goto label_1f6178;
        }
    }
    ctx->pc = 0x1F5FB8u;
label_1f5fb8:
    // 0x1f5fb8: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1f5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1f5fbc:
    // 0x1f5fbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f5fc0:
    if (ctx->pc == 0x1F5FC0u) {
        ctx->pc = 0x1F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FBCu;
        // 0x1f5fc0: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FC4u;
        goto label_1f5fc4;
    }
    ctx->pc = 0x1F5FBCu;
    {
        const bool branch_taken_0x1f5fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FBCu;
        // 0x1f5fc0: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fbc) {
            ctx->pc = 0x1F5FCCu;
            goto label_1f5fcc;
        }
    }
    ctx->pc = 0x1F5FC4u;
label_1f5fc4:
    // 0x1f5fc4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1f5fc8:
    if (ctx->pc == 0x1F5FC8u) {
        ctx->pc = 0x1F5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FC4u;
        // 0x1f5fc8: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FCCu;
        goto label_1f5fcc;
    }
    ctx->pc = 0x1F5FC4u;
    {
        const bool branch_taken_0x1f5fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FC4u;
        // 0x1f5fc8: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fc4) {
            ctx->pc = 0x1F6178u;
            goto label_1f6178;
        }
    }
    ctx->pc = 0x1F5FCCu;
label_1f5fcc:
    // 0x1f5fcc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1f5fd0:
    // 0x1f5fd0: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f5fd4:
    // 0x1f5fd4: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f5fd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f5fd8:
    // 0x1f5fd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f5fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f5fdc:
    // 0x1f5fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f5fe0:
    if (ctx->pc == 0x1F5FE0u) {
        ctx->pc = 0x1F5FE4u;
        goto label_1f5fe4;
    }
    ctx->pc = 0x1F5FDCu;
    {
        const bool branch_taken_0x1f5fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5fdc) {
            ctx->pc = 0x1F5FF8u;
            goto label_1f5ff8;
        }
    }
    ctx->pc = 0x1F5FE4u;
label_1f5fe4:
    // 0x1f5fe4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f5fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f5fe8:
    // 0x1f5fe8: 0xc05b420  jal         func_16D080
label_1f5fec:
    if (ctx->pc == 0x1F5FECu) {
        ctx->pc = 0x1F5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5FE8u;
        // 0x1f5fec: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5FF0u;
        goto label_1f5ff0;
    }
    ctx->pc = 0x1F5FE8u;
    SET_GPR_U32(ctx, 31, 0x1F5FF0u);
    ctx->pc = 0x1F5FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5FE8u;
    // 0x1f5fec: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F5FE8u, 0x1F5FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5FF0u;
label_1f5ff0:
    // 0x1f5ff0: 0x10000061  b           . + 4 + (0x61 << 2)
label_1f5ff4:
    if (ctx->pc == 0x1F5FF4u) {
        ctx->pc = 0x1F5FF8u;
        goto label_1f5ff8;
    }
    ctx->pc = 0x1F5FF0u;
    {
        const bool branch_taken_0x1f5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ff0) {
            ctx->pc = 0x1F6178u;
            goto label_1f6178;
        }
    }
    ctx->pc = 0x1F5FF8u;
label_1f5ff8:
    // 0x1f5ff8: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f5ff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f5ffc:
    // 0x1f5ffc: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1f5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1f6000:
    // 0x1f6000: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1f6000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1f6004:
    // 0x1f6004: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f6008:
    // 0x1f6008: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1f600c:
    if (ctx->pc == 0x1F600Cu) {
        ctx->pc = 0x1F6010u;
        goto label_1f6010;
    }
    ctx->pc = 0x1F6008u;
    {
        const bool branch_taken_0x1f6008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6008) {
            ctx->pc = 0x1F613Cu;
            goto label_1f613c;
        }
    }
    ctx->pc = 0x1F6010u;
label_1f6010:
    // 0x1f6010: 0x8f829024  lw          $v0, -0x6FDC($gp)
    ctx->pc = 0x1f6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f6014:
    // 0x1f6014: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f6014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6018:
    // 0x1f6018: 0x1447002e  bne         $v0, $a3, . + 4 + (0x2E << 2)
label_1f601c:
    if (ctx->pc == 0x1F601Cu) {
        ctx->pc = 0x1F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6018u;
        // 0x1f601c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6020u;
        goto label_1f6020;
    }
    ctx->pc = 0x1F6018u;
    {
        const bool branch_taken_0x1f6018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1F601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6018u;
        // 0x1f601c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6018) {
            ctx->pc = 0x1F60D4u;
            goto label_1f60d4;
        }
    }
    ctx->pc = 0x1F6020u;
label_1f6020:
    // 0x1f6020: 0xc05b2e4  jal         func_16CB90
label_1f6024:
    if (ctx->pc == 0x1F6024u) {
        ctx->pc = 0x1F6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6020u;
        // 0x1f6024: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6028u;
        goto label_1f6028;
    }
    ctx->pc = 0x1F6020u;
    SET_GPR_U32(ctx, 31, 0x1F6028u);
    ctx->pc = 0x1F6024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6020u;
    // 0x1f6024: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x1F6020u, 0x1F6028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6028u;
label_1f6028:
    // 0x1f6028: 0x8f829010  lw          $v0, -0x6FF0($gp)
    ctx->pc = 0x1f6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938640)));
label_1f602c:
    // 0x1f602c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f6030:
    // 0x1f6030: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1f6030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f6034:
    // 0x1f6034: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_1f6038:
    if (ctx->pc == 0x1F6038u) {
        ctx->pc = 0x1F603Cu;
        goto label_1f603c;
    }
    ctx->pc = 0x1F6034u;
    {
        const bool branch_taken_0x1f6034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6034) {
            ctx->pc = 0x1F60BCu;
            goto label_1f60bc;
        }
    }
    ctx->pc = 0x1F603Cu;
label_1f603c:
    // 0x1f603c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f603cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6040:
    // 0x1f6040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6044:
    // 0x1f6044: 0xaf869024  sw          $a2, -0x6FDC($gp)
    ctx->pc = 0x1f6044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 6));
label_1f6048:
    // 0x1f6048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f604c:
    // 0x1f604c: 0xaf909020  sw          $s0, -0x6FE0($gp)
    ctx->pc = 0x1f604cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 16));
label_1f6050:
    // 0x1f6050: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6050u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6054:
    // 0x1f6054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6058:
    // 0x1f6058: 0x27849000  addiu       $a0, $gp, -0x7000
    ctx->pc = 0x1f6058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
label_1f605c:
    // 0x1f605c: 0x27859008  addiu       $a1, $gp, -0x6FF8
    ctx->pc = 0x1f605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938632));
label_1f6060:
    // 0x1f6060: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1f6064:
    // 0x1f6064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6068:
    // 0x1f6068: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1f606c:
    if (ctx->pc == 0x1F606Cu) {
        ctx->pc = 0x1F606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6068u;
        // 0x1f606c: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6070u;
        goto label_1f6070;
    }
    ctx->pc = 0x1F6068u;
    {
        const bool branch_taken_0x1f6068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6068u;
        // 0x1f606c: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6068) {
            ctx->pc = 0x1F6088u;
            goto label_1f6088;
        }
    }
    ctx->pc = 0x1F6070u;
label_1f6070:
    // 0x1f6070: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x1f6070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1f6074:
    // 0x1f6074: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_1f6078:
    if (ctx->pc == 0x1F6078u) {
        ctx->pc = 0x1F6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6074u;
        // 0x1f6078: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F607Cu;
        goto label_1f607c;
    }
    ctx->pc = 0x1F6074u;
    {
        const bool branch_taken_0x1f6074 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1F6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6074u;
        // 0x1f6078: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6074) {
            ctx->pc = 0x1F6088u;
            goto label_1f6088;
        }
    }
    ctx->pc = 0x1F607Cu;
label_1f607c:
    // 0x1f607c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f607cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f6080:
    // 0x1f6080: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f6080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f6084:
    // 0x1f6084: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f6084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f6088:
    // 0x1f6088: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f6088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f608c:
    // 0x1f608c: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f608cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6090:
    // 0x1f6090: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1f6094:
    if (ctx->pc == 0x1F6094u) {
        ctx->pc = 0x1F6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6090u;
        // 0x1f6094: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6098u;
        goto label_1f6098;
    }
    ctx->pc = 0x1F6090u;
    {
        const bool branch_taken_0x1f6090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6090u;
        // 0x1f6094: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6090) {
            ctx->pc = 0x1F6060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6060;
        }
    }
    ctx->pc = 0x1F6098u;
label_1f6098:
    // 0x1f6098: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f609c:
    // 0x1f609c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f609cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f60a0:
    // 0x1f60a0: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1f60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1f60a4:
    // 0x1f60a4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1f60a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f60a8:
    // 0x1f60a8: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x1f60a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f60ac:
    // 0x1f60ac: 0xc05b468  jal         func_16D1A0
label_1f60b0:
    if (ctx->pc == 0x1F60B0u) {
        ctx->pc = 0x1F60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60ACu;
        // 0x1f60b0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F60B4u;
        goto label_1f60b4;
    }
    ctx->pc = 0x1F60ACu;
    SET_GPR_U32(ctx, 31, 0x1F60B4u);
    ctx->pc = 0x1F60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60ACu;
    // 0x1f60b0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D1A0u, 0x1F60ACu, 0x1F60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60B4u;
label_1f60b4:
    // 0x1f60b4: 0x10000021  b           . + 4 + (0x21 << 2)
label_1f60b8:
    if (ctx->pc == 0x1F60B8u) {
        ctx->pc = 0x1F60BCu;
        goto label_1f60bc;
    }
    ctx->pc = 0x1F60B4u;
    {
        const bool branch_taken_0x1f60b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60b4) {
            ctx->pc = 0x1F613Cu;
            goto label_1f613c;
        }
    }
    ctx->pc = 0x1F60BCu;
label_1f60bc:
    // 0x1f60bc: 0x0  nop
    ctx->pc = 0x1f60bcu;
    // NOP
label_1f60c0:
    // 0x1f60c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f60c4:
    // 0x1f60c4: 0xc05b420  jal         func_16D080
label_1f60c8:
    if (ctx->pc == 0x1F60C8u) {
        ctx->pc = 0x1F60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60C4u;
        // 0x1f60c8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F60CCu;
        goto label_1f60cc;
    }
    ctx->pc = 0x1F60C4u;
    SET_GPR_U32(ctx, 31, 0x1F60CCu);
    ctx->pc = 0x1F60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F60C4u;
    // 0x1f60c8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F60C4u, 0x1F60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F60CCu;
label_1f60cc:
    // 0x1f60cc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1f60d0:
    if (ctx->pc == 0x1F60D0u) {
        ctx->pc = 0x1F60D4u;
        goto label_1f60d4;
    }
    ctx->pc = 0x1F60CCu;
    {
        const bool branch_taken_0x1f60cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f60cc) {
            ctx->pc = 0x1F6178u;
            goto label_1f6178;
        }
    }
    ctx->pc = 0x1F60D4u;
label_1f60d4:
    // 0x1f60d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f60d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f60d8:
    // 0x1f60d8: 0x27838ff8  addiu       $v1, $gp, -0x7008
    ctx->pc = 0x1f60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938616));
label_1f60dc:
    // 0x1f60dc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f60e0:
    // 0x1f60e0: 0x27869000  addiu       $a2, $gp, -0x7000
    ctx->pc = 0x1f60e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
label_1f60e4:
    // 0x1f60e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f60e8:
    // 0x1f60e8: 0xc95021  addu        $t2, $a2, $t1
    ctx->pc = 0x1f60e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f60ec:
    // 0x1f60ec: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1f60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f60f0:
    // 0x1f60f0: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
label_1f60f4:
    if (ctx->pc == 0x1F60F4u) {
        ctx->pc = 0x1F60F8u;
        goto label_1f60f8;
    }
    ctx->pc = 0x1F60F0u;
    {
        const bool branch_taken_0x1f60f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f60f0) {
            ctx->pc = 0x1F6104u;
            goto label_1f6104;
        }
    }
    ctx->pc = 0x1F60F8u;
label_1f60f8:
    // 0x1f60f8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1f60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f60fc:
    // 0x1f60fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f6100:
    if (ctx->pc == 0x1F6100u) {
        ctx->pc = 0x1F6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60FCu;
        // 0x1f6100: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6104u;
        goto label_1f6104;
    }
    ctx->pc = 0x1F60FCu;
    {
        const bool branch_taken_0x1f60fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F60FCu;
        // 0x1f6100: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60fc) {
            ctx->pc = 0x1F6118u;
            goto label_1f6118;
        }
    }
    ctx->pc = 0x1F6104u;
label_1f6104:
    // 0x1f6104: 0x0  nop
    ctx->pc = 0x1f6104u;
    // NOP
label_1f6108:
    // 0x1f6108: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
label_1f610c:
    if (ctx->pc == 0x1F610Cu) {
        ctx->pc = 0x1F6110u;
        goto label_1f6110;
    }
    ctx->pc = 0x1F6108u;
    {
        const bool branch_taken_0x1f6108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f6108) {
            ctx->pc = 0x1F6118u;
            goto label_1f6118;
        }
    }
    ctx->pc = 0x1F6110u;
label_1f6110:
    // 0x1f6110: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1f6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f6114:
    // 0x1f6114: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f6114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f6118:
    // 0x1f6118: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f6118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f611c:
    // 0x1f611c: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f611cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6120:
    // 0x1f6120: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1f6120u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_1f6124:
    // 0x1f6124: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1f6128:
    if (ctx->pc == 0x1F6128u) {
        ctx->pc = 0x1F6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6124u;
        // 0x1f6128: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F612Cu;
        goto label_1f612c;
    }
    ctx->pc = 0x1F6124u;
    {
        const bool branch_taken_0x1f6124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6124u;
        // 0x1f6128: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6124) {
            ctx->pc = 0x1F60E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f60e8;
        }
    }
    ctx->pc = 0x1F612Cu;
label_1f612c:
    // 0x1f612c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f612cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6130:
    // 0x1f6130: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x1f6130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1f6134:
    // 0x1f6134: 0xaf839024  sw          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f6134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 3));
label_1f6138:
    // 0x1f6138: 0xaf828ff0  sw          $v0, -0x7010($gp)
    ctx->pc = 0x1f6138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 2));
label_1f613c:
    // 0x1f613c: 0x0  nop
    ctx->pc = 0x1f613cu;
    // NOP
label_1f6140:
    // 0x1f6140: 0x8f829010  lw          $v0, -0x6FF0($gp)
    ctx->pc = 0x1f6140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938640)));
label_1f6144:
    // 0x1f6144: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f6144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f6148:
    // 0x1f6148: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1f614c:
    if (ctx->pc == 0x1F614Cu) {
        ctx->pc = 0x1F6150u;
        goto label_1f6150;
    }
    ctx->pc = 0x1F6148u;
    {
        const bool branch_taken_0x1f6148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6148) {
            ctx->pc = 0x1F6168u;
            goto label_1f6168;
        }
    }
    ctx->pc = 0x1F6150u;
label_1f6150:
    // 0x1f6150: 0x8f839024  lw          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f6154:
    // 0x1f6154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f6154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6158:
    // 0x1f6158: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1f615c:
    if (ctx->pc == 0x1F615Cu) {
        ctx->pc = 0x1F615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6158u;
        // 0x1f615c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6160u;
        goto label_1f6160;
    }
    ctx->pc = 0x1F6158u;
    {
        const bool branch_taken_0x1f6158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6158u;
        // 0x1f615c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6158) {
            ctx->pc = 0x1F6168u;
            goto label_1f6168;
        }
    }
    ctx->pc = 0x1F6160u;
label_1f6160:
    // 0x1f6160: 0xc078050  jal         func_1E0140
label_1f6164:
    if (ctx->pc == 0x1F6164u) {
        ctx->pc = 0x1F6168u;
        goto label_1f6168;
    }
    ctx->pc = 0x1F6160u;
    SET_GPR_U32(ctx, 31, 0x1F6168u);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1F6168u;
label_1f6168:
    // 0x1f6168: 0xc07b48c  jal         func_1ED230
label_1f616c:
    if (ctx->pc == 0x1F616Cu) {
        ctx->pc = 0x1F6170u;
        goto label_1f6170;
    }
    ctx->pc = 0x1F6168u;
    SET_GPR_U32(ctx, 31, 0x1F6170u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F6170u;
label_1f6170:
    // 0x1f6170: 0x1000ff8d  b           . + 4 + (-0x73 << 2)
label_1f6174:
    if (ctx->pc == 0x1F6174u) {
        ctx->pc = 0x1F6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6170u;
        // 0x1f6174: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6178u;
        goto label_1f6178;
    }
    ctx->pc = 0x1F6170u;
    {
        const bool branch_taken_0x1f6170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6170u;
        // 0x1f6174: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6170) {
            ctx->pc = 0x1F5FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5fa8;
        }
    }
    ctx->pc = 0x1F6178u;
label_1f6178:
    // 0x1f6178: 0xc05b2e4  jal         func_16CB90
label_1f617c:
    if (ctx->pc == 0x1F617Cu) {
        ctx->pc = 0x1F617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6178u;
        // 0x1f617c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6180u;
        goto label_1f6180;
    }
    ctx->pc = 0x1F6178u;
    SET_GPR_U32(ctx, 31, 0x1F6180u);
    ctx->pc = 0x1F617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6178u;
    // 0x1f617c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x1F6178u, 0x1F6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6180u;
label_1f6180:
    // 0x1f6180: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f6184:
    // 0x1f6184: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
label_1f6188:
    if (ctx->pc == 0x1F6188u) {
        ctx->pc = 0x1F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6184u;
        // 0x1f6188: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F618Cu;
        goto label_1f618c;
    }
    ctx->pc = 0x1F6184u;
    {
        const bool branch_taken_0x1f6184 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6184u;
        // 0x1f6188: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6184) {
            ctx->pc = 0x1F61B8u;
            goto label_1f61b8;
        }
    }
    ctx->pc = 0x1F618Cu;
label_1f618c:
    // 0x1f618c: 0xc085bd0  jal         func_216F40
label_1f6190:
    if (ctx->pc == 0x1F6190u) {
        ctx->pc = 0x1F6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F618Cu;
        // 0x1f6190: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6194u;
        goto label_1f6194;
    }
    ctx->pc = 0x1F618Cu;
    SET_GPR_U32(ctx, 31, 0x1F6194u);
    ctx->pc = 0x1F6190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F618Cu;
    // 0x1f6190: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F40u;
    { ctx->pc = 0x216f40; return; }
    ctx->pc = 0x1F6194u;
label_1f6194:
    // 0x1f6194: 0xaf809024  sw          $zero, -0x6FDC($gp)
    ctx->pc = 0x1f6194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 0));
label_1f6198:
    // 0x1f6198: 0xaf809020  sw          $zero, -0x6FE0($gp)
    ctx->pc = 0x1f6198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 0));
label_1f619c:
    // 0x1f619c: 0xaf809000  sw          $zero, -0x7000($gp)
    ctx->pc = 0x1f619cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938624), GPR_U32(ctx, 0));
label_1f61a0:
    // 0x1f61a0: 0xaf808ff8  sw          $zero, -0x7008($gp)
    ctx->pc = 0x1f61a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938616), GPR_U32(ctx, 0));
label_1f61a4:
    // 0x1f61a4: 0xaf809004  sw          $zero, -0x6FFC($gp)
    ctx->pc = 0x1f61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938628), GPR_U32(ctx, 0));
label_1f61a8:
    // 0x1f61a8: 0xaf808ffc  sw          $zero, -0x7004($gp)
    ctx->pc = 0x1f61a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938620), GPR_U32(ctx, 0));
label_1f61ac:
    // 0x1f61ac: 0xc078078  jal         func_1E01E0
label_1f61b0:
    if (ctx->pc == 0x1F61B0u) {
        ctx->pc = 0x1F61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61ACu;
        // 0x1f61b0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F61B4u;
        goto label_1f61b4;
    }
    ctx->pc = 0x1F61ACu;
    SET_GPR_U32(ctx, 31, 0x1F61B4u);
    ctx->pc = 0x1F61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F61ACu;
    // 0x1f61b0: 0xaf808ff0  sw          $zero, -0x7010($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1F61B4u;
label_1f61b4:
    // 0x1f61b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f61b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f61b8:
    // 0x1f61b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f61b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f61bc:
    // 0x1f61bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f61bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f61c0:
    // 0x1f61c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f61c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f61c4:
    // 0x1f61c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f61c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f61c8:
    // 0x1f61c8: 0x3e00008  jr          $ra
label_1f61cc:
    if (ctx->pc == 0x1F61CCu) {
        ctx->pc = 0x1F61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61C8u;
        // 0x1f61cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F61D0u;
        goto label_1f61d0;
    }
    ctx->pc = 0x1F61C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F61CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F61C8u;
        // 0x1f61cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F61C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F61D0u;
label_1f61d0:
    // 0x1f61d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f61d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f61d4:
    // 0x1f61d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f61d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f61d8:
    // 0x1f61d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f61d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f61dc:
    // 0x1f61dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f61e0:
    // 0x1f61e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f61e4:
    // 0x1f61e4: 0x8f849038  lw          $a0, -0x6FC8($gp)
    ctx->pc = 0x1f61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
label_1f61e8:
    // 0x1f61e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f61ec:
    if (ctx->pc == 0x1F61ECu) {
        ctx->pc = 0x1F61F0u;
        goto label_1f61f0;
    }
    ctx->pc = 0x1F61E8u;
    {
        const bool branch_taken_0x1f61e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f61e8) {
            ctx->pc = 0x1F61FCu;
            goto label_1f61fc;
        }
    }
    ctx->pc = 0x1F61F0u;
label_1f61f0:
    // 0x1f61f0: 0xc070038  jal         func_1C00E0
label_1f61f4:
    if (ctx->pc == 0x1F61F4u) {
        ctx->pc = 0x1F61F8u;
        goto label_1f61f8;
    }
    ctx->pc = 0x1F61F0u;
    SET_GPR_U32(ctx, 31, 0x1F61F8u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1F61F8u;
label_1f61f8:
    // 0x1f61f8: 0xaf809038  sw          $zero, -0x6FC8($gp)
    ctx->pc = 0x1f61f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938680), GPR_U32(ctx, 0));
label_1f61fc:
    // 0x1f61fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f61fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6200:
    // 0x1f6200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6204:
    // 0x1f6204: 0x27839030  addiu       $v1, $gp, -0x6FD0
    ctx->pc = 0x1f6204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
label_1f6208:
    // 0x1f6208: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f6208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f620c:
    // 0x1f620c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6210:
    // 0x1f6210: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f6214:
    if (ctx->pc == 0x1F6214u) {
        ctx->pc = 0x1F6218u;
        goto label_1f6218;
    }
    ctx->pc = 0x1F6210u;
    {
        const bool branch_taken_0x1f6210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6210) {
            ctx->pc = 0x1F6224u;
            goto label_1f6224;
        }
    }
    ctx->pc = 0x1F6218u;
label_1f6218:
    // 0x1f6218: 0xc070038  jal         func_1C00E0
label_1f621c:
    if (ctx->pc == 0x1F621Cu) {
        ctx->pc = 0x1F6220u;
        goto label_1f6220;
    }
    ctx->pc = 0x1F6218u;
    SET_GPR_U32(ctx, 31, 0x1F6220u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1F6220u;
label_1f6220:
    // 0x1f6220: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1f6220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1f6224:
    // 0x1f6224: 0x0  nop
    ctx->pc = 0x1f6224u;
    // NOP
label_1f6228:
    // 0x1f6228: 0x27839028  addiu       $v1, $gp, -0x6FD8
    ctx->pc = 0x1f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
label_1f622c:
    // 0x1f622c: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f622cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f6230:
    // 0x1f6230: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f6230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f6234:
    // 0x1f6234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f6238:
    if (ctx->pc == 0x1F6238u) {
        ctx->pc = 0x1F623Cu;
        goto label_1f623c;
    }
    ctx->pc = 0x1F6234u;
    {
        const bool branch_taken_0x1f6234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6234) {
            ctx->pc = 0x1F6248u;
            goto label_1f6248;
        }
    }
    ctx->pc = 0x1F623Cu;
label_1f623c:
    // 0x1f623c: 0xc070038  jal         func_1C00E0
label_1f6240:
    if (ctx->pc == 0x1F6240u) {
        ctx->pc = 0x1F6244u;
        goto label_1f6244;
    }
    ctx->pc = 0x1F623Cu;
    SET_GPR_U32(ctx, 31, 0x1F6244u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1F6244u;
label_1f6244:
    // 0x1f6244: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1f6244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1f6248:
    // 0x1f6248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f624c:
    // 0x1f624c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1f624cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6250:
    // 0x1f6250: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_1f6254:
    if (ctx->pc == 0x1F6254u) {
        ctx->pc = 0x1F6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6250u;
        // 0x1f6254: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6258u;
        goto label_1f6258;
    }
    ctx->pc = 0x1F6250u;
    {
        const bool branch_taken_0x1f6250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6250u;
        // 0x1f6254: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6250) {
            ctx->pc = 0x1F6204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6204;
        }
    }
    ctx->pc = 0x1F6258u;
label_1f6258:
    // 0x1f6258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f6258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f625c:
    // 0x1f625c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f625cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6260:
    // 0x1f6260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f6264:
    // 0x1f6264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6268:
    // 0x1f6268: 0x3e00008  jr          $ra
label_1f626c:
    if (ctx->pc == 0x1F626Cu) {
        ctx->pc = 0x1F626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6268u;
        // 0x1f626c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6270u;
        goto label_1f6270;
    }
    ctx->pc = 0x1F6268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6268u;
        // 0x1f626c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6270u;
label_1f6270:
    // 0x1f6270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f6270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f6274:
    // 0x1f6274: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f6274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f6278:
    // 0x1f6278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f6278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f627c:
    // 0x1f627c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f6280:
    // 0x1f6280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f6280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f6284:
    // 0x1f6284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f6284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f6288:
    // 0x1f6288: 0xc07d93c  jal         func_1F64F0
label_1f628c:
    if (ctx->pc == 0x1F628Cu) {
        ctx->pc = 0x1F628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6288u;
        // 0x1f628c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6290u;
        goto label_1f6290;
    }
    ctx->pc = 0x1F6288u;
    SET_GPR_U32(ctx, 31, 0x1F6290u);
    ctx->pc = 0x1F628Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6288u;
    // 0x1f628c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F64F0u;
    { ctx->pc = 0x1f64f0; return; }
    ctx->pc = 0x1F6290u;
label_1f6290:
    // 0x1f6290: 0x8f839038  lw          $v1, -0x6FC8($gp)
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
label_1f6294:
    // 0x1f6294: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1f6298:
    if (ctx->pc == 0x1F6298u) {
        ctx->pc = 0x1F6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6294u;
        // 0x1f6298: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F629Cu;
        goto label_1f629c;
    }
    ctx->pc = 0x1F6294u;
    {
        const bool branch_taken_0x1f6294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6294u;
        // 0x1f6298: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6294) {
            ctx->pc = 0x1F62D4u;
            goto label_1f62d4;
        }
    }
    ctx->pc = 0x1F629Cu;
label_1f629c:
    // 0x1f629c: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x1f629cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1f62a0:
    // 0x1f62a0: 0x241007f1  addiu       $s0, $zero, 0x7F1
    ctx->pc = 0x1f62a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2033));
label_1f62a4:
    // 0x1f62a4: 0x240205c3  addiu       $v0, $zero, 0x5C3
    ctx->pc = 0x1f62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1475));
label_1f62a8:
    // 0x1f62a8: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1f62a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1f62ac:
    // 0x1f62ac: 0xc041738  jal         func_105CE0
label_1f62b0:
    if (ctx->pc == 0x1F62B0u) {
        ctx->pc = 0x1F62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62ACu;
        // 0x1f62b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62B4u;
        goto label_1f62b4;
    }
    ctx->pc = 0x1F62ACu;
    SET_GPR_U32(ctx, 31, 0x1F62B4u);
    ctx->pc = 0x1F62B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62ACu;
    // 0x1f62b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1F62ACu, 0x1F62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62B4u;
label_1f62b4:
    // 0x1f62b4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1f62b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1f62b8:
    // 0x1f62b8: 0xc070080  jal         func_1C0200
label_1f62bc:
    if (ctx->pc == 0x1F62BCu) {
        ctx->pc = 0x1F62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62B8u;
        // 0x1f62bc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62C0u;
        goto label_1f62c0;
    }
    ctx->pc = 0x1F62B8u;
    SET_GPR_U32(ctx, 31, 0x1F62C0u);
    ctx->pc = 0x1F62BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62B8u;
    // 0x1f62bc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1F62C0u;
label_1f62c0:
    // 0x1f62c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f62c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f62c4:
    // 0x1f62c4: 0xc0416e4  jal         func_105B90
label_1f62c8:
    if (ctx->pc == 0x1F62C8u) {
        ctx->pc = 0x1F62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62C4u;
        // 0x1f62c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62CCu;
        goto label_1f62cc;
    }
    ctx->pc = 0x1F62C4u;
    SET_GPR_U32(ctx, 31, 0x1F62CCu);
    ctx->pc = 0x1F62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62C4u;
    // 0x1f62c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1F62C4u, 0x1F62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F62CCu;
label_1f62cc:
    // 0x1f62cc: 0xaf829038  sw          $v0, -0x6FC8($gp)
    ctx->pc = 0x1f62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938680), GPR_U32(ctx, 2));
label_1f62d0:
    // 0x1f62d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f62d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f62d4:
    // 0x1f62d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f62d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f62d8:
    // 0x1f62d8: 0x27839030  addiu       $v1, $gp, -0x6FD0
    ctx->pc = 0x1f62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
label_1f62dc:
    // 0x1f62dc: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f62dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1f62e0:
    // 0x1f62e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f62e4:
    // 0x1f62e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1f62e8:
    if (ctx->pc == 0x1F62E8u) {
        ctx->pc = 0x1F62ECu;
        goto label_1f62ec;
    }
    ctx->pc = 0x1F62E4u;
    {
        const bool branch_taken_0x1f62e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f62e4) {
            ctx->pc = 0x1F6300u;
            goto label_1f6300;
        }
    }
    ctx->pc = 0x1F62ECu;
label_1f62ec:
    // 0x1f62ec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1f62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1f62f0:
    // 0x1f62f0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f62f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f62f4:
    // 0x1f62f4: 0xc070080  jal         func_1C0200
label_1f62f8:
    if (ctx->pc == 0x1F62F8u) {
        ctx->pc = 0x1F62F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F62F4u;
        // 0x1f62f8: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F62FCu;
        goto label_1f62fc;
    }
    ctx->pc = 0x1F62F4u;
    SET_GPR_U32(ctx, 31, 0x1F62FCu);
    ctx->pc = 0x1F62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F62F4u;
    // 0x1f62f8: 0x34450080  ori         $a1, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1F62FCu;
label_1f62fc:
    // 0x1f62fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1f62fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1f6300:
    // 0x1f6300: 0x27839028  addiu       $v1, $gp, -0x6FD8
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
label_1f6304:
    // 0x1f6304: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1f6304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->pc = 0x1f6308u;
    return;
}

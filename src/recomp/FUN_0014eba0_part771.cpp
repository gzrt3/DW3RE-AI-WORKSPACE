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


void FUN_0014eba0_part771(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c6b40u: goto label_2c6b40;
        case 0x2c6b44u: goto label_2c6b44;
        case 0x2c6b48u: goto label_2c6b48;
        case 0x2c6b4cu: goto label_2c6b4c;
        case 0x2c6b50u: goto label_2c6b50;
        case 0x2c6b54u: goto label_2c6b54;
        case 0x2c6b58u: goto label_2c6b58;
        case 0x2c6b5cu: goto label_2c6b5c;
        case 0x2c6b60u: goto label_2c6b60;
        case 0x2c6b64u: goto label_2c6b64;
        case 0x2c6b68u: goto label_2c6b68;
        case 0x2c6b6cu: goto label_2c6b6c;
        case 0x2c6b70u: goto label_2c6b70;
        case 0x2c6b74u: goto label_2c6b74;
        case 0x2c6b78u: goto label_2c6b78;
        case 0x2c6b7cu: goto label_2c6b7c;
        case 0x2c6b80u: goto label_2c6b80;
        case 0x2c6b84u: goto label_2c6b84;
        case 0x2c6b88u: goto label_2c6b88;
        case 0x2c6b8cu: goto label_2c6b8c;
        case 0x2c6b90u: goto label_2c6b90;
        case 0x2c6b94u: goto label_2c6b94;
        case 0x2c6b98u: goto label_2c6b98;
        case 0x2c6b9cu: goto label_2c6b9c;
        case 0x2c6ba0u: goto label_2c6ba0;
        case 0x2c6ba4u: goto label_2c6ba4;
        case 0x2c6ba8u: goto label_2c6ba8;
        case 0x2c6bacu: goto label_2c6bac;
        case 0x2c6bb0u: goto label_2c6bb0;
        case 0x2c6bb4u: goto label_2c6bb4;
        case 0x2c6bb8u: goto label_2c6bb8;
        case 0x2c6bbcu: goto label_2c6bbc;
        case 0x2c6bc0u: goto label_2c6bc0;
        case 0x2c6bc4u: goto label_2c6bc4;
        case 0x2c6bc8u: goto label_2c6bc8;
        case 0x2c6bccu: goto label_2c6bcc;
        case 0x2c6bd0u: goto label_2c6bd0;
        case 0x2c6bd4u: goto label_2c6bd4;
        case 0x2c6bd8u: goto label_2c6bd8;
        case 0x2c6bdcu: goto label_2c6bdc;
        case 0x2c6be0u: goto label_2c6be0;
        case 0x2c6be4u: goto label_2c6be4;
        case 0x2c6be8u: goto label_2c6be8;
        case 0x2c6becu: goto label_2c6bec;
        case 0x2c6bf0u: goto label_2c6bf0;
        case 0x2c6bf4u: goto label_2c6bf4;
        case 0x2c6bf8u: goto label_2c6bf8;
        case 0x2c6bfcu: goto label_2c6bfc;
        case 0x2c6c00u: goto label_2c6c00;
        case 0x2c6c04u: goto label_2c6c04;
        case 0x2c6c08u: goto label_2c6c08;
        case 0x2c6c0cu: goto label_2c6c0c;
        case 0x2c6c10u: goto label_2c6c10;
        case 0x2c6c14u: goto label_2c6c14;
        case 0x2c6c18u: goto label_2c6c18;
        case 0x2c6c1cu: goto label_2c6c1c;
        case 0x2c6c20u: goto label_2c6c20;
        case 0x2c6c24u: goto label_2c6c24;
        case 0x2c6c28u: goto label_2c6c28;
        case 0x2c6c2cu: goto label_2c6c2c;
        case 0x2c6c30u: goto label_2c6c30;
        case 0x2c6c34u: goto label_2c6c34;
        case 0x2c6c38u: goto label_2c6c38;
        case 0x2c6c3cu: goto label_2c6c3c;
        case 0x2c6c40u: goto label_2c6c40;
        case 0x2c6c44u: goto label_2c6c44;
        case 0x2c6c48u: goto label_2c6c48;
        case 0x2c6c4cu: goto label_2c6c4c;
        case 0x2c6c50u: goto label_2c6c50;
        case 0x2c6c54u: goto label_2c6c54;
        case 0x2c6c58u: goto label_2c6c58;
        case 0x2c6c5cu: goto label_2c6c5c;
        case 0x2c6c60u: goto label_2c6c60;
        case 0x2c6c64u: goto label_2c6c64;
        case 0x2c6c68u: goto label_2c6c68;
        case 0x2c6c6cu: goto label_2c6c6c;
        case 0x2c6c70u: goto label_2c6c70;
        case 0x2c6c74u: goto label_2c6c74;
        case 0x2c6c78u: goto label_2c6c78;
        case 0x2c6c7cu: goto label_2c6c7c;
        case 0x2c6c80u: goto label_2c6c80;
        case 0x2c6c84u: goto label_2c6c84;
        case 0x2c6c88u: goto label_2c6c88;
        case 0x2c6c8cu: goto label_2c6c8c;
        case 0x2c6c90u: goto label_2c6c90;
        case 0x2c6c94u: goto label_2c6c94;
        case 0x2c6c98u: goto label_2c6c98;
        case 0x2c6c9cu: goto label_2c6c9c;
        case 0x2c6ca0u: goto label_2c6ca0;
        case 0x2c6ca4u: goto label_2c6ca4;
        case 0x2c6ca8u: goto label_2c6ca8;
        case 0x2c6cacu: goto label_2c6cac;
        case 0x2c6cb0u: goto label_2c6cb0;
        case 0x2c6cb4u: goto label_2c6cb4;
        case 0x2c6cb8u: goto label_2c6cb8;
        case 0x2c6cbcu: goto label_2c6cbc;
        case 0x2c6cc0u: goto label_2c6cc0;
        case 0x2c6cc4u: goto label_2c6cc4;
        case 0x2c6cc8u: goto label_2c6cc8;
        case 0x2c6cccu: goto label_2c6ccc;
        case 0x2c6cd0u: goto label_2c6cd0;
        case 0x2c6cd4u: goto label_2c6cd4;
        case 0x2c6cd8u: goto label_2c6cd8;
        case 0x2c6cdcu: goto label_2c6cdc;
        case 0x2c6ce0u: goto label_2c6ce0;
        case 0x2c6ce4u: goto label_2c6ce4;
        case 0x2c6ce8u: goto label_2c6ce8;
        case 0x2c6cecu: goto label_2c6cec;
        case 0x2c6cf0u: goto label_2c6cf0;
        case 0x2c6cf4u: goto label_2c6cf4;
        case 0x2c6cf8u: goto label_2c6cf8;
        case 0x2c6cfcu: goto label_2c6cfc;
        case 0x2c6d00u: goto label_2c6d00;
        case 0x2c6d04u: goto label_2c6d04;
        case 0x2c6d08u: goto label_2c6d08;
        case 0x2c6d0cu: goto label_2c6d0c;
        case 0x2c6d10u: goto label_2c6d10;
        case 0x2c6d14u: goto label_2c6d14;
        case 0x2c6d18u: goto label_2c6d18;
        case 0x2c6d1cu: goto label_2c6d1c;
        case 0x2c6d20u: goto label_2c6d20;
        case 0x2c6d24u: goto label_2c6d24;
        case 0x2c6d28u: goto label_2c6d28;
        case 0x2c6d2cu: goto label_2c6d2c;
        case 0x2c6d30u: goto label_2c6d30;
        case 0x2c6d34u: goto label_2c6d34;
        case 0x2c6d38u: goto label_2c6d38;
        case 0x2c6d3cu: goto label_2c6d3c;
        case 0x2c6d40u: goto label_2c6d40;
        case 0x2c6d44u: goto label_2c6d44;
        case 0x2c6d48u: goto label_2c6d48;
        case 0x2c6d4cu: goto label_2c6d4c;
        case 0x2c6d50u: goto label_2c6d50;
        case 0x2c6d54u: goto label_2c6d54;
        case 0x2c6d58u: goto label_2c6d58;
        case 0x2c6d5cu: goto label_2c6d5c;
        case 0x2c6d60u: goto label_2c6d60;
        case 0x2c6d64u: goto label_2c6d64;
        case 0x2c6d68u: goto label_2c6d68;
        case 0x2c6d6cu: goto label_2c6d6c;
        case 0x2c6d70u: goto label_2c6d70;
        case 0x2c6d74u: goto label_2c6d74;
        case 0x2c6d78u: goto label_2c6d78;
        case 0x2c6d7cu: goto label_2c6d7c;
        case 0x2c6d80u: goto label_2c6d80;
        case 0x2c6d84u: goto label_2c6d84;
        case 0x2c6d88u: goto label_2c6d88;
        case 0x2c6d8cu: goto label_2c6d8c;
        case 0x2c6d90u: goto label_2c6d90;
        case 0x2c6d94u: goto label_2c6d94;
        case 0x2c6d98u: goto label_2c6d98;
        case 0x2c6d9cu: goto label_2c6d9c;
        case 0x2c6da0u: goto label_2c6da0;
        case 0x2c6da4u: goto label_2c6da4;
        case 0x2c6da8u: goto label_2c6da8;
        case 0x2c6dacu: goto label_2c6dac;
        case 0x2c6db0u: goto label_2c6db0;
        case 0x2c6db4u: goto label_2c6db4;
        case 0x2c6db8u: goto label_2c6db8;
        case 0x2c6dbcu: goto label_2c6dbc;
        case 0x2c6dc0u: goto label_2c6dc0;
        case 0x2c6dc4u: goto label_2c6dc4;
        case 0x2c6dc8u: goto label_2c6dc8;
        case 0x2c6dccu: goto label_2c6dcc;
        case 0x2c6dd0u: goto label_2c6dd0;
        case 0x2c6dd4u: goto label_2c6dd4;
        case 0x2c6dd8u: goto label_2c6dd8;
        case 0x2c6ddcu: goto label_2c6ddc;
        case 0x2c6de0u: goto label_2c6de0;
        case 0x2c6de4u: goto label_2c6de4;
        case 0x2c6de8u: goto label_2c6de8;
        case 0x2c6decu: goto label_2c6dec;
        case 0x2c6df0u: goto label_2c6df0;
        case 0x2c6df4u: goto label_2c6df4;
        case 0x2c6df8u: goto label_2c6df8;
        case 0x2c6dfcu: goto label_2c6dfc;
        case 0x2c6e00u: goto label_2c6e00;
        case 0x2c6e04u: goto label_2c6e04;
        case 0x2c6e08u: goto label_2c6e08;
        case 0x2c6e0cu: goto label_2c6e0c;
        case 0x2c6e10u: goto label_2c6e10;
        case 0x2c6e14u: goto label_2c6e14;
        case 0x2c6e18u: goto label_2c6e18;
        case 0x2c6e1cu: goto label_2c6e1c;
        case 0x2c6e20u: goto label_2c6e20;
        case 0x2c6e24u: goto label_2c6e24;
        case 0x2c6e28u: goto label_2c6e28;
        case 0x2c6e2cu: goto label_2c6e2c;
        case 0x2c6e30u: goto label_2c6e30;
        case 0x2c6e34u: goto label_2c6e34;
        case 0x2c6e38u: goto label_2c6e38;
        case 0x2c6e3cu: goto label_2c6e3c;
        case 0x2c6e40u: goto label_2c6e40;
        case 0x2c6e44u: goto label_2c6e44;
        case 0x2c6e48u: goto label_2c6e48;
        case 0x2c6e4cu: goto label_2c6e4c;
        case 0x2c6e50u: goto label_2c6e50;
        case 0x2c6e54u: goto label_2c6e54;
        case 0x2c6e58u: goto label_2c6e58;
        case 0x2c6e5cu: goto label_2c6e5c;
        case 0x2c6e60u: goto label_2c6e60;
        case 0x2c6e64u: goto label_2c6e64;
        case 0x2c6e68u: goto label_2c6e68;
        case 0x2c6e6cu: goto label_2c6e6c;
        case 0x2c6e70u: goto label_2c6e70;
        case 0x2c6e74u: goto label_2c6e74;
        case 0x2c6e78u: goto label_2c6e78;
        case 0x2c6e7cu: goto label_2c6e7c;
        case 0x2c6e80u: goto label_2c6e80;
        case 0x2c6e84u: goto label_2c6e84;
        case 0x2c6e88u: goto label_2c6e88;
        case 0x2c6e8cu: goto label_2c6e8c;
        case 0x2c6e90u: goto label_2c6e90;
        case 0x2c6e94u: goto label_2c6e94;
        case 0x2c6e98u: goto label_2c6e98;
        case 0x2c6e9cu: goto label_2c6e9c;
        case 0x2c6ea0u: goto label_2c6ea0;
        case 0x2c6ea4u: goto label_2c6ea4;
        case 0x2c6ea8u: goto label_2c6ea8;
        case 0x2c6eacu: goto label_2c6eac;
        case 0x2c6eb0u: goto label_2c6eb0;
        case 0x2c6eb4u: goto label_2c6eb4;
        case 0x2c6eb8u: goto label_2c6eb8;
        case 0x2c6ebcu: goto label_2c6ebc;
        case 0x2c6ec0u: goto label_2c6ec0;
        case 0x2c6ec4u: goto label_2c6ec4;
        case 0x2c6ec8u: goto label_2c6ec8;
        case 0x2c6eccu: goto label_2c6ecc;
        case 0x2c6ed0u: goto label_2c6ed0;
        case 0x2c6ed4u: goto label_2c6ed4;
        case 0x2c6ed8u: goto label_2c6ed8;
        case 0x2c6edcu: goto label_2c6edc;
        case 0x2c6ee0u: goto label_2c6ee0;
        case 0x2c6ee4u: goto label_2c6ee4;
        case 0x2c6ee8u: goto label_2c6ee8;
        case 0x2c6eecu: goto label_2c6eec;
        case 0x2c6ef0u: goto label_2c6ef0;
        case 0x2c6ef4u: goto label_2c6ef4;
        case 0x2c6ef8u: goto label_2c6ef8;
        case 0x2c6efcu: goto label_2c6efc;
        case 0x2c6f00u: goto label_2c6f00;
        case 0x2c6f04u: goto label_2c6f04;
        case 0x2c6f08u: goto label_2c6f08;
        case 0x2c6f0cu: goto label_2c6f0c;
        case 0x2c6f10u: goto label_2c6f10;
        case 0x2c6f14u: goto label_2c6f14;
        case 0x2c6f18u: goto label_2c6f18;
        case 0x2c6f1cu: goto label_2c6f1c;
        case 0x2c6f20u: goto label_2c6f20;
        case 0x2c6f24u: goto label_2c6f24;
        case 0x2c6f28u: goto label_2c6f28;
        case 0x2c6f2cu: goto label_2c6f2c;
        case 0x2c6f30u: goto label_2c6f30;
        case 0x2c6f34u: goto label_2c6f34;
        case 0x2c6f38u: goto label_2c6f38;
        case 0x2c6f3cu: goto label_2c6f3c;
        case 0x2c6f40u: goto label_2c6f40;
        case 0x2c6f44u: goto label_2c6f44;
        case 0x2c6f48u: goto label_2c6f48;
        case 0x2c6f4cu: goto label_2c6f4c;
        case 0x2c6f50u: goto label_2c6f50;
        case 0x2c6f54u: goto label_2c6f54;
        case 0x2c6f58u: goto label_2c6f58;
        case 0x2c6f5cu: goto label_2c6f5c;
        case 0x2c6f60u: goto label_2c6f60;
        case 0x2c6f64u: goto label_2c6f64;
        case 0x2c6f68u: goto label_2c6f68;
        case 0x2c6f6cu: goto label_2c6f6c;
        case 0x2c6f70u: goto label_2c6f70;
        case 0x2c6f74u: goto label_2c6f74;
        case 0x2c6f78u: goto label_2c6f78;
        case 0x2c6f7cu: goto label_2c6f7c;
        case 0x2c6f80u: goto label_2c6f80;
        case 0x2c6f84u: goto label_2c6f84;
        case 0x2c6f88u: goto label_2c6f88;
        case 0x2c6f8cu: goto label_2c6f8c;
        case 0x2c6f90u: goto label_2c6f90;
        case 0x2c6f94u: goto label_2c6f94;
        case 0x2c6f98u: goto label_2c6f98;
        case 0x2c6f9cu: goto label_2c6f9c;
        case 0x2c6fa0u: goto label_2c6fa0;
        case 0x2c6fa4u: goto label_2c6fa4;
        case 0x2c6fa8u: goto label_2c6fa8;
        case 0x2c6facu: goto label_2c6fac;
        case 0x2c6fb0u: goto label_2c6fb0;
        case 0x2c6fb4u: goto label_2c6fb4;
        case 0x2c6fb8u: goto label_2c6fb8;
        case 0x2c6fbcu: goto label_2c6fbc;
        case 0x2c6fc0u: goto label_2c6fc0;
        case 0x2c6fc4u: goto label_2c6fc4;
        case 0x2c6fc8u: goto label_2c6fc8;
        case 0x2c6fccu: goto label_2c6fcc;
        case 0x2c6fd0u: goto label_2c6fd0;
        case 0x2c6fd4u: goto label_2c6fd4;
        case 0x2c6fd8u: goto label_2c6fd8;
        case 0x2c6fdcu: goto label_2c6fdc;
        case 0x2c6fe0u: goto label_2c6fe0;
        case 0x2c6fe4u: goto label_2c6fe4;
        case 0x2c6fe8u: goto label_2c6fe8;
        case 0x2c6fecu: goto label_2c6fec;
        case 0x2c6ff0u: goto label_2c6ff0;
        case 0x2c6ff4u: goto label_2c6ff4;
        case 0x2c6ff8u: goto label_2c6ff8;
        case 0x2c6ffcu: goto label_2c6ffc;
        case 0x2c7000u: goto label_2c7000;
        case 0x2c7004u: goto label_2c7004;
        case 0x2c7008u: goto label_2c7008;
        case 0x2c700cu: goto label_2c700c;
        case 0x2c7010u: goto label_2c7010;
        case 0x2c7014u: goto label_2c7014;
        case 0x2c7018u: goto label_2c7018;
        case 0x2c701cu: goto label_2c701c;
        case 0x2c7020u: goto label_2c7020;
        case 0x2c7024u: goto label_2c7024;
        case 0x2c7028u: goto label_2c7028;
        case 0x2c702cu: goto label_2c702c;
        case 0x2c7030u: goto label_2c7030;
        case 0x2c7034u: goto label_2c7034;
        case 0x2c7038u: goto label_2c7038;
        case 0x2c703cu: goto label_2c703c;
        case 0x2c7040u: goto label_2c7040;
        case 0x2c7044u: goto label_2c7044;
        case 0x2c7048u: goto label_2c7048;
        case 0x2c704cu: goto label_2c704c;
        case 0x2c7050u: goto label_2c7050;
        case 0x2c7054u: goto label_2c7054;
        case 0x2c7058u: goto label_2c7058;
        case 0x2c705cu: goto label_2c705c;
        case 0x2c7060u: goto label_2c7060;
        case 0x2c7064u: goto label_2c7064;
        case 0x2c7068u: goto label_2c7068;
        case 0x2c706cu: goto label_2c706c;
        case 0x2c7070u: goto label_2c7070;
        case 0x2c7074u: goto label_2c7074;
        case 0x2c7078u: goto label_2c7078;
        case 0x2c707cu: goto label_2c707c;
        case 0x2c7080u: goto label_2c7080;
        case 0x2c7084u: goto label_2c7084;
        case 0x2c7088u: goto label_2c7088;
        case 0x2c708cu: goto label_2c708c;
        case 0x2c7090u: goto label_2c7090;
        case 0x2c7094u: goto label_2c7094;
        case 0x2c7098u: goto label_2c7098;
        case 0x2c709cu: goto label_2c709c;
        case 0x2c70a0u: goto label_2c70a0;
        case 0x2c70a4u: goto label_2c70a4;
        case 0x2c70a8u: goto label_2c70a8;
        case 0x2c70acu: goto label_2c70ac;
        case 0x2c70b0u: goto label_2c70b0;
        case 0x2c70b4u: goto label_2c70b4;
        case 0x2c70b8u: goto label_2c70b8;
        case 0x2c70bcu: goto label_2c70bc;
        case 0x2c70c0u: goto label_2c70c0;
        case 0x2c70c4u: goto label_2c70c4;
        case 0x2c70c8u: goto label_2c70c8;
        case 0x2c70ccu: goto label_2c70cc;
        case 0x2c70d0u: goto label_2c70d0;
        case 0x2c70d4u: goto label_2c70d4;
        case 0x2c70d8u: goto label_2c70d8;
        case 0x2c70dcu: goto label_2c70dc;
        case 0x2c70e0u: goto label_2c70e0;
        case 0x2c70e4u: goto label_2c70e4;
        case 0x2c70e8u: goto label_2c70e8;
        case 0x2c70ecu: goto label_2c70ec;
        case 0x2c70f0u: goto label_2c70f0;
        case 0x2c70f4u: goto label_2c70f4;
        case 0x2c70f8u: goto label_2c70f8;
        case 0x2c70fcu: goto label_2c70fc;
        case 0x2c7100u: goto label_2c7100;
        case 0x2c7104u: goto label_2c7104;
        case 0x2c7108u: goto label_2c7108;
        case 0x2c710cu: goto label_2c710c;
        case 0x2c7110u: goto label_2c7110;
        case 0x2c7114u: goto label_2c7114;
        case 0x2c7118u: goto label_2c7118;
        case 0x2c711cu: goto label_2c711c;
        case 0x2c7120u: goto label_2c7120;
        case 0x2c7124u: goto label_2c7124;
        case 0x2c7128u: goto label_2c7128;
        case 0x2c712cu: goto label_2c712c;
        case 0x2c7130u: goto label_2c7130;
        case 0x2c7134u: goto label_2c7134;
        case 0x2c7138u: goto label_2c7138;
        case 0x2c713cu: goto label_2c713c;
        case 0x2c7140u: goto label_2c7140;
        case 0x2c7144u: goto label_2c7144;
        case 0x2c7148u: goto label_2c7148;
        case 0x2c714cu: goto label_2c714c;
        case 0x2c7150u: goto label_2c7150;
        case 0x2c7154u: goto label_2c7154;
        case 0x2c7158u: goto label_2c7158;
        case 0x2c715cu: goto label_2c715c;
        case 0x2c7160u: goto label_2c7160;
        case 0x2c7164u: goto label_2c7164;
        case 0x2c7168u: goto label_2c7168;
        case 0x2c716cu: goto label_2c716c;
        case 0x2c7170u: goto label_2c7170;
        case 0x2c7174u: goto label_2c7174;
        case 0x2c7178u: goto label_2c7178;
        case 0x2c717cu: goto label_2c717c;
        case 0x2c7180u: goto label_2c7180;
        case 0x2c7184u: goto label_2c7184;
        case 0x2c7188u: goto label_2c7188;
        case 0x2c718cu: goto label_2c718c;
        case 0x2c7190u: goto label_2c7190;
        case 0x2c7194u: goto label_2c7194;
        case 0x2c7198u: goto label_2c7198;
        case 0x2c719cu: goto label_2c719c;
        case 0x2c71a0u: goto label_2c71a0;
        case 0x2c71a4u: goto label_2c71a4;
        case 0x2c71a8u: goto label_2c71a8;
        case 0x2c71acu: goto label_2c71ac;
        case 0x2c71b0u: goto label_2c71b0;
        case 0x2c71b4u: goto label_2c71b4;
        case 0x2c71b8u: goto label_2c71b8;
        case 0x2c71bcu: goto label_2c71bc;
        case 0x2c71c0u: goto label_2c71c0;
        case 0x2c71c4u: goto label_2c71c4;
        case 0x2c71c8u: goto label_2c71c8;
        case 0x2c71ccu: goto label_2c71cc;
        case 0x2c71d0u: goto label_2c71d0;
        case 0x2c71d4u: goto label_2c71d4;
        case 0x2c71d8u: goto label_2c71d8;
        case 0x2c71dcu: goto label_2c71dc;
        case 0x2c71e0u: goto label_2c71e0;
        case 0x2c71e4u: goto label_2c71e4;
        case 0x2c71e8u: goto label_2c71e8;
        case 0x2c71ecu: goto label_2c71ec;
        case 0x2c71f0u: goto label_2c71f0;
        case 0x2c71f4u: goto label_2c71f4;
        case 0x2c71f8u: goto label_2c71f8;
        case 0x2c71fcu: goto label_2c71fc;
        case 0x2c7200u: goto label_2c7200;
        case 0x2c7204u: goto label_2c7204;
        case 0x2c7208u: goto label_2c7208;
        case 0x2c720cu: goto label_2c720c;
        case 0x2c7210u: goto label_2c7210;
        case 0x2c7214u: goto label_2c7214;
        case 0x2c7218u: goto label_2c7218;
        case 0x2c721cu: goto label_2c721c;
        case 0x2c7220u: goto label_2c7220;
        case 0x2c7224u: goto label_2c7224;
        case 0x2c7228u: goto label_2c7228;
        case 0x2c722cu: goto label_2c722c;
        case 0x2c7230u: goto label_2c7230;
        case 0x2c7234u: goto label_2c7234;
        case 0x2c7238u: goto label_2c7238;
        case 0x2c723cu: goto label_2c723c;
        case 0x2c7240u: goto label_2c7240;
        case 0x2c7244u: goto label_2c7244;
        case 0x2c7248u: goto label_2c7248;
        case 0x2c724cu: goto label_2c724c;
        case 0x2c7250u: goto label_2c7250;
        case 0x2c7254u: goto label_2c7254;
        case 0x2c7258u: goto label_2c7258;
        case 0x2c725cu: goto label_2c725c;
        case 0x2c7260u: goto label_2c7260;
        case 0x2c7264u: goto label_2c7264;
        case 0x2c7268u: goto label_2c7268;
        case 0x2c726cu: goto label_2c726c;
        case 0x2c7270u: goto label_2c7270;
        case 0x2c7274u: goto label_2c7274;
        case 0x2c7278u: goto label_2c7278;
        case 0x2c727cu: goto label_2c727c;
        case 0x2c7280u: goto label_2c7280;
        case 0x2c7284u: goto label_2c7284;
        case 0x2c7288u: goto label_2c7288;
        case 0x2c728cu: goto label_2c728c;
        case 0x2c7290u: goto label_2c7290;
        case 0x2c7294u: goto label_2c7294;
        case 0x2c7298u: goto label_2c7298;
        case 0x2c729cu: goto label_2c729c;
        case 0x2c72a0u: goto label_2c72a0;
        case 0x2c72a4u: goto label_2c72a4;
        case 0x2c72a8u: goto label_2c72a8;
        case 0x2c72acu: goto label_2c72ac;
        case 0x2c72b0u: goto label_2c72b0;
        case 0x2c72b4u: goto label_2c72b4;
        case 0x2c72b8u: goto label_2c72b8;
        case 0x2c72bcu: goto label_2c72bc;
        case 0x2c72c0u: goto label_2c72c0;
        case 0x2c72c4u: goto label_2c72c4;
        case 0x2c72c8u: goto label_2c72c8;
        case 0x2c72ccu: goto label_2c72cc;
        case 0x2c72d0u: goto label_2c72d0;
        case 0x2c72d4u: goto label_2c72d4;
        case 0x2c72d8u: goto label_2c72d8;
        case 0x2c72dcu: goto label_2c72dc;
        case 0x2c72e0u: goto label_2c72e0;
        case 0x2c72e4u: goto label_2c72e4;
        case 0x2c72e8u: goto label_2c72e8;
        case 0x2c72ecu: goto label_2c72ec;
        case 0x2c72f0u: goto label_2c72f0;
        case 0x2c72f4u: goto label_2c72f4;
        case 0x2c72f8u: goto label_2c72f8;
        case 0x2c72fcu: goto label_2c72fc;
        case 0x2c7300u: goto label_2c7300;
        case 0x2c7304u: goto label_2c7304;
        case 0x2c7308u: goto label_2c7308;
        case 0x2c730cu: goto label_2c730c;
        default: return;
    }

label_2c6b40:
    // 0x2c6b40: 0x6e6961  .word       0x006E6961                   # addu        $t5, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6b40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_2c6b44:
    // 0x2c6b44: 0x0  nop
    ctx->pc = 0x2c6b44u;
    // NOP
label_2c6b48:
    // 0x2c6b48: 0x736f7243  .word       0x736F7243                   # INVALID     $k1, $t7, 0x7243 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6b48u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 15); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c6b4c:
    // 0x2c6b4c: 0x776f6273  .word       0x776F6273                   # INVALID     $k1, $t7, 0x6273 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6b4cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6B4C raw=0x776F6273");
 /* MITIGATED */
label_2c6b50:
    // 0x2c6b50: 0x0  nop
    ctx->pc = 0x2c6b50u;
    // NOP
label_2c6b54:
    // 0x2c6b54: 0x0  nop
    ctx->pc = 0x2c6b54u;
    // NOP
label_2c6b58:
    // 0x2c6b58: 0x73726946  .word       0x73726946                   # INVALID     $k1, $s2, 0x6946 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6b58u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x2C6B58 raw=0x73726946");
 /* MITIGATED */
label_2c6b5c:
    // 0x2c6b5c: 0x72432074  .word       0x72432074                   # psllh       $a0, $v1, 1 # 02400000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6b5cu;
    SET_GPR_VEC(ctx, 4, _mm_slli_epi16(GPR_VEC(ctx, 3), 1));
label_2c6b60:
    // 0x2c6b60: 0x6273736f  daddi       $s3, $s3, 0x736F
    ctx->pc = 0x2c6b60u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)29551; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c6b64:
    // 0x2c6b64: 0x776f  .word       0x0000776F                   # dsubu       $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6b64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c6b68:
    // 0x2c6b68: 0x65746147  daddiu      $s4, $t3, 0x6147
    ctx->pc = 0x2c6b68u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24903);
label_2c6b6c:
    // 0x2c6b6c: 0x61754720  daddi       $s5, $t3, 0x4720
    ctx->pc = 0x2c6b6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18208; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c6b70:
    // 0x2c6b70: 0x6472  tlt         $zero, $zero, 401
    ctx->pc = 0x2c6b70u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6b74:
    // 0x2c6b74: 0x0  nop
    ctx->pc = 0x2c6b74u;
    // NOP
label_2c6b78:
    // 0x2c6b78: 0x6f6f7254  ldr         $t7, 0x7254($k1)
    ctx->pc = 0x2c6b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c6b7c:
    // 0x2c6b7c: 0x726570  tge         $v1, $s2, 405
    ctx->pc = 0x2c6b7cu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c6b80:
    // 0x2c6b80: 0x656e6547  daddiu      $t6, $t3, 0x6547
    ctx->pc = 0x2c6b80u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25927);
label_2c6b84:
    // 0x2c6b84: 0x6c6172  tlt         $v1, $t4, 389
    ctx->pc = 0x2c6b84u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2c6b88:
    // 0x2c6b88: 0x73726946  .word       0x73726946                   # INVALID     $k1, $s2, 0x6946 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6b88u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x2C6B88 raw=0x73726946");
 /* MITIGATED */
label_2c6b8c:
    // 0x2c6b8c: 0x6f422074  ldr         $v0, 0x2074($k0)
    ctx->pc = 0x2c6b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c6b90:
    // 0x2c6b90: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6b90u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2C6B90 raw=0x00000077");
 /* MITIGATED */
label_2c6b94:
    // 0x2c6b94: 0x0  nop
    ctx->pc = 0x2c6b94u;
    // NOP
label_2c6b98:
    // 0x2c6b98: 0x7964614c  lq          $a0, 0x614C($t3)
    ctx->pc = 0x2c6b98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 24908)));
label_2c6b9c:
    // 0x2c6b9c: 0x776f4220  .word       0x776F4220                   # INVALID     $k1, $t7, 0x4220 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6b9cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6B9C raw=0x776F4220");
 /* MITIGATED */
label_2c6ba0:
    // 0x2c6ba0: 0x6e616d  .word       0x006E616D                   # daddu       $t4, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6ba0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 14));
label_2c6ba4:
    // 0x2c6ba4: 0x0  nop
    ctx->pc = 0x2c6ba4u;
    // NOP
label_2c6ba8:
    // 0x2c6ba8: 0x73726946  .word       0x73726946                   # INVALID     $k1, $s2, 0x6946 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6ba8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x2C6BA8 raw=0x73726946");
 /* MITIGATED */
label_2c6bac:
    // 0x2c6bac: 0x614c2074  daddi       $t4, $t2, 0x2074
    ctx->pc = 0x2c6bacu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c6bb0:
    // 0x2c6bb0: 0x42207964  .word       0x42207964                   # INVALID     $s1, $zero, 0x7964 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c6bb0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C6BB0 raw=0x42207964");
 /* MITIGATED */
label_2c6bb4:
    // 0x2c6bb4: 0x776f  .word       0x0000776F                   # dsubu       $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6bb4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c6bb8:
    // 0x2c6bb8: 0x646c6f53  daddiu      $t4, $v1, 0x6F53
    ctx->pc = 0x2c6bb8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28499);
label_2c6bbc:
    // 0x2c6bbc: 0x726569  .word       0x00726569                   # mtsa        $v1 # 00126540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6bbcu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c6bc0:
    // 0x2c6bc0: 0x72726157  .word       0x72726157                   # INVALID     $s3, $s2, 0x6157 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6bc0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x17 at 0x2C6BC0 raw=0x72726157");
 /* MITIGATED */
label_2c6bc4:
    // 0x2c6bc4: 0x726f69  .word       0x00726F69                   # mtsa        $v1 # 00126F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6bc4u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c6bc8:
    // 0x2c6bc8: 0x6d6e614e  ldr         $t6, 0x614E($t3)
    ctx->pc = 0x2c6bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24910); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c6bcc:
    // 0x2c6bcc: 0x45206e61  .word       0x45206E61                   # INVALID     $t1, $zero, 0x6E61 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6bccu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x21 at 0x2C6BCC raw=0x45206E61");
 /* MITIGATED */
label_2c6bd0:
    // 0x2c6bd0: 0x6574696c  daddiu      $s4, $t3, 0x696C
    ctx->pc = 0x2c6bd0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
label_2c6bd4:
    // 0x2c6bd4: 0x0  nop
    ctx->pc = 0x2c6bd4u;
    // NOP
label_2c6bd8:
    // 0x2c6bd8: 0x7a616d41  lq          $at, 0x6D41($s3)
    ctx->pc = 0x2c6bd8u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 19), 27969)));
label_2c6bdc:
    // 0x2c6bdc: 0x73656e6f  .word       0x73656E6F                   # INVALID     $k1, $a1, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6bdcu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2C6BDC raw=0x73656E6F");
 /* MITIGATED */
label_2c6be0:
    // 0x2c6be0: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c6be0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6be4:
    // 0x2c6be4: 0x0  nop
    ctx->pc = 0x2c6be4u;
    // NOP
label_2c6be8:
    // 0x2c6be8: 0x206e6148  addi        $t6, $v1, 0x6148
    ctx->pc = 0x2c6be8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24904, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6bec:
    // 0x2c6bec: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6becu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6bf0:
    // 0x2c6bf0: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6bf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6bf4:
    // 0x2c6bf4: 0x0  nop
    ctx->pc = 0x2c6bf4u;
    // NOP
label_2c6bf8:
    // 0x2c6bf8: 0x696c6c41  ldl         $t4, 0x6C41($t3)
    ctx->pc = 0x2c6bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27713); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c6bfc:
    // 0x2c6bfc: 0x46206465  .word       0x46206465                   # INVALID     $s1, $zero, 0x6465 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6bfcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x25 at 0x2C6BFC raw=0x46206465");
 /* MITIGATED */
label_2c6c00:
    // 0x2c6c00: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2c6c00u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2c6c04:
    // 0x2c6c04: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c6c04u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6c08:
    // 0x2c6c08: 0x20696557  addi        $t1, $v1, 0x6557
    ctx->pc = 0x2c6c08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25943, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c6c0c:
    // 0x2c6c0c: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6c0cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6c10:
    // 0x2c6c10: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6c10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6c14:
    // 0x2c6c14: 0x0  nop
    ctx->pc = 0x2c6c14u;
    // NOP
label_2c6c18:
    // 0x2c6c18: 0x46207557  .word       0x46207557                   # INVALID     $s1, $zero, 0x7557 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6c18u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x17 at 0x2C6C18 raw=0x46207557");
 /* MITIGATED */
label_2c6c1c:
    // 0x2c6c1c: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2c6c1cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2c6c20:
    // 0x2c6c20: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c6c20u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6c24:
    // 0x2c6c24: 0x0  nop
    ctx->pc = 0x2c6c24u;
    // NOP
label_2c6c28:
    // 0x2c6c28: 0x20756853  addi        $s5, $v1, 0x6853
    ctx->pc = 0x2c6c28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26707, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6c2c:
    // 0x2c6c2c: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6c2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6c30:
    // 0x2c6c30: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6c30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6c34:
    // 0x2c6c34: 0x0  nop
    ctx->pc = 0x2c6c34u;
    // NOP
label_2c6c38:
    // 0x2c6c38: 0x6d6e614e  ldr         $t6, 0x614E($t3)
    ctx->pc = 0x2c6c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24910); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c6c3c:
    // 0x2c6c3c: 0x46206e61  .word       0x46206E61                   # INVALID     $s1, $zero, 0x6E61 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6c3cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x21 at 0x2C6C3C raw=0x46206E61");
 /* MITIGATED */
label_2c6c40:
    // 0x2c6c40: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2c6c40u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2c6c44:
    // 0x2c6c44: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c6c44u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6c48:
    // 0x2c6c48: 0x0  nop
    ctx->pc = 0x2c6c48u;
    // NOP
label_2c6c4c:
    // 0x2c6c4c: 0x0  nop
    ctx->pc = 0x2c6c4cu;
    // NOP
label_2c6c50:
    // 0x2c6c50: 0x206f6143  addi        $t7, $v1, 0x6143
    ctx->pc = 0x2c6c50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2c6c54:
    // 0x2c6c54: 0x276f6143  addiu       $t7, $k1, 0x6143
    ctx->pc = 0x2c6c54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 27), 24899));
label_2c6c58:
    // 0x2c6c58: 0x6f462073  ldr         $a2, 0x2073($k0)
    ctx->pc = 0x2c6c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c6c5c:
    // 0x2c6c5c: 0x73656372  .word       0x73656372                   # INVALID     $k1, $a1, 0x6372 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6c5cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2C6C5C raw=0x73656372");
 /* MITIGATED */
label_2c6c60:
    // 0x2c6c60: 0x0  nop
    ctx->pc = 0x2c6c60u;
    // NOP
label_2c6c64:
    // 0x2c6c64: 0x0  nop
    ctx->pc = 0x2c6c64u;
    // NOP
label_2c6c68:
    // 0x2c6c68: 0x0  nop
    ctx->pc = 0x2c6c68u;
    // NOP
label_2c6c6c:
    // 0x2c6c6c: 0x0  nop
    ctx->pc = 0x2c6c6cu;
    // NOP
label_2c6c70:
    // 0x2c6c70: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c6c70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6c74:
    // 0x2c6c74: 0x6e61694a  ldr         $at, 0x694A($s3)
    ctx->pc = 0x2c6c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6c78:
    // 0x2c6c78: 0x46207327  .word       0x46207327                   # INVALID     $s1, $zero, 0x7327 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6c78u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x27 at 0x2C6C78 raw=0x46207327");
 /* MITIGATED */
label_2c6c7c:
    // 0x2c6c7c: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2c6c7cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2c6c80:
    // 0x2c6c80: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c6c80u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6c84:
    // 0x2c6c84: 0x0  nop
    ctx->pc = 0x2c6c84u;
    // NOP
label_2c6c88:
    // 0x2c6c88: 0x0  nop
    ctx->pc = 0x2c6c88u;
    // NOP
label_2c6c8c:
    // 0x2c6c8c: 0x0  nop
    ctx->pc = 0x2c6c8cu;
    // NOP
label_2c6c90:
    // 0x2c6c90: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c6c90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6c94:
    // 0x2c6c94: 0x73276543  .word       0x73276543                   # INVALID     $t9, $a3, 0x6543 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6c94u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 25) * (uint64_t)GPR_U32(ctx, 7); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c6c98:
    // 0x2c6c98: 0x726f4620  .word       0x726F4620                   # madd1       $t0, $s3, $t7 # 00000600 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6c98u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2c6c9c:
    // 0x2c6c9c: 0x736563  .word       0x00736563                   # subu        $t4, $v1, $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6c9cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2c6ca0:
    // 0x2c6ca0: 0x206e7553  addi        $t6, $v1, 0x7553
    ctx->pc = 0x2c6ca0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30035, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c6ca4:
    // 0x2c6ca4: 0x6e617551  ldr         $at, 0x7551($s3)
    ctx->pc = 0x2c6ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30033); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6ca8:
    // 0x2c6ca8: 0x46207327  .word       0x46207327                   # INVALID     $s1, $zero, 0x7327 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6ca8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x27 at 0x2C6CA8 raw=0x46207327");
 /* MITIGATED */
label_2c6cac:
    // 0x2c6cac: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2c6cacu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2c6cb0:
    // 0x2c6cb0: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c6cb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6cb4:
    // 0x2c6cb4: 0x0  nop
    ctx->pc = 0x2c6cb4u;
    // NOP
label_2c6cb8:
    // 0x2c6cb8: 0x0  nop
    ctx->pc = 0x2c6cb8u;
    // NOP
label_2c6cbc:
    // 0x2c6cbc: 0x0  nop
    ctx->pc = 0x2c6cbcu;
    // NOP
label_2c6cc0:
    // 0x2c6cc0: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6cc0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6cc4:
    // 0x2c6cc4: 0x27696542  addiu       $t1, $k1, 0x6542
    ctx->pc = 0x2c6cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 27), 25922));
label_2c6cc8:
    // 0x2c6cc8: 0x6f462073  ldr         $a2, 0x2073($k0)
    ctx->pc = 0x2c6cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c6ccc:
    // 0x2c6ccc: 0x73656372  .word       0x73656372                   # INVALID     $k1, $a1, 0x6372 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6cccu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2C6CCC raw=0x73656372");
 /* MITIGATED */
label_2c6cd0:
    // 0x2c6cd0: 0x0  nop
    ctx->pc = 0x2c6cd0u;
    // NOP
label_2c6cd4:
    // 0x2c6cd4: 0x0  nop
    ctx->pc = 0x2c6cd4u;
    // NOP
label_2c6cd8:
    // 0x2c6cd8: 0x0  nop
    ctx->pc = 0x2c6cd8u;
    // NOP
label_2c6cdc:
    // 0x2c6cdc: 0x0  nop
    ctx->pc = 0x2c6cdcu;
    // NOP
label_2c6ce0:
    // 0x2c6ce0: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2c6ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6ce4:
    // 0x2c6ce4: 0x27755920  addiu       $s5, $k1, 0x5920
    ctx->pc = 0x2c6ce4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 27), 22816));
label_2c6ce8:
    // 0x2c6ce8: 0x6f462073  ldr         $a2, 0x2073($k0)
    ctx->pc = 0x2c6ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c6cec:
    // 0x2c6cec: 0x73656372  .word       0x73656372                   # INVALID     $k1, $a1, 0x6372 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6cecu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2C6CEC raw=0x73656372");
 /* MITIGATED */
label_2c6cf0:
    // 0x2c6cf0: 0x0  nop
    ctx->pc = 0x2c6cf0u;
    // NOP
label_2c6cf4:
    // 0x2c6cf4: 0x0  nop
    ctx->pc = 0x2c6cf4u;
    // NOP
label_2c6cf8:
    // 0x2c6cf8: 0x0  nop
    ctx->pc = 0x2c6cf8u;
    // NOP
label_2c6cfc:
    // 0x2c6cfc: 0x0  nop
    ctx->pc = 0x2c6cfcu;
    // NOP
label_2c6d00:
    // 0x2c6d00: 0x676e6f44  daddiu      $t6, $k1, 0x6F44
    ctx->pc = 0x2c6d00u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28484);
label_2c6d04:
    // 0x2c6d04: 0x75685a20  .word       0x75685A20                   # INVALID     $t3, $t0, 0x5A20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6d04u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6D04 raw=0x75685A20");
 /* MITIGATED */
label_2c6d08:
    // 0x2c6d08: 0x2073276f  addi        $s3, $v1, 0x276F
    ctx->pc = 0x2c6d08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10095, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c6d0c:
    // 0x2c6d0c: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6d0cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6d10:
    // 0x2c6d10: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6d10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6d14:
    // 0x2c6d14: 0x0  nop
    ctx->pc = 0x2c6d14u;
    // NOP
label_2c6d18:
    // 0x2c6d18: 0x0  nop
    ctx->pc = 0x2c6d18u;
    // NOP
label_2c6d1c:
    // 0x2c6d1c: 0x0  nop
    ctx->pc = 0x2c6d1cu;
    // NOP
label_2c6d20:
    // 0x2c6d20: 0x6e617559  ldr         $at, 0x7559($s3)
    ctx->pc = 0x2c6d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30041); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6d24:
    // 0x2c6d24: 0x61685320  daddi       $t0, $t3, 0x5320
    ctx->pc = 0x2c6d24u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c6d28:
    // 0x2c6d28: 0x2073276f  addi        $s3, $v1, 0x276F
    ctx->pc = 0x2c6d28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10095, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c6d2c:
    // 0x2c6d2c: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6d2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6d30:
    // 0x2c6d30: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6d30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6d34:
    // 0x2c6d34: 0x0  nop
    ctx->pc = 0x2c6d34u;
    // NOP
label_2c6d38:
    // 0x2c6d38: 0x0  nop
    ctx->pc = 0x2c6d38u;
    // NOP
label_2c6d3c:
    // 0x2c6d3c: 0x0  nop
    ctx->pc = 0x2c6d3cu;
    // NOP
label_2c6d40:
    // 0x2c6d40: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6d44:
    // 0x2c6d44: 0x69582067  ldl         $t8, 0x2067($t2)
    ctx->pc = 0x2c6d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2c6d48:
    // 0x2c6d48: 0x20732775  addi        $s3, $v1, 0x2775
    ctx->pc = 0x2c6d48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10101, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c6d4c:
    // 0x2c6d4c: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6d4cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6d50:
    // 0x2c6d50: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6d50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6d54:
    // 0x2c6d54: 0x0  nop
    ctx->pc = 0x2c6d54u;
    // NOP
label_2c6d58:
    // 0x2c6d58: 0x0  nop
    ctx->pc = 0x2c6d58u;
    // NOP
label_2c6d5c:
    // 0x2c6d5c: 0x0  nop
    ctx->pc = 0x2c6d5cu;
    // NOP
label_2c6d60:
    // 0x2c6d60: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6d60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6d64:
    // 0x2c6d64: 0x6f616942  ldr         $at, 0x6942($k1)
    ctx->pc = 0x2c6d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6d68:
    // 0x2c6d68: 0x46207327  .word       0x46207327                   # INVALID     $s1, $zero, 0x7327 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6d68u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x27 at 0x2C6D68 raw=0x46207327");
 /* MITIGATED */
label_2c6d6c:
    // 0x2c6d6c: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2c6d6cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2c6d70:
    // 0x2c6d70: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c6d70u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c6d74:
    // 0x2c6d74: 0x0  nop
    ctx->pc = 0x2c6d74u;
    // NOP
label_2c6d78:
    // 0x2c6d78: 0x0  nop
    ctx->pc = 0x2c6d78u;
    // NOP
label_2c6d7c:
    // 0x2c6d7c: 0x0  nop
    ctx->pc = 0x2c6d7cu;
    // NOP
label_2c6d80:
    // 0x2c6d80: 0x2075694c  addi        $s5, $v1, 0x694C
    ctx->pc = 0x2c6d80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c6d84:
    // 0x2c6d84: 0x6e61685a  ldr         $at, 0x685A($s3)
    ctx->pc = 0x2c6d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6d88:
    // 0x2c6d88: 0x20732767  addi        $s3, $v1, 0x2767
    ctx->pc = 0x2c6d88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10087, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c6d8c:
    // 0x2c6d8c: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6d8cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6d90:
    // 0x2c6d90: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6d90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6d94:
    // 0x2c6d94: 0x0  nop
    ctx->pc = 0x2c6d94u;
    // NOP
label_2c6d98:
    // 0x2c6d98: 0x75676f52  .word       0x75676F52                   # INVALID     $t3, $a3, 0x6F52 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6d98u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6D98 raw=0x75676F52");
 /* MITIGATED */
label_2c6d9c:
    // 0x2c6d9c: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6d9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6da0:
    // 0x2c6da0: 0x646e6142  daddiu      $t6, $v1, 0x6142
    ctx->pc = 0x2c6da0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24898);
label_2c6da4:
    // 0x2c6da4: 0x737469  .word       0x00737469                   # mtsa        $v1 # 00137440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c6da4u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_2c6da8:
    // 0x2c6da8: 0x61726950  daddi       $s2, $t3, 0x6950
    ctx->pc = 0x2c6da8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26960; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6dac:
    // 0x2c6dac: 0x736574  teq         $v1, $s3, 405
    ctx->pc = 0x2c6dacu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c6db0:
    // 0x2c6db0: 0x6f616944  ldr         $at, 0x6944($k1)
    ctx->pc = 0x2c6db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6db4:
    // 0x2c6db4: 0x61684320  daddi       $t0, $t3, 0x4320
    ctx->pc = 0x2c6db4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17184; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c6db8:
    // 0x2c6db8: 0x2073276e  addi        $s3, $v1, 0x276E
    ctx->pc = 0x2c6db8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10094, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c6dbc:
    // 0x2c6dbc: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6dbcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6dc0:
    // 0x2c6dc0: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6dc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6dc4:
    // 0x2c6dc4: 0x0  nop
    ctx->pc = 0x2c6dc4u;
    // NOP
label_2c6dc8:
    // 0x2c6dc8: 0x4220754c  .word       0x4220754C                   # INVALID     $s1, $zero, 0x754C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c6dc8u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C6DC8 raw=0x4220754C");
 /* MITIGATED */
label_2c6dcc:
    // 0x2c6dcc: 0x20732775  addi        $s3, $v1, 0x2775
    ctx->pc = 0x2c6dccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10101, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c6dd0:
    // 0x2c6dd0: 0x63726f46  daddi       $s2, $k1, 0x6F46
    ctx->pc = 0x2c6dd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28486; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6dd4:
    // 0x2c6dd4: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6dd4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c6dd8:
    // 0x2c6dd8: 0x6e617247  ldr         $at, 0x7247($s3)
    ctx->pc = 0x2c6dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6ddc:
    // 0x2c6ddc: 0x65472064  daddiu      $a3, $t2, 0x2064
    ctx->pc = 0x2c6ddcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8292);
label_2c6de0:
    // 0x2c6de0: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6de0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6de4:
    // 0x2c6de4: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6de4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6de8:
    // 0x2c6de8: 0x64726f4c  daddiu      $s2, $v1, 0x6F4C
    ctx->pc = 0x2c6de8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28492);
label_2c6dec:
    // 0x2c6dec: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c6decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6df0:
    // 0x2c6df0: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c6df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6df4:
    // 0x2c6df4: 0x0  nop
    ctx->pc = 0x2c6df4u;
    // NOP
label_2c6df8:
    // 0x2c6df8: 0x67696e4b  daddiu      $t1, $k1, 0x6E4B
    ctx->pc = 0x2c6df8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28235);
label_2c6dfc:
    // 0x2c6dfc: 0x47207468  .word       0x47207468                   # INVALID     $t9, $zero, 0x7468 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c6dfcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x28 at 0x2C6DFC raw=0x47207468");
 /* MITIGATED */
label_2c6e00:
    // 0x2c6e00: 0x72656e65  .word       0x72656E65                   # INVALID     $s3, $a1, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6e00u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C6E00 raw=0x72656E65");
 /* MITIGATED */
label_2c6e04:
    // 0x2c6e04: 0x6c61  .word       0x00006C61                   # addu        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6e04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c6e08:
    // 0x2c6e08: 0x0  nop
    ctx->pc = 0x2c6e08u;
    // NOP
label_2c6e0c:
    // 0x2c6e0c: 0x0  nop
    ctx->pc = 0x2c6e0cu;
    // NOP
label_2c6e10:
    // 0x2c6e10: 0x72616843  .word       0x72616843                   # INVALID     $s3, $at, 0x6843 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c6e10u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 1); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c6e14:
    // 0x2c6e14: 0x20746f69  addi        $s4, $v1, 0x6F69
    ctx->pc = 0x2c6e14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c6e18:
    // 0x2c6e18: 0x656e6547  daddiu      $t6, $t3, 0x6547
    ctx->pc = 0x2c6e18u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25927);
label_2c6e1c:
    // 0x2c6e1c: 0x6c6172  tlt         $v1, $t4, 389
    ctx->pc = 0x2c6e1cu;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_2c6e20:
    // 0x2c6e20: 0x69726550  ldl         $s2, 0x6550($t3)
    ctx->pc = 0x2c6e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c6e24:
    // 0x2c6e24: 0x6574656d  daddiu      $s4, $t3, 0x656D
    ctx->pc = 0x2c6e24u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25965);
label_2c6e28:
    // 0x2c6e28: 0x65472072  daddiu      $a3, $t2, 0x2072
    ctx->pc = 0x2c6e28u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8306);
label_2c6e2c:
    // 0x2c6e2c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6e2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6e30:
    // 0x2c6e30: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6e30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6e34:
    // 0x2c6e34: 0x0  nop
    ctx->pc = 0x2c6e34u;
    // NOP
label_2c6e38:
    // 0x2c6e38: 0x0  nop
    ctx->pc = 0x2c6e38u;
    // NOP
label_2c6e3c:
    // 0x2c6e3c: 0x0  nop
    ctx->pc = 0x2c6e3cu;
    // NOP
label_2c6e40:
    // 0x2c6e40: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c6e40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c6e44:
    // 0x2c6e44: 0x74736145  .word       0x74736145                   # INVALID     $v1, $s3, 0x6145 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6e44u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6E44 raw=0x74736145");
 /* MITIGATED */
label_2c6e48:
    // 0x2c6e48: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c6e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6e4c:
    // 0x2c6e4c: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c6e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6e50:
    // 0x2c6e50: 0x0  nop
    ctx->pc = 0x2c6e50u;
    // NOP
label_2c6e54:
    // 0x2c6e54: 0x0  nop
    ctx->pc = 0x2c6e54u;
    // NOP
label_2c6e58:
    // 0x2c6e58: 0x0  nop
    ctx->pc = 0x2c6e58u;
    // NOP
label_2c6e5c:
    // 0x2c6e5c: 0x0  nop
    ctx->pc = 0x2c6e5cu;
    // NOP
label_2c6e60:
    // 0x2c6e60: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c6e60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c6e64:
    // 0x2c6e64: 0x74756f53  .word       0x74756F53                   # INVALID     $v1, $s5, 0x6F53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6e64u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6E64 raw=0x74756F53");
 /* MITIGATED */
label_2c6e68:
    // 0x2c6e68: 0x65472068  daddiu      $a3, $t2, 0x2068
    ctx->pc = 0x2c6e68u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c6e6c:
    // 0x2c6e6c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6e6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6e70:
    // 0x2c6e70: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6e70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6e74:
    // 0x2c6e74: 0x0  nop
    ctx->pc = 0x2c6e74u;
    // NOP
label_2c6e78:
    // 0x2c6e78: 0x0  nop
    ctx->pc = 0x2c6e78u;
    // NOP
label_2c6e7c:
    // 0x2c6e7c: 0x0  nop
    ctx->pc = 0x2c6e7cu;
    // NOP
label_2c6e80:
    // 0x2c6e80: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c6e80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c6e84:
    // 0x2c6e84: 0x74736557  .word       0x74736557                   # INVALID     $v1, $s3, 0x6557 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6e84u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6E84 raw=0x74736557");
 /* MITIGATED */
label_2c6e88:
    // 0x2c6e88: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c6e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6e8c:
    // 0x2c6e8c: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c6e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6e90:
    // 0x2c6e90: 0x0  nop
    ctx->pc = 0x2c6e90u;
    // NOP
label_2c6e94:
    // 0x2c6e94: 0x0  nop
    ctx->pc = 0x2c6e94u;
    // NOP
label_2c6e98:
    // 0x2c6e98: 0x0  nop
    ctx->pc = 0x2c6e98u;
    // NOP
label_2c6e9c:
    // 0x2c6e9c: 0x0  nop
    ctx->pc = 0x2c6e9cu;
    // NOP
label_2c6ea0:
    // 0x2c6ea0: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c6ea0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c6ea4:
    // 0x2c6ea4: 0x74726f4e  .word       0x74726F4E                   # INVALID     $v1, $s2, 0x6F4E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6ea4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6EA4 raw=0x74726F4E");
 /* MITIGATED */
label_2c6ea8:
    // 0x2c6ea8: 0x65472068  daddiu      $a3, $t2, 0x2068
    ctx->pc = 0x2c6ea8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c6eac:
    // 0x2c6eac: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6eacu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6eb0:
    // 0x2c6eb0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6eb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6eb4:
    // 0x2c6eb4: 0x0  nop
    ctx->pc = 0x2c6eb4u;
    // NOP
label_2c6eb8:
    // 0x2c6eb8: 0x0  nop
    ctx->pc = 0x2c6eb8u;
    // NOP
label_2c6ebc:
    // 0x2c6ebc: 0x0  nop
    ctx->pc = 0x2c6ebcu;
    // NOP
label_2c6ec0:
    // 0x2c6ec0: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c6ec0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c6ec4:
    // 0x2c6ec4: 0x74736145  .word       0x74736145                   # INVALID     $v1, $s3, 0x6145 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6ec4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6EC4 raw=0x74736145");
 /* MITIGATED */
label_2c6ec8:
    // 0x2c6ec8: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c6ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6ecc:
    // 0x2c6ecc: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c6eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6ed0:
    // 0x2c6ed0: 0x0  nop
    ctx->pc = 0x2c6ed0u;
    // NOP
label_2c6ed4:
    // 0x2c6ed4: 0x0  nop
    ctx->pc = 0x2c6ed4u;
    // NOP
label_2c6ed8:
    // 0x2c6ed8: 0x0  nop
    ctx->pc = 0x2c6ed8u;
    // NOP
label_2c6edc:
    // 0x2c6edc: 0x0  nop
    ctx->pc = 0x2c6edcu;
    // NOP
label_2c6ee0:
    // 0x2c6ee0: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c6ee0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c6ee4:
    // 0x2c6ee4: 0x74756f53  .word       0x74756F53                   # INVALID     $v1, $s5, 0x6F53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6ee4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6EE4 raw=0x74756F53");
 /* MITIGATED */
label_2c6ee8:
    // 0x2c6ee8: 0x65472068  daddiu      $a3, $t2, 0x2068
    ctx->pc = 0x2c6ee8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c6eec:
    // 0x2c6eec: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6eecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6ef0:
    // 0x2c6ef0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6ef0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6ef4:
    // 0x2c6ef4: 0x0  nop
    ctx->pc = 0x2c6ef4u;
    // NOP
label_2c6ef8:
    // 0x2c6ef8: 0x0  nop
    ctx->pc = 0x2c6ef8u;
    // NOP
label_2c6efc:
    // 0x2c6efc: 0x0  nop
    ctx->pc = 0x2c6efcu;
    // NOP
label_2c6f00:
    // 0x2c6f00: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c6f00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c6f04:
    // 0x2c6f04: 0x74736557  .word       0x74736557                   # INVALID     $v1, $s3, 0x6557 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6f04u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6F04 raw=0x74736557");
 /* MITIGATED */
label_2c6f08:
    // 0x2c6f08: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c6f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6f0c:
    // 0x2c6f0c: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c6f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6f10:
    // 0x2c6f10: 0x0  nop
    ctx->pc = 0x2c6f10u;
    // NOP
label_2c6f14:
    // 0x2c6f14: 0x0  nop
    ctx->pc = 0x2c6f14u;
    // NOP
label_2c6f18:
    // 0x2c6f18: 0x0  nop
    ctx->pc = 0x2c6f18u;
    // NOP
label_2c6f1c:
    // 0x2c6f1c: 0x0  nop
    ctx->pc = 0x2c6f1cu;
    // NOP
label_2c6f20:
    // 0x2c6f20: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c6f20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c6f24:
    // 0x2c6f24: 0x74726f4e  .word       0x74726F4E                   # INVALID     $v1, $s2, 0x6F4E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6f24u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6F24 raw=0x74726F4E");
 /* MITIGATED */
label_2c6f28:
    // 0x2c6f28: 0x65472068  daddiu      $a3, $t2, 0x2068
    ctx->pc = 0x2c6f28u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c6f2c:
    // 0x2c6f2c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6f2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6f30:
    // 0x2c6f30: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6f30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6f34:
    // 0x2c6f34: 0x0  nop
    ctx->pc = 0x2c6f34u;
    // NOP
label_2c6f38:
    // 0x2c6f38: 0x0  nop
    ctx->pc = 0x2c6f38u;
    // NOP
label_2c6f3c:
    // 0x2c6f3c: 0x0  nop
    ctx->pc = 0x2c6f3cu;
    // NOP
label_2c6f40:
    // 0x2c6f40: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c6f40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c6f44:
    // 0x2c6f44: 0x74736145  .word       0x74736145                   # INVALID     $v1, $s3, 0x6145 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6f44u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6F44 raw=0x74736145");
 /* MITIGATED */
label_2c6f48:
    // 0x2c6f48: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c6f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6f4c:
    // 0x2c6f4c: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c6f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6f50:
    // 0x2c6f50: 0x0  nop
    ctx->pc = 0x2c6f50u;
    // NOP
label_2c6f54:
    // 0x2c6f54: 0x0  nop
    ctx->pc = 0x2c6f54u;
    // NOP
label_2c6f58:
    // 0x2c6f58: 0x0  nop
    ctx->pc = 0x2c6f58u;
    // NOP
label_2c6f5c:
    // 0x2c6f5c: 0x0  nop
    ctx->pc = 0x2c6f5cu;
    // NOP
label_2c6f60:
    // 0x2c6f60: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c6f60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c6f64:
    // 0x2c6f64: 0x74756f53  .word       0x74756F53                   # INVALID     $v1, $s5, 0x6F53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6f64u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6F64 raw=0x74756F53");
 /* MITIGATED */
label_2c6f68:
    // 0x2c6f68: 0x65472068  daddiu      $a3, $t2, 0x2068
    ctx->pc = 0x2c6f68u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c6f6c:
    // 0x2c6f6c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6f6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6f70:
    // 0x2c6f70: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6f70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6f74:
    // 0x2c6f74: 0x0  nop
    ctx->pc = 0x2c6f74u;
    // NOP
label_2c6f78:
    // 0x2c6f78: 0x0  nop
    ctx->pc = 0x2c6f78u;
    // NOP
label_2c6f7c:
    // 0x2c6f7c: 0x0  nop
    ctx->pc = 0x2c6f7cu;
    // NOP
label_2c6f80:
    // 0x2c6f80: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c6f80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c6f84:
    // 0x2c6f84: 0x74736557  .word       0x74736557                   # INVALID     $v1, $s3, 0x6557 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6f84u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6F84 raw=0x74736557");
 /* MITIGATED */
label_2c6f88:
    // 0x2c6f88: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c6f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6f8c:
    // 0x2c6f8c: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c6f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6f90:
    // 0x2c6f90: 0x0  nop
    ctx->pc = 0x2c6f90u;
    // NOP
label_2c6f94:
    // 0x2c6f94: 0x0  nop
    ctx->pc = 0x2c6f94u;
    // NOP
label_2c6f98:
    // 0x2c6f98: 0x0  nop
    ctx->pc = 0x2c6f98u;
    // NOP
label_2c6f9c:
    // 0x2c6f9c: 0x0  nop
    ctx->pc = 0x2c6f9cu;
    // NOP
label_2c6fa0:
    // 0x2c6fa0: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c6fa0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c6fa4:
    // 0x2c6fa4: 0x74726f4e  .word       0x74726F4E                   # INVALID     $v1, $s2, 0x6F4E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6fa4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6FA4 raw=0x74726F4E");
 /* MITIGATED */
label_2c6fa8:
    // 0x2c6fa8: 0x65472068  daddiu      $a3, $t2, 0x2068
    ctx->pc = 0x2c6fa8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c6fac:
    // 0x2c6fac: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6facu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6fb0:
    // 0x2c6fb0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6fb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6fb4:
    // 0x2c6fb4: 0x0  nop
    ctx->pc = 0x2c6fb4u;
    // NOP
label_2c6fb8:
    // 0x2c6fb8: 0x0  nop
    ctx->pc = 0x2c6fb8u;
    // NOP
label_2c6fbc:
    // 0x2c6fbc: 0x0  nop
    ctx->pc = 0x2c6fbcu;
    // NOP
label_2c6fc0:
    // 0x2c6fc0: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c6fc0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c6fc4:
    // 0x2c6fc4: 0x74736145  .word       0x74736145                   # INVALID     $v1, $s3, 0x6145 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6fc4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6FC4 raw=0x74736145");
 /* MITIGATED */
label_2c6fc8:
    // 0x2c6fc8: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c6fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c6fcc:
    // 0x2c6fcc: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c6fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c6fd0:
    // 0x2c6fd0: 0x0  nop
    ctx->pc = 0x2c6fd0u;
    // NOP
label_2c6fd4:
    // 0x2c6fd4: 0x0  nop
    ctx->pc = 0x2c6fd4u;
    // NOP
label_2c6fd8:
    // 0x2c6fd8: 0x0  nop
    ctx->pc = 0x2c6fd8u;
    // NOP
label_2c6fdc:
    // 0x2c6fdc: 0x0  nop
    ctx->pc = 0x2c6fdcu;
    // NOP
label_2c6fe0:
    // 0x2c6fe0: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c6fe0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c6fe4:
    // 0x2c6fe4: 0x74756f53  .word       0x74756F53                   # INVALID     $v1, $s5, 0x6F53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c6fe4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C6FE4 raw=0x74756F53");
 /* MITIGATED */
label_2c6fe8:
    // 0x2c6fe8: 0x65472068  daddiu      $a3, $t2, 0x2068
    ctx->pc = 0x2c6fe8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c6fec:
    // 0x2c6fec: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c6fecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c6ff0:
    // 0x2c6ff0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c6ff0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c6ff4:
    // 0x2c6ff4: 0x0  nop
    ctx->pc = 0x2c6ff4u;
    // NOP
label_2c6ff8:
    // 0x2c6ff8: 0x0  nop
    ctx->pc = 0x2c6ff8u;
    // NOP
label_2c6ffc:
    // 0x2c6ffc: 0x0  nop
    ctx->pc = 0x2c6ffcu;
    // NOP
label_2c7000:
    // 0x2c7000: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c7000u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c7004:
    // 0x2c7004: 0x74736557  .word       0x74736557                   # INVALID     $v1, $s3, 0x6557 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7004u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7004 raw=0x74736557");
 /* MITIGATED */
label_2c7008:
    // 0x2c7008: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c7008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c700c:
    // 0x2c700c: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c700cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7010:
    // 0x2c7010: 0x0  nop
    ctx->pc = 0x2c7010u;
    // NOP
label_2c7014:
    // 0x2c7014: 0x0  nop
    ctx->pc = 0x2c7014u;
    // NOP
label_2c7018:
    // 0x2c7018: 0x0  nop
    ctx->pc = 0x2c7018u;
    // NOP
label_2c701c:
    // 0x2c701c: 0x0  nop
    ctx->pc = 0x2c701cu;
    // NOP
label_2c7020:
    // 0x2c7020: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c7020u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c7024:
    // 0x2c7024: 0x74726f4e  .word       0x74726F4E                   # INVALID     $v1, $s2, 0x6F4E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7024u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7024 raw=0x74726F4E");
 /* MITIGATED */
label_2c7028:
    // 0x2c7028: 0x65472068  daddiu      $a3, $t2, 0x2068
    ctx->pc = 0x2c7028u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8296);
label_2c702c:
    // 0x2c702c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c702cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7030:
    // 0x2c7030: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7030u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7034:
    // 0x2c7034: 0x0  nop
    ctx->pc = 0x2c7034u;
    // NOP
label_2c7038:
    // 0x2c7038: 0x7466654c  .word       0x7466654C                   # INVALID     $v1, $a2, 0x654C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7038u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7038 raw=0x7466654C");
 /* MITIGATED */
label_2c703c:
    // 0x2c703c: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c703cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c7040:
    // 0x2c7040: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c7040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7044:
    // 0x2c7044: 0x0  nop
    ctx->pc = 0x2c7044u;
    // NOP
label_2c7048:
    // 0x2c7048: 0x68676952  ldl         $a3, 0x6952($v1)
    ctx->pc = 0x2c7048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26962); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c704c:
    // 0x2c704c: 0x65472074  daddiu      $a3, $t2, 0x2074
    ctx->pc = 0x2c704cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8308);
label_2c7050:
    // 0x2c7050: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c7050u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7054:
    // 0x2c7054: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7054u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7058:
    // 0x2c7058: 0x6e6f7246  ldr         $t7, 0x7246($s3)
    ctx->pc = 0x2c7058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c705c:
    // 0x2c705c: 0x65472074  daddiu      $a3, $t2, 0x2074
    ctx->pc = 0x2c705cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8308);
label_2c7060:
    // 0x2c7060: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c7060u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7064:
    // 0x2c7064: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7064u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7068:
    // 0x2c7068: 0x72616552  .word       0x72616552                   # mflo1       $t4 # 02610540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7068u;
    SET_GPR_U64(ctx, 12, ctx->lo1);
label_2c706c:
    // 0x2c706c: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c706cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c7070:
    // 0x2c7070: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c7070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7074:
    // 0x2c7074: 0x0  nop
    ctx->pc = 0x2c7074u;
    // NOP
label_2c7078:
    // 0x2c7078: 0x0  nop
    ctx->pc = 0x2c7078u;
    // NOP
label_2c707c:
    // 0x2c707c: 0x0  nop
    ctx->pc = 0x2c707cu;
    // NOP
label_2c7080:
    // 0x2c7080: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c7080u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c7084:
    // 0x2c7084: 0x74696c45  .word       0x74696C45                   # INVALID     $v1, $t1, 0x6C45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7084u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7084 raw=0x74696C45");
 /* MITIGATED */
label_2c7088:
    // 0x2c7088: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c7088u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c708c:
    // 0x2c708c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c708cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7090:
    // 0x2c7090: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7090u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7094:
    // 0x2c7094: 0x0  nop
    ctx->pc = 0x2c7094u;
    // NOP
label_2c7098:
    // 0x2c7098: 0x0  nop
    ctx->pc = 0x2c7098u;
    // NOP
label_2c709c:
    // 0x2c709c: 0x0  nop
    ctx->pc = 0x2c709cu;
    // NOP
label_2c70a0:
    // 0x2c70a0: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c70a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c70a4:
    // 0x2c70a4: 0x74696c45  .word       0x74696C45                   # INVALID     $v1, $t1, 0x6C45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c70a4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C70A4 raw=0x74696C45");
 /* MITIGATED */
label_2c70a8:
    // 0x2c70a8: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c70a8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c70ac:
    // 0x2c70ac: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c70acu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c70b0:
    // 0x2c70b0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c70b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c70b4:
    // 0x2c70b4: 0x0  nop
    ctx->pc = 0x2c70b4u;
    // NOP
label_2c70b8:
    // 0x2c70b8: 0x0  nop
    ctx->pc = 0x2c70b8u;
    // NOP
label_2c70bc:
    // 0x2c70bc: 0x0  nop
    ctx->pc = 0x2c70bcu;
    // NOP
label_2c70c0:
    // 0x2c70c0: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c70c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c70c4:
    // 0x2c70c4: 0x74696c45  .word       0x74696C45                   # INVALID     $v1, $t1, 0x6C45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c70c4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C70C4 raw=0x74696C45");
 /* MITIGATED */
label_2c70c8:
    // 0x2c70c8: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c70c8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c70cc:
    // 0x2c70cc: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c70ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c70d0:
    // 0x2c70d0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c70d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c70d4:
    // 0x2c70d4: 0x0  nop
    ctx->pc = 0x2c70d4u;
    // NOP
label_2c70d8:
    // 0x2c70d8: 0x0  nop
    ctx->pc = 0x2c70d8u;
    // NOP
label_2c70dc:
    // 0x2c70dc: 0x0  nop
    ctx->pc = 0x2c70dcu;
    // NOP
label_2c70e0:
    // 0x2c70e0: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c70e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c70e4:
    // 0x2c70e4: 0x74696c45  .word       0x74696C45                   # INVALID     $v1, $t1, 0x6C45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c70e4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C70E4 raw=0x74696C45");
 /* MITIGATED */
label_2c70e8:
    // 0x2c70e8: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c70e8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c70ec:
    // 0x2c70ec: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c70ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c70f0:
    // 0x2c70f0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c70f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c70f4:
    // 0x2c70f4: 0x0  nop
    ctx->pc = 0x2c70f4u;
    // NOP
label_2c70f8:
    // 0x2c70f8: 0x0  nop
    ctx->pc = 0x2c70f8u;
    // NOP
label_2c70fc:
    // 0x2c70fc: 0x0  nop
    ctx->pc = 0x2c70fcu;
    // NOP
label_2c7100:
    // 0x2c7100: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c7100u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c7104:
    // 0x2c7104: 0x636e614c  daddi       $t6, $k1, 0x614C
    ctx->pc = 0x2c7104u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24908; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c7108:
    // 0x2c7108: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c7108u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c710c:
    // 0x2c710c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c710cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7110:
    // 0x2c7110: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7110u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7114:
    // 0x2c7114: 0x0  nop
    ctx->pc = 0x2c7114u;
    // NOP
label_2c7118:
    // 0x2c7118: 0x0  nop
    ctx->pc = 0x2c7118u;
    // NOP
label_2c711c:
    // 0x2c711c: 0x0  nop
    ctx->pc = 0x2c711cu;
    // NOP
label_2c7120:
    // 0x2c7120: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c7120u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7124:
    // 0x2c7124: 0x636e614c  daddi       $t6, $k1, 0x614C
    ctx->pc = 0x2c7124u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24908; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c7128:
    // 0x2c7128: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c7128u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c712c:
    // 0x2c712c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c712cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7130:
    // 0x2c7130: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7130u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7134:
    // 0x2c7134: 0x0  nop
    ctx->pc = 0x2c7134u;
    // NOP
label_2c7138:
    // 0x2c7138: 0x0  nop
    ctx->pc = 0x2c7138u;
    // NOP
label_2c713c:
    // 0x2c713c: 0x0  nop
    ctx->pc = 0x2c713cu;
    // NOP
label_2c7140:
    // 0x2c7140: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c7140u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7144:
    // 0x2c7144: 0x636e614c  daddi       $t6, $k1, 0x614C
    ctx->pc = 0x2c7144u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24908; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c7148:
    // 0x2c7148: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c7148u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c714c:
    // 0x2c714c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c714cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7150:
    // 0x2c7150: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7150u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7154:
    // 0x2c7154: 0x0  nop
    ctx->pc = 0x2c7154u;
    // NOP
label_2c7158:
    // 0x2c7158: 0x0  nop
    ctx->pc = 0x2c7158u;
    // NOP
label_2c715c:
    // 0x2c715c: 0x0  nop
    ctx->pc = 0x2c715cu;
    // NOP
label_2c7160:
    // 0x2c7160: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c7160u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c7164:
    // 0x2c7164: 0x636e614c  daddi       $t6, $k1, 0x614C
    ctx->pc = 0x2c7164u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24908; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c7168:
    // 0x2c7168: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c7168u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c716c:
    // 0x2c716c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c716cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7170:
    // 0x2c7170: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7170u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7174:
    // 0x2c7174: 0x0  nop
    ctx->pc = 0x2c7174u;
    // NOP
label_2c7178:
    // 0x2c7178: 0x0  nop
    ctx->pc = 0x2c7178u;
    // NOP
label_2c717c:
    // 0x2c717c: 0x0  nop
    ctx->pc = 0x2c717cu;
    // NOP
label_2c7180:
    // 0x2c7180: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c7180u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c7184:
    // 0x2c7184: 0x73726f48  .word       0x73726F48                   # INVALID     $k1, $s2, 0x6F48 # 00000000 <InstrIdType: R5900_MMI_0>
    ctx->pc = 0x2c7184u;
//     throw std::runtime_error("Unhandled MMI0 instruction: function 0x1D at 0x2C7184 raw=0x73726F48");
 /* MITIGATED */
label_2c7188:
    // 0x2c7188: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c7188u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c718c:
    // 0x2c718c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c718cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7190:
    // 0x2c7190: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7190u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7194:
    // 0x2c7194: 0x0  nop
    ctx->pc = 0x2c7194u;
    // NOP
label_2c7198:
    // 0x2c7198: 0x0  nop
    ctx->pc = 0x2c7198u;
    // NOP
label_2c719c:
    // 0x2c719c: 0x0  nop
    ctx->pc = 0x2c719cu;
    // NOP
label_2c71a0:
    // 0x2c71a0: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c71a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c71a4:
    // 0x2c71a4: 0x73726f48  .word       0x73726F48                   # INVALID     $k1, $s2, 0x6F48 # 00000000 <InstrIdType: R5900_MMI_0>
    ctx->pc = 0x2c71a4u;
//     throw std::runtime_error("Unhandled MMI0 instruction: function 0x1D at 0x2C71A4 raw=0x73726F48");
 /* MITIGATED */
label_2c71a8:
    // 0x2c71a8: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c71a8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c71ac:
    // 0x2c71ac: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c71acu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c71b0:
    // 0x2c71b0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c71b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c71b4:
    // 0x2c71b4: 0x0  nop
    ctx->pc = 0x2c71b4u;
    // NOP
label_2c71b8:
    // 0x2c71b8: 0x0  nop
    ctx->pc = 0x2c71b8u;
    // NOP
label_2c71bc:
    // 0x2c71bc: 0x0  nop
    ctx->pc = 0x2c71bcu;
    // NOP
label_2c71c0:
    // 0x2c71c0: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c71c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c71c4:
    // 0x2c71c4: 0x73726f48  .word       0x73726F48                   # INVALID     $k1, $s2, 0x6F48 # 00000000 <InstrIdType: R5900_MMI_0>
    ctx->pc = 0x2c71c4u;
//     throw std::runtime_error("Unhandled MMI0 instruction: function 0x1D at 0x2C71C4 raw=0x73726F48");
 /* MITIGATED */
label_2c71c8:
    // 0x2c71c8: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c71c8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c71cc:
    // 0x2c71cc: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c71ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c71d0:
    // 0x2c71d0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c71d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c71d4:
    // 0x2c71d4: 0x0  nop
    ctx->pc = 0x2c71d4u;
    // NOP
label_2c71d8:
    // 0x2c71d8: 0x0  nop
    ctx->pc = 0x2c71d8u;
    // NOP
label_2c71dc:
    // 0x2c71dc: 0x0  nop
    ctx->pc = 0x2c71dcu;
    // NOP
label_2c71e0:
    // 0x2c71e0: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c71e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c71e4:
    // 0x2c71e4: 0x73726f48  .word       0x73726F48                   # INVALID     $k1, $s2, 0x6F48 # 00000000 <InstrIdType: R5900_MMI_0>
    ctx->pc = 0x2c71e4u;
//     throw std::runtime_error("Unhandled MMI0 instruction: function 0x1D at 0x2C71E4 raw=0x73726F48");
 /* MITIGATED */
label_2c71e8:
    // 0x2c71e8: 0x65472065  daddiu      $a3, $t2, 0x2065
    ctx->pc = 0x2c71e8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c71ec:
    // 0x2c71ec: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c71ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c71f0:
    // 0x2c71f0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c71f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c71f4:
    // 0x2c71f4: 0x0  nop
    ctx->pc = 0x2c71f4u;
    // NOP
label_2c71f8:
    // 0x2c71f8: 0x0  nop
    ctx->pc = 0x2c71f8u;
    // NOP
label_2c71fc:
    // 0x2c71fc: 0x0  nop
    ctx->pc = 0x2c71fcu;
    // NOP
label_2c7200:
    // 0x2c7200: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c7200u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c7204:
    // 0x2c7204: 0x61657053  daddi       $a1, $t3, 0x7053
    ctx->pc = 0x2c7204u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28755; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7208:
    // 0x2c7208: 0x65472072  daddiu      $a3, $t2, 0x2072
    ctx->pc = 0x2c7208u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8306);
label_2c720c:
    // 0x2c720c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c720cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7210:
    // 0x2c7210: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7210u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7214:
    // 0x2c7214: 0x0  nop
    ctx->pc = 0x2c7214u;
    // NOP
label_2c7218:
    // 0x2c7218: 0x0  nop
    ctx->pc = 0x2c7218u;
    // NOP
label_2c721c:
    // 0x2c721c: 0x0  nop
    ctx->pc = 0x2c721cu;
    // NOP
label_2c7220:
    // 0x2c7220: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c7220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7224:
    // 0x2c7224: 0x61657053  daddi       $a1, $t3, 0x7053
    ctx->pc = 0x2c7224u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28755; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7228:
    // 0x2c7228: 0x65472072  daddiu      $a3, $t2, 0x2072
    ctx->pc = 0x2c7228u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8306);
label_2c722c:
    // 0x2c722c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c722cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7230:
    // 0x2c7230: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7230u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7234:
    // 0x2c7234: 0x0  nop
    ctx->pc = 0x2c7234u;
    // NOP
label_2c7238:
    // 0x2c7238: 0x0  nop
    ctx->pc = 0x2c7238u;
    // NOP
label_2c723c:
    // 0x2c723c: 0x0  nop
    ctx->pc = 0x2c723cu;
    // NOP
label_2c7240:
    // 0x2c7240: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c7240u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7244:
    // 0x2c7244: 0x61657053  daddi       $a1, $t3, 0x7053
    ctx->pc = 0x2c7244u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28755; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7248:
    // 0x2c7248: 0x65472072  daddiu      $a3, $t2, 0x2072
    ctx->pc = 0x2c7248u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8306);
label_2c724c:
    // 0x2c724c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c724cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7250:
    // 0x2c7250: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7254:
    // 0x2c7254: 0x0  nop
    ctx->pc = 0x2c7254u;
    // NOP
label_2c7258:
    // 0x2c7258: 0x0  nop
    ctx->pc = 0x2c7258u;
    // NOP
label_2c725c:
    // 0x2c725c: 0x0  nop
    ctx->pc = 0x2c725cu;
    // NOP
label_2c7260:
    // 0x2c7260: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c7260u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c7264:
    // 0x2c7264: 0x61657053  daddi       $a1, $t3, 0x7053
    ctx->pc = 0x2c7264u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28755; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7268:
    // 0x2c7268: 0x65472072  daddiu      $a3, $t2, 0x2072
    ctx->pc = 0x2c7268u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8306);
label_2c726c:
    // 0x2c726c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c726cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7270:
    // 0x2c7270: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7270u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7274:
    // 0x2c7274: 0x0  nop
    ctx->pc = 0x2c7274u;
    // NOP
label_2c7278:
    // 0x2c7278: 0x0  nop
    ctx->pc = 0x2c7278u;
    // NOP
label_2c727c:
    // 0x2c727c: 0x0  nop
    ctx->pc = 0x2c727cu;
    // NOP
label_2c7280:
    // 0x2c7280: 0x20747331  addi        $s4, $v1, 0x7331
    ctx->pc = 0x2c7280u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c7284:
    // 0x2c7284: 0x746f6f46  .word       0x746F6F46                   # INVALID     $v1, $t7, 0x6F46 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7284u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7284 raw=0x746F6F46");
 /* MITIGATED */
label_2c7288:
    // 0x2c7288: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c7288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c728c:
    // 0x2c728c: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c728cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7290:
    // 0x2c7290: 0x0  nop
    ctx->pc = 0x2c7290u;
    // NOP
label_2c7294:
    // 0x2c7294: 0x0  nop
    ctx->pc = 0x2c7294u;
    // NOP
label_2c7298:
    // 0x2c7298: 0x0  nop
    ctx->pc = 0x2c7298u;
    // NOP
label_2c729c:
    // 0x2c729c: 0x0  nop
    ctx->pc = 0x2c729cu;
    // NOP
label_2c72a0:
    // 0x2c72a0: 0x20646e32  addi        $a0, $v1, 0x6E32
    ctx->pc = 0x2c72a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28210, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c72a4:
    // 0x2c72a4: 0x746f6f46  .word       0x746F6F46                   # INVALID     $v1, $t7, 0x6F46 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c72a4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C72A4 raw=0x746F6F46");
 /* MITIGATED */
label_2c72a8:
    // 0x2c72a8: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c72a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c72ac:
    // 0x2c72ac: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c72acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c72b0:
    // 0x2c72b0: 0x0  nop
    ctx->pc = 0x2c72b0u;
    // NOP
label_2c72b4:
    // 0x2c72b4: 0x0  nop
    ctx->pc = 0x2c72b4u;
    // NOP
label_2c72b8:
    // 0x2c72b8: 0x0  nop
    ctx->pc = 0x2c72b8u;
    // NOP
label_2c72bc:
    // 0x2c72bc: 0x0  nop
    ctx->pc = 0x2c72bcu;
    // NOP
label_2c72c0:
    // 0x2c72c0: 0x20647233  addi        $a0, $v1, 0x7233
    ctx->pc = 0x2c72c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29235, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c72c4:
    // 0x2c72c4: 0x746f6f46  .word       0x746F6F46                   # INVALID     $v1, $t7, 0x6F46 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c72c4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C72C4 raw=0x746F6F46");
 /* MITIGATED */
label_2c72c8:
    // 0x2c72c8: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c72c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c72cc:
    // 0x2c72cc: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c72ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c72d0:
    // 0x2c72d0: 0x0  nop
    ctx->pc = 0x2c72d0u;
    // NOP
label_2c72d4:
    // 0x2c72d4: 0x0  nop
    ctx->pc = 0x2c72d4u;
    // NOP
label_2c72d8:
    // 0x2c72d8: 0x0  nop
    ctx->pc = 0x2c72d8u;
    // NOP
label_2c72dc:
    // 0x2c72dc: 0x0  nop
    ctx->pc = 0x2c72dcu;
    // NOP
label_2c72e0:
    // 0x2c72e0: 0x20687434  addi        $t0, $v1, 0x7434
    ctx->pc = 0x2c72e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c72e4:
    // 0x2c72e4: 0x746f6f46  .word       0x746F6F46                   # INVALID     $v1, $t7, 0x6F46 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c72e4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C72E4 raw=0x746F6F46");
 /* MITIGATED */
label_2c72e8:
    // 0x2c72e8: 0x6e654720  ldr         $a1, 0x4720($s3)
    ctx->pc = 0x2c72e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c72ec:
    // 0x2c72ec: 0x6c617265  ldr         $at, 0x7265($v1)
    ctx->pc = 0x2c72ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c72f0:
    // 0x2c72f0: 0x0  nop
    ctx->pc = 0x2c72f0u;
    // NOP
label_2c72f4:
    // 0x2c72f4: 0x0  nop
    ctx->pc = 0x2c72f4u;
    // NOP
label_2c72f8:
    // 0x2c72f8: 0x6c656946  ldr         $a1, 0x6946($v1)
    ctx->pc = 0x2c72f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c72fc:
    // 0x2c72fc: 0x65472064  daddiu      $a3, $t2, 0x2064
    ctx->pc = 0x2c72fcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8292);
label_2c7300:
    // 0x2c7300: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x2c7300u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7304:
    // 0x2c7304: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7304u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7308:
    // 0x2c7308: 0x0  nop
    ctx->pc = 0x2c7308u;
    // NOP
label_2c730c:
    // 0x2c730c: 0x0  nop
    ctx->pc = 0x2c730cu;
    // NOP
    ctx->pc = 0x2c7310u;
    return;
}

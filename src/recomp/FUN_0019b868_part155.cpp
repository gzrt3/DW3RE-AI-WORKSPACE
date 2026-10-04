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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part155(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e6b88u: goto label_1e6b88;
        case 0x1e6b8cu: goto label_1e6b8c;
        case 0x1e6b90u: goto label_1e6b90;
        case 0x1e6b94u: goto label_1e6b94;
        case 0x1e6b98u: goto label_1e6b98;
        case 0x1e6b9cu: goto label_1e6b9c;
        case 0x1e6ba0u: goto label_1e6ba0;
        case 0x1e6ba4u: goto label_1e6ba4;
        case 0x1e6ba8u: goto label_1e6ba8;
        case 0x1e6bacu: goto label_1e6bac;
        case 0x1e6bb0u: goto label_1e6bb0;
        case 0x1e6bb4u: goto label_1e6bb4;
        case 0x1e6bb8u: goto label_1e6bb8;
        case 0x1e6bbcu: goto label_1e6bbc;
        case 0x1e6bc0u: goto label_1e6bc0;
        case 0x1e6bc4u: goto label_1e6bc4;
        case 0x1e6bc8u: goto label_1e6bc8;
        case 0x1e6bccu: goto label_1e6bcc;
        case 0x1e6bd0u: goto label_1e6bd0;
        case 0x1e6bd4u: goto label_1e6bd4;
        case 0x1e6bd8u: goto label_1e6bd8;
        case 0x1e6bdcu: goto label_1e6bdc;
        case 0x1e6be0u: goto label_1e6be0;
        case 0x1e6be4u: goto label_1e6be4;
        case 0x1e6be8u: goto label_1e6be8;
        case 0x1e6becu: goto label_1e6bec;
        case 0x1e6bf0u: goto label_1e6bf0;
        case 0x1e6bf4u: goto label_1e6bf4;
        case 0x1e6bf8u: goto label_1e6bf8;
        case 0x1e6bfcu: goto label_1e6bfc;
        case 0x1e6c00u: goto label_1e6c00;
        case 0x1e6c04u: goto label_1e6c04;
        case 0x1e6c08u: goto label_1e6c08;
        case 0x1e6c0cu: goto label_1e6c0c;
        case 0x1e6c10u: goto label_1e6c10;
        case 0x1e6c14u: goto label_1e6c14;
        case 0x1e6c18u: goto label_1e6c18;
        case 0x1e6c1cu: goto label_1e6c1c;
        case 0x1e6c20u: goto label_1e6c20;
        case 0x1e6c24u: goto label_1e6c24;
        case 0x1e6c28u: goto label_1e6c28;
        case 0x1e6c2cu: goto label_1e6c2c;
        case 0x1e6c30u: goto label_1e6c30;
        case 0x1e6c34u: goto label_1e6c34;
        case 0x1e6c38u: goto label_1e6c38;
        case 0x1e6c3cu: goto label_1e6c3c;
        case 0x1e6c40u: goto label_1e6c40;
        case 0x1e6c44u: goto label_1e6c44;
        case 0x1e6c48u: goto label_1e6c48;
        case 0x1e6c4cu: goto label_1e6c4c;
        case 0x1e6c50u: goto label_1e6c50;
        case 0x1e6c54u: goto label_1e6c54;
        case 0x1e6c58u: goto label_1e6c58;
        case 0x1e6c5cu: goto label_1e6c5c;
        case 0x1e6c60u: goto label_1e6c60;
        case 0x1e6c64u: goto label_1e6c64;
        case 0x1e6c68u: goto label_1e6c68;
        case 0x1e6c6cu: goto label_1e6c6c;
        case 0x1e6c70u: goto label_1e6c70;
        case 0x1e6c74u: goto label_1e6c74;
        case 0x1e6c78u: goto label_1e6c78;
        case 0x1e6c7cu: goto label_1e6c7c;
        case 0x1e6c80u: goto label_1e6c80;
        case 0x1e6c84u: goto label_1e6c84;
        case 0x1e6c88u: goto label_1e6c88;
        case 0x1e6c8cu: goto label_1e6c8c;
        case 0x1e6c90u: goto label_1e6c90;
        case 0x1e6c94u: goto label_1e6c94;
        case 0x1e6c98u: goto label_1e6c98;
        case 0x1e6c9cu: goto label_1e6c9c;
        case 0x1e6ca0u: goto label_1e6ca0;
        case 0x1e6ca4u: goto label_1e6ca4;
        case 0x1e6ca8u: goto label_1e6ca8;
        case 0x1e6cacu: goto label_1e6cac;
        case 0x1e6cb0u: goto label_1e6cb0;
        case 0x1e6cb4u: goto label_1e6cb4;
        case 0x1e6cb8u: goto label_1e6cb8;
        case 0x1e6cbcu: goto label_1e6cbc;
        case 0x1e6cc0u: goto label_1e6cc0;
        case 0x1e6cc4u: goto label_1e6cc4;
        case 0x1e6cc8u: goto label_1e6cc8;
        case 0x1e6cccu: goto label_1e6ccc;
        case 0x1e6cd0u: goto label_1e6cd0;
        case 0x1e6cd4u: goto label_1e6cd4;
        case 0x1e6cd8u: goto label_1e6cd8;
        case 0x1e6cdcu: goto label_1e6cdc;
        case 0x1e6ce0u: goto label_1e6ce0;
        case 0x1e6ce4u: goto label_1e6ce4;
        case 0x1e6ce8u: goto label_1e6ce8;
        case 0x1e6cecu: goto label_1e6cec;
        case 0x1e6cf0u: goto label_1e6cf0;
        case 0x1e6cf4u: goto label_1e6cf4;
        case 0x1e6cf8u: goto label_1e6cf8;
        case 0x1e6cfcu: goto label_1e6cfc;
        case 0x1e6d00u: goto label_1e6d00;
        case 0x1e6d04u: goto label_1e6d04;
        case 0x1e6d08u: goto label_1e6d08;
        case 0x1e6d0cu: goto label_1e6d0c;
        case 0x1e6d10u: goto label_1e6d10;
        case 0x1e6d14u: goto label_1e6d14;
        case 0x1e6d18u: goto label_1e6d18;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d20u: goto label_1e6d20;
        case 0x1e6d24u: goto label_1e6d24;
        case 0x1e6d28u: goto label_1e6d28;
        case 0x1e6d2cu: goto label_1e6d2c;
        case 0x1e6d30u: goto label_1e6d30;
        case 0x1e6d34u: goto label_1e6d34;
        case 0x1e6d38u: goto label_1e6d38;
        case 0x1e6d3cu: goto label_1e6d3c;
        case 0x1e6d40u: goto label_1e6d40;
        case 0x1e6d44u: goto label_1e6d44;
        case 0x1e6d48u: goto label_1e6d48;
        case 0x1e6d4cu: goto label_1e6d4c;
        case 0x1e6d50u: goto label_1e6d50;
        case 0x1e6d54u: goto label_1e6d54;
        case 0x1e6d58u: goto label_1e6d58;
        case 0x1e6d5cu: goto label_1e6d5c;
        case 0x1e6d60u: goto label_1e6d60;
        case 0x1e6d64u: goto label_1e6d64;
        case 0x1e6d68u: goto label_1e6d68;
        case 0x1e6d6cu: goto label_1e6d6c;
        case 0x1e6d70u: goto label_1e6d70;
        case 0x1e6d74u: goto label_1e6d74;
        case 0x1e6d78u: goto label_1e6d78;
        case 0x1e6d7cu: goto label_1e6d7c;
        case 0x1e6d80u: goto label_1e6d80;
        case 0x1e6d84u: goto label_1e6d84;
        case 0x1e6d88u: goto label_1e6d88;
        case 0x1e6d8cu: goto label_1e6d8c;
        case 0x1e6d90u: goto label_1e6d90;
        case 0x1e6d94u: goto label_1e6d94;
        case 0x1e6d98u: goto label_1e6d98;
        case 0x1e6d9cu: goto label_1e6d9c;
        case 0x1e6da0u: goto label_1e6da0;
        case 0x1e6da4u: goto label_1e6da4;
        case 0x1e6da8u: goto label_1e6da8;
        case 0x1e6dacu: goto label_1e6dac;
        case 0x1e6db0u: goto label_1e6db0;
        case 0x1e6db4u: goto label_1e6db4;
        case 0x1e6db8u: goto label_1e6db8;
        case 0x1e6dbcu: goto label_1e6dbc;
        case 0x1e6dc0u: goto label_1e6dc0;
        case 0x1e6dc4u: goto label_1e6dc4;
        case 0x1e6dc8u: goto label_1e6dc8;
        case 0x1e6dccu: goto label_1e6dcc;
        case 0x1e6dd0u: goto label_1e6dd0;
        case 0x1e6dd4u: goto label_1e6dd4;
        case 0x1e6dd8u: goto label_1e6dd8;
        case 0x1e6ddcu: goto label_1e6ddc;
        case 0x1e6de0u: goto label_1e6de0;
        case 0x1e6de4u: goto label_1e6de4;
        case 0x1e6de8u: goto label_1e6de8;
        case 0x1e6decu: goto label_1e6dec;
        case 0x1e6df0u: goto label_1e6df0;
        case 0x1e6df4u: goto label_1e6df4;
        case 0x1e6df8u: goto label_1e6df8;
        case 0x1e6dfcu: goto label_1e6dfc;
        case 0x1e6e00u: goto label_1e6e00;
        case 0x1e6e04u: goto label_1e6e04;
        case 0x1e6e08u: goto label_1e6e08;
        case 0x1e6e0cu: goto label_1e6e0c;
        case 0x1e6e10u: goto label_1e6e10;
        case 0x1e6e14u: goto label_1e6e14;
        case 0x1e6e18u: goto label_1e6e18;
        case 0x1e6e1cu: goto label_1e6e1c;
        case 0x1e6e20u: goto label_1e6e20;
        case 0x1e6e24u: goto label_1e6e24;
        case 0x1e6e28u: goto label_1e6e28;
        case 0x1e6e2cu: goto label_1e6e2c;
        case 0x1e6e30u: goto label_1e6e30;
        case 0x1e6e34u: goto label_1e6e34;
        case 0x1e6e38u: goto label_1e6e38;
        case 0x1e6e3cu: goto label_1e6e3c;
        case 0x1e6e40u: goto label_1e6e40;
        case 0x1e6e44u: goto label_1e6e44;
        case 0x1e6e48u: goto label_1e6e48;
        case 0x1e6e4cu: goto label_1e6e4c;
        case 0x1e6e50u: goto label_1e6e50;
        case 0x1e6e54u: goto label_1e6e54;
        case 0x1e6e58u: goto label_1e6e58;
        case 0x1e6e5cu: goto label_1e6e5c;
        case 0x1e6e60u: goto label_1e6e60;
        case 0x1e6e64u: goto label_1e6e64;
        case 0x1e6e68u: goto label_1e6e68;
        case 0x1e6e6cu: goto label_1e6e6c;
        case 0x1e6e70u: goto label_1e6e70;
        case 0x1e6e74u: goto label_1e6e74;
        case 0x1e6e78u: goto label_1e6e78;
        case 0x1e6e7cu: goto label_1e6e7c;
        case 0x1e6e80u: goto label_1e6e80;
        case 0x1e6e84u: goto label_1e6e84;
        case 0x1e6e88u: goto label_1e6e88;
        case 0x1e6e8cu: goto label_1e6e8c;
        case 0x1e6e90u: goto label_1e6e90;
        case 0x1e6e94u: goto label_1e6e94;
        case 0x1e6e98u: goto label_1e6e98;
        case 0x1e6e9cu: goto label_1e6e9c;
        case 0x1e6ea0u: goto label_1e6ea0;
        case 0x1e6ea4u: goto label_1e6ea4;
        case 0x1e6ea8u: goto label_1e6ea8;
        case 0x1e6eacu: goto label_1e6eac;
        case 0x1e6eb0u: goto label_1e6eb0;
        case 0x1e6eb4u: goto label_1e6eb4;
        case 0x1e6eb8u: goto label_1e6eb8;
        case 0x1e6ebcu: goto label_1e6ebc;
        case 0x1e6ec0u: goto label_1e6ec0;
        case 0x1e6ec4u: goto label_1e6ec4;
        case 0x1e6ec8u: goto label_1e6ec8;
        case 0x1e6eccu: goto label_1e6ecc;
        case 0x1e6ed0u: goto label_1e6ed0;
        case 0x1e6ed4u: goto label_1e6ed4;
        case 0x1e6ed8u: goto label_1e6ed8;
        case 0x1e6edcu: goto label_1e6edc;
        case 0x1e6ee0u: goto label_1e6ee0;
        case 0x1e6ee4u: goto label_1e6ee4;
        case 0x1e6ee8u: goto label_1e6ee8;
        case 0x1e6eecu: goto label_1e6eec;
        case 0x1e6ef0u: goto label_1e6ef0;
        case 0x1e6ef4u: goto label_1e6ef4;
        case 0x1e6ef8u: goto label_1e6ef8;
        case 0x1e6efcu: goto label_1e6efc;
        case 0x1e6f00u: goto label_1e6f00;
        case 0x1e6f04u: goto label_1e6f04;
        case 0x1e6f08u: goto label_1e6f08;
        case 0x1e6f0cu: goto label_1e6f0c;
        case 0x1e6f10u: goto label_1e6f10;
        case 0x1e6f14u: goto label_1e6f14;
        case 0x1e6f18u: goto label_1e6f18;
        case 0x1e6f1cu: goto label_1e6f1c;
        case 0x1e6f20u: goto label_1e6f20;
        case 0x1e6f24u: goto label_1e6f24;
        case 0x1e6f28u: goto label_1e6f28;
        case 0x1e6f2cu: goto label_1e6f2c;
        case 0x1e6f30u: goto label_1e6f30;
        case 0x1e6f34u: goto label_1e6f34;
        case 0x1e6f38u: goto label_1e6f38;
        case 0x1e6f3cu: goto label_1e6f3c;
        case 0x1e6f40u: goto label_1e6f40;
        case 0x1e6f44u: goto label_1e6f44;
        case 0x1e6f48u: goto label_1e6f48;
        case 0x1e6f4cu: goto label_1e6f4c;
        case 0x1e6f50u: goto label_1e6f50;
        case 0x1e6f54u: goto label_1e6f54;
        case 0x1e6f58u: goto label_1e6f58;
        case 0x1e6f5cu: goto label_1e6f5c;
        case 0x1e6f60u: goto label_1e6f60;
        case 0x1e6f64u: goto label_1e6f64;
        case 0x1e6f68u: goto label_1e6f68;
        case 0x1e6f6cu: goto label_1e6f6c;
        case 0x1e6f70u: goto label_1e6f70;
        case 0x1e6f74u: goto label_1e6f74;
        case 0x1e6f78u: goto label_1e6f78;
        case 0x1e6f7cu: goto label_1e6f7c;
        case 0x1e6f80u: goto label_1e6f80;
        case 0x1e6f84u: goto label_1e6f84;
        case 0x1e6f88u: goto label_1e6f88;
        case 0x1e6f8cu: goto label_1e6f8c;
        case 0x1e6f90u: goto label_1e6f90;
        case 0x1e6f94u: goto label_1e6f94;
        case 0x1e6f98u: goto label_1e6f98;
        case 0x1e6f9cu: goto label_1e6f9c;
        case 0x1e6fa0u: goto label_1e6fa0;
        case 0x1e6fa4u: goto label_1e6fa4;
        case 0x1e6fa8u: goto label_1e6fa8;
        case 0x1e6facu: goto label_1e6fac;
        case 0x1e6fb0u: goto label_1e6fb0;
        case 0x1e6fb4u: goto label_1e6fb4;
        case 0x1e6fb8u: goto label_1e6fb8;
        case 0x1e6fbcu: goto label_1e6fbc;
        case 0x1e6fc0u: goto label_1e6fc0;
        case 0x1e6fc4u: goto label_1e6fc4;
        case 0x1e6fc8u: goto label_1e6fc8;
        case 0x1e6fccu: goto label_1e6fcc;
        case 0x1e6fd0u: goto label_1e6fd0;
        case 0x1e6fd4u: goto label_1e6fd4;
        case 0x1e6fd8u: goto label_1e6fd8;
        case 0x1e6fdcu: goto label_1e6fdc;
        case 0x1e6fe0u: goto label_1e6fe0;
        case 0x1e6fe4u: goto label_1e6fe4;
        case 0x1e6fe8u: goto label_1e6fe8;
        case 0x1e6fecu: goto label_1e6fec;
        case 0x1e6ff0u: goto label_1e6ff0;
        case 0x1e6ff4u: goto label_1e6ff4;
        case 0x1e6ff8u: goto label_1e6ff8;
        case 0x1e6ffcu: goto label_1e6ffc;
        case 0x1e7000u: goto label_1e7000;
        case 0x1e7004u: goto label_1e7004;
        case 0x1e7008u: goto label_1e7008;
        case 0x1e700cu: goto label_1e700c;
        case 0x1e7010u: goto label_1e7010;
        case 0x1e7014u: goto label_1e7014;
        case 0x1e7018u: goto label_1e7018;
        case 0x1e701cu: goto label_1e701c;
        case 0x1e7020u: goto label_1e7020;
        case 0x1e7024u: goto label_1e7024;
        case 0x1e7028u: goto label_1e7028;
        case 0x1e702cu: goto label_1e702c;
        case 0x1e7030u: goto label_1e7030;
        case 0x1e7034u: goto label_1e7034;
        case 0x1e7038u: goto label_1e7038;
        case 0x1e703cu: goto label_1e703c;
        case 0x1e7040u: goto label_1e7040;
        case 0x1e7044u: goto label_1e7044;
        case 0x1e7048u: goto label_1e7048;
        case 0x1e704cu: goto label_1e704c;
        case 0x1e7050u: goto label_1e7050;
        case 0x1e7054u: goto label_1e7054;
        case 0x1e7058u: goto label_1e7058;
        case 0x1e705cu: goto label_1e705c;
        case 0x1e7060u: goto label_1e7060;
        case 0x1e7064u: goto label_1e7064;
        case 0x1e7068u: goto label_1e7068;
        case 0x1e706cu: goto label_1e706c;
        case 0x1e7070u: goto label_1e7070;
        case 0x1e7074u: goto label_1e7074;
        case 0x1e7078u: goto label_1e7078;
        case 0x1e707cu: goto label_1e707c;
        case 0x1e7080u: goto label_1e7080;
        case 0x1e7084u: goto label_1e7084;
        case 0x1e7088u: goto label_1e7088;
        case 0x1e708cu: goto label_1e708c;
        case 0x1e7090u: goto label_1e7090;
        case 0x1e7094u: goto label_1e7094;
        case 0x1e7098u: goto label_1e7098;
        case 0x1e709cu: goto label_1e709c;
        case 0x1e70a0u: goto label_1e70a0;
        case 0x1e70a4u: goto label_1e70a4;
        case 0x1e70a8u: goto label_1e70a8;
        case 0x1e70acu: goto label_1e70ac;
        case 0x1e70b0u: goto label_1e70b0;
        case 0x1e70b4u: goto label_1e70b4;
        case 0x1e70b8u: goto label_1e70b8;
        case 0x1e70bcu: goto label_1e70bc;
        case 0x1e70c0u: goto label_1e70c0;
        case 0x1e70c4u: goto label_1e70c4;
        case 0x1e70c8u: goto label_1e70c8;
        case 0x1e70ccu: goto label_1e70cc;
        case 0x1e70d0u: goto label_1e70d0;
        case 0x1e70d4u: goto label_1e70d4;
        case 0x1e70d8u: goto label_1e70d8;
        case 0x1e70dcu: goto label_1e70dc;
        case 0x1e70e0u: goto label_1e70e0;
        case 0x1e70e4u: goto label_1e70e4;
        case 0x1e70e8u: goto label_1e70e8;
        case 0x1e70ecu: goto label_1e70ec;
        case 0x1e70f0u: goto label_1e70f0;
        case 0x1e70f4u: goto label_1e70f4;
        case 0x1e70f8u: goto label_1e70f8;
        case 0x1e70fcu: goto label_1e70fc;
        case 0x1e7100u: goto label_1e7100;
        case 0x1e7104u: goto label_1e7104;
        case 0x1e7108u: goto label_1e7108;
        case 0x1e710cu: goto label_1e710c;
        case 0x1e7110u: goto label_1e7110;
        case 0x1e7114u: goto label_1e7114;
        case 0x1e7118u: goto label_1e7118;
        case 0x1e711cu: goto label_1e711c;
        case 0x1e7120u: goto label_1e7120;
        case 0x1e7124u: goto label_1e7124;
        case 0x1e7128u: goto label_1e7128;
        case 0x1e712cu: goto label_1e712c;
        case 0x1e7130u: goto label_1e7130;
        case 0x1e7134u: goto label_1e7134;
        case 0x1e7138u: goto label_1e7138;
        case 0x1e713cu: goto label_1e713c;
        case 0x1e7140u: goto label_1e7140;
        case 0x1e7144u: goto label_1e7144;
        case 0x1e7148u: goto label_1e7148;
        case 0x1e714cu: goto label_1e714c;
        case 0x1e7150u: goto label_1e7150;
        case 0x1e7154u: goto label_1e7154;
        case 0x1e7158u: goto label_1e7158;
        case 0x1e715cu: goto label_1e715c;
        case 0x1e7160u: goto label_1e7160;
        case 0x1e7164u: goto label_1e7164;
        case 0x1e7168u: goto label_1e7168;
        case 0x1e716cu: goto label_1e716c;
        case 0x1e7170u: goto label_1e7170;
        case 0x1e7174u: goto label_1e7174;
        case 0x1e7178u: goto label_1e7178;
        case 0x1e717cu: goto label_1e717c;
        case 0x1e7180u: goto label_1e7180;
        case 0x1e7184u: goto label_1e7184;
        case 0x1e7188u: goto label_1e7188;
        case 0x1e718cu: goto label_1e718c;
        case 0x1e7190u: goto label_1e7190;
        case 0x1e7194u: goto label_1e7194;
        case 0x1e7198u: goto label_1e7198;
        case 0x1e719cu: goto label_1e719c;
        case 0x1e71a0u: goto label_1e71a0;
        case 0x1e71a4u: goto label_1e71a4;
        case 0x1e71a8u: goto label_1e71a8;
        case 0x1e71acu: goto label_1e71ac;
        case 0x1e71b0u: goto label_1e71b0;
        case 0x1e71b4u: goto label_1e71b4;
        case 0x1e71b8u: goto label_1e71b8;
        case 0x1e71bcu: goto label_1e71bc;
        case 0x1e71c0u: goto label_1e71c0;
        case 0x1e71c4u: goto label_1e71c4;
        case 0x1e71c8u: goto label_1e71c8;
        case 0x1e71ccu: goto label_1e71cc;
        case 0x1e71d0u: goto label_1e71d0;
        case 0x1e71d4u: goto label_1e71d4;
        case 0x1e71d8u: goto label_1e71d8;
        case 0x1e71dcu: goto label_1e71dc;
        case 0x1e71e0u: goto label_1e71e0;
        case 0x1e71e4u: goto label_1e71e4;
        case 0x1e71e8u: goto label_1e71e8;
        case 0x1e71ecu: goto label_1e71ec;
        case 0x1e71f0u: goto label_1e71f0;
        case 0x1e71f4u: goto label_1e71f4;
        case 0x1e71f8u: goto label_1e71f8;
        case 0x1e71fcu: goto label_1e71fc;
        case 0x1e7200u: goto label_1e7200;
        case 0x1e7204u: goto label_1e7204;
        case 0x1e7208u: goto label_1e7208;
        case 0x1e720cu: goto label_1e720c;
        case 0x1e7210u: goto label_1e7210;
        case 0x1e7214u: goto label_1e7214;
        case 0x1e7218u: goto label_1e7218;
        case 0x1e721cu: goto label_1e721c;
        case 0x1e7220u: goto label_1e7220;
        case 0x1e7224u: goto label_1e7224;
        case 0x1e7228u: goto label_1e7228;
        case 0x1e722cu: goto label_1e722c;
        case 0x1e7230u: goto label_1e7230;
        case 0x1e7234u: goto label_1e7234;
        case 0x1e7238u: goto label_1e7238;
        case 0x1e723cu: goto label_1e723c;
        case 0x1e7240u: goto label_1e7240;
        case 0x1e7244u: goto label_1e7244;
        case 0x1e7248u: goto label_1e7248;
        case 0x1e724cu: goto label_1e724c;
        case 0x1e7250u: goto label_1e7250;
        case 0x1e7254u: goto label_1e7254;
        case 0x1e7258u: goto label_1e7258;
        case 0x1e725cu: goto label_1e725c;
        case 0x1e7260u: goto label_1e7260;
        case 0x1e7264u: goto label_1e7264;
        case 0x1e7268u: goto label_1e7268;
        case 0x1e726cu: goto label_1e726c;
        case 0x1e7270u: goto label_1e7270;
        case 0x1e7274u: goto label_1e7274;
        case 0x1e7278u: goto label_1e7278;
        case 0x1e727cu: goto label_1e727c;
        case 0x1e7280u: goto label_1e7280;
        case 0x1e7284u: goto label_1e7284;
        case 0x1e7288u: goto label_1e7288;
        case 0x1e728cu: goto label_1e728c;
        case 0x1e7290u: goto label_1e7290;
        case 0x1e7294u: goto label_1e7294;
        case 0x1e7298u: goto label_1e7298;
        case 0x1e729cu: goto label_1e729c;
        case 0x1e72a0u: goto label_1e72a0;
        case 0x1e72a4u: goto label_1e72a4;
        case 0x1e72a8u: goto label_1e72a8;
        case 0x1e72acu: goto label_1e72ac;
        case 0x1e72b0u: goto label_1e72b0;
        case 0x1e72b4u: goto label_1e72b4;
        case 0x1e72b8u: goto label_1e72b8;
        case 0x1e72bcu: goto label_1e72bc;
        case 0x1e72c0u: goto label_1e72c0;
        case 0x1e72c4u: goto label_1e72c4;
        case 0x1e72c8u: goto label_1e72c8;
        case 0x1e72ccu: goto label_1e72cc;
        case 0x1e72d0u: goto label_1e72d0;
        case 0x1e72d4u: goto label_1e72d4;
        case 0x1e72d8u: goto label_1e72d8;
        case 0x1e72dcu: goto label_1e72dc;
        case 0x1e72e0u: goto label_1e72e0;
        case 0x1e72e4u: goto label_1e72e4;
        case 0x1e72e8u: goto label_1e72e8;
        case 0x1e72ecu: goto label_1e72ec;
        case 0x1e72f0u: goto label_1e72f0;
        case 0x1e72f4u: goto label_1e72f4;
        case 0x1e72f8u: goto label_1e72f8;
        case 0x1e72fcu: goto label_1e72fc;
        case 0x1e7300u: goto label_1e7300;
        case 0x1e7304u: goto label_1e7304;
        case 0x1e7308u: goto label_1e7308;
        case 0x1e730cu: goto label_1e730c;
        case 0x1e7310u: goto label_1e7310;
        case 0x1e7314u: goto label_1e7314;
        case 0x1e7318u: goto label_1e7318;
        case 0x1e731cu: goto label_1e731c;
        case 0x1e7320u: goto label_1e7320;
        case 0x1e7324u: goto label_1e7324;
        case 0x1e7328u: goto label_1e7328;
        case 0x1e732cu: goto label_1e732c;
        case 0x1e7330u: goto label_1e7330;
        case 0x1e7334u: goto label_1e7334;
        case 0x1e7338u: goto label_1e7338;
        case 0x1e733cu: goto label_1e733c;
        case 0x1e7340u: goto label_1e7340;
        case 0x1e7344u: goto label_1e7344;
        case 0x1e7348u: goto label_1e7348;
        case 0x1e734cu: goto label_1e734c;
        case 0x1e7350u: goto label_1e7350;
        case 0x1e7354u: goto label_1e7354;
        default: return;
    }

label_1e6b88:
    // 0x1e6b88: 0xc05b578  jal         func_16D5E0
label_1e6b8c:
    if (ctx->pc == 0x1E6B8Cu) {
        ctx->pc = 0x1E6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6B88u;
        // 0x1e6b8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6B90u;
        goto label_1e6b90;
    }
    ctx->pc = 0x1E6B88u;
    SET_GPR_U32(ctx, 31, 0x1E6B90u);
    ctx->pc = 0x1E6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6B88u;
    // 0x1e6b8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1E6B88u, 0x1E6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B90u;
label_1e6b90:
    // 0x1e6b90: 0xc060258  jal         func_180960
label_1e6b94:
    if (ctx->pc == 0x1E6B94u) {
        ctx->pc = 0x1E6B98u;
        goto label_1e6b98;
    }
    ctx->pc = 0x1E6B90u;
    SET_GPR_U32(ctx, 31, 0x1E6B98u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E6B90u, 0x1E6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6B98u;
label_1e6b98:
    // 0x1e6b98: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x1e6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_1e6b9c:
    // 0x1e6b9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e6ba0:
    if (ctx->pc == 0x1E6BA0u) {
        ctx->pc = 0x1E6BA4u;
        goto label_1e6ba4;
    }
    ctx->pc = 0x1E6B9Cu;
    {
        const bool branch_taken_0x1e6b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b9c) {
            ctx->pc = 0x1E6BACu;
            goto label_1e6bac;
        }
    }
    ctx->pc = 0x1E6BA4u;
label_1e6ba4:
    // 0x1e6ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6ba8:
    // 0x1e6ba8: 0xaf828e94  sw          $v0, -0x716C($gp)
    ctx->pc = 0x1e6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938260), GPR_U32(ctx, 2));
label_1e6bac:
    // 0x1e6bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6bb0:
    // 0x1e6bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6bb4:
    // 0x1e6bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6bb8:
    // 0x1e6bb8: 0x8f828e94  lw          $v0, -0x716C($gp)
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
label_1e6bbc:
    // 0x1e6bbc: 0x3e00008  jr          $ra
label_1e6bc0:
    if (ctx->pc == 0x1E6BC0u) {
        ctx->pc = 0x1E6BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BBCu;
        // 0x1e6bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6BC4u;
        goto label_1e6bc4;
    }
    ctx->pc = 0x1E6BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6BBCu;
        // 0x1e6bc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6BC4u;
label_1e6bc4:
    // 0x1e6bc4: 0x0  nop
    ctx->pc = 0x1e6bc4u;
    // NOP
label_1e6bc8:
    // 0x1e6bc8: 0x0  nop
    ctx->pc = 0x1e6bc8u;
    // NOP
label_1e6bcc:
    // 0x1e6bcc: 0x0  nop
    ctx->pc = 0x1e6bccu;
    // NOP
label_1e6bd0:
    // 0x1e6bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e6bd4:
    // 0x1e6bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e6bd8:
    // 0x1e6bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6bdc:
    // 0x1e6bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6be0:
    // 0x1e6be0: 0x8f838dd0  lw          $v1, -0x7230($gp)
    ctx->pc = 0x1e6be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
label_1e6be4:
    // 0x1e6be4: 0x10600066  beqz        $v1, . + 4 + (0x66 << 2)
label_1e6be8:
    if (ctx->pc == 0x1E6BE8u) {
        ctx->pc = 0x1E6BECu;
        goto label_1e6bec;
    }
    ctx->pc = 0x1E6BE4u;
    {
        const bool branch_taken_0x1e6be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6be4) {
            ctx->pc = 0x1E6D80u;
            goto label_1e6d80;
        }
    }
    ctx->pc = 0x1E6BECu;
label_1e6bec:
    // 0x1e6bec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e6becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e6bf0:
    // 0x1e6bf0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1e6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1e6bf4:
    // 0x1e6bf4: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1e6bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e6bf8:
    // 0x1e6bf8: 0x27848dd8  addiu       $a0, $gp, -0x7228
    ctx->pc = 0x1e6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
label_1e6bfc:
    // 0x1e6bfc: 0x8f838dcc  lw          $v1, -0x7234($gp)
    ctx->pc = 0x1e6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1e6c00:
    // 0x1e6c00: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x1e6c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
label_1e6c04:
    // 0x1e6c04: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1e6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1e6c08:
    // 0x1e6c08: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1e6c0c:
    // 0x1e6c0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e6c10:
    // 0x1e6c10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e6c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e6c14:
    // 0x1e6c14: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1e6c14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6c18:
    // 0x1e6c18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e6c1c:
    if (ctx->pc == 0x1E6C1Cu) {
        ctx->pc = 0x1E6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C18u;
        // 0x1e6c1c: 0xc78821  addu        $s1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6C20u;
        goto label_1e6c20;
    }
    ctx->pc = 0x1E6C18u;
    {
        const bool branch_taken_0x1e6c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C18u;
        // 0x1e6c1c: 0xc78821  addu        $s1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c18) {
            ctx->pc = 0x1E6C28u;
            goto label_1e6c28;
        }
    }
    ctx->pc = 0x1E6C20u;
label_1e6c20:
    // 0x1e6c20: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1e6c24:
    if (ctx->pc == 0x1E6C24u) {
        ctx->pc = 0x1E6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C20u;
        // 0x1e6c24: 0xa2000123  sb          $zero, 0x123($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6C28u;
        goto label_1e6c28;
    }
    ctx->pc = 0x1E6C20u;
    {
        const bool branch_taken_0x1e6c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C20u;
        // 0x1e6c24: 0xa2000123  sb          $zero, 0x123($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c20) {
            ctx->pc = 0x1E6D5Cu;
            goto label_1e6d5c;
        }
    }
    ctx->pc = 0x1E6C28u;
label_1e6c28:
    // 0x1e6c28: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e6c2c:
    // 0x1e6c2c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e6c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e6c30:
    // 0x1e6c30: 0xa2020123  sb          $v0, 0x123($s0)
    ctx->pc = 0x1e6c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 2));
label_1e6c34:
    // 0x1e6c34: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1e6c38:
    // 0x1e6c38: 0x14850012  bne         $a0, $a1, . + 4 + (0x12 << 2)
label_1e6c3c:
    if (ctx->pc == 0x1E6C3Cu) {
        ctx->pc = 0x1E6C40u;
        goto label_1e6c40;
    }
    ctx->pc = 0x1E6C38u;
    {
        const bool branch_taken_0x1e6c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c38) {
            ctx->pc = 0x1E6C84u;
            goto label_1e6c84;
        }
    }
    ctx->pc = 0x1E6C40u;
label_1e6c40:
    // 0x1e6c40: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e6c44:
    // 0x1e6c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6c48:
    // 0x1e6c48: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e6c4c:
    if (ctx->pc == 0x1E6C4Cu) {
        ctx->pc = 0x1E6C50u;
        goto label_1e6c50;
    }
    ctx->pc = 0x1E6C48u;
    {
        const bool branch_taken_0x1e6c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6c48) {
            ctx->pc = 0x1E6C6Cu;
            goto label_1e6c6c;
        }
    }
    ctx->pc = 0x1E6C50u;
label_1e6c50:
    // 0x1e6c50: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_1e6c54:
    if (ctx->pc == 0x1E6C54u) {
        ctx->pc = 0x1E6C58u;
        goto label_1e6c58;
    }
    ctx->pc = 0x1E6C50u;
    {
        const bool branch_taken_0x1e6c50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c50) {
            ctx->pc = 0x1E6C6Cu;
            goto label_1e6c6c;
        }
    }
    ctx->pc = 0x1E6C58u;
label_1e6c58:
    // 0x1e6c58: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e6c5c:
    // 0x1e6c5c: 0xc070ea8  jal         func_1C3AA0
label_1e6c60:
    if (ctx->pc == 0x1E6C60u) {
        ctx->pc = 0x1E6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C5Cu;
        // 0x1e6c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6C64u;
        goto label_1e6c64;
    }
    ctx->pc = 0x1E6C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C64u);
    ctx->pc = 0x1E6C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C5Cu;
    // 0x1e6c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E6C64u;
label_1e6c64:
    // 0x1e6c64: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1e6c68:
    if (ctx->pc == 0x1E6C68u) {
        ctx->pc = 0x1E6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C64u;
        // 0x1e6c68: 0x8f828e80  lw          $v0, -0x7180($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6C6Cu;
        goto label_1e6c6c;
    }
    ctx->pc = 0x1E6C64u;
    {
        const bool branch_taken_0x1e6c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C64u;
        // 0x1e6c68: 0x8f828e80  lw          $v0, -0x7180($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c64) {
            ctx->pc = 0x1E6CD0u;
            goto label_1e6cd0;
        }
    }
    ctx->pc = 0x1E6C6Cu;
label_1e6c6c:
    // 0x1e6c6c: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e6c70:
    // 0x1e6c70: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e6c74:
    // 0x1e6c74: 0xc070ea8  jal         func_1C3AA0
label_1e6c78:
    if (ctx->pc == 0x1E6C78u) {
        ctx->pc = 0x1E6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6C74u;
        // 0x1e6c78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6C7Cu;
        goto label_1e6c7c;
    }
    ctx->pc = 0x1E6C74u;
    SET_GPR_U32(ctx, 31, 0x1E6C7Cu);
    ctx->pc = 0x1E6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C74u;
    // 0x1e6c78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E6C7Cu;
label_1e6c7c:
    // 0x1e6c7c: 0x10000013  b           . + 4 + (0x13 << 2)
label_1e6c80:
    if (ctx->pc == 0x1E6C80u) {
        ctx->pc = 0x1E6C84u;
        goto label_1e6c84;
    }
    ctx->pc = 0x1E6C7Cu;
    {
        const bool branch_taken_0x1e6c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c7c) {
            ctx->pc = 0x1E6CCCu;
            goto label_1e6ccc;
        }
    }
    ctx->pc = 0x1E6C84u;
label_1e6c84:
    // 0x1e6c84: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e6c88:
    // 0x1e6c88: 0x14850010  bne         $a0, $a1, . + 4 + (0x10 << 2)
label_1e6c8c:
    if (ctx->pc == 0x1E6C8Cu) {
        ctx->pc = 0x1E6C90u;
        goto label_1e6c90;
    }
    ctx->pc = 0x1E6C88u;
    {
        const bool branch_taken_0x1e6c88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6c88) {
            ctx->pc = 0x1E6CCCu;
            goto label_1e6ccc;
        }
    }
    ctx->pc = 0x1E6C90u;
label_1e6c90:
    // 0x1e6c90: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e6c94:
    // 0x1e6c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6c98:
    // 0x1e6c98: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e6c9c:
    if (ctx->pc == 0x1E6C9Cu) {
        ctx->pc = 0x1E6CA0u;
        goto label_1e6ca0;
    }
    ctx->pc = 0x1E6C98u;
    {
        const bool branch_taken_0x1e6c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6c98) {
            ctx->pc = 0x1E6CBCu;
            goto label_1e6cbc;
        }
    }
    ctx->pc = 0x1E6CA0u;
label_1e6ca0:
    // 0x1e6ca0: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_1e6ca4:
    if (ctx->pc == 0x1E6CA4u) {
        ctx->pc = 0x1E6CA8u;
        goto label_1e6ca8;
    }
    ctx->pc = 0x1E6CA0u;
    {
        const bool branch_taken_0x1e6ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e6ca0) {
            ctx->pc = 0x1E6CBCu;
            goto label_1e6cbc;
        }
    }
    ctx->pc = 0x1E6CA8u;
label_1e6ca8:
    // 0x1e6ca8: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e6cac:
    // 0x1e6cac: 0xc070ea8  jal         func_1C3AA0
label_1e6cb0:
    if (ctx->pc == 0x1E6CB0u) {
        ctx->pc = 0x1E6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CACu;
        // 0x1e6cb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6CB4u;
        goto label_1e6cb4;
    }
    ctx->pc = 0x1E6CACu;
    SET_GPR_U32(ctx, 31, 0x1E6CB4u);
    ctx->pc = 0x1E6CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CACu;
    // 0x1e6cb0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E6CB4u;
label_1e6cb4:
    // 0x1e6cb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e6cb8:
    if (ctx->pc == 0x1E6CB8u) {
        ctx->pc = 0x1E6CBCu;
        goto label_1e6cbc;
    }
    ctx->pc = 0x1E6CB4u;
    {
        const bool branch_taken_0x1e6cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6cb4) {
            ctx->pc = 0x1E6CCCu;
            goto label_1e6ccc;
        }
    }
    ctx->pc = 0x1E6CBCu;
label_1e6cbc:
    // 0x1e6cbc: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e6cc0:
    // 0x1e6cc0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e6cc4:
    // 0x1e6cc4: 0xc070ea8  jal         func_1C3AA0
label_1e6cc8:
    if (ctx->pc == 0x1E6CC8u) {
        ctx->pc = 0x1E6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6CC4u;
        // 0x1e6cc8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6CCCu;
        goto label_1e6ccc;
    }
    ctx->pc = 0x1E6CC4u;
    SET_GPR_U32(ctx, 31, 0x1E6CCCu);
    ctx->pc = 0x1E6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CC4u;
    // 0x1e6cc8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E6CCCu;
label_1e6ccc:
    // 0x1e6ccc: 0x8f828e80  lw          $v0, -0x7180($gp)
    ctx->pc = 0x1e6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e6cd0:
    // 0x1e6cd0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1e6cd4:
    if (ctx->pc == 0x1E6CD4u) {
        ctx->pc = 0x1E6CD8u;
        goto label_1e6cd8;
    }
    ctx->pc = 0x1E6CD0u;
    {
        const bool branch_taken_0x1e6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6cd0) {
            ctx->pc = 0x1E6D50u;
            goto label_1e6d50;
        }
    }
    ctx->pc = 0x1E6CD8u;
label_1e6cd8:
    // 0x1e6cd8: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1e6cdc:
    // 0x1e6cdc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e6ce0:
    // 0x1e6ce0: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
label_1e6ce4:
    // 0x1e6ce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6ce8:
    // 0x1e6ce8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e6cec:
    // 0x1e6cec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e6cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6cf0:
    // 0x1e6cf0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_1e6cf4:
    if (ctx->pc == 0x1E6CF4u) {
        ctx->pc = 0x1E6CF8u;
        goto label_1e6cf8;
    }
    ctx->pc = 0x1E6CF0u;
    {
        const bool branch_taken_0x1e6cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6cf0) {
            ctx->pc = 0x1E6D24u;
            goto label_1e6d24;
        }
    }
    ctx->pc = 0x1E6CF8u;
label_1e6cf8:
    // 0x1e6cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6cfc:
    // 0x1e6cfc: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1e6d00:
    if (ctx->pc == 0x1E6D00u) {
        ctx->pc = 0x1E6D04u;
        goto label_1e6d04;
    }
    ctx->pc = 0x1E6CFCu;
    {
        const bool branch_taken_0x1e6cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6cfc) {
            ctx->pc = 0x1E6D24u;
            goto label_1e6d24;
        }
    }
    ctx->pc = 0x1E6D04u;
label_1e6d04:
    // 0x1e6d04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e6d08:
    if (ctx->pc == 0x1E6D08u) {
        ctx->pc = 0x1E6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D04u;
        // 0x1e6d08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D0Cu;
        goto label_1e6d0c;
    }
    ctx->pc = 0x1E6D04u;
    {
        const bool branch_taken_0x1e6d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D04u;
        // 0x1e6d08: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d04) {
            ctx->pc = 0x1E6D18u;
            goto label_1e6d18;
        }
    }
    ctx->pc = 0x1E6D0Cu;
label_1e6d0c:
    // 0x1e6d0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e6d10:
    if (ctx->pc == 0x1E6D10u) {
        ctx->pc = 0x1E6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D0Cu;
        // 0x1e6d10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D14u;
        goto label_1e6d14;
    }
    ctx->pc = 0x1E6D0Cu;
    {
        const bool branch_taken_0x1e6d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D0Cu;
        // 0x1e6d10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d0c) {
            ctx->pc = 0x1E6D24u;
            goto label_1e6d24;
        }
    }
    ctx->pc = 0x1E6D14u;
label_1e6d14:
    // 0x1e6d14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e6d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d18:
    // 0x1e6d18: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e6d1c:
    if (ctx->pc == 0x1E6D1Cu) {
        ctx->pc = 0x1E6D20u;
        goto label_1e6d20;
    }
    ctx->pc = 0x1E6D18u;
    {
        const bool branch_taken_0x1e6d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d18) {
            ctx->pc = 0x1E6D24u;
            goto label_1e6d24;
        }
    }
    ctx->pc = 0x1E6D20u;
label_1e6d20:
    // 0x1e6d20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e6d24:
    // 0x1e6d24: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e6d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e6d28:
    // 0x1e6d28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e6d2c:
    // 0x1e6d2c: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
label_1e6d30:
    // 0x1e6d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e6d34:
    // 0x1e6d34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6d38:
    // 0x1e6d38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e6d3c:
    if (ctx->pc == 0x1E6D3Cu) {
        ctx->pc = 0x1E6D40u;
        goto label_1e6d40;
    }
    ctx->pc = 0x1E6D38u;
    {
        const bool branch_taken_0x1e6d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d38) {
            ctx->pc = 0x1E6D50u;
            goto label_1e6d50;
        }
    }
    ctx->pc = 0x1E6D40u;
label_1e6d40:
    // 0x1e6d40: 0xc070e2c  jal         func_1C38B0
label_1e6d44:
    if (ctx->pc == 0x1E6D44u) {
        ctx->pc = 0x1E6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D40u;
        // 0x1e6d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D48u;
        goto label_1e6d48;
    }
    ctx->pc = 0x1E6D40u;
    SET_GPR_U32(ctx, 31, 0x1E6D48u);
    ctx->pc = 0x1E6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D40u;
    // 0x1e6d44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1E6D48u;
label_1e6d48:
    // 0x1e6d48: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e6d4c:
    if (ctx->pc == 0x1E6D4Cu) {
        ctx->pc = 0x1E6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D48u;
        // 0x1e6d4c: 0x83828dc8  lb          $v0, -0x7238($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D50u;
        goto label_1e6d50;
    }
    ctx->pc = 0x1E6D48u;
    {
        const bool branch_taken_0x1e6d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D48u;
        // 0x1e6d4c: 0x83828dc8  lb          $v0, -0x7238($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d48) {
            ctx->pc = 0x1E6D60u;
            goto label_1e6d60;
        }
    }
    ctx->pc = 0x1E6D50u;
label_1e6d50:
    // 0x1e6d50: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1e6d54:
    // 0x1e6d54: 0xc070e2c  jal         func_1C38B0
label_1e6d58:
    if (ctx->pc == 0x1E6D58u) {
        ctx->pc = 0x1E6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D54u;
        // 0x1e6d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D5Cu;
        goto label_1e6d5c;
    }
    ctx->pc = 0x1E6D54u;
    SET_GPR_U32(ctx, 31, 0x1E6D5Cu);
    ctx->pc = 0x1E6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D54u;
    // 0x1e6d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1E6D5Cu;
label_1e6d5c:
    // 0x1e6d5c: 0x83828dc8  lb          $v0, -0x7238($gp)
    ctx->pc = 0x1e6d5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1e6d60:
    // 0x1e6d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d64:
    // 0x1e6d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d68:
    // 0x1e6d68: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1e6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1e6d6c:
    // 0x1e6d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d70:
    // 0x1e6d70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e6d70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d74:
    // 0x1e6d74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e6d74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d78:
    // 0x1e6d78: 0xc066c72  jal         func_19B1C8
label_1e6d7c:
    if (ctx->pc == 0x1E6D7Cu) {
        ctx->pc = 0x1E6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D78u;
        // 0x1e6d7c: 0xa2020263  sb          $v0, 0x263($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 611), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D80u;
        goto label_1e6d80;
    }
    ctx->pc = 0x1E6D78u;
    SET_GPR_U32(ctx, 31, 0x1E6D80u);
    ctx->pc = 0x1E6D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D78u;
    // 0x1e6d7c: 0xa2020263  sb          $v0, 0x263($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 611), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E6D78u, 0x1E6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D80u;
label_1e6d80:
    // 0x1e6d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6d84:
    // 0x1e6d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6d88:
    // 0x1e6d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6d8c:
    // 0x1e6d8c: 0x3e00008  jr          $ra
label_1e6d90:
    if (ctx->pc == 0x1E6D90u) {
        ctx->pc = 0x1E6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D8Cu;
        // 0x1e6d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6D94u;
        goto label_1e6d94;
    }
    ctx->pc = 0x1E6D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D8Cu;
        // 0x1e6d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6D94u;
label_1e6d94:
    // 0x1e6d94: 0x0  nop
    ctx->pc = 0x1e6d94u;
    // NOP
label_1e6d98:
    // 0x1e6d98: 0x0  nop
    ctx->pc = 0x1e6d98u;
    // NOP
label_1e6d9c:
    // 0x1e6d9c: 0x0  nop
    ctx->pc = 0x1e6d9cu;
    // NOP
label_1e6da0:
    // 0x1e6da0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e6da4:
    // 0x1e6da4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e6da4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6da8:
    // 0x1e6da8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e6da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e6dac:
    // 0x1e6dac: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e6dacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6db0:
    // 0x1e6db0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e6db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1e6db4:
    // 0x1e6db4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e6db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e6db8:
    // 0x1e6db8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e6db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e6dbc:
    // 0x1e6dbc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e6dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e6dc0:
    // 0x1e6dc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e6dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e6dc4:
    // 0x1e6dc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e6dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e6dc8:
    // 0x1e6dc8: 0xaf808de4  sw          $zero, -0x721C($gp)
    ctx->pc = 0x1e6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938084), GPR_U32(ctx, 0));
label_1e6dcc:
    // 0x1e6dcc: 0x3c0a004b  lui         $t2, 0x4B
    ctx->pc = 0x1e6dccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)75 << 16));
label_1e6dd0:
    // 0x1e6dd0: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x1e6dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e6dd4:
    // 0x1e6dd4: 0x254a2a40  addiu       $t2, $t2, 0x2A40
    ctx->pc = 0x1e6dd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 10816));
label_1e6dd8:
    // 0x1e6dd8: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x1e6dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e6ddc:
    // 0x1e6ddc: 0x14c6821  addu        $t5, $t2, $t4
    ctx->pc = 0x1e6ddcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
label_1e6de0:
    // 0x1e6de0: 0x25630001  addiu       $v1, $t3, 0x1
    ctx->pc = 0x1e6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1e6de4:
    // 0x1e6de4: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x1e6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
label_1e6de8:
    // 0x1e6de8: 0x25620002  addiu       $v0, $t3, 0x2
    ctx->pc = 0x1e6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_1e6dec:
    // 0x1e6dec: 0xada90004  sw          $t1, 0x4($t5)
    ctx->pc = 0x1e6decu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 9));
label_1e6df0:
    // 0x1e6df0: 0x25670003  addiu       $a3, $t3, 0x3
    ctx->pc = 0x1e6df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
label_1e6df4:
    // 0x1e6df4: 0xada80008  sw          $t0, 0x8($t5)
    ctx->pc = 0x1e6df4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 8));
label_1e6df8:
    // 0x1e6df8: 0x25660004  addiu       $a2, $t3, 0x4
    ctx->pc = 0x1e6df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_1e6dfc:
    // 0x1e6dfc: 0xada30010  sw          $v1, 0x10($t5)
    ctx->pc = 0x1e6dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 3));
label_1e6e00:
    // 0x1e6e00: 0x25650005  addiu       $a1, $t3, 0x5
    ctx->pc = 0x1e6e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
label_1e6e04:
    // 0x1e6e04: 0xada90014  sw          $t1, 0x14($t5)
    ctx->pc = 0x1e6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 9));
label_1e6e08:
    // 0x1e6e08: 0x25640006  addiu       $a0, $t3, 0x6
    ctx->pc = 0x1e6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
label_1e6e0c:
    // 0x1e6e0c: 0xada80018  sw          $t0, 0x18($t5)
    ctx->pc = 0x1e6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 8));
label_1e6e10:
    // 0x1e6e10: 0x25630007  addiu       $v1, $t3, 0x7
    ctx->pc = 0x1e6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
label_1e6e14:
    // 0x1e6e14: 0xada20020  sw          $v0, 0x20($t5)
    ctx->pc = 0x1e6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 2));
label_1e6e18:
    // 0x1e6e18: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1e6e18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_1e6e1c:
    // 0x1e6e1c: 0xada90024  sw          $t1, 0x24($t5)
    ctx->pc = 0x1e6e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 9));
label_1e6e20:
    // 0x1e6e20: 0x29620021  slti        $v0, $t3, 0x21
    ctx->pc = 0x1e6e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)33) ? 1 : 0);
label_1e6e24:
    // 0x1e6e24: 0xada80028  sw          $t0, 0x28($t5)
    ctx->pc = 0x1e6e24u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 8));
label_1e6e28:
    // 0x1e6e28: 0x258c0080  addiu       $t4, $t4, 0x80
    ctx->pc = 0x1e6e28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 128));
label_1e6e2c:
    // 0x1e6e2c: 0xada70030  sw          $a3, 0x30($t5)
    ctx->pc = 0x1e6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 7));
label_1e6e30:
    // 0x1e6e30: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x1e6e30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
label_1e6e34:
    // 0x1e6e34: 0xada80038  sw          $t0, 0x38($t5)
    ctx->pc = 0x1e6e34u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 8));
label_1e6e38:
    // 0x1e6e38: 0xada60040  sw          $a2, 0x40($t5)
    ctx->pc = 0x1e6e38u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 64), GPR_U32(ctx, 6));
label_1e6e3c:
    // 0x1e6e3c: 0xada90044  sw          $t1, 0x44($t5)
    ctx->pc = 0x1e6e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 9));
label_1e6e40:
    // 0x1e6e40: 0xada80048  sw          $t0, 0x48($t5)
    ctx->pc = 0x1e6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 8));
label_1e6e44:
    // 0x1e6e44: 0xada50050  sw          $a1, 0x50($t5)
    ctx->pc = 0x1e6e44u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 80), GPR_U32(ctx, 5));
label_1e6e48:
    // 0x1e6e48: 0xada90054  sw          $t1, 0x54($t5)
    ctx->pc = 0x1e6e48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 9));
label_1e6e4c:
    // 0x1e6e4c: 0xada80058  sw          $t0, 0x58($t5)
    ctx->pc = 0x1e6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 8));
label_1e6e50:
    // 0x1e6e50: 0xada40060  sw          $a0, 0x60($t5)
    ctx->pc = 0x1e6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 4));
label_1e6e54:
    // 0x1e6e54: 0xada90064  sw          $t1, 0x64($t5)
    ctx->pc = 0x1e6e54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 9));
label_1e6e58:
    // 0x1e6e58: 0xada80068  sw          $t0, 0x68($t5)
    ctx->pc = 0x1e6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 104), GPR_U32(ctx, 8));
label_1e6e5c:
    // 0x1e6e5c: 0xada30070  sw          $v1, 0x70($t5)
    ctx->pc = 0x1e6e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 112), GPR_U32(ctx, 3));
label_1e6e60:
    // 0x1e6e60: 0xada90074  sw          $t1, 0x74($t5)
    ctx->pc = 0x1e6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 116), GPR_U32(ctx, 9));
label_1e6e64:
    // 0x1e6e64: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1e6e68:
    if (ctx->pc == 0x1E6E68u) {
        ctx->pc = 0x1E6E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E64u;
        // 0x1e6e68: 0xada80078  sw          $t0, 0x78($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 120), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E6Cu;
        goto label_1e6e6c;
    }
    ctx->pc = 0x1E6E64u;
    {
        const bool branch_taken_0x1e6e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E64u;
        // 0x1e6e68: 0xada80078  sw          $t0, 0x78($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 120), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e64) {
            ctx->pc = 0x1E6DDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6ddc;
        }
    }
    ctx->pc = 0x1E6E6Cu;
label_1e6e6c:
    // 0x1e6e6c: 0x29610029  slti        $at, $t3, 0x29
    ctx->pc = 0x1e6e6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e6e70:
    // 0x1e6e70: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1e6e74:
    if (ctx->pc == 0x1E6E74u) {
        ctx->pc = 0x1E6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E70u;
        // 0x1e6e74: 0xb3100  sll         $a2, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6E78u;
        goto label_1e6e78;
    }
    ctx->pc = 0x1E6E70u;
    {
        const bool branch_taken_0x1e6e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E70u;
        // 0x1e6e74: 0xb3100  sll         $a2, $t3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e70) {
            ctx->pc = 0x1E6EA8u;
            goto label_1e6ea8;
        }
    }
    ctx->pc = 0x1E6E78u;
label_1e6e78:
    // 0x1e6e78: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1e6e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1e6e7c:
    // 0x1e6e7c: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x1e6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e6e80:
    // 0x1e6e80: 0x24a52a40  addiu       $a1, $a1, 0x2A40
    ctx->pc = 0x1e6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
label_1e6e84:
    // 0x1e6e84: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1e6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e6e88:
    // 0x1e6e88: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x1e6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1e6e8c:
    // 0x1e6e8c: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x1e6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
label_1e6e90:
    // 0x1e6e90: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e6e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_1e6e94:
    // 0x1e6e94: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e6e94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1e6e98:
    // 0x1e6e98: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1e6e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1e6e9c:
    // 0x1e6e9c: 0x29620029  slti        $v0, $t3, 0x29
    ctx->pc = 0x1e6e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e6ea0:
    // 0x1e6ea0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1e6ea4:
    if (ctx->pc == 0x1E6EA4u) {
        ctx->pc = 0x1E6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EA0u;
        // 0x1e6ea4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EA8u;
        goto label_1e6ea8;
    }
    ctx->pc = 0x1E6EA0u;
    {
        const bool branch_taken_0x1e6ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EA0u;
        // 0x1e6ea4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ea0) {
            ctx->pc = 0x1E6E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6e88;
        }
    }
    ctx->pc = 0x1E6EA8u;
label_1e6ea8:
    // 0x1e6ea8: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e6ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1e6eac:
    // 0x1e6eac: 0xaf828de0  sw          $v0, -0x7220($gp)
    ctx->pc = 0x1e6eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 2));
label_1e6eb0:
    // 0x1e6eb0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e6eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e6eb4:
    // 0x1e6eb4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e6eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e6eb8:
    // 0x1e6eb8: 0xc07091c  jal         func_1C2470
label_1e6ebc:
    if (ctx->pc == 0x1E6EBCu) {
        ctx->pc = 0x1E6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EB8u;
        // 0x1e6ebc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EC0u;
        goto label_1e6ec0;
    }
    ctx->pc = 0x1E6EB8u;
    SET_GPR_U32(ctx, 31, 0x1E6EC0u);
    ctx->pc = 0x1E6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EB8u;
    // 0x1e6ebc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1E6EC0u;
label_1e6ec0:
    // 0x1e6ec0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e6ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6ec4:
    // 0x1e6ec4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e6ec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6ec8:
    // 0x1e6ec8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e6ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6ecc:
    // 0x1e6ecc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e6eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6ed0:
    // 0x1e6ed0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e6ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6ed4:
    // 0x1e6ed4: 0x0  nop
    ctx->pc = 0x1e6ed4u;
    // NOP
label_1e6ed8:
    // 0x1e6ed8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e6edc:
    // 0x1e6edc: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x1e6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
label_1e6ee0:
    // 0x1e6ee0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1e6ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e6ee4:
    // 0x1e6ee4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1e6ee8:
    // 0x1e6ee8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e6eec:
    // 0x1e6eec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e6ef0:
    // 0x1e6ef0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1e6ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6ef4:
    // 0x1e6ef4: 0xc05e234  jal         func_1788D0
label_1e6ef8:
    if (ctx->pc == 0x1E6EF8u) {
        ctx->pc = 0x1E6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EF4u;
        // 0x1e6ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EFCu;
        goto label_1e6efc;
    }
    ctx->pc = 0x1E6EF4u;
    SET_GPR_U32(ctx, 31, 0x1E6EFCu);
    ctx->pc = 0x1E6EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6EF4u;
    // 0x1e6ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E6EF4u, 0x1E6EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6EFCu;
label_1e6efc:
    // 0x1e6efc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1e6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e6f00:
    // 0x1e6f00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6f04:
    // 0x1e6f04: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e6f08:
    // 0x1e6f08: 0x26080064  addiu       $t0, $s0, 0x64
    ctx->pc = 0x1e6f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_1e6f0c:
    // 0x1e6f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6f10:
    // 0x1e6f10: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e6f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e6f14:
    // 0x1e6f14: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1e6f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1e6f18:
    // 0x1e6f18: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1e6f1c:
    // 0x1e6f1c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e6f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e6f20:
    // 0x1e6f20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e6f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e6f24:
    // 0x1e6f24: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e6f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e6f28:
    // 0x1e6f28: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1e6f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e6f2c:
    // 0x1e6f2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e6f2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6f30:
    // 0x1e6f30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e6f30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6f34:
    // 0x1e6f34: 0xc05de30  jal         func_1778C0
label_1e6f38:
    if (ctx->pc == 0x1E6F38u) {
        ctx->pc = 0x1E6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F34u;
        // 0x1e6f38: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F3Cu;
        goto label_1e6f3c;
    }
    ctx->pc = 0x1E6F34u;
    SET_GPR_U32(ctx, 31, 0x1E6F3Cu);
    ctx->pc = 0x1E6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F34u;
    // 0x1e6f38: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E6F34u, 0x1E6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F3Cu;
label_1e6f3c:
    // 0x1e6f3c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1e6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e6f40:
    // 0x1e6f40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e6f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e6f44:
    // 0x1e6f44: 0xa2230080  sb          $v1, 0x80($s1)
    ctx->pc = 0x1e6f44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 3));
label_1e6f48:
    // 0x1e6f48: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1e6f4c:
    // 0x1e6f4c: 0xa2230081  sb          $v1, 0x81($s1)
    ctx->pc = 0x1e6f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 129), (uint8_t)GPR_U32(ctx, 3));
label_1e6f50:
    // 0x1e6f50: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1e6f54:
    // 0x1e6f54: 0xa2230082  sb          $v1, 0x82($s1)
    ctx->pc = 0x1e6f54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 130), (uint8_t)GPR_U32(ctx, 3));
label_1e6f58:
    // 0x1e6f58: 0xa2200083  sb          $zero, 0x83($s1)
    ctx->pc = 0x1e6f58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 131), (uint8_t)GPR_U32(ctx, 0));
label_1e6f5c:
    // 0x1e6f5c: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x1e6f5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e6f60:
    // 0x1e6f60: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_1e6f64:
    if (ctx->pc == 0x1E6F64u) {
        ctx->pc = 0x1E6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F60u;
        // 0x1e6f64: 0xae240084  sw          $a0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F68u;
        goto label_1e6f68;
    }
    ctx->pc = 0x1E6F60u;
    {
        const bool branch_taken_0x1e6f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F60u;
        // 0x1e6f64: 0xae240084  sw          $a0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f60) {
            ctx->pc = 0x1E6ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6ed4;
        }
    }
    ctx->pc = 0x1E6F68u;
label_1e6f68:
    // 0x1e6f68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e6f68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1e6f6c:
    // 0x1e6f6c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x1e6f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e6f70:
    // 0x1e6f70: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_1e6f74:
    if (ctx->pc == 0x1E6F74u) {
        ctx->pc = 0x1E6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F70u;
        // 0x1e6f74: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F78u;
        goto label_1e6f78;
    }
    ctx->pc = 0x1E6F70u;
    {
        const bool branch_taken_0x1e6f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F70u;
        // 0x1e6f74: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f70) {
            ctx->pc = 0x1E6ECCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6ecc;
        }
    }
    ctx->pc = 0x1E6F78u;
label_1e6f78:
    // 0x1e6f78: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e6f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e6f7c:
    // 0x1e6f7c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e6f7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e6f80:
    // 0x1e6f80: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e6f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e6f84:
    // 0x1e6f84: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e6f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e6f88:
    // 0x1e6f88: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e6f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e6f8c:
    // 0x1e6f8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e6f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6f90:
    // 0x1e6f90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6f94:
    // 0x1e6f94: 0x3e00008  jr          $ra
label_1e6f98:
    if (ctx->pc == 0x1E6F98u) {
        ctx->pc = 0x1E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F94u;
        // 0x1e6f98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F9Cu;
        goto label_1e6f9c;
    }
    ctx->pc = 0x1E6F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F94u;
        // 0x1e6f98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6F9Cu;
label_1e6f9c:
    // 0x1e6f9c: 0x0  nop
    ctx->pc = 0x1e6f9cu;
    // NOP
label_1e6fa0:
    // 0x1e6fa0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e6fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e6fa4:
    // 0x1e6fa4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e6fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e6fa8:
    // 0x1e6fa8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e6fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e6fac:
    // 0x1e6fac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e6facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e6fb0:
    // 0x1e6fb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e6fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e6fb4:
    // 0x1e6fb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e6fb8:
    // 0x1e6fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e6fbc:
    // 0x1e6fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6fc0:
    // 0x1e6fc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6fc4:
    // 0x1e6fc4: 0x8f838de4  lw          $v1, -0x721C($gp)
    ctx->pc = 0x1e6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938084)));
label_1e6fc8:
    // 0x1e6fc8: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
label_1e6fcc:
    if (ctx->pc == 0x1E6FCCu) {
        ctx->pc = 0x1E6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FC8u;
        // 0x1e6fcc: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6FD0u;
        goto label_1e6fd0;
    }
    ctx->pc = 0x1E6FC8u;
    {
        const bool branch_taken_0x1e6fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FC8u;
        // 0x1e6fcc: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6fc8) {
            ctx->pc = 0x1E72B8u;
            goto label_1e72b8;
        }
    }
    ctx->pc = 0x1E6FD0u;
label_1e6fd0:
    // 0x1e6fd0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1e6fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1e6fd4:
    // 0x1e6fd4: 0x34843ffc  ori         $a0, $a0, 0x3FFC
    ctx->pc = 0x1e6fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16380);
label_1e6fd8:
    // 0x1e6fd8: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1e6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1e6fdc:
    // 0x1e6fdc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e6fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6fe0:
    // 0x1e6fe0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e6fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6fe4:
    // 0x1e6fe4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e6fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6fe8:
    // 0x1e6fe8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e6fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6fec:
    // 0x1e6fec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1e6fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e6ff0:
    // 0x1e6ff0: 0x100000ac  b           . + 4 + (0xAC << 2)
label_1e6ff4:
    if (ctx->pc == 0x1E6FF4u) {
        ctx->pc = 0x1E6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FF0u;
        // 0x1e6ff4: 0x64b021  addu        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6FF8u;
        goto label_1e6ff8;
    }
    ctx->pc = 0x1E6FF0u;
    {
        const bool branch_taken_0x1e6ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FF0u;
        // 0x1e6ff4: 0x64b021  addu        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ff0) {
            ctx->pc = 0x1E72A4u;
            goto label_1e72a4;
        }
    }
    ctx->pc = 0x1E6FF8u;
label_1e6ff8:
    // 0x1e6ff8: 0x8f848de0  lw          $a0, -0x7220($gp)
    ctx->pc = 0x1e6ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938080)));
label_1e6ffc:
    // 0x1e6ffc: 0x24632a40  addiu       $v1, $v1, 0x2A40
    ctx->pc = 0x1e6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10816));
label_1e7000:
    // 0x1e7000: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1e7000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1e7004:
    // 0x1e7004: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e7004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e7008:
    // 0x1e7008: 0x108500a2  beq         $a0, $a1, . + 4 + (0xA2 << 2)
label_1e700c:
    if (ctx->pc == 0x1E700Cu) {
        ctx->pc = 0x1E700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7008u;
        // 0x1e700c: 0x3c04004b  lui         $a0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7010u;
        goto label_1e7010;
    }
    ctx->pc = 0x1E7008u;
    {
        const bool branch_taken_0x1e7008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7008u;
        // 0x1e700c: 0x3c04004b  lui         $a0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7008) {
            ctx->pc = 0x1E7294u;
            goto label_1e7294;
        }
    }
    ctx->pc = 0x1E7010u;
label_1e7010:
    // 0x1e7010: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e7010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e7014:
    // 0x1e7014: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e7014u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e7018:
    // 0x1e7018: 0x24843120  addiu       $a0, $a0, 0x3120
    ctx->pc = 0x1e7018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12576));
label_1e701c:
    // 0x1e701c: 0x85a821  addu        $s5, $a0, $a1
    ctx->pc = 0x1e701cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e7020:
    // 0x1e7020: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e7020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e7024:
    // 0x1e7024: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e7024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e7028:
    // 0x1e7028: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1e7028u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1e702c:
    // 0x1e702c: 0x24842cd0  addiu       $a0, $a0, 0x2CD0
    ctx->pc = 0x1e702cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11472));
label_1e7030:
    // 0x1e7030: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1e7030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e7034:
    // 0x1e7034: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1e7034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1e7038:
    // 0x1e7038: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x1e7038u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e703c:
    // 0x1e703c: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x1e703cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1e7040:
    // 0x1e7040: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1e7040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e7044:
    // 0x1e7044: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1e7044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
label_1e7048:
    // 0x1e7048: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1e7048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1e704c:
    // 0x1e704c: 0x3484851f  ori         $a0, $a0, 0x851F
    ctx->pc = 0x1e704cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
label_1e7050:
    // 0x1e7050: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e7054:
    // 0x1e7054: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x1e7054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7058:
    // 0x1e7058: 0x25083b80  addiu       $t0, $t0, 0x3B80
    ctx->pc = 0x1e7058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15232));
label_1e705c:
    // 0x1e705c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1e705cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1e7060:
    // 0x1e7060: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1e7060u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1e7064:
    // 0x1e7064: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1e7064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1e7068:
    // 0x1e7068: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x1e7068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1e706c:
    // 0x1e706c: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1e706cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7070:
    // 0x1e7070: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x1e7070u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1e7074:
    // 0x1e7074: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x1e7074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1e7078:
    // 0x1e7078: 0x90d10002  lbu         $s1, 0x2($a2)
    ctx->pc = 0x1e7078u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_1e707c:
    // 0x1e707c: 0x2010  mfhi        $a0
    ctx->pc = 0x1e707cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1e7080:
    // 0x1e7080: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1e7080u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_1e7084:
    // 0x1e7084: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e7084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e7088:
    // 0x1e7088: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x1e7088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1e708c:
    // 0x1e708c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1e7090:
    if (ctx->pc == 0x1E7090u) {
        ctx->pc = 0x1E7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E708Cu;
        // 0x1e7090: 0x52043  sra         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7094u;
        goto label_1e7094;
    }
    ctx->pc = 0x1E708Cu;
    {
        const bool branch_taken_0x1e708c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1E7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E708Cu;
        // 0x1e7090: 0x52043  sra         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e708c) {
            ctx->pc = 0x1E709Cu;
            goto label_1e709c;
        }
    }
    ctx->pc = 0x1E7094u;
label_1e7094:
    // 0x1e7094: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1e7094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1e7098:
    // 0x1e7098: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1e7098u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_1e709c:
    // 0x1e709c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1e709cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e70a0:
    // 0x1e70a0: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1e70a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e70a4:
    // 0x1e70a4: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1e70a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
label_1e70a8:
    // 0x1e70a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e70a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e70ac:
    // 0x1e70ac: 0x34a9851f  ori         $t1, $a1, 0x851F
    ctx->pc = 0x1e70acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
label_1e70b0:
    // 0x1e70b0: 0x647c2  srl         $t0, $a2, 31
    ctx->pc = 0x1e70b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1e70b4:
    // 0x1e70b4: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x1e70b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e70b8:
    // 0x1e70b8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e70b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e70bc:
    // 0x1e70bc: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x1e70bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1e70c0:
    // 0x1e70c0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1e70c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1e70c4:
    // 0x1e70c4: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x1e70c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1e70c8:
    // 0x1e70c8: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x1e70c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_1e70cc:
    // 0x1e70cc: 0xa6470090  sh          $a3, 0x90($s2)
    ctx->pc = 0x1e70ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 7));
label_1e70d0:
    // 0x1e70d0: 0x3810  mfhi        $a3
    ctx->pc = 0x1e70d0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_1e70d4:
    // 0x1e70d4: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x1e70d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e70d8:
    // 0x1e70d8: 0x1220018  mult        $zero, $t1, $v0
    ctx->pc = 0x1e70d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e70dc:
    // 0x1e70dc: 0x71143  sra         $v0, $a3, 5
    ctx->pc = 0x1e70dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 5));
label_1e70e0:
    // 0x1e70e0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1e70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1e70e4:
    // 0x1e70e4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1e70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_1e70e8:
    // 0x1e70e8: 0x1421023  subu        $v0, $t2, $v0
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_1e70ec:
    // 0x1e70ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e70f0:
    // 0x1e70f0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1e70f4:
    // 0x1e70f4: 0xa6420092  sh          $v0, 0x92($s2)
    ctx->pc = 0x1e70f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 2));
label_1e70f8:
    // 0x1e70f8: 0x84670004  lh          $a3, 0x4($v1)
    ctx->pc = 0x1e70f8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1e70fc:
    // 0x1e70fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1e70fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e7100:
    // 0x1e7100: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e7100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e7104:
    // 0x1e7104: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e7104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e7108:
    // 0x1e7108: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1e7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1e710c:
    // 0x1e710c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1e710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e7110:
    // 0x1e7110: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e7110u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e7114:
    // 0x1e7114: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1e7114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1e7118:
    // 0x1e7118: 0xa64400a0  sh          $a0, 0xA0($s2)
    ctx->pc = 0x1e7118u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 160), (uint16_t)GPR_U32(ctx, 4));
label_1e711c:
    // 0x1e711c: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1e711cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e7120:
    // 0x1e7120: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e7120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e7124:
    // 0x1e7124: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1e7124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1e7128:
    // 0x1e7128: 0xa64300a2  sh          $v1, 0xA2($s2)
    ctx->pc = 0x1e7128u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 162), (uint16_t)GPR_U32(ctx, 3));
label_1e712c:
    // 0x1e712c: 0x16250014  bne         $s1, $a1, . + 4 + (0x14 << 2)
label_1e7130:
    if (ctx->pc == 0x1E7130u) {
        ctx->pc = 0x1E7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E712Cu;
        // 0x1e7130: 0xa2420083  sb          $v0, 0x83($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 131), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7134u;
        goto label_1e7134;
    }
    ctx->pc = 0x1E712Cu;
    {
        const bool branch_taken_0x1e712c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E712Cu;
        // 0x1e7130: 0xa2420083  sb          $v0, 0x83($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 131), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e712c) {
            ctx->pc = 0x1E7180u;
            goto label_1e7180;
        }
    }
    ctx->pc = 0x1E7134u;
label_1e7134:
    // 0x1e7134: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e7134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e7138:
    // 0x1e7138: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e713c:
    // 0x1e713c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1e7140:
    if (ctx->pc == 0x1E7140u) {
        ctx->pc = 0x1E7144u;
        goto label_1e7144;
    }
    ctx->pc = 0x1E713Cu;
    {
        const bool branch_taken_0x1e713c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e713c) {
            ctx->pc = 0x1E7164u;
            goto label_1e7164;
        }
    }
    ctx->pc = 0x1E7144u;
label_1e7144:
    // 0x1e7144: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1e7144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1e7148:
    // 0x1e7148: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
label_1e714c:
    if (ctx->pc == 0x1E714Cu) {
        ctx->pc = 0x1E7150u;
        goto label_1e7150;
    }
    ctx->pc = 0x1E7148u;
    {
        const bool branch_taken_0x1e7148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e7148) {
            ctx->pc = 0x1E7164u;
            goto label_1e7164;
        }
    }
    ctx->pc = 0x1E7150u;
label_1e7150:
    // 0x1e7150: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e7150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e7154:
    // 0x1e7154: 0xc070ea8  jal         func_1C3AA0
label_1e7158:
    if (ctx->pc == 0x1E7158u) {
        ctx->pc = 0x1E7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7154u;
        // 0x1e7158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E715Cu;
        goto label_1e715c;
    }
    ctx->pc = 0x1E7154u;
    SET_GPR_U32(ctx, 31, 0x1E715Cu);
    ctx->pc = 0x1E7158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7154u;
    // 0x1e7158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E715Cu;
label_1e715c:
    // 0x1e715c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e7160:
    if (ctx->pc == 0x1E7160u) {
        ctx->pc = 0x1E7164u;
        goto label_1e7164;
    }
    ctx->pc = 0x1E715Cu;
    {
        const bool branch_taken_0x1e715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e715c) {
            ctx->pc = 0x1E71D0u;
            goto label_1e71d0;
        }
    }
    ctx->pc = 0x1E7164u;
label_1e7164:
    // 0x1e7164: 0x0  nop
    ctx->pc = 0x1e7164u;
    // NOP
label_1e7168:
    // 0x1e7168: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e7168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e716c:
    // 0x1e716c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e7170:
    // 0x1e7170: 0xc070ea8  jal         func_1C3AA0
label_1e7174:
    if (ctx->pc == 0x1E7174u) {
        ctx->pc = 0x1E7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7170u;
        // 0x1e7174: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7178u;
        goto label_1e7178;
    }
    ctx->pc = 0x1E7170u;
    SET_GPR_U32(ctx, 31, 0x1E7178u);
    ctx->pc = 0x1E7174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7170u;
    // 0x1e7174: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E7178u;
label_1e7178:
    // 0x1e7178: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e717c:
    if (ctx->pc == 0x1E717Cu) {
        ctx->pc = 0x1E7180u;
        goto label_1e7180;
    }
    ctx->pc = 0x1E7178u;
    {
        const bool branch_taken_0x1e7178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7178) {
            ctx->pc = 0x1E71D0u;
            goto label_1e71d0;
        }
    }
    ctx->pc = 0x1E7180u;
label_1e7180:
    // 0x1e7180: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e7180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e7184:
    // 0x1e7184: 0x16250012  bne         $s1, $a1, . + 4 + (0x12 << 2)
label_1e7188:
    if (ctx->pc == 0x1E7188u) {
        ctx->pc = 0x1E718Cu;
        goto label_1e718c;
    }
    ctx->pc = 0x1E7184u;
    {
        const bool branch_taken_0x1e7184 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e7184) {
            ctx->pc = 0x1E71D0u;
            goto label_1e71d0;
        }
    }
    ctx->pc = 0x1E718Cu;
label_1e718c:
    // 0x1e718c: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e7190:
    // 0x1e7190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7194:
    // 0x1e7194: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1e7198:
    if (ctx->pc == 0x1E7198u) {
        ctx->pc = 0x1E719Cu;
        goto label_1e719c;
    }
    ctx->pc = 0x1E7194u;
    {
        const bool branch_taken_0x1e7194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7194) {
            ctx->pc = 0x1E71BCu;
            goto label_1e71bc;
        }
    }
    ctx->pc = 0x1E719Cu;
label_1e719c:
    // 0x1e719c: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1e719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1e71a0:
    // 0x1e71a0: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
label_1e71a4:
    if (ctx->pc == 0x1E71A4u) {
        ctx->pc = 0x1E71A8u;
        goto label_1e71a8;
    }
    ctx->pc = 0x1E71A0u;
    {
        const bool branch_taken_0x1e71a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e71a0) {
            ctx->pc = 0x1E71BCu;
            goto label_1e71bc;
        }
    }
    ctx->pc = 0x1E71A8u;
label_1e71a8:
    // 0x1e71a8: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e71a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e71ac:
    // 0x1e71ac: 0xc070ea8  jal         func_1C3AA0
label_1e71b0:
    if (ctx->pc == 0x1E71B0u) {
        ctx->pc = 0x1E71B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71ACu;
        // 0x1e71b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E71B4u;
        goto label_1e71b4;
    }
    ctx->pc = 0x1E71ACu;
    SET_GPR_U32(ctx, 31, 0x1E71B4u);
    ctx->pc = 0x1E71B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71ACu;
    // 0x1e71b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E71B4u;
label_1e71b4:
    // 0x1e71b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e71b8:
    if (ctx->pc == 0x1E71B8u) {
        ctx->pc = 0x1E71BCu;
        goto label_1e71bc;
    }
    ctx->pc = 0x1E71B4u;
    {
        const bool branch_taken_0x1e71b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e71b4) {
            ctx->pc = 0x1E71D0u;
            goto label_1e71d0;
        }
    }
    ctx->pc = 0x1E71BCu;
label_1e71bc:
    // 0x1e71bc: 0x0  nop
    ctx->pc = 0x1e71bcu;
    // NOP
label_1e71c0:
    // 0x1e71c0: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e71c4:
    // 0x1e71c4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e71c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e71c8:
    // 0x1e71c8: 0xc070ea8  jal         func_1C3AA0
label_1e71cc:
    if (ctx->pc == 0x1E71CCu) {
        ctx->pc = 0x1E71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71C8u;
        // 0x1e71cc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E71D0u;
        goto label_1e71d0;
    }
    ctx->pc = 0x1E71C8u;
    SET_GPR_U32(ctx, 31, 0x1E71D0u);
    ctx->pc = 0x1E71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E71C8u;
    // 0x1e71cc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E71D0u;
label_1e71d0:
    // 0x1e71d0: 0x8f828e80  lw          $v0, -0x7180($gp)
    ctx->pc = 0x1e71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e71d4:
    // 0x1e71d4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_1e71d8:
    if (ctx->pc == 0x1E71D8u) {
        ctx->pc = 0x1E71DCu;
        goto label_1e71dc;
    }
    ctx->pc = 0x1E71D4u;
    {
        const bool branch_taken_0x1e71d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e71d4) {
            ctx->pc = 0x1E7268u;
            goto label_1e7268;
        }
    }
    ctx->pc = 0x1E71DCu;
label_1e71dc:
    // 0x1e71dc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1e71dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1e71e0:
    // 0x1e71e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e71e4:
    // 0x1e71e4: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x1e71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
label_1e71e8:
    // 0x1e71e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e71e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e71ec:
    // 0x1e71ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e71f0:
    // 0x1e71f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e71f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e71f4:
    // 0x1e71f4: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
label_1e71f8:
    if (ctx->pc == 0x1E71F8u) {
        ctx->pc = 0x1E71FCu;
        goto label_1e71fc;
    }
    ctx->pc = 0x1E71F4u;
    {
        const bool branch_taken_0x1e71f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e71f4) {
            ctx->pc = 0x1E7228u;
            goto label_1e7228;
        }
    }
    ctx->pc = 0x1E71FCu;
label_1e71fc:
    // 0x1e71fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7200:
    // 0x1e7200: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_1e7204:
    if (ctx->pc == 0x1E7204u) {
        ctx->pc = 0x1E7208u;
        goto label_1e7208;
    }
    ctx->pc = 0x1E7200u;
    {
        const bool branch_taken_0x1e7200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e7200) {
            ctx->pc = 0x1E7220u;
            goto label_1e7220;
        }
    }
    ctx->pc = 0x1E7208u;
label_1e7208:
    // 0x1e7208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e720c:
    if (ctx->pc == 0x1E720Cu) {
        ctx->pc = 0x1E7210u;
        goto label_1e7210;
    }
    ctx->pc = 0x1E7208u;
    {
        const bool branch_taken_0x1e7208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7208) {
            ctx->pc = 0x1E7218u;
            goto label_1e7218;
        }
    }
    ctx->pc = 0x1E7210u;
label_1e7210:
    // 0x1e7210: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e7214:
    if (ctx->pc == 0x1E7214u) {
        ctx->pc = 0x1E7218u;
        goto label_1e7218;
    }
    ctx->pc = 0x1E7210u;
    {
        const bool branch_taken_0x1e7210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7210) {
            ctx->pc = 0x1E7230u;
            goto label_1e7230;
        }
    }
    ctx->pc = 0x1E7218u;
label_1e7218:
    // 0x1e7218: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e721c:
    if (ctx->pc == 0x1E721Cu) {
        ctx->pc = 0x1E721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7218u;
        // 0x1e721c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7220u;
        goto label_1e7220;
    }
    ctx->pc = 0x1E7218u;
    {
        const bool branch_taken_0x1e7218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7218u;
        // 0x1e721c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7218) {
            ctx->pc = 0x1E7234u;
            goto label_1e7234;
        }
    }
    ctx->pc = 0x1E7220u;
label_1e7220:
    // 0x1e7220: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e7224:
    if (ctx->pc == 0x1E7224u) {
        ctx->pc = 0x1E7228u;
        goto label_1e7228;
    }
    ctx->pc = 0x1E7220u;
    {
        const bool branch_taken_0x1e7220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7220) {
            ctx->pc = 0x1E7234u;
            goto label_1e7234;
        }
    }
    ctx->pc = 0x1E7228u;
label_1e7228:
    // 0x1e7228: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e722c:
    if (ctx->pc == 0x1E722Cu) {
        ctx->pc = 0x1E7230u;
        goto label_1e7230;
    }
    ctx->pc = 0x1E7228u;
    {
        const bool branch_taken_0x1e7228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7228) {
            ctx->pc = 0x1E7234u;
            goto label_1e7234;
        }
    }
    ctx->pc = 0x1E7230u;
label_1e7230:
    // 0x1e7230: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e7230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e7234:
    // 0x1e7234: 0x0  nop
    ctx->pc = 0x1e7234u;
    // NOP
label_1e7238:
    // 0x1e7238: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e7238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e723c:
    // 0x1e723c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e723cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e7240:
    // 0x1e7240: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1e7240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
label_1e7244:
    // 0x1e7244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7248:
    // 0x1e7248: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e7248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e724c:
    // 0x1e724c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e7250:
    if (ctx->pc == 0x1E7250u) {
        ctx->pc = 0x1E7254u;
        goto label_1e7254;
    }
    ctx->pc = 0x1E724Cu;
    {
        const bool branch_taken_0x1e724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e724c) {
            ctx->pc = 0x1E7268u;
            goto label_1e7268;
        }
    }
    ctx->pc = 0x1E7254u;
label_1e7254:
    // 0x1e7254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7258:
    // 0x1e7258: 0xc070e2c  jal         func_1C38B0
label_1e725c:
    if (ctx->pc == 0x1E725Cu) {
        ctx->pc = 0x1E725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7258u;
        // 0x1e725c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7260u;
        goto label_1e7260;
    }
    ctx->pc = 0x1E7258u;
    SET_GPR_U32(ctx, 31, 0x1E7260u);
    ctx->pc = 0x1E725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7258u;
    // 0x1e725c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1E7260u;
label_1e7260:
    // 0x1e7260: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e7264:
    if (ctx->pc == 0x1E7264u) {
        ctx->pc = 0x1E7268u;
        goto label_1e7268;
    }
    ctx->pc = 0x1E7260u;
    {
        const bool branch_taken_0x1e7260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7260) {
            ctx->pc = 0x1E7274u;
            goto label_1e7274;
        }
    }
    ctx->pc = 0x1E7268u;
label_1e7268:
    // 0x1e7268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e726c:
    // 0x1e726c: 0xc070e2c  jal         func_1C38B0
label_1e7270:
    if (ctx->pc == 0x1E7270u) {
        ctx->pc = 0x1E7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E726Cu;
        // 0x1e7270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7274u;
        goto label_1e7274;
    }
    ctx->pc = 0x1E726Cu;
    SET_GPR_U32(ctx, 31, 0x1E7274u);
    ctx->pc = 0x1E7270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E726Cu;
    // 0x1e7270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1E7274u;
label_1e7274:
    // 0x1e7274: 0x0  nop
    ctx->pc = 0x1e7274u;
    // NOP
label_1e7278:
    // 0x1e7278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e7278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e727c:
    // 0x1e727c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e7280:
    // 0x1e7280: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e7280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e7284:
    // 0x1e7284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e7284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7288:
    // 0x1e7288: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e7288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e728c:
    // 0x1e728c: 0xc066c72  jal         func_19B1C8
label_1e7290:
    if (ctx->pc == 0x1E7290u) {
        ctx->pc = 0x1E7290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E728Cu;
        // 0x1e7290: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7294u;
        goto label_1e7294;
    }
    ctx->pc = 0x1E728Cu;
    SET_GPR_U32(ctx, 31, 0x1E7294u);
    ctx->pc = 0x1E7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E728Cu;
    // 0x1e7290: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E728Cu, 0x1E7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7294u;
label_1e7294:
    // 0x1e7294: 0x0  nop
    ctx->pc = 0x1e7294u;
    // NOP
label_1e7298:
    // 0x1e7298: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1e7298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e729c:
    // 0x1e729c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1e729cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1e72a0:
    // 0x1e72a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e72a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e72a4:
    // 0x1e72a4: 0x0  nop
    ctx->pc = 0x1e72a4u;
    // NOP
label_1e72a8:
    // 0x1e72a8: 0x8f838e9c  lw          $v1, -0x7164($gp)
    ctx->pc = 0x1e72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e72ac:
    // 0x1e72ac: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1e72acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e72b0:
    // 0x1e72b0: 0x1460ff51  bnez        $v1, . + 4 + (-0xAF << 2)
label_1e72b4:
    if (ctx->pc == 0x1E72B4u) {
        ctx->pc = 0x1E72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72B0u;
        // 0x1e72b4: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E72B8u;
        goto label_1e72b8;
    }
    ctx->pc = 0x1E72B0u;
    {
        const bool branch_taken_0x1e72b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72B0u;
        // 0x1e72b4: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e72b0) {
            ctx->pc = 0x1E6FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6ff8;
        }
    }
    ctx->pc = 0x1E72B8u;
label_1e72b8:
    // 0x1e72b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e72b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e72bc:
    // 0x1e72bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e72bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e72c0:
    // 0x1e72c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e72c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e72c4:
    // 0x1e72c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e72c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e72c8:
    // 0x1e72c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e72c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e72cc:
    // 0x1e72cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e72ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e72d0:
    // 0x1e72d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e72d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e72d4:
    // 0x1e72d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e72d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e72d8:
    // 0x1e72d8: 0x3e00008  jr          $ra
label_1e72dc:
    if (ctx->pc == 0x1E72DCu) {
        ctx->pc = 0x1E72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72D8u;
        // 0x1e72dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E72E0u;
        goto label_1e72e0;
    }
    ctx->pc = 0x1E72D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E72D8u;
        // 0x1e72dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E72D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E72E0u;
label_1e72e0:
    // 0x1e72e0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x1e72e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
label_1e72e4:
    // 0x1e72e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e72e8:
    // 0x1e72e8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e72e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e72ec:
    // 0x1e72ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e72ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1e72f0:
    // 0x1e72f0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e72f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1e72f4:
    // 0x1e72f4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1e72f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e72f8:
    // 0x1e72f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e72f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1e72fc:
    // 0x1e72fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e72fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e7300:
    // 0x1e7300: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e7300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1e7304:
    // 0x1e7304: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e7304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e7308:
    // 0x1e7308: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e730c:
    // 0x1e730c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e730cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e7310:
    // 0x1e7310: 0x8f868e9c  lw          $a2, -0x7164($gp)
    ctx->pc = 0x1e7310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e7314:
    // 0x1e7314: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x1e7314u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1e7318:
    // 0x1e7318: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1e7318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e731c:
    // 0x1e731c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1e731cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e7320:
    // 0x1e7320: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e7320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e7324:
    // 0x1e7324: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e7324u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e7328:
    // 0x1e7328: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e7328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e732c:
    // 0x1e732c: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x1e732cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e7330:
    // 0x1e7330: 0x0  nop
    ctx->pc = 0x1e7330u;
    // NOP
label_1e7334:
    // 0x1e7334: 0x0  nop
    ctx->pc = 0x1e7334u;
    // NOP
label_1e7338:
    // 0x1e7338: 0x1812  mflo        $v1
    ctx->pc = 0x1e7338u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1e733c:
    // 0x1e733c: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
label_1e7340:
    if (ctx->pc == 0x1E7340u) {
        ctx->pc = 0x1E7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E733Cu;
        // 0x1e7340: 0x2471005a  addiu       $s1, $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7344u;
        goto label_1e7344;
    }
    ctx->pc = 0x1E733Cu;
    {
        const bool branch_taken_0x1e733c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E733Cu;
        // 0x1e7340: 0x2471005a  addiu       $s1, $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e733c) {
            ctx->pc = 0x1E734Cu;
            goto label_1e734c;
        }
    }
    ctx->pc = 0x1E7344u;
label_1e7344:
    // 0x1e7344: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e7348:
    if (ctx->pc == 0x1E7348u) {
        ctx->pc = 0x1E7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7344u;
        // 0x1e7348: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E734Cu;
        goto label_1e734c;
    }
    ctx->pc = 0x1E7344u;
    {
        const bool branch_taken_0x1e7344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7344u;
        // 0x1e7348: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7344) {
            ctx->pc = 0x1E7364u;
            { ctx->pc = 0x1e7364; return; }
        }
    }
    ctx->pc = 0x1E734Cu;
label_1e734c:
    // 0x1e734c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7350:
    // 0x1e7350: 0x15020005  bne         $t0, $v0, . + 4 + (0x5 << 2)
label_1e7354:
    if (ctx->pc == 0x1E7354u) {
        ctx->pc = 0x1E7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7350u;
        // 0x1e7354: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7358u;
        { ctx->pc = 0x1e7358; return; }
    }
    ctx->pc = 0x1E7350u;
    {
        const bool branch_taken_0x1e7350 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7350u;
        // 0x1e7354: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7350) {
            ctx->pc = 0x1E7368u;
            { ctx->pc = 0x1e7368; return; }
        }
    }
    ctx->pc = 0x1E7358u;
    ctx->pc = 0x1e7358u;
    return;
}

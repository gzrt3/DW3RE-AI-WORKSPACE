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


void FUN_001e9120_part29(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f6be0u: goto label_1f6be0;
        case 0x1f6be4u: goto label_1f6be4;
        case 0x1f6be8u: goto label_1f6be8;
        case 0x1f6becu: goto label_1f6bec;
        case 0x1f6bf0u: goto label_1f6bf0;
        case 0x1f6bf4u: goto label_1f6bf4;
        case 0x1f6bf8u: goto label_1f6bf8;
        case 0x1f6bfcu: goto label_1f6bfc;
        case 0x1f6c00u: goto label_1f6c00;
        case 0x1f6c04u: goto label_1f6c04;
        case 0x1f6c08u: goto label_1f6c08;
        case 0x1f6c0cu: goto label_1f6c0c;
        case 0x1f6c10u: goto label_1f6c10;
        case 0x1f6c14u: goto label_1f6c14;
        case 0x1f6c18u: goto label_1f6c18;
        case 0x1f6c1cu: goto label_1f6c1c;
        case 0x1f6c20u: goto label_1f6c20;
        case 0x1f6c24u: goto label_1f6c24;
        case 0x1f6c28u: goto label_1f6c28;
        case 0x1f6c2cu: goto label_1f6c2c;
        case 0x1f6c30u: goto label_1f6c30;
        case 0x1f6c34u: goto label_1f6c34;
        case 0x1f6c38u: goto label_1f6c38;
        case 0x1f6c3cu: goto label_1f6c3c;
        case 0x1f6c40u: goto label_1f6c40;
        case 0x1f6c44u: goto label_1f6c44;
        case 0x1f6c48u: goto label_1f6c48;
        case 0x1f6c4cu: goto label_1f6c4c;
        case 0x1f6c50u: goto label_1f6c50;
        case 0x1f6c54u: goto label_1f6c54;
        case 0x1f6c58u: goto label_1f6c58;
        case 0x1f6c5cu: goto label_1f6c5c;
        case 0x1f6c60u: goto label_1f6c60;
        case 0x1f6c64u: goto label_1f6c64;
        case 0x1f6c68u: goto label_1f6c68;
        case 0x1f6c6cu: goto label_1f6c6c;
        case 0x1f6c70u: goto label_1f6c70;
        case 0x1f6c74u: goto label_1f6c74;
        case 0x1f6c78u: goto label_1f6c78;
        case 0x1f6c7cu: goto label_1f6c7c;
        case 0x1f6c80u: goto label_1f6c80;
        case 0x1f6c84u: goto label_1f6c84;
        case 0x1f6c88u: goto label_1f6c88;
        case 0x1f6c8cu: goto label_1f6c8c;
        case 0x1f6c90u: goto label_1f6c90;
        case 0x1f6c94u: goto label_1f6c94;
        case 0x1f6c98u: goto label_1f6c98;
        case 0x1f6c9cu: goto label_1f6c9c;
        case 0x1f6ca0u: goto label_1f6ca0;
        case 0x1f6ca4u: goto label_1f6ca4;
        case 0x1f6ca8u: goto label_1f6ca8;
        case 0x1f6cacu: goto label_1f6cac;
        case 0x1f6cb0u: goto label_1f6cb0;
        case 0x1f6cb4u: goto label_1f6cb4;
        case 0x1f6cb8u: goto label_1f6cb8;
        case 0x1f6cbcu: goto label_1f6cbc;
        case 0x1f6cc0u: goto label_1f6cc0;
        case 0x1f6cc4u: goto label_1f6cc4;
        case 0x1f6cc8u: goto label_1f6cc8;
        case 0x1f6cccu: goto label_1f6ccc;
        case 0x1f6cd0u: goto label_1f6cd0;
        case 0x1f6cd4u: goto label_1f6cd4;
        case 0x1f6cd8u: goto label_1f6cd8;
        case 0x1f6cdcu: goto label_1f6cdc;
        case 0x1f6ce0u: goto label_1f6ce0;
        case 0x1f6ce4u: goto label_1f6ce4;
        case 0x1f6ce8u: goto label_1f6ce8;
        case 0x1f6cecu: goto label_1f6cec;
        case 0x1f6cf0u: goto label_1f6cf0;
        case 0x1f6cf4u: goto label_1f6cf4;
        case 0x1f6cf8u: goto label_1f6cf8;
        case 0x1f6cfcu: goto label_1f6cfc;
        case 0x1f6d00u: goto label_1f6d00;
        case 0x1f6d04u: goto label_1f6d04;
        case 0x1f6d08u: goto label_1f6d08;
        case 0x1f6d0cu: goto label_1f6d0c;
        case 0x1f6d10u: goto label_1f6d10;
        case 0x1f6d14u: goto label_1f6d14;
        case 0x1f6d18u: goto label_1f6d18;
        case 0x1f6d1cu: goto label_1f6d1c;
        case 0x1f6d20u: goto label_1f6d20;
        case 0x1f6d24u: goto label_1f6d24;
        case 0x1f6d28u: goto label_1f6d28;
        case 0x1f6d2cu: goto label_1f6d2c;
        case 0x1f6d30u: goto label_1f6d30;
        case 0x1f6d34u: goto label_1f6d34;
        case 0x1f6d38u: goto label_1f6d38;
        case 0x1f6d3cu: goto label_1f6d3c;
        case 0x1f6d40u: goto label_1f6d40;
        case 0x1f6d44u: goto label_1f6d44;
        case 0x1f6d48u: goto label_1f6d48;
        case 0x1f6d4cu: goto label_1f6d4c;
        case 0x1f6d50u: goto label_1f6d50;
        case 0x1f6d54u: goto label_1f6d54;
        case 0x1f6d58u: goto label_1f6d58;
        case 0x1f6d5cu: goto label_1f6d5c;
        case 0x1f6d60u: goto label_1f6d60;
        case 0x1f6d64u: goto label_1f6d64;
        case 0x1f6d68u: goto label_1f6d68;
        case 0x1f6d6cu: goto label_1f6d6c;
        case 0x1f6d70u: goto label_1f6d70;
        case 0x1f6d74u: goto label_1f6d74;
        case 0x1f6d78u: goto label_1f6d78;
        case 0x1f6d7cu: goto label_1f6d7c;
        case 0x1f6d80u: goto label_1f6d80;
        case 0x1f6d84u: goto label_1f6d84;
        case 0x1f6d88u: goto label_1f6d88;
        case 0x1f6d8cu: goto label_1f6d8c;
        case 0x1f6d90u: goto label_1f6d90;
        case 0x1f6d94u: goto label_1f6d94;
        case 0x1f6d98u: goto label_1f6d98;
        case 0x1f6d9cu: goto label_1f6d9c;
        case 0x1f6da0u: goto label_1f6da0;
        case 0x1f6da4u: goto label_1f6da4;
        case 0x1f6da8u: goto label_1f6da8;
        case 0x1f6dacu: goto label_1f6dac;
        case 0x1f6db0u: goto label_1f6db0;
        case 0x1f6db4u: goto label_1f6db4;
        case 0x1f6db8u: goto label_1f6db8;
        case 0x1f6dbcu: goto label_1f6dbc;
        case 0x1f6dc0u: goto label_1f6dc0;
        case 0x1f6dc4u: goto label_1f6dc4;
        case 0x1f6dc8u: goto label_1f6dc8;
        case 0x1f6dccu: goto label_1f6dcc;
        case 0x1f6dd0u: goto label_1f6dd0;
        case 0x1f6dd4u: goto label_1f6dd4;
        case 0x1f6dd8u: goto label_1f6dd8;
        case 0x1f6ddcu: goto label_1f6ddc;
        case 0x1f6de0u: goto label_1f6de0;
        case 0x1f6de4u: goto label_1f6de4;
        case 0x1f6de8u: goto label_1f6de8;
        case 0x1f6decu: goto label_1f6dec;
        case 0x1f6df0u: goto label_1f6df0;
        case 0x1f6df4u: goto label_1f6df4;
        case 0x1f6df8u: goto label_1f6df8;
        case 0x1f6dfcu: goto label_1f6dfc;
        case 0x1f6e00u: goto label_1f6e00;
        case 0x1f6e04u: goto label_1f6e04;
        case 0x1f6e08u: goto label_1f6e08;
        case 0x1f6e0cu: goto label_1f6e0c;
        case 0x1f6e10u: goto label_1f6e10;
        case 0x1f6e14u: goto label_1f6e14;
        case 0x1f6e18u: goto label_1f6e18;
        case 0x1f6e1cu: goto label_1f6e1c;
        case 0x1f6e20u: goto label_1f6e20;
        case 0x1f6e24u: goto label_1f6e24;
        case 0x1f6e28u: goto label_1f6e28;
        case 0x1f6e2cu: goto label_1f6e2c;
        case 0x1f6e30u: goto label_1f6e30;
        case 0x1f6e34u: goto label_1f6e34;
        case 0x1f6e38u: goto label_1f6e38;
        case 0x1f6e3cu: goto label_1f6e3c;
        case 0x1f6e40u: goto label_1f6e40;
        case 0x1f6e44u: goto label_1f6e44;
        case 0x1f6e48u: goto label_1f6e48;
        case 0x1f6e4cu: goto label_1f6e4c;
        case 0x1f6e50u: goto label_1f6e50;
        case 0x1f6e54u: goto label_1f6e54;
        case 0x1f6e58u: goto label_1f6e58;
        case 0x1f6e5cu: goto label_1f6e5c;
        case 0x1f6e60u: goto label_1f6e60;
        case 0x1f6e64u: goto label_1f6e64;
        case 0x1f6e68u: goto label_1f6e68;
        case 0x1f6e6cu: goto label_1f6e6c;
        case 0x1f6e70u: goto label_1f6e70;
        case 0x1f6e74u: goto label_1f6e74;
        case 0x1f6e78u: goto label_1f6e78;
        case 0x1f6e7cu: goto label_1f6e7c;
        case 0x1f6e80u: goto label_1f6e80;
        case 0x1f6e84u: goto label_1f6e84;
        case 0x1f6e88u: goto label_1f6e88;
        case 0x1f6e8cu: goto label_1f6e8c;
        case 0x1f6e90u: goto label_1f6e90;
        case 0x1f6e94u: goto label_1f6e94;
        case 0x1f6e98u: goto label_1f6e98;
        case 0x1f6e9cu: goto label_1f6e9c;
        case 0x1f6ea0u: goto label_1f6ea0;
        case 0x1f6ea4u: goto label_1f6ea4;
        case 0x1f6ea8u: goto label_1f6ea8;
        case 0x1f6eacu: goto label_1f6eac;
        case 0x1f6eb0u: goto label_1f6eb0;
        case 0x1f6eb4u: goto label_1f6eb4;
        case 0x1f6eb8u: goto label_1f6eb8;
        case 0x1f6ebcu: goto label_1f6ebc;
        case 0x1f6ec0u: goto label_1f6ec0;
        case 0x1f6ec4u: goto label_1f6ec4;
        case 0x1f6ec8u: goto label_1f6ec8;
        case 0x1f6eccu: goto label_1f6ecc;
        case 0x1f6ed0u: goto label_1f6ed0;
        case 0x1f6ed4u: goto label_1f6ed4;
        case 0x1f6ed8u: goto label_1f6ed8;
        case 0x1f6edcu: goto label_1f6edc;
        case 0x1f6ee0u: goto label_1f6ee0;
        case 0x1f6ee4u: goto label_1f6ee4;
        case 0x1f6ee8u: goto label_1f6ee8;
        case 0x1f6eecu: goto label_1f6eec;
        case 0x1f6ef0u: goto label_1f6ef0;
        case 0x1f6ef4u: goto label_1f6ef4;
        case 0x1f6ef8u: goto label_1f6ef8;
        case 0x1f6efcu: goto label_1f6efc;
        case 0x1f6f00u: goto label_1f6f00;
        case 0x1f6f04u: goto label_1f6f04;
        case 0x1f6f08u: goto label_1f6f08;
        case 0x1f6f0cu: goto label_1f6f0c;
        case 0x1f6f10u: goto label_1f6f10;
        case 0x1f6f14u: goto label_1f6f14;
        case 0x1f6f18u: goto label_1f6f18;
        case 0x1f6f1cu: goto label_1f6f1c;
        case 0x1f6f20u: goto label_1f6f20;
        case 0x1f6f24u: goto label_1f6f24;
        case 0x1f6f28u: goto label_1f6f28;
        case 0x1f6f2cu: goto label_1f6f2c;
        case 0x1f6f30u: goto label_1f6f30;
        case 0x1f6f34u: goto label_1f6f34;
        case 0x1f6f38u: goto label_1f6f38;
        case 0x1f6f3cu: goto label_1f6f3c;
        case 0x1f6f40u: goto label_1f6f40;
        case 0x1f6f44u: goto label_1f6f44;
        case 0x1f6f48u: goto label_1f6f48;
        case 0x1f6f4cu: goto label_1f6f4c;
        case 0x1f6f50u: goto label_1f6f50;
        case 0x1f6f54u: goto label_1f6f54;
        case 0x1f6f58u: goto label_1f6f58;
        case 0x1f6f5cu: goto label_1f6f5c;
        case 0x1f6f60u: goto label_1f6f60;
        case 0x1f6f64u: goto label_1f6f64;
        case 0x1f6f68u: goto label_1f6f68;
        case 0x1f6f6cu: goto label_1f6f6c;
        case 0x1f6f70u: goto label_1f6f70;
        case 0x1f6f74u: goto label_1f6f74;
        case 0x1f6f78u: goto label_1f6f78;
        case 0x1f6f7cu: goto label_1f6f7c;
        case 0x1f6f80u: goto label_1f6f80;
        case 0x1f6f84u: goto label_1f6f84;
        case 0x1f6f88u: goto label_1f6f88;
        case 0x1f6f8cu: goto label_1f6f8c;
        case 0x1f6f90u: goto label_1f6f90;
        case 0x1f6f94u: goto label_1f6f94;
        case 0x1f6f98u: goto label_1f6f98;
        case 0x1f6f9cu: goto label_1f6f9c;
        case 0x1f6fa0u: goto label_1f6fa0;
        case 0x1f6fa4u: goto label_1f6fa4;
        case 0x1f6fa8u: goto label_1f6fa8;
        case 0x1f6facu: goto label_1f6fac;
        case 0x1f6fb0u: goto label_1f6fb0;
        case 0x1f6fb4u: goto label_1f6fb4;
        case 0x1f6fb8u: goto label_1f6fb8;
        case 0x1f6fbcu: goto label_1f6fbc;
        case 0x1f6fc0u: goto label_1f6fc0;
        case 0x1f6fc4u: goto label_1f6fc4;
        case 0x1f6fc8u: goto label_1f6fc8;
        case 0x1f6fccu: goto label_1f6fcc;
        case 0x1f6fd0u: goto label_1f6fd0;
        case 0x1f6fd4u: goto label_1f6fd4;
        case 0x1f6fd8u: goto label_1f6fd8;
        case 0x1f6fdcu: goto label_1f6fdc;
        case 0x1f6fe0u: goto label_1f6fe0;
        case 0x1f6fe4u: goto label_1f6fe4;
        case 0x1f6fe8u: goto label_1f6fe8;
        case 0x1f6fecu: goto label_1f6fec;
        case 0x1f6ff0u: goto label_1f6ff0;
        case 0x1f6ff4u: goto label_1f6ff4;
        case 0x1f6ff8u: goto label_1f6ff8;
        case 0x1f6ffcu: goto label_1f6ffc;
        case 0x1f7000u: goto label_1f7000;
        case 0x1f7004u: goto label_1f7004;
        case 0x1f7008u: goto label_1f7008;
        case 0x1f700cu: goto label_1f700c;
        case 0x1f7010u: goto label_1f7010;
        case 0x1f7014u: goto label_1f7014;
        case 0x1f7018u: goto label_1f7018;
        case 0x1f701cu: goto label_1f701c;
        case 0x1f7020u: goto label_1f7020;
        case 0x1f7024u: goto label_1f7024;
        case 0x1f7028u: goto label_1f7028;
        case 0x1f702cu: goto label_1f702c;
        case 0x1f7030u: goto label_1f7030;
        case 0x1f7034u: goto label_1f7034;
        case 0x1f7038u: goto label_1f7038;
        case 0x1f703cu: goto label_1f703c;
        case 0x1f7040u: goto label_1f7040;
        case 0x1f7044u: goto label_1f7044;
        case 0x1f7048u: goto label_1f7048;
        case 0x1f704cu: goto label_1f704c;
        case 0x1f7050u: goto label_1f7050;
        case 0x1f7054u: goto label_1f7054;
        case 0x1f7058u: goto label_1f7058;
        case 0x1f705cu: goto label_1f705c;
        case 0x1f7060u: goto label_1f7060;
        case 0x1f7064u: goto label_1f7064;
        case 0x1f7068u: goto label_1f7068;
        case 0x1f706cu: goto label_1f706c;
        case 0x1f7070u: goto label_1f7070;
        case 0x1f7074u: goto label_1f7074;
        case 0x1f7078u: goto label_1f7078;
        case 0x1f707cu: goto label_1f707c;
        case 0x1f7080u: goto label_1f7080;
        case 0x1f7084u: goto label_1f7084;
        case 0x1f7088u: goto label_1f7088;
        case 0x1f708cu: goto label_1f708c;
        case 0x1f7090u: goto label_1f7090;
        case 0x1f7094u: goto label_1f7094;
        case 0x1f7098u: goto label_1f7098;
        case 0x1f709cu: goto label_1f709c;
        case 0x1f70a0u: goto label_1f70a0;
        case 0x1f70a4u: goto label_1f70a4;
        case 0x1f70a8u: goto label_1f70a8;
        case 0x1f70acu: goto label_1f70ac;
        case 0x1f70b0u: goto label_1f70b0;
        case 0x1f70b4u: goto label_1f70b4;
        case 0x1f70b8u: goto label_1f70b8;
        case 0x1f70bcu: goto label_1f70bc;
        case 0x1f70c0u: goto label_1f70c0;
        case 0x1f70c4u: goto label_1f70c4;
        case 0x1f70c8u: goto label_1f70c8;
        case 0x1f70ccu: goto label_1f70cc;
        case 0x1f70d0u: goto label_1f70d0;
        case 0x1f70d4u: goto label_1f70d4;
        case 0x1f70d8u: goto label_1f70d8;
        case 0x1f70dcu: goto label_1f70dc;
        case 0x1f70e0u: goto label_1f70e0;
        case 0x1f70e4u: goto label_1f70e4;
        case 0x1f70e8u: goto label_1f70e8;
        case 0x1f70ecu: goto label_1f70ec;
        case 0x1f70f0u: goto label_1f70f0;
        case 0x1f70f4u: goto label_1f70f4;
        case 0x1f70f8u: goto label_1f70f8;
        case 0x1f70fcu: goto label_1f70fc;
        case 0x1f7100u: goto label_1f7100;
        case 0x1f7104u: goto label_1f7104;
        case 0x1f7108u: goto label_1f7108;
        case 0x1f710cu: goto label_1f710c;
        case 0x1f7110u: goto label_1f7110;
        case 0x1f7114u: goto label_1f7114;
        case 0x1f7118u: goto label_1f7118;
        case 0x1f711cu: goto label_1f711c;
        case 0x1f7120u: goto label_1f7120;
        case 0x1f7124u: goto label_1f7124;
        case 0x1f7128u: goto label_1f7128;
        case 0x1f712cu: goto label_1f712c;
        case 0x1f7130u: goto label_1f7130;
        case 0x1f7134u: goto label_1f7134;
        case 0x1f7138u: goto label_1f7138;
        case 0x1f713cu: goto label_1f713c;
        case 0x1f7140u: goto label_1f7140;
        case 0x1f7144u: goto label_1f7144;
        case 0x1f7148u: goto label_1f7148;
        case 0x1f714cu: goto label_1f714c;
        case 0x1f7150u: goto label_1f7150;
        case 0x1f7154u: goto label_1f7154;
        case 0x1f7158u: goto label_1f7158;
        case 0x1f715cu: goto label_1f715c;
        case 0x1f7160u: goto label_1f7160;
        case 0x1f7164u: goto label_1f7164;
        case 0x1f7168u: goto label_1f7168;
        case 0x1f716cu: goto label_1f716c;
        case 0x1f7170u: goto label_1f7170;
        case 0x1f7174u: goto label_1f7174;
        case 0x1f7178u: goto label_1f7178;
        case 0x1f717cu: goto label_1f717c;
        case 0x1f7180u: goto label_1f7180;
        case 0x1f7184u: goto label_1f7184;
        case 0x1f7188u: goto label_1f7188;
        case 0x1f718cu: goto label_1f718c;
        case 0x1f7190u: goto label_1f7190;
        case 0x1f7194u: goto label_1f7194;
        case 0x1f7198u: goto label_1f7198;
        case 0x1f719cu: goto label_1f719c;
        case 0x1f71a0u: goto label_1f71a0;
        case 0x1f71a4u: goto label_1f71a4;
        case 0x1f71a8u: goto label_1f71a8;
        case 0x1f71acu: goto label_1f71ac;
        case 0x1f71b0u: goto label_1f71b0;
        case 0x1f71b4u: goto label_1f71b4;
        case 0x1f71b8u: goto label_1f71b8;
        case 0x1f71bcu: goto label_1f71bc;
        case 0x1f71c0u: goto label_1f71c0;
        case 0x1f71c4u: goto label_1f71c4;
        case 0x1f71c8u: goto label_1f71c8;
        case 0x1f71ccu: goto label_1f71cc;
        case 0x1f71d0u: goto label_1f71d0;
        case 0x1f71d4u: goto label_1f71d4;
        case 0x1f71d8u: goto label_1f71d8;
        case 0x1f71dcu: goto label_1f71dc;
        case 0x1f71e0u: goto label_1f71e0;
        case 0x1f71e4u: goto label_1f71e4;
        case 0x1f71e8u: goto label_1f71e8;
        case 0x1f71ecu: goto label_1f71ec;
        case 0x1f71f0u: goto label_1f71f0;
        case 0x1f71f4u: goto label_1f71f4;
        case 0x1f71f8u: goto label_1f71f8;
        case 0x1f71fcu: goto label_1f71fc;
        case 0x1f7200u: goto label_1f7200;
        case 0x1f7204u: goto label_1f7204;
        case 0x1f7208u: goto label_1f7208;
        case 0x1f720cu: goto label_1f720c;
        case 0x1f7210u: goto label_1f7210;
        case 0x1f7214u: goto label_1f7214;
        case 0x1f7218u: goto label_1f7218;
        case 0x1f721cu: goto label_1f721c;
        case 0x1f7220u: goto label_1f7220;
        case 0x1f7224u: goto label_1f7224;
        case 0x1f7228u: goto label_1f7228;
        case 0x1f722cu: goto label_1f722c;
        case 0x1f7230u: goto label_1f7230;
        case 0x1f7234u: goto label_1f7234;
        case 0x1f7238u: goto label_1f7238;
        case 0x1f723cu: goto label_1f723c;
        case 0x1f7240u: goto label_1f7240;
        case 0x1f7244u: goto label_1f7244;
        case 0x1f7248u: goto label_1f7248;
        case 0x1f724cu: goto label_1f724c;
        case 0x1f7250u: goto label_1f7250;
        case 0x1f7254u: goto label_1f7254;
        case 0x1f7258u: goto label_1f7258;
        case 0x1f725cu: goto label_1f725c;
        case 0x1f7260u: goto label_1f7260;
        case 0x1f7264u: goto label_1f7264;
        case 0x1f7268u: goto label_1f7268;
        case 0x1f726cu: goto label_1f726c;
        case 0x1f7270u: goto label_1f7270;
        case 0x1f7274u: goto label_1f7274;
        case 0x1f7278u: goto label_1f7278;
        case 0x1f727cu: goto label_1f727c;
        case 0x1f7280u: goto label_1f7280;
        case 0x1f7284u: goto label_1f7284;
        case 0x1f7288u: goto label_1f7288;
        case 0x1f728cu: goto label_1f728c;
        case 0x1f7290u: goto label_1f7290;
        case 0x1f7294u: goto label_1f7294;
        case 0x1f7298u: goto label_1f7298;
        case 0x1f729cu: goto label_1f729c;
        case 0x1f72a0u: goto label_1f72a0;
        case 0x1f72a4u: goto label_1f72a4;
        case 0x1f72a8u: goto label_1f72a8;
        case 0x1f72acu: goto label_1f72ac;
        case 0x1f72b0u: goto label_1f72b0;
        case 0x1f72b4u: goto label_1f72b4;
        case 0x1f72b8u: goto label_1f72b8;
        case 0x1f72bcu: goto label_1f72bc;
        case 0x1f72c0u: goto label_1f72c0;
        case 0x1f72c4u: goto label_1f72c4;
        case 0x1f72c8u: goto label_1f72c8;
        case 0x1f72ccu: goto label_1f72cc;
        case 0x1f72d0u: goto label_1f72d0;
        case 0x1f72d4u: goto label_1f72d4;
        case 0x1f72d8u: goto label_1f72d8;
        case 0x1f72dcu: goto label_1f72dc;
        case 0x1f72e0u: goto label_1f72e0;
        case 0x1f72e4u: goto label_1f72e4;
        case 0x1f72e8u: goto label_1f72e8;
        case 0x1f72ecu: goto label_1f72ec;
        case 0x1f72f0u: goto label_1f72f0;
        case 0x1f72f4u: goto label_1f72f4;
        case 0x1f72f8u: goto label_1f72f8;
        case 0x1f72fcu: goto label_1f72fc;
        case 0x1f7300u: goto label_1f7300;
        case 0x1f7304u: goto label_1f7304;
        case 0x1f7308u: goto label_1f7308;
        case 0x1f730cu: goto label_1f730c;
        case 0x1f7310u: goto label_1f7310;
        case 0x1f7314u: goto label_1f7314;
        case 0x1f7318u: goto label_1f7318;
        case 0x1f731cu: goto label_1f731c;
        case 0x1f7320u: goto label_1f7320;
        case 0x1f7324u: goto label_1f7324;
        case 0x1f7328u: goto label_1f7328;
        case 0x1f732cu: goto label_1f732c;
        case 0x1f7330u: goto label_1f7330;
        case 0x1f7334u: goto label_1f7334;
        case 0x1f7338u: goto label_1f7338;
        case 0x1f733cu: goto label_1f733c;
        case 0x1f7340u: goto label_1f7340;
        case 0x1f7344u: goto label_1f7344;
        case 0x1f7348u: goto label_1f7348;
        case 0x1f734cu: goto label_1f734c;
        case 0x1f7350u: goto label_1f7350;
        case 0x1f7354u: goto label_1f7354;
        case 0x1f7358u: goto label_1f7358;
        case 0x1f735cu: goto label_1f735c;
        case 0x1f7360u: goto label_1f7360;
        case 0x1f7364u: goto label_1f7364;
        case 0x1f7368u: goto label_1f7368;
        case 0x1f736cu: goto label_1f736c;
        case 0x1f7370u: goto label_1f7370;
        case 0x1f7374u: goto label_1f7374;
        case 0x1f7378u: goto label_1f7378;
        case 0x1f737cu: goto label_1f737c;
        case 0x1f7380u: goto label_1f7380;
        case 0x1f7384u: goto label_1f7384;
        case 0x1f7388u: goto label_1f7388;
        case 0x1f738cu: goto label_1f738c;
        case 0x1f7390u: goto label_1f7390;
        case 0x1f7394u: goto label_1f7394;
        case 0x1f7398u: goto label_1f7398;
        case 0x1f739cu: goto label_1f739c;
        case 0x1f73a0u: goto label_1f73a0;
        case 0x1f73a4u: goto label_1f73a4;
        case 0x1f73a8u: goto label_1f73a8;
        case 0x1f73acu: goto label_1f73ac;
        default: return;
    }

label_1f6be0:
    // 0x1f6be0: 0xa2a4009b  sb          $a0, 0x9B($s5)
    ctx->pc = 0x1f6be0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 155), (uint8_t)GPR_U32(ctx, 4));
label_1f6be4:
    // 0x1f6be4: 0xaea3009c  sw          $v1, 0x9C($s5)
    ctx->pc = 0x1f6be4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 3));
label_1f6be8:
    // 0x1f6be8: 0xa2a400b0  sb          $a0, 0xB0($s5)
    ctx->pc = 0x1f6be8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 176), (uint8_t)GPR_U32(ctx, 4));
label_1f6bec:
    // 0x1f6bec: 0xa2a400b1  sb          $a0, 0xB1($s5)
    ctx->pc = 0x1f6becu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 177), (uint8_t)GPR_U32(ctx, 4));
label_1f6bf0:
    // 0x1f6bf0: 0xa2a400b2  sb          $a0, 0xB2($s5)
    ctx->pc = 0x1f6bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 178), (uint8_t)GPR_U32(ctx, 4));
label_1f6bf4:
    // 0x1f6bf4: 0xa2a400b3  sb          $a0, 0xB3($s5)
    ctx->pc = 0x1f6bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 179), (uint8_t)GPR_U32(ctx, 4));
label_1f6bf8:
    // 0x1f6bf8: 0xaea300b4  sw          $v1, 0xB4($s5)
    ctx->pc = 0x1f6bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 3));
label_1f6bfc:
    // 0x1f6bfc: 0xa2a400c8  sb          $a0, 0xC8($s5)
    ctx->pc = 0x1f6bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 200), (uint8_t)GPR_U32(ctx, 4));
label_1f6c00:
    // 0x1f6c00: 0xa2a400c9  sb          $a0, 0xC9($s5)
    ctx->pc = 0x1f6c00u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 201), (uint8_t)GPR_U32(ctx, 4));
label_1f6c04:
    // 0x1f6c04: 0xa2a400ca  sb          $a0, 0xCA($s5)
    ctx->pc = 0x1f6c04u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 202), (uint8_t)GPR_U32(ctx, 4));
label_1f6c08:
    // 0x1f6c08: 0xa2a400cb  sb          $a0, 0xCB($s5)
    ctx->pc = 0x1f6c08u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 203), (uint8_t)GPR_U32(ctx, 4));
label_1f6c0c:
    // 0x1f6c0c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_1f6c10:
    if (ctx->pc == 0x1F6C10u) {
        ctx->pc = 0x1F6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C0Cu;
        // 0x1f6c10: 0xaea300cc  sw          $v1, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6C14u;
        goto label_1f6c14;
    }
    ctx->pc = 0x1F6C0Cu;
    {
        const bool branch_taken_0x1f6c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6C0Cu;
        // 0x1f6c10: 0xaea300cc  sw          $v1, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c0c) {
            ctx->pc = 0x1F6B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f6b68; return; }
        }
    }
    ctx->pc = 0x1F6C14u;
label_1f6c14:
    // 0x1f6c14: 0x24097600  addiu       $t1, $zero, 0x7600
    ctx->pc = 0x1f6c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30208));
label_1f6c18:
    // 0x1f6c18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6c1c:
    // 0x1f6c1c: 0x24087d00  addiu       $t0, $zero, 0x7D00
    ctx->pc = 0x1f6c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
label_1f6c20:
    // 0x1f6c20: 0xa6490090  sh          $t1, 0x90($s2)
    ctx->pc = 0x1f6c20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 9));
label_1f6c24:
    // 0x1f6c24: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1f6c24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f6c28:
    // 0x1f6c28: 0xa6480092  sh          $t0, 0x92($s2)
    ctx->pc = 0x1f6c28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 8));
label_1f6c2c:
    // 0x1f6c2c: 0x34078a00  ori         $a3, $zero, 0x8A00
    ctx->pc = 0x1f6c2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35328);
label_1f6c30:
    // 0x1f6c30: 0xae4a0094  sw          $t2, 0x94($s2)
    ctx->pc = 0x1f6c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 10));
label_1f6c34:
    // 0x1f6c34: 0xa64700a8  sh          $a3, 0xA8($s2)
    ctx->pc = 0x1f6c34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 168), (uint16_t)GPR_U32(ctx, 7));
label_1f6c38:
    // 0x1f6c38: 0x24067f00  addiu       $a2, $zero, 0x7F00
    ctx->pc = 0x1f6c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
label_1f6c3c:
    // 0x1f6c3c: 0xa64800aa  sh          $t0, 0xAA($s2)
    ctx->pc = 0x1f6c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 170), (uint16_t)GPR_U32(ctx, 8));
label_1f6c40:
    // 0x1f6c40: 0x24050608  addiu       $a1, $zero, 0x608
    ctx->pc = 0x1f6c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_1f6c44:
    // 0x1f6c44: 0xae4a00ac  sw          $t2, 0xAC($s2)
    ctx->pc = 0x1f6c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 10));
label_1f6c48:
    // 0x1f6c48: 0x24041a08  addiu       $a0, $zero, 0x1A08
    ctx->pc = 0x1f6c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6664));
label_1f6c4c:
    // 0x1f6c4c: 0xa64900c0  sh          $t1, 0xC0($s2)
    ctx->pc = 0x1f6c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 9));
label_1f6c50:
    // 0x1f6c50: 0x24030a08  addiu       $v1, $zero, 0xA08
    ctx->pc = 0x1f6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2568));
label_1f6c54:
    // 0x1f6c54: 0xa64600c2  sh          $a2, 0xC2($s2)
    ctx->pc = 0x1f6c54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 6));
label_1f6c58:
    // 0x1f6c58: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1f6c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6c5c:
    // 0x1f6c5c: 0xae4a00c4  sw          $t2, 0xC4($s2)
    ctx->pc = 0x1f6c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 10));
label_1f6c60:
    // 0x1f6c60: 0x26940840  addiu       $s4, $s4, 0x840
    ctx->pc = 0x1f6c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
label_1f6c64:
    // 0x1f6c64: 0xa64700d8  sh          $a3, 0xD8($s2)
    ctx->pc = 0x1f6c64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 216), (uint16_t)GPR_U32(ctx, 7));
label_1f6c68:
    // 0x1f6c68: 0xa64600da  sh          $a2, 0xDA($s2)
    ctx->pc = 0x1f6c68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 218), (uint16_t)GPR_U32(ctx, 6));
label_1f6c6c:
    // 0x1f6c6c: 0xae4a00dc  sw          $t2, 0xDC($s2)
    ctx->pc = 0x1f6c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 10));
label_1f6c70:
    // 0x1f6c70: 0xa6450088  sh          $a1, 0x88($s2)
    ctx->pc = 0x1f6c70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 5));
label_1f6c74:
    // 0x1f6c74: 0xa645008a  sh          $a1, 0x8A($s2)
    ctx->pc = 0x1f6c74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 138), (uint16_t)GPR_U32(ctx, 5));
label_1f6c78:
    // 0x1f6c78: 0xa64400a0  sh          $a0, 0xA0($s2)
    ctx->pc = 0x1f6c78u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 160), (uint16_t)GPR_U32(ctx, 4));
label_1f6c7c:
    // 0x1f6c7c: 0xa64500a2  sh          $a1, 0xA2($s2)
    ctx->pc = 0x1f6c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 162), (uint16_t)GPR_U32(ctx, 5));
label_1f6c80:
    // 0x1f6c80: 0xa64500b8  sh          $a1, 0xB8($s2)
    ctx->pc = 0x1f6c80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 184), (uint16_t)GPR_U32(ctx, 5));
label_1f6c84:
    // 0x1f6c84: 0xa64300ba  sh          $v1, 0xBA($s2)
    ctx->pc = 0x1f6c84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 186), (uint16_t)GPR_U32(ctx, 3));
label_1f6c88:
    // 0x1f6c88: 0xa64400d0  sh          $a0, 0xD0($s2)
    ctx->pc = 0x1f6c88u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 208), (uint16_t)GPR_U32(ctx, 4));
label_1f6c8c:
    // 0x1f6c8c: 0xa64300d2  sh          $v1, 0xD2($s2)
    ctx->pc = 0x1f6c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 210), (uint16_t)GPR_U32(ctx, 3));
label_1f6c90:
    // 0x1f6c90: 0xa6490190  sh          $t1, 0x190($s2)
    ctx->pc = 0x1f6c90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 400), (uint16_t)GPR_U32(ctx, 9));
label_1f6c94:
    // 0x1f6c94: 0xa6480192  sh          $t0, 0x192($s2)
    ctx->pc = 0x1f6c94u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 402), (uint16_t)GPR_U32(ctx, 8));
label_1f6c98:
    // 0x1f6c98: 0xae4a0194  sw          $t2, 0x194($s2)
    ctx->pc = 0x1f6c98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 10));
label_1f6c9c:
    // 0x1f6c9c: 0xa64701a8  sh          $a3, 0x1A8($s2)
    ctx->pc = 0x1f6c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 424), (uint16_t)GPR_U32(ctx, 7));
label_1f6ca0:
    // 0x1f6ca0: 0xa64801aa  sh          $t0, 0x1AA($s2)
    ctx->pc = 0x1f6ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 426), (uint16_t)GPR_U32(ctx, 8));
label_1f6ca4:
    // 0x1f6ca4: 0xae4a01ac  sw          $t2, 0x1AC($s2)
    ctx->pc = 0x1f6ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 428), GPR_U32(ctx, 10));
label_1f6ca8:
    // 0x1f6ca8: 0xa6450188  sh          $a1, 0x188($s2)
    ctx->pc = 0x1f6ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 392), (uint16_t)GPR_U32(ctx, 5));
label_1f6cac:
    // 0x1f6cac: 0xa645018a  sh          $a1, 0x18A($s2)
    ctx->pc = 0x1f6cacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 394), (uint16_t)GPR_U32(ctx, 5));
label_1f6cb0:
    // 0x1f6cb0: 0xa64401a0  sh          $a0, 0x1A0($s2)
    ctx->pc = 0x1f6cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 416), (uint16_t)GPR_U32(ctx, 4));
label_1f6cb4:
    // 0x1f6cb4: 0xa64501a2  sh          $a1, 0x1A2($s2)
    ctx->pc = 0x1f6cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 418), (uint16_t)GPR_U32(ctx, 5));
label_1f6cb8:
    // 0x1f6cb8: 0xa240016b  sb          $zero, 0x16B($s2)
    ctx->pc = 0x1f6cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 363), (uint8_t)GPR_U32(ctx, 0));
label_1f6cbc:
    // 0x1f6cbc: 0xa2400153  sb          $zero, 0x153($s2)
    ctx->pc = 0x1f6cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 339), (uint8_t)GPR_U32(ctx, 0));
label_1f6cc0:
    // 0x1f6cc0: 0xa6490248  sh          $t1, 0x248($s2)
    ctx->pc = 0x1f6cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 584), (uint16_t)GPR_U32(ctx, 9));
label_1f6cc4:
    // 0x1f6cc4: 0xa648024a  sh          $t0, 0x24A($s2)
    ctx->pc = 0x1f6cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 586), (uint16_t)GPR_U32(ctx, 8));
label_1f6cc8:
    // 0x1f6cc8: 0xae4a024c  sw          $t2, 0x24C($s2)
    ctx->pc = 0x1f6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 10));
label_1f6ccc:
    // 0x1f6ccc: 0xa6490278  sh          $t1, 0x278($s2)
    ctx->pc = 0x1f6cccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 632), (uint16_t)GPR_U32(ctx, 9));
label_1f6cd0:
    // 0x1f6cd0: 0xa646027a  sh          $a2, 0x27A($s2)
    ctx->pc = 0x1f6cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 634), (uint16_t)GPR_U32(ctx, 6));
label_1f6cd4:
    // 0x1f6cd4: 0xae4a027c  sw          $t2, 0x27C($s2)
    ctx->pc = 0x1f6cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 10));
label_1f6cd8:
    // 0x1f6cd8: 0xa6450240  sh          $a1, 0x240($s2)
    ctx->pc = 0x1f6cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 576), (uint16_t)GPR_U32(ctx, 5));
label_1f6cdc:
    // 0x1f6cdc: 0xa6450242  sh          $a1, 0x242($s2)
    ctx->pc = 0x1f6cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 578), (uint16_t)GPR_U32(ctx, 5));
label_1f6ce0:
    // 0x1f6ce0: 0xa6450270  sh          $a1, 0x270($s2)
    ctx->pc = 0x1f6ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 624), (uint16_t)GPR_U32(ctx, 5));
label_1f6ce4:
    // 0x1f6ce4: 0xa6430272  sh          $v1, 0x272($s2)
    ctx->pc = 0x1f6ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 626), (uint16_t)GPR_U32(ctx, 3));
label_1f6ce8:
    // 0x1f6ce8: 0xa2400253  sb          $zero, 0x253($s2)
    ctx->pc = 0x1f6ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 595), (uint8_t)GPR_U32(ctx, 0));
label_1f6cec:
    // 0x1f6cec: 0xa2400223  sb          $zero, 0x223($s2)
    ctx->pc = 0x1f6cecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 547), (uint8_t)GPR_U32(ctx, 0));
label_1f6cf0:
    // 0x1f6cf0: 0xa6490300  sh          $t1, 0x300($s2)
    ctx->pc = 0x1f6cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 768), (uint16_t)GPR_U32(ctx, 9));
label_1f6cf4:
    // 0x1f6cf4: 0xa6460302  sh          $a2, 0x302($s2)
    ctx->pc = 0x1f6cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 770), (uint16_t)GPR_U32(ctx, 6));
label_1f6cf8:
    // 0x1f6cf8: 0xae4a0304  sw          $t2, 0x304($s2)
    ctx->pc = 0x1f6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 10));
label_1f6cfc:
    // 0x1f6cfc: 0xa6470318  sh          $a3, 0x318($s2)
    ctx->pc = 0x1f6cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 792), (uint16_t)GPR_U32(ctx, 7));
label_1f6d00:
    // 0x1f6d00: 0xa646031a  sh          $a2, 0x31A($s2)
    ctx->pc = 0x1f6d00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 794), (uint16_t)GPR_U32(ctx, 6));
label_1f6d04:
    // 0x1f6d04: 0xae4a031c  sw          $t2, 0x31C($s2)
    ctx->pc = 0x1f6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 796), GPR_U32(ctx, 10));
label_1f6d08:
    // 0x1f6d08: 0xa64502f8  sh          $a1, 0x2F8($s2)
    ctx->pc = 0x1f6d08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 760), (uint16_t)GPR_U32(ctx, 5));
label_1f6d0c:
    // 0x1f6d0c: 0xa64302fa  sh          $v1, 0x2FA($s2)
    ctx->pc = 0x1f6d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 762), (uint16_t)GPR_U32(ctx, 3));
label_1f6d10:
    // 0x1f6d10: 0xa6440310  sh          $a0, 0x310($s2)
    ctx->pc = 0x1f6d10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 784), (uint16_t)GPR_U32(ctx, 4));
label_1f6d14:
    // 0x1f6d14: 0xa6430312  sh          $v1, 0x312($s2)
    ctx->pc = 0x1f6d14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 786), (uint16_t)GPR_U32(ctx, 3));
label_1f6d18:
    // 0x1f6d18: 0xa240033b  sb          $zero, 0x33B($s2)
    ctx->pc = 0x1f6d18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 827), (uint8_t)GPR_U32(ctx, 0));
label_1f6d1c:
    // 0x1f6d1c: 0xa2400323  sb          $zero, 0x323($s2)
    ctx->pc = 0x1f6d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 803), (uint8_t)GPR_U32(ctx, 0));
label_1f6d20:
    // 0x1f6d20: 0xa64703d0  sh          $a3, 0x3D0($s2)
    ctx->pc = 0x1f6d20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 976), (uint16_t)GPR_U32(ctx, 7));
label_1f6d24:
    // 0x1f6d24: 0xa64803d2  sh          $t0, 0x3D2($s2)
    ctx->pc = 0x1f6d24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 978), (uint16_t)GPR_U32(ctx, 8));
label_1f6d28:
    // 0x1f6d28: 0xae4a03d4  sw          $t2, 0x3D4($s2)
    ctx->pc = 0x1f6d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 980), GPR_U32(ctx, 10));
label_1f6d2c:
    // 0x1f6d2c: 0xa6470400  sh          $a3, 0x400($s2)
    ctx->pc = 0x1f6d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1024), (uint16_t)GPR_U32(ctx, 7));
label_1f6d30:
    // 0x1f6d30: 0xa6460402  sh          $a2, 0x402($s2)
    ctx->pc = 0x1f6d30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1026), (uint16_t)GPR_U32(ctx, 6));
label_1f6d34:
    // 0x1f6d34: 0xae4a0404  sw          $t2, 0x404($s2)
    ctx->pc = 0x1f6d34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 10));
label_1f6d38:
    // 0x1f6d38: 0xa64403c8  sh          $a0, 0x3C8($s2)
    ctx->pc = 0x1f6d38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 968), (uint16_t)GPR_U32(ctx, 4));
label_1f6d3c:
    // 0x1f6d3c: 0xa64503ca  sh          $a1, 0x3CA($s2)
    ctx->pc = 0x1f6d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 970), (uint16_t)GPR_U32(ctx, 5));
label_1f6d40:
    // 0x1f6d40: 0xa64403f8  sh          $a0, 0x3F8($s2)
    ctx->pc = 0x1f6d40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1016), (uint16_t)GPR_U32(ctx, 4));
label_1f6d44:
    // 0x1f6d44: 0xa64303fa  sh          $v1, 0x3FA($s2)
    ctx->pc = 0x1f6d44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1018), (uint16_t)GPR_U32(ctx, 3));
label_1f6d48:
    // 0x1f6d48: 0xa240040b  sb          $zero, 0x40B($s2)
    ctx->pc = 0x1f6d48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
label_1f6d4c:
    // 0x1f6d4c: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
label_1f6d50:
    if (ctx->pc == 0x1F6D50u) {
        ctx->pc = 0x1F6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D4Cu;
        // 0x1f6d50: 0xa24003db  sb          $zero, 0x3DB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 987), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D54u;
        goto label_1f6d54;
    }
    ctx->pc = 0x1F6D4Cu;
    {
        const bool branch_taken_0x1f6d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D4Cu;
        // 0x1f6d50: 0xa24003db  sb          $zero, 0x3DB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 987), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d4c) {
            ctx->pc = 0x1F6B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f6b40; return; }
        }
    }
    ctx->pc = 0x1F6D54u;
label_1f6d54:
    // 0x1f6d54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f6d58:
    // 0x1f6d58: 0x24051110  addiu       $a1, $zero, 0x1110
    ctx->pc = 0x1f6d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
label_1f6d5c:
    // 0x1f6d5c: 0x24423c70  addiu       $v0, $v0, 0x3C70
    ctx->pc = 0x1f6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15472));
label_1f6d60:
    // 0x1f6d60: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x1f6d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1f6d64:
    // 0x1f6d64: 0xc05e234  jal         func_1788D0
label_1f6d68:
    if (ctx->pc == 0x1F6D68u) {
        ctx->pc = 0x1F6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D64u;
        // 0x1f6d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D6Cu;
        goto label_1f6d6c;
    }
    ctx->pc = 0x1F6D64u;
    SET_GPR_U32(ctx, 31, 0x1F6D6Cu);
    ctx->pc = 0x1F6D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D64u;
    // 0x1f6d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F6D64u, 0x1F6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D6Cu;
label_1f6d6c:
    // 0x1f6d6c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1f6d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1f6d70:
    // 0x1f6d70: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f6d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f6d74:
    // 0x1f6d74: 0x240601f8  addiu       $a2, $zero, 0x1F8
    ctx->pc = 0x1f6d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_1f6d78:
    // 0x1f6d78: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1f6d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1f6d7c:
    // 0x1f6d7c: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1f6d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f6d80:
    // 0x1f6d80: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1f6d80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f6d84:
    // 0x1f6d84: 0xc054e5c  jal         func_153970
label_1f6d88:
    if (ctx->pc == 0x1F6D88u) {
        ctx->pc = 0x1F6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D84u;
        // 0x1f6d88: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6D8Cu;
        goto label_1f6d8c;
    }
    ctx->pc = 0x1F6D84u;
    SET_GPR_U32(ctx, 31, 0x1F6D8Cu);
    ctx->pc = 0x1F6D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D84u;
    // 0x1f6d88: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1F6D84u, 0x1F6D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D8Cu;
label_1f6d8c:
    // 0x1f6d8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f6d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6d90:
    // 0x1f6d90: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1f6d90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1f6d94:
    // 0x1f6d94: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1f6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1f6d98:
    // 0x1f6d98: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x1f6d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1f6d9c:
    // 0x1f6d9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f6d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f6da0:
    // 0x1f6da0: 0xc054e74  jal         func_1539D0
label_1f6da4:
    if (ctx->pc == 0x1F6DA4u) {
        ctx->pc = 0x1F6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DA0u;
        // 0x1f6da4: 0x2508d540  addiu       $t0, $t0, -0x2AC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6DA8u;
        goto label_1f6da8;
    }
    ctx->pc = 0x1F6DA0u;
    SET_GPR_U32(ctx, 31, 0x1F6DA8u);
    ctx->pc = 0x1F6DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DA0u;
    // 0x1f6da4: 0x2508d540  addiu       $t0, $t0, -0x2AC0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1F6DA0u, 0x1F6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DA8u;
label_1f6da8:
    // 0x1f6da8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1f6dac:
    // 0x1f6dac: 0x27de0420  addiu       $fp, $fp, 0x420
    ctx->pc = 0x1f6dacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1056));
label_1f6db0:
    // 0x1f6db0: 0x34641110  ori         $a0, $v1, 0x1110
    ctx->pc = 0x1f6db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4368);
label_1f6db4:
    // 0x1f6db4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1f6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f6db8:
    // 0x1f6db8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f6dbc:
    // 0x1f6dbc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1f6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1f6dc0:
    // 0x1f6dc0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1f6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f6dc4:
    // 0x1f6dc4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1f6dc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6dc8:
    // 0x1f6dc8: 0x1460ff5b  bnez        $v1, . + 4 + (-0xA5 << 2)
label_1f6dcc:
    if (ctx->pc == 0x1F6DCCu) {
        ctx->pc = 0x1F6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DC8u;
        // 0x1f6dcc: 0x2e4b821  addu        $s7, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6DD0u;
        goto label_1f6dd0;
    }
    ctx->pc = 0x1F6DC8u;
    {
        const bool branch_taken_0x1f6dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DC8u;
        // 0x1f6dcc: 0x2e4b821  addu        $s7, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6dc8) {
            ctx->pc = 0x1F6B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f6b38; return; }
        }
    }
    ctx->pc = 0x1F6DD0u;
label_1f6dd0:
    // 0x1f6dd0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1f6dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1f6dd4:
    // 0x1f6dd4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1f6dd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f6dd8:
    // 0x1f6dd8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1f6dd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f6ddc:
    // 0x1f6ddc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1f6ddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f6de0:
    // 0x1f6de0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1f6de0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f6de4:
    // 0x1f6de4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f6de4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f6de8:
    // 0x1f6de8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f6de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f6dec:
    // 0x1f6dec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f6decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f6df0:
    // 0x1f6df0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f6df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f6df4:
    // 0x1f6df4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f6df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f6df8:
    // 0x1f6df8: 0x3e00008  jr          $ra
label_1f6dfc:
    if (ctx->pc == 0x1F6DFCu) {
        ctx->pc = 0x1F6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DF8u;
        // 0x1f6dfc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E00u;
        goto label_1f6e00;
    }
    ctx->pc = 0x1F6DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DF8u;
        // 0x1f6dfc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6E00u;
label_1f6e00:
    // 0x1f6e00: 0x8f839024  lw          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f6e04:
    // 0x1f6e04: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_1f6e08:
    if (ctx->pc == 0x1F6E08u) {
        ctx->pc = 0x1F6E0Cu;
        goto label_1f6e0c;
    }
    ctx->pc = 0x1F6E04u;
    {
        const bool branch_taken_0x1f6e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e04) {
            ctx->pc = 0x1F6EDCu;
            goto label_1f6edc;
        }
    }
    ctx->pc = 0x1F6E0Cu;
label_1f6e0c:
    // 0x1f6e0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6e10:
    // 0x1f6e10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6e14:
    // 0x1f6e14: 0x27858ff8  addiu       $a1, $gp, -0x7008
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938616));
label_1f6e18:
    // 0x1f6e18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6e1c:
    // 0x1f6e1c: 0x27879000  addiu       $a3, $gp, -0x7000
    ctx->pc = 0x1f6e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
label_1f6e20:
    // 0x1f6e20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6e24:
    // 0x1f6e24: 0xe95821  addu        $t3, $a3, $t1
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1f6e28:
    // 0x1f6e28: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1f6e2c:
    // 0x1f6e2c: 0x14660011  bne         $v1, $a2, . + 4 + (0x11 << 2)
label_1f6e30:
    if (ctx->pc == 0x1F6E30u) {
        ctx->pc = 0x1F6E34u;
        goto label_1f6e34;
    }
    ctx->pc = 0x1F6E2Cu;
    {
        const bool branch_taken_0x1f6e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1f6e2c) {
            ctx->pc = 0x1F6E74u;
            goto label_1f6e74;
        }
    }
    ctx->pc = 0x1F6E34u;
label_1f6e34:
    // 0x1f6e34: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x1f6e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1f6e38:
    // 0x1f6e38: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f6e3c:
    // 0x1f6e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f6e40:
    // 0x1f6e40: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x1f6e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_1f6e44:
    // 0x1f6e44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1f6e48:
    if (ctx->pc == 0x1F6E48u) {
        ctx->pc = 0x1F6E4Cu;
        goto label_1f6e4c;
    }
    ctx->pc = 0x1F6E44u;
    {
        const bool branch_taken_0x1f6e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e44) {
            ctx->pc = 0x1F6E54u;
            goto label_1f6e54;
        }
    }
    ctx->pc = 0x1F6E4Cu;
label_1f6e4c:
    // 0x1f6e4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f6e50:
    if (ctx->pc == 0x1F6E50u) {
        ctx->pc = 0x1F6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E4Cu;
        // 0x1f6e50: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E54u;
        goto label_1f6e54;
    }
    ctx->pc = 0x1F6E4Cu;
    {
        const bool branch_taken_0x1f6e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E4Cu;
        // 0x1f6e50: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e4c) {
            ctx->pc = 0x1F6E5Cu;
            goto label_1f6e5c;
        }
    }
    ctx->pc = 0x1F6E54u;
label_1f6e54:
    // 0x1f6e54: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f6e58:
    // 0x1f6e58: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_1f6e5c:
    // 0x1f6e5c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f6e60:
    // 0x1f6e60: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x1f6e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_1f6e64:
    // 0x1f6e64: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1f6e68:
    if (ctx->pc == 0x1F6E68u) {
        ctx->pc = 0x1F6E6Cu;
        goto label_1f6e6c;
    }
    ctx->pc = 0x1F6E64u;
    {
        const bool branch_taken_0x1f6e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e64) {
            ctx->pc = 0x1F6EA8u;
            goto label_1f6ea8;
        }
    }
    ctx->pc = 0x1F6E6Cu;
label_1f6e6c:
    // 0x1f6e6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1f6e70:
    if (ctx->pc == 0x1F6E70u) {
        ctx->pc = 0x1F6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E6Cu;
        // 0x1f6e70: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6E74u;
        goto label_1f6e74;
    }
    ctx->pc = 0x1F6E6Cu;
    {
        const bool branch_taken_0x1f6e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E6Cu;
        // 0x1f6e70: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e6c) {
            ctx->pc = 0x1F6EA8u;
            goto label_1f6ea8;
        }
    }
    ctx->pc = 0x1F6E74u;
label_1f6e74:
    // 0x1f6e74: 0x0  nop
    ctx->pc = 0x1f6e74u;
    // NOP
label_1f6e78:
    // 0x1f6e78: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
label_1f6e7c:
    if (ctx->pc == 0x1F6E7Cu) {
        ctx->pc = 0x1F6E80u;
        goto label_1f6e80;
    }
    ctx->pc = 0x1F6E78u;
    {
        const bool branch_taken_0x1f6e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f6e78) {
            ctx->pc = 0x1F6EA8u;
            goto label_1f6ea8;
        }
    }
    ctx->pc = 0x1F6E80u;
label_1f6e80:
    // 0x1f6e80: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x1f6e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1f6e84:
    // 0x1f6e84: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f6e88:
    // 0x1f6e88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f6e8c:
    // 0x1f6e8c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f6e8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f6e90:
    // 0x1f6e90: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1f6e90u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1f6e94:
    // 0x1f6e94: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_1f6e98:
    // 0x1f6e98: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f6e9c:
    // 0x1f6e9c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_1f6ea0:
    if (ctx->pc == 0x1F6EA0u) {
        ctx->pc = 0x1F6EA4u;
        goto label_1f6ea4;
    }
    ctx->pc = 0x1F6E9Cu;
    {
        const bool branch_taken_0x1f6e9c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1f6e9c) {
            ctx->pc = 0x1F6EA8u;
            goto label_1f6ea8;
        }
    }
    ctx->pc = 0x1F6EA4u;
label_1f6ea4:
    // 0x1f6ea4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1f6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_1f6ea8:
    // 0x1f6ea8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f6ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f6eac:
    // 0x1f6eac: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x1f6eacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f6eb0:
    // 0x1f6eb0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_1f6eb4:
    if (ctx->pc == 0x1F6EB4u) {
        ctx->pc = 0x1F6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EB0u;
        // 0x1f6eb4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6EB8u;
        goto label_1f6eb8;
    }
    ctx->pc = 0x1F6EB0u;
    {
        const bool branch_taken_0x1f6eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EB0u;
        // 0x1f6eb4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6eb0) {
            ctx->pc = 0x1F6E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6e24;
        }
    }
    ctx->pc = 0x1F6EB8u;
label_1f6eb8:
    // 0x1f6eb8: 0x8f838ff0  lw          $v1, -0x7010($gp)
    ctx->pc = 0x1f6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
label_1f6ebc:
    // 0x1f6ebc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f6ec0:
    // 0x1f6ec0: 0x28612710  slti        $at, $v1, 0x2710
    ctx->pc = 0x1f6ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1f6ec4:
    // 0x1f6ec4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1f6ec8:
    if (ctx->pc == 0x1F6EC8u) {
        ctx->pc = 0x1F6ECCu;
        goto label_1f6ecc;
    }
    ctx->pc = 0x1F6EC4u;
    {
        const bool branch_taken_0x1f6ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ec4) {
            ctx->pc = 0x1F6ED4u;
            goto label_1f6ed4;
        }
    }
    ctx->pc = 0x1F6ECCu;
label_1f6ecc:
    // 0x1f6ecc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f6ed0:
    if (ctx->pc == 0x1F6ED0u) {
        ctx->pc = 0x1F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ECCu;
        // 0x1f6ed0: 0xaf838ff0  sw          $v1, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6ED4u;
        goto label_1f6ed4;
    }
    ctx->pc = 0x1F6ECCu;
    {
        const bool branch_taken_0x1f6ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ECCu;
        // 0x1f6ed0: 0xaf838ff0  sw          $v1, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ecc) {
            ctx->pc = 0x1F6EDCu;
            goto label_1f6edc;
        }
    }
    ctx->pc = 0x1F6ED4u;
label_1f6ed4:
    // 0x1f6ed4: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x1f6ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1f6ed8:
    // 0x1f6ed8: 0xaf838ff0  sw          $v1, -0x7010($gp)
    ctx->pc = 0x1f6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 3));
label_1f6edc:
    // 0x1f6edc: 0x3e00008  jr          $ra
label_1f6ee0:
    if (ctx->pc == 0x1F6EE0u) {
        ctx->pc = 0x1F6EE4u;
        goto label_1f6ee4;
    }
    ctx->pc = 0x1F6EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6EE4u;
label_1f6ee4:
    // 0x1f6ee4: 0x0  nop
    ctx->pc = 0x1f6ee4u;
    // NOP
label_1f6ee8:
    // 0x1f6ee8: 0x0  nop
    ctx->pc = 0x1f6ee8u;
    // NOP
label_1f6eec:
    // 0x1f6eec: 0x0  nop
    ctx->pc = 0x1f6eecu;
    // NOP
label_1f6ef0:
    // 0x1f6ef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f6ef4:
    // 0x1f6ef4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f6ef8:
    // 0x1f6ef8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f6efc:
    // 0x1f6efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f6f00:
    // 0x1f6f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f6f04:
    // 0x1f6f04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f6f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f6f08:
    // 0x1f6f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f6f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f6f0c:
    // 0x1f6f0c: 0x8f839024  lw          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f6f10:
    // 0x1f6f10: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
label_1f6f14:
    if (ctx->pc == 0x1F6F14u) {
        ctx->pc = 0x1F6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F10u;
        // 0x1f6f14: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F18u;
        goto label_1f6f18;
    }
    ctx->pc = 0x1F6F10u;
    {
        const bool branch_taken_0x1f6f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F10u;
        // 0x1f6f14: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f10) {
            ctx->pc = 0x1F7214u;
            goto label_1f7214;
        }
    }
    ctx->pc = 0x1F6F18u;
label_1f6f18:
    // 0x1f6f18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1f6f1c:
    // 0x1f6f1c: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x1f6f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1f6f20:
    // 0x1f6f20: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1f6f24:
    // 0x1f6f24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f6f28:
    // 0x1f6f28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f2c:
    // 0x1f6f2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f6f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f30:
    // 0x1f6f30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f6f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f34:
    // 0x1f6f34: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f6f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f6f38:
    // 0x1f6f38: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1f6f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f6f3c:
    // 0x1f6f3c: 0x27839018  addiu       $v1, $gp, -0x6FE8
    ctx->pc = 0x1f6f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938648));
label_1f6f40:
    // 0x1f6f40: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1f6f44:
    // 0x1f6f44: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1f6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1f6f48:
    // 0x1f6f48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f6f4c:
    // 0x1f6f4c: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
label_1f6f50:
    if (ctx->pc == 0x1F6F50u) {
        ctx->pc = 0x1F6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F4Cu;
        // 0x1f6f50: 0x27828ff8  addiu       $v0, $gp, -0x7008 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F54u;
        goto label_1f6f54;
    }
    ctx->pc = 0x1F6F4Cu;
    {
        const bool branch_taken_0x1f6f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F4Cu;
        // 0x1f6f50: 0x27828ff8  addiu       $v0, $gp, -0x7008 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f4c) {
            ctx->pc = 0x1F701Cu;
            goto label_1f701c;
        }
    }
    ctx->pc = 0x1F6F54u;
label_1f6f54:
    // 0x1f6f54: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f6f58:
    // 0x1f6f58: 0x8c4b0000  lw          $t3, 0x0($v0)
    ctx->pc = 0x1f6f58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6f5c:
    // 0x1f6f5c: 0x1960002f  blez        $t3, . + 4 + (0x2F << 2)
label_1f6f60:
    if (ctx->pc == 0x1F6F60u) {
        ctx->pc = 0x1F6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F5Cu;
        // 0x1f6f60: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6F64u;
        goto label_1f6f64;
    }
    ctx->pc = 0x1F6F5Cu;
    {
        const bool branch_taken_0x1f6f5c = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x1F6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F5Cu;
        // 0x1f6f60: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f5c) {
            ctx->pc = 0x1F701Cu;
            goto label_1f701c;
        }
    }
    ctx->pc = 0x1F6F64u;
label_1f6f64:
    // 0x1f6f64: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1f6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_1f6f68:
    // 0x1f6f68: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1f6f68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f6f6c:
    // 0x1f6f6c: 0x24425e90  addiu       $v0, $v0, 0x5E90
    ctx->pc = 0x1f6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24208));
label_1f6f70:
    // 0x1f6f70: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1f6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f6f74:
    // 0x1f6f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f78:
    // 0x1f6f78: 0x27829028  addiu       $v0, $gp, -0x6FD8
    ctx->pc = 0x1f6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
label_1f6f7c:
    // 0x1f6f7c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1f6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f6f80:
    // 0x1f6f80: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f6f84:
    // 0x1f6f84: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1f6f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1f6f88:
    // 0x1f6f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f8c:
    // 0x1f6f8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6f90:
    // 0x1f6f90: 0xa2940  sll         $a1, $t2, 5
    ctx->pc = 0x1f6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1f6f94:
    // 0x1f6f94: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1f6f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1f6f98:
    // 0x1f6f98: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1f6f98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1f6f9c:
    // 0x1f6f9c: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x1f6f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f6fa0:
    // 0x1f6fa0: 0xa24b03f3  sb          $t3, 0x3F3($s2)
    ctx->pc = 0x1f6fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1011), (uint8_t)GPR_U32(ctx, 11));
label_1f6fa4:
    // 0x1f6fa4: 0xa24b03c3  sb          $t3, 0x3C3($s2)
    ctx->pc = 0x1f6fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 963), (uint8_t)GPR_U32(ctx, 11));
label_1f6fa8:
    // 0x1f6fa8: 0xa24b030b  sb          $t3, 0x30B($s2)
    ctx->pc = 0x1f6fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 779), (uint8_t)GPR_U32(ctx, 11));
label_1f6fac:
    // 0x1f6fac: 0xa24b02f3  sb          $t3, 0x2F3($s2)
    ctx->pc = 0x1f6facu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 755), (uint8_t)GPR_U32(ctx, 11));
label_1f6fb0:
    // 0x1f6fb0: 0xa24b026b  sb          $t3, 0x26B($s2)
    ctx->pc = 0x1f6fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 619), (uint8_t)GPR_U32(ctx, 11));
label_1f6fb4:
    // 0x1f6fb4: 0xa24b023b  sb          $t3, 0x23B($s2)
    ctx->pc = 0x1f6fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 571), (uint8_t)GPR_U32(ctx, 11));
label_1f6fb8:
    // 0x1f6fb8: 0xa24b019b  sb          $t3, 0x19B($s2)
    ctx->pc = 0x1f6fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 411), (uint8_t)GPR_U32(ctx, 11));
label_1f6fbc:
    // 0x1f6fbc: 0xa24b0183  sb          $t3, 0x183($s2)
    ctx->pc = 0x1f6fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 387), (uint8_t)GPR_U32(ctx, 11));
label_1f6fc0:
    // 0x1f6fc0: 0xa24b00cb  sb          $t3, 0xCB($s2)
    ctx->pc = 0x1f6fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 203), (uint8_t)GPR_U32(ctx, 11));
label_1f6fc4:
    // 0x1f6fc4: 0xa24b00b3  sb          $t3, 0xB3($s2)
    ctx->pc = 0x1f6fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 179), (uint8_t)GPR_U32(ctx, 11));
label_1f6fc8:
    // 0x1f6fc8: 0xa24b009b  sb          $t3, 0x9B($s2)
    ctx->pc = 0x1f6fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 155), (uint8_t)GPR_U32(ctx, 11));
label_1f6fcc:
    // 0x1f6fcc: 0xa24b0083  sb          $t3, 0x83($s2)
    ctx->pc = 0x1f6fccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 131), (uint8_t)GPR_U32(ctx, 11));
label_1f6fd0:
    // 0x1f6fd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6fd4:
    // 0x1f6fd4: 0xc066c72  jal         func_19B1C8
label_1f6fd8:
    if (ctx->pc == 0x1F6FD8u) {
        ctx->pc = 0x1F6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FD4u;
        // 0x1f6fd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F6FDCu;
        goto label_1f6fdc;
    }
    ctx->pc = 0x1F6FD4u;
    SET_GPR_U32(ctx, 31, 0x1F6FDCu);
    ctx->pc = 0x1F6FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6FD4u;
    // 0x1f6fd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F6FD4u, 0x1F6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6FDCu;
label_1f6fdc:
    // 0x1f6fdc: 0x27829030  addiu       $v0, $gp, -0x6FD0
    ctx->pc = 0x1f6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
label_1f6fe0:
    // 0x1f6fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f6fe4:
    // 0x1f6fe4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f6fe8:
    // 0x1f6fe8: 0x24062008  addiu       $a2, $zero, 0x2008
    ctx->pc = 0x1f6fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
label_1f6fec:
    // 0x1f6fec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f6ff0:
    // 0x1f6ff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ff4:
    // 0x1f6ff4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6ff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6ff8:
    // 0x1f6ff8: 0xc066c72  jal         func_19B1C8
label_1f6ffc:
    if (ctx->pc == 0x1F6FFCu) {
        ctx->pc = 0x1F6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6FF8u;
        // 0x1f6ffc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7000u;
        goto label_1f7000;
    }
    ctx->pc = 0x1F6FF8u;
    SET_GPR_U32(ctx, 31, 0x1F7000u);
    ctx->pc = 0x1F6FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6FF8u;
    // 0x1f6ffc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F6FF8u, 0x1F7000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7000u;
label_1f7000:
    // 0x1f7000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f7000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f7004:
    // 0x1f7004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7008:
    // 0x1f7008: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1f7008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f700c:
    // 0x1f700c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f700cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7010:
    // 0x1f7010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7014:
    // 0x1f7014: 0xc066c72  jal         func_19B1C8
label_1f7018:
    if (ctx->pc == 0x1F7018u) {
        ctx->pc = 0x1F7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7014u;
        // 0x1f7018: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F701Cu;
        goto label_1f701c;
    }
    ctx->pc = 0x1F7014u;
    SET_GPR_U32(ctx, 31, 0x1F701Cu);
    ctx->pc = 0x1F7018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7014u;
    // 0x1f7018: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F7014u, 0x1F701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F701Cu;
label_1f701c:
    // 0x1f701c: 0x0  nop
    ctx->pc = 0x1f701cu;
    // NOP
label_1f7020:
    // 0x1f7020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f7024:
    // 0x1f7024: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1f7024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f7028:
    // 0x1f7028: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f7028u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f702c:
    // 0x1f702c: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_1f7030:
    if (ctx->pc == 0x1F7030u) {
        ctx->pc = 0x1F7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F702Cu;
        // 0x1f7030: 0x26940840  addiu       $s4, $s4, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7034u;
        goto label_1f7034;
    }
    ctx->pc = 0x1F702Cu;
    {
        const bool branch_taken_0x1f702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F702Cu;
        // 0x1f7030: 0x26940840  addiu       $s4, $s4, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f702c) {
            ctx->pc = 0x1F6F3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6f3c;
        }
    }
    ctx->pc = 0x1F7034u;
label_1f7034:
    // 0x1f7034: 0x8f8b9020  lw          $t3, -0x6FE0($gp)
    ctx->pc = 0x1f7034u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938656)));
label_1f7038:
    // 0x1f7038: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1f7038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1f703c:
    // 0x1f703c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f703cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f7040:
    // 0x1f7040: 0x8c2d3ffc  lw          $t5, 0x3FFC($at)
    ctx->pc = 0x1f7040u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f7044:
    // 0x1f7044: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x1f7044u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_1f7048:
    // 0x1f7048: 0x24633c50  addiu       $v1, $v1, 0x3C50
    ctx->pc = 0x1f7048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15440));
label_1f704c:
    // 0x1f704c: 0x8f929038  lw          $s2, -0x6FC8($gp)
    ctx->pc = 0x1f704cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938680)));
label_1f7050:
    // 0x1f7050: 0x258c3c70  addiu       $t4, $t4, 0x3C70
    ctx->pc = 0x1f7050u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15472));
label_1f7054:
    // 0x1f7054: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1f7054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1f7058:
    // 0x1f7058: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1f705c:
    // 0x1f705c: 0x240601f8  addiu       $a2, $zero, 0x1F8
    ctx->pc = 0x1f705cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_1f7060:
    // 0x1f7060: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1f7060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1f7064:
    // 0x1f7064: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1f7064u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_1f7068:
    // 0x1f7068: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1f7068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1f706c:
    // 0x1f706c: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x1f706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f7070:
    // 0x1f7070: 0xd1200  sll         $v0, $t5, 8
    ctx->pc = 0x1f7070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
label_1f7074:
    // 0x1f7074: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f7078:
    // 0x1f7078: 0x4d7021  addu        $t6, $v0, $t5
    ctx->pc = 0x1f7078u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_1f707c:
    // 0x1f707c: 0xe6900  sll         $t5, $t6, 4
    ctx->pc = 0x1f707cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1f7080:
    // 0x1f7080: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x1f7080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1f7084:
    // 0x1f7084: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x1f7084u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
label_1f7088:
    // 0x1f7088: 0x240900fa  addiu       $t1, $zero, 0xFA
    ctx->pc = 0x1f7088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1f708c:
    // 0x1f708c: 0xd5900  sll         $t3, $t5, 4
    ctx->pc = 0x1f708cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1f7090:
    // 0x1f7090: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1f7090u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7094:
    // 0x1f7094: 0x18b8821  addu        $s1, $t4, $t3
    ctx->pc = 0x1f7094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_1f7098:
    // 0x1f7098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f7098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f709c:
    // 0x1f709c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f70a0:
    // 0x1f70a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f70a4:
    // 0x1f70a4: 0xc054e5c  jal         func_153970
label_1f70a8:
    if (ctx->pc == 0x1F70A8u) {
        ctx->pc = 0x1F70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70A4u;
        // 0x1f70a8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F70ACu;
        goto label_1f70ac;
    }
    ctx->pc = 0x1F70A4u;
    SET_GPR_U32(ctx, 31, 0x1F70ACu);
    ctx->pc = 0x1F70A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70A4u;
    // 0x1f70a8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1F70A4u, 0x1F70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70ACu;
label_1f70ac:
    // 0x1f70ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f70acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f70b0:
    // 0x1f70b0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1f70b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f70b4:
    // 0x1f70b4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1f70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1f70b8:
    // 0x1f70b8: 0x24060150  addiu       $a2, $zero, 0x150
    ctx->pc = 0x1f70b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1f70bc:
    // 0x1f70bc: 0xc054e74  jal         func_1539D0
label_1f70c0:
    if (ctx->pc == 0x1F70C0u) {
        ctx->pc = 0x1F70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70BCu;
        // 0x1f70c0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F70C4u;
        goto label_1f70c4;
    }
    ctx->pc = 0x1F70BCu;
    SET_GPR_U32(ctx, 31, 0x1F70C4u);
    ctx->pc = 0x1F70C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70BCu;
    // 0x1f70c0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1F70BCu, 0x1F70C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70C4u;
label_1f70c4:
    // 0x1f70c4: 0x8f849024  lw          $a0, -0x6FDC($gp)
    ctx->pc = 0x1f70c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f70c8:
    // 0x1f70c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f70c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f70cc:
    // 0x1f70cc: 0x1483004a  bne         $a0, $v1, . + 4 + (0x4A << 2)
label_1f70d0:
    if (ctx->pc == 0x1F70D0u) {
        ctx->pc = 0x1F70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70CCu;
        // 0x1f70d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F70D4u;
        goto label_1f70d4;
    }
    ctx->pc = 0x1F70CCu;
    {
        const bool branch_taken_0x1f70cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70CCu;
        // 0x1f70d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70cc) {
            ctx->pc = 0x1F71F8u;
            goto label_1f71f8;
        }
    }
    ctx->pc = 0x1F70D4u;
label_1f70d4:
    // 0x1f70d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f70d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f70d8:
    // 0x1f70d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f70d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f70dc:
    // 0x1f70dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f70dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f70e0:
    // 0x1f70e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f70e4:
    // 0x1f70e4: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1f70e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f70e8:
    // 0x1f70e8: 0x142082a  slt         $at, $t2, $v0
    ctx->pc = 0x1f70e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f70ec:
    // 0x1f70ec: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
label_1f70f0:
    if (ctx->pc == 0x1F70F0u) {
        ctx->pc = 0x1F70F4u;
        goto label_1f70f4;
    }
    ctx->pc = 0x1F70ECu;
    {
        const bool branch_taken_0x1f70ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f70ec) {
            ctx->pc = 0x1F71F8u;
            goto label_1f71f8;
        }
    }
    ctx->pc = 0x1F70F4u;
label_1f70f4:
    // 0x1f70f4: 0x8f868ff0  lw          $a2, -0x7010($gp)
    ctx->pc = 0x1f70f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
label_1f70f8:
    // 0x1f70f8: 0xc75823  subu        $t3, $a2, $a3
    ctx->pc = 0x1f70f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f70fc:
    // 0x1f70fc: 0x19600032  blez        $t3, . + 4 + (0x32 << 2)
label_1f7100:
    if (ctx->pc == 0x1F7100u) {
        ctx->pc = 0x1F7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70FCu;
        // 0x1f7100: 0x29660008  slti        $a2, $t3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7104u;
        goto label_1f7104;
    }
    ctx->pc = 0x1F70FCu;
    {
        const bool branch_taken_0x1f70fc = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x1F7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70FCu;
        // 0x1f7100: 0x29660008  slti        $a2, $t3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70fc) {
            ctx->pc = 0x1F71C8u;
            goto label_1f71c8;
        }
    }
    ctx->pc = 0x1F7104u;
label_1f7104:
    // 0x1f7104: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_1f7108:
    if (ctx->pc == 0x1F7108u) {
        ctx->pc = 0x1F710Cu;
        goto label_1f710c;
    }
    ctx->pc = 0x1F7104u;
    {
        const bool branch_taken_0x1f7104 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7104) {
            ctx->pc = 0x1F711Cu;
            goto label_1f711c;
        }
    }
    ctx->pc = 0x1F710Cu;
label_1f710c:
    // 0x1f710c: 0x1545002f  bne         $t2, $a1, . + 4 + (0x2F << 2)
label_1f7110:
    if (ctx->pc == 0x1F7110u) {
        ctx->pc = 0x1F7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F710Cu;
        // 0x1f7110: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7114u;
        goto label_1f7114;
    }
    ctx->pc = 0x1F710Cu;
    {
        const bool branch_taken_0x1f710c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F710Cu;
        // 0x1f7110: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f710c) {
            ctx->pc = 0x1F71CCu;
            goto label_1f71cc;
        }
    }
    ctx->pc = 0x1F7114u;
label_1f7114:
    // 0x1f7114: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1f7118:
    if (ctx->pc == 0x1F7118u) {
        ctx->pc = 0x1F7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7114u;
        // 0x1f7118: 0xaf849024  sw          $a0, -0x6FDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F711Cu;
        goto label_1f711c;
    }
    ctx->pc = 0x1F7114u;
    {
        const bool branch_taken_0x1f7114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7114u;
        // 0x1f7118: 0xaf849024  sw          $a0, -0x6FDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7114) {
            ctx->pc = 0x1F71CCu;
            goto label_1f71cc;
        }
    }
    ctx->pc = 0x1F711Cu;
label_1f711c:
    // 0x1f711c: 0x0  nop
    ctx->pc = 0x1f711cu;
    // NOP
label_1f7120:
    // 0x1f7120: 0xb49c0  sll         $t1, $t3, 7
    ctx->pc = 0x1f7120u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 7));
label_1f7124:
    // 0x1f7124: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1f7128:
    if (ctx->pc == 0x1F7128u) {
        ctx->pc = 0x1F7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7124u;
        // 0x1f7128: 0x930c3  sra         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F712Cu;
        goto label_1f712c;
    }
    ctx->pc = 0x1F7124u;
    {
        const bool branch_taken_0x1f7124 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1F7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7124u;
        // 0x1f7128: 0x930c3  sra         $a2, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7124) {
            ctx->pc = 0x1F7134u;
            goto label_1f7134;
        }
    }
    ctx->pc = 0x1F712Cu;
label_1f712c:
    // 0x1f712c: 0x25260007  addiu       $a2, $t1, 0x7
    ctx->pc = 0x1f712cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1f7130:
    // 0x1f7130: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x1f7130u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
label_1f7134:
    // 0x1f7134: 0x6b5823  subu        $t3, $v1, $t3
    ctx->pc = 0x1f7134u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_1f7138:
    // 0x1f7138: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x1f7138u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_1f713c:
    // 0x1f713c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1f713cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_1f7140:
    // 0x1f7140: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1f7140u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_1f7144:
    // 0x1f7144: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1f7148:
    if (ctx->pc == 0x1F7148u) {
        ctx->pc = 0x1F7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7144u;
        // 0x1f7148: 0x958c3  sra         $t3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F714Cu;
        goto label_1f714c;
    }
    ctx->pc = 0x1F7144u;
    {
        const bool branch_taken_0x1f7144 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1F7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7144u;
        // 0x1f7148: 0x958c3  sra         $t3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7144) {
            ctx->pc = 0x1F7154u;
            goto label_1f7154;
        }
    }
    ctx->pc = 0x1F714Cu;
label_1f714c:
    // 0x1f714c: 0x25290007  addiu       $t1, $t1, 0x7
    ctx->pc = 0x1f714cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1f7150:
    // 0x1f7150: 0x958c3  sra         $t3, $t1, 3
    ctx->pc = 0x1f7150u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 9), 3));
label_1f7154:
    // 0x1f7154: 0xb6040  sll         $t4, $t3, 1
    ctx->pc = 0x1f7154u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_1f7158:
    // 0x1f7158: 0x2284821  addu        $t1, $s1, $t0
    ctx->pc = 0x1f7158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_1f715c:
    // 0x1f715c: 0x316dffff  andi        $t5, $t3, 0xFFFF
    ctx->pc = 0x1f715cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_1f7160:
    // 0x1f7160: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x1f7160u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
label_1f7164:
    // 0x1f7164: 0x952b0090  lhu         $t3, 0x90($t1)
    ctx->pc = 0x1f7164u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 144)));
label_1f7168:
    // 0x1f7168: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x1f7168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_1f716c:
    // 0x1f716c: 0xa52b0090  sh          $t3, 0x90($t1)
    ctx->pc = 0x1f716cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 144), (uint16_t)GPR_U32(ctx, 11));
label_1f7170:
    // 0x1f7170: 0x952b00a8  lhu         $t3, 0xA8($t1)
    ctx->pc = 0x1f7170u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 168)));
label_1f7174:
    // 0x1f7174: 0x16d5823  subu        $t3, $t3, $t5
    ctx->pc = 0x1f7174u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_1f7178:
    // 0x1f7178: 0xa52b00a8  sh          $t3, 0xA8($t1)
    ctx->pc = 0x1f7178u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 168), (uint16_t)GPR_U32(ctx, 11));
label_1f717c:
    // 0x1f717c: 0x952b00c0  lhu         $t3, 0xC0($t1)
    ctx->pc = 0x1f717cu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 192)));
label_1f7180:
    // 0x1f7180: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x1f7180u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_1f7184:
    // 0x1f7184: 0xa52b00c0  sh          $t3, 0xC0($t1)
    ctx->pc = 0x1f7184u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 192), (uint16_t)GPR_U32(ctx, 11));
label_1f7188:
    // 0x1f7188: 0x952b00d8  lhu         $t3, 0xD8($t1)
    ctx->pc = 0x1f7188u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 216)));
label_1f718c:
    // 0x1f718c: 0x16d5823  subu        $t3, $t3, $t5
    ctx->pc = 0x1f718cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_1f7190:
    // 0x1f7190: 0xa52b00d8  sh          $t3, 0xD8($t1)
    ctx->pc = 0x1f7190u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 216), (uint16_t)GPR_U32(ctx, 11));
label_1f7194:
    // 0x1f7194: 0x952b0092  lhu         $t3, 0x92($t1)
    ctx->pc = 0x1f7194u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 146)));
label_1f7198:
    // 0x1f7198: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x1f7198u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1f719c:
    // 0x1f719c: 0xa52b0092  sh          $t3, 0x92($t1)
    ctx->pc = 0x1f719cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 146), (uint16_t)GPR_U32(ctx, 11));
label_1f71a0:
    // 0x1f71a0: 0x952b00aa  lhu         $t3, 0xAA($t1)
    ctx->pc = 0x1f71a0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 170)));
label_1f71a4:
    // 0x1f71a4: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x1f71a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1f71a8:
    // 0x1f71a8: 0xa52b00aa  sh          $t3, 0xAA($t1)
    ctx->pc = 0x1f71a8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 170), (uint16_t)GPR_U32(ctx, 11));
label_1f71ac:
    // 0x1f71ac: 0x952b00c2  lhu         $t3, 0xC2($t1)
    ctx->pc = 0x1f71acu;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 194)));
label_1f71b0:
    // 0x1f71b0: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x1f71b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1f71b4:
    // 0x1f71b4: 0xa52b00c2  sh          $t3, 0xC2($t1)
    ctx->pc = 0x1f71b4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 194), (uint16_t)GPR_U32(ctx, 11));
label_1f71b8:
    // 0x1f71b8: 0x952b00da  lhu         $t3, 0xDA($t1)
    ctx->pc = 0x1f71b8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 218)));
label_1f71bc:
    // 0x1f71bc: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x1f71bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1f71c0:
    // 0x1f71c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f71c4:
    if (ctx->pc == 0x1F71C4u) {
        ctx->pc = 0x1F71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71C0u;
        // 0x1f71c4: 0xa52b00da  sh          $t3, 0xDA($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 218), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F71C8u;
        goto label_1f71c8;
    }
    ctx->pc = 0x1F71C0u;
    {
        const bool branch_taken_0x1f71c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71C0u;
        // 0x1f71c4: 0xa52b00da  sh          $t3, 0xDA($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 218), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71c0) {
            ctx->pc = 0x1F71CCu;
            goto label_1f71cc;
        }
    }
    ctx->pc = 0x1F71C8u;
label_1f71c8:
    // 0x1f71c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f71c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f71cc:
    // 0x1f71cc: 0x0  nop
    ctx->pc = 0x1f71ccu;
    // NOP
label_1f71d0:
    // 0x1f71d0: 0x2284821  addu        $t1, $s1, $t0
    ctx->pc = 0x1f71d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_1f71d4:
    // 0x1f71d4: 0xa12600cb  sb          $a2, 0xCB($t1)
    ctx->pc = 0x1f71d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 203), (uint8_t)GPR_U32(ctx, 6));
label_1f71d8:
    // 0x1f71d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f71d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f71dc:
    // 0x1f71dc: 0xa12600b3  sb          $a2, 0xB3($t1)
    ctx->pc = 0x1f71dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 179), (uint8_t)GPR_U32(ctx, 6));
label_1f71e0:
    // 0x1f71e0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1f71e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_1f71e4:
    // 0x1f71e4: 0xa126009b  sb          $a2, 0x9B($t1)
    ctx->pc = 0x1f71e4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 155), (uint8_t)GPR_U32(ctx, 6));
label_1f71e8:
    // 0x1f71e8: 0xa1260083  sb          $a2, 0x83($t1)
    ctx->pc = 0x1f71e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 131), (uint8_t)GPR_U32(ctx, 6));
label_1f71ec:
    // 0x1f71ec: 0x29460150  slti        $a2, $t2, 0x150
    ctx->pc = 0x1f71ecu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)336) ? 1 : 0);
label_1f71f0:
    // 0x1f71f0: 0x14c0ffbd  bnez        $a2, . + 4 + (-0x43 << 2)
label_1f71f4:
    if (ctx->pc == 0x1F71F4u) {
        ctx->pc = 0x1F71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71F0u;
        // 0x1f71f4: 0x250800d0  addiu       $t0, $t0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F71F8u;
        goto label_1f71f8;
    }
    ctx->pc = 0x1F71F0u;
    {
        const bool branch_taken_0x1f71f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F71F0u;
        // 0x1f71f4: 0x250800d0  addiu       $t0, $t0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f71f0) {
            ctx->pc = 0x1F70E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f70e8;
        }
    }
    ctx->pc = 0x1F71F8u;
label_1f71f8:
    // 0x1f71f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f71f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f71fc:
    // 0x1f71fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f71fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f7200:
    // 0x1f7200: 0x24061111  addiu       $a2, $zero, 0x1111
    ctx->pc = 0x1f7200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4369));
label_1f7204:
    // 0x1f7204: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7208:
    // 0x1f7208: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f720c:
    // 0x1f720c: 0xc066c72  jal         func_19B1C8
label_1f7210:
    if (ctx->pc == 0x1F7210u) {
        ctx->pc = 0x1F7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F720Cu;
        // 0x1f7210: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7214u;
        goto label_1f7214;
    }
    ctx->pc = 0x1F720Cu;
    SET_GPR_U32(ctx, 31, 0x1F7214u);
    ctx->pc = 0x1F7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F720Cu;
    // 0x1f7210: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F720Cu, 0x1F7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7214u;
label_1f7214:
    // 0x1f7214: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f7214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f7218:
    // 0x1f7218: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f7218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f721c:
    // 0x1f721c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f721cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7220:
    // 0x1f7220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7224:
    // 0x1f7224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7228:
    // 0x1f7228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f722c:
    // 0x1f722c: 0x3e00008  jr          $ra
label_1f7230:
    if (ctx->pc == 0x1F7230u) {
        ctx->pc = 0x1F7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F722Cu;
        // 0x1f7230: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7234u;
        goto label_1f7234;
    }
    ctx->pc = 0x1F722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F722Cu;
        // 0x1f7230: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7234u;
label_1f7234:
    // 0x1f7234: 0x0  nop
    ctx->pc = 0x1f7234u;
    // NOP
label_1f7238:
    // 0x1f7238: 0x0  nop
    ctx->pc = 0x1f7238u;
    // NOP
label_1f723c:
    // 0x1f723c: 0x0  nop
    ctx->pc = 0x1f723cu;
    // NOP
label_1f7240:
    // 0x1f7240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f7244:
    // 0x1f7244: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f7244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7248:
    // 0x1f7248: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f724c:
    // 0x1f724c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f724cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f7250:
    // 0x1f7250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f7254:
    // 0x1f7254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f7254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f7258:
    // 0x1f7258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f725c:
    // 0x1f725c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7260:
    // 0x1f7260: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f7260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f7264:
    // 0x1f7264: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7268:
    // 0x1f7268: 0xc085cc4  jal         func_217310
label_1f726c:
    if (ctx->pc == 0x1F726Cu) {
        ctx->pc = 0x1F726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7268u;
        // 0x1f726c: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7270u;
        goto label_1f7270;
    }
    ctx->pc = 0x1F7268u;
    SET_GPR_U32(ctx, 31, 0x1F7270u);
    ctx->pc = 0x1F726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7268u;
    // 0x1f726c: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F7270u;
label_1f7270:
    // 0x1f7270: 0xc078050  jal         func_1E0140
label_1f7274:
    if (ctx->pc == 0x1F7274u) {
        ctx->pc = 0x1F7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7270u;
        // 0x1f7274: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7278u;
        goto label_1f7278;
    }
    ctx->pc = 0x1F7270u;
    SET_GPR_U32(ctx, 31, 0x1F7278u);
    ctx->pc = 0x1F7274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7270u;
    // 0x1f7274: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x1F7270u, 0x1F7278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7278u;
label_1f7278:
    // 0x1f7278: 0xc078070  jal         func_1E01C0
label_1f727c:
    if (ctx->pc == 0x1F727Cu) {
        ctx->pc = 0x1F7280u;
        goto label_1f7280;
    }
    ctx->pc = 0x1F7278u;
    SET_GPR_U32(ctx, 31, 0x1F7280u);
    ctx->pc = 0x1E01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01C0u, 0x1F7278u, 0x1F7280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7280u;
label_1f7280:
    // 0x1f7280: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7284:
    // 0x1f7284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f7288:
    // 0x1f7288: 0xac206f1c  sw          $zero, 0x6F1C($at)
    ctx->pc = 0x1f7288u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28444), GPR_U32(ctx, 0));
label_1f728c:
    // 0x1f728c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f728cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7290:
    // 0x1f7290: 0xac206f18  sw          $zero, 0x6F18($at)
    ctx->pc = 0x1f7290u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28440), GPR_U32(ctx, 0));
label_1f7294:
    // 0x1f7294: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7298:
    // 0x1f7298: 0xac206f2c  sw          $zero, 0x6F2C($at)
    ctx->pc = 0x1f7298u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28460), GPR_U32(ctx, 0));
label_1f729c:
    // 0x1f729c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f729cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f72a0:
    // 0x1f72a0: 0xac206f28  sw          $zero, 0x6F28($at)
    ctx->pc = 0x1f72a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28456), GPR_U32(ctx, 0));
label_1f72a4:
    // 0x1f72a4: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f72a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f72a8:
    // 0x1f72a8: 0xac206f3c  sw          $zero, 0x6F3C($at)
    ctx->pc = 0x1f72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28476), GPR_U32(ctx, 0));
label_1f72ac:
    // 0x1f72ac: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f72acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f72b0:
    // 0x1f72b0: 0xc080130  jal         func_2004C0
label_1f72b4:
    if (ctx->pc == 0x1F72B4u) {
        ctx->pc = 0x1F72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72B0u;
        // 0x1f72b4: 0xac206f38  sw          $zero, 0x6F38($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 28472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F72B8u;
        goto label_1f72b8;
    }
    ctx->pc = 0x1F72B0u;
    SET_GPR_U32(ctx, 31, 0x1F72B8u);
    ctx->pc = 0x1F72B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F72B0u;
    // 0x1f72b4: 0xac206f38  sw          $zero, 0x6F38($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 28472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004C0u;
    { ctx->pc = 0x2004c0; return; }
    ctx->pc = 0x1F72B8u;
label_1f72b8:
    // 0x1f72b8: 0xc07dd98  jal         func_1F7660
label_1f72bc:
    if (ctx->pc == 0x1F72BCu) {
        ctx->pc = 0x1F72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72B8u;
        // 0x1f72bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F72C0u;
        goto label_1f72c0;
    }
    ctx->pc = 0x1F72B8u;
    SET_GPR_U32(ctx, 31, 0x1F72C0u);
    ctx->pc = 0x1F72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F72B8u;
    // 0x1f72bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    { ctx->pc = 0x1f7660; return; }
    ctx->pc = 0x1F72C0u;
label_1f72c0:
    // 0x1f72c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f72c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f72c4:
    // 0x1f72c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f72c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f72c8:
    // 0x1f72c8: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x1f72c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_1f72cc:
    // 0x1f72cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f72ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f72d0:
    // 0x1f72d0: 0x24846f10  addiu       $a0, $a0, 0x6F10
    ctx->pc = 0x1f72d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28432));
label_1f72d4:
    // 0x1f72d4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1f72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f72d8:
    // 0x1f72d8: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
label_1f72dc:
    if (ctx->pc == 0x1F72DCu) {
        ctx->pc = 0x1F72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72D8u;
        // 0x1f72dc: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F72E0u;
        goto label_1f72e0;
    }
    ctx->pc = 0x1F72D8u;
    {
        const bool branch_taken_0x1f72d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72D8u;
        // 0x1f72dc: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f72d8) {
            ctx->pc = 0x1F72ECu;
            goto label_1f72ec;
        }
    }
    ctx->pc = 0x1F72E0u;
label_1f72e0:
    // 0x1f72e0: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1f72e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_1f72e4:
    // 0x1f72e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f72e8:
    if (ctx->pc == 0x1F72E8u) {
        ctx->pc = 0x1F72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72E4u;
        // 0x1f72e8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F72ECu;
        goto label_1f72ec;
    }
    ctx->pc = 0x1F72E4u;
    {
        const bool branch_taken_0x1f72e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F72E4u;
        // 0x1f72e8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f72e4) {
            ctx->pc = 0x1F72F8u;
            goto label_1f72f8;
        }
    }
    ctx->pc = 0x1F72ECu;
label_1f72ec:
    // 0x1f72ec: 0x0  nop
    ctx->pc = 0x1f72ecu;
    // NOP
label_1f72f0:
    // 0x1f72f0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1f72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f72f4:
    // 0x1f72f4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f72f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f72f8:
    // 0x1f72f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f72f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f72fc:
    // 0x1f72fc: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1f72fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f7300:
    // 0x1f7300: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1f7304:
    if (ctx->pc == 0x1F7304u) {
        ctx->pc = 0x1F7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7300u;
        // 0x1f7304: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7308u;
        goto label_1f7308;
    }
    ctx->pc = 0x1F7300u;
    {
        const bool branch_taken_0x1f7300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7300u;
        // 0x1f7304: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7300) {
            ctx->pc = 0x1F72D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f72d8;
        }
    }
    ctx->pc = 0x1F7308u;
label_1f7308:
    // 0x1f7308: 0xc085904  jal         func_216410
label_1f730c:
    if (ctx->pc == 0x1F730Cu) {
        ctx->pc = 0x1F7310u;
        goto label_1f7310;
    }
    ctx->pc = 0x1F7308u;
    SET_GPR_U32(ctx, 31, 0x1F7310u);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x1F7310u;
label_1f7310:
    // 0x1f7310: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f7314:
    if (ctx->pc == 0x1F7314u) {
        ctx->pc = 0x1F7318u;
        goto label_1f7318;
    }
    ctx->pc = 0x1F7310u;
    {
        const bool branch_taken_0x1f7310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7310) {
            ctx->pc = 0x1F7340u;
            goto label_1f7340;
        }
    }
    ctx->pc = 0x1F7318u;
label_1f7318:
    // 0x1f7318: 0xc07b48c  jal         func_1ED230
label_1f731c:
    if (ctx->pc == 0x1F731Cu) {
        ctx->pc = 0x1F7320u;
        goto label_1f7320;
    }
    ctx->pc = 0x1F7318u;
    SET_GPR_U32(ctx, 31, 0x1F7320u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F7320u;
label_1f7320:
    // 0x1f7320: 0xc085904  jal         func_216410
label_1f7324:
    if (ctx->pc == 0x1F7324u) {
        ctx->pc = 0x1F7328u;
        goto label_1f7328;
    }
    ctx->pc = 0x1F7320u;
    SET_GPR_U32(ctx, 31, 0x1F7328u);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x1F7328u;
label_1f7328:
    // 0x1f7328: 0x0  nop
    ctx->pc = 0x1f7328u;
    // NOP
label_1f732c:
    // 0x1f732c: 0x0  nop
    ctx->pc = 0x1f732cu;
    // NOP
label_1f7330:
    // 0x1f7330: 0x0  nop
    ctx->pc = 0x1f7330u;
    // NOP
label_1f7334:
    // 0x1f7334: 0x0  nop
    ctx->pc = 0x1f7334u;
    // NOP
label_1f7338:
    // 0x1f7338: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1f733c:
    if (ctx->pc == 0x1F733Cu) {
        ctx->pc = 0x1F7340u;
        goto label_1f7340;
    }
    ctx->pc = 0x1F7338u;
    {
        const bool branch_taken_0x1f7338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7338) {
            ctx->pc = 0x1F7318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7318;
        }
    }
    ctx->pc = 0x1F7340u;
label_1f7340:
    // 0x1f7340: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1f7340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1f7344:
    // 0x1f7344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f7348:
    if (ctx->pc == 0x1F7348u) {
        ctx->pc = 0x1F734Cu;
        goto label_1f734c;
    }
    ctx->pc = 0x1F7344u;
    {
        const bool branch_taken_0x1f7344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7344) {
            ctx->pc = 0x1F7354u;
            goto label_1f7354;
        }
    }
    ctx->pc = 0x1F734Cu;
label_1f734c:
    // 0x1f734c: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1f7350:
    if (ctx->pc == 0x1F7350u) {
        ctx->pc = 0x1F7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F734Cu;
        // 0x1f7350: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7354u;
        goto label_1f7354;
    }
    ctx->pc = 0x1F734Cu;
    {
        const bool branch_taken_0x1f734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F734Cu;
        // 0x1f7350: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f734c) {
            ctx->pc = 0x1F75D8u;
            { ctx->pc = 0x1f75d8; return; }
        }
    }
    ctx->pc = 0x1F7354u;
label_1f7354:
    // 0x1f7354: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1f7354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1f7358:
    // 0x1f7358: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f735c:
    if (ctx->pc == 0x1F735Cu) {
        ctx->pc = 0x1F735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7358u;
        // 0x1f735c: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7360u;
        goto label_1f7360;
    }
    ctx->pc = 0x1F7358u;
    {
        const bool branch_taken_0x1f7358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7358u;
        // 0x1f735c: 0x122100  sll         $a0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7358) {
            ctx->pc = 0x1F7368u;
            goto label_1f7368;
        }
    }
    ctx->pc = 0x1F7360u;
label_1f7360:
    // 0x1f7360: 0x1000009d  b           . + 4 + (0x9D << 2)
label_1f7364:
    if (ctx->pc == 0x1F7364u) {
        ctx->pc = 0x1F7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7360u;
        // 0x1f7364: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7368u;
        goto label_1f7368;
    }
    ctx->pc = 0x1F7360u;
    {
        const bool branch_taken_0x1f7360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7360u;
        // 0x1f7364: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7360) {
            ctx->pc = 0x1F75D8u;
            { ctx->pc = 0x1f75d8; return; }
        }
    }
    ctx->pc = 0x1F7368u;
label_1f7368:
    // 0x1f7368: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1f7368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1f736c:
    // 0x1f736c: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f736cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f7370:
    // 0x1f7370: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f7370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f7374:
    // 0x1f7374: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f7374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f7378:
    // 0x1f7378: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_1f737c:
    if (ctx->pc == 0x1F737Cu) {
        ctx->pc = 0x1F737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7378u;
        // 0x1f737c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7380u;
        goto label_1f7380;
    }
    ctx->pc = 0x1F7378u;
    {
        const bool branch_taken_0x1f7378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7378u;
        // 0x1f737c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7378) {
            ctx->pc = 0x1F74C8u;
            { ctx->pc = 0x1f74c8; return; }
        }
    }
    ctx->pc = 0x1F7380u;
label_1f7380:
    // 0x1f7380: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1f7380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1f7384:
    // 0x1f7384: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x1f7384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_1f7388:
    // 0x1f7388: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1f738c:
    if (ctx->pc == 0x1F738Cu) {
        ctx->pc = 0x1F738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7388u;
        // 0x1f738c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7390u;
        goto label_1f7390;
    }
    ctx->pc = 0x1F7388u;
    {
        const bool branch_taken_0x1f7388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7388u;
        // 0x1f738c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7388) {
            ctx->pc = 0x1F73A8u;
            goto label_1f73a8;
        }
    }
    ctx->pc = 0x1F7390u;
label_1f7390:
    // 0x1f7390: 0x16040005  bne         $s0, $a0, . + 4 + (0x5 << 2)
label_1f7394:
    if (ctx->pc == 0x1F7394u) {
        ctx->pc = 0x1F7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7390u;
        // 0x1f7394: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7398u;
        goto label_1f7398;
    }
    ctx->pc = 0x1F7390u;
    {
        const bool branch_taken_0x1f7390 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7390u;
        // 0x1f7394: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7390) {
            ctx->pc = 0x1F73A8u;
            goto label_1f73a8;
        }
    }
    ctx->pc = 0x1F7398u;
label_1f7398:
    // 0x1f7398: 0xc05b420  jal         func_16D080
label_1f739c:
    if (ctx->pc == 0x1F739Cu) {
        ctx->pc = 0x1F73A0u;
        goto label_1f73a0;
    }
    ctx->pc = 0x1F7398u;
    SET_GPR_U32(ctx, 31, 0x1F73A0u);
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F7398u, 0x1F73A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F73A0u;
label_1f73a0:
    // 0x1f73a0: 0x10000076  b           . + 4 + (0x76 << 2)
label_1f73a4:
    if (ctx->pc == 0x1F73A4u) {
        ctx->pc = 0x1F73A8u;
        goto label_1f73a8;
    }
    ctx->pc = 0x1F73A0u;
    {
        const bool branch_taken_0x1f73a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f73a0) {
            ctx->pc = 0x1F757Cu;
            { ctx->pc = 0x1f757c; return; }
        }
    }
    ctx->pc = 0x1F73A8u;
label_1f73a8:
    // 0x1f73a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f73a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f73ac:
    // 0x1f73ac: 0xc05b420  jal         func_16D080
    ctx->pc = 0x1f73b0u;
    return;
}

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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a6cc0u: goto label_1a6cc0;
        case 0x1a6cc4u: goto label_1a6cc4;
        case 0x1a6cc8u: goto label_1a6cc8;
        case 0x1a6cccu: goto label_1a6ccc;
        case 0x1a6cd0u: goto label_1a6cd0;
        case 0x1a6cd4u: goto label_1a6cd4;
        case 0x1a6cd8u: goto label_1a6cd8;
        case 0x1a6cdcu: goto label_1a6cdc;
        case 0x1a6ce0u: goto label_1a6ce0;
        case 0x1a6ce4u: goto label_1a6ce4;
        case 0x1a6ce8u: goto label_1a6ce8;
        case 0x1a6cecu: goto label_1a6cec;
        case 0x1a6cf0u: goto label_1a6cf0;
        case 0x1a6cf4u: goto label_1a6cf4;
        case 0x1a6cf8u: goto label_1a6cf8;
        case 0x1a6cfcu: goto label_1a6cfc;
        case 0x1a6d00u: goto label_1a6d00;
        case 0x1a6d04u: goto label_1a6d04;
        case 0x1a6d08u: goto label_1a6d08;
        case 0x1a6d0cu: goto label_1a6d0c;
        case 0x1a6d10u: goto label_1a6d10;
        case 0x1a6d14u: goto label_1a6d14;
        case 0x1a6d18u: goto label_1a6d18;
        case 0x1a6d1cu: goto label_1a6d1c;
        case 0x1a6d20u: goto label_1a6d20;
        case 0x1a6d24u: goto label_1a6d24;
        case 0x1a6d28u: goto label_1a6d28;
        case 0x1a6d2cu: goto label_1a6d2c;
        case 0x1a6d30u: goto label_1a6d30;
        case 0x1a6d34u: goto label_1a6d34;
        case 0x1a6d38u: goto label_1a6d38;
        case 0x1a6d3cu: goto label_1a6d3c;
        case 0x1a6d40u: goto label_1a6d40;
        case 0x1a6d44u: goto label_1a6d44;
        case 0x1a6d48u: goto label_1a6d48;
        case 0x1a6d4cu: goto label_1a6d4c;
        case 0x1a6d50u: goto label_1a6d50;
        case 0x1a6d54u: goto label_1a6d54;
        case 0x1a6d58u: goto label_1a6d58;
        case 0x1a6d5cu: goto label_1a6d5c;
        case 0x1a6d60u: goto label_1a6d60;
        case 0x1a6d64u: goto label_1a6d64;
        case 0x1a6d68u: goto label_1a6d68;
        case 0x1a6d6cu: goto label_1a6d6c;
        case 0x1a6d70u: goto label_1a6d70;
        case 0x1a6d74u: goto label_1a6d74;
        case 0x1a6d78u: goto label_1a6d78;
        case 0x1a6d7cu: goto label_1a6d7c;
        case 0x1a6d80u: goto label_1a6d80;
        case 0x1a6d84u: goto label_1a6d84;
        case 0x1a6d88u: goto label_1a6d88;
        case 0x1a6d8cu: goto label_1a6d8c;
        case 0x1a6d90u: goto label_1a6d90;
        case 0x1a6d94u: goto label_1a6d94;
        case 0x1a6d98u: goto label_1a6d98;
        case 0x1a6d9cu: goto label_1a6d9c;
        case 0x1a6da0u: goto label_1a6da0;
        case 0x1a6da4u: goto label_1a6da4;
        case 0x1a6da8u: goto label_1a6da8;
        case 0x1a6dacu: goto label_1a6dac;
        case 0x1a6db0u: goto label_1a6db0;
        case 0x1a6db4u: goto label_1a6db4;
        case 0x1a6db8u: goto label_1a6db8;
        case 0x1a6dbcu: goto label_1a6dbc;
        case 0x1a6dc0u: goto label_1a6dc0;
        case 0x1a6dc4u: goto label_1a6dc4;
        case 0x1a6dc8u: goto label_1a6dc8;
        case 0x1a6dccu: goto label_1a6dcc;
        case 0x1a6dd0u: goto label_1a6dd0;
        case 0x1a6dd4u: goto label_1a6dd4;
        case 0x1a6dd8u: goto label_1a6dd8;
        case 0x1a6ddcu: goto label_1a6ddc;
        case 0x1a6de0u: goto label_1a6de0;
        case 0x1a6de4u: goto label_1a6de4;
        case 0x1a6de8u: goto label_1a6de8;
        case 0x1a6decu: goto label_1a6dec;
        case 0x1a6df0u: goto label_1a6df0;
        case 0x1a6df4u: goto label_1a6df4;
        case 0x1a6df8u: goto label_1a6df8;
        case 0x1a6dfcu: goto label_1a6dfc;
        case 0x1a6e00u: goto label_1a6e00;
        case 0x1a6e04u: goto label_1a6e04;
        case 0x1a6e08u: goto label_1a6e08;
        case 0x1a6e0cu: goto label_1a6e0c;
        case 0x1a6e10u: goto label_1a6e10;
        case 0x1a6e14u: goto label_1a6e14;
        case 0x1a6e18u: goto label_1a6e18;
        case 0x1a6e1cu: goto label_1a6e1c;
        case 0x1a6e20u: goto label_1a6e20;
        case 0x1a6e24u: goto label_1a6e24;
        case 0x1a6e28u: goto label_1a6e28;
        case 0x1a6e2cu: goto label_1a6e2c;
        case 0x1a6e30u: goto label_1a6e30;
        case 0x1a6e34u: goto label_1a6e34;
        case 0x1a6e38u: goto label_1a6e38;
        case 0x1a6e3cu: goto label_1a6e3c;
        case 0x1a6e40u: goto label_1a6e40;
        case 0x1a6e44u: goto label_1a6e44;
        case 0x1a6e48u: goto label_1a6e48;
        case 0x1a6e4cu: goto label_1a6e4c;
        case 0x1a6e50u: goto label_1a6e50;
        case 0x1a6e54u: goto label_1a6e54;
        case 0x1a6e58u: goto label_1a6e58;
        case 0x1a6e5cu: goto label_1a6e5c;
        case 0x1a6e60u: goto label_1a6e60;
        case 0x1a6e64u: goto label_1a6e64;
        case 0x1a6e68u: goto label_1a6e68;
        case 0x1a6e6cu: goto label_1a6e6c;
        case 0x1a6e70u: goto label_1a6e70;
        case 0x1a6e74u: goto label_1a6e74;
        case 0x1a6e78u: goto label_1a6e78;
        case 0x1a6e7cu: goto label_1a6e7c;
        case 0x1a6e80u: goto label_1a6e80;
        case 0x1a6e84u: goto label_1a6e84;
        case 0x1a6e88u: goto label_1a6e88;
        case 0x1a6e8cu: goto label_1a6e8c;
        case 0x1a6e90u: goto label_1a6e90;
        case 0x1a6e94u: goto label_1a6e94;
        case 0x1a6e98u: goto label_1a6e98;
        case 0x1a6e9cu: goto label_1a6e9c;
        case 0x1a6ea0u: goto label_1a6ea0;
        case 0x1a6ea4u: goto label_1a6ea4;
        case 0x1a6ea8u: goto label_1a6ea8;
        case 0x1a6eacu: goto label_1a6eac;
        case 0x1a6eb0u: goto label_1a6eb0;
        case 0x1a6eb4u: goto label_1a6eb4;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ebcu: goto label_1a6ebc;
        case 0x1a6ec0u: goto label_1a6ec0;
        case 0x1a6ec4u: goto label_1a6ec4;
        case 0x1a6ec8u: goto label_1a6ec8;
        case 0x1a6eccu: goto label_1a6ecc;
        case 0x1a6ed0u: goto label_1a6ed0;
        case 0x1a6ed4u: goto label_1a6ed4;
        case 0x1a6ed8u: goto label_1a6ed8;
        case 0x1a6edcu: goto label_1a6edc;
        case 0x1a6ee0u: goto label_1a6ee0;
        case 0x1a6ee4u: goto label_1a6ee4;
        case 0x1a6ee8u: goto label_1a6ee8;
        case 0x1a6eecu: goto label_1a6eec;
        case 0x1a6ef0u: goto label_1a6ef0;
        case 0x1a6ef4u: goto label_1a6ef4;
        case 0x1a6ef8u: goto label_1a6ef8;
        case 0x1a6efcu: goto label_1a6efc;
        case 0x1a6f00u: goto label_1a6f00;
        case 0x1a6f04u: goto label_1a6f04;
        case 0x1a6f08u: goto label_1a6f08;
        case 0x1a6f0cu: goto label_1a6f0c;
        case 0x1a6f10u: goto label_1a6f10;
        case 0x1a6f14u: goto label_1a6f14;
        case 0x1a6f18u: goto label_1a6f18;
        case 0x1a6f1cu: goto label_1a6f1c;
        case 0x1a6f20u: goto label_1a6f20;
        case 0x1a6f24u: goto label_1a6f24;
        case 0x1a6f28u: goto label_1a6f28;
        case 0x1a6f2cu: goto label_1a6f2c;
        case 0x1a6f30u: goto label_1a6f30;
        case 0x1a6f34u: goto label_1a6f34;
        case 0x1a6f38u: goto label_1a6f38;
        case 0x1a6f3cu: goto label_1a6f3c;
        case 0x1a6f40u: goto label_1a6f40;
        case 0x1a6f44u: goto label_1a6f44;
        case 0x1a6f48u: goto label_1a6f48;
        case 0x1a6f4cu: goto label_1a6f4c;
        case 0x1a6f50u: goto label_1a6f50;
        case 0x1a6f54u: goto label_1a6f54;
        case 0x1a6f58u: goto label_1a6f58;
        case 0x1a6f5cu: goto label_1a6f5c;
        case 0x1a6f60u: goto label_1a6f60;
        case 0x1a6f64u: goto label_1a6f64;
        case 0x1a6f68u: goto label_1a6f68;
        case 0x1a6f6cu: goto label_1a6f6c;
        case 0x1a6f70u: goto label_1a6f70;
        case 0x1a6f74u: goto label_1a6f74;
        case 0x1a6f78u: goto label_1a6f78;
        case 0x1a6f7cu: goto label_1a6f7c;
        case 0x1a6f80u: goto label_1a6f80;
        case 0x1a6f84u: goto label_1a6f84;
        case 0x1a6f88u: goto label_1a6f88;
        case 0x1a6f8cu: goto label_1a6f8c;
        case 0x1a6f90u: goto label_1a6f90;
        case 0x1a6f94u: goto label_1a6f94;
        case 0x1a6f98u: goto label_1a6f98;
        case 0x1a6f9cu: goto label_1a6f9c;
        case 0x1a6fa0u: goto label_1a6fa0;
        case 0x1a6fa4u: goto label_1a6fa4;
        case 0x1a6fa8u: goto label_1a6fa8;
        case 0x1a6facu: goto label_1a6fac;
        case 0x1a6fb0u: goto label_1a6fb0;
        case 0x1a6fb4u: goto label_1a6fb4;
        case 0x1a6fb8u: goto label_1a6fb8;
        case 0x1a6fbcu: goto label_1a6fbc;
        case 0x1a6fc0u: goto label_1a6fc0;
        case 0x1a6fc4u: goto label_1a6fc4;
        case 0x1a6fc8u: goto label_1a6fc8;
        case 0x1a6fccu: goto label_1a6fcc;
        case 0x1a6fd0u: goto label_1a6fd0;
        case 0x1a6fd4u: goto label_1a6fd4;
        case 0x1a6fd8u: goto label_1a6fd8;
        case 0x1a6fdcu: goto label_1a6fdc;
        case 0x1a6fe0u: goto label_1a6fe0;
        case 0x1a6fe4u: goto label_1a6fe4;
        case 0x1a6fe8u: goto label_1a6fe8;
        case 0x1a6fecu: goto label_1a6fec;
        case 0x1a6ff0u: goto label_1a6ff0;
        case 0x1a6ff4u: goto label_1a6ff4;
        case 0x1a6ff8u: goto label_1a6ff8;
        case 0x1a6ffcu: goto label_1a6ffc;
        case 0x1a7000u: goto label_1a7000;
        case 0x1a7004u: goto label_1a7004;
        case 0x1a7008u: goto label_1a7008;
        case 0x1a700cu: goto label_1a700c;
        case 0x1a7010u: goto label_1a7010;
        case 0x1a7014u: goto label_1a7014;
        case 0x1a7018u: goto label_1a7018;
        case 0x1a701cu: goto label_1a701c;
        case 0x1a7020u: goto label_1a7020;
        case 0x1a7024u: goto label_1a7024;
        case 0x1a7028u: goto label_1a7028;
        case 0x1a702cu: goto label_1a702c;
        case 0x1a7030u: goto label_1a7030;
        case 0x1a7034u: goto label_1a7034;
        case 0x1a7038u: goto label_1a7038;
        case 0x1a703cu: goto label_1a703c;
        case 0x1a7040u: goto label_1a7040;
        case 0x1a7044u: goto label_1a7044;
        case 0x1a7048u: goto label_1a7048;
        case 0x1a704cu: goto label_1a704c;
        case 0x1a7050u: goto label_1a7050;
        case 0x1a7054u: goto label_1a7054;
        case 0x1a7058u: goto label_1a7058;
        case 0x1a705cu: goto label_1a705c;
        case 0x1a7060u: goto label_1a7060;
        case 0x1a7064u: goto label_1a7064;
        case 0x1a7068u: goto label_1a7068;
        case 0x1a706cu: goto label_1a706c;
        case 0x1a7070u: goto label_1a7070;
        case 0x1a7074u: goto label_1a7074;
        case 0x1a7078u: goto label_1a7078;
        case 0x1a707cu: goto label_1a707c;
        case 0x1a7080u: goto label_1a7080;
        case 0x1a7084u: goto label_1a7084;
        case 0x1a7088u: goto label_1a7088;
        case 0x1a708cu: goto label_1a708c;
        case 0x1a7090u: goto label_1a7090;
        case 0x1a7094u: goto label_1a7094;
        case 0x1a7098u: goto label_1a7098;
        case 0x1a709cu: goto label_1a709c;
        case 0x1a70a0u: goto label_1a70a0;
        case 0x1a70a4u: goto label_1a70a4;
        case 0x1a70a8u: goto label_1a70a8;
        case 0x1a70acu: goto label_1a70ac;
        case 0x1a70b0u: goto label_1a70b0;
        case 0x1a70b4u: goto label_1a70b4;
        case 0x1a70b8u: goto label_1a70b8;
        case 0x1a70bcu: goto label_1a70bc;
        case 0x1a70c0u: goto label_1a70c0;
        case 0x1a70c4u: goto label_1a70c4;
        case 0x1a70c8u: goto label_1a70c8;
        case 0x1a70ccu: goto label_1a70cc;
        case 0x1a70d0u: goto label_1a70d0;
        case 0x1a70d4u: goto label_1a70d4;
        case 0x1a70d8u: goto label_1a70d8;
        case 0x1a70dcu: goto label_1a70dc;
        case 0x1a70e0u: goto label_1a70e0;
        case 0x1a70e4u: goto label_1a70e4;
        case 0x1a70e8u: goto label_1a70e8;
        case 0x1a70ecu: goto label_1a70ec;
        case 0x1a70f0u: goto label_1a70f0;
        case 0x1a70f4u: goto label_1a70f4;
        case 0x1a70f8u: goto label_1a70f8;
        case 0x1a70fcu: goto label_1a70fc;
        case 0x1a7100u: goto label_1a7100;
        case 0x1a7104u: goto label_1a7104;
        case 0x1a7108u: goto label_1a7108;
        case 0x1a710cu: goto label_1a710c;
        case 0x1a7110u: goto label_1a7110;
        case 0x1a7114u: goto label_1a7114;
        case 0x1a7118u: goto label_1a7118;
        case 0x1a711cu: goto label_1a711c;
        case 0x1a7120u: goto label_1a7120;
        case 0x1a7124u: goto label_1a7124;
        case 0x1a7128u: goto label_1a7128;
        case 0x1a712cu: goto label_1a712c;
        case 0x1a7130u: goto label_1a7130;
        case 0x1a7134u: goto label_1a7134;
        case 0x1a7138u: goto label_1a7138;
        case 0x1a713cu: goto label_1a713c;
        case 0x1a7140u: goto label_1a7140;
        case 0x1a7144u: goto label_1a7144;
        case 0x1a7148u: goto label_1a7148;
        case 0x1a714cu: goto label_1a714c;
        case 0x1a7150u: goto label_1a7150;
        case 0x1a7154u: goto label_1a7154;
        case 0x1a7158u: goto label_1a7158;
        case 0x1a715cu: goto label_1a715c;
        case 0x1a7160u: goto label_1a7160;
        case 0x1a7164u: goto label_1a7164;
        case 0x1a7168u: goto label_1a7168;
        case 0x1a716cu: goto label_1a716c;
        case 0x1a7170u: goto label_1a7170;
        case 0x1a7174u: goto label_1a7174;
        case 0x1a7178u: goto label_1a7178;
        case 0x1a717cu: goto label_1a717c;
        case 0x1a7180u: goto label_1a7180;
        case 0x1a7184u: goto label_1a7184;
        case 0x1a7188u: goto label_1a7188;
        case 0x1a718cu: goto label_1a718c;
        case 0x1a7190u: goto label_1a7190;
        case 0x1a7194u: goto label_1a7194;
        case 0x1a7198u: goto label_1a7198;
        case 0x1a719cu: goto label_1a719c;
        case 0x1a71a0u: goto label_1a71a0;
        case 0x1a71a4u: goto label_1a71a4;
        case 0x1a71a8u: goto label_1a71a8;
        case 0x1a71acu: goto label_1a71ac;
        case 0x1a71b0u: goto label_1a71b0;
        case 0x1a71b4u: goto label_1a71b4;
        case 0x1a71b8u: goto label_1a71b8;
        case 0x1a71bcu: goto label_1a71bc;
        case 0x1a71c0u: goto label_1a71c0;
        case 0x1a71c4u: goto label_1a71c4;
        case 0x1a71c8u: goto label_1a71c8;
        case 0x1a71ccu: goto label_1a71cc;
        case 0x1a71d0u: goto label_1a71d0;
        case 0x1a71d4u: goto label_1a71d4;
        case 0x1a71d8u: goto label_1a71d8;
        case 0x1a71dcu: goto label_1a71dc;
        case 0x1a71e0u: goto label_1a71e0;
        case 0x1a71e4u: goto label_1a71e4;
        case 0x1a71e8u: goto label_1a71e8;
        case 0x1a71ecu: goto label_1a71ec;
        case 0x1a71f0u: goto label_1a71f0;
        case 0x1a71f4u: goto label_1a71f4;
        case 0x1a71f8u: goto label_1a71f8;
        case 0x1a71fcu: goto label_1a71fc;
        case 0x1a7200u: goto label_1a7200;
        case 0x1a7204u: goto label_1a7204;
        case 0x1a7208u: goto label_1a7208;
        case 0x1a720cu: goto label_1a720c;
        case 0x1a7210u: goto label_1a7210;
        case 0x1a7214u: goto label_1a7214;
        case 0x1a7218u: goto label_1a7218;
        case 0x1a721cu: goto label_1a721c;
        case 0x1a7220u: goto label_1a7220;
        case 0x1a7224u: goto label_1a7224;
        case 0x1a7228u: goto label_1a7228;
        case 0x1a722cu: goto label_1a722c;
        case 0x1a7230u: goto label_1a7230;
        case 0x1a7234u: goto label_1a7234;
        case 0x1a7238u: goto label_1a7238;
        case 0x1a723cu: goto label_1a723c;
        case 0x1a7240u: goto label_1a7240;
        case 0x1a7244u: goto label_1a7244;
        case 0x1a7248u: goto label_1a7248;
        case 0x1a724cu: goto label_1a724c;
        case 0x1a7250u: goto label_1a7250;
        case 0x1a7254u: goto label_1a7254;
        case 0x1a7258u: goto label_1a7258;
        case 0x1a725cu: goto label_1a725c;
        case 0x1a7260u: goto label_1a7260;
        case 0x1a7264u: goto label_1a7264;
        case 0x1a7268u: goto label_1a7268;
        case 0x1a726cu: goto label_1a726c;
        case 0x1a7270u: goto label_1a7270;
        case 0x1a7274u: goto label_1a7274;
        case 0x1a7278u: goto label_1a7278;
        case 0x1a727cu: goto label_1a727c;
        case 0x1a7280u: goto label_1a7280;
        case 0x1a7284u: goto label_1a7284;
        case 0x1a7288u: goto label_1a7288;
        case 0x1a728cu: goto label_1a728c;
        case 0x1a7290u: goto label_1a7290;
        case 0x1a7294u: goto label_1a7294;
        case 0x1a7298u: goto label_1a7298;
        case 0x1a729cu: goto label_1a729c;
        case 0x1a72a0u: goto label_1a72a0;
        case 0x1a72a4u: goto label_1a72a4;
        case 0x1a72a8u: goto label_1a72a8;
        case 0x1a72acu: goto label_1a72ac;
        case 0x1a72b0u: goto label_1a72b0;
        case 0x1a72b4u: goto label_1a72b4;
        case 0x1a72b8u: goto label_1a72b8;
        case 0x1a72bcu: goto label_1a72bc;
        case 0x1a72c0u: goto label_1a72c0;
        case 0x1a72c4u: goto label_1a72c4;
        case 0x1a72c8u: goto label_1a72c8;
        case 0x1a72ccu: goto label_1a72cc;
        case 0x1a72d0u: goto label_1a72d0;
        case 0x1a72d4u: goto label_1a72d4;
        case 0x1a72d8u: goto label_1a72d8;
        case 0x1a72dcu: goto label_1a72dc;
        case 0x1a72e0u: goto label_1a72e0;
        case 0x1a72e4u: goto label_1a72e4;
        case 0x1a72e8u: goto label_1a72e8;
        case 0x1a72ecu: goto label_1a72ec;
        case 0x1a72f0u: goto label_1a72f0;
        case 0x1a72f4u: goto label_1a72f4;
        case 0x1a72f8u: goto label_1a72f8;
        case 0x1a72fcu: goto label_1a72fc;
        case 0x1a7300u: goto label_1a7300;
        case 0x1a7304u: goto label_1a7304;
        case 0x1a7308u: goto label_1a7308;
        case 0x1a730cu: goto label_1a730c;
        case 0x1a7310u: goto label_1a7310;
        case 0x1a7314u: goto label_1a7314;
        case 0x1a7318u: goto label_1a7318;
        case 0x1a731cu: goto label_1a731c;
        case 0x1a7320u: goto label_1a7320;
        case 0x1a7324u: goto label_1a7324;
        case 0x1a7328u: goto label_1a7328;
        case 0x1a732cu: goto label_1a732c;
        case 0x1a7330u: goto label_1a7330;
        case 0x1a7334u: goto label_1a7334;
        case 0x1a7338u: goto label_1a7338;
        case 0x1a733cu: goto label_1a733c;
        case 0x1a7340u: goto label_1a7340;
        case 0x1a7344u: goto label_1a7344;
        case 0x1a7348u: goto label_1a7348;
        case 0x1a734cu: goto label_1a734c;
        case 0x1a7350u: goto label_1a7350;
        case 0x1a7354u: goto label_1a7354;
        case 0x1a7358u: goto label_1a7358;
        case 0x1a735cu: goto label_1a735c;
        case 0x1a7360u: goto label_1a7360;
        case 0x1a7364u: goto label_1a7364;
        case 0x1a7368u: goto label_1a7368;
        case 0x1a736cu: goto label_1a736c;
        case 0x1a7370u: goto label_1a7370;
        case 0x1a7374u: goto label_1a7374;
        case 0x1a7378u: goto label_1a7378;
        case 0x1a737cu: goto label_1a737c;
        case 0x1a7380u: goto label_1a7380;
        case 0x1a7384u: goto label_1a7384;
        case 0x1a7388u: goto label_1a7388;
        case 0x1a738cu: goto label_1a738c;
        case 0x1a7390u: goto label_1a7390;
        case 0x1a7394u: goto label_1a7394;
        case 0x1a7398u: goto label_1a7398;
        case 0x1a739cu: goto label_1a739c;
        case 0x1a73a0u: goto label_1a73a0;
        case 0x1a73a4u: goto label_1a73a4;
        case 0x1a73a8u: goto label_1a73a8;
        case 0x1a73acu: goto label_1a73ac;
        case 0x1a73b0u: goto label_1a73b0;
        case 0x1a73b4u: goto label_1a73b4;
        case 0x1a73b8u: goto label_1a73b8;
        case 0x1a73bcu: goto label_1a73bc;
        case 0x1a73c0u: goto label_1a73c0;
        case 0x1a73c4u: goto label_1a73c4;
        case 0x1a73c8u: goto label_1a73c8;
        case 0x1a73ccu: goto label_1a73cc;
        case 0x1a73d0u: goto label_1a73d0;
        case 0x1a73d4u: goto label_1a73d4;
        case 0x1a73d8u: goto label_1a73d8;
        case 0x1a73dcu: goto label_1a73dc;
        case 0x1a73e0u: goto label_1a73e0;
        case 0x1a73e4u: goto label_1a73e4;
        case 0x1a73e8u: goto label_1a73e8;
        case 0x1a73ecu: goto label_1a73ec;
        case 0x1a73f0u: goto label_1a73f0;
        case 0x1a73f4u: goto label_1a73f4;
        case 0x1a73f8u: goto label_1a73f8;
        case 0x1a73fcu: goto label_1a73fc;
        case 0x1a7400u: goto label_1a7400;
        case 0x1a7404u: goto label_1a7404;
        case 0x1a7408u: goto label_1a7408;
        case 0x1a740cu: goto label_1a740c;
        case 0x1a7410u: goto label_1a7410;
        case 0x1a7414u: goto label_1a7414;
        case 0x1a7418u: goto label_1a7418;
        case 0x1a741cu: goto label_1a741c;
        case 0x1a7420u: goto label_1a7420;
        case 0x1a7424u: goto label_1a7424;
        case 0x1a7428u: goto label_1a7428;
        case 0x1a742cu: goto label_1a742c;
        case 0x1a7430u: goto label_1a7430;
        case 0x1a7434u: goto label_1a7434;
        case 0x1a7438u: goto label_1a7438;
        case 0x1a743cu: goto label_1a743c;
        case 0x1a7440u: goto label_1a7440;
        case 0x1a7444u: goto label_1a7444;
        case 0x1a7448u: goto label_1a7448;
        case 0x1a744cu: goto label_1a744c;
        case 0x1a7450u: goto label_1a7450;
        case 0x1a7454u: goto label_1a7454;
        case 0x1a7458u: goto label_1a7458;
        case 0x1a745cu: goto label_1a745c;
        case 0x1a7460u: goto label_1a7460;
        case 0x1a7464u: goto label_1a7464;
        case 0x1a7468u: goto label_1a7468;
        case 0x1a746cu: goto label_1a746c;
        case 0x1a7470u: goto label_1a7470;
        case 0x1a7474u: goto label_1a7474;
        case 0x1a7478u: goto label_1a7478;
        case 0x1a747cu: goto label_1a747c;
        case 0x1a7480u: goto label_1a7480;
        case 0x1a7484u: goto label_1a7484;
        case 0x1a7488u: goto label_1a7488;
        case 0x1a748cu: goto label_1a748c;
        default: return;
    }

label_1a6cc0:
    if (ctx->pc == 0x1A6CC0u) {
        ctx->pc = 0x1A6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CBCu;
        // 0x1a6cc0: 0x8c441824  lw          $a0, 0x1824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CC4u;
        goto label_1a6cc4;
    }
    ctx->pc = 0x1A6CBCu;
    {
        const bool branch_taken_0x1a6cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CBCu;
        // 0x1a6cc0: 0x8c441824  lw          $a0, 0x1824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cbc) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6CC4u;
label_1a6cc4:
    // 0x1a6cc4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6cc8:
    // 0x1a6cc8: 0x8c44182c  lw          $a0, 0x182C($v0)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6188)));
label_1a6ccc:
    // 0x1a6ccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a6cd0:
    // 0x1a6cd0: 0x3e00008  jr          $ra
label_1a6cd4:
    if (ctx->pc == 0x1A6CD4u) {
        ctx->pc = 0x1A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD0u;
        // 0x1a6cd4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CD8u;
        goto label_1a6cd8;
    }
    ctx->pc = 0x1A6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD0u;
        // 0x1a6cd4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CD8u;
label_1a6cd8:
    // 0x1a6cd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a6cdc:
    // 0x1a6cdc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a6ce0:
    // 0x1a6ce0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a6ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a6ce4:
    // 0x1a6ce4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a6ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ce8:
    // 0x1a6ce8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a6ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a6cec:
    // 0x1a6cec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a6cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6cf0:
    // 0x1a6cf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a6cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a6cf4:
    // 0x1a6cf4: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x1a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1a6cf8:
    // 0x1a6cf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a6cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6cfc:
    // 0x1a6cfc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a6cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a6d00:
    // 0x1a6d00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a6d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a6d04:
    // 0x1a6d04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a6d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6d08:
    // 0x1a6d08: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1a6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a6d0c:
    // 0x1a6d0c: 0x2c420061  sltiu       $v0, $v0, 0x61
    ctx->pc = 0x1a6d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
label_1a6d10:
    // 0x1a6d10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a6d14:
    if (ctx->pc == 0x1A6D14u) {
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D10u;
        // 0x1a6d14: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D18u;
        goto label_1a6d18;
    }
    ctx->pc = 0x1A6D10u;
    {
        const bool branch_taken_0x1a6d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D10u;
        // 0x1a6d14: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d10) {
            ctx->pc = 0x1A6D20u;
            goto label_1a6d20;
        }
    }
    ctx->pc = 0x1A6D18u;
label_1a6d18:
    // 0x1a6d18: 0x10000034  b           . + 4 + (0x34 << 2)
label_1a6d1c:
    if (ctx->pc == 0x1A6D1Cu) {
        ctx->pc = 0x1A6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D18u;
        // 0x1a6d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D20u;
        goto label_1a6d20;
    }
    ctx->pc = 0x1A6D18u;
    {
        const bool branch_taken_0x1a6d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D18u;
        // 0x1a6d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d18) {
            ctx->pc = 0x1A6DECu;
            goto label_1a6dec;
        }
    }
    ctx->pc = 0x1A6D20u;
label_1a6d20:
    // 0x1a6d20: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
label_1a6d24:
    if (ctx->pc == 0x1A6D24u) {
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D28u;
        goto label_1a6d28;
    }
    ctx->pc = 0x1A6D20u;
    {
        const bool branch_taken_0x1a6d20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d20) {
            ctx->pc = 0x1A6D68u;
            goto label_1a6d68;
        }
    }
    ctx->pc = 0x1A6D28u;
label_1a6d28:
    // 0x1a6d28: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a6d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d2c:
    // 0x1a6d2c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1a6d30:
    // 0x1a6d30: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x1a6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
label_1a6d34:
    // 0x1a6d34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a6d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6d38:
    // 0x1a6d38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a6d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a6d3c:
    // 0x1a6d3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a6d40:
    // 0x1a6d40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a6d44:
    // 0x1a6d44: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x1a6d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_1a6d48:
    // 0x1a6d48: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1a6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
label_1a6d4c:
    // 0x1a6d4c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1a6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_1a6d50:
    // 0x1a6d50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1a6d54:
    if (ctx->pc == 0x1A6D54u) {
        ctx->pc = 0x1A6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D50u;
        // 0x1a6d54: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D58u;
        goto label_1a6d58;
    }
    ctx->pc = 0x1A6D50u;
    {
        const bool branch_taken_0x1a6d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D50u;
        // 0x1a6d54: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d50) {
            ctx->pc = 0x1A6D74u;
            goto label_1a6d74;
        }
    }
    ctx->pc = 0x1A6D58u;
label_1a6d58:
    // 0x1a6d58: 0xc069bee  jal         func_1A6FB8
label_1a6d5c:
    if (ctx->pc == 0x1A6D5Cu) {
        ctx->pc = 0x1A6D60u;
        goto label_1a6d60;
    }
    ctx->pc = 0x1A6D58u;
    SET_GPR_U32(ctx, 31, 0x1A6D60u);
    ctx->pc = 0x1A6FB8u;
    goto label_1a6fb8;
    ctx->pc = 0x1A6D60u;
label_1a6d60:
    // 0x1a6d60: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a6d64:
    if (ctx->pc == 0x1A6D64u) {
        ctx->pc = 0x1A6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D60u;
        // 0x1a6d64: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D68u;
        goto label_1a6d68;
    }
    ctx->pc = 0x1A6D60u;
    {
        const bool branch_taken_0x1a6d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D60u;
        // 0x1a6d64: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d60) {
            ctx->pc = 0x1A6D78u;
            goto label_1a6d78;
        }
    }
    ctx->pc = 0x1A6D68u;
label_1a6d68:
    // 0x1a6d68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a6d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d6c:
    // 0x1a6d6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a6d70:
    // 0x1a6d70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a6d74:
    // 0x1a6d74: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1a6d78:
    // 0x1a6d78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6d7c:
    // 0x1a6d7c: 0x8c441820  lw          $a0, 0x1820($v0)
    ctx->pc = 0x1a6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6176)));
label_1a6d80:
    // 0x1a6d80: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_1a6d84:
    // 0x1a6d84: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1a6d88:
    // 0x1a6d88: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a6d8c:
    // 0x1a6d8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a6d90:
    // 0x1a6d90: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1a6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1a6d94:
    // 0x1a6d94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a6d98:
    // 0x1a6d98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a6d9c:
    // 0x1a6d9c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1a6da0:
    // 0x1a6da0: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1a6da4:
    // 0x1a6da4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a6da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a6da8:
    // 0x1a6da8: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1a6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_1a6dac:
    // 0x1a6dac: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1a6dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
label_1a6db0:
    // 0x1a6db0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1a6db4:
    // 0x1a6db4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a6db8:
    // 0x1a6db8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6dbc:
    // 0x1a6dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6dc0:
    // 0x1a6dc0: 0xc069bee  jal         func_1A6FB8
label_1a6dc4:
    if (ctx->pc == 0x1A6DC4u) {
        ctx->pc = 0x1A6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DC0u;
        // 0x1a6dc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DC8u;
        goto label_1a6dc8;
    }
    ctx->pc = 0x1A6DC0u;
    SET_GPR_U32(ctx, 31, 0x1A6DC8u);
    ctx->pc = 0x1A6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DC0u;
    // 0x1a6dc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    goto label_1a6fb8;
    ctx->pc = 0x1A6DC8u;
label_1a6dc8:
    // 0x1a6dc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1a6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1a6dcc:
    // 0x1a6dcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a6dd0:
    if (ctx->pc == 0x1A6DD0u) {
        ctx->pc = 0x1A6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DCCu;
        // 0x1a6dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DD4u;
        goto label_1a6dd4;
    }
    ctx->pc = 0x1A6DCCu;
    {
        const bool branch_taken_0x1a6dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DCCu;
        // 0x1a6dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dcc) {
            ctx->pc = 0x1A6DE4u;
            goto label_1a6de4;
        }
    }
    ctx->pc = 0x1A6DD4u;
label_1a6dd4:
    // 0x1a6dd4: 0xc0692fc  jal         func_1A4BF0
label_1a6dd8:
    if (ctx->pc == 0x1A6DD8u) {
        ctx->pc = 0x1A6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DD4u;
        // 0x1a6dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DDCu;
        goto label_1a6ddc;
    }
    ctx->pc = 0x1A6DD4u;
    SET_GPR_U32(ctx, 31, 0x1A6DDCu);
    ctx->pc = 0x1A6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DD4u;
    // 0x1a6dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BF0u;
    { ctx->pc = 0x1a4bf0; return; }
    ctx->pc = 0x1A6DDCu;
label_1a6ddc:
    // 0x1a6ddc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a6de0:
    if (ctx->pc == 0x1A6DE0u) {
        ctx->pc = 0x1A6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DDCu;
        // 0x1a6de0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DE4u;
        goto label_1a6de4;
    }
    ctx->pc = 0x1A6DDCu;
    {
        const bool branch_taken_0x1a6ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DDCu;
        // 0x1a6de0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ddc) {
            ctx->pc = 0x1A6DF0u;
            goto label_1a6df0;
        }
    }
    ctx->pc = 0x1A6DE4u;
label_1a6de4:
    // 0x1a6de4: 0xc0692f8  jal         func_1A4BE0
label_1a6de8:
    if (ctx->pc == 0x1A6DE8u) {
        ctx->pc = 0x1A6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DE4u;
        // 0x1a6de8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DECu;
        goto label_1a6dec;
    }
    ctx->pc = 0x1A6DE4u;
    SET_GPR_U32(ctx, 31, 0x1A6DECu);
    ctx->pc = 0x1A6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DE4u;
    // 0x1a6de8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    { ctx->pc = 0x1a4be0; return; }
    ctx->pc = 0x1A6DECu;
label_1a6dec:
    // 0x1a6dec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a6decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6df0:
    // 0x1a6df0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a6df0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a6df4:
    // 0x1a6df4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a6df4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6df8:
    // 0x1a6df8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a6df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6dfc:
    // 0x1a6dfc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a6dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6e00:
    // 0x1a6e00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a6e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6e04:
    // 0x1a6e04: 0x3e00008  jr          $ra
label_1a6e08:
    if (ctx->pc == 0x1A6E08u) {
        ctx->pc = 0x1A6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E04u;
        // 0x1a6e08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E0Cu;
        goto label_1a6e0c;
    }
    ctx->pc = 0x1A6E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E04u;
        // 0x1a6e08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E0Cu;
label_1a6e0c:
    // 0x1a6e0c: 0x0  nop
    ctx->pc = 0x1a6e0cu;
    // NOP
label_1a6e10:
    // 0x1a6e10: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a6e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e14:
    // 0x1a6e14: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1a6e14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e18:
    // 0x1a6e18: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1a6e18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e1c:
    // 0x1a6e1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a6e20:
    // 0x1a6e20: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1a6e20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e24:
    // 0x1a6e24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e28:
    // 0x1a6e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6e2c:
    // 0x1a6e2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e30:
    // 0x1a6e30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1a6e30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e34:
    // 0x1a6e34: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1a6e34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e38:
    // 0x1a6e38: 0xc069b36  jal         func_1A6CD8
label_1a6e3c:
    if (ctx->pc == 0x1A6E3Cu) {
        ctx->pc = 0x1A6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E38u;
        // 0x1a6e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E40u;
        goto label_1a6e40;
    }
    ctx->pc = 0x1A6E38u;
    SET_GPR_U32(ctx, 31, 0x1A6E40u);
    ctx->pc = 0x1A6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E38u;
    // 0x1a6e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    goto label_1a6cd8;
    ctx->pc = 0x1A6E40u;
label_1a6e40:
    // 0x1a6e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6e44:
    // 0x1a6e44: 0x3e00008  jr          $ra
label_1a6e48:
    if (ctx->pc == 0x1A6E48u) {
        ctx->pc = 0x1A6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E44u;
        // 0x1a6e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E4Cu;
        goto label_1a6e4c;
    }
    ctx->pc = 0x1A6E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E44u;
        // 0x1a6e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E4Cu;
label_1a6e4c:
    // 0x1a6e4c: 0x0  nop
    ctx->pc = 0x1a6e4cu;
    // NOP
label_1a6e50:
    // 0x1a6e50: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a6e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e54:
    // 0x1a6e54: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1a6e54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e58:
    // 0x1a6e58: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1a6e58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e5c:
    // 0x1a6e5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a6e60:
    // 0x1a6e60: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1a6e60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e64:
    // 0x1a6e64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e68:
    // 0x1a6e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6e6c:
    // 0x1a6e6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e70:
    // 0x1a6e70: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1a6e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e74:
    // 0x1a6e74: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1a6e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e78:
    // 0x1a6e78: 0xc069b36  jal         func_1A6CD8
label_1a6e7c:
    if (ctx->pc == 0x1A6E7Cu) {
        ctx->pc = 0x1A6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E78u;
        // 0x1a6e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E80u;
        goto label_1a6e80;
    }
    ctx->pc = 0x1A6E78u;
    SET_GPR_U32(ctx, 31, 0x1A6E80u);
    ctx->pc = 0x1A6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E78u;
    // 0x1a6e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    goto label_1a6cd8;
    ctx->pc = 0x1A6E80u;
label_1a6e80:
    // 0x1a6e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6e84:
    // 0x1a6e84: 0x3e00008  jr          $ra
label_1a6e88:
    if (ctx->pc == 0x1A6E88u) {
        ctx->pc = 0x1A6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E84u;
        // 0x1a6e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E8Cu;
        goto label_1a6e8c;
    }
    ctx->pc = 0x1A6E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E84u;
        // 0x1a6e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E8Cu;
label_1a6e8c:
    // 0x1a6e8c: 0x0  nop
    ctx->pc = 0x1a6e8cu;
    // NOP
label_1a6e90:
    // 0x1a6e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a6e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a6e94:
    // 0x1a6e94: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1a6e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1a6e98:
    // 0x1a6e98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a6e9c:
    // 0x1a6e9c: 0xc06b52a  jal         func_1AD4A8
label_1a6ea0:
    if (ctx->pc == 0x1A6EA0u) {
        ctx->pc = 0x1A6EA4u;
        goto label_1a6ea4;
    }
    ctx->pc = 0x1A6E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A6EA4u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A6EA4u;
label_1a6ea4:
    // 0x1a6ea4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a6ea8:
    // 0x1a6ea8: 0x8c671818  lw          $a3, 0x1818($v1)
    ctx->pc = 0x1a6ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6168)));
label_1a6eac:
    // 0x1a6eac: 0x24701818  addiu       $s0, $v1, 0x1818
    ctx->pc = 0x1a6eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6168));
label_1a6eb0:
    // 0x1a6eb0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1a6eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1a6eb4:
    // 0x1a6eb4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1a6eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a6eb8:
    // 0x1a6eb8: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
label_1a6ebc:
    if (ctx->pc == 0x1A6EBCu) {
        ctx->pc = 0x1A6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB8u;
        // 0x1a6ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EC0u;
        goto label_1a6ec0;
    }
    ctx->pc = 0x1A6EB8u;
    {
        const bool branch_taken_0x1a6eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB8u;
        // 0x1a6ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6eb8) {
            ctx->pc = 0x1A6FA8u;
            goto label_1a6fa8;
        }
    }
    ctx->pc = 0x1A6EC0u;
label_1a6ec0:
    // 0x1a6ec0: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1a6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1a6ec4:
    // 0x1a6ec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a6ec8:
    // 0x1a6ec8: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x1a6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_1a6ecc:
    // 0x1a6ecc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a6eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6ed0:
    // 0x1a6ed0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1a6ed0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1a6ed4:
    // 0x1a6ed4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1a6ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ed8:
    // 0x1a6ed8: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x1a6ed8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
label_1a6edc:
    // 0x1a6edc: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1a6edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a6ee0:
    // 0x1a6ee0: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
label_1a6ee4:
    if (ctx->pc == 0x1A6EE4u) {
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE0u;
        // 0x1a6ee4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EE8u;
        goto label_1a6ee8;
    }
    ctx->pc = 0x1A6EE0u;
    {
        const bool branch_taken_0x1a6ee0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE0u;
        // 0x1a6ee4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ee0) {
            ctx->pc = 0x1A6F0Cu;
            goto label_1a6f0c;
        }
    }
    ctx->pc = 0x1A6EE8u;
label_1a6ee8:
    // 0x1a6ee8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1a6ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a6eec:
    // 0x1a6eec: 0x0  nop
    ctx->pc = 0x1a6eecu;
    // NOP
label_1a6ef0:
    // 0x1a6ef0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1a6ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a6ef4:
    // 0x1a6ef4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a6ef8:
    // 0x1a6ef8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1a6ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1a6efc:
    // 0x1a6efc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1a6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1a6f00:
    // 0x1a6f00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a6f04:
    // 0x1a6f04: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1a6f08:
    if (ctx->pc == 0x1A6F08u) {
        ctx->pc = 0x1A6F0Cu;
        goto label_1a6f0c;
    }
    ctx->pc = 0x1A6F04u;
    {
        const bool branch_taken_0x1a6f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f04) {
            ctx->pc = 0x1A6EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6ef0;
        }
    }
    ctx->pc = 0x1A6F0Cu;
label_1a6f0c:
    // 0x1a6f0c: 0xc069304  jal         func_1A4C10
label_1a6f10:
    if (ctx->pc == 0x1A6F10u) {
        ctx->pc = 0x1A6F14u;
        goto label_1a6f14;
    }
    ctx->pc = 0x1A6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F14u);
    ctx->pc = 0x1A4C10u;
    { ctx->pc = 0x1a4c10; return; }
    ctx->pc = 0x1A6F14u;
label_1a6f14:
    // 0x1a6f14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f18:
    // 0x1a6f18: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
label_1a6f1c:
    if (ctx->pc == 0x1A6F1Cu) {
        ctx->pc = 0x1A6F20u;
        goto label_1a6f20;
    }
    ctx->pc = 0x1A6F18u;
    {
        const bool branch_taken_0x1a6f18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a6f18) {
            ctx->pc = 0x1A6F68u;
            goto label_1a6f68;
        }
    }
    ctx->pc = 0x1A6F20u;
label_1a6f20:
    // 0x1a6f20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f24:
    // 0x1a6f24: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1a6f28:
    // 0x1a6f28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a6f2c:
    // 0x1a6f2c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6f30:
    // 0x1a6f30: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1a6f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1a6f34:
    // 0x1a6f34: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1a6f34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a6f38:
    // 0x1a6f38: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1a6f3c:
    if (ctx->pc == 0x1A6F3Cu) {
        ctx->pc = 0x1A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F38u;
        // 0x1a6f3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F40u;
        goto label_1a6f40;
    }
    ctx->pc = 0x1A6F38u;
    {
        const bool branch_taken_0x1a6f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F38u;
        // 0x1a6f3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f38) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F40u;
label_1a6f40:
    // 0x1a6f40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a6f44:
    // 0x1a6f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6f48:
    // 0x1a6f48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f4c:
    // 0x1a6f4c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_1a6f50:
    if (ctx->pc == 0x1A6F50u) {
        ctx->pc = 0x1A6F54u;
        goto label_1a6f54;
    }
    ctx->pc = 0x1A6F4Cu;
    {
        const bool branch_taken_0x1a6f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f4c) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F54u;
label_1a6f54:
    // 0x1a6f54: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a6f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a6f58:
    // 0x1a6f58: 0xc0f809  jalr        $a2
label_1a6f5c:
    if (ctx->pc == 0x1A6F5Cu) {
        ctx->pc = 0x1A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F58u;
        // 0x1a6f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F60u;
        goto label_1a6f60;
    }
    ctx->pc = 0x1A6F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A6F60u);
        ctx->pc = 0x1A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F58u;
        // 0x1a6f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F58u, 0x1A6F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F60u;
label_1a6f60:
    // 0x1a6f60: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a6f64:
    if (ctx->pc == 0x1A6F64u) {
        ctx->pc = 0x1A6F68u;
        goto label_1a6f68;
    }
    ctx->pc = 0x1A6F60u;
    {
        const bool branch_taken_0x1a6f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f60) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F68u;
label_1a6f68:
    // 0x1a6f68: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f6c:
    // 0x1a6f6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a6f70:
    // 0x1a6f70: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a6f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6f74:
    // 0x1a6f74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a6f78:
    if (ctx->pc == 0x1A6F78u) {
        ctx->pc = 0x1A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F74u;
        // 0x1a6f78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F7Cu;
        goto label_1a6f7c;
    }
    ctx->pc = 0x1A6F74u;
    {
        const bool branch_taken_0x1a6f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F74u;
        // 0x1a6f78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f74) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F7Cu;
label_1a6f7c:
    // 0x1a6f7c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a6f80:
    // 0x1a6f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6f84:
    // 0x1a6f84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f88:
    // 0x1a6f88: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1a6f8c:
    if (ctx->pc == 0x1A6F8Cu) {
        ctx->pc = 0x1A6F90u;
        goto label_1a6f90;
    }
    ctx->pc = 0x1A6F88u;
    {
        const bool branch_taken_0x1a6f88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f88) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F90u;
label_1a6f90:
    // 0x1a6f90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a6f94:
    // 0x1a6f94: 0xc0f809  jalr        $a2
label_1a6f98:
    if (ctx->pc == 0x1A6F98u) {
        ctx->pc = 0x1A6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F94u;
        // 0x1a6f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F9Cu;
        goto label_1a6f9c;
    }
    ctx->pc = 0x1A6F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A6F9Cu);
        ctx->pc = 0x1A6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F94u;
        // 0x1a6f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F94u, 0x1A6F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F9Cu;
label_1a6f9c:
    // 0x1a6f9c: 0xf  sync
    ctx->pc = 0x1a6f9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a6fa0:
    // 0x1a6fa0: 0x42000038  ei
    ctx->pc = 0x1a6fa0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a6fa4:
    // 0x1a6fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6fa8:
    // 0x1a6fa8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a6fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a6fac:
    // 0x1a6fac: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1a6facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6fb0:
    // 0x1a6fb0: 0x3e00008  jr          $ra
label_1a6fb4:
    if (ctx->pc == 0x1A6FB4u) {
        ctx->pc = 0x1A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB0u;
        // 0x1a6fb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FB8u;
        goto label_1a6fb8;
    }
    ctx->pc = 0x1A6FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB0u;
        // 0x1a6fb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6FB8u;
label_1a6fb8:
    // 0x1a6fb8: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
label_1a6fbc:
    // 0x1a6fbc: 0x3739ffc0  ori         $t9, $t9, 0xFFC0
    ctx->pc = 0x1a6fbcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)65472);
label_1a6fc0:
    // 0x1a6fc0: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
label_1a6fc4:
    if (ctx->pc == 0x1A6FC4u) {
        ctx->pc = 0x1A6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FC0u;
        // 0x1a6fc4: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FC8u;
        goto label_1a6fc8;
    }
    ctx->pc = 0x1A6FC0u;
    {
        const bool branch_taken_0x1a6fc0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FC0u;
        // 0x1a6fc4: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fc0) {
            ctx->pc = 0x1A705Cu;
            goto label_1a705c;
        }
    }
    ctx->pc = 0x1A6FC8u;
label_1a6fc8:
    // 0x1a6fc8: 0x994024  and         $t0, $a0, $t9
    ctx->pc = 0x1a6fc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 25));
label_1a6fcc:
    // 0x1a6fcc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1a6fccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_1a6fd0:
    // 0x1a6fd0: 0x1594824  and         $t1, $t2, $t9
    ctx->pc = 0x1a6fd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 25));
label_1a6fd4:
    // 0x1a6fd4: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x1a6fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1a6fd8:
    // 0x1a6fd8: 0xa5982  srl         $t3, $t2, 6
    ctx->pc = 0x1a6fd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
label_1a6fdc:
    // 0x1a6fdc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1a6fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1a6fe0:
    // 0x1a6fe0: 0x31690007  andi        $t1, $t3, 0x7
    ctx->pc = 0x1a6fe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
label_1a6fe4:
    // 0x1a6fe4: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_1a6fe8:
    if (ctx->pc == 0x1A6FE8u) {
        ctx->pc = 0x1A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FE4u;
        // 0x1a6fe8: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FECu;
        goto label_1a6fec;
    }
    ctx->pc = 0x1A6FE4u;
    {
        const bool branch_taken_0x1a6fe4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FE4u;
        // 0x1a6fe8: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fe4) {
            ctx->pc = 0x1A7008u;
            goto label_1a7008;
        }
    }
    ctx->pc = 0x1A6FECu;
label_1a6fec:
    // 0x1a6fec: 0xf  sync
    ctx->pc = 0x1a6fecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a6ff0:
    // 0x1a6ff0: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1a6ff0u;
    // CACHE instruction (ignored)
label_1a6ff4:
    // 0x1a6ff4: 0xf  sync
    ctx->pc = 0x1a6ff4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a6ff8:
    // 0x1a6ff8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1a6ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1a6ffc:
    // 0x1a6ffc: 0x0  nop
    ctx->pc = 0x1a6ffcu;
    // NOP
label_1a7000:
    // 0x1a7000: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
label_1a7004:
    if (ctx->pc == 0x1A7004u) {
        ctx->pc = 0x1A7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7000u;
        // 0x1a7004: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7008u;
        goto label_1a7008;
    }
    ctx->pc = 0x1A7000u;
    {
        const bool branch_taken_0x1a7000 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x1A7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7000u;
        // 0x1a7004: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7000) {
            ctx->pc = 0x1A6FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6fec;
        }
    }
    ctx->pc = 0x1A7008u;
label_1a7008:
    // 0x1a7008: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
label_1a700c:
    if (ctx->pc == 0x1A700Cu) {
        ctx->pc = 0x1A700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7008u;
        // 0x1a700c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7010u;
        goto label_1a7010;
    }
    ctx->pc = 0x1A7008u;
    {
        const bool branch_taken_0x1a7008 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7008u;
        // 0x1a700c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7008) {
            ctx->pc = 0x1A705Cu;
            goto label_1a705c;
        }
    }
    ctx->pc = 0x1A7010u;
label_1a7010:
    // 0x1a7010: 0xf  sync
    ctx->pc = 0x1a7010u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7014:
    // 0x1a7014: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1a7014u;
    // CACHE instruction (ignored)
label_1a7018:
    // 0x1a7018: 0xf  sync
    ctx->pc = 0x1a7018u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a701c:
    // 0x1a701c: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x1a701cu;
    // CACHE instruction (ignored)
label_1a7020:
    // 0x1a7020: 0xf  sync
    ctx->pc = 0x1a7020u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7024:
    // 0x1a7024: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x1a7024u;
    // CACHE instruction (ignored)
label_1a7028:
    // 0x1a7028: 0xf  sync
    ctx->pc = 0x1a7028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a702c:
    // 0x1a702c: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x1a702cu;
    // CACHE instruction (ignored)
label_1a7030:
    // 0x1a7030: 0xf  sync
    ctx->pc = 0x1a7030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7034:
    // 0x1a7034: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x1a7034u;
    // CACHE instruction (ignored)
label_1a7038:
    // 0x1a7038: 0xf  sync
    ctx->pc = 0x1a7038u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a703c:
    // 0x1a703c: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x1a703cu;
    // CACHE instruction (ignored)
label_1a7040:
    // 0x1a7040: 0xf  sync
    ctx->pc = 0x1a7040u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7044:
    // 0x1a7044: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x1a7044u;
    // CACHE instruction (ignored)
label_1a7048:
    // 0x1a7048: 0xf  sync
    ctx->pc = 0x1a7048u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a704c:
    // 0x1a704c: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x1a704cu;
    // CACHE instruction (ignored)
label_1a7050:
    // 0x1a7050: 0xf  sync
    ctx->pc = 0x1a7050u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7054:
    // 0x1a7054: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
label_1a7058:
    if (ctx->pc == 0x1A7058u) {
        ctx->pc = 0x1A7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7054u;
        // 0x1a7058: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A705Cu;
        goto label_1a705c;
    }
    ctx->pc = 0x1A7054u;
    {
        const bool branch_taken_0x1a7054 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x1A7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7054u;
        // 0x1a7058: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7054) {
            ctx->pc = 0x1A700Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a700c;
        }
    }
    ctx->pc = 0x1A705Cu;
label_1a705c:
    // 0x1a705c: 0x3e00008  jr          $ra
label_1a7060:
    if (ctx->pc == 0x1A7060u) {
        ctx->pc = 0x1A7064u;
        goto label_1a7064;
    }
    ctx->pc = 0x1A705Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A705Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7064u;
label_1a7064:
    // 0x1a7064: 0x3e00008  jr          $ra
label_1a7068:
    if (ctx->pc == 0x1A7068u) {
        ctx->pc = 0x1A7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7064u;
        // 0x1a7068: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A706Cu;
        goto label_1a706c;
    }
    ctx->pc = 0x1A7064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7064u;
        // 0x1a7068: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A706Cu;
label_1a706c:
    // 0x1a706c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a7070:
    // 0x1a7070: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a7074:
    // 0x1a7074: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7078:
    // 0x1a7078: 0xc06b518  jal         func_1AD460
label_1a707c:
    if (ctx->pc == 0x1A707Cu) {
        ctx->pc = 0x1A707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7078u;
        // 0x1a707c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7080u;
        goto label_1a7080;
    }
    ctx->pc = 0x1A7078u;
    SET_GPR_U32(ctx, 31, 0x1A7080u);
    ctx->pc = 0x1A707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7078u;
    // 0x1a707c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7080u;
label_1a7080:
    // 0x1a7080: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a7084:
    // 0x1a7084: 0x8c625b70  lw          $v0, 0x5B70($v1)
    ctx->pc = 0x1a7084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23408)));
label_1a7088:
    // 0x1a7088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a708c:
    if (ctx->pc == 0x1A708Cu) {
        ctx->pc = 0x1A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7088u;
        // 0x1a708c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7090u;
        goto label_1a7090;
    }
    ctx->pc = 0x1A7088u;
    {
        const bool branch_taken_0x1a7088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7088u;
        // 0x1a708c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7088) {
            ctx->pc = 0x1A70A8u;
            goto label_1a70a8;
        }
    }
    ctx->pc = 0x1A7090u;
label_1a7090:
    // 0x1a7090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a7090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7094:
    // 0x1a7094: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a7094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7098:
    // 0x1a7098: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a709c:
    // 0x1a709c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a709cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a70a0:
    // 0x1a70a0: 0x806b52a  j           func_1AD4A8
label_1a70a4:
    if (ctx->pc == 0x1A70A4u) {
        ctx->pc = 0x1A70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70A0u;
        // 0x1a70a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A70A8u;
        goto label_1a70a8;
    }
    ctx->pc = 0x1A70A0u;
    ctx->pc = 0x1A70A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A70A0u;
    // 0x1a70a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A70A8u;
label_1a70a8:
    // 0x1a70a8: 0xc06b52a  jal         func_1AD4A8
label_1a70ac:
    if (ctx->pc == 0x1A70ACu) {
        ctx->pc = 0x1A70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70A8u;
        // 0x1a70ac: 0xac715b70  sw          $s1, 0x5B70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23408), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A70B0u;
        goto label_1a70b0;
    }
    ctx->pc = 0x1A70A8u;
    SET_GPR_U32(ctx, 31, 0x1A70B0u);
    ctx->pc = 0x1A70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A70A8u;
    // 0x1a70ac: 0xac715b70  sw          $s1, 0x5B70($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 23408), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A70B0u;
label_1a70b0:
    // 0x1a70b0: 0xc069a66  jal         func_1A6998
label_1a70b4:
    if (ctx->pc == 0x1A70B4u) {
        ctx->pc = 0x1A70B8u;
        goto label_1a70b8;
    }
    ctx->pc = 0x1A70B0u;
    SET_GPR_U32(ctx, 31, 0x1A70B8u);
    ctx->pc = 0x1A6998u;
    { ctx->pc = 0x1a6998; return; }
    ctx->pc = 0x1A70B8u;
label_1a70b8:
    // 0x1a70b8: 0xc06b518  jal         func_1AD460
label_1a70bc:
    if (ctx->pc == 0x1A70BCu) {
        ctx->pc = 0x1A70C0u;
        goto label_1a70c0;
    }
    ctx->pc = 0x1A70B8u;
    SET_GPR_U32(ctx, 31, 0x1A70C0u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A70C0u;
label_1a70c0:
    // 0x1a70c0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a70c4:
    // 0x1a70c4: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1a70c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1a70c8:
    // 0x1a70c8: 0x247219c0  addiu       $s2, $v1, 0x19C0
    ctx->pc = 0x1a70c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 6592));
label_1a70cc:
    // 0x1a70cc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1a70ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1a70d0:
    // 0x1a70d0: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1a70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1a70d4:
    // 0x1a70d4: 0x251031c0  addiu       $s0, $t0, 0x31C0
    ctx->pc = 0x1a70d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 12736));
label_1a70d8:
    // 0x1a70d8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1a70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a70dc:
    // 0x1a70dc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1a70e0:
    // 0x1a70e0: 0x24c621c0  addiu       $a2, $a2, 0x21C0
    ctx->pc = 0x1a70e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8640));
label_1a70e4:
    // 0x1a70e4: 0x24e729c0  addiu       $a3, $a3, 0x29C0
    ctx->pc = 0x1a70e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10688));
label_1a70e8:
    // 0x1a70e8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1a70e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1a70ec:
    // 0x1a70ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1a70ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1a70f0:
    // 0x1a70f0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a70f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1a70f4:
    // 0x1a70f4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1a70f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_1a70f8:
    // 0x1a70f8: 0xad1131c0  sw          $s1, 0x31C0($t0)
    ctx->pc = 0x1a70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12736), GPR_U32(ctx, 17));
label_1a70fc:
    // 0x1a70fc: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a70fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a7100:
    // 0x1a7100: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x1a7100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_1a7104:
    // 0x1a7104: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7108:
    // 0x1a7108: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a7108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a710c:
    // 0x1a710c: 0x24a57368  addiu       $a1, $a1, 0x7368
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29544));
label_1a7110:
    // 0x1a7110: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x1a7110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_1a7114:
    // 0x1a7114: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1a7114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_1a7118:
    // 0x1a7118: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a7118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a711c:
    // 0x1a711c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a711cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1a7120:
    // 0x1a7120: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a7120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1a7124:
    // 0x1a7124: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a7124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1a7128:
    // 0x1a7128: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1a7128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_1a712c:
    // 0x1a712c: 0xc069b20  jal         func_1A6C80
label_1a7130:
    if (ctx->pc == 0x1A7130u) {
        ctx->pc = 0x1A7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A712Cu;
        // 0x1a7130: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7134u;
        goto label_1a7134;
    }
    ctx->pc = 0x1A712Cu;
    SET_GPR_U32(ctx, 31, 0x1A7134u);
    ctx->pc = 0x1A7130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A712Cu;
    // 0x1a7130: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    { ctx->pc = 0x1a6c80; return; }
    ctx->pc = 0x1A7134u;
label_1a7134:
    // 0x1a7134: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a7134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a7138:
    // 0x1a7138: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a713c:
    // 0x1a713c: 0x24a57628  addiu       $a1, $a1, 0x7628
    ctx->pc = 0x1a713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30248));
label_1a7140:
    // 0x1a7140: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1a7140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
label_1a7144:
    // 0x1a7144: 0xc069b20  jal         func_1A6C80
label_1a7148:
    if (ctx->pc == 0x1A7148u) {
        ctx->pc = 0x1A7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7144u;
        // 0x1a7148: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A714Cu;
        goto label_1a714c;
    }
    ctx->pc = 0x1A7144u;
    SET_GPR_U32(ctx, 31, 0x1A714Cu);
    ctx->pc = 0x1A7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7144u;
    // 0x1a7148: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    { ctx->pc = 0x1a6c80; return; }
    ctx->pc = 0x1A714Cu;
label_1a714c:
    // 0x1a714c: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a714cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a7150:
    // 0x1a7150: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7154:
    // 0x1a7154: 0x24a57818  addiu       $a1, $a1, 0x7818
    ctx->pc = 0x1a7154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30744));
label_1a7158:
    // 0x1a7158: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1a7158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
label_1a715c:
    // 0x1a715c: 0xc069b20  jal         func_1A6C80
label_1a7160:
    if (ctx->pc == 0x1A7160u) {
        ctx->pc = 0x1A7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A715Cu;
        // 0x1a7160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7164u;
        goto label_1a7164;
    }
    ctx->pc = 0x1A715Cu;
    SET_GPR_U32(ctx, 31, 0x1A7164u);
    ctx->pc = 0x1A7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A715Cu;
    // 0x1a7160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    { ctx->pc = 0x1a6c80; return; }
    ctx->pc = 0x1A7164u;
label_1a7164:
    // 0x1a7164: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a7164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a7168:
    // 0x1a7168: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a716c:
    // 0x1a716c: 0x24a57420  addiu       $a1, $a1, 0x7420
    ctx->pc = 0x1a716cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29728));
label_1a7170:
    // 0x1a7170: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a7170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7174:
    // 0x1a7174: 0xc069b20  jal         func_1A6C80
label_1a7178:
    if (ctx->pc == 0x1A7178u) {
        ctx->pc = 0x1A7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7174u;
        // 0x1a7178: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A717Cu;
        goto label_1a717c;
    }
    ctx->pc = 0x1A7174u;
    SET_GPR_U32(ctx, 31, 0x1A717Cu);
    ctx->pc = 0x1A7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7174u;
    // 0x1a7178: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    { ctx->pc = 0x1a6c80; return; }
    ctx->pc = 0x1A717Cu;
label_1a717c:
    // 0x1a717c: 0xc06b52a  jal         func_1AD4A8
label_1a7180:
    if (ctx->pc == 0x1A7180u) {
        ctx->pc = 0x1A7184u;
        goto label_1a7184;
    }
    ctx->pc = 0x1A717Cu;
    SET_GPR_U32(ctx, 31, 0x1A7184u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A7184u;
label_1a7184:
    // 0x1a7184: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7188:
    // 0x1a7188: 0xc06930c  jal         func_1A4C30
label_1a718c:
    if (ctx->pc == 0x1A718Cu) {
        ctx->pc = 0x1A718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7188u;
        // 0x1a718c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7190u;
        goto label_1a7190;
    }
    ctx->pc = 0x1A7188u;
    SET_GPR_U32(ctx, 31, 0x1A7190u);
    ctx->pc = 0x1A718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7188u;
    // 0x1a718c: 0x34840002  ori         $a0, $a0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1A7190u;
label_1a7190:
    // 0x1a7190: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1a7194:
    if (ctx->pc == 0x1A7194u) {
        ctx->pc = 0x1A7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7190u;
        // 0x1a7194: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7198u;
        goto label_1a7198;
    }
    ctx->pc = 0x1A7190u;
    {
        const bool branch_taken_0x1a7190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7190u;
        // 0x1a7194: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7190) {
            ctx->pc = 0x1A71F0u;
            goto label_1a71f0;
        }
    }
    ctx->pc = 0x1A7198u;
label_1a7198:
    // 0x1a7198: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1a7198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1a719c:
    // 0x1a719c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a719cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a71a0:
    // 0x1a71a0: 0xacb1000c  sw          $s1, 0xC($a1)
    ctx->pc = 0x1a71a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 17));
label_1a71a4:
    // 0x1a71a4: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1a71a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_1a71a8:
    // 0x1a71a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a71a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a71ac:
    // 0x1a71ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a71acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a71b0:
    // 0x1a71b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a71b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a71b4:
    // 0x1a71b4: 0xc069b84  jal         func_1A6E10
label_1a71b8:
    if (ctx->pc == 0x1A71B8u) {
        ctx->pc = 0x1A71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71B4u;
        // 0x1a71b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A71BCu;
        goto label_1a71bc;
    }
    ctx->pc = 0x1A71B4u;
    SET_GPR_U32(ctx, 31, 0x1A71BCu);
    ctx->pc = 0x1A71B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71B4u;
    // 0x1a71b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    goto label_1a6e10;
    ctx->pc = 0x1A71BCu;
label_1a71bc:
    // 0x1a71bc: 0x0  nop
    ctx->pc = 0x1a71bcu;
    // NOP
label_1a71c0:
    // 0x1a71c0: 0xc069a54  jal         func_1A6950
label_1a71c4:
    if (ctx->pc == 0x1A71C4u) {
        ctx->pc = 0x1A71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71C0u;
        // 0x1a71c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A71C8u;
        goto label_1a71c8;
    }
    ctx->pc = 0x1A71C0u;
    SET_GPR_U32(ctx, 31, 0x1A71C8u);
    ctx->pc = 0x1A71C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71C0u;
    // 0x1a71c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6950u;
    { ctx->pc = 0x1a6950; return; }
    ctx->pc = 0x1A71C8u;
label_1a71c8:
    // 0x1a71c8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
label_1a71cc:
    if (ctx->pc == 0x1A71CCu) {
        ctx->pc = 0x1A71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71C8u;
        // 0x1a71cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A71D0u;
        goto label_1a71d0;
    }
    ctx->pc = 0x1A71C8u;
    {
        const bool branch_taken_0x1a71c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71C8u;
        // 0x1a71cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a71c8) {
            ctx->pc = 0x1A71C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a71c0;
        }
    }
    ctx->pc = 0x1A71D0u;
label_1a71d0:
    // 0x1a71d0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a71d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a71d4:
    // 0x1a71d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a71d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a71d8:
    // 0x1a71d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a71d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a71dc:
    // 0x1a71dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a71dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a71e0:
    // 0x1a71e0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1a71e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_1a71e4:
    // 0x1a71e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a71e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a71e8:
    // 0x1a71e8: 0x8069308  j           func_1A4C20
label_1a71ec:
    if (ctx->pc == 0x1A71ECu) {
        ctx->pc = 0x1A71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71E8u;
        // 0x1a71ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A71F0u;
        goto label_1a71f0;
    }
    ctx->pc = 0x1A71E8u;
    ctx->pc = 0x1A71ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71E8u;
    // 0x1a71ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1A71F0u;
label_1a71f0:
    // 0x1a71f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a71f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a71f4:
    // 0x1a71f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a71f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a71f8:
    // 0x1a71f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a71f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a71fc:
    // 0x1a71fc: 0x3e00008  jr          $ra
label_1a7200:
    if (ctx->pc == 0x1A7200u) {
        ctx->pc = 0x1A7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71FCu;
        // 0x1a7200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7204u;
        goto label_1a7204;
    }
    ctx->pc = 0x1A71FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71FCu;
        // 0x1a7200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A71FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7204u;
label_1a7204:
    // 0x1a7204: 0x0  nop
    ctx->pc = 0x1a7204u;
    // NOP
label_1a7208:
    // 0x1a7208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a720c:
    // 0x1a720c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a7210:
    // 0x1a7210: 0xc069b06  jal         func_1A6C18
label_1a7214:
    if (ctx->pc == 0x1A7214u) {
        ctx->pc = 0x1A7218u;
        goto label_1a7218;
    }
    ctx->pc = 0x1A7210u;
    SET_GPR_U32(ctx, 31, 0x1A7218u);
    ctx->pc = 0x1A6C18u;
    { ctx->pc = 0x1a6c18; return; }
    ctx->pc = 0x1A7218u;
label_1a7218:
    // 0x1a7218: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a7218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a721c:
    // 0x1a721c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a721cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7220:
    // 0x1a7220: 0xac405b70  sw          $zero, 0x5B70($v0)
    ctx->pc = 0x1a7220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23408), GPR_U32(ctx, 0));
label_1a7224:
    // 0x1a7224: 0x3e00008  jr          $ra
label_1a7228:
    if (ctx->pc == 0x1A7228u) {
        ctx->pc = 0x1A7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7224u;
        // 0x1a7228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A722Cu;
        goto label_1a722c;
    }
    ctx->pc = 0x1A7224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7224u;
        // 0x1a7228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A722Cu;
label_1a722c:
    // 0x1a722c: 0x0  nop
    ctx->pc = 0x1a722cu;
    // NOP
label_1a7230:
    // 0x1a7230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a7234:
    // 0x1a7234: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7238:
    // 0x1a7238: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a723c:
    // 0x1a723c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a7240:
    // 0x1a7240: 0xc06b518  jal         func_1AD460
label_1a7244:
    if (ctx->pc == 0x1A7244u) {
        ctx->pc = 0x1A7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7240u;
        // 0x1a7244: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7248u;
        goto label_1a7248;
    }
    ctx->pc = 0x1A7240u;
    SET_GPR_U32(ctx, 31, 0x1A7248u);
    ctx->pc = 0x1A7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7240u;
    // 0x1a7244: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7248u;
label_1a7248:
    // 0x1a7248: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1a7248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a724c:
    // 0x1a724c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a724cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7250:
    // 0x1a7250: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
label_1a7254:
    if (ctx->pc == 0x1A7254u) {
        ctx->pc = 0x1A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7250u;
        // 0x1a7254: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7258u;
        goto label_1a7258;
    }
    ctx->pc = 0x1A7250u;
    {
        const bool branch_taken_0x1a7250 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7250u;
        // 0x1a7254: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7250) {
            ctx->pc = 0x1A72B8u;
            goto label_1a72b8;
        }
    }
    ctx->pc = 0x1A7258u;
label_1a7258:
    // 0x1a7258: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a7258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a725c:
    // 0x1a725c: 0x0  nop
    ctx->pc = 0x1a725cu;
    // NOP
label_1a7260:
    // 0x1a7260: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a7260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a7264:
    // 0x1a7264: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a7264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a7268:
    // 0x1a7268: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1a726c:
    if (ctx->pc == 0x1A726Cu) {
        ctx->pc = 0x1A726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7268u;
        // 0x1a726c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7270u;
        goto label_1a7270;
    }
    ctx->pc = 0x1A7268u;
    {
        const bool branch_taken_0x1a7268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7268) {
            ctx->pc = 0x1A726Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7268u;
            // 0x1a726c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A72ACu;
            goto label_1a72ac;
        }
    }
    ctx->pc = 0x1A7270u;
label_1a7270:
    // 0x1a7270: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1a7270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1a7274:
    // 0x1a7274: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1a7274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_1a7278:
    // 0x1a7278: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a7278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1a727c:
    // 0x1a727c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a7280:
    // 0x1a7280: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1a7280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a7284:
    // 0x1a7284: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
label_1a7288:
    if (ctx->pc == 0x1A7288u) {
        ctx->pc = 0x1A7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7284u;
        // 0x1a7288: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A728Cu;
        goto label_1a728c;
    }
    ctx->pc = 0x1A7284u;
    {
        const bool branch_taken_0x1a7284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7284u;
        // 0x1a7288: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7284) {
            ctx->pc = 0x1A7298u;
            goto label_1a7298;
        }
    }
    ctx->pc = 0x1A728Cu;
label_1a728c:
    // 0x1a728c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1a728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1a7290:
    // 0x1a7290: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a7290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7294:
    // 0x1a7294: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a7294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a7298:
    // 0x1a7298: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1a7298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
label_1a729c:
    // 0x1a729c: 0xc06b52a  jal         func_1AD4A8
label_1a72a0:
    if (ctx->pc == 0x1A72A0u) {
        ctx->pc = 0x1A72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A729Cu;
        // 0x1a72a0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A72A4u;
        goto label_1a72a4;
    }
    ctx->pc = 0x1A729Cu;
    SET_GPR_U32(ctx, 31, 0x1A72A4u);
    ctx->pc = 0x1A72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A729Cu;
    // 0x1a72a0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A72A4u;
label_1a72a4:
    // 0x1a72a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a72a8:
    if (ctx->pc == 0x1A72A8u) {
        ctx->pc = 0x1A72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72A4u;
        // 0x1a72a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A72ACu;
        goto label_1a72ac;
    }
    ctx->pc = 0x1A72A4u;
    {
        const bool branch_taken_0x1a72a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72A4u;
        // 0x1a72a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72a4) {
            ctx->pc = 0x1A72C4u;
            goto label_1a72c4;
        }
    }
    ctx->pc = 0x1A72ACu;
label_1a72ac:
    // 0x1a72ac: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1a72acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a72b0:
    // 0x1a72b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1a72b4:
    if (ctx->pc == 0x1A72B4u) {
        ctx->pc = 0x1A72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72B0u;
        // 0x1a72b4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A72B8u;
        goto label_1a72b8;
    }
    ctx->pc = 0x1A72B0u;
    {
        const bool branch_taken_0x1a72b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72B0u;
        // 0x1a72b4: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72b0) {
            ctx->pc = 0x1A7260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7260;
        }
    }
    ctx->pc = 0x1A72B8u;
label_1a72b8:
    // 0x1a72b8: 0xc06b52a  jal         func_1AD4A8
label_1a72bc:
    if (ctx->pc == 0x1A72BCu) {
        ctx->pc = 0x1A72C0u;
        goto label_1a72c0;
    }
    ctx->pc = 0x1A72B8u;
    SET_GPR_U32(ctx, 31, 0x1A72C0u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A72C0u;
label_1a72c0:
    // 0x1a72c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a72c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a72c4:
    // 0x1a72c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a72c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a72c8:
    // 0x1a72c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a72c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a72cc:
    // 0x1a72cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a72ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a72d0:
    // 0x1a72d0: 0x3e00008  jr          $ra
label_1a72d4:
    if (ctx->pc == 0x1A72D4u) {
        ctx->pc = 0x1A72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72D0u;
        // 0x1a72d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A72D8u;
        goto label_1a72d8;
    }
    ctx->pc = 0x1A72D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72D0u;
        // 0x1a72d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A72D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A72D8u;
label_1a72d8:
    // 0x1a72d8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1a72dc:
    // 0x1a72dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a72e0:
    // 0x1a72e0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1a72e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_1a72e4:
    // 0x1a72e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1a72e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1a72e8:
    // 0x1a72e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a72e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1a72ec:
    // 0x1a72ec: 0x3e00008  jr          $ra
label_1a72f0:
    if (ctx->pc == 0x1A72F0u) {
        ctx->pc = 0x1A72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72ECu;
        // 0x1a72f0: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A72F4u;
        goto label_1a72f4;
    }
    ctx->pc = 0x1A72ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72ECu;
        // 0x1a72f0: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A72ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A72F4u;
label_1a72f4:
    // 0x1a72f4: 0x0  nop
    ctx->pc = 0x1a72f4u;
    // NOP
label_1a72f8:
    // 0x1a72f8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1a72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1a72fc:
    // 0x1a72fc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a72fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1a7300:
    // 0x1a7300: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x1a7300u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a7304:
    // 0x1a7304: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1a7308:
    if (ctx->pc == 0x1A7308u) {
        ctx->pc = 0x1A7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7304u;
        // 0x1a7308: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A730Cu;
        goto label_1a730c;
    }
    ctx->pc = 0x1A7304u;
    {
        const bool branch_taken_0x1a7304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7304) {
            ctx->pc = 0x1A7308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7304u;
            // 0x1a7308: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A730Cu;
            goto label_1a730c;
        }
    }
    ctx->pc = 0x1A730Cu;
label_1a730c:
    // 0x1a730c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1a730cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1a7310:
    // 0x1a7310: 0x1010  mfhi        $v0
    ctx->pc = 0x1a7310u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a7314:
    // 0x1a7314: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1a7314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a7318:
    // 0x1a7318: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1a7318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1a731c:
    // 0x1a731c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1a731cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_1a7320:
    // 0x1a7320: 0x3e00008  jr          $ra
label_1a7324:
    if (ctx->pc == 0x1A7324u) {
        ctx->pc = 0x1A7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7320u;
        // 0x1a7324: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7328u;
        goto label_1a7328;
    }
    ctx->pc = 0x1A7320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7320u;
        // 0x1a7324: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7328u;
label_1a7328:
    // 0x1a7328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a732c:
    // 0x1a732c: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_1a7330:
    if (ctx->pc == 0x1A7330u) {
        ctx->pc = 0x1A7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A732Cu;
        // 0x1a7330: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7334u;
        goto label_1a7334;
    }
    ctx->pc = 0x1A732Cu;
    {
        const bool branch_taken_0x1a732c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A732Cu;
        // 0x1a7330: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a732c) {
            ctx->pc = 0x1A7344u;
            goto label_1a7344;
        }
    }
    ctx->pc = 0x1A7334u;
label_1a7334:
    // 0x1a7334: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1a7334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1a7338:
    // 0x1a7338: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a7338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a733c:
    // 0x1a733c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a7340:
    if (ctx->pc == 0x1A7340u) {
        ctx->pc = 0x1A7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A733Cu;
        // 0x1a7340: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7344u;
        goto label_1a7344;
    }
    ctx->pc = 0x1A733Cu;
    {
        const bool branch_taken_0x1a733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a733c) {
            ctx->pc = 0x1A7340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A733Cu;
            // 0x1a7340: 0x8c83001c  lw          $v1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7354u;
            goto label_1a7354;
        }
    }
    ctx->pc = 0x1A7344u;
label_1a7344:
    // 0x1a7344: 0xc069cbe  jal         func_1A72F8
label_1a7348:
    if (ctx->pc == 0x1A7348u) {
        ctx->pc = 0x1A734Cu;
        goto label_1a734c;
    }
    ctx->pc = 0x1A7344u;
    SET_GPR_U32(ctx, 31, 0x1A734Cu);
    ctx->pc = 0x1A72F8u;
    goto label_1a72f8;
    ctx->pc = 0x1A734Cu;
label_1a734c:
    // 0x1a734c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a7350:
    if (ctx->pc == 0x1A7350u) {
        ctx->pc = 0x1A7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A734Cu;
        // 0x1a7350: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7354u;
        goto label_1a7354;
    }
    ctx->pc = 0x1A734Cu;
    {
        const bool branch_taken_0x1a734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A734Cu;
        // 0x1a7350: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a734c) {
            ctx->pc = 0x1A7360u;
            goto label_1a7360;
        }
    }
    ctx->pc = 0x1A7354u;
label_1a7354:
    // 0x1a7354: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1a7354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_1a7358:
    // 0x1a7358: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a7358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a735c:
    // 0x1a735c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a735cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7360:
    // 0x1a7360: 0x3e00008  jr          $ra
label_1a7364:
    if (ctx->pc == 0x1A7364u) {
        ctx->pc = 0x1A7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7360u;
        // 0x1a7364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7368u;
        goto label_1a7368;
    }
    ctx->pc = 0x1A7360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7360u;
        // 0x1a7364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7368u;
label_1a7368:
    // 0x1a7368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a736c:
    // 0x1a736c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1a7370:
    // 0x1a7370: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7374:
    // 0x1a7374: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1a7374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1a7378:
    // 0x1a7378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a737c:
    // 0x1a737c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a737cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7380:
    // 0x1a7380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7384:
    // 0x1a7384: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1a7384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1a7388:
    // 0x1a7388: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1a738c:
    if (ctx->pc == 0x1A738Cu) {
        ctx->pc = 0x1A738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7388u;
        // 0x1a738c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7390u;
        goto label_1a7390;
    }
    ctx->pc = 0x1A7388u;
    {
        const bool branch_taken_0x1a7388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7388u;
        // 0x1a738c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7388) {
            ctx->pc = 0x1A73B0u;
            goto label_1a73b0;
        }
    }
    ctx->pc = 0x1A7390u;
label_1a7390:
    // 0x1a7390: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1a7394:
    if (ctx->pc == 0x1A7394u) {
        ctx->pc = 0x1A7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7390u;
        // 0x1a7394: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7398u;
        goto label_1a7398;
    }
    ctx->pc = 0x1A7390u;
    {
        const bool branch_taken_0x1a7390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7390) {
            ctx->pc = 0x1A7394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7390u;
            // 0x1a7394: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A73E8u;
            goto label_1a73e8;
        }
    }
    ctx->pc = 0x1A7398u;
label_1a7398:
    // 0x1a7398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a7398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1a739c:
    // 0x1a739c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1a739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_1a73a0:
    // 0x1a73a0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_1a73a4:
    if (ctx->pc == 0x1A73A4u) {
        ctx->pc = 0x1A73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73A0u;
        // 0x1a73a4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73A8u;
        goto label_1a73a8;
    }
    ctx->pc = 0x1A73A0u;
    {
        const bool branch_taken_0x1a73a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a73a0) {
            ctx->pc = 0x1A73A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A73A0u;
            // 0x1a73a4: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A73D0u;
            goto label_1a73d0;
        }
    }
    ctx->pc = 0x1A73A8u;
label_1a73a8:
    // 0x1a73a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a73ac:
    if (ctx->pc == 0x1A73ACu) {
        ctx->pc = 0x1A73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73A8u;
        // 0x1a73ac: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73B0u;
        goto label_1a73b0;
    }
    ctx->pc = 0x1A73A8u;
    {
        const bool branch_taken_0x1a73a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73A8u;
        // 0x1a73ac: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73a8) {
            ctx->pc = 0x1A73E8u;
            goto label_1a73e8;
        }
    }
    ctx->pc = 0x1A73B0u;
label_1a73b0:
    // 0x1a73b0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1a73b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a73b4:
    // 0x1a73b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a73b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a73b8:
    // 0x1a73b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1a73bc:
    if (ctx->pc == 0x1A73BCu) {
        ctx->pc = 0x1A73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73B8u;
        // 0x1a73bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73C0u;
        goto label_1a73c0;
    }
    ctx->pc = 0x1A73B8u;
    {
        const bool branch_taken_0x1a73b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a73b8) {
            ctx->pc = 0x1A73BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A73B8u;
            // 0x1a73bc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A73ECu;
            goto label_1a73ec;
        }
    }
    ctx->pc = 0x1A73C0u;
label_1a73c0:
    // 0x1a73c0: 0x40f809  jalr        $v0
label_1a73c4:
    if (ctx->pc == 0x1A73C4u) {
        ctx->pc = 0x1A73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C0u;
        // 0x1a73c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73C8u;
        goto label_1a73c8;
    }
    ctx->pc = 0x1A73C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A73C8u);
        ctx->pc = 0x1A73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C0u;
        // 0x1a73c4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A73C0u, 0x1A73C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A73C8u;
label_1a73c8:
    // 0x1a73c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a73cc:
    if (ctx->pc == 0x1A73CCu) {
        ctx->pc = 0x1A73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C8u;
        // 0x1a73cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A73D0u;
        goto label_1a73d0;
    }
    ctx->pc = 0x1A73C8u;
    {
        const bool branch_taken_0x1a73c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73C8u;
        // 0x1a73cc: 0x8e30001c  lw          $s0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a73c8) {
            ctx->pc = 0x1A73E8u;
            goto label_1a73e8;
        }
    }
    ctx->pc = 0x1A73D0u;
label_1a73d0:
    // 0x1a73d0: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1a73d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a73d4:
    // 0x1a73d4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a73d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1a73d8:
    // 0x1a73d8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1a73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a73dc:
    // 0x1a73dc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a73dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1a73e0:
    // 0x1a73e0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1a73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1a73e4:
    // 0x1a73e4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1a73e8:
    // 0x1a73e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a73ec:
    // 0x1a73ec: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_1a73f0:
    if (ctx->pc == 0x1A73F0u) {
        ctx->pc = 0x1A73F4u;
        goto label_1a73f4;
    }
    ctx->pc = 0x1A73ECu;
    {
        const bool branch_taken_0x1a73ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1a73ec) {
            ctx->pc = 0x1A73FCu;
            goto label_1a73fc;
        }
    }
    ctx->pc = 0x1A73F4u;
label_1a73f4:
    // 0x1a73f4: 0xc069214  jal         func_1A4850
label_1a73f8:
    if (ctx->pc == 0x1A73F8u) {
        ctx->pc = 0x1A73FCu;
        goto label_1a73fc;
    }
    ctx->pc = 0x1A73F4u;
    SET_GPR_U32(ctx, 31, 0x1A73FCu);
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x1A73FCu;
label_1a73fc:
    // 0x1a73fc: 0xc069cb6  jal         func_1A72D8
label_1a7400:
    if (ctx->pc == 0x1A7400u) {
        ctx->pc = 0x1A7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A73FCu;
        // 0x1a7400: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7404u;
        goto label_1a7404;
    }
    ctx->pc = 0x1A73FCu;
    SET_GPR_U32(ctx, 31, 0x1A7404u);
    ctx->pc = 0x1A7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A73FCu;
    // 0x1a7400: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    goto label_1a72d8;
    ctx->pc = 0x1A7404u;
label_1a7404:
    // 0x1a7404: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a7404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a7408:
    // 0x1a7408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a740c:
    // 0x1a740c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a740cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7410:
    // 0x1a7410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7414:
    // 0x1a7414: 0x3e00008  jr          $ra
label_1a7418:
    if (ctx->pc == 0x1A7418u) {
        ctx->pc = 0x1A7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7414u;
        // 0x1a7418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A741Cu;
        goto label_1a741c;
    }
    ctx->pc = 0x1A7414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7414u;
        // 0x1a7418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A741Cu;
label_1a741c:
    // 0x1a741c: 0x0  nop
    ctx->pc = 0x1a741cu;
    // NOP
label_1a7420:
    // 0x1a7420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a7424:
    // 0x1a7424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7428:
    // 0x1a7428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a742c:
    // 0x1a742c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a742cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a7430:
    // 0x1a7430: 0xc069cbe  jal         func_1A72F8
label_1a7434:
    if (ctx->pc == 0x1A7434u) {
        ctx->pc = 0x1A7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7430u;
        // 0x1a7434: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7438u;
        goto label_1a7438;
    }
    ctx->pc = 0x1A7430u;
    SET_GPR_U32(ctx, 31, 0x1A7438u);
    ctx->pc = 0x1A7434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7430u;
    // 0x1a7434: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72F8u;
    goto label_1a72f8;
    ctx->pc = 0x1A7438u;
label_1a7438:
    // 0x1a7438: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1a7438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a743c:
    // 0x1a743c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a743cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a7440:
    // 0x1a7440: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a7440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7444:
    // 0x1a7444: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x1a7444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
label_1a7448:
    // 0x1a7448: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x1a7448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_1a744c:
    // 0x1a744c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a744cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a7450:
    // 0x1a7450: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1a7450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1a7454:
    // 0x1a7454: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a7454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7458:
    // 0x1a7458: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1a7458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_1a745c:
    // 0x1a745c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a745cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7460:
    // 0x1a7460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7464:
    // 0x1a7464: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1a7464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_1a7468:
    // 0x1a7468: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x1a7468u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a746c:
    // 0x1a746c: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x1a746cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a7470:
    // 0x1a7470: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x1a7470u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a7474:
    // 0x1a7474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7478:
    // 0x1a7478: 0x8069b94  j           func_1A6E50
label_1a747c:
    if (ctx->pc == 0x1A747Cu) {
        ctx->pc = 0x1A747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7478u;
        // 0x1a747c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7480u;
        goto label_1a7480;
    }
    ctx->pc = 0x1A7478u;
    ctx->pc = 0x1A747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7478u;
    // 0x1a747c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E50u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a6e50;
    ctx->pc = 0x1A7480u;
label_1a7480:
    // 0x1a7480: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a7480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a7484:
    // 0x1a7484: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a7484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a7488:
    // 0x1a7488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a748c:
    // 0x1a748c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a748cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    ctx->pc = 0x1a7490u;
    return;
}

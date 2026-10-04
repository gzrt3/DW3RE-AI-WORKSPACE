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


void FUN_0019b868_part57(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b6de8u: goto label_1b6de8;
        case 0x1b6decu: goto label_1b6dec;
        case 0x1b6df0u: goto label_1b6df0;
        case 0x1b6df4u: goto label_1b6df4;
        case 0x1b6df8u: goto label_1b6df8;
        case 0x1b6dfcu: goto label_1b6dfc;
        case 0x1b6e00u: goto label_1b6e00;
        case 0x1b6e04u: goto label_1b6e04;
        case 0x1b6e08u: goto label_1b6e08;
        case 0x1b6e0cu: goto label_1b6e0c;
        case 0x1b6e10u: goto label_1b6e10;
        case 0x1b6e14u: goto label_1b6e14;
        case 0x1b6e18u: goto label_1b6e18;
        case 0x1b6e1cu: goto label_1b6e1c;
        case 0x1b6e20u: goto label_1b6e20;
        case 0x1b6e24u: goto label_1b6e24;
        case 0x1b6e28u: goto label_1b6e28;
        case 0x1b6e2cu: goto label_1b6e2c;
        case 0x1b6e30u: goto label_1b6e30;
        case 0x1b6e34u: goto label_1b6e34;
        case 0x1b6e38u: goto label_1b6e38;
        case 0x1b6e3cu: goto label_1b6e3c;
        case 0x1b6e40u: goto label_1b6e40;
        case 0x1b6e44u: goto label_1b6e44;
        case 0x1b6e48u: goto label_1b6e48;
        case 0x1b6e4cu: goto label_1b6e4c;
        case 0x1b6e50u: goto label_1b6e50;
        case 0x1b6e54u: goto label_1b6e54;
        case 0x1b6e58u: goto label_1b6e58;
        case 0x1b6e5cu: goto label_1b6e5c;
        case 0x1b6e60u: goto label_1b6e60;
        case 0x1b6e64u: goto label_1b6e64;
        case 0x1b6e68u: goto label_1b6e68;
        case 0x1b6e6cu: goto label_1b6e6c;
        case 0x1b6e70u: goto label_1b6e70;
        case 0x1b6e74u: goto label_1b6e74;
        case 0x1b6e78u: goto label_1b6e78;
        case 0x1b6e7cu: goto label_1b6e7c;
        case 0x1b6e80u: goto label_1b6e80;
        case 0x1b6e84u: goto label_1b6e84;
        case 0x1b6e88u: goto label_1b6e88;
        case 0x1b6e8cu: goto label_1b6e8c;
        case 0x1b6e90u: goto label_1b6e90;
        case 0x1b6e94u: goto label_1b6e94;
        case 0x1b6e98u: goto label_1b6e98;
        case 0x1b6e9cu: goto label_1b6e9c;
        case 0x1b6ea0u: goto label_1b6ea0;
        case 0x1b6ea4u: goto label_1b6ea4;
        case 0x1b6ea8u: goto label_1b6ea8;
        case 0x1b6eacu: goto label_1b6eac;
        case 0x1b6eb0u: goto label_1b6eb0;
        case 0x1b6eb4u: goto label_1b6eb4;
        case 0x1b6eb8u: goto label_1b6eb8;
        case 0x1b6ebcu: goto label_1b6ebc;
        case 0x1b6ec0u: goto label_1b6ec0;
        case 0x1b6ec4u: goto label_1b6ec4;
        case 0x1b6ec8u: goto label_1b6ec8;
        case 0x1b6eccu: goto label_1b6ecc;
        case 0x1b6ed0u: goto label_1b6ed0;
        case 0x1b6ed4u: goto label_1b6ed4;
        case 0x1b6ed8u: goto label_1b6ed8;
        case 0x1b6edcu: goto label_1b6edc;
        case 0x1b6ee0u: goto label_1b6ee0;
        case 0x1b6ee4u: goto label_1b6ee4;
        case 0x1b6ee8u: goto label_1b6ee8;
        case 0x1b6eecu: goto label_1b6eec;
        case 0x1b6ef0u: goto label_1b6ef0;
        case 0x1b6ef4u: goto label_1b6ef4;
        case 0x1b6ef8u: goto label_1b6ef8;
        case 0x1b6efcu: goto label_1b6efc;
        case 0x1b6f00u: goto label_1b6f00;
        case 0x1b6f04u: goto label_1b6f04;
        case 0x1b6f08u: goto label_1b6f08;
        case 0x1b6f0cu: goto label_1b6f0c;
        case 0x1b6f10u: goto label_1b6f10;
        case 0x1b6f14u: goto label_1b6f14;
        case 0x1b6f18u: goto label_1b6f18;
        case 0x1b6f1cu: goto label_1b6f1c;
        case 0x1b6f20u: goto label_1b6f20;
        case 0x1b6f24u: goto label_1b6f24;
        case 0x1b6f28u: goto label_1b6f28;
        case 0x1b6f2cu: goto label_1b6f2c;
        case 0x1b6f30u: goto label_1b6f30;
        case 0x1b6f34u: goto label_1b6f34;
        case 0x1b6f38u: goto label_1b6f38;
        case 0x1b6f3cu: goto label_1b6f3c;
        case 0x1b6f40u: goto label_1b6f40;
        case 0x1b6f44u: goto label_1b6f44;
        case 0x1b6f48u: goto label_1b6f48;
        case 0x1b6f4cu: goto label_1b6f4c;
        case 0x1b6f50u: goto label_1b6f50;
        case 0x1b6f54u: goto label_1b6f54;
        case 0x1b6f58u: goto label_1b6f58;
        case 0x1b6f5cu: goto label_1b6f5c;
        case 0x1b6f60u: goto label_1b6f60;
        case 0x1b6f64u: goto label_1b6f64;
        case 0x1b6f68u: goto label_1b6f68;
        case 0x1b6f6cu: goto label_1b6f6c;
        case 0x1b6f70u: goto label_1b6f70;
        case 0x1b6f74u: goto label_1b6f74;
        case 0x1b6f78u: goto label_1b6f78;
        case 0x1b6f7cu: goto label_1b6f7c;
        case 0x1b6f80u: goto label_1b6f80;
        case 0x1b6f84u: goto label_1b6f84;
        case 0x1b6f88u: goto label_1b6f88;
        case 0x1b6f8cu: goto label_1b6f8c;
        case 0x1b6f90u: goto label_1b6f90;
        case 0x1b6f94u: goto label_1b6f94;
        case 0x1b6f98u: goto label_1b6f98;
        case 0x1b6f9cu: goto label_1b6f9c;
        case 0x1b6fa0u: goto label_1b6fa0;
        case 0x1b6fa4u: goto label_1b6fa4;
        case 0x1b6fa8u: goto label_1b6fa8;
        case 0x1b6facu: goto label_1b6fac;
        case 0x1b6fb0u: goto label_1b6fb0;
        case 0x1b6fb4u: goto label_1b6fb4;
        case 0x1b6fb8u: goto label_1b6fb8;
        case 0x1b6fbcu: goto label_1b6fbc;
        case 0x1b6fc0u: goto label_1b6fc0;
        case 0x1b6fc4u: goto label_1b6fc4;
        case 0x1b6fc8u: goto label_1b6fc8;
        case 0x1b6fccu: goto label_1b6fcc;
        case 0x1b6fd0u: goto label_1b6fd0;
        case 0x1b6fd4u: goto label_1b6fd4;
        case 0x1b6fd8u: goto label_1b6fd8;
        case 0x1b6fdcu: goto label_1b6fdc;
        case 0x1b6fe0u: goto label_1b6fe0;
        case 0x1b6fe4u: goto label_1b6fe4;
        case 0x1b6fe8u: goto label_1b6fe8;
        case 0x1b6fecu: goto label_1b6fec;
        case 0x1b6ff0u: goto label_1b6ff0;
        case 0x1b6ff4u: goto label_1b6ff4;
        case 0x1b6ff8u: goto label_1b6ff8;
        case 0x1b6ffcu: goto label_1b6ffc;
        case 0x1b7000u: goto label_1b7000;
        case 0x1b7004u: goto label_1b7004;
        case 0x1b7008u: goto label_1b7008;
        case 0x1b700cu: goto label_1b700c;
        case 0x1b7010u: goto label_1b7010;
        case 0x1b7014u: goto label_1b7014;
        case 0x1b7018u: goto label_1b7018;
        case 0x1b701cu: goto label_1b701c;
        case 0x1b7020u: goto label_1b7020;
        case 0x1b7024u: goto label_1b7024;
        case 0x1b7028u: goto label_1b7028;
        case 0x1b702cu: goto label_1b702c;
        case 0x1b7030u: goto label_1b7030;
        case 0x1b7034u: goto label_1b7034;
        case 0x1b7038u: goto label_1b7038;
        case 0x1b703cu: goto label_1b703c;
        case 0x1b7040u: goto label_1b7040;
        case 0x1b7044u: goto label_1b7044;
        case 0x1b7048u: goto label_1b7048;
        case 0x1b704cu: goto label_1b704c;
        case 0x1b7050u: goto label_1b7050;
        case 0x1b7054u: goto label_1b7054;
        case 0x1b7058u: goto label_1b7058;
        case 0x1b705cu: goto label_1b705c;
        case 0x1b7060u: goto label_1b7060;
        case 0x1b7064u: goto label_1b7064;
        case 0x1b7068u: goto label_1b7068;
        case 0x1b706cu: goto label_1b706c;
        case 0x1b7070u: goto label_1b7070;
        case 0x1b7074u: goto label_1b7074;
        case 0x1b7078u: goto label_1b7078;
        case 0x1b707cu: goto label_1b707c;
        case 0x1b7080u: goto label_1b7080;
        case 0x1b7084u: goto label_1b7084;
        case 0x1b7088u: goto label_1b7088;
        case 0x1b708cu: goto label_1b708c;
        case 0x1b7090u: goto label_1b7090;
        case 0x1b7094u: goto label_1b7094;
        case 0x1b7098u: goto label_1b7098;
        case 0x1b709cu: goto label_1b709c;
        case 0x1b70a0u: goto label_1b70a0;
        case 0x1b70a4u: goto label_1b70a4;
        case 0x1b70a8u: goto label_1b70a8;
        case 0x1b70acu: goto label_1b70ac;
        case 0x1b70b0u: goto label_1b70b0;
        case 0x1b70b4u: goto label_1b70b4;
        case 0x1b70b8u: goto label_1b70b8;
        case 0x1b70bcu: goto label_1b70bc;
        case 0x1b70c0u: goto label_1b70c0;
        case 0x1b70c4u: goto label_1b70c4;
        case 0x1b70c8u: goto label_1b70c8;
        case 0x1b70ccu: goto label_1b70cc;
        case 0x1b70d0u: goto label_1b70d0;
        case 0x1b70d4u: goto label_1b70d4;
        case 0x1b70d8u: goto label_1b70d8;
        case 0x1b70dcu: goto label_1b70dc;
        case 0x1b70e0u: goto label_1b70e0;
        case 0x1b70e4u: goto label_1b70e4;
        case 0x1b70e8u: goto label_1b70e8;
        case 0x1b70ecu: goto label_1b70ec;
        case 0x1b70f0u: goto label_1b70f0;
        case 0x1b70f4u: goto label_1b70f4;
        case 0x1b70f8u: goto label_1b70f8;
        case 0x1b70fcu: goto label_1b70fc;
        case 0x1b7100u: goto label_1b7100;
        case 0x1b7104u: goto label_1b7104;
        case 0x1b7108u: goto label_1b7108;
        case 0x1b710cu: goto label_1b710c;
        case 0x1b7110u: goto label_1b7110;
        case 0x1b7114u: goto label_1b7114;
        case 0x1b7118u: goto label_1b7118;
        case 0x1b711cu: goto label_1b711c;
        case 0x1b7120u: goto label_1b7120;
        case 0x1b7124u: goto label_1b7124;
        case 0x1b7128u: goto label_1b7128;
        case 0x1b712cu: goto label_1b712c;
        case 0x1b7130u: goto label_1b7130;
        case 0x1b7134u: goto label_1b7134;
        case 0x1b7138u: goto label_1b7138;
        case 0x1b713cu: goto label_1b713c;
        case 0x1b7140u: goto label_1b7140;
        case 0x1b7144u: goto label_1b7144;
        case 0x1b7148u: goto label_1b7148;
        case 0x1b714cu: goto label_1b714c;
        case 0x1b7150u: goto label_1b7150;
        case 0x1b7154u: goto label_1b7154;
        case 0x1b7158u: goto label_1b7158;
        case 0x1b715cu: goto label_1b715c;
        case 0x1b7160u: goto label_1b7160;
        case 0x1b7164u: goto label_1b7164;
        case 0x1b7168u: goto label_1b7168;
        case 0x1b716cu: goto label_1b716c;
        case 0x1b7170u: goto label_1b7170;
        case 0x1b7174u: goto label_1b7174;
        case 0x1b7178u: goto label_1b7178;
        case 0x1b717cu: goto label_1b717c;
        case 0x1b7180u: goto label_1b7180;
        case 0x1b7184u: goto label_1b7184;
        case 0x1b7188u: goto label_1b7188;
        case 0x1b718cu: goto label_1b718c;
        case 0x1b7190u: goto label_1b7190;
        case 0x1b7194u: goto label_1b7194;
        case 0x1b7198u: goto label_1b7198;
        case 0x1b719cu: goto label_1b719c;
        case 0x1b71a0u: goto label_1b71a0;
        case 0x1b71a4u: goto label_1b71a4;
        case 0x1b71a8u: goto label_1b71a8;
        case 0x1b71acu: goto label_1b71ac;
        case 0x1b71b0u: goto label_1b71b0;
        case 0x1b71b4u: goto label_1b71b4;
        case 0x1b71b8u: goto label_1b71b8;
        case 0x1b71bcu: goto label_1b71bc;
        case 0x1b71c0u: goto label_1b71c0;
        case 0x1b71c4u: goto label_1b71c4;
        case 0x1b71c8u: goto label_1b71c8;
        case 0x1b71ccu: goto label_1b71cc;
        case 0x1b71d0u: goto label_1b71d0;
        case 0x1b71d4u: goto label_1b71d4;
        case 0x1b71d8u: goto label_1b71d8;
        case 0x1b71dcu: goto label_1b71dc;
        case 0x1b71e0u: goto label_1b71e0;
        case 0x1b71e4u: goto label_1b71e4;
        case 0x1b71e8u: goto label_1b71e8;
        case 0x1b71ecu: goto label_1b71ec;
        case 0x1b71f0u: goto label_1b71f0;
        case 0x1b71f4u: goto label_1b71f4;
        case 0x1b71f8u: goto label_1b71f8;
        case 0x1b71fcu: goto label_1b71fc;
        case 0x1b7200u: goto label_1b7200;
        case 0x1b7204u: goto label_1b7204;
        case 0x1b7208u: goto label_1b7208;
        case 0x1b720cu: goto label_1b720c;
        case 0x1b7210u: goto label_1b7210;
        case 0x1b7214u: goto label_1b7214;
        case 0x1b7218u: goto label_1b7218;
        case 0x1b721cu: goto label_1b721c;
        case 0x1b7220u: goto label_1b7220;
        case 0x1b7224u: goto label_1b7224;
        case 0x1b7228u: goto label_1b7228;
        case 0x1b722cu: goto label_1b722c;
        case 0x1b7230u: goto label_1b7230;
        case 0x1b7234u: goto label_1b7234;
        case 0x1b7238u: goto label_1b7238;
        case 0x1b723cu: goto label_1b723c;
        case 0x1b7240u: goto label_1b7240;
        case 0x1b7244u: goto label_1b7244;
        case 0x1b7248u: goto label_1b7248;
        case 0x1b724cu: goto label_1b724c;
        case 0x1b7250u: goto label_1b7250;
        case 0x1b7254u: goto label_1b7254;
        case 0x1b7258u: goto label_1b7258;
        case 0x1b725cu: goto label_1b725c;
        case 0x1b7260u: goto label_1b7260;
        case 0x1b7264u: goto label_1b7264;
        case 0x1b7268u: goto label_1b7268;
        case 0x1b726cu: goto label_1b726c;
        case 0x1b7270u: goto label_1b7270;
        case 0x1b7274u: goto label_1b7274;
        case 0x1b7278u: goto label_1b7278;
        case 0x1b727cu: goto label_1b727c;
        case 0x1b7280u: goto label_1b7280;
        case 0x1b7284u: goto label_1b7284;
        case 0x1b7288u: goto label_1b7288;
        case 0x1b728cu: goto label_1b728c;
        case 0x1b7290u: goto label_1b7290;
        case 0x1b7294u: goto label_1b7294;
        case 0x1b7298u: goto label_1b7298;
        case 0x1b729cu: goto label_1b729c;
        case 0x1b72a0u: goto label_1b72a0;
        case 0x1b72a4u: goto label_1b72a4;
        case 0x1b72a8u: goto label_1b72a8;
        case 0x1b72acu: goto label_1b72ac;
        case 0x1b72b0u: goto label_1b72b0;
        case 0x1b72b4u: goto label_1b72b4;
        case 0x1b72b8u: goto label_1b72b8;
        case 0x1b72bcu: goto label_1b72bc;
        case 0x1b72c0u: goto label_1b72c0;
        case 0x1b72c4u: goto label_1b72c4;
        case 0x1b72c8u: goto label_1b72c8;
        case 0x1b72ccu: goto label_1b72cc;
        case 0x1b72d0u: goto label_1b72d0;
        case 0x1b72d4u: goto label_1b72d4;
        case 0x1b72d8u: goto label_1b72d8;
        case 0x1b72dcu: goto label_1b72dc;
        case 0x1b72e0u: goto label_1b72e0;
        case 0x1b72e4u: goto label_1b72e4;
        case 0x1b72e8u: goto label_1b72e8;
        case 0x1b72ecu: goto label_1b72ec;
        case 0x1b72f0u: goto label_1b72f0;
        case 0x1b72f4u: goto label_1b72f4;
        case 0x1b72f8u: goto label_1b72f8;
        case 0x1b72fcu: goto label_1b72fc;
        case 0x1b7300u: goto label_1b7300;
        case 0x1b7304u: goto label_1b7304;
        case 0x1b7308u: goto label_1b7308;
        case 0x1b730cu: goto label_1b730c;
        case 0x1b7310u: goto label_1b7310;
        case 0x1b7314u: goto label_1b7314;
        case 0x1b7318u: goto label_1b7318;
        case 0x1b731cu: goto label_1b731c;
        case 0x1b7320u: goto label_1b7320;
        case 0x1b7324u: goto label_1b7324;
        case 0x1b7328u: goto label_1b7328;
        case 0x1b732cu: goto label_1b732c;
        case 0x1b7330u: goto label_1b7330;
        case 0x1b7334u: goto label_1b7334;
        case 0x1b7338u: goto label_1b7338;
        case 0x1b733cu: goto label_1b733c;
        case 0x1b7340u: goto label_1b7340;
        case 0x1b7344u: goto label_1b7344;
        case 0x1b7348u: goto label_1b7348;
        case 0x1b734cu: goto label_1b734c;
        case 0x1b7350u: goto label_1b7350;
        case 0x1b7354u: goto label_1b7354;
        case 0x1b7358u: goto label_1b7358;
        case 0x1b735cu: goto label_1b735c;
        case 0x1b7360u: goto label_1b7360;
        case 0x1b7364u: goto label_1b7364;
        case 0x1b7368u: goto label_1b7368;
        case 0x1b736cu: goto label_1b736c;
        case 0x1b7370u: goto label_1b7370;
        case 0x1b7374u: goto label_1b7374;
        case 0x1b7378u: goto label_1b7378;
        case 0x1b737cu: goto label_1b737c;
        case 0x1b7380u: goto label_1b7380;
        case 0x1b7384u: goto label_1b7384;
        case 0x1b7388u: goto label_1b7388;
        case 0x1b738cu: goto label_1b738c;
        case 0x1b7390u: goto label_1b7390;
        case 0x1b7394u: goto label_1b7394;
        case 0x1b7398u: goto label_1b7398;
        case 0x1b739cu: goto label_1b739c;
        case 0x1b73a0u: goto label_1b73a0;
        case 0x1b73a4u: goto label_1b73a4;
        case 0x1b73a8u: goto label_1b73a8;
        case 0x1b73acu: goto label_1b73ac;
        case 0x1b73b0u: goto label_1b73b0;
        case 0x1b73b4u: goto label_1b73b4;
        case 0x1b73b8u: goto label_1b73b8;
        case 0x1b73bcu: goto label_1b73bc;
        case 0x1b73c0u: goto label_1b73c0;
        case 0x1b73c4u: goto label_1b73c4;
        case 0x1b73c8u: goto label_1b73c8;
        case 0x1b73ccu: goto label_1b73cc;
        case 0x1b73d0u: goto label_1b73d0;
        case 0x1b73d4u: goto label_1b73d4;
        case 0x1b73d8u: goto label_1b73d8;
        case 0x1b73dcu: goto label_1b73dc;
        case 0x1b73e0u: goto label_1b73e0;
        case 0x1b73e4u: goto label_1b73e4;
        case 0x1b73e8u: goto label_1b73e8;
        case 0x1b73ecu: goto label_1b73ec;
        case 0x1b73f0u: goto label_1b73f0;
        case 0x1b73f4u: goto label_1b73f4;
        case 0x1b73f8u: goto label_1b73f8;
        case 0x1b73fcu: goto label_1b73fc;
        case 0x1b7400u: goto label_1b7400;
        case 0x1b7404u: goto label_1b7404;
        case 0x1b7408u: goto label_1b7408;
        case 0x1b740cu: goto label_1b740c;
        case 0x1b7410u: goto label_1b7410;
        case 0x1b7414u: goto label_1b7414;
        case 0x1b7418u: goto label_1b7418;
        case 0x1b741cu: goto label_1b741c;
        case 0x1b7420u: goto label_1b7420;
        case 0x1b7424u: goto label_1b7424;
        case 0x1b7428u: goto label_1b7428;
        case 0x1b742cu: goto label_1b742c;
        case 0x1b7430u: goto label_1b7430;
        case 0x1b7434u: goto label_1b7434;
        case 0x1b7438u: goto label_1b7438;
        case 0x1b743cu: goto label_1b743c;
        case 0x1b7440u: goto label_1b7440;
        case 0x1b7444u: goto label_1b7444;
        case 0x1b7448u: goto label_1b7448;
        case 0x1b744cu: goto label_1b744c;
        case 0x1b7450u: goto label_1b7450;
        case 0x1b7454u: goto label_1b7454;
        case 0x1b7458u: goto label_1b7458;
        case 0x1b745cu: goto label_1b745c;
        case 0x1b7460u: goto label_1b7460;
        case 0x1b7464u: goto label_1b7464;
        case 0x1b7468u: goto label_1b7468;
        case 0x1b746cu: goto label_1b746c;
        case 0x1b7470u: goto label_1b7470;
        case 0x1b7474u: goto label_1b7474;
        case 0x1b7478u: goto label_1b7478;
        case 0x1b747cu: goto label_1b747c;
        case 0x1b7480u: goto label_1b7480;
        case 0x1b7484u: goto label_1b7484;
        case 0x1b7488u: goto label_1b7488;
        case 0x1b748cu: goto label_1b748c;
        case 0x1b7490u: goto label_1b7490;
        case 0x1b7494u: goto label_1b7494;
        case 0x1b7498u: goto label_1b7498;
        case 0x1b749cu: goto label_1b749c;
        case 0x1b74a0u: goto label_1b74a0;
        case 0x1b74a4u: goto label_1b74a4;
        case 0x1b74a8u: goto label_1b74a8;
        case 0x1b74acu: goto label_1b74ac;
        case 0x1b74b0u: goto label_1b74b0;
        case 0x1b74b4u: goto label_1b74b4;
        case 0x1b74b8u: goto label_1b74b8;
        case 0x1b74bcu: goto label_1b74bc;
        case 0x1b74c0u: goto label_1b74c0;
        case 0x1b74c4u: goto label_1b74c4;
        case 0x1b74c8u: goto label_1b74c8;
        case 0x1b74ccu: goto label_1b74cc;
        case 0x1b74d0u: goto label_1b74d0;
        case 0x1b74d4u: goto label_1b74d4;
        case 0x1b74d8u: goto label_1b74d8;
        case 0x1b74dcu: goto label_1b74dc;
        case 0x1b74e0u: goto label_1b74e0;
        case 0x1b74e4u: goto label_1b74e4;
        case 0x1b74e8u: goto label_1b74e8;
        case 0x1b74ecu: goto label_1b74ec;
        case 0x1b74f0u: goto label_1b74f0;
        case 0x1b74f4u: goto label_1b74f4;
        case 0x1b74f8u: goto label_1b74f8;
        case 0x1b74fcu: goto label_1b74fc;
        case 0x1b7500u: goto label_1b7500;
        case 0x1b7504u: goto label_1b7504;
        case 0x1b7508u: goto label_1b7508;
        case 0x1b750cu: goto label_1b750c;
        case 0x1b7510u: goto label_1b7510;
        case 0x1b7514u: goto label_1b7514;
        case 0x1b7518u: goto label_1b7518;
        case 0x1b751cu: goto label_1b751c;
        case 0x1b7520u: goto label_1b7520;
        case 0x1b7524u: goto label_1b7524;
        case 0x1b7528u: goto label_1b7528;
        case 0x1b752cu: goto label_1b752c;
        case 0x1b7530u: goto label_1b7530;
        case 0x1b7534u: goto label_1b7534;
        case 0x1b7538u: goto label_1b7538;
        case 0x1b753cu: goto label_1b753c;
        case 0x1b7540u: goto label_1b7540;
        case 0x1b7544u: goto label_1b7544;
        case 0x1b7548u: goto label_1b7548;
        case 0x1b754cu: goto label_1b754c;
        case 0x1b7550u: goto label_1b7550;
        case 0x1b7554u: goto label_1b7554;
        case 0x1b7558u: goto label_1b7558;
        case 0x1b755cu: goto label_1b755c;
        case 0x1b7560u: goto label_1b7560;
        case 0x1b7564u: goto label_1b7564;
        case 0x1b7568u: goto label_1b7568;
        case 0x1b756cu: goto label_1b756c;
        case 0x1b7570u: goto label_1b7570;
        case 0x1b7574u: goto label_1b7574;
        case 0x1b7578u: goto label_1b7578;
        case 0x1b757cu: goto label_1b757c;
        case 0x1b7580u: goto label_1b7580;
        case 0x1b7584u: goto label_1b7584;
        case 0x1b7588u: goto label_1b7588;
        case 0x1b758cu: goto label_1b758c;
        case 0x1b7590u: goto label_1b7590;
        case 0x1b7594u: goto label_1b7594;
        case 0x1b7598u: goto label_1b7598;
        case 0x1b759cu: goto label_1b759c;
        case 0x1b75a0u: goto label_1b75a0;
        case 0x1b75a4u: goto label_1b75a4;
        case 0x1b75a8u: goto label_1b75a8;
        case 0x1b75acu: goto label_1b75ac;
        case 0x1b75b0u: goto label_1b75b0;
        case 0x1b75b4u: goto label_1b75b4;
        default: return;
    }

label_1b6de8:
    // 0x1b6de8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6dec:
    // 0x1b6dec: 0xc06dd74  jal         func_1B75D0
label_1b6df0:
    if (ctx->pc == 0x1B6DF0u) {
        ctx->pc = 0x1B6DF4u;
        goto label_1b6df4;
    }
    ctx->pc = 0x1B6DECu;
    SET_GPR_U32(ctx, 31, 0x1B6DF4u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x1B6DF4u;
label_1b6df4:
    // 0x1b6df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6df8:
    // 0x1b6df8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b6dfc:
    // 0x1b6dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6e00:
    // 0x1b6e00: 0x3e00008  jr          $ra
label_1b6e04:
    if (ctx->pc == 0x1B6E04u) {
        ctx->pc = 0x1B6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E00u;
        // 0x1b6e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6E08u;
        goto label_1b6e08;
    }
    ctx->pc = 0x1B6E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E00u;
        // 0x1b6e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E08u;
label_1b6e08:
    // 0x1b6e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b6e0c:
    // 0x1b6e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6e10:
    // 0x1b6e10: 0x212fa  dsrl        $v0, $v0, 11
    ctx->pc = 0x1b6e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 11);
label_1b6e14:
    // 0x1b6e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b6e18:
    // 0x1b6e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e1c:
    // 0x1b6e1c: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1b6e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_1b6e20:
    // 0x1b6e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6e24:
    // 0x1b6e24: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x1b6e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
label_1b6e28:
    // 0x1b6e28: 0x31aba  dsrl        $v1, $v1, 10
    ctx->pc = 0x1b6e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 10);
label_1b6e2c:
    // 0x1b6e2c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1b6e2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b6e30:
    // 0x1b6e30: 0x322207ff  andi        $v0, $s1, 0x7FF
    ctx->pc = 0x1b6e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2047);
label_1b6e34:
    // 0x1b6e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b6e38:
    // 0x1b6e38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b6e3c:
    // 0x1b6e3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b6e40:
    if (ctx->pc == 0x1B6E40u) {
        ctx->pc = 0x1B6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E3Cu;
        // 0x1b6e40: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6E44u;
        goto label_1b6e44;
    }
    ctx->pc = 0x1B6E3Cu;
    {
        const bool branch_taken_0x1b6e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E3Cu;
        // 0x1b6e40: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e3c) {
            ctx->pc = 0x1B6E50u;
            goto label_1b6e50;
        }
    }
    ctx->pc = 0x1B6E44u;
label_1b6e44:
    // 0x1b6e44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1b6e48:
    if (ctx->pc == 0x1B6E48u) {
        ctx->pc = 0x1B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E44u;
        // 0x1b6e48: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6E4Cu;
        goto label_1b6e4c;
    }
    ctx->pc = 0x1B6E44u;
    {
        const bool branch_taken_0x1b6e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E44u;
        // 0x1b6e48: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e44) {
            ctx->pc = 0x1B6E50u;
            goto label_1b6e50;
        }
    }
    ctx->pc = 0x1B6E4Cu;
label_1b6e4c:
    // 0x1b6e4c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1b6e4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1b6e50:
    // 0x1b6e50: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x1b6e50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
label_1b6e54:
    // 0x1b6e54: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1b6e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
label_1b6e58:
    // 0x1b6e58: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x1b6e58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
label_1b6e5c:
    // 0x1b6e5c: 0xc06df0a  jal         func_1B7C28
label_1b6e60:
    if (ctx->pc == 0x1B6E60u) {
        ctx->pc = 0x1B6E64u;
        goto label_1b6e64;
    }
    ctx->pc = 0x1B6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E64u);
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x1B6E64u;
label_1b6e64:
    // 0x1b6e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e68:
    // 0x1b6e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e6c:
    // 0x1b6e6c: 0xc06dda4  jal         func_1B7690
label_1b6e70:
    if (ctx->pc == 0x1B6E70u) {
        ctx->pc = 0x1B6E74u;
        goto label_1b6e74;
    }
    ctx->pc = 0x1B6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E74u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1B6E74u;
label_1b6e74:
    // 0x1b6e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e78:
    // 0x1b6e78: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_1b6e7c:
    // 0x1b6e7c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1b6e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_1b6e80:
    // 0x1b6e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e84:
    // 0x1b6e84: 0xc06dda4  jal         func_1B7690
label_1b6e88:
    if (ctx->pc == 0x1B6E88u) {
        ctx->pc = 0x1B6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E84u;
        // 0x1b6e88: 0x2308024  and         $s0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6E8Cu;
        goto label_1b6e8c;
    }
    ctx->pc = 0x1B6E84u;
    SET_GPR_U32(ctx, 31, 0x1B6E8Cu);
    ctx->pc = 0x1B6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E84u;
    // 0x1b6e88: 0x2308024  and         $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1B6E8Cu;
label_1b6e8c:
    // 0x1b6e8c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1b6e8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
label_1b6e90:
    // 0x1b6e90: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1b6e90u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_1b6e94:
    // 0x1b6e94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b6e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e98:
    // 0x1b6e98: 0xc06df0a  jal         func_1B7C28
label_1b6e9c:
    if (ctx->pc == 0x1B6E9Cu) {
        ctx->pc = 0x1B6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E98u;
        // 0x1b6e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6EA0u;
        goto label_1b6ea0;
    }
    ctx->pc = 0x1B6E98u;
    SET_GPR_U32(ctx, 31, 0x1B6EA0u);
    ctx->pc = 0x1B6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E98u;
    // 0x1b6e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x1B6EA0u;
label_1b6ea0:
    // 0x1b6ea0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1b6ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
label_1b6ea4:
    // 0x1b6ea4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1b6ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1b6ea8:
    // 0x1b6ea8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1b6eac:
    if (ctx->pc == 0x1B6EACu) {
        ctx->pc = 0x1B6EB0u;
        goto label_1b6eb0;
    }
    ctx->pc = 0x1B6EA8u;
    {
        const bool branch_taken_0x1b6ea8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b6ea8) {
            ctx->pc = 0x1B6EBCu;
            goto label_1b6ebc;
        }
    }
    ctx->pc = 0x1B6EB0u;
label_1b6eb0:
    // 0x1b6eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6eb4:
    // 0x1b6eb4: 0xc06dd74  jal         func_1B75D0
label_1b6eb8:
    if (ctx->pc == 0x1B6EB8u) {
        ctx->pc = 0x1B6EBCu;
        goto label_1b6ebc;
    }
    ctx->pc = 0x1B6EB4u;
    SET_GPR_U32(ctx, 31, 0x1B6EBCu);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x1B6EBCu;
label_1b6ebc:
    // 0x1b6ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ec0:
    // 0x1b6ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ec4:
    // 0x1b6ec4: 0xc06dd74  jal         func_1B75D0
label_1b6ec8:
    if (ctx->pc == 0x1B6EC8u) {
        ctx->pc = 0x1B6ECCu;
        goto label_1b6ecc;
    }
    ctx->pc = 0x1B6EC4u;
    SET_GPR_U32(ctx, 31, 0x1B6ECCu);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x1B6ECCu;
label_1b6ecc:
    // 0x1b6ecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ed0:
    // 0x1b6ed0: 0xc06df6c  jal         func_1B7DB0
label_1b6ed4:
    if (ctx->pc == 0x1B6ED4u) {
        ctx->pc = 0x1B6ED8u;
        goto label_1b6ed8;
    }
    ctx->pc = 0x1B6ED0u;
    SET_GPR_U32(ctx, 31, 0x1B6ED8u);
    ctx->pc = 0x1B7DB0u;
    { ctx->pc = 0x1b7db0; return; }
    ctx->pc = 0x1B6ED8u;
label_1b6ed8:
    // 0x1b6ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6edc:
    // 0x1b6edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b6ee0:
    // 0x1b6ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6ee4:
    // 0x1b6ee4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b6ee8:
    // 0x1b6ee8: 0x3e00008  jr          $ra
label_1b6eec:
    if (ctx->pc == 0x1B6EECu) {
        ctx->pc = 0x1B6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EE8u;
        // 0x1b6eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6EF0u;
        goto label_1b6ef0;
    }
    ctx->pc = 0x1B6EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EE8u;
        // 0x1b6eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6EF0u;
label_1b6ef0:
    // 0x1b6ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b6ef4:
    // 0x1b6ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ef8:
    // 0x1b6ef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b6efc:
    // 0x1b6efc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f00:
    // 0x1b6f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b6f04:
    // 0x1b6f04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b6f08:
    // 0x1b6f08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b6f0c:
    // 0x1b6f0c: 0xc06def6  jal         func_1B7BD8
label_1b6f10:
    if (ctx->pc == 0x1B6F10u) {
        ctx->pc = 0x1B6F14u;
        goto label_1b6f14;
    }
    ctx->pc = 0x1B6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F14u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1B6F14u;
label_1b6f14:
    // 0x1b6f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f18:
    // 0x1b6f18: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x1b6f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
label_1b6f1c:
    // 0x1b6f1c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1b6f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1b6f20:
    // 0x1b6f20: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
label_1b6f24:
    if (ctx->pc == 0x1B6F24u) {
        ctx->pc = 0x1B6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F20u;
        // 0x1b6f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F28u;
        goto label_1b6f28;
    }
    ctx->pc = 0x1B6F20u;
    {
        const bool branch_taken_0x1b6f20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F20u;
        // 0x1b6f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f20) {
            ctx->pc = 0x1B6FF0u;
            goto label_1b6ff0;
        }
    }
    ctx->pc = 0x1B6F28u;
label_1b6f28:
    // 0x1b6f28: 0xc06dda4  jal         func_1B7690
label_1b6f2c:
    if (ctx->pc == 0x1B6F2Cu) {
        ctx->pc = 0x1B6F30u;
        goto label_1b6f30;
    }
    ctx->pc = 0x1B6F28u;
    SET_GPR_U32(ctx, 31, 0x1B6F30u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1B6F30u;
label_1b6f30:
    // 0x1b6f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f34:
    // 0x1b6f34: 0xc06df82  jal         func_1B7E08
label_1b6f38:
    if (ctx->pc == 0x1B6F38u) {
        ctx->pc = 0x1B6F3Cu;
        goto label_1b6f3c;
    }
    ctx->pc = 0x1B6F34u;
    SET_GPR_U32(ctx, 31, 0x1B6F3Cu);
    ctx->pc = 0x1B7E08u;
    { ctx->pc = 0x1b7e08; return; }
    ctx->pc = 0x1B6F3Cu;
label_1b6f3c:
    // 0x1b6f3c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x1b6f3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_1b6f40:
    // 0x1b6f40: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1b6f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1b6f44:
    // 0x1b6f44: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x1b6f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
label_1b6f48:
    // 0x1b6f48: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_1b6f4c:
    if (ctx->pc == 0x1B6F4Cu) {
        ctx->pc = 0x1B6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F48u;
        // 0x1b6f4c: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F50u;
        goto label_1b6f50;
    }
    ctx->pc = 0x1B6F48u;
    {
        const bool branch_taken_0x1b6f48 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F48u;
        // 0x1b6f4c: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f48) {
            ctx->pc = 0x1B6F60u;
            goto label_1b6f60;
        }
    }
    ctx->pc = 0x1B6F50u;
label_1b6f50:
    // 0x1b6f50: 0xc06db58  jal         func_1B6D60
label_1b6f54:
    if (ctx->pc == 0x1B6F54u) {
        ctx->pc = 0x1B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F50u;
        // 0x1b6f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F58u;
        goto label_1b6f58;
    }
    ctx->pc = 0x1B6F50u;
    SET_GPR_U32(ctx, 31, 0x1B6F58u);
    ctx->pc = 0x1B6F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F50u;
    // 0x1b6f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D60u;
    { ctx->pc = 0x1b6d60; return; }
    ctx->pc = 0x1B6F58u;
label_1b6f58:
    // 0x1b6f58: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b6f5c:
    if (ctx->pc == 0x1B6F5Cu) {
        ctx->pc = 0x1B6F60u;
        goto label_1b6f60;
    }
    ctx->pc = 0x1B6F58u;
    {
        const bool branch_taken_0x1b6f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f58) {
            ctx->pc = 0x1B6F78u;
            goto label_1b6f78;
        }
    }
    ctx->pc = 0x1B6F60u;
label_1b6f60:
    // 0x1b6f60: 0xc06db58  jal         func_1B6D60
label_1b6f64:
    if (ctx->pc == 0x1B6F64u) {
        ctx->pc = 0x1B6F68u;
        goto label_1b6f68;
    }
    ctx->pc = 0x1B6F60u;
    SET_GPR_U32(ctx, 31, 0x1B6F68u);
    ctx->pc = 0x1B6D60u;
    { ctx->pc = 0x1b6d60; return; }
    ctx->pc = 0x1B6F68u;
label_1b6f68:
    // 0x1b6f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f6c:
    // 0x1b6f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b6f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f70:
    // 0x1b6f70: 0xc06dd74  jal         func_1B75D0
label_1b6f74:
    if (ctx->pc == 0x1B6F74u) {
        ctx->pc = 0x1B6F78u;
        goto label_1b6f78;
    }
    ctx->pc = 0x1B6F70u;
    SET_GPR_U32(ctx, 31, 0x1B6F78u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x1B6F78u;
label_1b6f78:
    // 0x1b6f78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f7c:
    // 0x1b6f7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f80:
    // 0x1b6f80: 0xc06dd8a  jal         func_1B7628
label_1b6f84:
    if (ctx->pc == 0x1B6F84u) {
        ctx->pc = 0x1B6F88u;
        goto label_1b6f88;
    }
    ctx->pc = 0x1B6F80u;
    SET_GPR_U32(ctx, 31, 0x1B6F88u);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x1B6F88u;
label_1b6f88:
    // 0x1b6f88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f8c:
    // 0x1b6f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b6f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f90:
    // 0x1b6f90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b6f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f94:
    // 0x1b6f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6f98:
    // 0x1b6f98: 0xc06def6  jal         func_1B7BD8
label_1b6f9c:
    if (ctx->pc == 0x1B6F9Cu) {
        ctx->pc = 0x1B6FA0u;
        goto label_1b6fa0;
    }
    ctx->pc = 0x1B6F98u;
    SET_GPR_U32(ctx, 31, 0x1B6FA0u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1B6FA0u;
label_1b6fa0:
    // 0x1b6fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fa4:
    // 0x1b6fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b6fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fa8:
    // 0x1b6fa8: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_1b6fac:
    if (ctx->pc == 0x1B6FACu) {
        ctx->pc = 0x1B6FB0u;
        goto label_1b6fb0;
    }
    ctx->pc = 0x1B6FA8u;
    {
        const bool branch_taken_0x1b6fa8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6fa8) {
            ctx->pc = 0x1B6FD8u;
            goto label_1b6fd8;
        }
    }
    ctx->pc = 0x1B6FB0u;
label_1b6fb0:
    // 0x1b6fb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fb4:
    // 0x1b6fb4: 0xc06dd8a  jal         func_1B7628
label_1b6fb8:
    if (ctx->pc == 0x1B6FB8u) {
        ctx->pc = 0x1B6FBCu;
        goto label_1b6fbc;
    }
    ctx->pc = 0x1B6FB4u;
    SET_GPR_U32(ctx, 31, 0x1B6FBCu);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x1B6FBCu;
label_1b6fbc:
    // 0x1b6fbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6fc0:
    // 0x1b6fc0: 0xc06df82  jal         func_1B7E08
label_1b6fc4:
    if (ctx->pc == 0x1B6FC4u) {
        ctx->pc = 0x1B6FC8u;
        goto label_1b6fc8;
    }
    ctx->pc = 0x1B6FC0u;
    SET_GPR_U32(ctx, 31, 0x1B6FC8u);
    ctx->pc = 0x1B7E08u;
    { ctx->pc = 0x1b7e08; return; }
    ctx->pc = 0x1B6FC8u;
label_1b6fc8:
    // 0x1b6fc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b6fcc:
    // 0x1b6fcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6fd0:
    // 0x1b6fd0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b6fd4:
    if (ctx->pc == 0x1B6FD4u) {
        ctx->pc = 0x1B6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FD0u;
        // 0x1b6fd4: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6FD8u;
        goto label_1b6fd8;
    }
    ctx->pc = 0x1B6FD0u;
    {
        const bool branch_taken_0x1b6fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FD0u;
        // 0x1b6fd4: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fd0) {
            ctx->pc = 0x1B6FECu;
            goto label_1b6fec;
        }
    }
    ctx->pc = 0x1B6FD8u;
label_1b6fd8:
    // 0x1b6fd8: 0xc06df82  jal         func_1B7E08
label_1b6fdc:
    if (ctx->pc == 0x1B6FDCu) {
        ctx->pc = 0x1B6FE0u;
        goto label_1b6fe0;
    }
    ctx->pc = 0x1B6FD8u;
    SET_GPR_U32(ctx, 31, 0x1B6FE0u);
    ctx->pc = 0x1B7E08u;
    { ctx->pc = 0x1b7e08; return; }
    ctx->pc = 0x1B6FE0u;
label_1b6fe0:
    // 0x1b6fe0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b6fe4:
    // 0x1b6fe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1b6fe8:
    // 0x1b6fe8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1b6fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1b6fec:
    // 0x1b6fec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ff0:
    // 0x1b6ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6ff4:
    // 0x1b6ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b6ff8:
    // 0x1b6ff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6ffc:
    // 0x1b6ffc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b7000:
    // 0x1b7000: 0x3e00008  jr          $ra
label_1b7004:
    if (ctx->pc == 0x1B7004u) {
        ctx->pc = 0x1B7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7000u;
        // 0x1b7004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7008u;
        goto label_1b7008;
    }
    ctx->pc = 0x1B7000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7000u;
        // 0x1b7004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7008u;
label_1b7008:
    // 0x1b7008: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b7008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b700c:
    // 0x1b700c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b700cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7010:
    // 0x1b7010: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1b7010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b7014:
    // 0x1b7014: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1b7014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1b7018:
    // 0x1b7018: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1b701c:
    if (ctx->pc == 0x1B701Cu) {
        ctx->pc = 0x1B701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7018u;
        // 0x1b701c: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7020u;
        goto label_1b7020;
    }
    ctx->pc = 0x1B7018u;
    {
        const bool branch_taken_0x1b7018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7018u;
        // 0x1b701c: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7018) {
            ctx->pc = 0x1B7048u;
            goto label_1b7048;
        }
    }
    ctx->pc = 0x1B7020u;
label_1b7020:
    // 0x1b7020: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
label_1b7024:
    if (ctx->pc == 0x1B7024u) {
        ctx->pc = 0x1B7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7020u;
        // 0x1b7024: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7028u;
        goto label_1b7028;
    }
    ctx->pc = 0x1B7020u;
    {
        const bool branch_taken_0x1b7020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7020u;
        // 0x1b7024: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7020) {
            ctx->pc = 0x1B708Cu;
            goto label_1b708c;
        }
    }
    ctx->pc = 0x1B7028u;
label_1b7028:
    // 0x1b7028: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1b7028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b702c:
    // 0x1b702c: 0x2882ff82  slti        $v0, $a0, -0x7E
    ctx->pc = 0x1b702cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_1b7030:
    // 0x1b7030: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1b7034:
    if (ctx->pc == 0x1B7034u) {
        ctx->pc = 0x1B7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7030u;
        // 0x1b7034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7038u;
        goto label_1b7038;
    }
    ctx->pc = 0x1B7030u;
    {
        const bool branch_taken_0x1b7030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7030) {
            ctx->pc = 0x1B7034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7030u;
            // 0x1b7034: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B7038u;
label_1b7038:
    // 0x1b7038: 0x28820081  slti        $v0, $a0, 0x81
    ctx->pc = 0x1b7038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
label_1b703c:
    // 0x1b703c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b7040:
    if (ctx->pc == 0x1B7040u) {
        ctx->pc = 0x1B7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B703Cu;
        // 0x1b7040: 0x30a3007f  andi        $v1, $a1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7044u;
        goto label_1b7044;
    }
    ctx->pc = 0x1B703Cu;
    {
        const bool branch_taken_0x1b703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b703c) {
            ctx->pc = 0x1B7040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B703Cu;
            // 0x1b7040: 0x30a3007f  andi        $v1, $a1, 0x7F (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7050u;
            goto label_1b7050;
        }
    }
    ctx->pc = 0x1B7044u;
label_1b7044:
    // 0x1b7044: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1b7044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b7048:
    // 0x1b7048: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b704c:
    if (ctx->pc == 0x1B704Cu) {
        ctx->pc = 0x1B704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7048u;
        // 0x1b704c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7050u;
        goto label_1b7050;
    }
    ctx->pc = 0x1B7048u;
    {
        const bool branch_taken_0x1b7048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7048u;
        // 0x1b704c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7048) {
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B7050u;
label_1b7050:
    // 0x1b7050: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1b7050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1b7054:
    // 0x1b7054: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1b7058:
    if (ctx->pc == 0x1B7058u) {
        ctx->pc = 0x1B7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7054u;
        // 0x1b7058: 0x2487007f  addiu       $a3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B705Cu;
        goto label_1b705c;
    }
    ctx->pc = 0x1B7054u;
    {
        const bool branch_taken_0x1b7054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7054u;
        // 0x1b7058: 0x2487007f  addiu       $a3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7054) {
            ctx->pc = 0x1B7070u;
            goto label_1b7070;
        }
    }
    ctx->pc = 0x1B705Cu;
label_1b705c:
    // 0x1b705c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1b705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_1b7060:
    // 0x1b7060: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b7064:
    if (ctx->pc == 0x1B7064u) {
        ctx->pc = 0x1B7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7060u;
        // 0x1b7064: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7068u;
        goto label_1b7068;
    }
    ctx->pc = 0x1B7060u;
    {
        const bool branch_taken_0x1b7060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7060) {
            ctx->pc = 0x1B7064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7060u;
            // 0x1b7064: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7074u;
            goto label_1b7074;
        }
    }
    ctx->pc = 0x1B7068u;
label_1b7068:
    // 0x1b7068: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b706c:
    if (ctx->pc == 0x1B706Cu) {
        ctx->pc = 0x1B7070u;
        goto label_1b7070;
    }
    ctx->pc = 0x1B7068u;
    {
        const bool branch_taken_0x1b7068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7068) {
            ctx->pc = 0x1B7074u;
            goto label_1b7074;
        }
    }
    ctx->pc = 0x1B7070u;
label_1b7070:
    // 0x1b7070: 0x24a5003f  addiu       $a1, $a1, 0x3F
    ctx->pc = 0x1b7070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
label_1b7074:
    // 0x1b7074: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
label_1b7078:
    if (ctx->pc == 0x1B7078u) {
        ctx->pc = 0x1B7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7074u;
        // 0x1b7078: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B707Cu;
        goto label_1b707c;
    }
    ctx->pc = 0x1B7074u;
    {
        const bool branch_taken_0x1b7074 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1b7074) {
            ctx->pc = 0x1B7078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7074u;
            // 0x1b7078: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7088u;
            goto label_1b7088;
        }
    }
    ctx->pc = 0x1B707Cu;
label_1b707c:
    // 0x1b707c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1b707cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_1b7080:
    // 0x1b7080: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1b7084:
    // 0x1b7084: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1b7084u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_1b7088:
    // 0x1b7088: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b7088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1b708c:
    // 0x1b708c: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1b708cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_1b7090:
    // 0x1b7090: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b7094:
    // 0x1b7094: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b7094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b7098:
    // 0x1b7098: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b7098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1b709c:
    // 0x1b709c: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x1b709cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
label_1b70a0:
    // 0x1b70a0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b70a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1b70a4:
    // 0x1b70a4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b70a8:
    // 0x1b70a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b70a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b70ac:
    // 0x1b70ac: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1b70acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1b70b0:
    // 0x1b70b0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b70b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b70b4:
    // 0x1b70b4: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x1b70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
label_1b70b8:
    // 0x1b70b8: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x1b70b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
label_1b70bc:
    // 0x1b70bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b70bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b70c0:
    // 0x1b70c0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1b70c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1b70c4:
    // 0x1b70c4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1b70c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1b70c8:
    // 0x1b70c8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b70c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1b70cc:
    // 0x1b70cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1b70ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b70d0:
    // 0x1b70d0: 0x3e00008  jr          $ra
label_1b70d4:
    if (ctx->pc == 0x1B70D4u) {
        ctx->pc = 0x1B70D8u;
        goto label_1b70d8;
    }
    ctx->pc = 0x1B70D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B70D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B70D8u;
label_1b70d8:
    // 0x1b70d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b70dc:
    // 0x1b70dc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1b70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_1b70e0:
    // 0x1b70e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1b70e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1b70e4:
    // 0x1b70e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b70e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b70e8:
    // 0x1b70e8: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
label_1b70ec:
    // 0x1b70ec: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x1b70ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1b70f0:
    // 0x1b70f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b70f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b70f4:
    // 0x1b70f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b70f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b70f8:
    // 0x1b70f8: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1b70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_1b70fc:
    // 0x1b70fc: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x1b70fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
label_1b7100:
    // 0x1b7100: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b7104:
    if (ctx->pc == 0x1B7104u) {
        ctx->pc = 0x1B7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7100u;
        // 0x1b7104: 0x321c0  sll         $a0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7108u;
        goto label_1b7108;
    }
    ctx->pc = 0x1B7100u;
    {
        const bool branch_taken_0x1b7100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7100u;
        // 0x1b7104: 0x321c0  sll         $a0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7100) {
            ctx->pc = 0x1B7118u;
            goto label_1b7118;
        }
    }
    ctx->pc = 0x1B7108u;
label_1b7108:
    // 0x1b7108: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b710c:
    // 0x1b710c: 0x3e00008  jr          $ra
label_1b7110:
    if (ctx->pc == 0x1B7110u) {
        ctx->pc = 0x1B7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B710Cu;
        // 0x1b7110: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7114u;
        goto label_1b7114;
    }
    ctx->pc = 0x1B710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B710Cu;
        // 0x1b7110: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B710Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7114u;
label_1b7114:
    // 0x1b7114: 0x0  nop
    ctx->pc = 0x1b7114u;
    // NOP
label_1b7118:
    // 0x1b7118: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b7118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b711c:
    // 0x1b711c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7120:
    // 0x1b7120: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1b7120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1b7124:
    // 0x1b7124: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1b7124u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_1b7128:
    // 0x1b7128: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1b7128u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1b712c:
    // 0x1b712c: 0x3e00008  jr          $ra
label_1b7130:
    if (ctx->pc == 0x1B7130u) {
        ctx->pc = 0x1B7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B712Cu;
        // 0x1b7130: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7134u;
        goto label_1b7134;
    }
    ctx->pc = 0x1B712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B712Cu;
        // 0x1b7130: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B712Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7134u;
label_1b7134:
    // 0x1b7134: 0x0  nop
    ctx->pc = 0x1b7134u;
    // NOP
label_1b7138:
    // 0x1b7138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b713c:
    // 0x1b713c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b713cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1b7140:
    // 0x1b7140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b7144:
    // 0x1b7144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b7148:
    // 0x1b7148: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1b7148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_1b714c:
    // 0x1b714c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1b714cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_1b7150:
    // 0x1b7150: 0xc06dc02  jal         func_1B7008
label_1b7154:
    if (ctx->pc == 0x1B7154u) {
        ctx->pc = 0x1B7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7150u;
        // 0x1b7154: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7158u;
        goto label_1b7158;
    }
    ctx->pc = 0x1B7150u;
    SET_GPR_U32(ctx, 31, 0x1B7158u);
    ctx->pc = 0x1B7154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7150u;
    // 0x1b7154: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7008u;
    goto label_1b7008;
    ctx->pc = 0x1B7158u;
label_1b7158:
    // 0x1b7158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b715c:
    // 0x1b715c: 0x3e00008  jr          $ra
label_1b7160:
    if (ctx->pc == 0x1B7160u) {
        ctx->pc = 0x1B7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B715Cu;
        // 0x1b7160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7164u;
        goto label_1b7164;
    }
    ctx->pc = 0x1B715Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B715Cu;
        // 0x1b7160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B715Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7164u;
label_1b7164:
    // 0x1b7164: 0x0  nop
    ctx->pc = 0x1b7164u;
    // NOP
label_1b7168:
    // 0x1b7168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b716c:
    // 0x1b716c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b716cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b7170:
    // 0x1b7170: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b7170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b7174:
    // 0x1b7174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b7178:
    // 0x1b7178: 0xc06dc36  jal         func_1B70D8
label_1b717c:
    if (ctx->pc == 0x1B717Cu) {
        ctx->pc = 0x1B717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7178u;
        // 0x1b717c: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7180u;
        goto label_1b7180;
    }
    ctx->pc = 0x1B7178u;
    SET_GPR_U32(ctx, 31, 0x1B7180u);
    ctx->pc = 0x1B717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7178u;
    // 0x1b717c: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70D8u;
    goto label_1b70d8;
    ctx->pc = 0x1B7180u;
label_1b7180:
    // 0x1b7180: 0x9fa7000c  lwu         $a3, 0xC($sp)
    ctx->pc = 0x1b7180u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1b7184:
    // 0x1b7184: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7188:
    // 0x1b7188: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b7188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b718c:
    // 0x1b718c: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x1b718cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
label_1b7190:
    // 0x1b7190: 0xc06df60  jal         func_1B7D80
label_1b7194:
    if (ctx->pc == 0x1B7194u) {
        ctx->pc = 0x1B7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7190u;
        // 0x1b7194: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7198u;
        goto label_1b7198;
    }
    ctx->pc = 0x1B7190u;
    SET_GPR_U32(ctx, 31, 0x1B7198u);
    ctx->pc = 0x1B7194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7190u;
    // 0x1b7194: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D80u;
    { ctx->pc = 0x1b7d80; return; }
    ctx->pc = 0x1B7198u;
label_1b7198:
    // 0x1b7198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b719c:
    // 0x1b719c: 0x3e00008  jr          $ra
label_1b71a0:
    if (ctx->pc == 0x1B71A0u) {
        ctx->pc = 0x1B71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B719Cu;
        // 0x1b71a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71A4u;
        goto label_1b71a4;
    }
    ctx->pc = 0x1B719Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B719Cu;
        // 0x1b71a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B719Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B71A4u;
label_1b71a4:
    // 0x1b71a4: 0x0  nop
    ctx->pc = 0x1b71a4u;
    // NOP
label_1b71a8:
    // 0x1b71a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b71ac:
    // 0x1b71ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b71acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b71b0:
    // 0x1b71b0: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x1b71b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_1b71b4:
    // 0x1b71b4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1b71b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b71b8:
    // 0x1b71b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b71bc:
    if (ctx->pc == 0x1B71BCu) {
        ctx->pc = 0x1B71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71B8u;
        // 0x1b71bc: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71C0u;
        goto label_1b71c0;
    }
    ctx->pc = 0x1B71B8u;
    {
        const bool branch_taken_0x1b71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71B8u;
        // 0x1b71bc: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71b8) {
            ctx->pc = 0x1B71D8u;
            goto label_1b71d8;
        }
    }
    ctx->pc = 0x1B71C0u;
label_1b71c0:
    // 0x1b71c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b71c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b71c4:
    // 0x1b71c4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1b71c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_1b71c8:
    // 0x1b71c8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1b71c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_1b71cc:
    // 0x1b71cc: 0x10000025  b           . + 4 + (0x25 << 2)
label_1b71d0:
    if (ctx->pc == 0x1B71D0u) {
        ctx->pc = 0x1B71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71CCu;
        // 0x1b71d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71D4u;
        goto label_1b71d4;
    }
    ctx->pc = 0x1B71CCu;
    {
        const bool branch_taken_0x1b71cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71CCu;
        // 0x1b71d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71cc) {
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B71D4u;
label_1b71d4:
    // 0x1b71d4: 0x0  nop
    ctx->pc = 0x1b71d4u;
    // NOP
label_1b71d8:
    // 0x1b71d8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1b71d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_1b71dc:
    // 0x1b71dc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1b71e0:
    if (ctx->pc == 0x1B71E0u) {
        ctx->pc = 0x1B71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71DCu;
        // 0x1b71e0: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71E4u;
        goto label_1b71e4;
    }
    ctx->pc = 0x1B71DCu;
    {
        const bool branch_taken_0x1b71dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b71dc) {
            ctx->pc = 0x1B71E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B71DCu;
            // 0x1b71e0: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7218u;
            goto label_1b7218;
        }
    }
    ctx->pc = 0x1B71E4u;
label_1b71e4:
    // 0x1b71e4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1b71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_1b71e8:
    // 0x1b71e8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_1b71ec:
    if (ctx->pc == 0x1B71ECu) {
        ctx->pc = 0x1B71ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71E8u;
        // 0x1b71ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71F0u;
        goto label_1b71f0;
    }
    ctx->pc = 0x1B71E8u;
    {
        const bool branch_taken_0x1b71e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b71e8) {
            ctx->pc = 0x1B71ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B71E8u;
            // 0x1b71ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B71F0u;
label_1b71f0:
    // 0x1b71f0: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_1b71f4:
    if (ctx->pc == 0x1B71F4u) {
        ctx->pc = 0x1B71F8u;
        goto label_1b71f8;
    }
    ctx->pc = 0x1B71F0u;
    {
        const bool branch_taken_0x1b71f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b71f0) {
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B71F8u;
label_1b71f8:
    // 0x1b71f8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1b71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b71fc:
    // 0x1b71fc: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x1b71fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_1b7200:
    // 0x1b7200: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_1b7204:
    if (ctx->pc == 0x1B7204u) {
        ctx->pc = 0x1B7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7200u;
        // 0x1b7204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7208u;
        goto label_1b7208;
    }
    ctx->pc = 0x1B7200u;
    {
        const bool branch_taken_0x1b7200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7200) {
            ctx->pc = 0x1B7204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7200u;
            // 0x1b7204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B7208u;
label_1b7208:
    // 0x1b7208: 0x28820400  slti        $v0, $a0, 0x400
    ctx->pc = 0x1b7208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1b720c:
    // 0x1b720c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b7210:
    if (ctx->pc == 0x1B7210u) {
        ctx->pc = 0x1B7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B720Cu;
        // 0x1b7210: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7214u;
        goto label_1b7214;
    }
    ctx->pc = 0x1B720Cu;
    {
        const bool branch_taken_0x1b720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b720c) {
            ctx->pc = 0x1B7210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B720Cu;
            // 0x1b7210: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7220u;
            goto label_1b7220;
        }
    }
    ctx->pc = 0x1B7214u;
label_1b7214:
    // 0x1b7214: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1b7214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_1b7218:
    // 0x1b7218: 0x10000012  b           . + 4 + (0x12 << 2)
label_1b721c:
    if (ctx->pc == 0x1B721Cu) {
        ctx->pc = 0x1B721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7218u;
        // 0x1b721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7220u;
        goto label_1b7220;
    }
    ctx->pc = 0x1B7218u;
    {
        const bool branch_taken_0x1b7218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7218u;
        // 0x1b721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7218) {
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B7220u;
label_1b7220:
    // 0x1b7220: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b7224:
    // 0x1b7224: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1b7228:
    if (ctx->pc == 0x1B7228u) {
        ctx->pc = 0x1B7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7224u;
        // 0x1b7228: 0x248703ff  addiu       $a3, $a0, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B722Cu;
        goto label_1b722c;
    }
    ctx->pc = 0x1B7224u;
    {
        const bool branch_taken_0x1b7224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7224u;
        // 0x1b7228: 0x248703ff  addiu       $a3, $a0, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7224) {
            ctx->pc = 0x1B7240u;
            goto label_1b7240;
        }
    }
    ctx->pc = 0x1B722Cu;
label_1b722c:
    // 0x1b722c: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x1b722cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_1b7230:
    // 0x1b7230: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b7234:
    if (ctx->pc == 0x1B7234u) {
        ctx->pc = 0x1B7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7230u;
        // 0x1b7234: 0x64a50080  daddiu      $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7238u;
        goto label_1b7238;
    }
    ctx->pc = 0x1B7230u;
    {
        const bool branch_taken_0x1b7230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7230) {
            ctx->pc = 0x1B7234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7230u;
            // 0x1b7234: 0x64a50080  daddiu      $a1, $a1, 0x80 (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7244u;
            goto label_1b7244;
        }
    }
    ctx->pc = 0x1B7238u;
label_1b7238:
    // 0x1b7238: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b723c:
    if (ctx->pc == 0x1B723Cu) {
        ctx->pc = 0x1B7240u;
        goto label_1b7240;
    }
    ctx->pc = 0x1B7238u;
    {
        const bool branch_taken_0x1b7238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7238) {
            ctx->pc = 0x1B7244u;
            goto label_1b7244;
        }
    }
    ctx->pc = 0x1B7240u;
label_1b7240:
    // 0x1b7240: 0x64a5007f  daddiu      $a1, $a1, 0x7F
    ctx->pc = 0x1b7240u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
label_1b7244:
    // 0x1b7244: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7248:
    // 0x1b7248: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1b7248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_1b724c:
    // 0x1b724c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1b724cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1b7250:
    // 0x1b7250: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b7254:
    if (ctx->pc == 0x1B7254u) {
        ctx->pc = 0x1B7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7250u;
        // 0x1b7254: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7258u;
        goto label_1b7258;
    }
    ctx->pc = 0x1B7250u;
    {
        const bool branch_taken_0x1b7250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7250) {
            ctx->pc = 0x1B7254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7250u;
            // 0x1b7254: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B7258u;
label_1b7258:
    // 0x1b7258: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x1b7258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
label_1b725c:
    // 0x1b725c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b725cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1b7260:
    // 0x1b7260: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x1b7260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_1b7264:
    // 0x1b7264: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x1b7264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
label_1b7268:
    // 0x1b7268: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b7268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_1b726c:
    // 0x1b726c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7270:
    // 0x1b7270: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1b7270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_1b7274:
    // 0x1b7274: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b7274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1b7278:
    // 0x1b7278: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b7278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b727c:
    // 0x1b727c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b727cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1b7280:
    // 0x1b7280: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
label_1b7284:
    // 0x1b7284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b7288:
    // 0x1b7288: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1b728c:
    // 0x1b728c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b7290:
    // 0x1b7290: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1b7294:
    // 0x1b7294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b7298:
    // 0x1b7298: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x1b7298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
label_1b729c:
    // 0x1b729c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1b729cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1b72a0:
    // 0x1b72a0: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x1b72a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
label_1b72a4:
    // 0x1b72a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b72a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b72a8:
    // 0x1b72a8: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1b72a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
label_1b72ac:
    // 0x1b72ac: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b72acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1b72b0:
    // 0x1b72b0: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x1b72b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
label_1b72b4:
    // 0x1b72b4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1b72b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1b72b8:
    // 0x1b72b8: 0x3e00008  jr          $ra
label_1b72bc:
    if (ctx->pc == 0x1B72BCu) {
        ctx->pc = 0x1B72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72B8u;
        // 0x1b72bc: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72C0u;
        goto label_1b72c0;
    }
    ctx->pc = 0x1B72B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72B8u;
        // 0x1b72bc: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B72C0u;
label_1b72c0:
    // 0x1b72c0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1b72c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1b72c4:
    // 0x1b72c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b72c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b72c8:
    // 0x1b72c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b72cc:
    // 0x1b72cc: 0x52b3a  dsrl        $a1, $a1, 12
    ctx->pc = 0x1b72ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 12);
label_1b72d0:
    // 0x1b72d0: 0x21d3e  dsrl32      $v1, $v0, 20
    ctx->pc = 0x1b72d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> (32 + 20));
label_1b72d4:
    // 0x1b72d4: 0x227fe  dsrl32      $a0, $v0, 31
    ctx->pc = 0x1b72d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 31));
label_1b72d8:
    // 0x1b72d8: 0x306707ff  andi        $a3, $v1, 0x7FF
    ctx->pc = 0x1b72d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
label_1b72dc:
    // 0x1b72dc: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x1b72dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1b72e0:
    // 0x1b72e0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1b72e4:
    if (ctx->pc == 0x1B72E4u) {
        ctx->pc = 0x1B72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72E0u;
        // 0x1b72e4: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72E8u;
        goto label_1b72e8;
    }
    ctx->pc = 0x1B72E0u;
    {
        const bool branch_taken_0x1b72e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72E0u;
        // 0x1b72e4: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72e0) {
            ctx->pc = 0x1B72F8u;
            goto label_1b72f8;
        }
    }
    ctx->pc = 0x1B72E8u;
label_1b72e8:
    // 0x1b72e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b72ec:
    // 0x1b72ec: 0x3e00008  jr          $ra
label_1b72f0:
    if (ctx->pc == 0x1B72F0u) {
        ctx->pc = 0x1B72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72ECu;
        // 0x1b72f0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72F4u;
        goto label_1b72f4;
    }
    ctx->pc = 0x1B72ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72ECu;
        // 0x1b72f0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B72F4u;
label_1b72f4:
    // 0x1b72f4: 0x0  nop
    ctx->pc = 0x1b72f4u;
    // NOP
label_1b72f8:
    // 0x1b72f8: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x1b72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_1b72fc:
    // 0x1b72fc: 0x54e20012  bnel        $a3, $v0, . + 4 + (0x12 << 2)
label_1b7300:
    if (ctx->pc == 0x1B7300u) {
        ctx->pc = 0x1B7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72FCu;
        // 0x1b7300: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7304u;
        goto label_1b7304;
    }
    ctx->pc = 0x1B72FCu;
    {
        const bool branch_taken_0x1b72fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b72fc) {
            ctx->pc = 0x1B7300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B72FCu;
            // 0x1b7300: 0x31a38  dsll        $v1, $v1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7348u;
            goto label_1b7348;
        }
    }
    ctx->pc = 0x1B7304u;
label_1b7304:
    // 0x1b7304: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b7308:
    if (ctx->pc == 0x1B7308u) {
        ctx->pc = 0x1B7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7304u;
        // 0x1b7308: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B730Cu;
        goto label_1b730c;
    }
    ctx->pc = 0x1B7304u;
    {
        const bool branch_taken_0x1b7304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7304u;
        // 0x1b7308: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7304) {
            ctx->pc = 0x1B7318u;
            goto label_1b7318;
        }
    }
    ctx->pc = 0x1B730Cu;
label_1b730c:
    // 0x1b730c: 0x3e00008  jr          $ra
label_1b7310:
    if (ctx->pc == 0x1B7310u) {
        ctx->pc = 0x1B7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B730Cu;
        // 0x1b7310: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7314u;
        goto label_1b7314;
    }
    ctx->pc = 0x1B730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B730Cu;
        // 0x1b7310: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7314u;
label_1b7314:
    // 0x1b7314: 0x0  nop
    ctx->pc = 0x1b7314u;
    // NOP
label_1b7318:
    // 0x1b7318: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b7318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b731c:
    // 0x1b731c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1b731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_1b7320:
    // 0x1b7320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b7320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b7324:
    // 0x1b7324: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b7328:
    if (ctx->pc == 0x1B7328u) {
        ctx->pc = 0x1B7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7324u;
        // 0x1b7328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B732Cu;
        goto label_1b732c;
    }
    ctx->pc = 0x1B7324u;
    {
        const bool branch_taken_0x1b7324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7324u;
        // 0x1b7328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7324) {
            ctx->pc = 0x1B7338u;
            goto label_1b7338;
        }
    }
    ctx->pc = 0x1B732Cu;
label_1b732c:
    // 0x1b732c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b7330:
    if (ctx->pc == 0x1B7330u) {
        ctx->pc = 0x1B7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B732Cu;
        // 0x1b7330: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7334u;
        goto label_1b7334;
    }
    ctx->pc = 0x1B732Cu;
    {
        const bool branch_taken_0x1b732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B732Cu;
        // 0x1b7330: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b732c) {
            ctx->pc = 0x1B733Cu;
            goto label_1b733c;
        }
    }
    ctx->pc = 0x1B7334u;
label_1b7334:
    // 0x1b7334: 0x0  nop
    ctx->pc = 0x1b7334u;
    // NOP
label_1b7338:
    // 0x1b7338: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1b7338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1b733c:
    // 0x1b733c: 0x3e00008  jr          $ra
label_1b7340:
    if (ctx->pc == 0x1B7340u) {
        ctx->pc = 0x1B7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B733Cu;
        // 0x1b7340: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7344u;
        goto label_1b7344;
    }
    ctx->pc = 0x1B733Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B733Cu;
        // 0x1b7340: 0xfcc30010  sd          $v1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B733Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7344u;
label_1b7344:
    // 0x1b7344: 0x0  nop
    ctx->pc = 0x1b7344u;
    // NOP
label_1b7348:
    // 0x1b7348: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b7348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b734c:
    // 0x1b734c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1b734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
label_1b7350:
    // 0x1b7350: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1b7350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b7354:
    // 0x1b7354: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b7354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7358:
    // 0x1b7358: 0x24e4fc01  addiu       $a0, $a3, -0x3FF
    ctx->pc = 0x1b7358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966273));
label_1b735c:
    // 0x1b735c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1b735cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_1b7360:
    // 0x1b7360: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1b7360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_1b7364:
    // 0x1b7364: 0x3e00008  jr          $ra
label_1b7368:
    if (ctx->pc == 0x1B7368u) {
        ctx->pc = 0x1B7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7364u;
        // 0x1b7368: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B736Cu;
        goto label_1b736c;
    }
    ctx->pc = 0x1B7364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7364u;
        // 0x1b7368: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B736Cu;
label_1b736c:
    // 0x1b736c: 0x0  nop
    ctx->pc = 0x1b736cu;
    // NOP
label_1b7370:
    // 0x1b7370: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1b7370u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7374:
    // 0x1b7374: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x1b7374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1b7378:
    // 0x1b7378: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x1b7378u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b737c:
    // 0x1b737c: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
label_1b7380:
    if (ctx->pc == 0x1B7380u) {
        ctx->pc = 0x1B7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B737Cu;
        // 0x1b7380: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7384u;
        goto label_1b7384;
    }
    ctx->pc = 0x1B737Cu;
    {
        const bool branch_taken_0x1b737c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B737Cu;
        // 0x1b7380: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b737c) {
            ctx->pc = 0x1B75C4u;
            { ctx->pc = 0x1b75c4; return; }
        }
    }
    ctx->pc = 0x1B7384u;
label_1b7384:
    // 0x1b7384: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1b7384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b7388:
    // 0x1b7388: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x1b7388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b738c:
    // 0x1b738c: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
label_1b7390:
    if (ctx->pc == 0x1B7390u) {
        ctx->pc = 0x1B7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B738Cu;
        // 0x1b7390: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7394u;
        goto label_1b7394;
    }
    ctx->pc = 0x1B738Cu;
    {
        const bool branch_taken_0x1b738c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B738Cu;
        // 0x1b7390: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b738c) {
            ctx->pc = 0x1B75C4u;
            { ctx->pc = 0x1b75c4; return; }
        }
    }
    ctx->pc = 0x1B7394u;
label_1b7394:
    // 0x1b7394: 0x38e20004  xori        $v0, $a3, 0x4
    ctx->pc = 0x1b7394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
label_1b7398:
    // 0x1b7398: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1b739c:
    if (ctx->pc == 0x1B739Cu) {
        ctx->pc = 0x1B739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7398u;
        // 0x1b739c: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B73A0u;
        goto label_1b73a0;
    }
    ctx->pc = 0x1B7398u;
    {
        const bool branch_taken_0x1b7398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7398u;
        // 0x1b739c: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7398) {
            ctx->pc = 0x1B73C8u;
            goto label_1b73c8;
        }
    }
    ctx->pc = 0x1B73A0u;
label_1b73a0:
    // 0x1b73a0: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1b73a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
label_1b73a4:
    // 0x1b73a4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1b73a8:
    if (ctx->pc == 0x1B73A8u) {
        ctx->pc = 0x1B73ACu;
        goto label_1b73ac;
    }
    ctx->pc = 0x1B73A4u;
    {
        const bool branch_taken_0x1b73a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73a4) {
            ctx->pc = 0x1B7418u;
            goto label_1b7418;
        }
    }
    ctx->pc = 0x1B73ACu;
label_1b73ac:
    // 0x1b73ac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1b73acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b73b0:
    // 0x1b73b0: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1b73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_1b73b4:
    // 0x1b73b4: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
label_1b73b8:
    if (ctx->pc == 0x1B73B8u) {
        ctx->pc = 0x1B73BCu;
        goto label_1b73bc;
    }
    ctx->pc = 0x1B73B4u;
    {
        const bool branch_taken_0x1b73b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b73b4) {
            ctx->pc = 0x1B7418u;
            goto label_1b7418;
        }
    }
    ctx->pc = 0x1B73BCu;
label_1b73bc:
    // 0x1b73bc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b73c0:
    // 0x1b73c0: 0x3e00008  jr          $ra
label_1b73c4:
    if (ctx->pc == 0x1B73C4u) {
        ctx->pc = 0x1B73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C0u;
        // 0x1b73c4: 0x2442b6b0  addiu       $v0, $v0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B73C8u;
        goto label_1b73c8;
    }
    ctx->pc = 0x1B73C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C0u;
        // 0x1b73c4: 0x2442b6b0  addiu       $v0, $v0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B73C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B73C8u;
label_1b73c8:
    // 0x1b73c8: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_1b73cc:
    if (ctx->pc == 0x1B73CCu) {
        ctx->pc = 0x1B73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C8u;
        // 0x1b73cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B73D0u;
        goto label_1b73d0;
    }
    ctx->pc = 0x1B73C8u;
    {
        const bool branch_taken_0x1b73c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73C8u;
        // 0x1b73cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73c8) {
            ctx->pc = 0x1B75C4u;
            { ctx->pc = 0x1b75c4; return; }
        }
    }
    ctx->pc = 0x1B73D0u;
label_1b73d0:
    // 0x1b73d0: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x1b73d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
label_1b73d4:
    // 0x1b73d4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1b73d8:
    if (ctx->pc == 0x1B73D8u) {
        ctx->pc = 0x1B73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73D4u;
        // 0x1b73d8: 0x38e30002  xori        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B73DCu;
        goto label_1b73dc;
    }
    ctx->pc = 0x1B73D4u;
    {
        const bool branch_taken_0x1b73d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73D4u;
        // 0x1b73d8: 0x38e30002  xori        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73d4) {
            ctx->pc = 0x1B7420u;
            goto label_1b7420;
        }
    }
    ctx->pc = 0x1B73DCu;
label_1b73dc:
    // 0x1b73dc: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x1b73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
label_1b73e0:
    // 0x1b73e0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1b73e4:
    if (ctx->pc == 0x1B73E4u) {
        ctx->pc = 0x1B73E8u;
        goto label_1b73e8;
    }
    ctx->pc = 0x1B73E0u;
    {
        const bool branch_taken_0x1b73e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73e0) {
            ctx->pc = 0x1B7418u;
            goto label_1b7418;
        }
    }
    ctx->pc = 0x1B73E8u;
label_1b73e8:
    // 0x1b73e8: 0xdd640000  ld          $a0, 0x0($t3)
    ctx->pc = 0x1b73e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 0)));
label_1b73ec:
    // 0x1b73ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1b73ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b73f0:
    // 0x1b73f0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1b73f0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
label_1b73f4:
    // 0x1b73f4: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x1b73f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
label_1b73f8:
    // 0x1b73f8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1b73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
label_1b73fc:
    // 0x1b73fc: 0xdd640010  ld          $a0, 0x10($t3)
    ctx->pc = 0x1b73fcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 16)));
label_1b7400:
    // 0x1b7400: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x1b7400u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
label_1b7404:
    // 0x1b7404: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x1b7404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_1b7408:
    // 0x1b7408: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1b7408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b740c:
    // 0x1b740c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1b740cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1b7410:
    // 0x1b7410: 0x3e00008  jr          $ra
label_1b7414:
    if (ctx->pc == 0x1B7414u) {
        ctx->pc = 0x1B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7410u;
        // 0x1b7414: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7418u;
        goto label_1b7418;
    }
    ctx->pc = 0x1B7410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7410u;
        // 0x1b7414: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7418u;
label_1b7418:
    // 0x1b7418: 0x3e00008  jr          $ra
label_1b741c:
    if (ctx->pc == 0x1B741Cu) {
        ctx->pc = 0x1B741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7418u;
        // 0x1b741c: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7420u;
        goto label_1b7420;
    }
    ctx->pc = 0x1B7418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7418u;
        // 0x1b741c: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7420u;
label_1b7420:
    // 0x1b7420: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
label_1b7424:
    if (ctx->pc == 0x1B7424u) {
        ctx->pc = 0x1B7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7420u;
        // 0x1b7424: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7428u;
        goto label_1b7428;
    }
    ctx->pc = 0x1B7420u;
    {
        const bool branch_taken_0x1b7420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7420u;
        // 0x1b7424: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7420) {
            ctx->pc = 0x1B75C4u;
            { ctx->pc = 0x1b75c4; return; }
        }
    }
    ctx->pc = 0x1B7428u;
label_1b7428:
    // 0x1b7428: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x1b7428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_1b742c:
    // 0x1b742c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1b742cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b7430:
    // 0x1b7430: 0xdd6a0010  ld          $t2, 0x10($t3)
    ctx->pc = 0x1b7430u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 16)));
label_1b7434:
    // 0x1b7434: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1b7438:
    // 0x1b7438: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1b7438u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b743c:
    // 0x1b743c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b743cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b7440:
    // 0x1b7440: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b7440u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1b7444:
    // 0x1b7444: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1b7444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_1b7448:
    // 0x1b7448: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1b744c:
    if (ctx->pc == 0x1B744Cu) {
        ctx->pc = 0x1B744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7448u;
        // 0x1b744c: 0xdca90010  ld          $t1, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7450u;
        goto label_1b7450;
    }
    ctx->pc = 0x1B7448u;
    {
        const bool branch_taken_0x1b7448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7448u;
        // 0x1b744c: 0xdca90010  ld          $t1, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7448) {
            ctx->pc = 0x1B74C0u;
            goto label_1b74c0;
        }
    }
    ctx->pc = 0x1B7450u;
label_1b7450:
    // 0x1b7450: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1b7450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b7454:
    // 0x1b7454: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b7458:
    if (ctx->pc == 0x1B7458u) {
        ctx->pc = 0x1B7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7454u;
        // 0x1b7458: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B745Cu;
        goto label_1b745c;
    }
    ctx->pc = 0x1B7454u;
    {
        const bool branch_taken_0x1b7454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7454u;
        // 0x1b7458: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7454) {
            ctx->pc = 0x1B748Cu;
            goto label_1b748c;
        }
    }
    ctx->pc = 0x1B745Cu;
label_1b745c:
    // 0x1b745c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7460:
    // 0x1b7460: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x1b7460u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1b7464:
    // 0x1b7464: 0x0  nop
    ctx->pc = 0x1b7464u;
    // NOP
label_1b7468:
    // 0x1b7468: 0x9187a  dsrl        $v1, $t1, 1
    ctx->pc = 0x1b7468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> 1);
label_1b746c:
    // 0x1b746c: 0x1241024  and         $v0, $t1, $a0
    ctx->pc = 0x1b746cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_1b7470:
    // 0x1b7470: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b7470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1b7474:
    // 0x1b7474: 0x0  nop
    ctx->pc = 0x1b7474u;
    // NOP
label_1b7478:
    // 0x1b7478: 0x0  nop
    ctx->pc = 0x1b7478u;
    // NOP
label_1b747c:
    // 0x1b747c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
label_1b7480:
    if (ctx->pc == 0x1B7480u) {
        ctx->pc = 0x1B7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B747Cu;
        // 0x1b7480: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7484u;
        goto label_1b7484;
    }
    ctx->pc = 0x1B747Cu;
    {
        const bool branch_taken_0x1b747c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B747Cu;
        // 0x1b7480: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b747c) {
            ctx->pc = 0x1B7468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7468;
        }
    }
    ctx->pc = 0x1B7484u;
label_1b7484:
    // 0x1b7484: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1b7484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b7488:
    // 0x1b7488: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x1b7488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1b748c:
    // 0x1b748c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1b7490:
    if (ctx->pc == 0x1B7490u) {
        ctx->pc = 0x1B7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B748Cu;
        // 0x1b7490: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7494u;
        goto label_1b7494;
    }
    ctx->pc = 0x1B748Cu;
    {
        const bool branch_taken_0x1b748c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b748c) {
            ctx->pc = 0x1B7490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B748Cu;
            // 0x1b7490: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B74E0u;
            goto label_1b74e0;
        }
    }
    ctx->pc = 0x1B7494u;
label_1b7494:
    // 0x1b7494: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1b7494u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7498:
    // 0x1b7498: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b7498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1b749c:
    // 0x1b749c: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x1b749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
label_1b74a0:
    // 0x1b74a0: 0x14c1824  and         $v1, $t2, $t4
    ctx->pc = 0x1b74a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
label_1b74a4:
    // 0x1b74a4: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x1b74a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1b74a8:
    // 0x1b74a8: 0x0  nop
    ctx->pc = 0x1b74a8u;
    // NOP
label_1b74ac:
    // 0x1b74ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1b74b0:
    if (ctx->pc == 0x1B74B0u) {
        ctx->pc = 0x1B74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74ACu;
        // 0x1b74b0: 0x625025  or          $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74B4u;
        goto label_1b74b4;
    }
    ctx->pc = 0x1B74ACu;
    {
        const bool branch_taken_0x1b74ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74ACu;
        // 0x1b74b0: 0x625025  or          $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74ac) {
            ctx->pc = 0x1B7498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7498;
        }
    }
    ctx->pc = 0x1B74B4u;
label_1b74b4:
    // 0x1b74b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b74b8:
    if (ctx->pc == 0x1B74B8u) {
        ctx->pc = 0x1B74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74B4u;
        // 0x1b74b8: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74BCu;
        goto label_1b74bc;
    }
    ctx->pc = 0x1B74B4u;
    {
        const bool branch_taken_0x1b74b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74B4u;
        // 0x1b74b8: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74b4) {
            ctx->pc = 0x1B74E0u;
            goto label_1b74e0;
        }
    }
    ctx->pc = 0x1B74BCu;
label_1b74bc:
    // 0x1b74bc: 0x0  nop
    ctx->pc = 0x1b74bcu;
    // NOP
label_1b74c0:
    // 0x1b74c0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1b74c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b74c4:
    // 0x1b74c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b74c8:
    if (ctx->pc == 0x1B74C8u) {
        ctx->pc = 0x1B74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74C4u;
        // 0x1b74c8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74CCu;
        goto label_1b74cc;
    }
    ctx->pc = 0x1B74C4u;
    {
        const bool branch_taken_0x1b74c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b74c4) {
            ctx->pc = 0x1B74C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B74C4u;
            // 0x1b74c8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B74D8u;
            goto label_1b74d8;
        }
    }
    ctx->pc = 0x1B74CCu;
label_1b74cc:
    // 0x1b74cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b74d0:
    if (ctx->pc == 0x1B74D0u) {
        ctx->pc = 0x1B74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74CCu;
        // 0x1b74d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74D4u;
        goto label_1b74d4;
    }
    ctx->pc = 0x1B74CCu;
    {
        const bool branch_taken_0x1b74cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74CCu;
        // 0x1b74d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74cc) {
            ctx->pc = 0x1B74DCu;
            goto label_1b74dc;
        }
    }
    ctx->pc = 0x1B74D4u;
label_1b74d4:
    // 0x1b74d4: 0x0  nop
    ctx->pc = 0x1b74d4u;
    // NOP
label_1b74d8:
    // 0x1b74d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b74d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b74dc:
    // 0x1b74dc: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x1b74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_1b74e0:
    // 0x1b74e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b74e4:
    // 0x1b74e4: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
label_1b74e8:
    if (ctx->pc == 0x1B74E8u) {
        ctx->pc = 0x1B74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E4u;
        // 0x1b74e8: 0x149102f  dsubu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74ECu;
        goto label_1b74ec;
    }
    ctx->pc = 0x1B74E4u;
    {
        const bool branch_taken_0x1b74e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E4u;
        // 0x1b74e8: 0x149102f  dsubu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74e4) {
            ctx->pc = 0x1B7578u;
            goto label_1b7578;
        }
    }
    ctx->pc = 0x1B74ECu;
label_1b74ec:
    // 0x1b74ec: 0x12a182f  dsubu       $v1, $t1, $t2
    ctx->pc = 0x1b74ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) - GPR_U64(ctx, 10));
label_1b74f0:
    // 0x1b74f0: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x1b74f0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_1b74f4:
    // 0x1b74f4: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
label_1b74f8:
    if (ctx->pc == 0x1B74F8u) {
        ctx->pc = 0x1B74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74F4u;
        // 0x1b74f8: 0x3182f  dsubu       $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74FCu;
        goto label_1b74fc;
    }
    ctx->pc = 0x1B74F4u;
    {
        const bool branch_taken_0x1b74f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b74f4) {
            ctx->pc = 0x1B74F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B74F4u;
            // 0x1b74f8: 0x3182f  dsubu       $v1, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7510u;
            goto label_1b7510;
        }
    }
    ctx->pc = 0x1B74FCu;
label_1b74fc:
    // 0x1b74fc: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1b74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_1b7500:
    // 0x1b7500: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1b7500u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_1b7504:
    // 0x1b7504: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b7508:
    if (ctx->pc == 0x1B7508u) {
        ctx->pc = 0x1B7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7504u;
        // 0x1b7508: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B750Cu;
        goto label_1b750c;
    }
    ctx->pc = 0x1B7504u;
    {
        const bool branch_taken_0x1b7504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7504u;
        // 0x1b7508: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7504) {
            ctx->pc = 0x1B7520u;
            goto label_1b7520;
        }
    }
    ctx->pc = 0x1B750Cu;
label_1b750c:
    // 0x1b750c: 0x0  nop
    ctx->pc = 0x1b750cu;
    // NOP
label_1b7510:
    // 0x1b7510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7514:
    // 0x1b7514: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1b7514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1b7518:
    // 0x1b7518: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1b7518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_1b751c:
    // 0x1b751c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1b751cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_1b7520:
    // 0x1b7520: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1b7520u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_1b7524:
    // 0x1b7524: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7528:
    // 0x1b7528: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x1b7528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
label_1b752c:
    // 0x1b752c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1b752cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_1b7530:
    // 0x1b7530: 0x64e3ffff  daddiu      $v1, $a3, -0x1
    ctx->pc = 0x1b7530u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
label_1b7534:
    // 0x1b7534: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b7534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b7538:
    // 0x1b7538: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1b753c:
    if (ctx->pc == 0x1B753Cu) {
        ctx->pc = 0x1B7540u;
        goto label_1b7540;
    }
    ctx->pc = 0x1B7538u;
    {
        const bool branch_taken_0x1b7538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7538) {
            ctx->pc = 0x1B758Cu;
            goto label_1b758c;
        }
    }
    ctx->pc = 0x1B7540u;
label_1b7540:
    // 0x1b7540: 0x72878  dsll        $a1, $a3, 1
    ctx->pc = 0x1b7540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 1);
label_1b7544:
    // 0x1b7544: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1b7544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b7548:
    // 0x1b7548: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x1b7548u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_1b754c:
    // 0x1b754c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7550:
    // 0x1b7550: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1b7550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
label_1b7554:
    // 0x1b7554: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x1b7554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
label_1b7558:
    // 0x1b7558: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b755c:
    // 0x1b755c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x1b755cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b7560:
    // 0x1b7560: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1b7560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1b7564:
    // 0x1b7564: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b7564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b7568:
    // 0x1b7568: 0x1080fff5  beqz        $a0, . + 4 + (-0xB << 2)
label_1b756c:
    if (ctx->pc == 0x1B756Cu) {
        ctx->pc = 0x1B756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7568u;
        // 0x1b756c: 0xfcc50010  sd          $a1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7570u;
        goto label_1b7570;
    }
    ctx->pc = 0x1B7568u;
    {
        const bool branch_taken_0x1b7568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7568u;
        // 0x1b756c: 0xfcc50010  sd          $a1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7568) {
            ctx->pc = 0x1B7540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7540;
        }
    }
    ctx->pc = 0x1B7570u;
label_1b7570:
    // 0x1b7570: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b7574:
    if (ctx->pc == 0x1B7574u) {
        ctx->pc = 0x1B7578u;
        goto label_1b7578;
    }
    ctx->pc = 0x1B7570u;
    {
        const bool branch_taken_0x1b7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7570) {
            ctx->pc = 0x1B758Cu;
            goto label_1b758c;
        }
    }
    ctx->pc = 0x1B7578u;
label_1b7578:
    // 0x1b7578: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x1b7578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
label_1b757c:
    // 0x1b757c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1b757cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_1b7580:
    // 0x1b7580: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1b7580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_1b7584:
    // 0x1b7584: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b7584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7588:
    // 0x1b7588: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1b7588u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_1b758c:
    // 0x1b758c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7590:
    // 0x1b7590: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1b7590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_1b7594:
    // 0x1b7594: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7598:
    // 0x1b7598: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b7598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b759c:
    // 0x1b759c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b75a0:
    if (ctx->pc == 0x1B75A0u) {
        ctx->pc = 0x1B75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B759Cu;
        // 0x1b75a0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75A4u;
        goto label_1b75a4;
    }
    ctx->pc = 0x1B759Cu;
    {
        const bool branch_taken_0x1b759c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B759Cu;
        // 0x1b75a0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b759c) {
            ctx->pc = 0x1B75C0u;
            { ctx->pc = 0x1b75c0; return; }
        }
    }
    ctx->pc = 0x1B75A4u;
label_1b75a4:
    // 0x1b75a4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1b75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b75a8:
    // 0x1b75a8: 0x7207a  dsrl        $a0, $a3, 1
    ctx->pc = 0x1b75a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 1);
label_1b75ac:
    // 0x1b75ac: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1b75acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1b75b0:
    // 0x1b75b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b75b4:
    // 0x1b75b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1b75b8u;
    return;
}

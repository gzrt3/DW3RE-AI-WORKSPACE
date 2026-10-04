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


void FUN_0019b5e8_part123(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d6f08u: goto label_1d6f08;
        case 0x1d6f0cu: goto label_1d6f0c;
        case 0x1d6f10u: goto label_1d6f10;
        case 0x1d6f14u: goto label_1d6f14;
        case 0x1d6f18u: goto label_1d6f18;
        case 0x1d6f1cu: goto label_1d6f1c;
        case 0x1d6f20u: goto label_1d6f20;
        case 0x1d6f24u: goto label_1d6f24;
        case 0x1d6f28u: goto label_1d6f28;
        case 0x1d6f2cu: goto label_1d6f2c;
        case 0x1d6f30u: goto label_1d6f30;
        case 0x1d6f34u: goto label_1d6f34;
        case 0x1d6f38u: goto label_1d6f38;
        case 0x1d6f3cu: goto label_1d6f3c;
        case 0x1d6f40u: goto label_1d6f40;
        case 0x1d6f44u: goto label_1d6f44;
        case 0x1d6f48u: goto label_1d6f48;
        case 0x1d6f4cu: goto label_1d6f4c;
        case 0x1d6f50u: goto label_1d6f50;
        case 0x1d6f54u: goto label_1d6f54;
        case 0x1d6f58u: goto label_1d6f58;
        case 0x1d6f5cu: goto label_1d6f5c;
        case 0x1d6f60u: goto label_1d6f60;
        case 0x1d6f64u: goto label_1d6f64;
        case 0x1d6f68u: goto label_1d6f68;
        case 0x1d6f6cu: goto label_1d6f6c;
        case 0x1d6f70u: goto label_1d6f70;
        case 0x1d6f74u: goto label_1d6f74;
        case 0x1d6f78u: goto label_1d6f78;
        case 0x1d6f7cu: goto label_1d6f7c;
        case 0x1d6f80u: goto label_1d6f80;
        case 0x1d6f84u: goto label_1d6f84;
        case 0x1d6f88u: goto label_1d6f88;
        case 0x1d6f8cu: goto label_1d6f8c;
        case 0x1d6f90u: goto label_1d6f90;
        case 0x1d6f94u: goto label_1d6f94;
        case 0x1d6f98u: goto label_1d6f98;
        case 0x1d6f9cu: goto label_1d6f9c;
        case 0x1d6fa0u: goto label_1d6fa0;
        case 0x1d6fa4u: goto label_1d6fa4;
        case 0x1d6fa8u: goto label_1d6fa8;
        case 0x1d6facu: goto label_1d6fac;
        case 0x1d6fb0u: goto label_1d6fb0;
        case 0x1d6fb4u: goto label_1d6fb4;
        case 0x1d6fb8u: goto label_1d6fb8;
        case 0x1d6fbcu: goto label_1d6fbc;
        case 0x1d6fc0u: goto label_1d6fc0;
        case 0x1d6fc4u: goto label_1d6fc4;
        case 0x1d6fc8u: goto label_1d6fc8;
        case 0x1d6fccu: goto label_1d6fcc;
        case 0x1d6fd0u: goto label_1d6fd0;
        case 0x1d6fd4u: goto label_1d6fd4;
        case 0x1d6fd8u: goto label_1d6fd8;
        case 0x1d6fdcu: goto label_1d6fdc;
        case 0x1d6fe0u: goto label_1d6fe0;
        case 0x1d6fe4u: goto label_1d6fe4;
        case 0x1d6fe8u: goto label_1d6fe8;
        case 0x1d6fecu: goto label_1d6fec;
        case 0x1d6ff0u: goto label_1d6ff0;
        case 0x1d6ff4u: goto label_1d6ff4;
        case 0x1d6ff8u: goto label_1d6ff8;
        case 0x1d6ffcu: goto label_1d6ffc;
        case 0x1d7000u: goto label_1d7000;
        case 0x1d7004u: goto label_1d7004;
        case 0x1d7008u: goto label_1d7008;
        case 0x1d700cu: goto label_1d700c;
        case 0x1d7010u: goto label_1d7010;
        case 0x1d7014u: goto label_1d7014;
        case 0x1d7018u: goto label_1d7018;
        case 0x1d701cu: goto label_1d701c;
        case 0x1d7020u: goto label_1d7020;
        case 0x1d7024u: goto label_1d7024;
        case 0x1d7028u: goto label_1d7028;
        case 0x1d702cu: goto label_1d702c;
        case 0x1d7030u: goto label_1d7030;
        case 0x1d7034u: goto label_1d7034;
        case 0x1d7038u: goto label_1d7038;
        case 0x1d703cu: goto label_1d703c;
        case 0x1d7040u: goto label_1d7040;
        case 0x1d7044u: goto label_1d7044;
        case 0x1d7048u: goto label_1d7048;
        case 0x1d704cu: goto label_1d704c;
        case 0x1d7050u: goto label_1d7050;
        case 0x1d7054u: goto label_1d7054;
        case 0x1d7058u: goto label_1d7058;
        case 0x1d705cu: goto label_1d705c;
        case 0x1d7060u: goto label_1d7060;
        case 0x1d7064u: goto label_1d7064;
        case 0x1d7068u: goto label_1d7068;
        case 0x1d706cu: goto label_1d706c;
        case 0x1d7070u: goto label_1d7070;
        case 0x1d7074u: goto label_1d7074;
        case 0x1d7078u: goto label_1d7078;
        case 0x1d707cu: goto label_1d707c;
        case 0x1d7080u: goto label_1d7080;
        case 0x1d7084u: goto label_1d7084;
        case 0x1d7088u: goto label_1d7088;
        case 0x1d708cu: goto label_1d708c;
        case 0x1d7090u: goto label_1d7090;
        case 0x1d7094u: goto label_1d7094;
        case 0x1d7098u: goto label_1d7098;
        case 0x1d709cu: goto label_1d709c;
        case 0x1d70a0u: goto label_1d70a0;
        case 0x1d70a4u: goto label_1d70a4;
        case 0x1d70a8u: goto label_1d70a8;
        case 0x1d70acu: goto label_1d70ac;
        case 0x1d70b0u: goto label_1d70b0;
        case 0x1d70b4u: goto label_1d70b4;
        case 0x1d70b8u: goto label_1d70b8;
        case 0x1d70bcu: goto label_1d70bc;
        case 0x1d70c0u: goto label_1d70c0;
        case 0x1d70c4u: goto label_1d70c4;
        case 0x1d70c8u: goto label_1d70c8;
        case 0x1d70ccu: goto label_1d70cc;
        case 0x1d70d0u: goto label_1d70d0;
        case 0x1d70d4u: goto label_1d70d4;
        case 0x1d70d8u: goto label_1d70d8;
        case 0x1d70dcu: goto label_1d70dc;
        case 0x1d70e0u: goto label_1d70e0;
        case 0x1d70e4u: goto label_1d70e4;
        case 0x1d70e8u: goto label_1d70e8;
        case 0x1d70ecu: goto label_1d70ec;
        case 0x1d70f0u: goto label_1d70f0;
        case 0x1d70f4u: goto label_1d70f4;
        case 0x1d70f8u: goto label_1d70f8;
        case 0x1d70fcu: goto label_1d70fc;
        case 0x1d7100u: goto label_1d7100;
        case 0x1d7104u: goto label_1d7104;
        case 0x1d7108u: goto label_1d7108;
        case 0x1d710cu: goto label_1d710c;
        case 0x1d7110u: goto label_1d7110;
        case 0x1d7114u: goto label_1d7114;
        case 0x1d7118u: goto label_1d7118;
        case 0x1d711cu: goto label_1d711c;
        case 0x1d7120u: goto label_1d7120;
        case 0x1d7124u: goto label_1d7124;
        case 0x1d7128u: goto label_1d7128;
        case 0x1d712cu: goto label_1d712c;
        case 0x1d7130u: goto label_1d7130;
        case 0x1d7134u: goto label_1d7134;
        case 0x1d7138u: goto label_1d7138;
        case 0x1d713cu: goto label_1d713c;
        case 0x1d7140u: goto label_1d7140;
        case 0x1d7144u: goto label_1d7144;
        case 0x1d7148u: goto label_1d7148;
        case 0x1d714cu: goto label_1d714c;
        case 0x1d7150u: goto label_1d7150;
        case 0x1d7154u: goto label_1d7154;
        case 0x1d7158u: goto label_1d7158;
        case 0x1d715cu: goto label_1d715c;
        case 0x1d7160u: goto label_1d7160;
        case 0x1d7164u: goto label_1d7164;
        case 0x1d7168u: goto label_1d7168;
        case 0x1d716cu: goto label_1d716c;
        case 0x1d7170u: goto label_1d7170;
        case 0x1d7174u: goto label_1d7174;
        case 0x1d7178u: goto label_1d7178;
        case 0x1d717cu: goto label_1d717c;
        case 0x1d7180u: goto label_1d7180;
        case 0x1d7184u: goto label_1d7184;
        case 0x1d7188u: goto label_1d7188;
        case 0x1d718cu: goto label_1d718c;
        case 0x1d7190u: goto label_1d7190;
        case 0x1d7194u: goto label_1d7194;
        case 0x1d7198u: goto label_1d7198;
        case 0x1d719cu: goto label_1d719c;
        case 0x1d71a0u: goto label_1d71a0;
        case 0x1d71a4u: goto label_1d71a4;
        case 0x1d71a8u: goto label_1d71a8;
        case 0x1d71acu: goto label_1d71ac;
        case 0x1d71b0u: goto label_1d71b0;
        case 0x1d71b4u: goto label_1d71b4;
        case 0x1d71b8u: goto label_1d71b8;
        case 0x1d71bcu: goto label_1d71bc;
        case 0x1d71c0u: goto label_1d71c0;
        case 0x1d71c4u: goto label_1d71c4;
        case 0x1d71c8u: goto label_1d71c8;
        case 0x1d71ccu: goto label_1d71cc;
        case 0x1d71d0u: goto label_1d71d0;
        case 0x1d71d4u: goto label_1d71d4;
        case 0x1d71d8u: goto label_1d71d8;
        case 0x1d71dcu: goto label_1d71dc;
        case 0x1d71e0u: goto label_1d71e0;
        case 0x1d71e4u: goto label_1d71e4;
        case 0x1d71e8u: goto label_1d71e8;
        case 0x1d71ecu: goto label_1d71ec;
        case 0x1d71f0u: goto label_1d71f0;
        case 0x1d71f4u: goto label_1d71f4;
        case 0x1d71f8u: goto label_1d71f8;
        case 0x1d71fcu: goto label_1d71fc;
        case 0x1d7200u: goto label_1d7200;
        case 0x1d7204u: goto label_1d7204;
        case 0x1d7208u: goto label_1d7208;
        case 0x1d720cu: goto label_1d720c;
        case 0x1d7210u: goto label_1d7210;
        case 0x1d7214u: goto label_1d7214;
        case 0x1d7218u: goto label_1d7218;
        case 0x1d721cu: goto label_1d721c;
        case 0x1d7220u: goto label_1d7220;
        case 0x1d7224u: goto label_1d7224;
        case 0x1d7228u: goto label_1d7228;
        case 0x1d722cu: goto label_1d722c;
        case 0x1d7230u: goto label_1d7230;
        case 0x1d7234u: goto label_1d7234;
        case 0x1d7238u: goto label_1d7238;
        case 0x1d723cu: goto label_1d723c;
        case 0x1d7240u: goto label_1d7240;
        case 0x1d7244u: goto label_1d7244;
        case 0x1d7248u: goto label_1d7248;
        case 0x1d724cu: goto label_1d724c;
        case 0x1d7250u: goto label_1d7250;
        case 0x1d7254u: goto label_1d7254;
        case 0x1d7258u: goto label_1d7258;
        case 0x1d725cu: goto label_1d725c;
        case 0x1d7260u: goto label_1d7260;
        case 0x1d7264u: goto label_1d7264;
        case 0x1d7268u: goto label_1d7268;
        case 0x1d726cu: goto label_1d726c;
        case 0x1d7270u: goto label_1d7270;
        case 0x1d7274u: goto label_1d7274;
        case 0x1d7278u: goto label_1d7278;
        case 0x1d727cu: goto label_1d727c;
        case 0x1d7280u: goto label_1d7280;
        case 0x1d7284u: goto label_1d7284;
        case 0x1d7288u: goto label_1d7288;
        case 0x1d728cu: goto label_1d728c;
        case 0x1d7290u: goto label_1d7290;
        case 0x1d7294u: goto label_1d7294;
        case 0x1d7298u: goto label_1d7298;
        case 0x1d729cu: goto label_1d729c;
        case 0x1d72a0u: goto label_1d72a0;
        case 0x1d72a4u: goto label_1d72a4;
        case 0x1d72a8u: goto label_1d72a8;
        case 0x1d72acu: goto label_1d72ac;
        case 0x1d72b0u: goto label_1d72b0;
        case 0x1d72b4u: goto label_1d72b4;
        case 0x1d72b8u: goto label_1d72b8;
        case 0x1d72bcu: goto label_1d72bc;
        case 0x1d72c0u: goto label_1d72c0;
        case 0x1d72c4u: goto label_1d72c4;
        case 0x1d72c8u: goto label_1d72c8;
        case 0x1d72ccu: goto label_1d72cc;
        case 0x1d72d0u: goto label_1d72d0;
        case 0x1d72d4u: goto label_1d72d4;
        case 0x1d72d8u: goto label_1d72d8;
        case 0x1d72dcu: goto label_1d72dc;
        case 0x1d72e0u: goto label_1d72e0;
        case 0x1d72e4u: goto label_1d72e4;
        case 0x1d72e8u: goto label_1d72e8;
        case 0x1d72ecu: goto label_1d72ec;
        case 0x1d72f0u: goto label_1d72f0;
        case 0x1d72f4u: goto label_1d72f4;
        case 0x1d72f8u: goto label_1d72f8;
        case 0x1d72fcu: goto label_1d72fc;
        case 0x1d7300u: goto label_1d7300;
        case 0x1d7304u: goto label_1d7304;
        case 0x1d7308u: goto label_1d7308;
        case 0x1d730cu: goto label_1d730c;
        case 0x1d7310u: goto label_1d7310;
        case 0x1d7314u: goto label_1d7314;
        case 0x1d7318u: goto label_1d7318;
        case 0x1d731cu: goto label_1d731c;
        case 0x1d7320u: goto label_1d7320;
        case 0x1d7324u: goto label_1d7324;
        case 0x1d7328u: goto label_1d7328;
        case 0x1d732cu: goto label_1d732c;
        case 0x1d7330u: goto label_1d7330;
        case 0x1d7334u: goto label_1d7334;
        case 0x1d7338u: goto label_1d7338;
        case 0x1d733cu: goto label_1d733c;
        case 0x1d7340u: goto label_1d7340;
        case 0x1d7344u: goto label_1d7344;
        case 0x1d7348u: goto label_1d7348;
        case 0x1d734cu: goto label_1d734c;
        case 0x1d7350u: goto label_1d7350;
        case 0x1d7354u: goto label_1d7354;
        case 0x1d7358u: goto label_1d7358;
        case 0x1d735cu: goto label_1d735c;
        case 0x1d7360u: goto label_1d7360;
        case 0x1d7364u: goto label_1d7364;
        case 0x1d7368u: goto label_1d7368;
        case 0x1d736cu: goto label_1d736c;
        case 0x1d7370u: goto label_1d7370;
        case 0x1d7374u: goto label_1d7374;
        case 0x1d7378u: goto label_1d7378;
        case 0x1d737cu: goto label_1d737c;
        case 0x1d7380u: goto label_1d7380;
        case 0x1d7384u: goto label_1d7384;
        case 0x1d7388u: goto label_1d7388;
        case 0x1d738cu: goto label_1d738c;
        case 0x1d7390u: goto label_1d7390;
        case 0x1d7394u: goto label_1d7394;
        case 0x1d7398u: goto label_1d7398;
        case 0x1d739cu: goto label_1d739c;
        case 0x1d73a0u: goto label_1d73a0;
        case 0x1d73a4u: goto label_1d73a4;
        case 0x1d73a8u: goto label_1d73a8;
        case 0x1d73acu: goto label_1d73ac;
        case 0x1d73b0u: goto label_1d73b0;
        case 0x1d73b4u: goto label_1d73b4;
        case 0x1d73b8u: goto label_1d73b8;
        case 0x1d73bcu: goto label_1d73bc;
        case 0x1d73c0u: goto label_1d73c0;
        case 0x1d73c4u: goto label_1d73c4;
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73ccu: goto label_1d73cc;
        case 0x1d73d0u: goto label_1d73d0;
        case 0x1d73d4u: goto label_1d73d4;
        case 0x1d73d8u: goto label_1d73d8;
        case 0x1d73dcu: goto label_1d73dc;
        case 0x1d73e0u: goto label_1d73e0;
        case 0x1d73e4u: goto label_1d73e4;
        case 0x1d73e8u: goto label_1d73e8;
        case 0x1d73ecu: goto label_1d73ec;
        case 0x1d73f0u: goto label_1d73f0;
        case 0x1d73f4u: goto label_1d73f4;
        case 0x1d73f8u: goto label_1d73f8;
        case 0x1d73fcu: goto label_1d73fc;
        case 0x1d7400u: goto label_1d7400;
        case 0x1d7404u: goto label_1d7404;
        case 0x1d7408u: goto label_1d7408;
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7410u: goto label_1d7410;
        case 0x1d7414u: goto label_1d7414;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d741cu: goto label_1d741c;
        case 0x1d7420u: goto label_1d7420;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7428u: goto label_1d7428;
        case 0x1d742cu: goto label_1d742c;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d7434u: goto label_1d7434;
        case 0x1d7438u: goto label_1d7438;
        case 0x1d743cu: goto label_1d743c;
        case 0x1d7440u: goto label_1d7440;
        case 0x1d7444u: goto label_1d7444;
        case 0x1d7448u: goto label_1d7448;
        case 0x1d744cu: goto label_1d744c;
        case 0x1d7450u: goto label_1d7450;
        case 0x1d7454u: goto label_1d7454;
        case 0x1d7458u: goto label_1d7458;
        case 0x1d745cu: goto label_1d745c;
        case 0x1d7460u: goto label_1d7460;
        case 0x1d7464u: goto label_1d7464;
        case 0x1d7468u: goto label_1d7468;
        case 0x1d746cu: goto label_1d746c;
        case 0x1d7470u: goto label_1d7470;
        case 0x1d7474u: goto label_1d7474;
        case 0x1d7478u: goto label_1d7478;
        case 0x1d747cu: goto label_1d747c;
        case 0x1d7480u: goto label_1d7480;
        case 0x1d7484u: goto label_1d7484;
        case 0x1d7488u: goto label_1d7488;
        case 0x1d748cu: goto label_1d748c;
        case 0x1d7490u: goto label_1d7490;
        case 0x1d7494u: goto label_1d7494;
        case 0x1d7498u: goto label_1d7498;
        case 0x1d749cu: goto label_1d749c;
        case 0x1d74a0u: goto label_1d74a0;
        case 0x1d74a4u: goto label_1d74a4;
        case 0x1d74a8u: goto label_1d74a8;
        case 0x1d74acu: goto label_1d74ac;
        case 0x1d74b0u: goto label_1d74b0;
        case 0x1d74b4u: goto label_1d74b4;
        case 0x1d74b8u: goto label_1d74b8;
        case 0x1d74bcu: goto label_1d74bc;
        case 0x1d74c0u: goto label_1d74c0;
        case 0x1d74c4u: goto label_1d74c4;
        case 0x1d74c8u: goto label_1d74c8;
        case 0x1d74ccu: goto label_1d74cc;
        case 0x1d74d0u: goto label_1d74d0;
        case 0x1d74d4u: goto label_1d74d4;
        case 0x1d74d8u: goto label_1d74d8;
        case 0x1d74dcu: goto label_1d74dc;
        case 0x1d74e0u: goto label_1d74e0;
        case 0x1d74e4u: goto label_1d74e4;
        case 0x1d74e8u: goto label_1d74e8;
        case 0x1d74ecu: goto label_1d74ec;
        case 0x1d74f0u: goto label_1d74f0;
        case 0x1d74f4u: goto label_1d74f4;
        case 0x1d74f8u: goto label_1d74f8;
        case 0x1d74fcu: goto label_1d74fc;
        case 0x1d7500u: goto label_1d7500;
        case 0x1d7504u: goto label_1d7504;
        case 0x1d7508u: goto label_1d7508;
        case 0x1d750cu: goto label_1d750c;
        case 0x1d7510u: goto label_1d7510;
        case 0x1d7514u: goto label_1d7514;
        case 0x1d7518u: goto label_1d7518;
        case 0x1d751cu: goto label_1d751c;
        case 0x1d7520u: goto label_1d7520;
        case 0x1d7524u: goto label_1d7524;
        case 0x1d7528u: goto label_1d7528;
        case 0x1d752cu: goto label_1d752c;
        case 0x1d7530u: goto label_1d7530;
        case 0x1d7534u: goto label_1d7534;
        case 0x1d7538u: goto label_1d7538;
        case 0x1d753cu: goto label_1d753c;
        case 0x1d7540u: goto label_1d7540;
        case 0x1d7544u: goto label_1d7544;
        case 0x1d7548u: goto label_1d7548;
        case 0x1d754cu: goto label_1d754c;
        case 0x1d7550u: goto label_1d7550;
        case 0x1d7554u: goto label_1d7554;
        case 0x1d7558u: goto label_1d7558;
        case 0x1d755cu: goto label_1d755c;
        case 0x1d7560u: goto label_1d7560;
        case 0x1d7564u: goto label_1d7564;
        case 0x1d7568u: goto label_1d7568;
        case 0x1d756cu: goto label_1d756c;
        case 0x1d7570u: goto label_1d7570;
        case 0x1d7574u: goto label_1d7574;
        case 0x1d7578u: goto label_1d7578;
        case 0x1d757cu: goto label_1d757c;
        case 0x1d7580u: goto label_1d7580;
        case 0x1d7584u: goto label_1d7584;
        case 0x1d7588u: goto label_1d7588;
        case 0x1d758cu: goto label_1d758c;
        case 0x1d7590u: goto label_1d7590;
        case 0x1d7594u: goto label_1d7594;
        case 0x1d7598u: goto label_1d7598;
        case 0x1d759cu: goto label_1d759c;
        case 0x1d75a0u: goto label_1d75a0;
        case 0x1d75a4u: goto label_1d75a4;
        case 0x1d75a8u: goto label_1d75a8;
        case 0x1d75acu: goto label_1d75ac;
        case 0x1d75b0u: goto label_1d75b0;
        case 0x1d75b4u: goto label_1d75b4;
        case 0x1d75b8u: goto label_1d75b8;
        case 0x1d75bcu: goto label_1d75bc;
        case 0x1d75c0u: goto label_1d75c0;
        case 0x1d75c4u: goto label_1d75c4;
        case 0x1d75c8u: goto label_1d75c8;
        case 0x1d75ccu: goto label_1d75cc;
        case 0x1d75d0u: goto label_1d75d0;
        case 0x1d75d4u: goto label_1d75d4;
        case 0x1d75d8u: goto label_1d75d8;
        case 0x1d75dcu: goto label_1d75dc;
        case 0x1d75e0u: goto label_1d75e0;
        case 0x1d75e4u: goto label_1d75e4;
        case 0x1d75e8u: goto label_1d75e8;
        case 0x1d75ecu: goto label_1d75ec;
        case 0x1d75f0u: goto label_1d75f0;
        case 0x1d75f4u: goto label_1d75f4;
        case 0x1d75f8u: goto label_1d75f8;
        case 0x1d75fcu: goto label_1d75fc;
        case 0x1d7600u: goto label_1d7600;
        case 0x1d7604u: goto label_1d7604;
        case 0x1d7608u: goto label_1d7608;
        case 0x1d760cu: goto label_1d760c;
        case 0x1d7610u: goto label_1d7610;
        case 0x1d7614u: goto label_1d7614;
        case 0x1d7618u: goto label_1d7618;
        case 0x1d761cu: goto label_1d761c;
        case 0x1d7620u: goto label_1d7620;
        case 0x1d7624u: goto label_1d7624;
        case 0x1d7628u: goto label_1d7628;
        case 0x1d762cu: goto label_1d762c;
        case 0x1d7630u: goto label_1d7630;
        case 0x1d7634u: goto label_1d7634;
        case 0x1d7638u: goto label_1d7638;
        case 0x1d763cu: goto label_1d763c;
        case 0x1d7640u: goto label_1d7640;
        case 0x1d7644u: goto label_1d7644;
        case 0x1d7648u: goto label_1d7648;
        case 0x1d764cu: goto label_1d764c;
        case 0x1d7650u: goto label_1d7650;
        case 0x1d7654u: goto label_1d7654;
        case 0x1d7658u: goto label_1d7658;
        case 0x1d765cu: goto label_1d765c;
        case 0x1d7660u: goto label_1d7660;
        case 0x1d7664u: goto label_1d7664;
        case 0x1d7668u: goto label_1d7668;
        case 0x1d766cu: goto label_1d766c;
        case 0x1d7670u: goto label_1d7670;
        case 0x1d7674u: goto label_1d7674;
        case 0x1d7678u: goto label_1d7678;
        case 0x1d767cu: goto label_1d767c;
        case 0x1d7680u: goto label_1d7680;
        case 0x1d7684u: goto label_1d7684;
        case 0x1d7688u: goto label_1d7688;
        case 0x1d768cu: goto label_1d768c;
        case 0x1d7690u: goto label_1d7690;
        case 0x1d7694u: goto label_1d7694;
        case 0x1d7698u: goto label_1d7698;
        case 0x1d769cu: goto label_1d769c;
        case 0x1d76a0u: goto label_1d76a0;
        case 0x1d76a4u: goto label_1d76a4;
        case 0x1d76a8u: goto label_1d76a8;
        case 0x1d76acu: goto label_1d76ac;
        case 0x1d76b0u: goto label_1d76b0;
        case 0x1d76b4u: goto label_1d76b4;
        case 0x1d76b8u: goto label_1d76b8;
        case 0x1d76bcu: goto label_1d76bc;
        case 0x1d76c0u: goto label_1d76c0;
        case 0x1d76c4u: goto label_1d76c4;
        case 0x1d76c8u: goto label_1d76c8;
        case 0x1d76ccu: goto label_1d76cc;
        case 0x1d76d0u: goto label_1d76d0;
        case 0x1d76d4u: goto label_1d76d4;
        default: return;
    }

label_1d6f08:
    // 0x1d6f08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d6f0c:
    if (ctx->pc == 0x1D6F0Cu) {
        ctx->pc = 0x1D6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F08u;
        // 0x1d6f0c: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F10u;
        goto label_1d6f10;
    }
    ctx->pc = 0x1D6F08u;
    {
        const bool branch_taken_0x1d6f08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F08u;
        // 0x1d6f0c: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f08) {
            ctx->pc = 0x1D6F20u;
            goto label_1d6f20;
        }
    }
    ctx->pc = 0x1D6F10u;
label_1d6f10:
    // 0x1d6f10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6f14:
    // 0x1d6f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6f18:
    // 0x1d6f18: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d6f1c:
    if (ctx->pc == 0x1D6F1Cu) {
        ctx->pc = 0x1D6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F18u;
        // 0x1d6f1c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F20u;
        goto label_1d6f20;
    }
    ctx->pc = 0x1D6F18u;
    {
        const bool branch_taken_0x1d6f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F18u;
        // 0x1d6f1c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f18) {
            ctx->pc = 0x1D6F24u;
            goto label_1d6f24;
        }
    }
    ctx->pc = 0x1D6F20u;
label_1d6f20:
    // 0x1d6f20: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x1d6f20u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_1d6f24:
    // 0x1d6f24: 0x0  nop
    ctx->pc = 0x1d6f24u;
    // NOP
label_1d6f28:
    // 0x1d6f28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6f2c:
    // 0x1d6f2c: 0x0  nop
    ctx->pc = 0x1d6f2cu;
    // NOP
label_1d6f30:
    // 0x1d6f30: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1d6f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6f34:
    // 0x1d6f34: 0x0  nop
    ctx->pc = 0x1d6f34u;
    // NOP
label_1d6f38:
    // 0x1d6f38: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_1d6f3c:
    if (ctx->pc == 0x1D6F3Cu) {
        ctx->pc = 0x1D6F40u;
        goto label_1d6f40;
    }
    ctx->pc = 0x1D6F38u;
    {
        const bool branch_taken_0x1d6f38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6f38) {
            ctx->pc = 0x1D6FC4u;
            goto label_1d6fc4;
        }
    }
    ctx->pc = 0x1D6F40u;
label_1d6f40:
    // 0x1d6f40: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d6f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6f44:
    // 0x1d6f44: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1d6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
label_1d6f48:
    // 0x1d6f48: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1d6f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6f4c:
    // 0x1d6f4c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1d6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1d6f50:
    // 0x1d6f50: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6f54:
    // 0x1d6f54: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d6f54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6f58:
    // 0x1d6f58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6f58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6f5c:
    // 0x1d6f5c: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x1d6f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d6f60:
    // 0x1d6f60: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d6f60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d6f64:
    // 0x1d6f64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6f68:
    // 0x1d6f68: 0x0  nop
    ctx->pc = 0x1d6f68u;
    // NOP
label_1d6f6c:
    // 0x1d6f6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d6f70:
    if (ctx->pc == 0x1D6F70u) {
        ctx->pc = 0x1D6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F6Cu;
        // 0x1d6f70: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F74u;
        goto label_1d6f74;
    }
    ctx->pc = 0x1D6F6Cu;
    {
        const bool branch_taken_0x1d6f6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F6Cu;
        // 0x1d6f70: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f6c) {
            ctx->pc = 0x1D6F84u;
            goto label_1d6f84;
        }
    }
    ctx->pc = 0x1D6F74u;
label_1d6f74:
    // 0x1d6f74: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6f78:
    // 0x1d6f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6f7c:
    // 0x1d6f7c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d6f80:
    if (ctx->pc == 0x1D6F80u) {
        ctx->pc = 0x1D6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F7Cu;
        // 0x1d6f80: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F84u;
        goto label_1d6f84;
    }
    ctx->pc = 0x1D6F7Cu;
    {
        const bool branch_taken_0x1d6f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F7Cu;
        // 0x1d6f80: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f7c) {
            ctx->pc = 0x1D6FB8u;
            goto label_1d6fb8;
        }
    }
    ctx->pc = 0x1D6F84u;
label_1d6f84:
    // 0x1d6f84: 0x0  nop
    ctx->pc = 0x1d6f84u;
    // NOP
label_1d6f88:
    // 0x1d6f88: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1d6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1d6f8c:
    // 0x1d6f8c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6f90:
    // 0x1d6f90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6f94:
    // 0x1d6f94: 0x0  nop
    ctx->pc = 0x1d6f94u;
    // NOP
label_1d6f98:
    // 0x1d6f98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6f98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6f9c:
    // 0x1d6f9c: 0x0  nop
    ctx->pc = 0x1d6f9cu;
    // NOP
label_1d6fa0:
    // 0x1d6fa0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d6fa4:
    if (ctx->pc == 0x1D6FA4u) {
        ctx->pc = 0x1D6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FA0u;
        // 0x1d6fa4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6FA8u;
        goto label_1d6fa8;
    }
    ctx->pc = 0x1D6FA0u;
    {
        const bool branch_taken_0x1d6fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FA0u;
        // 0x1d6fa4: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fa0) {
            ctx->pc = 0x1D6FB8u;
            goto label_1d6fb8;
        }
    }
    ctx->pc = 0x1D6FA8u;
label_1d6fa8:
    // 0x1d6fa8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6fac:
    // 0x1d6fac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6facu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6fb0:
    // 0x1d6fb0: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d6fb4:
    if (ctx->pc == 0x1D6FB4u) {
        ctx->pc = 0x1D6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FB0u;
        // 0x1d6fb4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6FB8u;
        goto label_1d6fb8;
    }
    ctx->pc = 0x1D6FB0u;
    {
        const bool branch_taken_0x1d6fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FB0u;
        // 0x1d6fb4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fb0) {
            ctx->pc = 0x1D6FB8u;
            goto label_1d6fb8;
        }
    }
    ctx->pc = 0x1D6FB8u;
label_1d6fb8:
    // 0x1d6fb8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6fbc:
    // 0x1d6fbc: 0x10000090  b           . + 4 + (0x90 << 2)
label_1d6fc0:
    if (ctx->pc == 0x1D6FC0u) {
        ctx->pc = 0x1D6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FBCu;
        // 0x1d6fc0: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6FC4u;
        goto label_1d6fc4;
    }
    ctx->pc = 0x1D6FBCu;
    {
        const bool branch_taken_0x1d6fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FBCu;
        // 0x1d6fc0: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fbc) {
            ctx->pc = 0x1D7200u;
            goto label_1d7200;
        }
    }
    ctx->pc = 0x1D6FC4u;
label_1d6fc4:
    // 0x1d6fc4: 0x0  nop
    ctx->pc = 0x1d6fc4u;
    // NOP
label_1d6fc8:
    // 0x1d6fc8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d6fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d6fcc:
    // 0x1d6fcc: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1d6fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
label_1d6fd0:
    // 0x1d6fd0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1d6fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1d6fd4:
    // 0x1d6fd4: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x1d6fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_1d6fd8:
    // 0x1d6fd8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d6fdc:
    // 0x1d6fdc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d6fdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d6fe0:
    // 0x1d6fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d6fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6fe4:
    // 0x1d6fe4: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x1d6fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d6fe8:
    // 0x1d6fe8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d6fe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d6fec:
    // 0x1d6fec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d6fecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6ff0:
    // 0x1d6ff0: 0x0  nop
    ctx->pc = 0x1d6ff0u;
    // NOP
label_1d6ff4:
    // 0x1d6ff4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d6ff8:
    if (ctx->pc == 0x1D6FF8u) {
        ctx->pc = 0x1D6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FF4u;
        // 0x1d6ff8: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6FFCu;
        goto label_1d6ffc;
    }
    ctx->pc = 0x1D6FF4u;
    {
        const bool branch_taken_0x1d6ff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FF4u;
        // 0x1d6ff8: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ff4) {
            ctx->pc = 0x1D700Cu;
            goto label_1d700c;
        }
    }
    ctx->pc = 0x1D6FFCu;
label_1d6ffc:
    // 0x1d6ffc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d6ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d7000:
    // 0x1d7000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d7000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7004:
    // 0x1d7004: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d7008:
    if (ctx->pc == 0x1D7008u) {
        ctx->pc = 0x1D7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7004u;
        // 0x1d7008: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D700Cu;
        goto label_1d700c;
    }
    ctx->pc = 0x1D7004u;
    {
        const bool branch_taken_0x1d7004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7004u;
        // 0x1d7008: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7004) {
            ctx->pc = 0x1D7040u;
            goto label_1d7040;
        }
    }
    ctx->pc = 0x1D700Cu;
label_1d700c:
    // 0x1d700c: 0x0  nop
    ctx->pc = 0x1d700cu;
    // NOP
label_1d7010:
    // 0x1d7010: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1d7010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1d7014:
    // 0x1d7014: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d7014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d7018:
    // 0x1d7018: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d7018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d701c:
    // 0x1d701c: 0x0  nop
    ctx->pc = 0x1d701cu;
    // NOP
label_1d7020:
    // 0x1d7020: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d7020u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7024:
    // 0x1d7024: 0x0  nop
    ctx->pc = 0x1d7024u;
    // NOP
label_1d7028:
    // 0x1d7028: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1d702c:
    if (ctx->pc == 0x1D702Cu) {
        ctx->pc = 0x1D702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7028u;
        // 0x1d702c: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7030u;
        goto label_1d7030;
    }
    ctx->pc = 0x1D7028u;
    {
        const bool branch_taken_0x1d7028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7028u;
        // 0x1d702c: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7028) {
            ctx->pc = 0x1D7040u;
            goto label_1d7040;
        }
    }
    ctx->pc = 0x1D7030u;
label_1d7030:
    // 0x1d7030: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d7030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1d7034:
    // 0x1d7034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d7034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7038:
    // 0x1d7038: 0x10000001  b           . + 4 + (0x1 << 2)
label_1d703c:
    if (ctx->pc == 0x1D703Cu) {
        ctx->pc = 0x1D703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7038u;
        // 0x1d703c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7040u;
        goto label_1d7040;
    }
    ctx->pc = 0x1D7038u;
    {
        const bool branch_taken_0x1d7038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7038u;
        // 0x1d703c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7038) {
            ctx->pc = 0x1D7040u;
            goto label_1d7040;
        }
    }
    ctx->pc = 0x1D7040u;
label_1d7040:
    // 0x1d7040: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d7040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d7044:
    // 0x1d7044: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1d7048:
    if (ctx->pc == 0x1D7048u) {
        ctx->pc = 0x1D7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7044u;
        // 0x1d7048: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D704Cu;
        goto label_1d704c;
    }
    ctx->pc = 0x1D7044u;
    {
        const bool branch_taken_0x1d7044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7044u;
        // 0x1d7048: 0xe461000c  swc1        $f1, 0xC($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7044) {
            ctx->pc = 0x1D7200u;
            goto label_1d7200;
        }
    }
    ctx->pc = 0x1D704Cu;
label_1d704c:
    // 0x1d704c: 0x0  nop
    ctx->pc = 0x1d704cu;
    // NOP
label_1d7050:
    // 0x1d7050: 0x8203002a  lb          $v1, 0x2A($s0)
    ctx->pc = 0x1d7050u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1d7054:
    // 0x1d7054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7058:
    // 0x1d7058: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1d705c:
    if (ctx->pc == 0x1D705Cu) {
        ctx->pc = 0x1D7060u;
        goto label_1d7060;
    }
    ctx->pc = 0x1D7058u;
    {
        const bool branch_taken_0x1d7058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d7058) {
            ctx->pc = 0x1D70A0u;
            goto label_1d70a0;
        }
    }
    ctx->pc = 0x1D7060u;
label_1d7060:
    // 0x1d7060: 0x90a3024f  lbu         $v1, 0x24F($a1)
    ctx->pc = 0x1d7060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 591)));
label_1d7064:
    // 0x1d7064: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x1d7064u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_1d7068:
    // 0x1d7068: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d7068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d706c:
    // 0x1d706c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d706cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d7070:
    // 0x1d7070: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1d7070u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d7074:
    // 0x1d7074: 0x0  nop
    ctx->pc = 0x1d7074u;
    // NOP
label_1d7078:
    // 0x1d7078: 0x0  nop
    ctx->pc = 0x1d7078u;
    // NOP
label_1d707c:
    // 0x1d707c: 0x2012  mflo        $a0
    ctx->pc = 0x1d707cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1d7080:
    // 0x1d7080: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1d7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d7084:
    // 0x1d7084: 0xa422b5be  sh          $v0, -0x4A42($at)
    ctx->pc = 0x1d7084u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294948286), (uint16_t)GPR_U32(ctx, 2));
label_1d7088:
    // 0x1d7088: 0x8e640200  lw          $a0, 0x200($s3)
    ctx->pc = 0x1d7088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_1d708c:
    // 0x1d708c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d7090:
    // 0x1d7090: 0xc040928  jal         func_1024A0
label_1d7094:
    if (ctx->pc == 0x1D7094u) {
        ctx->pc = 0x1D7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7090u;
        // 0x1d7094: 0x24c6b5a0  addiu       $a2, $a2, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7098u;
        goto label_1d7098;
    }
    ctx->pc = 0x1D7090u;
    SET_GPR_U32(ctx, 31, 0x1D7098u);
    ctx->pc = 0x1D7094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7090u;
    // 0x1d7094: 0x24c6b5a0  addiu       $a2, $a2, -0x4A60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024A0u, 0x1D7090u, 0x1D7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7098u;
label_1d7098:
    // 0x1d7098: 0x10000027  b           . + 4 + (0x27 << 2)
label_1d709c:
    if (ctx->pc == 0x1D709Cu) {
        ctx->pc = 0x1D70A0u;
        goto label_1d70a0;
    }
    ctx->pc = 0x1D7098u;
    {
        const bool branch_taken_0x1d7098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7098) {
            ctx->pc = 0x1D7138u;
            goto label_1d7138;
        }
    }
    ctx->pc = 0x1D70A0u;
label_1d70a0:
    // 0x1d70a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d70a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d70a4:
    // 0x1d70a4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1d70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d70a8:
    // 0x1d70a8: 0x8463003c  lh          $v1, 0x3C($v1)
    ctx->pc = 0x1d70a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_1d70ac:
    // 0x1d70ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d70b0:
    if (ctx->pc == 0x1D70B0u) {
        ctx->pc = 0x1D70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70ACu;
        // 0x1d70b0: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70B4u;
        goto label_1d70b4;
    }
    ctx->pc = 0x1D70ACu;
    {
        const bool branch_taken_0x1d70ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70ACu;
        // 0x1d70b0: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70ac) {
            ctx->pc = 0x1D70C0u;
            goto label_1d70c0;
        }
    }
    ctx->pc = 0x1D70B4u;
label_1d70b4:
    // 0x1d70b4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1d70b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d70b8:
    // 0x1d70b8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d70bc:
    if (ctx->pc == 0x1D70BCu) {
        ctx->pc = 0x1D70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70B8u;
        // 0x1d70bc: 0x24c6b620  addiu       $a2, $a2, -0x49E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70C0u;
        goto label_1d70c0;
    }
    ctx->pc = 0x1D70B8u;
    {
        const bool branch_taken_0x1d70b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70B8u;
        // 0x1d70bc: 0x24c6b620  addiu       $a2, $a2, -0x49E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70b8) {
            ctx->pc = 0x1D70FCu;
            goto label_1d70fc;
        }
    }
    ctx->pc = 0x1D70C0u;
label_1d70c0:
    // 0x1d70c0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1d70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1d70c4:
    // 0x1d70c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d70c8:
    if (ctx->pc == 0x1D70C8u) {
        ctx->pc = 0x1D70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70C4u;
        // 0x1d70c8: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70CCu;
        goto label_1d70cc;
    }
    ctx->pc = 0x1D70C4u;
    {
        const bool branch_taken_0x1d70c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70C4u;
        // 0x1d70c8: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70c4) {
            ctx->pc = 0x1D70D8u;
            goto label_1d70d8;
        }
    }
    ctx->pc = 0x1D70CCu;
label_1d70cc:
    // 0x1d70cc: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1d70d0:
    // 0x1d70d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d70d4:
    if (ctx->pc == 0x1D70D4u) {
        ctx->pc = 0x1D70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70D0u;
        // 0x1d70d4: 0x24c6b600  addiu       $a2, $a2, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70D8u;
        goto label_1d70d8;
    }
    ctx->pc = 0x1D70D0u;
    {
        const bool branch_taken_0x1d70d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70D0u;
        // 0x1d70d4: 0x24c6b600  addiu       $a2, $a2, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70d0) {
            ctx->pc = 0x1D70FCu;
            goto label_1d70fc;
        }
    }
    ctx->pc = 0x1D70D8u;
label_1d70d8:
    // 0x1d70d8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d70dc:
    // 0x1d70dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d70e0:
    if (ctx->pc == 0x1D70E0u) {
        ctx->pc = 0x1D70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70DCu;
        // 0x1d70e0: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70E4u;
        goto label_1d70e4;
    }
    ctx->pc = 0x1D70DCu;
    {
        const bool branch_taken_0x1d70dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70DCu;
        // 0x1d70e0: 0x3c060029  lui         $a2, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70dc) {
            ctx->pc = 0x1D70F0u;
            goto label_1d70f0;
        }
    }
    ctx->pc = 0x1D70E4u;
label_1d70e4:
    // 0x1d70e4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1d70e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1d70e8:
    // 0x1d70e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d70ec:
    if (ctx->pc == 0x1D70ECu) {
        ctx->pc = 0x1D70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E8u;
        // 0x1d70ec: 0x24c6b5e0  addiu       $a2, $a2, -0x4A20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70F0u;
        goto label_1d70f0;
    }
    ctx->pc = 0x1D70E8u;
    {
        const bool branch_taken_0x1d70e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E8u;
        // 0x1d70ec: 0x24c6b5e0  addiu       $a2, $a2, -0x4A20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70e8) {
            ctx->pc = 0x1D70FCu;
            goto label_1d70fc;
        }
    }
    ctx->pc = 0x1D70F0u;
label_1d70f0:
    // 0x1d70f0: 0x8664021c  lh          $a0, 0x21C($s3)
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 540)));
label_1d70f4:
    // 0x1d70f4: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x1d70f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_1d70f8:
    // 0x1d70f8: 0x24c6b5c0  addiu       $a2, $a2, -0x4A40
    ctx->pc = 0x1d70f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948288));
label_1d70fc:
    // 0x1d70fc: 0x0  nop
    ctx->pc = 0x1d70fcu;
    // NOP
label_1d7100:
    // 0x1d7100: 0x8e630200  lw          $v1, 0x200($s3)
    ctx->pc = 0x1d7100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_1d7104:
    // 0x1d7104: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d7104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d7108:
    // 0x1d7108: 0x9063024e  lbu         $v1, 0x24E($v1)
    ctx->pc = 0x1d7108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 590)));
label_1d710c:
    // 0x1d710c: 0x9042024f  lbu         $v0, 0x24F($v0)
    ctx->pc = 0x1d710cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 591)));
label_1d7110:
    // 0x1d7110: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1d7110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d7114:
    // 0x1d7114: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d7114u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d7118:
    // 0x1d7118: 0x0  nop
    ctx->pc = 0x1d7118u;
    // NOP
label_1d711c:
    // 0x1d711c: 0x0  nop
    ctx->pc = 0x1d711cu;
    // NOP
label_1d7120:
    // 0x1d7120: 0x2012  mflo        $a0
    ctx->pc = 0x1d7120u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1d7124:
    // 0x1d7124: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1d7124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d7128:
    // 0x1d7128: 0xa4c2001e  sh          $v0, 0x1E($a2)
    ctx->pc = 0x1d7128u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 2));
label_1d712c:
    // 0x1d712c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1d712cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d7130:
    // 0x1d7130: 0xc040928  jal         func_1024A0
label_1d7134:
    if (ctx->pc == 0x1D7134u) {
        ctx->pc = 0x1D7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7130u;
        // 0x1d7134: 0x8e640200  lw          $a0, 0x200($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7138u;
        goto label_1d7138;
    }
    ctx->pc = 0x1D7130u;
    SET_GPR_U32(ctx, 31, 0x1D7138u);
    ctx->pc = 0x1D7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7130u;
    // 0x1d7134: 0x8e640200  lw          $a0, 0x200($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024A0u, 0x1D7130u, 0x1D7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7138u;
label_1d7138:
    // 0x1d7138: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1d7138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d713c:
    // 0x1d713c: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1d713cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1d7140:
    // 0x1d7140: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1d7144:
    if (ctx->pc == 0x1D7144u) {
        ctx->pc = 0x1D7148u;
        goto label_1d7148;
    }
    ctx->pc = 0x1D7140u;
    {
        const bool branch_taken_0x1d7140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7140) {
            ctx->pc = 0x1D7170u;
            goto label_1d7170;
        }
    }
    ctx->pc = 0x1D7148u;
label_1d7148:
    // 0x1d7148: 0xc0439cc  jal         func_10E730
label_1d714c:
    if (ctx->pc == 0x1D714Cu) {
        ctx->pc = 0x1D7150u;
        goto label_1d7150;
    }
    ctx->pc = 0x1D7148u;
    SET_GPR_U32(ctx, 31, 0x1D7150u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D7148u, 0x1D7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7150u;
label_1d7150:
    // 0x1d7150: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d7154:
    if (ctx->pc == 0x1D7154u) {
        ctx->pc = 0x1D7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7150u;
        // 0x1d7154: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7158u;
        goto label_1d7158;
    }
    ctx->pc = 0x1D7150u;
    {
        const bool branch_taken_0x1d7150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7150u;
        // 0x1d7154: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7150) {
            ctx->pc = 0x1D7160u;
            goto label_1d7160;
        }
    }
    ctx->pc = 0x1D7158u;
label_1d7158:
    // 0x1d7158: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d715c:
    if (ctx->pc == 0x1D715Cu) {
        ctx->pc = 0x1D7160u;
        goto label_1d7160;
    }
    ctx->pc = 0x1D7158u;
    {
        const bool branch_taken_0x1d7158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7158) {
            ctx->pc = 0x1D7164u;
            goto label_1d7164;
        }
    }
    ctx->pc = 0x1D7160u;
label_1d7160:
    // 0x1d7160: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x1d7160u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d7164:
    // 0x1d7164: 0x0  nop
    ctx->pc = 0x1d7164u;
    // NOP
label_1d7168:
    // 0x1d7168: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d716c:
    if (ctx->pc == 0x1D716Cu) {
        ctx->pc = 0x1D7170u;
        goto label_1d7170;
    }
    ctx->pc = 0x1D7168u;
    {
        const bool branch_taken_0x1d7168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7168) {
            ctx->pc = 0x1D7174u;
            goto label_1d7174;
        }
    }
    ctx->pc = 0x1D7170u;
label_1d7170:
    // 0x1d7170: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1d7170u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7174:
    // 0x1d7174: 0x0  nop
    ctx->pc = 0x1d7174u;
    // NOP
label_1d7178:
    // 0x1d7178: 0xc08f0cc  jal         func_23C330
label_1d717c:
    if (ctx->pc == 0x1D717Cu) {
        ctx->pc = 0x1D7180u;
        goto label_1d7180;
    }
    ctx->pc = 0x1D7178u;
    SET_GPR_U32(ctx, 31, 0x1D7180u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1D7180u;
label_1d7180:
    // 0x1d7180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d7180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7184:
    // 0x1d7184: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d7184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d7188:
    // 0x1d7188: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d7188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d718c:
    // 0x1d718c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1d718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d7190:
    // 0x1d7190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d7190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1d7194:
    // 0x1d7194: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d7194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d7198:
    // 0x1d7198: 0x24670150  addiu       $a3, $v1, 0x150
    ctx->pc = 0x1d7198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
label_1d719c:
    // 0x1d719c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d719cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d71a0:
    // 0x1d71a0: 0x0  nop
    ctx->pc = 0x1d71a0u;
    // NOP
label_1d71a4:
    // 0x1d71a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1d71a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d71a8:
    // 0x1d71a8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1d71ac:
    // 0x1d71ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d71acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d71b0:
    // 0x1d71b0: 0x0  nop
    ctx->pc = 0x1d71b0u;
    // NOP
label_1d71b4:
    // 0x1d71b4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d71b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1d71b8:
    // 0x1d71b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d71b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d71bc:
    // 0x1d71bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1d71bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1d71c0:
    // 0x1d71c0: 0x0  nop
    ctx->pc = 0x1d71c0u;
    // NOP
label_1d71c4:
    // 0x1d71c4: 0x2442003a  addiu       $v0, $v0, 0x3A
    ctx->pc = 0x1d71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
label_1d71c8:
    // 0x1d71c8: 0xc05ae1c  jal         func_16B870
label_1d71cc:
    if (ctx->pc == 0x1D71CCu) {
        ctx->pc = 0x1D71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71C8u;
        // 0x1d71cc: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D71D0u;
        goto label_1d71d0;
    }
    ctx->pc = 0x1D71C8u;
    SET_GPR_U32(ctx, 31, 0x1D71D0u);
    ctx->pc = 0x1D71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71C8u;
    // 0x1d71cc: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B870u, 0x1D71C8u, 0x1D71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71D0u;
label_1d71d0:
    // 0x1d71d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d71d4:
    if (ctx->pc == 0x1D71D4u) {
        ctx->pc = 0x1D71D8u;
        goto label_1d71d8;
    }
    ctx->pc = 0x1D71D0u;
    {
        const bool branch_taken_0x1d71d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d71d0) {
            ctx->pc = 0x1D7200u;
            goto label_1d7200;
        }
    }
    ctx->pc = 0x1D71D8u;
label_1d71d8:
    // 0x1d71d8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d71d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d71dc:
    // 0x1d71dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d71dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d71e0:
    // 0x1d71e0: 0xc050f08  jal         func_143C20
label_1d71e4:
    if (ctx->pc == 0x1D71E4u) {
        ctx->pc = 0x1D71E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71E0u;
        // 0x1d71e4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D71E8u;
        goto label_1d71e8;
    }
    ctx->pc = 0x1D71E0u;
    SET_GPR_U32(ctx, 31, 0x1D71E8u);
    ctx->pc = 0x1D71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71E0u;
    // 0x1d71e4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1D71E0u, 0x1D71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71E8u;
label_1d71e8:
    // 0x1d71e8: 0x8e650200  lw          $a1, 0x200($s3)
    ctx->pc = 0x1d71e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_1d71ec:
    // 0x1d71ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d71ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d71f0:
    // 0x1d71f0: 0xc050f08  jal         func_143C20
label_1d71f4:
    if (ctx->pc == 0x1D71F4u) {
        ctx->pc = 0x1D71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71F0u;
        // 0x1d71f4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D71F8u;
        goto label_1d71f8;
    }
    ctx->pc = 0x1D71F0u;
    SET_GPR_U32(ctx, 31, 0x1D71F8u);
    ctx->pc = 0x1D71F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71F0u;
    // 0x1d71f4: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1D71F0u, 0x1D71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71F8u;
label_1d71f8:
    // 0x1d71f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d71fc:
    if (ctx->pc == 0x1D71FCu) {
        ctx->pc = 0x1D7200u;
        goto label_1d7200;
    }
    ctx->pc = 0x1D71F8u;
    {
        const bool branch_taken_0x1d71f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d71f8) {
            ctx->pc = 0x1D7210u;
            goto label_1d7210;
        }
    }
    ctx->pc = 0x1D7200u;
label_1d7200:
    // 0x1d7200: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d7200u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1d7204:
    // 0x1d7204: 0x2652ff90  addiu       $s2, $s2, -0x70
    ctx->pc = 0x1d7204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967184));
label_1d7208:
    // 0x1d7208: 0x6a1fe79  bgez        $s5, . + 4 + (-0x187 << 2)
label_1d720c:
    if (ctx->pc == 0x1D720Cu) {
        ctx->pc = 0x1D7210u;
        goto label_1d7210;
    }
    ctx->pc = 0x1D7208u;
    {
        const bool branch_taken_0x1d7208 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x1d7208) {
            ctx->pc = 0x1D6BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d6bf0; return; }
        }
    }
    ctx->pc = 0x1D7210u;
label_1d7210:
    // 0x1d7210: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d7214:
    // 0x1d7214: 0x26d60070  addiu       $s6, $s6, 0x70
    ctx->pc = 0x1d7214u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
label_1d7218:
    // 0x1d7218: 0x2a830013  slti        $v1, $s4, 0x13
    ctx->pc = 0x1d7218u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)19) ? 1 : 0);
label_1d721c:
    // 0x1d721c: 0x1460fd32  bnez        $v1, . + 4 + (-0x2CE << 2)
label_1d7220:
    if (ctx->pc == 0x1D7220u) {
        ctx->pc = 0x1D7224u;
        goto label_1d7224;
    }
    ctx->pc = 0x1D721Cu;
    {
        const bool branch_taken_0x1d721c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d721c) {
            ctx->pc = 0x1D66E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d66e8; return; }
        }
    }
    ctx->pc = 0x1D7224u;
label_1d7224:
    // 0x1d7224: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d7224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1d7228:
    // 0x1d7228: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d7228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d722c:
    // 0x1d722c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d722cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d7230:
    // 0x1d7230: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d7230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d7234:
    // 0x1d7234: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d7234u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d7238:
    // 0x1d7238: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d723c:
    // 0x1d723c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d723cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d7240:
    // 0x1d7240: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d7240u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d7244:
    // 0x1d7244: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d7244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7248:
    // 0x1d7248: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d7248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d724c:
    // 0x1d724c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d724cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7250:
    // 0x1d7250: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d7250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7254:
    // 0x1d7254: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d7254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7258:
    // 0x1d7258: 0x3e00008  jr          $ra
label_1d725c:
    if (ctx->pc == 0x1D725Cu) {
        ctx->pc = 0x1D725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7258u;
        // 0x1d725c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7260u;
        goto label_1d7260;
    }
    ctx->pc = 0x1D7258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7258u;
        // 0x1d725c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7260u;
label_1d7260:
    // 0x1d7260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d7260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d7264:
    // 0x1d7264: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d7264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d7268:
    // 0x1d7268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d726c:
    // 0x1d726c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d7270:
    // 0x1d7270: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d7270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d7274:
    // 0x1d7274: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7278:
    // 0x1d7278: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d7278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d727c:
    // 0x1d727c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7280:
    // 0x1d7280: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d7284:
    // 0x1d7284: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1d7284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7288:
    // 0x1d7288: 0xc075d2c  jal         func_1D74B0
label_1d728c:
    if (ctx->pc == 0x1D728Cu) {
        ctx->pc = 0x1D728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7288u;
        // 0x1d728c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7290u;
        goto label_1d7290;
    }
    ctx->pc = 0x1D7288u;
    SET_GPR_U32(ctx, 31, 0x1D7290u);
    ctx->pc = 0x1D728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7288u;
    // 0x1d728c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D74B0u;
    goto label_1d74b0;
    ctx->pc = 0x1D7290u;
label_1d7290:
    // 0x1d7290: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
label_1d7294:
    if (ctx->pc == 0x1D7294u) {
        ctx->pc = 0x1D7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7290u;
        // 0x1d7294: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7298u;
        goto label_1d7298;
    }
    ctx->pc = 0x1D7290u;
    {
        const bool branch_taken_0x1d7290 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7290u;
        // 0x1d7294: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7290) {
            ctx->pc = 0x1D7390u;
            goto label_1d7390;
        }
    }
    ctx->pc = 0x1D7298u;
label_1d7298:
    // 0x1d7298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d729c:
    // 0x1d729c: 0xc04e188  jal         func_138620
label_1d72a0:
    if (ctx->pc == 0x1D72A0u) {
        ctx->pc = 0x1D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D729Cu;
        // 0x1d72a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D72A4u;
        goto label_1d72a4;
    }
    ctx->pc = 0x1D729Cu;
    SET_GPR_U32(ctx, 31, 0x1D72A4u);
    ctx->pc = 0x1D72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D729Cu;
    // 0x1d72a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1D729Cu, 0x1D72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72A4u;
label_1d72a4:
    // 0x1d72a4: 0xc04e198  jal         func_138660
label_1d72a8:
    if (ctx->pc == 0x1D72A8u) {
        ctx->pc = 0x1D72ACu;
        goto label_1d72ac;
    }
    ctx->pc = 0x1D72A4u;
    SET_GPR_U32(ctx, 31, 0x1D72ACu);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D72A4u, 0x1D72ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72ACu;
label_1d72ac:
    // 0x1d72ac: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1d72b0:
    if (ctx->pc == 0x1D72B0u) {
        ctx->pc = 0x1D72B4u;
        goto label_1d72b4;
    }
    ctx->pc = 0x1D72ACu;
    {
        const bool branch_taken_0x1d72ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d72ac) {
            ctx->pc = 0x1D739Cu;
            goto label_1d739c;
        }
    }
    ctx->pc = 0x1D72B4u;
label_1d72b4:
    // 0x1d72b4: 0xc04e168  jal         func_1385A0
label_1d72b8:
    if (ctx->pc == 0x1D72B8u) {
        ctx->pc = 0x1D72BCu;
        goto label_1d72bc;
    }
    ctx->pc = 0x1D72B4u;
    SET_GPR_U32(ctx, 31, 0x1D72BCu);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D72B4u, 0x1D72BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72BCu;
label_1d72bc:
    // 0x1d72bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d72bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d72c0:
    // 0x1d72c0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d72c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d72c4:
    // 0x1d72c4: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1d72c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d72c8:
    // 0x1d72c8: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d72cc:
    // 0x1d72cc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d72ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d72d0:
    // 0x1d72d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d72d4:
    // 0x1d72d4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d72d8:
    // 0x1d72d8: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1d72d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1d72dc:
    // 0x1d72dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d72dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d72e0:
    // 0x1d72e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d72e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d72e4:
    // 0x1d72e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d72e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d72e8:
    // 0x1d72e8: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x1d72e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d72ec:
    // 0x1d72ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d72ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d72f0:
    // 0x1d72f0: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1d72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1d72f4:
    // 0x1d72f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d72f8:
    // 0x1d72f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d72f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d72fc:
    // 0x1d72fc: 0xa0aa0080  sb          $t2, 0x80($a1)
    ctx->pc = 0x1d72fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 10));
label_1d7300:
    // 0x1d7300: 0xa0aa0081  sb          $t2, 0x81($a1)
    ctx->pc = 0x1d7300u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 10));
label_1d7304:
    // 0x1d7304: 0xa0aa0082  sb          $t2, 0x82($a1)
    ctx->pc = 0x1d7304u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 10));
label_1d7308:
    // 0x1d7308: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x1d7308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d730c:
    // 0x1d730c: 0xa0a20083  sb          $v0, 0x83($a1)
    ctx->pc = 0x1d730cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 2));
label_1d7310:
    // 0x1d7310: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x1d7310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_1d7314:
    // 0x1d7314: 0xa0aa0120  sb          $t2, 0x120($a1)
    ctx->pc = 0x1d7314u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 10));
label_1d7318:
    // 0x1d7318: 0xa0aa0121  sb          $t2, 0x121($a1)
    ctx->pc = 0x1d7318u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 289), (uint8_t)GPR_U32(ctx, 10));
label_1d731c:
    // 0x1d731c: 0xa0aa0122  sb          $t2, 0x122($a1)
    ctx->pc = 0x1d731cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 290), (uint8_t)GPR_U32(ctx, 10));
label_1d7320:
    // 0x1d7320: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x1d7320u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7324:
    // 0x1d7324: 0xa0a20123  sb          $v0, 0x123($a1)
    ctx->pc = 0x1d7324u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 2));
label_1d7328:
    // 0x1d7328: 0xaca30124  sw          $v1, 0x124($a1)
    ctx->pc = 0x1d7328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 3));
label_1d732c:
    // 0x1d732c: 0xa0aa01c0  sb          $t2, 0x1C0($a1)
    ctx->pc = 0x1d732cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 10));
label_1d7330:
    // 0x1d7330: 0xa0aa01c1  sb          $t2, 0x1C1($a1)
    ctx->pc = 0x1d7330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 449), (uint8_t)GPR_U32(ctx, 10));
label_1d7334:
    // 0x1d7334: 0xa0aa01c2  sb          $t2, 0x1C2($a1)
    ctx->pc = 0x1d7334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 450), (uint8_t)GPR_U32(ctx, 10));
label_1d7338:
    // 0x1d7338: 0x83828c60  lb          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d733c:
    // 0x1d733c: 0xa0a201c3  sb          $v0, 0x1C3($a1)
    ctx->pc = 0x1d733cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 2));
label_1d7340:
    // 0x1d7340: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x1d7340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_1d7344:
    // 0x1d7344: 0xa0aa0260  sb          $t2, 0x260($a1)
    ctx->pc = 0x1d7344u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 608), (uint8_t)GPR_U32(ctx, 10));
label_1d7348:
    // 0x1d7348: 0xa0aa0261  sb          $t2, 0x261($a1)
    ctx->pc = 0x1d7348u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 609), (uint8_t)GPR_U32(ctx, 10));
label_1d734c:
    // 0x1d734c: 0xa0aa0262  sb          $t2, 0x262($a1)
    ctx->pc = 0x1d734cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 610), (uint8_t)GPR_U32(ctx, 10));
label_1d7350:
    // 0x1d7350: 0x83828c5c  lb          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7354:
    // 0x1d7354: 0xa0a20263  sb          $v0, 0x263($a1)
    ctx->pc = 0x1d7354u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 2));
label_1d7358:
    // 0x1d7358: 0xc066c72  jal         func_19B1C8
label_1d735c:
    if (ctx->pc == 0x1D735Cu) {
        ctx->pc = 0x1D735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7358u;
        // 0x1d735c: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7360u;
        goto label_1d7360;
    }
    ctx->pc = 0x1D7358u;
    SET_GPR_U32(ctx, 31, 0x1D7360u);
    ctx->pc = 0x1D735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7358u;
    // 0x1d735c: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D7358u, 0x1D7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7360u;
label_1d7360:
    // 0x1d7360: 0xc04e120  jal         func_138480
label_1d7364:
    if (ctx->pc == 0x1D7364u) {
        ctx->pc = 0x1D7368u;
        goto label_1d7368;
    }
    ctx->pc = 0x1D7360u;
    SET_GPR_U32(ctx, 31, 0x1D7368u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D7360u, 0x1D7368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7368u;
label_1d7368:
    // 0x1d7368: 0xc05b578  jal         func_16D5E0
label_1d736c:
    if (ctx->pc == 0x1D736Cu) {
        ctx->pc = 0x1D736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7368u;
        // 0x1d736c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7370u;
        goto label_1d7370;
    }
    ctx->pc = 0x1D7368u;
    SET_GPR_U32(ctx, 31, 0x1D7370u);
    ctx->pc = 0x1D736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7368u;
    // 0x1d736c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D7368u, 0x1D7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7370u;
label_1d7370:
    // 0x1d7370: 0xc060258  jal         func_180960
label_1d7374:
    if (ctx->pc == 0x1D7374u) {
        ctx->pc = 0x1D7378u;
        goto label_1d7378;
    }
    ctx->pc = 0x1D7370u;
    SET_GPR_U32(ctx, 31, 0x1D7378u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7370u, 0x1D7378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7378u;
label_1d7378:
    // 0x1d7378: 0xc04e198  jal         func_138660
label_1d737c:
    if (ctx->pc == 0x1D737Cu) {
        ctx->pc = 0x1D7380u;
        goto label_1d7380;
    }
    ctx->pc = 0x1D7378u;
    SET_GPR_U32(ctx, 31, 0x1D7380u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D7378u, 0x1D7380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7380u;
label_1d7380:
    // 0x1d7380: 0x1040ffcc  beqz        $v0, . + 4 + (-0x34 << 2)
label_1d7384:
    if (ctx->pc == 0x1D7384u) {
        ctx->pc = 0x1D7388u;
        goto label_1d7388;
    }
    ctx->pc = 0x1D7380u;
    {
        const bool branch_taken_0x1d7380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7380) {
            ctx->pc = 0x1D72B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d72b4;
        }
    }
    ctx->pc = 0x1D7388u;
label_1d7388:
    // 0x1d7388: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d738c:
    if (ctx->pc == 0x1D738Cu) {
        ctx->pc = 0x1D738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7388u;
        // 0x1d738c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7390u;
        goto label_1d7390;
    }
    ctx->pc = 0x1D7388u;
    {
        const bool branch_taken_0x1d7388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7388u;
        // 0x1d738c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7388) {
            ctx->pc = 0x1D73A0u;
            goto label_1d73a0;
        }
    }
    ctx->pc = 0x1D7390u;
label_1d7390:
    // 0x1d7390: 0xc075da8  jal         func_1D76A0
label_1d7394:
    if (ctx->pc == 0x1D7394u) {
        ctx->pc = 0x1D7398u;
        goto label_1d7398;
    }
    ctx->pc = 0x1D7390u;
    SET_GPR_U32(ctx, 31, 0x1D7398u);
    ctx->pc = 0x1D76A0u;
    goto label_1d76a0;
    ctx->pc = 0x1D7398u;
label_1d7398:
    // 0x1d7398: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d739c:
    // 0x1d739c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d73a0:
    // 0x1d73a0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_1d73a4:
    if (ctx->pc == 0x1D73A4u) {
        ctx->pc = 0x1D73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73A0u;
        // 0x1d73a4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73A8u;
        goto label_1d73a8;
    }
    ctx->pc = 0x1D73A0u;
    {
        const bool branch_taken_0x1d73a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73A0u;
        // 0x1d73a4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73a0) {
            ctx->pc = 0x1D73C8u;
            goto label_1d73c8;
        }
    }
    ctx->pc = 0x1D73A8u;
label_1d73a8:
    // 0x1d73a8: 0xc05af64  jal         func_16BD90
label_1d73ac:
    if (ctx->pc == 0x1D73ACu) {
        ctx->pc = 0x1D73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73A8u;
        // 0x1d73ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73B0u;
        goto label_1d73b0;
    }
    ctx->pc = 0x1D73A8u;
    SET_GPR_U32(ctx, 31, 0x1D73B0u);
    ctx->pc = 0x1D73ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73A8u;
    // 0x1d73ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x1D73A8u, 0x1D73B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73B0u;
label_1d73b0:
    // 0x1d73b0: 0xc075f68  jal         func_1D7DA0
label_1d73b4:
    if (ctx->pc == 0x1D73B4u) {
        ctx->pc = 0x1D73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73B0u;
        // 0x1d73b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73B8u;
        goto label_1d73b8;
    }
    ctx->pc = 0x1D73B0u;
    SET_GPR_U32(ctx, 31, 0x1D73B8u);
    ctx->pc = 0x1D73B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73B0u;
    // 0x1d73b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7DA0u;
    { ctx->pc = 0x1d7da0; return; }
    ctx->pc = 0x1D73B8u;
label_1d73b8:
    // 0x1d73b8: 0xc05af50  jal         func_16BD40
label_1d73bc:
    if (ctx->pc == 0x1D73BCu) {
        ctx->pc = 0x1D73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73B8u;
        // 0x1d73bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73C0u;
        goto label_1d73c0;
    }
    ctx->pc = 0x1D73B8u;
    SET_GPR_U32(ctx, 31, 0x1D73C0u);
    ctx->pc = 0x1D73BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73B8u;
    // 0x1d73bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x1D73B8u, 0x1D73C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73C0u;
label_1d73c0:
    // 0x1d73c0: 0xc05b578  jal         func_16D5E0
label_1d73c4:
    if (ctx->pc == 0x1D73C4u) {
        ctx->pc = 0x1D73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73C0u;
        // 0x1d73c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73C8u;
        goto label_1d73c8;
    }
    ctx->pc = 0x1D73C0u;
    SET_GPR_U32(ctx, 31, 0x1D73C8u);
    ctx->pc = 0x1D73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73C0u;
    // 0x1d73c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D73C0u, 0x1D73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73C8u;
label_1d73c8:
    // 0x1d73c8: 0xc060258  jal         func_180960
label_1d73cc:
    if (ctx->pc == 0x1D73CCu) {
        ctx->pc = 0x1D73D0u;
        goto label_1d73d0;
    }
    ctx->pc = 0x1D73C8u;
    SET_GPR_U32(ctx, 31, 0x1D73D0u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D73C8u, 0x1D73D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73D0u;
label_1d73d0:
    // 0x1d73d0: 0xc060258  jal         func_180960
label_1d73d4:
    if (ctx->pc == 0x1D73D4u) {
        ctx->pc = 0x1D73D8u;
        goto label_1d73d8;
    }
    ctx->pc = 0x1D73D0u;
    SET_GPR_U32(ctx, 31, 0x1D73D8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D73D0u, 0x1D73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73D8u;
label_1d73d8:
    // 0x1d73d8: 0xc075d00  jal         func_1D7400
label_1d73dc:
    if (ctx->pc == 0x1D73DCu) {
        ctx->pc = 0x1D73E0u;
        goto label_1d73e0;
    }
    ctx->pc = 0x1D73D8u;
    SET_GPR_U32(ctx, 31, 0x1D73E0u);
    ctx->pc = 0x1D7400u;
    goto label_1d7400;
    ctx->pc = 0x1D73E0u;
label_1d73e0:
    // 0x1d73e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d73e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d73e4:
    // 0x1d73e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d73e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d73e8:
    // 0x1d73e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d73e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d73ec:
    // 0x1d73ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d73ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d73f0:
    // 0x1d73f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d73f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d73f4:
    // 0x1d73f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d73f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d73f8:
    // 0x1d73f8: 0x3e00008  jr          $ra
label_1d73fc:
    if (ctx->pc == 0x1D73FCu) {
        ctx->pc = 0x1D73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F8u;
        // 0x1d73fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7400u;
        goto label_1d7400;
    }
    ctx->pc = 0x1D73F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F8u;
        // 0x1d73fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D73F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7400u;
label_1d7400:
    // 0x1d7400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d7404:
    // 0x1d7404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d7404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d7408:
    // 0x1d7408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d740c:
    // 0x1d740c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7410:
    // 0x1d7410: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7414:
    // 0x1d7414: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d7414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7418:
    // 0x1d7418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d7418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d741c:
    // 0x1d741c: 0x0  nop
    ctx->pc = 0x1d741cu;
    // NOP
label_1d7420:
    // 0x1d7420: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d7424:
    // 0x1d7424: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1d7424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d7428:
    // 0x1d7428: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1d7428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d742c:
    // 0x1d742c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7430:
    if (ctx->pc == 0x1D7430u) {
        ctx->pc = 0x1D7434u;
        goto label_1d7434;
    }
    ctx->pc = 0x1D742Cu;
    {
        const bool branch_taken_0x1d742c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d742c) {
            ctx->pc = 0x1D7440u;
            goto label_1d7440;
        }
    }
    ctx->pc = 0x1D7434u;
label_1d7434:
    // 0x1d7434: 0xc070038  jal         func_1C00E0
label_1d7438:
    if (ctx->pc == 0x1D7438u) {
        ctx->pc = 0x1D743Cu;
        goto label_1d743c;
    }
    ctx->pc = 0x1D7434u;
    SET_GPR_U32(ctx, 31, 0x1D743Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D743Cu;
label_1d743c:
    // 0x1d743c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1d743cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1d7440:
    // 0x1d7440: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d7444:
    // 0x1d7444: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1d7444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d7448:
    // 0x1d7448: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1d744c:
    if (ctx->pc == 0x1D744Cu) {
        ctx->pc = 0x1D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7448u;
        // 0x1d744c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7450u;
        goto label_1d7450;
    }
    ctx->pc = 0x1D7448u;
    {
        const bool branch_taken_0x1d7448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7448u;
        // 0x1d744c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7448) {
            ctx->pc = 0x1D741Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d741c;
        }
    }
    ctx->pc = 0x1D7450u;
label_1d7450:
    // 0x1d7450: 0xc05b1e0  jal         func_16C780
label_1d7454:
    if (ctx->pc == 0x1D7454u) {
        ctx->pc = 0x1D7458u;
        goto label_1d7458;
    }
    ctx->pc = 0x1D7450u;
    SET_GPR_U32(ctx, 31, 0x1D7458u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x1D7450u, 0x1D7458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7458u;
label_1d7458:
    // 0x1d7458: 0xc05b578  jal         func_16D5E0
label_1d745c:
    if (ctx->pc == 0x1D745Cu) {
        ctx->pc = 0x1D745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7458u;
        // 0x1d745c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7460u;
        goto label_1d7460;
    }
    ctx->pc = 0x1D7458u;
    SET_GPR_U32(ctx, 31, 0x1D7460u);
    ctx->pc = 0x1D745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7458u;
    // 0x1d745c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D7458u, 0x1D7460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7460u;
label_1d7460:
    // 0x1d7460: 0xc070038  jal         func_1C00E0
label_1d7464:
    if (ctx->pc == 0x1D7464u) {
        ctx->pc = 0x1D7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7460u;
        // 0x1d7464: 0x8f848c54  lw          $a0, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7468u;
        goto label_1d7468;
    }
    ctx->pc = 0x1D7460u;
    SET_GPR_U32(ctx, 31, 0x1D7468u);
    ctx->pc = 0x1D7464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7460u;
    // 0x1d7464: 0x8f848c54  lw          $a0, -0x73AC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7468u;
label_1d7468:
    // 0x1d7468: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_1d746c:
    // 0x1d746c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1d746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d7470:
    // 0x1d7470: 0xc070ea8  jal         func_1C3AA0
label_1d7474:
    if (ctx->pc == 0x1D7474u) {
        ctx->pc = 0x1D7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7470u;
        // 0x1d7474: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7478u;
        goto label_1d7478;
    }
    ctx->pc = 0x1D7470u;
    SET_GPR_U32(ctx, 31, 0x1D7478u);
    ctx->pc = 0x1D7474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7470u;
    // 0x1d7474: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1D7478u;
label_1d7478:
    // 0x1d7478: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_1d747c:
    // 0x1d747c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d747cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d7480:
    // 0x1d7480: 0xc070ea8  jal         func_1C3AA0
label_1d7484:
    if (ctx->pc == 0x1D7484u) {
        ctx->pc = 0x1D7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7480u;
        // 0x1d7484: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7488u;
        goto label_1d7488;
    }
    ctx->pc = 0x1D7480u;
    SET_GPR_U32(ctx, 31, 0x1D7488u);
    ctx->pc = 0x1D7484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7480u;
    // 0x1d7484: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1D7488u;
label_1d7488:
    // 0x1d7488: 0xc070038  jal         func_1C00E0
label_1d748c:
    if (ctx->pc == 0x1D748Cu) {
        ctx->pc = 0x1D748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7488u;
        // 0x1d748c: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7490u;
        goto label_1d7490;
    }
    ctx->pc = 0x1D7488u;
    SET_GPR_U32(ctx, 31, 0x1D7490u);
    ctx->pc = 0x1D748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7488u;
    // 0x1d748c: 0x8f848c50  lw          $a0, -0x73B0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7490u;
label_1d7490:
    // 0x1d7490: 0xc070038  jal         func_1C00E0
label_1d7494:
    if (ctx->pc == 0x1D7494u) {
        ctx->pc = 0x1D7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7490u;
        // 0x1d7494: 0x8f848c4c  lw          $a0, -0x73B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7498u;
        goto label_1d7498;
    }
    ctx->pc = 0x1D7490u;
    SET_GPR_U32(ctx, 31, 0x1D7498u);
    ctx->pc = 0x1D7494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7490u;
    // 0x1d7494: 0x8f848c4c  lw          $a0, -0x73B4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7498u;
label_1d7498:
    // 0x1d7498: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d7498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d749c:
    // 0x1d749c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d749cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d74a0:
    // 0x1d74a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d74a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d74a4:
    // 0x1d74a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d74a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d74a8:
    // 0x1d74a8: 0x3e00008  jr          $ra
label_1d74ac:
    if (ctx->pc == 0x1D74ACu) {
        ctx->pc = 0x1D74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A8u;
        // 0x1d74ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74B0u;
        goto label_1d74b0;
    }
    ctx->pc = 0x1D74A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A8u;
        // 0x1d74ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D74A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D74B0u;
label_1d74b0:
    // 0x1d74b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d74b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1d74b4:
    // 0x1d74b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1d74b8:
    // 0x1d74b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d74b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1d74bc:
    // 0x1d74bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d74bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1d74c0:
    // 0x1d74c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d74c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d74c4:
    // 0x1d74c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d74c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d74c8:
    // 0x1d74c8: 0xc075f18  jal         func_1D7C60
label_1d74cc:
    if (ctx->pc == 0x1D74CCu) {
        ctx->pc = 0x1D74CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74C8u;
        // 0x1d74cc: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74D0u;
        goto label_1d74d0;
    }
    ctx->pc = 0x1D74C8u;
    SET_GPR_U32(ctx, 31, 0x1D74D0u);
    ctx->pc = 0x1D74CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74C8u;
    // 0x1d74cc: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7C60u;
    { ctx->pc = 0x1d7c60; return; }
    ctx->pc = 0x1D74D0u;
label_1d74d0:
    // 0x1d74d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d74d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d74d4:
    // 0x1d74d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d74d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d74d8:
    // 0x1d74d8: 0x0  nop
    ctx->pc = 0x1d74d8u;
    // NOP
label_1d74dc:
    // 0x1d74dc: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d74e0:
    // 0x1d74e0: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1d74e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d74e4:
    // 0x1d74e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d74e8:
    // 0x1d74e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d74ec:
    if (ctx->pc == 0x1D74ECu) {
        ctx->pc = 0x1D74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74E8u;
        // 0x1d74ec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74F0u;
        goto label_1d74f0;
    }
    ctx->pc = 0x1D74E8u;
    {
        const bool branch_taken_0x1d74e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74E8u;
        // 0x1d74ec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74e8) {
            ctx->pc = 0x1D74FCu;
            goto label_1d74fc;
        }
    }
    ctx->pc = 0x1D74F0u;
label_1d74f0:
    // 0x1d74f0: 0xc070080  jal         func_1C0200
label_1d74f4:
    if (ctx->pc == 0x1D74F4u) {
        ctx->pc = 0x1D74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74F0u;
        // 0x1d74f4: 0x24050290  addiu       $a1, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74F8u;
        goto label_1d74f8;
    }
    ctx->pc = 0x1D74F0u;
    SET_GPR_U32(ctx, 31, 0x1D74F8u);
    ctx->pc = 0x1D74F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74F0u;
    // 0x1d74f4: 0x24050290  addiu       $a1, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D74F8u;
label_1d74f8:
    // 0x1d74f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1d74fc:
    // 0x1d74fc: 0x0  nop
    ctx->pc = 0x1d74fcu;
    // NOP
label_1d7500:
    // 0x1d7500: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d7500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d7504:
    // 0x1d7504: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1d7504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d7508:
    // 0x1d7508: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1d750c:
    if (ctx->pc == 0x1D750Cu) {
        ctx->pc = 0x1D750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7508u;
        // 0x1d750c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7510u;
        goto label_1d7510;
    }
    ctx->pc = 0x1D7508u;
    {
        const bool branch_taken_0x1d7508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7508u;
        // 0x1d750c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7508) {
            ctx->pc = 0x1D74D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D7510u;
label_1d7510:
    // 0x1d7510: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7514:
    // 0x1d7514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7518:
    // 0x1d7518: 0xc06dfd4  jal         func_1B7F50
label_1d751c:
    if (ctx->pc == 0x1D751Cu) {
        ctx->pc = 0x1D751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7518u;
        // 0x1d751c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7520u;
        goto label_1d7520;
    }
    ctx->pc = 0x1D7518u;
    SET_GPR_U32(ctx, 31, 0x1D7520u);
    ctx->pc = 0x1D751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7518u;
    // 0x1d751c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x1D7520u;
label_1d7520:
    // 0x1d7520: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1d7524:
    if (ctx->pc == 0x1D7524u) {
        ctx->pc = 0x1D7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7520u;
        // 0x1d7524: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7528u;
        goto label_1d7528;
    }
    ctx->pc = 0x1D7520u;
    {
        const bool branch_taken_0x1d7520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7520u;
        // 0x1d7524: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7520) {
            ctx->pc = 0x1D7538u;
            goto label_1d7538;
        }
    }
    ctx->pc = 0x1D7528u;
label_1d7528:
    // 0x1d7528: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d752c:
    // 0x1d752c: 0xaf808c64  sw          $zero, -0x739C($gp)
    ctx->pc = 0x1d752cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937700), GPR_U32(ctx, 0));
label_1d7530:
    // 0x1d7530: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d7534:
    if (ctx->pc == 0x1D7534u) {
        ctx->pc = 0x1D7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7530u;
        // 0x1d7534: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7538u;
        goto label_1d7538;
    }
    ctx->pc = 0x1D7530u;
    {
        const bool branch_taken_0x1d7530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7530u;
        // 0x1d7534: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7530) {
            ctx->pc = 0x1D7540u;
            goto label_1d7540;
        }
    }
    ctx->pc = 0x1D7538u;
label_1d7538:
    // 0x1d7538: 0xaf808c68  sw          $zero, -0x7398($gp)
    ctx->pc = 0x1d7538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 0));
label_1d753c:
    // 0x1d753c: 0xaf828c64  sw          $v0, -0x739C($gp)
    ctx->pc = 0x1d753cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937700), GPR_U32(ctx, 2));
label_1d7540:
    // 0x1d7540: 0xaf808c60  sw          $zero, -0x73A0($gp)
    ctx->pc = 0x1d7540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 0));
label_1d7544:
    // 0x1d7544: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d7544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7548:
    // 0x1d7548: 0xaf808c5c  sw          $zero, -0x73A4($gp)
    ctx->pc = 0x1d7548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 0));
label_1d754c:
    // 0x1d754c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d754cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7550:
    // 0x1d7550: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d7550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d7554:
    // 0x1d7554: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1d7554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d7558:
    // 0x1d7558: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1d755c:
    // 0x1d755c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d755cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7560:
    // 0x1d7560: 0xc05e234  jal         func_1788D0
label_1d7564:
    if (ctx->pc == 0x1D7564u) {
        ctx->pc = 0x1D7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7560u;
        // 0x1d7564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7568u;
        goto label_1d7568;
    }
    ctx->pc = 0x1D7560u;
    SET_GPR_U32(ctx, 31, 0x1D7568u);
    ctx->pc = 0x1D7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7560u;
    // 0x1d7564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D7560u, 0x1D7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7568u;
label_1d7568:
    // 0x1d7568: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1d7568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1d756c:
    // 0x1d756c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7570:
    // 0x1d7570: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d7570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d7574:
    // 0x1d7574: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d7574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d7578:
    // 0x1d7578: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1d7578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1d757c:
    // 0x1d757c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7580:
    // 0x1d7580: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d7580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d7584:
    // 0x1d7584: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d7584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1d7588:
    // 0x1d7588: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d7588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d758c:
    // 0x1d758c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d758cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7590:
    // 0x1d7590: 0xdc250480  ld          $a1, 0x480($at)
    ctx->pc = 0x1d7590u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1152)));
label_1d7594:
    // 0x1d7594: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7598:
    // 0x1d7598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d759c:
    // 0x1d759c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d759cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75a0:
    // 0x1d75a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d75a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75a4:
    // 0x1d75a4: 0xc05de30  jal         func_1778C0
label_1d75a8:
    if (ctx->pc == 0x1D75A8u) {
        ctx->pc = 0x1D75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75A4u;
        // 0x1d75a8: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75ACu;
        goto label_1d75ac;
    }
    ctx->pc = 0x1D75A4u;
    SET_GPR_U32(ctx, 31, 0x1D75ACu);
    ctx->pc = 0x1D75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75A4u;
    // 0x1d75a8: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D75A4u, 0x1D75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75ACu;
label_1d75ac:
    // 0x1d75ac: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1d75acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1d75b0:
    // 0x1d75b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d75b4:
    // 0x1d75b4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1d75b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1d75b8:
    // 0x1d75b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d75b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d75bc:
    // 0x1d75bc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d75bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d75c0:
    // 0x1d75c0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d75c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d75c4:
    // 0x1d75c4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d75c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d75c8:
    // 0x1d75c8: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x1d75c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_1d75cc:
    // 0x1d75cc: 0xffa80018  sd          $t0, 0x18($sp)
    ctx->pc = 0x1d75ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 8));
label_1d75d0:
    // 0x1d75d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d75d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75d4:
    // 0x1d75d4: 0xdc250488  ld          $a1, 0x488($at)
    ctx->pc = 0x1d75d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1160)));
label_1d75d8:
    // 0x1d75d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d75d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75dc:
    // 0x1d75dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d75dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75e0:
    // 0x1d75e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d75e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d75e4:
    // 0x1d75e4: 0xc05de30  jal         func_1778C0
label_1d75e8:
    if (ctx->pc == 0x1D75E8u) {
        ctx->pc = 0x1D75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75E4u;
        // 0x1d75e8: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75ECu;
        goto label_1d75ec;
    }
    ctx->pc = 0x1D75E4u;
    SET_GPR_U32(ctx, 31, 0x1D75ECu);
    ctx->pc = 0x1D75E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75E4u;
    // 0x1d75e8: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D75E4u, 0x1D75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75ECu;
label_1d75ec:
    // 0x1d75ec: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d75f0:
    // 0x1d75f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d75f4:
    // 0x1d75f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d75f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d75f8:
    // 0x1d75f8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d75f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d75fc:
    // 0x1d75fc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1d75fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1d7600:
    // 0x1d7600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7604:
    // 0x1d7604: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d7604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d7608:
    // 0x1d7608: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x1d7608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1d760c:
    // 0x1d760c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d7610:
    // 0x1d7610: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1d7610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1d7614:
    // 0x1d7614: 0xdc250490  ld          $a1, 0x490($at)
    ctx->pc = 0x1d7614u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1168)));
label_1d7618:
    // 0x1d7618: 0x2407014c  addiu       $a3, $zero, 0x14C
    ctx->pc = 0x1d7618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_1d761c:
    // 0x1d761c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1d761cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7620:
    // 0x1d7620: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7624:
    // 0x1d7624: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7628:
    // 0x1d7628: 0xc05de30  jal         func_1778C0
label_1d762c:
    if (ctx->pc == 0x1D762Cu) {
        ctx->pc = 0x1D762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7628u;
        // 0x1d762c: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7630u;
        goto label_1d7630;
    }
    ctx->pc = 0x1D7628u;
    SET_GPR_U32(ctx, 31, 0x1D7630u);
    ctx->pc = 0x1D762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7628u;
    // 0x1d762c: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D7628u, 0x1D7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7630u;
label_1d7630:
    // 0x1d7630: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d7630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d7634:
    // 0x1d7634: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d7634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d7638:
    // 0x1d7638: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d763c:
    // 0x1d763c: 0x260401f0  addiu       $a0, $s0, 0x1F0
    ctx->pc = 0x1d763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_1d7640:
    // 0x1d7640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7644:
    // 0x1d7644: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1d7644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1d7648:
    // 0x1d7648: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d7648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d764c:
    // 0x1d764c: 0x2407014c  addiu       $a3, $zero, 0x14C
    ctx->pc = 0x1d764cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_1d7650:
    // 0x1d7650: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d7650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d7654:
    // 0x1d7654: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d7654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7658:
    // 0x1d7658: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d7658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d765c:
    // 0x1d765c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d765cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7660:
    // 0x1d7660: 0xdc250498  ld          $a1, 0x498($at)
    ctx->pc = 0x1d7660u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 1176)));
label_1d7664:
    // 0x1d7664: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7664u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7668:
    // 0x1d7668: 0xc05de30  jal         func_1778C0
label_1d766c:
    if (ctx->pc == 0x1D766Cu) {
        ctx->pc = 0x1D766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7668u;
        // 0x1d766c: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7670u;
        goto label_1d7670;
    }
    ctx->pc = 0x1D7668u;
    SET_GPR_U32(ctx, 31, 0x1D7670u);
    ctx->pc = 0x1D766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7668u;
    // 0x1d766c: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D7668u, 0x1D7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7670u;
label_1d7670:
    // 0x1d7670: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d7670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d7674:
    // 0x1d7674: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x1d7674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d7678:
    // 0x1d7678: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_1d767c:
    if (ctx->pc == 0x1D767Cu) {
        ctx->pc = 0x1D767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7678u;
        // 0x1d767c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7680u;
        goto label_1d7680;
    }
    ctx->pc = 0x1D7678u;
    {
        const bool branch_taken_0x1d7678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7678u;
        // 0x1d767c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7678) {
            ctx->pc = 0x1D7550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7550;
        }
    }
    ctx->pc = 0x1D7680u;
label_1d7680:
    // 0x1d7680: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d7680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1d7684:
    // 0x1d7684: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d7684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d7688:
    // 0x1d7688: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d7688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d768c:
    // 0x1d768c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d768cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7690:
    // 0x1d7690: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d7690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7694:
    // 0x1d7694: 0x3e00008  jr          $ra
label_1d7698:
    if (ctx->pc == 0x1D7698u) {
        ctx->pc = 0x1D7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7694u;
        // 0x1d7698: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D769Cu;
        goto label_1d769c;
    }
    ctx->pc = 0x1D7694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7694u;
        // 0x1d7698: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D769Cu;
label_1d769c:
    // 0x1d769c: 0x0  nop
    ctx->pc = 0x1d769cu;
    // NOP
label_1d76a0:
    // 0x1d76a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d76a4:
    // 0x1d76a4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d76a8:
    // 0x1d76a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d76a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d76ac:
    // 0x1d76ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d76acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d76b0:
    // 0x1d76b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d76b4:
    // 0x1d76b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d76b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d76b8:
    // 0x1d76b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d76b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d76bc:
    // 0x1d76bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d76bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d76c0:
    // 0x1d76c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d76c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d76c4:
    // 0x1d76c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d76c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d76c8:
    // 0x1d76c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d76c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d76cc:
    // 0x1d76cc: 0xc04e188  jal         func_138620
label_1d76d0:
    if (ctx->pc == 0x1D76D0u) {
        ctx->pc = 0x1D76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76CCu;
        // 0x1d76d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D76D4u;
        goto label_1d76d4;
    }
    ctx->pc = 0x1D76CCu;
    SET_GPR_U32(ctx, 31, 0x1D76D4u);
    ctx->pc = 0x1D76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76CCu;
    // 0x1d76d0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1D76CCu, 0x1D76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76D4u;
label_1d76d4:
    // 0x1d76d4: 0xc04e198  jal         func_138660
    ctx->pc = 0x1d76d8u;
    return;
}

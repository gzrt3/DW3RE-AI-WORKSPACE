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


void FUN_0019b910_part90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c7060u: goto label_1c7060;
        case 0x1c7064u: goto label_1c7064;
        case 0x1c7068u: goto label_1c7068;
        case 0x1c706cu: goto label_1c706c;
        case 0x1c7070u: goto label_1c7070;
        case 0x1c7074u: goto label_1c7074;
        case 0x1c7078u: goto label_1c7078;
        case 0x1c707cu: goto label_1c707c;
        case 0x1c7080u: goto label_1c7080;
        case 0x1c7084u: goto label_1c7084;
        case 0x1c7088u: goto label_1c7088;
        case 0x1c708cu: goto label_1c708c;
        case 0x1c7090u: goto label_1c7090;
        case 0x1c7094u: goto label_1c7094;
        case 0x1c7098u: goto label_1c7098;
        case 0x1c709cu: goto label_1c709c;
        case 0x1c70a0u: goto label_1c70a0;
        case 0x1c70a4u: goto label_1c70a4;
        case 0x1c70a8u: goto label_1c70a8;
        case 0x1c70acu: goto label_1c70ac;
        case 0x1c70b0u: goto label_1c70b0;
        case 0x1c70b4u: goto label_1c70b4;
        case 0x1c70b8u: goto label_1c70b8;
        case 0x1c70bcu: goto label_1c70bc;
        case 0x1c70c0u: goto label_1c70c0;
        case 0x1c70c4u: goto label_1c70c4;
        case 0x1c70c8u: goto label_1c70c8;
        case 0x1c70ccu: goto label_1c70cc;
        case 0x1c70d0u: goto label_1c70d0;
        case 0x1c70d4u: goto label_1c70d4;
        case 0x1c70d8u: goto label_1c70d8;
        case 0x1c70dcu: goto label_1c70dc;
        case 0x1c70e0u: goto label_1c70e0;
        case 0x1c70e4u: goto label_1c70e4;
        case 0x1c70e8u: goto label_1c70e8;
        case 0x1c70ecu: goto label_1c70ec;
        case 0x1c70f0u: goto label_1c70f0;
        case 0x1c70f4u: goto label_1c70f4;
        case 0x1c70f8u: goto label_1c70f8;
        case 0x1c70fcu: goto label_1c70fc;
        case 0x1c7100u: goto label_1c7100;
        case 0x1c7104u: goto label_1c7104;
        case 0x1c7108u: goto label_1c7108;
        case 0x1c710cu: goto label_1c710c;
        case 0x1c7110u: goto label_1c7110;
        case 0x1c7114u: goto label_1c7114;
        case 0x1c7118u: goto label_1c7118;
        case 0x1c711cu: goto label_1c711c;
        case 0x1c7120u: goto label_1c7120;
        case 0x1c7124u: goto label_1c7124;
        case 0x1c7128u: goto label_1c7128;
        case 0x1c712cu: goto label_1c712c;
        case 0x1c7130u: goto label_1c7130;
        case 0x1c7134u: goto label_1c7134;
        case 0x1c7138u: goto label_1c7138;
        case 0x1c713cu: goto label_1c713c;
        case 0x1c7140u: goto label_1c7140;
        case 0x1c7144u: goto label_1c7144;
        case 0x1c7148u: goto label_1c7148;
        case 0x1c714cu: goto label_1c714c;
        case 0x1c7150u: goto label_1c7150;
        case 0x1c7154u: goto label_1c7154;
        case 0x1c7158u: goto label_1c7158;
        case 0x1c715cu: goto label_1c715c;
        case 0x1c7160u: goto label_1c7160;
        case 0x1c7164u: goto label_1c7164;
        case 0x1c7168u: goto label_1c7168;
        case 0x1c716cu: goto label_1c716c;
        case 0x1c7170u: goto label_1c7170;
        case 0x1c7174u: goto label_1c7174;
        case 0x1c7178u: goto label_1c7178;
        case 0x1c717cu: goto label_1c717c;
        case 0x1c7180u: goto label_1c7180;
        case 0x1c7184u: goto label_1c7184;
        case 0x1c7188u: goto label_1c7188;
        case 0x1c718cu: goto label_1c718c;
        case 0x1c7190u: goto label_1c7190;
        case 0x1c7194u: goto label_1c7194;
        case 0x1c7198u: goto label_1c7198;
        case 0x1c719cu: goto label_1c719c;
        case 0x1c71a0u: goto label_1c71a0;
        case 0x1c71a4u: goto label_1c71a4;
        case 0x1c71a8u: goto label_1c71a8;
        case 0x1c71acu: goto label_1c71ac;
        case 0x1c71b0u: goto label_1c71b0;
        case 0x1c71b4u: goto label_1c71b4;
        case 0x1c71b8u: goto label_1c71b8;
        case 0x1c71bcu: goto label_1c71bc;
        case 0x1c71c0u: goto label_1c71c0;
        case 0x1c71c4u: goto label_1c71c4;
        case 0x1c71c8u: goto label_1c71c8;
        case 0x1c71ccu: goto label_1c71cc;
        case 0x1c71d0u: goto label_1c71d0;
        case 0x1c71d4u: goto label_1c71d4;
        case 0x1c71d8u: goto label_1c71d8;
        case 0x1c71dcu: goto label_1c71dc;
        case 0x1c71e0u: goto label_1c71e0;
        case 0x1c71e4u: goto label_1c71e4;
        case 0x1c71e8u: goto label_1c71e8;
        case 0x1c71ecu: goto label_1c71ec;
        case 0x1c71f0u: goto label_1c71f0;
        case 0x1c71f4u: goto label_1c71f4;
        case 0x1c71f8u: goto label_1c71f8;
        case 0x1c71fcu: goto label_1c71fc;
        case 0x1c7200u: goto label_1c7200;
        case 0x1c7204u: goto label_1c7204;
        case 0x1c7208u: goto label_1c7208;
        case 0x1c720cu: goto label_1c720c;
        case 0x1c7210u: goto label_1c7210;
        case 0x1c7214u: goto label_1c7214;
        case 0x1c7218u: goto label_1c7218;
        case 0x1c721cu: goto label_1c721c;
        case 0x1c7220u: goto label_1c7220;
        case 0x1c7224u: goto label_1c7224;
        case 0x1c7228u: goto label_1c7228;
        case 0x1c722cu: goto label_1c722c;
        case 0x1c7230u: goto label_1c7230;
        case 0x1c7234u: goto label_1c7234;
        case 0x1c7238u: goto label_1c7238;
        case 0x1c723cu: goto label_1c723c;
        case 0x1c7240u: goto label_1c7240;
        case 0x1c7244u: goto label_1c7244;
        case 0x1c7248u: goto label_1c7248;
        case 0x1c724cu: goto label_1c724c;
        case 0x1c7250u: goto label_1c7250;
        case 0x1c7254u: goto label_1c7254;
        case 0x1c7258u: goto label_1c7258;
        case 0x1c725cu: goto label_1c725c;
        case 0x1c7260u: goto label_1c7260;
        case 0x1c7264u: goto label_1c7264;
        case 0x1c7268u: goto label_1c7268;
        case 0x1c726cu: goto label_1c726c;
        case 0x1c7270u: goto label_1c7270;
        case 0x1c7274u: goto label_1c7274;
        case 0x1c7278u: goto label_1c7278;
        case 0x1c727cu: goto label_1c727c;
        case 0x1c7280u: goto label_1c7280;
        case 0x1c7284u: goto label_1c7284;
        case 0x1c7288u: goto label_1c7288;
        case 0x1c728cu: goto label_1c728c;
        case 0x1c7290u: goto label_1c7290;
        case 0x1c7294u: goto label_1c7294;
        case 0x1c7298u: goto label_1c7298;
        case 0x1c729cu: goto label_1c729c;
        case 0x1c72a0u: goto label_1c72a0;
        case 0x1c72a4u: goto label_1c72a4;
        case 0x1c72a8u: goto label_1c72a8;
        case 0x1c72acu: goto label_1c72ac;
        case 0x1c72b0u: goto label_1c72b0;
        case 0x1c72b4u: goto label_1c72b4;
        case 0x1c72b8u: goto label_1c72b8;
        case 0x1c72bcu: goto label_1c72bc;
        case 0x1c72c0u: goto label_1c72c0;
        case 0x1c72c4u: goto label_1c72c4;
        case 0x1c72c8u: goto label_1c72c8;
        case 0x1c72ccu: goto label_1c72cc;
        case 0x1c72d0u: goto label_1c72d0;
        case 0x1c72d4u: goto label_1c72d4;
        case 0x1c72d8u: goto label_1c72d8;
        case 0x1c72dcu: goto label_1c72dc;
        case 0x1c72e0u: goto label_1c72e0;
        case 0x1c72e4u: goto label_1c72e4;
        case 0x1c72e8u: goto label_1c72e8;
        case 0x1c72ecu: goto label_1c72ec;
        case 0x1c72f0u: goto label_1c72f0;
        case 0x1c72f4u: goto label_1c72f4;
        case 0x1c72f8u: goto label_1c72f8;
        case 0x1c72fcu: goto label_1c72fc;
        case 0x1c7300u: goto label_1c7300;
        case 0x1c7304u: goto label_1c7304;
        case 0x1c7308u: goto label_1c7308;
        case 0x1c730cu: goto label_1c730c;
        case 0x1c7310u: goto label_1c7310;
        case 0x1c7314u: goto label_1c7314;
        case 0x1c7318u: goto label_1c7318;
        case 0x1c731cu: goto label_1c731c;
        case 0x1c7320u: goto label_1c7320;
        case 0x1c7324u: goto label_1c7324;
        case 0x1c7328u: goto label_1c7328;
        case 0x1c732cu: goto label_1c732c;
        case 0x1c7330u: goto label_1c7330;
        case 0x1c7334u: goto label_1c7334;
        case 0x1c7338u: goto label_1c7338;
        case 0x1c733cu: goto label_1c733c;
        case 0x1c7340u: goto label_1c7340;
        case 0x1c7344u: goto label_1c7344;
        case 0x1c7348u: goto label_1c7348;
        case 0x1c734cu: goto label_1c734c;
        case 0x1c7350u: goto label_1c7350;
        case 0x1c7354u: goto label_1c7354;
        case 0x1c7358u: goto label_1c7358;
        case 0x1c735cu: goto label_1c735c;
        case 0x1c7360u: goto label_1c7360;
        case 0x1c7364u: goto label_1c7364;
        case 0x1c7368u: goto label_1c7368;
        case 0x1c736cu: goto label_1c736c;
        case 0x1c7370u: goto label_1c7370;
        case 0x1c7374u: goto label_1c7374;
        case 0x1c7378u: goto label_1c7378;
        case 0x1c737cu: goto label_1c737c;
        case 0x1c7380u: goto label_1c7380;
        case 0x1c7384u: goto label_1c7384;
        case 0x1c7388u: goto label_1c7388;
        case 0x1c738cu: goto label_1c738c;
        case 0x1c7390u: goto label_1c7390;
        case 0x1c7394u: goto label_1c7394;
        case 0x1c7398u: goto label_1c7398;
        case 0x1c739cu: goto label_1c739c;
        case 0x1c73a0u: goto label_1c73a0;
        case 0x1c73a4u: goto label_1c73a4;
        case 0x1c73a8u: goto label_1c73a8;
        case 0x1c73acu: goto label_1c73ac;
        case 0x1c73b0u: goto label_1c73b0;
        case 0x1c73b4u: goto label_1c73b4;
        case 0x1c73b8u: goto label_1c73b8;
        case 0x1c73bcu: goto label_1c73bc;
        case 0x1c73c0u: goto label_1c73c0;
        case 0x1c73c4u: goto label_1c73c4;
        case 0x1c73c8u: goto label_1c73c8;
        case 0x1c73ccu: goto label_1c73cc;
        case 0x1c73d0u: goto label_1c73d0;
        case 0x1c73d4u: goto label_1c73d4;
        case 0x1c73d8u: goto label_1c73d8;
        case 0x1c73dcu: goto label_1c73dc;
        case 0x1c73e0u: goto label_1c73e0;
        case 0x1c73e4u: goto label_1c73e4;
        case 0x1c73e8u: goto label_1c73e8;
        case 0x1c73ecu: goto label_1c73ec;
        case 0x1c73f0u: goto label_1c73f0;
        case 0x1c73f4u: goto label_1c73f4;
        case 0x1c73f8u: goto label_1c73f8;
        case 0x1c73fcu: goto label_1c73fc;
        case 0x1c7400u: goto label_1c7400;
        case 0x1c7404u: goto label_1c7404;
        case 0x1c7408u: goto label_1c7408;
        case 0x1c740cu: goto label_1c740c;
        case 0x1c7410u: goto label_1c7410;
        case 0x1c7414u: goto label_1c7414;
        case 0x1c7418u: goto label_1c7418;
        case 0x1c741cu: goto label_1c741c;
        case 0x1c7420u: goto label_1c7420;
        case 0x1c7424u: goto label_1c7424;
        case 0x1c7428u: goto label_1c7428;
        case 0x1c742cu: goto label_1c742c;
        case 0x1c7430u: goto label_1c7430;
        case 0x1c7434u: goto label_1c7434;
        case 0x1c7438u: goto label_1c7438;
        case 0x1c743cu: goto label_1c743c;
        case 0x1c7440u: goto label_1c7440;
        case 0x1c7444u: goto label_1c7444;
        case 0x1c7448u: goto label_1c7448;
        case 0x1c744cu: goto label_1c744c;
        case 0x1c7450u: goto label_1c7450;
        case 0x1c7454u: goto label_1c7454;
        case 0x1c7458u: goto label_1c7458;
        case 0x1c745cu: goto label_1c745c;
        case 0x1c7460u: goto label_1c7460;
        case 0x1c7464u: goto label_1c7464;
        case 0x1c7468u: goto label_1c7468;
        case 0x1c746cu: goto label_1c746c;
        case 0x1c7470u: goto label_1c7470;
        case 0x1c7474u: goto label_1c7474;
        case 0x1c7478u: goto label_1c7478;
        case 0x1c747cu: goto label_1c747c;
        case 0x1c7480u: goto label_1c7480;
        case 0x1c7484u: goto label_1c7484;
        case 0x1c7488u: goto label_1c7488;
        case 0x1c748cu: goto label_1c748c;
        case 0x1c7490u: goto label_1c7490;
        case 0x1c7494u: goto label_1c7494;
        case 0x1c7498u: goto label_1c7498;
        case 0x1c749cu: goto label_1c749c;
        case 0x1c74a0u: goto label_1c74a0;
        case 0x1c74a4u: goto label_1c74a4;
        case 0x1c74a8u: goto label_1c74a8;
        case 0x1c74acu: goto label_1c74ac;
        case 0x1c74b0u: goto label_1c74b0;
        case 0x1c74b4u: goto label_1c74b4;
        case 0x1c74b8u: goto label_1c74b8;
        case 0x1c74bcu: goto label_1c74bc;
        case 0x1c74c0u: goto label_1c74c0;
        case 0x1c74c4u: goto label_1c74c4;
        case 0x1c74c8u: goto label_1c74c8;
        case 0x1c74ccu: goto label_1c74cc;
        case 0x1c74d0u: goto label_1c74d0;
        case 0x1c74d4u: goto label_1c74d4;
        case 0x1c74d8u: goto label_1c74d8;
        case 0x1c74dcu: goto label_1c74dc;
        case 0x1c74e0u: goto label_1c74e0;
        case 0x1c74e4u: goto label_1c74e4;
        case 0x1c74e8u: goto label_1c74e8;
        case 0x1c74ecu: goto label_1c74ec;
        case 0x1c74f0u: goto label_1c74f0;
        case 0x1c74f4u: goto label_1c74f4;
        case 0x1c74f8u: goto label_1c74f8;
        case 0x1c74fcu: goto label_1c74fc;
        case 0x1c7500u: goto label_1c7500;
        case 0x1c7504u: goto label_1c7504;
        case 0x1c7508u: goto label_1c7508;
        case 0x1c750cu: goto label_1c750c;
        case 0x1c7510u: goto label_1c7510;
        case 0x1c7514u: goto label_1c7514;
        case 0x1c7518u: goto label_1c7518;
        case 0x1c751cu: goto label_1c751c;
        case 0x1c7520u: goto label_1c7520;
        case 0x1c7524u: goto label_1c7524;
        case 0x1c7528u: goto label_1c7528;
        case 0x1c752cu: goto label_1c752c;
        case 0x1c7530u: goto label_1c7530;
        case 0x1c7534u: goto label_1c7534;
        case 0x1c7538u: goto label_1c7538;
        case 0x1c753cu: goto label_1c753c;
        case 0x1c7540u: goto label_1c7540;
        case 0x1c7544u: goto label_1c7544;
        case 0x1c7548u: goto label_1c7548;
        case 0x1c754cu: goto label_1c754c;
        case 0x1c7550u: goto label_1c7550;
        case 0x1c7554u: goto label_1c7554;
        case 0x1c7558u: goto label_1c7558;
        case 0x1c755cu: goto label_1c755c;
        case 0x1c7560u: goto label_1c7560;
        case 0x1c7564u: goto label_1c7564;
        case 0x1c7568u: goto label_1c7568;
        case 0x1c756cu: goto label_1c756c;
        case 0x1c7570u: goto label_1c7570;
        case 0x1c7574u: goto label_1c7574;
        case 0x1c7578u: goto label_1c7578;
        case 0x1c757cu: goto label_1c757c;
        case 0x1c7580u: goto label_1c7580;
        case 0x1c7584u: goto label_1c7584;
        case 0x1c7588u: goto label_1c7588;
        case 0x1c758cu: goto label_1c758c;
        case 0x1c7590u: goto label_1c7590;
        case 0x1c7594u: goto label_1c7594;
        case 0x1c7598u: goto label_1c7598;
        case 0x1c759cu: goto label_1c759c;
        case 0x1c75a0u: goto label_1c75a0;
        case 0x1c75a4u: goto label_1c75a4;
        case 0x1c75a8u: goto label_1c75a8;
        case 0x1c75acu: goto label_1c75ac;
        case 0x1c75b0u: goto label_1c75b0;
        case 0x1c75b4u: goto label_1c75b4;
        case 0x1c75b8u: goto label_1c75b8;
        case 0x1c75bcu: goto label_1c75bc;
        case 0x1c75c0u: goto label_1c75c0;
        case 0x1c75c4u: goto label_1c75c4;
        case 0x1c75c8u: goto label_1c75c8;
        case 0x1c75ccu: goto label_1c75cc;
        case 0x1c75d0u: goto label_1c75d0;
        case 0x1c75d4u: goto label_1c75d4;
        case 0x1c75d8u: goto label_1c75d8;
        case 0x1c75dcu: goto label_1c75dc;
        case 0x1c75e0u: goto label_1c75e0;
        case 0x1c75e4u: goto label_1c75e4;
        case 0x1c75e8u: goto label_1c75e8;
        case 0x1c75ecu: goto label_1c75ec;
        case 0x1c75f0u: goto label_1c75f0;
        case 0x1c75f4u: goto label_1c75f4;
        case 0x1c75f8u: goto label_1c75f8;
        case 0x1c75fcu: goto label_1c75fc;
        case 0x1c7600u: goto label_1c7600;
        case 0x1c7604u: goto label_1c7604;
        case 0x1c7608u: goto label_1c7608;
        case 0x1c760cu: goto label_1c760c;
        case 0x1c7610u: goto label_1c7610;
        case 0x1c7614u: goto label_1c7614;
        case 0x1c7618u: goto label_1c7618;
        case 0x1c761cu: goto label_1c761c;
        case 0x1c7620u: goto label_1c7620;
        case 0x1c7624u: goto label_1c7624;
        case 0x1c7628u: goto label_1c7628;
        case 0x1c762cu: goto label_1c762c;
        case 0x1c7630u: goto label_1c7630;
        case 0x1c7634u: goto label_1c7634;
        case 0x1c7638u: goto label_1c7638;
        case 0x1c763cu: goto label_1c763c;
        case 0x1c7640u: goto label_1c7640;
        case 0x1c7644u: goto label_1c7644;
        case 0x1c7648u: goto label_1c7648;
        case 0x1c764cu: goto label_1c764c;
        case 0x1c7650u: goto label_1c7650;
        case 0x1c7654u: goto label_1c7654;
        case 0x1c7658u: goto label_1c7658;
        case 0x1c765cu: goto label_1c765c;
        case 0x1c7660u: goto label_1c7660;
        case 0x1c7664u: goto label_1c7664;
        case 0x1c7668u: goto label_1c7668;
        case 0x1c766cu: goto label_1c766c;
        case 0x1c7670u: goto label_1c7670;
        case 0x1c7674u: goto label_1c7674;
        case 0x1c7678u: goto label_1c7678;
        case 0x1c767cu: goto label_1c767c;
        case 0x1c7680u: goto label_1c7680;
        case 0x1c7684u: goto label_1c7684;
        case 0x1c7688u: goto label_1c7688;
        case 0x1c768cu: goto label_1c768c;
        case 0x1c7690u: goto label_1c7690;
        case 0x1c7694u: goto label_1c7694;
        case 0x1c7698u: goto label_1c7698;
        case 0x1c769cu: goto label_1c769c;
        case 0x1c76a0u: goto label_1c76a0;
        case 0x1c76a4u: goto label_1c76a4;
        case 0x1c76a8u: goto label_1c76a8;
        case 0x1c76acu: goto label_1c76ac;
        case 0x1c76b0u: goto label_1c76b0;
        case 0x1c76b4u: goto label_1c76b4;
        case 0x1c76b8u: goto label_1c76b8;
        case 0x1c76bcu: goto label_1c76bc;
        case 0x1c76c0u: goto label_1c76c0;
        case 0x1c76c4u: goto label_1c76c4;
        case 0x1c76c8u: goto label_1c76c8;
        case 0x1c76ccu: goto label_1c76cc;
        case 0x1c76d0u: goto label_1c76d0;
        case 0x1c76d4u: goto label_1c76d4;
        case 0x1c76d8u: goto label_1c76d8;
        case 0x1c76dcu: goto label_1c76dc;
        case 0x1c76e0u: goto label_1c76e0;
        case 0x1c76e4u: goto label_1c76e4;
        case 0x1c76e8u: goto label_1c76e8;
        case 0x1c76ecu: goto label_1c76ec;
        case 0x1c76f0u: goto label_1c76f0;
        case 0x1c76f4u: goto label_1c76f4;
        case 0x1c76f8u: goto label_1c76f8;
        case 0x1c76fcu: goto label_1c76fc;
        case 0x1c7700u: goto label_1c7700;
        case 0x1c7704u: goto label_1c7704;
        case 0x1c7708u: goto label_1c7708;
        case 0x1c770cu: goto label_1c770c;
        case 0x1c7710u: goto label_1c7710;
        case 0x1c7714u: goto label_1c7714;
        case 0x1c7718u: goto label_1c7718;
        case 0x1c771cu: goto label_1c771c;
        case 0x1c7720u: goto label_1c7720;
        case 0x1c7724u: goto label_1c7724;
        case 0x1c7728u: goto label_1c7728;
        case 0x1c772cu: goto label_1c772c;
        case 0x1c7730u: goto label_1c7730;
        case 0x1c7734u: goto label_1c7734;
        case 0x1c7738u: goto label_1c7738;
        case 0x1c773cu: goto label_1c773c;
        case 0x1c7740u: goto label_1c7740;
        case 0x1c7744u: goto label_1c7744;
        case 0x1c7748u: goto label_1c7748;
        case 0x1c774cu: goto label_1c774c;
        case 0x1c7750u: goto label_1c7750;
        case 0x1c7754u: goto label_1c7754;
        case 0x1c7758u: goto label_1c7758;
        case 0x1c775cu: goto label_1c775c;
        case 0x1c7760u: goto label_1c7760;
        case 0x1c7764u: goto label_1c7764;
        case 0x1c7768u: goto label_1c7768;
        case 0x1c776cu: goto label_1c776c;
        case 0x1c7770u: goto label_1c7770;
        case 0x1c7774u: goto label_1c7774;
        case 0x1c7778u: goto label_1c7778;
        case 0x1c777cu: goto label_1c777c;
        case 0x1c7780u: goto label_1c7780;
        case 0x1c7784u: goto label_1c7784;
        case 0x1c7788u: goto label_1c7788;
        case 0x1c778cu: goto label_1c778c;
        case 0x1c7790u: goto label_1c7790;
        case 0x1c7794u: goto label_1c7794;
        case 0x1c7798u: goto label_1c7798;
        case 0x1c779cu: goto label_1c779c;
        case 0x1c77a0u: goto label_1c77a0;
        case 0x1c77a4u: goto label_1c77a4;
        case 0x1c77a8u: goto label_1c77a8;
        case 0x1c77acu: goto label_1c77ac;
        case 0x1c77b0u: goto label_1c77b0;
        case 0x1c77b4u: goto label_1c77b4;
        case 0x1c77b8u: goto label_1c77b8;
        case 0x1c77bcu: goto label_1c77bc;
        case 0x1c77c0u: goto label_1c77c0;
        case 0x1c77c4u: goto label_1c77c4;
        case 0x1c77c8u: goto label_1c77c8;
        case 0x1c77ccu: goto label_1c77cc;
        case 0x1c77d0u: goto label_1c77d0;
        case 0x1c77d4u: goto label_1c77d4;
        case 0x1c77d8u: goto label_1c77d8;
        case 0x1c77dcu: goto label_1c77dc;
        case 0x1c77e0u: goto label_1c77e0;
        case 0x1c77e4u: goto label_1c77e4;
        case 0x1c77e8u: goto label_1c77e8;
        case 0x1c77ecu: goto label_1c77ec;
        case 0x1c77f0u: goto label_1c77f0;
        case 0x1c77f4u: goto label_1c77f4;
        case 0x1c77f8u: goto label_1c77f8;
        case 0x1c77fcu: goto label_1c77fc;
        case 0x1c7800u: goto label_1c7800;
        case 0x1c7804u: goto label_1c7804;
        case 0x1c7808u: goto label_1c7808;
        case 0x1c780cu: goto label_1c780c;
        case 0x1c7810u: goto label_1c7810;
        case 0x1c7814u: goto label_1c7814;
        case 0x1c7818u: goto label_1c7818;
        case 0x1c781cu: goto label_1c781c;
        case 0x1c7820u: goto label_1c7820;
        case 0x1c7824u: goto label_1c7824;
        case 0x1c7828u: goto label_1c7828;
        case 0x1c782cu: goto label_1c782c;
        default: return;
    }

label_1c7060:
    // 0x1c7060: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c7060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c7064:
    // 0x1c7064: 0x24a54b50  addiu       $a1, $a1, 0x4B50
    ctx->pc = 0x1c7064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
label_1c7068:
    // 0x1c7068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c706c:
    // 0x1c706c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c706cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7070:
    // 0x1c7070: 0xc066c72  jal         func_19B1C8
label_1c7074:
    if (ctx->pc == 0x1C7074u) {
        ctx->pc = 0x1C7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7070u;
        // 0x1c7074: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7078u;
        goto label_1c7078;
    }
    ctx->pc = 0x1C7070u;
    SET_GPR_U32(ctx, 31, 0x1C7078u);
    ctx->pc = 0x1C7074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7070u;
    // 0x1c7074: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C7070u, 0x1C7078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7078u;
label_1c7078:
    // 0x1c7078: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c707c:
    if (ctx->pc == 0x1C707Cu) {
        ctx->pc = 0x1C7080u;
        goto label_1c7080;
    }
    ctx->pc = 0x1C7078u;
    {
        const bool branch_taken_0x1c7078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7078) {
            ctx->pc = 0x1C70DCu;
            goto label_1c70dc;
        }
    }
    ctx->pc = 0x1C7080u;
label_1c7080:
    // 0x1c7080: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c7080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c7084:
    // 0x1c7084: 0x24a54b20  addiu       $a1, $a1, 0x4B20
    ctx->pc = 0x1c7084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19232));
label_1c7088:
    // 0x1c7088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c708c:
    // 0x1c708c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c708cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7090:
    // 0x1c7090: 0xc066c72  jal         func_19B1C8
label_1c7094:
    if (ctx->pc == 0x1C7094u) {
        ctx->pc = 0x1C7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7090u;
        // 0x1c7094: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7098u;
        goto label_1c7098;
    }
    ctx->pc = 0x1C7090u;
    SET_GPR_U32(ctx, 31, 0x1C7098u);
    ctx->pc = 0x1C7094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7090u;
    // 0x1c7094: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C7090u, 0x1C7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7098u;
label_1c7098:
    // 0x1c7098: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c709c:
    if (ctx->pc == 0x1C709Cu) {
        ctx->pc = 0x1C70A0u;
        goto label_1c70a0;
    }
    ctx->pc = 0x1C7098u;
    {
        const bool branch_taken_0x1c7098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7098) {
            ctx->pc = 0x1C70DCu;
            goto label_1c70dc;
        }
    }
    ctx->pc = 0x1C70A0u;
label_1c70a0:
    // 0x1c70a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c70a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c70a4:
    // 0x1c70a4: 0x24a54af0  addiu       $a1, $a1, 0x4AF0
    ctx->pc = 0x1c70a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
label_1c70a8:
    // 0x1c70a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c70a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c70ac:
    // 0x1c70ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c70acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c70b0:
    // 0x1c70b0: 0xc066c72  jal         func_19B1C8
label_1c70b4:
    if (ctx->pc == 0x1C70B4u) {
        ctx->pc = 0x1C70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70B0u;
        // 0x1c70b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C70B8u;
        goto label_1c70b8;
    }
    ctx->pc = 0x1C70B0u;
    SET_GPR_U32(ctx, 31, 0x1C70B8u);
    ctx->pc = 0x1C70B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70B0u;
    // 0x1c70b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C70B0u, 0x1C70B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70B8u;
label_1c70b8:
    // 0x1c70b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c70bc:
    if (ctx->pc == 0x1C70BCu) {
        ctx->pc = 0x1C70C0u;
        goto label_1c70c0;
    }
    ctx->pc = 0x1C70B8u;
    {
        const bool branch_taken_0x1c70b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c70b8) {
            ctx->pc = 0x1C70DCu;
            goto label_1c70dc;
        }
    }
    ctx->pc = 0x1C70C0u;
label_1c70c0:
    // 0x1c70c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c70c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c70c4:
    // 0x1c70c4: 0x24a54ac0  addiu       $a1, $a1, 0x4AC0
    ctx->pc = 0x1c70c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19136));
label_1c70c8:
    // 0x1c70c8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c70c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c70cc:
    // 0x1c70cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c70ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c70d0:
    // 0x1c70d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c70d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c70d4:
    // 0x1c70d4: 0xc066c72  jal         func_19B1C8
label_1c70d8:
    if (ctx->pc == 0x1C70D8u) {
        ctx->pc = 0x1C70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70D4u;
        // 0x1c70d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C70DCu;
        goto label_1c70dc;
    }
    ctx->pc = 0x1C70D4u;
    SET_GPR_U32(ctx, 31, 0x1C70DCu);
    ctx->pc = 0x1C70D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C70D4u;
    // 0x1c70d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C70D4u, 0x1C70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70DCu;
label_1c70dc:
    // 0x1c70dc: 0x928202e1  lbu         $v0, 0x2E1($s4)
    ctx->pc = 0x1c70dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
label_1c70e0:
    // 0x1c70e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1c70e4:
    if (ctx->pc == 0x1C70E4u) {
        ctx->pc = 0x1C70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70E0u;
        // 0x1c70e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C70E8u;
        goto label_1c70e8;
    }
    ctx->pc = 0x1C70E0u;
    {
        const bool branch_taken_0x1c70e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70E0u;
        // 0x1c70e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70e0) {
            ctx->pc = 0x1C7110u;
            goto label_1c7110;
        }
    }
    ctx->pc = 0x1C70E8u;
label_1c70e8:
    // 0x1c70e8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c70e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c70ec:
    // 0x1c70ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c70ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c70f0:
    // 0x1c70f0: 0x24a54c70  addiu       $a1, $a1, 0x4C70
    ctx->pc = 0x1c70f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19568));
label_1c70f4:
    // 0x1c70f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c70f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c70f8:
    // 0x1c70f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c70f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c70fc:
    // 0x1c70fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c70fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7100:
    // 0x1c7100: 0xc066c72  jal         func_19B1C8
label_1c7104:
    if (ctx->pc == 0x1C7104u) {
        ctx->pc = 0x1C7104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7100u;
        // 0x1c7104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7108u;
        goto label_1c7108;
    }
    ctx->pc = 0x1C7100u;
    SET_GPR_U32(ctx, 31, 0x1C7108u);
    ctx->pc = 0x1C7104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7100u;
    // 0x1c7104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C7100u, 0x1C7108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7108u;
label_1c7108:
    // 0x1c7108: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c710c:
    if (ctx->pc == 0x1C710Cu) {
        ctx->pc = 0x1C710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7108u;
        // 0x1c710c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7110u;
        goto label_1c7110;
    }
    ctx->pc = 0x1C7108u;
    {
        const bool branch_taken_0x1c7108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7108u;
        // 0x1c710c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7108) {
            ctx->pc = 0x1C7130u;
            goto label_1c7130;
        }
    }
    ctx->pc = 0x1C7110u;
label_1c7110:
    // 0x1c7110: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c7110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c7114:
    // 0x1c7114: 0x24a54ca0  addiu       $a1, $a1, 0x4CA0
    ctx->pc = 0x1c7114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19616));
label_1c7118:
    // 0x1c7118: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c7118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c711c:
    // 0x1c711c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c711cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7120:
    // 0x1c7120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7124:
    // 0x1c7124: 0xc066c72  jal         func_19B1C8
label_1c7128:
    if (ctx->pc == 0x1C7128u) {
        ctx->pc = 0x1C7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7124u;
        // 0x1c7128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C712Cu;
        goto label_1c712c;
    }
    ctx->pc = 0x1C7124u;
    SET_GPR_U32(ctx, 31, 0x1C712Cu);
    ctx->pc = 0x1C7128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7124u;
    // 0x1c7128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C7124u, 0x1C712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C712Cu;
label_1c712c:
    // 0x1c712c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1c712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c7130:
    // 0x1c7130: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c7130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c7134:
    // 0x1c7134: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c7134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c7138:
    // 0x1c7138: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c713c:
    // 0x1c713c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c713cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7140:
    // 0x1c7140: 0xc066c72  jal         func_19B1C8
label_1c7144:
    if (ctx->pc == 0x1C7144u) {
        ctx->pc = 0x1C7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7140u;
        // 0x1c7144: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7148u;
        goto label_1c7148;
    }
    ctx->pc = 0x1C7140u;
    SET_GPR_U32(ctx, 31, 0x1C7148u);
    ctx->pc = 0x1C7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7140u;
    // 0x1c7144: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C7140u, 0x1C7148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7148u;
label_1c7148:
    // 0x1c7148: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c7148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1c714c:
    // 0x1c714c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c7150:
    // 0x1c7150: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1c7150u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c7154:
    // 0x1c7154: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c7158:
    // 0x1c7158: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c7158u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c715c:
    // 0x1c715c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c715cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c7160:
    // 0x1c7160: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c7160u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c7164:
    // 0x1c7164: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c7164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c7168:
    // 0x1c7168: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c7168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c716c:
    // 0x1c716c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c716cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c7170:
    // 0x1c7170: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7174:
    // 0x1c7174: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7178:
    // 0x1c7178: 0x3e00008  jr          $ra
label_1c717c:
    if (ctx->pc == 0x1C717Cu) {
        ctx->pc = 0x1C717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7178u;
        // 0x1c717c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7180u;
        goto label_1c7180;
    }
    ctx->pc = 0x1C7178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7178u;
        // 0x1c717c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7180u;
label_1c7180:
    // 0x1c7180: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1c7180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1c7184:
    // 0x1c7184: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c7184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1c7188:
    // 0x1c7188: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c7188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1c718c:
    // 0x1c718c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c718cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1c7190:
    // 0x1c7190: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c7190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c7194:
    // 0x1c7194: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c7194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c7198:
    // 0x1c7198: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c719c:
    // 0x1c719c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c719cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c71a0:
    // 0x1c71a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c71a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c71a4:
    // 0x1c71a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c71a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c71a8:
    // 0x1c71a8: 0x908402e4  lbu         $a0, 0x2E4($a0)
    ctx->pc = 0x1c71a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 740)));
label_1c71ac:
    // 0x1c71ac: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1c71acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c71b0:
    // 0x1c71b0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c71b4:
    if (ctx->pc == 0x1C71B4u) {
        ctx->pc = 0x1C71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71B0u;
        // 0x1c71b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C71B8u;
        goto label_1c71b8;
    }
    ctx->pc = 0x1C71B0u;
    {
        const bool branch_taken_0x1c71b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C71B0u;
        // 0x1c71b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c71b0) {
            ctx->pc = 0x1C71C4u;
            goto label_1c71c4;
        }
    }
    ctx->pc = 0x1C71B8u;
label_1c71b8:
    // 0x1c71b8: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c71bc:
    // 0x1c71bc: 0x148301de  bne         $a0, $v1, . + 4 + (0x1DE << 2)
label_1c71c0:
    if (ctx->pc == 0x1C71C0u) {
        ctx->pc = 0x1C71C4u;
        goto label_1c71c4;
    }
    ctx->pc = 0x1C71BCu;
    {
        const bool branch_taken_0x1c71bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c71bc) {
            ctx->pc = 0x1C7938u;
            { ctx->pc = 0x1c7938; return; }
        }
    }
    ctx->pc = 0x1C71C4u;
label_1c71c4:
    // 0x1c71c4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1c71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c71c8:
    // 0x1c71c8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1c71c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1c71cc:
    // 0x1c71cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c71d0:
    if (ctx->pc == 0x1C71D0u) {
        ctx->pc = 0x1C71D4u;
        goto label_1c71d4;
    }
    ctx->pc = 0x1C71CCu;
    {
        const bool branch_taken_0x1c71cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c71cc) {
            ctx->pc = 0x1C71E4u;
            goto label_1c71e4;
        }
    }
    ctx->pc = 0x1C71D4u;
label_1c71d4:
    // 0x1c71d4: 0x920302e0  lbu         $v1, 0x2E0($s0)
    ctx->pc = 0x1c71d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1c71d8:
    // 0x1c71d8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1c71d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1c71dc:
    // 0x1c71dc: 0x106001d6  beqz        $v1, . + 4 + (0x1D6 << 2)
label_1c71e0:
    if (ctx->pc == 0x1C71E0u) {
        ctx->pc = 0x1C71E4u;
        goto label_1c71e4;
    }
    ctx->pc = 0x1C71DCu;
    {
        const bool branch_taken_0x1c71dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c71dc) {
            ctx->pc = 0x1C7938u;
            { ctx->pc = 0x1c7938; return; }
        }
    }
    ctx->pc = 0x1C71E4u;
label_1c71e4:
    // 0x1c71e4: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c71e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c71e8:
    // 0x1c71e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c71e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c71ec:
    // 0x1c71ec: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c71ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c71f0:
    // 0x1c71f0: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x1c71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_1c71f4:
    // 0x1c71f4: 0x24844920  addiu       $a0, $a0, 0x4920
    ctx->pc = 0x1c71f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18720));
label_1c71f8:
    // 0x1c71f8: 0x26060250  addiu       $a2, $s0, 0x250
    ctx->pc = 0x1c71f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1c71fc:
    // 0x1c71fc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c71fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c7200:
    // 0x1c7200: 0xc066d7a  jal         func_19B5E8
label_1c7204:
    if (ctx->pc == 0x1C7204u) {
        ctx->pc = 0x1C7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7200u;
        // 0x1c7204: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7208u;
        goto label_1c7208;
    }
    ctx->pc = 0x1C7200u;
    SET_GPR_U32(ctx, 31, 0x1C7208u);
    ctx->pc = 0x1C7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7200u;
    // 0x1c7204: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C7200u, 0x1C7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7208u;
label_1c7208:
    // 0x1c7208: 0xc07f1a0  jal         func_1FC680
label_1c720c:
    if (ctx->pc == 0x1C720Cu) {
        ctx->pc = 0x1C720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7208u;
        // 0x1c720c: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7210u;
        goto label_1c7210;
    }
    ctx->pc = 0x1C7208u;
    SET_GPR_U32(ctx, 31, 0x1C7210u);
    ctx->pc = 0x1C720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7208u;
    // 0x1c720c: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x1C7210u;
label_1c7210:
    // 0x1c7210: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c7210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c7214:
    // 0x1c7214: 0xc4214928  lwc1        $f1, 0x4928($at)
    ctx->pc = 0x1c7214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 18728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7218:
    // 0x1c7218: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c721c:
    // 0x1c721c: 0x0  nop
    ctx->pc = 0x1c721cu;
    // NOP
label_1c7220:
    // 0x1c7220: 0x450001c5  bc1f        . + 4 + (0x1C5 << 2)
label_1c7224:
    if (ctx->pc == 0x1C7224u) {
        ctx->pc = 0x1C7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7220u;
        // 0x1c7224: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7228u;
        goto label_1c7228;
    }
    ctx->pc = 0x1C7220u;
    {
        const bool branch_taken_0x1c7220 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7220u;
        // 0x1c7224: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7220) {
            ctx->pc = 0x1C7938u;
            { ctx->pc = 0x1c7938; return; }
        }
    }
    ctx->pc = 0x1C7228u;
label_1c7228:
    // 0x1c7228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c722c:
    // 0x1c722c: 0x0  nop
    ctx->pc = 0x1c722cu;
    // NOP
label_1c7230:
    // 0x1c7230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7234:
    // 0x1c7234: 0x0  nop
    ctx->pc = 0x1c7234u;
    // NOP
label_1c7238:
    // 0x1c7238: 0x450101bf  bc1t        . + 4 + (0x1BF << 2)
label_1c723c:
    if (ctx->pc == 0x1C723Cu) {
        ctx->pc = 0x1C7240u;
        goto label_1c7240;
    }
    ctx->pc = 0x1C7238u;
    {
        const bool branch_taken_0x1c7238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7238) {
            ctx->pc = 0x1C7938u;
            { ctx->pc = 0x1c7938; return; }
        }
    }
    ctx->pc = 0x1C7240u;
label_1c7240:
    // 0x1c7240: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7244:
    // 0x1c7244: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c7244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c7248:
    // 0x1c7248: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x1c7248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_1c724c:
    // 0x1c724c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c7250:
    // 0x1c7250: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1c7254:
    if (ctx->pc == 0x1C7254u) {
        ctx->pc = 0x1C7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7250u;
        // 0x1c7254: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7258u;
        goto label_1c7258;
    }
    ctx->pc = 0x1C7250u;
    {
        const bool branch_taken_0x1c7250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7250u;
        // 0x1c7254: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7250) {
            ctx->pc = 0x1C7270u;
            goto label_1c7270;
        }
    }
    ctx->pc = 0x1C7258u;
label_1c7258:
    // 0x1c7258: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1c7258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1c725c:
    // 0x1c725c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c7260:
    // 0x1c7260: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c7260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c7264:
    // 0x1c7264: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c7264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c7268:
    // 0x1c7268: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c726c:
    if (ctx->pc == 0x1C726Cu) {
        ctx->pc = 0x1C726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7268u;
        // 0x1c726c: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7270u;
        goto label_1c7270;
    }
    ctx->pc = 0x1C7268u;
    {
        const bool branch_taken_0x1c7268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7268u;
        // 0x1c726c: 0x24510010  addiu       $s1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7268) {
            ctx->pc = 0x1C7284u;
            goto label_1c7284;
        }
    }
    ctx->pc = 0x1C7270u;
label_1c7270:
    // 0x1c7270: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1c7270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1c7274:
    // 0x1c7274: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c7274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c7278:
    // 0x1c7278: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c7278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c727c:
    // 0x1c727c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c727cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c7280:
    // 0x1c7280: 0x24510130  addiu       $s1, $v0, 0x130
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_1c7284:
    // 0x1c7284: 0xc06462c  jal         func_1918B0
label_1c7288:
    if (ctx->pc == 0x1C7288u) {
        ctx->pc = 0x1C7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7284u;
        // 0x1c7288: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C728Cu;
        goto label_1c728c;
    }
    ctx->pc = 0x1C7284u;
    SET_GPR_U32(ctx, 31, 0x1C728Cu);
    ctx->pc = 0x1C7288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7284u;
    // 0x1c7288: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x1C7284u, 0x1C728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C728Cu;
label_1c728c:
    // 0x1c728c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c728cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7290:
    // 0x1c7290: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7294:
    // 0x1c7294: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c7294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c7298:
    // 0x1c7298: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c729c:
    // 0x1c729c: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1c729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1c72a0:
    // 0x1c72a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c72a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c72a4:
    // 0x1c72a4: 0x0  nop
    ctx->pc = 0x1c72a4u;
    // NOP
label_1c72a8:
    // 0x1c72a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c72a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c72ac:
    // 0x1c72ac: 0xc064624  jal         func_191890
label_1c72b0:
    if (ctx->pc == 0x1C72B0u) {
        ctx->pc = 0x1C72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72ACu;
        // 0x1c72b0: 0xe4204940  swc1        $f0, 0x4940($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18752), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72B4u;
        goto label_1c72b4;
    }
    ctx->pc = 0x1C72ACu;
    SET_GPR_U32(ctx, 31, 0x1C72B4u);
    ctx->pc = 0x1C72B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72ACu;
    // 0x1c72b0: 0xe4204940  swc1        $f0, 0x4940($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18752), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x1C72ACu, 0x1C72B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72B4u;
label_1c72b4:
    // 0x1c72b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c72b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c72b8:
    // 0x1c72b8: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x1c72b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
label_1c72bc:
    // 0x1c72bc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c72bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c72c0:
    // 0x1c72c0: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c72c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c72c4:
    // 0x1c72c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c72c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c72c8:
    // 0x1c72c8: 0xac204948  sw          $zero, 0x4948($at)
    ctx->pc = 0x1c72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18760), GPR_U32(ctx, 0));
label_1c72cc:
    // 0x1c72cc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1c72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1c72d0:
    // 0x1c72d0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c72d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c72d4:
    // 0x1c72d4: 0xac22494c  sw          $v0, 0x494C($at)
    ctx->pc = 0x1c72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18764), GPR_U32(ctx, 2));
label_1c72d8:
    // 0x1c72d8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c72d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c72dc:
    // 0x1c72dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c72dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c72e0:
    // 0x1c72e0: 0x0  nop
    ctx->pc = 0x1c72e0u;
    // NOP
label_1c72e4:
    // 0x1c72e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c72e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c72e8:
    // 0x1c72e8: 0xc06462c  jal         func_1918B0
label_1c72ec:
    if (ctx->pc == 0x1C72ECu) {
        ctx->pc = 0x1C72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C72E8u;
        // 0x1c72ec: 0xe4204944  swc1        $f0, 0x4944($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18756), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C72F0u;
        goto label_1c72f0;
    }
    ctx->pc = 0x1C72E8u;
    SET_GPR_U32(ctx, 31, 0x1C72F0u);
    ctx->pc = 0x1C72ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C72E8u;
    // 0x1c72ec: 0xe4204944  swc1        $f0, 0x4944($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18756), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x1C72E8u, 0x1C72F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C72F0u;
label_1c72f0:
    // 0x1c72f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c72f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c72f4:
    // 0x1c72f4: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c72f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c72f8:
    // 0x1c72f8: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c72f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c72fc:
    // 0x1c72fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c72fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c7300:
    // 0x1c7300: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1c7304:
    // 0x1c7304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7308:
    // 0x1c7308: 0x0  nop
    ctx->pc = 0x1c7308u;
    // NOP
label_1c730c:
    // 0x1c730c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c730cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c7310:
    // 0x1c7310: 0xc064624  jal         func_191890
label_1c7314:
    if (ctx->pc == 0x1C7314u) {
        ctx->pc = 0x1C7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7310u;
        // 0x1c7314: 0xe4204930  swc1        $f0, 0x4930($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18736), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7318u;
        goto label_1c7318;
    }
    ctx->pc = 0x1C7310u;
    SET_GPR_U32(ctx, 31, 0x1C7318u);
    ctx->pc = 0x1C7314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7310u;
    // 0x1c7314: 0xe4204930  swc1        $f0, 0x4930($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18736), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x1C7310u, 0x1C7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7318u;
label_1c7318:
    // 0x1c7318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c731c:
    // 0x1c731c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c731cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c7320:
    // 0x1c7320: 0xac204938  sw          $zero, 0x4938($at)
    ctx->pc = 0x1c7320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18744), GPR_U32(ctx, 0));
label_1c7324:
    // 0x1c7324: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c7324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c7328:
    // 0x1c7328: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x1c7328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_1c732c:
    // 0x1c732c: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7330:
    // 0x1c7330: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c7330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c7334:
    // 0x1c7334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7338:
    // 0x1c7338: 0x0  nop
    ctx->pc = 0x1c7338u;
    // NOP
label_1c733c:
    // 0x1c733c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c733cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c7340:
    // 0x1c7340: 0xc07f1a0  jal         func_1FC680
label_1c7344:
    if (ctx->pc == 0x1C7344u) {
        ctx->pc = 0x1C7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7340u;
        // 0x1c7344: 0xe4204934  swc1        $f0, 0x4934($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18740), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7348u;
        goto label_1c7348;
    }
    ctx->pc = 0x1C7340u;
    SET_GPR_U32(ctx, 31, 0x1C7348u);
    ctx->pc = 0x1C7344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7340u;
    // 0x1c7344: 0xe4204934  swc1        $f0, 0x4934($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18740), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x1C7348u;
label_1c7348:
    // 0x1c7348: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c7348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c734c:
    // 0x1c734c: 0xe420493c  swc1        $f0, 0x493C($at)
    ctx->pc = 0x1c734cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 18748), bits); }
label_1c7350:
    // 0x1c7350: 0xc6010324  lwc1        $f1, 0x324($s0)
    ctx->pc = 0x1c7350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7354:
    // 0x1c7354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7358:
    // 0x1c7358: 0x0  nop
    ctx->pc = 0x1c7358u;
    // NOP
label_1c735c:
    // 0x1c735c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c735cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7360:
    // 0x1c7360: 0x0  nop
    ctx->pc = 0x1c7360u;
    // NOP
label_1c7364:
    // 0x1c7364: 0x45010027  bc1t        . + 4 + (0x27 << 2)
label_1c7368:
    if (ctx->pc == 0x1C7368u) {
        ctx->pc = 0x1C736Cu;
        goto label_1c736c;
    }
    ctx->pc = 0x1C7364u;
    {
        const bool branch_taken_0x1c7364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7364) {
            ctx->pc = 0x1C7404u;
            goto label_1c7404;
        }
    }
    ctx->pc = 0x1C736Cu;
label_1c736c:
    // 0x1c736c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7370:
    // 0x1c7370: 0x27b400ec  addiu       $s4, $sp, 0xEC
    ctx->pc = 0x1c7370u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_1c7374:
    // 0x1c7374: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1c7374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1c7378:
    // 0x1c7378: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1c7378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1c737c:
    // 0x1c737c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1c737cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1c7380:
    // 0x1c7380: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1c7380u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1c7384:
    // 0x1c7384: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7388:
    // 0x1c7388: 0xc06465c  jal         func_191970
label_1c738c:
    if (ctx->pc == 0x1C738Cu) {
        ctx->pc = 0x1C738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7388u;
        // 0x1c738c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7390u;
        goto label_1c7390;
    }
    ctx->pc = 0x1C7388u;
    SET_GPR_U32(ctx, 31, 0x1C7390u);
    ctx->pc = 0x1C738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7388u;
    // 0x1c738c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191970u, 0x1C7388u, 0x1C7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7390u;
label_1c7390:
    // 0x1c7390: 0xc066e44  jal         func_19B910
label_1c7394:
    if (ctx->pc == 0x1C7394u) {
        ctx->pc = 0x1C7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7390u;
        // 0x1c7394: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7398u;
        goto label_1c7398;
    }
    ctx->pc = 0x1C7390u;
    SET_GPR_U32(ctx, 31, 0x1C7398u);
    ctx->pc = 0x1C7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7390u;
    // 0x1c7394: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1C7398u;
label_1c7398:
    // 0x1c7398: 0xc60c0320  lwc1        $f12, 0x320($s0)
    ctx->pc = 0x1c7398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c739c:
    // 0x1c739c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c73a0:
    // 0x1c73a0: 0xc066e6c  jal         func_19B9B0
label_1c73a4:
    if (ctx->pc == 0x1C73A4u) {
        ctx->pc = 0x1C73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73A0u;
        // 0x1c73a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73A8u;
        goto label_1c73a8;
    }
    ctx->pc = 0x1C73A0u;
    SET_GPR_U32(ctx, 31, 0x1C73A8u);
    ctx->pc = 0x1C73A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73A0u;
    // 0x1c73a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1C73A8u;
label_1c73a8:
    // 0x1c73a8: 0xc7ac00d0  lwc1        $f12, 0xD0($sp)
    ctx->pc = 0x1c73a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c73ac:
    // 0x1c73ac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c73b0:
    // 0x1c73b0: 0xc066e96  jal         func_19BA58
label_1c73b4:
    if (ctx->pc == 0x1C73B4u) {
        ctx->pc = 0x1C73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73B0u;
        // 0x1c73b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73B8u;
        goto label_1c73b8;
    }
    ctx->pc = 0x1C73B0u;
    SET_GPR_U32(ctx, 31, 0x1C73B8u);
    ctx->pc = 0x1C73B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73B0u;
    // 0x1c73b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C73B8u;
label_1c73b8:
    // 0x1c73b8: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x1c73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c73bc:
    // 0x1c73bc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c73bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c73c0:
    // 0x1c73c0: 0xc066ec0  jal         func_19BB00
label_1c73c4:
    if (ctx->pc == 0x1C73C4u) {
        ctx->pc = 0x1C73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73C0u;
        // 0x1c73c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73C8u;
        goto label_1c73c8;
    }
    ctx->pc = 0x1C73C0u;
    SET_GPR_U32(ctx, 31, 0x1C73C8u);
    ctx->pc = 0x1C73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73C0u;
    // 0x1c73c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C73C8u;
label_1c73c8:
    // 0x1c73c8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1c73cc:
    // 0x1c73cc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1c73ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c73d0:
    // 0x1c73d0: 0xc066d7a  jal         func_19B5E8
label_1c73d4:
    if (ctx->pc == 0x1C73D4u) {
        ctx->pc = 0x1C73D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73D0u;
        // 0x1c73d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73D8u;
        goto label_1c73d8;
    }
    ctx->pc = 0x1C73D0u;
    SET_GPR_U32(ctx, 31, 0x1C73D8u);
    ctx->pc = 0x1C73D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73D0u;
    // 0x1c73d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C73D0u, 0x1C73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73D8u;
label_1c73d8:
    // 0x1c73d8: 0xc60c0324  lwc1        $f12, 0x324($s0)
    ctx->pc = 0x1c73d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c73dc:
    // 0x1c73dc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1c73e0:
    // 0x1c73e0: 0xc066e14  jal         func_19B850
label_1c73e4:
    if (ctx->pc == 0x1C73E4u) {
        ctx->pc = 0x1C73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73E0u;
        // 0x1c73e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73E8u;
        goto label_1c73e8;
    }
    ctx->pc = 0x1C73E0u;
    SET_GPR_U32(ctx, 31, 0x1C73E8u);
    ctx->pc = 0x1C73E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73E0u;
    // 0x1c73e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C73E0u, 0x1C73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73E8u;
label_1c73e8:
    // 0x1c73e8: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1c73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1c73ec:
    // 0x1c73ec: 0x26050310  addiu       $a1, $s0, 0x310
    ctx->pc = 0x1c73ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
label_1c73f0:
    // 0x1c73f0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1c73f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1c73f4:
    // 0x1c73f4: 0xc066e02  jal         func_19B808
label_1c73f8:
    if (ctx->pc == 0x1C73F8u) {
        ctx->pc = 0x1C73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73F4u;
        // 0x1c73f8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C73FCu;
        goto label_1c73fc;
    }
    ctx->pc = 0x1C73F4u;
    SET_GPR_U32(ctx, 31, 0x1C73FCu);
    ctx->pc = 0x1C73F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73F4u;
    // 0x1c73f8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1C73F4u, 0x1C73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73FCu;
label_1c73fc:
    // 0x1c73fc: 0xc6000320  lwc1        $f0, 0x320($s0)
    ctx->pc = 0x1c73fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7400:
    // 0x1c7400: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1c7400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_1c7404:
    // 0x1c7404: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1c7404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1c7408:
    // 0x1c7408: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c7408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c740c:
    // 0x1c740c: 0x24a539b0  addiu       $a1, $a1, 0x39B0
    ctx->pc = 0x1c740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14768));
label_1c7410:
    // 0x1c7410: 0xc066e1a  jal         func_19B868
label_1c7414:
    if (ctx->pc == 0x1C7414u) {
        ctx->pc = 0x1C7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7410u;
        // 0x1c7414: 0x26060250  addiu       $a2, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7418u;
        goto label_1c7418;
    }
    ctx->pc = 0x1C7410u;
    SET_GPR_U32(ctx, 31, 0x1C7418u);
    ctx->pc = 0x1C7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7410u;
    // 0x1c7414: 0x26060250  addiu       $a2, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x1C7410u, 0x1C7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7418u;
label_1c7418:
    // 0x1c7418: 0xc60c02d0  lwc1        $f12, 0x2D0($s0)
    ctx->pc = 0x1c7418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c741c:
    // 0x1c741c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1c741cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1c7420:
    // 0x1c7420: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c7420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c7424:
    // 0x1c7424: 0xc066e14  jal         func_19B850
label_1c7428:
    if (ctx->pc == 0x1C7428u) {
        ctx->pc = 0x1C7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7424u;
        // 0x1c7428: 0x24a539b0  addiu       $a1, $a1, 0x39B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C742Cu;
        goto label_1c742c;
    }
    ctx->pc = 0x1C7424u;
    SET_GPR_U32(ctx, 31, 0x1C742Cu);
    ctx->pc = 0x1C7428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7424u;
    // 0x1c7428: 0x24a539b0  addiu       $a1, $a1, 0x39B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C7424u, 0x1C742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C742Cu;
label_1c742c:
    // 0x1c742c: 0xc60c02d4  lwc1        $f12, 0x2D4($s0)
    ctx->pc = 0x1c742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7430:
    // 0x1c7430: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1c7430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1c7434:
    // 0x1c7434: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c7434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c7438:
    // 0x1c7438: 0xc066e14  jal         func_19B850
label_1c743c:
    if (ctx->pc == 0x1C743Cu) {
        ctx->pc = 0x1C743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7438u;
        // 0x1c743c: 0x24a539c0  addiu       $a1, $a1, 0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7440u;
        goto label_1c7440;
    }
    ctx->pc = 0x1C7438u;
    SET_GPR_U32(ctx, 31, 0x1C7440u);
    ctx->pc = 0x1C743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7438u;
    // 0x1c743c: 0x24a539c0  addiu       $a1, $a1, 0x39C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C7438u, 0x1C7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7440u;
label_1c7440:
    // 0x1c7440: 0xc60c02d8  lwc1        $f12, 0x2D8($s0)
    ctx->pc = 0x1c7440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7444:
    // 0x1c7444: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1c7444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1c7448:
    // 0x1c7448: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c7448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c744c:
    // 0x1c744c: 0xc066e14  jal         func_19B850
label_1c7450:
    if (ctx->pc == 0x1C7450u) {
        ctx->pc = 0x1C7450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C744Cu;
        // 0x1c7450: 0x24a539d0  addiu       $a1, $a1, 0x39D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7454u;
        goto label_1c7454;
    }
    ctx->pc = 0x1C744Cu;
    SET_GPR_U32(ctx, 31, 0x1C7454u);
    ctx->pc = 0x1C7450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C744Cu;
    // 0x1c7450: 0x24a539d0  addiu       $a1, $a1, 0x39D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C744Cu, 0x1C7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7454u;
label_1c7454:
    // 0x1c7454: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7458:
    // 0x1c7458: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c7458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c745c:
    // 0x1c745c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c7460:
    // 0x1c7460: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1c7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1c7464:
    // 0x1c7464: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c7464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7468:
    // 0x1c7468: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c7468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c746c:
    // 0x1c746c: 0xc066d86  jal         func_19B618
label_1c7470:
    if (ctx->pc == 0x1C7470u) {
        ctx->pc = 0x1C7470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C746Cu;
        // 0x1c7470: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7474u;
        goto label_1c7474;
    }
    ctx->pc = 0x1C746Cu;
    SET_GPR_U32(ctx, 31, 0x1C7474u);
    ctx->pc = 0x1C7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C746Cu;
    // 0x1c7470: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x1C746Cu, 0x1C7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7474u;
label_1c7474:
    // 0x1c7474: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7478:
    // 0x1c7478: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c7478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c747c:
    // 0x1c747c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c747cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c7480:
    // 0x1c7480: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c7480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c7484:
    // 0x1c7484: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1c7484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1c7488:
    // 0x1c7488: 0x24844940  addiu       $a0, $a0, 0x4940
    ctx->pc = 0x1c7488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18752));
label_1c748c:
    // 0x1c748c: 0x24a54930  addiu       $a1, $a1, 0x4930
    ctx->pc = 0x1c748cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18736));
label_1c7490:
    // 0x1c7490: 0x26070250  addiu       $a3, $s0, 0x250
    ctx->pc = 0x1c7490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1c7494:
    // 0x1c7494: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c7494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7498:
    // 0x1c7498: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c7498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c749c:
    // 0x1c749c: 0xc067090  jal         func_19C240
label_1c74a0:
    if (ctx->pc == 0x1C74A0u) {
        ctx->pc = 0x1C74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C749Cu;
        // 0x1c74a0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74A4u;
        goto label_1c74a4;
    }
    ctx->pc = 0x1C749Cu;
    SET_GPR_U32(ctx, 31, 0x1C74A4u);
    ctx->pc = 0x1C74A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C749Cu;
    // 0x1c74a0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    { ctx->pc = 0x19c240; return; }
    ctx->pc = 0x1C74A4u;
label_1c74a4:
    // 0x1c74a4: 0x14400124  bnez        $v0, . + 4 + (0x124 << 2)
label_1c74a8:
    if (ctx->pc == 0x1C74A8u) {
        ctx->pc = 0x1C74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74A4u;
        // 0x1c74a8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74ACu;
        goto label_1c74ac;
    }
    ctx->pc = 0x1C74A4u;
    {
        const bool branch_taken_0x1c74a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C74A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74A4u;
        // 0x1c74a8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c74a4) {
            ctx->pc = 0x1C7938u;
            { ctx->pc = 0x1c7938; return; }
        }
    }
    ctx->pc = 0x1C74ACu;
label_1c74ac:
    // 0x1c74ac: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c74acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c74b0:
    // 0x1c74b0: 0xc066d7a  jal         func_19B5E8
label_1c74b4:
    if (ctx->pc == 0x1C74B4u) {
        ctx->pc = 0x1C74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74B0u;
        // 0x1c74b4: 0x26060260  addiu       $a2, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74B8u;
        goto label_1c74b8;
    }
    ctx->pc = 0x1C74B0u;
    SET_GPR_U32(ctx, 31, 0x1C74B8u);
    ctx->pc = 0x1C74B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74B0u;
    // 0x1c74b4: 0x26060260  addiu       $a2, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C74B0u, 0x1C74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74B8u;
label_1c74b8:
    // 0x1c74b8: 0x27b4013c  addiu       $s4, $sp, 0x13C
    ctx->pc = 0x1c74b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_1c74bc:
    // 0x1c74bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c74c0:
    // 0x1c74c0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1c74c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c74c4:
    // 0x1c74c4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1c74c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1c74c8:
    // 0x1c74c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c74c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c74cc:
    // 0x1c74cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c74ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c74d0:
    // 0x1c74d0: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1c74d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1c74d4:
    // 0x1c74d4: 0x0  nop
    ctx->pc = 0x1c74d4u;
    // NOP
label_1c74d8:
    // 0x1c74d8: 0x0  nop
    ctx->pc = 0x1c74d8u;
    // NOP
label_1c74dc:
    // 0x1c74dc: 0xc066e14  jal         func_19B850
label_1c74e0:
    if (ctx->pc == 0x1C74E0u) {
        ctx->pc = 0x1C74E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74DCu;
        // 0x1c74e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74E4u;
        goto label_1c74e4;
    }
    ctx->pc = 0x1C74DCu;
    SET_GPR_U32(ctx, 31, 0x1C74E4u);
    ctx->pc = 0x1C74E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74DCu;
    // 0x1c74e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C74DCu, 0x1C74E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C74E4u;
label_1c74e4:
    // 0x1c74e4: 0xc07f198  jal         func_1FC660
label_1c74e8:
    if (ctx->pc == 0x1C74E8u) {
        ctx->pc = 0x1C74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74E4u;
        // 0x1c74e8: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74ECu;
        goto label_1c74ec;
    }
    ctx->pc = 0x1C74E4u;
    SET_GPR_U32(ctx, 31, 0x1C74ECu);
    ctx->pc = 0x1C74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74E4u;
    // 0x1c74e8: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1C74ECu;
label_1c74ec:
    // 0x1c74ec: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c74ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c74f0:
    // 0x1c74f0: 0xc07f190  jal         func_1FC640
label_1c74f4:
    if (ctx->pc == 0x1C74F4u) {
        ctx->pc = 0x1C74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C74F0u;
        // 0x1c74f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C74F8u;
        goto label_1c74f8;
    }
    ctx->pc = 0x1C74F0u;
    SET_GPR_U32(ctx, 31, 0x1C74F8u);
    ctx->pc = 0x1C74F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C74F0u;
    // 0x1c74f4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1C74F8u;
label_1c74f8:
    // 0x1c74f8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1c74f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1c74fc:
    // 0x1c74fc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c7500:
    // 0x1c7500: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1c7500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c7504:
    // 0x1c7504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7508:
    // 0x1c7508: 0x0  nop
    ctx->pc = 0x1c7508u;
    // NOP
label_1c750c:
    // 0x1c750c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c750cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7510:
    // 0x1c7510: 0x0  nop
    ctx->pc = 0x1c7510u;
    // NOP
label_1c7514:
    // 0x1c7514: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1c7518:
    if (ctx->pc == 0x1C7518u) {
        ctx->pc = 0x1C7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7514u;
        // 0x1c7518: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C751Cu;
        goto label_1c751c;
    }
    ctx->pc = 0x1C7514u;
    {
        const bool branch_taken_0x1c7514 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7514u;
        // 0x1c7518: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7514) {
            ctx->pc = 0x1C7524u;
            goto label_1c7524;
        }
    }
    ctx->pc = 0x1C751Cu;
label_1c751c:
    // 0x1c751c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c7520:
    if (ctx->pc == 0x1C7520u) {
        ctx->pc = 0x1C7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C751Cu;
        // 0x1c7520: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7524u;
        goto label_1c7524;
    }
    ctx->pc = 0x1C751Cu;
    {
        const bool branch_taken_0x1c751c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C751Cu;
        // 0x1c7520: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c751c) {
            ctx->pc = 0x1C7540u;
            goto label_1c7540;
        }
    }
    ctx->pc = 0x1C7524u;
label_1c7524:
    // 0x1c7524: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7524u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7528:
    // 0x1c7528: 0x0  nop
    ctx->pc = 0x1c7528u;
    // NOP
label_1c752c:
    // 0x1c752c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c752cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7530:
    // 0x1c7530: 0x0  nop
    ctx->pc = 0x1c7530u;
    // NOP
label_1c7534:
    // 0x1c7534: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c7538:
    if (ctx->pc == 0x1C7538u) {
        ctx->pc = 0x1C753Cu;
        goto label_1c753c;
    }
    ctx->pc = 0x1C7534u;
    {
        const bool branch_taken_0x1c7534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7534) {
            ctx->pc = 0x1C7540u;
            goto label_1c7540;
        }
    }
    ctx->pc = 0x1C753Cu;
label_1c753c:
    // 0x1c753c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1c753cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1c7540:
    // 0x1c7540: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1c7540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7544:
    // 0x1c7544: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c7544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1c7548:
    // 0x1c7548: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c754c:
    // 0x1c754c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7550:
    // 0x1c7550: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1c7550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1c7554:
    // 0x1c7554: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7558:
    // 0x1c7558: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1c7558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1c755c:
    // 0x1c755c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1c755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7560:
    // 0x1c7560: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7564:
    // 0x1c7564: 0xc066e34  jal         func_19B8D0
label_1c7568:
    if (ctx->pc == 0x1C7568u) {
        ctx->pc = 0x1C7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7564u;
        // 0x1c7568: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C756Cu;
        goto label_1c756c;
    }
    ctx->pc = 0x1C7564u;
    SET_GPR_U32(ctx, 31, 0x1C756Cu);
    ctx->pc = 0x1C7568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7564u;
    // 0x1c7568: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8D0u, 0x1C7564u, 0x1C756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C756Cu;
label_1c756c:
    // 0x1c756c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1c7570:
    // 0x1c7570: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c7570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c7574:
    // 0x1c7574: 0xc066d7a  jal         func_19B5E8
label_1c7578:
    if (ctx->pc == 0x1C7578u) {
        ctx->pc = 0x1C7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7574u;
        // 0x1c7578: 0x26060290  addiu       $a2, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C757Cu;
        goto label_1c757c;
    }
    ctx->pc = 0x1C7574u;
    SET_GPR_U32(ctx, 31, 0x1C757Cu);
    ctx->pc = 0x1C7578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7574u;
    // 0x1c7578: 0x26060290  addiu       $a2, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C7574u, 0x1C757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C757Cu;
label_1c757c:
    // 0x1c757c: 0x27b4014c  addiu       $s4, $sp, 0x14C
    ctx->pc = 0x1c757cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_1c7580:
    // 0x1c7580: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7584:
    // 0x1c7584: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1c7584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7588:
    // 0x1c7588: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1c758c:
    // 0x1c758c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c758cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7590:
    // 0x1c7590: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c7590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7594:
    // 0x1c7594: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c7594u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1c7598:
    // 0x1c7598: 0x0  nop
    ctx->pc = 0x1c7598u;
    // NOP
label_1c759c:
    // 0x1c759c: 0x0  nop
    ctx->pc = 0x1c759cu;
    // NOP
label_1c75a0:
    // 0x1c75a0: 0xc066e14  jal         func_19B850
label_1c75a4:
    if (ctx->pc == 0x1C75A4u) {
        ctx->pc = 0x1C75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75A0u;
        // 0x1c75a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C75A8u;
        goto label_1c75a8;
    }
    ctx->pc = 0x1C75A0u;
    SET_GPR_U32(ctx, 31, 0x1C75A8u);
    ctx->pc = 0x1C75A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75A0u;
    // 0x1c75a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C75A0u, 0x1C75A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75A8u;
label_1c75a8:
    // 0x1c75a8: 0xc07f198  jal         func_1FC660
label_1c75ac:
    if (ctx->pc == 0x1C75ACu) {
        ctx->pc = 0x1C75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75A8u;
        // 0x1c75ac: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C75B0u;
        goto label_1c75b0;
    }
    ctx->pc = 0x1C75A8u;
    SET_GPR_U32(ctx, 31, 0x1C75B0u);
    ctx->pc = 0x1C75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75A8u;
    // 0x1c75ac: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1C75B0u;
label_1c75b0:
    // 0x1c75b0: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c75b4:
    // 0x1c75b4: 0xc07f190  jal         func_1FC640
label_1c75b8:
    if (ctx->pc == 0x1C75B8u) {
        ctx->pc = 0x1C75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75B4u;
        // 0x1c75b8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C75BCu;
        goto label_1c75bc;
    }
    ctx->pc = 0x1C75B4u;
    SET_GPR_U32(ctx, 31, 0x1C75BCu);
    ctx->pc = 0x1C75B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C75B4u;
    // 0x1c75b8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1C75BCu;
label_1c75bc:
    // 0x1c75bc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c75bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1c75c0:
    // 0x1c75c0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c75c4:
    // 0x1c75c4: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1c75c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1c75c8:
    // 0x1c75c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c75c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c75cc:
    // 0x1c75cc: 0x0  nop
    ctx->pc = 0x1c75ccu;
    // NOP
label_1c75d0:
    // 0x1c75d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c75d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c75d4:
    // 0x1c75d4: 0x0  nop
    ctx->pc = 0x1c75d4u;
    // NOP
label_1c75d8:
    // 0x1c75d8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1c75dc:
    if (ctx->pc == 0x1C75DCu) {
        ctx->pc = 0x1C75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75D8u;
        // 0x1c75dc: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C75E0u;
        goto label_1c75e0;
    }
    ctx->pc = 0x1C75D8u;
    {
        const bool branch_taken_0x1c75d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75D8u;
        // 0x1c75dc: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75d8) {
            ctx->pc = 0x1C75E8u;
            goto label_1c75e8;
        }
    }
    ctx->pc = 0x1C75E0u;
label_1c75e0:
    // 0x1c75e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c75e4:
    if (ctx->pc == 0x1C75E4u) {
        ctx->pc = 0x1C75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75E0u;
        // 0x1c75e4: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C75E8u;
        goto label_1c75e8;
    }
    ctx->pc = 0x1C75E0u;
    {
        const bool branch_taken_0x1c75e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75E0u;
        // 0x1c75e4: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75e0) {
            ctx->pc = 0x1C7604u;
            goto label_1c7604;
        }
    }
    ctx->pc = 0x1C75E8u;
label_1c75e8:
    // 0x1c75e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c75e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c75ec:
    // 0x1c75ec: 0x0  nop
    ctx->pc = 0x1c75ecu;
    // NOP
label_1c75f0:
    // 0x1c75f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c75f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c75f4:
    // 0x1c75f4: 0x0  nop
    ctx->pc = 0x1c75f4u;
    // NOP
label_1c75f8:
    // 0x1c75f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c75fc:
    if (ctx->pc == 0x1C75FCu) {
        ctx->pc = 0x1C7600u;
        goto label_1c7600;
    }
    ctx->pc = 0x1C75F8u;
    {
        const bool branch_taken_0x1c75f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c75f8) {
            ctx->pc = 0x1C7604u;
            goto label_1c7604;
        }
    }
    ctx->pc = 0x1C7600u;
label_1c7600:
    // 0x1c7600: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1c7600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1c7604:
    // 0x1c7604: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x1c7604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7608:
    // 0x1c7608: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c7608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1c760c:
    // 0x1c760c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c760cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7610:
    // 0x1c7610: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c7614:
    // 0x1c7614: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1c7614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1c7618:
    // 0x1c7618: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c761c:
    // 0x1c761c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1c761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1c7620:
    // 0x1c7620: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1c7620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7624:
    // 0x1c7624: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7628:
    // 0x1c7628: 0xc066e34  jal         func_19B8D0
label_1c762c:
    if (ctx->pc == 0x1C762Cu) {
        ctx->pc = 0x1C762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7628u;
        // 0x1c762c: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7630u;
        goto label_1c7630;
    }
    ctx->pc = 0x1C7628u;
    SET_GPR_U32(ctx, 31, 0x1C7630u);
    ctx->pc = 0x1C762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7628u;
    // 0x1c762c: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8D0u, 0x1C7628u, 0x1C7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7630u;
label_1c7630:
    // 0x1c7630: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1c7630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1c7634:
    // 0x1c7634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c7638:
    // 0x1c7638: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1c763c:
    if (ctx->pc == 0x1C763Cu) {
        ctx->pc = 0x1C7640u;
        goto label_1c7640;
    }
    ctx->pc = 0x1C7638u;
    {
        const bool branch_taken_0x1c7638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7638) {
            ctx->pc = 0x1C76D4u;
            goto label_1c76d4;
        }
    }
    ctx->pc = 0x1C7640u;
label_1c7640:
    // 0x1c7640: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x1c7640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c7644:
    // 0x1c7644: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1c7648:
    if (ctx->pc == 0x1C7648u) {
        ctx->pc = 0x1C7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7644u;
        // 0x1c7648: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C764Cu;
        goto label_1c764c;
    }
    ctx->pc = 0x1C7644u;
    {
        const bool branch_taken_0x1c7644 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7644u;
        // 0x1c7648: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7644) {
            ctx->pc = 0x1C7658u;
            goto label_1c7658;
        }
    }
    ctx->pc = 0x1C764Cu;
label_1c764c:
    // 0x1c764c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c764cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7650:
    // 0x1c7650: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c7654:
    if (ctx->pc == 0x1C7654u) {
        ctx->pc = 0x1C7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7650u;
        // 0x1c7654: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7658u;
        goto label_1c7658;
    }
    ctx->pc = 0x1C7650u;
    {
        const bool branch_taken_0x1c7650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7650u;
        // 0x1c7654: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7650) {
            ctx->pc = 0x1C7670u;
            goto label_1c7670;
        }
    }
    ctx->pc = 0x1C7658u;
label_1c7658:
    // 0x1c7658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c765c:
    // 0x1c765c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c765cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c7660:
    // 0x1c7660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7664:
    // 0x1c7664: 0x0  nop
    ctx->pc = 0x1c7664u;
    // NOP
label_1c7668:
    // 0x1c7668: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1c7668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c766c:
    // 0x1c766c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c766cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c7670:
    // 0x1c7670: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x1c7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7674:
    // 0x1c7674: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1c7674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_1c7678:
    // 0x1c7678: 0x3443806e  ori         $v1, $v0, 0x806E
    ctx->pc = 0x1c7678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32878);
label_1c767c:
    // 0x1c767c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1c7680:
    // 0x1c7680: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7684:
    // 0x1c7684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7688:
    // 0x1c7688: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c7688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c768c:
    // 0x1c768c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c768cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1c7690:
    // 0x1c7690: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c7694:
    // 0x1c7694: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c7694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7698:
    // 0x1c7698: 0x0  nop
    ctx->pc = 0x1c7698u;
    // NOP
label_1c769c:
    // 0x1c769c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1c76a0:
    if (ctx->pc == 0x1C76A0u) {
        ctx->pc = 0x1C76A4u;
        goto label_1c76a4;
    }
    ctx->pc = 0x1C769Cu;
    {
        const bool branch_taken_0x1c769c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c769c) {
            ctx->pc = 0x1C76B4u;
            goto label_1c76b4;
        }
    }
    ctx->pc = 0x1C76A4u;
label_1c76a4:
    // 0x1c76a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c76a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c76a8:
    // 0x1c76a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c76a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c76ac:
    // 0x1c76ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c76b0:
    if (ctx->pc == 0x1C76B0u) {
        ctx->pc = 0x1C76B4u;
        goto label_1c76b4;
    }
    ctx->pc = 0x1C76ACu;
    {
        const bool branch_taken_0x1c76ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c76ac) {
            ctx->pc = 0x1C76CCu;
            goto label_1c76cc;
        }
    }
    ctx->pc = 0x1C76B4u;
label_1c76b4:
    // 0x1c76b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c76b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c76b8:
    // 0x1c76b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1c76bc:
    // 0x1c76bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c76bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c76c0:
    // 0x1c76c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c76c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c76c4:
    // 0x1c76c4: 0x0  nop
    ctx->pc = 0x1c76c4u;
    // NOP
label_1c76c8:
    // 0x1c76c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c76c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c76cc:
    // 0x1c76cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c76d0:
    if (ctx->pc == 0x1C76D0u) {
        ctx->pc = 0x1C76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76CCu;
        // 0x1c76d0: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C76D4u;
        goto label_1c76d4;
    }
    ctx->pc = 0x1C76CCu;
    {
        const bool branch_taken_0x1c76cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76CCu;
        // 0x1c76d0: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76cc) {
            ctx->pc = 0x1C76E0u;
            goto label_1c76e0;
        }
    }
    ctx->pc = 0x1C76D4u;
label_1c76d4:
    // 0x1c76d4: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1c76d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1c76d8:
    // 0x1c76d8: 0x0  nop
    ctx->pc = 0x1c76d8u;
    // NOP
label_1c76dc:
    // 0x1c76dc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c76dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c76e0:
    // 0x1c76e0: 0x27aa00b8  addiu       $t2, $sp, 0xB8
    ctx->pc = 0x1c76e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1c76e4:
    // 0x1c76e4: 0x27a300bc  addiu       $v1, $sp, 0xBC
    ctx->pc = 0x1c76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_1c76e8:
    // 0x1c76e8: 0x27ab00b4  addiu       $t3, $sp, 0xB4
    ctx->pc = 0x1c76e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1c76ec:
    // 0x1c76ec: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1c76ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1c76f0:
    // 0x1c76f0: 0x26e00  sll         $t5, $v0, 24
    ctx->pc = 0x1c76f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c76f4:
    // 0x1c76f4: 0x95580000  lhu         $t8, 0x0($t2)
    ctx->pc = 0x1c76f4u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_1c76f8:
    // 0x1c76f8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1c76f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_1c76fc:
    // 0x1c76fc: 0x85740000  lh          $s4, 0x0($t3)
    ctx->pc = 0x1c76fcu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_1c7700:
    // 0x1c7700: 0x3459ffff  ori         $t9, $v0, 0xFFFF
    ctx->pc = 0x1c7700u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c7704:
    // 0x1c7704: 0x87ae00b0  lh          $t6, 0xB0($sp)
    ctx->pc = 0x1c7704u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_1c7708:
    // 0x1c7708: 0x27ac00c4  addiu       $t4, $sp, 0xC4
    ctx->pc = 0x1c7708u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1c770c:
    // 0x1c770c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7710:
    // 0x1c7710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c7714:
    // 0x1c7714: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c7714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c7718:
    // 0x1c7718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c771c:
    // 0x1c771c: 0x57e00  sll         $t7, $a1, 24
    ctx->pc = 0x1c771cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_1c7720:
    // 0x1c7720: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7724:
    // 0x1c7724: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c7724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c7728:
    // 0x1c7728: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c772c:
    // 0x1c772c: 0x24a54b50  addiu       $a1, $a1, 0x4B50
    ctx->pc = 0x1c772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
label_1c7730:
    // 0x1c7730: 0xa64e0020  sh          $t6, 0x20($s2)
    ctx->pc = 0x1c7730u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 14));
label_1c7734:
    // 0x1c7734: 0xa6540022  sh          $s4, 0x22($s2)
    ctx->pc = 0x1c7734u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 34), (uint16_t)GPR_U32(ctx, 20));
label_1c7738:
    // 0x1c7738: 0xae580024  sw          $t8, 0x24($s2)
    ctx->pc = 0x1c7738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 24));
label_1c773c:
    // 0x1c773c: 0x8e4e0024  lw          $t6, 0x24($s2)
    ctx->pc = 0x1c773cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1c7740:
    // 0x1c7740: 0x1d97024  and         $t6, $t6, $t9
    ctx->pc = 0x1c7740u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 25));
label_1c7744:
    // 0x1c7744: 0xae4e0024  sw          $t6, 0x24($s2)
    ctx->pc = 0x1c7744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 14));
label_1c7748:
    // 0x1c7748: 0x8e4e0024  lw          $t6, 0x24($s2)
    ctx->pc = 0x1c7748u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1c774c:
    // 0x1c774c: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x1c774cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_1c7750:
    // 0x1c7750: 0xae4e0024  sw          $t6, 0x24($s2)
    ctx->pc = 0x1c7750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 14));
label_1c7754:
    // 0x1c7754: 0x906f0000  lbu         $t7, 0x0($v1)
    ctx->pc = 0x1c7754u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7758:
    // 0x1c7758: 0x95580000  lhu         $t8, 0x0($t2)
    ctx->pc = 0x1c7758u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_1c775c:
    // 0x1c775c: 0x85940000  lh          $s4, 0x0($t4)
    ctx->pc = 0x1c775cu;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_1c7760:
    // 0x1c7760: 0x87ae00b0  lh          $t6, 0xB0($sp)
    ctx->pc = 0x1c7760u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_1c7764:
    // 0x1c7764: 0xf7e00  sll         $t7, $t7, 24
    ctx->pc = 0x1c7764u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
label_1c7768:
    // 0x1c7768: 0xa64e0038  sh          $t6, 0x38($s2)
    ctx->pc = 0x1c7768u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 14));
label_1c776c:
    // 0x1c776c: 0xa654003a  sh          $s4, 0x3A($s2)
    ctx->pc = 0x1c776cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 58), (uint16_t)GPR_U32(ctx, 20));
label_1c7770:
    // 0x1c7770: 0xae58003c  sw          $t8, 0x3C($s2)
    ctx->pc = 0x1c7770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 24));
label_1c7774:
    // 0x1c7774: 0x8e4e003c  lw          $t6, 0x3C($s2)
    ctx->pc = 0x1c7774u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1c7778:
    // 0x1c7778: 0xe723c  dsll32      $t6, $t6, 8
    ctx->pc = 0x1c7778u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 8));
label_1c777c:
    // 0x1c777c: 0xe723e  dsrl32      $t6, $t6, 8
    ctx->pc = 0x1c777cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 8));
label_1c7780:
    // 0x1c7780: 0xae4e003c  sw          $t6, 0x3C($s2)
    ctx->pc = 0x1c7780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 14));
label_1c7784:
    // 0x1c7784: 0x8e4e003c  lw          $t6, 0x3C($s2)
    ctx->pc = 0x1c7784u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1c7788:
    // 0x1c7788: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x1c7788u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
label_1c778c:
    // 0x1c778c: 0xae4e003c  sw          $t6, 0x3C($s2)
    ctx->pc = 0x1c778cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 14));
label_1c7790:
    // 0x1c7790: 0x906f0000  lbu         $t7, 0x0($v1)
    ctx->pc = 0x1c7790u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7794:
    // 0x1c7794: 0x954e0000  lhu         $t6, 0x0($t2)
    ctx->pc = 0x1c7794u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_1c7798:
    // 0x1c7798: 0x856b0000  lh          $t3, 0x0($t3)
    ctx->pc = 0x1c7798u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_1c779c:
    // 0x1c779c: 0x87a300c0  lh          $v1, 0xC0($sp)
    ctx->pc = 0x1c779cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_1c77a0:
    // 0x1c77a0: 0xf5600  sll         $t2, $t7, 24
    ctx->pc = 0x1c77a0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
label_1c77a4:
    // 0x1c77a4: 0xa6430050  sh          $v1, 0x50($s2)
    ctx->pc = 0x1c77a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 80), (uint16_t)GPR_U32(ctx, 3));
label_1c77a8:
    // 0x1c77a8: 0xa64b0052  sh          $t3, 0x52($s2)
    ctx->pc = 0x1c77a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 82), (uint16_t)GPR_U32(ctx, 11));
label_1c77ac:
    // 0x1c77ac: 0xae4e0054  sw          $t6, 0x54($s2)
    ctx->pc = 0x1c77acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 14));
label_1c77b0:
    // 0x1c77b0: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1c77b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1c77b4:
    // 0x1c77b4: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c77b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c77b8:
    // 0x1c77b8: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c77b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c77bc:
    // 0x1c77bc: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1c77bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1c77c0:
    // 0x1c77c0: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x1c77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_1c77c4:
    // 0x1c77c4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1c77c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_1c77c8:
    // 0x1c77c8: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1c77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_1c77cc:
    // 0x1c77cc: 0x858b0000  lh          $t3, 0x0($t4)
    ctx->pc = 0x1c77ccu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_1c77d0:
    // 0x1c77d0: 0x93aa00cc  lbu         $t2, 0xCC($sp)
    ctx->pc = 0x1c77d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 204)));
label_1c77d4:
    // 0x1c77d4: 0x87a300c0  lh          $v1, 0xC0($sp)
    ctx->pc = 0x1c77d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_1c77d8:
    // 0x1c77d8: 0x97ac00c8  lhu         $t4, 0xC8($sp)
    ctx->pc = 0x1c77d8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_1c77dc:
    // 0x1c77dc: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c77dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_1c77e0:
    // 0x1c77e0: 0xa6430068  sh          $v1, 0x68($s2)
    ctx->pc = 0x1c77e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 104), (uint16_t)GPR_U32(ctx, 3));
label_1c77e4:
    // 0x1c77e4: 0xa64b006a  sh          $t3, 0x6A($s2)
    ctx->pc = 0x1c77e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 106), (uint16_t)GPR_U32(ctx, 11));
label_1c77e8:
    // 0x1c77e8: 0xae4c006c  sw          $t4, 0x6C($s2)
    ctx->pc = 0x1c77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 12));
label_1c77ec:
    // 0x1c77ec: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x1c77ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_1c77f0:
    // 0x1c77f0: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c77f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c77f4:
    // 0x1c77f4: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c77f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c77f8:
    // 0x1c77f8: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x1c77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
label_1c77fc:
    // 0x1c77fc: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x1c77fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_1c7800:
    // 0x1c7800: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1c7800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_1c7804:
    // 0x1c7804: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x1c7804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
label_1c7808:
    // 0x1c7808: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1c7808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1c780c:
    // 0x1c780c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c780cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c7810:
    // 0x1c7810: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c7810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c7814:
    // 0x1c7814: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1c7814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_1c7818:
    // 0x1c7818: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1c7818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_1c781c:
    // 0x1c781c: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x1c781cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_1c7820:
    // 0x1c7820: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x1c7820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_1c7824:
    // 0x1c7824: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1c7824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_1c7828:
    // 0x1c7828: 0xc60002b0  lwc1        $f0, 0x2B0($s0)
    ctx->pc = 0x1c7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c782c:
    // 0x1c782c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c782cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->pc = 0x1c7830u;
    return;
}

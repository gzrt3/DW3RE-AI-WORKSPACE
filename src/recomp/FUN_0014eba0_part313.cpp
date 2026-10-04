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


void FUN_0014eba0_part313(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1e7358u: goto label_1e7358;
        case 0x1e735cu: goto label_1e735c;
        case 0x1e7360u: goto label_1e7360;
        case 0x1e7364u: goto label_1e7364;
        case 0x1e7368u: goto label_1e7368;
        case 0x1e736cu: goto label_1e736c;
        case 0x1e7370u: goto label_1e7370;
        case 0x1e7374u: goto label_1e7374;
        case 0x1e7378u: goto label_1e7378;
        case 0x1e737cu: goto label_1e737c;
        case 0x1e7380u: goto label_1e7380;
        case 0x1e7384u: goto label_1e7384;
        case 0x1e7388u: goto label_1e7388;
        case 0x1e738cu: goto label_1e738c;
        case 0x1e7390u: goto label_1e7390;
        case 0x1e7394u: goto label_1e7394;
        case 0x1e7398u: goto label_1e7398;
        case 0x1e739cu: goto label_1e739c;
        case 0x1e73a0u: goto label_1e73a0;
        case 0x1e73a4u: goto label_1e73a4;
        case 0x1e73a8u: goto label_1e73a8;
        case 0x1e73acu: goto label_1e73ac;
        case 0x1e73b0u: goto label_1e73b0;
        case 0x1e73b4u: goto label_1e73b4;
        case 0x1e73b8u: goto label_1e73b8;
        case 0x1e73bcu: goto label_1e73bc;
        case 0x1e73c0u: goto label_1e73c0;
        case 0x1e73c4u: goto label_1e73c4;
        case 0x1e73c8u: goto label_1e73c8;
        case 0x1e73ccu: goto label_1e73cc;
        case 0x1e73d0u: goto label_1e73d0;
        case 0x1e73d4u: goto label_1e73d4;
        case 0x1e73d8u: goto label_1e73d8;
        case 0x1e73dcu: goto label_1e73dc;
        case 0x1e73e0u: goto label_1e73e0;
        case 0x1e73e4u: goto label_1e73e4;
        case 0x1e73e8u: goto label_1e73e8;
        case 0x1e73ecu: goto label_1e73ec;
        case 0x1e73f0u: goto label_1e73f0;
        case 0x1e73f4u: goto label_1e73f4;
        case 0x1e73f8u: goto label_1e73f8;
        case 0x1e73fcu: goto label_1e73fc;
        case 0x1e7400u: goto label_1e7400;
        case 0x1e7404u: goto label_1e7404;
        case 0x1e7408u: goto label_1e7408;
        case 0x1e740cu: goto label_1e740c;
        case 0x1e7410u: goto label_1e7410;
        case 0x1e7414u: goto label_1e7414;
        case 0x1e7418u: goto label_1e7418;
        case 0x1e741cu: goto label_1e741c;
        case 0x1e7420u: goto label_1e7420;
        case 0x1e7424u: goto label_1e7424;
        case 0x1e7428u: goto label_1e7428;
        case 0x1e742cu: goto label_1e742c;
        case 0x1e7430u: goto label_1e7430;
        case 0x1e7434u: goto label_1e7434;
        case 0x1e7438u: goto label_1e7438;
        case 0x1e743cu: goto label_1e743c;
        case 0x1e7440u: goto label_1e7440;
        case 0x1e7444u: goto label_1e7444;
        case 0x1e7448u: goto label_1e7448;
        case 0x1e744cu: goto label_1e744c;
        case 0x1e7450u: goto label_1e7450;
        case 0x1e7454u: goto label_1e7454;
        case 0x1e7458u: goto label_1e7458;
        case 0x1e745cu: goto label_1e745c;
        case 0x1e7460u: goto label_1e7460;
        case 0x1e7464u: goto label_1e7464;
        case 0x1e7468u: goto label_1e7468;
        case 0x1e746cu: goto label_1e746c;
        case 0x1e7470u: goto label_1e7470;
        case 0x1e7474u: goto label_1e7474;
        case 0x1e7478u: goto label_1e7478;
        case 0x1e747cu: goto label_1e747c;
        case 0x1e7480u: goto label_1e7480;
        case 0x1e7484u: goto label_1e7484;
        case 0x1e7488u: goto label_1e7488;
        case 0x1e748cu: goto label_1e748c;
        case 0x1e7490u: goto label_1e7490;
        case 0x1e7494u: goto label_1e7494;
        case 0x1e7498u: goto label_1e7498;
        case 0x1e749cu: goto label_1e749c;
        case 0x1e74a0u: goto label_1e74a0;
        case 0x1e74a4u: goto label_1e74a4;
        case 0x1e74a8u: goto label_1e74a8;
        case 0x1e74acu: goto label_1e74ac;
        case 0x1e74b0u: goto label_1e74b0;
        case 0x1e74b4u: goto label_1e74b4;
        case 0x1e74b8u: goto label_1e74b8;
        case 0x1e74bcu: goto label_1e74bc;
        case 0x1e74c0u: goto label_1e74c0;
        case 0x1e74c4u: goto label_1e74c4;
        case 0x1e74c8u: goto label_1e74c8;
        case 0x1e74ccu: goto label_1e74cc;
        case 0x1e74d0u: goto label_1e74d0;
        case 0x1e74d4u: goto label_1e74d4;
        case 0x1e74d8u: goto label_1e74d8;
        case 0x1e74dcu: goto label_1e74dc;
        case 0x1e74e0u: goto label_1e74e0;
        case 0x1e74e4u: goto label_1e74e4;
        case 0x1e74e8u: goto label_1e74e8;
        case 0x1e74ecu: goto label_1e74ec;
        case 0x1e74f0u: goto label_1e74f0;
        case 0x1e74f4u: goto label_1e74f4;
        case 0x1e74f8u: goto label_1e74f8;
        case 0x1e74fcu: goto label_1e74fc;
        case 0x1e7500u: goto label_1e7500;
        case 0x1e7504u: goto label_1e7504;
        case 0x1e7508u: goto label_1e7508;
        case 0x1e750cu: goto label_1e750c;
        case 0x1e7510u: goto label_1e7510;
        case 0x1e7514u: goto label_1e7514;
        case 0x1e7518u: goto label_1e7518;
        case 0x1e751cu: goto label_1e751c;
        case 0x1e7520u: goto label_1e7520;
        case 0x1e7524u: goto label_1e7524;
        case 0x1e7528u: goto label_1e7528;
        case 0x1e752cu: goto label_1e752c;
        case 0x1e7530u: goto label_1e7530;
        case 0x1e7534u: goto label_1e7534;
        case 0x1e7538u: goto label_1e7538;
        case 0x1e753cu: goto label_1e753c;
        case 0x1e7540u: goto label_1e7540;
        case 0x1e7544u: goto label_1e7544;
        case 0x1e7548u: goto label_1e7548;
        case 0x1e754cu: goto label_1e754c;
        case 0x1e7550u: goto label_1e7550;
        case 0x1e7554u: goto label_1e7554;
        case 0x1e7558u: goto label_1e7558;
        case 0x1e755cu: goto label_1e755c;
        case 0x1e7560u: goto label_1e7560;
        case 0x1e7564u: goto label_1e7564;
        case 0x1e7568u: goto label_1e7568;
        case 0x1e756cu: goto label_1e756c;
        case 0x1e7570u: goto label_1e7570;
        case 0x1e7574u: goto label_1e7574;
        case 0x1e7578u: goto label_1e7578;
        case 0x1e757cu: goto label_1e757c;
        case 0x1e7580u: goto label_1e7580;
        case 0x1e7584u: goto label_1e7584;
        case 0x1e7588u: goto label_1e7588;
        case 0x1e758cu: goto label_1e758c;
        case 0x1e7590u: goto label_1e7590;
        case 0x1e7594u: goto label_1e7594;
        case 0x1e7598u: goto label_1e7598;
        case 0x1e759cu: goto label_1e759c;
        case 0x1e75a0u: goto label_1e75a0;
        case 0x1e75a4u: goto label_1e75a4;
        case 0x1e75a8u: goto label_1e75a8;
        case 0x1e75acu: goto label_1e75ac;
        case 0x1e75b0u: goto label_1e75b0;
        case 0x1e75b4u: goto label_1e75b4;
        case 0x1e75b8u: goto label_1e75b8;
        case 0x1e75bcu: goto label_1e75bc;
        case 0x1e75c0u: goto label_1e75c0;
        case 0x1e75c4u: goto label_1e75c4;
        case 0x1e75c8u: goto label_1e75c8;
        case 0x1e75ccu: goto label_1e75cc;
        case 0x1e75d0u: goto label_1e75d0;
        case 0x1e75d4u: goto label_1e75d4;
        case 0x1e75d8u: goto label_1e75d8;
        case 0x1e75dcu: goto label_1e75dc;
        case 0x1e75e0u: goto label_1e75e0;
        case 0x1e75e4u: goto label_1e75e4;
        case 0x1e75e8u: goto label_1e75e8;
        case 0x1e75ecu: goto label_1e75ec;
        case 0x1e75f0u: goto label_1e75f0;
        case 0x1e75f4u: goto label_1e75f4;
        case 0x1e75f8u: goto label_1e75f8;
        case 0x1e75fcu: goto label_1e75fc;
        case 0x1e7600u: goto label_1e7600;
        case 0x1e7604u: goto label_1e7604;
        case 0x1e7608u: goto label_1e7608;
        case 0x1e760cu: goto label_1e760c;
        case 0x1e7610u: goto label_1e7610;
        case 0x1e7614u: goto label_1e7614;
        case 0x1e7618u: goto label_1e7618;
        case 0x1e761cu: goto label_1e761c;
        case 0x1e7620u: goto label_1e7620;
        case 0x1e7624u: goto label_1e7624;
        case 0x1e7628u: goto label_1e7628;
        case 0x1e762cu: goto label_1e762c;
        case 0x1e7630u: goto label_1e7630;
        case 0x1e7634u: goto label_1e7634;
        case 0x1e7638u: goto label_1e7638;
        case 0x1e763cu: goto label_1e763c;
        case 0x1e7640u: goto label_1e7640;
        case 0x1e7644u: goto label_1e7644;
        case 0x1e7648u: goto label_1e7648;
        case 0x1e764cu: goto label_1e764c;
        case 0x1e7650u: goto label_1e7650;
        case 0x1e7654u: goto label_1e7654;
        case 0x1e7658u: goto label_1e7658;
        case 0x1e765cu: goto label_1e765c;
        case 0x1e7660u: goto label_1e7660;
        case 0x1e7664u: goto label_1e7664;
        case 0x1e7668u: goto label_1e7668;
        case 0x1e766cu: goto label_1e766c;
        case 0x1e7670u: goto label_1e7670;
        case 0x1e7674u: goto label_1e7674;
        case 0x1e7678u: goto label_1e7678;
        case 0x1e767cu: goto label_1e767c;
        case 0x1e7680u: goto label_1e7680;
        case 0x1e7684u: goto label_1e7684;
        case 0x1e7688u: goto label_1e7688;
        case 0x1e768cu: goto label_1e768c;
        case 0x1e7690u: goto label_1e7690;
        case 0x1e7694u: goto label_1e7694;
        case 0x1e7698u: goto label_1e7698;
        case 0x1e769cu: goto label_1e769c;
        case 0x1e76a0u: goto label_1e76a0;
        case 0x1e76a4u: goto label_1e76a4;
        case 0x1e76a8u: goto label_1e76a8;
        case 0x1e76acu: goto label_1e76ac;
        case 0x1e76b0u: goto label_1e76b0;
        case 0x1e76b4u: goto label_1e76b4;
        case 0x1e76b8u: goto label_1e76b8;
        case 0x1e76bcu: goto label_1e76bc;
        case 0x1e76c0u: goto label_1e76c0;
        case 0x1e76c4u: goto label_1e76c4;
        case 0x1e76c8u: goto label_1e76c8;
        case 0x1e76ccu: goto label_1e76cc;
        case 0x1e76d0u: goto label_1e76d0;
        case 0x1e76d4u: goto label_1e76d4;
        case 0x1e76d8u: goto label_1e76d8;
        case 0x1e76dcu: goto label_1e76dc;
        case 0x1e76e0u: goto label_1e76e0;
        case 0x1e76e4u: goto label_1e76e4;
        case 0x1e76e8u: goto label_1e76e8;
        case 0x1e76ecu: goto label_1e76ec;
        case 0x1e76f0u: goto label_1e76f0;
        case 0x1e76f4u: goto label_1e76f4;
        case 0x1e76f8u: goto label_1e76f8;
        case 0x1e76fcu: goto label_1e76fc;
        case 0x1e7700u: goto label_1e7700;
        case 0x1e7704u: goto label_1e7704;
        case 0x1e7708u: goto label_1e7708;
        case 0x1e770cu: goto label_1e770c;
        case 0x1e7710u: goto label_1e7710;
        case 0x1e7714u: goto label_1e7714;
        case 0x1e7718u: goto label_1e7718;
        case 0x1e771cu: goto label_1e771c;
        case 0x1e7720u: goto label_1e7720;
        case 0x1e7724u: goto label_1e7724;
        case 0x1e7728u: goto label_1e7728;
        case 0x1e772cu: goto label_1e772c;
        case 0x1e7730u: goto label_1e7730;
        case 0x1e7734u: goto label_1e7734;
        case 0x1e7738u: goto label_1e7738;
        case 0x1e773cu: goto label_1e773c;
        case 0x1e7740u: goto label_1e7740;
        case 0x1e7744u: goto label_1e7744;
        case 0x1e7748u: goto label_1e7748;
        case 0x1e774cu: goto label_1e774c;
        case 0x1e7750u: goto label_1e7750;
        case 0x1e7754u: goto label_1e7754;
        case 0x1e7758u: goto label_1e7758;
        case 0x1e775cu: goto label_1e775c;
        case 0x1e7760u: goto label_1e7760;
        case 0x1e7764u: goto label_1e7764;
        case 0x1e7768u: goto label_1e7768;
        case 0x1e776cu: goto label_1e776c;
        case 0x1e7770u: goto label_1e7770;
        case 0x1e7774u: goto label_1e7774;
        case 0x1e7778u: goto label_1e7778;
        case 0x1e777cu: goto label_1e777c;
        case 0x1e7780u: goto label_1e7780;
        case 0x1e7784u: goto label_1e7784;
        case 0x1e7788u: goto label_1e7788;
        case 0x1e778cu: goto label_1e778c;
        case 0x1e7790u: goto label_1e7790;
        case 0x1e7794u: goto label_1e7794;
        case 0x1e7798u: goto label_1e7798;
        case 0x1e779cu: goto label_1e779c;
        case 0x1e77a0u: goto label_1e77a0;
        case 0x1e77a4u: goto label_1e77a4;
        case 0x1e77a8u: goto label_1e77a8;
        case 0x1e77acu: goto label_1e77ac;
        case 0x1e77b0u: goto label_1e77b0;
        case 0x1e77b4u: goto label_1e77b4;
        case 0x1e77b8u: goto label_1e77b8;
        case 0x1e77bcu: goto label_1e77bc;
        case 0x1e77c0u: goto label_1e77c0;
        case 0x1e77c4u: goto label_1e77c4;
        case 0x1e77c8u: goto label_1e77c8;
        case 0x1e77ccu: goto label_1e77cc;
        case 0x1e77d0u: goto label_1e77d0;
        case 0x1e77d4u: goto label_1e77d4;
        case 0x1e77d8u: goto label_1e77d8;
        case 0x1e77dcu: goto label_1e77dc;
        case 0x1e77e0u: goto label_1e77e0;
        case 0x1e77e4u: goto label_1e77e4;
        case 0x1e77e8u: goto label_1e77e8;
        case 0x1e77ecu: goto label_1e77ec;
        case 0x1e77f0u: goto label_1e77f0;
        case 0x1e77f4u: goto label_1e77f4;
        case 0x1e77f8u: goto label_1e77f8;
        case 0x1e77fcu: goto label_1e77fc;
        case 0x1e7800u: goto label_1e7800;
        case 0x1e7804u: goto label_1e7804;
        case 0x1e7808u: goto label_1e7808;
        case 0x1e780cu: goto label_1e780c;
        case 0x1e7810u: goto label_1e7810;
        case 0x1e7814u: goto label_1e7814;
        case 0x1e7818u: goto label_1e7818;
        case 0x1e781cu: goto label_1e781c;
        case 0x1e7820u: goto label_1e7820;
        case 0x1e7824u: goto label_1e7824;
        case 0x1e7828u: goto label_1e7828;
        case 0x1e782cu: goto label_1e782c;
        case 0x1e7830u: goto label_1e7830;
        case 0x1e7834u: goto label_1e7834;
        case 0x1e7838u: goto label_1e7838;
        case 0x1e783cu: goto label_1e783c;
        case 0x1e7840u: goto label_1e7840;
        case 0x1e7844u: goto label_1e7844;
        case 0x1e7848u: goto label_1e7848;
        case 0x1e784cu: goto label_1e784c;
        case 0x1e7850u: goto label_1e7850;
        case 0x1e7854u: goto label_1e7854;
        case 0x1e7858u: goto label_1e7858;
        case 0x1e785cu: goto label_1e785c;
        case 0x1e7860u: goto label_1e7860;
        case 0x1e7864u: goto label_1e7864;
        case 0x1e7868u: goto label_1e7868;
        case 0x1e786cu: goto label_1e786c;
        case 0x1e7870u: goto label_1e7870;
        case 0x1e7874u: goto label_1e7874;
        case 0x1e7878u: goto label_1e7878;
        case 0x1e787cu: goto label_1e787c;
        case 0x1e7880u: goto label_1e7880;
        case 0x1e7884u: goto label_1e7884;
        case 0x1e7888u: goto label_1e7888;
        case 0x1e788cu: goto label_1e788c;
        case 0x1e7890u: goto label_1e7890;
        case 0x1e7894u: goto label_1e7894;
        case 0x1e7898u: goto label_1e7898;
        case 0x1e789cu: goto label_1e789c;
        case 0x1e78a0u: goto label_1e78a0;
        case 0x1e78a4u: goto label_1e78a4;
        case 0x1e78a8u: goto label_1e78a8;
        case 0x1e78acu: goto label_1e78ac;
        case 0x1e78b0u: goto label_1e78b0;
        case 0x1e78b4u: goto label_1e78b4;
        case 0x1e78b8u: goto label_1e78b8;
        case 0x1e78bcu: goto label_1e78bc;
        case 0x1e78c0u: goto label_1e78c0;
        case 0x1e78c4u: goto label_1e78c4;
        case 0x1e78c8u: goto label_1e78c8;
        case 0x1e78ccu: goto label_1e78cc;
        case 0x1e78d0u: goto label_1e78d0;
        case 0x1e78d4u: goto label_1e78d4;
        case 0x1e78d8u: goto label_1e78d8;
        case 0x1e78dcu: goto label_1e78dc;
        case 0x1e78e0u: goto label_1e78e0;
        case 0x1e78e4u: goto label_1e78e4;
        case 0x1e78e8u: goto label_1e78e8;
        case 0x1e78ecu: goto label_1e78ec;
        default: return;
    }

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
    { ctx->pc = 0x19b1c8; return; }
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
            { ctx->pc = 0x1e6ff8; return; }
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
            goto label_1e7364;
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
        goto label_1e7358;
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
            goto label_1e7368;
        }
    }
    ctx->pc = 0x1E7358u;
label_1e7358:
    // 0x1e7358: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1e7358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1e735c:
    // 0x1e735c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1e735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e7360:
    // 0x1e7360: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1e7360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e7364:
    // 0x1e7364: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1e7364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1e7368:
    // 0x1e7368: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e7368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e736c:
    // 0x1e736c: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1e736cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e7370:
    // 0x1e7370: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e7370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7374:
    // 0x1e7374: 0x0  nop
    ctx->pc = 0x1e7374u;
    // NOP
label_1e7378:
    // 0x1e7378: 0x8810  mfhi        $s1
    ctx->pc = 0x1e7378u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1e737c:
    // 0x1e737c: 0x10000041  b           . + 4 + (0x41 << 2)
label_1e7380:
    if (ctx->pc == 0x1E7380u) {
        ctx->pc = 0x1E7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E737Cu;
        // 0x1e7380: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7384u;
        goto label_1e7384;
    }
    ctx->pc = 0x1E737Cu;
    {
        const bool branch_taken_0x1e737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E737Cu;
        // 0x1e7380: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e737c) {
            ctx->pc = 0x1E7484u;
            goto label_1e7484;
        }
    }
    ctx->pc = 0x1E7384u;
label_1e7384:
    // 0x1e7384: 0x246001a  div         $zero, $s2, $a2
    ctx->pc = 0x1e7384u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e7388:
    // 0x1e7388: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e7388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e738c:
    // 0x1e738c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1e738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1e7390:
    // 0x1e7390: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x1e7390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1e7394:
    // 0x1e7394: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e7394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
label_1e7398:
    // 0x1e7398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e739c:
    // 0x1e739c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e739cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e73a0:
    // 0x1e73a0: 0x2812  mflo        $a1
    ctx->pc = 0x1e73a0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1e73a4:
    // 0x1e73a4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1e73a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1e73a8:
    // 0x1e73a8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1e73a8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e73ac:
    // 0x1e73ac: 0x0  nop
    ctx->pc = 0x1e73acu;
    // NOP
label_1e73b0:
    // 0x1e73b0: 0x0  nop
    ctx->pc = 0x1e73b0u;
    // NOP
label_1e73b4:
    // 0x1e73b4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e73b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e73b8:
    // 0x1e73b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e73b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e73bc:
    // 0x1e73bc: 0x0  nop
    ctx->pc = 0x1e73bcu;
    // NOP
label_1e73c0:
    // 0x1e73c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e73c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e73c4:
    // 0x1e73c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e73c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1e73c8:
    // 0x1e73c8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1e73c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1e73cc:
    // 0x1e73cc: 0x0  nop
    ctx->pc = 0x1e73ccu;
    // NOP
label_1e73d0:
    // 0x1e73d0: 0x0  nop
    ctx->pc = 0x1e73d0u;
    // NOP
label_1e73d4:
    // 0x1e73d4: 0xc06d412  jal         func_1B5048
label_1e73d8:
    if (ctx->pc == 0x1E73D8u) {
        ctx->pc = 0x1E73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73D4u;
        // 0x1e73d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E73DCu;
        goto label_1e73dc;
    }
    ctx->pc = 0x1E73D4u;
    SET_GPR_U32(ctx, 31, 0x1E73DCu);
    ctx->pc = 0x1E73D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E73D4u;
    // 0x1e73d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1E73DCu;
label_1e73dc:
    // 0x1e73dc: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x1e73dcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e73e0:
    // 0x1e73e0: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1e73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1e73e4:
    // 0x1e73e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e73e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e73e8:
    // 0x1e73e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e73e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e73ec:
    // 0x1e73ec: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1e73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e73f0:
    // 0x1e73f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e73f4:
    // 0x1e73f4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e73f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1e73f8:
    // 0x1e73f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e73f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e73fc:
    // 0x1e73fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e73fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e7400:
    // 0x1e7400: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e7400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1e7404:
    // 0x1e7404: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e7404u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e7408:
    // 0x1e7408: 0xc06d4c0  jal         func_1B5300
label_1e740c:
    if (ctx->pc == 0x1E740Cu) {
        ctx->pc = 0x1E740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7408u;
        // 0x1e740c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7410u;
        goto label_1e7410;
    }
    ctx->pc = 0x1E7408u;
    SET_GPR_U32(ctx, 31, 0x1E7410u);
    ctx->pc = 0x1E740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7408u;
    // 0x1e740c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1E7410u;
label_1e7410:
    // 0x1e7410: 0x44951000  mtc1        $s5, $f2
    ctx->pc = 0x1e7410u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e7414:
    // 0x1e7414: 0x3c024387  lui         $v0, 0x4387
    ctx->pc = 0x1e7414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17287 << 16));
label_1e7418:
    // 0x1e7418: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e7418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e741c:
    // 0x1e741c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e741cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1e7420:
    // 0x1e7420: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x1e7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1e7424:
    // 0x1e7424: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e7424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e7428:
    // 0x1e7428: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e7428u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1e742c:
    // 0x1e742c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e742cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e7430:
    // 0x1e7430: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e7430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e7434:
    // 0x1e7434: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e7434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1e7438:
    // 0x1e7438: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e7438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1e743c:
    // 0x1e743c: 0xc06d4c0  jal         func_1B5300
label_1e7440:
    if (ctx->pc == 0x1E7440u) {
        ctx->pc = 0x1E7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E743Cu;
        // 0x1e7440: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7444u;
        goto label_1e7444;
    }
    ctx->pc = 0x1E743Cu;
    SET_GPR_U32(ctx, 31, 0x1E7444u);
    ctx->pc = 0x1E7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E743Cu;
    // 0x1e7440: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1E7444u;
label_1e7444:
    // 0x1e7444: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1e7444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
label_1e7448:
    // 0x1e7448: 0x27a20290  addiu       $v0, $sp, 0x290
    ctx->pc = 0x1e7448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1e744c:
    // 0x1e744c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e744cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e7450:
    // 0x1e7450: 0x26520168  addiu       $s2, $s2, 0x168
    ctx->pc = 0x1e7450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 360));
label_1e7454:
    // 0x1e7454: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e7454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e7458:
    // 0x1e7458: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1e7458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e745c:
    // 0x1e745c: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x1e745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1e7460:
    // 0x1e7460: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e7460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e7464:
    // 0x1e7464: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e7464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e7468:
    // 0x1e7468: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e7468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1e746c:
    // 0x1e746c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e746cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1e7470:
    // 0x1e7470: 0x0  nop
    ctx->pc = 0x1e7470u;
    // NOP
label_1e7474:
    // 0x1e7474: 0x248401f4  addiu       $a0, $a0, 0x1F4
    ctx->pc = 0x1e7474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 500));
label_1e7478:
    // 0x1e7478: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e7478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1e747c:
    // 0x1e747c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1e747cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1e7480:
    // 0x1e7480: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e7480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e7484:
    // 0x1e7484: 0x0  nop
    ctx->pc = 0x1e7484u;
    // NOP
label_1e7488:
    // 0x1e7488: 0x8f868e9c  lw          $a2, -0x7164($gp)
    ctx->pc = 0x1e7488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e748c:
    // 0x1e748c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x1e748cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1e7490:
    // 0x1e7490: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_1e7494:
    if (ctx->pc == 0x1E7494u) {
        ctx->pc = 0x1E7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7490u;
        // 0x1e7494: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7498u;
        goto label_1e7498;
    }
    ctx->pc = 0x1E7490u;
    {
        const bool branch_taken_0x1e7490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7490u;
        // 0x1e7494: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7490) {
            ctx->pc = 0x1E7384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7384;
        }
    }
    ctx->pc = 0x1E7498u;
label_1e7498:
    // 0x1e7498: 0xc079dfc  jal         func_1E77F0
label_1e749c:
    if (ctx->pc == 0x1E749Cu) {
        ctx->pc = 0x1E749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7498u;
        // 0x1e749c: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74A0u;
        goto label_1e74a0;
    }
    ctx->pc = 0x1E7498u;
    SET_GPR_U32(ctx, 31, 0x1E74A0u);
    ctx->pc = 0x1E749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7498u;
    // 0x1e749c: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E77F0u;
    goto label_1e77f0;
    ctx->pc = 0x1E74A0u;
label_1e74a0:
    // 0x1e74a0: 0x8f8c8e9c  lw          $t4, -0x7164($gp)
    ctx->pc = 0x1e74a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e74a4:
    // 0x1e74a4: 0xc082a  slt         $at, $zero, $t4
    ctx->pc = 0x1e74a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_1e74a8:
    // 0x1e74a8: 0x102000c4  beqz        $at, . + 4 + (0xC4 << 2)
label_1e74ac:
    if (ctx->pc == 0x1E74ACu) {
        ctx->pc = 0x1E74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74A8u;
        // 0x1e74ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74B0u;
        goto label_1e74b0;
    }
    ctx->pc = 0x1E74A8u;
    {
        const bool branch_taken_0x1e74a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74A8u;
        // 0x1e74ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74a8) {
            ctx->pc = 0x1E77BCu;
            goto label_1e77bc;
        }
    }
    ctx->pc = 0x1E74B0u;
label_1e74b0:
    // 0x1e74b0: 0x29810009  slti        $at, $t4, 0x9
    ctx->pc = 0x1e74b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)9) ? 1 : 0);
label_1e74b4:
    // 0x1e74b4: 0x1420009b  bnez        $at, . + 4 + (0x9B << 2)
label_1e74b8:
    if (ctx->pc == 0x1E74B8u) {
        ctx->pc = 0x1E74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74B4u;
        // 0x1e74b8: 0x2589fff8  addiu       $t1, $t4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E74BCu;
        goto label_1e74bc;
    }
    ctx->pc = 0x1E74B4u;
    {
        const bool branch_taken_0x1e74b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E74B4u;
        // 0x1e74b8: 0x2589fff8  addiu       $t1, $t4, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74b4) {
            ctx->pc = 0x1E7724u;
            goto label_1e7724;
        }
    }
    ctx->pc = 0x1E74BCu;
label_1e74bc:
    // 0x1e74bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e74bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e74c0:
    // 0x1e74c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e74c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e74c4:
    // 0x1e74c4: 0x3c07004b  lui         $a3, 0x4B
    ctx->pc = 0x1e74c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)75 << 16));
label_1e74c8:
    // 0x1e74c8: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1e74cc:
    // 0x1e74cc: 0x27a801e0  addiu       $t0, $sp, 0x1E0
    ctx->pc = 0x1e74ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1e74d0:
    // 0x1e74d0: 0x24e72a40  addiu       $a3, $a3, 0x2A40
    ctx->pc = 0x1e74d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10816));
label_1e74d4:
    // 0x1e74d4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e74d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e74d8:
    // 0x1e74d8: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1e74d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1e74dc:
    // 0x1e74dc: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x1e74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1e74e0:
    // 0x1e74e0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1e74e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_1e74e4:
    // 0x1e74e4: 0x10a7021  addu        $t6, $t0, $t2
    ctx->pc = 0x1e74e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_1e74e8:
    // 0x1e74e8: 0xeb6821  addu        $t5, $a3, $t3
    ctx->pc = 0x1e74e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_1e74ec:
    // 0x1e74ec: 0x8dd20000  lw          $s2, 0x0($t6)
    ctx->pc = 0x1e74ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_1e74f0:
    // 0x1e74f0: 0x8a7821  addu        $t7, $a0, $t2
    ctx->pc = 0x1e74f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1e74f4:
    // 0x1e74f4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e74f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1e74f8:
    // 0x1e74f8: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x1e74f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_1e74fc:
    // 0x1e74fc: 0x209882a  slt         $s1, $s0, $t1
    ctx->pc = 0x1e74fcu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1e7500:
    // 0x1e7500: 0x256b0080  addiu       $t3, $t3, 0x80
    ctx->pc = 0x1e7500u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 128));
label_1e7504:
    // 0x1e7504: 0xadb20000  sw          $s2, 0x0($t5)
    ctx->pc = 0x1e7504u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 18));
label_1e7508:
    // 0x1e7508: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1e7508u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e750c:
    // 0x1e750c: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e7510:
    // 0x1e7510: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1e7510u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7514:
    // 0x1e7514: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1e7514u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1e7518:
    // 0x1e7518: 0xadb30004  sw          $s3, 0x4($t5)
    ctx->pc = 0x1e7518u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 19));
label_1e751c:
    // 0x1e751c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e751cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e7520:
    // 0x1e7520: 0xadb20008  sw          $s2, 0x8($t5)
    ctx->pc = 0x1e7520u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 18));
label_1e7524:
    // 0x1e7524: 0x8df20000  lw          $s2, 0x0($t7)
    ctx->pc = 0x1e7524u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_1e7528:
    // 0x1e7528: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1e7528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e752c:
    // 0x1e752c: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1e752cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1e7530:
    // 0x1e7530: 0x0  nop
    ctx->pc = 0x1e7530u;
    // NOP
label_1e7534:
    // 0x1e7534: 0x9010  mfhi        $s2
    ctx->pc = 0x1e7534u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1e7538:
    // 0x1e7538: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1e7538u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1e753c:
    // 0x1e753c: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1e753cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1e7540:
    // 0x1e7540: 0xadb2000c  sw          $s2, 0xC($t5)
    ctx->pc = 0x1e7540u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 18));
label_1e7544:
    // 0x1e7544: 0x8dd20004  lw          $s2, 0x4($t6)
    ctx->pc = 0x1e7544u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
label_1e7548:
    // 0x1e7548: 0xadb20010  sw          $s2, 0x10($t5)
    ctx->pc = 0x1e7548u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 18));
label_1e754c:
    // 0x1e754c: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1e754cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e7550:
    // 0x1e7550: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1e7550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e7554:
    // 0x1e7554: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1e7554u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7558:
    // 0x1e7558: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1e7558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1e755c:
    // 0x1e755c: 0xadb30014  sw          $s3, 0x14($t5)
    ctx->pc = 0x1e755cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 19));
label_1e7560:
    // 0x1e7560: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e7560u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e7564:
    // 0x1e7564: 0xadb20018  sw          $s2, 0x18($t5)
    ctx->pc = 0x1e7564u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 18));
label_1e7568:
    // 0x1e7568: 0x8df20004  lw          $s2, 0x4($t7)
    ctx->pc = 0x1e7568u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_1e756c:
    // 0x1e756c: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1e756cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7570:
    // 0x1e7570: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1e7570u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1e7574:
    // 0x1e7574: 0x0  nop
    ctx->pc = 0x1e7574u;
    // NOP
label_1e7578:
    // 0x1e7578: 0x9010  mfhi        $s2
    ctx->pc = 0x1e7578u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1e757c:
    // 0x1e757c: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1e757cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1e7580:
    // 0x1e7580: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1e7580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1e7584:
    // 0x1e7584: 0xadb2001c  sw          $s2, 0x1C($t5)
    ctx->pc = 0x1e7584u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 18));
label_1e7588:
    // 0x1e7588: 0x8dd20008  lw          $s2, 0x8($t6)
    ctx->pc = 0x1e7588u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
label_1e758c:
    // 0x1e758c: 0xadb20020  sw          $s2, 0x20($t5)
    ctx->pc = 0x1e758cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 18));
label_1e7590:
    // 0x1e7590: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1e7590u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e7594:
    // 0x1e7594: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1e7594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e7598:
    // 0x1e7598: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1e7598u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e759c:
    // 0x1e759c: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1e759cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1e75a0:
    // 0x1e75a0: 0xadb30024  sw          $s3, 0x24($t5)
    ctx->pc = 0x1e75a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 19));
label_1e75a4:
    // 0x1e75a4: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e75a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e75a8:
    // 0x1e75a8: 0xadb20028  sw          $s2, 0x28($t5)
    ctx->pc = 0x1e75a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 18));
label_1e75ac:
    // 0x1e75ac: 0x8df20008  lw          $s2, 0x8($t7)
    ctx->pc = 0x1e75acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_1e75b0:
    // 0x1e75b0: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1e75b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e75b4:
    // 0x1e75b4: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1e75b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1e75b8:
    // 0x1e75b8: 0x0  nop
    ctx->pc = 0x1e75b8u;
    // NOP
label_1e75bc:
    // 0x1e75bc: 0x9010  mfhi        $s2
    ctx->pc = 0x1e75bcu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1e75c0:
    // 0x1e75c0: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1e75c0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1e75c4:
    // 0x1e75c4: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1e75c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1e75c8:
    // 0x1e75c8: 0xadb2002c  sw          $s2, 0x2C($t5)
    ctx->pc = 0x1e75c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 18));
label_1e75cc:
    // 0x1e75cc: 0x8dd2000c  lw          $s2, 0xC($t6)
    ctx->pc = 0x1e75ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
label_1e75d0:
    // 0x1e75d0: 0xadb20030  sw          $s2, 0x30($t5)
    ctx->pc = 0x1e75d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 18));
label_1e75d4:
    // 0x1e75d4: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1e75d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e75d8:
    // 0x1e75d8: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1e75d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e75dc:
    // 0x1e75dc: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1e75dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e75e0:
    // 0x1e75e0: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1e75e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1e75e4:
    // 0x1e75e4: 0xadb30034  sw          $s3, 0x34($t5)
    ctx->pc = 0x1e75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 19));
label_1e75e8:
    // 0x1e75e8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e75e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e75ec:
    // 0x1e75ec: 0xadb20038  sw          $s2, 0x38($t5)
    ctx->pc = 0x1e75ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 18));
label_1e75f0:
    // 0x1e75f0: 0x8df2000c  lw          $s2, 0xC($t7)
    ctx->pc = 0x1e75f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
label_1e75f4:
    // 0x1e75f4: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1e75f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e75f8:
    // 0x1e75f8: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1e75f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1e75fc:
    // 0x1e75fc: 0x0  nop
    ctx->pc = 0x1e75fcu;
    // NOP
label_1e7600:
    // 0x1e7600: 0x9010  mfhi        $s2
    ctx->pc = 0x1e7600u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1e7604:
    // 0x1e7604: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1e7604u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1e7608:
    // 0x1e7608: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1e7608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1e760c:
    // 0x1e760c: 0xadb2003c  sw          $s2, 0x3C($t5)
    ctx->pc = 0x1e760cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 60), GPR_U32(ctx, 18));
label_1e7610:
    // 0x1e7610: 0x8dd20010  lw          $s2, 0x10($t6)
    ctx->pc = 0x1e7610u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
label_1e7614:
    // 0x1e7614: 0xadb20040  sw          $s2, 0x40($t5)
    ctx->pc = 0x1e7614u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 64), GPR_U32(ctx, 18));
label_1e7618:
    // 0x1e7618: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1e7618u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e761c:
    // 0x1e761c: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1e761cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e7620:
    // 0x1e7620: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1e7620u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7624:
    // 0x1e7624: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1e7624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1e7628:
    // 0x1e7628: 0xadb30044  sw          $s3, 0x44($t5)
    ctx->pc = 0x1e7628u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 19));
label_1e762c:
    // 0x1e762c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e762cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e7630:
    // 0x1e7630: 0xadb20048  sw          $s2, 0x48($t5)
    ctx->pc = 0x1e7630u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 18));
label_1e7634:
    // 0x1e7634: 0x8df20010  lw          $s2, 0x10($t7)
    ctx->pc = 0x1e7634u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
label_1e7638:
    // 0x1e7638: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1e7638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e763c:
    // 0x1e763c: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1e763cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1e7640:
    // 0x1e7640: 0x0  nop
    ctx->pc = 0x1e7640u;
    // NOP
label_1e7644:
    // 0x1e7644: 0x9010  mfhi        $s2
    ctx->pc = 0x1e7644u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1e7648:
    // 0x1e7648: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1e7648u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1e764c:
    // 0x1e764c: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1e764cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1e7650:
    // 0x1e7650: 0xadb2004c  sw          $s2, 0x4C($t5)
    ctx->pc = 0x1e7650u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 76), GPR_U32(ctx, 18));
label_1e7654:
    // 0x1e7654: 0x8dd20014  lw          $s2, 0x14($t6)
    ctx->pc = 0x1e7654u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
label_1e7658:
    // 0x1e7658: 0xadb20050  sw          $s2, 0x50($t5)
    ctx->pc = 0x1e7658u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 80), GPR_U32(ctx, 18));
label_1e765c:
    // 0x1e765c: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1e765cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e7660:
    // 0x1e7660: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1e7660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e7664:
    // 0x1e7664: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1e7664u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7668:
    // 0x1e7668: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1e7668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1e766c:
    // 0x1e766c: 0xadb30054  sw          $s3, 0x54($t5)
    ctx->pc = 0x1e766cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 19));
label_1e7670:
    // 0x1e7670: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e7670u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e7674:
    // 0x1e7674: 0xadb20058  sw          $s2, 0x58($t5)
    ctx->pc = 0x1e7674u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 18));
label_1e7678:
    // 0x1e7678: 0x8df20014  lw          $s2, 0x14($t7)
    ctx->pc = 0x1e7678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
label_1e767c:
    // 0x1e767c: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1e767cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7680:
    // 0x1e7680: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1e7680u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1e7684:
    // 0x1e7684: 0x0  nop
    ctx->pc = 0x1e7684u;
    // NOP
label_1e7688:
    // 0x1e7688: 0x9010  mfhi        $s2
    ctx->pc = 0x1e7688u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1e768c:
    // 0x1e768c: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1e768cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1e7690:
    // 0x1e7690: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1e7694:
    // 0x1e7694: 0xadb2005c  sw          $s2, 0x5C($t5)
    ctx->pc = 0x1e7694u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 18));
label_1e7698:
    // 0x1e7698: 0x8dd20018  lw          $s2, 0x18($t6)
    ctx->pc = 0x1e7698u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
label_1e769c:
    // 0x1e769c: 0xadb20060  sw          $s2, 0x60($t5)
    ctx->pc = 0x1e769cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 18));
label_1e76a0:
    // 0x1e76a0: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x1e76a0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e76a4:
    // 0x1e76a4: 0xd29821  addu        $s3, $a2, $s2
    ctx->pc = 0x1e76a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_1e76a8:
    // 0x1e76a8: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1e76a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e76ac:
    // 0x1e76ac: 0xb29021  addu        $s2, $a1, $s2
    ctx->pc = 0x1e76acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_1e76b0:
    // 0x1e76b0: 0xadb30064  sw          $s3, 0x64($t5)
    ctx->pc = 0x1e76b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 19));
label_1e76b4:
    // 0x1e76b4: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e76b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e76b8:
    // 0x1e76b8: 0xadb20068  sw          $s2, 0x68($t5)
    ctx->pc = 0x1e76b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 104), GPR_U32(ctx, 18));
label_1e76bc:
    // 0x1e76bc: 0x8df20018  lw          $s2, 0x18($t7)
    ctx->pc = 0x1e76bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
label_1e76c0:
    // 0x1e76c0: 0x720018  mult        $zero, $v1, $s2
    ctx->pc = 0x1e76c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e76c4:
    // 0x1e76c4: 0x129fc2  srl         $s3, $s2, 31
    ctx->pc = 0x1e76c4u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1e76c8:
    // 0x1e76c8: 0x0  nop
    ctx->pc = 0x1e76c8u;
    // NOP
label_1e76cc:
    // 0x1e76cc: 0x9010  mfhi        $s2
    ctx->pc = 0x1e76ccu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_1e76d0:
    // 0x1e76d0: 0x129083  sra         $s2, $s2, 2
    ctx->pc = 0x1e76d0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 2));
label_1e76d4:
    // 0x1e76d4: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1e76d8:
    // 0x1e76d8: 0xadb2006c  sw          $s2, 0x6C($t5)
    ctx->pc = 0x1e76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 108), GPR_U32(ctx, 18));
label_1e76dc:
    // 0x1e76dc: 0x8dce001c  lw          $t6, 0x1C($t6)
    ctx->pc = 0x1e76dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
label_1e76e0:
    // 0x1e76e0: 0xadae0070  sw          $t6, 0x70($t5)
    ctx->pc = 0x1e76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 112), GPR_U32(ctx, 14));
label_1e76e4:
    // 0x1e76e4: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1e76e4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
label_1e76e8:
    // 0x1e76e8: 0xce9021  addu        $s2, $a2, $t6
    ctx->pc = 0x1e76e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
label_1e76ec:
    // 0x1e76ec: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1e76ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e76f0:
    // 0x1e76f0: 0xae7021  addu        $t6, $a1, $t6
    ctx->pc = 0x1e76f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_1e76f4:
    // 0x1e76f4: 0xadb20074  sw          $s2, 0x74($t5)
    ctx->pc = 0x1e76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 116), GPR_U32(ctx, 18));
label_1e76f8:
    // 0x1e76f8: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x1e76f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
label_1e76fc:
    // 0x1e76fc: 0xadae0078  sw          $t6, 0x78($t5)
    ctx->pc = 0x1e76fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 120), GPR_U32(ctx, 14));
label_1e7700:
    // 0x1e7700: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1e7700u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
label_1e7704:
    // 0x1e7704: 0x6e0018  mult        $zero, $v1, $t6
    ctx->pc = 0x1e7704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7708:
    // 0x1e7708: 0xe7fc2  srl         $t7, $t6, 31
    ctx->pc = 0x1e7708u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
label_1e770c:
    // 0x1e770c: 0x0  nop
    ctx->pc = 0x1e770cu;
    // NOP
label_1e7710:
    // 0x1e7710: 0x7010  mfhi        $t6
    ctx->pc = 0x1e7710u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_1e7714:
    // 0x1e7714: 0xe7083  sra         $t6, $t6, 2
    ctx->pc = 0x1e7714u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 2));
label_1e7718:
    // 0x1e7718: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1e7718u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_1e771c:
    // 0x1e771c: 0x1620ff71  bnez        $s1, . + 4 + (-0x8F << 2)
label_1e7720:
    if (ctx->pc == 0x1E7720u) {
        ctx->pc = 0x1E7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E771Cu;
        // 0x1e7720: 0xadae007c  sw          $t6, 0x7C($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 124), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7724u;
        goto label_1e7724;
    }
    ctx->pc = 0x1E771Cu;
    {
        const bool branch_taken_0x1e771c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E771Cu;
        // 0x1e7720: 0xadae007c  sw          $t6, 0x7C($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 124), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e771c) {
            ctx->pc = 0x1E74E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e74e4;
        }
    }
    ctx->pc = 0x1E7724u;
label_1e7724:
    // 0x1e7724: 0x0  nop
    ctx->pc = 0x1e7724u;
    // NOP
label_1e7728:
    // 0x1e7728: 0x3c0e004b  lui         $t6, 0x4B
    ctx->pc = 0x1e7728u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)75 << 16));
label_1e772c:
    // 0x1e772c: 0x3c066666  lui         $a2, 0x6666
    ctx->pc = 0x1e772cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_1e7730:
    // 0x1e7730: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1e7730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1e7734:
    // 0x1e7734: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x1e7734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1e7738:
    // 0x1e7738: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1e773c:
    // 0x1e773c: 0x25ce2a40  addiu       $t6, $t6, 0x2A40
    ctx->pc = 0x1e773cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 10816));
label_1e7740:
    // 0x1e7740: 0x27ad0080  addiu       $t5, $sp, 0x80
    ctx->pc = 0x1e7740u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e7744:
    // 0x1e7744: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x1e7744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1e7748:
    // 0x1e7748: 0x27a90290  addiu       $t1, $sp, 0x290
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1e774c:
    // 0x1e774c: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e7750:
    if (ctx->pc == 0x1E7750u) {
        ctx->pc = 0x1E7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E774Cu;
        // 0x1e7750: 0x34c86667  ori         $t0, $a2, 0x6667 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26215);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7754u;
        goto label_1e7754;
    }
    ctx->pc = 0x1E774Cu;
    {
        const bool branch_taken_0x1e774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E774Cu;
        // 0x1e7750: 0x34c86667  ori         $t0, $a2, 0x6667 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)26215);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e774c) {
            ctx->pc = 0x1E77ACu;
            goto label_1e77ac;
        }
    }
    ctx->pc = 0x1E7754u;
label_1e7754:
    // 0x1e7754: 0x1c57821  addu        $t7, $t6, $a1
    ctx->pc = 0x1e7754u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_1e7758:
    // 0x1e7758: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1e7758u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e775c:
    // 0x1e775c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1e775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1e7760:
    // 0x1e7760: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e7760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e7764:
    // 0x1e7764: 0xade70000  sw          $a3, 0x0($t7)
    ctx->pc = 0x1e7764u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 7));
label_1e7768:
    // 0x1e7768: 0x1243021  addu        $a2, $t1, $a0
    ctx->pc = 0x1e7768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1e776c:
    // 0x1e776c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1e7770:
    // 0x1e7770: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1e7770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1e7774:
    // 0x1e7774: 0x1a75821  addu        $t3, $t5, $a3
    ctx->pc = 0x1e7774u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
label_1e7778:
    // 0x1e7778: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x1e7778u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1e777c:
    // 0x1e777c: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x1e777cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_1e7780:
    // 0x1e7780: 0xadeb0004  sw          $t3, 0x4($t7)
    ctx->pc = 0x1e7780u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 11));
label_1e7784:
    // 0x1e7784: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1e7784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e7788:
    // 0x1e7788: 0xade70008  sw          $a3, 0x8($t7)
    ctx->pc = 0x1e7788u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 7));
label_1e778c:
    // 0x1e778c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1e778cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e7790:
    // 0x1e7790: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x1e7790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7794:
    // 0x1e7794: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x1e7794u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1e7798:
    // 0x1e7798: 0x0  nop
    ctx->pc = 0x1e7798u;
    // NOP
label_1e779c:
    // 0x1e779c: 0x3010  mfhi        $a2
    ctx->pc = 0x1e779cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1e77a0:
    // 0x1e77a0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_1e77a4:
    // 0x1e77a4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1e77a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1e77a8:
    // 0x1e77a8: 0xade6000c  sw          $a2, 0xC($t7)
    ctx->pc = 0x1e77a8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 6));
label_1e77ac:
    // 0x1e77ac: 0x0  nop
    ctx->pc = 0x1e77acu;
    // NOP
label_1e77b0:
    // 0x1e77b0: 0x20c302a  slt         $a2, $s0, $t4
    ctx->pc = 0x1e77b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_1e77b4:
    // 0x1e77b4: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
label_1e77b8:
    if (ctx->pc == 0x1E77B8u) {
        ctx->pc = 0x1E77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77B4u;
        // 0x1e77b8: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E77BCu;
        goto label_1e77bc;
    }
    ctx->pc = 0x1E77B4u;
    {
        const bool branch_taken_0x1e77b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77B4u;
        // 0x1e77b8: 0x643021  addu        $a2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77b4) {
            ctx->pc = 0x1E7754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7754;
        }
    }
    ctx->pc = 0x1E77BCu;
label_1e77bc:
    // 0x1e77bc: 0x0  nop
    ctx->pc = 0x1e77bcu;
    // NOP
label_1e77c0:
    // 0x1e77c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e77c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e77c4:
    // 0x1e77c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e77c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e77c8:
    // 0x1e77c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e77cc:
    // 0x1e77cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e77ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e77d0:
    // 0x1e77d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e77d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e77d4:
    // 0x1e77d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e77d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e77d8:
    // 0x1e77d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e77d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e77dc:
    // 0x1e77dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e77dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e77e0:
    // 0x1e77e0: 0x3e00008  jr          $ra
label_1e77e4:
    if (ctx->pc == 0x1E77E4u) {
        ctx->pc = 0x1E77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77E0u;
        // 0x1e77e4: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E77E8u;
        goto label_1e77e8;
    }
    ctx->pc = 0x1E77E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77E0u;
        // 0x1e77e4: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E77E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E77E8u;
label_1e77e8:
    // 0x1e77e8: 0x0  nop
    ctx->pc = 0x1e77e8u;
    // NOP
label_1e77ec:
    // 0x1e77ec: 0x0  nop
    ctx->pc = 0x1e77ecu;
    // NOP
label_1e77f0:
    // 0x1e77f0: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x1e77f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1e77f4:
    // 0x1e77f4: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1e77f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e77f8:
    // 0x1e77f8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_1e77fc:
    if (ctx->pc == 0x1E77FCu) {
        ctx->pc = 0x1E77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77F8u;
        // 0x1e77fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7800u;
        goto label_1e7800;
    }
    ctx->pc = 0x1E77F8u;
    {
        const bool branch_taken_0x1e77f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77F8u;
        // 0x1e77fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77f8) {
            ctx->pc = 0x1E7868u;
            goto label_1e7868;
        }
    }
    ctx->pc = 0x1E7800u;
label_1e7800:
    // 0x1e7800: 0x24c9ffff  addiu       $t1, $a2, -0x1
    ctx->pc = 0x1e7800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1e7804:
    // 0x1e7804: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x1e7804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1e7808:
    // 0x1e7808: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1e780c:
    if (ctx->pc == 0x1E780Cu) {
        ctx->pc = 0x1E780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7808u;
        // 0x1e780c: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7810u;
        goto label_1e7810;
    }
    ctx->pc = 0x1E7808u;
    {
        const bool branch_taken_0x1e7808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7808u;
        // 0x1e780c: 0x95880  sll         $t3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7808) {
            ctx->pc = 0x1E7858u;
            goto label_1e7858;
        }
    }
    ctx->pc = 0x1E7810u;
label_1e7810:
    // 0x1e7810: 0xab5021  addu        $t2, $a1, $t3
    ctx->pc = 0x1e7810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_1e7814:
    // 0x1e7814: 0x8d4dfffc  lw          $t5, -0x4($t2)
    ctx->pc = 0x1e7814u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967292)));
label_1e7818:
    // 0x1e7818: 0x8d4c0000  lw          $t4, 0x0($t2)
    ctx->pc = 0x1e7818u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1e781c:
    // 0x1e781c: 0x18d182a  slt         $v1, $t4, $t5
    ctx->pc = 0x1e781cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_1e7820:
    // 0x1e7820: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1e7824:
    if (ctx->pc == 0x1E7824u) {
        ctx->pc = 0x1E7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7820u;
        // 0x1e7824: 0x254efffc  addiu       $t6, $t2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7828u;
        goto label_1e7828;
    }
    ctx->pc = 0x1E7820u;
    {
        const bool branch_taken_0x1e7820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7820u;
        // 0x1e7824: 0x254efffc  addiu       $t6, $t2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7820) {
            ctx->pc = 0x1E7844u;
            goto label_1e7844;
        }
    }
    ctx->pc = 0x1E7828u;
label_1e7828:
    // 0x1e7828: 0xad4d0000  sw          $t5, 0x0($t2)
    ctx->pc = 0x1e7828u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 13));
label_1e782c:
    // 0x1e782c: 0x8b6821  addu        $t5, $a0, $t3
    ctx->pc = 0x1e782cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1e7830:
    // 0x1e7830: 0xadcc0000  sw          $t4, 0x0($t6)
    ctx->pc = 0x1e7830u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 12));
label_1e7834:
    // 0x1e7834: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x1e7834u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_1e7838:
    // 0x1e7838: 0x8da3fffc  lw          $v1, -0x4($t5)
    ctx->pc = 0x1e7838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294967292)));
label_1e783c:
    // 0x1e783c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1e783cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_1e7840:
    // 0x1e7840: 0xadaafffc  sw          $t2, -0x4($t5)
    ctx->pc = 0x1e7840u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294967292), GPR_U32(ctx, 10));
label_1e7844:
    // 0x1e7844: 0x0  nop
    ctx->pc = 0x1e7844u;
    // NOP
label_1e7848:
    // 0x1e7848: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1e7848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1e784c:
    // 0x1e784c: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x1e784cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1e7850:
    // 0x1e7850: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
label_1e7854:
    if (ctx->pc == 0x1E7854u) {
        ctx->pc = 0x1E7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7850u;
        // 0x1e7854: 0x256bfffc  addiu       $t3, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7858u;
        goto label_1e7858;
    }
    ctx->pc = 0x1E7850u;
    {
        const bool branch_taken_0x1e7850 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7850u;
        // 0x1e7854: 0x256bfffc  addiu       $t3, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7850) {
            ctx->pc = 0x1E7810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7810;
        }
    }
    ctx->pc = 0x1E7858u;
label_1e7858:
    // 0x1e7858: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1e7858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1e785c:
    // 0x1e785c: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x1e785cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e7860:
    // 0x1e7860: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_1e7864:
    if (ctx->pc == 0x1E7864u) {
        ctx->pc = 0x1E7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7860u;
        // 0x1e7864: 0x24c9ffff  addiu       $t1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7868u;
        goto label_1e7868;
    }
    ctx->pc = 0x1E7860u;
    {
        const bool branch_taken_0x1e7860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7860u;
        // 0x1e7864: 0x24c9ffff  addiu       $t1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7860) {
            ctx->pc = 0x1E7804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7804;
        }
    }
    ctx->pc = 0x1E7868u;
label_1e7868:
    // 0x1e7868: 0x3e00008  jr          $ra
label_1e786c:
    if (ctx->pc == 0x1E786Cu) {
        ctx->pc = 0x1E7870u;
        goto label_1e7870;
    }
    ctx->pc = 0x1E7868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7870u;
label_1e7870:
    // 0x1e7870: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1e7874:
    // 0x1e7874: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7878:
    // 0x1e7878: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e7878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1e787c:
    // 0x1e787c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1e787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1e7880:
    // 0x1e7880: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1e7880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1e7884:
    // 0x1e7884: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e7884u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7888:
    // 0x1e7888: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e7888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1e788c:
    // 0x1e788c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e788cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7890:
    // 0x1e7890: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e7890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1e7894:
    // 0x1e7894: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e7894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e7898:
    // 0x1e7898: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e7898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e789c:
    // 0x1e789c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e789cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e78a0:
    // 0x1e78a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e78a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e78a4:
    // 0x1e78a4: 0xac202e20  sw          $zero, 0x2E20($at)
    ctx->pc = 0x1e78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11808), GPR_U32(ctx, 0));
label_1e78a8:
    // 0x1e78a8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e78a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e78ac:
    // 0x1e78ac: 0xaf808df8  sw          $zero, -0x7208($gp)
    ctx->pc = 0x1e78acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
label_1e78b0:
    // 0x1e78b0: 0xac202e24  sw          $zero, 0x2E24($at)
    ctx->pc = 0x1e78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11812), GPR_U32(ctx, 0));
label_1e78b4:
    // 0x1e78b4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e78b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e78b8:
    // 0x1e78b8: 0xaf808df4  sw          $zero, -0x720C($gp)
    ctx->pc = 0x1e78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 0));
label_1e78bc:
    // 0x1e78bc: 0xac202e28  sw          $zero, 0x2E28($at)
    ctx->pc = 0x1e78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11816), GPR_U32(ctx, 0));
label_1e78c0:
    // 0x1e78c0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e78c4:
    // 0x1e78c4: 0xaf808df0  sw          $zero, -0x7210($gp)
    ctx->pc = 0x1e78c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938096), GPR_U32(ctx, 0));
label_1e78c8:
    // 0x1e78c8: 0xac202e2c  sw          $zero, 0x2E2C($at)
    ctx->pc = 0x1e78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11820), GPR_U32(ctx, 0));
label_1e78cc:
    // 0x1e78cc: 0x27828e00  addiu       $v0, $gp, -0x7200
    ctx->pc = 0x1e78ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938112));
label_1e78d0:
    // 0x1e78d0: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x1e78d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_1e78d4:
    // 0x1e78d4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1e78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1e78d8:
    // 0x1e78d8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1e78d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e78dc:
    // 0x1e78dc: 0xc05e234  jal         func_1788D0
label_1e78e0:
    if (ctx->pc == 0x1E78E0u) {
        ctx->pc = 0x1E78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78DCu;
        // 0x1e78e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E78E4u;
        goto label_1e78e4;
    }
    ctx->pc = 0x1E78DCu;
    SET_GPR_U32(ctx, 31, 0x1E78E4u);
    ctx->pc = 0x1E78E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78DCu;
    // 0x1e78e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x1E78E4u;
label_1e78e4:
    // 0x1e78e4: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1e78e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e78e8:
    // 0x1e78e8: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1e78e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e78ec:
    // 0x1e78ec: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e78ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    ctx->pc = 0x1e78f0u;
    return;
}

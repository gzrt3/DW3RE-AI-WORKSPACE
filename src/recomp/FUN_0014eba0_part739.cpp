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


void FUN_0014eba0_part739(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b7140u: goto label_2b7140;
        case 0x2b7144u: goto label_2b7144;
        case 0x2b7148u: goto label_2b7148;
        case 0x2b714cu: goto label_2b714c;
        case 0x2b7150u: goto label_2b7150;
        case 0x2b7154u: goto label_2b7154;
        case 0x2b7158u: goto label_2b7158;
        case 0x2b715cu: goto label_2b715c;
        case 0x2b7160u: goto label_2b7160;
        case 0x2b7164u: goto label_2b7164;
        case 0x2b7168u: goto label_2b7168;
        case 0x2b716cu: goto label_2b716c;
        case 0x2b7170u: goto label_2b7170;
        case 0x2b7174u: goto label_2b7174;
        case 0x2b7178u: goto label_2b7178;
        case 0x2b717cu: goto label_2b717c;
        case 0x2b7180u: goto label_2b7180;
        case 0x2b7184u: goto label_2b7184;
        case 0x2b7188u: goto label_2b7188;
        case 0x2b718cu: goto label_2b718c;
        case 0x2b7190u: goto label_2b7190;
        case 0x2b7194u: goto label_2b7194;
        case 0x2b7198u: goto label_2b7198;
        case 0x2b719cu: goto label_2b719c;
        case 0x2b71a0u: goto label_2b71a0;
        case 0x2b71a4u: goto label_2b71a4;
        case 0x2b71a8u: goto label_2b71a8;
        case 0x2b71acu: goto label_2b71ac;
        case 0x2b71b0u: goto label_2b71b0;
        case 0x2b71b4u: goto label_2b71b4;
        case 0x2b71b8u: goto label_2b71b8;
        case 0x2b71bcu: goto label_2b71bc;
        case 0x2b71c0u: goto label_2b71c0;
        case 0x2b71c4u: goto label_2b71c4;
        case 0x2b71c8u: goto label_2b71c8;
        case 0x2b71ccu: goto label_2b71cc;
        case 0x2b71d0u: goto label_2b71d0;
        case 0x2b71d4u: goto label_2b71d4;
        case 0x2b71d8u: goto label_2b71d8;
        case 0x2b71dcu: goto label_2b71dc;
        case 0x2b71e0u: goto label_2b71e0;
        case 0x2b71e4u: goto label_2b71e4;
        case 0x2b71e8u: goto label_2b71e8;
        case 0x2b71ecu: goto label_2b71ec;
        case 0x2b71f0u: goto label_2b71f0;
        case 0x2b71f4u: goto label_2b71f4;
        case 0x2b71f8u: goto label_2b71f8;
        case 0x2b71fcu: goto label_2b71fc;
        case 0x2b7200u: goto label_2b7200;
        case 0x2b7204u: goto label_2b7204;
        case 0x2b7208u: goto label_2b7208;
        case 0x2b720cu: goto label_2b720c;
        case 0x2b7210u: goto label_2b7210;
        case 0x2b7214u: goto label_2b7214;
        case 0x2b7218u: goto label_2b7218;
        case 0x2b721cu: goto label_2b721c;
        case 0x2b7220u: goto label_2b7220;
        case 0x2b7224u: goto label_2b7224;
        case 0x2b7228u: goto label_2b7228;
        case 0x2b722cu: goto label_2b722c;
        case 0x2b7230u: goto label_2b7230;
        case 0x2b7234u: goto label_2b7234;
        case 0x2b7238u: goto label_2b7238;
        case 0x2b723cu: goto label_2b723c;
        case 0x2b7240u: goto label_2b7240;
        case 0x2b7244u: goto label_2b7244;
        case 0x2b7248u: goto label_2b7248;
        case 0x2b724cu: goto label_2b724c;
        case 0x2b7250u: goto label_2b7250;
        case 0x2b7254u: goto label_2b7254;
        case 0x2b7258u: goto label_2b7258;
        case 0x2b725cu: goto label_2b725c;
        case 0x2b7260u: goto label_2b7260;
        case 0x2b7264u: goto label_2b7264;
        case 0x2b7268u: goto label_2b7268;
        case 0x2b726cu: goto label_2b726c;
        case 0x2b7270u: goto label_2b7270;
        case 0x2b7274u: goto label_2b7274;
        case 0x2b7278u: goto label_2b7278;
        case 0x2b727cu: goto label_2b727c;
        case 0x2b7280u: goto label_2b7280;
        case 0x2b7284u: goto label_2b7284;
        case 0x2b7288u: goto label_2b7288;
        case 0x2b728cu: goto label_2b728c;
        case 0x2b7290u: goto label_2b7290;
        case 0x2b7294u: goto label_2b7294;
        case 0x2b7298u: goto label_2b7298;
        case 0x2b729cu: goto label_2b729c;
        case 0x2b72a0u: goto label_2b72a0;
        case 0x2b72a4u: goto label_2b72a4;
        case 0x2b72a8u: goto label_2b72a8;
        case 0x2b72acu: goto label_2b72ac;
        case 0x2b72b0u: goto label_2b72b0;
        case 0x2b72b4u: goto label_2b72b4;
        case 0x2b72b8u: goto label_2b72b8;
        case 0x2b72bcu: goto label_2b72bc;
        case 0x2b72c0u: goto label_2b72c0;
        case 0x2b72c4u: goto label_2b72c4;
        case 0x2b72c8u: goto label_2b72c8;
        case 0x2b72ccu: goto label_2b72cc;
        case 0x2b72d0u: goto label_2b72d0;
        case 0x2b72d4u: goto label_2b72d4;
        case 0x2b72d8u: goto label_2b72d8;
        case 0x2b72dcu: goto label_2b72dc;
        case 0x2b72e0u: goto label_2b72e0;
        case 0x2b72e4u: goto label_2b72e4;
        case 0x2b72e8u: goto label_2b72e8;
        case 0x2b72ecu: goto label_2b72ec;
        case 0x2b72f0u: goto label_2b72f0;
        case 0x2b72f4u: goto label_2b72f4;
        case 0x2b72f8u: goto label_2b72f8;
        case 0x2b72fcu: goto label_2b72fc;
        case 0x2b7300u: goto label_2b7300;
        case 0x2b7304u: goto label_2b7304;
        case 0x2b7308u: goto label_2b7308;
        case 0x2b730cu: goto label_2b730c;
        case 0x2b7310u: goto label_2b7310;
        case 0x2b7314u: goto label_2b7314;
        case 0x2b7318u: goto label_2b7318;
        case 0x2b731cu: goto label_2b731c;
        case 0x2b7320u: goto label_2b7320;
        case 0x2b7324u: goto label_2b7324;
        case 0x2b7328u: goto label_2b7328;
        case 0x2b732cu: goto label_2b732c;
        case 0x2b7330u: goto label_2b7330;
        case 0x2b7334u: goto label_2b7334;
        case 0x2b7338u: goto label_2b7338;
        case 0x2b733cu: goto label_2b733c;
        case 0x2b7340u: goto label_2b7340;
        case 0x2b7344u: goto label_2b7344;
        case 0x2b7348u: goto label_2b7348;
        case 0x2b734cu: goto label_2b734c;
        case 0x2b7350u: goto label_2b7350;
        case 0x2b7354u: goto label_2b7354;
        case 0x2b7358u: goto label_2b7358;
        case 0x2b735cu: goto label_2b735c;
        case 0x2b7360u: goto label_2b7360;
        case 0x2b7364u: goto label_2b7364;
        case 0x2b7368u: goto label_2b7368;
        case 0x2b736cu: goto label_2b736c;
        case 0x2b7370u: goto label_2b7370;
        case 0x2b7374u: goto label_2b7374;
        case 0x2b7378u: goto label_2b7378;
        case 0x2b737cu: goto label_2b737c;
        case 0x2b7380u: goto label_2b7380;
        case 0x2b7384u: goto label_2b7384;
        case 0x2b7388u: goto label_2b7388;
        case 0x2b738cu: goto label_2b738c;
        case 0x2b7390u: goto label_2b7390;
        case 0x2b7394u: goto label_2b7394;
        case 0x2b7398u: goto label_2b7398;
        case 0x2b739cu: goto label_2b739c;
        case 0x2b73a0u: goto label_2b73a0;
        case 0x2b73a4u: goto label_2b73a4;
        case 0x2b73a8u: goto label_2b73a8;
        case 0x2b73acu: goto label_2b73ac;
        case 0x2b73b0u: goto label_2b73b0;
        case 0x2b73b4u: goto label_2b73b4;
        case 0x2b73b8u: goto label_2b73b8;
        case 0x2b73bcu: goto label_2b73bc;
        case 0x2b73c0u: goto label_2b73c0;
        case 0x2b73c4u: goto label_2b73c4;
        case 0x2b73c8u: goto label_2b73c8;
        case 0x2b73ccu: goto label_2b73cc;
        case 0x2b73d0u: goto label_2b73d0;
        case 0x2b73d4u: goto label_2b73d4;
        case 0x2b73d8u: goto label_2b73d8;
        case 0x2b73dcu: goto label_2b73dc;
        case 0x2b73e0u: goto label_2b73e0;
        case 0x2b73e4u: goto label_2b73e4;
        case 0x2b73e8u: goto label_2b73e8;
        case 0x2b73ecu: goto label_2b73ec;
        case 0x2b73f0u: goto label_2b73f0;
        case 0x2b73f4u: goto label_2b73f4;
        case 0x2b73f8u: goto label_2b73f8;
        case 0x2b73fcu: goto label_2b73fc;
        case 0x2b7400u: goto label_2b7400;
        case 0x2b7404u: goto label_2b7404;
        case 0x2b7408u: goto label_2b7408;
        case 0x2b740cu: goto label_2b740c;
        case 0x2b7410u: goto label_2b7410;
        case 0x2b7414u: goto label_2b7414;
        case 0x2b7418u: goto label_2b7418;
        case 0x2b741cu: goto label_2b741c;
        case 0x2b7420u: goto label_2b7420;
        case 0x2b7424u: goto label_2b7424;
        case 0x2b7428u: goto label_2b7428;
        case 0x2b742cu: goto label_2b742c;
        case 0x2b7430u: goto label_2b7430;
        case 0x2b7434u: goto label_2b7434;
        case 0x2b7438u: goto label_2b7438;
        case 0x2b743cu: goto label_2b743c;
        case 0x2b7440u: goto label_2b7440;
        case 0x2b7444u: goto label_2b7444;
        case 0x2b7448u: goto label_2b7448;
        case 0x2b744cu: goto label_2b744c;
        case 0x2b7450u: goto label_2b7450;
        case 0x2b7454u: goto label_2b7454;
        case 0x2b7458u: goto label_2b7458;
        case 0x2b745cu: goto label_2b745c;
        case 0x2b7460u: goto label_2b7460;
        case 0x2b7464u: goto label_2b7464;
        case 0x2b7468u: goto label_2b7468;
        case 0x2b746cu: goto label_2b746c;
        case 0x2b7470u: goto label_2b7470;
        case 0x2b7474u: goto label_2b7474;
        case 0x2b7478u: goto label_2b7478;
        case 0x2b747cu: goto label_2b747c;
        case 0x2b7480u: goto label_2b7480;
        case 0x2b7484u: goto label_2b7484;
        case 0x2b7488u: goto label_2b7488;
        case 0x2b748cu: goto label_2b748c;
        case 0x2b7490u: goto label_2b7490;
        case 0x2b7494u: goto label_2b7494;
        case 0x2b7498u: goto label_2b7498;
        case 0x2b749cu: goto label_2b749c;
        case 0x2b74a0u: goto label_2b74a0;
        case 0x2b74a4u: goto label_2b74a4;
        case 0x2b74a8u: goto label_2b74a8;
        case 0x2b74acu: goto label_2b74ac;
        case 0x2b74b0u: goto label_2b74b0;
        case 0x2b74b4u: goto label_2b74b4;
        case 0x2b74b8u: goto label_2b74b8;
        case 0x2b74bcu: goto label_2b74bc;
        case 0x2b74c0u: goto label_2b74c0;
        case 0x2b74c4u: goto label_2b74c4;
        case 0x2b74c8u: goto label_2b74c8;
        case 0x2b74ccu: goto label_2b74cc;
        case 0x2b74d0u: goto label_2b74d0;
        case 0x2b74d4u: goto label_2b74d4;
        case 0x2b74d8u: goto label_2b74d8;
        case 0x2b74dcu: goto label_2b74dc;
        case 0x2b74e0u: goto label_2b74e0;
        case 0x2b74e4u: goto label_2b74e4;
        case 0x2b74e8u: goto label_2b74e8;
        case 0x2b74ecu: goto label_2b74ec;
        case 0x2b74f0u: goto label_2b74f0;
        case 0x2b74f4u: goto label_2b74f4;
        case 0x2b74f8u: goto label_2b74f8;
        case 0x2b74fcu: goto label_2b74fc;
        case 0x2b7500u: goto label_2b7500;
        case 0x2b7504u: goto label_2b7504;
        case 0x2b7508u: goto label_2b7508;
        case 0x2b750cu: goto label_2b750c;
        case 0x2b7510u: goto label_2b7510;
        case 0x2b7514u: goto label_2b7514;
        case 0x2b7518u: goto label_2b7518;
        case 0x2b751cu: goto label_2b751c;
        case 0x2b7520u: goto label_2b7520;
        case 0x2b7524u: goto label_2b7524;
        case 0x2b7528u: goto label_2b7528;
        case 0x2b752cu: goto label_2b752c;
        case 0x2b7530u: goto label_2b7530;
        case 0x2b7534u: goto label_2b7534;
        case 0x2b7538u: goto label_2b7538;
        case 0x2b753cu: goto label_2b753c;
        case 0x2b7540u: goto label_2b7540;
        case 0x2b7544u: goto label_2b7544;
        case 0x2b7548u: goto label_2b7548;
        case 0x2b754cu: goto label_2b754c;
        case 0x2b7550u: goto label_2b7550;
        case 0x2b7554u: goto label_2b7554;
        case 0x2b7558u: goto label_2b7558;
        case 0x2b755cu: goto label_2b755c;
        case 0x2b7560u: goto label_2b7560;
        case 0x2b7564u: goto label_2b7564;
        case 0x2b7568u: goto label_2b7568;
        case 0x2b756cu: goto label_2b756c;
        case 0x2b7570u: goto label_2b7570;
        case 0x2b7574u: goto label_2b7574;
        case 0x2b7578u: goto label_2b7578;
        case 0x2b757cu: goto label_2b757c;
        case 0x2b7580u: goto label_2b7580;
        case 0x2b7584u: goto label_2b7584;
        case 0x2b7588u: goto label_2b7588;
        case 0x2b758cu: goto label_2b758c;
        case 0x2b7590u: goto label_2b7590;
        case 0x2b7594u: goto label_2b7594;
        case 0x2b7598u: goto label_2b7598;
        case 0x2b759cu: goto label_2b759c;
        case 0x2b75a0u: goto label_2b75a0;
        case 0x2b75a4u: goto label_2b75a4;
        case 0x2b75a8u: goto label_2b75a8;
        case 0x2b75acu: goto label_2b75ac;
        case 0x2b75b0u: goto label_2b75b0;
        case 0x2b75b4u: goto label_2b75b4;
        case 0x2b75b8u: goto label_2b75b8;
        case 0x2b75bcu: goto label_2b75bc;
        case 0x2b75c0u: goto label_2b75c0;
        case 0x2b75c4u: goto label_2b75c4;
        case 0x2b75c8u: goto label_2b75c8;
        case 0x2b75ccu: goto label_2b75cc;
        case 0x2b75d0u: goto label_2b75d0;
        case 0x2b75d4u: goto label_2b75d4;
        case 0x2b75d8u: goto label_2b75d8;
        case 0x2b75dcu: goto label_2b75dc;
        case 0x2b75e0u: goto label_2b75e0;
        case 0x2b75e4u: goto label_2b75e4;
        case 0x2b75e8u: goto label_2b75e8;
        case 0x2b75ecu: goto label_2b75ec;
        case 0x2b75f0u: goto label_2b75f0;
        case 0x2b75f4u: goto label_2b75f4;
        case 0x2b75f8u: goto label_2b75f8;
        case 0x2b75fcu: goto label_2b75fc;
        case 0x2b7600u: goto label_2b7600;
        case 0x2b7604u: goto label_2b7604;
        case 0x2b7608u: goto label_2b7608;
        case 0x2b760cu: goto label_2b760c;
        case 0x2b7610u: goto label_2b7610;
        case 0x2b7614u: goto label_2b7614;
        case 0x2b7618u: goto label_2b7618;
        case 0x2b761cu: goto label_2b761c;
        case 0x2b7620u: goto label_2b7620;
        case 0x2b7624u: goto label_2b7624;
        case 0x2b7628u: goto label_2b7628;
        case 0x2b762cu: goto label_2b762c;
        case 0x2b7630u: goto label_2b7630;
        case 0x2b7634u: goto label_2b7634;
        case 0x2b7638u: goto label_2b7638;
        case 0x2b763cu: goto label_2b763c;
        case 0x2b7640u: goto label_2b7640;
        case 0x2b7644u: goto label_2b7644;
        case 0x2b7648u: goto label_2b7648;
        case 0x2b764cu: goto label_2b764c;
        case 0x2b7650u: goto label_2b7650;
        case 0x2b7654u: goto label_2b7654;
        case 0x2b7658u: goto label_2b7658;
        case 0x2b765cu: goto label_2b765c;
        case 0x2b7660u: goto label_2b7660;
        case 0x2b7664u: goto label_2b7664;
        case 0x2b7668u: goto label_2b7668;
        case 0x2b766cu: goto label_2b766c;
        case 0x2b7670u: goto label_2b7670;
        case 0x2b7674u: goto label_2b7674;
        case 0x2b7678u: goto label_2b7678;
        case 0x2b767cu: goto label_2b767c;
        case 0x2b7680u: goto label_2b7680;
        case 0x2b7684u: goto label_2b7684;
        case 0x2b7688u: goto label_2b7688;
        case 0x2b768cu: goto label_2b768c;
        case 0x2b7690u: goto label_2b7690;
        case 0x2b7694u: goto label_2b7694;
        case 0x2b7698u: goto label_2b7698;
        case 0x2b769cu: goto label_2b769c;
        case 0x2b76a0u: goto label_2b76a0;
        case 0x2b76a4u: goto label_2b76a4;
        case 0x2b76a8u: goto label_2b76a8;
        case 0x2b76acu: goto label_2b76ac;
        case 0x2b76b0u: goto label_2b76b0;
        case 0x2b76b4u: goto label_2b76b4;
        case 0x2b76b8u: goto label_2b76b8;
        case 0x2b76bcu: goto label_2b76bc;
        case 0x2b76c0u: goto label_2b76c0;
        case 0x2b76c4u: goto label_2b76c4;
        case 0x2b76c8u: goto label_2b76c8;
        case 0x2b76ccu: goto label_2b76cc;
        case 0x2b76d0u: goto label_2b76d0;
        case 0x2b76d4u: goto label_2b76d4;
        case 0x2b76d8u: goto label_2b76d8;
        case 0x2b76dcu: goto label_2b76dc;
        case 0x2b76e0u: goto label_2b76e0;
        case 0x2b76e4u: goto label_2b76e4;
        case 0x2b76e8u: goto label_2b76e8;
        case 0x2b76ecu: goto label_2b76ec;
        case 0x2b76f0u: goto label_2b76f0;
        case 0x2b76f4u: goto label_2b76f4;
        case 0x2b76f8u: goto label_2b76f8;
        case 0x2b76fcu: goto label_2b76fc;
        case 0x2b7700u: goto label_2b7700;
        case 0x2b7704u: goto label_2b7704;
        case 0x2b7708u: goto label_2b7708;
        case 0x2b770cu: goto label_2b770c;
        case 0x2b7710u: goto label_2b7710;
        case 0x2b7714u: goto label_2b7714;
        case 0x2b7718u: goto label_2b7718;
        case 0x2b771cu: goto label_2b771c;
        case 0x2b7720u: goto label_2b7720;
        case 0x2b7724u: goto label_2b7724;
        case 0x2b7728u: goto label_2b7728;
        case 0x2b772cu: goto label_2b772c;
        case 0x2b7730u: goto label_2b7730;
        case 0x2b7734u: goto label_2b7734;
        case 0x2b7738u: goto label_2b7738;
        case 0x2b773cu: goto label_2b773c;
        case 0x2b7740u: goto label_2b7740;
        case 0x2b7744u: goto label_2b7744;
        case 0x2b7748u: goto label_2b7748;
        case 0x2b774cu: goto label_2b774c;
        case 0x2b7750u: goto label_2b7750;
        case 0x2b7754u: goto label_2b7754;
        case 0x2b7758u: goto label_2b7758;
        case 0x2b775cu: goto label_2b775c;
        case 0x2b7760u: goto label_2b7760;
        case 0x2b7764u: goto label_2b7764;
        case 0x2b7768u: goto label_2b7768;
        case 0x2b776cu: goto label_2b776c;
        case 0x2b7770u: goto label_2b7770;
        case 0x2b7774u: goto label_2b7774;
        case 0x2b7778u: goto label_2b7778;
        case 0x2b777cu: goto label_2b777c;
        case 0x2b7780u: goto label_2b7780;
        case 0x2b7784u: goto label_2b7784;
        case 0x2b7788u: goto label_2b7788;
        case 0x2b778cu: goto label_2b778c;
        case 0x2b7790u: goto label_2b7790;
        case 0x2b7794u: goto label_2b7794;
        case 0x2b7798u: goto label_2b7798;
        case 0x2b779cu: goto label_2b779c;
        case 0x2b77a0u: goto label_2b77a0;
        case 0x2b77a4u: goto label_2b77a4;
        case 0x2b77a8u: goto label_2b77a8;
        case 0x2b77acu: goto label_2b77ac;
        case 0x2b77b0u: goto label_2b77b0;
        case 0x2b77b4u: goto label_2b77b4;
        case 0x2b77b8u: goto label_2b77b8;
        case 0x2b77bcu: goto label_2b77bc;
        case 0x2b77c0u: goto label_2b77c0;
        case 0x2b77c4u: goto label_2b77c4;
        case 0x2b77c8u: goto label_2b77c8;
        case 0x2b77ccu: goto label_2b77cc;
        case 0x2b77d0u: goto label_2b77d0;
        case 0x2b77d4u: goto label_2b77d4;
        case 0x2b77d8u: goto label_2b77d8;
        case 0x2b77dcu: goto label_2b77dc;
        case 0x2b77e0u: goto label_2b77e0;
        case 0x2b77e4u: goto label_2b77e4;
        case 0x2b77e8u: goto label_2b77e8;
        case 0x2b77ecu: goto label_2b77ec;
        case 0x2b77f0u: goto label_2b77f0;
        case 0x2b77f4u: goto label_2b77f4;
        case 0x2b77f8u: goto label_2b77f8;
        case 0x2b77fcu: goto label_2b77fc;
        case 0x2b7800u: goto label_2b7800;
        case 0x2b7804u: goto label_2b7804;
        case 0x2b7808u: goto label_2b7808;
        case 0x2b780cu: goto label_2b780c;
        case 0x2b7810u: goto label_2b7810;
        case 0x2b7814u: goto label_2b7814;
        case 0x2b7818u: goto label_2b7818;
        case 0x2b781cu: goto label_2b781c;
        case 0x2b7820u: goto label_2b7820;
        case 0x2b7824u: goto label_2b7824;
        case 0x2b7828u: goto label_2b7828;
        case 0x2b782cu: goto label_2b782c;
        case 0x2b7830u: goto label_2b7830;
        case 0x2b7834u: goto label_2b7834;
        case 0x2b7838u: goto label_2b7838;
        case 0x2b783cu: goto label_2b783c;
        case 0x2b7840u: goto label_2b7840;
        case 0x2b7844u: goto label_2b7844;
        case 0x2b7848u: goto label_2b7848;
        case 0x2b784cu: goto label_2b784c;
        case 0x2b7850u: goto label_2b7850;
        case 0x2b7854u: goto label_2b7854;
        case 0x2b7858u: goto label_2b7858;
        case 0x2b785cu: goto label_2b785c;
        case 0x2b7860u: goto label_2b7860;
        case 0x2b7864u: goto label_2b7864;
        case 0x2b7868u: goto label_2b7868;
        case 0x2b786cu: goto label_2b786c;
        case 0x2b7870u: goto label_2b7870;
        case 0x2b7874u: goto label_2b7874;
        case 0x2b7878u: goto label_2b7878;
        case 0x2b787cu: goto label_2b787c;
        case 0x2b7880u: goto label_2b7880;
        case 0x2b7884u: goto label_2b7884;
        case 0x2b7888u: goto label_2b7888;
        case 0x2b788cu: goto label_2b788c;
        case 0x2b7890u: goto label_2b7890;
        case 0x2b7894u: goto label_2b7894;
        case 0x2b7898u: goto label_2b7898;
        case 0x2b789cu: goto label_2b789c;
        case 0x2b78a0u: goto label_2b78a0;
        case 0x2b78a4u: goto label_2b78a4;
        case 0x2b78a8u: goto label_2b78a8;
        case 0x2b78acu: goto label_2b78ac;
        case 0x2b78b0u: goto label_2b78b0;
        case 0x2b78b4u: goto label_2b78b4;
        case 0x2b78b8u: goto label_2b78b8;
        case 0x2b78bcu: goto label_2b78bc;
        case 0x2b78c0u: goto label_2b78c0;
        case 0x2b78c4u: goto label_2b78c4;
        case 0x2b78c8u: goto label_2b78c8;
        case 0x2b78ccu: goto label_2b78cc;
        case 0x2b78d0u: goto label_2b78d0;
        case 0x2b78d4u: goto label_2b78d4;
        case 0x2b78d8u: goto label_2b78d8;
        case 0x2b78dcu: goto label_2b78dc;
        case 0x2b78e0u: goto label_2b78e0;
        case 0x2b78e4u: goto label_2b78e4;
        case 0x2b78e8u: goto label_2b78e8;
        case 0x2b78ecu: goto label_2b78ec;
        case 0x2b78f0u: goto label_2b78f0;
        case 0x2b78f4u: goto label_2b78f4;
        case 0x2b78f8u: goto label_2b78f8;
        case 0x2b78fcu: goto label_2b78fc;
        case 0x2b7900u: goto label_2b7900;
        case 0x2b7904u: goto label_2b7904;
        case 0x2b7908u: goto label_2b7908;
        case 0x2b790cu: goto label_2b790c;
        default: return;
    }

label_2b7140:
    // 0x2b7140: 0x846080a  j           func_1182028
label_2b7144:
    if (ctx->pc == 0x2B7144u) {
        ctx->pc = 0x2B7144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7140u;
        // 0x2b7144: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7148u;
        goto label_2b7148;
    }
    ctx->pc = 0x2B7140u;
    ctx->pc = 0x2B7144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7140u;
    // 0x2b7144: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1182028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1182028u, 0x2B7140u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7148u;
label_2b7148:
    // 0x2b7148: 0x100508ca  beq         $zero, $a1, . + 4 + (0x8CA << 2)
label_2b714c:
    if (ctx->pc == 0x2B714Cu) {
        ctx->pc = 0x2B714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7148u;
        // 0x2b714c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7150u;
        goto label_2b7150;
    }
    ctx->pc = 0x2B7148u;
    {
        const bool branch_taken_0x2b7148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7148u;
        // 0x2b714c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7148) {
            ctx->pc = 0x2B9474u;
            { ctx->pc = 0x2b9474; return; }
        }
    }
    ctx->pc = 0x2B7150u;
label_2b7150:
    // 0x2b7150: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b7150u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7154:
    // 0x2b7154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7158:
    // 0x2b7158: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b7158u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b715c:
    // 0x2b715c: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b715cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2b7160:
    // 0x2b7160: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b7160u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7164:
    // 0x2b7164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7168:
    // 0x2b7168: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b7168u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b716c:
    // 0x2b716c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b716cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7170:
    // 0x2b7170: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b7170u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7174:
    // 0x2b7174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7178:
    // 0x2b7178: 0x800629b0  lb          $a2, 0x29B0($zero)
    ctx->pc = 0x2b7178u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x29B0u));
label_2b717c:
    // 0x2b717c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b717cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7180:
    // 0x2b7180: 0x81e5a37d  lb          $a1, -0x5C83($t7)
    ctx->pc = 0x2b7180u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b7184:
    // 0x2b7184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7188:
    // 0x2b7188: 0x81e5ab7d  lb          $a1, -0x5483($t7)
    ctx->pc = 0x2b7188u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b718c:
    // 0x2b718c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b718cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7190:
    // 0x2b7190: 0x81e5b37d  lb          $a1, -0x4C83($t7)
    ctx->pc = 0x2b7190u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b7194:
    // 0x2b7194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7198:
    // 0x2b7198: 0x81e5bb7d  lb          $a1, -0x4483($t7)
    ctx->pc = 0x2b7198u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b719c:
    // 0x2b719c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b719cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71a0:
    // 0x2b71a0: 0x81e5c37d  lb          $a1, -0x3C83($t7)
    ctx->pc = 0x2b71a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b71a4:
    // 0x2b71a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71a8:
    // 0x2b71a8: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b71a8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b71ac:
    // 0x2b71ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71b0:
    // 0x2b71b0: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b71b0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b71b4:
    // 0x2b71b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71b8:
    // 0x2b71b8: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b71b8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b71bc:
    // 0x2b71bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71c0:
    // 0x2b71c0: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b71c0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b71c4:
    // 0x2b71c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71c8:
    // 0x2b71c8: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b71c8u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b71cc:
    // 0x2b71cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71d0:
    // 0x2b71d0: 0x81e6a37d  lb          $a2, -0x5C83($t7)
    ctx->pc = 0x2b71d0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b71d4:
    // 0x2b71d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71d8:
    // 0x2b71d8: 0x81e6ab7d  lb          $a2, -0x5483($t7)
    ctx->pc = 0x2b71d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b71dc:
    // 0x2b71dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71e0:
    // 0x2b71e0: 0x81e6b37d  lb          $a2, -0x4C83($t7)
    ctx->pc = 0x2b71e0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b71e4:
    // 0x2b71e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71e8:
    // 0x2b71e8: 0x81e6bb7d  lb          $a2, -0x4483($t7)
    ctx->pc = 0x2b71e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b71ec:
    // 0x2b71ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71f0:
    // 0x2b71f0: 0x81e6c37d  lb          $a2, -0x3C83($t7)
    ctx->pc = 0x2b71f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b71f4:
    // 0x2b71f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b71f8:
    // 0x2b71f8: 0x80940b7c  lb          $s4, 0xB7C($a0)
    ctx->pc = 0x2b71f8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2940)));
label_2b71fc:
    // 0x2b71fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b71fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7200:
    // 0x2b7200: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b7200u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b7204:
    // 0x2b7204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7208:
    // 0x2b7208: 0x1004000a  beq         $zero, $a0, . + 4 + (0xA << 2)
label_2b720c:
    if (ctx->pc == 0x2B720Cu) {
        ctx->pc = 0x2B720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7208u;
        // 0x2b720c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7210u;
        goto label_2b7210;
    }
    ctx->pc = 0x2B7208u;
    {
        const bool branch_taken_0x2b7208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7208u;
        // 0x2b720c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7208) {
            ctx->pc = 0x2B7234u;
            goto label_2b7234;
        }
    }
    ctx->pc = 0x2B7210u;
label_2b7210:
    // 0x2b7210: 0xa241000  j           func_8904000
label_2b7214:
    if (ctx->pc == 0x2B7214u) {
        ctx->pc = 0x2B7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7210u;
        // 0x2b7214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7218u;
        goto label_2b7218;
    }
    ctx->pc = 0x2B7210u;
    ctx->pc = 0x2B7214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7210u;
    // 0x2b7214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8904000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8904000u, 0x2B7210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7218u;
label_2b7218:
    // 0x2b7218: 0x800008f0  lb          $zero, 0x8F0($zero)
    ctx->pc = 0x2b7218u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x8F0u));
label_2b721c:
    // 0x2b721c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b721cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7220:
    // 0x2b7220: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7220u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7224:
    // 0x2b7224: 0x540541  .word       0x00540541                   # INVALID     $v0, $s4, 0x541 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7224u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7224 raw=0x00540541");
 /* MITIGATED */
label_2b7228:
    // 0x2b7228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b722c:
    // 0x2b722c: 0x1140545  .word       0x01140545                   # INVALID     $t0, $s4, 0x545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b722cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B722C raw=0x01140545");
 /* MITIGATED */
label_2b7230:
    // 0x2b7230: 0x1501802  .word       0x01501802                   # srl         $v1, $s0, 0 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7230u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 0));
label_2b7234:
    // 0x2b7234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7238:
    // 0x2b7238: 0x901803  .word       0x00901803                   # sra         $v1, $s0, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7238u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 0));
label_2b723c:
    // 0x2b723c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b723cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7240:
    // 0x2b7240: 0x90c1800  j           func_4306000
label_2b7244:
    if (ctx->pc == 0x2B7244u) {
        ctx->pc = 0x2B7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7240u;
        // 0x2b7244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7248u;
        goto label_2b7248;
    }
    ctx->pc = 0x2B7240u;
    ctx->pc = 0x2B7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7240u;
    // 0x2b7244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306000u, 0x2B7240u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7248u;
label_2b7248:
    // 0x2b7248: 0x10040000  beq         $zero, $a0, . + 4 + (0x0 << 2)
label_2b724c:
    if (ctx->pc == 0x2B724Cu) {
        ctx->pc = 0x2B724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7248u;
        // 0x2b724c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7250u;
        goto label_2b7250;
    }
    ctx->pc = 0x2B7248u;
    {
        const bool branch_taken_0x2b7248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7248u;
        // 0x2b724c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7248) {
            ctx->pc = 0x2B724Cu;
            goto label_2b724c;
        }
    }
    ctx->pc = 0x2B7250u;
label_2b7250:
    // 0x2b7250: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b7254:
    if (ctx->pc == 0x2B7254u) {
        ctx->pc = 0x2B7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7250u;
        // 0x2b7254: 0x1f009bc  .word       0x01F009BC                   # dsll32      $at, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7258u;
        goto label_2b7258;
    }
    ctx->pc = 0x2B7250u;
    {
        const bool branch_taken_0x2b7250 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7250u;
        // 0x2b7254: 0x1f009bc  .word       0x01F009BC                   # dsll32      $at, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) << (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7250) {
            ctx->pc = 0x2B9250u;
            { ctx->pc = 0x2b9250; return; }
        }
    }
    ctx->pc = 0x2B7258u;
label_2b7258:
    // 0x2b7258: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b7258u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b725c:
    // 0x2b725c: 0x1f010bd  .word       0x01F010BD                   # INVALID     $t7, $s0, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b725cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B725C raw=0x01F010BD");
 /* MITIGATED */
label_2b7260:
    // 0x2b7260: 0x1e51800  .word       0x01E51800                   # sll         $v1, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2b7264:
    // 0x2b7264: 0x1f018be  .word       0x01F018BE                   # dsrl32      $v1, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (32 + 2));
label_2b7268:
    // 0x2b7268: 0x1e61801  .word       0x01E61801                   # INVALID     $t7, $a2, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7268u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7268 raw=0x01E61801");
 /* MITIGATED */
label_2b726c:
    // 0x2b726c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b726cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b7270:
    // 0x2b7270: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b7270u;
    // NOP (addi to $zero)
label_2b7274:
    // 0x2b7274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7278:
    // 0x2b7278: 0x81e52b7d  lb          $a1, 0x2B7D($t7)
    ctx->pc = 0x2b7278u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11133)));
label_2b727c:
    // 0x2b727c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b727cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7280:
    // 0x2b7280: 0x81e6337d  lb          $a2, 0x337D($t7)
    ctx->pc = 0x2b7280u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
label_2b7284:
    // 0x2b7284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7288:
    // 0x2b7288: 0x10031803  beq         $zero, $v1, . + 4 + (0x1803 << 2)
label_2b728c:
    if (ctx->pc == 0x2B728Cu) {
        ctx->pc = 0x2B728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7288u;
        // 0x2b728c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7290u;
        goto label_2b7290;
    }
    ctx->pc = 0x2B7288u;
    {
        const bool branch_taken_0x2b7288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7288u;
        // 0x2b728c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7288) {
            ctx->pc = 0x2BD298u;
            { ctx->pc = 0x2bd298; return; }
        }
    }
    ctx->pc = 0x2B7290u;
label_2b7290:
    // 0x2b7290: 0x1f11800  .word       0x01F11800                   # sll         $v1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 0));
label_2b7294:
    // 0x2b7294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7298:
    // 0x2b7298: 0x1e61801  .word       0x01E61801                   # INVALID     $t7, $a2, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7298u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7298 raw=0x01E61801");
 /* MITIGATED */
label_2b729c:
    // 0x2b729c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b729cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b72a0:
    // 0x2b72a0: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b72a0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b72a4:
    // 0x2b72a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b72a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b72a8:
    // 0x2b72a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b72a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b72ac:
    // 0x2b72ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b72acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b72b0:
    // 0x2b72b0: 0x80918b3d  lb          $s1, -0x74C3($a0)
    ctx->pc = 0x2b72b0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294937405)));
label_2b72b4:
    // 0x2b72b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b72b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b72b8:
    // 0x2b72b8: 0x8051033d  lb          $s1, 0x33D($v0)
    ctx->pc = 0x2b72b8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b72bc:
    // 0x2b72bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b72bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b72c0:
    // 0x2b72c0: 0x8046033d  lb          $a2, 0x33D($v0)
    ctx->pc = 0x2b72c0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b72c4:
    // 0x2b72c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b72c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b72c8:
    // 0x2b72c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b72c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b72cc:
    // 0x2b72cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b72ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b72d0:
    // 0x2b72d0: 0x1f41802  .word       0x01F41802                   # srl         $v1, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b72d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 0));
label_2b72d4:
    // 0x2b72d4: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b72d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b72d8:
    // 0x2b72d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b72d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b72dc:
    // 0x2b72dc: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b72dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b72e0:
    // 0x2b72e0: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
label_2b72e4:
    if (ctx->pc == 0x2B72E4u) {
        ctx->pc = 0x2B72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72E0u;
        // 0x2b72e4: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B72E4 raw=0x01C0E7DC");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B72E8u;
        goto label_2b72e8;
    }
    ctx->pc = 0x2B72E0u;
    {
        const bool branch_taken_0x2b72e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72E0u;
        // 0x2b72e4: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B72E4 raw=0x01C0E7DC");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72e0) {
            ctx->pc = 0x2BF2E8u;
            { ctx->pc = 0x2bf2e8; return; }
        }
    }
    ctx->pc = 0x2B72E8u;
label_2b72e8:
    // 0x2b72e8: 0x10020001  beq         $zero, $v0, . + 4 + (0x1 << 2)
label_2b72ec:
    if (ctx->pc == 0x2B72ECu) {
        ctx->pc = 0x2B72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72E8u;
        // 0x2b72ec: 0x1f061bc  .word       0x01F061BC                   # dsll32      $t4, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 16) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B72F0u;
        goto label_2b72f0;
    }
    ctx->pc = 0x2B72E8u;
    {
        const bool branch_taken_0x2b72e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72E8u;
        // 0x2b72ec: 0x1f061bc  .word       0x01F061BC                   # dsll32      $t4, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 16) << (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72e8) {
            ctx->pc = 0x2B72F0u;
            goto label_2b72f0;
        }
    }
    ctx->pc = 0x2B72F0u;
label_2b72f0:
    // 0x2b72f0: 0x800410b4  lb          $a0, 0x10B4($zero)
    ctx->pc = 0x2b72f0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B4u));
label_2b72f4:
    // 0x2b72f4: 0x1f068bd  .word       0x01F068BD                   # INVALID     $t7, $s0, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b72f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B72F4 raw=0x01F068BD");
 /* MITIGATED */
label_2b72f8:
    // 0x2b72f8: 0x10031803  beq         $zero, $v1, . + 4 + (0x1803 << 2)
label_2b72fc:
    if (ctx->pc == 0x2B72FCu) {
        ctx->pc = 0x2B72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72F8u;
        // 0x2b72fc: 0x1f070be  .word       0x01F070BE                   # dsrl32      $t6, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7300u;
        goto label_2b7300;
    }
    ctx->pc = 0x2B72F8u;
    {
        const bool branch_taken_0x2b72f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B72F8u;
        // 0x2b72fc: 0x1f070be  .word       0x01F070BE                   # dsrl32      $t6, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b72f8) {
            ctx->pc = 0x2BD308u;
            { ctx->pc = 0x2bd308; return; }
        }
    }
    ctx->pc = 0x2B7300u;
label_2b7300:
    // 0x2b7300: 0x50020003  beql        $zero, $v0, . + 4 + (0x3 << 2)
label_2b7304:
    if (ctx->pc == 0x2B7304u) {
        ctx->pc = 0x2B7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7300u;
        // 0x2b7304: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B7304 raw=0x0020E7DF");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7308u;
        goto label_2b7308;
    }
    ctx->pc = 0x2B7300u;
    {
        const bool branch_taken_0x2b7300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7300) {
            ctx->pc = 0x2B7304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7300u;
            // 0x2b7304: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//             throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B7304 raw=0x0020E7DF");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7310u;
            goto label_2b7310;
        }
    }
    ctx->pc = 0x2B7308u;
label_2b7308:
    // 0x2b7308: 0x901800  .word       0x00901800                   # sll         $v1, $s0, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_2b730c:
    // 0x2b730c: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b730cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b7310:
    // 0x2b7310: 0x40000002  .word       0x40000002                   # mfc0        $zero, Index # 00000002 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b7310u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b7314:
    // 0x2b7314: 0x558428  .word       0x00558428                   # mfsa        $s0 # 00550400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b7314u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2b7318:
    // 0x2b7318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b731c:
    // 0x2b731c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b731cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7320:
    // 0x2b7320: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7320u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7324:
    // 0x2b7324: 0x155842c  .word       0x0155842C                   # dadd        $s0, $t2, $s5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7324u;
    { int64_t a = (int64_t)GPR_S64(ctx, 10); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b7328:
    // 0x2b7328: 0x10052803  beq         $zero, $a1, . + 4 + (0x2803 << 2)
label_2b732c:
    if (ctx->pc == 0x2B732Cu) {
        ctx->pc = 0x2B732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7328u;
        // 0x2b732c: 0x1cba52a  .word       0x01CBA52A                   # slt         $s4, $t6, $t3 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7330u;
        goto label_2b7330;
    }
    ctx->pc = 0x2B7328u;
    {
        const bool branch_taken_0x2b7328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7328u;
        // 0x2b732c: 0x1cba52a  .word       0x01CBA52A                   # slt         $s4, $t6, $t3 # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7328) {
            ctx->pc = 0x2C1338u;
            { ctx->pc = 0x2c1338; return; }
        }
    }
    ctx->pc = 0x2B7330u;
label_2b7330:
    // 0x2b7330: 0x10063003  beq         $zero, $a2, . + 4 + (0x3003 << 2)
label_2b7334:
    if (ctx->pc == 0x2B7334u) {
        ctx->pc = 0x2B7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7330u;
        // 0x2b7334: 0x1c08c5c  .word       0x01C08C5C                   # dmult       $t6, $zero # 00008C40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7334 raw=0x01C08C5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7338u;
        goto label_2b7338;
    }
    ctx->pc = 0x2B7330u;
    {
        const bool branch_taken_0x2b7330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B7334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7330u;
        // 0x2b7334: 0x1c08c5c  .word       0x01C08C5C                   # dmult       $t6, $zero # 00008C40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7334 raw=0x01C08C5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7330) {
            ctx->pc = 0x2C3340u;
            { ctx->pc = 0x2c3340; return; }
        }
    }
    ctx->pc = 0x2B7338u;
label_2b7338:
    // 0x2b7338: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7338u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b733c:
    // 0x2b733c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b733cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b7340:
    // 0x2b7340: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7340u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7344:
    // 0x2b7344: 0x1c0319c  .word       0x01C0319C                   # dmult       $t6, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7344u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7344 raw=0x01C0319C");
 /* MITIGATED */
label_2b7348:
    // 0x2b7348: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7348u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b734c:
    // 0x2b734c: 0x1e0a51f  .word       0x01E0A51F                   # ddivu       $s4, $t7, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b734cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B734C raw=0x01E0A51F");
 /* MITIGATED */
label_2b7350:
    // 0x2b7350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7354:
    // 0x2b7354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7358:
    // 0x2b7358: 0x3e58ffd  .word       0x03E58FFD                   # INVALID     $ra, $a1, -0x7003 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7358u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7358 raw=0x03E58FFD");
 /* MITIGATED */
label_2b735c:
    // 0x2b735c: 0x1fcf97d  .word       0x01FCF97D                   # INVALID     $t7, $gp, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b735cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B735C raw=0x01FCF97D");
 /* MITIGATED */
label_2b7360:
    // 0x2b7360: 0x3e637fd  .word       0x03E637FD                   # INVALID     $ra, $a2, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7360u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7360 raw=0x03E637FD");
 /* MITIGATED */
label_2b7364:
    // 0x2b7364: 0x1f009bc  .word       0x01F009BC                   # dsll32      $at, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 16) << (32 + 6));
label_2b7368:
    // 0x2b7368: 0x1f11800  .word       0x01F11800                   # sll         $v1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 0));
label_2b736c:
    // 0x2b736c: 0x1f4a17c  .word       0x01F4A17C                   # dsll32      $s4, $s4, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b736cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 5));
label_2b7370:
    // 0x2b7370: 0x22557fe  .word       0x022557FE                   # dsrl32      $t2, $a1, 31 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7370u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) >> (32 + 31));
label_2b7374:
    // 0x2b7374: 0x1f010bd  .word       0x01F010BD                   # INVALID     $t7, $s0, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7374u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7374 raw=0x01F010BD");
 /* MITIGATED */
label_2b7378:
    // 0x2b7378: 0x3e5e7ff  .word       0x03E5E7FF                   # dsra32      $gp, $a1, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7378u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 5) >> (32 + 31));
label_2b737c:
    // 0x2b737c: 0x1f018be  .word       0x01F018BE                   # dsrl32      $v1, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b737cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> (32 + 2));
label_2b7380:
    // 0x2b7380: 0x8062e3fc  lb          $v0, -0x1C04($v1)
    ctx->pc = 0x2b7380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960124)));
label_2b7384:
    // 0x2b7384: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7384u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b7388:
    // 0x2b7388: 0x3e6e7ff  .word       0x03E6E7FF                   # dsra32      $gp, $a2, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7388u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 6) >> (32 + 31));
label_2b738c:
    // 0x2b738c: 0x910442  .word       0x00910442                   # srl         $zero, $s1, 17 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b738cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 17), 17));
label_2b7390:
    // 0x2b7390: 0x3c5a7fe  .word       0x03C5A7FE                   # dsrl32      $s4, $a1, 31 # 03C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7390u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) >> (32 + 31));
label_2b7394:
    // 0x2b7394: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7394u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b7398:
    // 0x2b7398: 0x3e6a7fe  .word       0x03E6A7FE                   # dsrl32      $s4, $a2, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7398u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) >> (32 + 31));
label_2b739c:
    // 0x2b739c: 0x400443  .word       0x00400443                   # sra         $zero, $zero, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b739cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 17));
label_2b73a0:
    // 0x2b73a0: 0x1861801  .word       0x01861801                   # INVALID     $t4, $a2, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b73a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B73A0 raw=0x01861801");
 /* MITIGATED */
label_2b73a4:
    // 0x2b73a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b73a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b73a8:
    // 0x2b73a8: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b73a8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b73ac:
    // 0x2b73ac: 0x400183  .word       0x00400183                   # sra         $zero, $zero, 6 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b73acu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 6));
label_2b73b0:
    // 0x2b73b0: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b73b0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b73b4:
    // 0x2b73b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b73b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b73b8:
    // 0x2b73b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b73b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b73bc:
    // 0x2b73bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b73bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b73c0:
    // 0x2b73c0: 0x5201000e  beql        $s0, $at, . + 4 + (0xE << 2)
label_2b73c4:
    if (ctx->pc == 0x2B73C4u) {
        ctx->pc = 0x2B73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73C0u;
        // 0x2b73c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B73C8u;
        goto label_2b73c8;
    }
    ctx->pc = 0x2B73C0u;
    {
        const bool branch_taken_0x2b73c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b73c0) {
            ctx->pc = 0x2B73C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B73C0u;
            // 0x2b73c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B73FCu;
            goto label_2b73fc;
        }
    }
    ctx->pc = 0x2B73C8u;
label_2b73c8:
    // 0x2b73c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b73c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b73cc:
    // 0x2b73cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b73ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b73d0:
    // 0x2b73d0: 0x520c07df  beql        $s0, $t4, . + 4 + (0x7DF << 2)
label_2b73d4:
    if (ctx->pc == 0x2B73D4u) {
        ctx->pc = 0x2B73D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73D0u;
        // 0x2b73d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B73D8u;
        goto label_2b73d8;
    }
    ctx->pc = 0x2B73D0u;
    {
        const bool branch_taken_0x2b73d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b73d0) {
            ctx->pc = 0x2B73D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B73D0u;
            // 0x2b73d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9350u;
            { ctx->pc = 0x2b9350; return; }
        }
    }
    ctx->pc = 0x2B73D8u;
label_2b73d8:
    // 0x2b73d8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b73d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b73dc:
    // 0x2b73dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b73dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b73e0:
    // 0x2b73e0: 0x904100a  j           func_4104028
label_2b73e4:
    if (ctx->pc == 0x2B73E4u) {
        ctx->pc = 0x2B73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B73E0u;
        // 0x2b73e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B73E8u;
        goto label_2b73e8;
    }
    ctx->pc = 0x2B73E0u;
    ctx->pc = 0x2B73E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B73E0u;
    // 0x2b73e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2B73E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B73E8u;
label_2b73e8:
    // 0x2b73e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b73e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b73ec:
    // 0x2b73ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b73ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b73f0:
    // 0x2b73f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b73f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b73f4:
    // 0x2b73f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b73f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b73f8:
    // 0x2b73f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b73f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b73fc:
    // 0x2b73fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b73fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7400:
    // 0x2b7400: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b7404:
    if (ctx->pc == 0x2B7404u) {
        ctx->pc = 0x2B7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7400u;
        // 0x2b7404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7408u;
        goto label_2b7408;
    }
    ctx->pc = 0x2B7400u;
    {
        const bool branch_taken_0x2b7400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7400u;
        // 0x2b7404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7400) {
            ctx->pc = 0x2BF408u;
            { ctx->pc = 0x2bf408; return; }
        }
    }
    ctx->pc = 0x2B7408u;
label_2b7408:
    // 0x2b7408: 0xb04100a  j           func_C104028
label_2b740c:
    if (ctx->pc == 0x2B740Cu) {
        ctx->pc = 0x2B740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7408u;
        // 0x2b740c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7410u;
        goto label_2b7410;
    }
    ctx->pc = 0x2B7408u;
    ctx->pc = 0x2B740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7408u;
    // 0x2b740c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2B7408u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7410u;
label_2b7410:
    // 0x2b7410: 0x5a0027c3  blezl       $s0, . + 4 + (0x27C3 << 2)
label_2b7414:
    if (ctx->pc == 0x2B7414u) {
        ctx->pc = 0x2B7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7410u;
        // 0x2b7414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7418u;
        goto label_2b7418;
    }
    ctx->pc = 0x2B7410u;
    {
        const bool branch_taken_0x2b7410 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b7410) {
            ctx->pc = 0x2B7414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7410u;
            // 0x2b7414: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1320u;
            { ctx->pc = 0x2c1320; return; }
        }
    }
    ctx->pc = 0x2B7418u;
label_2b7418:
    // 0x2b7418: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b741c:
    if (ctx->pc == 0x2B741Cu) {
        ctx->pc = 0x2B741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7418u;
        // 0x2b741c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7420u;
        goto label_2b7420;
    }
    ctx->pc = 0x2B7418u;
    {
        const bool branch_taken_0x2b7418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7418u;
        // 0x2b741c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7418) {
            ctx->pc = 0x2BB744u;
            { ctx->pc = 0x2bb744; return; }
        }
    }
    ctx->pc = 0x2B7420u;
label_2b7420:
    // 0x2b7420: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b7420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b7424:
    // 0x2b7424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7428:
    // 0x2b7428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b742c:
    // 0x2b742c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b742cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b7430:
    // 0x2b7430: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7430u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7434:
    // 0x2b7434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7438:
    // 0x2b7438: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b743c:
    if (ctx->pc == 0x2B743Cu) {
        ctx->pc = 0x2B743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7438u;
        // 0x2b743c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7440u;
        goto label_2b7440;
    }
    ctx->pc = 0x2B7438u;
    {
        const bool branch_taken_0x2b7438 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7438u;
        // 0x2b743c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7438) {
            ctx->pc = 0x2BD438u;
            { ctx->pc = 0x2bd438; return; }
        }
    }
    ctx->pc = 0x2B7440u;
label_2b7440:
    // 0x2b7440: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b7440u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b7444:
    // 0x2b7444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7448:
    // 0x2b7448: 0xa212fff  j           func_884BFFC
label_2b744c:
    if (ctx->pc == 0x2B744Cu) {
        ctx->pc = 0x2B744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7448u;
        // 0x2b744c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7450u;
        goto label_2b7450;
    }
    ctx->pc = 0x2B7448u;
    ctx->pc = 0x2B744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7448u;
    // 0x2b744c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884BFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884BFFCu, 0x2B7448u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7450u;
label_2b7450:
    // 0x2b7450: 0xa2137ff  j           func_884DFFC
label_2b7454:
    if (ctx->pc == 0x2B7454u) {
        ctx->pc = 0x2B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7450u;
        // 0x2b7454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7458u;
        goto label_2b7458;
    }
    ctx->pc = 0x2B7450u;
    ctx->pc = 0x2B7454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7450u;
    // 0x2b7454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884DFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884DFFCu, 0x2B7450u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7458u;
label_2b7458:
    // 0x2b7458: 0x400007ee  .word       0x400007EE                   # mfc0        $zero, Index # 000007EE <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b7458u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b745c:
    // 0x2b745c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b745cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7460:
    // 0x2b7460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7464:
    // 0x2b7464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7468:
    // 0x2b7468: 0x0  nop
    ctx->pc = 0x2b7468u;
    // NOP
label_2b746c:
    // 0x2b746c: 0x0  nop
    ctx->pc = 0x2b746cu;
    // NOP
label_2b7470:
    // 0x2b7470: 0x0  nop
    ctx->pc = 0x2b7470u;
    // NOP
label_2b7474:
    // 0x2b7474: 0x4aa00450  vmaxx.yw    $vf17, $vf0, $vf0x
    ctx->pc = 0x2b7474u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2b7478:
    // 0x2b7478: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b7478u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b747c:
    // 0x2b747c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b747cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7480:
    // 0x2b7480: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b7484:
    if (ctx->pc == 0x2B7484u) {
        ctx->pc = 0x2B7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7480u;
        // 0x2b7484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7488u;
        goto label_2b7488;
    }
    ctx->pc = 0x2B7480u;
    {
        const bool branch_taken_0x2b7480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B7484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7480u;
        // 0x2b7484: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7480) {
            ctx->pc = 0x2B97ACu;
            { ctx->pc = 0x2b97ac; return; }
        }
    }
    ctx->pc = 0x2B7488u;
label_2b7488:
    // 0x2b7488: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b7488u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b748c:
    // 0x2b748c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b748cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7490:
    // 0x2b7490: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b7490u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7494:
    // 0x2b7494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7498:
    // 0x2b7498: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b7498u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b749c:
    // 0x2b749c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b749cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b74a0:
    // 0x2b74a0: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b74a0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b74a4:
    // 0x2b74a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b74a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b74a8:
    // 0x2b74a8: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b74a8u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b74ac:
    // 0x2b74ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b74acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b74b0:
    // 0x2b74b0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b74b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b74b4:
    // 0x2b74b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b74b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b74b8:
    // 0x2b74b8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b74b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b74bc:
    // 0x2b74bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b74bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b74c0:
    // 0x2b74c0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b74c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b74c4:
    // 0x2b74c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b74c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b74c8:
    // 0x2b74c8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b74c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b74cc:
    // 0x2b74cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b74ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b74d0:
    // 0x2b74d0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b74d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b74d4:
    // 0x2b74d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b74d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b74d8:
    // 0x2b74d8: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2b74dc:
    if (ctx->pc == 0x2B74DCu) {
        ctx->pc = 0x2B74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74D8u;
        // 0x2b74dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B74E0u;
        goto label_2b74e0;
    }
    ctx->pc = 0x2B74D8u;
    {
        const bool branch_taken_0x2b74d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74D8u;
        // 0x2b74dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74d8) {
            ctx->pc = 0x2B94E0u;
            { ctx->pc = 0x2b94e0; return; }
        }
    }
    ctx->pc = 0x2B74E0u;
label_2b74e0:
    // 0x2b74e0: 0x90c3000  j           func_430C000
label_2b74e4:
    if (ctx->pc == 0x2B74E4u) {
        ctx->pc = 0x2B74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74E0u;
        // 0x2b74e4: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B74E8u;
        goto label_2b74e8;
    }
    ctx->pc = 0x2B74E0u;
    ctx->pc = 0x2B74E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74E0u;
    // 0x2b74e4: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2B74E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B74E8u;
label_2b74e8:
    // 0x2b74e8: 0x82e3000  j           func_B8C000
label_2b74ec:
    if (ctx->pc == 0x2B74ECu) {
        ctx->pc = 0x2B74ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74E8u;
        // 0x2b74ec: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B74F0u;
        goto label_2b74f0;
    }
    ctx->pc = 0x2B74E8u;
    ctx->pc = 0x2B74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B74E8u;
    // 0x2b74ec: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2B74E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B74F0u;
label_2b74f0:
    // 0x2b74f0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b74f4:
    if (ctx->pc == 0x2B74F4u) {
        ctx->pc = 0x2B74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74F0u;
        // 0x2b74f4: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B74F8u;
        goto label_2b74f8;
    }
    ctx->pc = 0x2B74F0u;
    {
        const bool branch_taken_0x2b74f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74F0u;
        // 0x2b74f4: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74f0) {
            ctx->pc = 0x2B94F0u;
            { ctx->pc = 0x2b94f0; return; }
        }
    }
    ctx->pc = 0x2B74F8u;
label_2b74f8:
    // 0x2b74f8: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2b74fc:
    if (ctx->pc == 0x2B74FCu) {
        ctx->pc = 0x2B74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74F8u;
        // 0x2b74fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7500u;
        goto label_2b7500;
    }
    ctx->pc = 0x2B74F8u;
    {
        const bool branch_taken_0x2b74f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B74FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B74F8u;
        // 0x2b74fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b74f8) {
            ctx->pc = 0x2C3500u;
            { ctx->pc = 0x2c3500; return; }
        }
    }
    ctx->pc = 0x2B7500u;
label_2b7500:
    // 0x2b7500: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2b7504:
    if (ctx->pc == 0x2B7504u) {
        ctx->pc = 0x2B7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7500u;
        // 0x2b7504: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7508u;
        goto label_2b7508;
    }
    ctx->pc = 0x2B7500u;
    {
        const bool branch_taken_0x2b7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7500u;
        // 0x2b7504: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7500) {
            ctx->pc = 0x2B750Cu;
            goto label_2b750c;
        }
    }
    ctx->pc = 0x2B7508u;
label_2b7508:
    // 0x2b7508: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2b7508u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2b750c:
    // 0x2b750c: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b750cu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2b7510:
    // 0x2b7510: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b7510u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b7514:
    // 0x2b7514: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b7514u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2b7518:
    // 0x2b7518: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2b751c:
    if (ctx->pc == 0x2B751Cu) {
        ctx->pc = 0x2B751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7518u;
        // 0x2b751c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7520u;
        goto label_2b7520;
    }
    ctx->pc = 0x2B7518u;
    {
        const bool branch_taken_0x2b7518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7518) {
            ctx->pc = 0x2B751Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7518u;
            // 0x2b751c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7524u;
            goto label_2b7524;
        }
    }
    ctx->pc = 0x2B7520u;
label_2b7520:
    // 0x2b7520: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2b7520u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2b7524:
    // 0x2b7524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7528:
    // 0x2b7528: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2b752c:
    if (ctx->pc == 0x2B752Cu) {
        ctx->pc = 0x2B752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7528u;
        // 0x2b752c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7530u;
        goto label_2b7530;
    }
    ctx->pc = 0x2B7528u;
    {
        const bool branch_taken_0x2b7528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7528u;
        // 0x2b752c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7528) {
            ctx->pc = 0x2B7538u;
            goto label_2b7538;
        }
    }
    ctx->pc = 0x2B7530u;
label_2b7530:
    // 0x2b7530: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2b7530u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2b7534:
    // 0x2b7534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7538:
    // 0x2b7538: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2b7538u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2b753c:
    // 0x2b753c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b753cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7540:
    // 0x2b7540: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7540u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2b7544:
    // 0x2b7544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7548:
    // 0x2b7548: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2b7548u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2b754c:
    // 0x2b754c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b754cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7550:
    // 0x2b7550: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b7550u;
    // NOP (addi to $zero)
label_2b7554:
    // 0x2b7554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7558:
    // 0x2b7558: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2b7558u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2b755c:
    // 0x2b755c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b755cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7560:
    // 0x2b7560: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b7560u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b7564:
    // 0x2b7564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7568:
    // 0x2b7568: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2b7568u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2b756c:
    // 0x2b756c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b756cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7570:
    // 0x2b7570: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2b7570u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2b7574:
    // 0x2b7574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7578:
    // 0x2b7578: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2b7578u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2b757c:
    // 0x2b757c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b757cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7580:
    // 0x2b7580: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b7580u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b7584:
    // 0x2b7584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7588:
    // 0x2b7588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b758c:
    // 0x2b758c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b758cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7590:
    // 0x2b7590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7594:
    // 0x2b7594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7598:
    // 0x2b7598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b759c:
    // 0x2b759c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b759cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b75a0:
    // 0x2b75a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75a4:
    // 0x2b75a4: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b75a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b75a8:
    // 0x2b75a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75ac:
    // 0x2b75ac: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b75acu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B75AC raw=0x01F310BD");
 /* MITIGATED */
label_2b75b0:
    // 0x2b75b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75b4:
    // 0x2b75b4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b75b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b75b8:
    // 0x2b75b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75bc:
    // 0x2b75bc: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b75bcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b75c0:
    // 0x2b75c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75c4:
    // 0x2b75c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b75c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b75c8:
    // 0x2b75c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75cc:
    // 0x2b75cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b75ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b75d0:
    // 0x2b75d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75d4:
    // 0x2b75d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b75d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b75d8:
    // 0x2b75d8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b75d8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b75dc:
    // 0x2b75dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b75dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b75e0:
    // 0x2b75e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75e4:
    // 0x2b75e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b75e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b75e8:
    // 0x2b75e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75ec:
    // 0x2b75ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b75ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b75f0:
    // 0x2b75f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75f4:
    // 0x2b75f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b75f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b75f8:
    // 0x2b75f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b75f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b75fc:
    // 0x2b75fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b75fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7600:
    // 0x2b7600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7604:
    // 0x2b7604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7608:
    // 0x2b7608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b760c:
    // 0x2b760c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b760cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b7610:
    // 0x2b7610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7614:
    // 0x2b7614: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7614u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b7618:
    // 0x2b7618: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7618u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b761c:
    // 0x2b761c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b761cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B761C raw=0x01C0E7DC");
 /* MITIGATED */
label_2b7620:
    // 0x2b7620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7624:
    // 0x2b7624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7628:
    // 0x2b7628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b762c:
    // 0x2b762c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b762cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7630:
    // 0x2b7630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7634:
    // 0x2b7634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7638:
    // 0x2b7638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b763c:
    // 0x2b763c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b763cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B763C raw=0x0020E7DF");
 /* MITIGATED */
label_2b7640:
    // 0x2b7640: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7640u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7644:
    // 0x2b7644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7648:
    // 0x2b7648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b764c:
    // 0x2b764c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b764cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7650:
    // 0x2b7650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7654:
    // 0x2b7654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7658:
    // 0x2b7658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b765c:
    // 0x2b765c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b765cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b7660:
    // 0x2b7660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7664:
    // 0x2b7664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7668:
    // 0x2b7668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b766c:
    // 0x2b766c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b766cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7670:
    // 0x2b7670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7674:
    // 0x2b7674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7678:
    // 0x2b7678: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7678u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b767c:
    // 0x2b767c: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b767cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B767C raw=0x01FAF97D");
 /* MITIGATED */
label_2b7680:
    // 0x2b7680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7684:
    // 0x2b7684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7688:
    // 0x2b7688: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7688u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b768c:
    // 0x2b768c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b768cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7690:
    // 0x2b7690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7694:
    // 0x2b7694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7698:
    // 0x2b7698: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7698u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b769c:
    // 0x2b769c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b769cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76a0:
    // 0x2b76a0: 0x8035f33d  lb          $s5, -0xCC3($at)
    ctx->pc = 0x2b76a0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964029)));
label_2b76a4:
    // 0x2b76a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76a8:
    // 0x2b76a8: 0x81d52b7c  lb          $s5, 0x2B7C($t6)
    ctx->pc = 0x2b76a8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 11132)));
label_2b76ac:
    // 0x2b76ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76b0:
    // 0x2b76b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76b4:
    // 0x2b76b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76b8:
    // 0x2b76b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76bc:
    // 0x2b76bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76c0:
    // 0x2b76c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76c4:
    // 0x2b76c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76c8:
    // 0x2b76c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76cc:
    // 0x2b76cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76d0:
    // 0x2b76d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76d4:
    // 0x2b76d4: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b76d4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b76d8:
    // 0x2b76d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76dc:
    // 0x2b76dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76e0:
    // 0x2b76e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76e4:
    // 0x2b76e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76e8:
    // 0x2b76e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76ec:
    // 0x2b76ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b76f0:
    // 0x2b76f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76f4:
    // 0x2b76f4: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b76f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B76F4 raw=0x01E0AD5F");
 /* MITIGATED */
label_2b76f8:
    // 0x2b76f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b76f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b76fc:
    // 0x2b76fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b76fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7700:
    // 0x2b7700: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7700u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7704:
    // 0x2b7704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7708:
    // 0x2b7708: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7708u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b770c:
    // 0x2b770c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b770cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7710:
    // 0x2b7710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7714:
    // 0x2b7714: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7714u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2b7718:
    // 0x2b7718: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7718u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b771c:
    // 0x2b771c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b771cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7720:
    // 0x2b7720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7724:
    // 0x2b7724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7728:
    // 0x2b7728: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b772c:
    // 0x2b772c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b772cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7730:
    // 0x2b7730: 0x3e7a801  .word       0x03E7A801                   # INVALID     $ra, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7730u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7730 raw=0x03E7A801");
 /* MITIGATED */
label_2b7734:
    // 0x2b7734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7738:
    // 0x2b7738: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2b7738u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b773c:
    // 0x2b773c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b773cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7740:
    // 0x2b7740: 0x8194337c  lb          $s4, 0x337C($t4)
    ctx->pc = 0x2b7740u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b7744:
    // 0x2b7744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7748:
    // 0x2b7748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b774c:
    // 0x2b774c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b774cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7750:
    // 0x2b7750: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7750u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7754:
    // 0x2b7754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7758:
    // 0x2b7758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b775c:
    // 0x2b775c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b775cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7760:
    // 0x2b7760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7764:
    // 0x2b7764: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7764u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7764 raw=0x01C0A51C");
 /* MITIGATED */
label_2b7768:
    // 0x2b7768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b776c:
    // 0x2b776c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b776cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7770:
    // 0x2b7770: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7770u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7774:
    // 0x2b7774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7778:
    // 0x2b7778: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7778u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b777c:
    // 0x2b777c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b777cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7780:
    // 0x2b7780: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7780u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b7784:
    // 0x2b7784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7788:
    // 0x2b7788: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2b7788u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2b778c:
    // 0x2b778c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b778cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b7790:
    // 0x2b7790: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2b7790u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2b7794:
    // 0x2b7794: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7794u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7794 raw=0x01F368BD");
 /* MITIGATED */
label_2b7798:
    // 0x2b7798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b779c:
    // 0x2b779c: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b779cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b77a0:
    // 0x2b77a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b77a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b77a4:
    // 0x2b77a4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b77a4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b77a8:
    // 0x2b77a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b77a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b77ac:
    // 0x2b77ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b77acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b77b0:
    // 0x2b77b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b77b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b77b4:
    // 0x2b77b4: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b77b4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2b77b8:
    // 0x2b77b8: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2b77b8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2b77bc:
    // 0x2b77bc: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b77bcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b77c0:
    // 0x2b77c0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b77c0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b77c4:
    // 0x2b77c4: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b77c4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b77c8:
    // 0x2b77c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b77c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b77cc:
    // 0x2b77cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b77ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b77d0:
    // 0x2b77d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b77d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b77d4:
    // 0x2b77d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b77d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b77d8:
    // 0x2b77d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b77d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b77dc:
    // 0x2b77dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b77dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b77e0:
    // 0x2b77e0: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2b77e0u;
    // NOP (addiu $zero, ...)
label_2b77e4:
    // 0x2b77e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b77e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b77e8:
    // 0x2b77e8: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2b77e8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2b77ec:
    // 0x2b77ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b77ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b77f0:
    // 0x2b77f0: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2b77f0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2b77f4:
    // 0x2b77f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b77f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b77f8:
    // 0x2b77f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b77f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b77fc:
    // 0x2b77fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b77fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7800:
    // 0x2b7800: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2b7804:
    if (ctx->pc == 0x2B7804u) {
        ctx->pc = 0x2B7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7800u;
        // 0x2b7804: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7808u;
        goto label_2b7808;
    }
    ctx->pc = 0x2B7800u;
    {
        const bool branch_taken_0x2b7800 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b7800) {
            ctx->pc = 0x2B7804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7800u;
            // 0x2b7804: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D181Cu;
            return;
        }
    }
    ctx->pc = 0x2B7808u;
label_2b7808:
    // 0x2b7808: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b780c:
    if (ctx->pc == 0x2B780Cu) {
        ctx->pc = 0x2B780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7808u;
        // 0x2b780c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7810u;
        goto label_2b7810;
    }
    ctx->pc = 0x2B7808u;
    {
        const bool branch_taken_0x2b7808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7808u;
        // 0x2b780c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7808) {
            ctx->pc = 0x2C5818u;
            { ctx->pc = 0x2c5818; return; }
        }
    }
    ctx->pc = 0x2B7810u;
label_2b7810:
    // 0x2b7810: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2b7810u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2b7814:
    // 0x2b7814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7818:
    // 0x2b7818: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2b7818u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2b781c:
    // 0x2b781c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b781cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7820:
    // 0x2b7820: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2b7820u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2b7824:
    // 0x2b7824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7828:
    // 0x2b7828: 0x5a004812  blezl       $s0, . + 4 + (0x4812 << 2)
label_2b782c:
    if (ctx->pc == 0x2B782Cu) {
        ctx->pc = 0x2B782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7828u;
        // 0x2b782c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7830u;
        goto label_2b7830;
    }
    ctx->pc = 0x2B7828u;
    {
        const bool branch_taken_0x2b7828 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b7828) {
            ctx->pc = 0x2B782Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7828u;
            // 0x2b782c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9874u;
            { ctx->pc = 0x2c9874; return; }
        }
    }
    ctx->pc = 0x2B7830u;
label_2b7830:
    // 0x2b7830: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2b7830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2b7834:
    // 0x2b7834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7838:
    // 0x2b7838: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b7838u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b783c:
    // 0x2b783c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b783cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7840:
    // 0x2b7840: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7840u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7844:
    // 0x2b7844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7848:
    // 0x2b7848: 0x520c07a6  beql        $s0, $t4, . + 4 + (0x7A6 << 2)
label_2b784c:
    if (ctx->pc == 0x2B784Cu) {
        ctx->pc = 0x2B784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7848u;
        // 0x2b784c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7850u;
        goto label_2b7850;
    }
    ctx->pc = 0x2B7848u;
    {
        const bool branch_taken_0x2b7848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b7848) {
            ctx->pc = 0x2B784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7848u;
            // 0x2b784c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B96E4u;
            { ctx->pc = 0x2b96e4; return; }
        }
    }
    ctx->pc = 0x2B7850u;
label_2b7850:
    // 0x2b7850: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b7850u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b7854:
    // 0x2b7854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7858:
    // 0x2b7858: 0x9041005  j           func_4104014
label_2b785c:
    if (ctx->pc == 0x2B785Cu) {
        ctx->pc = 0x2B785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7858u;
        // 0x2b785c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7860u;
        goto label_2b7860;
    }
    ctx->pc = 0x2B7858u;
    ctx->pc = 0x2B785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7858u;
    // 0x2b785c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104014u, 0x2B7858u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7860u;
label_2b7860:
    // 0x2b7860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7864:
    // 0x2b7864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7868:
    // 0x2b7868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b786c:
    // 0x2b786c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b786cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7870:
    // 0x2b7870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7874:
    // 0x2b7874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7878:
    // 0x2b7878: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b787c:
    if (ctx->pc == 0x2B787Cu) {
        ctx->pc = 0x2B787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7878u;
        // 0x2b787c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7880u;
        goto label_2b7880;
    }
    ctx->pc = 0x2B7878u;
    {
        const bool branch_taken_0x2b7878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7878u;
        // 0x2b787c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7878) {
            ctx->pc = 0x2BF880u;
            { ctx->pc = 0x2bf880; return; }
        }
    }
    ctx->pc = 0x2B7880u;
label_2b7880:
    // 0x2b7880: 0xb041005  j           func_C104014
label_2b7884:
    if (ctx->pc == 0x2B7884u) {
        ctx->pc = 0x2B7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7880u;
        // 0x2b7884: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7888u;
        goto label_2b7888;
    }
    ctx->pc = 0x2B7880u;
    ctx->pc = 0x2B7884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7880u;
    // 0x2b7884: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104014u, 0x2B7880u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7888u;
label_2b7888:
    // 0x2b7888: 0x5a00278a  blezl       $s0, . + 4 + (0x278A << 2)
label_2b788c:
    if (ctx->pc == 0x2B788Cu) {
        ctx->pc = 0x2B788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7888u;
        // 0x2b788c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7890u;
        goto label_2b7890;
    }
    ctx->pc = 0x2B7888u;
    {
        const bool branch_taken_0x2b7888 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b7888) {
            ctx->pc = 0x2B788Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7888u;
            // 0x2b788c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C16B4u;
            { ctx->pc = 0x2c16b4; return; }
        }
    }
    ctx->pc = 0x2B7890u;
label_2b7890:
    // 0x2b7890: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b7894:
    if (ctx->pc == 0x2B7894u) {
        ctx->pc = 0x2B7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7890u;
        // 0x2b7894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7898u;
        goto label_2b7898;
    }
    ctx->pc = 0x2B7890u;
    {
        const bool branch_taken_0x2b7890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7890u;
        // 0x2b7894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7890) {
            ctx->pc = 0x2BBBBCu;
            { ctx->pc = 0x2bbbbc; return; }
        }
    }
    ctx->pc = 0x2B7898u;
label_2b7898:
    // 0x2b7898: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b7898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b789c:
    // 0x2b789c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b789cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78a0:
    // 0x2b78a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b78a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b78a4:
    // 0x2b78a4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b78a4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b78a8:
    // 0x2b78a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b78a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b78ac:
    // 0x2b78ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b78acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78b0:
    // 0x2b78b0: 0x40000778  .word       0x40000778                   # mfc0        $zero, Index # 00000778 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b78b0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b78b4:
    // 0x2b78b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b78b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78b8:
    // 0x2b78b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b78b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b78bc:
    // 0x2b78bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b78bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78c0:
    // 0x2b78c0: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2b78c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2b78c4:
    // 0x2b78c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b78c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78c8:
    // 0x2b78c8: 0x52010010  beql        $s0, $at, . + 4 + (0x10 << 2)
label_2b78cc:
    if (ctx->pc == 0x2B78CCu) {
        ctx->pc = 0x2B78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78C8u;
        // 0x2b78cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B78D0u;
        goto label_2b78d0;
    }
    ctx->pc = 0x2B78C8u;
    {
        const bool branch_taken_0x2b78c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b78c8) {
            ctx->pc = 0x2B78CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B78C8u;
            // 0x2b78cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B790Cu;
            goto label_2b790c;
        }
    }
    ctx->pc = 0x2B78D0u;
label_2b78d0:
    // 0x2b78d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b78d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b78d4:
    // 0x2b78d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b78d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78d8:
    // 0x2b78d8: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2b78d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2b78dc:
    // 0x2b78dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b78dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78e0:
    // 0x2b78e0: 0x5201000d  beql        $s0, $at, . + 4 + (0xD << 2)
label_2b78e4:
    if (ctx->pc == 0x2B78E4u) {
        ctx->pc = 0x2B78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78E0u;
        // 0x2b78e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B78E8u;
        goto label_2b78e8;
    }
    ctx->pc = 0x2B78E0u;
    {
        const bool branch_taken_0x2b78e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b78e0) {
            ctx->pc = 0x2B78E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B78E0u;
            // 0x2b78e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7918u;
            { ctx->pc = 0x2b7918; return; }
        }
    }
    ctx->pc = 0x2B78E8u;
label_2b78e8:
    // 0x2b78e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b78e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b78ec:
    // 0x2b78ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b78ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78f0:
    // 0x2b78f0: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2b78f0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2b78f4:
    // 0x2b78f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b78f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b78f8:
    // 0x2b78f8: 0x5201000a  beql        $s0, $at, . + 4 + (0xA << 2)
label_2b78fc:
    if (ctx->pc == 0x2B78FCu) {
        ctx->pc = 0x2B78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B78F8u;
        // 0x2b78fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7900u;
        goto label_2b7900;
    }
    ctx->pc = 0x2B78F8u;
    {
        const bool branch_taken_0x2b78f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b78f8) {
            ctx->pc = 0x2B78FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B78F8u;
            // 0x2b78fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7924u;
            { ctx->pc = 0x2b7924; return; }
        }
    }
    ctx->pc = 0x2B7900u;
label_2b7900:
    // 0x2b7900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7904:
    // 0x2b7904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7908:
    // 0x2b7908: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2b7908u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2b790c:
    // 0x2b790c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b790cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b7910u;
    return;
}

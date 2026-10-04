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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part123(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1d76d8u: goto label_1d76d8;
        case 0x1d76dcu: goto label_1d76dc;
        case 0x1d76e0u: goto label_1d76e0;
        case 0x1d76e4u: goto label_1d76e4;
        case 0x1d76e8u: goto label_1d76e8;
        case 0x1d76ecu: goto label_1d76ec;
        case 0x1d76f0u: goto label_1d76f0;
        case 0x1d76f4u: goto label_1d76f4;
        case 0x1d76f8u: goto label_1d76f8;
        case 0x1d76fcu: goto label_1d76fc;
        case 0x1d7700u: goto label_1d7700;
        case 0x1d7704u: goto label_1d7704;
        case 0x1d7708u: goto label_1d7708;
        case 0x1d770cu: goto label_1d770c;
        case 0x1d7710u: goto label_1d7710;
        case 0x1d7714u: goto label_1d7714;
        case 0x1d7718u: goto label_1d7718;
        case 0x1d771cu: goto label_1d771c;
        case 0x1d7720u: goto label_1d7720;
        case 0x1d7724u: goto label_1d7724;
        case 0x1d7728u: goto label_1d7728;
        case 0x1d772cu: goto label_1d772c;
        case 0x1d7730u: goto label_1d7730;
        case 0x1d7734u: goto label_1d7734;
        case 0x1d7738u: goto label_1d7738;
        case 0x1d773cu: goto label_1d773c;
        case 0x1d7740u: goto label_1d7740;
        case 0x1d7744u: goto label_1d7744;
        case 0x1d7748u: goto label_1d7748;
        case 0x1d774cu: goto label_1d774c;
        case 0x1d7750u: goto label_1d7750;
        case 0x1d7754u: goto label_1d7754;
        case 0x1d7758u: goto label_1d7758;
        case 0x1d775cu: goto label_1d775c;
        case 0x1d7760u: goto label_1d7760;
        case 0x1d7764u: goto label_1d7764;
        case 0x1d7768u: goto label_1d7768;
        case 0x1d776cu: goto label_1d776c;
        case 0x1d7770u: goto label_1d7770;
        case 0x1d7774u: goto label_1d7774;
        case 0x1d7778u: goto label_1d7778;
        case 0x1d777cu: goto label_1d777c;
        case 0x1d7780u: goto label_1d7780;
        case 0x1d7784u: goto label_1d7784;
        case 0x1d7788u: goto label_1d7788;
        case 0x1d778cu: goto label_1d778c;
        case 0x1d7790u: goto label_1d7790;
        case 0x1d7794u: goto label_1d7794;
        case 0x1d7798u: goto label_1d7798;
        case 0x1d779cu: goto label_1d779c;
        case 0x1d77a0u: goto label_1d77a0;
        case 0x1d77a4u: goto label_1d77a4;
        case 0x1d77a8u: goto label_1d77a8;
        case 0x1d77acu: goto label_1d77ac;
        case 0x1d77b0u: goto label_1d77b0;
        case 0x1d77b4u: goto label_1d77b4;
        case 0x1d77b8u: goto label_1d77b8;
        case 0x1d77bcu: goto label_1d77bc;
        case 0x1d77c0u: goto label_1d77c0;
        case 0x1d77c4u: goto label_1d77c4;
        case 0x1d77c8u: goto label_1d77c8;
        case 0x1d77ccu: goto label_1d77cc;
        case 0x1d77d0u: goto label_1d77d0;
        case 0x1d77d4u: goto label_1d77d4;
        case 0x1d77d8u: goto label_1d77d8;
        case 0x1d77dcu: goto label_1d77dc;
        case 0x1d77e0u: goto label_1d77e0;
        case 0x1d77e4u: goto label_1d77e4;
        case 0x1d77e8u: goto label_1d77e8;
        case 0x1d77ecu: goto label_1d77ec;
        case 0x1d77f0u: goto label_1d77f0;
        case 0x1d77f4u: goto label_1d77f4;
        case 0x1d77f8u: goto label_1d77f8;
        case 0x1d77fcu: goto label_1d77fc;
        case 0x1d7800u: goto label_1d7800;
        case 0x1d7804u: goto label_1d7804;
        case 0x1d7808u: goto label_1d7808;
        case 0x1d780cu: goto label_1d780c;
        case 0x1d7810u: goto label_1d7810;
        case 0x1d7814u: goto label_1d7814;
        case 0x1d7818u: goto label_1d7818;
        case 0x1d781cu: goto label_1d781c;
        case 0x1d7820u: goto label_1d7820;
        case 0x1d7824u: goto label_1d7824;
        case 0x1d7828u: goto label_1d7828;
        case 0x1d782cu: goto label_1d782c;
        case 0x1d7830u: goto label_1d7830;
        case 0x1d7834u: goto label_1d7834;
        case 0x1d7838u: goto label_1d7838;
        case 0x1d783cu: goto label_1d783c;
        case 0x1d7840u: goto label_1d7840;
        case 0x1d7844u: goto label_1d7844;
        case 0x1d7848u: goto label_1d7848;
        case 0x1d784cu: goto label_1d784c;
        case 0x1d7850u: goto label_1d7850;
        case 0x1d7854u: goto label_1d7854;
        case 0x1d7858u: goto label_1d7858;
        case 0x1d785cu: goto label_1d785c;
        case 0x1d7860u: goto label_1d7860;
        case 0x1d7864u: goto label_1d7864;
        case 0x1d7868u: goto label_1d7868;
        case 0x1d786cu: goto label_1d786c;
        case 0x1d7870u: goto label_1d7870;
        case 0x1d7874u: goto label_1d7874;
        case 0x1d7878u: goto label_1d7878;
        case 0x1d787cu: goto label_1d787c;
        case 0x1d7880u: goto label_1d7880;
        case 0x1d7884u: goto label_1d7884;
        case 0x1d7888u: goto label_1d7888;
        case 0x1d788cu: goto label_1d788c;
        case 0x1d7890u: goto label_1d7890;
        case 0x1d7894u: goto label_1d7894;
        case 0x1d7898u: goto label_1d7898;
        case 0x1d789cu: goto label_1d789c;
        case 0x1d78a0u: goto label_1d78a0;
        case 0x1d78a4u: goto label_1d78a4;
        case 0x1d78a8u: goto label_1d78a8;
        case 0x1d78acu: goto label_1d78ac;
        case 0x1d78b0u: goto label_1d78b0;
        case 0x1d78b4u: goto label_1d78b4;
        case 0x1d78b8u: goto label_1d78b8;
        case 0x1d78bcu: goto label_1d78bc;
        case 0x1d78c0u: goto label_1d78c0;
        case 0x1d78c4u: goto label_1d78c4;
        case 0x1d78c8u: goto label_1d78c8;
        case 0x1d78ccu: goto label_1d78cc;
        case 0x1d78d0u: goto label_1d78d0;
        case 0x1d78d4u: goto label_1d78d4;
        case 0x1d78d8u: goto label_1d78d8;
        case 0x1d78dcu: goto label_1d78dc;
        case 0x1d78e0u: goto label_1d78e0;
        case 0x1d78e4u: goto label_1d78e4;
        case 0x1d78e8u: goto label_1d78e8;
        case 0x1d78ecu: goto label_1d78ec;
        case 0x1d78f0u: goto label_1d78f0;
        case 0x1d78f4u: goto label_1d78f4;
        case 0x1d78f8u: goto label_1d78f8;
        case 0x1d78fcu: goto label_1d78fc;
        case 0x1d7900u: goto label_1d7900;
        case 0x1d7904u: goto label_1d7904;
        case 0x1d7908u: goto label_1d7908;
        case 0x1d790cu: goto label_1d790c;
        case 0x1d7910u: goto label_1d7910;
        case 0x1d7914u: goto label_1d7914;
        case 0x1d7918u: goto label_1d7918;
        case 0x1d791cu: goto label_1d791c;
        case 0x1d7920u: goto label_1d7920;
        case 0x1d7924u: goto label_1d7924;
        case 0x1d7928u: goto label_1d7928;
        case 0x1d792cu: goto label_1d792c;
        case 0x1d7930u: goto label_1d7930;
        case 0x1d7934u: goto label_1d7934;
        case 0x1d7938u: goto label_1d7938;
        case 0x1d793cu: goto label_1d793c;
        case 0x1d7940u: goto label_1d7940;
        case 0x1d7944u: goto label_1d7944;
        case 0x1d7948u: goto label_1d7948;
        case 0x1d794cu: goto label_1d794c;
        case 0x1d7950u: goto label_1d7950;
        case 0x1d7954u: goto label_1d7954;
        case 0x1d7958u: goto label_1d7958;
        case 0x1d795cu: goto label_1d795c;
        case 0x1d7960u: goto label_1d7960;
        case 0x1d7964u: goto label_1d7964;
        case 0x1d7968u: goto label_1d7968;
        case 0x1d796cu: goto label_1d796c;
        case 0x1d7970u: goto label_1d7970;
        case 0x1d7974u: goto label_1d7974;
        case 0x1d7978u: goto label_1d7978;
        case 0x1d797cu: goto label_1d797c;
        case 0x1d7980u: goto label_1d7980;
        case 0x1d7984u: goto label_1d7984;
        case 0x1d7988u: goto label_1d7988;
        case 0x1d798cu: goto label_1d798c;
        case 0x1d7990u: goto label_1d7990;
        case 0x1d7994u: goto label_1d7994;
        case 0x1d7998u: goto label_1d7998;
        case 0x1d799cu: goto label_1d799c;
        case 0x1d79a0u: goto label_1d79a0;
        case 0x1d79a4u: goto label_1d79a4;
        case 0x1d79a8u: goto label_1d79a8;
        case 0x1d79acu: goto label_1d79ac;
        case 0x1d79b0u: goto label_1d79b0;
        case 0x1d79b4u: goto label_1d79b4;
        case 0x1d79b8u: goto label_1d79b8;
        case 0x1d79bcu: goto label_1d79bc;
        default: return;
    }

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
label_1d76d8:
    if (ctx->pc == 0x1D76D8u) {
        ctx->pc = 0x1D76DCu;
        goto label_1d76dc;
    }
    ctx->pc = 0x1D76D4u;
    SET_GPR_U32(ctx, 31, 0x1D76DCu);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D76D4u, 0x1D76DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76DCu;
label_1d76dc:
    // 0x1d76dc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_1d76e0:
    if (ctx->pc == 0x1D76E0u) {
        ctx->pc = 0x1D76E4u;
        goto label_1d76e4;
    }
    ctx->pc = 0x1D76DCu;
    {
        const bool branch_taken_0x1d76dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d76dc) {
            ctx->pc = 0x1D77B8u;
            goto label_1d77b8;
        }
    }
    ctx->pc = 0x1D76E4u;
label_1d76e4:
    // 0x1d76e4: 0xc04e168  jal         func_1385A0
label_1d76e8:
    if (ctx->pc == 0x1D76E8u) {
        ctx->pc = 0x1D76ECu;
        goto label_1d76ec;
    }
    ctx->pc = 0x1D76E4u;
    SET_GPR_U32(ctx, 31, 0x1D76ECu);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D76E4u, 0x1D76ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76ECu;
label_1d76ec:
    // 0x1d76ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d76ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d76f0:
    // 0x1d76f0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d76f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d76f4:
    // 0x1d76f4: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1d76f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d76f8:
    // 0x1d76f8: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d76f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d76fc:
    // 0x1d76fc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d76fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7700:
    // 0x1d7700: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d7700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d7704:
    // 0x1d7704: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d7704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d7708:
    // 0x1d7708: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1d7708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1d770c:
    // 0x1d770c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d770cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7710:
    // 0x1d7710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7714:
    // 0x1d7714: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7714u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7718:
    // 0x1d7718: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x1d7718u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d771c:
    // 0x1d771c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d771cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d7720:
    // 0x1d7720: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1d7720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1d7724:
    // 0x1d7724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d7728:
    // 0x1d7728: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d7728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d772c:
    // 0x1d772c: 0xa0aa0080  sb          $t2, 0x80($a1)
    ctx->pc = 0x1d772cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 10));
label_1d7730:
    // 0x1d7730: 0xa0aa0081  sb          $t2, 0x81($a1)
    ctx->pc = 0x1d7730u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 10));
label_1d7734:
    // 0x1d7734: 0xa0aa0082  sb          $t2, 0x82($a1)
    ctx->pc = 0x1d7734u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 10));
label_1d7738:
    // 0x1d7738: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x1d7738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d773c:
    // 0x1d773c: 0xa0a20083  sb          $v0, 0x83($a1)
    ctx->pc = 0x1d773cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 2));
label_1d7740:
    // 0x1d7740: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x1d7740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_1d7744:
    // 0x1d7744: 0xa0aa0120  sb          $t2, 0x120($a1)
    ctx->pc = 0x1d7744u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 10));
label_1d7748:
    // 0x1d7748: 0xa0aa0121  sb          $t2, 0x121($a1)
    ctx->pc = 0x1d7748u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 289), (uint8_t)GPR_U32(ctx, 10));
label_1d774c:
    // 0x1d774c: 0xa0aa0122  sb          $t2, 0x122($a1)
    ctx->pc = 0x1d774cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 290), (uint8_t)GPR_U32(ctx, 10));
label_1d7750:
    // 0x1d7750: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x1d7750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7754:
    // 0x1d7754: 0xa0a20123  sb          $v0, 0x123($a1)
    ctx->pc = 0x1d7754u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 2));
label_1d7758:
    // 0x1d7758: 0xaca30124  sw          $v1, 0x124($a1)
    ctx->pc = 0x1d7758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 3));
label_1d775c:
    // 0x1d775c: 0xa0aa01c0  sb          $t2, 0x1C0($a1)
    ctx->pc = 0x1d775cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 10));
label_1d7760:
    // 0x1d7760: 0xa0aa01c1  sb          $t2, 0x1C1($a1)
    ctx->pc = 0x1d7760u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 449), (uint8_t)GPR_U32(ctx, 10));
label_1d7764:
    // 0x1d7764: 0xa0aa01c2  sb          $t2, 0x1C2($a1)
    ctx->pc = 0x1d7764u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 450), (uint8_t)GPR_U32(ctx, 10));
label_1d7768:
    // 0x1d7768: 0x83828c60  lb          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d776c:
    // 0x1d776c: 0xa0a201c3  sb          $v0, 0x1C3($a1)
    ctx->pc = 0x1d776cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 2));
label_1d7770:
    // 0x1d7770: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x1d7770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_1d7774:
    // 0x1d7774: 0xa0aa0260  sb          $t2, 0x260($a1)
    ctx->pc = 0x1d7774u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 608), (uint8_t)GPR_U32(ctx, 10));
label_1d7778:
    // 0x1d7778: 0xa0aa0261  sb          $t2, 0x261($a1)
    ctx->pc = 0x1d7778u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 609), (uint8_t)GPR_U32(ctx, 10));
label_1d777c:
    // 0x1d777c: 0xa0aa0262  sb          $t2, 0x262($a1)
    ctx->pc = 0x1d777cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 610), (uint8_t)GPR_U32(ctx, 10));
label_1d7780:
    // 0x1d7780: 0x83828c5c  lb          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7784:
    // 0x1d7784: 0xa0a20263  sb          $v0, 0x263($a1)
    ctx->pc = 0x1d7784u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 2));
label_1d7788:
    // 0x1d7788: 0xc066c72  jal         func_19B1C8
label_1d778c:
    if (ctx->pc == 0x1D778Cu) {
        ctx->pc = 0x1D778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7788u;
        // 0x1d778c: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7790u;
        goto label_1d7790;
    }
    ctx->pc = 0x1D7788u;
    SET_GPR_U32(ctx, 31, 0x1D7790u);
    ctx->pc = 0x1D778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7788u;
    // 0x1d778c: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D7788u, 0x1D7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7790u;
label_1d7790:
    // 0x1d7790: 0xc04e120  jal         func_138480
label_1d7794:
    if (ctx->pc == 0x1D7794u) {
        ctx->pc = 0x1D7798u;
        goto label_1d7798;
    }
    ctx->pc = 0x1D7790u;
    SET_GPR_U32(ctx, 31, 0x1D7798u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D7790u, 0x1D7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7798u;
label_1d7798:
    // 0x1d7798: 0xc05b578  jal         func_16D5E0
label_1d779c:
    if (ctx->pc == 0x1D779Cu) {
        ctx->pc = 0x1D779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7798u;
        // 0x1d779c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77A0u;
        goto label_1d77a0;
    }
    ctx->pc = 0x1D7798u;
    SET_GPR_U32(ctx, 31, 0x1D77A0u);
    ctx->pc = 0x1D779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7798u;
    // 0x1d779c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D7798u, 0x1D77A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77A0u;
label_1d77a0:
    // 0x1d77a0: 0xc060258  jal         func_180960
label_1d77a4:
    if (ctx->pc == 0x1D77A4u) {
        ctx->pc = 0x1D77A8u;
        goto label_1d77a8;
    }
    ctx->pc = 0x1D77A0u;
    SET_GPR_U32(ctx, 31, 0x1D77A8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D77A0u, 0x1D77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77A8u;
label_1d77a8:
    // 0x1d77a8: 0xc04e198  jal         func_138660
label_1d77ac:
    if (ctx->pc == 0x1D77ACu) {
        ctx->pc = 0x1D77B0u;
        goto label_1d77b0;
    }
    ctx->pc = 0x1D77A8u;
    SET_GPR_U32(ctx, 31, 0x1D77B0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D77A8u, 0x1D77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77B0u;
label_1d77b0:
    // 0x1d77b0: 0x1040ffcc  beqz        $v0, . + 4 + (-0x34 << 2)
label_1d77b4:
    if (ctx->pc == 0x1D77B4u) {
        ctx->pc = 0x1D77B8u;
        goto label_1d77b8;
    }
    ctx->pc = 0x1D77B0u;
    {
        const bool branch_taken_0x1d77b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d77b0) {
            ctx->pc = 0x1D76E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d76e4;
        }
    }
    ctx->pc = 0x1D77B8u;
label_1d77b8:
    // 0x1d77b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d77b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d77bc:
    // 0x1d77bc: 0x16600030  bnez        $s3, . + 4 + (0x30 << 2)
label_1d77c0:
    if (ctx->pc == 0x1D77C0u) {
        ctx->pc = 0x1D77C4u;
        goto label_1d77c4;
    }
    ctx->pc = 0x1D77BCu;
    {
        const bool branch_taken_0x1d77bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d77bc) {
            ctx->pc = 0x1D7880u;
            goto label_1d7880;
        }
    }
    ctx->pc = 0x1D77C4u;
label_1d77c4:
    // 0x1d77c4: 0x2a020384  slti        $v0, $s0, 0x384
    ctx->pc = 0x1d77c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)900) ? 1 : 0);
label_1d77c8:
    // 0x1d77c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d77cc:
    if (ctx->pc == 0x1D77CCu) {
        ctx->pc = 0x1D77D0u;
        goto label_1d77d0;
    }
    ctx->pc = 0x1D77C8u;
    {
        const bool branch_taken_0x1d77c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d77c8) {
            ctx->pc = 0x1D77D8u;
            goto label_1d77d8;
        }
    }
    ctx->pc = 0x1D77D0u;
label_1d77d0:
    // 0x1d77d0: 0x10000080  b           . + 4 + (0x80 << 2)
label_1d77d4:
    if (ctx->pc == 0x1D77D4u) {
        ctx->pc = 0x1D77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D0u;
        // 0x1d77d4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77D8u;
        goto label_1d77d8;
    }
    ctx->pc = 0x1D77D0u;
    {
        const bool branch_taken_0x1d77d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D0u;
        // 0x1d77d4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77d0) {
            ctx->pc = 0x1D79D4u;
            { ctx->pc = 0x1d79d4; return; }
        }
    }
    ctx->pc = 0x1D77D8u;
label_1d77d8:
    // 0x1d77d8: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1d77d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1d77dc:
    // 0x1d77dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d77e0:
    if (ctx->pc == 0x1D77E0u) {
        ctx->pc = 0x1D77E4u;
        goto label_1d77e4;
    }
    ctx->pc = 0x1D77DCu;
    {
        const bool branch_taken_0x1d77dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d77dc) {
            ctx->pc = 0x1D7804u;
            goto label_1d7804;
        }
    }
    ctx->pc = 0x1D77E4u;
label_1d77e4:
    // 0x1d77e4: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1d77e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1d77e8:
    // 0x1d77e8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d77e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1d77ec:
    // 0x1d77ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d77f0:
    if (ctx->pc == 0x1D77F0u) {
        ctx->pc = 0x1D77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77ECu;
        // 0x1d77f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D77F4u;
        goto label_1d77f4;
    }
    ctx->pc = 0x1D77ECu;
    {
        const bool branch_taken_0x1d77ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77ECu;
        // 0x1d77f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77ec) {
            ctx->pc = 0x1D7804u;
            goto label_1d7804;
        }
    }
    ctx->pc = 0x1D77F4u;
label_1d77f4:
    // 0x1d77f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d77f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d77f8:
    // 0x1d77f8: 0xc05b420  jal         func_16D080
label_1d77fc:
    if (ctx->pc == 0x1D77FCu) {
        ctx->pc = 0x1D77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77F8u;
        // 0x1d77fc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7800u;
        goto label_1d7800;
    }
    ctx->pc = 0x1D77F8u;
    SET_GPR_U32(ctx, 31, 0x1D7800u);
    ctx->pc = 0x1D77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77F8u;
    // 0x1d77fc: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1D77F8u, 0x1D7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7800u;
label_1d7800:
    // 0x1d7800: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1d7800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7804:
    // 0x1d7804: 0x0  nop
    ctx->pc = 0x1d7804u;
    // NOP
label_1d7808:
    // 0x1d7808: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d7808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d780c:
    // 0x1d780c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d7810:
    // 0x1d7810: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x1d7810u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d7814:
    // 0x1d7814: 0x0  nop
    ctx->pc = 0x1d7814u;
    // NOP
label_1d7818:
    // 0x1d7818: 0x0  nop
    ctx->pc = 0x1d7818u;
    // NOP
label_1d781c:
    // 0x1d781c: 0x1810  mfhi        $v1
    ctx->pc = 0x1d781cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1d7820:
    // 0x1d7820: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1d7820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1d7824:
    // 0x1d7824: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1d7828:
    if (ctx->pc == 0x1D7828u) {
        ctx->pc = 0x1D782Cu;
        goto label_1d782c;
    }
    ctx->pc = 0x1D7824u;
    {
        const bool branch_taken_0x1d7824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7824) {
            ctx->pc = 0x1D7848u;
            goto label_1d7848;
        }
    }
    ctx->pc = 0x1D782Cu;
label_1d782c:
    // 0x1d782c: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x1d782cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1d7830:
    // 0x1d7830: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_1d7834:
    if (ctx->pc == 0x1D7834u) {
        ctx->pc = 0x1D7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7830u;
        // 0x1d7834: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7838u;
        goto label_1d7838;
    }
    ctx->pc = 0x1D7830u;
    {
        const bool branch_taken_0x1d7830 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7830u;
        // 0x1d7834: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7830) {
            ctx->pc = 0x1D7878u;
            goto label_1d7878;
        }
    }
    ctx->pc = 0x1D7838u;
label_1d7838:
    // 0x1d7838: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1d7838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_1d783c:
    // 0x1d783c: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x1d783cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_1d7840:
    // 0x1d7840: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d7844:
    if (ctx->pc == 0x1D7844u) {
        ctx->pc = 0x1D7848u;
        goto label_1d7848;
    }
    ctx->pc = 0x1D7840u;
    {
        const bool branch_taken_0x1d7840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7840) {
            ctx->pc = 0x1D7878u;
            goto label_1d7878;
        }
    }
    ctx->pc = 0x1D7848u;
label_1d7848:
    // 0x1d7848: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x1d7848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_1d784c:
    // 0x1d784c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d7850:
    if (ctx->pc == 0x1D7850u) {
        ctx->pc = 0x1D7854u;
        goto label_1d7854;
    }
    ctx->pc = 0x1D784Cu;
    {
        const bool branch_taken_0x1d784c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d784c) {
            ctx->pc = 0x1D785Cu;
            goto label_1d785c;
        }
    }
    ctx->pc = 0x1D7854u;
label_1d7854:
    // 0x1d7854: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d7858:
    if (ctx->pc == 0x1D7858u) {
        ctx->pc = 0x1D7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7854u;
        // 0x1d7858: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D785Cu;
        goto label_1d785c;
    }
    ctx->pc = 0x1D7854u;
    {
        const bool branch_taken_0x1d7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7854u;
        // 0x1d7858: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7854) {
            ctx->pc = 0x1D7878u;
            goto label_1d7878;
        }
    }
    ctx->pc = 0x1D785Cu;
label_1d785c:
    // 0x1d785c: 0x0  nop
    ctx->pc = 0x1d785cu;
    // NOP
label_1d7860:
    // 0x1d7860: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d7860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d7864:
    // 0x1d7864: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1d7864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1d7868:
    // 0x1d7868: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1d786c:
    if (ctx->pc == 0x1D786Cu) {
        ctx->pc = 0x1D786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7868u;
        // 0x1d786c: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7870u;
        goto label_1d7870;
    }
    ctx->pc = 0x1D7868u;
    {
        const bool branch_taken_0x1d7868 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7868u;
        // 0x1d786c: 0x21943  sra         $v1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7868) {
            ctx->pc = 0x1D7878u;
            goto label_1d7878;
        }
    }
    ctx->pc = 0x1D7870u;
label_1d7870:
    // 0x1d7870: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1d7870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_1d7874:
    // 0x1d7874: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x1d7874u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_1d7878:
    // 0x1d7878: 0x10000025  b           . + 4 + (0x25 << 2)
label_1d787c:
    if (ctx->pc == 0x1D787Cu) {
        ctx->pc = 0x1D787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7878u;
        // 0x1d787c: 0xaf838c60  sw          $v1, -0x73A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7880u;
        goto label_1d7880;
    }
    ctx->pc = 0x1D7878u;
    {
        const bool branch_taken_0x1d7878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7878u;
        // 0x1d787c: 0xaf838c60  sw          $v1, -0x73A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7878) {
            ctx->pc = 0x1D7910u;
            goto label_1d7910;
        }
    }
    ctx->pc = 0x1D7880u;
label_1d7880:
    // 0x1d7880: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d7884:
    // 0x1d7884: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d7884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7888:
    // 0x1d7888: 0x2a210025  slti        $at, $s1, 0x25
    ctx->pc = 0x1d7888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)37) ? 1 : 0);
label_1d788c:
    // 0x1d788c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1d7890:
    if (ctx->pc == 0x1D7890u) {
        ctx->pc = 0x1D7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D788Cu;
        // 0x1d7890: 0xaf828c60  sw          $v0, -0x73A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7894u;
        goto label_1d7894;
    }
    ctx->pc = 0x1D788Cu;
    {
        const bool branch_taken_0x1d788c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D788Cu;
        // 0x1d7890: 0xaf828c60  sw          $v0, -0x73A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d788c) {
            ctx->pc = 0x1D789Cu;
            goto label_1d789c;
        }
    }
    ctx->pc = 0x1D7894u;
label_1d7894:
    // 0x1d7894: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1d7898:
    if (ctx->pc == 0x1D7898u) {
        ctx->pc = 0x1D7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7894u;
        // 0x1d7898: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D789Cu;
        goto label_1d789c;
    }
    ctx->pc = 0x1D7894u;
    {
        const bool branch_taken_0x1d7894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7894u;
        // 0x1d7898: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7894) {
            ctx->pc = 0x1D79D4u;
            { ctx->pc = 0x1d79d4; return; }
        }
    }
    ctx->pc = 0x1D789Cu;
label_1d789c:
    // 0x1d789c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d78a0:
    // 0x1d78a0: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1d78a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d78a4:
    // 0x1d78a4: 0x0  nop
    ctx->pc = 0x1d78a4u;
    // NOP
label_1d78a8:
    // 0x1d78a8: 0x0  nop
    ctx->pc = 0x1d78a8u;
    // NOP
label_1d78ac:
    // 0x1d78ac: 0x1810  mfhi        $v1
    ctx->pc = 0x1d78acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1d78b0:
    // 0x1d78b0: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1d78b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d78b4:
    // 0x1d78b4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1d78b8:
    if (ctx->pc == 0x1D78B8u) {
        ctx->pc = 0x1D78BCu;
        goto label_1d78bc;
    }
    ctx->pc = 0x1D78B4u;
    {
        const bool branch_taken_0x1d78b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d78b4) {
            ctx->pc = 0x1D78E4u;
            goto label_1d78e4;
        }
    }
    ctx->pc = 0x1D78BCu;
label_1d78bc:
    // 0x1d78bc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1d78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1d78c0:
    // 0x1d78c0: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x1d78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1d78c4:
    // 0x1d78c4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1d78c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1d78c8:
    // 0x1d78c8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1d78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1d78cc:
    // 0x1d78cc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x1d78ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d78d0:
    // 0x1d78d0: 0x0  nop
    ctx->pc = 0x1d78d0u;
    // NOP
label_1d78d4:
    // 0x1d78d4: 0x0  nop
    ctx->pc = 0x1d78d4u;
    // NOP
label_1d78d8:
    // 0x1d78d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d78d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d78dc:
    // 0x1d78dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d78e0:
    if (ctx->pc == 0x1D78E0u) {
        ctx->pc = 0x1D78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78DCu;
        // 0x1d78e0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D78E4u;
        goto label_1d78e4;
    }
    ctx->pc = 0x1D78DCu;
    {
        const bool branch_taken_0x1d78dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78DCu;
        // 0x1d78e0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78dc) {
            ctx->pc = 0x1D790Cu;
            goto label_1d790c;
        }
    }
    ctx->pc = 0x1D78E4u;
label_1d78e4:
    // 0x1d78e4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1d78e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d78e8:
    // 0x1d78e8: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1d78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1d78ec:
    // 0x1d78ec: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1d78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1d78f0:
    // 0x1d78f0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1d78f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1d78f4:
    // 0x1d78f4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1d78f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d78f8:
    // 0x1d78f8: 0x0  nop
    ctx->pc = 0x1d78f8u;
    // NOP
label_1d78fc:
    // 0x1d78fc: 0x0  nop
    ctx->pc = 0x1d78fcu;
    // NOP
label_1d7900:
    // 0x1d7900: 0x1010  mfhi        $v0
    ctx->pc = 0x1d7900u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1d7904:
    // 0x1d7904: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1d7904u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1d7908:
    // 0x1d7908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d790c:
    // 0x1d790c: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d790cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
label_1d7910:
    // 0x1d7910: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d7910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d7914:
    // 0x1d7914: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1d7914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d7918:
    // 0x1d7918: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d7918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d791c:
    // 0x1d791c: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d7920:
    // 0x1d7920: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d7920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7924:
    // 0x1d7924: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d7924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d7928:
    // 0x1d7928: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d7928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d792c:
    // 0x1d792c: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1d792cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1d7930:
    // 0x1d7930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7934:
    // 0x1d7934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7938:
    // 0x1d7938: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7938u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d793c:
    // 0x1d793c: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x1d793cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d7940:
    // 0x1d7940: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d7940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d7944:
    // 0x1d7944: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1d7944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1d7948:
    // 0x1d7948: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d7948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d794c:
    // 0x1d794c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d794cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7950:
    // 0x1d7950: 0xa0aa0080  sb          $t2, 0x80($a1)
    ctx->pc = 0x1d7950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 10));
label_1d7954:
    // 0x1d7954: 0xa0aa0081  sb          $t2, 0x81($a1)
    ctx->pc = 0x1d7954u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 10));
label_1d7958:
    // 0x1d7958: 0xa0aa0082  sb          $t2, 0x82($a1)
    ctx->pc = 0x1d7958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 10));
label_1d795c:
    // 0x1d795c: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d7960:
    // 0x1d7960: 0xa0a20083  sb          $v0, 0x83($a1)
    ctx->pc = 0x1d7960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 2));
label_1d7964:
    // 0x1d7964: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x1d7964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_1d7968:
    // 0x1d7968: 0xa0aa0120  sb          $t2, 0x120($a1)
    ctx->pc = 0x1d7968u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 10));
label_1d796c:
    // 0x1d796c: 0xa0aa0121  sb          $t2, 0x121($a1)
    ctx->pc = 0x1d796cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 289), (uint8_t)GPR_U32(ctx, 10));
label_1d7970:
    // 0x1d7970: 0xa0aa0122  sb          $t2, 0x122($a1)
    ctx->pc = 0x1d7970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 290), (uint8_t)GPR_U32(ctx, 10));
label_1d7974:
    // 0x1d7974: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x1d7974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7978:
    // 0x1d7978: 0xa0a20123  sb          $v0, 0x123($a1)
    ctx->pc = 0x1d7978u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 2));
label_1d797c:
    // 0x1d797c: 0xaca30124  sw          $v1, 0x124($a1)
    ctx->pc = 0x1d797cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 3));
label_1d7980:
    // 0x1d7980: 0xa0aa01c0  sb          $t2, 0x1C0($a1)
    ctx->pc = 0x1d7980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 10));
label_1d7984:
    // 0x1d7984: 0xa0aa01c1  sb          $t2, 0x1C1($a1)
    ctx->pc = 0x1d7984u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 449), (uint8_t)GPR_U32(ctx, 10));
label_1d7988:
    // 0x1d7988: 0xa0aa01c2  sb          $t2, 0x1C2($a1)
    ctx->pc = 0x1d7988u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 450), (uint8_t)GPR_U32(ctx, 10));
label_1d798c:
    // 0x1d798c: 0x83828c60  lb          $v0, -0x73A0($gp)
    ctx->pc = 0x1d798cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7990:
    // 0x1d7990: 0xa0a201c3  sb          $v0, 0x1C3($a1)
    ctx->pc = 0x1d7990u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 2));
label_1d7994:
    // 0x1d7994: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x1d7994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_1d7998:
    // 0x1d7998: 0xa0aa0260  sb          $t2, 0x260($a1)
    ctx->pc = 0x1d7998u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 608), (uint8_t)GPR_U32(ctx, 10));
label_1d799c:
    // 0x1d799c: 0xa0aa0261  sb          $t2, 0x261($a1)
    ctx->pc = 0x1d799cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 609), (uint8_t)GPR_U32(ctx, 10));
label_1d79a0:
    // 0x1d79a0: 0xa0aa0262  sb          $t2, 0x262($a1)
    ctx->pc = 0x1d79a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 610), (uint8_t)GPR_U32(ctx, 10));
label_1d79a4:
    // 0x1d79a4: 0x83828c5c  lb          $v0, -0x73A4($gp)
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d79a8:
    // 0x1d79a8: 0xa0a20263  sb          $v0, 0x263($a1)
    ctx->pc = 0x1d79a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 2));
label_1d79ac:
    // 0x1d79ac: 0xc066c72  jal         func_19B1C8
label_1d79b0:
    if (ctx->pc == 0x1D79B0u) {
        ctx->pc = 0x1D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79ACu;
        // 0x1d79b0: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D79B4u;
        goto label_1d79b4;
    }
    ctx->pc = 0x1D79ACu;
    SET_GPR_U32(ctx, 31, 0x1D79B4u);
    ctx->pc = 0x1D79B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79ACu;
    // 0x1d79b0: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D79ACu, 0x1D79B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79B4u;
label_1d79b4:
    // 0x1d79b4: 0xc04e120  jal         func_138480
label_1d79b8:
    if (ctx->pc == 0x1D79B8u) {
        ctx->pc = 0x1D79BCu;
        goto label_1d79bc;
    }
    ctx->pc = 0x1D79B4u;
    SET_GPR_U32(ctx, 31, 0x1D79BCu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D79B4u, 0x1D79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79BCu;
label_1d79bc:
    // 0x1d79bc: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1d79c0u;
    return;
}

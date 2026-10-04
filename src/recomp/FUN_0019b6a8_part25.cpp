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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part25(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1a7490u: goto label_1a7490;
        case 0x1a7494u: goto label_1a7494;
        case 0x1a7498u: goto label_1a7498;
        case 0x1a749cu: goto label_1a749c;
        case 0x1a74a0u: goto label_1a74a0;
        case 0x1a74a4u: goto label_1a74a4;
        case 0x1a74a8u: goto label_1a74a8;
        case 0x1a74acu: goto label_1a74ac;
        case 0x1a74b0u: goto label_1a74b0;
        case 0x1a74b4u: goto label_1a74b4;
        case 0x1a74b8u: goto label_1a74b8;
        case 0x1a74bcu: goto label_1a74bc;
        case 0x1a74c0u: goto label_1a74c0;
        case 0x1a74c4u: goto label_1a74c4;
        case 0x1a74c8u: goto label_1a74c8;
        case 0x1a74ccu: goto label_1a74cc;
        case 0x1a74d0u: goto label_1a74d0;
        case 0x1a74d4u: goto label_1a74d4;
        case 0x1a74d8u: goto label_1a74d8;
        case 0x1a74dcu: goto label_1a74dc;
        case 0x1a74e0u: goto label_1a74e0;
        case 0x1a74e4u: goto label_1a74e4;
        case 0x1a74e8u: goto label_1a74e8;
        case 0x1a74ecu: goto label_1a74ec;
        case 0x1a74f0u: goto label_1a74f0;
        case 0x1a74f4u: goto label_1a74f4;
        case 0x1a74f8u: goto label_1a74f8;
        case 0x1a74fcu: goto label_1a74fc;
        case 0x1a7500u: goto label_1a7500;
        case 0x1a7504u: goto label_1a7504;
        case 0x1a7508u: goto label_1a7508;
        case 0x1a750cu: goto label_1a750c;
        case 0x1a7510u: goto label_1a7510;
        case 0x1a7514u: goto label_1a7514;
        case 0x1a7518u: goto label_1a7518;
        case 0x1a751cu: goto label_1a751c;
        case 0x1a7520u: goto label_1a7520;
        case 0x1a7524u: goto label_1a7524;
        case 0x1a7528u: goto label_1a7528;
        case 0x1a752cu: goto label_1a752c;
        case 0x1a7530u: goto label_1a7530;
        case 0x1a7534u: goto label_1a7534;
        case 0x1a7538u: goto label_1a7538;
        case 0x1a753cu: goto label_1a753c;
        case 0x1a7540u: goto label_1a7540;
        case 0x1a7544u: goto label_1a7544;
        case 0x1a7548u: goto label_1a7548;
        case 0x1a754cu: goto label_1a754c;
        case 0x1a7550u: goto label_1a7550;
        case 0x1a7554u: goto label_1a7554;
        case 0x1a7558u: goto label_1a7558;
        case 0x1a755cu: goto label_1a755c;
        case 0x1a7560u: goto label_1a7560;
        case 0x1a7564u: goto label_1a7564;
        case 0x1a7568u: goto label_1a7568;
        case 0x1a756cu: goto label_1a756c;
        case 0x1a7570u: goto label_1a7570;
        case 0x1a7574u: goto label_1a7574;
        case 0x1a7578u: goto label_1a7578;
        case 0x1a757cu: goto label_1a757c;
        case 0x1a7580u: goto label_1a7580;
        case 0x1a7584u: goto label_1a7584;
        case 0x1a7588u: goto label_1a7588;
        case 0x1a758cu: goto label_1a758c;
        case 0x1a7590u: goto label_1a7590;
        case 0x1a7594u: goto label_1a7594;
        case 0x1a7598u: goto label_1a7598;
        case 0x1a759cu: goto label_1a759c;
        case 0x1a75a0u: goto label_1a75a0;
        case 0x1a75a4u: goto label_1a75a4;
        case 0x1a75a8u: goto label_1a75a8;
        case 0x1a75acu: goto label_1a75ac;
        case 0x1a75b0u: goto label_1a75b0;
        case 0x1a75b4u: goto label_1a75b4;
        case 0x1a75b8u: goto label_1a75b8;
        case 0x1a75bcu: goto label_1a75bc;
        case 0x1a75c0u: goto label_1a75c0;
        case 0x1a75c4u: goto label_1a75c4;
        case 0x1a75c8u: goto label_1a75c8;
        case 0x1a75ccu: goto label_1a75cc;
        case 0x1a75d0u: goto label_1a75d0;
        case 0x1a75d4u: goto label_1a75d4;
        case 0x1a75d8u: goto label_1a75d8;
        case 0x1a75dcu: goto label_1a75dc;
        case 0x1a75e0u: goto label_1a75e0;
        case 0x1a75e4u: goto label_1a75e4;
        case 0x1a75e8u: goto label_1a75e8;
        case 0x1a75ecu: goto label_1a75ec;
        case 0x1a75f0u: goto label_1a75f0;
        case 0x1a75f4u: goto label_1a75f4;
        case 0x1a75f8u: goto label_1a75f8;
        case 0x1a75fcu: goto label_1a75fc;
        case 0x1a7600u: goto label_1a7600;
        case 0x1a7604u: goto label_1a7604;
        case 0x1a7608u: goto label_1a7608;
        case 0x1a760cu: goto label_1a760c;
        case 0x1a7610u: goto label_1a7610;
        case 0x1a7614u: goto label_1a7614;
        case 0x1a7618u: goto label_1a7618;
        case 0x1a761cu: goto label_1a761c;
        case 0x1a7620u: goto label_1a7620;
        case 0x1a7624u: goto label_1a7624;
        case 0x1a7628u: goto label_1a7628;
        case 0x1a762cu: goto label_1a762c;
        case 0x1a7630u: goto label_1a7630;
        case 0x1a7634u: goto label_1a7634;
        case 0x1a7638u: goto label_1a7638;
        case 0x1a763cu: goto label_1a763c;
        case 0x1a7640u: goto label_1a7640;
        case 0x1a7644u: goto label_1a7644;
        case 0x1a7648u: goto label_1a7648;
        case 0x1a764cu: goto label_1a764c;
        case 0x1a7650u: goto label_1a7650;
        case 0x1a7654u: goto label_1a7654;
        case 0x1a7658u: goto label_1a7658;
        case 0x1a765cu: goto label_1a765c;
        case 0x1a7660u: goto label_1a7660;
        case 0x1a7664u: goto label_1a7664;
        case 0x1a7668u: goto label_1a7668;
        case 0x1a766cu: goto label_1a766c;
        case 0x1a7670u: goto label_1a7670;
        case 0x1a7674u: goto label_1a7674;
        case 0x1a7678u: goto label_1a7678;
        case 0x1a767cu: goto label_1a767c;
        case 0x1a7680u: goto label_1a7680;
        case 0x1a7684u: goto label_1a7684;
        case 0x1a7688u: goto label_1a7688;
        case 0x1a768cu: goto label_1a768c;
        case 0x1a7690u: goto label_1a7690;
        case 0x1a7694u: goto label_1a7694;
        case 0x1a7698u: goto label_1a7698;
        case 0x1a769cu: goto label_1a769c;
        case 0x1a76a0u: goto label_1a76a0;
        case 0x1a76a4u: goto label_1a76a4;
        case 0x1a76a8u: goto label_1a76a8;
        case 0x1a76acu: goto label_1a76ac;
        case 0x1a76b0u: goto label_1a76b0;
        case 0x1a76b4u: goto label_1a76b4;
        case 0x1a76b8u: goto label_1a76b8;
        case 0x1a76bcu: goto label_1a76bc;
        case 0x1a76c0u: goto label_1a76c0;
        case 0x1a76c4u: goto label_1a76c4;
        case 0x1a76c8u: goto label_1a76c8;
        case 0x1a76ccu: goto label_1a76cc;
        case 0x1a76d0u: goto label_1a76d0;
        case 0x1a76d4u: goto label_1a76d4;
        case 0x1a76d8u: goto label_1a76d8;
        case 0x1a76dcu: goto label_1a76dc;
        case 0x1a76e0u: goto label_1a76e0;
        case 0x1a76e4u: goto label_1a76e4;
        case 0x1a76e8u: goto label_1a76e8;
        case 0x1a76ecu: goto label_1a76ec;
        case 0x1a76f0u: goto label_1a76f0;
        case 0x1a76f4u: goto label_1a76f4;
        case 0x1a76f8u: goto label_1a76f8;
        case 0x1a76fcu: goto label_1a76fc;
        case 0x1a7700u: goto label_1a7700;
        case 0x1a7704u: goto label_1a7704;
        case 0x1a7708u: goto label_1a7708;
        case 0x1a770cu: goto label_1a770c;
        case 0x1a7710u: goto label_1a7710;
        case 0x1a7714u: goto label_1a7714;
        case 0x1a7718u: goto label_1a7718;
        case 0x1a771cu: goto label_1a771c;
        case 0x1a7720u: goto label_1a7720;
        case 0x1a7724u: goto label_1a7724;
        case 0x1a7728u: goto label_1a7728;
        case 0x1a772cu: goto label_1a772c;
        case 0x1a7730u: goto label_1a7730;
        case 0x1a7734u: goto label_1a7734;
        case 0x1a7738u: goto label_1a7738;
        case 0x1a773cu: goto label_1a773c;
        case 0x1a7740u: goto label_1a7740;
        case 0x1a7744u: goto label_1a7744;
        case 0x1a7748u: goto label_1a7748;
        case 0x1a774cu: goto label_1a774c;
        case 0x1a7750u: goto label_1a7750;
        case 0x1a7754u: goto label_1a7754;
        case 0x1a7758u: goto label_1a7758;
        case 0x1a775cu: goto label_1a775c;
        case 0x1a7760u: goto label_1a7760;
        case 0x1a7764u: goto label_1a7764;
        case 0x1a7768u: goto label_1a7768;
        case 0x1a776cu: goto label_1a776c;
        case 0x1a7770u: goto label_1a7770;
        case 0x1a7774u: goto label_1a7774;
        case 0x1a7778u: goto label_1a7778;
        case 0x1a777cu: goto label_1a777c;
        case 0x1a7780u: goto label_1a7780;
        case 0x1a7784u: goto label_1a7784;
        case 0x1a7788u: goto label_1a7788;
        case 0x1a778cu: goto label_1a778c;
        case 0x1a7790u: goto label_1a7790;
        case 0x1a7794u: goto label_1a7794;
        case 0x1a7798u: goto label_1a7798;
        case 0x1a779cu: goto label_1a779c;
        case 0x1a77a0u: goto label_1a77a0;
        case 0x1a77a4u: goto label_1a77a4;
        case 0x1a77a8u: goto label_1a77a8;
        case 0x1a77acu: goto label_1a77ac;
        case 0x1a77b0u: goto label_1a77b0;
        case 0x1a77b4u: goto label_1a77b4;
        case 0x1a77b8u: goto label_1a77b8;
        case 0x1a77bcu: goto label_1a77bc;
        case 0x1a77c0u: goto label_1a77c0;
        case 0x1a77c4u: goto label_1a77c4;
        case 0x1a77c8u: goto label_1a77c8;
        case 0x1a77ccu: goto label_1a77cc;
        case 0x1a77d0u: goto label_1a77d0;
        case 0x1a77d4u: goto label_1a77d4;
        case 0x1a77d8u: goto label_1a77d8;
        case 0x1a77dcu: goto label_1a77dc;
        case 0x1a77e0u: goto label_1a77e0;
        case 0x1a77e4u: goto label_1a77e4;
        case 0x1a77e8u: goto label_1a77e8;
        case 0x1a77ecu: goto label_1a77ec;
        case 0x1a77f0u: goto label_1a77f0;
        case 0x1a77f4u: goto label_1a77f4;
        case 0x1a77f8u: goto label_1a77f8;
        case 0x1a77fcu: goto label_1a77fc;
        case 0x1a7800u: goto label_1a7800;
        case 0x1a7804u: goto label_1a7804;
        case 0x1a7808u: goto label_1a7808;
        case 0x1a780cu: goto label_1a780c;
        case 0x1a7810u: goto label_1a7810;
        case 0x1a7814u: goto label_1a7814;
        case 0x1a7818u: goto label_1a7818;
        case 0x1a781cu: goto label_1a781c;
        case 0x1a7820u: goto label_1a7820;
        case 0x1a7824u: goto label_1a7824;
        case 0x1a7828u: goto label_1a7828;
        case 0x1a782cu: goto label_1a782c;
        case 0x1a7830u: goto label_1a7830;
        case 0x1a7834u: goto label_1a7834;
        case 0x1a7838u: goto label_1a7838;
        case 0x1a783cu: goto label_1a783c;
        case 0x1a7840u: goto label_1a7840;
        case 0x1a7844u: goto label_1a7844;
        case 0x1a7848u: goto label_1a7848;
        case 0x1a784cu: goto label_1a784c;
        case 0x1a7850u: goto label_1a7850;
        case 0x1a7854u: goto label_1a7854;
        case 0x1a7858u: goto label_1a7858;
        case 0x1a785cu: goto label_1a785c;
        case 0x1a7860u: goto label_1a7860;
        case 0x1a7864u: goto label_1a7864;
        case 0x1a7868u: goto label_1a7868;
        case 0x1a786cu: goto label_1a786c;
        case 0x1a7870u: goto label_1a7870;
        case 0x1a7874u: goto label_1a7874;
        case 0x1a7878u: goto label_1a7878;
        case 0x1a787cu: goto label_1a787c;
        case 0x1a7880u: goto label_1a7880;
        case 0x1a7884u: goto label_1a7884;
        case 0x1a7888u: goto label_1a7888;
        case 0x1a788cu: goto label_1a788c;
        case 0x1a7890u: goto label_1a7890;
        case 0x1a7894u: goto label_1a7894;
        case 0x1a7898u: goto label_1a7898;
        case 0x1a789cu: goto label_1a789c;
        case 0x1a78a0u: goto label_1a78a0;
        case 0x1a78a4u: goto label_1a78a4;
        case 0x1a78a8u: goto label_1a78a8;
        case 0x1a78acu: goto label_1a78ac;
        case 0x1a78b0u: goto label_1a78b0;
        case 0x1a78b4u: goto label_1a78b4;
        case 0x1a78b8u: goto label_1a78b8;
        case 0x1a78bcu: goto label_1a78bc;
        case 0x1a78c0u: goto label_1a78c0;
        case 0x1a78c4u: goto label_1a78c4;
        case 0x1a78c8u: goto label_1a78c8;
        case 0x1a78ccu: goto label_1a78cc;
        case 0x1a78d0u: goto label_1a78d0;
        case 0x1a78d4u: goto label_1a78d4;
        case 0x1a78d8u: goto label_1a78d8;
        case 0x1a78dcu: goto label_1a78dc;
        case 0x1a78e0u: goto label_1a78e0;
        case 0x1a78e4u: goto label_1a78e4;
        case 0x1a78e8u: goto label_1a78e8;
        case 0x1a78ecu: goto label_1a78ec;
        case 0x1a78f0u: goto label_1a78f0;
        case 0x1a78f4u: goto label_1a78f4;
        case 0x1a78f8u: goto label_1a78f8;
        case 0x1a78fcu: goto label_1a78fc;
        case 0x1a7900u: goto label_1a7900;
        case 0x1a7904u: goto label_1a7904;
        case 0x1a7908u: goto label_1a7908;
        case 0x1a790cu: goto label_1a790c;
        case 0x1a7910u: goto label_1a7910;
        case 0x1a7914u: goto label_1a7914;
        case 0x1a7918u: goto label_1a7918;
        case 0x1a791cu: goto label_1a791c;
        case 0x1a7920u: goto label_1a7920;
        case 0x1a7924u: goto label_1a7924;
        case 0x1a7928u: goto label_1a7928;
        case 0x1a792cu: goto label_1a792c;
        case 0x1a7930u: goto label_1a7930;
        case 0x1a7934u: goto label_1a7934;
        case 0x1a7938u: goto label_1a7938;
        case 0x1a793cu: goto label_1a793c;
        case 0x1a7940u: goto label_1a7940;
        case 0x1a7944u: goto label_1a7944;
        case 0x1a7948u: goto label_1a7948;
        case 0x1a794cu: goto label_1a794c;
        case 0x1a7950u: goto label_1a7950;
        case 0x1a7954u: goto label_1a7954;
        case 0x1a7958u: goto label_1a7958;
        case 0x1a795cu: goto label_1a795c;
        case 0x1a7960u: goto label_1a7960;
        case 0x1a7964u: goto label_1a7964;
        case 0x1a7968u: goto label_1a7968;
        case 0x1a796cu: goto label_1a796c;
        case 0x1a7970u: goto label_1a7970;
        case 0x1a7974u: goto label_1a7974;
        case 0x1a7978u: goto label_1a7978;
        case 0x1a797cu: goto label_1a797c;
        case 0x1a7980u: goto label_1a7980;
        case 0x1a7984u: goto label_1a7984;
        case 0x1a7988u: goto label_1a7988;
        case 0x1a798cu: goto label_1a798c;
        case 0x1a7990u: goto label_1a7990;
        case 0x1a7994u: goto label_1a7994;
        case 0x1a7998u: goto label_1a7998;
        case 0x1a799cu: goto label_1a799c;
        case 0x1a79a0u: goto label_1a79a0;
        case 0x1a79a4u: goto label_1a79a4;
        case 0x1a79a8u: goto label_1a79a8;
        case 0x1a79acu: goto label_1a79ac;
        case 0x1a79b0u: goto label_1a79b0;
        case 0x1a79b4u: goto label_1a79b4;
        case 0x1a79b8u: goto label_1a79b8;
        case 0x1a79bcu: goto label_1a79bc;
        case 0x1a79c0u: goto label_1a79c0;
        case 0x1a79c4u: goto label_1a79c4;
        case 0x1a79c8u: goto label_1a79c8;
        case 0x1a79ccu: goto label_1a79cc;
        case 0x1a79d0u: goto label_1a79d0;
        case 0x1a79d4u: goto label_1a79d4;
        case 0x1a79d8u: goto label_1a79d8;
        case 0x1a79dcu: goto label_1a79dc;
        case 0x1a79e0u: goto label_1a79e0;
        case 0x1a79e4u: goto label_1a79e4;
        case 0x1a79e8u: goto label_1a79e8;
        case 0x1a79ecu: goto label_1a79ec;
        case 0x1a79f0u: goto label_1a79f0;
        case 0x1a79f4u: goto label_1a79f4;
        default: return;
    }

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
    { ctx->pc = 0x1a6e50; return; }
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
label_1a7490:
    // 0x1a7490: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a7490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a7494:
    // 0x1a7494: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a7494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a7498:
    // 0x1a7498: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a7498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a749c:
    // 0x1a749c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a749cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a74a0:
    // 0x1a74a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a74a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a74a4:
    // 0x1a74a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a74a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a74a8:
    // 0x1a74a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a74a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a74ac:
    // 0x1a74ac: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a74acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a74b0:
    // 0x1a74b0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a74b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a74b4:
    // 0x1a74b4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a74b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a74b8:
    // 0x1a74b8: 0xc069c8c  jal         func_1A7230
label_1a74bc:
    if (ctx->pc == 0x1A74BCu) {
        ctx->pc = 0x1A74BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74B8u;
        // 0x1a74bc: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A74C0u;
        goto label_1a74c0;
    }
    ctx->pc = 0x1A74B8u;
    SET_GPR_U32(ctx, 31, 0x1A74C0u);
    ctx->pc = 0x1A74BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A74B8u;
    // 0x1a74bc: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7230u;
    goto label_1a7230;
    ctx->pc = 0x1A74C0u;
label_1a74c0:
    // 0x1a74c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a74c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a74c4:
    // 0x1a74c4: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_1a74c8:
    if (ctx->pc == 0x1A74C8u) {
        ctx->pc = 0x1A74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74C4u;
        // 0x1a74c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A74CCu;
        goto label_1a74cc;
    }
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74C4u;
        // 0x1a74c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A74CCu;
label_1a74cc:
    // 0x1a74cc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a74d0:
    // 0x1a74d0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1a74d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1a74d4:
    // 0x1a74d4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a74d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1a74d8:
    // 0x1a74d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a74dc:
    // 0x1a74dc: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1a74dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
label_1a74e0:
    // 0x1a74e0: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x1a74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
label_1a74e4:
    // 0x1a74e4: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x1a74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
label_1a74e8:
    // 0x1a74e8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1a74e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
label_1a74ec:
    // 0x1a74ec: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_1a74f0:
    if (ctx->pc == 0x1A74F0u) {
        ctx->pc = 0x1A74F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74ECu;
        // 0x1a74f0: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A74F4u;
        goto label_1a74f4;
    }
    ctx->pc = 0x1A74ECu;
    {
        const bool branch_taken_0x1a74ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A74F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74ECu;
        // 0x1a74f0: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74ec) {
            ctx->pc = 0x1A7578u;
            goto label_1a7578;
        }
    }
    ctx->pc = 0x1A74F4u;
label_1a74f4:
    // 0x1a74f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a74f8:
    // 0x1a74f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a74f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a74fc:
    // 0x1a74fc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a7500:
    // 0x1a7500: 0xc069208  jal         func_1A4820
label_1a7504:
    if (ctx->pc == 0x1A7504u) {
        ctx->pc = 0x1A7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7500u;
        // 0x1a7504: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7508u;
        goto label_1a7508;
    }
    ctx->pc = 0x1A7500u;
    SET_GPR_U32(ctx, 31, 0x1A7508u);
    ctx->pc = 0x1A7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7500u;
    // 0x1a7504: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A7508u;
label_1a7508:
    // 0x1a7508: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1a750c:
    if (ctx->pc == 0x1A750Cu) {
        ctx->pc = 0x1A750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7508u;
        // 0x1a750c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7510u;
        goto label_1a7510;
    }
    ctx->pc = 0x1A7508u;
    {
        const bool branch_taken_0x1a7508 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7508u;
        // 0x1a750c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7508) {
            ctx->pc = 0x1A7520u;
            goto label_1a7520;
        }
    }
    ctx->pc = 0x1A7510u;
label_1a7510:
    // 0x1a7510: 0xc069cb6  jal         func_1A72D8
label_1a7514:
    if (ctx->pc == 0x1A7514u) {
        ctx->pc = 0x1A7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7510u;
        // 0x1a7514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7518u;
        goto label_1a7518;
    }
    ctx->pc = 0x1A7510u;
    SET_GPR_U32(ctx, 31, 0x1A7518u);
    ctx->pc = 0x1A7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7510u;
    // 0x1a7514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    goto label_1a72d8;
    ctx->pc = 0x1A7518u;
label_1a7518:
    // 0x1a7518: 0x10000026  b           . + 4 + (0x26 << 2)
label_1a751c:
    if (ctx->pc == 0x1A751Cu) {
        ctx->pc = 0x1A751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7518u;
        // 0x1a751c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7520u;
        goto label_1a7520;
    }
    ctx->pc = 0x1A7518u;
    {
        const bool branch_taken_0x1a7518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7518u;
        // 0x1a751c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7518) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A7520u;
label_1a7520:
    // 0x1a7520: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7524:
    // 0x1a7524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7528:
    // 0x1a7528: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1a7528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
label_1a752c:
    // 0x1a752c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a752cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a7530:
    // 0x1a7530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7534:
    // 0x1a7534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a7534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7538:
    // 0x1a7538: 0xc069b84  jal         func_1A6E10
label_1a753c:
    if (ctx->pc == 0x1A753Cu) {
        ctx->pc = 0x1A753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7538u;
        // 0x1a753c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7540u;
        goto label_1a7540;
    }
    ctx->pc = 0x1A7538u;
    SET_GPR_U32(ctx, 31, 0x1A7540u);
    ctx->pc = 0x1A753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7538u;
    // 0x1a753c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    { ctx->pc = 0x1a6e10; return; }
    ctx->pc = 0x1A7540u;
label_1a7540:
    // 0x1a7540: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a7544:
    if (ctx->pc == 0x1A7544u) {
        ctx->pc = 0x1A7548u;
        goto label_1a7548;
    }
    ctx->pc = 0x1A7540u;
    {
        const bool branch_taken_0x1a7540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7540) {
            ctx->pc = 0x1A7560u;
            goto label_1a7560;
        }
    }
    ctx->pc = 0x1A7548u;
label_1a7548:
    // 0x1a7548: 0xc069cb6  jal         func_1A72D8
label_1a754c:
    if (ctx->pc == 0x1A754Cu) {
        ctx->pc = 0x1A754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7548u;
        // 0x1a754c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7550u;
        goto label_1a7550;
    }
    ctx->pc = 0x1A7548u;
    SET_GPR_U32(ctx, 31, 0x1A7550u);
    ctx->pc = 0x1A754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7548u;
    // 0x1a754c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    goto label_1a72d8;
    ctx->pc = 0x1A7550u;
label_1a7550:
    // 0x1a7550: 0xc06920c  jal         func_1A4830
label_1a7554:
    if (ctx->pc == 0x1A7554u) {
        ctx->pc = 0x1A7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7550u;
        // 0x1a7554: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7558u;
        goto label_1a7558;
    }
    ctx->pc = 0x1A7550u;
    SET_GPR_U32(ctx, 31, 0x1A7558u);
    ctx->pc = 0x1A7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7550u;
    // 0x1a7554: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A7558u;
label_1a7558:
    // 0x1a7558: 0x10000016  b           . + 4 + (0x16 << 2)
label_1a755c:
    if (ctx->pc == 0x1A755Cu) {
        ctx->pc = 0x1A755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7558u;
        // 0x1a755c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7560u;
        goto label_1a7560;
    }
    ctx->pc = 0x1A7558u;
    {
        const bool branch_taken_0x1a7558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7558u;
        // 0x1a755c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7558) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A7560u;
label_1a7560:
    // 0x1a7560: 0xc069218  jal         func_1A4860
label_1a7564:
    if (ctx->pc == 0x1A7564u) {
        ctx->pc = 0x1A7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7560u;
        // 0x1a7564: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7568u;
        goto label_1a7568;
    }
    ctx->pc = 0x1A7560u;
    SET_GPR_U32(ctx, 31, 0x1A7568u);
    ctx->pc = 0x1A7564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7560u;
    // 0x1a7564: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A7568u;
label_1a7568:
    // 0x1a7568: 0xc06920c  jal         func_1A4830
label_1a756c:
    if (ctx->pc == 0x1A756Cu) {
        ctx->pc = 0x1A756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7568u;
        // 0x1a756c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7570u;
        goto label_1a7570;
    }
    ctx->pc = 0x1A7568u;
    SET_GPR_U32(ctx, 31, 0x1A7570u);
    ctx->pc = 0x1A756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7568u;
    // 0x1a756c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A7570u;
label_1a7570:
    // 0x1a7570: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a7574:
    if (ctx->pc == 0x1A7574u) {
        ctx->pc = 0x1A7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7570u;
        // 0x1a7574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7578u;
        goto label_1a7578;
    }
    ctx->pc = 0x1A7570u;
    {
        const bool branch_taken_0x1a7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7570u;
        // 0x1a7574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7570) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A7578u;
label_1a7578:
    // 0x1a7578: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a757c:
    // 0x1a757c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a757cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7580:
    // 0x1a7580: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a7580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a7584:
    // 0x1a7584: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1a7584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
label_1a7588:
    // 0x1a7588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a758c:
    // 0x1a758c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a758cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a7590:
    // 0x1a7590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7594:
    // 0x1a7594: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a7594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7598:
    // 0x1a7598: 0xc069b84  jal         func_1A6E10
label_1a759c:
    if (ctx->pc == 0x1A759Cu) {
        ctx->pc = 0x1A759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7598u;
        // 0x1a759c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A75A0u;
        goto label_1a75a0;
    }
    ctx->pc = 0x1A7598u;
    SET_GPR_U32(ctx, 31, 0x1A75A0u);
    ctx->pc = 0x1A759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7598u;
    // 0x1a759c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    { ctx->pc = 0x1a6e10; return; }
    ctx->pc = 0x1A75A0u;
label_1a75a0:
    // 0x1a75a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a75a4:
    if (ctx->pc == 0x1A75A4u) {
        ctx->pc = 0x1A75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75A0u;
        // 0x1a75a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A75A8u;
        goto label_1a75a8;
    }
    ctx->pc = 0x1A75A0u;
    {
        const bool branch_taken_0x1a75a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75A0u;
        // 0x1a75a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75a0) {
            ctx->pc = 0x1A75B4u;
            goto label_1a75b4;
        }
    }
    ctx->pc = 0x1A75A8u;
label_1a75a8:
    // 0x1a75a8: 0xc069cb6  jal         func_1A72D8
label_1a75ac:
    if (ctx->pc == 0x1A75ACu) {
        ctx->pc = 0x1A75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75A8u;
        // 0x1a75ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A75B0u;
        goto label_1a75b0;
    }
    ctx->pc = 0x1A75A8u;
    SET_GPR_U32(ctx, 31, 0x1A75B0u);
    ctx->pc = 0x1A75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75A8u;
    // 0x1a75ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    goto label_1a72d8;
    ctx->pc = 0x1A75B0u;
label_1a75b0:
    // 0x1a75b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a75b4:
    // 0x1a75b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a75b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a75b8:
    // 0x1a75b8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a75b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a75bc:
    // 0x1a75bc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a75bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a75c0:
    // 0x1a75c0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a75c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a75c4:
    // 0x1a75c4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a75c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a75c8:
    // 0x1a75c8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a75cc:
    // 0x1a75cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a75ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a75d0:
    // 0x1a75d0: 0x3e00008  jr          $ra
label_1a75d4:
    if (ctx->pc == 0x1A75D4u) {
        ctx->pc = 0x1A75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75D0u;
        // 0x1a75d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A75D8u;
        goto label_1a75d8;
    }
    ctx->pc = 0x1A75D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75D0u;
        // 0x1a75d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A75D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A75D8u;
label_1a75d8:
    // 0x1a75d8: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1a75dc:
    // 0x1a75dc: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_1a75e0:
    if (ctx->pc == 0x1A75E0u) {
        ctx->pc = 0x1A75E4u;
        goto label_1a75e4;
    }
    ctx->pc = 0x1A75DCu;
    {
        const bool branch_taken_0x1a75dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a75dc) {
            ctx->pc = 0x1A761Cu;
            goto label_1a761c;
        }
    }
    ctx->pc = 0x1A75E4u;
label_1a75e4:
    // 0x1a75e4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1a75e8:
    // 0x1a75e8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_1a75ec:
    if (ctx->pc == 0x1A75ECu) {
        ctx->pc = 0x1A75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75E8u;
        // 0x1a75ec: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A75F0u;
        goto label_1a75f0;
    }
    ctx->pc = 0x1A75E8u;
    {
        const bool branch_taken_0x1a75e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a75e8) {
            ctx->pc = 0x1A75ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A75E8u;
            // 0x1a75ec: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7614u;
            goto label_1a7614;
        }
    }
    ctx->pc = 0x1A75F0u;
label_1a75f0:
    // 0x1a75f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a75f4:
    // 0x1a75f4: 0x0  nop
    ctx->pc = 0x1a75f4u;
    // NOP
label_1a75f8:
    // 0x1a75f8: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
label_1a75fc:
    if (ctx->pc == 0x1A75FCu) {
        ctx->pc = 0x1A75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75F8u;
        // 0x1a75fc: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7600u;
        goto label_1a7600;
    }
    ctx->pc = 0x1A75F8u;
    {
        const bool branch_taken_0x1a75f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a75f8) {
            ctx->pc = 0x1A75FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A75F8u;
            // 0x1a75fc: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7608u;
            goto label_1a7608;
        }
    }
    ctx->pc = 0x1A7600u;
label_1a7600:
    // 0x1a7600: 0x3e00008  jr          $ra
label_1a7604:
    if (ctx->pc == 0x1A7604u) {
        ctx->pc = 0x1A7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7600u;
        // 0x1a7604: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7608u;
        goto label_1a7608;
    }
    ctx->pc = 0x1A7600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7600u;
        // 0x1a7604: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7608u;
label_1a7608:
    // 0x1a7608: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
label_1a760c:
    if (ctx->pc == 0x1A760Cu) {
        ctx->pc = 0x1A760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7608u;
        // 0x1a760c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7610u;
        goto label_1a7610;
    }
    ctx->pc = 0x1A7608u;
    {
        const bool branch_taken_0x1a7608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7608) {
            ctx->pc = 0x1A760Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7608u;
            // 0x1a760c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A75F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a75f8;
        }
    }
    ctx->pc = 0x1A7610u;
label_1a7610:
    // 0x1a7610: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1a7614:
    // 0x1a7614: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
label_1a7618:
    if (ctx->pc == 0x1A7618u) {
        ctx->pc = 0x1A7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7614u;
        // 0x1a7618: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A761Cu;
        goto label_1a761c;
    }
    ctx->pc = 0x1A7614u;
    {
        const bool branch_taken_0x1a7614 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7614) {
            ctx->pc = 0x1A7618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7614u;
            // 0x1a7618: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A75E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a75e8;
        }
    }
    ctx->pc = 0x1A761Cu;
label_1a761c:
    // 0x1a761c: 0x3e00008  jr          $ra
label_1a7620:
    if (ctx->pc == 0x1A7620u) {
        ctx->pc = 0x1A7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A761Cu;
        // 0x1a7620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7624u;
        goto label_1a7624;
    }
    ctx->pc = 0x1A761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A761Cu;
        // 0x1a7620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A761Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7624u;
label_1a7624:
    // 0x1a7624: 0x0  nop
    ctx->pc = 0x1a7624u;
    // NOP
label_1a7628:
    // 0x1a7628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a762c:
    // 0x1a762c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7630:
    // 0x1a7630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7634:
    // 0x1a7634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a7634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7638:
    // 0x1a7638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a763c:
    // 0x1a763c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a7640:
    // 0x1a7640: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a7644:
    // 0x1a7644: 0xc069cbe  jal         func_1A72F8
label_1a7648:
    if (ctx->pc == 0x1A7648u) {
        ctx->pc = 0x1A7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7644u;
        // 0x1a7648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A764Cu;
        goto label_1a764c;
    }
    ctx->pc = 0x1A7644u;
    SET_GPR_U32(ctx, 31, 0x1A764Cu);
    ctx->pc = 0x1A7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7644u;
    // 0x1a7648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72F8u;
    goto label_1a72f8;
    ctx->pc = 0x1A764Cu;
label_1a764c:
    // 0x1a764c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a764cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7650:
    // 0x1a7650: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a7650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a7654:
    // 0x1a7654: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a7654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a7658:
    // 0x1a7658: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a7658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1a765c:
    // 0x1a765c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1a765cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_1a7660:
    // 0x1a7660: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x1a7660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
label_1a7664:
    // 0x1a7664: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1a7664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_1a7668:
    // 0x1a7668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a766c:
    // 0x1a766c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1a766cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_1a7670:
    // 0x1a7670: 0xc069d76  jal         func_1A75D8
label_1a7674:
    if (ctx->pc == 0x1A7674u) {
        ctx->pc = 0x1A7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7670u;
        // 0x1a7674: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7678u;
        goto label_1a7678;
    }
    ctx->pc = 0x1A7670u;
    SET_GPR_U32(ctx, 31, 0x1A7678u);
    ctx->pc = 0x1A7674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7670u;
    // 0x1a7674: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A75D8u;
    goto label_1a75d8;
    ctx->pc = 0x1A7678u;
label_1a7678:
    // 0x1a7678: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a767c:
    // 0x1a767c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_1a7680:
    if (ctx->pc == 0x1A7680u) {
        ctx->pc = 0x1A7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A767Cu;
        // 0x1a7680: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7684u;
        goto label_1a7684;
    }
    ctx->pc = 0x1A767Cu;
    {
        const bool branch_taken_0x1a767c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a767c) {
            ctx->pc = 0x1A7680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A767Cu;
            // 0x1a7680: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7694u;
            goto label_1a7694;
        }
    }
    ctx->pc = 0x1A7684u;
label_1a7684:
    // 0x1a7684: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1a7684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_1a7688:
    // 0x1a7688: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x1a7688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_1a768c:
    // 0x1a768c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a7690:
    if (ctx->pc == 0x1A7690u) {
        ctx->pc = 0x1A7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A768Cu;
        // 0x1a7690: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7694u;
        goto label_1a7694;
    }
    ctx->pc = 0x1A768Cu;
    {
        const bool branch_taken_0x1a768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A768Cu;
        // 0x1a7690: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a768c) {
            ctx->pc = 0x1A76A4u;
            goto label_1a76a4;
        }
    }
    ctx->pc = 0x1A7694u;
label_1a7694:
    // 0x1a7694: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a7694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a7698:
    // 0x1a7698: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1a7698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_1a769c:
    // 0x1a769c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1a769cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a76a0:
    // 0x1a76a0: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1a76a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_1a76a4:
    // 0x1a76a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a76a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a76a8:
    // 0x1a76a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a76a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a76ac:
    // 0x1a76ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a76acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a76b0:
    // 0x1a76b0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1a76b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_1a76b4:
    // 0x1a76b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a76b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a76b8:
    // 0x1a76b8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a76b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a76bc:
    // 0x1a76bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a76bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a76c0:
    // 0x1a76c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a76c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a76c4:
    // 0x1a76c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a76c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a76c8:
    // 0x1a76c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a76c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a76cc:
    // 0x1a76cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a76ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a76d0:
    // 0x1a76d0: 0x8069b94  j           func_1A6E50
label_1a76d4:
    if (ctx->pc == 0x1A76D4u) {
        ctx->pc = 0x1A76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76D0u;
        // 0x1a76d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A76D8u;
        goto label_1a76d8;
    }
    ctx->pc = 0x1A76D0u;
    ctx->pc = 0x1A76D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A76D0u;
    // 0x1a76d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E50u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a6e50; return; }
    ctx->pc = 0x1A76D8u;
label_1a76d8:
    // 0x1a76d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a76dc:
    // 0x1a76dc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a76dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a76e0:
    // 0x1a76e0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a76e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a76e4:
    // 0x1a76e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a76e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a76e8:
    // 0x1a76e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a76e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a76ec:
    // 0x1a76ec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a76f0:
    // 0x1a76f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a76f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a76f4:
    // 0x1a76f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a76f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a76f8:
    // 0x1a76f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a76f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a76fc:
    // 0x1a76fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a76fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7700:
    // 0x1a7700: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1a7700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1a7704:
    // 0x1a7704: 0x248431c0  addiu       $a0, $a0, 0x31C0
    ctx->pc = 0x1a7704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
label_1a7708:
    // 0x1a7708: 0xc069c8c  jal         func_1A7230
label_1a770c:
    if (ctx->pc == 0x1A770Cu) {
        ctx->pc = 0x1A770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7708u;
        // 0x1a770c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7710u;
        goto label_1a7710;
    }
    ctx->pc = 0x1A7708u;
    SET_GPR_U32(ctx, 31, 0x1A7710u);
    ctx->pc = 0x1A770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7708u;
    // 0x1a770c: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7230u;
    goto label_1a7230;
    ctx->pc = 0x1A7710u;
label_1a7710:
    // 0x1a7710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7714:
    // 0x1a7714: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
label_1a7718:
    if (ctx->pc == 0x1A7718u) {
        ctx->pc = 0x1A7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7714u;
        // 0x1a7718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A771Cu;
        goto label_1a771c;
    }
    ctx->pc = 0x1A7714u;
    {
        const bool branch_taken_0x1a7714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7714u;
        // 0x1a7718: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7714) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A771Cu;
label_1a771c:
    // 0x1a771c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a7720:
    // 0x1a7720: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x1a7720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_1a7724:
    // 0x1a7724: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a7724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1a7728:
    // 0x1a7728: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1a7728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1a772c:
    // 0x1a772c: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x1a772cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
label_1a7730:
    // 0x1a7730: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1a7730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
label_1a7734:
    // 0x1a7734: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_1a7738:
    if (ctx->pc == 0x1A7738u) {
        ctx->pc = 0x1A7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7734u;
        // 0x1a7738: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A773Cu;
        goto label_1a773c;
    }
    ctx->pc = 0x1A7734u;
    {
        const bool branch_taken_0x1a7734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7734u;
        // 0x1a7738: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7734) {
            ctx->pc = 0x1A77C0u;
            goto label_1a77c0;
        }
    }
    ctx->pc = 0x1A773Cu;
label_1a773c:
    // 0x1a773c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7740:
    // 0x1a7740: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a7740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a7744:
    // 0x1a7744: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a7744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a7748:
    // 0x1a7748: 0xc069208  jal         func_1A4820
label_1a774c:
    if (ctx->pc == 0x1A774Cu) {
        ctx->pc = 0x1A774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7748u;
        // 0x1a774c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7750u;
        goto label_1a7750;
    }
    ctx->pc = 0x1A7748u;
    SET_GPR_U32(ctx, 31, 0x1A7750u);
    ctx->pc = 0x1A774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7748u;
    // 0x1a774c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A7750u;
label_1a7750:
    // 0x1a7750: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1a7754:
    if (ctx->pc == 0x1A7754u) {
        ctx->pc = 0x1A7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7750u;
        // 0x1a7754: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7758u;
        goto label_1a7758;
    }
    ctx->pc = 0x1A7750u;
    {
        const bool branch_taken_0x1a7750 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7750u;
        // 0x1a7754: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7750) {
            ctx->pc = 0x1A7768u;
            goto label_1a7768;
        }
    }
    ctx->pc = 0x1A7758u;
label_1a7758:
    // 0x1a7758: 0xc069cb6  jal         func_1A72D8
label_1a775c:
    if (ctx->pc == 0x1A775Cu) {
        ctx->pc = 0x1A775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7758u;
        // 0x1a775c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7760u;
        goto label_1a7760;
    }
    ctx->pc = 0x1A7758u;
    SET_GPR_U32(ctx, 31, 0x1A7760u);
    ctx->pc = 0x1A775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7758u;
    // 0x1a775c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    goto label_1a72d8;
    ctx->pc = 0x1A7760u;
label_1a7760:
    // 0x1a7760: 0x10000026  b           . + 4 + (0x26 << 2)
label_1a7764:
    if (ctx->pc == 0x1A7764u) {
        ctx->pc = 0x1A7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7760u;
        // 0x1a7764: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7768u;
        goto label_1a7768;
    }
    ctx->pc = 0x1A7760u;
    {
        const bool branch_taken_0x1a7760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7760u;
        // 0x1a7764: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7760) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A7768u;
label_1a7768:
    // 0x1a7768: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a776c:
    // 0x1a776c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a776cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7770:
    // 0x1a7770: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1a7770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
label_1a7774:
    // 0x1a7774: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a7774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a7778:
    // 0x1a7778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a7778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a777c:
    // 0x1a777c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a777cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7780:
    // 0x1a7780: 0xc069b84  jal         func_1A6E10
label_1a7784:
    if (ctx->pc == 0x1A7784u) {
        ctx->pc = 0x1A7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7780u;
        // 0x1a7784: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7788u;
        goto label_1a7788;
    }
    ctx->pc = 0x1A7780u;
    SET_GPR_U32(ctx, 31, 0x1A7788u);
    ctx->pc = 0x1A7784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7780u;
    // 0x1a7784: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    { ctx->pc = 0x1a6e10; return; }
    ctx->pc = 0x1A7788u;
label_1a7788:
    // 0x1a7788: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a778c:
    if (ctx->pc == 0x1A778Cu) {
        ctx->pc = 0x1A7790u;
        goto label_1a7790;
    }
    ctx->pc = 0x1A7788u;
    {
        const bool branch_taken_0x1a7788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7788) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7790u;
label_1a7790:
    // 0x1a7790: 0xc069cb6  jal         func_1A72D8
label_1a7794:
    if (ctx->pc == 0x1A7794u) {
        ctx->pc = 0x1A7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7790u;
        // 0x1a7794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7798u;
        goto label_1a7798;
    }
    ctx->pc = 0x1A7790u;
    SET_GPR_U32(ctx, 31, 0x1A7798u);
    ctx->pc = 0x1A7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7790u;
    // 0x1a7794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    goto label_1a72d8;
    ctx->pc = 0x1A7798u;
label_1a7798:
    // 0x1a7798: 0xc06920c  jal         func_1A4830
label_1a779c:
    if (ctx->pc == 0x1A779Cu) {
        ctx->pc = 0x1A779Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7798u;
        // 0x1a779c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77A0u;
        goto label_1a77a0;
    }
    ctx->pc = 0x1A7798u;
    SET_GPR_U32(ctx, 31, 0x1A77A0u);
    ctx->pc = 0x1A779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7798u;
    // 0x1a779c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A77A0u;
label_1a77a0:
    // 0x1a77a0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1a77a4:
    if (ctx->pc == 0x1A77A4u) {
        ctx->pc = 0x1A77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77A0u;
        // 0x1a77a4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77A8u;
        goto label_1a77a8;
    }
    ctx->pc = 0x1A77A0u;
    {
        const bool branch_taken_0x1a77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77A0u;
        // 0x1a77a4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77a0) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A77A8u;
label_1a77a8:
    // 0x1a77a8: 0xc069218  jal         func_1A4860
label_1a77ac:
    if (ctx->pc == 0x1A77ACu) {
        ctx->pc = 0x1A77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77A8u;
        // 0x1a77ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77B0u;
        goto label_1a77b0;
    }
    ctx->pc = 0x1A77A8u;
    SET_GPR_U32(ctx, 31, 0x1A77B0u);
    ctx->pc = 0x1A77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77A8u;
    // 0x1a77ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A77B0u;
label_1a77b0:
    // 0x1a77b0: 0xc06920c  jal         func_1A4830
label_1a77b4:
    if (ctx->pc == 0x1A77B4u) {
        ctx->pc = 0x1A77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77B0u;
        // 0x1a77b4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77B8u;
        goto label_1a77b8;
    }
    ctx->pc = 0x1A77B0u;
    SET_GPR_U32(ctx, 31, 0x1A77B8u);
    ctx->pc = 0x1A77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77B0u;
    // 0x1a77b4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A77B8u;
label_1a77b8:
    // 0x1a77b8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a77bc:
    if (ctx->pc == 0x1A77BCu) {
        ctx->pc = 0x1A77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77B8u;
        // 0x1a77bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77C0u;
        goto label_1a77c0;
    }
    ctx->pc = 0x1A77B8u;
    {
        const bool branch_taken_0x1a77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77B8u;
        // 0x1a77bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77b8) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A77C0u;
label_1a77c0:
    // 0x1a77c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a77c4:
    // 0x1a77c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a77c8:
    // 0x1a77c8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a77cc:
    // 0x1a77cc: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1a77ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
label_1a77d0:
    // 0x1a77d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a77d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a77d4:
    // 0x1a77d4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a77d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a77d8:
    // 0x1a77d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a77d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a77dc:
    // 0x1a77dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a77dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a77e0:
    // 0x1a77e0: 0xc069b84  jal         func_1A6E10
label_1a77e4:
    if (ctx->pc == 0x1A77E4u) {
        ctx->pc = 0x1A77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E0u;
        // 0x1a77e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77E8u;
        goto label_1a77e8;
    }
    ctx->pc = 0x1A77E0u;
    SET_GPR_U32(ctx, 31, 0x1A77E8u);
    ctx->pc = 0x1A77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77E0u;
    // 0x1a77e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    { ctx->pc = 0x1a6e10; return; }
    ctx->pc = 0x1A77E8u;
label_1a77e8:
    // 0x1a77e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a77ec:
    if (ctx->pc == 0x1A77ECu) {
        ctx->pc = 0x1A77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E8u;
        // 0x1a77ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77F0u;
        goto label_1a77f0;
    }
    ctx->pc = 0x1A77E8u;
    {
        const bool branch_taken_0x1a77e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77E8u;
        // 0x1a77ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77e8) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A77F0u;
label_1a77f0:
    // 0x1a77f0: 0xc069cb6  jal         func_1A72D8
label_1a77f4:
    if (ctx->pc == 0x1A77F4u) {
        ctx->pc = 0x1A77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77F0u;
        // 0x1a77f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A77F8u;
        goto label_1a77f8;
    }
    ctx->pc = 0x1A77F0u;
    SET_GPR_U32(ctx, 31, 0x1A77F8u);
    ctx->pc = 0x1A77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77F0u;
    // 0x1a77f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    goto label_1a72d8;
    ctx->pc = 0x1A77F8u;
label_1a77f8:
    // 0x1a77f8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1a77fc:
    // 0x1a77fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a77fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a7800:
    // 0x1a7800: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a7804:
    // 0x1a7804: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7808:
    // 0x1a7808: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a7808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a780c:
    // 0x1a780c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a780cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7810:
    // 0x1a7810: 0x3e00008  jr          $ra
label_1a7814:
    if (ctx->pc == 0x1A7814u) {
        ctx->pc = 0x1A7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7810u;
        // 0x1a7814: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7818u;
        goto label_1a7818;
    }
    ctx->pc = 0x1A7810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7810u;
        // 0x1a7814: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7818u;
label_1a7818:
    // 0x1a7818: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x1a7818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1a781c:
    // 0x1a781c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1a781cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_1a7820:
    // 0x1a7820: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1a7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a7824:
    // 0x1a7824: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1a7828:
    if (ctx->pc == 0x1A7828u) {
        ctx->pc = 0x1A7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7824u;
        // 0x1a7828: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A782Cu;
        goto label_1a782c;
    }
    ctx->pc = 0x1A7824u;
    {
        const bool branch_taken_0x1a7824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7824) {
            ctx->pc = 0x1A7828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7824u;
            // 0x1a7828: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7834u;
            goto label_1a7834;
        }
    }
    ctx->pc = 0x1A782Cu;
label_1a782c:
    // 0x1a782c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a7830:
    if (ctx->pc == 0x1A7830u) {
        ctx->pc = 0x1A7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A782Cu;
        // 0x1a7830: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7834u;
        goto label_1a7834;
    }
    ctx->pc = 0x1A782Cu;
    {
        const bool branch_taken_0x1a782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A782Cu;
        // 0x1a7830: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a782c) {
            ctx->pc = 0x1A7838u;
            goto label_1a7838;
        }
    }
    ctx->pc = 0x1A7834u;
label_1a7834:
    // 0x1a7834: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x1a7834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_1a7838:
    // 0x1a7838: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1a7838u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_1a783c:
    // 0x1a783c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1a7840:
    // 0x1a7840: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1a7840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1a7844:
    // 0x1a7844: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1a7844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_1a7848:
    // 0x1a7848: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x1a7848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_1a784c:
    // 0x1a784c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1a784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1a7850:
    // 0x1a7850: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x1a7850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_1a7854:
    // 0x1a7854: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1a7854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1a7858:
    // 0x1a7858: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1a7858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_1a785c:
    // 0x1a785c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1a785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1a7860:
    // 0x1a7860: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1a7860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
label_1a7864:
    // 0x1a7864: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1a7864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1a7868:
    // 0x1a7868: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1a7868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_1a786c:
    // 0x1a786c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1a786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1a7870:
    // 0x1a7870: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1a7870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_1a7874:
    // 0x1a7874: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a7874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1a7878:
    // 0x1a7878: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x1a7878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
label_1a787c:
    // 0x1a787c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1a787cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a7880:
    // 0x1a7880: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_1a7884:
    if (ctx->pc == 0x1A7884u) {
        ctx->pc = 0x1A7888u;
        goto label_1a7888;
    }
    ctx->pc = 0x1A7880u;
    {
        const bool branch_taken_0x1a7880 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1a7880) {
            ctx->pc = 0x1A789Cu;
            goto label_1a789c;
        }
    }
    ctx->pc = 0x1A7888u;
label_1a7888:
    // 0x1a7888: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1a7888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a788c:
    // 0x1a788c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a7890:
    if (ctx->pc == 0x1A7890u) {
        ctx->pc = 0x1A7894u;
        goto label_1a7894;
    }
    ctx->pc = 0x1A788Cu;
    {
        const bool branch_taken_0x1a788c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a788c) {
            ctx->pc = 0x1A789Cu;
            goto label_1a789c;
        }
    }
    ctx->pc = 0x1A7894u;
label_1a7894:
    // 0x1a7894: 0x80695b4  j           func_1A56D0
label_1a7898:
    if (ctx->pc == 0x1A7898u) {
        ctx->pc = 0x1A789Cu;
        goto label_1a789c;
    }
    ctx->pc = 0x1A7894u;
    ctx->pc = 0x1A56D0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a56d0; return; }
    ctx->pc = 0x1A789Cu;
label_1a789c:
    // 0x1a789c: 0x3e00008  jr          $ra
label_1a78a0:
    if (ctx->pc == 0x1A78A0u) {
        ctx->pc = 0x1A78A4u;
        goto label_1a78a4;
    }
    ctx->pc = 0x1A789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A78A4u;
label_1a78a4:
    // 0x1a78a4: 0x0  nop
    ctx->pc = 0x1a78a4u;
    // NOP
label_1a78a8:
    // 0x1a78a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a78a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a78ac:
    // 0x1a78ac: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a78acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a78b0:
    // 0x1a78b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a78b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a78b4:
    // 0x1a78b4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1a78b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_1a78b8:
    // 0x1a78b8: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1a78b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_1a78bc:
    // 0x1a78bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a78c0:
    // 0x1a78c0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a78c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1a78c4:
    // 0x1a78c4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1a78c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a78c8:
    // 0x1a78c8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a78c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_1a78cc:
    // 0x1a78cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a78ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a78d0:
    // 0x1a78d0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a78d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a78d4:
    // 0x1a78d4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a78d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a78d8:
    // 0x1a78d8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a78d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a78dc:
    // 0x1a78dc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1a78dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a78e0:
    // 0x1a78e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a78e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a78e4:
    // 0x1a78e4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1a78e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1a78e8:
    // 0x1a78e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a78e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a78ec:
    // 0x1a78ec: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a78ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a78f0:
    // 0x1a78f0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a78f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1a78f4:
    // 0x1a78f4: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1a78f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1a78f8:
    // 0x1a78f8: 0xc069c8c  jal         func_1A7230
label_1a78fc:
    if (ctx->pc == 0x1A78FCu) {
        ctx->pc = 0x1A78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78F8u;
        // 0x1a78fc: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7900u;
        goto label_1a7900;
    }
    ctx->pc = 0x1A78F8u;
    SET_GPR_U32(ctx, 31, 0x1A7900u);
    ctx->pc = 0x1A78FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A78F8u;
    // 0x1a78fc: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7230u;
    goto label_1a7230;
    ctx->pc = 0x1A7900u;
label_1a7900:
    // 0x1a7900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7904:
    // 0x1a7904: 0x12000057  beqz        $s0, . + 4 + (0x57 << 2)
label_1a7908:
    if (ctx->pc == 0x1A7908u) {
        ctx->pc = 0x1A7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7904u;
        // 0x1a7908: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A790Cu;
        goto label_1a790c;
    }
    ctx->pc = 0x1A7904u;
    {
        const bool branch_taken_0x1a7904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7904u;
        // 0x1a7908: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7904) {
            ctx->pc = 0x1A7A64u;
            { ctx->pc = 0x1a7a64; return; }
        }
    }
    ctx->pc = 0x1A790Cu;
label_1a790c:
    // 0x1a790c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1a790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1a7910:
    // 0x1a7910: 0x33c40002  andi        $a0, $fp, 0x2
    ctx->pc = 0x1a7910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)2);
label_1a7914:
    // 0x1a7914: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1a7914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a7918:
    // 0x1a7918: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1a7918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_1a791c:
    // 0x1a791c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a791cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1a7920:
    // 0x1a7920: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a7920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1a7924:
    // 0x1a7924: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x1a7924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
label_1a7928:
    // 0x1a7928: 0xae160020  sw          $s6, 0x20($s0)
    ctx->pc = 0x1a7928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 22));
label_1a792c:
    // 0x1a792c: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1a792cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
label_1a7930:
    // 0x1a7930: 0xae140028  sw          $s4, 0x28($s0)
    ctx->pc = 0x1a7930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 20));
label_1a7934:
    // 0x1a7934: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x1a7934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
label_1a7938:
    // 0x1a7938: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1a7938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
label_1a793c:
    // 0x1a793c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1a7940:
    // 0x1a7940: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1a7940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
label_1a7944:
    // 0x1a7944: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_1a7948:
    if (ctx->pc == 0x1A7948u) {
        ctx->pc = 0x1A7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7944u;
        // 0x1a7948: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A794Cu;
        goto label_1a794c;
    }
    ctx->pc = 0x1A7944u;
    {
        const bool branch_taken_0x1a7944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7944u;
        // 0x1a7948: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7944) {
            ctx->pc = 0x1A798Cu;
            goto label_1a798c;
        }
    }
    ctx->pc = 0x1A794Cu;
label_1a794c:
    // 0x1a794c: 0x16b40007  bne         $s5, $s4, . + 4 + (0x7 << 2)
label_1a7950:
    if (ctx->pc == 0x1A7950u) {
        ctx->pc = 0x1A7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A794Cu;
        // 0x1a7950: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7954u;
        goto label_1a7954;
    }
    ctx->pc = 0x1A794Cu;
    {
        const bool branch_taken_0x1a794c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x1A7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A794Cu;
        // 0x1a7950: 0x253102a  slt         $v0, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a794c) {
            ctx->pc = 0x1A796Cu;
            goto label_1a796c;
        }
    }
    ctx->pc = 0x1A7954u;
label_1a7954:
    // 0x1a7954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a7954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a7958:
    // 0x1a7958: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a7958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a795c:
    // 0x1a795c: 0xc069bee  jal         func_1A6FB8
label_1a7960:
    if (ctx->pc == 0x1A7960u) {
        ctx->pc = 0x1A7960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A795Cu;
        // 0x1a7960: 0x242280a  movz        $a1, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7964u;
        goto label_1a7964;
    }
    ctx->pc = 0x1A795Cu;
    SET_GPR_U32(ctx, 31, 0x1A7964u);
    ctx->pc = 0x1A7960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A795Cu;
    // 0x1a7960: 0x242280a  movz        $a1, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A7964u;
label_1a7964:
    // 0x1a7964: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a7968:
    if (ctx->pc == 0x1A7968u) {
        ctx->pc = 0x1A7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7964u;
        // 0x1a7968: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A796Cu;
        goto label_1a796c;
    }
    ctx->pc = 0x1A7964u;
    {
        const bool branch_taken_0x1a7964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7964u;
        // 0x1a7968: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7964) {
            ctx->pc = 0x1A7990u;
            goto label_1a7990;
        }
    }
    ctx->pc = 0x1A796Cu;
label_1a796c:
    // 0x1a796c: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
label_1a7970:
    if (ctx->pc == 0x1A7970u) {
        ctx->pc = 0x1A7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A796Cu;
        // 0x1a7970: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7974u;
        goto label_1a7974;
    }
    ctx->pc = 0x1A796Cu;
    {
        const bool branch_taken_0x1a796c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1A7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A796Cu;
        // 0x1a7970: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a796c) {
            ctx->pc = 0x1A797Cu;
            goto label_1a797c;
        }
    }
    ctx->pc = 0x1A7974u;
label_1a7974:
    // 0x1a7974: 0xc069bee  jal         func_1A6FB8
label_1a7978:
    if (ctx->pc == 0x1A7978u) {
        ctx->pc = 0x1A7978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7974u;
        // 0x1a7978: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A797Cu;
        goto label_1a797c;
    }
    ctx->pc = 0x1A7974u;
    SET_GPR_U32(ctx, 31, 0x1A797Cu);
    ctx->pc = 0x1A7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7974u;
    // 0x1a7978: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A797Cu;
label_1a797c:
    // 0x1a797c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
label_1a7980:
    if (ctx->pc == 0x1A7980u) {
        ctx->pc = 0x1A7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A797Cu;
        // 0x1a7980: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7984u;
        goto label_1a7984;
    }
    ctx->pc = 0x1A797Cu;
    {
        const bool branch_taken_0x1a797c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1A7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A797Cu;
        // 0x1a7980: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a797c) {
            ctx->pc = 0x1A798Cu;
            goto label_1a798c;
        }
    }
    ctx->pc = 0x1A7984u;
label_1a7984:
    // 0x1a7984: 0xc069bee  jal         func_1A6FB8
label_1a7988:
    if (ctx->pc == 0x1A7988u) {
        ctx->pc = 0x1A7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7984u;
        // 0x1a7988: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A798Cu;
        goto label_1a798c;
    }
    ctx->pc = 0x1A7984u;
    SET_GPR_U32(ctx, 31, 0x1A798Cu);
    ctx->pc = 0x1A7988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7984u;
    // 0x1a7988: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A798Cu;
label_1a798c:
    // 0x1a798c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1a798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_1a7990:
    // 0x1a7990: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1a7994:
    if (ctx->pc == 0x1A7994u) {
        ctx->pc = 0x1A7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7990u;
        // 0x1a7994: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7998u;
        goto label_1a7998;
    }
    ctx->pc = 0x1A7990u;
    {
        const bool branch_taken_0x1a7990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7990) {
            ctx->pc = 0x1A7994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7990u;
            // 0x1a7994: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A79E4u;
            goto label_1a79e4;
        }
    }
    ctx->pc = 0x1A7998u;
label_1a7998:
    // 0x1a7998: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
label_1a799c:
    if (ctx->pc == 0x1A799Cu) {
        ctx->pc = 0x1A799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7998u;
        // 0x1a799c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79A0u;
        goto label_1a79a0;
    }
    ctx->pc = 0x1A7998u;
    {
        const bool branch_taken_0x1a7998 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7998u;
        // 0x1a799c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7998) {
            ctx->pc = 0x1A79A8u;
            goto label_1a79a8;
        }
    }
    ctx->pc = 0x1A79A0u;
label_1a79a0:
    // 0x1a79a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a79a4:
    if (ctx->pc == 0x1A79A4u) {
        ctx->pc = 0x1A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79A0u;
        // 0x1a79a4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79A8u;
        goto label_1a79a8;
    }
    ctx->pc = 0x1A79A0u;
    {
        const bool branch_taken_0x1a79a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79A0u;
        // 0x1a79a4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79a0) {
            ctx->pc = 0x1A79ACu;
            goto label_1a79ac;
        }
    }
    ctx->pc = 0x1A79A8u;
label_1a79a8:
    // 0x1a79a8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1a79a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1a79ac:
    // 0x1a79ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a79b0:
    // 0x1a79b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a79b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a79b4:
    // 0x1a79b4: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1a79b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a79b8:
    // 0x1a79b8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1a79b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a79bc:
    // 0x1a79bc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a79c0:
    // 0x1a79c0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a79c4:
    // 0x1a79c4: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1a79c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
label_1a79c8:
    // 0x1a79c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a79c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a79cc:
    // 0x1a79cc: 0xc069b84  jal         func_1A6E10
label_1a79d0:
    if (ctx->pc == 0x1A79D0u) {
        ctx->pc = 0x1A79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79CCu;
        // 0x1a79d0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79D4u;
        goto label_1a79d4;
    }
    ctx->pc = 0x1A79CCu;
    SET_GPR_U32(ctx, 31, 0x1A79D4u);
    ctx->pc = 0x1A79D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79CCu;
    // 0x1a79d0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    { ctx->pc = 0x1a6e10; return; }
    ctx->pc = 0x1A79D4u;
label_1a79d4:
    // 0x1a79d4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1a79d8:
    if (ctx->pc == 0x1A79D8u) {
        ctx->pc = 0x1A79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79D4u;
        // 0x1a79d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79DCu;
        goto label_1a79dc;
    }
    ctx->pc = 0x1A79D4u;
    {
        const bool branch_taken_0x1a79d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79D4u;
        // 0x1a79d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79d4) {
            ctx->pc = 0x1A7A64u;
            { ctx->pc = 0x1a7a64; return; }
        }
    }
    ctx->pc = 0x1A79DCu;
label_1a79dc:
    // 0x1a79dc: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a79e0:
    if (ctx->pc == 0x1A79E0u) {
        ctx->pc = 0x1A79E4u;
        goto label_1a79e4;
    }
    ctx->pc = 0x1A79DCu;
    {
        const bool branch_taken_0x1a79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a79dc) {
            ctx->pc = 0x1A7A40u;
            { ctx->pc = 0x1a7a40; return; }
        }
    }
    ctx->pc = 0x1A79E4u;
label_1a79e4:
    // 0x1a79e4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a79e8:
    // 0x1a79e8: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x1a79e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
label_1a79ec:
    // 0x1a79ec: 0xc069208  jal         func_1A4820
label_1a79f0:
    if (ctx->pc == 0x1A79F0u) {
        ctx->pc = 0x1A79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79ECu;
        // 0x1a79f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79F4u;
        goto label_1a79f4;
    }
    ctx->pc = 0x1A79ECu;
    SET_GPR_U32(ctx, 31, 0x1A79F4u);
    ctx->pc = 0x1A79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79ECu;
    // 0x1a79f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A79F4u;
label_1a79f4:
    // 0x1a79f4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1a79f8u;
    return;
}

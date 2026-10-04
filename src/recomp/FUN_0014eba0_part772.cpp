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


void FUN_0014eba0_part772(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c7310u: goto label_2c7310;
        case 0x2c7314u: goto label_2c7314;
        case 0x2c7318u: goto label_2c7318;
        case 0x2c731cu: goto label_2c731c;
        case 0x2c7320u: goto label_2c7320;
        case 0x2c7324u: goto label_2c7324;
        case 0x2c7328u: goto label_2c7328;
        case 0x2c732cu: goto label_2c732c;
        case 0x2c7330u: goto label_2c7330;
        case 0x2c7334u: goto label_2c7334;
        case 0x2c7338u: goto label_2c7338;
        case 0x2c733cu: goto label_2c733c;
        case 0x2c7340u: goto label_2c7340;
        case 0x2c7344u: goto label_2c7344;
        case 0x2c7348u: goto label_2c7348;
        case 0x2c734cu: goto label_2c734c;
        case 0x2c7350u: goto label_2c7350;
        case 0x2c7354u: goto label_2c7354;
        case 0x2c7358u: goto label_2c7358;
        case 0x2c735cu: goto label_2c735c;
        case 0x2c7360u: goto label_2c7360;
        case 0x2c7364u: goto label_2c7364;
        case 0x2c7368u: goto label_2c7368;
        case 0x2c736cu: goto label_2c736c;
        case 0x2c7370u: goto label_2c7370;
        case 0x2c7374u: goto label_2c7374;
        case 0x2c7378u: goto label_2c7378;
        case 0x2c737cu: goto label_2c737c;
        case 0x2c7380u: goto label_2c7380;
        case 0x2c7384u: goto label_2c7384;
        case 0x2c7388u: goto label_2c7388;
        case 0x2c738cu: goto label_2c738c;
        case 0x2c7390u: goto label_2c7390;
        case 0x2c7394u: goto label_2c7394;
        case 0x2c7398u: goto label_2c7398;
        case 0x2c739cu: goto label_2c739c;
        case 0x2c73a0u: goto label_2c73a0;
        case 0x2c73a4u: goto label_2c73a4;
        case 0x2c73a8u: goto label_2c73a8;
        case 0x2c73acu: goto label_2c73ac;
        case 0x2c73b0u: goto label_2c73b0;
        case 0x2c73b4u: goto label_2c73b4;
        case 0x2c73b8u: goto label_2c73b8;
        case 0x2c73bcu: goto label_2c73bc;
        case 0x2c73c0u: goto label_2c73c0;
        case 0x2c73c4u: goto label_2c73c4;
        case 0x2c73c8u: goto label_2c73c8;
        case 0x2c73ccu: goto label_2c73cc;
        case 0x2c73d0u: goto label_2c73d0;
        case 0x2c73d4u: goto label_2c73d4;
        case 0x2c73d8u: goto label_2c73d8;
        case 0x2c73dcu: goto label_2c73dc;
        case 0x2c73e0u: goto label_2c73e0;
        case 0x2c73e4u: goto label_2c73e4;
        case 0x2c73e8u: goto label_2c73e8;
        case 0x2c73ecu: goto label_2c73ec;
        case 0x2c73f0u: goto label_2c73f0;
        case 0x2c73f4u: goto label_2c73f4;
        case 0x2c73f8u: goto label_2c73f8;
        case 0x2c73fcu: goto label_2c73fc;
        case 0x2c7400u: goto label_2c7400;
        case 0x2c7404u: goto label_2c7404;
        case 0x2c7408u: goto label_2c7408;
        case 0x2c740cu: goto label_2c740c;
        case 0x2c7410u: goto label_2c7410;
        case 0x2c7414u: goto label_2c7414;
        case 0x2c7418u: goto label_2c7418;
        case 0x2c741cu: goto label_2c741c;
        case 0x2c7420u: goto label_2c7420;
        case 0x2c7424u: goto label_2c7424;
        case 0x2c7428u: goto label_2c7428;
        case 0x2c742cu: goto label_2c742c;
        case 0x2c7430u: goto label_2c7430;
        case 0x2c7434u: goto label_2c7434;
        case 0x2c7438u: goto label_2c7438;
        case 0x2c743cu: goto label_2c743c;
        case 0x2c7440u: goto label_2c7440;
        case 0x2c7444u: goto label_2c7444;
        case 0x2c7448u: goto label_2c7448;
        case 0x2c744cu: goto label_2c744c;
        case 0x2c7450u: goto label_2c7450;
        case 0x2c7454u: goto label_2c7454;
        case 0x2c7458u: goto label_2c7458;
        case 0x2c745cu: goto label_2c745c;
        case 0x2c7460u: goto label_2c7460;
        case 0x2c7464u: goto label_2c7464;
        case 0x2c7468u: goto label_2c7468;
        case 0x2c746cu: goto label_2c746c;
        case 0x2c7470u: goto label_2c7470;
        case 0x2c7474u: goto label_2c7474;
        case 0x2c7478u: goto label_2c7478;
        case 0x2c747cu: goto label_2c747c;
        case 0x2c7480u: goto label_2c7480;
        case 0x2c7484u: goto label_2c7484;
        case 0x2c7488u: goto label_2c7488;
        case 0x2c748cu: goto label_2c748c;
        case 0x2c7490u: goto label_2c7490;
        case 0x2c7494u: goto label_2c7494;
        case 0x2c7498u: goto label_2c7498;
        case 0x2c749cu: goto label_2c749c;
        case 0x2c74a0u: goto label_2c74a0;
        case 0x2c74a4u: goto label_2c74a4;
        case 0x2c74a8u: goto label_2c74a8;
        case 0x2c74acu: goto label_2c74ac;
        case 0x2c74b0u: goto label_2c74b0;
        case 0x2c74b4u: goto label_2c74b4;
        case 0x2c74b8u: goto label_2c74b8;
        case 0x2c74bcu: goto label_2c74bc;
        case 0x2c74c0u: goto label_2c74c0;
        case 0x2c74c4u: goto label_2c74c4;
        case 0x2c74c8u: goto label_2c74c8;
        case 0x2c74ccu: goto label_2c74cc;
        case 0x2c74d0u: goto label_2c74d0;
        case 0x2c74d4u: goto label_2c74d4;
        case 0x2c74d8u: goto label_2c74d8;
        case 0x2c74dcu: goto label_2c74dc;
        case 0x2c74e0u: goto label_2c74e0;
        case 0x2c74e4u: goto label_2c74e4;
        case 0x2c74e8u: goto label_2c74e8;
        case 0x2c74ecu: goto label_2c74ec;
        case 0x2c74f0u: goto label_2c74f0;
        case 0x2c74f4u: goto label_2c74f4;
        case 0x2c74f8u: goto label_2c74f8;
        case 0x2c74fcu: goto label_2c74fc;
        case 0x2c7500u: goto label_2c7500;
        case 0x2c7504u: goto label_2c7504;
        case 0x2c7508u: goto label_2c7508;
        case 0x2c750cu: goto label_2c750c;
        case 0x2c7510u: goto label_2c7510;
        case 0x2c7514u: goto label_2c7514;
        case 0x2c7518u: goto label_2c7518;
        case 0x2c751cu: goto label_2c751c;
        case 0x2c7520u: goto label_2c7520;
        case 0x2c7524u: goto label_2c7524;
        case 0x2c7528u: goto label_2c7528;
        case 0x2c752cu: goto label_2c752c;
        case 0x2c7530u: goto label_2c7530;
        case 0x2c7534u: goto label_2c7534;
        case 0x2c7538u: goto label_2c7538;
        case 0x2c753cu: goto label_2c753c;
        case 0x2c7540u: goto label_2c7540;
        case 0x2c7544u: goto label_2c7544;
        case 0x2c7548u: goto label_2c7548;
        case 0x2c754cu: goto label_2c754c;
        case 0x2c7550u: goto label_2c7550;
        case 0x2c7554u: goto label_2c7554;
        case 0x2c7558u: goto label_2c7558;
        case 0x2c755cu: goto label_2c755c;
        case 0x2c7560u: goto label_2c7560;
        case 0x2c7564u: goto label_2c7564;
        case 0x2c7568u: goto label_2c7568;
        case 0x2c756cu: goto label_2c756c;
        case 0x2c7570u: goto label_2c7570;
        case 0x2c7574u: goto label_2c7574;
        case 0x2c7578u: goto label_2c7578;
        case 0x2c757cu: goto label_2c757c;
        case 0x2c7580u: goto label_2c7580;
        case 0x2c7584u: goto label_2c7584;
        case 0x2c7588u: goto label_2c7588;
        case 0x2c758cu: goto label_2c758c;
        case 0x2c7590u: goto label_2c7590;
        case 0x2c7594u: goto label_2c7594;
        case 0x2c7598u: goto label_2c7598;
        case 0x2c759cu: goto label_2c759c;
        case 0x2c75a0u: goto label_2c75a0;
        case 0x2c75a4u: goto label_2c75a4;
        case 0x2c75a8u: goto label_2c75a8;
        case 0x2c75acu: goto label_2c75ac;
        case 0x2c75b0u: goto label_2c75b0;
        case 0x2c75b4u: goto label_2c75b4;
        case 0x2c75b8u: goto label_2c75b8;
        case 0x2c75bcu: goto label_2c75bc;
        case 0x2c75c0u: goto label_2c75c0;
        case 0x2c75c4u: goto label_2c75c4;
        case 0x2c75c8u: goto label_2c75c8;
        case 0x2c75ccu: goto label_2c75cc;
        case 0x2c75d0u: goto label_2c75d0;
        case 0x2c75d4u: goto label_2c75d4;
        case 0x2c75d8u: goto label_2c75d8;
        case 0x2c75dcu: goto label_2c75dc;
        case 0x2c75e0u: goto label_2c75e0;
        case 0x2c75e4u: goto label_2c75e4;
        case 0x2c75e8u: goto label_2c75e8;
        case 0x2c75ecu: goto label_2c75ec;
        case 0x2c75f0u: goto label_2c75f0;
        case 0x2c75f4u: goto label_2c75f4;
        case 0x2c75f8u: goto label_2c75f8;
        case 0x2c75fcu: goto label_2c75fc;
        case 0x2c7600u: goto label_2c7600;
        case 0x2c7604u: goto label_2c7604;
        case 0x2c7608u: goto label_2c7608;
        case 0x2c760cu: goto label_2c760c;
        case 0x2c7610u: goto label_2c7610;
        case 0x2c7614u: goto label_2c7614;
        case 0x2c7618u: goto label_2c7618;
        case 0x2c761cu: goto label_2c761c;
        case 0x2c7620u: goto label_2c7620;
        case 0x2c7624u: goto label_2c7624;
        case 0x2c7628u: goto label_2c7628;
        case 0x2c762cu: goto label_2c762c;
        case 0x2c7630u: goto label_2c7630;
        case 0x2c7634u: goto label_2c7634;
        case 0x2c7638u: goto label_2c7638;
        case 0x2c763cu: goto label_2c763c;
        case 0x2c7640u: goto label_2c7640;
        case 0x2c7644u: goto label_2c7644;
        case 0x2c7648u: goto label_2c7648;
        case 0x2c764cu: goto label_2c764c;
        case 0x2c7650u: goto label_2c7650;
        case 0x2c7654u: goto label_2c7654;
        case 0x2c7658u: goto label_2c7658;
        case 0x2c765cu: goto label_2c765c;
        case 0x2c7660u: goto label_2c7660;
        case 0x2c7664u: goto label_2c7664;
        case 0x2c7668u: goto label_2c7668;
        case 0x2c766cu: goto label_2c766c;
        case 0x2c7670u: goto label_2c7670;
        case 0x2c7674u: goto label_2c7674;
        case 0x2c7678u: goto label_2c7678;
        case 0x2c767cu: goto label_2c767c;
        case 0x2c7680u: goto label_2c7680;
        case 0x2c7684u: goto label_2c7684;
        case 0x2c7688u: goto label_2c7688;
        case 0x2c768cu: goto label_2c768c;
        case 0x2c7690u: goto label_2c7690;
        case 0x2c7694u: goto label_2c7694;
        case 0x2c7698u: goto label_2c7698;
        case 0x2c769cu: goto label_2c769c;
        case 0x2c76a0u: goto label_2c76a0;
        case 0x2c76a4u: goto label_2c76a4;
        case 0x2c76a8u: goto label_2c76a8;
        case 0x2c76acu: goto label_2c76ac;
        case 0x2c76b0u: goto label_2c76b0;
        case 0x2c76b4u: goto label_2c76b4;
        case 0x2c76b8u: goto label_2c76b8;
        case 0x2c76bcu: goto label_2c76bc;
        case 0x2c76c0u: goto label_2c76c0;
        case 0x2c76c4u: goto label_2c76c4;
        case 0x2c76c8u: goto label_2c76c8;
        case 0x2c76ccu: goto label_2c76cc;
        case 0x2c76d0u: goto label_2c76d0;
        case 0x2c76d4u: goto label_2c76d4;
        case 0x2c76d8u: goto label_2c76d8;
        case 0x2c76dcu: goto label_2c76dc;
        case 0x2c76e0u: goto label_2c76e0;
        case 0x2c76e4u: goto label_2c76e4;
        case 0x2c76e8u: goto label_2c76e8;
        case 0x2c76ecu: goto label_2c76ec;
        case 0x2c76f0u: goto label_2c76f0;
        case 0x2c76f4u: goto label_2c76f4;
        case 0x2c76f8u: goto label_2c76f8;
        case 0x2c76fcu: goto label_2c76fc;
        case 0x2c7700u: goto label_2c7700;
        case 0x2c7704u: goto label_2c7704;
        case 0x2c7708u: goto label_2c7708;
        case 0x2c770cu: goto label_2c770c;
        case 0x2c7710u: goto label_2c7710;
        case 0x2c7714u: goto label_2c7714;
        case 0x2c7718u: goto label_2c7718;
        case 0x2c771cu: goto label_2c771c;
        case 0x2c7720u: goto label_2c7720;
        case 0x2c7724u: goto label_2c7724;
        case 0x2c7728u: goto label_2c7728;
        case 0x2c772cu: goto label_2c772c;
        case 0x2c7730u: goto label_2c7730;
        case 0x2c7734u: goto label_2c7734;
        case 0x2c7738u: goto label_2c7738;
        case 0x2c773cu: goto label_2c773c;
        case 0x2c7740u: goto label_2c7740;
        case 0x2c7744u: goto label_2c7744;
        case 0x2c7748u: goto label_2c7748;
        case 0x2c774cu: goto label_2c774c;
        case 0x2c7750u: goto label_2c7750;
        case 0x2c7754u: goto label_2c7754;
        case 0x2c7758u: goto label_2c7758;
        case 0x2c775cu: goto label_2c775c;
        case 0x2c7760u: goto label_2c7760;
        case 0x2c7764u: goto label_2c7764;
        case 0x2c7768u: goto label_2c7768;
        case 0x2c776cu: goto label_2c776c;
        case 0x2c7770u: goto label_2c7770;
        case 0x2c7774u: goto label_2c7774;
        case 0x2c7778u: goto label_2c7778;
        case 0x2c777cu: goto label_2c777c;
        case 0x2c7780u: goto label_2c7780;
        case 0x2c7784u: goto label_2c7784;
        case 0x2c7788u: goto label_2c7788;
        case 0x2c778cu: goto label_2c778c;
        case 0x2c7790u: goto label_2c7790;
        case 0x2c7794u: goto label_2c7794;
        case 0x2c7798u: goto label_2c7798;
        case 0x2c779cu: goto label_2c779c;
        case 0x2c77a0u: goto label_2c77a0;
        case 0x2c77a4u: goto label_2c77a4;
        case 0x2c77a8u: goto label_2c77a8;
        case 0x2c77acu: goto label_2c77ac;
        case 0x2c77b0u: goto label_2c77b0;
        case 0x2c77b4u: goto label_2c77b4;
        case 0x2c77b8u: goto label_2c77b8;
        case 0x2c77bcu: goto label_2c77bc;
        case 0x2c77c0u: goto label_2c77c0;
        case 0x2c77c4u: goto label_2c77c4;
        case 0x2c77c8u: goto label_2c77c8;
        case 0x2c77ccu: goto label_2c77cc;
        case 0x2c77d0u: goto label_2c77d0;
        case 0x2c77d4u: goto label_2c77d4;
        case 0x2c77d8u: goto label_2c77d8;
        case 0x2c77dcu: goto label_2c77dc;
        case 0x2c77e0u: goto label_2c77e0;
        case 0x2c77e4u: goto label_2c77e4;
        case 0x2c77e8u: goto label_2c77e8;
        case 0x2c77ecu: goto label_2c77ec;
        case 0x2c77f0u: goto label_2c77f0;
        case 0x2c77f4u: goto label_2c77f4;
        case 0x2c77f8u: goto label_2c77f8;
        case 0x2c77fcu: goto label_2c77fc;
        case 0x2c7800u: goto label_2c7800;
        case 0x2c7804u: goto label_2c7804;
        case 0x2c7808u: goto label_2c7808;
        case 0x2c780cu: goto label_2c780c;
        case 0x2c7810u: goto label_2c7810;
        case 0x2c7814u: goto label_2c7814;
        case 0x2c7818u: goto label_2c7818;
        case 0x2c781cu: goto label_2c781c;
        case 0x2c7820u: goto label_2c7820;
        case 0x2c7824u: goto label_2c7824;
        case 0x2c7828u: goto label_2c7828;
        case 0x2c782cu: goto label_2c782c;
        case 0x2c7830u: goto label_2c7830;
        case 0x2c7834u: goto label_2c7834;
        case 0x2c7838u: goto label_2c7838;
        case 0x2c783cu: goto label_2c783c;
        case 0x2c7840u: goto label_2c7840;
        case 0x2c7844u: goto label_2c7844;
        case 0x2c7848u: goto label_2c7848;
        case 0x2c784cu: goto label_2c784c;
        case 0x2c7850u: goto label_2c7850;
        case 0x2c7854u: goto label_2c7854;
        case 0x2c7858u: goto label_2c7858;
        case 0x2c785cu: goto label_2c785c;
        case 0x2c7860u: goto label_2c7860;
        case 0x2c7864u: goto label_2c7864;
        case 0x2c7868u: goto label_2c7868;
        case 0x2c786cu: goto label_2c786c;
        case 0x2c7870u: goto label_2c7870;
        case 0x2c7874u: goto label_2c7874;
        case 0x2c7878u: goto label_2c7878;
        case 0x2c787cu: goto label_2c787c;
        case 0x2c7880u: goto label_2c7880;
        case 0x2c7884u: goto label_2c7884;
        case 0x2c7888u: goto label_2c7888;
        case 0x2c788cu: goto label_2c788c;
        case 0x2c7890u: goto label_2c7890;
        case 0x2c7894u: goto label_2c7894;
        case 0x2c7898u: goto label_2c7898;
        case 0x2c789cu: goto label_2c789c;
        case 0x2c78a0u: goto label_2c78a0;
        case 0x2c78a4u: goto label_2c78a4;
        case 0x2c78a8u: goto label_2c78a8;
        case 0x2c78acu: goto label_2c78ac;
        case 0x2c78b0u: goto label_2c78b0;
        case 0x2c78b4u: goto label_2c78b4;
        case 0x2c78b8u: goto label_2c78b8;
        case 0x2c78bcu: goto label_2c78bc;
        case 0x2c78c0u: goto label_2c78c0;
        case 0x2c78c4u: goto label_2c78c4;
        case 0x2c78c8u: goto label_2c78c8;
        case 0x2c78ccu: goto label_2c78cc;
        case 0x2c78d0u: goto label_2c78d0;
        case 0x2c78d4u: goto label_2c78d4;
        case 0x2c78d8u: goto label_2c78d8;
        case 0x2c78dcu: goto label_2c78dc;
        case 0x2c78e0u: goto label_2c78e0;
        case 0x2c78e4u: goto label_2c78e4;
        case 0x2c78e8u: goto label_2c78e8;
        case 0x2c78ecu: goto label_2c78ec;
        case 0x2c78f0u: goto label_2c78f0;
        case 0x2c78f4u: goto label_2c78f4;
        case 0x2c78f8u: goto label_2c78f8;
        case 0x2c78fcu: goto label_2c78fc;
        case 0x2c7900u: goto label_2c7900;
        case 0x2c7904u: goto label_2c7904;
        case 0x2c7908u: goto label_2c7908;
        case 0x2c790cu: goto label_2c790c;
        case 0x2c7910u: goto label_2c7910;
        case 0x2c7914u: goto label_2c7914;
        case 0x2c7918u: goto label_2c7918;
        case 0x2c791cu: goto label_2c791c;
        case 0x2c7920u: goto label_2c7920;
        case 0x2c7924u: goto label_2c7924;
        case 0x2c7928u: goto label_2c7928;
        case 0x2c792cu: goto label_2c792c;
        case 0x2c7930u: goto label_2c7930;
        case 0x2c7934u: goto label_2c7934;
        case 0x2c7938u: goto label_2c7938;
        case 0x2c793cu: goto label_2c793c;
        case 0x2c7940u: goto label_2c7940;
        case 0x2c7944u: goto label_2c7944;
        case 0x2c7948u: goto label_2c7948;
        case 0x2c794cu: goto label_2c794c;
        case 0x2c7950u: goto label_2c7950;
        case 0x2c7954u: goto label_2c7954;
        case 0x2c7958u: goto label_2c7958;
        case 0x2c795cu: goto label_2c795c;
        case 0x2c7960u: goto label_2c7960;
        case 0x2c7964u: goto label_2c7964;
        case 0x2c7968u: goto label_2c7968;
        case 0x2c796cu: goto label_2c796c;
        case 0x2c7970u: goto label_2c7970;
        case 0x2c7974u: goto label_2c7974;
        case 0x2c7978u: goto label_2c7978;
        case 0x2c797cu: goto label_2c797c;
        case 0x2c7980u: goto label_2c7980;
        case 0x2c7984u: goto label_2c7984;
        case 0x2c7988u: goto label_2c7988;
        case 0x2c798cu: goto label_2c798c;
        case 0x2c7990u: goto label_2c7990;
        case 0x2c7994u: goto label_2c7994;
        case 0x2c7998u: goto label_2c7998;
        case 0x2c799cu: goto label_2c799c;
        case 0x2c79a0u: goto label_2c79a0;
        case 0x2c79a4u: goto label_2c79a4;
        case 0x2c79a8u: goto label_2c79a8;
        case 0x2c79acu: goto label_2c79ac;
        case 0x2c79b0u: goto label_2c79b0;
        case 0x2c79b4u: goto label_2c79b4;
        case 0x2c79b8u: goto label_2c79b8;
        case 0x2c79bcu: goto label_2c79bc;
        case 0x2c79c0u: goto label_2c79c0;
        case 0x2c79c4u: goto label_2c79c4;
        case 0x2c79c8u: goto label_2c79c8;
        case 0x2c79ccu: goto label_2c79cc;
        case 0x2c79d0u: goto label_2c79d0;
        case 0x2c79d4u: goto label_2c79d4;
        case 0x2c79d8u: goto label_2c79d8;
        case 0x2c79dcu: goto label_2c79dc;
        case 0x2c79e0u: goto label_2c79e0;
        case 0x2c79e4u: goto label_2c79e4;
        case 0x2c79e8u: goto label_2c79e8;
        case 0x2c79ecu: goto label_2c79ec;
        case 0x2c79f0u: goto label_2c79f0;
        case 0x2c79f4u: goto label_2c79f4;
        case 0x2c79f8u: goto label_2c79f8;
        case 0x2c79fcu: goto label_2c79fc;
        case 0x2c7a00u: goto label_2c7a00;
        case 0x2c7a04u: goto label_2c7a04;
        case 0x2c7a08u: goto label_2c7a08;
        case 0x2c7a0cu: goto label_2c7a0c;
        case 0x2c7a10u: goto label_2c7a10;
        case 0x2c7a14u: goto label_2c7a14;
        case 0x2c7a18u: goto label_2c7a18;
        case 0x2c7a1cu: goto label_2c7a1c;
        case 0x2c7a20u: goto label_2c7a20;
        case 0x2c7a24u: goto label_2c7a24;
        case 0x2c7a28u: goto label_2c7a28;
        case 0x2c7a2cu: goto label_2c7a2c;
        case 0x2c7a30u: goto label_2c7a30;
        case 0x2c7a34u: goto label_2c7a34;
        case 0x2c7a38u: goto label_2c7a38;
        case 0x2c7a3cu: goto label_2c7a3c;
        case 0x2c7a40u: goto label_2c7a40;
        case 0x2c7a44u: goto label_2c7a44;
        case 0x2c7a48u: goto label_2c7a48;
        case 0x2c7a4cu: goto label_2c7a4c;
        case 0x2c7a50u: goto label_2c7a50;
        case 0x2c7a54u: goto label_2c7a54;
        case 0x2c7a58u: goto label_2c7a58;
        case 0x2c7a5cu: goto label_2c7a5c;
        case 0x2c7a60u: goto label_2c7a60;
        case 0x2c7a64u: goto label_2c7a64;
        case 0x2c7a68u: goto label_2c7a68;
        case 0x2c7a6cu: goto label_2c7a6c;
        case 0x2c7a70u: goto label_2c7a70;
        case 0x2c7a74u: goto label_2c7a74;
        case 0x2c7a78u: goto label_2c7a78;
        case 0x2c7a7cu: goto label_2c7a7c;
        case 0x2c7a80u: goto label_2c7a80;
        case 0x2c7a84u: goto label_2c7a84;
        case 0x2c7a88u: goto label_2c7a88;
        case 0x2c7a8cu: goto label_2c7a8c;
        case 0x2c7a90u: goto label_2c7a90;
        case 0x2c7a94u: goto label_2c7a94;
        case 0x2c7a98u: goto label_2c7a98;
        case 0x2c7a9cu: goto label_2c7a9c;
        case 0x2c7aa0u: goto label_2c7aa0;
        case 0x2c7aa4u: goto label_2c7aa4;
        case 0x2c7aa8u: goto label_2c7aa8;
        case 0x2c7aacu: goto label_2c7aac;
        case 0x2c7ab0u: goto label_2c7ab0;
        case 0x2c7ab4u: goto label_2c7ab4;
        case 0x2c7ab8u: goto label_2c7ab8;
        case 0x2c7abcu: goto label_2c7abc;
        case 0x2c7ac0u: goto label_2c7ac0;
        case 0x2c7ac4u: goto label_2c7ac4;
        case 0x2c7ac8u: goto label_2c7ac8;
        case 0x2c7accu: goto label_2c7acc;
        case 0x2c7ad0u: goto label_2c7ad0;
        case 0x2c7ad4u: goto label_2c7ad4;
        case 0x2c7ad8u: goto label_2c7ad8;
        case 0x2c7adcu: goto label_2c7adc;
        default: return;
    }

label_2c7310:
    // 0x2c7310: 0x65657053  daddiu      $a1, $t3, 0x7053
    ctx->pc = 0x2c7310u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28755);
label_2c7314:
    // 0x2c7314: 0x63532064  daddi       $s3, $k0, 0x2064
    ctx->pc = 0x2c7314u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c7318:
    // 0x2c7318: 0x6c6c6f72  ldr         $t4, 0x6F72($v1)
    ctx->pc = 0x2c7318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c731c:
    // 0x2c731c: 0x0  nop
    ctx->pc = 0x2c731cu;
    // NOP
label_2c7320:
    // 0x2c7320: 0x676e6957  daddiu      $t6, $k1, 0x6957
    ctx->pc = 0x2c7320u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26967);
label_2c7324:
    // 0x2c7324: 0x6f6f4220  ldr         $t7, 0x4220($k1)
    ctx->pc = 0x2c7324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 16928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7328:
    // 0x2c7328: 0x7374  teq         $zero, $zero, 461
    ctx->pc = 0x2c7328u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c732c:
    // 0x2c732c: 0x0  nop
    ctx->pc = 0x2c732cu;
    // NOP
label_2c7330:
    // 0x2c7330: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c7330u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c7334:
    // 0x2c7334: 0x41206e6f  .word       0x41206E6F                   # INVALID     $t1, $zero, 0x6E6F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c7334u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2C7334 raw=0x41206E6F");
 /* MITIGATED */
label_2c7338:
    // 0x2c7338: 0x656c756d  daddiu      $t4, $t3, 0x756D
    ctx->pc = 0x2c7338u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30061);
label_2c733c:
    // 0x2c733c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2c733cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7340:
    // 0x2c7340: 0x63616550  daddi       $at, $k1, 0x6550
    ctx->pc = 0x2c7340u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25936; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c7344:
    // 0x2c7344: 0x206b636f  addi        $t3, $v1, 0x636F
    ctx->pc = 0x2c7344u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25455, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_2c7348:
    // 0x2c7348: 0x6e7255  .word       0x006E7255                   # INVALID     $v1, $t6, 0x7255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7348u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2C7348 raw=0x006E7255");
 /* MITIGATED */
label_2c734c:
    // 0x2c734c: 0x0  nop
    ctx->pc = 0x2c734cu;
    // NOP
label_2c7350:
    // 0x2c7350: 0x65676954  daddiu      $a3, $t3, 0x6954
    ctx->pc = 0x2c7350u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26964);
label_2c7354:
    // 0x2c7354: 0x6d412072  ldr         $at, 0x2072($t2)
    ctx->pc = 0x2c7354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7358:
    // 0x2c7358: 0x74656c75  .word       0x74656C75                   # INVALID     $v1, $a1, 0x6C75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7358u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7358 raw=0x74656C75");
 /* MITIGATED */
label_2c735c:
    // 0x2c735c: 0x0  nop
    ctx->pc = 0x2c735cu;
    // NOP
label_2c7360:
    // 0x2c7360: 0x74726f54  .word       0x74726F54                   # INVALID     $v1, $s2, 0x6F54 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7360u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7360 raw=0x74726F54");
 /* MITIGATED */
label_2c7364:
    // 0x2c7364: 0x6573696f  daddiu      $s3, $t3, 0x696F
    ctx->pc = 0x2c7364u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26991);
label_2c7368:
    // 0x2c7368: 0x756d4120  .word       0x756D4120                   # INVALID     $t3, $t5, 0x4120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7368u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7368 raw=0x756D4120");
 /* MITIGATED */
label_2c736c:
    // 0x2c736c: 0x74656c  .word       0x0074656C                   # dadd        $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c736cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c7370:
    // 0x2c7370: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c7370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7374:
    // 0x2c7374: 0x20732767  addi        $s3, $v1, 0x2767
    ctx->pc = 0x2c7374u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10087, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c7378:
    // 0x2c7378: 0x776f42  .word       0x00776F42                   # srl         $t5, $s7, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7378u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 23), 29));
label_2c737c:
    // 0x2c737c: 0x0  nop
    ctx->pc = 0x2c737cu;
    // NOP
label_2c7380:
    // 0x2c7380: 0x6c656853  ldr         $a1, 0x6853($v1)
    ctx->pc = 0x2c7380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26707); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c7384:
    // 0x2c7384: 0x7241206c  .word       0x7241206C                   # INVALID     $s2, $at, 0x206C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7384u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2C7384 raw=0x7241206C");
 /* MITIGATED */
label_2c7388:
    // 0x2c7388: 0x726f6d  .word       0x00726F6D                   # daddu       $t5, $v1, $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7388u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 18));
label_2c738c:
    // 0x2c738c: 0x0  nop
    ctx->pc = 0x2c738cu;
    // NOP
label_2c7390:
    // 0x2c7390: 0x6e726f48  ldr         $s2, 0x6F48($s3)
    ctx->pc = 0x2c7390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c7394:
    // 0x2c7394: 0x48206465  .word       0x48206465                   # qmfc2.i     $zero, $vf12 # 00000464 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c7394u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[12]));
label_2c7398:
    // 0x2c7398: 0x6d6c65  .word       0x006D6C65                   # or          $t5, $v1, $t5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7398u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_2c739c:
    // 0x2c739c: 0x0  nop
    ctx->pc = 0x2c739cu;
    // NOP
label_2c73a0:
    // 0x2c73a0: 0x61766143  daddi       $s6, $t3, 0x6143
    ctx->pc = 0x2c73a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24899; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2c73a4:
    // 0x2c73a4: 0x2079726c  addi        $t9, $v1, 0x726C
    ctx->pc = 0x2c73a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2c73a8:
    // 0x2c73a8: 0x6f6d7241  ldr         $t5, 0x7241($k1)
    ctx->pc = 0x2c73a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29249); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2c73ac:
    // 0x2c73ac: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c73acu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c73b0:
    // 0x2c73b0: 0x65766553  daddiu      $s6, $t3, 0x6553
    ctx->pc = 0x2c73b0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25939);
label_2c73b4:
    // 0x2c73b4: 0x7453206e  .word       0x7453206E                   # INVALID     $v0, $s3, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c73b4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C73B4 raw=0x7453206E");
 /* MITIGATED */
label_2c73b8:
    // 0x2c73b8: 0x4f207261  .word       0x4F207261                   # INVALID     $t9, $zero, 0x7261 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c73b8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C73B8 raw=0x4F207261");
 /* MITIGATED */
label_2c73bc:
    // 0x2c73bc: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x2c73bcu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c73c0:
    // 0x2c73c0: 0x646e6957  daddiu      $t6, $v1, 0x6957
    ctx->pc = 0x2c73c0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26967);
label_2c73c4:
    // 0x2c73c4: 0x72635320  .word       0x72635320                   # madd1       $t2, $s3, $v1 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c73c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_2c73c8:
    // 0x2c73c8: 0x6c6c6f  .word       0x006C6C6F                   # dsubu       $t5, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c73c8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 12));
label_2c73cc:
    // 0x2c73cc: 0x0  nop
    ctx->pc = 0x2c73ccu;
    // NOP
label_2c73d0:
    // 0x2c73d0: 0x78696c45  lq          $t1, 0x6C45($v1)
    ctx->pc = 0x2c73d0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 27717)));
label_2c73d4:
    // 0x2c73d4: 0x7269  .word       0x00007269                   # mtsa        $zero # 00007240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c73d4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2c73d8:
    // 0x2c73d8: 0x0  nop
    ctx->pc = 0x2c73d8u;
    // NOP
label_2c73dc:
    // 0x2c73dc: 0x0  nop
    ctx->pc = 0x2c73dcu;
    // NOP
label_2c73e0:
    // 0x2c73e0: 0x20646552  addi        $a0, $v1, 0x6552
    ctx->pc = 0x2c73e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25938, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c73e4:
    // 0x2c73e4: 0x65726148  daddiu      $s2, $t3, 0x6148
    ctx->pc = 0x2c73e4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24904);
label_2c73e8:
    // 0x2c73e8: 0x64615320  daddiu      $at, $v1, 0x5320
    ctx->pc = 0x2c73e8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)21280);
label_2c73ec:
    // 0x2c73ec: 0x656c64  .word       0x00656C64                   # and         $t5, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c73ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2c73f0:
    // 0x2c73f0: 0x20786548  addi        $t8, $v1, 0x6548
    ctx->pc = 0x2c73f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25928, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_2c73f4:
    // 0x2c73f4: 0x6b72614d  ldl         $s2, 0x614D($k1)
    ctx->pc = 0x2c73f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24909); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c73f8:
    // 0x2c73f8: 0x64615320  daddiu      $at, $v1, 0x5320
    ctx->pc = 0x2c73f8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)21280);
label_2c73fc:
    // 0x2c73fc: 0x656c64  .word       0x00656C64                   # and         $t5, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c73fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2c7400:
    // 0x2c7400: 0x65706d49  daddiu      $s0, $t3, 0x6D49
    ctx->pc = 0x2c7400u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27977);
label_2c7404:
    // 0x2c7404: 0x6c616972  ldr         $at, 0x6972($v1)
    ctx->pc = 0x2c7404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7408:
    // 0x2c7408: 0x64615320  daddiu      $at, $v1, 0x5320
    ctx->pc = 0x2c7408u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)21280);
label_2c740c:
    // 0x2c740c: 0x656c64  .word       0x00656C64                   # and         $t5, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c740cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2c7410:
    // 0x2c7410: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c7410u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c7414:
    // 0x2c7414: 0x20747241  addi        $s4, $v1, 0x7241
    ctx->pc = 0x2c7414u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29249, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c7418:
    // 0x2c7418: 0x5720666f  bnel        $t9, $zero, . + 4 + (0x666F << 2)
label_2c741c:
    if (ctx->pc == 0x2C741Cu) {
        ctx->pc = 0x2C741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7418u;
        // 0x2c741c: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7420u;
        goto label_2c7420;
    }
    ctx->pc = 0x2C7418u;
    {
        const bool branch_taken_0x2c7418 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7418) {
            ctx->pc = 0x2C741Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7418u;
            // 0x2c741c: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DD8u;
            return;
        }
    }
    ctx->pc = 0x2C7420u;
label_2c7420:
    // 0x2c7420: 0x79646f42  lq          $a0, 0x6F42($t3)
    ctx->pc = 0x2c7420u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 28482)));
label_2c7424:
    // 0x2c7424: 0x72617567  .word       0x72617567                   # INVALID     $s3, $at, 0x7567 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7424u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x2C7424 raw=0x72617567");
 /* MITIGATED */
label_2c7428:
    // 0x2c7428: 0x614d2064  daddi       $t5, $t2, 0x2064
    ctx->pc = 0x2c7428u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c742c:
    // 0x2c742c: 0x6c61756e  ldr         $at, 0x756E($v1)
    ctx->pc = 0x2c742cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30062); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7430:
    // 0x2c7430: 0x0  nop
    ctx->pc = 0x2c7430u;
    // NOP
label_2c7434:
    // 0x2c7434: 0x0  nop
    ctx->pc = 0x2c7434u;
    // NOP
label_2c7438:
    // 0x2c7438: 0x0  nop
    ctx->pc = 0x2c7438u;
    // NOP
label_2c743c:
    // 0x2c743c: 0x0  nop
    ctx->pc = 0x2c743cu;
    // NOP
label_2c7440:
    // 0x2c7440: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2c7440u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c7444:
    // 0x2c7444: 0x20796157  addi        $t9, $v1, 0x6157
    ctx->pc = 0x2c7444u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24919, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2c7448:
    // 0x2c7448: 0x4d20666f  .word       0x4D20666F                   # INVALID     $t1, $zero, 0x666F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7448u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C7448 raw=0x4D20666F");
 /* MITIGATED */
label_2c744c:
    // 0x2c744c: 0x756f7375  .word       0x756F7375                   # INVALID     $t3, $t7, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c744cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C744C raw=0x756F7375");
 /* MITIGATED */
label_2c7450:
    // 0x2c7450: 0x0  nop
    ctx->pc = 0x2c7450u;
    // NOP
label_2c7454:
    // 0x2c7454: 0x0  nop
    ctx->pc = 0x2c7454u;
    // NOP
label_2c7458:
    // 0x2c7458: 0x76727553  .word       0x76727553                   # INVALID     $s3, $s2, 0x7553 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7458u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7458 raw=0x76727553");
 /* MITIGATED */
label_2c745c:
    // 0x2c745c: 0x6c617669  ldr         $at, 0x7669($v1)
    ctx->pc = 0x2c745cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7460:
    // 0x2c7460: 0x69754720  ldl         $s5, 0x4720($t3)
    ctx->pc = 0x2c7460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
label_2c7464:
    // 0x2c7464: 0x6564  .word       0x00006564                   # and         $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7464u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c7468:
    // 0x2c7468: 0x65666544  daddiu      $a2, $t3, 0x6544
    ctx->pc = 0x2c7468u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25924);
label_2c746c:
    // 0x2c746c: 0x7265646e  .word       0x7265646E                   # INVALID     $s3, $a1, 0x646E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c746cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C746C raw=0x7265646E");
 /* MITIGATED */
label_2c7470:
    // 0x2c7470: 0x0  nop
    ctx->pc = 0x2c7470u;
    // NOP
label_2c7474:
    // 0x2c7474: 0x0  nop
    ctx->pc = 0x2c7474u;
    // NOP
label_2c7478:
    // 0x2c7478: 0x65726946  daddiu      $s2, $t3, 0x6946
    ctx->pc = 0x2c7478u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26950);
label_2c747c:
    // 0x2c747c: 0x72724120  .word       0x72724120                   # madd1       $t0, $s3, $s2 # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c747cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2c7480:
    // 0x2c7480: 0x73776f  .word       0x0073776F                   # dsubu       $t6, $v1, $s3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7480u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
label_2c7484:
    // 0x2c7484: 0x0  nop
    ctx->pc = 0x2c7484u;
    // NOP
label_2c7488:
    // 0x2c7488: 0x6b637542  ldl         $v1, 0x7542($k1)
    ctx->pc = 0x2c7488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30018); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2c748c:
    // 0x2c748c: 0x72656c  .word       0x0072656C                   # dadd        $t4, $v1, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c748cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c7490:
    // 0x2c7490: 0x65776f50  daddiu      $s7, $t3, 0x6F50
    ctx->pc = 0x2c7490u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28496);
label_2c7494:
    // 0x2c7494: 0x63532072  daddi       $s3, $k0, 0x2072
    ctx->pc = 0x2c7494u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c7498:
    // 0x2c7498: 0x6c6c6f72  ldr         $t4, 0x6F72($v1)
    ctx->pc = 0x2c7498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c749c:
    // 0x2c749c: 0x0  nop
    ctx->pc = 0x2c749cu;
    // NOP
label_2c74a0:
    // 0x2c74a0: 0x646c6f47  daddiu      $t4, $v1, 0x6F47
    ctx->pc = 0x2c74a0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28487);
label_2c74a4:
    // 0x2c74a4: 0x72614820  madd1       $t1, $s3, $at
    ctx->pc = 0x2c74a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2c74a8:
    // 0x2c74a8: 0x7373656e  .word       0x7373656E                   # INVALID     $k1, $s3, 0x656E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c74a8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C74A8 raw=0x7373656E");
 /* MITIGATED */
label_2c74ac:
    // 0x2c74ac: 0x0  nop
    ctx->pc = 0x2c74acu;
    // NOP
label_2c74b0:
    // 0x2c74b0: 0x6e756f4d  ldr         $s5, 0x6F4D($s3)
    ctx->pc = 0x2c74b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28493); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c74b4:
    // 0x2c74b4: 0x6e696174  ldr         $t1, 0x6174($s3)
    ctx->pc = 0x2c74b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c74b8:
    // 0x2c74b8: 0x69755120  ldl         $s5, 0x5120($t3)
    ctx->pc = 0x2c74b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20768); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
label_2c74bc:
    // 0x2c74bc: 0x726576  tne         $v1, $s2, 405
    ctx->pc = 0x2c74bcu;
    if (GPR_U64(ctx, 3) != GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2c74c0:
    // 0x2c74c0: 0x6e756f4d  ldr         $s5, 0x6F4D($s3)
    ctx->pc = 0x2c74c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28493); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c74c4:
    // 0x2c74c4: 0x6e696174  ldr         $t1, 0x6174($s3)
    ctx->pc = 0x2c74c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c74c8:
    // 0x2c74c8: 0x756f5020  .word       0x756F5020                   # INVALID     $t3, $t7, 0x5020 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c74c8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C74C8 raw=0x756F5020");
 /* MITIGATED */
label_2c74cc:
    // 0x2c74cc: 0x6863  .word       0x00006863                   # negu        $t5, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c74ccu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c74d0:
    // 0x2c74d0: 0x6e6f7242  ldr         $t7, 0x7242($s3)
    ctx->pc = 0x2c74d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c74d4:
    // 0x2c74d4: 0x4620657a  .word       0x4620657A                   # INVALID     $s1, $zero, 0x657A # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c74d4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x3A at 0x2C74D4 raw=0x4620657A");
 /* MITIGATED */
label_2c74d8:
    // 0x2c74d8: 0x6b73616c  ldl         $s3, 0x616C($k1)
    ctx->pc = 0x2c74d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2c74dc:
    // 0x2c74dc: 0x0  nop
    ctx->pc = 0x2c74dcu;
    // NOP
label_2c74e0:
    // 0x2c74e0: 0x69766944  ldl         $s6, 0x6944($t3)
    ctx->pc = 0x2c74e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_2c74e4:
    // 0x2c74e4: 0x4820656e  .word       0x4820656E                   # qmfc2.ni    $zero, $vf12 # 0000056E <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c74e4u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[12]));
label_2c74e8:
    // 0x2c74e8: 0x6d6c65  .word       0x006D6C65                   # or          $t5, $v1, $t5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c74e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_2c74ec:
    // 0x2c74ec: 0x0  nop
    ctx->pc = 0x2c74ecu;
    // NOP
label_2c74f0:
    // 0x2c74f0: 0x6f726353  ldr         $s2, 0x6353($k1)
    ctx->pc = 0x2c74f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c74f4:
    // 0x2c74f4: 0x6f206c6c  ldr         $zero, 0x6C6C($t9)
    ctx->pc = 0x2c74f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 27756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c74f8:
    // 0x2c74f8: 0x63412066  daddi       $at, $k0, 0x2066
    ctx->pc = 0x2c74f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)8294; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c74fc:
    // 0x2c74fc: 0x61727563  daddi       $s2, $t3, 0x7563
    ctx->pc = 0x2c74fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)30051; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7500:
    // 0x2c7500: 0x7963  .word       0x00007963                   # negu        $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7500u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7504:
    // 0x2c7504: 0x0  nop
    ctx->pc = 0x2c7504u;
    // NOP
label_2c7508:
    // 0x2c7508: 0x0  nop
    ctx->pc = 0x2c7508u;
    // NOP
label_2c750c:
    // 0x2c750c: 0x0  nop
    ctx->pc = 0x2c750cu;
    // NOP
label_2c7510:
    // 0x2c7510: 0x65706d49  daddiu      $s0, $t3, 0x6D49
    ctx->pc = 0x2c7510u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27977);
label_2c7514:
    // 0x2c7514: 0x6c616972  ldr         $at, 0x6972($v1)
    ctx->pc = 0x2c7514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7518:
    // 0x2c7518: 0x72614820  madd1       $t1, $s3, $at
    ctx->pc = 0x2c7518u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2c751c:
    // 0x2c751c: 0x7373656e  .word       0x7373656E                   # INVALID     $k1, $s3, 0x656E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c751cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C751C raw=0x7373656E");
 /* MITIGATED */
label_2c7520:
    // 0x2c7520: 0x0  nop
    ctx->pc = 0x2c7520u;
    // NOP
label_2c7524:
    // 0x2c7524: 0x0  nop
    ctx->pc = 0x2c7524u;
    // NOP
label_2c7528:
    // 0x2c7528: 0x0  nop
    ctx->pc = 0x2c7528u;
    // NOP
label_2c752c:
    // 0x2c752c: 0x0  nop
    ctx->pc = 0x2c752cu;
    // NOP
label_2c7530:
    // 0x2c7530: 0x65766553  daddiu      $s6, $t3, 0x6553
    ctx->pc = 0x2c7530u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25939);
label_2c7534:
    // 0x2c7534: 0x7453206e  .word       0x7453206E                   # INVALID     $v0, $s3, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7534u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7534 raw=0x7453206E");
 /* MITIGATED */
label_2c7538:
    // 0x2c7538: 0x20737261  addi        $s3, $v1, 0x7261
    ctx->pc = 0x2c7538u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c753c:
    // 0x2c753c: 0x64616c42  daddiu      $at, $v1, 0x6C42
    ctx->pc = 0x2c753cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27714);
label_2c7540:
    // 0x2c7540: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7540u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c7544:
    // 0x2c7544: 0x0  nop
    ctx->pc = 0x2c7544u;
    // NOP
label_2c7548:
    // 0x2c7548: 0x6867694c  ldl         $a3, 0x694C($v1)
    ctx->pc = 0x2c7548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26956); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c754c:
    // 0x2c754c: 0x6e696e74  ldr         $t1, 0x6E74($s3)
    ctx->pc = 0x2c754cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c7550:
    // 0x2c7550: 0x6f422067  ldr         $v0, 0x2067($k0)
    ctx->pc = 0x2c7550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c7554:
    // 0x2c7554: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7554u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2C7554 raw=0x00000077");
 /* MITIGATED */
label_2c7558:
    // 0x2c7558: 0x0  nop
    ctx->pc = 0x2c7558u;
    // NOP
label_2c755c:
    // 0x2c755c: 0x0  nop
    ctx->pc = 0x2c755cu;
    // NOP
label_2c7560:
    // 0x2c7560: 0x6c616553  ldr         $at, 0x6553($v1)
    ctx->pc = 0x2c7560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25939); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7564:
    // 0x2c7564: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x2c7564u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2c7568:
    // 0x2c7568: 0x6b726144  ldl         $s2, 0x6144($k1)
    ctx->pc = 0x2c7568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24900); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c756c:
    // 0x2c756c: 0x7373656e  .word       0x7373656E                   # INVALID     $k1, $s3, 0x656E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c756cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C756C raw=0x7373656E");
 /* MITIGATED */
label_2c7570:
    // 0x2c7570: 0x0  nop
    ctx->pc = 0x2c7570u;
    // NOP
label_2c7574:
    // 0x2c7574: 0x0  nop
    ctx->pc = 0x2c7574u;
    // NOP
label_2c7578:
    // 0x2c7578: 0x73616542  .word       0x73616542                   # INVALID     $k1, $at, 0x6542 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7578u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c757c:
    // 0x2c757c: 0x61482074  daddi       $t0, $t2, 0x2074
    ctx->pc = 0x2c757cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c7580:
    // 0x2c7580: 0x73656e72  .word       0x73656E72                   # INVALID     $k1, $a1, 0x6E72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7580u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2C7580 raw=0x73656E72");
 /* MITIGATED */
label_2c7584:
    // 0x2c7584: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c7584u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7588:
    // 0x2c7588: 0x6372614d  daddi       $s2, $k1, 0x614D
    ctx->pc = 0x2c7588u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24909; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c758c:
    // 0x2c758c: 0x676e6968  daddiu      $t6, $k1, 0x6968
    ctx->pc = 0x2c758cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26984);
label_2c7590:
    // 0x2c7590: 0x75724420  .word       0x75724420                   # INVALID     $t3, $s2, 0x4420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7590u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7590 raw=0x75724420");
 /* MITIGATED */
label_2c7594:
    // 0x2c7594: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7594u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7598:
    // 0x2c7598: 0x0  nop
    ctx->pc = 0x2c7598u;
    // NOP
label_2c759c:
    // 0x2c759c: 0x0  nop
    ctx->pc = 0x2c759cu;
    // NOP
label_2c75a0:
    // 0x2c75a0: 0x69766944  ldl         $s6, 0x6944($t3)
    ctx->pc = 0x2c75a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_2c75a4:
    // 0x2c75a4: 0x4720656e  .word       0x4720656E                   # INVALID     $t9, $zero, 0x656E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c75a4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x2E at 0x2C75A4 raw=0x4720656E");
 /* MITIGATED */
label_2c75a8:
    // 0x2c75a8: 0x746e7561  .word       0x746E7561                   # INVALID     $v1, $t6, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c75a8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C75A8 raw=0x746E7561");
 /* MITIGATED */
label_2c75ac:
    // 0x2c75ac: 0x74656c  .word       0x0074656C                   # dadd        $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c75acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c75b0:
    // 0x2c75b0: 0x7473614d  .word       0x7473614D                   # INVALID     $v1, $s3, 0x614D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c75b0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C75B0 raw=0x7473614D");
 /* MITIGATED */
label_2c75b4:
    // 0x2c75b4: 0x73277265  .word       0x73277265                   # INVALID     $t9, $a3, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c75b4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C75B4 raw=0x73277265");
 /* MITIGATED */
label_2c75b8:
    // 0x2c75b8: 0x6f6c4320  ldr         $t4, 0x4320($k1)
    ctx->pc = 0x2c75b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c75bc:
    // 0x2c75bc: 0x6b61  .word       0x00006B61                   # addu        $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c75bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c75c0:
    // 0x2c75c0: 0x6567654c  daddiu      $a3, $t3, 0x654C
    ctx->pc = 0x2c75c0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25932);
label_2c75c4:
    // 0x2c75c4: 0x7261646e  .word       0x7261646E                   # INVALID     $s3, $at, 0x646E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c75c4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C75C4 raw=0x7261646E");
 /* MITIGATED */
label_2c75c8:
    // 0x2c75c8: 0x63532079  daddi       $s3, $k0, 0x2079
    ctx->pc = 0x2c75c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c75cc:
    // 0x2c75cc: 0x6c6c6f72  ldr         $t4, 0x6F72($v1)
    ctx->pc = 0x2c75ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c75d0:
    // 0x2c75d0: 0x0  nop
    ctx->pc = 0x2c75d0u;
    // NOP
label_2c75d4:
    // 0x2c75d4: 0x0  nop
    ctx->pc = 0x2c75d4u;
    // NOP
label_2c75d8:
    // 0x2c75d8: 0x6f73754d  ldr         $s3, 0x754D($k1)
    ctx->pc = 0x2c75d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30029); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2c75dc:
    // 0x2c75dc: 0x72412075  .word       0x72412075                   # INVALID     $s2, $at, 0x2075 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c75dcu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x2C75DC raw=0x72412075");
 /* MITIGATED */
label_2c75e0:
    // 0x2c75e0: 0x726f6d  .word       0x00726F6D                   # daddu       $t5, $v1, $s2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c75e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 18));
label_2c75e4:
    // 0x2c75e4: 0x0  nop
    ctx->pc = 0x2c75e4u;
    // NOP
label_2c75e8:
    // 0x2c75e8: 0x65657053  daddiu      $a1, $t3, 0x7053
    ctx->pc = 0x2c75e8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28755);
label_2c75ec:
    // 0x2c75ec: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c75ecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c75f0:
    // 0x2c75f0: 0x706d754a  .word       0x706D754A                   # INVALID     $v1, $t5, 0x754A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c75f0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0xA at 0x2C75F0 raw=0x706D754A");
 /* MITIGATED */
label_2c75f4:
    // 0x2c75f4: 0x0  nop
    ctx->pc = 0x2c75f4u;
    // NOP
label_2c75f8:
    // 0x2c75f8: 0x6f73754d  ldr         $s3, 0x754D($k1)
    ctx->pc = 0x2c75f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30029); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2c75fc:
    // 0x2c75fc: 0x614d2075  daddi       $t5, $t2, 0x2075
    ctx->pc = 0x2c75fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8309; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c7600:
    // 0x2c7600: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x2c7600u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_2c7604:
    // 0x2c7604: 0x0  nop
    ctx->pc = 0x2c7604u;
    // NOP
label_2c7608:
    // 0x2c7608: 0x4d205048  .word       0x4D205048                   # INVALID     $t1, $zero, 0x5048 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7608u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C7608 raw=0x4D205048");
 /* MITIGATED */
label_2c760c:
    // 0x2c760c: 0x7861  .word       0x00007861                   # addu        $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c760cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7610:
    // 0x2c7610: 0x61747441  daddi       $s4, $t3, 0x7441
    ctx->pc = 0x2c7610u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29761; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c7614:
    // 0x2c7614: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7614u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7618:
    // 0x2c7618: 0x65666544  daddiu      $a2, $t3, 0x6544
    ctx->pc = 0x2c7618u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25924);
label_2c761c:
    // 0x2c761c: 0x65736e  .word       0x0065736E                   # dsub        $t6, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c761cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c7620:
    // 0x2c7620: 0x20776f42  addi        $s7, $v1, 0x6F42
    ctx->pc = 0x2c7620u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28482, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2c7624:
    // 0x2c7624: 0x61747441  daddi       $s4, $t3, 0x7441
    ctx->pc = 0x2c7624u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29761; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c7628:
    // 0x2c7628: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7628u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c762c:
    // 0x2c762c: 0x0  nop
    ctx->pc = 0x2c762cu;
    // NOP
label_2c7630:
    // 0x2c7630: 0x20776f42  addi        $s7, $v1, 0x6F42
    ctx->pc = 0x2c7630u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28482, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2c7634:
    // 0x2c7634: 0x65666544  daddiu      $a2, $t3, 0x6544
    ctx->pc = 0x2c7634u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25924);
label_2c7638:
    // 0x2c7638: 0x65736e  .word       0x0065736E                   # dsub        $t6, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7638u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c763c:
    // 0x2c763c: 0x0  nop
    ctx->pc = 0x2c763cu;
    // NOP
label_2c7640:
    // 0x2c7640: 0x6e756f4d  ldr         $s5, 0x6F4D($s3)
    ctx->pc = 0x2c7640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28493); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c7644:
    // 0x2c7644: 0x20646574  addi        $a0, $v1, 0x6574
    ctx->pc = 0x2c7644u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7648:
    // 0x2c7648: 0x61747441  daddi       $s4, $t3, 0x7441
    ctx->pc = 0x2c7648u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29761; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c764c:
    // 0x2c764c: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c764cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7650:
    // 0x2c7650: 0x6e756f4d  ldr         $s5, 0x6F4D($s3)
    ctx->pc = 0x2c7650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28493); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c7654:
    // 0x2c7654: 0x20646574  addi        $a0, $v1, 0x6574
    ctx->pc = 0x2c7654u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7658:
    // 0x2c7658: 0x65666544  daddiu      $a2, $t3, 0x6544
    ctx->pc = 0x2c7658u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25924);
label_2c765c:
    // 0x2c765c: 0x65736e  .word       0x0065736E                   # dsub        $t6, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c765cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c7660:
    // 0x2c7660: 0x6b63754c  ldl         $v1, 0x754C($k1)
    ctx->pc = 0x2c7660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30028); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2c7664:
    // 0x2c7664: 0x0  nop
    ctx->pc = 0x2c7664u;
    // NOP
label_2c7668:
    // 0x2c7668: 0x63616552  daddi       $at, $k1, 0x6552
    ctx->pc = 0x2c7668u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25938; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c766c:
    // 0x2c766c: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c766cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2c7670:
    // 0x2c7670: 0x6f73754d  ldr         $s3, 0x754D($k1)
    ctx->pc = 0x2c7670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30029); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2c7674:
    // 0x2c7674: 0x68432075  ldl         $v1, 0x2075($v0)
    ctx->pc = 0x2c7674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2c7678:
    // 0x2c7678: 0x65677261  daddiu      $a3, $t3, 0x7261
    ctx->pc = 0x2c7678u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
label_2c767c:
    // 0x2c767c: 0x0  nop
    ctx->pc = 0x2c767cu;
    // NOP
label_2c7680:
    // 0x2c7680: 0x69676542  ldl         $a3, 0x6542($t3)
    ctx->pc = 0x2c7680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25922); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c7684:
    // 0x2c7684: 0x7473206e  .word       0x7473206E                   # INVALID     $v1, $s3, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7684u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7684 raw=0x7473206E");
 /* MITIGATED */
label_2c7688:
    // 0x2c7688: 0x20656761  addi        $a1, $v1, 0x6761
    ctx->pc = 0x2c7688u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26465, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c768c:
    // 0x2c768c: 0x6e756f6d  ldr         $s5, 0x6F6D($s3)
    ctx->pc = 0x2c768cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c7690:
    // 0x2c7690: 0x20646574  addi        $a0, $v1, 0x6574
    ctx->pc = 0x2c7690u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7694:
    // 0x2c7694: 0x52206e6f  beql        $s1, $zero, . + 4 + (0x6E6F << 2)
label_2c7698:
    if (ctx->pc == 0x2C7698u) {
        ctx->pc = 0x2C7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7694u;
        // 0x2c7698: 0x48206465  .word       0x48206465                   # qmfc2.i     $zero, $vf12 # 00000464 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[12]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C769Cu;
        goto label_2c769c;
    }
    ctx->pc = 0x2C7694u;
    {
        const bool branch_taken_0x2c7694 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7694) {
            ctx->pc = 0x2C7698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7694u;
            // 0x2c7698: 0x48206465  .word       0x48206465                   # qmfc2.i     $zero, $vf12 # 00000464 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[12]));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3054u;
            return;
        }
    }
    ctx->pc = 0x2C769Cu;
label_2c769c:
    // 0x2c769c: 0x657261  .word       0x00657261                   # addu        $t6, $v1, $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c769cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c76a0:
    // 0x2c76a0: 0x69676542  ldl         $a3, 0x6542($t3)
    ctx->pc = 0x2c76a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25922); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2c76a4:
    // 0x2c76a4: 0x7473206e  .word       0x7473206E                   # INVALID     $v1, $s3, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c76a4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C76A4 raw=0x7473206E");
 /* MITIGATED */
label_2c76a8:
    // 0x2c76a8: 0x20656761  addi        $a1, $v1, 0x6761
    ctx->pc = 0x2c76a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26465, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c76ac:
    // 0x2c76ac: 0x6e756f6d  ldr         $s5, 0x6F6D($s3)
    ctx->pc = 0x2c76acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c76b0:
    // 0x2c76b0: 0x20646574  addi        $a0, $v1, 0x6574
    ctx->pc = 0x2c76b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c76b4:
    // 0x2c76b4: 0x48206e6f  .word       0x48206E6F                   # qmfc2.i     $zero, $vf13 # 0000066E <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c76b4u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[13]));
label_2c76b8:
    // 0x2c76b8: 0x4d207865  .word       0x4D207865                   # INVALID     $t1, $zero, 0x7865 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c76b8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C76B8 raw=0x4D207865");
 /* MITIGATED */
label_2c76bc:
    // 0x2c76bc: 0x6b7261  .word       0x006B7261                   # addu        $t6, $v1, $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c76bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_2c76c0:
    // 0x2c76c0: 0x206e6143  addi        $t6, $v1, 0x6143
    ctx->pc = 0x2c76c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c76c4:
    // 0x2c76c4: 0x6e756f6d  ldr         $s5, 0x6F6D($s3)
    ctx->pc = 0x2c76c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c76c8:
    // 0x2c76c8: 0x6c612074  ldr         $at, 0x2074($v1)
    ctx->pc = 0x2c76c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c76cc:
    // 0x2c76cc: 0x6f68206c  ldr         $t0, 0x206C($k1)
    ctx->pc = 0x2c76ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2c76d0:
    // 0x2c76d0: 0x73657372  .word       0x73657372                   # INVALID     $k1, $a1, 0x7372 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c76d0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2C76D0 raw=0x73657372");
 /* MITIGATED */
label_2c76d4:
    // 0x2c76d4: 0x0  nop
    ctx->pc = 0x2c76d4u;
    // NOP
label_2c76d8:
    // 0x2c76d8: 0x0  nop
    ctx->pc = 0x2c76d8u;
    // NOP
label_2c76dc:
    // 0x2c76dc: 0x0  nop
    ctx->pc = 0x2c76dcu;
    // NOP
label_2c76e0:
    // 0x2c76e0: 0x65706d49  daddiu      $s0, $t3, 0x6D49
    ctx->pc = 0x2c76e0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27977);
label_2c76e4:
    // 0x2c76e4: 0x6c616972  ldr         $at, 0x6972($v1)
    ctx->pc = 0x2c76e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c76e8:
    // 0x2c76e8: 0x61655320  daddi       $a1, $t3, 0x5320
    ctx->pc = 0x2c76e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c76ec:
    // 0x2c76ec: 0x57202c6c  bnel        $t9, $zero, . + 4 + (0x2C6C << 2)
label_2c76f0:
    if (ctx->pc == 0x2C76F0u) {
        ctx->pc = 0x2C76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76ECu;
        // 0x2c76f0: 0x47207261  .word       0x47207261                   # INVALID     $t9, $zero, 0x7261 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//         throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x21 at 0x2C76F0 raw=0x47207261");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76F4u;
        goto label_2c76f4;
    }
    ctx->pc = 0x2C76ECu;
    {
        const bool branch_taken_0x2c76ec = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c76ec) {
            ctx->pc = 0x2C76F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C76ECu;
            // 0x2c76f0: 0x47207261  .word       0x47207261                   # INVALID     $t9, $zero, 0x7261 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
//             throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x21 at 0x2C76F0 raw=0x47207261");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D28A0u;
            return;
        }
    }
    ctx->pc = 0x2C76F4u;
label_2c76f4:
    // 0x2c76f4: 0x7327646f  .word       0x7327646F                   # INVALID     $t9, $a3, 0x646F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c76f4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2C76F4 raw=0x7327646F");
 /* MITIGATED */
label_2c76f8:
    // 0x2c76f8: 0x65784120  daddiu      $t8, $t3, 0x4120
    ctx->pc = 0x2c76f8u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)16672);
label_2c76fc:
    // 0x2c76fc: 0x41202620  .word       0x41202620                   # INVALID     $t1, $zero, 0x2620 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c76fcu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2C76FC raw=0x41202620");
 /* MITIGATED */
label_2c7700:
    // 0x2c7700: 0x726f6d72  .word       0x726F6D72                   # INVALID     $s3, $t7, 0x6D72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7700u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2C7700 raw=0x726F6D72");
 /* MITIGATED */
label_2c7704:
    // 0x2c7704: 0x76616820  .word       0x76616820                   # INVALID     $s3, $at, 0x6820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7704u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7704 raw=0x76616820");
 /* MITIGATED */
label_2c7708:
    // 0x2c7708: 0x6f6c2065  ldr         $t4, 0x2065($k1)
    ctx->pc = 0x2c7708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c770c:
    // 0x2c770c: 0x7265676e  .word       0x7265676E                   # INVALID     $s3, $a1, 0x676E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c770cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C770C raw=0x7265676E");
 /* MITIGATED */
label_2c7710:
    // 0x2c7710: 0x66666520  daddiu      $a2, $s3, 0x6520
    ctx->pc = 0x2c7710u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25888);
label_2c7714:
    // 0x2c7714: 0x746365  .word       0x00746365                   # or          $t4, $v1, $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7714u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_2c7718:
    // 0x2c7718: 0x0  nop
    ctx->pc = 0x2c7718u;
    // NOP
label_2c771c:
    // 0x2c771c: 0x0  nop
    ctx->pc = 0x2c771cu;
    // NOP
label_2c7720:
    // 0x2c7720: 0x79646f42  lq          $a0, 0x6F42($t3)
    ctx->pc = 0x2c7720u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 28482)));
label_2c7724:
    // 0x2c7724: 0x72617567  .word       0x72617567                   # INVALID     $s3, $at, 0x7567 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7724u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x2C7724 raw=0x72617567");
 /* MITIGATED */
label_2c7728:
    // 0x2c7728: 0x62207364  daddi       $zero, $s1, 0x7364
    ctx->pc = 0x2c7728u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)29540; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c772c:
    // 0x2c772c: 0x6d6f6365  ldr         $t7, 0x6365($t3)
    ctx->pc = 0x2c772cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25445); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7730:
    // 0x2c7730: 0x74732065  .word       0x74732065                   # INVALID     $v1, $s3, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7730u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7730 raw=0x74732065");
 /* MITIGATED */
label_2c7734:
    // 0x2c7734: 0x676e6f72  daddiu      $t6, $k1, 0x6F72
    ctx->pc = 0x2c7734u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28530);
label_2c7738:
    // 0x2c7738: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7738u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c773c:
    // 0x2c773c: 0x0  nop
    ctx->pc = 0x2c773cu;
    // NOP
label_2c7740:
    // 0x2c7740: 0x206e6143  addi        $t6, $v1, 0x6143
    ctx->pc = 0x2c7740u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c7744:
    // 0x2c7744: 0x20657375  addi        $a1, $v1, 0x7375
    ctx->pc = 0x2c7744u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29557, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c7748:
    // 0x2c7748: 0x65757254  daddiu      $s5, $t3, 0x7254
    ctx->pc = 0x2c7748u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29268);
label_2c774c:
    // 0x2c774c: 0x73754d20  .word       0x73754D20                   # madd1       $t1, $k1, $s5 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c774cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2c7750:
    // 0x2c7750: 0x4120756f  .word       0x4120756F                   # INVALID     $t1, $zero, 0x756F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c7750u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2C7750 raw=0x4120756F");
 /* MITIGATED */
label_2c7754:
    // 0x2c7754: 0x63617474  daddi       $at, $k1, 0x7474
    ctx->pc = 0x2c7754u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29812; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c7758:
    // 0x2c7758: 0x6572206b  daddiu      $s2, $t3, 0x206B
    ctx->pc = 0x2c7758u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8299);
label_2c775c:
    // 0x2c775c: 0x64726167  daddiu      $s2, $v1, 0x6167
    ctx->pc = 0x2c775cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24935);
label_2c7760:
    // 0x2c7760: 0x7373656c  .word       0x7373656C                   # INVALID     $k1, $s3, 0x656C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7760u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2C7760 raw=0x7373656C");
 /* MITIGATED */
label_2c7764:
    // 0x2c7764: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x2c7764u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2c7768:
    // 0x2c7768: 0x6c616568  ldr         $at, 0x6568($v1)
    ctx->pc = 0x2c7768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c776c:
    // 0x2c776c: 0x6874  teq         $zero, $zero, 417
    ctx->pc = 0x2c776cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7770:
    // 0x2c7770: 0x61747441  daddi       $s4, $t3, 0x7441
    ctx->pc = 0x2c7770u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29761; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c7774:
    // 0x2c7774: 0x78206b63  lq          $zero, 0x6B63($at)
    ctx->pc = 0x2c7774u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 1), 27491)));
label_2c7778:
    // 0x2c7778: 0x77203220  .word       0x77203220                   # INVALID     $t9, $zero, 0x3220 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7778u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7778 raw=0x77203220");
 /* MITIGATED */
label_2c777c:
    // 0x2c777c: 0x206e6568  addi        $t6, $v1, 0x6568
    ctx->pc = 0x2c777cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25960, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c7780:
    // 0x2c7780: 0x7261656e  .word       0x7261656E                   # INVALID     $s3, $at, 0x656E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7780u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C7780 raw=0x7261656E");
 /* MITIGATED */
label_2c7784:
    // 0x2c7784: 0x61656420  daddi       $a1, $t3, 0x6420
    ctx->pc = 0x2c7784u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25632; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7788:
    // 0x2c7788: 0x6874  teq         $zero, $zero, 417
    ctx->pc = 0x2c7788u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c778c:
    // 0x2c778c: 0x0  nop
    ctx->pc = 0x2c778cu;
    // NOP
label_2c7790:
    // 0x2c7790: 0x65666544  daddiu      $a2, $t3, 0x6544
    ctx->pc = 0x2c7790u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25924);
label_2c7794:
    // 0x2c7794: 0x2065736e  addi        $a1, $v1, 0x736E
    ctx->pc = 0x2c7794u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29550, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c7798:
    // 0x2c7798: 0x20322078  addi        $s2, $at, 0x2078
    ctx->pc = 0x2c7798u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8312, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c779c:
    // 0x2c779c: 0x6e656877  ldr         $a1, 0x6877($s3)
    ctx->pc = 0x2c779cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c77a0:
    // 0x2c77a0: 0x61656e20  daddi       $a1, $t3, 0x6E20
    ctx->pc = 0x2c77a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28192; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c77a4:
    // 0x2c77a4: 0x65642072  daddiu      $a0, $t3, 0x2072
    ctx->pc = 0x2c77a4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8306);
label_2c77a8:
    // 0x2c77a8: 0x687461  .word       0x00687461                   # addu        $t6, $v1, $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c77a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2c77ac:
    // 0x2c77ac: 0x0  nop
    ctx->pc = 0x2c77acu;
    // NOP
label_2c77b0:
    // 0x2c77b0: 0x206e6143  addi        $t6, $v1, 0x6143
    ctx->pc = 0x2c77b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c77b4:
    // 0x2c77b4: 0x6f6f6873  ldr         $t7, 0x6873($k1)
    ctx->pc = 0x2c77b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26739); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c77b8:
    // 0x2c77b8: 0x69662074  ldl         $a2, 0x2074($t3)
    ctx->pc = 0x2c77b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2c77bc:
    // 0x2c77bc: 0x61206572  daddi       $zero, $t1, 0x6572
    ctx->pc = 0x2c77bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c77c0:
    // 0x2c77c0: 0x776f7272  .word       0x776F7272                   # INVALID     $k1, $t7, 0x7272 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c77c0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C77C0 raw=0x776F7272");
 /* MITIGATED */
label_2c77c4:
    // 0x2c77c4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c77c4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c77c8:
    // 0x2c77c8: 0x0  nop
    ctx->pc = 0x2c77c8u;
    // NOP
label_2c77cc:
    // 0x2c77cc: 0x0  nop
    ctx->pc = 0x2c77ccu;
    // NOP
label_2c77d0:
    // 0x2c77d0: 0x76657250  .word       0x76657250                   # INVALID     $s3, $a1, 0x7250 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c77d0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C77D0 raw=0x76657250");
 /* MITIGATED */
label_2c77d4:
    // 0x2c77d4: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c77d4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C77D4 raw=0x73746E65");
 /* MITIGATED */
label_2c77d8:
    // 0x2c77d8: 0x75747320  .word       0x75747320                   # INVALID     $t3, $s4, 0x7320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c77d8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C77D8 raw=0x75747320");
 /* MITIGATED */
label_2c77dc:
    // 0x2c77dc: 0x696c626d  ldl         $t4, 0x626D($t3)
    ctx->pc = 0x2c77dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25197); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c77e0:
    // 0x2c77e0: 0x6120676e  daddi       $zero, $t1, 0x676E
    ctx->pc = 0x2c77e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)26478; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c77e4:
    // 0x2c77e4: 0x72657466  .word       0x72657466                   # INVALID     $s3, $a1, 0x7466 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c77e4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x2C77E4 raw=0x72657466");
 /* MITIGATED */
label_2c77e8:
    // 0x2c77e8: 0x61756720  daddi       $s5, $t3, 0x6720
    ctx->pc = 0x2c77e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26400; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c77ec:
    // 0x2c77ec: 0x6e696472  ldr         $t1, 0x6472($s3)
    ctx->pc = 0x2c77ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c77f0:
    // 0x2c77f0: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c77f0u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c77f4:
    // 0x2c77f4: 0x0  nop
    ctx->pc = 0x2c77f4u;
    // NOP
label_2c77f8:
    // 0x2c77f8: 0x0  nop
    ctx->pc = 0x2c77f8u;
    // NOP
label_2c77fc:
    // 0x2c77fc: 0x0  nop
    ctx->pc = 0x2c77fcu;
    // NOP
label_2c7800:
    // 0x2c7800: 0x6576654e  daddiu      $s6, $t3, 0x654E
    ctx->pc = 0x2c7800u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25934);
label_2c7804:
    // 0x2c7804: 0x6f6c2072  ldr         $t4, 0x2072($k1)
    ctx->pc = 0x2c7804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c7808:
    // 0x2c7808: 0x77206573  .word       0x77206573                   # INVALID     $t9, $zero, 0x6573 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7808u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7808 raw=0x77206573");
 /* MITIGATED */
label_2c780c:
    // 0x2c780c: 0x6f706165  ldr         $s0, 0x6165($k1)
    ctx->pc = 0x2c780cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2c7810:
    // 0x2c7810: 0x6564206e  daddiu      $a0, $t3, 0x206E
    ctx->pc = 0x2c7810u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8302);
label_2c7814:
    // 0x2c7814: 0x6f6c6461  ldr         $t4, 0x6461($k1)
    ctx->pc = 0x2c7814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25697); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c7818:
    // 0x2c7818: 0x736b63  .word       0x00736B63                   # subu        $t5, $v1, $s3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7818u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2c781c:
    // 0x2c781c: 0x0  nop
    ctx->pc = 0x2c781cu;
    // NOP
label_2c7820:
    // 0x2c7820: 0x76657250  .word       0x76657250                   # INVALID     $s3, $a1, 0x7250 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7820u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7820 raw=0x76657250");
 /* MITIGATED */
label_2c7824:
    // 0x2c7824: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7824u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C7824 raw=0x73746E65");
 /* MITIGATED */
label_2c7828:
    // 0x2c7828: 0x73696420  .word       0x73696420                   # madd1       $t4, $k1, $t1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7828u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c782c:
    // 0x2c782c: 0x6e756f6d  ldr         $s5, 0x6F6D($s3)
    ctx->pc = 0x2c782cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c7830:
    // 0x2c7830: 0x676e6974  daddiu      $t6, $k1, 0x6974
    ctx->pc = 0x2c7830u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26996);
label_2c7834:
    // 0x2c7834: 0x65687720  daddiu      $t0, $t3, 0x7720
    ctx->pc = 0x2c7834u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30496);
label_2c7838:
    // 0x2c7838: 0x6968206e  ldl         $t0, 0x206E($t3)
    ctx->pc = 0x2c7838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2c783c:
    // 0x2c783c: 0x79622074  lq          $v0, 0x2074($t3)
    ctx->pc = 0x2c783cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 8308)));
label_2c7840:
    // 0x2c7840: 0x72726120  .word       0x72726120                   # madd1       $t4, $s3, $s2 # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7840u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c7844:
    // 0x2c7844: 0x73776f  .word       0x0073776F                   # dsubu       $t6, $v1, $s3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7844u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
label_2c7848:
    // 0x2c7848: 0x6f727241  ldr         $s2, 0x7241($k1)
    ctx->pc = 0x2c7848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29249); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c784c:
    // 0x2c784c: 0x7377  .word       0x00007377                   # INVALID     $zero, $zero, 0x7377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c784cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2C784C raw=0x00007377");
 /* MITIGATED */
label_2c7850:
    // 0x2c7850: 0x7461654d  .word       0x7461654D                   # INVALID     $v1, $at, 0x654D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7850u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7850 raw=0x7461654D");
 /* MITIGATED */
label_2c7854:
    // 0x2c7854: 0x6e754220  ldr         $s5, 0x4220($s3)
    ctx->pc = 0x2c7854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c7858:
    // 0x2c7858: 0x63655220  daddi       $a1, $k1, 0x5220
    ctx->pc = 0x2c7858u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21024; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c785c:
    // 0x2c785c: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c785cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2C785C raw=0x7265766F");
 /* MITIGATED */
label_2c7860:
    // 0x2c7860: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7860u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2C7860 raw=0x00000079");
 /* MITIGATED */
label_2c7864:
    // 0x2c7864: 0x0  nop
    ctx->pc = 0x2c7864u;
    // NOP
label_2c7868:
    // 0x2c7868: 0x72616843  .word       0x72616843                   # INVALID     $s3, $at, 0x6843 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7868u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 1); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c786c:
    // 0x2c786c: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c786cu;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c7870:
    // 0x2c7870: 0x76657250  .word       0x76657250                   # INVALID     $s3, $a1, 0x7250 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7870u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7870 raw=0x76657250");
 /* MITIGATED */
label_2c7874:
    // 0x2c7874: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7874u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C7874 raw=0x73746E65");
 /* MITIGATED */
label_2c7878:
    // 0x2c7878: 0x7a696420  lq          $t1, 0x6420($s3)
    ctx->pc = 0x2c7878u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 25632)));
label_2c787c:
    // 0x2c787c: 0x656e697a  daddiu      $t6, $t3, 0x697A
    ctx->pc = 0x2c787cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27002);
label_2c7880:
    // 0x2c7880: 0x61207373  daddi       $zero, $t1, 0x7373
    ctx->pc = 0x2c7880u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29555; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c7884:
    // 0x2c7884: 0x72657466  .word       0x72657466                   # INVALID     $s3, $a1, 0x7466 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7884u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x2C7884 raw=0x72657466");
 /* MITIGATED */
label_2c7888:
    // 0x2c7888: 0x72747320  .word       0x72747320                   # madd1       $t6, $s3, $s4 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7888u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c788c:
    // 0x2c788c: 0x20676e6f  addi        $a3, $v1, 0x6E6F
    ctx->pc = 0x2c788cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28271, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2c7890:
    // 0x2c7890: 0x61747461  daddi       $s4, $t3, 0x7461
    ctx->pc = 0x2c7890u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29793; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c7894:
    // 0x2c7894: 0x736b63  .word       0x00736B63                   # subu        $t5, $v1, $s3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7894u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2c7898:
    // 0x2c7898: 0x0  nop
    ctx->pc = 0x2c7898u;
    // NOP
label_2c789c:
    // 0x2c789c: 0x0  nop
    ctx->pc = 0x2c789cu;
    // NOP
label_2c78a0:
    // 0x2c78a0: 0x61747441  daddi       $s4, $t3, 0x7441
    ctx->pc = 0x2c78a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29761; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c78a4:
    // 0x2c78a4: 0x78206b63  lq          $zero, 0x6B63($at)
    ctx->pc = 0x2c78a4u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 1), 27491)));
label_2c78a8:
    // 0x2c78a8: 0x75622032  .word       0x75622032                   # INVALID     $t3, $v0, 0x2032 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c78a8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C78A8 raw=0x75622032");
 /* MITIGATED */
label_2c78ac:
    // 0x2c78ac: 0x65642074  daddiu      $a0, $t3, 0x2074
    ctx->pc = 0x2c78acu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8308);
label_2c78b0:
    // 0x2c78b0: 0x736e6566  .word       0x736E6566                   # INVALID     $k1, $t6, 0x6566 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c78b0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x2C78B0 raw=0x736E6566");
 /* MITIGATED */
label_2c78b4:
    // 0x2c78b4: 0x72642065  .word       0x72642065                   # INVALID     $s3, $a0, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c78b4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C78B4 raw=0x72642065");
 /* MITIGATED */
label_2c78b8:
    // 0x2c78b8: 0x2073706f  addi        $s3, $v1, 0x706F
    ctx->pc = 0x2c78b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28783, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c78bc:
    // 0x2c78bc: 0x65746661  daddiu      $s4, $t3, 0x6661
    ctx->pc = 0x2c78bcu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26209);
label_2c78c0:
    // 0x2c78c0: 0x65672072  daddiu      $a3, $t3, 0x2072
    ctx->pc = 0x2c78c0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8306);
label_2c78c4:
    // 0x2c78c4: 0x6e697474  ldr         $t1, 0x7474($s3)
    ctx->pc = 0x2c78c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29812); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c78c8:
    // 0x2c78c8: 0x6e6b2067  ldr         $t3, 0x2067($s3)
    ctx->pc = 0x2c78c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_2c78cc:
    // 0x2c78cc: 0x656b636f  daddiu      $t3, $t3, 0x636F
    ctx->pc = 0x2c78ccu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25455);
label_2c78d0:
    // 0x2c78d0: 0x6f642064  ldr         $a0, 0x2064($k1)
    ctx->pc = 0x2c78d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2c78d4:
    // 0x2c78d4: 0x6e77  .word       0x00006E77                   # INVALID     $zero, $zero, 0x6E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c78d4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2C78D4 raw=0x00006E77");
 /* MITIGATED */
label_2c78d8:
    // 0x2c78d8: 0x0  nop
    ctx->pc = 0x2c78d8u;
    // NOP
label_2c78dc:
    // 0x2c78dc: 0x0  nop
    ctx->pc = 0x2c78dcu;
    // NOP
label_2c78e0:
    // 0x2c78e0: 0x206e7552  addi        $t6, $v1, 0x7552
    ctx->pc = 0x2c78e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30034, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c78e4:
    // 0x2c78e4: 0x7265766f  .word       0x7265766F                   # INVALID     $s3, $a1, 0x766F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c78e4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2C78E4 raw=0x7265766F");
 /* MITIGATED */
label_2c78e8:
    // 0x2c78e8: 0x6c6c6120  ldr         $t4, 0x6120($v1)
    ctx->pc = 0x2c78e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c78ec:
    // 0x2c78ec: 0x656e6520  daddiu      $t6, $t3, 0x6520
    ctx->pc = 0x2c78ecu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25888);
label_2c78f0:
    // 0x2c78f0: 0x7365696d  .word       0x7365696D                   # INVALID     $k1, $a1, 0x696D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c78f0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2C78F0 raw=0x7365696D");
 /* MITIGATED */
label_2c78f4:
    // 0x2c78f4: 0x74697720  .word       0x74697720                   # INVALID     $v1, $t1, 0x7720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c78f4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C78F4 raw=0x74697720");
 /* MITIGATED */
label_2c78f8:
    // 0x2c78f8: 0x6e612068  ldr         $at, 0x2068($s3)
    ctx->pc = 0x2c78f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c78fc:
    // 0x2c78fc: 0x6f682079  ldr         $t0, 0x2079($k1)
    ctx->pc = 0x2c78fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2c7900:
    // 0x2c7900: 0x657372  tlt         $v1, $a1, 461
    ctx->pc = 0x2c7900u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2c7904:
    // 0x2c7904: 0x0  nop
    ctx->pc = 0x2c7904u;
    // NOP
label_2c7908:
    // 0x2c7908: 0x0  nop
    ctx->pc = 0x2c7908u;
    // NOP
label_2c790c:
    // 0x2c790c: 0x0  nop
    ctx->pc = 0x2c790cu;
    // NOP
label_2c7910:
    // 0x2c7910: 0x656b614d  daddiu      $t3, $t3, 0x614D
    ctx->pc = 0x2c7910u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24909);
label_2c7914:
    // 0x2c7914: 0x74692073  .word       0x74692073                   # INVALID     $v1, $t1, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7914u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7914 raw=0x74692073");
 /* MITIGATED */
label_2c7918:
    // 0x2c7918: 0x73616520  .word       0x73616520                   # madd1       $t4, $k1, $at # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7918u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c791c:
    // 0x2c791c: 0x20726569  addi        $s2, $v1, 0x6569
    ctx->pc = 0x2c791cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25961, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c7920:
    // 0x2c7920: 0x72206f74  .word       0x72206F74                   # psllh       $t5, $zero, 29 # 02200000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7920u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 0), 29));
label_2c7924:
    // 0x2c7924: 0x69656365  ldl         $a1, 0x6365($t3)
    ctx->pc = 0x2c7924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25445); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2c7928:
    // 0x2c7928: 0x68206576  ldl         $zero, 0x6576($at)
    ctx->pc = 0x2c7928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 25974); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2c792c:
    // 0x2c792c: 0x20686769  addi        $t0, $v1, 0x6769
    ctx->pc = 0x2c792cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26473, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c7930:
    // 0x2c7930: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7930u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2C7930 raw=0x726F6373");
 /* MITIGATED */
label_2c7934:
    // 0x2c7934: 0x6f207365  ldr         $zero, 0x7365($t9)
    ctx->pc = 0x2c7934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c7938:
    // 0x2c7938: 0x6f79206e  ldr         $t9, 0x206E($k1)
    ctx->pc = 0x2c7938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c793c:
    // 0x2c793c: 0x63207275  daddi       $zero, $t9, 0x7275
    ctx->pc = 0x2c793cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c7940:
    // 0x2c7940: 0x6f626d6f  ldr         $v0, 0x6D6F($k1)
    ctx->pc = 0x2c7940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28015); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c7944:
    // 0x2c7944: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c7944u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7948:
    // 0x2c7948: 0x0  nop
    ctx->pc = 0x2c7948u;
    // NOP
label_2c794c:
    // 0x2c794c: 0x0  nop
    ctx->pc = 0x2c794cu;
    // NOP
label_2c7950:
    // 0x2c7950: 0x206e6143  addi        $t6, $v1, 0x6143
    ctx->pc = 0x2c7950u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24899, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c7954:
    // 0x2c7954: 0x6f6f6873  ldr         $t7, 0x6873($k1)
    ctx->pc = 0x2c7954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26739); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7958:
    // 0x2c7958: 0x696c2074  ldl         $t4, 0x2074($t3)
    ctx->pc = 0x2c7958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c795c:
    // 0x2c795c: 0x69746867  ldl         $s4, 0x6867($t3)
    ctx->pc = 0x2c795cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26727); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c7960:
    // 0x2c7960: 0x6120676e  daddi       $zero, $t1, 0x676E
    ctx->pc = 0x2c7960u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)26478; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c7964:
    // 0x2c7964: 0x776f7272  .word       0x776F7272                   # INVALID     $k1, $t7, 0x7272 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7964u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7964 raw=0x776F7272");
 /* MITIGATED */
label_2c7968:
    // 0x2c7968: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c7968u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c796c:
    // 0x2c796c: 0x0  nop
    ctx->pc = 0x2c796cu;
    // NOP
label_2c7970:
    // 0x2c7970: 0x65706d49  daddiu      $s0, $t3, 0x6D49
    ctx->pc = 0x2c7970u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27977);
label_2c7974:
    // 0x2c7974: 0x6c616972  ldr         $at, 0x6972($v1)
    ctx->pc = 0x2c7974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7978:
    // 0x2c7978: 0x61655320  daddi       $a1, $t3, 0x5320
    ctx->pc = 0x2c7978u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c797c:
    // 0x2c797c: 0x6168206c  daddi       $t0, $t3, 0x206C
    ctx->pc = 0x2c797cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c7980:
    // 0x2c7980: 0x77742073  .word       0x77742073                   # INVALID     $k1, $s4, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7980u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7980 raw=0x77742073");
 /* MITIGATED */
label_2c7984:
    // 0x2c7984: 0x20656369  addi        $a1, $v1, 0x6369
    ctx->pc = 0x2c7984u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25449, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c7988:
    // 0x2c7988: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2c7988u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c798c:
    // 0x2c798c: 0x65666665  daddiu      $a2, $t3, 0x6665
    ctx->pc = 0x2c798cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26213);
label_2c7990:
    // 0x2c7990: 0x7463  .word       0x00007463                   # negu        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7990u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7994:
    // 0x2c7994: 0x0  nop
    ctx->pc = 0x2c7994u;
    // NOP
label_2c7998:
    // 0x2c7998: 0x0  nop
    ctx->pc = 0x2c7998u;
    // NOP
label_2c799c:
    // 0x2c799c: 0x0  nop
    ctx->pc = 0x2c799cu;
    // NOP
label_2c79a0:
    // 0x2c79a0: 0x776f6853  .word       0x776F6853                   # INVALID     $k1, $t7, 0x6853 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c79a0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C79A0 raw=0x776F6853");
 /* MITIGATED */
label_2c79a4:
    // 0x2c79a4: 0x68742073  ldl         $s4, 0x2073($v1)
    ctx->pc = 0x2c79a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c79a8:
    // 0x2c79a8: 0x6f702065  ldr         $s0, 0x2065($k1)
    ctx->pc = 0x2c79a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2c79ac:
    // 0x2c79ac: 0x69746973  ldl         $s4, 0x6973($t3)
    ctx->pc = 0x2c79acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c79b0:
    // 0x2c79b0: 0x6f206e6f  ldr         $zero, 0x6E6F($t9)
    ctx->pc = 0x2c79b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c79b4:
    // 0x2c79b4: 0x68742066  ldl         $s4, 0x2066($v1)
    ctx->pc = 0x2c79b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c79b8:
    // 0x2c79b8: 0x616c2065  daddi       $t4, $t3, 0x2065
    ctx->pc = 0x2c79b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c79bc:
    // 0x2c79bc: 0x68207473  ldl         $zero, 0x7473($at)
    ctx->pc = 0x2c79bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2c79c0:
    // 0x2c79c0: 0x6573726f  daddiu      $s3, $t3, 0x726F
    ctx->pc = 0x2c79c0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2c79c4:
    // 0x2c79c4: 0x756f7920  .word       0x756F7920                   # INVALID     $t3, $t7, 0x7920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c79c4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C79C4 raw=0x756F7920");
 /* MITIGATED */
label_2c79c8:
    // 0x2c79c8: 0x646f7220  daddiu      $t7, $v1, 0x7220
    ctx->pc = 0x2c79c8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29216);
label_2c79cc:
    // 0x2c79cc: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c79ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c79d0:
    // 0x2c79d0: 0x72636e49  .word       0x72636E49                   # INVALID     $s3, $v1, 0x6E49 # 00000000 <InstrIdType: R5900_MMI_2>
    ctx->pc = 0x2c79d0u;
//     throw std::runtime_error("Unhandled MMI2 instruction: function 0x19 at 0x2C79D0 raw=0x72636E49");
 /* MITIGATED */
label_2c79d4:
    // 0x2c79d4: 0x65736165  daddiu      $s3, $t3, 0x6165
    ctx->pc = 0x2c79d4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_2c79d8:
    // 0x2c79d8: 0x68742073  ldl         $s4, 0x2073($v1)
    ctx->pc = 0x2c79d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c79dc:
    // 0x2c79dc: 0x61722065  daddi       $s2, $t3, 0x2065
    ctx->pc = 0x2c79dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c79e0:
    // 0x2c79e0: 0x61206574  daddi       $zero, $t1, 0x6574
    ctx->pc = 0x2c79e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25972; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c79e4:
    // 0x2c79e4: 0x68772074  ldl         $s7, 0x2074($v1)
    ctx->pc = 0x2c79e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_2c79e8:
    // 0x2c79e8: 0x20686369  addi        $t0, $v1, 0x6369
    ctx->pc = 0x2c79e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25449, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c79ec:
    // 0x2c79ec: 0x72756f79  .word       0x72756F79                   # INVALID     $s3, $s5, 0x6F79 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c79ecu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x2C79EC raw=0x72756F79");
 /* MITIGATED */
label_2c79f0:
    // 0x2c79f0: 0x696e7520  ldl         $t6, 0x7520($t3)
    ctx->pc = 0x2c79f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29984); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_2c79f4:
    // 0x2c79f4: 0x20732774  addi        $s3, $v1, 0x2774
    ctx->pc = 0x2c79f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10100, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c79f8:
    // 0x2c79f8: 0x61726f6d  daddi       $s2, $t3, 0x6F6D
    ctx->pc = 0x2c79f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28525; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c79fc:
    // 0x2c79fc: 0x6920656c  ldl         $zero, 0x656C($t1)
    ctx->pc = 0x2c79fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2c7a00:
    // 0x2c7a00: 0x6572636e  daddiu      $s2, $t3, 0x636E
    ctx->pc = 0x2c7a00u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25454);
label_2c7a04:
    // 0x2c7a04: 0x73657361  .word       0x73657361                   # maddu1      $t6, $k1, $a1 # 00000340 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7a04u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c7a08:
    // 0x2c7a08: 0x0  nop
    ctx->pc = 0x2c7a08u;
    // NOP
label_2c7a0c:
    // 0x2c7a0c: 0x0  nop
    ctx->pc = 0x2c7a0cu;
    // NOP
label_2c7a10:
    // 0x2c7a10: 0x20746547  addi        $s4, $v1, 0x6547
    ctx->pc = 0x2c7a10u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25927, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c7a14:
    // 0x2c7a14: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2c7a14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c7a18:
    // 0x2c7a18: 0x61747441  daddi       $s4, $t3, 0x7441
    ctx->pc = 0x2c7a18u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29761; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c7a1c:
    // 0x2c7a1c: 0x78206b63  lq          $zero, 0x6B63($at)
    ctx->pc = 0x2c7a1cu;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 1), 27491)));
label_2c7a20:
    // 0x2c7a20: 0x74692032  .word       0x74692032                   # INVALID     $v1, $t1, 0x2032 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7a20u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7A20 raw=0x74692032");
 /* MITIGATED */
label_2c7a24:
    // 0x2c7a24: 0x61206d65  daddi       $zero, $t1, 0x6D65
    ctx->pc = 0x2c7a24u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)28005; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c7a28:
    // 0x2c7a28: 0x6520646e  daddiu      $zero, $t1, 0x646E
    ctx->pc = 0x2c7a28u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25710);
label_2c7a2c:
    // 0x2c7a2c: 0x206e6576  addi        $t6, $v1, 0x6576
    ctx->pc = 0x2c7a2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25974, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2c7a30:
    // 0x2c7a30: 0x72617567  .word       0x72617567                   # INVALID     $s3, $at, 0x7567 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7a30u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x2C7A30 raw=0x72617567");
 /* MITIGATED */
label_2c7a34:
    // 0x2c7a34: 0x676e6964  daddiu      $t6, $k1, 0x6964
    ctx->pc = 0x2c7a34u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26980);
label_2c7a38:
    // 0x2c7a38: 0x656e6520  daddiu      $t6, $t3, 0x6520
    ctx->pc = 0x2c7a38u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25888);
label_2c7a3c:
    // 0x2c7a3c: 0x7365696d  .word       0x7365696D                   # INVALID     $k1, $a1, 0x696D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7a3cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2C7A3C raw=0x7365696D");
 /* MITIGATED */
label_2c7a40:
    // 0x2c7a40: 0x6b617420  ldl         $at, 0x7420($k1)
    ctx->pc = 0x2c7a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c7a44:
    // 0x2c7a44: 0x61642065  daddi       $a0, $t3, 0x2065
    ctx->pc = 0x2c7a44u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_2c7a48:
    // 0x2c7a48: 0x6567616d  daddiu      $a3, $t3, 0x616D
    ctx->pc = 0x2c7a48u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24941);
label_2c7a4c:
    // 0x2c7a4c: 0x0  nop
    ctx->pc = 0x2c7a4cu;
    // NOP
label_2c7a50:
    // 0x2c7a50: 0x6f747541  ldr         $s4, 0x7541($k1)
    ctx->pc = 0x2c7a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30017); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c7a54:
    // 0x2c7a54: 0x6974616d  ldl         $s4, 0x616D($t3)
    ctx->pc = 0x2c7a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c7a58:
    // 0x2c7a58: 0x6c6c6163  ldr         $t4, 0x6163($v1)
    ctx->pc = 0x2c7a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c7a5c:
    // 0x2c7a5c: 0x65702079  daddiu      $s0, $t3, 0x2079
    ctx->pc = 0x2c7a5cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8313);
label_2c7a60:
    // 0x2c7a60: 0x726f6672  .word       0x726F6672                   # INVALID     $s3, $t7, 0x6672 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7a60u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2C7A60 raw=0x726F6672");
 /* MITIGATED */
label_2c7a64:
    // 0x2c7a64: 0x6874206d  ldl         $s4, 0x206D($v1)
    ctx->pc = 0x2c7a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c7a68:
    // 0x2c7a68: 0x696d2065  ldl         $t5, 0x2065($t3)
    ctx->pc = 0x2c7a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2c7a6c:
    // 0x2c7a6c: 0x69612d64  ldl         $at, 0x2D64($t3)
    ctx->pc = 0x2c7a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 11620); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c7a70:
    // 0x2c7a70: 0x76652072  .word       0x76652072                   # INVALID     $s3, $a1, 0x2072 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7a70u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7A70 raw=0x76652072");
 /* MITIGATED */
label_2c7a74:
    // 0x2c7a74: 0x656461  .word       0x00656461                   # addu        $t4, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7a74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c7a78:
    // 0x2c7a78: 0x0  nop
    ctx->pc = 0x2c7a78u;
    // NOP
label_2c7a7c:
    // 0x2c7a7c: 0x0  nop
    ctx->pc = 0x2c7a7cu;
    // NOP
label_2c7a80:
    // 0x2c7a80: 0x6e657645  ldr         $a1, 0x7645($s3)
    ctx->pc = 0x2c7a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30277); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c7a84:
    // 0x2c7a84: 0x61756720  daddi       $s5, $t3, 0x6720
    ctx->pc = 0x2c7a84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26400; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c7a88:
    // 0x2c7a88: 0x6e696472  ldr         $t1, 0x6472($s3)
    ctx->pc = 0x2c7a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c7a8c:
    // 0x2c7a8c: 0x6e652067  ldr         $a1, 0x2067($s3)
    ctx->pc = 0x2c7a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2c7a90:
    // 0x2c7a90: 0x65696d65  daddiu      $t1, $t3, 0x6D65
    ctx->pc = 0x2c7a90u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28005);
label_2c7a94:
    // 0x2c7a94: 0x61742073  daddi       $s4, $t3, 0x2073
    ctx->pc = 0x2c7a94u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8307; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c7a98:
    // 0x2c7a98: 0x6420656b  daddiu      $zero, $at, 0x656B
    ctx->pc = 0x2c7a98u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25963);
label_2c7a9c:
    // 0x2c7a9c: 0x67616d61  daddiu      $at, $k1, 0x6D61
    ctx->pc = 0x2c7a9cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28001);
label_2c7aa0:
    // 0x2c7aa0: 0x75642065  .word       0x75642065                   # INVALID     $t3, $a0, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7aa0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7AA0 raw=0x75642065");
 /* MITIGATED */
label_2c7aa4:
    // 0x2c7aa4: 0x676e6972  daddiu      $t6, $k1, 0x6972
    ctx->pc = 0x2c7aa4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26994);
label_2c7aa8:
    // 0x2c7aa8: 0x756f7920  .word       0x756F7920                   # INVALID     $t3, $t7, 0x7920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7aa8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7AA8 raw=0x756F7920");
 /* MITIGATED */
label_2c7aac:
    // 0x2c7aac: 0x754d2072  .word       0x754D2072                   # INVALID     $t2, $t5, 0x2072 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7aacu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7AAC raw=0x754D2072");
 /* MITIGATED */
label_2c7ab0:
    // 0x2c7ab0: 0x20756f73  addi        $s5, $v1, 0x6F73
    ctx->pc = 0x2c7ab0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28531, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2c7ab4:
    // 0x2c7ab4: 0x61747461  daddi       $s4, $t3, 0x7461
    ctx->pc = 0x2c7ab4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29793; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c7ab8:
    // 0x2c7ab8: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7ab8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7abc:
    // 0x2c7abc: 0x0  nop
    ctx->pc = 0x2c7abcu;
    // NOP
label_2c7ac0:
    // 0x2c7ac0: 0x76657250  .word       0x76657250                   # INVALID     $s3, $a1, 0x7250 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7ac0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7AC0 raw=0x76657250");
 /* MITIGATED */
label_2c7ac4:
    // 0x2c7ac4: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7ac4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C7AC4 raw=0x73746E65");
 /* MITIGATED */
label_2c7ac8:
    // 0x2c7ac8: 0x74656720  .word       0x74656720                   # INVALID     $v1, $a1, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7ac8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7AC8 raw=0x74656720");
 /* MITIGATED */
label_2c7acc:
    // 0x2c7acc: 0x676e6974  daddiu      $t6, $k1, 0x6974
    ctx->pc = 0x2c7accu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26996);
label_2c7ad0:
    // 0x2c7ad0: 0x6f6e6b20  ldr         $t6, 0x6B20($k1)
    ctx->pc = 0x2c7ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c7ad4:
    // 0x2c7ad4: 0x64656b63  daddiu      $a1, $v1, 0x6B63
    ctx->pc = 0x2c7ad4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27491);
label_2c7ad8:
    // 0x2c7ad8: 0x63616220  daddi       $at, $k1, 0x6220
    ctx->pc = 0x2c7ad8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25120; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c7adc:
    // 0x2c7adc: 0x6877206b  ldl         $s7, 0x206B($v1)
    ctx->pc = 0x2c7adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    ctx->pc = 0x2c7ae0u;
    return;
}

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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part189(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f74c8u: goto label_1f74c8;
        case 0x1f74ccu: goto label_1f74cc;
        case 0x1f74d0u: goto label_1f74d0;
        case 0x1f74d4u: goto label_1f74d4;
        case 0x1f74d8u: goto label_1f74d8;
        case 0x1f74dcu: goto label_1f74dc;
        case 0x1f74e0u: goto label_1f74e0;
        case 0x1f74e4u: goto label_1f74e4;
        case 0x1f74e8u: goto label_1f74e8;
        case 0x1f74ecu: goto label_1f74ec;
        case 0x1f74f0u: goto label_1f74f0;
        case 0x1f74f4u: goto label_1f74f4;
        case 0x1f74f8u: goto label_1f74f8;
        case 0x1f74fcu: goto label_1f74fc;
        case 0x1f7500u: goto label_1f7500;
        case 0x1f7504u: goto label_1f7504;
        case 0x1f7508u: goto label_1f7508;
        case 0x1f750cu: goto label_1f750c;
        case 0x1f7510u: goto label_1f7510;
        case 0x1f7514u: goto label_1f7514;
        case 0x1f7518u: goto label_1f7518;
        case 0x1f751cu: goto label_1f751c;
        case 0x1f7520u: goto label_1f7520;
        case 0x1f7524u: goto label_1f7524;
        case 0x1f7528u: goto label_1f7528;
        case 0x1f752cu: goto label_1f752c;
        case 0x1f7530u: goto label_1f7530;
        case 0x1f7534u: goto label_1f7534;
        case 0x1f7538u: goto label_1f7538;
        case 0x1f753cu: goto label_1f753c;
        case 0x1f7540u: goto label_1f7540;
        case 0x1f7544u: goto label_1f7544;
        case 0x1f7548u: goto label_1f7548;
        case 0x1f754cu: goto label_1f754c;
        case 0x1f7550u: goto label_1f7550;
        case 0x1f7554u: goto label_1f7554;
        case 0x1f7558u: goto label_1f7558;
        case 0x1f755cu: goto label_1f755c;
        case 0x1f7560u: goto label_1f7560;
        case 0x1f7564u: goto label_1f7564;
        case 0x1f7568u: goto label_1f7568;
        case 0x1f756cu: goto label_1f756c;
        case 0x1f7570u: goto label_1f7570;
        case 0x1f7574u: goto label_1f7574;
        case 0x1f7578u: goto label_1f7578;
        case 0x1f757cu: goto label_1f757c;
        case 0x1f7580u: goto label_1f7580;
        case 0x1f7584u: goto label_1f7584;
        case 0x1f7588u: goto label_1f7588;
        case 0x1f758cu: goto label_1f758c;
        case 0x1f7590u: goto label_1f7590;
        case 0x1f7594u: goto label_1f7594;
        case 0x1f7598u: goto label_1f7598;
        case 0x1f759cu: goto label_1f759c;
        case 0x1f75a0u: goto label_1f75a0;
        case 0x1f75a4u: goto label_1f75a4;
        case 0x1f75a8u: goto label_1f75a8;
        case 0x1f75acu: goto label_1f75ac;
        case 0x1f75b0u: goto label_1f75b0;
        case 0x1f75b4u: goto label_1f75b4;
        case 0x1f75b8u: goto label_1f75b8;
        case 0x1f75bcu: goto label_1f75bc;
        case 0x1f75c0u: goto label_1f75c0;
        case 0x1f75c4u: goto label_1f75c4;
        case 0x1f75c8u: goto label_1f75c8;
        case 0x1f75ccu: goto label_1f75cc;
        case 0x1f75d0u: goto label_1f75d0;
        case 0x1f75d4u: goto label_1f75d4;
        case 0x1f75d8u: goto label_1f75d8;
        case 0x1f75dcu: goto label_1f75dc;
        case 0x1f75e0u: goto label_1f75e0;
        case 0x1f75e4u: goto label_1f75e4;
        case 0x1f75e8u: goto label_1f75e8;
        case 0x1f75ecu: goto label_1f75ec;
        case 0x1f75f0u: goto label_1f75f0;
        case 0x1f75f4u: goto label_1f75f4;
        case 0x1f75f8u: goto label_1f75f8;
        case 0x1f75fcu: goto label_1f75fc;
        case 0x1f7600u: goto label_1f7600;
        case 0x1f7604u: goto label_1f7604;
        case 0x1f7608u: goto label_1f7608;
        case 0x1f760cu: goto label_1f760c;
        case 0x1f7610u: goto label_1f7610;
        case 0x1f7614u: goto label_1f7614;
        case 0x1f7618u: goto label_1f7618;
        case 0x1f761cu: goto label_1f761c;
        case 0x1f7620u: goto label_1f7620;
        case 0x1f7624u: goto label_1f7624;
        case 0x1f7628u: goto label_1f7628;
        case 0x1f762cu: goto label_1f762c;
        case 0x1f7630u: goto label_1f7630;
        case 0x1f7634u: goto label_1f7634;
        case 0x1f7638u: goto label_1f7638;
        case 0x1f763cu: goto label_1f763c;
        case 0x1f7640u: goto label_1f7640;
        case 0x1f7644u: goto label_1f7644;
        case 0x1f7648u: goto label_1f7648;
        case 0x1f764cu: goto label_1f764c;
        case 0x1f7650u: goto label_1f7650;
        case 0x1f7654u: goto label_1f7654;
        case 0x1f7658u: goto label_1f7658;
        case 0x1f765cu: goto label_1f765c;
        case 0x1f7660u: goto label_1f7660;
        case 0x1f7664u: goto label_1f7664;
        case 0x1f7668u: goto label_1f7668;
        case 0x1f766cu: goto label_1f766c;
        case 0x1f7670u: goto label_1f7670;
        case 0x1f7674u: goto label_1f7674;
        case 0x1f7678u: goto label_1f7678;
        case 0x1f767cu: goto label_1f767c;
        case 0x1f7680u: goto label_1f7680;
        case 0x1f7684u: goto label_1f7684;
        case 0x1f7688u: goto label_1f7688;
        case 0x1f768cu: goto label_1f768c;
        case 0x1f7690u: goto label_1f7690;
        case 0x1f7694u: goto label_1f7694;
        case 0x1f7698u: goto label_1f7698;
        case 0x1f769cu: goto label_1f769c;
        case 0x1f76a0u: goto label_1f76a0;
        case 0x1f76a4u: goto label_1f76a4;
        case 0x1f76a8u: goto label_1f76a8;
        case 0x1f76acu: goto label_1f76ac;
        case 0x1f76b0u: goto label_1f76b0;
        case 0x1f76b4u: goto label_1f76b4;
        case 0x1f76b8u: goto label_1f76b8;
        case 0x1f76bcu: goto label_1f76bc;
        case 0x1f76c0u: goto label_1f76c0;
        case 0x1f76c4u: goto label_1f76c4;
        case 0x1f76c8u: goto label_1f76c8;
        case 0x1f76ccu: goto label_1f76cc;
        case 0x1f76d0u: goto label_1f76d0;
        case 0x1f76d4u: goto label_1f76d4;
        case 0x1f76d8u: goto label_1f76d8;
        case 0x1f76dcu: goto label_1f76dc;
        case 0x1f76e0u: goto label_1f76e0;
        case 0x1f76e4u: goto label_1f76e4;
        case 0x1f76e8u: goto label_1f76e8;
        case 0x1f76ecu: goto label_1f76ec;
        case 0x1f76f0u: goto label_1f76f0;
        case 0x1f76f4u: goto label_1f76f4;
        case 0x1f76f8u: goto label_1f76f8;
        case 0x1f76fcu: goto label_1f76fc;
        case 0x1f7700u: goto label_1f7700;
        case 0x1f7704u: goto label_1f7704;
        case 0x1f7708u: goto label_1f7708;
        case 0x1f770cu: goto label_1f770c;
        case 0x1f7710u: goto label_1f7710;
        case 0x1f7714u: goto label_1f7714;
        case 0x1f7718u: goto label_1f7718;
        case 0x1f771cu: goto label_1f771c;
        case 0x1f7720u: goto label_1f7720;
        case 0x1f7724u: goto label_1f7724;
        case 0x1f7728u: goto label_1f7728;
        case 0x1f772cu: goto label_1f772c;
        case 0x1f7730u: goto label_1f7730;
        case 0x1f7734u: goto label_1f7734;
        case 0x1f7738u: goto label_1f7738;
        case 0x1f773cu: goto label_1f773c;
        case 0x1f7740u: goto label_1f7740;
        case 0x1f7744u: goto label_1f7744;
        case 0x1f7748u: goto label_1f7748;
        case 0x1f774cu: goto label_1f774c;
        case 0x1f7750u: goto label_1f7750;
        case 0x1f7754u: goto label_1f7754;
        case 0x1f7758u: goto label_1f7758;
        case 0x1f775cu: goto label_1f775c;
        case 0x1f7760u: goto label_1f7760;
        case 0x1f7764u: goto label_1f7764;
        case 0x1f7768u: goto label_1f7768;
        case 0x1f776cu: goto label_1f776c;
        case 0x1f7770u: goto label_1f7770;
        case 0x1f7774u: goto label_1f7774;
        case 0x1f7778u: goto label_1f7778;
        case 0x1f777cu: goto label_1f777c;
        case 0x1f7780u: goto label_1f7780;
        case 0x1f7784u: goto label_1f7784;
        case 0x1f7788u: goto label_1f7788;
        case 0x1f778cu: goto label_1f778c;
        case 0x1f7790u: goto label_1f7790;
        case 0x1f7794u: goto label_1f7794;
        case 0x1f7798u: goto label_1f7798;
        case 0x1f779cu: goto label_1f779c;
        case 0x1f77a0u: goto label_1f77a0;
        case 0x1f77a4u: goto label_1f77a4;
        case 0x1f77a8u: goto label_1f77a8;
        case 0x1f77acu: goto label_1f77ac;
        case 0x1f77b0u: goto label_1f77b0;
        case 0x1f77b4u: goto label_1f77b4;
        case 0x1f77b8u: goto label_1f77b8;
        case 0x1f77bcu: goto label_1f77bc;
        case 0x1f77c0u: goto label_1f77c0;
        case 0x1f77c4u: goto label_1f77c4;
        case 0x1f77c8u: goto label_1f77c8;
        case 0x1f77ccu: goto label_1f77cc;
        case 0x1f77d0u: goto label_1f77d0;
        case 0x1f77d4u: goto label_1f77d4;
        case 0x1f77d8u: goto label_1f77d8;
        case 0x1f77dcu: goto label_1f77dc;
        case 0x1f77e0u: goto label_1f77e0;
        case 0x1f77e4u: goto label_1f77e4;
        case 0x1f77e8u: goto label_1f77e8;
        case 0x1f77ecu: goto label_1f77ec;
        case 0x1f77f0u: goto label_1f77f0;
        case 0x1f77f4u: goto label_1f77f4;
        case 0x1f77f8u: goto label_1f77f8;
        case 0x1f77fcu: goto label_1f77fc;
        case 0x1f7800u: goto label_1f7800;
        case 0x1f7804u: goto label_1f7804;
        case 0x1f7808u: goto label_1f7808;
        case 0x1f780cu: goto label_1f780c;
        case 0x1f7810u: goto label_1f7810;
        case 0x1f7814u: goto label_1f7814;
        case 0x1f7818u: goto label_1f7818;
        case 0x1f781cu: goto label_1f781c;
        case 0x1f7820u: goto label_1f7820;
        case 0x1f7824u: goto label_1f7824;
        case 0x1f7828u: goto label_1f7828;
        case 0x1f782cu: goto label_1f782c;
        case 0x1f7830u: goto label_1f7830;
        case 0x1f7834u: goto label_1f7834;
        case 0x1f7838u: goto label_1f7838;
        case 0x1f783cu: goto label_1f783c;
        case 0x1f7840u: goto label_1f7840;
        case 0x1f7844u: goto label_1f7844;
        case 0x1f7848u: goto label_1f7848;
        case 0x1f784cu: goto label_1f784c;
        case 0x1f7850u: goto label_1f7850;
        case 0x1f7854u: goto label_1f7854;
        case 0x1f7858u: goto label_1f7858;
        case 0x1f785cu: goto label_1f785c;
        case 0x1f7860u: goto label_1f7860;
        case 0x1f7864u: goto label_1f7864;
        case 0x1f7868u: goto label_1f7868;
        case 0x1f786cu: goto label_1f786c;
        case 0x1f7870u: goto label_1f7870;
        case 0x1f7874u: goto label_1f7874;
        case 0x1f7878u: goto label_1f7878;
        case 0x1f787cu: goto label_1f787c;
        case 0x1f7880u: goto label_1f7880;
        case 0x1f7884u: goto label_1f7884;
        case 0x1f7888u: goto label_1f7888;
        case 0x1f788cu: goto label_1f788c;
        case 0x1f7890u: goto label_1f7890;
        case 0x1f7894u: goto label_1f7894;
        case 0x1f7898u: goto label_1f7898;
        case 0x1f789cu: goto label_1f789c;
        case 0x1f78a0u: goto label_1f78a0;
        case 0x1f78a4u: goto label_1f78a4;
        case 0x1f78a8u: goto label_1f78a8;
        case 0x1f78acu: goto label_1f78ac;
        case 0x1f78b0u: goto label_1f78b0;
        case 0x1f78b4u: goto label_1f78b4;
        case 0x1f78b8u: goto label_1f78b8;
        case 0x1f78bcu: goto label_1f78bc;
        case 0x1f78c0u: goto label_1f78c0;
        case 0x1f78c4u: goto label_1f78c4;
        case 0x1f78c8u: goto label_1f78c8;
        case 0x1f78ccu: goto label_1f78cc;
        case 0x1f78d0u: goto label_1f78d0;
        case 0x1f78d4u: goto label_1f78d4;
        case 0x1f78d8u: goto label_1f78d8;
        case 0x1f78dcu: goto label_1f78dc;
        case 0x1f78e0u: goto label_1f78e0;
        case 0x1f78e4u: goto label_1f78e4;
        case 0x1f78e8u: goto label_1f78e8;
        case 0x1f78ecu: goto label_1f78ec;
        case 0x1f78f0u: goto label_1f78f0;
        case 0x1f78f4u: goto label_1f78f4;
        case 0x1f78f8u: goto label_1f78f8;
        case 0x1f78fcu: goto label_1f78fc;
        case 0x1f7900u: goto label_1f7900;
        case 0x1f7904u: goto label_1f7904;
        case 0x1f7908u: goto label_1f7908;
        case 0x1f790cu: goto label_1f790c;
        case 0x1f7910u: goto label_1f7910;
        case 0x1f7914u: goto label_1f7914;
        case 0x1f7918u: goto label_1f7918;
        case 0x1f791cu: goto label_1f791c;
        case 0x1f7920u: goto label_1f7920;
        case 0x1f7924u: goto label_1f7924;
        case 0x1f7928u: goto label_1f7928;
        case 0x1f792cu: goto label_1f792c;
        case 0x1f7930u: goto label_1f7930;
        case 0x1f7934u: goto label_1f7934;
        case 0x1f7938u: goto label_1f7938;
        case 0x1f793cu: goto label_1f793c;
        case 0x1f7940u: goto label_1f7940;
        case 0x1f7944u: goto label_1f7944;
        case 0x1f7948u: goto label_1f7948;
        case 0x1f794cu: goto label_1f794c;
        case 0x1f7950u: goto label_1f7950;
        case 0x1f7954u: goto label_1f7954;
        case 0x1f7958u: goto label_1f7958;
        case 0x1f795cu: goto label_1f795c;
        case 0x1f7960u: goto label_1f7960;
        case 0x1f7964u: goto label_1f7964;
        case 0x1f7968u: goto label_1f7968;
        case 0x1f796cu: goto label_1f796c;
        case 0x1f7970u: goto label_1f7970;
        case 0x1f7974u: goto label_1f7974;
        case 0x1f7978u: goto label_1f7978;
        case 0x1f797cu: goto label_1f797c;
        case 0x1f7980u: goto label_1f7980;
        case 0x1f7984u: goto label_1f7984;
        case 0x1f7988u: goto label_1f7988;
        case 0x1f798cu: goto label_1f798c;
        case 0x1f7990u: goto label_1f7990;
        case 0x1f7994u: goto label_1f7994;
        case 0x1f7998u: goto label_1f7998;
        case 0x1f799cu: goto label_1f799c;
        case 0x1f79a0u: goto label_1f79a0;
        case 0x1f79a4u: goto label_1f79a4;
        case 0x1f79a8u: goto label_1f79a8;
        case 0x1f79acu: goto label_1f79ac;
        case 0x1f79b0u: goto label_1f79b0;
        case 0x1f79b4u: goto label_1f79b4;
        case 0x1f79b8u: goto label_1f79b8;
        case 0x1f79bcu: goto label_1f79bc;
        case 0x1f79c0u: goto label_1f79c0;
        case 0x1f79c4u: goto label_1f79c4;
        case 0x1f79c8u: goto label_1f79c8;
        case 0x1f79ccu: goto label_1f79cc;
        case 0x1f79d0u: goto label_1f79d0;
        case 0x1f79d4u: goto label_1f79d4;
        case 0x1f79d8u: goto label_1f79d8;
        case 0x1f79dcu: goto label_1f79dc;
        case 0x1f79e0u: goto label_1f79e0;
        case 0x1f79e4u: goto label_1f79e4;
        case 0x1f79e8u: goto label_1f79e8;
        case 0x1f79ecu: goto label_1f79ec;
        case 0x1f79f0u: goto label_1f79f0;
        case 0x1f79f4u: goto label_1f79f4;
        case 0x1f79f8u: goto label_1f79f8;
        case 0x1f79fcu: goto label_1f79fc;
        case 0x1f7a00u: goto label_1f7a00;
        case 0x1f7a04u: goto label_1f7a04;
        case 0x1f7a08u: goto label_1f7a08;
        case 0x1f7a0cu: goto label_1f7a0c;
        case 0x1f7a10u: goto label_1f7a10;
        case 0x1f7a14u: goto label_1f7a14;
        case 0x1f7a18u: goto label_1f7a18;
        case 0x1f7a1cu: goto label_1f7a1c;
        case 0x1f7a20u: goto label_1f7a20;
        case 0x1f7a24u: goto label_1f7a24;
        case 0x1f7a28u: goto label_1f7a28;
        case 0x1f7a2cu: goto label_1f7a2c;
        case 0x1f7a30u: goto label_1f7a30;
        case 0x1f7a34u: goto label_1f7a34;
        case 0x1f7a38u: goto label_1f7a38;
        case 0x1f7a3cu: goto label_1f7a3c;
        case 0x1f7a40u: goto label_1f7a40;
        case 0x1f7a44u: goto label_1f7a44;
        case 0x1f7a48u: goto label_1f7a48;
        case 0x1f7a4cu: goto label_1f7a4c;
        case 0x1f7a50u: goto label_1f7a50;
        case 0x1f7a54u: goto label_1f7a54;
        case 0x1f7a58u: goto label_1f7a58;
        case 0x1f7a5cu: goto label_1f7a5c;
        case 0x1f7a60u: goto label_1f7a60;
        case 0x1f7a64u: goto label_1f7a64;
        case 0x1f7a68u: goto label_1f7a68;
        case 0x1f7a6cu: goto label_1f7a6c;
        case 0x1f7a70u: goto label_1f7a70;
        case 0x1f7a74u: goto label_1f7a74;
        case 0x1f7a78u: goto label_1f7a78;
        case 0x1f7a7cu: goto label_1f7a7c;
        case 0x1f7a80u: goto label_1f7a80;
        case 0x1f7a84u: goto label_1f7a84;
        case 0x1f7a88u: goto label_1f7a88;
        case 0x1f7a8cu: goto label_1f7a8c;
        case 0x1f7a90u: goto label_1f7a90;
        case 0x1f7a94u: goto label_1f7a94;
        case 0x1f7a98u: goto label_1f7a98;
        case 0x1f7a9cu: goto label_1f7a9c;
        case 0x1f7aa0u: goto label_1f7aa0;
        case 0x1f7aa4u: goto label_1f7aa4;
        case 0x1f7aa8u: goto label_1f7aa8;
        case 0x1f7aacu: goto label_1f7aac;
        case 0x1f7ab0u: goto label_1f7ab0;
        case 0x1f7ab4u: goto label_1f7ab4;
        case 0x1f7ab8u: goto label_1f7ab8;
        case 0x1f7abcu: goto label_1f7abc;
        case 0x1f7ac0u: goto label_1f7ac0;
        case 0x1f7ac4u: goto label_1f7ac4;
        case 0x1f7ac8u: goto label_1f7ac8;
        case 0x1f7accu: goto label_1f7acc;
        case 0x1f7ad0u: goto label_1f7ad0;
        case 0x1f7ad4u: goto label_1f7ad4;
        case 0x1f7ad8u: goto label_1f7ad8;
        case 0x1f7adcu: goto label_1f7adc;
        case 0x1f7ae0u: goto label_1f7ae0;
        case 0x1f7ae4u: goto label_1f7ae4;
        case 0x1f7ae8u: goto label_1f7ae8;
        case 0x1f7aecu: goto label_1f7aec;
        case 0x1f7af0u: goto label_1f7af0;
        case 0x1f7af4u: goto label_1f7af4;
        case 0x1f7af8u: goto label_1f7af8;
        case 0x1f7afcu: goto label_1f7afc;
        case 0x1f7b00u: goto label_1f7b00;
        case 0x1f7b04u: goto label_1f7b04;
        case 0x1f7b08u: goto label_1f7b08;
        case 0x1f7b0cu: goto label_1f7b0c;
        case 0x1f7b10u: goto label_1f7b10;
        case 0x1f7b14u: goto label_1f7b14;
        case 0x1f7b18u: goto label_1f7b18;
        case 0x1f7b1cu: goto label_1f7b1c;
        case 0x1f7b20u: goto label_1f7b20;
        case 0x1f7b24u: goto label_1f7b24;
        case 0x1f7b28u: goto label_1f7b28;
        case 0x1f7b2cu: goto label_1f7b2c;
        case 0x1f7b30u: goto label_1f7b30;
        case 0x1f7b34u: goto label_1f7b34;
        case 0x1f7b38u: goto label_1f7b38;
        case 0x1f7b3cu: goto label_1f7b3c;
        case 0x1f7b40u: goto label_1f7b40;
        case 0x1f7b44u: goto label_1f7b44;
        case 0x1f7b48u: goto label_1f7b48;
        case 0x1f7b4cu: goto label_1f7b4c;
        case 0x1f7b50u: goto label_1f7b50;
        case 0x1f7b54u: goto label_1f7b54;
        case 0x1f7b58u: goto label_1f7b58;
        case 0x1f7b5cu: goto label_1f7b5c;
        case 0x1f7b60u: goto label_1f7b60;
        case 0x1f7b64u: goto label_1f7b64;
        case 0x1f7b68u: goto label_1f7b68;
        case 0x1f7b6cu: goto label_1f7b6c;
        case 0x1f7b70u: goto label_1f7b70;
        case 0x1f7b74u: goto label_1f7b74;
        case 0x1f7b78u: goto label_1f7b78;
        case 0x1f7b7cu: goto label_1f7b7c;
        case 0x1f7b80u: goto label_1f7b80;
        case 0x1f7b84u: goto label_1f7b84;
        case 0x1f7b88u: goto label_1f7b88;
        case 0x1f7b8cu: goto label_1f7b8c;
        case 0x1f7b90u: goto label_1f7b90;
        case 0x1f7b94u: goto label_1f7b94;
        case 0x1f7b98u: goto label_1f7b98;
        case 0x1f7b9cu: goto label_1f7b9c;
        case 0x1f7ba0u: goto label_1f7ba0;
        case 0x1f7ba4u: goto label_1f7ba4;
        case 0x1f7ba8u: goto label_1f7ba8;
        case 0x1f7bacu: goto label_1f7bac;
        case 0x1f7bb0u: goto label_1f7bb0;
        case 0x1f7bb4u: goto label_1f7bb4;
        case 0x1f7bb8u: goto label_1f7bb8;
        case 0x1f7bbcu: goto label_1f7bbc;
        case 0x1f7bc0u: goto label_1f7bc0;
        case 0x1f7bc4u: goto label_1f7bc4;
        case 0x1f7bc8u: goto label_1f7bc8;
        case 0x1f7bccu: goto label_1f7bcc;
        case 0x1f7bd0u: goto label_1f7bd0;
        case 0x1f7bd4u: goto label_1f7bd4;
        case 0x1f7bd8u: goto label_1f7bd8;
        case 0x1f7bdcu: goto label_1f7bdc;
        case 0x1f7be0u: goto label_1f7be0;
        case 0x1f7be4u: goto label_1f7be4;
        case 0x1f7be8u: goto label_1f7be8;
        case 0x1f7becu: goto label_1f7bec;
        case 0x1f7bf0u: goto label_1f7bf0;
        case 0x1f7bf4u: goto label_1f7bf4;
        case 0x1f7bf8u: goto label_1f7bf8;
        case 0x1f7bfcu: goto label_1f7bfc;
        case 0x1f7c00u: goto label_1f7c00;
        case 0x1f7c04u: goto label_1f7c04;
        case 0x1f7c08u: goto label_1f7c08;
        case 0x1f7c0cu: goto label_1f7c0c;
        case 0x1f7c10u: goto label_1f7c10;
        case 0x1f7c14u: goto label_1f7c14;
        case 0x1f7c18u: goto label_1f7c18;
        case 0x1f7c1cu: goto label_1f7c1c;
        case 0x1f7c20u: goto label_1f7c20;
        case 0x1f7c24u: goto label_1f7c24;
        case 0x1f7c28u: goto label_1f7c28;
        case 0x1f7c2cu: goto label_1f7c2c;
        case 0x1f7c30u: goto label_1f7c30;
        case 0x1f7c34u: goto label_1f7c34;
        case 0x1f7c38u: goto label_1f7c38;
        case 0x1f7c3cu: goto label_1f7c3c;
        case 0x1f7c40u: goto label_1f7c40;
        case 0x1f7c44u: goto label_1f7c44;
        case 0x1f7c48u: goto label_1f7c48;
        case 0x1f7c4cu: goto label_1f7c4c;
        case 0x1f7c50u: goto label_1f7c50;
        case 0x1f7c54u: goto label_1f7c54;
        case 0x1f7c58u: goto label_1f7c58;
        case 0x1f7c5cu: goto label_1f7c5c;
        case 0x1f7c60u: goto label_1f7c60;
        case 0x1f7c64u: goto label_1f7c64;
        case 0x1f7c68u: goto label_1f7c68;
        case 0x1f7c6cu: goto label_1f7c6c;
        case 0x1f7c70u: goto label_1f7c70;
        case 0x1f7c74u: goto label_1f7c74;
        case 0x1f7c78u: goto label_1f7c78;
        case 0x1f7c7cu: goto label_1f7c7c;
        case 0x1f7c80u: goto label_1f7c80;
        case 0x1f7c84u: goto label_1f7c84;
        case 0x1f7c88u: goto label_1f7c88;
        case 0x1f7c8cu: goto label_1f7c8c;
        case 0x1f7c90u: goto label_1f7c90;
        case 0x1f7c94u: goto label_1f7c94;
        default: return;
    }

label_1f74c8:
    // 0x1f74c8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1f74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1f74cc:
    // 0x1f74cc: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f74d0:
    // 0x1f74d0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f74d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f74d4:
    // 0x1f74d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f74d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f74d8:
    // 0x1f74d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1f74dc:
    if (ctx->pc == 0x1F74DCu) {
        ctx->pc = 0x1F74E0u;
        goto label_1f74e0;
    }
    ctx->pc = 0x1F74D8u;
    {
        const bool branch_taken_0x1f74d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f74d8) {
            ctx->pc = 0x1F74FCu;
            goto label_1f74fc;
        }
    }
    ctx->pc = 0x1F74E0u;
label_1f74e0:
    // 0x1f74e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f74e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f74e4:
    // 0x1f74e4: 0xc05b420  jal         func_16D080
label_1f74e8:
    if (ctx->pc == 0x1F74E8u) {
        ctx->pc = 0x1F74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74E4u;
        // 0x1f74e8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F74ECu;
        goto label_1f74ec;
    }
    ctx->pc = 0x1F74E4u;
    SET_GPR_U32(ctx, 31, 0x1F74ECu);
    ctx->pc = 0x1F74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F74E4u;
    // 0x1f74e8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F74E4u, 0x1F74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74ECu;
label_1f74ec:
    // 0x1f74ec: 0xc078078  jal         func_1E01E0
label_1f74f0:
    if (ctx->pc == 0x1F74F0u) {
        ctx->pc = 0x1F74F4u;
        goto label_1f74f4;
    }
    ctx->pc = 0x1F74ECu;
    SET_GPR_U32(ctx, 31, 0x1F74F4u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1F74F4u;
label_1f74f4:
    // 0x1f74f4: 0x10000038  b           . + 4 + (0x38 << 2)
label_1f74f8:
    if (ctx->pc == 0x1F74F8u) {
        ctx->pc = 0x1F74FCu;
        goto label_1f74fc;
    }
    ctx->pc = 0x1F74F4u;
    {
        const bool branch_taken_0x1f74f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f74f4) {
            ctx->pc = 0x1F75D8u;
            goto label_1f75d8;
        }
    }
    ctx->pc = 0x1F74FCu;
label_1f74fc:
    // 0x1f74fc: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1f74fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1f7500:
    // 0x1f7500: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f7500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f7504:
    // 0x1f7504: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1f7504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1f7508:
    // 0x1f7508: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f7508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f750c:
    // 0x1f750c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f7510:
    if (ctx->pc == 0x1F7510u) {
        ctx->pc = 0x1F7514u;
        goto label_1f7514;
    }
    ctx->pc = 0x1F750Cu;
    {
        const bool branch_taken_0x1f750c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f750c) {
            ctx->pc = 0x1F753Cu;
            goto label_1f753c;
        }
    }
    ctx->pc = 0x1F7514u;
label_1f7514:
    // 0x1f7514: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7518:
    // 0x1f7518: 0xc05b420  jal         func_16D080
label_1f751c:
    if (ctx->pc == 0x1F751Cu) {
        ctx->pc = 0x1F751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7518u;
        // 0x1f751c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7520u;
        goto label_1f7520;
    }
    ctx->pc = 0x1F7518u;
    SET_GPR_U32(ctx, 31, 0x1F7520u);
    ctx->pc = 0x1F751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7518u;
    // 0x1f751c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F7518u, 0x1F7520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7520u;
label_1f7520:
    // 0x1f7520: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1f7524:
    if (ctx->pc == 0x1F7524u) {
        ctx->pc = 0x1F7528u;
        goto label_1f7528;
    }
    ctx->pc = 0x1F7520u;
    {
        const bool branch_taken_0x1f7520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7520) {
            ctx->pc = 0x1F7530u;
            goto label_1f7530;
        }
    }
    ctx->pc = 0x1F7528u;
label_1f7528:
    // 0x1f7528: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f752c:
    if (ctx->pc == 0x1F752Cu) {
        ctx->pc = 0x1F752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7528u;
        // 0x1f752c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7530u;
        goto label_1f7530;
    }
    ctx->pc = 0x1F7528u;
    {
        const bool branch_taken_0x1f7528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7528u;
        // 0x1f752c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7528) {
            ctx->pc = 0x1F7534u;
            goto label_1f7534;
        }
    }
    ctx->pc = 0x1F7530u;
label_1f7530:
    // 0x1f7530: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1f7530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1f7534:
    // 0x1f7534: 0x10000011  b           . + 4 + (0x11 << 2)
label_1f7538:
    if (ctx->pc == 0x1F7538u) {
        ctx->pc = 0x1F753Cu;
        goto label_1f753c;
    }
    ctx->pc = 0x1F7534u;
    {
        const bool branch_taken_0x1f7534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7534) {
            ctx->pc = 0x1F757Cu;
            goto label_1f757c;
        }
    }
    ctx->pc = 0x1F753Cu;
label_1f753c:
    // 0x1f753c: 0x0  nop
    ctx->pc = 0x1f753cu;
    // NOP
label_1f7540:
    // 0x1f7540: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1f7540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f7544:
    // 0x1f7544: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1f7544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1f7548:
    // 0x1f7548: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1f7548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1f754c:
    // 0x1f754c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f754cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f7550:
    // 0x1f7550: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f7554:
    if (ctx->pc == 0x1F7554u) {
        ctx->pc = 0x1F7558u;
        goto label_1f7558;
    }
    ctx->pc = 0x1F7550u;
    {
        const bool branch_taken_0x1f7550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7550) {
            ctx->pc = 0x1F757Cu;
            goto label_1f757c;
        }
    }
    ctx->pc = 0x1F7558u;
label_1f7558:
    // 0x1f7558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f755c:
    // 0x1f755c: 0xc05b420  jal         func_16D080
label_1f7560:
    if (ctx->pc == 0x1F7560u) {
        ctx->pc = 0x1F7560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F755Cu;
        // 0x1f7560: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7564u;
        goto label_1f7564;
    }
    ctx->pc = 0x1F755Cu;
    SET_GPR_U32(ctx, 31, 0x1F7564u);
    ctx->pc = 0x1F7560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F755Cu;
    // 0x1f7560: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F755Cu, 0x1F7564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7564u;
label_1f7564:
    // 0x1f7564: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7568:
    // 0x1f7568: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1f756c:
    if (ctx->pc == 0x1F756Cu) {
        ctx->pc = 0x1F7570u;
        goto label_1f7570;
    }
    ctx->pc = 0x1F7568u;
    {
        const bool branch_taken_0x1f7568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7568) {
            ctx->pc = 0x1F7578u;
            goto label_1f7578;
        }
    }
    ctx->pc = 0x1F7570u;
label_1f7570:
    // 0x1f7570: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f7574:
    if (ctx->pc == 0x1F7574u) {
        ctx->pc = 0x1F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7570u;
        // 0x1f7574: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7578u;
        goto label_1f7578;
    }
    ctx->pc = 0x1F7570u;
    {
        const bool branch_taken_0x1f7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7570u;
        // 0x1f7574: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7570) {
            ctx->pc = 0x1F757Cu;
            goto label_1f757c;
        }
    }
    ctx->pc = 0x1F7578u;
label_1f7578:
    // 0x1f7578: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f7578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f757c:
    // 0x1f757c: 0x0  nop
    ctx->pc = 0x1f757cu;
    // NOP
label_1f7580:
    // 0x1f7580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7584:
    // 0x1f7584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7588:
    // 0x1f7588: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x1f7588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_1f758c:
    // 0x1f758c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7590:
    // 0x1f7590: 0x24846f10  addiu       $a0, $a0, 0x6F10
    ctx->pc = 0x1f7590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28432));
label_1f7594:
    // 0x1f7594: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1f7594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f7598:
    // 0x1f7598: 0x14d00004  bne         $a2, $s0, . + 4 + (0x4 << 2)
label_1f759c:
    if (ctx->pc == 0x1F759Cu) {
        ctx->pc = 0x1F759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7598u;
        // 0x1f759c: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75A0u;
        goto label_1f75a0;
    }
    ctx->pc = 0x1F7598u;
    {
        const bool branch_taken_0x1f7598 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 16));
        ctx->pc = 0x1F759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7598u;
        // 0x1f759c: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7598) {
            ctx->pc = 0x1F75ACu;
            goto label_1f75ac;
        }
    }
    ctx->pc = 0x1F75A0u;
label_1f75a0:
    // 0x1f75a0: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1f75a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_1f75a4:
    // 0x1f75a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f75a8:
    if (ctx->pc == 0x1F75A8u) {
        ctx->pc = 0x1F75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75A4u;
        // 0x1f75a8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75ACu;
        goto label_1f75ac;
    }
    ctx->pc = 0x1F75A4u;
    {
        const bool branch_taken_0x1f75a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75A4u;
        // 0x1f75a8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75a4) {
            ctx->pc = 0x1F75B8u;
            goto label_1f75b8;
        }
    }
    ctx->pc = 0x1F75ACu;
label_1f75ac:
    // 0x1f75ac: 0x0  nop
    ctx->pc = 0x1f75acu;
    // NOP
label_1f75b0:
    // 0x1f75b0: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1f75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f75b4:
    // 0x1f75b4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f75b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f75b8:
    // 0x1f75b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f75b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f75bc:
    // 0x1f75bc: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x1f75bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f75c0:
    // 0x1f75c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1f75c4:
    if (ctx->pc == 0x1F75C4u) {
        ctx->pc = 0x1F75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75C0u;
        // 0x1f75c4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75C8u;
        goto label_1f75c8;
    }
    ctx->pc = 0x1F75C0u;
    {
        const bool branch_taken_0x1f75c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75C0u;
        // 0x1f75c4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75c0) {
            ctx->pc = 0x1F7598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7598;
        }
    }
    ctx->pc = 0x1F75C8u;
label_1f75c8:
    // 0x1f75c8: 0xc07b48c  jal         func_1ED230
label_1f75cc:
    if (ctx->pc == 0x1F75CCu) {
        ctx->pc = 0x1F75D0u;
        goto label_1f75d0;
    }
    ctx->pc = 0x1F75C8u;
    SET_GPR_U32(ctx, 31, 0x1F75D0u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F75D0u;
label_1f75d0:
    // 0x1f75d0: 0x1000ff5b  b           . + 4 + (-0xA5 << 2)
label_1f75d4:
    if (ctx->pc == 0x1F75D4u) {
        ctx->pc = 0x1F75D8u;
        goto label_1f75d8;
    }
    ctx->pc = 0x1F75D0u;
    {
        const bool branch_taken_0x1f75d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f75d0) {
            ctx->pc = 0x1F7340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f7340; return; }
        }
    }
    ctx->pc = 0x1F75D8u;
label_1f75d8:
    // 0x1f75d8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f75dc:
    // 0x1f75dc: 0x16220017  bne         $s1, $v0, . + 4 + (0x17 << 2)
label_1f75e0:
    if (ctx->pc == 0x1F75E0u) {
        ctx->pc = 0x1F75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75DCu;
        // 0x1f75e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75E4u;
        goto label_1f75e4;
    }
    ctx->pc = 0x1F75DCu;
    {
        const bool branch_taken_0x1f75dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75DCu;
        // 0x1f75e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f75dc) {
            ctx->pc = 0x1F763Cu;
            goto label_1f763c;
        }
    }
    ctx->pc = 0x1F75E4u;
label_1f75e4:
    // 0x1f75e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f75e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f75e8:
    // 0x1f75e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f75e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f75ec:
    // 0x1f75ec: 0xc085cc4  jal         func_217310
label_1f75f0:
    if (ctx->pc == 0x1F75F0u) {
        ctx->pc = 0x1F75F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75ECu;
        // 0x1f75f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75F4u;
        goto label_1f75f4;
    }
    ctx->pc = 0x1F75ECu;
    SET_GPR_U32(ctx, 31, 0x1F75F4u);
    ctx->pc = 0x1F75F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F75ECu;
    // 0x1f75f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1F75F4u;
label_1f75f4:
    // 0x1f75f4: 0xc085bd0  jal         func_216F40
label_1f75f8:
    if (ctx->pc == 0x1F75F8u) {
        ctx->pc = 0x1F75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F75F4u;
        // 0x1f75f8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F75FCu;
        goto label_1f75fc;
    }
    ctx->pc = 0x1F75F4u;
    SET_GPR_U32(ctx, 31, 0x1F75FCu);
    ctx->pc = 0x1F75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F75F4u;
    // 0x1f75f8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F40u;
    { ctx->pc = 0x216f40; return; }
    ctx->pc = 0x1F75FCu;
label_1f75fc:
    // 0x1f75fc: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f75fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7600:
    // 0x1f7600: 0xac206f1c  sw          $zero, 0x6F1C($at)
    ctx->pc = 0x1f7600u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28444), GPR_U32(ctx, 0));
label_1f7604:
    // 0x1f7604: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7608:
    // 0x1f7608: 0xac206f18  sw          $zero, 0x6F18($at)
    ctx->pc = 0x1f7608u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28440), GPR_U32(ctx, 0));
label_1f760c:
    // 0x1f760c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f760cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7610:
    // 0x1f7610: 0xac206f2c  sw          $zero, 0x6F2C($at)
    ctx->pc = 0x1f7610u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28460), GPR_U32(ctx, 0));
label_1f7614:
    // 0x1f7614: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7618:
    // 0x1f7618: 0xac206f28  sw          $zero, 0x6F28($at)
    ctx->pc = 0x1f7618u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28456), GPR_U32(ctx, 0));
label_1f761c:
    // 0x1f761c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7620:
    // 0x1f7620: 0xac206f3c  sw          $zero, 0x6F3C($at)
    ctx->pc = 0x1f7620u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28476), GPR_U32(ctx, 0));
label_1f7624:
    // 0x1f7624: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7628:
    // 0x1f7628: 0xc08012c  jal         func_2004B0
label_1f762c:
    if (ctx->pc == 0x1F762Cu) {
        ctx->pc = 0x1F762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7628u;
        // 0x1f762c: 0xac206f38  sw          $zero, 0x6F38($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 28472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7630u;
        goto label_1f7630;
    }
    ctx->pc = 0x1F7628u;
    SET_GPR_U32(ctx, 31, 0x1F7630u);
    ctx->pc = 0x1F762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7628u;
    // 0x1f762c: 0xac206f38  sw          $zero, 0x6F38($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 28472), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004B0u;
    { ctx->pc = 0x2004b0; return; }
    ctx->pc = 0x1F7630u;
label_1f7630:
    // 0x1f7630: 0xc07dd98  jal         func_1F7660
label_1f7634:
    if (ctx->pc == 0x1F7634u) {
        ctx->pc = 0x1F7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7630u;
        // 0x1f7634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7638u;
        goto label_1f7638;
    }
    ctx->pc = 0x1F7630u;
    SET_GPR_U32(ctx, 31, 0x1F7638u);
    ctx->pc = 0x1F7634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7630u;
    // 0x1f7634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    goto label_1f7660;
    ctx->pc = 0x1F7638u;
label_1f7638:
    // 0x1f7638: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f7638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f763c:
    // 0x1f763c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f763cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7640:
    // 0x1f7640: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7644:
    // 0x1f7644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7648:
    // 0x1f7648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f764c:
    // 0x1f764c: 0x3e00008  jr          $ra
label_1f7650:
    if (ctx->pc == 0x1F7650u) {
        ctx->pc = 0x1F7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F764Cu;
        // 0x1f7650: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7654u;
        goto label_1f7654;
    }
    ctx->pc = 0x1F764Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F764Cu;
        // 0x1f7650: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F764Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7654u;
label_1f7654:
    // 0x1f7654: 0x0  nop
    ctx->pc = 0x1f7654u;
    // NOP
label_1f7658:
    // 0x1f7658: 0x0  nop
    ctx->pc = 0x1f7658u;
    // NOP
label_1f765c:
    // 0x1f765c: 0x0  nop
    ctx->pc = 0x1f765cu;
    // NOP
label_1f7660:
    // 0x1f7660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f7664:
    // 0x1f7664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f7664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1f7668:
    // 0x1f7668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f766c:
    // 0x1f766c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f766cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f7670:
    // 0x1f7670: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7670u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f7674:
    // 0x1f7674: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7678:
    // 0x1f7678: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1f767c:
    if (ctx->pc == 0x1F767Cu) {
        ctx->pc = 0x1F767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7678u;
        // 0x1f767c: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7680u;
        goto label_1f7680;
    }
    ctx->pc = 0x1F7678u;
    {
        const bool branch_taken_0x1f7678 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7678u;
        // 0x1f767c: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7678) {
            ctx->pc = 0x1F768Cu;
            goto label_1f768c;
        }
    }
    ctx->pc = 0x1F7680u;
label_1f7680:
    // 0x1f7680: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1f7684:
    if (ctx->pc == 0x1F7684u) {
        ctx->pc = 0x1F7688u;
        goto label_1f7688;
    }
    ctx->pc = 0x1F7680u;
    {
        const bool branch_taken_0x1f7680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7680) {
            ctx->pc = 0x1F768Cu;
            goto label_1f768c;
        }
    }
    ctx->pc = 0x1F7688u;
label_1f7688:
    // 0x1f7688: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1f768c:
    // 0x1f768c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_1f7690:
    if (ctx->pc == 0x1F7690u) {
        ctx->pc = 0x1F7694u;
        goto label_1f7694;
    }
    ctx->pc = 0x1F768Cu;
    {
        const bool branch_taken_0x1f768c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f768c) {
            ctx->pc = 0x1F76F4u;
            goto label_1f76f4;
        }
    }
    ctx->pc = 0x1F7694u;
label_1f7694:
    // 0x1f7694: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_1f7698:
    if (ctx->pc == 0x1F7698u) {
        ctx->pc = 0x1F7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7694u;
        // 0x1f7698: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F769Cu;
        goto label_1f769c;
    }
    ctx->pc = 0x1F7694u;
    {
        const bool branch_taken_0x1f7694 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7694u;
        // 0x1f7698: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7694) {
            ctx->pc = 0x1F76A4u;
            goto label_1f76a4;
        }
    }
    ctx->pc = 0x1F769Cu;
label_1f769c:
    // 0x1f769c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1f769cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_1f76a0:
    // 0x1f76a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1f76a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1f76a4:
    // 0x1f76a4: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1f76a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f76a8:
    // 0x1f76a8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1f76ac:
    if (ctx->pc == 0x1F76ACu) {
        ctx->pc = 0x1F76B0u;
        goto label_1f76b0;
    }
    ctx->pc = 0x1F76A8u;
    {
        const bool branch_taken_0x1f76a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76a8) {
            ctx->pc = 0x1F76F4u;
            goto label_1f76f4;
        }
    }
    ctx->pc = 0x1F76B0u;
label_1f76b0:
    // 0x1f76b0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1f76b4:
    if (ctx->pc == 0x1F76B4u) {
        ctx->pc = 0x1F76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76B0u;
        // 0x1f76b4: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76B8u;
        goto label_1f76b8;
    }
    ctx->pc = 0x1F76B0u;
    {
        const bool branch_taken_0x1f76b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76B0u;
        // 0x1f76b4: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76b0) {
            ctx->pc = 0x1F76D4u;
            goto label_1f76d4;
        }
    }
    ctx->pc = 0x1F76B8u;
label_1f76b8:
    // 0x1f76b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f76bc:
    // 0x1f76bc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f76bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_1f76c0:
    // 0x1f76c0: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
label_1f76c4:
    // 0x1f76c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f76c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f76c8:
    // 0x1f76c8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f76cc:
    // 0x1f76cc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1f76d0:
    if (ctx->pc == 0x1F76D0u) {
        ctx->pc = 0x1F76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76CCu;
        // 0x1f76d0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76D4u;
        goto label_1f76d4;
    }
    ctx->pc = 0x1F76CCu;
    {
        const bool branch_taken_0x1f76cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76CCu;
        // 0x1f76d0: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76cc) {
            ctx->pc = 0x1F76F4u;
            goto label_1f76f4;
        }
    }
    ctx->pc = 0x1F76D4u;
label_1f76d4:
    // 0x1f76d4: 0x0  nop
    ctx->pc = 0x1f76d4u;
    // NOP
label_1f76d8:
    // 0x1f76d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1f76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f76dc:
    // 0x1f76dc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_1f76e0:
    // 0x1f76e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f76e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f76e4:
    // 0x1f76e4: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
label_1f76e8:
    // 0x1f76e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f76ec:
    // 0x1f76ec: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f76f0:
    // 0x1f76f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f76f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f76f4:
    // 0x1f76f4: 0x0  nop
    ctx->pc = 0x1f76f4u;
    // NOP
label_1f76f8:
    // 0x1f76f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f76f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f76fc:
    // 0x1f76fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f76fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7700:
    // 0x1f7700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7704:
    // 0x1f7704: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x1f7704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_1f7708:
    // 0x1f7708: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f770c:
    // 0x1f770c: 0x24a56f10  addiu       $a1, $a1, 0x6F10
    ctx->pc = 0x1f770cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
label_1f7710:
    // 0x1f7710: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1f7714:
    if (ctx->pc == 0x1F7714u) {
        ctx->pc = 0x1F7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7710u;
        // 0x1f7714: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7718u;
        goto label_1f7718;
    }
    ctx->pc = 0x1F7710u;
    {
        const bool branch_taken_0x1f7710 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7710u;
        // 0x1f7714: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7710) {
            ctx->pc = 0x1F772Cu;
            goto label_1f772c;
        }
    }
    ctx->pc = 0x1F7718u;
label_1f7718:
    // 0x1f7718: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f771c:
    // 0x1f771c: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
label_1f7720:
    if (ctx->pc == 0x1F7720u) {
        ctx->pc = 0x1F7724u;
        goto label_1f7724;
    }
    ctx->pc = 0x1F771Cu;
    {
        const bool branch_taken_0x1f771c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f771c) {
            ctx->pc = 0x1F7748u;
            goto label_1f7748;
        }
    }
    ctx->pc = 0x1F7724u;
label_1f7724:
    // 0x1f7724: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f7728:
    if (ctx->pc == 0x1F7728u) {
        ctx->pc = 0x1F7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7724u;
        // 0x1f7728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F772Cu;
        goto label_1f772c;
    }
    ctx->pc = 0x1F7724u;
    {
        const bool branch_taken_0x1f7724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7724u;
        // 0x1f7728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7724) {
            ctx->pc = 0x1F7758u;
            goto label_1f7758;
        }
    }
    ctx->pc = 0x1F772Cu;
label_1f772c:
    // 0x1f772c: 0x0  nop
    ctx->pc = 0x1f772cu;
    // NOP
label_1f7730:
    // 0x1f7730: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1f7730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1f7734:
    // 0x1f7734: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f7738:
    // 0x1f7738: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f773c:
    if (ctx->pc == 0x1F773Cu) {
        ctx->pc = 0x1F7740u;
        goto label_1f7740;
    }
    ctx->pc = 0x1F7738u;
    {
        const bool branch_taken_0x1f7738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7738) {
            ctx->pc = 0x1F7748u;
            goto label_1f7748;
        }
    }
    ctx->pc = 0x1F7740u;
label_1f7740:
    // 0x1f7740: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f7744:
    if (ctx->pc == 0x1F7744u) {
        ctx->pc = 0x1F7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7740u;
        // 0x1f7744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7748u;
        goto label_1f7748;
    }
    ctx->pc = 0x1F7740u;
    {
        const bool branch_taken_0x1f7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7740u;
        // 0x1f7744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7740) {
            ctx->pc = 0x1F7758u;
            goto label_1f7758;
        }
    }
    ctx->pc = 0x1F7748u;
label_1f7748:
    // 0x1f7748: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f7748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f774c:
    // 0x1f774c: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1f774cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f7750:
    // 0x1f7750: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1f7754:
    if (ctx->pc == 0x1F7754u) {
        ctx->pc = 0x1F7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7750u;
        // 0x1f7754: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7758u;
        goto label_1f7758;
    }
    ctx->pc = 0x1F7750u;
    {
        const bool branch_taken_0x1f7750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7750u;
        // 0x1f7754: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7750) {
            ctx->pc = 0x1F7710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7710;
        }
    }
    ctx->pc = 0x1F7758u;
label_1f7758:
    // 0x1f7758: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1f775c:
    if (ctx->pc == 0x1F775Cu) {
        ctx->pc = 0x1F7760u;
        goto label_1f7760;
    }
    ctx->pc = 0x1F7758u;
    {
        const bool branch_taken_0x1f7758 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7758) {
            ctx->pc = 0x1F7770u;
            goto label_1f7770;
        }
    }
    ctx->pc = 0x1F7760u;
label_1f7760:
    // 0x1f7760: 0xc07b48c  jal         func_1ED230
label_1f7764:
    if (ctx->pc == 0x1F7764u) {
        ctx->pc = 0x1F7768u;
        goto label_1f7768;
    }
    ctx->pc = 0x1F7760u;
    SET_GPR_U32(ctx, 31, 0x1F7768u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F7768u;
label_1f7768:
    // 0x1f7768: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
label_1f776c:
    if (ctx->pc == 0x1F776Cu) {
        ctx->pc = 0x1F776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7768u;
        // 0x1f776c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7770u;
        goto label_1f7770;
    }
    ctx->pc = 0x1F7768u;
    {
        const bool branch_taken_0x1f7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7768u;
        // 0x1f776c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7768) {
            ctx->pc = 0x1F7678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7678;
        }
    }
    ctx->pc = 0x1F7770u;
label_1f7770:
    // 0x1f7770: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7774:
    // 0x1f7774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7778:
    // 0x1f7778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f777c:
    // 0x1f777c: 0x3e00008  jr          $ra
label_1f7780:
    if (ctx->pc == 0x1F7780u) {
        ctx->pc = 0x1F7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F777Cu;
        // 0x1f7780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7784u;
        goto label_1f7784;
    }
    ctx->pc = 0x1F777Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F777Cu;
        // 0x1f7780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F777Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7784u;
label_1f7784:
    // 0x1f7784: 0x0  nop
    ctx->pc = 0x1f7784u;
    // NOP
label_1f7788:
    // 0x1f7788: 0x0  nop
    ctx->pc = 0x1f7788u;
    // NOP
label_1f778c:
    // 0x1f778c: 0x0  nop
    ctx->pc = 0x1f778cu;
    // NOP
label_1f7790:
    // 0x1f7790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f7790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f7794:
    // 0x1f7794: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f7794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f7798:
    // 0x1f7798: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f7798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f779c:
    // 0x1f779c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f779cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f77a0:
    // 0x1f77a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f77a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f77a4:
    // 0x1f77a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f77a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f77a8:
    // 0x1f77a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f77a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f77ac:
    // 0x1f77ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f77acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f77b0:
    // 0x1f77b0: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
label_1f77b4:
    if (ctx->pc == 0x1F77B4u) {
        ctx->pc = 0x1F77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77B0u;
        // 0x1f77b4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F77B8u;
        goto label_1f77b8;
    }
    ctx->pc = 0x1F77B0u;
    {
        const bool branch_taken_0x1f77b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77B0u;
        // 0x1f77b4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77b0) {
            ctx->pc = 0x1F7810u;
            goto label_1f7810;
        }
    }
    ctx->pc = 0x1F77B8u;
label_1f77b8:
    // 0x1f77b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f77b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f77bc:
    // 0x1f77bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f77bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f77c0:
    // 0x1f77c0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x1f77c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_1f77c4:
    // 0x1f77c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f77c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f77c8:
    // 0x1f77c8: 0x24846f10  addiu       $a0, $a0, 0x6F10
    ctx->pc = 0x1f77c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28432));
label_1f77cc:
    // 0x1f77cc: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1f77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f77d0:
    // 0x1f77d0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f77d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f77d4:
    // 0x1f77d4: 0x14e60004  bne         $a3, $a2, . + 4 + (0x4 << 2)
label_1f77d8:
    if (ctx->pc == 0x1F77D8u) {
        ctx->pc = 0x1F77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77D4u;
        // 0x1f77d8: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F77DCu;
        goto label_1f77dc;
    }
    ctx->pc = 0x1F77D4u;
    {
        const bool branch_taken_0x1f77d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F77D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77D4u;
        // 0x1f77d8: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77d4) {
            ctx->pc = 0x1F77E8u;
            goto label_1f77e8;
        }
    }
    ctx->pc = 0x1F77DCu;
label_1f77dc:
    // 0x1f77dc: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1f77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_1f77e0:
    // 0x1f77e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f77e4:
    if (ctx->pc == 0x1F77E4u) {
        ctx->pc = 0x1F77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E0u;
        // 0x1f77e4: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F77E8u;
        goto label_1f77e8;
    }
    ctx->pc = 0x1F77E0u;
    {
        const bool branch_taken_0x1f77e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E0u;
        // 0x1f77e4: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77e0) {
            ctx->pc = 0x1F77F0u;
            goto label_1f77f0;
        }
    }
    ctx->pc = 0x1F77E8u;
label_1f77e8:
    // 0x1f77e8: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x1f77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1f77ec:
    // 0x1f77ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f77ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f77f0:
    // 0x1f77f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f77f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f77f4:
    // 0x1f77f4: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x1f77f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f77f8:
    // 0x1f77f8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1f77fc:
    if (ctx->pc == 0x1F77FCu) {
        ctx->pc = 0x1F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77F8u;
        // 0x1f77fc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7800u;
        goto label_1f7800;
    }
    ctx->pc = 0x1F77F8u;
    {
        const bool branch_taken_0x1f77f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77F8u;
        // 0x1f77fc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77f8) {
            ctx->pc = 0x1F77D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f77d4;
        }
    }
    ctx->pc = 0x1F7800u;
label_1f7800:
    // 0x1f7800: 0xc08012c  jal         func_2004B0
label_1f7804:
    if (ctx->pc == 0x1F7804u) {
        ctx->pc = 0x1F7808u;
        goto label_1f7808;
    }
    ctx->pc = 0x1F7800u;
    SET_GPR_U32(ctx, 31, 0x1F7808u);
    ctx->pc = 0x2004B0u;
    { ctx->pc = 0x2004b0; return; }
    ctx->pc = 0x1F7808u;
label_1f7808:
    // 0x1f7808: 0x10000016  b           . + 4 + (0x16 << 2)
label_1f780c:
    if (ctx->pc == 0x1F780Cu) {
        ctx->pc = 0x1F780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7808u;
        // 0x1f780c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7810u;
        goto label_1f7810;
    }
    ctx->pc = 0x1F7808u;
    {
        const bool branch_taken_0x1f7808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7808u;
        // 0x1f780c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7808) {
            ctx->pc = 0x1F7864u;
            goto label_1f7864;
        }
    }
    ctx->pc = 0x1F7810u;
label_1f7810:
    // 0x1f7810: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f7810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_1f7814:
    // 0x1f7814: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1f7814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_1f7818:
    // 0x1f7818: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x1f7818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1f781c:
    // 0x1f781c: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
label_1f7820:
    // 0x1f7820: 0x24426f14  addiu       $v0, $v0, 0x6F14
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28436));
label_1f7824:
    // 0x1f7824: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f7824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7828:
    // 0x1f7828: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x1f7828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f782c:
    // 0x1f782c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f7830:
    // 0x1f7830: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1f7830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_1f7834:
    // 0x1f7834: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f7834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f7838:
    // 0x1f7838: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f7838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f783c:
    // 0x1f783c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f7840:
    // 0x1f7840: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1f7844:
    if (ctx->pc == 0x1F7844u) {
        ctx->pc = 0x1F7848u;
        goto label_1f7848;
    }
    ctx->pc = 0x1F7840u;
    {
        const bool branch_taken_0x1f7840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f7840) {
            ctx->pc = 0x1F7858u;
            goto label_1f7858;
        }
    }
    ctx->pc = 0x1F7848u;
label_1f7848:
    // 0x1f7848: 0xc07b48c  jal         func_1ED230
label_1f784c:
    if (ctx->pc == 0x1F784Cu) {
        ctx->pc = 0x1F7850u;
        goto label_1f7850;
    }
    ctx->pc = 0x1F7848u;
    SET_GPR_U32(ctx, 31, 0x1F7850u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F7850u;
label_1f7850:
    // 0x1f7850: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1f7854:
    if (ctx->pc == 0x1F7854u) {
        ctx->pc = 0x1F7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7850u;
        // 0x1f7854: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7858u;
        goto label_1f7858;
    }
    ctx->pc = 0x1F7850u;
    {
        const bool branch_taken_0x1f7850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7850u;
        // 0x1f7854: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7850) {
            ctx->pc = 0x1F783Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f783c;
        }
    }
    ctx->pc = 0x1F7858u;
label_1f7858:
    // 0x1f7858: 0xc080130  jal         func_2004C0
label_1f785c:
    if (ctx->pc == 0x1F785Cu) {
        ctx->pc = 0x1F785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7858u;
        // 0x1f785c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7860u;
        goto label_1f7860;
    }
    ctx->pc = 0x1F7858u;
    SET_GPR_U32(ctx, 31, 0x1F7860u);
    ctx->pc = 0x1F785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7858u;
    // 0x1f785c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004C0u;
    { ctx->pc = 0x2004c0; return; }
    ctx->pc = 0x1F7860u;
label_1f7860:
    // 0x1f7860: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7864:
    // 0x1f7864: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1f7868:
    if (ctx->pc == 0x1F7868u) {
        ctx->pc = 0x1F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7864u;
        // 0x1f7868: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F786Cu;
        goto label_1f786c;
    }
    ctx->pc = 0x1F7864u;
    {
        const bool branch_taken_0x1f7864 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7864u;
        // 0x1f7868: 0x32030003  andi        $v1, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7864) {
            ctx->pc = 0x1F7878u;
            goto label_1f7878;
        }
    }
    ctx->pc = 0x1F786Cu;
label_1f786c:
    // 0x1f786c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1f7870:
    if (ctx->pc == 0x1F7870u) {
        ctx->pc = 0x1F7874u;
        goto label_1f7874;
    }
    ctx->pc = 0x1F786Cu;
    {
        const bool branch_taken_0x1f786c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f786c) {
            ctx->pc = 0x1F7878u;
            goto label_1f7878;
        }
    }
    ctx->pc = 0x1F7874u;
label_1f7874:
    // 0x1f7874: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1f7874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1f7878:
    // 0x1f7878: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_1f787c:
    if (ctx->pc == 0x1F787Cu) {
        ctx->pc = 0x1F7880u;
        goto label_1f7880;
    }
    ctx->pc = 0x1F7878u;
    {
        const bool branch_taken_0x1f7878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7878) {
            ctx->pc = 0x1F78E4u;
            goto label_1f78e4;
        }
    }
    ctx->pc = 0x1F7880u;
label_1f7880:
    // 0x1f7880: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_1f7884:
    if (ctx->pc == 0x1F7884u) {
        ctx->pc = 0x1F7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7880u;
        // 0x1f7884: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7888u;
        goto label_1f7888;
    }
    ctx->pc = 0x1F7880u;
    {
        const bool branch_taken_0x1f7880 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F7884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7880u;
        // 0x1f7884: 0x101883  sra         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7880) {
            ctx->pc = 0x1F7890u;
            goto label_1f7890;
        }
    }
    ctx->pc = 0x1F7888u;
label_1f7888:
    // 0x1f7888: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1f7888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_1f788c:
    // 0x1f788c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1f788cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1f7890:
    // 0x1f7890: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1f7890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f7894:
    // 0x1f7894: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_1f7898:
    if (ctx->pc == 0x1F7898u) {
        ctx->pc = 0x1F789Cu;
        goto label_1f789c;
    }
    ctx->pc = 0x1F7894u;
    {
        const bool branch_taken_0x1f7894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7894) {
            ctx->pc = 0x1F78E4u;
            goto label_1f78e4;
        }
    }
    ctx->pc = 0x1F789Cu;
label_1f789c:
    // 0x1f789c: 0x10720011  beq         $v1, $s2, . + 4 + (0x11 << 2)
label_1f78a0:
    if (ctx->pc == 0x1F78A0u) {
        ctx->pc = 0x1F78A4u;
        goto label_1f78a4;
    }
    ctx->pc = 0x1F789Cu;
    {
        const bool branch_taken_0x1f789c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1f789c) {
            ctx->pc = 0x1F78E4u;
            goto label_1f78e4;
        }
    }
    ctx->pc = 0x1F78A4u;
label_1f78a4:
    // 0x1f78a4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_1f78a8:
    if (ctx->pc == 0x1F78A8u) {
        ctx->pc = 0x1F78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78A4u;
        // 0x1f78a8: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F78ACu;
        goto label_1f78ac;
    }
    ctx->pc = 0x1F78A4u;
    {
        const bool branch_taken_0x1f78a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78A4u;
        // 0x1f78a8: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78a4) {
            ctx->pc = 0x1F78C8u;
            goto label_1f78c8;
        }
    }
    ctx->pc = 0x1F78ACu;
label_1f78ac:
    // 0x1f78ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f78acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f78b0:
    // 0x1f78b0: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_1f78b4:
    // 0x1f78b4: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
label_1f78b8:
    // 0x1f78b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f78b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f78bc:
    // 0x1f78bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f78c0:
    // 0x1f78c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f78c4:
    if (ctx->pc == 0x1F78C4u) {
        ctx->pc = 0x1F78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78C0u;
        // 0x1f78c4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F78C8u;
        goto label_1f78c8;
    }
    ctx->pc = 0x1F78C0u;
    {
        const bool branch_taken_0x1f78c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78C0u;
        // 0x1f78c4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78c0) {
            ctx->pc = 0x1F78E4u;
            goto label_1f78e4;
        }
    }
    ctx->pc = 0x1F78C8u;
label_1f78c8:
    // 0x1f78c8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1f78c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f78cc:
    // 0x1f78cc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_1f78d0:
    // 0x1f78d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f78d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f78d4:
    // 0x1f78d4: 0x24636f10  addiu       $v1, $v1, 0x6F10
    ctx->pc = 0x1f78d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28432));
label_1f78d8:
    // 0x1f78d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f78d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f78dc:
    // 0x1f78dc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f78dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f78e0:
    // 0x1f78e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f78e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f78e4:
    // 0x1f78e4: 0x0  nop
    ctx->pc = 0x1f78e4u;
    // NOP
label_1f78e8:
    // 0x1f78e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f78e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f78ec:
    // 0x1f78ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f78ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f78f0:
    // 0x1f78f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f78f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f78f4:
    // 0x1f78f4: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x1f78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_1f78f8:
    // 0x1f78f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f78fc:
    // 0x1f78fc: 0x24a56f10  addiu       $a1, $a1, 0x6F10
    ctx->pc = 0x1f78fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
label_1f7900:
    // 0x1f7900: 0x10d2000f  beq         $a2, $s2, . + 4 + (0xF << 2)
label_1f7904:
    if (ctx->pc == 0x1F7904u) {
        ctx->pc = 0x1F7908u;
        goto label_1f7908;
    }
    ctx->pc = 0x1F7900u;
    {
        const bool branch_taken_0x1f7900 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        if (branch_taken_0x1f7900) {
            ctx->pc = 0x1F7940u;
            goto label_1f7940;
        }
    }
    ctx->pc = 0x1F7908u;
label_1f7908:
    // 0x1f7908: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1f790c:
    if (ctx->pc == 0x1F790Cu) {
        ctx->pc = 0x1F790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7908u;
        // 0x1f790c: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7910u;
        goto label_1f7910;
    }
    ctx->pc = 0x1F7908u;
    {
        const bool branch_taken_0x1f7908 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7908u;
        // 0x1f790c: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7908) {
            ctx->pc = 0x1F7924u;
            goto label_1f7924;
        }
    }
    ctx->pc = 0x1F7910u;
label_1f7910:
    // 0x1f7910: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f7914:
    // 0x1f7914: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1f7918:
    if (ctx->pc == 0x1F7918u) {
        ctx->pc = 0x1F791Cu;
        goto label_1f791c;
    }
    ctx->pc = 0x1F7914u;
    {
        const bool branch_taken_0x1f7914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7914) {
            ctx->pc = 0x1F7940u;
            goto label_1f7940;
        }
    }
    ctx->pc = 0x1F791Cu;
label_1f791c:
    // 0x1f791c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f7920:
    if (ctx->pc == 0x1F7920u) {
        ctx->pc = 0x1F7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F791Cu;
        // 0x1f7920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7924u;
        goto label_1f7924;
    }
    ctx->pc = 0x1F791Cu;
    {
        const bool branch_taken_0x1f791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F791Cu;
        // 0x1f7920: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f791c) {
            ctx->pc = 0x1F7950u;
            goto label_1f7950;
        }
    }
    ctx->pc = 0x1F7924u;
label_1f7924:
    // 0x1f7924: 0x0  nop
    ctx->pc = 0x1f7924u;
    // NOP
label_1f7928:
    // 0x1f7928: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1f7928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1f792c:
    // 0x1f792c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f7930:
    // 0x1f7930: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_1f7934:
    if (ctx->pc == 0x1F7934u) {
        ctx->pc = 0x1F7938u;
        goto label_1f7938;
    }
    ctx->pc = 0x1F7930u;
    {
        const bool branch_taken_0x1f7930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f7930) {
            ctx->pc = 0x1F7940u;
            goto label_1f7940;
        }
    }
    ctx->pc = 0x1F7938u;
label_1f7938:
    // 0x1f7938: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f793c:
    if (ctx->pc == 0x1F793Cu) {
        ctx->pc = 0x1F793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7938u;
        // 0x1f793c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7940u;
        goto label_1f7940;
    }
    ctx->pc = 0x1F7938u;
    {
        const bool branch_taken_0x1f7938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7938u;
        // 0x1f793c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7938) {
            ctx->pc = 0x1F7950u;
            goto label_1f7950;
        }
    }
    ctx->pc = 0x1F7940u;
label_1f7940:
    // 0x1f7940: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f7940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1f7944:
    // 0x1f7944: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1f7944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f7948:
    // 0x1f7948: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1f794c:
    if (ctx->pc == 0x1F794Cu) {
        ctx->pc = 0x1F794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7948u;
        // 0x1f794c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7950u;
        goto label_1f7950;
    }
    ctx->pc = 0x1F7948u;
    {
        const bool branch_taken_0x1f7948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7948u;
        // 0x1f794c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7948) {
            ctx->pc = 0x1F7900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7900;
        }
    }
    ctx->pc = 0x1F7950u;
label_1f7950:
    // 0x1f7950: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1f7954:
    if (ctx->pc == 0x1F7954u) {
        ctx->pc = 0x1F7958u;
        goto label_1f7958;
    }
    ctx->pc = 0x1F7950u;
    {
        const bool branch_taken_0x1f7950 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7950) {
            ctx->pc = 0x1F7968u;
            goto label_1f7968;
        }
    }
    ctx->pc = 0x1F7958u;
label_1f7958:
    // 0x1f7958: 0xc07b48c  jal         func_1ED230
label_1f795c:
    if (ctx->pc == 0x1F795Cu) {
        ctx->pc = 0x1F7960u;
        goto label_1f7960;
    }
    ctx->pc = 0x1F7958u;
    SET_GPR_U32(ctx, 31, 0x1F7960u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F7960u;
label_1f7960:
    // 0x1f7960: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
label_1f7964:
    if (ctx->pc == 0x1F7964u) {
        ctx->pc = 0x1F7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7960u;
        // 0x1f7964: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7968u;
        goto label_1f7968;
    }
    ctx->pc = 0x1F7960u;
    {
        const bool branch_taken_0x1f7960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7960u;
        // 0x1f7964: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7960) {
            ctx->pc = 0x1F7864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7864;
        }
    }
    ctx->pc = 0x1F7968u;
label_1f7968:
    // 0x1f7968: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_1f796c:
    if (ctx->pc == 0x1F796Cu) {
        ctx->pc = 0x1F796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7968u;
        // 0x1f796c: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7970u;
        goto label_1f7970;
    }
    ctx->pc = 0x1F7968u;
    {
        const bool branch_taken_0x1f7968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7968u;
        // 0x1f796c: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7968) {
            ctx->pc = 0x1F79B4u;
            goto label_1f79b4;
        }
    }
    ctx->pc = 0x1F7970u;
label_1f7970:
    // 0x1f7970: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x1f7970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
label_1f7974:
    // 0x1f7974: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x1f7974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1f7978:
    // 0x1f7978: 0x24846f10  addiu       $a0, $a0, 0x6F10
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28432));
label_1f797c:
    // 0x1f797c: 0x24636f14  addiu       $v1, $v1, 0x6F14
    ctx->pc = 0x1f797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28436));
label_1f7980:
    // 0x1f7980: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f7980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f7984:
    // 0x1f7984: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x1f7984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1f7988:
    // 0x1f7988: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f7988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f798c:
    // 0x1f798c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1f798cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1f7990:
    // 0x1f7990: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f7990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1f7994:
    // 0x1f7994: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f7994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f7998:
    // 0x1f7998: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1f7998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f799c:
    // 0x1f799c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_1f79a0:
    if (ctx->pc == 0x1F79A0u) {
        ctx->pc = 0x1F79A4u;
        goto label_1f79a4;
    }
    ctx->pc = 0x1F799Cu;
    {
        const bool branch_taken_0x1f799c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f799c) {
            ctx->pc = 0x1F7A00u;
            goto label_1f7a00;
        }
    }
    ctx->pc = 0x1F79A4u;
label_1f79a4:
    // 0x1f79a4: 0xc07b48c  jal         func_1ED230
label_1f79a8:
    if (ctx->pc == 0x1F79A8u) {
        ctx->pc = 0x1F79ACu;
        goto label_1f79ac;
    }
    ctx->pc = 0x1F79A4u;
    SET_GPR_U32(ctx, 31, 0x1F79ACu);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F79ACu;
label_1f79ac:
    // 0x1f79ac: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1f79b0:
    if (ctx->pc == 0x1F79B0u) {
        ctx->pc = 0x1F79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79ACu;
        // 0x1f79b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F79B4u;
        goto label_1f79b4;
    }
    ctx->pc = 0x1F79ACu;
    {
        const bool branch_taken_0x1f79ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79ACu;
        // 0x1f79b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79ac) {
            ctx->pc = 0x1F7998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7998;
        }
    }
    ctx->pc = 0x1F79B4u;
label_1f79b4:
    // 0x1f79b4: 0x0  nop
    ctx->pc = 0x1f79b4u;
    // NOP
label_1f79b8:
    // 0x1f79b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f79b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f79bc:
    // 0x1f79bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f79bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f79c0:
    // 0x1f79c0: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x1f79c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_1f79c4:
    // 0x1f79c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f79c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f79c8:
    // 0x1f79c8: 0x24a56f10  addiu       $a1, $a1, 0x6F10
    ctx->pc = 0x1f79c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
label_1f79cc:
    // 0x1f79cc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1f79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f79d0:
    // 0x1f79d0: 0x14f20004  bne         $a3, $s2, . + 4 + (0x4 << 2)
label_1f79d4:
    if (ctx->pc == 0x1F79D4u) {
        ctx->pc = 0x1F79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79D0u;
        // 0x1f79d4: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F79D8u;
        goto label_1f79d8;
    }
    ctx->pc = 0x1F79D0u;
    {
        const bool branch_taken_0x1f79d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79D0u;
        // 0x1f79d4: 0xa81821  addu        $v1, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79d0) {
            ctx->pc = 0x1F79E4u;
            goto label_1f79e4;
        }
    }
    ctx->pc = 0x1F79D8u;
label_1f79d8:
    // 0x1f79d8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1f79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_1f79dc:
    // 0x1f79dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f79e0:
    if (ctx->pc == 0x1F79E0u) {
        ctx->pc = 0x1F79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79DCu;
        // 0x1f79e0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F79E4u;
        goto label_1f79e4;
    }
    ctx->pc = 0x1F79DCu;
    {
        const bool branch_taken_0x1f79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79DCu;
        // 0x1f79e0: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79dc) {
            ctx->pc = 0x1F79F0u;
            goto label_1f79f0;
        }
    }
    ctx->pc = 0x1F79E4u;
label_1f79e4:
    // 0x1f79e4: 0x0  nop
    ctx->pc = 0x1f79e4u;
    // NOP
label_1f79e8:
    // 0x1f79e8: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1f79ec:
    // 0x1f79ec: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1f79ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1f79f0:
    // 0x1f79f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f79f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f79f4:
    // 0x1f79f4: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x1f79f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f79f8:
    // 0x1f79f8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1f79fc:
    if (ctx->pc == 0x1F79FCu) {
        ctx->pc = 0x1F79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79F8u;
        // 0x1f79fc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7A00u;
        goto label_1f7a00;
    }
    ctx->pc = 0x1F79F8u;
    {
        const bool branch_taken_0x1f79f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79F8u;
        // 0x1f79fc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79f8) {
            ctx->pc = 0x1F79D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79d0;
        }
    }
    ctx->pc = 0x1F7A00u;
label_1f7a00:
    // 0x1f7a00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f7a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7a04:
    // 0x1f7a04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f7a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7a08:
    // 0x1f7a08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7a0c:
    // 0x1f7a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f7a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7a10:
    // 0x1f7a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7a14:
    // 0x1f7a14: 0x3e00008  jr          $ra
label_1f7a18:
    if (ctx->pc == 0x1F7A18u) {
        ctx->pc = 0x1F7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A14u;
        // 0x1f7a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7A1Cu;
        goto label_1f7a1c;
    }
    ctx->pc = 0x1F7A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A14u;
        // 0x1f7a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7A1Cu;
label_1f7a1c:
    // 0x1f7a1c: 0x0  nop
    ctx->pc = 0x1f7a1cu;
    // NOP
label_1f7a20:
    // 0x1f7a20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f7a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1f7a24:
    // 0x1f7a24: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a28:
    // 0x1f7a28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f7a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f7a2c:
    // 0x1f7a2c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f7a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1f7a30:
    // 0x1f7a30: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1f7a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1f7a34:
    // 0x1f7a34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f7a34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7a38:
    // 0x1f7a38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1f7a3c:
    // 0x1f7a3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f7a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1f7a40:
    // 0x1f7a40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f7a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f7a44:
    // 0x1f7a44: 0xac206f10  sw          $zero, 0x6F10($at)
    ctx->pc = 0x1f7a44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28432), GPR_U32(ctx, 0));
label_1f7a48:
    // 0x1f7a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f7a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7a4c:
    // 0x1f7a4c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a50:
    // 0x1f7a50: 0xac206f14  sw          $zero, 0x6F14($at)
    ctx->pc = 0x1f7a50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28436), GPR_U32(ctx, 0));
label_1f7a54:
    // 0x1f7a54: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a58:
    // 0x1f7a58: 0xac206f18  sw          $zero, 0x6F18($at)
    ctx->pc = 0x1f7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28440), GPR_U32(ctx, 0));
label_1f7a5c:
    // 0x1f7a5c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a60:
    // 0x1f7a60: 0xac206f1c  sw          $zero, 0x6F1C($at)
    ctx->pc = 0x1f7a60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28444), GPR_U32(ctx, 0));
label_1f7a64:
    // 0x1f7a64: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a68:
    // 0x1f7a68: 0xac206f20  sw          $zero, 0x6F20($at)
    ctx->pc = 0x1f7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28448), GPR_U32(ctx, 0));
label_1f7a6c:
    // 0x1f7a6c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a70:
    // 0x1f7a70: 0xac206f24  sw          $zero, 0x6F24($at)
    ctx->pc = 0x1f7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28452), GPR_U32(ctx, 0));
label_1f7a74:
    // 0x1f7a74: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a78:
    // 0x1f7a78: 0xac206f28  sw          $zero, 0x6F28($at)
    ctx->pc = 0x1f7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28456), GPR_U32(ctx, 0));
label_1f7a7c:
    // 0x1f7a7c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a80:
    // 0x1f7a80: 0xac206f2c  sw          $zero, 0x6F2C($at)
    ctx->pc = 0x1f7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28460), GPR_U32(ctx, 0));
label_1f7a84:
    // 0x1f7a84: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a88:
    // 0x1f7a88: 0xac206f30  sw          $zero, 0x6F30($at)
    ctx->pc = 0x1f7a88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28464), GPR_U32(ctx, 0));
label_1f7a8c:
    // 0x1f7a8c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a90:
    // 0x1f7a90: 0xac206f34  sw          $zero, 0x6F34($at)
    ctx->pc = 0x1f7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28468), GPR_U32(ctx, 0));
label_1f7a94:
    // 0x1f7a94: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7a98:
    // 0x1f7a98: 0xac206f38  sw          $zero, 0x6F38($at)
    ctx->pc = 0x1f7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28472), GPR_U32(ctx, 0));
label_1f7a9c:
    // 0x1f7a9c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1f7a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
label_1f7aa0:
    // 0x1f7aa0: 0xac206f3c  sw          $zero, 0x6F3C($at)
    ctx->pc = 0x1f7aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 28476), GPR_U32(ctx, 0));
label_1f7aa4:
    // 0x1f7aa4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f7aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7aa8:
    // 0x1f7aa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f7aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7aac:
    // 0x1f7aac: 0x0  nop
    ctx->pc = 0x1f7aacu;
    // NOP
label_1f7ab0:
    // 0x1f7ab0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1f7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_1f7ab4:
    // 0x1f7ab4: 0x24426f40  addiu       $v0, $v0, 0x6F40
    ctx->pc = 0x1f7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28480));
label_1f7ab8:
    // 0x1f7ab8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1f7ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1f7abc:
    // 0x1f7abc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f7abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f7ac0:
    // 0x1f7ac0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f7ac4:
    // 0x1f7ac4: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x1f7ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1f7ac8:
    // 0x1f7ac8: 0xc05e234  jal         func_1788D0
label_1f7acc:
    if (ctx->pc == 0x1F7ACCu) {
        ctx->pc = 0x1F7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AC8u;
        // 0x1f7acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7AD0u;
        goto label_1f7ad0;
    }
    ctx->pc = 0x1F7AC8u;
    SET_GPR_U32(ctx, 31, 0x1F7AD0u);
    ctx->pc = 0x1F7ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7AC8u;
    // 0x1f7acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F7AC8u, 0x1F7AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7AD0u;
label_1f7ad0:
    // 0x1f7ad0: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f7ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7ad4:
    // 0x1f7ad4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1f7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1f7ad8:
    // 0x1f7ad8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f7adc:
    // 0x1f7adc: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1f7adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f7ae0:
    // 0x1f7ae0: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1f7ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f7ae4:
    // 0x1f7ae4: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1f7ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7ae8:
    // 0x1f7ae8: 0xc07c1f4  jal         func_1F07D0
label_1f7aec:
    if (ctx->pc == 0x1F7AECu) {
        ctx->pc = 0x1F7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AE8u;
        // 0x1f7aec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7AF0u;
        goto label_1f7af0;
    }
    ctx->pc = 0x1F7AE8u;
    SET_GPR_U32(ctx, 31, 0x1F7AF0u);
    ctx->pc = 0x1F7AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7AE8u;
    // 0x1f7aec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x1F7AF0u;
label_1f7af0:
    // 0x1f7af0: 0x264405b0  addiu       $a0, $s2, 0x5B0
    ctx->pc = 0x1f7af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
label_1f7af4:
    // 0x1f7af4: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1f7af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f7af8:
    // 0x1f7af8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f7afc:
    // 0x1f7afc: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f7afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7b00:
    // 0x1f7b00: 0x240800a8  addiu       $t0, $zero, 0xA8
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f7b04:
    // 0x1f7b04: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1f7b04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7b08:
    // 0x1f7b08: 0xc07c084  jal         func_1F0210
label_1f7b0c:
    if (ctx->pc == 0x1F7B0Cu) {
        ctx->pc = 0x1F7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B08u;
        // 0x1f7b0c: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B10u;
        goto label_1f7b10;
    }
    ctx->pc = 0x1F7B08u;
    SET_GPR_U32(ctx, 31, 0x1F7B10u);
    ctx->pc = 0x1F7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B08u;
    // 0x1f7b0c: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x1F7B10u;
label_1f7b10:
    // 0x1f7b10: 0xc07082c  jal         func_1C20B0
label_1f7b14:
    if (ctx->pc == 0x1F7B14u) {
        ctx->pc = 0x1F7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B10u;
        // 0x1f7b14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B18u;
        goto label_1f7b18;
    }
    ctx->pc = 0x1F7B10u;
    SET_GPR_U32(ctx, 31, 0x1F7B18u);
    ctx->pc = 0x1F7B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B10u;
    // 0x1f7b14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1F7B18u;
label_1f7b18:
    // 0x1f7b18: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1f7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f7b1c:
    // 0x1f7b1c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1f7b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f7b20:
    // 0x1f7b20: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x1f7b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_1f7b24:
    // 0x1f7b24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7b28:
    // 0x1f7b28: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1f7b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1f7b2c:
    // 0x1f7b2c: 0x2624000a  addiu       $a0, $s1, 0xA
    ctx->pc = 0x1f7b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10));
label_1f7b30:
    // 0x1f7b30: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1f7b34:
    // 0x1f7b34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7b38:
    // 0x1f7b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f7b3c:
    // 0x1f7b3c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f7b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f7b40:
    // 0x1f7b40: 0xffa50018  sd          $a1, 0x18($sp)
    ctx->pc = 0x1f7b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 5));
label_1f7b44:
    // 0x1f7b44: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f7b48:
    // 0x1f7b48: 0x26440870  addiu       $a0, $s2, 0x870
    ctx->pc = 0x1f7b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2160));
label_1f7b4c:
    // 0x1f7b4c: 0x306affff  andi        $t2, $v1, 0xFFFF
    ctx->pc = 0x1f7b4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1f7b50:
    // 0x1f7b50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f7b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7b54:
    // 0x1f7b54: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1f7b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f7b58:
    // 0x1f7b58: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1f7b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f7b5c:
    // 0x1f7b5c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f7b60:
    // 0x1f7b60: 0xc05de30  jal         func_1778C0
label_1f7b64:
    if (ctx->pc == 0x1F7B64u) {
        ctx->pc = 0x1F7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B60u;
        // 0x1f7b64: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B68u;
        goto label_1f7b68;
    }
    ctx->pc = 0x1F7B60u;
    SET_GPR_U32(ctx, 31, 0x1F7B68u);
    ctx->pc = 0x1F7B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B60u;
    // 0x1f7b64: 0x120582d  daddu       $t3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F7B60u, 0x1F7B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B68u;
label_1f7b68:
    // 0x1f7b68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f7b6c:
    // 0x1f7b6c: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1f7b6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1f7b70:
    // 0x1f7b70: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x1f7b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_1f7b74:
    // 0x1f7b74: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1f7b78:
    if (ctx->pc == 0x1F7B78u) {
        ctx->pc = 0x1F7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B74u;
        // 0x1f7b78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B7Cu;
        goto label_1f7b7c;
    }
    ctx->pc = 0x1F7B74u;
    {
        const bool branch_taken_0x1f7b74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B74u;
        // 0x1f7b78: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b74) {
            ctx->pc = 0x1F7B94u;
            goto label_1f7b94;
        }
    }
    ctx->pc = 0x1F7B7Cu;
label_1f7b7c:
    // 0x1f7b7c: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
label_1f7b80:
    if (ctx->pc == 0x1F7B80u) {
        ctx->pc = 0x1F7B84u;
        goto label_1f7b84;
    }
    ctx->pc = 0x1F7B7Cu;
    {
        const bool branch_taken_0x1f7b7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7b7c) {
            ctx->pc = 0x1F7B94u;
            goto label_1f7b94;
        }
    }
    ctx->pc = 0x1F7B84u;
label_1f7b84:
    // 0x1f7b84: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1f7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f7b88:
    // 0x1f7b88: 0xa24308e2  sb          $v1, 0x8E2($s2)
    ctx->pc = 0x1f7b88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2274), (uint8_t)GPR_U32(ctx, 3));
label_1f7b8c:
    // 0x1f7b8c: 0xa24308e1  sb          $v1, 0x8E1($s2)
    ctx->pc = 0x1f7b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2273), (uint8_t)GPR_U32(ctx, 3));
label_1f7b90:
    // 0x1f7b90: 0xa24308e0  sb          $v1, 0x8E0($s2)
    ctx->pc = 0x1f7b90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2272), (uint8_t)GPR_U32(ctx, 3));
label_1f7b94:
    // 0x1f7b94: 0x0  nop
    ctx->pc = 0x1f7b94u;
    // NOP
label_1f7b98:
    // 0x1f7b98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f7b9c:
    // 0x1f7b9c: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x1f7b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f7ba0:
    // 0x1f7ba0: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_1f7ba4:
    if (ctx->pc == 0x1F7BA4u) {
        ctx->pc = 0x1F7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BA0u;
        // 0x1f7ba4: 0x26731220  addiu       $s3, $s3, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BA8u;
        goto label_1f7ba8;
    }
    ctx->pc = 0x1F7BA0u;
    {
        const bool branch_taken_0x1f7ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BA0u;
        // 0x1f7ba4: 0x26731220  addiu       $s3, $s3, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ba0) {
            ctx->pc = 0x1F7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7aac;
        }
    }
    ctx->pc = 0x1F7BA8u;
label_1f7ba8:
    // 0x1f7ba8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f7ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f7bac:
    // 0x1f7bac: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1f7bacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f7bb0:
    // 0x1f7bb0: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
label_1f7bb4:
    if (ctx->pc == 0x1F7BB4u) {
        ctx->pc = 0x1F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BB0u;
        // 0x1f7bb4: 0x26940910  addiu       $s4, $s4, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BB8u;
        goto label_1f7bb8;
    }
    ctx->pc = 0x1F7BB0u;
    {
        const bool branch_taken_0x1f7bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BB0u;
        // 0x1f7bb4: 0x26940910  addiu       $s4, $s4, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bb0) {
            ctx->pc = 0x1F7AA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7aa4;
        }
    }
    ctx->pc = 0x1F7BB8u;
label_1f7bb8:
    // 0x1f7bb8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1f7bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f7bbc:
    // 0x1f7bbc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f7bbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f7bc0:
    // 0x1f7bc0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1f7bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f7bc4:
    // 0x1f7bc4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f7bc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7bc8:
    // 0x1f7bc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f7bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7bcc:
    // 0x1f7bcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f7bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7bd0:
    // 0x1f7bd0: 0x3e00008  jr          $ra
label_1f7bd4:
    if (ctx->pc == 0x1F7BD4u) {
        ctx->pc = 0x1F7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BD0u;
        // 0x1f7bd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7BD8u;
        goto label_1f7bd8;
    }
    ctx->pc = 0x1F7BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7BD0u;
        // 0x1f7bd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7BD8u;
label_1f7bd8:
    // 0x1f7bd8: 0x0  nop
    ctx->pc = 0x1f7bd8u;
    // NOP
label_1f7bdc:
    // 0x1f7bdc: 0x0  nop
    ctx->pc = 0x1f7bdcu;
    // NOP
label_1f7be0:
    // 0x1f7be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7be4:
    // 0x1f7be4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7be8:
    // 0x1f7be8: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x1f7be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_1f7bec:
    // 0x1f7bec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f7becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f7bf0:
    // 0x1f7bf0: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x1f7bf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f7bf4:
    // 0x1f7bf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f7bf8:
    // 0x1f7bf8: 0x240b0005  addiu       $t3, $zero, 0x5
    ctx->pc = 0x1f7bf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f7bfc:
    // 0x1f7bfc: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x1f7bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7c00:
    // 0x1f7c00: 0x24c66f10  addiu       $a2, $a2, 0x6F10
    ctx->pc = 0x1f7c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28432));
label_1f7c04:
    // 0x1f7c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7c08:
    // 0x1f7c08: 0xc84821  addu        $t1, $a2, $t0
    ctx->pc = 0x1f7c08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1f7c0c:
    // 0x1f7c0c: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f7c10:
    // 0x1f7c10: 0x1545000a  bne         $t2, $a1, . + 4 + (0xA << 2)
label_1f7c14:
    if (ctx->pc == 0x1F7C14u) {
        ctx->pc = 0x1F7C18u;
        goto label_1f7c18;
    }
    ctx->pc = 0x1F7C10u;
    {
        const bool branch_taken_0x1f7c10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f7c10) {
            ctx->pc = 0x1F7C3Cu;
            goto label_1f7c3c;
        }
    }
    ctx->pc = 0x1F7C18u;
label_1f7c18:
    // 0x1f7c18: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c1c:
    // 0x1f7c1c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f7c20:
    // 0x1f7c20: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1f7c24:
    // 0x1f7c24: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c28:
    // 0x1f7c28: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c28u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1f7c2c:
    // 0x1f7c2c: 0x15400026  bnez        $t2, . + 4 + (0x26 << 2)
label_1f7c30:
    if (ctx->pc == 0x1F7C30u) {
        ctx->pc = 0x1F7C34u;
        goto label_1f7c34;
    }
    ctx->pc = 0x1F7C2Cu;
    {
        const bool branch_taken_0x1f7c2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c2c) {
            ctx->pc = 0x1F7CC8u;
            { ctx->pc = 0x1f7cc8; return; }
        }
    }
    ctx->pc = 0x1F7C34u;
label_1f7c34:
    // 0x1f7c34: 0x10000024  b           . + 4 + (0x24 << 2)
label_1f7c38:
    if (ctx->pc == 0x1F7C38u) {
        ctx->pc = 0x1F7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C34u;
        // 0x1f7c38: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C3Cu;
        goto label_1f7c3c;
    }
    ctx->pc = 0x1F7C34u;
    {
        const bool branch_taken_0x1f7c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C34u;
        // 0x1f7c38: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c34) {
            ctx->pc = 0x1F7CC8u;
            { ctx->pc = 0x1f7cc8; return; }
        }
    }
    ctx->pc = 0x1F7C3Cu;
label_1f7c3c:
    // 0x1f7c3c: 0x0  nop
    ctx->pc = 0x1f7c3cu;
    // NOP
label_1f7c40:
    // 0x1f7c40: 0x1543000a  bne         $t2, $v1, . + 4 + (0xA << 2)
label_1f7c44:
    if (ctx->pc == 0x1F7C44u) {
        ctx->pc = 0x1F7C48u;
        goto label_1f7c48;
    }
    ctx->pc = 0x1F7C40u;
    {
        const bool branch_taken_0x1f7c40 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7c40) {
            ctx->pc = 0x1F7C6Cu;
            goto label_1f7c6c;
        }
    }
    ctx->pc = 0x1F7C48u;
label_1f7c48:
    // 0x1f7c48: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c4c:
    // 0x1f7c4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f7c50:
    // 0x1f7c50: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1f7c54:
    // 0x1f7c54: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c54u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c58:
    // 0x1f7c58: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c58u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1f7c5c:
    // 0x1f7c5c: 0x1540001a  bnez        $t2, . + 4 + (0x1A << 2)
label_1f7c60:
    if (ctx->pc == 0x1F7C60u) {
        ctx->pc = 0x1F7C64u;
        goto label_1f7c64;
    }
    ctx->pc = 0x1F7C5Cu;
    {
        const bool branch_taken_0x1f7c5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c5c) {
            ctx->pc = 0x1F7CC8u;
            { ctx->pc = 0x1f7cc8; return; }
        }
    }
    ctx->pc = 0x1F7C64u;
label_1f7c64:
    // 0x1f7c64: 0x10000018  b           . + 4 + (0x18 << 2)
label_1f7c68:
    if (ctx->pc == 0x1F7C68u) {
        ctx->pc = 0x1F7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C64u;
        // 0x1f7c68: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7C6Cu;
        goto label_1f7c6c;
    }
    ctx->pc = 0x1F7C64u;
    {
        const bool branch_taken_0x1f7c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C64u;
        // 0x1f7c68: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c64) {
            ctx->pc = 0x1F7CC8u;
            { ctx->pc = 0x1f7cc8; return; }
        }
    }
    ctx->pc = 0x1F7C6Cu;
label_1f7c6c:
    // 0x1f7c6c: 0x0  nop
    ctx->pc = 0x1f7c6cu;
    // NOP
label_1f7c70:
    // 0x1f7c70: 0x154d000a  bne         $t2, $t5, . + 4 + (0xA << 2)
label_1f7c74:
    if (ctx->pc == 0x1F7C74u) {
        ctx->pc = 0x1F7C78u;
        goto label_1f7c78;
    }
    ctx->pc = 0x1F7C70u;
    {
        const bool branch_taken_0x1f7c70 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 13));
        if (branch_taken_0x1f7c70) {
            ctx->pc = 0x1F7C9Cu;
            { ctx->pc = 0x1f7c9c; return; }
        }
    }
    ctx->pc = 0x1F7C78u;
label_1f7c78:
    // 0x1f7c78: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c7c:
    // 0x1f7c7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f7c7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1f7c80:
    // 0x1f7c80: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
label_1f7c84:
    // 0x1f7c84: 0x8d2a0004  lw          $t2, 0x4($t1)
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_1f7c88:
    // 0x1f7c88: 0x294a000c  slti        $t2, $t2, 0xC
    ctx->pc = 0x1f7c88u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1f7c8c:
    // 0x1f7c8c: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
label_1f7c90:
    if (ctx->pc == 0x1F7C90u) {
        ctx->pc = 0x1F7C94u;
        goto label_1f7c94;
    }
    ctx->pc = 0x1F7C8Cu;
    {
        const bool branch_taken_0x1f7c8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7c8c) {
            ctx->pc = 0x1F7CC8u;
            { ctx->pc = 0x1f7cc8; return; }
        }
    }
    ctx->pc = 0x1F7C94u;
label_1f7c94:
    // 0x1f7c94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1f7c98u;
    return;
}

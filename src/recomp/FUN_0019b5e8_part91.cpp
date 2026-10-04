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


void FUN_0019b5e8_part91(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1c7830u: goto label_1c7830;
        case 0x1c7834u: goto label_1c7834;
        case 0x1c7838u: goto label_1c7838;
        case 0x1c783cu: goto label_1c783c;
        case 0x1c7840u: goto label_1c7840;
        case 0x1c7844u: goto label_1c7844;
        case 0x1c7848u: goto label_1c7848;
        case 0x1c784cu: goto label_1c784c;
        case 0x1c7850u: goto label_1c7850;
        case 0x1c7854u: goto label_1c7854;
        case 0x1c7858u: goto label_1c7858;
        case 0x1c785cu: goto label_1c785c;
        case 0x1c7860u: goto label_1c7860;
        case 0x1c7864u: goto label_1c7864;
        case 0x1c7868u: goto label_1c7868;
        case 0x1c786cu: goto label_1c786c;
        case 0x1c7870u: goto label_1c7870;
        case 0x1c7874u: goto label_1c7874;
        case 0x1c7878u: goto label_1c7878;
        case 0x1c787cu: goto label_1c787c;
        case 0x1c7880u: goto label_1c7880;
        case 0x1c7884u: goto label_1c7884;
        case 0x1c7888u: goto label_1c7888;
        case 0x1c788cu: goto label_1c788c;
        case 0x1c7890u: goto label_1c7890;
        case 0x1c7894u: goto label_1c7894;
        case 0x1c7898u: goto label_1c7898;
        case 0x1c789cu: goto label_1c789c;
        case 0x1c78a0u: goto label_1c78a0;
        case 0x1c78a4u: goto label_1c78a4;
        case 0x1c78a8u: goto label_1c78a8;
        case 0x1c78acu: goto label_1c78ac;
        case 0x1c78b0u: goto label_1c78b0;
        case 0x1c78b4u: goto label_1c78b4;
        case 0x1c78b8u: goto label_1c78b8;
        case 0x1c78bcu: goto label_1c78bc;
        case 0x1c78c0u: goto label_1c78c0;
        case 0x1c78c4u: goto label_1c78c4;
        case 0x1c78c8u: goto label_1c78c8;
        case 0x1c78ccu: goto label_1c78cc;
        case 0x1c78d0u: goto label_1c78d0;
        case 0x1c78d4u: goto label_1c78d4;
        case 0x1c78d8u: goto label_1c78d8;
        case 0x1c78dcu: goto label_1c78dc;
        case 0x1c78e0u: goto label_1c78e0;
        case 0x1c78e4u: goto label_1c78e4;
        case 0x1c78e8u: goto label_1c78e8;
        case 0x1c78ecu: goto label_1c78ec;
        case 0x1c78f0u: goto label_1c78f0;
        case 0x1c78f4u: goto label_1c78f4;
        case 0x1c78f8u: goto label_1c78f8;
        case 0x1c78fcu: goto label_1c78fc;
        case 0x1c7900u: goto label_1c7900;
        case 0x1c7904u: goto label_1c7904;
        case 0x1c7908u: goto label_1c7908;
        case 0x1c790cu: goto label_1c790c;
        case 0x1c7910u: goto label_1c7910;
        case 0x1c7914u: goto label_1c7914;
        case 0x1c7918u: goto label_1c7918;
        case 0x1c791cu: goto label_1c791c;
        case 0x1c7920u: goto label_1c7920;
        case 0x1c7924u: goto label_1c7924;
        case 0x1c7928u: goto label_1c7928;
        case 0x1c792cu: goto label_1c792c;
        case 0x1c7930u: goto label_1c7930;
        case 0x1c7934u: goto label_1c7934;
        case 0x1c7938u: goto label_1c7938;
        case 0x1c793cu: goto label_1c793c;
        case 0x1c7940u: goto label_1c7940;
        case 0x1c7944u: goto label_1c7944;
        case 0x1c7948u: goto label_1c7948;
        case 0x1c794cu: goto label_1c794c;
        case 0x1c7950u: goto label_1c7950;
        case 0x1c7954u: goto label_1c7954;
        case 0x1c7958u: goto label_1c7958;
        case 0x1c795cu: goto label_1c795c;
        case 0x1c7960u: goto label_1c7960;
        case 0x1c7964u: goto label_1c7964;
        case 0x1c7968u: goto label_1c7968;
        case 0x1c796cu: goto label_1c796c;
        case 0x1c7970u: goto label_1c7970;
        case 0x1c7974u: goto label_1c7974;
        case 0x1c7978u: goto label_1c7978;
        case 0x1c797cu: goto label_1c797c;
        case 0x1c7980u: goto label_1c7980;
        case 0x1c7984u: goto label_1c7984;
        case 0x1c7988u: goto label_1c7988;
        case 0x1c798cu: goto label_1c798c;
        case 0x1c7990u: goto label_1c7990;
        case 0x1c7994u: goto label_1c7994;
        case 0x1c7998u: goto label_1c7998;
        case 0x1c799cu: goto label_1c799c;
        case 0x1c79a0u: goto label_1c79a0;
        case 0x1c79a4u: goto label_1c79a4;
        case 0x1c79a8u: goto label_1c79a8;
        case 0x1c79acu: goto label_1c79ac;
        case 0x1c79b0u: goto label_1c79b0;
        case 0x1c79b4u: goto label_1c79b4;
        case 0x1c79b8u: goto label_1c79b8;
        case 0x1c79bcu: goto label_1c79bc;
        case 0x1c79c0u: goto label_1c79c0;
        case 0x1c79c4u: goto label_1c79c4;
        case 0x1c79c8u: goto label_1c79c8;
        case 0x1c79ccu: goto label_1c79cc;
        case 0x1c79d0u: goto label_1c79d0;
        case 0x1c79d4u: goto label_1c79d4;
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79dcu: goto label_1c79dc;
        case 0x1c79e0u: goto label_1c79e0;
        case 0x1c79e4u: goto label_1c79e4;
        case 0x1c79e8u: goto label_1c79e8;
        case 0x1c79ecu: goto label_1c79ec;
        case 0x1c79f0u: goto label_1c79f0;
        case 0x1c79f4u: goto label_1c79f4;
        case 0x1c79f8u: goto label_1c79f8;
        case 0x1c79fcu: goto label_1c79fc;
        case 0x1c7a00u: goto label_1c7a00;
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a08u: goto label_1c7a08;
        case 0x1c7a0cu: goto label_1c7a0c;
        case 0x1c7a10u: goto label_1c7a10;
        case 0x1c7a14u: goto label_1c7a14;
        case 0x1c7a18u: goto label_1c7a18;
        case 0x1c7a1cu: goto label_1c7a1c;
        case 0x1c7a20u: goto label_1c7a20;
        case 0x1c7a24u: goto label_1c7a24;
        case 0x1c7a28u: goto label_1c7a28;
        case 0x1c7a2cu: goto label_1c7a2c;
        case 0x1c7a30u: goto label_1c7a30;
        case 0x1c7a34u: goto label_1c7a34;
        case 0x1c7a38u: goto label_1c7a38;
        case 0x1c7a3cu: goto label_1c7a3c;
        case 0x1c7a40u: goto label_1c7a40;
        case 0x1c7a44u: goto label_1c7a44;
        case 0x1c7a48u: goto label_1c7a48;
        case 0x1c7a4cu: goto label_1c7a4c;
        case 0x1c7a50u: goto label_1c7a50;
        case 0x1c7a54u: goto label_1c7a54;
        case 0x1c7a58u: goto label_1c7a58;
        case 0x1c7a5cu: goto label_1c7a5c;
        case 0x1c7a60u: goto label_1c7a60;
        case 0x1c7a64u: goto label_1c7a64;
        case 0x1c7a68u: goto label_1c7a68;
        case 0x1c7a6cu: goto label_1c7a6c;
        case 0x1c7a70u: goto label_1c7a70;
        case 0x1c7a74u: goto label_1c7a74;
        case 0x1c7a78u: goto label_1c7a78;
        case 0x1c7a7cu: goto label_1c7a7c;
        case 0x1c7a80u: goto label_1c7a80;
        case 0x1c7a84u: goto label_1c7a84;
        case 0x1c7a88u: goto label_1c7a88;
        case 0x1c7a8cu: goto label_1c7a8c;
        case 0x1c7a90u: goto label_1c7a90;
        case 0x1c7a94u: goto label_1c7a94;
        case 0x1c7a98u: goto label_1c7a98;
        case 0x1c7a9cu: goto label_1c7a9c;
        case 0x1c7aa0u: goto label_1c7aa0;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7aa8u: goto label_1c7aa8;
        case 0x1c7aacu: goto label_1c7aac;
        case 0x1c7ab0u: goto label_1c7ab0;
        case 0x1c7ab4u: goto label_1c7ab4;
        case 0x1c7ab8u: goto label_1c7ab8;
        case 0x1c7abcu: goto label_1c7abc;
        case 0x1c7ac0u: goto label_1c7ac0;
        case 0x1c7ac4u: goto label_1c7ac4;
        case 0x1c7ac8u: goto label_1c7ac8;
        case 0x1c7accu: goto label_1c7acc;
        case 0x1c7ad0u: goto label_1c7ad0;
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7ad8u: goto label_1c7ad8;
        case 0x1c7adcu: goto label_1c7adc;
        case 0x1c7ae0u: goto label_1c7ae0;
        case 0x1c7ae4u: goto label_1c7ae4;
        case 0x1c7ae8u: goto label_1c7ae8;
        case 0x1c7aecu: goto label_1c7aec;
        case 0x1c7af0u: goto label_1c7af0;
        case 0x1c7af4u: goto label_1c7af4;
        case 0x1c7af8u: goto label_1c7af8;
        case 0x1c7afcu: goto label_1c7afc;
        case 0x1c7b00u: goto label_1c7b00;
        case 0x1c7b04u: goto label_1c7b04;
        case 0x1c7b08u: goto label_1c7b08;
        case 0x1c7b0cu: goto label_1c7b0c;
        case 0x1c7b10u: goto label_1c7b10;
        case 0x1c7b14u: goto label_1c7b14;
        case 0x1c7b18u: goto label_1c7b18;
        case 0x1c7b1cu: goto label_1c7b1c;
        case 0x1c7b20u: goto label_1c7b20;
        case 0x1c7b24u: goto label_1c7b24;
        case 0x1c7b28u: goto label_1c7b28;
        case 0x1c7b2cu: goto label_1c7b2c;
        case 0x1c7b30u: goto label_1c7b30;
        case 0x1c7b34u: goto label_1c7b34;
        case 0x1c7b38u: goto label_1c7b38;
        case 0x1c7b3cu: goto label_1c7b3c;
        case 0x1c7b40u: goto label_1c7b40;
        case 0x1c7b44u: goto label_1c7b44;
        case 0x1c7b48u: goto label_1c7b48;
        case 0x1c7b4cu: goto label_1c7b4c;
        case 0x1c7b50u: goto label_1c7b50;
        case 0x1c7b54u: goto label_1c7b54;
        case 0x1c7b58u: goto label_1c7b58;
        case 0x1c7b5cu: goto label_1c7b5c;
        case 0x1c7b60u: goto label_1c7b60;
        case 0x1c7b64u: goto label_1c7b64;
        case 0x1c7b68u: goto label_1c7b68;
        case 0x1c7b6cu: goto label_1c7b6c;
        case 0x1c7b70u: goto label_1c7b70;
        case 0x1c7b74u: goto label_1c7b74;
        case 0x1c7b78u: goto label_1c7b78;
        case 0x1c7b7cu: goto label_1c7b7c;
        case 0x1c7b80u: goto label_1c7b80;
        case 0x1c7b84u: goto label_1c7b84;
        case 0x1c7b88u: goto label_1c7b88;
        case 0x1c7b8cu: goto label_1c7b8c;
        case 0x1c7b90u: goto label_1c7b90;
        case 0x1c7b94u: goto label_1c7b94;
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7b9cu: goto label_1c7b9c;
        case 0x1c7ba0u: goto label_1c7ba0;
        case 0x1c7ba4u: goto label_1c7ba4;
        case 0x1c7ba8u: goto label_1c7ba8;
        case 0x1c7bacu: goto label_1c7bac;
        case 0x1c7bb0u: goto label_1c7bb0;
        case 0x1c7bb4u: goto label_1c7bb4;
        case 0x1c7bb8u: goto label_1c7bb8;
        case 0x1c7bbcu: goto label_1c7bbc;
        case 0x1c7bc0u: goto label_1c7bc0;
        case 0x1c7bc4u: goto label_1c7bc4;
        case 0x1c7bc8u: goto label_1c7bc8;
        case 0x1c7bccu: goto label_1c7bcc;
        case 0x1c7bd0u: goto label_1c7bd0;
        case 0x1c7bd4u: goto label_1c7bd4;
        case 0x1c7bd8u: goto label_1c7bd8;
        case 0x1c7bdcu: goto label_1c7bdc;
        case 0x1c7be0u: goto label_1c7be0;
        case 0x1c7be4u: goto label_1c7be4;
        case 0x1c7be8u: goto label_1c7be8;
        case 0x1c7becu: goto label_1c7bec;
        case 0x1c7bf0u: goto label_1c7bf0;
        case 0x1c7bf4u: goto label_1c7bf4;
        case 0x1c7bf8u: goto label_1c7bf8;
        case 0x1c7bfcu: goto label_1c7bfc;
        case 0x1c7c00u: goto label_1c7c00;
        case 0x1c7c04u: goto label_1c7c04;
        case 0x1c7c08u: goto label_1c7c08;
        case 0x1c7c0cu: goto label_1c7c0c;
        case 0x1c7c10u: goto label_1c7c10;
        case 0x1c7c14u: goto label_1c7c14;
        case 0x1c7c18u: goto label_1c7c18;
        case 0x1c7c1cu: goto label_1c7c1c;
        case 0x1c7c20u: goto label_1c7c20;
        case 0x1c7c24u: goto label_1c7c24;
        case 0x1c7c28u: goto label_1c7c28;
        case 0x1c7c2cu: goto label_1c7c2c;
        case 0x1c7c30u: goto label_1c7c30;
        case 0x1c7c34u: goto label_1c7c34;
        case 0x1c7c38u: goto label_1c7c38;
        case 0x1c7c3cu: goto label_1c7c3c;
        case 0x1c7c40u: goto label_1c7c40;
        case 0x1c7c44u: goto label_1c7c44;
        case 0x1c7c48u: goto label_1c7c48;
        case 0x1c7c4cu: goto label_1c7c4c;
        case 0x1c7c50u: goto label_1c7c50;
        case 0x1c7c54u: goto label_1c7c54;
        case 0x1c7c58u: goto label_1c7c58;
        case 0x1c7c5cu: goto label_1c7c5c;
        case 0x1c7c60u: goto label_1c7c60;
        case 0x1c7c64u: goto label_1c7c64;
        case 0x1c7c68u: goto label_1c7c68;
        case 0x1c7c6cu: goto label_1c7c6c;
        case 0x1c7c70u: goto label_1c7c70;
        case 0x1c7c74u: goto label_1c7c74;
        case 0x1c7c78u: goto label_1c7c78;
        case 0x1c7c7cu: goto label_1c7c7c;
        case 0x1c7c80u: goto label_1c7c80;
        case 0x1c7c84u: goto label_1c7c84;
        case 0x1c7c88u: goto label_1c7c88;
        case 0x1c7c8cu: goto label_1c7c8c;
        case 0x1c7c90u: goto label_1c7c90;
        case 0x1c7c94u: goto label_1c7c94;
        case 0x1c7c98u: goto label_1c7c98;
        case 0x1c7c9cu: goto label_1c7c9c;
        case 0x1c7ca0u: goto label_1c7ca0;
        case 0x1c7ca4u: goto label_1c7ca4;
        case 0x1c7ca8u: goto label_1c7ca8;
        case 0x1c7cacu: goto label_1c7cac;
        case 0x1c7cb0u: goto label_1c7cb0;
        case 0x1c7cb4u: goto label_1c7cb4;
        case 0x1c7cb8u: goto label_1c7cb8;
        case 0x1c7cbcu: goto label_1c7cbc;
        case 0x1c7cc0u: goto label_1c7cc0;
        case 0x1c7cc4u: goto label_1c7cc4;
        case 0x1c7cc8u: goto label_1c7cc8;
        case 0x1c7cccu: goto label_1c7ccc;
        case 0x1c7cd0u: goto label_1c7cd0;
        case 0x1c7cd4u: goto label_1c7cd4;
        default: return;
    }

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
    { ctx->pc = 0x19b8d0; return; }
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
    { ctx->pc = 0x19b5e8; return; }
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
    { ctx->pc = 0x19b850; return; }
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
    { ctx->pc = 0x19b8d0; return; }
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
label_1c7830:
    // 0x1c7830: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x1c7830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_1c7834:
    // 0x1c7834: 0xc60002b4  lwc1        $f0, 0x2B4($s0)
    ctx->pc = 0x1c7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7838:
    // 0x1c7838: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c783c:
    // 0x1c783c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1c783cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_1c7840:
    // 0x1c7840: 0xe654001c  swc1        $f20, 0x1C($s2)
    ctx->pc = 0x1c7840u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_1c7844:
    // 0x1c7844: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1c7844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1c7848:
    // 0x1c7848: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c7848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c784c:
    // 0x1c784c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c7850:
    // 0x1c7850: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1c7850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_1c7854:
    // 0x1c7854: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1c7854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1c7858:
    // 0x1c7858: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x1c7858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_1c785c:
    // 0x1c785c: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1c785cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_1c7860:
    // 0x1c7860: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1c7860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_1c7864:
    // 0x1c7864: 0xc60002b8  lwc1        $f0, 0x2B8($s0)
    ctx->pc = 0x1c7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7868:
    // 0x1c7868: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c786c:
    // 0x1c786c: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1c786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_1c7870:
    // 0x1c7870: 0xc60002bc  lwc1        $f0, 0x2BC($s0)
    ctx->pc = 0x1c7870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7874:
    // 0x1c7874: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c7878:
    // 0x1c7878: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x1c7878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
label_1c787c:
    // 0x1c787c: 0xe6540034  swc1        $f20, 0x34($s2)
    ctx->pc = 0x1c787cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_1c7880:
    // 0x1c7880: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x1c7880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1c7884:
    // 0x1c7884: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c7884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c7888:
    // 0x1c7888: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c7888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c788c:
    // 0x1c788c: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x1c788cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
label_1c7890:
    // 0x1c7890: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x1c7890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1c7894:
    // 0x1c7894: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x1c7894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_1c7898:
    // 0x1c7898: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x1c7898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
label_1c789c:
    // 0x1c789c: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x1c789cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_1c78a0:
    // 0x1c78a0: 0xc60002c0  lwc1        $f0, 0x2C0($s0)
    ctx->pc = 0x1c78a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c78a4:
    // 0x1c78a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c78a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c78a8:
    // 0x1c78a8: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x1c78a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_1c78ac:
    // 0x1c78ac: 0xc60002c4  lwc1        $f0, 0x2C4($s0)
    ctx->pc = 0x1c78acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c78b0:
    // 0x1c78b0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c78b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c78b4:
    // 0x1c78b4: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x1c78b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_1c78b8:
    // 0x1c78b8: 0xe654004c  swc1        $f20, 0x4C($s2)
    ctx->pc = 0x1c78b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_1c78bc:
    // 0x1c78bc: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1c78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1c78c0:
    // 0x1c78c0: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c78c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c78c4:
    // 0x1c78c4: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c78c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c78c8:
    // 0x1c78c8: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x1c78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
label_1c78cc:
    // 0x1c78cc: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1c78ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1c78d0:
    // 0x1c78d0: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x1c78d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
label_1c78d4:
    // 0x1c78d4: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x1c78d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
label_1c78d8:
    // 0x1c78d8: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x1c78d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_1c78dc:
    // 0x1c78dc: 0xc60002c8  lwc1        $f0, 0x2C8($s0)
    ctx->pc = 0x1c78dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c78e0:
    // 0x1c78e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c78e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c78e4:
    // 0x1c78e4: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x1c78e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
label_1c78e8:
    // 0x1c78e8: 0xc60002cc  lwc1        $f0, 0x2CC($s0)
    ctx->pc = 0x1c78e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c78ec:
    // 0x1c78ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c78ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c78f0:
    // 0x1c78f0: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x1c78f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
label_1c78f4:
    // 0x1c78f4: 0xc066c72  jal         func_19B1C8
label_1c78f8:
    if (ctx->pc == 0x1C78F8u) {
        ctx->pc = 0x1C78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78F4u;
        // 0x1c78f8: 0xe6540064  swc1        $f20, 0x64($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C78FCu;
        goto label_1c78fc;
    }
    ctx->pc = 0x1C78F4u;
    SET_GPR_U32(ctx, 31, 0x1C78FCu);
    ctx->pc = 0x1C78F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78F4u;
    // 0x1c78f8: 0xe6540064  swc1        $f20, 0x64($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C78F4u, 0x1C78FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78FCu;
label_1c78fc:
    // 0x1c78fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c78fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c7900:
    // 0x1c7900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c7900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c7904:
    // 0x1c7904: 0x24a54ca0  addiu       $a1, $a1, 0x4CA0
    ctx->pc = 0x1c7904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19616));
label_1c7908:
    // 0x1c7908: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c7908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c790c:
    // 0x1c790c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c790cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7910:
    // 0x1c7910: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7914:
    // 0x1c7914: 0xc066c72  jal         func_19B1C8
label_1c7918:
    if (ctx->pc == 0x1C7918u) {
        ctx->pc = 0x1C7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7914u;
        // 0x1c7918: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C791Cu;
        goto label_1c791c;
    }
    ctx->pc = 0x1C7914u;
    SET_GPR_U32(ctx, 31, 0x1C791Cu);
    ctx->pc = 0x1C7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7914u;
    // 0x1c7918: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C7914u, 0x1C791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C791Cu;
label_1c791c:
    // 0x1c791c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c7920:
    // 0x1c7920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c7920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c7924:
    // 0x1c7924: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c7924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c7928:
    // 0x1c7928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c792c:
    // 0x1c792c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c792cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7930:
    // 0x1c7930: 0xc066c72  jal         func_19B1C8
label_1c7934:
    if (ctx->pc == 0x1C7934u) {
        ctx->pc = 0x1C7934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7930u;
        // 0x1c7934: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7938u;
        goto label_1c7938;
    }
    ctx->pc = 0x1C7930u;
    SET_GPR_U32(ctx, 31, 0x1C7938u);
    ctx->pc = 0x1C7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7930u;
    // 0x1c7934: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C7930u, 0x1C7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7938u;
label_1c7938:
    // 0x1c7938: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c7938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c793c:
    // 0x1c793c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c7940:
    // 0x1c7940: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c7940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c7944:
    // 0x1c7944: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c7948:
    // 0x1c7948: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c7948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c794c:
    // 0x1c794c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c794cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c7950:
    // 0x1c7950: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7954:
    // 0x1c7954: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7958:
    // 0x1c7958: 0x3e00008  jr          $ra
label_1c795c:
    if (ctx->pc == 0x1C795Cu) {
        ctx->pc = 0x1C795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7958u;
        // 0x1c795c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7960u;
        goto label_1c7960;
    }
    ctx->pc = 0x1C7958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7958u;
        // 0x1c795c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7960u;
label_1c7960:
    // 0x1c7960: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1c7960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_1c7964:
    // 0x1c7964: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c7964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1c7968:
    // 0x1c7968: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1c7968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1c796c:
    // 0x1c796c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1c7970:
    // 0x1c7970: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c7970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1c7974:
    // 0x1c7974: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c7974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1c7978:
    // 0x1c7978: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c7978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1c797c:
    // 0x1c797c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c797cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1c7980:
    // 0x1c7980: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c7980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7984:
    // 0x1c7984: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c7984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c7988:
    // 0x1c7988: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c7988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c798c:
    // 0x1c798c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c7990:
    // 0x1c7990: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c7990u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c7994:
    // 0x1c7994: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c7998:
    // 0x1c7998: 0x908402e4  lbu         $a0, 0x2E4($a0)
    ctx->pc = 0x1c7998u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 740)));
label_1c799c:
    // 0x1c799c: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1c799cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c79a0:
    // 0x1c79a0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c79a4:
    if (ctx->pc == 0x1C79A4u) {
        ctx->pc = 0x1C79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79A0u;
        // 0x1c79a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79A8u;
        goto label_1c79a8;
    }
    ctx->pc = 0x1C79A0u;
    {
        const bool branch_taken_0x1c79a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79A0u;
        // 0x1c79a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c79a0) {
            ctx->pc = 0x1C79B4u;
            goto label_1c79b4;
        }
    }
    ctx->pc = 0x1C79A8u;
label_1c79a8:
    // 0x1c79a8: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c79ac:
    // 0x1c79ac: 0x14830236  bne         $a0, $v1, . + 4 + (0x236 << 2)
label_1c79b0:
    if (ctx->pc == 0x1C79B0u) {
        ctx->pc = 0x1C79B4u;
        goto label_1c79b4;
    }
    ctx->pc = 0x1C79ACu;
    {
        const bool branch_taken_0x1c79ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c79ac) {
            ctx->pc = 0x1C8288u;
            { ctx->pc = 0x1c8288; return; }
        }
    }
    ctx->pc = 0x1C79B4u;
label_1c79b4:
    // 0x1c79b4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1c79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c79b8:
    // 0x1c79b8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1c79b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1c79bc:
    // 0x1c79bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c79c0:
    if (ctx->pc == 0x1C79C0u) {
        ctx->pc = 0x1C79C4u;
        goto label_1c79c4;
    }
    ctx->pc = 0x1C79BCu;
    {
        const bool branch_taken_0x1c79bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c79bc) {
            ctx->pc = 0x1C79D4u;
            goto label_1c79d4;
        }
    }
    ctx->pc = 0x1C79C4u;
label_1c79c4:
    // 0x1c79c4: 0x928302e0  lbu         $v1, 0x2E0($s4)
    ctx->pc = 0x1c79c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c79c8:
    // 0x1c79c8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1c79c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1c79cc:
    // 0x1c79cc: 0x1060022e  beqz        $v1, . + 4 + (0x22E << 2)
label_1c79d0:
    if (ctx->pc == 0x1C79D0u) {
        ctx->pc = 0x1C79D4u;
        goto label_1c79d4;
    }
    ctx->pc = 0x1C79CCu;
    {
        const bool branch_taken_0x1c79cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c79cc) {
            ctx->pc = 0x1C8288u;
            { ctx->pc = 0x1c8288; return; }
        }
    }
    ctx->pc = 0x1C79D4u;
label_1c79d4:
    // 0x1c79d4: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c79d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c79d8:
    // 0x1c79d8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c79dc:
    // 0x1c79dc: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x1c79dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_1c79e0:
    // 0x1c79e0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c79e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c79e4:
    // 0x1c79e4: 0x26860250  addiu       $a2, $s4, 0x250
    ctx->pc = 0x1c79e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1c79e8:
    // 0x1c79e8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c79ec:
    // 0x1c79ec: 0xc066d7a  jal         func_19B5E8
label_1c79f0:
    if (ctx->pc == 0x1C79F0u) {
        ctx->pc = 0x1C79F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79ECu;
        // 0x1c79f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79F4u;
        goto label_1c79f4;
    }
    ctx->pc = 0x1C79ECu;
    SET_GPR_U32(ctx, 31, 0x1C79F4u);
    ctx->pc = 0x1C79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79ECu;
    // 0x1c79f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1C79F4u;
label_1c79f4:
    // 0x1c79f4: 0xc07f1a0  jal         func_1FC680
label_1c79f8:
    if (ctx->pc == 0x1C79F8u) {
        ctx->pc = 0x1C79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C79F4u;
        // 0x1c79f8: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C79FCu;
        goto label_1c79fc;
    }
    ctx->pc = 0x1C79F4u;
    SET_GPR_U32(ctx, 31, 0x1C79FCu);
    ctx->pc = 0x1C79F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C79F4u;
    // 0x1c79f8: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x1C79FCu;
label_1c79fc:
    // 0x1c79fc: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x1c79fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7a00:
    // 0x1c7a00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7a04:
    // 0x1c7a04: 0x0  nop
    ctx->pc = 0x1c7a04u;
    // NOP
label_1c7a08:
    // 0x1c7a08: 0x4500021f  bc1f        . + 4 + (0x21F << 2)
label_1c7a0c:
    if (ctx->pc == 0x1C7A0Cu) {
        ctx->pc = 0x1C7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A08u;
        // 0x1c7a0c: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A10u;
        goto label_1c7a10;
    }
    ctx->pc = 0x1C7A08u;
    {
        const bool branch_taken_0x1c7a08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A08u;
        // 0x1c7a0c: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a08) {
            ctx->pc = 0x1C8288u;
            { ctx->pc = 0x1c8288; return; }
        }
    }
    ctx->pc = 0x1C7A10u;
label_1c7a10:
    // 0x1c7a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7a14:
    // 0x1c7a14: 0x0  nop
    ctx->pc = 0x1c7a14u;
    // NOP
label_1c7a18:
    // 0x1c7a18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7a1c:
    // 0x1c7a1c: 0x0  nop
    ctx->pc = 0x1c7a1cu;
    // NOP
label_1c7a20:
    // 0x1c7a20: 0x45010219  bc1t        . + 4 + (0x219 << 2)
label_1c7a24:
    if (ctx->pc == 0x1C7A24u) {
        ctx->pc = 0x1C7A28u;
        goto label_1c7a28;
    }
    ctx->pc = 0x1C7A20u;
    {
        const bool branch_taken_0x1c7a20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7a20) {
            ctx->pc = 0x1C8288u;
            { ctx->pc = 0x1c8288; return; }
        }
    }
    ctx->pc = 0x1C7A28u;
label_1c7a28:
    // 0x1c7a28: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7a2c:
    // 0x1c7a2c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c7a30:
    // 0x1c7a30: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1c7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_1c7a34:
    // 0x1c7a34: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c7a38:
    // 0x1c7a38: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1c7a3c:
    if (ctx->pc == 0x1C7A3Cu) {
        ctx->pc = 0x1C7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A38u;
        // 0x1c7a3c: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A40u;
        goto label_1c7a40;
    }
    ctx->pc = 0x1C7A38u;
    {
        const bool branch_taken_0x1c7a38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A38u;
        // 0x1c7a3c: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a38) {
            ctx->pc = 0x1C7A58u;
            goto label_1c7a58;
        }
    }
    ctx->pc = 0x1C7A40u;
label_1c7a40:
    // 0x1c7a40: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1c7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1c7a44:
    // 0x1c7a44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c7a48:
    // 0x1c7a48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c7a4c:
    // 0x1c7a4c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1c7a50:
    // 0x1c7a50: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c7a54:
    if (ctx->pc == 0x1C7A54u) {
        ctx->pc = 0x1C7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A50u;
        // 0x1c7a54: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A58u;
        goto label_1c7a58;
    }
    ctx->pc = 0x1C7A50u;
    {
        const bool branch_taken_0x1c7a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A50u;
        // 0x1c7a54: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a50) {
            ctx->pc = 0x1C7A6Cu;
            goto label_1c7a6c;
        }
    }
    ctx->pc = 0x1C7A58u;
label_1c7a58:
    // 0x1c7a58: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1c7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1c7a5c:
    // 0x1c7a5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c7a60:
    // 0x1c7a60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c7a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c7a64:
    // 0x1c7a64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c7a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1c7a68:
    // 0x1c7a68: 0x245e0130  addiu       $fp, $v0, 0x130
    ctx->pc = 0x1c7a68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_1c7a6c:
    // 0x1c7a6c: 0xc06462c  jal         func_1918B0
label_1c7a70:
    if (ctx->pc == 0x1C7A70u) {
        ctx->pc = 0x1C7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A6Cu;
        // 0x1c7a70: 0x27d00020  addiu       $s0, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A74u;
        goto label_1c7a74;
    }
    ctx->pc = 0x1C7A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C7A74u);
    ctx->pc = 0x1C7A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A6Cu;
    // 0x1c7a70: 0x27d00020  addiu       $s0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x1C7A6Cu, 0x1C7A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A74u;
label_1c7a74:
    // 0x1c7a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7a78:
    // 0x1c7a78: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7a7c:
    // 0x1c7a7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c7a80:
    // 0x1c7a80: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1c7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1c7a84:
    // 0x1c7a84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7a88:
    // 0x1c7a88: 0x0  nop
    ctx->pc = 0x1c7a88u;
    // NOP
label_1c7a8c:
    // 0x1c7a8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c7a8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c7a90:
    // 0x1c7a90: 0xc064624  jal         func_191890
label_1c7a94:
    if (ctx->pc == 0x1C7A94u) {
        ctx->pc = 0x1C7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7A90u;
        // 0x1c7a94: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7A98u;
        goto label_1c7a98;
    }
    ctx->pc = 0x1C7A90u;
    SET_GPR_U32(ctx, 31, 0x1C7A98u);
    ctx->pc = 0x1C7A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7A90u;
    // 0x1c7a94: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x1C7A90u, 0x1C7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7A98u;
label_1c7a98:
    // 0x1c7a98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7a9c:
    // 0x1c7a9c: 0x3c0342e0  lui         $v1, 0x42E0
    ctx->pc = 0x1c7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17120 << 16));
label_1c7aa0:
    // 0x1c7aa0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7aa4:
    // 0x1c7aa4: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7aa8:
    // 0x1c7aa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c7aac:
    // 0x1c7aac: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1c7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_1c7ab0:
    // 0x1c7ab0: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x1c7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_1c7ab4:
    // 0x1c7ab4: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1c7ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_1c7ab8:
    // 0x1c7ab8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c7ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c7abc:
    // 0x1c7abc: 0xc06462c  jal         func_1918B0
label_1c7ac0:
    if (ctx->pc == 0x1C7AC0u) {
        ctx->pc = 0x1C7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7ABCu;
        // 0x1c7ac0: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AC4u;
        goto label_1c7ac4;
    }
    ctx->pc = 0x1C7ABCu;
    SET_GPR_U32(ctx, 31, 0x1C7AC4u);
    ctx->pc = 0x1C7AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7ABCu;
    // 0x1c7ac0: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1918B0u, 0x1C7ABCu, 0x1C7AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AC4u;
label_1c7ac4:
    // 0x1c7ac4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7ac8:
    // 0x1c7ac8: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7acc:
    // 0x1c7acc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c7ad0:
    // 0x1c7ad0: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1c7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1c7ad4:
    // 0x1c7ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ad8:
    // 0x1c7ad8: 0x0  nop
    ctx->pc = 0x1c7ad8u;
    // NOP
label_1c7adc:
    // 0x1c7adc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c7adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c7ae0:
    // 0x1c7ae0: 0xc064624  jal         func_191890
label_1c7ae4:
    if (ctx->pc == 0x1C7AE4u) {
        ctx->pc = 0x1C7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7AE0u;
        // 0x1c7ae4: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7AE8u;
        goto label_1c7ae8;
    }
    ctx->pc = 0x1C7AE0u;
    SET_GPR_U32(ctx, 31, 0x1C7AE8u);
    ctx->pc = 0x1C7AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7AE0u;
    // 0x1c7ae4: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191890u, 0x1C7AE0u, 0x1C7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7AE8u;
label_1c7ae8:
    // 0x1c7ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7aec:
    // 0x1c7aec: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7af0:
    // 0x1c7af0: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x1c7af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_1c7af4:
    // 0x1c7af4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c7af4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c7af8:
    // 0x1c7af8: 0x3c0242e0  lui         $v0, 0x42E0
    ctx->pc = 0x1c7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17120 << 16));
label_1c7afc:
    // 0x1c7afc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7afcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7b00:
    // 0x1c7b00: 0x0  nop
    ctx->pc = 0x1c7b00u;
    // NOP
label_1c7b04:
    // 0x1c7b04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c7b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c7b08:
    // 0x1c7b08: 0xc07f1a0  jal         func_1FC680
label_1c7b0c:
    if (ctx->pc == 0x1C7B0Cu) {
        ctx->pc = 0x1C7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B08u;
        // 0x1c7b0c: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B10u;
        goto label_1c7b10;
    }
    ctx->pc = 0x1C7B08u;
    SET_GPR_U32(ctx, 31, 0x1C7B10u);
    ctx->pc = 0x1C7B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B08u;
    // 0x1c7b0c: 0xe7a00114  swc1        $f0, 0x114($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x1C7B10u;
label_1c7b10:
    // 0x1c7b10: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1c7b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1c7b14:
    // 0x1c7b14: 0xc6810324  lwc1        $f1, 0x324($s4)
    ctx->pc = 0x1c7b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c7b18:
    // 0x1c7b18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7b1c:
    // 0x1c7b1c: 0x0  nop
    ctx->pc = 0x1c7b1cu;
    // NOP
label_1c7b20:
    // 0x1c7b20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c7b20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7b24:
    // 0x1c7b24: 0x0  nop
    ctx->pc = 0x1c7b24u;
    // NOP
label_1c7b28:
    // 0x1c7b28: 0x45010028  bc1t        . + 4 + (0x28 << 2)
label_1c7b2c:
    if (ctx->pc == 0x1C7B2Cu) {
        ctx->pc = 0x1C7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B28u;
        // 0x1c7b2c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B30u;
        goto label_1c7b30;
    }
    ctx->pc = 0x1C7B28u;
    {
        const bool branch_taken_0x1c7b28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B28u;
        // 0x1c7b2c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b28) {
            ctx->pc = 0x1C7BCCu;
            goto label_1c7bcc;
        }
    }
    ctx->pc = 0x1C7B30u;
label_1c7b30:
    // 0x1c7b30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7b34:
    // 0x1c7b34: 0x27b1014c  addiu       $s1, $sp, 0x14C
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_1c7b38:
    // 0x1c7b38: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1c7b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1c7b3c:
    // 0x1c7b3c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1c7b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1c7b40:
    // 0x1c7b40: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1c7b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1c7b44:
    // 0x1c7b44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c7b48:
    // 0x1c7b48: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7b4c:
    // 0x1c7b4c: 0xc06465c  jal         func_191970
label_1c7b50:
    if (ctx->pc == 0x1C7B50u) {
        ctx->pc = 0x1C7B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B4Cu;
        // 0x1c7b50: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B54u;
        goto label_1c7b54;
    }
    ctx->pc = 0x1C7B4Cu;
    SET_GPR_U32(ctx, 31, 0x1C7B54u);
    ctx->pc = 0x1C7B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B4Cu;
    // 0x1c7b50: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191970u, 0x1C7B4Cu, 0x1C7B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B54u;
label_1c7b54:
    // 0x1c7b54: 0xc066e44  jal         func_19B910
label_1c7b58:
    if (ctx->pc == 0x1C7B58u) {
        ctx->pc = 0x1C7B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B54u;
        // 0x1c7b58: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B5Cu;
        goto label_1c7b5c;
    }
    ctx->pc = 0x1C7B54u;
    SET_GPR_U32(ctx, 31, 0x1C7B5Cu);
    ctx->pc = 0x1C7B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B54u;
    // 0x1c7b58: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1C7B5Cu;
label_1c7b5c:
    // 0x1c7b5c: 0xc68c0320  lwc1        $f12, 0x320($s4)
    ctx->pc = 0x1c7b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7b60:
    // 0x1c7b60: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1c7b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1c7b64:
    // 0x1c7b64: 0xc066e6c  jal         func_19B9B0
label_1c7b68:
    if (ctx->pc == 0x1C7B68u) {
        ctx->pc = 0x1C7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B64u;
        // 0x1c7b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B6Cu;
        goto label_1c7b6c;
    }
    ctx->pc = 0x1C7B64u;
    SET_GPR_U32(ctx, 31, 0x1C7B6Cu);
    ctx->pc = 0x1C7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B64u;
    // 0x1c7b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1C7B6Cu;
label_1c7b6c:
    // 0x1c7b6c: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x1c7b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7b70:
    // 0x1c7b70: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1c7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1c7b74:
    // 0x1c7b74: 0xc066e96  jal         func_19BA58
label_1c7b78:
    if (ctx->pc == 0x1C7B78u) {
        ctx->pc = 0x1C7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B74u;
        // 0x1c7b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B7Cu;
        goto label_1c7b7c;
    }
    ctx->pc = 0x1C7B74u;
    SET_GPR_U32(ctx, 31, 0x1C7B7Cu);
    ctx->pc = 0x1C7B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B74u;
    // 0x1c7b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C7B7Cu;
label_1c7b7c:
    // 0x1c7b7c: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x1c7b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7b80:
    // 0x1c7b80: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1c7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1c7b84:
    // 0x1c7b84: 0xc066ec0  jal         func_19BB00
label_1c7b88:
    if (ctx->pc == 0x1C7B88u) {
        ctx->pc = 0x1C7B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B84u;
        // 0x1c7b88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B8Cu;
        goto label_1c7b8c;
    }
    ctx->pc = 0x1C7B84u;
    SET_GPR_U32(ctx, 31, 0x1C7B8Cu);
    ctx->pc = 0x1C7B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B84u;
    // 0x1c7b88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C7B8Cu;
label_1c7b8c:
    // 0x1c7b8c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c7b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1c7b90:
    // 0x1c7b90: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1c7b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1c7b94:
    // 0x1c7b94: 0xc066d7a  jal         func_19B5E8
label_1c7b98:
    if (ctx->pc == 0x1C7B98u) {
        ctx->pc = 0x1C7B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7B94u;
        // 0x1c7b98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7B9Cu;
        goto label_1c7b9c;
    }
    ctx->pc = 0x1C7B94u;
    SET_GPR_U32(ctx, 31, 0x1C7B9Cu);
    ctx->pc = 0x1C7B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7B94u;
    // 0x1c7b98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1C7B9Cu;
label_1c7b9c:
    // 0x1c7b9c: 0xc68c0324  lwc1        $f12, 0x324($s4)
    ctx->pc = 0x1c7b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7ba0:
    // 0x1c7ba0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1c7ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1c7ba4:
    // 0x1c7ba4: 0xc066e14  jal         func_19B850
label_1c7ba8:
    if (ctx->pc == 0x1C7BA8u) {
        ctx->pc = 0x1C7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BA4u;
        // 0x1c7ba8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BACu;
        goto label_1c7bac;
    }
    ctx->pc = 0x1C7BA4u;
    SET_GPR_U32(ctx, 31, 0x1C7BACu);
    ctx->pc = 0x1C7BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BA4u;
    // 0x1c7ba8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1C7BACu;
label_1c7bac:
    // 0x1c7bac: 0x26840250  addiu       $a0, $s4, 0x250
    ctx->pc = 0x1c7bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1c7bb0:
    // 0x1c7bb0: 0x26850310  addiu       $a1, $s4, 0x310
    ctx->pc = 0x1c7bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
label_1c7bb4:
    // 0x1c7bb4: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1c7bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1c7bb8:
    // 0x1c7bb8: 0xc066e02  jal         func_19B808
label_1c7bbc:
    if (ctx->pc == 0x1C7BBCu) {
        ctx->pc = 0x1C7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BB8u;
        // 0x1c7bbc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BC0u;
        goto label_1c7bc0;
    }
    ctx->pc = 0x1C7BB8u;
    SET_GPR_U32(ctx, 31, 0x1C7BC0u);
    ctx->pc = 0x1C7BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BB8u;
    // 0x1c7bbc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1C7BC0u;
label_1c7bc0:
    // 0x1c7bc0: 0xc6800320  lwc1        $f0, 0x320($s4)
    ctx->pc = 0x1c7bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7bc4:
    // 0x1c7bc4: 0xe68002a8  swc1        $f0, 0x2A8($s4)
    ctx->pc = 0x1c7bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 680), bits); }
label_1c7bc8:
    // 0x1c7bc8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7bcc:
    // 0x1c7bcc: 0xc066e44  jal         func_19B910
label_1c7bd0:
    if (ctx->pc == 0x1C7BD0u) {
        ctx->pc = 0x1C7BD4u;
        goto label_1c7bd4;
    }
    ctx->pc = 0x1C7BCCu;
    SET_GPR_U32(ctx, 31, 0x1C7BD4u);
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1C7BD4u;
label_1c7bd4:
    // 0x1c7bd4: 0xc68c02a8  lwc1        $f12, 0x2A8($s4)
    ctx->pc = 0x1c7bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7bd8:
    // 0x1c7bd8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7bdc:
    // 0x1c7bdc: 0xc066e6c  jal         func_19B9B0
label_1c7be0:
    if (ctx->pc == 0x1C7BE0u) {
        ctx->pc = 0x1C7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BDCu;
        // 0x1c7be0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BE4u;
        goto label_1c7be4;
    }
    ctx->pc = 0x1C7BDCu;
    SET_GPR_U32(ctx, 31, 0x1C7BE4u);
    ctx->pc = 0x1C7BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7BDCu;
    // 0x1c7be0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1C7BE4u;
label_1c7be4:
    // 0x1c7be4: 0x928302e2  lbu         $v1, 0x2E2($s4)
    ctx->pc = 0x1c7be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 738)));
label_1c7be8:
    // 0x1c7be8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c7bec:
    // 0x1c7bec: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_1c7bf0:
    if (ctx->pc == 0x1C7BF0u) {
        ctx->pc = 0x1C7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BECu;
        // 0x1c7bf0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BF4u;
        goto label_1c7bf4;
    }
    ctx->pc = 0x1C7BECu;
    {
        const bool branch_taken_0x1c7bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BECu;
        // 0x1c7bf0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bec) {
            ctx->pc = 0x1C7CD0u;
            goto label_1c7cd0;
        }
    }
    ctx->pc = 0x1C7BF4u;
label_1c7bf4:
    // 0x1c7bf4: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_1c7bf8:
    if (ctx->pc == 0x1C7BF8u) {
        ctx->pc = 0x1C7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BF4u;
        // 0x1c7bf8: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7BFCu;
        goto label_1c7bfc;
    }
    ctx->pc = 0x1C7BF4u;
    {
        const bool branch_taken_0x1c7bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7BF4u;
        // 0x1c7bf8: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bf4) {
            ctx->pc = 0x1C7CA4u;
            goto label_1c7ca4;
        }
    }
    ctx->pc = 0x1C7BFCu;
label_1c7bfc:
    // 0x1c7bfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7c00:
    // 0x1c7c00: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1c7c04:
    if (ctx->pc == 0x1C7C04u) {
        ctx->pc = 0x1C7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C00u;
        // 0x1c7c04: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C08u;
        goto label_1c7c08;
    }
    ctx->pc = 0x1C7C00u;
    {
        const bool branch_taken_0x1c7c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C00u;
        // 0x1c7c04: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c00) {
            ctx->pc = 0x1C7C78u;
            goto label_1c7c78;
        }
    }
    ctx->pc = 0x1C7C08u;
label_1c7c08:
    // 0x1c7c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7c0c:
    // 0x1c7c0c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1c7c10:
    if (ctx->pc == 0x1C7C10u) {
        ctx->pc = 0x1C7C14u;
        goto label_1c7c14;
    }
    ctx->pc = 0x1C7C0Cu;
    {
        const bool branch_taken_0x1c7c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7c0c) {
            ctx->pc = 0x1C7C4Cu;
            goto label_1c7c4c;
        }
    }
    ctx->pc = 0x1C7C14u;
label_1c7c14:
    // 0x1c7c14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c7c18:
    if (ctx->pc == 0x1C7C18u) {
        ctx->pc = 0x1C7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C14u;
        // 0x1c7c18: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C1Cu;
        goto label_1c7c1c;
    }
    ctx->pc = 0x1C7C14u;
    {
        const bool branch_taken_0x1c7c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C14u;
        // 0x1c7c18: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c14) {
            ctx->pc = 0x1C7C24u;
            goto label_1c7c24;
        }
    }
    ctx->pc = 0x1C7C1Cu;
label_1c7c1c:
    // 0x1c7c1c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1c7c20:
    if (ctx->pc == 0x1C7C20u) {
        ctx->pc = 0x1C7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C1Cu;
        // 0x1c7c20: 0xc68c02a0  lwc1        $f12, 0x2A0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C24u;
        goto label_1c7c24;
    }
    ctx->pc = 0x1C7C1Cu;
    {
        const bool branch_taken_0x1c7c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C1Cu;
        // 0x1c7c20: 0xc68c02a0  lwc1        $f12, 0x2A0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c1c) {
            ctx->pc = 0x1C7CD4u;
            goto label_1c7cd4;
        }
    }
    ctx->pc = 0x1C7C24u;
label_1c7c24:
    // 0x1c7c24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7c28:
    // 0x1c7c28: 0xc42c39f0  lwc1        $f12, 0x39F0($at)
    ctx->pc = 0x1c7c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7c2c:
    // 0x1c7c2c: 0xc066e96  jal         func_19BA58
label_1c7c30:
    if (ctx->pc == 0x1C7C30u) {
        ctx->pc = 0x1C7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C2Cu;
        // 0x1c7c30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C34u;
        goto label_1c7c34;
    }
    ctx->pc = 0x1C7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C34u);
    ctx->pc = 0x1C7C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C2Cu;
    // 0x1c7c30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C7C34u;
label_1c7c34:
    // 0x1c7c34: 0xc68c02a4  lwc1        $f12, 0x2A4($s4)
    ctx->pc = 0x1c7c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7c38:
    // 0x1c7c38: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7c3c:
    // 0x1c7c3c: 0xc066ec0  jal         func_19BB00
label_1c7c40:
    if (ctx->pc == 0x1C7C40u) {
        ctx->pc = 0x1C7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C3Cu;
        // 0x1c7c40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C44u;
        goto label_1c7c44;
    }
    ctx->pc = 0x1C7C3Cu;
    SET_GPR_U32(ctx, 31, 0x1C7C44u);
    ctx->pc = 0x1C7C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C3Cu;
    // 0x1c7c40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C7C44u;
label_1c7c44:
    // 0x1c7c44: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1c7c48:
    if (ctx->pc == 0x1C7C48u) {
        ctx->pc = 0x1C7C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C44u;
        // 0x1c7c48: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C4Cu;
        goto label_1c7c4c;
    }
    ctx->pc = 0x1C7C44u;
    {
        const bool branch_taken_0x1c7c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C44u;
        // 0x1c7c48: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c44) {
            ctx->pc = 0x1C7CF4u;
            { ctx->pc = 0x1c7cf4; return; }
        }
    }
    ctx->pc = 0x1C7C4Cu;
label_1c7c4c:
    // 0x1c7c4c: 0xc68c02a0  lwc1        $f12, 0x2A0($s4)
    ctx->pc = 0x1c7c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7c50:
    // 0x1c7c50: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7c54:
    // 0x1c7c54: 0xc066e96  jal         func_19BA58
label_1c7c58:
    if (ctx->pc == 0x1C7C58u) {
        ctx->pc = 0x1C7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C54u;
        // 0x1c7c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C5Cu;
        goto label_1c7c5c;
    }
    ctx->pc = 0x1C7C54u;
    SET_GPR_U32(ctx, 31, 0x1C7C5Cu);
    ctx->pc = 0x1C7C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C54u;
    // 0x1c7c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C7C5Cu;
label_1c7c5c:
    // 0x1c7c5c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1c7c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1c7c60:
    // 0x1c7c60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7c64:
    // 0x1c7c64: 0xc42c39f4  lwc1        $f12, 0x39F4($at)
    ctx->pc = 0x1c7c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7c68:
    // 0x1c7c68: 0xc066ec0  jal         func_19BB00
label_1c7c6c:
    if (ctx->pc == 0x1C7C6Cu) {
        ctx->pc = 0x1C7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C68u;
        // 0x1c7c6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C70u;
        goto label_1c7c70;
    }
    ctx->pc = 0x1C7C68u;
    SET_GPR_U32(ctx, 31, 0x1C7C70u);
    ctx->pc = 0x1C7C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C68u;
    // 0x1c7c6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C7C70u;
label_1c7c70:
    // 0x1c7c70: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1c7c74:
    if (ctx->pc == 0x1C7C74u) {
        ctx->pc = 0x1C7C78u;
        goto label_1c7c78;
    }
    ctx->pc = 0x1C7C70u;
    {
        const bool branch_taken_0x1c7c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c70) {
            ctx->pc = 0x1C7CF0u;
            { ctx->pc = 0x1c7cf0; return; }
        }
    }
    ctx->pc = 0x1C7C78u;
label_1c7c78:
    // 0x1c7c78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7c7c:
    // 0x1c7c7c: 0xc42c39f0  lwc1        $f12, 0x39F0($at)
    ctx->pc = 0x1c7c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7c80:
    // 0x1c7c80: 0xc066e96  jal         func_19BA58
label_1c7c84:
    if (ctx->pc == 0x1C7C84u) {
        ctx->pc = 0x1C7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C80u;
        // 0x1c7c84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C88u;
        goto label_1c7c88;
    }
    ctx->pc = 0x1C7C80u;
    SET_GPR_U32(ctx, 31, 0x1C7C88u);
    ctx->pc = 0x1C7C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C80u;
    // 0x1c7c84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C7C88u;
label_1c7c88:
    // 0x1c7c88: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1c7c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1c7c8c:
    // 0x1c7c8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7c90:
    // 0x1c7c90: 0xc42c39f4  lwc1        $f12, 0x39F4($at)
    ctx->pc = 0x1c7c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7c94:
    // 0x1c7c94: 0xc066ec0  jal         func_19BB00
label_1c7c98:
    if (ctx->pc == 0x1C7C98u) {
        ctx->pc = 0x1C7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7C94u;
        // 0x1c7c98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7C9Cu;
        goto label_1c7c9c;
    }
    ctx->pc = 0x1C7C94u;
    SET_GPR_U32(ctx, 31, 0x1C7C9Cu);
    ctx->pc = 0x1C7C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7C94u;
    // 0x1c7c98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C7C9Cu;
label_1c7c9c:
    // 0x1c7c9c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c7ca0:
    if (ctx->pc == 0x1C7CA0u) {
        ctx->pc = 0x1C7CA4u;
        goto label_1c7ca4;
    }
    ctx->pc = 0x1C7C9Cu;
    {
        const bool branch_taken_0x1c7c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c9c) {
            ctx->pc = 0x1C7CF0u;
            { ctx->pc = 0x1c7cf0; return; }
        }
    }
    ctx->pc = 0x1C7CA4u;
label_1c7ca4:
    // 0x1c7ca4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7ca8:
    // 0x1c7ca8: 0xc42c39f0  lwc1        $f12, 0x39F0($at)
    ctx->pc = 0x1c7ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7cac:
    // 0x1c7cac: 0xc066e96  jal         func_19BA58
label_1c7cb0:
    if (ctx->pc == 0x1C7CB0u) {
        ctx->pc = 0x1C7CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CACu;
        // 0x1c7cb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7CB4u;
        goto label_1c7cb4;
    }
    ctx->pc = 0x1C7CACu;
    SET_GPR_U32(ctx, 31, 0x1C7CB4u);
    ctx->pc = 0x1C7CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CACu;
    // 0x1c7cb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C7CB4u;
label_1c7cb4:
    // 0x1c7cb4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1c7cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1c7cb8:
    // 0x1c7cb8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7cbc:
    // 0x1c7cbc: 0xc42c39f4  lwc1        $f12, 0x39F4($at)
    ctx->pc = 0x1c7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7cc0:
    // 0x1c7cc0: 0xc066ec0  jal         func_19BB00
label_1c7cc4:
    if (ctx->pc == 0x1C7CC4u) {
        ctx->pc = 0x1C7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CC0u;
        // 0x1c7cc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7CC8u;
        goto label_1c7cc8;
    }
    ctx->pc = 0x1C7CC0u;
    SET_GPR_U32(ctx, 31, 0x1C7CC8u);
    ctx->pc = 0x1C7CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CC0u;
    // 0x1c7cc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C7CC8u;
label_1c7cc8:
    // 0x1c7cc8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c7ccc:
    if (ctx->pc == 0x1C7CCCu) {
        ctx->pc = 0x1C7CD0u;
        goto label_1c7cd0;
    }
    ctx->pc = 0x1C7CC8u;
    {
        const bool branch_taken_0x1c7cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7cc8) {
            ctx->pc = 0x1C7CF0u;
            { ctx->pc = 0x1c7cf0; return; }
        }
    }
    ctx->pc = 0x1C7CD0u;
label_1c7cd0:
    // 0x1c7cd0: 0xc68c02a0  lwc1        $f12, 0x2A0($s4)
    ctx->pc = 0x1c7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7cd4:
    // 0x1c7cd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x1c7cd8u;
    return;
}

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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b75a0u: goto label_1b75a0;
        case 0x1b75a4u: goto label_1b75a4;
        case 0x1b75a8u: goto label_1b75a8;
        case 0x1b75acu: goto label_1b75ac;
        case 0x1b75b0u: goto label_1b75b0;
        case 0x1b75b4u: goto label_1b75b4;
        case 0x1b75b8u: goto label_1b75b8;
        case 0x1b75bcu: goto label_1b75bc;
        case 0x1b75c0u: goto label_1b75c0;
        case 0x1b75c4u: goto label_1b75c4;
        case 0x1b75c8u: goto label_1b75c8;
        case 0x1b75ccu: goto label_1b75cc;
        case 0x1b75d0u: goto label_1b75d0;
        case 0x1b75d4u: goto label_1b75d4;
        case 0x1b75d8u: goto label_1b75d8;
        case 0x1b75dcu: goto label_1b75dc;
        case 0x1b75e0u: goto label_1b75e0;
        case 0x1b75e4u: goto label_1b75e4;
        case 0x1b75e8u: goto label_1b75e8;
        case 0x1b75ecu: goto label_1b75ec;
        case 0x1b75f0u: goto label_1b75f0;
        case 0x1b75f4u: goto label_1b75f4;
        case 0x1b75f8u: goto label_1b75f8;
        case 0x1b75fcu: goto label_1b75fc;
        case 0x1b7600u: goto label_1b7600;
        case 0x1b7604u: goto label_1b7604;
        case 0x1b7608u: goto label_1b7608;
        case 0x1b760cu: goto label_1b760c;
        case 0x1b7610u: goto label_1b7610;
        case 0x1b7614u: goto label_1b7614;
        case 0x1b7618u: goto label_1b7618;
        case 0x1b761cu: goto label_1b761c;
        case 0x1b7620u: goto label_1b7620;
        case 0x1b7624u: goto label_1b7624;
        case 0x1b7628u: goto label_1b7628;
        case 0x1b762cu: goto label_1b762c;
        case 0x1b7630u: goto label_1b7630;
        case 0x1b7634u: goto label_1b7634;
        case 0x1b7638u: goto label_1b7638;
        case 0x1b763cu: goto label_1b763c;
        case 0x1b7640u: goto label_1b7640;
        case 0x1b7644u: goto label_1b7644;
        case 0x1b7648u: goto label_1b7648;
        case 0x1b764cu: goto label_1b764c;
        case 0x1b7650u: goto label_1b7650;
        case 0x1b7654u: goto label_1b7654;
        case 0x1b7658u: goto label_1b7658;
        case 0x1b765cu: goto label_1b765c;
        case 0x1b7660u: goto label_1b7660;
        case 0x1b7664u: goto label_1b7664;
        case 0x1b7668u: goto label_1b7668;
        case 0x1b766cu: goto label_1b766c;
        case 0x1b7670u: goto label_1b7670;
        case 0x1b7674u: goto label_1b7674;
        case 0x1b7678u: goto label_1b7678;
        case 0x1b767cu: goto label_1b767c;
        case 0x1b7680u: goto label_1b7680;
        case 0x1b7684u: goto label_1b7684;
        case 0x1b7688u: goto label_1b7688;
        case 0x1b768cu: goto label_1b768c;
        case 0x1b7690u: goto label_1b7690;
        case 0x1b7694u: goto label_1b7694;
        case 0x1b7698u: goto label_1b7698;
        case 0x1b769cu: goto label_1b769c;
        case 0x1b76a0u: goto label_1b76a0;
        case 0x1b76a4u: goto label_1b76a4;
        case 0x1b76a8u: goto label_1b76a8;
        case 0x1b76acu: goto label_1b76ac;
        case 0x1b76b0u: goto label_1b76b0;
        case 0x1b76b4u: goto label_1b76b4;
        case 0x1b76b8u: goto label_1b76b8;
        case 0x1b76bcu: goto label_1b76bc;
        case 0x1b76c0u: goto label_1b76c0;
        case 0x1b76c4u: goto label_1b76c4;
        case 0x1b76c8u: goto label_1b76c8;
        case 0x1b76ccu: goto label_1b76cc;
        case 0x1b76d0u: goto label_1b76d0;
        case 0x1b76d4u: goto label_1b76d4;
        case 0x1b76d8u: goto label_1b76d8;
        case 0x1b76dcu: goto label_1b76dc;
        case 0x1b76e0u: goto label_1b76e0;
        case 0x1b76e4u: goto label_1b76e4;
        case 0x1b76e8u: goto label_1b76e8;
        case 0x1b76ecu: goto label_1b76ec;
        case 0x1b76f0u: goto label_1b76f0;
        case 0x1b76f4u: goto label_1b76f4;
        case 0x1b76f8u: goto label_1b76f8;
        case 0x1b76fcu: goto label_1b76fc;
        case 0x1b7700u: goto label_1b7700;
        case 0x1b7704u: goto label_1b7704;
        case 0x1b7708u: goto label_1b7708;
        case 0x1b770cu: goto label_1b770c;
        case 0x1b7710u: goto label_1b7710;
        case 0x1b7714u: goto label_1b7714;
        case 0x1b7718u: goto label_1b7718;
        case 0x1b771cu: goto label_1b771c;
        case 0x1b7720u: goto label_1b7720;
        case 0x1b7724u: goto label_1b7724;
        case 0x1b7728u: goto label_1b7728;
        case 0x1b772cu: goto label_1b772c;
        case 0x1b7730u: goto label_1b7730;
        case 0x1b7734u: goto label_1b7734;
        case 0x1b7738u: goto label_1b7738;
        case 0x1b773cu: goto label_1b773c;
        case 0x1b7740u: goto label_1b7740;
        case 0x1b7744u: goto label_1b7744;
        case 0x1b7748u: goto label_1b7748;
        case 0x1b774cu: goto label_1b774c;
        case 0x1b7750u: goto label_1b7750;
        case 0x1b7754u: goto label_1b7754;
        case 0x1b7758u: goto label_1b7758;
        case 0x1b775cu: goto label_1b775c;
        case 0x1b7760u: goto label_1b7760;
        case 0x1b7764u: goto label_1b7764;
        case 0x1b7768u: goto label_1b7768;
        case 0x1b776cu: goto label_1b776c;
        case 0x1b7770u: goto label_1b7770;
        case 0x1b7774u: goto label_1b7774;
        case 0x1b7778u: goto label_1b7778;
        case 0x1b777cu: goto label_1b777c;
        case 0x1b7780u: goto label_1b7780;
        case 0x1b7784u: goto label_1b7784;
        case 0x1b7788u: goto label_1b7788;
        case 0x1b778cu: goto label_1b778c;
        case 0x1b7790u: goto label_1b7790;
        case 0x1b7794u: goto label_1b7794;
        case 0x1b7798u: goto label_1b7798;
        case 0x1b779cu: goto label_1b779c;
        case 0x1b77a0u: goto label_1b77a0;
        case 0x1b77a4u: goto label_1b77a4;
        case 0x1b77a8u: goto label_1b77a8;
        case 0x1b77acu: goto label_1b77ac;
        case 0x1b77b0u: goto label_1b77b0;
        case 0x1b77b4u: goto label_1b77b4;
        case 0x1b77b8u: goto label_1b77b8;
        case 0x1b77bcu: goto label_1b77bc;
        case 0x1b77c0u: goto label_1b77c0;
        case 0x1b77c4u: goto label_1b77c4;
        case 0x1b77c8u: goto label_1b77c8;
        case 0x1b77ccu: goto label_1b77cc;
        case 0x1b77d0u: goto label_1b77d0;
        case 0x1b77d4u: goto label_1b77d4;
        case 0x1b77d8u: goto label_1b77d8;
        case 0x1b77dcu: goto label_1b77dc;
        case 0x1b77e0u: goto label_1b77e0;
        case 0x1b77e4u: goto label_1b77e4;
        case 0x1b77e8u: goto label_1b77e8;
        case 0x1b77ecu: goto label_1b77ec;
        case 0x1b77f0u: goto label_1b77f0;
        case 0x1b77f4u: goto label_1b77f4;
        case 0x1b77f8u: goto label_1b77f8;
        case 0x1b77fcu: goto label_1b77fc;
        case 0x1b7800u: goto label_1b7800;
        case 0x1b7804u: goto label_1b7804;
        case 0x1b7808u: goto label_1b7808;
        case 0x1b780cu: goto label_1b780c;
        case 0x1b7810u: goto label_1b7810;
        case 0x1b7814u: goto label_1b7814;
        case 0x1b7818u: goto label_1b7818;
        case 0x1b781cu: goto label_1b781c;
        case 0x1b7820u: goto label_1b7820;
        case 0x1b7824u: goto label_1b7824;
        case 0x1b7828u: goto label_1b7828;
        case 0x1b782cu: goto label_1b782c;
        case 0x1b7830u: goto label_1b7830;
        case 0x1b7834u: goto label_1b7834;
        case 0x1b7838u: goto label_1b7838;
        case 0x1b783cu: goto label_1b783c;
        case 0x1b7840u: goto label_1b7840;
        case 0x1b7844u: goto label_1b7844;
        case 0x1b7848u: goto label_1b7848;
        case 0x1b784cu: goto label_1b784c;
        case 0x1b7850u: goto label_1b7850;
        case 0x1b7854u: goto label_1b7854;
        case 0x1b7858u: goto label_1b7858;
        case 0x1b785cu: goto label_1b785c;
        case 0x1b7860u: goto label_1b7860;
        case 0x1b7864u: goto label_1b7864;
        case 0x1b7868u: goto label_1b7868;
        case 0x1b786cu: goto label_1b786c;
        case 0x1b7870u: goto label_1b7870;
        case 0x1b7874u: goto label_1b7874;
        case 0x1b7878u: goto label_1b7878;
        case 0x1b787cu: goto label_1b787c;
        case 0x1b7880u: goto label_1b7880;
        case 0x1b7884u: goto label_1b7884;
        case 0x1b7888u: goto label_1b7888;
        case 0x1b788cu: goto label_1b788c;
        case 0x1b7890u: goto label_1b7890;
        case 0x1b7894u: goto label_1b7894;
        case 0x1b7898u: goto label_1b7898;
        case 0x1b789cu: goto label_1b789c;
        case 0x1b78a0u: goto label_1b78a0;
        case 0x1b78a4u: goto label_1b78a4;
        case 0x1b78a8u: goto label_1b78a8;
        case 0x1b78acu: goto label_1b78ac;
        case 0x1b78b0u: goto label_1b78b0;
        case 0x1b78b4u: goto label_1b78b4;
        case 0x1b78b8u: goto label_1b78b8;
        case 0x1b78bcu: goto label_1b78bc;
        case 0x1b78c0u: goto label_1b78c0;
        case 0x1b78c4u: goto label_1b78c4;
        case 0x1b78c8u: goto label_1b78c8;
        case 0x1b78ccu: goto label_1b78cc;
        case 0x1b78d0u: goto label_1b78d0;
        case 0x1b78d4u: goto label_1b78d4;
        case 0x1b78d8u: goto label_1b78d8;
        case 0x1b78dcu: goto label_1b78dc;
        case 0x1b78e0u: goto label_1b78e0;
        case 0x1b78e4u: goto label_1b78e4;
        case 0x1b78e8u: goto label_1b78e8;
        case 0x1b78ecu: goto label_1b78ec;
        case 0x1b78f0u: goto label_1b78f0;
        case 0x1b78f4u: goto label_1b78f4;
        case 0x1b78f8u: goto label_1b78f8;
        case 0x1b78fcu: goto label_1b78fc;
        case 0x1b7900u: goto label_1b7900;
        case 0x1b7904u: goto label_1b7904;
        case 0x1b7908u: goto label_1b7908;
        case 0x1b790cu: goto label_1b790c;
        case 0x1b7910u: goto label_1b7910;
        case 0x1b7914u: goto label_1b7914;
        case 0x1b7918u: goto label_1b7918;
        case 0x1b791cu: goto label_1b791c;
        case 0x1b7920u: goto label_1b7920;
        case 0x1b7924u: goto label_1b7924;
        case 0x1b7928u: goto label_1b7928;
        case 0x1b792cu: goto label_1b792c;
        case 0x1b7930u: goto label_1b7930;
        case 0x1b7934u: goto label_1b7934;
        case 0x1b7938u: goto label_1b7938;
        case 0x1b793cu: goto label_1b793c;
        case 0x1b7940u: goto label_1b7940;
        case 0x1b7944u: goto label_1b7944;
        case 0x1b7948u: goto label_1b7948;
        case 0x1b794cu: goto label_1b794c;
        case 0x1b7950u: goto label_1b7950;
        case 0x1b7954u: goto label_1b7954;
        case 0x1b7958u: goto label_1b7958;
        case 0x1b795cu: goto label_1b795c;
        case 0x1b7960u: goto label_1b7960;
        case 0x1b7964u: goto label_1b7964;
        case 0x1b7968u: goto label_1b7968;
        case 0x1b796cu: goto label_1b796c;
        case 0x1b7970u: goto label_1b7970;
        case 0x1b7974u: goto label_1b7974;
        case 0x1b7978u: goto label_1b7978;
        case 0x1b797cu: goto label_1b797c;
        case 0x1b7980u: goto label_1b7980;
        case 0x1b7984u: goto label_1b7984;
        case 0x1b7988u: goto label_1b7988;
        case 0x1b798cu: goto label_1b798c;
        case 0x1b7990u: goto label_1b7990;
        case 0x1b7994u: goto label_1b7994;
        case 0x1b7998u: goto label_1b7998;
        case 0x1b799cu: goto label_1b799c;
        case 0x1b79a0u: goto label_1b79a0;
        case 0x1b79a4u: goto label_1b79a4;
        case 0x1b79a8u: goto label_1b79a8;
        case 0x1b79acu: goto label_1b79ac;
        case 0x1b79b0u: goto label_1b79b0;
        case 0x1b79b4u: goto label_1b79b4;
        case 0x1b79b8u: goto label_1b79b8;
        case 0x1b79bcu: goto label_1b79bc;
        case 0x1b79c0u: goto label_1b79c0;
        case 0x1b79c4u: goto label_1b79c4;
        case 0x1b79c8u: goto label_1b79c8;
        case 0x1b79ccu: goto label_1b79cc;
        case 0x1b79d0u: goto label_1b79d0;
        case 0x1b79d4u: goto label_1b79d4;
        case 0x1b79d8u: goto label_1b79d8;
        case 0x1b79dcu: goto label_1b79dc;
        case 0x1b79e0u: goto label_1b79e0;
        case 0x1b79e4u: goto label_1b79e4;
        case 0x1b79e8u: goto label_1b79e8;
        case 0x1b79ecu: goto label_1b79ec;
        case 0x1b79f0u: goto label_1b79f0;
        case 0x1b79f4u: goto label_1b79f4;
        case 0x1b79f8u: goto label_1b79f8;
        case 0x1b79fcu: goto label_1b79fc;
        case 0x1b7a00u: goto label_1b7a00;
        case 0x1b7a04u: goto label_1b7a04;
        case 0x1b7a08u: goto label_1b7a08;
        case 0x1b7a0cu: goto label_1b7a0c;
        case 0x1b7a10u: goto label_1b7a10;
        case 0x1b7a14u: goto label_1b7a14;
        case 0x1b7a18u: goto label_1b7a18;
        case 0x1b7a1cu: goto label_1b7a1c;
        case 0x1b7a20u: goto label_1b7a20;
        case 0x1b7a24u: goto label_1b7a24;
        case 0x1b7a28u: goto label_1b7a28;
        case 0x1b7a2cu: goto label_1b7a2c;
        case 0x1b7a30u: goto label_1b7a30;
        case 0x1b7a34u: goto label_1b7a34;
        case 0x1b7a38u: goto label_1b7a38;
        case 0x1b7a3cu: goto label_1b7a3c;
        case 0x1b7a40u: goto label_1b7a40;
        case 0x1b7a44u: goto label_1b7a44;
        case 0x1b7a48u: goto label_1b7a48;
        case 0x1b7a4cu: goto label_1b7a4c;
        case 0x1b7a50u: goto label_1b7a50;
        case 0x1b7a54u: goto label_1b7a54;
        case 0x1b7a58u: goto label_1b7a58;
        case 0x1b7a5cu: goto label_1b7a5c;
        case 0x1b7a60u: goto label_1b7a60;
        case 0x1b7a64u: goto label_1b7a64;
        case 0x1b7a68u: goto label_1b7a68;
        case 0x1b7a6cu: goto label_1b7a6c;
        case 0x1b7a70u: goto label_1b7a70;
        case 0x1b7a74u: goto label_1b7a74;
        case 0x1b7a78u: goto label_1b7a78;
        case 0x1b7a7cu: goto label_1b7a7c;
        case 0x1b7a80u: goto label_1b7a80;
        case 0x1b7a84u: goto label_1b7a84;
        case 0x1b7a88u: goto label_1b7a88;
        case 0x1b7a8cu: goto label_1b7a8c;
        case 0x1b7a90u: goto label_1b7a90;
        case 0x1b7a94u: goto label_1b7a94;
        case 0x1b7a98u: goto label_1b7a98;
        case 0x1b7a9cu: goto label_1b7a9c;
        case 0x1b7aa0u: goto label_1b7aa0;
        case 0x1b7aa4u: goto label_1b7aa4;
        case 0x1b7aa8u: goto label_1b7aa8;
        case 0x1b7aacu: goto label_1b7aac;
        case 0x1b7ab0u: goto label_1b7ab0;
        case 0x1b7ab4u: goto label_1b7ab4;
        case 0x1b7ab8u: goto label_1b7ab8;
        case 0x1b7abcu: goto label_1b7abc;
        case 0x1b7ac0u: goto label_1b7ac0;
        case 0x1b7ac4u: goto label_1b7ac4;
        case 0x1b7ac8u: goto label_1b7ac8;
        case 0x1b7accu: goto label_1b7acc;
        case 0x1b7ad0u: goto label_1b7ad0;
        case 0x1b7ad4u: goto label_1b7ad4;
        case 0x1b7ad8u: goto label_1b7ad8;
        case 0x1b7adcu: goto label_1b7adc;
        case 0x1b7ae0u: goto label_1b7ae0;
        case 0x1b7ae4u: goto label_1b7ae4;
        case 0x1b7ae8u: goto label_1b7ae8;
        case 0x1b7aecu: goto label_1b7aec;
        case 0x1b7af0u: goto label_1b7af0;
        case 0x1b7af4u: goto label_1b7af4;
        case 0x1b7af8u: goto label_1b7af8;
        case 0x1b7afcu: goto label_1b7afc;
        case 0x1b7b00u: goto label_1b7b00;
        case 0x1b7b04u: goto label_1b7b04;
        case 0x1b7b08u: goto label_1b7b08;
        case 0x1b7b0cu: goto label_1b7b0c;
        case 0x1b7b10u: goto label_1b7b10;
        case 0x1b7b14u: goto label_1b7b14;
        case 0x1b7b18u: goto label_1b7b18;
        case 0x1b7b1cu: goto label_1b7b1c;
        case 0x1b7b20u: goto label_1b7b20;
        case 0x1b7b24u: goto label_1b7b24;
        case 0x1b7b28u: goto label_1b7b28;
        case 0x1b7b2cu: goto label_1b7b2c;
        case 0x1b7b30u: goto label_1b7b30;
        case 0x1b7b34u: goto label_1b7b34;
        case 0x1b7b38u: goto label_1b7b38;
        case 0x1b7b3cu: goto label_1b7b3c;
        case 0x1b7b40u: goto label_1b7b40;
        case 0x1b7b44u: goto label_1b7b44;
        case 0x1b7b48u: goto label_1b7b48;
        case 0x1b7b4cu: goto label_1b7b4c;
        case 0x1b7b50u: goto label_1b7b50;
        case 0x1b7b54u: goto label_1b7b54;
        case 0x1b7b58u: goto label_1b7b58;
        case 0x1b7b5cu: goto label_1b7b5c;
        case 0x1b7b60u: goto label_1b7b60;
        case 0x1b7b64u: goto label_1b7b64;
        case 0x1b7b68u: goto label_1b7b68;
        case 0x1b7b6cu: goto label_1b7b6c;
        case 0x1b7b70u: goto label_1b7b70;
        case 0x1b7b74u: goto label_1b7b74;
        case 0x1b7b78u: goto label_1b7b78;
        case 0x1b7b7cu: goto label_1b7b7c;
        case 0x1b7b80u: goto label_1b7b80;
        case 0x1b7b84u: goto label_1b7b84;
        case 0x1b7b88u: goto label_1b7b88;
        case 0x1b7b8cu: goto label_1b7b8c;
        case 0x1b7b90u: goto label_1b7b90;
        case 0x1b7b94u: goto label_1b7b94;
        case 0x1b7b98u: goto label_1b7b98;
        case 0x1b7b9cu: goto label_1b7b9c;
        case 0x1b7ba0u: goto label_1b7ba0;
        case 0x1b7ba4u: goto label_1b7ba4;
        case 0x1b7ba8u: goto label_1b7ba8;
        case 0x1b7bacu: goto label_1b7bac;
        case 0x1b7bb0u: goto label_1b7bb0;
        case 0x1b7bb4u: goto label_1b7bb4;
        case 0x1b7bb8u: goto label_1b7bb8;
        case 0x1b7bbcu: goto label_1b7bbc;
        case 0x1b7bc0u: goto label_1b7bc0;
        case 0x1b7bc4u: goto label_1b7bc4;
        case 0x1b7bc8u: goto label_1b7bc8;
        case 0x1b7bccu: goto label_1b7bcc;
        case 0x1b7bd0u: goto label_1b7bd0;
        case 0x1b7bd4u: goto label_1b7bd4;
        case 0x1b7bd8u: goto label_1b7bd8;
        case 0x1b7bdcu: goto label_1b7bdc;
        case 0x1b7be0u: goto label_1b7be0;
        case 0x1b7be4u: goto label_1b7be4;
        case 0x1b7be8u: goto label_1b7be8;
        case 0x1b7becu: goto label_1b7bec;
        case 0x1b7bf0u: goto label_1b7bf0;
        case 0x1b7bf4u: goto label_1b7bf4;
        case 0x1b7bf8u: goto label_1b7bf8;
        case 0x1b7bfcu: goto label_1b7bfc;
        case 0x1b7c00u: goto label_1b7c00;
        case 0x1b7c04u: goto label_1b7c04;
        case 0x1b7c08u: goto label_1b7c08;
        case 0x1b7c0cu: goto label_1b7c0c;
        case 0x1b7c10u: goto label_1b7c10;
        case 0x1b7c14u: goto label_1b7c14;
        case 0x1b7c18u: goto label_1b7c18;
        case 0x1b7c1cu: goto label_1b7c1c;
        case 0x1b7c20u: goto label_1b7c20;
        case 0x1b7c24u: goto label_1b7c24;
        case 0x1b7c28u: goto label_1b7c28;
        case 0x1b7c2cu: goto label_1b7c2c;
        case 0x1b7c30u: goto label_1b7c30;
        case 0x1b7c34u: goto label_1b7c34;
        case 0x1b7c38u: goto label_1b7c38;
        case 0x1b7c3cu: goto label_1b7c3c;
        case 0x1b7c40u: goto label_1b7c40;
        case 0x1b7c44u: goto label_1b7c44;
        case 0x1b7c48u: goto label_1b7c48;
        case 0x1b7c4cu: goto label_1b7c4c;
        case 0x1b7c50u: goto label_1b7c50;
        case 0x1b7c54u: goto label_1b7c54;
        case 0x1b7c58u: goto label_1b7c58;
        case 0x1b7c5cu: goto label_1b7c5c;
        case 0x1b7c60u: goto label_1b7c60;
        case 0x1b7c64u: goto label_1b7c64;
        case 0x1b7c68u: goto label_1b7c68;
        case 0x1b7c6cu: goto label_1b7c6c;
        case 0x1b7c70u: goto label_1b7c70;
        case 0x1b7c74u: goto label_1b7c74;
        case 0x1b7c78u: goto label_1b7c78;
        case 0x1b7c7cu: goto label_1b7c7c;
        case 0x1b7c80u: goto label_1b7c80;
        case 0x1b7c84u: goto label_1b7c84;
        case 0x1b7c88u: goto label_1b7c88;
        case 0x1b7c8cu: goto label_1b7c8c;
        case 0x1b7c90u: goto label_1b7c90;
        case 0x1b7c94u: goto label_1b7c94;
        case 0x1b7c98u: goto label_1b7c98;
        case 0x1b7c9cu: goto label_1b7c9c;
        case 0x1b7ca0u: goto label_1b7ca0;
        case 0x1b7ca4u: goto label_1b7ca4;
        case 0x1b7ca8u: goto label_1b7ca8;
        case 0x1b7cacu: goto label_1b7cac;
        case 0x1b7cb0u: goto label_1b7cb0;
        case 0x1b7cb4u: goto label_1b7cb4;
        case 0x1b7cb8u: goto label_1b7cb8;
        case 0x1b7cbcu: goto label_1b7cbc;
        case 0x1b7cc0u: goto label_1b7cc0;
        case 0x1b7cc4u: goto label_1b7cc4;
        case 0x1b7cc8u: goto label_1b7cc8;
        case 0x1b7cccu: goto label_1b7ccc;
        case 0x1b7cd0u: goto label_1b7cd0;
        case 0x1b7cd4u: goto label_1b7cd4;
        case 0x1b7cd8u: goto label_1b7cd8;
        case 0x1b7cdcu: goto label_1b7cdc;
        case 0x1b7ce0u: goto label_1b7ce0;
        case 0x1b7ce4u: goto label_1b7ce4;
        case 0x1b7ce8u: goto label_1b7ce8;
        case 0x1b7cecu: goto label_1b7cec;
        case 0x1b7cf0u: goto label_1b7cf0;
        case 0x1b7cf4u: goto label_1b7cf4;
        case 0x1b7cf8u: goto label_1b7cf8;
        case 0x1b7cfcu: goto label_1b7cfc;
        case 0x1b7d00u: goto label_1b7d00;
        case 0x1b7d04u: goto label_1b7d04;
        case 0x1b7d08u: goto label_1b7d08;
        case 0x1b7d0cu: goto label_1b7d0c;
        case 0x1b7d10u: goto label_1b7d10;
        case 0x1b7d14u: goto label_1b7d14;
        case 0x1b7d18u: goto label_1b7d18;
        case 0x1b7d1cu: goto label_1b7d1c;
        case 0x1b7d20u: goto label_1b7d20;
        case 0x1b7d24u: goto label_1b7d24;
        case 0x1b7d28u: goto label_1b7d28;
        case 0x1b7d2cu: goto label_1b7d2c;
        case 0x1b7d30u: goto label_1b7d30;
        case 0x1b7d34u: goto label_1b7d34;
        case 0x1b7d38u: goto label_1b7d38;
        case 0x1b7d3cu: goto label_1b7d3c;
        case 0x1b7d40u: goto label_1b7d40;
        case 0x1b7d44u: goto label_1b7d44;
        case 0x1b7d48u: goto label_1b7d48;
        case 0x1b7d4cu: goto label_1b7d4c;
        case 0x1b7d50u: goto label_1b7d50;
        case 0x1b7d54u: goto label_1b7d54;
        case 0x1b7d58u: goto label_1b7d58;
        case 0x1b7d5cu: goto label_1b7d5c;
        case 0x1b7d60u: goto label_1b7d60;
        case 0x1b7d64u: goto label_1b7d64;
        case 0x1b7d68u: goto label_1b7d68;
        case 0x1b7d6cu: goto label_1b7d6c;
        default: return;
    }

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
            goto label_1b75c0;
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
label_1b75b8:
    // 0x1b75b8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1b75b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_1b75bc:
    // 0x1b75bc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1b75bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1b75c0:
    // 0x1b75c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1b75c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b75c4:
    // 0x1b75c4: 0x3e00008  jr          $ra
label_1b75c8:
    if (ctx->pc == 0x1B75C8u) {
        ctx->pc = 0x1B75CCu;
        goto label_1b75cc;
    }
    ctx->pc = 0x1B75C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B75C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B75CCu;
label_1b75cc:
    // 0x1b75cc: 0x0  nop
    ctx->pc = 0x1b75ccu;
    // NOP
label_1b75d0:
    // 0x1b75d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b75d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b75d4:
    // 0x1b75d4: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1b75d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
label_1b75d8:
    // 0x1b75d8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b75d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b75dc:
    // 0x1b75dc: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1b75dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
label_1b75e0:
    // 0x1b75e0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1b75e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1b75e4:
    // 0x1b75e4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1b75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1b75e8:
    // 0x1b75e8: 0xc06dcb0  jal         func_1B72C0
label_1b75ec:
    if (ctx->pc == 0x1B75ECu) {
        ctx->pc = 0x1B75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75E8u;
        // 0x1b75ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75F0u;
        goto label_1b75f0;
    }
    ctx->pc = 0x1B75E8u;
    SET_GPR_U32(ctx, 31, 0x1B75F0u);
    ctx->pc = 0x1B75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75E8u;
    // 0x1b75ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B75F0u;
label_1b75f0:
    // 0x1b75f0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b75f4:
    // 0x1b75f4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1b75f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1b75f8:
    // 0x1b75f8: 0xc06dcb0  jal         func_1B72C0
label_1b75fc:
    if (ctx->pc == 0x1B75FCu) {
        ctx->pc = 0x1B75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75F8u;
        // 0x1b75fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7600u;
        goto label_1b7600;
    }
    ctx->pc = 0x1B75F8u;
    SET_GPR_U32(ctx, 31, 0x1B7600u);
    ctx->pc = 0x1B75FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75F8u;
    // 0x1b75fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7600u;
label_1b7600:
    // 0x1b7600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7604:
    // 0x1b7604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b7608:
    // 0x1b7608: 0xc06dcdc  jal         func_1B7370
label_1b760c:
    if (ctx->pc == 0x1B760Cu) {
        ctx->pc = 0x1B760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7608u;
        // 0x1b760c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7610u;
        goto label_1b7610;
    }
    ctx->pc = 0x1B7608u;
    SET_GPR_U32(ctx, 31, 0x1B7610u);
    ctx->pc = 0x1B760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7608u;
    // 0x1b760c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7370u;
    { ctx->pc = 0x1b7370; return; }
    ctx->pc = 0x1B7610u;
label_1b7610:
    // 0x1b7610: 0xc06dc6a  jal         func_1B71A8
label_1b7614:
    if (ctx->pc == 0x1B7614u) {
        ctx->pc = 0x1B7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7610u;
        // 0x1b7614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7618u;
        goto label_1b7618;
    }
    ctx->pc = 0x1B7610u;
    SET_GPR_U32(ctx, 31, 0x1B7618u);
    ctx->pc = 0x1B7614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7610u;
    // 0x1b7614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A8u;
    { ctx->pc = 0x1b71a8; return; }
    ctx->pc = 0x1B7618u;
label_1b7618:
    // 0x1b7618: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1b7618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b761c:
    // 0x1b761c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1b761cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1b7620:
    // 0x1b7620: 0x3e00008  jr          $ra
label_1b7624:
    if (ctx->pc == 0x1B7624u) {
        ctx->pc = 0x1B7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7620u;
        // 0x1b7624: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7628u;
        goto label_1b7628;
    }
    ctx->pc = 0x1B7620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7620u;
        // 0x1b7624: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7628u;
label_1b7628:
    // 0x1b7628: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b762c:
    // 0x1b762c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1b762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
label_1b7630:
    // 0x1b7630: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b7630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b7634:
    // 0x1b7634: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1b7634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
label_1b7638:
    // 0x1b7638: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1b7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1b763c:
    // 0x1b763c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1b763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_1b7640:
    // 0x1b7640: 0xc06dcb0  jal         func_1B72C0
label_1b7644:
    if (ctx->pc == 0x1B7644u) {
        ctx->pc = 0x1B7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7640u;
        // 0x1b7644: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7648u;
        goto label_1b7648;
    }
    ctx->pc = 0x1B7640u;
    SET_GPR_U32(ctx, 31, 0x1B7648u);
    ctx->pc = 0x1B7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7640u;
    // 0x1b7644: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7648u;
label_1b7648:
    // 0x1b7648: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b764c:
    // 0x1b764c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1b764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1b7650:
    // 0x1b7650: 0xc06dcb0  jal         func_1B72C0
label_1b7654:
    if (ctx->pc == 0x1B7654u) {
        ctx->pc = 0x1B7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7650u;
        // 0x1b7654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7658u;
        goto label_1b7658;
    }
    ctx->pc = 0x1B7650u;
    SET_GPR_U32(ctx, 31, 0x1B7658u);
    ctx->pc = 0x1B7654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7650u;
    // 0x1b7654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7658u;
label_1b7658:
    // 0x1b7658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b765c:
    // 0x1b765c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1b765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1b7660:
    // 0x1b7660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b7664:
    // 0x1b7664: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b7664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b7668:
    // 0x1b7668: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b7668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1b766c:
    // 0x1b766c: 0xc06dcdc  jal         func_1B7370
label_1b7670:
    if (ctx->pc == 0x1B7670u) {
        ctx->pc = 0x1B7670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B766Cu;
        // 0x1b7670: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7674u;
        goto label_1b7674;
    }
    ctx->pc = 0x1B766Cu;
    SET_GPR_U32(ctx, 31, 0x1B7674u);
    ctx->pc = 0x1B7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B766Cu;
    // 0x1b7670: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7370u;
    { ctx->pc = 0x1b7370; return; }
    ctx->pc = 0x1B7674u;
label_1b7674:
    // 0x1b7674: 0xc06dc6a  jal         func_1B71A8
label_1b7678:
    if (ctx->pc == 0x1B7678u) {
        ctx->pc = 0x1B7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7674u;
        // 0x1b7678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B767Cu;
        goto label_1b767c;
    }
    ctx->pc = 0x1B7674u;
    SET_GPR_U32(ctx, 31, 0x1B767Cu);
    ctx->pc = 0x1B7678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7674u;
    // 0x1b7678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A8u;
    { ctx->pc = 0x1b71a8; return; }
    ctx->pc = 0x1B767Cu;
label_1b767c:
    // 0x1b767c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1b767cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b7680:
    // 0x1b7680: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1b7680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1b7684:
    // 0x1b7684: 0x3e00008  jr          $ra
label_1b7688:
    if (ctx->pc == 0x1B7688u) {
        ctx->pc = 0x1B7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7684u;
        // 0x1b7688: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B768Cu;
        goto label_1b768c;
    }
    ctx->pc = 0x1B7684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7684u;
        // 0x1b7688: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B768Cu;
label_1b768c:
    // 0x1b768c: 0x0  nop
    ctx->pc = 0x1b768cu;
    // NOP
label_1b7690:
    // 0x1b7690: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b7690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1b7694:
    // 0x1b7694: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1b7694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
label_1b7698:
    // 0x1b7698: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b7698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1b769c:
    // 0x1b769c: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1b769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
label_1b76a0:
    // 0x1b76a0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1b76a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1b76a4:
    // 0x1b76a4: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1b76a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_1b76a8:
    // 0x1b76a8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1b76a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_1b76ac:
    // 0x1b76ac: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1b76acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_1b76b0:
    // 0x1b76b0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1b76b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_1b76b4:
    // 0x1b76b4: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1b76b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_1b76b8:
    // 0x1b76b8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b76b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_1b76bc:
    // 0x1b76bc: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1b76bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_1b76c0:
    // 0x1b76c0: 0xc06dcb0  jal         func_1B72C0
label_1b76c4:
    if (ctx->pc == 0x1B76C4u) {
        ctx->pc = 0x1B76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76C0u;
        // 0x1b76c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76C8u;
        goto label_1b76c8;
    }
    ctx->pc = 0x1B76C0u;
    SET_GPR_U32(ctx, 31, 0x1B76C8u);
    ctx->pc = 0x1B76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76C0u;
    // 0x1b76c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B76C8u;
label_1b76c8:
    // 0x1b76c8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b76c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b76cc:
    // 0x1b76cc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1b76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_1b76d0:
    // 0x1b76d0: 0xc06dcb0  jal         func_1B72C0
label_1b76d4:
    if (ctx->pc == 0x1B76D4u) {
        ctx->pc = 0x1B76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76D0u;
        // 0x1b76d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76D8u;
        goto label_1b76d8;
    }
    ctx->pc = 0x1B76D0u;
    SET_GPR_U32(ctx, 31, 0x1B76D8u);
    ctx->pc = 0x1B76D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76D0u;
    // 0x1b76d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B76D8u;
label_1b76d8:
    // 0x1b76d8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b76dc:
    // 0x1b76dc: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x1b76dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b76e0:
    // 0x1b76e0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1b76e4:
    if (ctx->pc == 0x1B76E4u) {
        ctx->pc = 0x1B76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76E0u;
        // 0x1b76e4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76E8u;
        goto label_1b76e8;
    }
    ctx->pc = 0x1B76E0u;
    {
        const bool branch_taken_0x1b76e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76E0u;
        // 0x1b76e4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76e0) {
            ctx->pc = 0x1B7744u;
            goto label_1b7744;
        }
    }
    ctx->pc = 0x1B76E8u;
label_1b76e8:
    // 0x1b76e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b76ec:
    // 0x1b76ec: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1b76ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b76f0:
    // 0x1b76f0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_1b76f4:
    if (ctx->pc == 0x1B76F4u) {
        ctx->pc = 0x1B76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76F0u;
        // 0x1b76f4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B76F8u;
        goto label_1b76f8;
    }
    ctx->pc = 0x1B76F0u;
    {
        const bool branch_taken_0x1b76f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b76f0) {
            ctx->pc = 0x1B76F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B76F0u;
            // 0x1b76f4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B776Cu;
            goto label_1b776c;
        }
    }
    ctx->pc = 0x1B76F8u;
label_1b76f8:
    // 0x1b76f8: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1b76f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
label_1b76fc:
    // 0x1b76fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b7700:
    if (ctx->pc == 0x1B7700u) {
        ctx->pc = 0x1B7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76FCu;
        // 0x1b7700: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7704u;
        goto label_1b7704;
    }
    ctx->pc = 0x1B76FCu;
    {
        const bool branch_taken_0x1b76fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76FCu;
        // 0x1b7700: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76fc) {
            ctx->pc = 0x1B7718u;
            goto label_1b7718;
        }
    }
    ctx->pc = 0x1B7704u;
label_1b7704:
    // 0x1b7704: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1b7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_1b7708:
    // 0x1b7708: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1b770c:
    if (ctx->pc == 0x1B770Cu) {
        ctx->pc = 0x1B770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7708u;
        // 0x1b770c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7710u;
        goto label_1b7710;
    }
    ctx->pc = 0x1B7708u;
    {
        const bool branch_taken_0x1b7708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7708) {
            ctx->pc = 0x1B770Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7708u;
            // 0x1b770c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7744u;
            goto label_1b7744;
        }
    }
    ctx->pc = 0x1B7710u;
label_1b7710:
    // 0x1b7710: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b7714:
    if (ctx->pc == 0x1B7714u) {
        ctx->pc = 0x1B7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7710u;
        // 0x1b7714: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7718u;
        goto label_1b7718;
    }
    ctx->pc = 0x1B7710u;
    {
        const bool branch_taken_0x1b7710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7710u;
        // 0x1b7714: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7710) {
            ctx->pc = 0x1B772Cu;
            goto label_1b772c;
        }
    }
    ctx->pc = 0x1B7718u;
label_1b7718:
    // 0x1b7718: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b771c:
    if (ctx->pc == 0x1B771Cu) {
        ctx->pc = 0x1B771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7718u;
        // 0x1b771c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7720u;
        goto label_1b7720;
    }
    ctx->pc = 0x1B7718u;
    {
        const bool branch_taken_0x1b7718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7718u;
        // 0x1b771c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7718) {
            ctx->pc = 0x1B7738u;
            goto label_1b7738;
        }
    }
    ctx->pc = 0x1B7720u;
label_1b7720:
    // 0x1b7720: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1b7724:
    if (ctx->pc == 0x1B7724u) {
        ctx->pc = 0x1B7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7720u;
        // 0x1b7724: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7728u;
        goto label_1b7728;
    }
    ctx->pc = 0x1B7720u;
    {
        const bool branch_taken_0x1b7720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7720) {
            ctx->pc = 0x1B7724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7720u;
            // 0x1b7724: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B776Cu;
            goto label_1b776c;
        }
    }
    ctx->pc = 0x1B7728u;
label_1b7728:
    // 0x1b7728: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b7728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b772c:
    // 0x1b772c: 0x10000077  b           . + 4 + (0x77 << 2)
label_1b7730:
    if (ctx->pc == 0x1B7730u) {
        ctx->pc = 0x1B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B772Cu;
        // 0x1b7730: 0x2444b6b0  addiu       $a0, $v0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7734u;
        goto label_1b7734;
    }
    ctx->pc = 0x1B772Cu;
    {
        const bool branch_taken_0x1b772c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B772Cu;
        // 0x1b7730: 0x2444b6b0  addiu       $a0, $v0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b772c) {
            ctx->pc = 0x1B790Cu;
            goto label_1b790c;
        }
    }
    ctx->pc = 0x1B7734u;
label_1b7734:
    // 0x1b7734: 0x0  nop
    ctx->pc = 0x1b7734u;
    // NOP
label_1b7738:
    // 0x1b7738: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1b773c:
    if (ctx->pc == 0x1B773Cu) {
        ctx->pc = 0x1B773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7738u;
        // 0x1b773c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7740u;
        goto label_1b7740;
    }
    ctx->pc = 0x1B7738u;
    {
        const bool branch_taken_0x1b7738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7738u;
        // 0x1b773c: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7738) {
            ctx->pc = 0x1B7760u;
            goto label_1b7760;
        }
    }
    ctx->pc = 0x1B7740u;
label_1b7740:
    // 0x1b7740: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b7740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7744:
    // 0x1b7744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b7748:
    // 0x1b7748: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1b7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1b774c:
    // 0x1b774c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b7750:
    // 0x1b7750: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b7750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b7754:
    // 0x1b7754: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1b7758:
    if (ctx->pc == 0x1B7758u) {
        ctx->pc = 0x1B7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7754u;
        // 0x1b7758: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B775Cu;
        goto label_1b775c;
    }
    ctx->pc = 0x1B7754u;
    {
        const bool branch_taken_0x1b7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7754u;
        // 0x1b7758: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7754) {
            ctx->pc = 0x1B790Cu;
            goto label_1b790c;
        }
    }
    ctx->pc = 0x1B775Cu;
label_1b775c:
    // 0x1b775c: 0x0  nop
    ctx->pc = 0x1b775cu;
    // NOP
label_1b7760:
    // 0x1b7760: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1b7764:
    if (ctx->pc == 0x1B7764u) {
        ctx->pc = 0x1B7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7760u;
        // 0x1b7764: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7768u;
        goto label_1b7768;
    }
    ctx->pc = 0x1B7760u;
    {
        const bool branch_taken_0x1b7760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7760u;
        // 0x1b7764: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7760) {
            ctx->pc = 0x1B7788u;
            goto label_1b7788;
        }
    }
    ctx->pc = 0x1B7768u;
label_1b7768:
    // 0x1b7768: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1b7768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1b776c:
    // 0x1b776c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7770:
    // 0x1b7770: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b7770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7774:
    // 0x1b7774: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b7774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b7778:
    // 0x1b7778: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b7778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b777c:
    // 0x1b777c: 0x10000063  b           . + 4 + (0x63 << 2)
label_1b7780:
    if (ctx->pc == 0x1B7780u) {
        ctx->pc = 0x1B7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B777Cu;
        // 0x1b7780: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7784u;
        goto label_1b7784;
    }
    ctx->pc = 0x1B777Cu;
    {
        const bool branch_taken_0x1b777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B777Cu;
        // 0x1b7780: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b777c) {
            ctx->pc = 0x1B790Cu;
            goto label_1b790c;
        }
    }
    ctx->pc = 0x1B7784u;
label_1b7784:
    // 0x1b7784: 0x0  nop
    ctx->pc = 0x1b7784u;
    // NOP
label_1b7788:
    // 0x1b7788: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x1b7788u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_1b778c:
    // 0x1b778c: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x1b778cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
label_1b7790:
    // 0x1b7790: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b7790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7794:
    // 0x1b7794: 0x2758024  and         $s0, $s3, $s5
    ctx->pc = 0x1b7794u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 21));
label_1b7798:
    // 0x1b7798: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x1b7798u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
label_1b779c:
    // 0x1b779c: 0x255b024  and         $s6, $s2, $s5
    ctx->pc = 0x1b779cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
label_1b77a0:
    // 0x1b77a0: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x1b77a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
label_1b77a4:
    // 0x1b77a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b77a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b77a8:
    // 0x1b77a8: 0xc06d536  jal         func_1B54D8
label_1b77ac:
    if (ctx->pc == 0x1B77ACu) {
        ctx->pc = 0x1B77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77A8u;
        // 0x1b77ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B77B0u;
        goto label_1b77b0;
    }
    ctx->pc = 0x1B77A8u;
    SET_GPR_U32(ctx, 31, 0x1B77B0u);
    ctx->pc = 0x1B77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77A8u;
    // 0x1b77ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x1B77B0u;
label_1b77b0:
    // 0x1b77b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b77b4:
    // 0x1b77b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b77b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b77b8:
    // 0x1b77b8: 0xc06d536  jal         func_1B54D8
label_1b77bc:
    if (ctx->pc == 0x1B77BCu) {
        ctx->pc = 0x1B77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77B8u;
        // 0x1b77bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B77C0u;
        goto label_1b77c0;
    }
    ctx->pc = 0x1B77B8u;
    SET_GPR_U32(ctx, 31, 0x1B77C0u);
    ctx->pc = 0x1B77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77B8u;
    // 0x1b77bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x1B77C0u;
label_1b77c0:
    // 0x1b77c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b77c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b77c4:
    // 0x1b77c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b77c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b77c8:
    // 0x1b77c8: 0xc06d536  jal         func_1B54D8
label_1b77cc:
    if (ctx->pc == 0x1B77CCu) {
        ctx->pc = 0x1B77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77C8u;
        // 0x1b77cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B77D0u;
        goto label_1b77d0;
    }
    ctx->pc = 0x1B77C8u;
    SET_GPR_U32(ctx, 31, 0x1B77D0u);
    ctx->pc = 0x1B77CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77C8u;
    // 0x1b77cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x1B77D0u;
label_1b77d0:
    // 0x1b77d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b77d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b77d4:
    // 0x1b77d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b77d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b77d8:
    // 0x1b77d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b77d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b77dc:
    // 0x1b77dc: 0xc06d536  jal         func_1B54D8
label_1b77e0:
    if (ctx->pc == 0x1B77E0u) {
        ctx->pc = 0x1B77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B77DCu;
        // 0x1b77e0: 0x230802d  daddu       $s0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B77E4u;
        goto label_1b77e4;
    }
    ctx->pc = 0x1B77DCu;
    SET_GPR_U32(ctx, 31, 0x1B77E4u);
    ctx->pc = 0x1B77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B77DCu;
    // 0x1b77e0: 0x230802d  daddu       $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    { ctx->pc = 0x1b54d8; return; }
    ctx->pc = 0x1B77E4u;
label_1b77e4:
    // 0x1b77e4: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x1b77e4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1b77e8:
    // 0x1b77e8: 0x10303c  dsll32      $a2, $s0, 0
    ctx->pc = 0x1b77e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
label_1b77ec:
    // 0x1b77ec: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1b77ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
label_1b77f0:
    // 0x1b77f0: 0x286302d  daddu       $a2, $s4, $a2
    ctx->pc = 0x1b77f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 6));
label_1b77f4:
    // 0x1b77f4: 0x2158024  and         $s0, $s0, $s5
    ctx->pc = 0x1b77f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 21));
label_1b77f8:
    // 0x1b77f8: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x1b77f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
label_1b77fc:
    // 0x1b77fc: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1b77fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1b7800:
    // 0x1b7800: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7804:
    // 0x1b7804: 0xd4a02b  sltu        $s4, $a2, $s4
    ctx->pc = 0x1b7804u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1b7808:
    // 0x1b7808: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1b7808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b780c:
    // 0x1b780c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x1b780cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b7810:
    // 0x1b7810: 0x234882d  daddu       $s1, $s1, $s4
    ctx->pc = 0x1b7810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 20));
label_1b7814:
    // 0x1b7814: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1b7814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1b7818:
    // 0x1b7818: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x1b7818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
label_1b781c:
    // 0x1b781c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1b7820:
    // 0x1b7820: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b7820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7824:
    // 0x1b7824: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x1b7824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
label_1b7828:
    // 0x1b7828: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1b7828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1b782c:
    // 0x1b782c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1b7830:
    // 0x1b7830: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b7830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b7834:
    // 0x1b7834: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x1b7834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1b7838:
    // 0x1b7838: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1b7838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1b783c:
    // 0x1b783c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_1b7840:
    if (ctx->pc == 0x1B7840u) {
        ctx->pc = 0x1B7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B783Cu;
        // 0x1b7840: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7844u;
        goto label_1b7844;
    }
    ctx->pc = 0x1B783Cu;
    {
        const bool branch_taken_0x1b783c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B783Cu;
        // 0x1b7840: 0xafa40048  sw          $a0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b783c) {
            ctx->pc = 0x1B7884u;
            goto label_1b7884;
        }
    }
    ctx->pc = 0x1B7844u;
label_1b7844:
    // 0x1b7844: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1b7844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b7848:
    // 0x1b7848: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x1b7848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
label_1b784c:
    // 0x1b784c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7850:
    // 0x1b7850: 0x528fa  dsrl        $a1, $a1, 3
    ctx->pc = 0x1b7850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 3);
label_1b7854:
    // 0x1b7854: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1b7854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1b7858:
    // 0x1b7858: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x1b7858u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
label_1b785c:
    // 0x1b785c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b7860:
    // 0x1b7860: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7860u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b7864:
    // 0x1b7864: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x1b7864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1b7868:
    // 0x1b7868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b786c:
    if (ctx->pc == 0x1B786Cu) {
        ctx->pc = 0x1B786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7868u;
        // 0x1b786c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7870u;
        goto label_1b7870;
    }
    ctx->pc = 0x1B7868u;
    {
        const bool branch_taken_0x1b7868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7868u;
        // 0x1b786c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7868) {
            ctx->pc = 0x1B7878u;
            goto label_1b7878;
        }
    }
    ctx->pc = 0x1B7870u;
label_1b7870:
    // 0x1b7870: 0x6307a  dsrl        $a2, $a2, 1
    ctx->pc = 0x1b7870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 1);
label_1b7874:
    // 0x1b7874: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1b7874u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1b7878:
    // 0x1b7878: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1b787c:
    if (ctx->pc == 0x1B787Cu) {
        ctx->pc = 0x1B787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7878u;
        // 0x1b787c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7880u;
        goto label_1b7880;
    }
    ctx->pc = 0x1B7878u;
    {
        const bool branch_taken_0x1b7878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7878u;
        // 0x1b787c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7878) {
            ctx->pc = 0x1B7858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7858;
        }
    }
    ctx->pc = 0x1B7880u;
label_1b7880:
    // 0x1b7880: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1b7880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1b7884:
    // 0x1b7884: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7888:
    // 0x1b7888: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1b7888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_1b788c:
    // 0x1b788c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x1b788cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1b7890:
    // 0x1b7890: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1b7894:
    if (ctx->pc == 0x1B7894u) {
        ctx->pc = 0x1B7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7890u;
        // 0x1b7894: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7898u;
        goto label_1b7898;
    }
    ctx->pc = 0x1B7890u;
    {
        const bool branch_taken_0x1b7890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7890u;
        // 0x1b7894: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7890) {
            ctx->pc = 0x1B78D8u;
            goto label_1b78d8;
        }
    }
    ctx->pc = 0x1B7898u;
label_1b7898:
    // 0x1b7898: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1b7898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1b789c:
    // 0x1b789c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1b789cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b78a0:
    // 0x1b78a0: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x1b78a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
label_1b78a4:
    // 0x1b78a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b78a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b78a8:
    // 0x1b78a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b78a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b78ac:
    // 0x1b78ac: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x1b78acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_1b78b0:
    // 0x1b78b0: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x1b78b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
label_1b78b4:
    // 0x1b78b4: 0xc81824  and         $v1, $a2, $t0
    ctx->pc = 0x1b78b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_1b78b8:
    // 0x1b78b8: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x1b78b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
label_1b78bc:
    // 0x1b78bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1b78c0:
    // 0x1b78c0: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x1b78c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1b78c4:
    // 0x1b78c4: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x1b78c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1b78c8:
    // 0x1b78c8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_1b78cc:
    if (ctx->pc == 0x1B78CCu) {
        ctx->pc = 0x1B78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78C8u;
        // 0x1b78cc: 0x63078  dsll        $a2, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B78D0u;
        goto label_1b78d0;
    }
    ctx->pc = 0x1B78C8u;
    {
        const bool branch_taken_0x1b78c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78C8u;
        // 0x1b78cc: 0x63078  dsll        $a2, $a2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78c8) {
            ctx->pc = 0x1B78B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b78b0;
        }
    }
    ctx->pc = 0x1B78D0u;
label_1b78d0:
    // 0x1b78d0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1b78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1b78d4:
    // 0x1b78d4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1b78d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1b78d8:
    // 0x1b78d8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b78dc:
    // 0x1b78dc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1b78e0:
    if (ctx->pc == 0x1B78E0u) {
        ctx->pc = 0x1B78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78DCu;
        // 0x1b78e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B78E4u;
        goto label_1b78e4;
    }
    ctx->pc = 0x1B78DCu;
    {
        const bool branch_taken_0x1b78dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78DCu;
        // 0x1b78e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78dc) {
            ctx->pc = 0x1B7900u;
            goto label_1b7900;
        }
    }
    ctx->pc = 0x1B78E4u;
label_1b78e4:
    // 0x1b78e4: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x1b78e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
label_1b78e8:
    // 0x1b78e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b78ec:
    if (ctx->pc == 0x1B78ECu) {
        ctx->pc = 0x1B78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78E8u;
        // 0x1b78ec: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B78F0u;
        goto label_1b78f0;
    }
    ctx->pc = 0x1B78E8u;
    {
        const bool branch_taken_0x1b78e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78E8u;
        // 0x1b78ec: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78e8) {
            ctx->pc = 0x1B78F8u;
            goto label_1b78f8;
        }
    }
    ctx->pc = 0x1B78F0u;
label_1b78f0:
    // 0x1b78f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b78f4:
    if (ctx->pc == 0x1B78F4u) {
        ctx->pc = 0x1B78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78F0u;
        // 0x1b78f4: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B78F8u;
        goto label_1b78f8;
    }
    ctx->pc = 0x1B78F0u;
    {
        const bool branch_taken_0x1b78f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B78F0u;
        // 0x1b78f4: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b78f0) {
            ctx->pc = 0x1B78FCu;
            goto label_1b78fc;
        }
    }
    ctx->pc = 0x1B78F8u;
label_1b78f8:
    // 0x1b78f8: 0x46880b  movn        $s1, $v0, $a2
    ctx->pc = 0x1b78f8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1b78fc:
    // 0x1b78fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7900:
    // 0x1b7900: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b7900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_1b7904:
    // 0x1b7904: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1b7904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1b7908:
    // 0x1b7908: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b7908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b790c:
    // 0x1b790c: 0xc06dc6a  jal         func_1B71A8
label_1b7910:
    if (ctx->pc == 0x1B7910u) {
        ctx->pc = 0x1B7914u;
        goto label_1b7914;
    }
    ctx->pc = 0x1B790Cu;
    SET_GPR_U32(ctx, 31, 0x1B7914u);
    ctx->pc = 0x1B71A8u;
    { ctx->pc = 0x1b71a8; return; }
    ctx->pc = 0x1B7914u;
label_1b7914:
    // 0x1b7914: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1b7914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b7918:
    // 0x1b7918: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1b7918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1b791c:
    // 0x1b791c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1b791cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b7920:
    // 0x1b7920: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1b7920u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1b7924:
    // 0x1b7924: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1b7924u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b7928:
    // 0x1b7928: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1b7928u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1b792c:
    // 0x1b792c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b792cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1b7930:
    // 0x1b7930: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1b7930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1b7934:
    // 0x1b7934: 0x3e00008  jr          $ra
label_1b7938:
    if (ctx->pc == 0x1B7938u) {
        ctx->pc = 0x1B7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7934u;
        // 0x1b7938: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B793Cu;
        goto label_1b793c;
    }
    ctx->pc = 0x1B7934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7934u;
        // 0x1b7938: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B793Cu;
label_1b793c:
    // 0x1b793c: 0x0  nop
    ctx->pc = 0x1b793cu;
    // NOP
label_1b7940:
    // 0x1b7940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b7944:
    // 0x1b7944: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1b7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
label_1b7948:
    // 0x1b7948: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b7948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b794c:
    // 0x1b794c: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1b794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
label_1b7950:
    // 0x1b7950: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1b7950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1b7954:
    // 0x1b7954: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1b7954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1b7958:
    // 0x1b7958: 0xc06dcb0  jal         func_1B72C0
label_1b795c:
    if (ctx->pc == 0x1B795Cu) {
        ctx->pc = 0x1B795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7958u;
        // 0x1b795c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7960u;
        goto label_1b7960;
    }
    ctx->pc = 0x1B7958u;
    SET_GPR_U32(ctx, 31, 0x1B7960u);
    ctx->pc = 0x1B795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7958u;
    // 0x1b795c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7960u;
label_1b7960:
    // 0x1b7960: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b7960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b7964:
    // 0x1b7964: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1b7964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1b7968:
    // 0x1b7968: 0xc06dcb0  jal         func_1B72C0
label_1b796c:
    if (ctx->pc == 0x1B796Cu) {
        ctx->pc = 0x1B796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7968u;
        // 0x1b796c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7970u;
        goto label_1b7970;
    }
    ctx->pc = 0x1B7968u;
    SET_GPR_U32(ctx, 31, 0x1B7970u);
    ctx->pc = 0x1B796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7968u;
    // 0x1b796c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7970u;
label_1b7970:
    // 0x1b7970: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b7970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7974:
    // 0x1b7974: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1b7974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b7978:
    // 0x1b7978: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1b7978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b797c:
    // 0x1b797c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_1b7980:
    if (ctx->pc == 0x1B7980u) {
        ctx->pc = 0x1B7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B797Cu;
        // 0x1b7980: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7984u;
        goto label_1b7984;
    }
    ctx->pc = 0x1B797Cu;
    {
        const bool branch_taken_0x1b797c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B797Cu;
        // 0x1b7980: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b797c) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B7984u;
label_1b7984:
    // 0x1b7984: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1b7984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7988:
    // 0x1b7988: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b7988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b798c:
    // 0x1b798c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_1b7990:
    if (ctx->pc == 0x1B7990u) {
        ctx->pc = 0x1B7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B798Cu;
        // 0x1b7990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7994u;
        goto label_1b7994;
    }
    ctx->pc = 0x1B798Cu;
    {
        const bool branch_taken_0x1b798c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B798Cu;
        // 0x1b7990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b798c) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B7994u;
label_1b7994:
    // 0x1b7994: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b7994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7998:
    // 0x1b7998: 0x38c40004  xori        $a0, $a2, 0x4
    ctx->pc = 0x1b7998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
label_1b799c:
    // 0x1b799c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1b799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1b79a0:
    // 0x1b79a0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b79a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1b79a4:
    // 0x1b79a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b79a8:
    if (ctx->pc == 0x1B79A8u) {
        ctx->pc = 0x1B79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79A4u;
        // 0x1b79a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79ACu;
        goto label_1b79ac;
    }
    ctx->pc = 0x1B79A4u;
    {
        const bool branch_taken_0x1b79a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79A4u;
        // 0x1b79a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79a4) {
            ctx->pc = 0x1B79B8u;
            goto label_1b79b8;
        }
    }
    ctx->pc = 0x1B79ACu;
label_1b79ac:
    // 0x1b79ac: 0x38c20002  xori        $v0, $a2, 0x2
    ctx->pc = 0x1b79acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
label_1b79b0:
    // 0x1b79b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b79b4:
    if (ctx->pc == 0x1B79B4u) {
        ctx->pc = 0x1B79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79B0u;
        // 0x1b79b4: 0x38a20004  xori        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79B8u;
        goto label_1b79b8;
    }
    ctx->pc = 0x1B79B0u;
    {
        const bool branch_taken_0x1b79b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79B0u;
        // 0x1b79b4: 0x38a20004  xori        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79b0) {
            ctx->pc = 0x1B79D0u;
            goto label_1b79d0;
        }
    }
    ctx->pc = 0x1B79B8u;
label_1b79b8:
    // 0x1b79b8: 0x54c50038  bnel        $a2, $a1, . + 4 + (0x38 << 2)
label_1b79bc:
    if (ctx->pc == 0x1B79BCu) {
        ctx->pc = 0x1B79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79B8u;
        // 0x1b79bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79C0u;
        goto label_1b79c0;
    }
    ctx->pc = 0x1B79B8u;
    {
        const bool branch_taken_0x1b79b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b79b8) {
            ctx->pc = 0x1B79BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B79B8u;
            // 0x1b79bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B79C0u;
label_1b79c0:
    // 0x1b79c0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b79c4:
    // 0x1b79c4: 0x10000035  b           . + 4 + (0x35 << 2)
label_1b79c8:
    if (ctx->pc == 0x1B79C8u) {
        ctx->pc = 0x1B79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79C4u;
        // 0x1b79c8: 0x2444b6b0  addiu       $a0, $v0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79CCu;
        goto label_1b79cc;
    }
    ctx->pc = 0x1B79C4u;
    {
        const bool branch_taken_0x1b79c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79C4u;
        // 0x1b79c8: 0x2444b6b0  addiu       $a0, $v0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79c4) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B79CCu;
label_1b79cc:
    // 0x1b79cc: 0x0  nop
    ctx->pc = 0x1b79ccu;
    // NOP
label_1b79d0:
    // 0x1b79d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b79d4:
    if (ctx->pc == 0x1B79D4u) {
        ctx->pc = 0x1B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79D0u;
        // 0x1b79d4: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79D8u;
        goto label_1b79d8;
    }
    ctx->pc = 0x1B79D0u;
    {
        const bool branch_taken_0x1b79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79D0u;
        // 0x1b79d4: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79d0) {
            ctx->pc = 0x1B79E8u;
            goto label_1b79e8;
        }
    }
    ctx->pc = 0x1B79D8u;
label_1b79d8:
    // 0x1b79d8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1b79d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1b79dc:
    // 0x1b79dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b79dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b79e0:
    // 0x1b79e0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1b79e4:
    if (ctx->pc == 0x1B79E4u) {
        ctx->pc = 0x1B79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E0u;
        // 0x1b79e4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79E8u;
        goto label_1b79e8;
    }
    ctx->pc = 0x1B79E0u;
    {
        const bool branch_taken_0x1b79e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E0u;
        // 0x1b79e4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79e0) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B79E8u;
label_1b79e8:
    // 0x1b79e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b79ec:
    if (ctx->pc == 0x1B79ECu) {
        ctx->pc = 0x1B79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E8u;
        // 0x1b79ec: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B79F0u;
        goto label_1b79f0;
    }
    ctx->pc = 0x1B79E8u;
    {
        const bool branch_taken_0x1b79e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E8u;
        // 0x1b79ec: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79e8) {
            ctx->pc = 0x1B7A00u;
            goto label_1b7a00;
        }
    }
    ctx->pc = 0x1B79F0u;
label_1b79f0:
    // 0x1b79f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b79f4:
    // 0x1b79f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b79f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b79f8:
    // 0x1b79f8: 0x10000028  b           . + 4 + (0x28 << 2)
label_1b79fc:
    if (ctx->pc == 0x1B79FCu) {
        ctx->pc = 0x1B79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F8u;
        // 0x1b79fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A00u;
        goto label_1b7a00;
    }
    ctx->pc = 0x1B79F8u;
    {
        const bool branch_taken_0x1b79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79F8u;
        // 0x1b79fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79f8) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B7A00u;
label_1b7a00:
    // 0x1b7a00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b7a04:
    // 0x1b7a04: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1b7a04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7a08:
    // 0x1b7a08: 0xdfa70030  ld          $a3, 0x30($sp)
    ctx->pc = 0x1b7a08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7a0c:
    // 0x1b7a0c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b7a10:
    // 0x1b7a10: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a10u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b7a14:
    // 0x1b7a14: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1b7a18:
    if (ctx->pc == 0x1B7A18u) {
        ctx->pc = 0x1B7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A14u;
        // 0x1b7a18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A1Cu;
        goto label_1b7a1c;
    }
    ctx->pc = 0x1B7A14u;
    {
        const bool branch_taken_0x1b7a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A14u;
        // 0x1b7a18: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a14) {
            ctx->pc = 0x1B7A2Cu;
            goto label_1b7a2c;
        }
    }
    ctx->pc = 0x1B7A1Cu;
label_1b7a1c:
    // 0x1b7a1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b7a20:
    // 0x1b7a20: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x1b7a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
label_1b7a24:
    // 0x1b7a24: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1b7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1b7a28:
    // 0x1b7a28: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a28u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b7a2c:
    // 0x1b7a2c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b7a30:
    // 0x1b7a30: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1b7a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
label_1b7a34:
    // 0x1b7a34: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b7a38:
    if (ctx->pc == 0x1B7A38u) {
        ctx->pc = 0x1B7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A34u;
        // 0x1b7a38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A3Cu;
        goto label_1b7a3c;
    }
    ctx->pc = 0x1B7A34u;
    {
        const bool branch_taken_0x1b7a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A34u;
        // 0x1b7a38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a34) {
            ctx->pc = 0x1B7A48u;
            goto label_1b7a48;
        }
    }
    ctx->pc = 0x1B7A3Cu;
label_1b7a3c:
    // 0x1b7a3c: 0x0  nop
    ctx->pc = 0x1b7a3cu;
    // NOP
label_1b7a40:
    // 0x1b7a40: 0x87282b  sltu        $a1, $a0, $a3
    ctx->pc = 0x1b7a40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_1b7a44:
    // 0x1b7a44: 0x0  nop
    ctx->pc = 0x1b7a44u;
    // NOP
label_1b7a48:
    // 0x1b7a48: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_1b7a4c:
    if (ctx->pc == 0x1B7A4Cu) {
        ctx->pc = 0x1B7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A48u;
        // 0x1b7a4c: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A50u;
        goto label_1b7a50;
    }
    ctx->pc = 0x1B7A48u;
    {
        const bool branch_taken_0x1b7a48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a48) {
            ctx->pc = 0x1B7A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A48u;
            // 0x1b7a4c: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A5Cu;
            goto label_1b7a5c;
        }
    }
    ctx->pc = 0x1B7A50u;
label_1b7a50:
    // 0x1b7a50: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b7a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1b7a54:
    // 0x1b7a54: 0x87202f  dsubu       $a0, $a0, $a3
    ctx->pc = 0x1b7a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 7));
label_1b7a58:
    // 0x1b7a58: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_1b7a5c:
    // 0x1b7a5c: 0x0  nop
    ctx->pc = 0x1b7a5cu;
    // NOP
label_1b7a60:
    // 0x1b7a60: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1b7a64:
    if (ctx->pc == 0x1B7A64u) {
        ctx->pc = 0x1B7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A60u;
        // 0x1b7a64: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A68u;
        goto label_1b7a68;
    }
    ctx->pc = 0x1B7A60u;
    {
        const bool branch_taken_0x1b7a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A60u;
        // 0x1b7a64: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a60) {
            ctx->pc = 0x1B7A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7a40;
        }
    }
    ctx->pc = 0x1B7A68u;
label_1b7a68:
    // 0x1b7a68: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1b7a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1b7a6c:
    // 0x1b7a6c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1b7a70:
    // 0x1b7a70: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1b7a74:
    if (ctx->pc == 0x1B7A74u) {
        ctx->pc = 0x1B7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A70u;
        // 0x1b7a74: 0xfd060010  sd          $a2, 0x10($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A78u;
        goto label_1b7a78;
    }
    ctx->pc = 0x1B7A70u;
    {
        const bool branch_taken_0x1b7a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7a70) {
            ctx->pc = 0x1B7A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7A70u;
            // 0x1b7a74: 0xfd060010  sd          $a2, 0x10($t0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7A98u;
            goto label_1b7a98;
        }
    }
    ctx->pc = 0x1B7A78u;
label_1b7a78:
    // 0x1b7a78: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x1b7a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_1b7a7c:
    // 0x1b7a7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b7a80:
    if (ctx->pc == 0x1B7A80u) {
        ctx->pc = 0x1B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A7Cu;
        // 0x1b7a80: 0x64c20080  daddiu      $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A84u;
        goto label_1b7a84;
    }
    ctx->pc = 0x1B7A7Cu;
    {
        const bool branch_taken_0x1b7a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A7Cu;
        // 0x1b7a80: 0x64c20080  daddiu      $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a7c) {
            ctx->pc = 0x1B7A90u;
            goto label_1b7a90;
        }
    }
    ctx->pc = 0x1B7A84u;
label_1b7a84:
    // 0x1b7a84: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b7a88:
    if (ctx->pc == 0x1B7A88u) {
        ctx->pc = 0x1B7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A84u;
        // 0x1b7a88: 0x64c60080  daddiu      $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7A8Cu;
        goto label_1b7a8c;
    }
    ctx->pc = 0x1B7A84u;
    {
        const bool branch_taken_0x1b7a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A84u;
        // 0x1b7a88: 0x64c60080  daddiu      $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a84) {
            ctx->pc = 0x1B7A94u;
            goto label_1b7a94;
        }
    }
    ctx->pc = 0x1B7A8Cu;
label_1b7a8c:
    // 0x1b7a8c: 0x0  nop
    ctx->pc = 0x1b7a8cu;
    // NOP
label_1b7a90:
    // 0x1b7a90: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x1b7a90u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1b7a94:
    // 0x1b7a94: 0xfd060010  sd          $a2, 0x10($t0)
    ctx->pc = 0x1b7a94u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
label_1b7a98:
    // 0x1b7a98: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1b7a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b7a9c:
    // 0x1b7a9c: 0xc06dc6a  jal         func_1B71A8
label_1b7aa0:
    if (ctx->pc == 0x1B7AA0u) {
        ctx->pc = 0x1B7AA4u;
        goto label_1b7aa4;
    }
    ctx->pc = 0x1B7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7AA4u);
    ctx->pc = 0x1B71A8u;
    { ctx->pc = 0x1b71a8; return; }
    ctx->pc = 0x1B7AA4u;
label_1b7aa4:
    // 0x1b7aa4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1b7aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b7aa8:
    // 0x1b7aa8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1b7aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1b7aac:
    // 0x1b7aac: 0x3e00008  jr          $ra
label_1b7ab0:
    if (ctx->pc == 0x1B7AB0u) {
        ctx->pc = 0x1B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AACu;
        // 0x1b7ab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7AB4u;
        goto label_1b7ab4;
    }
    ctx->pc = 0x1B7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AACu;
        // 0x1b7ab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AB4u;
label_1b7ab4:
    // 0x1b7ab4: 0x0  nop
    ctx->pc = 0x1b7ab4u;
    // NOP
label_1b7ab8:
    // 0x1b7ab8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1b7ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b7abc:
    // 0x1b7abc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x1b7abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b7ac0:
    // 0x1b7ac0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b7ac4:
    if (ctx->pc == 0x1B7AC4u) {
        ctx->pc = 0x1B7AC8u;
        goto label_1b7ac8;
    }
    ctx->pc = 0x1B7AC0u;
    {
        const bool branch_taken_0x1b7ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ac0) {
            ctx->pc = 0x1B7AD8u;
            goto label_1b7ad8;
        }
    }
    ctx->pc = 0x1B7AC8u;
label_1b7ac8:
    // 0x1b7ac8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b7acc:
    // 0x1b7acc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1b7accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1b7ad0:
    // 0x1b7ad0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1b7ad4:
    if (ctx->pc == 0x1B7AD4u) {
        ctx->pc = 0x1B7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AD0u;
        // 0x1b7ad4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7AD8u;
        goto label_1b7ad8;
    }
    ctx->pc = 0x1B7AD0u;
    {
        const bool branch_taken_0x1b7ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ad0) {
            ctx->pc = 0x1B7AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7AD0u;
            // 0x1b7ad4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7AE0u;
            goto label_1b7ae0;
        }
    }
    ctx->pc = 0x1B7AD8u;
label_1b7ad8:
    // 0x1b7ad8: 0x3e00008  jr          $ra
label_1b7adc:
    if (ctx->pc == 0x1B7ADCu) {
        ctx->pc = 0x1B7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AD8u;
        // 0x1b7adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7AE0u;
        goto label_1b7ae0;
    }
    ctx->pc = 0x1B7AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AD8u;
        // 0x1b7adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AE0u;
label_1b7ae0:
    // 0x1b7ae0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b7ae4:
    if (ctx->pc == 0x1B7AE4u) {
        ctx->pc = 0x1B7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AE0u;
        // 0x1b7ae4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7AE8u;
        goto label_1b7ae8;
    }
    ctx->pc = 0x1B7AE0u;
    {
        const bool branch_taken_0x1b7ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AE0u;
        // 0x1b7ae4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ae0) {
            ctx->pc = 0x1B7B00u;
            goto label_1b7b00;
        }
    }
    ctx->pc = 0x1B7AE8u;
label_1b7ae8:
    // 0x1b7ae8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1b7aec:
    if (ctx->pc == 0x1B7AECu) {
        ctx->pc = 0x1B7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AE8u;
        // 0x1b7aec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7AF0u;
        goto label_1b7af0;
    }
    ctx->pc = 0x1B7AE8u;
    {
        const bool branch_taken_0x1b7ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ae8) {
            ctx->pc = 0x1B7AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7AE8u;
            // 0x1b7aec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7B54u;
            goto label_1b7b54;
        }
    }
    ctx->pc = 0x1B7AF0u;
label_1b7af0:
    // 0x1b7af0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1b7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b7af4:
    // 0x1b7af4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1b7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b7af8:
    // 0x1b7af8: 0x3e00008  jr          $ra
label_1b7afc:
    if (ctx->pc == 0x1B7AFCu) {
        ctx->pc = 0x1B7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AF8u;
        // 0x1b7afc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B00u;
        goto label_1b7b00;
    }
    ctx->pc = 0x1B7AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AF8u;
        // 0x1b7afc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7B00u;
label_1b7b00:
    // 0x1b7b00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b7b04:
    if (ctx->pc == 0x1B7B04u) {
        ctx->pc = 0x1B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B00u;
        // 0x1b7b04: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B08u;
        goto label_1b7b08;
    }
    ctx->pc = 0x1B7B00u;
    {
        const bool branch_taken_0x1b7b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b00) {
            ctx->pc = 0x1B7B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7B00u;
            // 0x1b7b04: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7B20u;
            goto label_1b7b20;
        }
    }
    ctx->pc = 0x1B7B08u;
label_1b7b08:
    // 0x1b7b08: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1b7b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b7b0c:
    // 0x1b7b0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7b10:
    // 0x1b7b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7b14:
    // 0x1b7b14: 0x3e00008  jr          $ra
label_1b7b18:
    if (ctx->pc == 0x1B7B18u) {
        ctx->pc = 0x1B7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B14u;
        // 0x1b7b18: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B1Cu;
        goto label_1b7b1c;
    }
    ctx->pc = 0x1B7B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B14u;
        // 0x1b7b18: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7B1Cu;
label_1b7b1c:
    // 0x1b7b1c: 0x0  nop
    ctx->pc = 0x1b7b1cu;
    // NOP
label_1b7b20:
    // 0x1b7b20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1b7b24:
    if (ctx->pc == 0x1B7B24u) {
        ctx->pc = 0x1B7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B20u;
        // 0x1b7b24: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B28u;
        goto label_1b7b28;
    }
    ctx->pc = 0x1B7B20u;
    {
        const bool branch_taken_0x1b7b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b20) {
            ctx->pc = 0x1B7B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7B20u;
            // 0x1b7b24: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7B48u;
            goto label_1b7b48;
        }
    }
    ctx->pc = 0x1B7B28u;
label_1b7b28:
    // 0x1b7b28: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1b7b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_1b7b2c:
    // 0x1b7b2c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_1b7b30:
    if (ctx->pc == 0x1B7B30u) {
        ctx->pc = 0x1B7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B2Cu;
        // 0x1b7b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B34u;
        goto label_1b7b34;
    }
    ctx->pc = 0x1B7B2Cu;
    {
        const bool branch_taken_0x1b7b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B2Cu;
        // 0x1b7b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b2c) {
            ctx->pc = 0x1B7BD0u;
            goto label_1b7bd0;
        }
    }
    ctx->pc = 0x1B7B34u;
label_1b7b34:
    // 0x1b7b34: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1b7b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b7b38:
    // 0x1b7b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7b3c:
    // 0x1b7b3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7b40:
    // 0x1b7b40: 0x3e00008  jr          $ra
label_1b7b44:
    if (ctx->pc == 0x1B7B44u) {
        ctx->pc = 0x1B7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B40u;
        // 0x1b7b44: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B48u;
        goto label_1b7b48;
    }
    ctx->pc = 0x1B7B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B40u;
        // 0x1b7b44: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7B48u;
label_1b7b48:
    // 0x1b7b48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b7b4c:
    if (ctx->pc == 0x1B7B4Cu) {
        ctx->pc = 0x1B7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B48u;
        // 0x1b7b4c: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B50u;
        goto label_1b7b50;
    }
    ctx->pc = 0x1B7B48u;
    {
        const bool branch_taken_0x1b7b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b48) {
            ctx->pc = 0x1B7B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7B48u;
            // 0x1b7b4c: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7B68u;
            goto label_1b7b68;
        }
    }
    ctx->pc = 0x1B7B50u;
label_1b7b50:
    // 0x1b7b50: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b7b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1b7b54:
    // 0x1b7b54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7b58:
    // 0x1b7b58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7b5c:
    // 0x1b7b5c: 0x3e00008  jr          $ra
label_1b7b60:
    if (ctx->pc == 0x1B7B60u) {
        ctx->pc = 0x1B7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B5Cu;
        // 0x1b7b60: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B64u;
        goto label_1b7b64;
    }
    ctx->pc = 0x1B7B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B5Cu;
        // 0x1b7b60: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7B64u;
label_1b7b64:
    // 0x1b7b64: 0x0  nop
    ctx->pc = 0x1b7b64u;
    // NOP
label_1b7b68:
    // 0x1b7b68: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b7b6c:
    // 0x1b7b6c: 0x14e2000f  bne         $a3, $v0, . + 4 + (0xF << 2)
label_1b7b70:
    if (ctx->pc == 0x1B7B70u) {
        ctx->pc = 0x1B7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B6Cu;
        // 0x1b7b70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B74u;
        goto label_1b7b74;
    }
    ctx->pc = 0x1B7B6Cu;
    {
        const bool branch_taken_0x1b7b6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B6Cu;
        // 0x1b7b70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b6c) {
            ctx->pc = 0x1B7BACu;
            goto label_1b7bac;
        }
    }
    ctx->pc = 0x1B7B74u;
label_1b7b74:
    // 0x1b7b74: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1b7b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b7b78:
    // 0x1b7b78: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1b7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b7b7c:
    // 0x1b7b7c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1b7b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b7b80:
    // 0x1b7b80: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1b7b84:
    if (ctx->pc == 0x1B7B84u) {
        ctx->pc = 0x1B7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B80u;
        // 0x1b7b84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B88u;
        goto label_1b7b88;
    }
    ctx->pc = 0x1B7B80u;
    {
        const bool branch_taken_0x1b7b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b80) {
            ctx->pc = 0x1B7B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7B80u;
            // 0x1b7b84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7BACu;
            goto label_1b7bac;
        }
    }
    ctx->pc = 0x1B7B88u;
label_1b7b88:
    // 0x1b7b88: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1b7b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b7b8c:
    // 0x1b7b8c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1b7b90:
    if (ctx->pc == 0x1B7B90u) {
        ctx->pc = 0x1B7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B8Cu;
        // 0x1b7b90: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7B94u;
        goto label_1b7b94;
    }
    ctx->pc = 0x1B7B8Cu;
    {
        const bool branch_taken_0x1b7b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B8Cu;
        // 0x1b7b90: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b8c) {
            ctx->pc = 0x1B7BC4u;
            goto label_1b7bc4;
        }
    }
    ctx->pc = 0x1B7B94u;
label_1b7b94:
    // 0x1b7b94: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x1b7b94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_1b7b98:
    // 0x1b7b98: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x1b7b98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_1b7b9c:
    // 0x1b7b9c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1b7b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b7ba0:
    // 0x1b7ba0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b7ba4:
    if (ctx->pc == 0x1B7BA4u) {
        ctx->pc = 0x1B7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BA0u;
        // 0x1b7ba4: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7BA8u;
        goto label_1b7ba8;
    }
    ctx->pc = 0x1B7BA0u;
    {
        const bool branch_taken_0x1b7ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7ba0) {
            ctx->pc = 0x1B7BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7BA0u;
            // 0x1b7ba4: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7BB8u;
            goto label_1b7bb8;
        }
    }
    ctx->pc = 0x1B7BA8u;
label_1b7ba8:
    // 0x1b7ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7bac:
    // 0x1b7bac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7bb0:
    // 0x1b7bb0: 0x3e00008  jr          $ra
label_1b7bb4:
    if (ctx->pc == 0x1B7BB4u) {
        ctx->pc = 0x1B7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BB0u;
        // 0x1b7bb4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7BB8u;
        goto label_1b7bb8;
    }
    ctx->pc = 0x1B7BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BB0u;
        // 0x1b7bb4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7BB8u;
label_1b7bb8:
    // 0x1b7bb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b7bbc:
    if (ctx->pc == 0x1B7BBCu) {
        ctx->pc = 0x1B7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BB8u;
        // 0x1b7bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7BC0u;
        goto label_1b7bc0;
    }
    ctx->pc = 0x1B7BB8u;
    {
        const bool branch_taken_0x1b7bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7bb8) {
            ctx->pc = 0x1B7BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7BB8u;
            // 0x1b7bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7BD0u;
            goto label_1b7bd0;
        }
    }
    ctx->pc = 0x1B7BC0u;
label_1b7bc0:
    // 0x1b7bc0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b7bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7bc4:
    // 0x1b7bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7bc8:
    // 0x1b7bc8: 0x3e00008  jr          $ra
label_1b7bcc:
    if (ctx->pc == 0x1B7BCCu) {
        ctx->pc = 0x1B7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BC8u;
        // 0x1b7bcc: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7BD0u;
        goto label_1b7bd0;
    }
    ctx->pc = 0x1B7BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BC8u;
        // 0x1b7bcc: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7BD0u;
label_1b7bd0:
    // 0x1b7bd0: 0x3e00008  jr          $ra
label_1b7bd4:
    if (ctx->pc == 0x1B7BD4u) {
        ctx->pc = 0x1B7BD8u;
        goto label_1b7bd8;
    }
    ctx->pc = 0x1B7BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7BD8u;
label_1b7bd8:
    // 0x1b7bd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b7bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b7bdc:
    // 0x1b7bdc: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x1b7bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
label_1b7be0:
    // 0x1b7be0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b7be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b7be4:
    // 0x1b7be4: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x1b7be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
label_1b7be8:
    // 0x1b7be8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1b7be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1b7bec:
    // 0x1b7bec: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1b7becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1b7bf0:
    // 0x1b7bf0: 0xc06dcb0  jal         func_1B72C0
label_1b7bf4:
    if (ctx->pc == 0x1B7BF4u) {
        ctx->pc = 0x1B7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BF0u;
        // 0x1b7bf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7BF8u;
        goto label_1b7bf8;
    }
    ctx->pc = 0x1B7BF0u;
    SET_GPR_U32(ctx, 31, 0x1B7BF8u);
    ctx->pc = 0x1B7BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7BF0u;
    // 0x1b7bf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7BF8u;
label_1b7bf8:
    // 0x1b7bf8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b7bfc:
    // 0x1b7bfc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1b7c00:
    // 0x1b7c00: 0xc06dcb0  jal         func_1B72C0
label_1b7c04:
    if (ctx->pc == 0x1B7C04u) {
        ctx->pc = 0x1B7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C00u;
        // 0x1b7c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C08u;
        goto label_1b7c08;
    }
    ctx->pc = 0x1B7C00u;
    SET_GPR_U32(ctx, 31, 0x1B7C08u);
    ctx->pc = 0x1B7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C00u;
    // 0x1b7c04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7C08u;
label_1b7c08:
    // 0x1b7c08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b7c0c:
    // 0x1b7c0c: 0xc06deae  jal         func_1B7AB8
label_1b7c10:
    if (ctx->pc == 0x1B7C10u) {
        ctx->pc = 0x1B7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C0Cu;
        // 0x1b7c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C14u;
        goto label_1b7c14;
    }
    ctx->pc = 0x1B7C0Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C14u);
    ctx->pc = 0x1B7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7C0Cu;
    // 0x1b7c10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7AB8u;
    goto label_1b7ab8;
    ctx->pc = 0x1B7C14u;
label_1b7c14:
    // 0x1b7c14: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1b7c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b7c18:
    // 0x1b7c18: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1b7c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1b7c1c:
    // 0x1b7c1c: 0x3e00008  jr          $ra
label_1b7c20:
    if (ctx->pc == 0x1B7C20u) {
        ctx->pc = 0x1B7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C1Cu;
        // 0x1b7c20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C24u;
        goto label_1b7c24;
    }
    ctx->pc = 0x1B7C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C1Cu;
        // 0x1b7c20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7C24u;
label_1b7c24:
    // 0x1b7c24: 0x0  nop
    ctx->pc = 0x1b7c24u;
    // NOP
label_1b7c28:
    // 0x1b7c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b7c2c:
    // 0x1b7c2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b7c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7c30:
    // 0x1b7c30: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1b7c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1b7c34:
    // 0x1b7c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b7c38:
    // 0x1b7c38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b7c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1b7c3c:
    // 0x1b7c3c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1b7c40:
    if (ctx->pc == 0x1B7C40u) {
        ctx->pc = 0x1B7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C3Cu;
        // 0x1b7c40: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C44u;
        goto label_1b7c44;
    }
    ctx->pc = 0x1B7C3Cu;
    {
        const bool branch_taken_0x1b7c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C3Cu;
        // 0x1b7c40: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c3c) {
            ctx->pc = 0x1B7C50u;
            goto label_1b7c50;
        }
    }
    ctx->pc = 0x1B7C44u;
label_1b7c44:
    // 0x1b7c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b7c48:
    // 0x1b7c48: 0x10000020  b           . + 4 + (0x20 << 2)
label_1b7c4c:
    if (ctx->pc == 0x1B7C4Cu) {
        ctx->pc = 0x1B7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C48u;
        // 0x1b7c4c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C50u;
        goto label_1b7c50;
    }
    ctx->pc = 0x1B7C48u;
    {
        const bool branch_taken_0x1b7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C48u;
        // 0x1b7c4c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c48) {
            ctx->pc = 0x1B7CCCu;
            goto label_1b7ccc;
        }
    }
    ctx->pc = 0x1B7C50u;
label_1b7c50:
    // 0x1b7c50: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1b7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b7c54:
    // 0x1b7c54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1b7c58:
    if (ctx->pc == 0x1B7C58u) {
        ctx->pc = 0x1B7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C54u;
        // 0x1b7c58: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C5Cu;
        goto label_1b7c5c;
    }
    ctx->pc = 0x1B7C54u;
    {
        const bool branch_taken_0x1b7c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C54u;
        // 0x1b7c58: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c54) {
            ctx->pc = 0x1B7C80u;
            goto label_1b7c80;
        }
    }
    ctx->pc = 0x1B7C5Cu;
label_1b7c5c:
    // 0x1b7c5c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1b7c60:
    // 0x1b7c60: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x1b7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
label_1b7c64:
    // 0x1b7c64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b7c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1b7c68:
    // 0x1b7c68: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_1b7c6c:
    if (ctx->pc == 0x1B7C6Cu) {
        ctx->pc = 0x1B7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C68u;
        // 0x1b7c6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C70u;
        goto label_1b7c70;
    }
    ctx->pc = 0x1B7C68u;
    {
        const bool branch_taken_0x1b7c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C68u;
        // 0x1b7c6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c68) {
            ctx->pc = 0x1B7CD8u;
            goto label_1b7cd8;
        }
    }
    ctx->pc = 0x1B7C70u;
label_1b7c70:
    // 0x1b7c70: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1b7c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1b7c74:
    // 0x1b7c74: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b7c78:
    if (ctx->pc == 0x1B7C78u) {
        ctx->pc = 0x1B7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C74u;
        // 0x1b7c78: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C7Cu;
        goto label_1b7c7c;
    }
    ctx->pc = 0x1B7C74u;
    {
        const bool branch_taken_0x1b7c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C74u;
        // 0x1b7c78: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c74) {
            ctx->pc = 0x1B7C84u;
            goto label_1b7c84;
        }
    }
    ctx->pc = 0x1B7C7Cu;
label_1b7c7c:
    // 0x1b7c7c: 0x0  nop
    ctx->pc = 0x1b7c7cu;
    // NOP
label_1b7c80:
    // 0x1b7c80: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1b7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_1b7c84:
    // 0x1b7c84: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x1b7c84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7c88:
    // 0x1b7c88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7c8c:
    // 0x1b7c8c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1b7c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_1b7c90:
    // 0x1b7c90: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1b7c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1b7c94:
    // 0x1b7c94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1b7c98:
    if (ctx->pc == 0x1B7C98u) {
        ctx->pc = 0x1B7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C94u;
        // 0x1b7c98: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7C9Cu;
        goto label_1b7c9c;
    }
    ctx->pc = 0x1B7C94u;
    {
        const bool branch_taken_0x1b7c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C94u;
        // 0x1b7c98: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c94) {
            ctx->pc = 0x1B7CCCu;
            goto label_1b7ccc;
        }
    }
    ctx->pc = 0x1B7C9Cu;
label_1b7c9c:
    // 0x1b7c9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b7c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b7ca0:
    // 0x1b7ca0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1b7ca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_1b7ca4:
    // 0x1b7ca4: 0x0  nop
    ctx->pc = 0x1b7ca4u;
    // NOP
label_1b7ca8:
    // 0x1b7ca8: 0x41878  dsll        $v1, $a0, 1
    ctx->pc = 0x1b7ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 1);
label_1b7cac:
    // 0x1b7cac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b7cb0:
    // 0x1b7cb0: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1b7cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b7cb4:
    // 0x1b7cb4: 0x0  nop
    ctx->pc = 0x1b7cb4u;
    // NOP
label_1b7cb8:
    // 0x1b7cb8: 0x0  nop
    ctx->pc = 0x1b7cb8u;
    // NOP
label_1b7cbc:
    // 0x1b7cbc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1b7cc0:
    if (ctx->pc == 0x1B7CC0u) {
        ctx->pc = 0x1B7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CBCu;
        // 0x1b7cc0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7CC4u;
        goto label_1b7cc4;
    }
    ctx->pc = 0x1B7CBCu;
    {
        const bool branch_taken_0x1b7cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CBCu;
        // 0x1b7cc0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cbc) {
            ctx->pc = 0x1B7CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7ca8;
        }
    }
    ctx->pc = 0x1B7CC4u;
label_1b7cc4:
    // 0x1b7cc4: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1b7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_1b7cc8:
    // 0x1b7cc8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1b7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1b7ccc:
    // 0x1b7ccc: 0xc06dc6a  jal         func_1B71A8
label_1b7cd0:
    if (ctx->pc == 0x1B7CD0u) {
        ctx->pc = 0x1B7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CCCu;
        // 0x1b7cd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7CD4u;
        goto label_1b7cd4;
    }
    ctx->pc = 0x1B7CCCu;
    SET_GPR_U32(ctx, 31, 0x1B7CD4u);
    ctx->pc = 0x1B7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CCCu;
    // 0x1b7cd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A8u;
    { ctx->pc = 0x1b71a8; return; }
    ctx->pc = 0x1B7CD4u;
label_1b7cd4:
    // 0x1b7cd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7cd8:
    // 0x1b7cd8: 0x3e00008  jr          $ra
label_1b7cdc:
    if (ctx->pc == 0x1B7CDCu) {
        ctx->pc = 0x1B7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CD8u;
        // 0x1b7cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7CE0u;
        goto label_1b7ce0;
    }
    ctx->pc = 0x1B7CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CD8u;
        // 0x1b7cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7CE0u;
label_1b7ce0:
    // 0x1b7ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b7ce4:
    // 0x1b7ce4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1b7ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
label_1b7ce8:
    // 0x1b7ce8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b7cec:
    // 0x1b7cec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b7cf0:
    // 0x1b7cf0: 0xc06dcb0  jal         func_1B72C0
label_1b7cf4:
    if (ctx->pc == 0x1B7CF4u) {
        ctx->pc = 0x1B7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CF0u;
        // 0x1b7cf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7CF8u;
        goto label_1b7cf8;
    }
    ctx->pc = 0x1B7CF0u;
    SET_GPR_U32(ctx, 31, 0x1B7CF8u);
    ctx->pc = 0x1B7CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CF0u;
    // 0x1b7cf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7CF8u;
label_1b7cf8:
    // 0x1b7cf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7cfc:
    // 0x1b7cfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7d00:
    // 0x1b7d00: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x1b7d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
label_1b7d04:
    // 0x1b7d04: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1b7d08:
    if (ctx->pc == 0x1B7D08u) {
        ctx->pc = 0x1B7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D04u;
        // 0x1b7d08: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D0Cu;
        goto label_1b7d0c;
    }
    ctx->pc = 0x1B7D04u;
    {
        const bool branch_taken_0x1b7d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D04u;
        // 0x1b7d08: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d04) {
            ctx->pc = 0x1B7D70u;
            { ctx->pc = 0x1b7d70; return; }
        }
    }
    ctx->pc = 0x1B7D0Cu;
label_1b7d0c:
    // 0x1b7d0c: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
label_1b7d10:
    if (ctx->pc == 0x1B7D10u) {
        ctx->pc = 0x1B7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D0Cu;
        // 0x1b7d10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D14u;
        goto label_1b7d14;
    }
    ctx->pc = 0x1B7D0Cu;
    {
        const bool branch_taken_0x1b7d0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D0Cu;
        // 0x1b7d10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d0c) {
            ctx->pc = 0x1B7D74u;
            { ctx->pc = 0x1b7d74; return; }
        }
    }
    ctx->pc = 0x1B7D14u;
label_1b7d14:
    // 0x1b7d14: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1b7d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
label_1b7d18:
    // 0x1b7d18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b7d1c:
    if (ctx->pc == 0x1B7D1Cu) {
        ctx->pc = 0x1B7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D18u;
        // 0x1b7d1c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D20u;
        goto label_1b7d20;
    }
    ctx->pc = 0x1B7D18u;
    {
        const bool branch_taken_0x1b7d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D18u;
        // 0x1b7d1c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d18) {
            ctx->pc = 0x1B7D3Cu;
            goto label_1b7d3c;
        }
    }
    ctx->pc = 0x1B7D20u;
label_1b7d20:
    // 0x1b7d20: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1b7d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7d24:
    // 0x1b7d24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7d28:
    // 0x1b7d28: 0x4a00012  bltz        $a1, . + 4 + (0x12 << 2)
label_1b7d2c:
    if (ctx->pc == 0x1B7D2Cu) {
        ctx->pc = 0x1B7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D28u;
        // 0x1b7d2c: 0x28a3001f  slti        $v1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D30u;
        goto label_1b7d30;
    }
    ctx->pc = 0x1B7D28u;
    {
        const bool branch_taken_0x1b7d28 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D28u;
        // 0x1b7d2c: 0x28a3001f  slti        $v1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d28) {
            ctx->pc = 0x1B7D74u;
            { ctx->pc = 0x1b7d74; return; }
        }
    }
    ctx->pc = 0x1B7D30u;
label_1b7d30:
    // 0x1b7d30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1b7d34:
    if (ctx->pc == 0x1B7D34u) {
        ctx->pc = 0x1B7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D30u;
        // 0x1b7d34: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D38u;
        goto label_1b7d38;
    }
    ctx->pc = 0x1B7D30u;
    {
        const bool branch_taken_0x1b7d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D30u;
        // 0x1b7d34: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d30) {
            ctx->pc = 0x1B7D50u;
            goto label_1b7d50;
        }
    }
    ctx->pc = 0x1B7D38u;
label_1b7d38:
    // 0x1b7d38: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7d3c:
    // 0x1b7d3c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b7d40:
    // 0x1b7d40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1b7d44:
    // 0x1b7d44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b7d48:
    // 0x1b7d48: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b7d4c:
    if (ctx->pc == 0x1B7D4Cu) {
        ctx->pc = 0x1B7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D48u;
        // 0x1b7d4c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D50u;
        goto label_1b7d50;
    }
    ctx->pc = 0x1B7D48u;
    {
        const bool branch_taken_0x1b7d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D48u;
        // 0x1b7d4c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d48) {
            ctx->pc = 0x1B7D70u;
            { ctx->pc = 0x1b7d70; return; }
        }
    }
    ctx->pc = 0x1B7D50u;
label_1b7d50:
    // 0x1b7d50: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7d50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7d54:
    // 0x1b7d54: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b7d58:
    // 0x1b7d58: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1b7d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7d5c:
    // 0x1b7d5c: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1b7d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_1b7d60:
    // 0x1b7d60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b7d64:
    // 0x1b7d64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b7d68:
    // 0x1b7d68: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1b7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1b7d6c:
    // 0x1b7d6c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1b7d6cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    ctx->pc = 0x1b7d70u;
    return;
}

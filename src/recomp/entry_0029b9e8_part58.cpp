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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b7910u: goto label_2b7910;
        case 0x2b7914u: goto label_2b7914;
        case 0x2b7918u: goto label_2b7918;
        case 0x2b791cu: goto label_2b791c;
        case 0x2b7920u: goto label_2b7920;
        case 0x2b7924u: goto label_2b7924;
        case 0x2b7928u: goto label_2b7928;
        case 0x2b792cu: goto label_2b792c;
        case 0x2b7930u: goto label_2b7930;
        case 0x2b7934u: goto label_2b7934;
        case 0x2b7938u: goto label_2b7938;
        case 0x2b793cu: goto label_2b793c;
        case 0x2b7940u: goto label_2b7940;
        case 0x2b7944u: goto label_2b7944;
        case 0x2b7948u: goto label_2b7948;
        case 0x2b794cu: goto label_2b794c;
        case 0x2b7950u: goto label_2b7950;
        case 0x2b7954u: goto label_2b7954;
        case 0x2b7958u: goto label_2b7958;
        case 0x2b795cu: goto label_2b795c;
        case 0x2b7960u: goto label_2b7960;
        case 0x2b7964u: goto label_2b7964;
        case 0x2b7968u: goto label_2b7968;
        case 0x2b796cu: goto label_2b796c;
        case 0x2b7970u: goto label_2b7970;
        case 0x2b7974u: goto label_2b7974;
        case 0x2b7978u: goto label_2b7978;
        case 0x2b797cu: goto label_2b797c;
        case 0x2b7980u: goto label_2b7980;
        case 0x2b7984u: goto label_2b7984;
        case 0x2b7988u: goto label_2b7988;
        case 0x2b798cu: goto label_2b798c;
        case 0x2b7990u: goto label_2b7990;
        case 0x2b7994u: goto label_2b7994;
        case 0x2b7998u: goto label_2b7998;
        case 0x2b799cu: goto label_2b799c;
        case 0x2b79a0u: goto label_2b79a0;
        case 0x2b79a4u: goto label_2b79a4;
        case 0x2b79a8u: goto label_2b79a8;
        case 0x2b79acu: goto label_2b79ac;
        case 0x2b79b0u: goto label_2b79b0;
        case 0x2b79b4u: goto label_2b79b4;
        case 0x2b79b8u: goto label_2b79b8;
        case 0x2b79bcu: goto label_2b79bc;
        case 0x2b79c0u: goto label_2b79c0;
        case 0x2b79c4u: goto label_2b79c4;
        case 0x2b79c8u: goto label_2b79c8;
        case 0x2b79ccu: goto label_2b79cc;
        case 0x2b79d0u: goto label_2b79d0;
        case 0x2b79d4u: goto label_2b79d4;
        case 0x2b79d8u: goto label_2b79d8;
        case 0x2b79dcu: goto label_2b79dc;
        case 0x2b79e0u: goto label_2b79e0;
        case 0x2b79e4u: goto label_2b79e4;
        case 0x2b79e8u: goto label_2b79e8;
        case 0x2b79ecu: goto label_2b79ec;
        case 0x2b79f0u: goto label_2b79f0;
        case 0x2b79f4u: goto label_2b79f4;
        case 0x2b79f8u: goto label_2b79f8;
        case 0x2b79fcu: goto label_2b79fc;
        case 0x2b7a00u: goto label_2b7a00;
        case 0x2b7a04u: goto label_2b7a04;
        case 0x2b7a08u: goto label_2b7a08;
        case 0x2b7a0cu: goto label_2b7a0c;
        case 0x2b7a10u: goto label_2b7a10;
        case 0x2b7a14u: goto label_2b7a14;
        case 0x2b7a18u: goto label_2b7a18;
        case 0x2b7a1cu: goto label_2b7a1c;
        case 0x2b7a20u: goto label_2b7a20;
        case 0x2b7a24u: goto label_2b7a24;
        case 0x2b7a28u: goto label_2b7a28;
        case 0x2b7a2cu: goto label_2b7a2c;
        case 0x2b7a30u: goto label_2b7a30;
        case 0x2b7a34u: goto label_2b7a34;
        case 0x2b7a38u: goto label_2b7a38;
        case 0x2b7a3cu: goto label_2b7a3c;
        case 0x2b7a40u: goto label_2b7a40;
        case 0x2b7a44u: goto label_2b7a44;
        case 0x2b7a48u: goto label_2b7a48;
        case 0x2b7a4cu: goto label_2b7a4c;
        case 0x2b7a50u: goto label_2b7a50;
        case 0x2b7a54u: goto label_2b7a54;
        case 0x2b7a58u: goto label_2b7a58;
        case 0x2b7a5cu: goto label_2b7a5c;
        case 0x2b7a60u: goto label_2b7a60;
        case 0x2b7a64u: goto label_2b7a64;
        case 0x2b7a68u: goto label_2b7a68;
        case 0x2b7a6cu: goto label_2b7a6c;
        case 0x2b7a70u: goto label_2b7a70;
        case 0x2b7a74u: goto label_2b7a74;
        case 0x2b7a78u: goto label_2b7a78;
        case 0x2b7a7cu: goto label_2b7a7c;
        case 0x2b7a80u: goto label_2b7a80;
        case 0x2b7a84u: goto label_2b7a84;
        case 0x2b7a88u: goto label_2b7a88;
        case 0x2b7a8cu: goto label_2b7a8c;
        case 0x2b7a90u: goto label_2b7a90;
        case 0x2b7a94u: goto label_2b7a94;
        case 0x2b7a98u: goto label_2b7a98;
        case 0x2b7a9cu: goto label_2b7a9c;
        case 0x2b7aa0u: goto label_2b7aa0;
        case 0x2b7aa4u: goto label_2b7aa4;
        case 0x2b7aa8u: goto label_2b7aa8;
        case 0x2b7aacu: goto label_2b7aac;
        case 0x2b7ab0u: goto label_2b7ab0;
        case 0x2b7ab4u: goto label_2b7ab4;
        case 0x2b7ab8u: goto label_2b7ab8;
        case 0x2b7abcu: goto label_2b7abc;
        case 0x2b7ac0u: goto label_2b7ac0;
        case 0x2b7ac4u: goto label_2b7ac4;
        case 0x2b7ac8u: goto label_2b7ac8;
        case 0x2b7accu: goto label_2b7acc;
        case 0x2b7ad0u: goto label_2b7ad0;
        case 0x2b7ad4u: goto label_2b7ad4;
        case 0x2b7ad8u: goto label_2b7ad8;
        case 0x2b7adcu: goto label_2b7adc;
        case 0x2b7ae0u: goto label_2b7ae0;
        case 0x2b7ae4u: goto label_2b7ae4;
        case 0x2b7ae8u: goto label_2b7ae8;
        case 0x2b7aecu: goto label_2b7aec;
        case 0x2b7af0u: goto label_2b7af0;
        case 0x2b7af4u: goto label_2b7af4;
        case 0x2b7af8u: goto label_2b7af8;
        case 0x2b7afcu: goto label_2b7afc;
        case 0x2b7b00u: goto label_2b7b00;
        case 0x2b7b04u: goto label_2b7b04;
        case 0x2b7b08u: goto label_2b7b08;
        case 0x2b7b0cu: goto label_2b7b0c;
        case 0x2b7b10u: goto label_2b7b10;
        case 0x2b7b14u: goto label_2b7b14;
        case 0x2b7b18u: goto label_2b7b18;
        case 0x2b7b1cu: goto label_2b7b1c;
        case 0x2b7b20u: goto label_2b7b20;
        case 0x2b7b24u: goto label_2b7b24;
        case 0x2b7b28u: goto label_2b7b28;
        case 0x2b7b2cu: goto label_2b7b2c;
        case 0x2b7b30u: goto label_2b7b30;
        case 0x2b7b34u: goto label_2b7b34;
        case 0x2b7b38u: goto label_2b7b38;
        case 0x2b7b3cu: goto label_2b7b3c;
        case 0x2b7b40u: goto label_2b7b40;
        case 0x2b7b44u: goto label_2b7b44;
        case 0x2b7b48u: goto label_2b7b48;
        case 0x2b7b4cu: goto label_2b7b4c;
        case 0x2b7b50u: goto label_2b7b50;
        case 0x2b7b54u: goto label_2b7b54;
        case 0x2b7b58u: goto label_2b7b58;
        case 0x2b7b5cu: goto label_2b7b5c;
        case 0x2b7b60u: goto label_2b7b60;
        case 0x2b7b64u: goto label_2b7b64;
        case 0x2b7b68u: goto label_2b7b68;
        case 0x2b7b6cu: goto label_2b7b6c;
        case 0x2b7b70u: goto label_2b7b70;
        case 0x2b7b74u: goto label_2b7b74;
        case 0x2b7b78u: goto label_2b7b78;
        case 0x2b7b7cu: goto label_2b7b7c;
        case 0x2b7b80u: goto label_2b7b80;
        case 0x2b7b84u: goto label_2b7b84;
        case 0x2b7b88u: goto label_2b7b88;
        case 0x2b7b8cu: goto label_2b7b8c;
        case 0x2b7b90u: goto label_2b7b90;
        case 0x2b7b94u: goto label_2b7b94;
        case 0x2b7b98u: goto label_2b7b98;
        case 0x2b7b9cu: goto label_2b7b9c;
        case 0x2b7ba0u: goto label_2b7ba0;
        case 0x2b7ba4u: goto label_2b7ba4;
        case 0x2b7ba8u: goto label_2b7ba8;
        case 0x2b7bacu: goto label_2b7bac;
        case 0x2b7bb0u: goto label_2b7bb0;
        case 0x2b7bb4u: goto label_2b7bb4;
        case 0x2b7bb8u: goto label_2b7bb8;
        case 0x2b7bbcu: goto label_2b7bbc;
        case 0x2b7bc0u: goto label_2b7bc0;
        case 0x2b7bc4u: goto label_2b7bc4;
        case 0x2b7bc8u: goto label_2b7bc8;
        case 0x2b7bccu: goto label_2b7bcc;
        case 0x2b7bd0u: goto label_2b7bd0;
        case 0x2b7bd4u: goto label_2b7bd4;
        case 0x2b7bd8u: goto label_2b7bd8;
        case 0x2b7bdcu: goto label_2b7bdc;
        case 0x2b7be0u: goto label_2b7be0;
        case 0x2b7be4u: goto label_2b7be4;
        case 0x2b7be8u: goto label_2b7be8;
        case 0x2b7becu: goto label_2b7bec;
        case 0x2b7bf0u: goto label_2b7bf0;
        case 0x2b7bf4u: goto label_2b7bf4;
        case 0x2b7bf8u: goto label_2b7bf8;
        case 0x2b7bfcu: goto label_2b7bfc;
        case 0x2b7c00u: goto label_2b7c00;
        case 0x2b7c04u: goto label_2b7c04;
        case 0x2b7c08u: goto label_2b7c08;
        case 0x2b7c0cu: goto label_2b7c0c;
        case 0x2b7c10u: goto label_2b7c10;
        case 0x2b7c14u: goto label_2b7c14;
        case 0x2b7c18u: goto label_2b7c18;
        case 0x2b7c1cu: goto label_2b7c1c;
        case 0x2b7c20u: goto label_2b7c20;
        case 0x2b7c24u: goto label_2b7c24;
        case 0x2b7c28u: goto label_2b7c28;
        case 0x2b7c2cu: goto label_2b7c2c;
        case 0x2b7c30u: goto label_2b7c30;
        case 0x2b7c34u: goto label_2b7c34;
        case 0x2b7c38u: goto label_2b7c38;
        case 0x2b7c3cu: goto label_2b7c3c;
        case 0x2b7c40u: goto label_2b7c40;
        case 0x2b7c44u: goto label_2b7c44;
        case 0x2b7c48u: goto label_2b7c48;
        case 0x2b7c4cu: goto label_2b7c4c;
        case 0x2b7c50u: goto label_2b7c50;
        case 0x2b7c54u: goto label_2b7c54;
        case 0x2b7c58u: goto label_2b7c58;
        case 0x2b7c5cu: goto label_2b7c5c;
        case 0x2b7c60u: goto label_2b7c60;
        case 0x2b7c64u: goto label_2b7c64;
        case 0x2b7c68u: goto label_2b7c68;
        case 0x2b7c6cu: goto label_2b7c6c;
        case 0x2b7c70u: goto label_2b7c70;
        case 0x2b7c74u: goto label_2b7c74;
        case 0x2b7c78u: goto label_2b7c78;
        case 0x2b7c7cu: goto label_2b7c7c;
        case 0x2b7c80u: goto label_2b7c80;
        case 0x2b7c84u: goto label_2b7c84;
        case 0x2b7c88u: goto label_2b7c88;
        case 0x2b7c8cu: goto label_2b7c8c;
        case 0x2b7c90u: goto label_2b7c90;
        case 0x2b7c94u: goto label_2b7c94;
        case 0x2b7c98u: goto label_2b7c98;
        case 0x2b7c9cu: goto label_2b7c9c;
        case 0x2b7ca0u: goto label_2b7ca0;
        case 0x2b7ca4u: goto label_2b7ca4;
        case 0x2b7ca8u: goto label_2b7ca8;
        case 0x2b7cacu: goto label_2b7cac;
        case 0x2b7cb0u: goto label_2b7cb0;
        case 0x2b7cb4u: goto label_2b7cb4;
        case 0x2b7cb8u: goto label_2b7cb8;
        case 0x2b7cbcu: goto label_2b7cbc;
        case 0x2b7cc0u: goto label_2b7cc0;
        case 0x2b7cc4u: goto label_2b7cc4;
        case 0x2b7cc8u: goto label_2b7cc8;
        case 0x2b7cccu: goto label_2b7ccc;
        case 0x2b7cd0u: goto label_2b7cd0;
        case 0x2b7cd4u: goto label_2b7cd4;
        case 0x2b7cd8u: goto label_2b7cd8;
        case 0x2b7cdcu: goto label_2b7cdc;
        case 0x2b7ce0u: goto label_2b7ce0;
        case 0x2b7ce4u: goto label_2b7ce4;
        case 0x2b7ce8u: goto label_2b7ce8;
        case 0x2b7cecu: goto label_2b7cec;
        case 0x2b7cf0u: goto label_2b7cf0;
        case 0x2b7cf4u: goto label_2b7cf4;
        case 0x2b7cf8u: goto label_2b7cf8;
        case 0x2b7cfcu: goto label_2b7cfc;
        case 0x2b7d00u: goto label_2b7d00;
        case 0x2b7d04u: goto label_2b7d04;
        case 0x2b7d08u: goto label_2b7d08;
        case 0x2b7d0cu: goto label_2b7d0c;
        case 0x2b7d10u: goto label_2b7d10;
        case 0x2b7d14u: goto label_2b7d14;
        case 0x2b7d18u: goto label_2b7d18;
        case 0x2b7d1cu: goto label_2b7d1c;
        case 0x2b7d20u: goto label_2b7d20;
        case 0x2b7d24u: goto label_2b7d24;
        case 0x2b7d28u: goto label_2b7d28;
        case 0x2b7d2cu: goto label_2b7d2c;
        case 0x2b7d30u: goto label_2b7d30;
        case 0x2b7d34u: goto label_2b7d34;
        case 0x2b7d38u: goto label_2b7d38;
        case 0x2b7d3cu: goto label_2b7d3c;
        case 0x2b7d40u: goto label_2b7d40;
        case 0x2b7d44u: goto label_2b7d44;
        case 0x2b7d48u: goto label_2b7d48;
        case 0x2b7d4cu: goto label_2b7d4c;
        case 0x2b7d50u: goto label_2b7d50;
        case 0x2b7d54u: goto label_2b7d54;
        case 0x2b7d58u: goto label_2b7d58;
        case 0x2b7d5cu: goto label_2b7d5c;
        case 0x2b7d60u: goto label_2b7d60;
        case 0x2b7d64u: goto label_2b7d64;
        case 0x2b7d68u: goto label_2b7d68;
        case 0x2b7d6cu: goto label_2b7d6c;
        case 0x2b7d70u: goto label_2b7d70;
        case 0x2b7d74u: goto label_2b7d74;
        case 0x2b7d78u: goto label_2b7d78;
        case 0x2b7d7cu: goto label_2b7d7c;
        case 0x2b7d80u: goto label_2b7d80;
        case 0x2b7d84u: goto label_2b7d84;
        case 0x2b7d88u: goto label_2b7d88;
        case 0x2b7d8cu: goto label_2b7d8c;
        case 0x2b7d90u: goto label_2b7d90;
        case 0x2b7d94u: goto label_2b7d94;
        case 0x2b7d98u: goto label_2b7d98;
        case 0x2b7d9cu: goto label_2b7d9c;
        case 0x2b7da0u: goto label_2b7da0;
        case 0x2b7da4u: goto label_2b7da4;
        case 0x2b7da8u: goto label_2b7da8;
        case 0x2b7dacu: goto label_2b7dac;
        case 0x2b7db0u: goto label_2b7db0;
        case 0x2b7db4u: goto label_2b7db4;
        case 0x2b7db8u: goto label_2b7db8;
        case 0x2b7dbcu: goto label_2b7dbc;
        case 0x2b7dc0u: goto label_2b7dc0;
        case 0x2b7dc4u: goto label_2b7dc4;
        case 0x2b7dc8u: goto label_2b7dc8;
        case 0x2b7dccu: goto label_2b7dcc;
        case 0x2b7dd0u: goto label_2b7dd0;
        case 0x2b7dd4u: goto label_2b7dd4;
        case 0x2b7dd8u: goto label_2b7dd8;
        case 0x2b7ddcu: goto label_2b7ddc;
        case 0x2b7de0u: goto label_2b7de0;
        case 0x2b7de4u: goto label_2b7de4;
        case 0x2b7de8u: goto label_2b7de8;
        case 0x2b7decu: goto label_2b7dec;
        case 0x2b7df0u: goto label_2b7df0;
        case 0x2b7df4u: goto label_2b7df4;
        case 0x2b7df8u: goto label_2b7df8;
        case 0x2b7dfcu: goto label_2b7dfc;
        case 0x2b7e00u: goto label_2b7e00;
        case 0x2b7e04u: goto label_2b7e04;
        case 0x2b7e08u: goto label_2b7e08;
        case 0x2b7e0cu: goto label_2b7e0c;
        case 0x2b7e10u: goto label_2b7e10;
        case 0x2b7e14u: goto label_2b7e14;
        case 0x2b7e18u: goto label_2b7e18;
        case 0x2b7e1cu: goto label_2b7e1c;
        case 0x2b7e20u: goto label_2b7e20;
        case 0x2b7e24u: goto label_2b7e24;
        case 0x2b7e28u: goto label_2b7e28;
        case 0x2b7e2cu: goto label_2b7e2c;
        case 0x2b7e30u: goto label_2b7e30;
        case 0x2b7e34u: goto label_2b7e34;
        case 0x2b7e38u: goto label_2b7e38;
        case 0x2b7e3cu: goto label_2b7e3c;
        case 0x2b7e40u: goto label_2b7e40;
        case 0x2b7e44u: goto label_2b7e44;
        case 0x2b7e48u: goto label_2b7e48;
        case 0x2b7e4cu: goto label_2b7e4c;
        case 0x2b7e50u: goto label_2b7e50;
        case 0x2b7e54u: goto label_2b7e54;
        case 0x2b7e58u: goto label_2b7e58;
        case 0x2b7e5cu: goto label_2b7e5c;
        case 0x2b7e60u: goto label_2b7e60;
        case 0x2b7e64u: goto label_2b7e64;
        case 0x2b7e68u: goto label_2b7e68;
        case 0x2b7e6cu: goto label_2b7e6c;
        case 0x2b7e70u: goto label_2b7e70;
        case 0x2b7e74u: goto label_2b7e74;
        case 0x2b7e78u: goto label_2b7e78;
        case 0x2b7e7cu: goto label_2b7e7c;
        case 0x2b7e80u: goto label_2b7e80;
        case 0x2b7e84u: goto label_2b7e84;
        case 0x2b7e88u: goto label_2b7e88;
        case 0x2b7e8cu: goto label_2b7e8c;
        case 0x2b7e90u: goto label_2b7e90;
        case 0x2b7e94u: goto label_2b7e94;
        case 0x2b7e98u: goto label_2b7e98;
        case 0x2b7e9cu: goto label_2b7e9c;
        case 0x2b7ea0u: goto label_2b7ea0;
        case 0x2b7ea4u: goto label_2b7ea4;
        case 0x2b7ea8u: goto label_2b7ea8;
        case 0x2b7eacu: goto label_2b7eac;
        case 0x2b7eb0u: goto label_2b7eb0;
        case 0x2b7eb4u: goto label_2b7eb4;
        case 0x2b7eb8u: goto label_2b7eb8;
        case 0x2b7ebcu: goto label_2b7ebc;
        case 0x2b7ec0u: goto label_2b7ec0;
        case 0x2b7ec4u: goto label_2b7ec4;
        case 0x2b7ec8u: goto label_2b7ec8;
        case 0x2b7eccu: goto label_2b7ecc;
        case 0x2b7ed0u: goto label_2b7ed0;
        case 0x2b7ed4u: goto label_2b7ed4;
        case 0x2b7ed8u: goto label_2b7ed8;
        case 0x2b7edcu: goto label_2b7edc;
        case 0x2b7ee0u: goto label_2b7ee0;
        case 0x2b7ee4u: goto label_2b7ee4;
        case 0x2b7ee8u: goto label_2b7ee8;
        case 0x2b7eecu: goto label_2b7eec;
        case 0x2b7ef0u: goto label_2b7ef0;
        case 0x2b7ef4u: goto label_2b7ef4;
        case 0x2b7ef8u: goto label_2b7ef8;
        case 0x2b7efcu: goto label_2b7efc;
        case 0x2b7f00u: goto label_2b7f00;
        case 0x2b7f04u: goto label_2b7f04;
        default: return;
    }

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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7764 raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7794 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
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
            return;
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
            return;
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
            return;
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
            goto label_2b7918;
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
            goto label_2b7924;
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
label_2b7910:
    // 0x2b7910: 0x52010007  beql        $s0, $at, . + 4 + (0x7 << 2)
label_2b7914:
    if (ctx->pc == 0x2B7914u) {
        ctx->pc = 0x2B7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7910u;
        // 0x2b7914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7918u;
        goto label_2b7918;
    }
    ctx->pc = 0x2B7910u;
    {
        const bool branch_taken_0x2b7910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7910) {
            ctx->pc = 0x2B7914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7910u;
            // 0x2b7914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7930u;
            goto label_2b7930;
        }
    }
    ctx->pc = 0x2B7918u;
label_2b7918:
    // 0x2b7918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b791c:
    // 0x2b791c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b791cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7920:
    // 0x2b7920: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2b7920u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2b7924:
    // 0x2b7924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7928:
    // 0x2b7928: 0x52010004  beql        $s0, $at, . + 4 + (0x4 << 2)
label_2b792c:
    if (ctx->pc == 0x2B792Cu) {
        ctx->pc = 0x2B792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7928u;
        // 0x2b792c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7930u;
        goto label_2b7930;
    }
    ctx->pc = 0x2B7928u;
    {
        const bool branch_taken_0x2b7928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7928) {
            ctx->pc = 0x2B792Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7928u;
            // 0x2b792c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B793Cu;
            goto label_2b793c;
        }
    }
    ctx->pc = 0x2B7930u;
label_2b7930:
    // 0x2b7930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7934:
    // 0x2b7934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7938:
    // 0x2b7938: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2b7938u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2b793c:
    // 0x2b793c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b793cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7940:
    // 0x2b7940: 0x52010001  beql        $s0, $at, . + 4 + (0x1 << 2)
label_2b7944:
    if (ctx->pc == 0x2B7944u) {
        ctx->pc = 0x2B7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7940u;
        // 0x2b7944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7948u;
        goto label_2b7948;
    }
    ctx->pc = 0x2B7940u;
    {
        const bool branch_taken_0x2b7940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7940) {
            ctx->pc = 0x2B7944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7940u;
            // 0x2b7944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7948u;
            goto label_2b7948;
        }
    }
    ctx->pc = 0x2B7948u;
label_2b7948:
    // 0x2b7948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b794c:
    // 0x2b794c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b794cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7950:
    // 0x2b7950: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b7954:
    if (ctx->pc == 0x2B7954u) {
        ctx->pc = 0x2B7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7950u;
        // 0x2b7954: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7958u;
        goto label_2b7958;
    }
    ctx->pc = 0x2B7950u;
    {
        const bool branch_taken_0x2b7950 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7950u;
        // 0x2b7954: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7950) {
            ctx->pc = 0x2BD950u;
            { ctx->pc = 0x2bd950; return; }
        }
    }
    ctx->pc = 0x2B7958u;
label_2b7958:
    // 0x2b7958: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b7958u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b795c:
    // 0x2b795c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b795cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7960:
    // 0x2b7960: 0xa213fff  j           func_884FFFC
label_2b7964:
    if (ctx->pc == 0x2B7964u) {
        ctx->pc = 0x2B7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7960u;
        // 0x2b7964: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7968u;
        goto label_2b7968;
    }
    ctx->pc = 0x2B7960u;
    ctx->pc = 0x2B7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7960u;
    // 0x2b7964: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B7960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7968u;
label_2b7968:
    // 0x2b7968: 0x400007d9  .word       0x400007D9                   # mfc0        $zero, Index # 000007D9 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b7968u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b796c:
    // 0x2b796c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b796cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7970:
    // 0x2b7970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7974:
    // 0x2b7974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7978:
    // 0x2b7978: 0x0  nop
    ctx->pc = 0x2b7978u;
    // NOP
label_2b797c:
    // 0x2b797c: 0x0  nop
    ctx->pc = 0x2b797cu;
    // NOP
label_2b7980:
    // 0x2b7980: 0x0  nop
    ctx->pc = 0x2b7980u;
    // NOP
label_2b7984:
    // 0x2b7984: 0x4abf0000  vaddx.yw    $vf0, $vf0, $vf31x
    ctx->pc = 0x2b7984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2b7988:
    // 0x2b7988: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b7988u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b798c:
    // 0x2b798c: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b798cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2b7990:
    // 0x2b7990: 0x848080a  j           func_1202028
label_2b7994:
    if (ctx->pc == 0x2B7994u) {
        ctx->pc = 0x2B7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7990u;
        // 0x2b7994: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7998u;
        goto label_2b7998;
    }
    ctx->pc = 0x2B7990u;
    ctx->pc = 0x2B7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7990u;
    // 0x2b7994: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202028u, 0x2B7990u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7998u;
label_2b7998:
    // 0x2b7998: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b799c:
    if (ctx->pc == 0x2B799Cu) {
        ctx->pc = 0x2B799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7998u;
        // 0x2b799c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B79A0u;
        goto label_2b79a0;
    }
    ctx->pc = 0x2B7998u;
    {
        const bool branch_taken_0x2b7998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7998u;
        // 0x2b799c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7998) {
            ctx->pc = 0x2B9CC4u;
            { ctx->pc = 0x2b9cc4; return; }
        }
    }
    ctx->pc = 0x2B79A0u;
label_2b79a0:
    // 0x2b79a0: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b79a0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b79a4:
    // 0x2b79a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79a8:
    // 0x2b79a8: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b79a8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b79ac:
    // 0x2b79ac: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b79acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2b79b0:
    // 0x2b79b0: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b79b0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b79b4:
    // 0x2b79b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79b8:
    // 0x2b79b8: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b79b8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b79bc:
    // 0x2b79bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79c0:
    // 0x2b79c0: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b79c0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b79c4:
    // 0x2b79c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79c8:
    // 0x2b79c8: 0x80083a30  lb          $t0, 0x3A30($zero)
    ctx->pc = 0x2b79c8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A30u));
label_2b79cc:
    // 0x2b79cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79d0:
    // 0x2b79d0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b79d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b79d4:
    // 0x2b79d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79d8:
    // 0x2b79d8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b79d8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b79dc:
    // 0x2b79dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79e0:
    // 0x2b79e0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b79e0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b79e4:
    // 0x2b79e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79e8:
    // 0x2b79e8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b79e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b79ec:
    // 0x2b79ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79f0:
    // 0x2b79f0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b79f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b79f4:
    // 0x2b79f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b79f8:
    // 0x2b79f8: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b79f8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b79fc:
    // 0x2b79fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b79fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a00:
    // 0x2b7a00: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b7a00u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7a04:
    // 0x2b7a04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a08:
    // 0x2b7a08: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b7a08u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7a0c:
    // 0x2b7a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a10:
    // 0x2b7a10: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b7a10u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7a14:
    // 0x2b7a14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a18:
    // 0x2b7a18: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b7a18u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7a1c:
    // 0x2b7a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a20:
    // 0x2b7a20: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2b7a20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b7a24:
    // 0x2b7a24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a28:
    // 0x2b7a28: 0x81e8ab7d  lb          $t0, -0x5483($t7)
    ctx->pc = 0x2b7a28u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b7a2c:
    // 0x2b7a2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a30:
    // 0x2b7a30: 0x81e8b37d  lb          $t0, -0x4C83($t7)
    ctx->pc = 0x2b7a30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b7a34:
    // 0x2b7a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a38:
    // 0x2b7a38: 0x81e8bb7d  lb          $t0, -0x4483($t7)
    ctx->pc = 0x2b7a38u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b7a3c:
    // 0x2b7a3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a40:
    // 0x2b7a40: 0x81e8c37d  lb          $t0, -0x3C83($t7)
    ctx->pc = 0x2b7a40u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b7a44:
    // 0x2b7a44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a48:
    // 0x2b7a48: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2b7a4c:
    if (ctx->pc == 0x2B7A4Cu) {
        ctx->pc = 0x2B7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A48u;
        // 0x2b7a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A50u;
        goto label_2b7a50;
    }
    ctx->pc = 0x2B7A48u;
    {
        const bool branch_taken_0x2b7a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A48u;
        // 0x2b7a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a48) {
            ctx->pc = 0x2B9A50u;
            { ctx->pc = 0x2b9a50; return; }
        }
    }
    ctx->pc = 0x2B7A50u;
label_2b7a50:
    // 0x2b7a50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7a50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7a54:
    // 0x2b7a54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a58:
    // 0x2b7a58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7a58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7a5c:
    // 0x2b7a5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7a5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7a60:
    // 0x2b7a60: 0x90c3000  j           func_430C000
label_2b7a64:
    if (ctx->pc == 0x2B7A64u) {
        ctx->pc = 0x2B7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A60u;
        // 0x2b7a64: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A68u;
        goto label_2b7a68;
    }
    ctx->pc = 0x2B7A60u;
    ctx->pc = 0x2B7A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A60u;
    // 0x2b7a64: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2B7A60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7A68u;
label_2b7a68:
    // 0x2b7a68: 0x82e3000  j           func_B8C000
label_2b7a6c:
    if (ctx->pc == 0x2B7A6Cu) {
        ctx->pc = 0x2B7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A68u;
        // 0x2b7a6c: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A70u;
        goto label_2b7a70;
    }
    ctx->pc = 0x2B7A68u;
    ctx->pc = 0x2B7A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A68u;
    // 0x2b7a6c: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2B7A68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7A70u;
label_2b7a70:
    // 0x2b7a70: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b7a74:
    if (ctx->pc == 0x2B7A74u) {
        ctx->pc = 0x2B7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A70u;
        // 0x2b7a74: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A78u;
        goto label_2b7a78;
    }
    ctx->pc = 0x2B7A70u;
    {
        const bool branch_taken_0x2b7a70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A70u;
        // 0x2b7a74: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a70) {
            ctx->pc = 0x2B9A70u;
            { ctx->pc = 0x2b9a70; return; }
        }
    }
    ctx->pc = 0x2B7A78u;
label_2b7a78:
    // 0x2b7a78: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2b7a7c:
    if (ctx->pc == 0x2B7A7Cu) {
        ctx->pc = 0x2B7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A78u;
        // 0x2b7a7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A80u;
        goto label_2b7a80;
    }
    ctx->pc = 0x2B7A78u;
    {
        const bool branch_taken_0x2b7a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A78u;
        // 0x2b7a7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a78) {
            ctx->pc = 0x2C3A80u;
            return;
        }
    }
    ctx->pc = 0x2B7A80u;
label_2b7a80:
    // 0x2b7a80: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2b7a84:
    if (ctx->pc == 0x2B7A84u) {
        ctx->pc = 0x2B7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A80u;
        // 0x2b7a84: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7A88u;
        goto label_2b7a88;
    }
    ctx->pc = 0x2B7A80u;
    {
        const bool branch_taken_0x2b7a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A80u;
        // 0x2b7a84: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a80) {
            ctx->pc = 0x2B7A8Cu;
            goto label_2b7a8c;
        }
    }
    ctx->pc = 0x2B7A88u;
label_2b7a88:
    // 0x2b7a88: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2b7a88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2b7a8c:
    // 0x2b7a8c: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b7a8cu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2b7a90:
    // 0x2b7a90: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b7a90u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b7a94:
    // 0x2b7a94: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b7a94u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2b7a98:
    // 0x2b7a98: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2b7a9c:
    if (ctx->pc == 0x2B7A9Cu) {
        ctx->pc = 0x2B7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A98u;
        // 0x2b7a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AA0u;
        goto label_2b7aa0;
    }
    ctx->pc = 0x2B7A98u;
    {
        const bool branch_taken_0x2b7a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7a98) {
            ctx->pc = 0x2B7A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7A98u;
            // 0x2b7a9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7AA4u;
            goto label_2b7aa4;
        }
    }
    ctx->pc = 0x2B7AA0u;
label_2b7aa0:
    // 0x2b7aa0: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2b7aa0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2b7aa4:
    // 0x2b7aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7aa8:
    // 0x2b7aa8: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2b7aac:
    if (ctx->pc == 0x2B7AACu) {
        ctx->pc = 0x2B7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AA8u;
        // 0x2b7aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AB0u;
        goto label_2b7ab0;
    }
    ctx->pc = 0x2B7AA8u;
    {
        const bool branch_taken_0x2b7aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AA8u;
        // 0x2b7aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7aa8) {
            ctx->pc = 0x2B7AB8u;
            goto label_2b7ab8;
        }
    }
    ctx->pc = 0x2B7AB0u;
label_2b7ab0:
    // 0x2b7ab0: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2b7ab0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2b7ab4:
    // 0x2b7ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ab8:
    // 0x2b7ab8: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2b7ab8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2b7abc:
    // 0x2b7abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ac0:
    // 0x2b7ac0: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2b7ac4:
    // 0x2b7ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ac8:
    // 0x2b7ac8: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2b7ac8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2b7acc:
    // 0x2b7acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ad0:
    // 0x2b7ad0: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b7ad0u;
    // NOP (addi to $zero)
label_2b7ad4:
    // 0x2b7ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ad8:
    // 0x2b7ad8: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2b7ad8u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2b7adc:
    // 0x2b7adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ae0:
    // 0x2b7ae0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b7ae0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b7ae4:
    // 0x2b7ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ae8:
    // 0x2b7ae8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b7ae8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b7aec:
    // 0x2b7aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7af0:
    // 0x2b7af0: 0xa48080a  j           func_9202028
label_2b7af4:
    if (ctx->pc == 0x2B7AF4u) {
        ctx->pc = 0x2B7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AF0u;
        // 0x2b7af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7AF8u;
        goto label_2b7af8;
    }
    ctx->pc = 0x2B7AF0u;
    ctx->pc = 0x2B7AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7AF0u;
    // 0x2b7af4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9202028u, 0x2B7AF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7AF8u;
label_2b7af8:
    // 0x2b7af8: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2b7af8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b7afc:
    // 0x2b7afc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7afcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b00:
    // 0x2b7b00: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2b7b00u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2b7b04:
    // 0x2b7b04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b08:
    // 0x2b7b08: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2b7b08u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2b7b0c:
    // 0x2b7b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b10:
    // 0x2b7b10: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2b7b10u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2b7b14:
    // 0x2b7b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b18:
    // 0x2b7b18: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b7b18u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b7b1c:
    // 0x2b7b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b20:
    // 0x2b7b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b24:
    // 0x2b7b24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b28:
    // 0x2b7b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b2c:
    // 0x2b7b2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b30:
    // 0x2b7b30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b34:
    // 0x2b7b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b38:
    // 0x2b7b38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b3c:
    // 0x2b7b3c: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b7b40:
    // 0x2b7b40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b44:
    // 0x2b7b44: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7b44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7B44 raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7b48:
    // 0x2b7b48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b4c:
    // 0x2b7b4c: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b7b50:
    // 0x2b7b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b54:
    // 0x2b7b54: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7b54u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b7b58:
    // 0x2b7b58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b5c:
    // 0x2b7b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b60:
    // 0x2b7b60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b64:
    // 0x2b7b64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b68:
    // 0x2b7b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b6c:
    // 0x2b7b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b70:
    // 0x2b7b70: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b7b70u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b7b74:
    // 0x2b7b74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b78:
    // 0x2b7b78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b7c:
    // 0x2b7b7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b80:
    // 0x2b7b80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b84:
    // 0x2b7b84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b88:
    // 0x2b7b88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b8c:
    // 0x2b7b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b90:
    // 0x2b7b90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b94:
    // 0x2b7b94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7b98:
    // 0x2b7b98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7b9c:
    // 0x2b7b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ba0:
    // 0x2b7ba0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7ba0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7ba4:
    // 0x2b7ba4: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7ba4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b7ba8:
    // 0x2b7ba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7ba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bac:
    // 0x2b7bac: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7bacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b7bb0:
    // 0x2b7bb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bb4:
    // 0x2b7bb4: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7bb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7BB4 raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7bb8:
    // 0x2b7bb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7bb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bbc:
    // 0x2b7bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7bc0:
    // 0x2b7bc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7bc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bc4:
    // 0x2b7bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7bc8:
    // 0x2b7bc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7bc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bcc:
    // 0x2b7bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7bd0:
    // 0x2b7bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bd4:
    // 0x2b7bd4: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7bd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B7BD4 raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7bd8:
    // 0x2b7bd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7bd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bdc:
    // 0x2b7bdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7bdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7be0:
    // 0x2b7be0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7be4:
    // 0x2b7be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7be8:
    // 0x2b7be8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7be8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bec:
    // 0x2b7bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7bf0:
    // 0x2b7bf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7bf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bf4:
    // 0x2b7bf4: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7bf4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b7bf8:
    // 0x2b7bf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7bf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7bfc:
    // 0x2b7bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c00:
    // 0x2b7c00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c04:
    // 0x2b7c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c08:
    // 0x2b7c08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c0c:
    // 0x2b7c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c10:
    // 0x2b7c10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c14:
    // 0x2b7c14: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7c14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7C14 raw=0x01FAF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7c18:
    // 0x2b7c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c1c:
    // 0x2b7c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c20:
    // 0x2b7c20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c24:
    // 0x2b7c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c28:
    // 0x2b7c28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c2c:
    // 0x2b7c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c30:
    // 0x2b7c30: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7c30u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b7c34:
    // 0x2b7c34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c38:
    // 0x2b7c38: 0x3e8d002  .word       0x03E8D002                   # srl         $k0, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7c38u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b7c3c:
    // 0x2b7c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c40:
    // 0x2b7c40: 0x81f5237c  lb          $s5, 0x237C($t7)
    ctx->pc = 0x2b7c40u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2b7c44:
    // 0x2b7c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c48:
    // 0x2b7c48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c4c:
    // 0x2b7c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c50:
    // 0x2b7c50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c54:
    // 0x2b7c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c58:
    // 0x2b7c58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c5c:
    // 0x2b7c5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c60:
    // 0x2b7c60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c64:
    // 0x2b7c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c68:
    // 0x2b7c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c6c:
    // 0x2b7c6c: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7c6cu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b7c70:
    // 0x2b7c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c74:
    // 0x2b7c74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c78:
    // 0x2b7c78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c7c:
    // 0x2b7c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c80:
    // 0x2b7c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c84:
    // 0x2b7c84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c88:
    // 0x2b7c88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c8c:
    // 0x2b7c8c: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7c8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B7C8C raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7c90:
    // 0x2b7c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c94:
    // 0x2b7c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7c98:
    // 0x2b7c98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7c98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7c9c:
    // 0x2b7c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ca0:
    // 0x2b7ca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7ca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7ca4:
    // 0x2b7ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ca8:
    // 0x2b7ca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7ca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7cac:
    // 0x2b7cac: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7cacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2b7cb0:
    // 0x2b7cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7cb4:
    // 0x2b7cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cb8:
    // 0x2b7cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7cbc:
    // 0x2b7cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cc0:
    // 0x2b7cc0: 0x2275001  .word       0x02275001                   # INVALID     $s1, $a3, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7cc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7CC0 raw=0x02275001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7cc4:
    // 0x2b7cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cc8:
    // 0x2b7cc8: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7cc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7CC8 raw=0x03C7A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7ccc:
    // 0x2b7ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cd0:
    // 0x2b7cd0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7CD0 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7cd4:
    // 0x2b7cd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cd8:
    // 0x2b7cd8: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2b7cd8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b7cdc:
    // 0x2b7cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ce0:
    // 0x2b7ce0: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2b7ce0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b7ce4:
    // 0x2b7ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ce8:
    // 0x2b7ce8: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2b7ce8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2b7cec:
    // 0x2b7cec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cf0:
    // 0x2b7cf0: 0x8196337c  lb          $s6, 0x337C($t4)
    ctx->pc = 0x2b7cf0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b7cf4:
    // 0x2b7cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cf8:
    // 0x2b7cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7cfc:
    // 0x2b7cfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d00:
    // 0x2b7d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d04:
    // 0x2b7d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d08:
    // 0x2b7d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d0c:
    // 0x2b7d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d10:
    // 0x2b7d10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d14:
    // 0x2b7d14: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7D14 raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7d18:
    // 0x2b7d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d1c:
    // 0x2b7d1c: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7D1C raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7d20:
    // 0x2b7d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d24:
    // 0x2b7d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d28:
    // 0x2b7d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d2c:
    // 0x2b7d2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d30:
    // 0x2b7d30: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d30u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b7d34:
    // 0x2b7d34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d38:
    // 0x2b7d38: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d38u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b7d3c:
    // 0x2b7d3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d40:
    // 0x2b7d40: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2b7d40u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2b7d44:
    // 0x2b7d44: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b7d48:
    // 0x2b7d48: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2b7d48u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2b7d4c:
    // 0x2b7d4c: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7D4C raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b7d50:
    // 0x2b7d50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d54:
    // 0x2b7d54: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b7d58:
    // 0x2b7d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d5c:
    // 0x2b7d5c: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d5cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b7d60:
    // 0x2b7d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d64:
    // 0x2b7d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d68:
    // 0x2b7d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d6c:
    // 0x2b7d6c: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d6cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2b7d70:
    // 0x2b7d70: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2b7d70u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2b7d74:
    // 0x2b7d74: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d74u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b7d78:
    // 0x2b7d78: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b7d78u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b7d7c:
    // 0x2b7d7c: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d7cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b7d80:
    // 0x2b7d80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d84:
    // 0x2b7d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d88:
    // 0x2b7d88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d8c:
    // 0x2b7d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d90:
    // 0x2b7d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d94:
    // 0x2b7d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7d98:
    // 0x2b7d98: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2b7d98u;
    // NOP (addiu $zero, ...)
label_2b7d9c:
    // 0x2b7d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7da0:
    // 0x2b7da0: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2b7da0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2b7da4:
    // 0x2b7da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7da8:
    // 0x2b7da8: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2b7da8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2b7dac:
    // 0x2b7dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7db0:
    // 0x2b7db0: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2b7db4:
    if (ctx->pc == 0x2B7DB4u) {
        ctx->pc = 0x2B7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DB0u;
        // 0x2b7db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7DB8u;
        goto label_2b7db8;
    }
    ctx->pc = 0x2B7DB0u;
    {
        const bool branch_taken_0x2b7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DB0u;
        // 0x2b7db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7db0) {
            ctx->pc = 0x2C7DC0u;
            return;
        }
    }
    ctx->pc = 0x2B7DB8u;
label_2b7db8:
    // 0x2b7db8: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2b7dbc:
    if (ctx->pc == 0x2B7DBCu) {
        ctx->pc = 0x2B7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DB8u;
        // 0x2b7dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7DC0u;
        goto label_2b7dc0;
    }
    ctx->pc = 0x2B7DB8u;
    {
        const bool branch_taken_0x2b7db8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b7db8) {
            ctx->pc = 0x2B7DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7DB8u;
            // 0x2b7dbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1DD4u;
            return;
        }
    }
    ctx->pc = 0x2B7DC0u;
label_2b7dc0:
    // 0x2b7dc0: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b7dc4:
    if (ctx->pc == 0x2B7DC4u) {
        ctx->pc = 0x2B7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DC0u;
        // 0x2b7dc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7DC8u;
        goto label_2b7dc8;
    }
    ctx->pc = 0x2B7DC0u;
    {
        const bool branch_taken_0x2b7dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DC0u;
        // 0x2b7dc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7dc0) {
            ctx->pc = 0x2C5DD0u;
            return;
        }
    }
    ctx->pc = 0x2B7DC8u;
label_2b7dc8:
    // 0x2b7dc8: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2b7dc8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2b7dcc:
    // 0x2b7dcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7dccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7dd0:
    // 0x2b7dd0: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2b7dd0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2b7dd4:
    // 0x2b7dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7dd8:
    // 0x2b7dd8: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2b7dd8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2b7ddc:
    // 0x2b7ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7de0:
    // 0x2b7de0: 0x5a00481b  blezl       $s0, . + 4 + (0x481B << 2)
label_2b7de4:
    if (ctx->pc == 0x2B7DE4u) {
        ctx->pc = 0x2B7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7DE0u;
        // 0x2b7de4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7DE8u;
        goto label_2b7de8;
    }
    ctx->pc = 0x2B7DE0u;
    {
        const bool branch_taken_0x2b7de0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b7de0) {
            ctx->pc = 0x2B7DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7DE0u;
            // 0x2b7de4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9E50u;
            return;
        }
    }
    ctx->pc = 0x2B7DE8u;
label_2b7de8:
    // 0x2b7de8: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2b7de8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2b7dec:
    // 0x2b7dec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7decu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7df0:
    // 0x2b7df0: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b7df0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b7df4:
    // 0x2b7df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7df8:
    // 0x2b7df8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7dfc:
    // 0x2b7dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e00:
    // 0x2b7e00: 0x520c07a2  beql        $s0, $t4, . + 4 + (0x7A2 << 2)
label_2b7e04:
    if (ctx->pc == 0x2B7E04u) {
        ctx->pc = 0x2B7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E00u;
        // 0x2b7e04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E08u;
        goto label_2b7e08;
    }
    ctx->pc = 0x2B7E00u;
    {
        const bool branch_taken_0x2b7e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b7e00) {
            ctx->pc = 0x2B7E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7E00u;
            // 0x2b7e04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9C8Cu;
            { ctx->pc = 0x2b9c8c; return; }
        }
    }
    ctx->pc = 0x2B7E08u;
label_2b7e08:
    // 0x2b7e08: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b7e08u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b7e0c:
    // 0x2b7e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e10:
    // 0x2b7e10: 0x904100a  j           func_4104028
label_2b7e14:
    if (ctx->pc == 0x2B7E14u) {
        ctx->pc = 0x2B7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E10u;
        // 0x2b7e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E18u;
        goto label_2b7e18;
    }
    ctx->pc = 0x2B7E10u;
    ctx->pc = 0x2B7E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E10u;
    // 0x2b7e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2B7E10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7E18u;
label_2b7e18:
    // 0x2b7e18: 0x841100a  j           func_1044028
label_2b7e1c:
    if (ctx->pc == 0x2B7E1Cu) {
        ctx->pc = 0x2B7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E18u;
        // 0x2b7e1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E20u;
        goto label_2b7e20;
    }
    ctx->pc = 0x2B7E18u;
    ctx->pc = 0x2B7E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E18u;
    // 0x2b7e1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044028u, 0x2B7E18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7E20u;
label_2b7e20:
    // 0x2b7e20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7e20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7e24:
    // 0x2b7e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e28:
    // 0x2b7e28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7e28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7e2c:
    // 0x2b7e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e30:
    // 0x2b7e30: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b7e34:
    if (ctx->pc == 0x2B7E34u) {
        ctx->pc = 0x2B7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E30u;
        // 0x2b7e34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E38u;
        goto label_2b7e38;
    }
    ctx->pc = 0x2B7E30u;
    {
        const bool branch_taken_0x2b7e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E30u;
        // 0x2b7e34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e30) {
            ctx->pc = 0x2BFE38u;
            return;
        }
    }
    ctx->pc = 0x2B7E38u;
label_2b7e38:
    // 0x2b7e38: 0xb04100a  j           func_C104028
label_2b7e3c:
    if (ctx->pc == 0x2B7E3Cu) {
        ctx->pc = 0x2B7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E38u;
        // 0x2b7e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E40u;
        goto label_2b7e40;
    }
    ctx->pc = 0x2B7E38u;
    ctx->pc = 0x2B7E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E38u;
    // 0x2b7e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2B7E38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7E40u;
label_2b7e40:
    // 0x2b7e40: 0x5a002783  blezl       $s0, . + 4 + (0x2783 << 2)
label_2b7e44:
    if (ctx->pc == 0x2B7E44u) {
        ctx->pc = 0x2B7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E40u;
        // 0x2b7e44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E48u;
        goto label_2b7e48;
    }
    ctx->pc = 0x2B7E40u;
    {
        const bool branch_taken_0x2b7e40 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b7e40) {
            ctx->pc = 0x2B7E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7E40u;
            // 0x2b7e44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1C50u;
            return;
        }
    }
    ctx->pc = 0x2B7E48u;
label_2b7e48:
    // 0x2b7e48: 0x9030800  j           func_40C2000
label_2b7e4c:
    if (ctx->pc == 0x2B7E4Cu) {
        ctx->pc = 0x2B7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E48u;
        // 0x2b7e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E50u;
        goto label_2b7e50;
    }
    ctx->pc = 0x2B7E48u;
    ctx->pc = 0x2B7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E48u;
    // 0x2b7e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2000u, 0x2B7E48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7E50u;
label_2b7e50:
    // 0x2b7e50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7e50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7e54:
    // 0x2b7e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e58:
    // 0x2b7e58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7e58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7e5c:
    // 0x2b7e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e60:
    // 0x2b7e60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7e60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7e64:
    // 0x2b7e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e68:
    // 0x2b7e68: 0x11eb1fff  beq         $t7, $t3, . + 4 + (0x1FFF << 2)
label_2b7e6c:
    if (ctx->pc == 0x2B7E6Cu) {
        ctx->pc = 0x2B7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E68u;
        // 0x2b7e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E70u;
        goto label_2b7e70;
    }
    ctx->pc = 0x2B7E68u;
    {
        const bool branch_taken_0x2b7e68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E68u;
        // 0x2b7e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e68) {
            ctx->pc = 0x2BFE68u;
            return;
        }
    }
    ctx->pc = 0x2B7E70u;
label_2b7e70:
    // 0x2b7e70: 0x800b5872  lb          $t3, 0x5872($zero)
    ctx->pc = 0x2b7e70u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5872u));
label_2b7e74:
    // 0x2b7e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e78:
    // 0x2b7e78: 0xb0b0800  j           func_C2C2000
label_2b7e7c:
    if (ctx->pc == 0x2B7E7Cu) {
        ctx->pc = 0x2B7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E78u;
        // 0x2b7e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E80u;
        goto label_2b7e80;
    }
    ctx->pc = 0x2B7E78u;
    ctx->pc = 0x2B7E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E78u;
    // 0x2b7e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2000u, 0x2B7E78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7E80u;
label_2b7e80:
    // 0x2b7e80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7e80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7e84:
    // 0x2b7e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e88:
    // 0x2b7e88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7e88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7e8c:
    // 0x2b7e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7e90:
    // 0x2b7e90: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b7e94:
    if (ctx->pc == 0x2B7E94u) {
        ctx->pc = 0x2B7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E90u;
        // 0x2b7e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7E98u;
        goto label_2b7e98;
    }
    ctx->pc = 0x2B7E90u;
    {
        const bool branch_taken_0x2b7e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7E90u;
        // 0x2b7e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7e90) {
            ctx->pc = 0x2BC1BCu;
            { ctx->pc = 0x2bc1bc; return; }
        }
    }
    ctx->pc = 0x2B7E98u;
label_2b7e98:
    // 0x2b7e98: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b7e98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b7e9c:
    // 0x2b7e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ea0:
    // 0x2b7ea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7ea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7ea4:
    // 0x2b7ea4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b7ea4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b7ea8:
    // 0x2b7ea8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7ea8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7eac:
    // 0x2b7eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7eb0:
    // 0x2b7eb0: 0x4000075a  .word       0x4000075A                   # mfc0        $zero, Index # 0000075A <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b7eb0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b7eb4:
    // 0x2b7eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7eb8:
    // 0x2b7eb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7eb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7ebc:
    // 0x2b7ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ec0:
    // 0x2b7ec0: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2b7ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2b7ec4:
    // 0x2b7ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ec8:
    // 0x2b7ec8: 0x52010010  beql        $s0, $at, . + 4 + (0x10 << 2)
label_2b7ecc:
    if (ctx->pc == 0x2B7ECCu) {
        ctx->pc = 0x2B7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EC8u;
        // 0x2b7ecc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7ED0u;
        goto label_2b7ed0;
    }
    ctx->pc = 0x2B7EC8u;
    {
        const bool branch_taken_0x2b7ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7ec8) {
            ctx->pc = 0x2B7ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7EC8u;
            // 0x2b7ecc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F0Cu;
            { ctx->pc = 0x2b7f0c; return; }
        }
    }
    ctx->pc = 0x2B7ED0u;
label_2b7ed0:
    // 0x2b7ed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7ed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7ed4:
    // 0x2b7ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ed8:
    // 0x2b7ed8: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2b7ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2b7edc:
    // 0x2b7edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ee0:
    // 0x2b7ee0: 0x5201000d  beql        $s0, $at, . + 4 + (0xD << 2)
label_2b7ee4:
    if (ctx->pc == 0x2B7EE4u) {
        ctx->pc = 0x2B7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EE0u;
        // 0x2b7ee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7EE8u;
        goto label_2b7ee8;
    }
    ctx->pc = 0x2B7EE0u;
    {
        const bool branch_taken_0x2b7ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7ee0) {
            ctx->pc = 0x2B7EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7EE0u;
            // 0x2b7ee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F18u;
            { ctx->pc = 0x2b7f18; return; }
        }
    }
    ctx->pc = 0x2B7EE8u;
label_2b7ee8:
    // 0x2b7ee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7ee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7eec:
    // 0x2b7eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ef0:
    // 0x2b7ef0: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2b7ef0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2b7ef4:
    // 0x2b7ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ef8:
    // 0x2b7ef8: 0x5201000a  beql        $s0, $at, . + 4 + (0xA << 2)
label_2b7efc:
    if (ctx->pc == 0x2B7EFCu) {
        ctx->pc = 0x2B7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7EF8u;
        // 0x2b7efc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F00u;
        goto label_2b7f00;
    }
    ctx->pc = 0x2B7EF8u;
    {
        const bool branch_taken_0x2b7ef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7ef8) {
            ctx->pc = 0x2B7EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7EF8u;
            // 0x2b7efc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F24u;
            { ctx->pc = 0x2b7f24; return; }
        }
    }
    ctx->pc = 0x2B7F00u;
label_2b7f00:
    // 0x2b7f00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7f00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7f04:
    // 0x2b7f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b7f08u;
    return;
}

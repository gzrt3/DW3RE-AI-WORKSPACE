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


void FUN_0019b6a8_part124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1d79c0u: goto label_1d79c0;
        case 0x1d79c4u: goto label_1d79c4;
        case 0x1d79c8u: goto label_1d79c8;
        case 0x1d79ccu: goto label_1d79cc;
        case 0x1d79d0u: goto label_1d79d0;
        case 0x1d79d4u: goto label_1d79d4;
        case 0x1d79d8u: goto label_1d79d8;
        case 0x1d79dcu: goto label_1d79dc;
        case 0x1d79e0u: goto label_1d79e0;
        case 0x1d79e4u: goto label_1d79e4;
        case 0x1d79e8u: goto label_1d79e8;
        case 0x1d79ecu: goto label_1d79ec;
        case 0x1d79f0u: goto label_1d79f0;
        case 0x1d79f4u: goto label_1d79f4;
        case 0x1d79f8u: goto label_1d79f8;
        case 0x1d79fcu: goto label_1d79fc;
        case 0x1d7a00u: goto label_1d7a00;
        case 0x1d7a04u: goto label_1d7a04;
        case 0x1d7a08u: goto label_1d7a08;
        case 0x1d7a0cu: goto label_1d7a0c;
        case 0x1d7a10u: goto label_1d7a10;
        case 0x1d7a14u: goto label_1d7a14;
        case 0x1d7a18u: goto label_1d7a18;
        case 0x1d7a1cu: goto label_1d7a1c;
        case 0x1d7a20u: goto label_1d7a20;
        case 0x1d7a24u: goto label_1d7a24;
        case 0x1d7a28u: goto label_1d7a28;
        case 0x1d7a2cu: goto label_1d7a2c;
        case 0x1d7a30u: goto label_1d7a30;
        case 0x1d7a34u: goto label_1d7a34;
        case 0x1d7a38u: goto label_1d7a38;
        case 0x1d7a3cu: goto label_1d7a3c;
        case 0x1d7a40u: goto label_1d7a40;
        case 0x1d7a44u: goto label_1d7a44;
        case 0x1d7a48u: goto label_1d7a48;
        case 0x1d7a4cu: goto label_1d7a4c;
        case 0x1d7a50u: goto label_1d7a50;
        case 0x1d7a54u: goto label_1d7a54;
        case 0x1d7a58u: goto label_1d7a58;
        case 0x1d7a5cu: goto label_1d7a5c;
        case 0x1d7a60u: goto label_1d7a60;
        case 0x1d7a64u: goto label_1d7a64;
        case 0x1d7a68u: goto label_1d7a68;
        case 0x1d7a6cu: goto label_1d7a6c;
        case 0x1d7a70u: goto label_1d7a70;
        case 0x1d7a74u: goto label_1d7a74;
        case 0x1d7a78u: goto label_1d7a78;
        case 0x1d7a7cu: goto label_1d7a7c;
        case 0x1d7a80u: goto label_1d7a80;
        case 0x1d7a84u: goto label_1d7a84;
        case 0x1d7a88u: goto label_1d7a88;
        case 0x1d7a8cu: goto label_1d7a8c;
        case 0x1d7a90u: goto label_1d7a90;
        case 0x1d7a94u: goto label_1d7a94;
        case 0x1d7a98u: goto label_1d7a98;
        case 0x1d7a9cu: goto label_1d7a9c;
        case 0x1d7aa0u: goto label_1d7aa0;
        case 0x1d7aa4u: goto label_1d7aa4;
        case 0x1d7aa8u: goto label_1d7aa8;
        case 0x1d7aacu: goto label_1d7aac;
        case 0x1d7ab0u: goto label_1d7ab0;
        case 0x1d7ab4u: goto label_1d7ab4;
        case 0x1d7ab8u: goto label_1d7ab8;
        case 0x1d7abcu: goto label_1d7abc;
        case 0x1d7ac0u: goto label_1d7ac0;
        case 0x1d7ac4u: goto label_1d7ac4;
        case 0x1d7ac8u: goto label_1d7ac8;
        case 0x1d7accu: goto label_1d7acc;
        case 0x1d7ad0u: goto label_1d7ad0;
        case 0x1d7ad4u: goto label_1d7ad4;
        case 0x1d7ad8u: goto label_1d7ad8;
        case 0x1d7adcu: goto label_1d7adc;
        case 0x1d7ae0u: goto label_1d7ae0;
        case 0x1d7ae4u: goto label_1d7ae4;
        case 0x1d7ae8u: goto label_1d7ae8;
        case 0x1d7aecu: goto label_1d7aec;
        case 0x1d7af0u: goto label_1d7af0;
        case 0x1d7af4u: goto label_1d7af4;
        case 0x1d7af8u: goto label_1d7af8;
        case 0x1d7afcu: goto label_1d7afc;
        case 0x1d7b00u: goto label_1d7b00;
        case 0x1d7b04u: goto label_1d7b04;
        case 0x1d7b08u: goto label_1d7b08;
        case 0x1d7b0cu: goto label_1d7b0c;
        case 0x1d7b10u: goto label_1d7b10;
        case 0x1d7b14u: goto label_1d7b14;
        case 0x1d7b18u: goto label_1d7b18;
        case 0x1d7b1cu: goto label_1d7b1c;
        case 0x1d7b20u: goto label_1d7b20;
        case 0x1d7b24u: goto label_1d7b24;
        case 0x1d7b28u: goto label_1d7b28;
        case 0x1d7b2cu: goto label_1d7b2c;
        case 0x1d7b30u: goto label_1d7b30;
        case 0x1d7b34u: goto label_1d7b34;
        case 0x1d7b38u: goto label_1d7b38;
        case 0x1d7b3cu: goto label_1d7b3c;
        case 0x1d7b40u: goto label_1d7b40;
        case 0x1d7b44u: goto label_1d7b44;
        case 0x1d7b48u: goto label_1d7b48;
        case 0x1d7b4cu: goto label_1d7b4c;
        case 0x1d7b50u: goto label_1d7b50;
        case 0x1d7b54u: goto label_1d7b54;
        case 0x1d7b58u: goto label_1d7b58;
        case 0x1d7b5cu: goto label_1d7b5c;
        case 0x1d7b60u: goto label_1d7b60;
        case 0x1d7b64u: goto label_1d7b64;
        case 0x1d7b68u: goto label_1d7b68;
        case 0x1d7b6cu: goto label_1d7b6c;
        case 0x1d7b70u: goto label_1d7b70;
        case 0x1d7b74u: goto label_1d7b74;
        case 0x1d7b78u: goto label_1d7b78;
        case 0x1d7b7cu: goto label_1d7b7c;
        case 0x1d7b80u: goto label_1d7b80;
        case 0x1d7b84u: goto label_1d7b84;
        case 0x1d7b88u: goto label_1d7b88;
        case 0x1d7b8cu: goto label_1d7b8c;
        case 0x1d7b90u: goto label_1d7b90;
        case 0x1d7b94u: goto label_1d7b94;
        case 0x1d7b98u: goto label_1d7b98;
        case 0x1d7b9cu: goto label_1d7b9c;
        case 0x1d7ba0u: goto label_1d7ba0;
        case 0x1d7ba4u: goto label_1d7ba4;
        case 0x1d7ba8u: goto label_1d7ba8;
        case 0x1d7bacu: goto label_1d7bac;
        case 0x1d7bb0u: goto label_1d7bb0;
        case 0x1d7bb4u: goto label_1d7bb4;
        case 0x1d7bb8u: goto label_1d7bb8;
        case 0x1d7bbcu: goto label_1d7bbc;
        case 0x1d7bc0u: goto label_1d7bc0;
        case 0x1d7bc4u: goto label_1d7bc4;
        case 0x1d7bc8u: goto label_1d7bc8;
        case 0x1d7bccu: goto label_1d7bcc;
        case 0x1d7bd0u: goto label_1d7bd0;
        case 0x1d7bd4u: goto label_1d7bd4;
        case 0x1d7bd8u: goto label_1d7bd8;
        case 0x1d7bdcu: goto label_1d7bdc;
        case 0x1d7be0u: goto label_1d7be0;
        case 0x1d7be4u: goto label_1d7be4;
        case 0x1d7be8u: goto label_1d7be8;
        case 0x1d7becu: goto label_1d7bec;
        case 0x1d7bf0u: goto label_1d7bf0;
        case 0x1d7bf4u: goto label_1d7bf4;
        case 0x1d7bf8u: goto label_1d7bf8;
        case 0x1d7bfcu: goto label_1d7bfc;
        case 0x1d7c00u: goto label_1d7c00;
        case 0x1d7c04u: goto label_1d7c04;
        case 0x1d7c08u: goto label_1d7c08;
        case 0x1d7c0cu: goto label_1d7c0c;
        case 0x1d7c10u: goto label_1d7c10;
        case 0x1d7c14u: goto label_1d7c14;
        case 0x1d7c18u: goto label_1d7c18;
        case 0x1d7c1cu: goto label_1d7c1c;
        case 0x1d7c20u: goto label_1d7c20;
        case 0x1d7c24u: goto label_1d7c24;
        case 0x1d7c28u: goto label_1d7c28;
        case 0x1d7c2cu: goto label_1d7c2c;
        case 0x1d7c30u: goto label_1d7c30;
        case 0x1d7c34u: goto label_1d7c34;
        case 0x1d7c38u: goto label_1d7c38;
        case 0x1d7c3cu: goto label_1d7c3c;
        case 0x1d7c40u: goto label_1d7c40;
        case 0x1d7c44u: goto label_1d7c44;
        case 0x1d7c48u: goto label_1d7c48;
        case 0x1d7c4cu: goto label_1d7c4c;
        case 0x1d7c50u: goto label_1d7c50;
        case 0x1d7c54u: goto label_1d7c54;
        case 0x1d7c58u: goto label_1d7c58;
        case 0x1d7c5cu: goto label_1d7c5c;
        case 0x1d7c60u: goto label_1d7c60;
        case 0x1d7c64u: goto label_1d7c64;
        case 0x1d7c68u: goto label_1d7c68;
        case 0x1d7c6cu: goto label_1d7c6c;
        case 0x1d7c70u: goto label_1d7c70;
        case 0x1d7c74u: goto label_1d7c74;
        case 0x1d7c78u: goto label_1d7c78;
        case 0x1d7c7cu: goto label_1d7c7c;
        case 0x1d7c80u: goto label_1d7c80;
        case 0x1d7c84u: goto label_1d7c84;
        case 0x1d7c88u: goto label_1d7c88;
        case 0x1d7c8cu: goto label_1d7c8c;
        case 0x1d7c90u: goto label_1d7c90;
        case 0x1d7c94u: goto label_1d7c94;
        case 0x1d7c98u: goto label_1d7c98;
        case 0x1d7c9cu: goto label_1d7c9c;
        case 0x1d7ca0u: goto label_1d7ca0;
        case 0x1d7ca4u: goto label_1d7ca4;
        case 0x1d7ca8u: goto label_1d7ca8;
        case 0x1d7cacu: goto label_1d7cac;
        case 0x1d7cb0u: goto label_1d7cb0;
        case 0x1d7cb4u: goto label_1d7cb4;
        case 0x1d7cb8u: goto label_1d7cb8;
        case 0x1d7cbcu: goto label_1d7cbc;
        case 0x1d7cc0u: goto label_1d7cc0;
        case 0x1d7cc4u: goto label_1d7cc4;
        case 0x1d7cc8u: goto label_1d7cc8;
        case 0x1d7cccu: goto label_1d7ccc;
        case 0x1d7cd0u: goto label_1d7cd0;
        case 0x1d7cd4u: goto label_1d7cd4;
        case 0x1d7cd8u: goto label_1d7cd8;
        case 0x1d7cdcu: goto label_1d7cdc;
        case 0x1d7ce0u: goto label_1d7ce0;
        case 0x1d7ce4u: goto label_1d7ce4;
        case 0x1d7ce8u: goto label_1d7ce8;
        case 0x1d7cecu: goto label_1d7cec;
        case 0x1d7cf0u: goto label_1d7cf0;
        case 0x1d7cf4u: goto label_1d7cf4;
        case 0x1d7cf8u: goto label_1d7cf8;
        case 0x1d7cfcu: goto label_1d7cfc;
        case 0x1d7d00u: goto label_1d7d00;
        case 0x1d7d04u: goto label_1d7d04;
        case 0x1d7d08u: goto label_1d7d08;
        case 0x1d7d0cu: goto label_1d7d0c;
        case 0x1d7d10u: goto label_1d7d10;
        case 0x1d7d14u: goto label_1d7d14;
        case 0x1d7d18u: goto label_1d7d18;
        case 0x1d7d1cu: goto label_1d7d1c;
        case 0x1d7d20u: goto label_1d7d20;
        case 0x1d7d24u: goto label_1d7d24;
        case 0x1d7d28u: goto label_1d7d28;
        case 0x1d7d2cu: goto label_1d7d2c;
        case 0x1d7d30u: goto label_1d7d30;
        case 0x1d7d34u: goto label_1d7d34;
        case 0x1d7d38u: goto label_1d7d38;
        case 0x1d7d3cu: goto label_1d7d3c;
        case 0x1d7d40u: goto label_1d7d40;
        case 0x1d7d44u: goto label_1d7d44;
        case 0x1d7d48u: goto label_1d7d48;
        case 0x1d7d4cu: goto label_1d7d4c;
        case 0x1d7d50u: goto label_1d7d50;
        case 0x1d7d54u: goto label_1d7d54;
        case 0x1d7d58u: goto label_1d7d58;
        case 0x1d7d5cu: goto label_1d7d5c;
        case 0x1d7d60u: goto label_1d7d60;
        case 0x1d7d64u: goto label_1d7d64;
        case 0x1d7d68u: goto label_1d7d68;
        case 0x1d7d6cu: goto label_1d7d6c;
        case 0x1d7d70u: goto label_1d7d70;
        case 0x1d7d74u: goto label_1d7d74;
        case 0x1d7d78u: goto label_1d7d78;
        case 0x1d7d7cu: goto label_1d7d7c;
        case 0x1d7d80u: goto label_1d7d80;
        case 0x1d7d84u: goto label_1d7d84;
        case 0x1d7d88u: goto label_1d7d88;
        case 0x1d7d8cu: goto label_1d7d8c;
        case 0x1d7d90u: goto label_1d7d90;
        case 0x1d7d94u: goto label_1d7d94;
        case 0x1d7d98u: goto label_1d7d98;
        case 0x1d7d9cu: goto label_1d7d9c;
        case 0x1d7da0u: goto label_1d7da0;
        case 0x1d7da4u: goto label_1d7da4;
        case 0x1d7da8u: goto label_1d7da8;
        case 0x1d7dacu: goto label_1d7dac;
        case 0x1d7db0u: goto label_1d7db0;
        case 0x1d7db4u: goto label_1d7db4;
        case 0x1d7db8u: goto label_1d7db8;
        case 0x1d7dbcu: goto label_1d7dbc;
        case 0x1d7dc0u: goto label_1d7dc0;
        case 0x1d7dc4u: goto label_1d7dc4;
        case 0x1d7dc8u: goto label_1d7dc8;
        case 0x1d7dccu: goto label_1d7dcc;
        case 0x1d7dd0u: goto label_1d7dd0;
        case 0x1d7dd4u: goto label_1d7dd4;
        case 0x1d7dd8u: goto label_1d7dd8;
        case 0x1d7ddcu: goto label_1d7ddc;
        case 0x1d7de0u: goto label_1d7de0;
        case 0x1d7de4u: goto label_1d7de4;
        case 0x1d7de8u: goto label_1d7de8;
        case 0x1d7decu: goto label_1d7dec;
        case 0x1d7df0u: goto label_1d7df0;
        case 0x1d7df4u: goto label_1d7df4;
        case 0x1d7df8u: goto label_1d7df8;
        case 0x1d7dfcu: goto label_1d7dfc;
        case 0x1d7e00u: goto label_1d7e00;
        case 0x1d7e04u: goto label_1d7e04;
        case 0x1d7e08u: goto label_1d7e08;
        case 0x1d7e0cu: goto label_1d7e0c;
        case 0x1d7e10u: goto label_1d7e10;
        case 0x1d7e14u: goto label_1d7e14;
        case 0x1d7e18u: goto label_1d7e18;
        case 0x1d7e1cu: goto label_1d7e1c;
        case 0x1d7e20u: goto label_1d7e20;
        case 0x1d7e24u: goto label_1d7e24;
        case 0x1d7e28u: goto label_1d7e28;
        case 0x1d7e2cu: goto label_1d7e2c;
        case 0x1d7e30u: goto label_1d7e30;
        case 0x1d7e34u: goto label_1d7e34;
        case 0x1d7e38u: goto label_1d7e38;
        case 0x1d7e3cu: goto label_1d7e3c;
        case 0x1d7e40u: goto label_1d7e40;
        case 0x1d7e44u: goto label_1d7e44;
        case 0x1d7e48u: goto label_1d7e48;
        case 0x1d7e4cu: goto label_1d7e4c;
        case 0x1d7e50u: goto label_1d7e50;
        case 0x1d7e54u: goto label_1d7e54;
        case 0x1d7e58u: goto label_1d7e58;
        case 0x1d7e5cu: goto label_1d7e5c;
        case 0x1d7e60u: goto label_1d7e60;
        case 0x1d7e64u: goto label_1d7e64;
        case 0x1d7e68u: goto label_1d7e68;
        case 0x1d7e6cu: goto label_1d7e6c;
        case 0x1d7e70u: goto label_1d7e70;
        case 0x1d7e74u: goto label_1d7e74;
        case 0x1d7e78u: goto label_1d7e78;
        case 0x1d7e7cu: goto label_1d7e7c;
        case 0x1d7e80u: goto label_1d7e80;
        case 0x1d7e84u: goto label_1d7e84;
        case 0x1d7e88u: goto label_1d7e88;
        case 0x1d7e8cu: goto label_1d7e8c;
        case 0x1d7e90u: goto label_1d7e90;
        case 0x1d7e94u: goto label_1d7e94;
        case 0x1d7e98u: goto label_1d7e98;
        case 0x1d7e9cu: goto label_1d7e9c;
        case 0x1d7ea0u: goto label_1d7ea0;
        case 0x1d7ea4u: goto label_1d7ea4;
        case 0x1d7ea8u: goto label_1d7ea8;
        case 0x1d7eacu: goto label_1d7eac;
        case 0x1d7eb0u: goto label_1d7eb0;
        case 0x1d7eb4u: goto label_1d7eb4;
        case 0x1d7eb8u: goto label_1d7eb8;
        case 0x1d7ebcu: goto label_1d7ebc;
        case 0x1d7ec0u: goto label_1d7ec0;
        case 0x1d7ec4u: goto label_1d7ec4;
        case 0x1d7ec8u: goto label_1d7ec8;
        case 0x1d7eccu: goto label_1d7ecc;
        case 0x1d7ed0u: goto label_1d7ed0;
        case 0x1d7ed4u: goto label_1d7ed4;
        case 0x1d7ed8u: goto label_1d7ed8;
        case 0x1d7edcu: goto label_1d7edc;
        case 0x1d7ee0u: goto label_1d7ee0;
        case 0x1d7ee4u: goto label_1d7ee4;
        case 0x1d7ee8u: goto label_1d7ee8;
        case 0x1d7eecu: goto label_1d7eec;
        case 0x1d7ef0u: goto label_1d7ef0;
        case 0x1d7ef4u: goto label_1d7ef4;
        case 0x1d7ef8u: goto label_1d7ef8;
        case 0x1d7efcu: goto label_1d7efc;
        case 0x1d7f00u: goto label_1d7f00;
        case 0x1d7f04u: goto label_1d7f04;
        case 0x1d7f08u: goto label_1d7f08;
        case 0x1d7f0cu: goto label_1d7f0c;
        case 0x1d7f10u: goto label_1d7f10;
        case 0x1d7f14u: goto label_1d7f14;
        case 0x1d7f18u: goto label_1d7f18;
        case 0x1d7f1cu: goto label_1d7f1c;
        case 0x1d7f20u: goto label_1d7f20;
        case 0x1d7f24u: goto label_1d7f24;
        case 0x1d7f28u: goto label_1d7f28;
        case 0x1d7f2cu: goto label_1d7f2c;
        case 0x1d7f30u: goto label_1d7f30;
        case 0x1d7f34u: goto label_1d7f34;
        case 0x1d7f38u: goto label_1d7f38;
        case 0x1d7f3cu: goto label_1d7f3c;
        case 0x1d7f40u: goto label_1d7f40;
        case 0x1d7f44u: goto label_1d7f44;
        case 0x1d7f48u: goto label_1d7f48;
        case 0x1d7f4cu: goto label_1d7f4c;
        case 0x1d7f50u: goto label_1d7f50;
        case 0x1d7f54u: goto label_1d7f54;
        case 0x1d7f58u: goto label_1d7f58;
        case 0x1d7f5cu: goto label_1d7f5c;
        case 0x1d7f60u: goto label_1d7f60;
        case 0x1d7f64u: goto label_1d7f64;
        default: return;
    }

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
            { ctx->pc = 0x1d76e4; return; }
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
            goto label_1d79d4;
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
            goto label_1d79d4;
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
label_1d79c0:
    if (ctx->pc == 0x1D79C0u) {
        ctx->pc = 0x1D79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79BCu;
        // 0x1d79c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D79C4u;
        goto label_1d79c4;
    }
    ctx->pc = 0x1D79BCu;
    SET_GPR_U32(ctx, 31, 0x1D79C4u);
    ctx->pc = 0x1D79C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79BCu;
    // 0x1d79c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D79BCu, 0x1D79C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79C4u;
label_1d79c4:
    // 0x1d79c4: 0xc060258  jal         func_180960
label_1d79c8:
    if (ctx->pc == 0x1D79C8u) {
        ctx->pc = 0x1D79CCu;
        goto label_1d79cc;
    }
    ctx->pc = 0x1D79C4u;
    SET_GPR_U32(ctx, 31, 0x1D79CCu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D79C4u, 0x1D79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79CCu;
label_1d79cc:
    // 0x1d79cc: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
label_1d79d0:
    if (ctx->pc == 0x1D79D0u) {
        ctx->pc = 0x1D79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79CCu;
        // 0x1d79d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D79D4u;
        goto label_1d79d4;
    }
    ctx->pc = 0x1D79CCu;
    {
        const bool branch_taken_0x1d79cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79CCu;
        // 0x1d79d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79cc) {
            ctx->pc = 0x1D77BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d77bc;
        }
    }
    ctx->pc = 0x1D79D4u;
label_1d79d4:
    // 0x1d79d4: 0x0  nop
    ctx->pc = 0x1d79d4u;
    // NOP
label_1d79d8:
    // 0x1d79d8: 0x12600050  beqz        $s3, . + 4 + (0x50 << 2)
label_1d79dc:
    if (ctx->pc == 0x1D79DCu) {
        ctx->pc = 0x1D79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79D8u;
        // 0x1d79dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D79E0u;
        goto label_1d79e0;
    }
    ctx->pc = 0x1D79D8u;
    {
        const bool branch_taken_0x1d79d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79D8u;
        // 0x1d79dc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79d8) {
            ctx->pc = 0x1D7B1Cu;
            goto label_1d7b1c;
        }
    }
    ctx->pc = 0x1D79E0u;
label_1d79e0:
    // 0x1d79e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d79e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d79e4:
    // 0x1d79e4: 0x8f828c68  lw          $v0, -0x7398($gp)
    ctx->pc = 0x1d79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d79e8:
    // 0x1d79e8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d79ec:
    // 0x1d79ec: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1d79ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d79f0:
    // 0x1d79f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d79f4:
    if (ctx->pc == 0x1D79F4u) {
        ctx->pc = 0x1D79F8u;
        goto label_1d79f8;
    }
    ctx->pc = 0x1D79F0u;
    {
        const bool branch_taken_0x1d79f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d79f0) {
            ctx->pc = 0x1D7A00u;
            goto label_1d7a00;
        }
    }
    ctx->pc = 0x1D79F8u;
label_1d79f8:
    // 0x1d79f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d79fc:
    if (ctx->pc == 0x1D79FCu) {
        ctx->pc = 0x1D79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79F8u;
        // 0x1d79fc: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7A00u;
        goto label_1d7a00;
    }
    ctx->pc = 0x1D79F8u;
    {
        const bool branch_taken_0x1d79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79F8u;
        // 0x1d79fc: 0xaf828c68  sw          $v0, -0x7398($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79f8) {
            ctx->pc = 0x1D7A08u;
            goto label_1d7a08;
        }
    }
    ctx->pc = 0x1D7A00u;
label_1d7a00:
    // 0x1d7a00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7a04:
    // 0x1d7a04: 0xaf828c68  sw          $v0, -0x7398($gp)
    ctx->pc = 0x1d7a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
label_1d7a08:
    // 0x1d7a08: 0x8f828c64  lw          $v0, -0x739C($gp)
    ctx->pc = 0x1d7a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7a0c:
    // 0x1d7a0c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7a10:
    // 0x1d7a10: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7a14:
    // 0x1d7a14: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7a14u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7a18:
    // 0x1d7a18: 0xaf828c64  sw          $v0, -0x739C($gp)
    ctx->pc = 0x1d7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937700), GPR_U32(ctx, 2));
label_1d7a1c:
    // 0x1d7a1c: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7a20:
    // 0x1d7a20: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7a24:
    // 0x1d7a24: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7a28:
    // 0x1d7a28: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7a28u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7a2c:
    // 0x1d7a2c: 0xaf828c60  sw          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
label_1d7a30:
    // 0x1d7a30: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7a34:
    // 0x1d7a34: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7a38:
    // 0x1d7a38: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7a3c:
    // 0x1d7a3c: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7a3cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7a40:
    // 0x1d7a40: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
label_1d7a44:
    // 0x1d7a44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d7a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d7a48:
    // 0x1d7a48: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1d7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d7a4c:
    // 0x1d7a4c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d7a50:
    // 0x1d7a50: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d7a54:
    // 0x1d7a54: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d7a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7a58:
    // 0x1d7a58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d7a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d7a5c:
    // 0x1d7a5c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d7a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d7a60:
    // 0x1d7a60: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1d7a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1d7a64:
    // 0x1d7a64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7a68:
    // 0x1d7a68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7a6c:
    // 0x1d7a6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7a6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7a70:
    // 0x1d7a70: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x1d7a70u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d7a74:
    // 0x1d7a74: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d7a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d7a78:
    // 0x1d7a78: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1d7a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1d7a7c:
    // 0x1d7a7c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d7a80:
    // 0x1d7a80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d7a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7a84:
    // 0x1d7a84: 0xa0aa0080  sb          $t2, 0x80($a1)
    ctx->pc = 0x1d7a84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 10));
label_1d7a88:
    // 0x1d7a88: 0xa0aa0081  sb          $t2, 0x81($a1)
    ctx->pc = 0x1d7a88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 10));
label_1d7a8c:
    // 0x1d7a8c: 0xa0aa0082  sb          $t2, 0x82($a1)
    ctx->pc = 0x1d7a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 10));
label_1d7a90:
    // 0x1d7a90: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x1d7a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d7a94:
    // 0x1d7a94: 0xa0a20083  sb          $v0, 0x83($a1)
    ctx->pc = 0x1d7a94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 2));
label_1d7a98:
    // 0x1d7a98: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x1d7a98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_1d7a9c:
    // 0x1d7a9c: 0xa0aa0120  sb          $t2, 0x120($a1)
    ctx->pc = 0x1d7a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 10));
label_1d7aa0:
    // 0x1d7aa0: 0xa0aa0121  sb          $t2, 0x121($a1)
    ctx->pc = 0x1d7aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 289), (uint8_t)GPR_U32(ctx, 10));
label_1d7aa4:
    // 0x1d7aa4: 0xa0aa0122  sb          $t2, 0x122($a1)
    ctx->pc = 0x1d7aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 290), (uint8_t)GPR_U32(ctx, 10));
label_1d7aa8:
    // 0x1d7aa8: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x1d7aa8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7aac:
    // 0x1d7aac: 0xa0a20123  sb          $v0, 0x123($a1)
    ctx->pc = 0x1d7aacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 2));
label_1d7ab0:
    // 0x1d7ab0: 0xaca30124  sw          $v1, 0x124($a1)
    ctx->pc = 0x1d7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 3));
label_1d7ab4:
    // 0x1d7ab4: 0xa0aa01c0  sb          $t2, 0x1C0($a1)
    ctx->pc = 0x1d7ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 10));
label_1d7ab8:
    // 0x1d7ab8: 0xa0aa01c1  sb          $t2, 0x1C1($a1)
    ctx->pc = 0x1d7ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 449), (uint8_t)GPR_U32(ctx, 10));
label_1d7abc:
    // 0x1d7abc: 0xa0aa01c2  sb          $t2, 0x1C2($a1)
    ctx->pc = 0x1d7abcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 450), (uint8_t)GPR_U32(ctx, 10));
label_1d7ac0:
    // 0x1d7ac0: 0x83828c60  lb          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7ac0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7ac4:
    // 0x1d7ac4: 0xa0a201c3  sb          $v0, 0x1C3($a1)
    ctx->pc = 0x1d7ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 2));
label_1d7ac8:
    // 0x1d7ac8: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x1d7ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_1d7acc:
    // 0x1d7acc: 0xa0aa0260  sb          $t2, 0x260($a1)
    ctx->pc = 0x1d7accu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 608), (uint8_t)GPR_U32(ctx, 10));
label_1d7ad0:
    // 0x1d7ad0: 0xa0aa0261  sb          $t2, 0x261($a1)
    ctx->pc = 0x1d7ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 609), (uint8_t)GPR_U32(ctx, 10));
label_1d7ad4:
    // 0x1d7ad4: 0xa0aa0262  sb          $t2, 0x262($a1)
    ctx->pc = 0x1d7ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 610), (uint8_t)GPR_U32(ctx, 10));
label_1d7ad8:
    // 0x1d7ad8: 0x83828c5c  lb          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7adc:
    // 0x1d7adc: 0xa0a20263  sb          $v0, 0x263($a1)
    ctx->pc = 0x1d7adcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 2));
label_1d7ae0:
    // 0x1d7ae0: 0xc066c72  jal         func_19B1C8
label_1d7ae4:
    if (ctx->pc == 0x1D7AE4u) {
        ctx->pc = 0x1D7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AE0u;
        // 0x1d7ae4: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7AE8u;
        goto label_1d7ae8;
    }
    ctx->pc = 0x1D7AE0u;
    SET_GPR_U32(ctx, 31, 0x1D7AE8u);
    ctx->pc = 0x1D7AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AE0u;
    // 0x1d7ae4: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D7AE0u, 0x1D7AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AE8u;
label_1d7ae8:
    // 0x1d7ae8: 0xc04e120  jal         func_138480
label_1d7aec:
    if (ctx->pc == 0x1D7AECu) {
        ctx->pc = 0x1D7AF0u;
        goto label_1d7af0;
    }
    ctx->pc = 0x1D7AE8u;
    SET_GPR_U32(ctx, 31, 0x1D7AF0u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D7AE8u, 0x1D7AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AF0u;
label_1d7af0:
    // 0x1d7af0: 0xc05b578  jal         func_16D5E0
label_1d7af4:
    if (ctx->pc == 0x1D7AF4u) {
        ctx->pc = 0x1D7AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AF0u;
        // 0x1d7af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7AF8u;
        goto label_1d7af8;
    }
    ctx->pc = 0x1D7AF0u;
    SET_GPR_U32(ctx, 31, 0x1D7AF8u);
    ctx->pc = 0x1D7AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7AF0u;
    // 0x1d7af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D7AF0u, 0x1D7AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7AF8u;
label_1d7af8:
    // 0x1d7af8: 0xc060258  jal         func_180960
label_1d7afc:
    if (ctx->pc == 0x1D7AFCu) {
        ctx->pc = 0x1D7B00u;
        goto label_1d7b00;
    }
    ctx->pc = 0x1D7AF8u;
    SET_GPR_U32(ctx, 31, 0x1D7B00u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7AF8u, 0x1D7B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B00u;
label_1d7b00:
    // 0x1d7b00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d7b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d7b04:
    // 0x1d7b04: 0x2a210011  slti        $at, $s1, 0x11
    ctx->pc = 0x1d7b04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
label_1d7b08:
    // 0x1d7b08: 0x1420ffb6  bnez        $at, . + 4 + (-0x4A << 2)
label_1d7b0c:
    if (ctx->pc == 0x1D7B0Cu) {
        ctx->pc = 0x1D7B10u;
        goto label_1d7b10;
    }
    ctx->pc = 0x1D7B08u;
    {
        const bool branch_taken_0x1d7b08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b08) {
            ctx->pc = 0x1D79E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d79e4;
        }
    }
    ctx->pc = 0x1D7B10u;
label_1d7b10:
    // 0x1d7b10: 0x10000048  b           . + 4 + (0x48 << 2)
label_1d7b14:
    if (ctx->pc == 0x1D7B14u) {
        ctx->pc = 0x1D7B18u;
        goto label_1d7b18;
    }
    ctx->pc = 0x1D7B10u;
    {
        const bool branch_taken_0x1d7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b10) {
            ctx->pc = 0x1D7C34u;
            goto label_1d7c34;
        }
    }
    ctx->pc = 0x1D7B18u;
label_1d7b18:
    // 0x1d7b18: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d7b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d7b1c:
    // 0x1d7b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b20:
    // 0x1d7b20: 0xc04e188  jal         func_138620
label_1d7b24:
    if (ctx->pc == 0x1D7B24u) {
        ctx->pc = 0x1D7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B20u;
        // 0x1d7b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7B28u;
        goto label_1d7b28;
    }
    ctx->pc = 0x1D7B20u;
    SET_GPR_U32(ctx, 31, 0x1D7B28u);
    ctx->pc = 0x1D7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7B20u;
    // 0x1d7b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1D7B20u, 0x1D7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B28u;
label_1d7b28:
    // 0x1d7b28: 0xc04e198  jal         func_138660
label_1d7b2c:
    if (ctx->pc == 0x1D7B2Cu) {
        ctx->pc = 0x1D7B30u;
        goto label_1d7b30;
    }
    ctx->pc = 0x1D7B28u;
    SET_GPR_U32(ctx, 31, 0x1D7B30u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D7B28u, 0x1D7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B30u;
label_1d7b30:
    // 0x1d7b30: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_1d7b34:
    if (ctx->pc == 0x1D7B34u) {
        ctx->pc = 0x1D7B38u;
        goto label_1d7b38;
    }
    ctx->pc = 0x1D7B30u;
    {
        const bool branch_taken_0x1d7b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b30) {
            ctx->pc = 0x1D7C34u;
            goto label_1d7c34;
        }
    }
    ctx->pc = 0x1D7B38u;
label_1d7b38:
    // 0x1d7b38: 0xc04e168  jal         func_1385A0
label_1d7b3c:
    if (ctx->pc == 0x1D7B3Cu) {
        ctx->pc = 0x1D7B40u;
        goto label_1d7b40;
    }
    ctx->pc = 0x1D7B38u;
    SET_GPR_U32(ctx, 31, 0x1D7B40u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1D7B38u, 0x1D7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7B40u;
label_1d7b40:
    // 0x1d7b40: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7b44:
    // 0x1d7b44: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7b48:
    // 0x1d7b48: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7b4c:
    // 0x1d7b4c: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7b4cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7b50:
    // 0x1d7b50: 0xaf828c60  sw          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
label_1d7b54:
    // 0x1d7b54: 0x8f828c5c  lw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7b58:
    // 0x1d7b58: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d7b5c:
    // 0x1d7b5c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d7b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d7b60:
    // 0x1d7b60: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d7b60u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d7b64:
    // 0x1d7b64: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7b64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
label_1d7b68:
    // 0x1d7b68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d7b6c:
    // 0x1d7b6c: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1d7b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d7b70:
    // 0x1d7b70: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1d7b74:
    // 0x1d7b74: 0x27828c70  addiu       $v0, $gp, -0x7390
    ctx->pc = 0x1d7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937712));
label_1d7b78:
    // 0x1d7b78: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d7b78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d7b7c:
    // 0x1d7b7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d7b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d7b80:
    // 0x1d7b80: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1d7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1d7b84:
    // 0x1d7b84: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1d7b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1d7b88:
    // 0x1d7b88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b8c:
    // 0x1d7b8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b90:
    // 0x1d7b90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d7b90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7b94:
    // 0x1d7b94: 0x55940  sll         $t3, $a1, 5
    ctx->pc = 0x1d7b94u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1d7b98:
    // 0x1d7b98: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d7b98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d7b9c:
    // 0x1d7b9c: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1d7b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1d7ba0:
    // 0x1d7ba0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d7ba4:
    // 0x1d7ba4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d7ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d7ba8:
    // 0x1d7ba8: 0xa0aa0080  sb          $t2, 0x80($a1)
    ctx->pc = 0x1d7ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 128), (uint8_t)GPR_U32(ctx, 10));
label_1d7bac:
    // 0x1d7bac: 0xa0aa0081  sb          $t2, 0x81($a1)
    ctx->pc = 0x1d7bacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 10));
label_1d7bb0:
    // 0x1d7bb0: 0xa0aa0082  sb          $t2, 0x82($a1)
    ctx->pc = 0x1d7bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 130), (uint8_t)GPR_U32(ctx, 10));
label_1d7bb4:
    // 0x1d7bb4: 0x83828c68  lb          $v0, -0x7398($gp)
    ctx->pc = 0x1d7bb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1d7bb8:
    // 0x1d7bb8: 0xa0a20083  sb          $v0, 0x83($a1)
    ctx->pc = 0x1d7bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 2));
label_1d7bbc:
    // 0x1d7bbc: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x1d7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
label_1d7bc0:
    // 0x1d7bc0: 0xa0aa0120  sb          $t2, 0x120($a1)
    ctx->pc = 0x1d7bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 10));
label_1d7bc4:
    // 0x1d7bc4: 0xa0aa0121  sb          $t2, 0x121($a1)
    ctx->pc = 0x1d7bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 289), (uint8_t)GPR_U32(ctx, 10));
label_1d7bc8:
    // 0x1d7bc8: 0xa0aa0122  sb          $t2, 0x122($a1)
    ctx->pc = 0x1d7bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 290), (uint8_t)GPR_U32(ctx, 10));
label_1d7bcc:
    // 0x1d7bcc: 0x83828c64  lb          $v0, -0x739C($gp)
    ctx->pc = 0x1d7bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1d7bd0:
    // 0x1d7bd0: 0xa0a20123  sb          $v0, 0x123($a1)
    ctx->pc = 0x1d7bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 2));
label_1d7bd4:
    // 0x1d7bd4: 0xaca30124  sw          $v1, 0x124($a1)
    ctx->pc = 0x1d7bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 3));
label_1d7bd8:
    // 0x1d7bd8: 0xa0aa01c0  sb          $t2, 0x1C0($a1)
    ctx->pc = 0x1d7bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 448), (uint8_t)GPR_U32(ctx, 10));
label_1d7bdc:
    // 0x1d7bdc: 0xa0aa01c1  sb          $t2, 0x1C1($a1)
    ctx->pc = 0x1d7bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 449), (uint8_t)GPR_U32(ctx, 10));
label_1d7be0:
    // 0x1d7be0: 0xa0aa01c2  sb          $t2, 0x1C2($a1)
    ctx->pc = 0x1d7be0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 450), (uint8_t)GPR_U32(ctx, 10));
label_1d7be4:
    // 0x1d7be4: 0x83828c60  lb          $v0, -0x73A0($gp)
    ctx->pc = 0x1d7be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1d7be8:
    // 0x1d7be8: 0xa0a201c3  sb          $v0, 0x1C3($a1)
    ctx->pc = 0x1d7be8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 2));
label_1d7bec:
    // 0x1d7bec: 0xaca301c4  sw          $v1, 0x1C4($a1)
    ctx->pc = 0x1d7becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 452), GPR_U32(ctx, 3));
label_1d7bf0:
    // 0x1d7bf0: 0xa0aa0260  sb          $t2, 0x260($a1)
    ctx->pc = 0x1d7bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 608), (uint8_t)GPR_U32(ctx, 10));
label_1d7bf4:
    // 0x1d7bf4: 0xa0aa0261  sb          $t2, 0x261($a1)
    ctx->pc = 0x1d7bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 609), (uint8_t)GPR_U32(ctx, 10));
label_1d7bf8:
    // 0x1d7bf8: 0xa0aa0262  sb          $t2, 0x262($a1)
    ctx->pc = 0x1d7bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 610), (uint8_t)GPR_U32(ctx, 10));
label_1d7bfc:
    // 0x1d7bfc: 0x83828c5c  lb          $v0, -0x73A4($gp)
    ctx->pc = 0x1d7bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1d7c00:
    // 0x1d7c00: 0xa0a20263  sb          $v0, 0x263($a1)
    ctx->pc = 0x1d7c00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 2));
label_1d7c04:
    // 0x1d7c04: 0xc066c72  jal         func_19B1C8
label_1d7c08:
    if (ctx->pc == 0x1D7C08u) {
        ctx->pc = 0x1D7C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C04u;
        // 0x1d7c08: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C0Cu;
        goto label_1d7c0c;
    }
    ctx->pc = 0x1D7C04u;
    SET_GPR_U32(ctx, 31, 0x1D7C0Cu);
    ctx->pc = 0x1D7C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C04u;
    // 0x1d7c08: 0xaca30264  sw          $v1, 0x264($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D7C04u, 0x1D7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C0Cu;
label_1d7c0c:
    // 0x1d7c0c: 0xc04e120  jal         func_138480
label_1d7c10:
    if (ctx->pc == 0x1D7C10u) {
        ctx->pc = 0x1D7C14u;
        goto label_1d7c14;
    }
    ctx->pc = 0x1D7C0Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C14u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1D7C0Cu, 0x1D7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C14u;
label_1d7c14:
    // 0x1d7c14: 0xc05b578  jal         func_16D5E0
label_1d7c18:
    if (ctx->pc == 0x1D7C18u) {
        ctx->pc = 0x1D7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C14u;
        // 0x1d7c18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C1Cu;
        goto label_1d7c1c;
    }
    ctx->pc = 0x1D7C14u;
    SET_GPR_U32(ctx, 31, 0x1D7C1Cu);
    ctx->pc = 0x1D7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C14u;
    // 0x1d7c18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1D7C14u, 0x1D7C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C1Cu;
label_1d7c1c:
    // 0x1d7c1c: 0xc060258  jal         func_180960
label_1d7c20:
    if (ctx->pc == 0x1D7C20u) {
        ctx->pc = 0x1D7C24u;
        goto label_1d7c24;
    }
    ctx->pc = 0x1D7C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7C24u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7C1Cu, 0x1D7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C24u;
label_1d7c24:
    // 0x1d7c24: 0xc04e198  jal         func_138660
label_1d7c28:
    if (ctx->pc == 0x1D7C28u) {
        ctx->pc = 0x1D7C2Cu;
        goto label_1d7c2c;
    }
    ctx->pc = 0x1D7C24u;
    SET_GPR_U32(ctx, 31, 0x1D7C2Cu);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1D7C24u, 0x1D7C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C2Cu;
label_1d7c2c:
    // 0x1d7c2c: 0x1040ffc2  beqz        $v0, . + 4 + (-0x3E << 2)
label_1d7c30:
    if (ctx->pc == 0x1D7C30u) {
        ctx->pc = 0x1D7C34u;
        goto label_1d7c34;
    }
    ctx->pc = 0x1D7C2Cu;
    {
        const bool branch_taken_0x1d7c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c2c) {
            ctx->pc = 0x1D7B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7b38;
        }
    }
    ctx->pc = 0x1D7C34u;
label_1d7c34:
    // 0x1d7c34: 0x0  nop
    ctx->pc = 0x1d7c34u;
    // NOP
label_1d7c38:
    // 0x1d7c38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7c3c:
    // 0x1d7c3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7c40:
    // 0x1d7c40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7c44:
    // 0x1d7c44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7c48:
    // 0x1d7c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7c4c:
    // 0x1d7c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7c50:
    // 0x1d7c50: 0x3e00008  jr          $ra
label_1d7c54:
    if (ctx->pc == 0x1D7C54u) {
        ctx->pc = 0x1D7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C50u;
        // 0x1d7c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C58u;
        goto label_1d7c58;
    }
    ctx->pc = 0x1D7C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C50u;
        // 0x1d7c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7C58u;
label_1d7c58:
    // 0x1d7c58: 0x0  nop
    ctx->pc = 0x1d7c58u;
    // NOP
label_1d7c5c:
    // 0x1d7c5c: 0x0  nop
    ctx->pc = 0x1d7c5cu;
    // NOP
label_1d7c60:
    // 0x1d7c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d7c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d7c64:
    // 0x1d7c64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7c68:
    // 0x1d7c68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d7c6c:
    // 0x1d7c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d7c70:
    // 0x1d7c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d7c74:
    // 0x1d7c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7c78:
    // 0x1d7c78: 0xc041738  jal         func_105CE0
label_1d7c7c:
    if (ctx->pc == 0x1D7C7Cu) {
        ctx->pc = 0x1D7C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C78u;
        // 0x1d7c7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C80u;
        goto label_1d7c80;
    }
    ctx->pc = 0x1D7C78u;
    SET_GPR_U32(ctx, 31, 0x1D7C80u);
    ctx->pc = 0x1D7C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C78u;
    // 0x1d7c7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1D7C78u, 0x1D7C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C80u;
label_1d7c80:
    // 0x1d7c80: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1d7c84:
    // 0x1d7c84: 0xc070080  jal         func_1C0200
label_1d7c88:
    if (ctx->pc == 0x1D7C88u) {
        ctx->pc = 0x1D7C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C84u;
        // 0x1d7c88: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C8Cu;
        goto label_1d7c8c;
    }
    ctx->pc = 0x1D7C84u;
    SET_GPR_U32(ctx, 31, 0x1D7C8Cu);
    ctx->pc = 0x1D7C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C84u;
    // 0x1d7c88: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D7C8Cu;
label_1d7c8c:
    // 0x1d7c8c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d7c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d7c90:
    // 0x1d7c90: 0xc0416e4  jal         func_105B90
label_1d7c94:
    if (ctx->pc == 0x1D7C94u) {
        ctx->pc = 0x1D7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C90u;
        // 0x1d7c94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7C98u;
        goto label_1d7c98;
    }
    ctx->pc = 0x1D7C90u;
    SET_GPR_U32(ctx, 31, 0x1D7C98u);
    ctx->pc = 0x1D7C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C90u;
    // 0x1d7c94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1D7C90u, 0x1D7C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7C98u;
label_1d7c98:
    // 0x1d7c98: 0xaf828c50  sw          $v0, -0x73B0($gp)
    ctx->pc = 0x1d7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937680), GPR_U32(ctx, 2));
label_1d7c9c:
    // 0x1d7c9c: 0xc041738  jal         func_105CE0
label_1d7ca0:
    if (ctx->pc == 0x1D7CA0u) {
        ctx->pc = 0x1D7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C9Cu;
        // 0x1d7ca0: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CA4u;
        goto label_1d7ca4;
    }
    ctx->pc = 0x1D7C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7CA4u);
    ctx->pc = 0x1D7CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7C9Cu;
    // 0x1d7ca0: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1D7C9Cu, 0x1D7CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CA4u;
label_1d7ca4:
    // 0x1d7ca4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1d7ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1d7ca8:
    // 0x1d7ca8: 0xc070080  jal         func_1C0200
label_1d7cac:
    if (ctx->pc == 0x1D7CACu) {
        ctx->pc = 0x1D7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CA8u;
        // 0x1d7cac: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CB0u;
        goto label_1d7cb0;
    }
    ctx->pc = 0x1D7CA8u;
    SET_GPR_U32(ctx, 31, 0x1D7CB0u);
    ctx->pc = 0x1D7CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CA8u;
    // 0x1d7cac: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D7CB0u;
label_1d7cb0:
    // 0x1d7cb0: 0x240407f9  addiu       $a0, $zero, 0x7F9
    ctx->pc = 0x1d7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
label_1d7cb4:
    // 0x1d7cb4: 0xc0416e4  jal         func_105B90
label_1d7cb8:
    if (ctx->pc == 0x1D7CB8u) {
        ctx->pc = 0x1D7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CB4u;
        // 0x1d7cb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CBCu;
        goto label_1d7cbc;
    }
    ctx->pc = 0x1D7CB4u;
    SET_GPR_U32(ctx, 31, 0x1D7CBCu);
    ctx->pc = 0x1D7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CB4u;
    // 0x1d7cb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1D7CB4u, 0x1D7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CBCu;
label_1d7cbc:
    // 0x1d7cbc: 0xaf828c4c  sw          $v0, -0x73B4($gp)
    ctx->pc = 0x1d7cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937676), GPR_U32(ctx, 2));
label_1d7cc0:
    // 0x1d7cc0: 0xc041738  jal         func_105CE0
label_1d7cc4:
    if (ctx->pc == 0x1D7CC4u) {
        ctx->pc = 0x1D7CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CC0u;
        // 0x1d7cc4: 0x240407e6  addiu       $a0, $zero, 0x7E6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2022));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CC8u;
        goto label_1d7cc8;
    }
    ctx->pc = 0x1D7CC0u;
    SET_GPR_U32(ctx, 31, 0x1D7CC8u);
    ctx->pc = 0x1D7CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CC0u;
    // 0x1d7cc4: 0x240407e6  addiu       $a0, $zero, 0x7E6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2022));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1D7CC0u, 0x1D7CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CC8u;
label_1d7cc8:
    // 0x1d7cc8: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1d7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1d7ccc:
    // 0x1d7ccc: 0xc070080  jal         func_1C0200
label_1d7cd0:
    if (ctx->pc == 0x1D7CD0u) {
        ctx->pc = 0x1D7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CCCu;
        // 0x1d7cd0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CD4u;
        goto label_1d7cd4;
    }
    ctx->pc = 0x1D7CCCu;
    SET_GPR_U32(ctx, 31, 0x1D7CD4u);
    ctx->pc = 0x1D7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CCCu;
    // 0x1d7cd0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1D7CD4u;
label_1d7cd4:
    // 0x1d7cd4: 0x240407e6  addiu       $a0, $zero, 0x7E6
    ctx->pc = 0x1d7cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2022));
label_1d7cd8:
    // 0x1d7cd8: 0xc0416e4  jal         func_105B90
label_1d7cdc:
    if (ctx->pc == 0x1D7CDCu) {
        ctx->pc = 0x1D7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CD8u;
        // 0x1d7cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CE0u;
        goto label_1d7ce0;
    }
    ctx->pc = 0x1D7CD8u;
    SET_GPR_U32(ctx, 31, 0x1D7CE0u);
    ctx->pc = 0x1D7CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CD8u;
    // 0x1d7cdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1D7CD8u, 0x1D7CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CE0u;
label_1d7ce0:
    // 0x1d7ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d7ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ce4:
    // 0x1d7ce4: 0xc060678  jal         func_1819E0
label_1d7ce8:
    if (ctx->pc == 0x1D7CE8u) {
        ctx->pc = 0x1D7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CE4u;
        // 0x1d7ce8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7CECu;
        goto label_1d7cec;
    }
    ctx->pc = 0x1D7CE4u;
    SET_GPR_U32(ctx, 31, 0x1D7CECu);
    ctx->pc = 0x1D7CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7CE4u;
    // 0x1d7ce8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1D7CE4u, 0x1D7CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7CECu;
label_1d7cec:
    // 0x1d7cec: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1d7cecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1d7cf0:
    // 0x1d7cf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d7cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7cf4:
    // 0x1d7cf4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1d7cf4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1d7cf8:
    // 0x1d7cf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7cfc:
    // 0x1d7cfc: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x1d7cfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_1d7d00:
    // 0x1d7d00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1d7d04:
    if (ctx->pc == 0x1D7D04u) {
        ctx->pc = 0x1D7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D00u;
        // 0x1d7d04: 0x2a010015  slti        $at, $s0, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D08u;
        goto label_1d7d08;
    }
    ctx->pc = 0x1D7D00u;
    {
        const bool branch_taken_0x1d7d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D00u;
        // 0x1d7d04: 0x2a010015  slti        $at, $s0, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d00) {
            ctx->pc = 0x1D7D10u;
            goto label_1d7d10;
        }
    }
    ctx->pc = 0x1D7D08u;
label_1d7d08:
    // 0x1d7d08: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_1d7d0c:
    if (ctx->pc == 0x1D7D0Cu) {
        ctx->pc = 0x1D7D10u;
        goto label_1d7d10;
    }
    ctx->pc = 0x1D7D08u;
    {
        const bool branch_taken_0x1d7d08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7d08) {
            ctx->pc = 0x1D7D5Cu;
            goto label_1d7d5c;
        }
    }
    ctx->pc = 0x1D7D10u;
label_1d7d10:
    // 0x1d7d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d14:
    // 0x1d7d14: 0xc0602c8  jal         func_180B20
label_1d7d18:
    if (ctx->pc == 0x1D7D18u) {
        ctx->pc = 0x1D7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D14u;
        // 0x1d7d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D1Cu;
        goto label_1d7d1c;
    }
    ctx->pc = 0x1D7D14u;
    SET_GPR_U32(ctx, 31, 0x1D7D1Cu);
    ctx->pc = 0x1D7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D14u;
    // 0x1d7d18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1D7D14u, 0x1D7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D1Cu;
label_1d7d1c:
    // 0x1d7d1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d20:
    // 0x1d7d20: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x1d7d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1d7d24:
    // 0x1d7d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d7d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d28:
    // 0x1d7d28: 0x27a6005e  addiu       $a2, $sp, 0x5E
    ctx->pc = 0x1d7d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 94));
label_1d7d2c:
    // 0x1d7d2c: 0xc060390  jal         func_180E40
label_1d7d30:
    if (ctx->pc == 0x1D7D30u) {
        ctx->pc = 0x1D7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D2Cu;
        // 0x1d7d30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D34u;
        goto label_1d7d34;
    }
    ctx->pc = 0x1D7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D7D34u);
    ctx->pc = 0x1D7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D2Cu;
    // 0x1d7d30: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1D7D2Cu, 0x1D7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D34u;
label_1d7d34:
    // 0x1d7d34: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d7d38:
    // 0x1d7d38: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1d7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_1d7d3c:
    // 0x1d7d3c: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1d7d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d7d40:
    // 0x1d7d40: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1d7d40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1d7d44:
    // 0x1d7d44: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1d7d44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1d7d48:
    // 0x1d7d48: 0xc06063c  jal         func_1818F0
label_1d7d4c:
    if (ctx->pc == 0x1D7D4Cu) {
        ctx->pc = 0x1D7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D48u;
        // 0x1d7d4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D50u;
        goto label_1d7d50;
    }
    ctx->pc = 0x1D7D48u;
    SET_GPR_U32(ctx, 31, 0x1D7D50u);
    ctx->pc = 0x1D7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D48u;
    // 0x1d7d4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1D7D48u, 0x1D7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D50u;
label_1d7d50:
    // 0x1d7d50: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1d7d50u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1d7d54:
    // 0x1d7d54: 0x87b1005e  lh          $s1, 0x5E($sp)
    ctx->pc = 0x1d7d54u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
label_1d7d58:
    // 0x1d7d58: 0x0  nop
    ctx->pc = 0x1d7d58u;
    // NOP
label_1d7d5c:
    // 0x1d7d5c: 0x0  nop
    ctx->pc = 0x1d7d5cu;
    // NOP
label_1d7d60:
    // 0x1d7d60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d7d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d7d64:
    // 0x1d7d64: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1d7d64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1d7d68:
    // 0x1d7d68: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_1d7d6c:
    if (ctx->pc == 0x1D7D6Cu) {
        ctx->pc = 0x1D7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D68u;
        // 0x1d7d6c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D70u;
        goto label_1d7d70;
    }
    ctx->pc = 0x1D7D68u;
    {
        const bool branch_taken_0x1d7d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D68u;
        // 0x1d7d6c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d68) {
            ctx->pc = 0x1D7CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7cfc;
        }
    }
    ctx->pc = 0x1D7D70u;
label_1d7d70:
    // 0x1d7d70: 0xa7918c58  sh          $s1, -0x73A8($gp)
    ctx->pc = 0x1d7d70u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937688), (uint16_t)GPR_U32(ctx, 17));
label_1d7d74:
    // 0x1d7d74: 0xaf928c54  sw          $s2, -0x73AC($gp)
    ctx->pc = 0x1d7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 18));
label_1d7d78:
    // 0x1d7d78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d7d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7d7c:
    // 0x1d7d7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d7d80:
    // 0x1d7d80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7d80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7d84:
    // 0x1d7d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7d88:
    // 0x1d7d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7d8c:
    // 0x1d7d8c: 0x3e00008  jr          $ra
label_1d7d90:
    if (ctx->pc == 0x1D7D90u) {
        ctx->pc = 0x1D7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D8Cu;
        // 0x1d7d90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7D94u;
        goto label_1d7d94;
    }
    ctx->pc = 0x1D7D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D8Cu;
        // 0x1d7d90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7D94u;
label_1d7d94:
    // 0x1d7d94: 0x0  nop
    ctx->pc = 0x1d7d94u;
    // NOP
label_1d7d98:
    // 0x1d7d98: 0x0  nop
    ctx->pc = 0x1d7d98u;
    // NOP
label_1d7d9c:
    // 0x1d7d9c: 0x0  nop
    ctx->pc = 0x1d7d9cu;
    // NOP
label_1d7da0:
    // 0x1d7da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d7da4:
    // 0x1d7da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d7da8:
    // 0x1d7da8: 0xc075ff0  jal         func_1D7FC0
label_1d7dac:
    if (ctx->pc == 0x1D7DACu) {
        ctx->pc = 0x1D7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DA8u;
        // 0x1d7dac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7DB0u;
        goto label_1d7db0;
    }
    ctx->pc = 0x1D7DA8u;
    SET_GPR_U32(ctx, 31, 0x1D7DB0u);
    ctx->pc = 0x1D7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DA8u;
    // 0x1d7dac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7FC0u;
    { ctx->pc = 0x1d7fc0; return; }
    ctx->pc = 0x1D7DB0u;
label_1d7db0:
    // 0x1d7db0: 0xc076198  jal         func_1D8660
label_1d7db4:
    if (ctx->pc == 0x1D7DB4u) {
        ctx->pc = 0x1D7DB8u;
        goto label_1d7db8;
    }
    ctx->pc = 0x1D7DB0u;
    SET_GPR_U32(ctx, 31, 0x1D7DB8u);
    ctx->pc = 0x1D8660u;
    { ctx->pc = 0x1d8660; return; }
    ctx->pc = 0x1D7DB8u;
label_1d7db8:
    // 0x1d7db8: 0xc060258  jal         func_180960
label_1d7dbc:
    if (ctx->pc == 0x1D7DBCu) {
        ctx->pc = 0x1D7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DB8u;
        // 0x1d7dbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7DC0u;
        goto label_1d7dc0;
    }
    ctx->pc = 0x1D7DB8u;
    SET_GPR_U32(ctx, 31, 0x1D7DC0u);
    ctx->pc = 0x1D7DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DB8u;
    // 0x1d7dbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7DB8u, 0x1D7DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DC0u;
label_1d7dc0:
    // 0x1d7dc0: 0xc060258  jal         func_180960
label_1d7dc4:
    if (ctx->pc == 0x1D7DC4u) {
        ctx->pc = 0x1D7DC8u;
        goto label_1d7dc8;
    }
    ctx->pc = 0x1D7DC0u;
    SET_GPR_U32(ctx, 31, 0x1D7DC8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1D7DC0u, 0x1D7DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DC8u;
label_1d7dc8:
    // 0x1d7dc8: 0xc075f7c  jal         func_1D7DF0
label_1d7dcc:
    if (ctx->pc == 0x1D7DCCu) {
        ctx->pc = 0x1D7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DC8u;
        // 0x1d7dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7DD0u;
        goto label_1d7dd0;
    }
    ctx->pc = 0x1D7DC8u;
    SET_GPR_U32(ctx, 31, 0x1D7DD0u);
    ctx->pc = 0x1D7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DC8u;
    // 0x1d7dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7DF0u;
    goto label_1d7df0;
    ctx->pc = 0x1D7DD0u;
label_1d7dd0:
    // 0x1d7dd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d7dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7dd4:
    // 0x1d7dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7dd8:
    // 0x1d7dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7ddc:
    // 0x1d7ddc: 0x3e00008  jr          $ra
label_1d7de0:
    if (ctx->pc == 0x1D7DE0u) {
        ctx->pc = 0x1D7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DDCu;
        // 0x1d7de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7DE4u;
        goto label_1d7de4;
    }
    ctx->pc = 0x1D7DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DDCu;
        // 0x1d7de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7DE4u;
label_1d7de4:
    // 0x1d7de4: 0x0  nop
    ctx->pc = 0x1d7de4u;
    // NOP
label_1d7de8:
    // 0x1d7de8: 0x0  nop
    ctx->pc = 0x1d7de8u;
    // NOP
label_1d7dec:
    // 0x1d7dec: 0x0  nop
    ctx->pc = 0x1d7decu;
    // NOP
label_1d7df0:
    // 0x1d7df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1d7df4:
    // 0x1d7df4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1d7df8:
    // 0x1d7df8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d7dfc:
    // 0x1d7dfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d7e00:
    // 0x1d7e00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d7e04:
    // 0x1d7e04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d7e08:
    // 0x1d7e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7e0c:
    // 0x1d7e0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d7e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e10:
    // 0x1d7e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7e14:
    // 0x1d7e14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e18:
    // 0x1d7e18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d7e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e1c:
    // 0x1d7e1c: 0x27838ce0  addiu       $v1, $gp, -0x7320
    ctx->pc = 0x1d7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1d7e20:
    // 0x1d7e20: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x1d7e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7e24:
    // 0x1d7e24: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d7e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7e28:
    // 0x1d7e28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7e2c:
    if (ctx->pc == 0x1D7E2Cu) {
        ctx->pc = 0x1D7E30u;
        goto label_1d7e30;
    }
    ctx->pc = 0x1D7E28u;
    {
        const bool branch_taken_0x1d7e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e28) {
            ctx->pc = 0x1D7E3Cu;
            goto label_1d7e3c;
        }
    }
    ctx->pc = 0x1D7E30u;
label_1d7e30:
    // 0x1d7e30: 0xc070038  jal         func_1C00E0
label_1d7e34:
    if (ctx->pc == 0x1D7E34u) {
        ctx->pc = 0x1D7E38u;
        goto label_1d7e38;
    }
    ctx->pc = 0x1D7E30u;
    SET_GPR_U32(ctx, 31, 0x1D7E38u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7E38u;
label_1d7e38:
    // 0x1d7e38: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d7e38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d7e3c:
    // 0x1d7e3c: 0x0  nop
    ctx->pc = 0x1d7e3cu;
    // NOP
label_1d7e40:
    // 0x1d7e40: 0x27838cd8  addiu       $v1, $gp, -0x7328
    ctx->pc = 0x1d7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937816));
label_1d7e44:
    // 0x1d7e44: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x1d7e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7e48:
    // 0x1d7e48: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7e4c:
    // 0x1d7e4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7e50:
    if (ctx->pc == 0x1D7E50u) {
        ctx->pc = 0x1D7E54u;
        goto label_1d7e54;
    }
    ctx->pc = 0x1D7E4Cu;
    {
        const bool branch_taken_0x1d7e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e4c) {
            ctx->pc = 0x1D7E60u;
            goto label_1d7e60;
        }
    }
    ctx->pc = 0x1D7E54u;
label_1d7e54:
    // 0x1d7e54: 0xc070038  jal         func_1C00E0
label_1d7e58:
    if (ctx->pc == 0x1D7E58u) {
        ctx->pc = 0x1D7E5Cu;
        goto label_1d7e5c;
    }
    ctx->pc = 0x1D7E54u;
    SET_GPR_U32(ctx, 31, 0x1D7E5Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7E5Cu;
label_1d7e5c:
    // 0x1d7e5c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d7e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d7e60:
    // 0x1d7e60: 0x27838cc8  addiu       $v1, $gp, -0x7338
    ctx->pc = 0x1d7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937800));
label_1d7e64:
    // 0x1d7e64: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x1d7e64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7e68:
    // 0x1d7e68: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7e6c:
    // 0x1d7e6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7e70:
    if (ctx->pc == 0x1D7E70u) {
        ctx->pc = 0x1D7E74u;
        goto label_1d7e74;
    }
    ctx->pc = 0x1D7E6Cu;
    {
        const bool branch_taken_0x1d7e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e6c) {
            ctx->pc = 0x1D7E80u;
            goto label_1d7e80;
        }
    }
    ctx->pc = 0x1D7E74u;
label_1d7e74:
    // 0x1d7e74: 0xc070038  jal         func_1C00E0
label_1d7e78:
    if (ctx->pc == 0x1D7E78u) {
        ctx->pc = 0x1D7E7Cu;
        goto label_1d7e7c;
    }
    ctx->pc = 0x1D7E74u;
    SET_GPR_U32(ctx, 31, 0x1D7E7Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7E7Cu;
label_1d7e7c:
    // 0x1d7e7c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d7e80:
    // 0x1d7e80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e84:
    // 0x1d7e84: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d7e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e88:
    // 0x1d7e88: 0x0  nop
    ctx->pc = 0x1d7e88u;
    // NOP
label_1d7e8c:
    // 0x1d7e8c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d7e90:
    // 0x1d7e90: 0x24630620  addiu       $v1, $v1, 0x620
    ctx->pc = 0x1d7e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1568));
label_1d7e94:
    // 0x1d7e94: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7e98:
    // 0x1d7e98: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d7e9c:
    // 0x1d7e9c: 0x74a821  addu        $s5, $v1, $s4
    ctx->pc = 0x1d7e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1d7ea0:
    // 0x1d7ea0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d7ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d7ea4:
    // 0x1d7ea4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7ea8:
    if (ctx->pc == 0x1D7EA8u) {
        ctx->pc = 0x1D7EACu;
        goto label_1d7eac;
    }
    ctx->pc = 0x1D7EA4u;
    {
        const bool branch_taken_0x1d7ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ea4) {
            ctx->pc = 0x1D7EB8u;
            goto label_1d7eb8;
        }
    }
    ctx->pc = 0x1D7EACu;
label_1d7eac:
    // 0x1d7eac: 0xc070038  jal         func_1C00E0
label_1d7eb0:
    if (ctx->pc == 0x1D7EB0u) {
        ctx->pc = 0x1D7EB4u;
        goto label_1d7eb4;
    }
    ctx->pc = 0x1D7EACu;
    SET_GPR_U32(ctx, 31, 0x1D7EB4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7EB4u;
label_1d7eb4:
    // 0x1d7eb4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1d7eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1d7eb8:
    // 0x1d7eb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d7eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d7ebc:
    // 0x1d7ebc: 0x2a630008  slti        $v1, $s3, 0x8
    ctx->pc = 0x1d7ebcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d7ec0:
    // 0x1d7ec0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d7ec4:
    if (ctx->pc == 0x1D7EC4u) {
        ctx->pc = 0x1D7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EC0u;
        // 0x1d7ec4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7EC8u;
        goto label_1d7ec8;
    }
    ctx->pc = 0x1D7EC0u;
    {
        const bool branch_taken_0x1d7ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EC0u;
        // 0x1d7ec4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ec0) {
            ctx->pc = 0x1D7E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e88;
        }
    }
    ctx->pc = 0x1D7EC8u;
label_1d7ec8:
    // 0x1d7ec8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d7ec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ecc:
    // 0x1d7ecc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ed0:
    // 0x1d7ed0: 0x0  nop
    ctx->pc = 0x1d7ed0u;
    // NOP
label_1d7ed4:
    // 0x1d7ed4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d7ed8:
    // 0x1d7ed8: 0x24630550  addiu       $v1, $v1, 0x550
    ctx->pc = 0x1d7ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1360));
label_1d7edc:
    // 0x1d7edc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7ee0:
    // 0x1d7ee0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d7ee4:
    // 0x1d7ee4: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d7ee8:
    // 0x1d7ee8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d7eec:
    // 0x1d7eec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7ef0:
    if (ctx->pc == 0x1D7EF0u) {
        ctx->pc = 0x1D7EF4u;
        goto label_1d7ef4;
    }
    ctx->pc = 0x1D7EECu;
    {
        const bool branch_taken_0x1d7eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7eec) {
            ctx->pc = 0x1D7F00u;
            goto label_1d7f00;
        }
    }
    ctx->pc = 0x1D7EF4u;
label_1d7ef4:
    // 0x1d7ef4: 0xc070038  jal         func_1C00E0
label_1d7ef8:
    if (ctx->pc == 0x1D7EF8u) {
        ctx->pc = 0x1D7EFCu;
        goto label_1d7efc;
    }
    ctx->pc = 0x1D7EF4u;
    SET_GPR_U32(ctx, 31, 0x1D7EFCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7EFCu;
label_1d7efc:
    // 0x1d7efc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1d7efcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_1d7f00:
    // 0x1d7f00: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d7f04:
    // 0x1d7f04: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x1d7f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d7f08:
    // 0x1d7f08: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1d7f0c:
    if (ctx->pc == 0x1D7F0Cu) {
        ctx->pc = 0x1D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F08u;
        // 0x1d7f0c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7F10u;
        goto label_1d7f10;
    }
    ctx->pc = 0x1D7F08u;
    {
        const bool branch_taken_0x1d7f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F08u;
        // 0x1d7f0c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f08) {
            ctx->pc = 0x1D7ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ed0;
        }
    }
    ctx->pc = 0x1D7F10u;
label_1d7f10:
    // 0x1d7f10: 0x27838c90  addiu       $v1, $gp, -0x7370
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1d7f14:
    // 0x1d7f14: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x1d7f14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7f18:
    // 0x1d7f18: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7f1c:
    // 0x1d7f1c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7f20:
    if (ctx->pc == 0x1D7F20u) {
        ctx->pc = 0x1D7F24u;
        goto label_1d7f24;
    }
    ctx->pc = 0x1D7F1Cu;
    {
        const bool branch_taken_0x1d7f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f1c) {
            ctx->pc = 0x1D7F30u;
            goto label_1d7f30;
        }
    }
    ctx->pc = 0x1D7F24u;
label_1d7f24:
    // 0x1d7f24: 0xc070038  jal         func_1C00E0
label_1d7f28:
    if (ctx->pc == 0x1D7F28u) {
        ctx->pc = 0x1D7F2Cu;
        goto label_1d7f2c;
    }
    ctx->pc = 0x1D7F24u;
    SET_GPR_U32(ctx, 31, 0x1D7F2Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7F2Cu;
label_1d7f2c:
    // 0x1d7f2c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d7f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d7f30:
    // 0x1d7f30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d7f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f34:
    // 0x1d7f34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d7f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f38:
    // 0x1d7f38: 0x0  nop
    ctx->pc = 0x1d7f38u;
    // NOP
label_1d7f3c:
    // 0x1d7f3c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d7f40:
    // 0x1d7f40: 0x24630540  addiu       $v1, $v1, 0x540
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1344));
label_1d7f44:
    // 0x1d7f44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d7f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d7f48:
    // 0x1d7f48: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1d7f4c:
    // 0x1d7f4c: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x1d7f4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1d7f50:
    // 0x1d7f50: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1d7f54:
    // 0x1d7f54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d7f58:
    if (ctx->pc == 0x1D7F58u) {
        ctx->pc = 0x1D7F5Cu;
        goto label_1d7f5c;
    }
    ctx->pc = 0x1D7F54u;
    {
        const bool branch_taken_0x1d7f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f54) {
            ctx->pc = 0x1D7F68u;
            { ctx->pc = 0x1d7f68; return; }
        }
    }
    ctx->pc = 0x1D7F5Cu;
label_1d7f5c:
    // 0x1d7f5c: 0xc070038  jal         func_1C00E0
label_1d7f60:
    if (ctx->pc == 0x1D7F60u) {
        ctx->pc = 0x1D7F64u;
        goto label_1d7f64;
    }
    ctx->pc = 0x1D7F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F64u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1D7F64u;
label_1d7f64:
    // 0x1d7f64: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1d7f64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x1d7f68u;
    return;
}

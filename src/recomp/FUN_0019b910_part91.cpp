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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part91(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1c7cd8u: goto label_1c7cd8;
        case 0x1c7cdcu: goto label_1c7cdc;
        case 0x1c7ce0u: goto label_1c7ce0;
        case 0x1c7ce4u: goto label_1c7ce4;
        case 0x1c7ce8u: goto label_1c7ce8;
        case 0x1c7cecu: goto label_1c7cec;
        case 0x1c7cf0u: goto label_1c7cf0;
        case 0x1c7cf4u: goto label_1c7cf4;
        case 0x1c7cf8u: goto label_1c7cf8;
        case 0x1c7cfcu: goto label_1c7cfc;
        case 0x1c7d00u: goto label_1c7d00;
        case 0x1c7d04u: goto label_1c7d04;
        case 0x1c7d08u: goto label_1c7d08;
        case 0x1c7d0cu: goto label_1c7d0c;
        case 0x1c7d10u: goto label_1c7d10;
        case 0x1c7d14u: goto label_1c7d14;
        case 0x1c7d18u: goto label_1c7d18;
        case 0x1c7d1cu: goto label_1c7d1c;
        case 0x1c7d20u: goto label_1c7d20;
        case 0x1c7d24u: goto label_1c7d24;
        case 0x1c7d28u: goto label_1c7d28;
        case 0x1c7d2cu: goto label_1c7d2c;
        case 0x1c7d30u: goto label_1c7d30;
        case 0x1c7d34u: goto label_1c7d34;
        case 0x1c7d38u: goto label_1c7d38;
        case 0x1c7d3cu: goto label_1c7d3c;
        case 0x1c7d40u: goto label_1c7d40;
        case 0x1c7d44u: goto label_1c7d44;
        case 0x1c7d48u: goto label_1c7d48;
        case 0x1c7d4cu: goto label_1c7d4c;
        case 0x1c7d50u: goto label_1c7d50;
        case 0x1c7d54u: goto label_1c7d54;
        case 0x1c7d58u: goto label_1c7d58;
        case 0x1c7d5cu: goto label_1c7d5c;
        case 0x1c7d60u: goto label_1c7d60;
        case 0x1c7d64u: goto label_1c7d64;
        case 0x1c7d68u: goto label_1c7d68;
        case 0x1c7d6cu: goto label_1c7d6c;
        case 0x1c7d70u: goto label_1c7d70;
        case 0x1c7d74u: goto label_1c7d74;
        case 0x1c7d78u: goto label_1c7d78;
        case 0x1c7d7cu: goto label_1c7d7c;
        case 0x1c7d80u: goto label_1c7d80;
        case 0x1c7d84u: goto label_1c7d84;
        case 0x1c7d88u: goto label_1c7d88;
        case 0x1c7d8cu: goto label_1c7d8c;
        case 0x1c7d90u: goto label_1c7d90;
        case 0x1c7d94u: goto label_1c7d94;
        case 0x1c7d98u: goto label_1c7d98;
        case 0x1c7d9cu: goto label_1c7d9c;
        case 0x1c7da0u: goto label_1c7da0;
        case 0x1c7da4u: goto label_1c7da4;
        case 0x1c7da8u: goto label_1c7da8;
        case 0x1c7dacu: goto label_1c7dac;
        case 0x1c7db0u: goto label_1c7db0;
        case 0x1c7db4u: goto label_1c7db4;
        case 0x1c7db8u: goto label_1c7db8;
        case 0x1c7dbcu: goto label_1c7dbc;
        case 0x1c7dc0u: goto label_1c7dc0;
        case 0x1c7dc4u: goto label_1c7dc4;
        case 0x1c7dc8u: goto label_1c7dc8;
        case 0x1c7dccu: goto label_1c7dcc;
        case 0x1c7dd0u: goto label_1c7dd0;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7dd8u: goto label_1c7dd8;
        case 0x1c7ddcu: goto label_1c7ddc;
        case 0x1c7de0u: goto label_1c7de0;
        case 0x1c7de4u: goto label_1c7de4;
        case 0x1c7de8u: goto label_1c7de8;
        case 0x1c7decu: goto label_1c7dec;
        case 0x1c7df0u: goto label_1c7df0;
        case 0x1c7df4u: goto label_1c7df4;
        case 0x1c7df8u: goto label_1c7df8;
        case 0x1c7dfcu: goto label_1c7dfc;
        case 0x1c7e00u: goto label_1c7e00;
        case 0x1c7e04u: goto label_1c7e04;
        case 0x1c7e08u: goto label_1c7e08;
        case 0x1c7e0cu: goto label_1c7e0c;
        case 0x1c7e10u: goto label_1c7e10;
        case 0x1c7e14u: goto label_1c7e14;
        case 0x1c7e18u: goto label_1c7e18;
        case 0x1c7e1cu: goto label_1c7e1c;
        case 0x1c7e20u: goto label_1c7e20;
        case 0x1c7e24u: goto label_1c7e24;
        case 0x1c7e28u: goto label_1c7e28;
        case 0x1c7e2cu: goto label_1c7e2c;
        case 0x1c7e30u: goto label_1c7e30;
        case 0x1c7e34u: goto label_1c7e34;
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7e3cu: goto label_1c7e3c;
        case 0x1c7e40u: goto label_1c7e40;
        case 0x1c7e44u: goto label_1c7e44;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e4cu: goto label_1c7e4c;
        case 0x1c7e50u: goto label_1c7e50;
        case 0x1c7e54u: goto label_1c7e54;
        case 0x1c7e58u: goto label_1c7e58;
        case 0x1c7e5cu: goto label_1c7e5c;
        case 0x1c7e60u: goto label_1c7e60;
        case 0x1c7e64u: goto label_1c7e64;
        case 0x1c7e68u: goto label_1c7e68;
        case 0x1c7e6cu: goto label_1c7e6c;
        case 0x1c7e70u: goto label_1c7e70;
        case 0x1c7e74u: goto label_1c7e74;
        case 0x1c7e78u: goto label_1c7e78;
        case 0x1c7e7cu: goto label_1c7e7c;
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e84u: goto label_1c7e84;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e8cu: goto label_1c7e8c;
        case 0x1c7e90u: goto label_1c7e90;
        case 0x1c7e94u: goto label_1c7e94;
        case 0x1c7e98u: goto label_1c7e98;
        case 0x1c7e9cu: goto label_1c7e9c;
        case 0x1c7ea0u: goto label_1c7ea0;
        case 0x1c7ea4u: goto label_1c7ea4;
        case 0x1c7ea8u: goto label_1c7ea8;
        case 0x1c7eacu: goto label_1c7eac;
        case 0x1c7eb0u: goto label_1c7eb0;
        case 0x1c7eb4u: goto label_1c7eb4;
        case 0x1c7eb8u: goto label_1c7eb8;
        case 0x1c7ebcu: goto label_1c7ebc;
        case 0x1c7ec0u: goto label_1c7ec0;
        case 0x1c7ec4u: goto label_1c7ec4;
        case 0x1c7ec8u: goto label_1c7ec8;
        case 0x1c7eccu: goto label_1c7ecc;
        case 0x1c7ed0u: goto label_1c7ed0;
        case 0x1c7ed4u: goto label_1c7ed4;
        case 0x1c7ed8u: goto label_1c7ed8;
        case 0x1c7edcu: goto label_1c7edc;
        case 0x1c7ee0u: goto label_1c7ee0;
        case 0x1c7ee4u: goto label_1c7ee4;
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7eecu: goto label_1c7eec;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7ef4u: goto label_1c7ef4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f00u: goto label_1c7f00;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f08u: goto label_1c7f08;
        case 0x1c7f0cu: goto label_1c7f0c;
        case 0x1c7f10u: goto label_1c7f10;
        case 0x1c7f14u: goto label_1c7f14;
        case 0x1c7f18u: goto label_1c7f18;
        case 0x1c7f1cu: goto label_1c7f1c;
        case 0x1c7f20u: goto label_1c7f20;
        case 0x1c7f24u: goto label_1c7f24;
        case 0x1c7f28u: goto label_1c7f28;
        case 0x1c7f2cu: goto label_1c7f2c;
        case 0x1c7f30u: goto label_1c7f30;
        case 0x1c7f34u: goto label_1c7f34;
        case 0x1c7f38u: goto label_1c7f38;
        case 0x1c7f3cu: goto label_1c7f3c;
        case 0x1c7f40u: goto label_1c7f40;
        case 0x1c7f44u: goto label_1c7f44;
        case 0x1c7f48u: goto label_1c7f48;
        case 0x1c7f4cu: goto label_1c7f4c;
        case 0x1c7f50u: goto label_1c7f50;
        case 0x1c7f54u: goto label_1c7f54;
        case 0x1c7f58u: goto label_1c7f58;
        case 0x1c7f5cu: goto label_1c7f5c;
        case 0x1c7f60u: goto label_1c7f60;
        case 0x1c7f64u: goto label_1c7f64;
        case 0x1c7f68u: goto label_1c7f68;
        case 0x1c7f6cu: goto label_1c7f6c;
        case 0x1c7f70u: goto label_1c7f70;
        case 0x1c7f74u: goto label_1c7f74;
        case 0x1c7f78u: goto label_1c7f78;
        case 0x1c7f7cu: goto label_1c7f7c;
        case 0x1c7f80u: goto label_1c7f80;
        case 0x1c7f84u: goto label_1c7f84;
        case 0x1c7f88u: goto label_1c7f88;
        case 0x1c7f8cu: goto label_1c7f8c;
        case 0x1c7f90u: goto label_1c7f90;
        case 0x1c7f94u: goto label_1c7f94;
        case 0x1c7f98u: goto label_1c7f98;
        case 0x1c7f9cu: goto label_1c7f9c;
        case 0x1c7fa0u: goto label_1c7fa0;
        case 0x1c7fa4u: goto label_1c7fa4;
        case 0x1c7fa8u: goto label_1c7fa8;
        case 0x1c7facu: goto label_1c7fac;
        case 0x1c7fb0u: goto label_1c7fb0;
        case 0x1c7fb4u: goto label_1c7fb4;
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fbcu: goto label_1c7fbc;
        case 0x1c7fc0u: goto label_1c7fc0;
        case 0x1c7fc4u: goto label_1c7fc4;
        case 0x1c7fc8u: goto label_1c7fc8;
        case 0x1c7fccu: goto label_1c7fcc;
        case 0x1c7fd0u: goto label_1c7fd0;
        case 0x1c7fd4u: goto label_1c7fd4;
        case 0x1c7fd8u: goto label_1c7fd8;
        case 0x1c7fdcu: goto label_1c7fdc;
        case 0x1c7fe0u: goto label_1c7fe0;
        case 0x1c7fe4u: goto label_1c7fe4;
        case 0x1c7fe8u: goto label_1c7fe8;
        case 0x1c7fecu: goto label_1c7fec;
        case 0x1c7ff0u: goto label_1c7ff0;
        case 0x1c7ff4u: goto label_1c7ff4;
        case 0x1c7ff8u: goto label_1c7ff8;
        case 0x1c7ffcu: goto label_1c7ffc;
        default: return;
    }

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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C79ECu, 0x1C79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C7B94u, 0x1C7B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C7BA4u, 0x1C7BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1C7BB8u, 0x1C7BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
            goto label_1c7cf4;
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
            goto label_1c7cf0;
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
            goto label_1c7cf0;
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
            goto label_1c7cf0;
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
label_1c7cd8:
    // 0x1c7cd8: 0xc066e96  jal         func_19BA58
label_1c7cdc:
    if (ctx->pc == 0x1C7CDCu) {
        ctx->pc = 0x1C7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CD8u;
        // 0x1c7cdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7CE0u;
        goto label_1c7ce0;
    }
    ctx->pc = 0x1C7CD8u;
    SET_GPR_U32(ctx, 31, 0x1C7CE0u);
    ctx->pc = 0x1C7CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CD8u;
    // 0x1c7cdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C7CE0u;
label_1c7ce0:
    // 0x1c7ce0: 0xc68c02a4  lwc1        $f12, 0x2A4($s4)
    ctx->pc = 0x1c7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7ce4:
    // 0x1c7ce4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7ce8:
    // 0x1c7ce8: 0xc066ec0  jal         func_19BB00
label_1c7cec:
    if (ctx->pc == 0x1C7CECu) {
        ctx->pc = 0x1C7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CE8u;
        // 0x1c7cec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7CF0u;
        goto label_1c7cf0;
    }
    ctx->pc = 0x1C7CE8u;
    SET_GPR_U32(ctx, 31, 0x1C7CF0u);
    ctx->pc = 0x1C7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CE8u;
    // 0x1c7cec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C7CF0u;
label_1c7cf0:
    // 0x1c7cf0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7cf4:
    // 0x1c7cf4: 0x26860250  addiu       $a2, $s4, 0x250
    ctx->pc = 0x1c7cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1c7cf8:
    // 0x1c7cf8: 0xc066e1a  jal         func_19B868
label_1c7cfc:
    if (ctx->pc == 0x1C7CFCu) {
        ctx->pc = 0x1C7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7CF8u;
        // 0x1c7cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D00u;
        goto label_1c7d00;
    }
    ctx->pc = 0x1C7CF8u;
    SET_GPR_U32(ctx, 31, 0x1C7D00u);
    ctx->pc = 0x1C7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7CF8u;
    // 0x1c7cfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x1C7CF8u, 0x1C7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D00u;
label_1c7d00:
    // 0x1c7d00: 0xc68c02d0  lwc1        $f12, 0x2D0($s4)
    ctx->pc = 0x1c7d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7d04:
    // 0x1c7d04: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7d08:
    // 0x1c7d08: 0xc066e14  jal         func_19B850
label_1c7d0c:
    if (ctx->pc == 0x1C7D0Cu) {
        ctx->pc = 0x1C7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D08u;
        // 0x1c7d0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D10u;
        goto label_1c7d10;
    }
    ctx->pc = 0x1C7D08u;
    SET_GPR_U32(ctx, 31, 0x1C7D10u);
    ctx->pc = 0x1C7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D08u;
    // 0x1c7d0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C7D08u, 0x1C7D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D10u;
label_1c7d10:
    // 0x1c7d10: 0xc68c02d4  lwc1        $f12, 0x2D4($s4)
    ctx->pc = 0x1c7d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7d14:
    // 0x1c7d14: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c7d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c7d18:
    // 0x1c7d18: 0xc066e14  jal         func_19B850
label_1c7d1c:
    if (ctx->pc == 0x1C7D1Cu) {
        ctx->pc = 0x1C7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D18u;
        // 0x1c7d1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D20u;
        goto label_1c7d20;
    }
    ctx->pc = 0x1C7D18u;
    SET_GPR_U32(ctx, 31, 0x1C7D20u);
    ctx->pc = 0x1C7D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D18u;
    // 0x1c7d1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C7D18u, 0x1C7D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D20u;
label_1c7d20:
    // 0x1c7d20: 0xc68c02d8  lwc1        $f12, 0x2D8($s4)
    ctx->pc = 0x1c7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c7d24:
    // 0x1c7d24: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1c7d28:
    // 0x1c7d28: 0xc066e14  jal         func_19B850
label_1c7d2c:
    if (ctx->pc == 0x1C7D2Cu) {
        ctx->pc = 0x1C7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D28u;
        // 0x1c7d2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D30u;
        goto label_1c7d30;
    }
    ctx->pc = 0x1C7D28u;
    SET_GPR_U32(ctx, 31, 0x1C7D30u);
    ctx->pc = 0x1C7D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D28u;
    // 0x1c7d2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C7D28u, 0x1C7D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D30u;
label_1c7d30:
    // 0x1c7d30: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7d34:
    // 0x1c7d34: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c7d38:
    // 0x1c7d38: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c7d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7d3c:
    // 0x1c7d3c: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1c7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1c7d40:
    // 0x1c7d40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c7d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7d44:
    // 0x1c7d44: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c7d48:
    // 0x1c7d48: 0xc066d86  jal         func_19B618
label_1c7d4c:
    if (ctx->pc == 0x1C7D4Cu) {
        ctx->pc = 0x1C7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D48u;
        // 0x1c7d4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D50u;
        goto label_1c7d50;
    }
    ctx->pc = 0x1C7D48u;
    SET_GPR_U32(ctx, 31, 0x1C7D50u);
    ctx->pc = 0x1C7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D48u;
    // 0x1c7d4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x1C7D48u, 0x1C7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7D50u;
label_1c7d50:
    // 0x1c7d50: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c7d54:
    // 0x1c7d54: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1c7d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c7d58:
    // 0x1c7d58: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1c7d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c7d5c:
    // 0x1c7d5c: 0x26870260  addiu       $a3, $s4, 0x260
    ctx->pc = 0x1c7d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 608));
label_1c7d60:
    // 0x1c7d60: 0xc067090  jal         func_19C240
label_1c7d64:
    if (ctx->pc == 0x1C7D64u) {
        ctx->pc = 0x1C7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D60u;
        // 0x1c7d64: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D68u;
        goto label_1c7d68;
    }
    ctx->pc = 0x1C7D60u;
    SET_GPR_U32(ctx, 31, 0x1C7D68u);
    ctx->pc = 0x1C7D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D60u;
    // 0x1c7d64: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    { ctx->pc = 0x19c240; return; }
    ctx->pc = 0x1C7D68u;
label_1c7d68:
    // 0x1c7d68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c7d6c:
    if (ctx->pc == 0x1C7D6Cu) {
        ctx->pc = 0x1C7D70u;
        goto label_1c7d70;
    }
    ctx->pc = 0x1C7D68u;
    {
        const bool branch_taken_0x1c7d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d68) {
            ctx->pc = 0x1C7DA0u;
            goto label_1c7da0;
        }
    }
    ctx->pc = 0x1C7D70u;
label_1c7d70:
    // 0x1c7d70: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7d74:
    // 0x1c7d74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c7d78:
    // 0x1c7d78: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1c7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1c7d7c:
    // 0x1c7d7c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c7d80:
    // 0x1c7d80: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1c7d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c7d84:
    // 0x1c7d84: 0x26870250  addiu       $a3, $s4, 0x250
    ctx->pc = 0x1c7d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1c7d88:
    // 0x1c7d88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c7d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7d8c:
    // 0x1c7d8c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c7d90:
    // 0x1c7d90: 0xc067090  jal         func_19C240
label_1c7d94:
    if (ctx->pc == 0x1C7D94u) {
        ctx->pc = 0x1C7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D90u;
        // 0x1c7d94: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7D98u;
        goto label_1c7d98;
    }
    ctx->pc = 0x1C7D90u;
    SET_GPR_U32(ctx, 31, 0x1C7D98u);
    ctx->pc = 0x1C7D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7D90u;
    // 0x1c7d94: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    { ctx->pc = 0x19c240; return; }
    ctx->pc = 0x1C7D98u;
label_1c7d98:
    // 0x1c7d98: 0x1440013b  bnez        $v0, . + 4 + (0x13B << 2)
label_1c7d9c:
    if (ctx->pc == 0x1C7D9Cu) {
        ctx->pc = 0x1C7DA0u;
        goto label_1c7da0;
    }
    ctx->pc = 0x1C7D98u;
    {
        const bool branch_taken_0x1c7d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d98) {
            ctx->pc = 0x1C8288u;
            { ctx->pc = 0x1c8288; return; }
        }
    }
    ctx->pc = 0x1C7DA0u;
label_1c7da0:
    // 0x1c7da0: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x1c7da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c7da4:
    // 0x1c7da4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c7da8:
    // 0x1c7da8: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_1c7dac:
    if (ctx->pc == 0x1C7DACu) {
        ctx->pc = 0x1C7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DA8u;
        // 0x1c7dac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7DB0u;
        goto label_1c7db0;
    }
    ctx->pc = 0x1C7DA8u;
    {
        const bool branch_taken_0x1c7da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DA8u;
        // 0x1c7dac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7da8) {
            ctx->pc = 0x1C7FD8u;
            goto label_1c7fd8;
        }
    }
    ctx->pc = 0x1C7DB0u;
label_1c7db0:
    // 0x1c7db0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c7db0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7db4:
    // 0x1c7db4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7db8:
    // 0x1c7db8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7dbc:
    // 0x1c7dbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c7dbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7dc0:
    // 0x1c7dc0: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1c7dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1c7dc4:
    // 0x1c7dc4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1c7dc8:
    // 0x1c7dc8: 0x24460260  addiu       $a2, $v0, 0x260
    ctx->pc = 0x1c7dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1c7dcc:
    // 0x1c7dcc: 0xc066d7a  jal         func_19B5E8
label_1c7dd0:
    if (ctx->pc == 0x1C7DD0u) {
        ctx->pc = 0x1C7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DCCu;
        // 0x1c7dd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7DD4u;
        goto label_1c7dd4;
    }
    ctx->pc = 0x1C7DCCu;
    SET_GPR_U32(ctx, 31, 0x1C7DD4u);
    ctx->pc = 0x1C7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DCCu;
    // 0x1c7dd0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C7DCCu, 0x1C7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DD4u;
label_1c7dd4:
    // 0x1c7dd4: 0x27b6019c  addiu       $s6, $sp, 0x19C
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_1c7dd8:
    // 0x1c7dd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7ddc:
    // 0x1c7ddc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7de0:
    // 0x1c7de0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1c7de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1c7de4:
    // 0x1c7de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7de8:
    // 0x1c7de8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c7de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7dec:
    // 0x1c7dec: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c7decu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1c7df0:
    // 0x1c7df0: 0x0  nop
    ctx->pc = 0x1c7df0u;
    // NOP
label_1c7df4:
    // 0x1c7df4: 0x0  nop
    ctx->pc = 0x1c7df4u;
    // NOP
label_1c7df8:
    // 0x1c7df8: 0xc066e14  jal         func_19B850
label_1c7dfc:
    if (ctx->pc == 0x1C7DFCu) {
        ctx->pc = 0x1C7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DF8u;
        // 0x1c7dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E00u;
        goto label_1c7e00;
    }
    ctx->pc = 0x1C7DF8u;
    SET_GPR_U32(ctx, 31, 0x1C7E00u);
    ctx->pc = 0x1C7DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DF8u;
    // 0x1c7dfc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C7DF8u, 0x1C7E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E00u;
label_1c7e00:
    // 0x1c7e00: 0xc07f198  jal         func_1FC660
label_1c7e04:
    if (ctx->pc == 0x1C7E04u) {
        ctx->pc = 0x1C7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E00u;
        // 0x1c7e04: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E08u;
        goto label_1c7e08;
    }
    ctx->pc = 0x1C7E00u;
    SET_GPR_U32(ctx, 31, 0x1C7E08u);
    ctx->pc = 0x1C7E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E00u;
    // 0x1c7e04: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1C7E08u;
label_1c7e08:
    // 0x1c7e08: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c7e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c7e0c:
    // 0x1c7e0c: 0xc07f190  jal         func_1FC640
label_1c7e10:
    if (ctx->pc == 0x1C7E10u) {
        ctx->pc = 0x1C7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E0Cu;
        // 0x1c7e10: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E14u;
        goto label_1c7e14;
    }
    ctx->pc = 0x1C7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C7E14u);
    ctx->pc = 0x1C7E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E0Cu;
    // 0x1c7e10: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1C7E14u;
label_1c7e14:
    // 0x1c7e14: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c7e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1c7e18:
    // 0x1c7e18: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c7e1c:
    // 0x1c7e1c: 0x4600a840  add.s       $f1, $f21, $f0
    ctx->pc = 0x1c7e1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1c7e20:
    // 0x1c7e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7e24:
    // 0x1c7e24: 0x0  nop
    ctx->pc = 0x1c7e24u;
    // NOP
label_1c7e28:
    // 0x1c7e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7e2c:
    // 0x1c7e2c: 0x0  nop
    ctx->pc = 0x1c7e2cu;
    // NOP
label_1c7e30:
    // 0x1c7e30: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1c7e34:
    if (ctx->pc == 0x1C7E34u) {
        ctx->pc = 0x1C7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E30u;
        // 0x1c7e34: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E38u;
        goto label_1c7e38;
    }
    ctx->pc = 0x1C7E30u;
    {
        const bool branch_taken_0x1c7e30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E30u;
        // 0x1c7e34: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e30) {
            ctx->pc = 0x1C7E40u;
            goto label_1c7e40;
        }
    }
    ctx->pc = 0x1C7E38u;
label_1c7e38:
    // 0x1c7e38: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c7e3c:
    if (ctx->pc == 0x1C7E3Cu) {
        ctx->pc = 0x1C7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E38u;
        // 0x1c7e3c: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E40u;
        goto label_1c7e40;
    }
    ctx->pc = 0x1C7E38u;
    {
        const bool branch_taken_0x1c7e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E38u;
        // 0x1c7e3c: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e38) {
            ctx->pc = 0x1C7E5Cu;
            goto label_1c7e5c;
        }
    }
    ctx->pc = 0x1C7E40u;
label_1c7e40:
    // 0x1c7e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7e44:
    // 0x1c7e44: 0x0  nop
    ctx->pc = 0x1c7e44u;
    // NOP
label_1c7e48:
    // 0x1c7e48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7e4c:
    // 0x1c7e4c: 0x0  nop
    ctx->pc = 0x1c7e4cu;
    // NOP
label_1c7e50:
    // 0x1c7e50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c7e54:
    if (ctx->pc == 0x1C7E54u) {
        ctx->pc = 0x1C7E58u;
        goto label_1c7e58;
    }
    ctx->pc = 0x1C7E50u;
    {
        const bool branch_taken_0x1c7e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7e50) {
            ctx->pc = 0x1C7E5Cu;
            goto label_1c7e5c;
        }
    }
    ctx->pc = 0x1C7E58u;
label_1c7e58:
    // 0x1c7e58: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1c7e5c:
    // 0x1c7e5c: 0x0  nop
    ctx->pc = 0x1c7e5cu;
    // NOP
label_1c7e60:
    // 0x1c7e60: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1c7e64:
    // 0x1c7e64: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x1c7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7e68:
    // 0x1c7e68: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c7e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c7e6c:
    // 0x1c7e6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7e70:
    // 0x1c7e70: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1c7e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1c7e74:
    // 0x1c7e74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7e78:
    // 0x1c7e78: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1c7e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1c7e7c:
    // 0x1c7e7c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7e80:
    // 0x1c7e80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c7e84:
    // 0x1c7e84: 0xc066e34  jal         func_19B8D0
label_1c7e88:
    if (ctx->pc == 0x1C7E88u) {
        ctx->pc = 0x1C7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7E84u;
        // 0x1c7e88: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7E8Cu;
        goto label_1c7e8c;
    }
    ctx->pc = 0x1C7E84u;
    SET_GPR_U32(ctx, 31, 0x1C7E8Cu);
    ctx->pc = 0x1C7E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7E84u;
    // 0x1c7e88: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8D0u, 0x1C7E84u, 0x1C7E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7E8Cu;
label_1c7e8c:
    // 0x1c7e8c: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x1c7e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c7e90:
    // 0x1c7e90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c7e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c7e94:
    // 0x1c7e94: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_1c7e98:
    if (ctx->pc == 0x1C7E98u) {
        ctx->pc = 0x1C7E9Cu;
        goto label_1c7e9c;
    }
    ctx->pc = 0x1C7E94u;
    {
        const bool branch_taken_0x1c7e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e94) {
            ctx->pc = 0x1C7F58u;
            goto label_1c7f58;
        }
    }
    ctx->pc = 0x1C7E9Cu;
label_1c7e9c:
    // 0x1c7e9c: 0x928202e3  lbu         $v0, 0x2E3($s4)
    ctx->pc = 0x1c7e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 739)));
label_1c7ea0:
    // 0x1c7ea0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1c7ea4:
    if (ctx->pc == 0x1C7EA4u) {
        ctx->pc = 0x1C7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EA0u;
        // 0x1c7ea4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7EA8u;
        goto label_1c7ea8;
    }
    ctx->pc = 0x1C7EA0u;
    {
        const bool branch_taken_0x1c7ea0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EA0u;
        // 0x1c7ea4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ea0) {
            ctx->pc = 0x1C7EB4u;
            goto label_1c7eb4;
        }
    }
    ctx->pc = 0x1C7EA8u;
label_1c7ea8:
    // 0x1c7ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7eac:
    // 0x1c7eac: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c7eb0:
    if (ctx->pc == 0x1C7EB0u) {
        ctx->pc = 0x1C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EACu;
        // 0x1c7eb0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7EB4u;
        goto label_1c7eb4;
    }
    ctx->pc = 0x1C7EACu;
    {
        const bool branch_taken_0x1c7eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7EACu;
        // 0x1c7eb0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7eac) {
            ctx->pc = 0x1C7ECCu;
            goto label_1c7ecc;
        }
    }
    ctx->pc = 0x1C7EB4u;
label_1c7eb4:
    // 0x1c7eb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c7eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c7eb8:
    // 0x1c7eb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c7ebc:
    // 0x1c7ebc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ec0:
    // 0x1c7ec0: 0x0  nop
    ctx->pc = 0x1c7ec0u;
    // NOP
label_1c7ec4:
    // 0x1c7ec4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1c7ec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c7ec8:
    // 0x1c7ec8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c7ec8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c7ecc:
    // 0x1c7ecc: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1c7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c7ed0:
    // 0x1c7ed0: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1c7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_1c7ed4:
    // 0x1c7ed4: 0x3443806e  ori         $v1, $v0, 0x806E
    ctx->pc = 0x1c7ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32878);
label_1c7ed8:
    // 0x1c7ed8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1c7edc:
    // 0x1c7edc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c7edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c7ee0:
    // 0x1c7ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c7ee4:
    // 0x1c7ee4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c7ee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c7ee8:
    // 0x1c7ee8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c7ee8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1c7eec:
    // 0x1c7eec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c7eecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c7ef0:
    // 0x1c7ef0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c7ef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c7ef4:
    // 0x1c7ef4: 0x0  nop
    ctx->pc = 0x1c7ef4u;
    // NOP
label_1c7ef8:
    // 0x1c7ef8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1c7efc:
    if (ctx->pc == 0x1C7EFCu) {
        ctx->pc = 0x1C7F00u;
        goto label_1c7f00;
    }
    ctx->pc = 0x1C7EF8u;
    {
        const bool branch_taken_0x1c7ef8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7ef8) {
            ctx->pc = 0x1C7F10u;
            goto label_1c7f10;
        }
    }
    ctx->pc = 0x1C7F00u;
label_1c7f00:
    // 0x1c7f00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c7f04:
    // 0x1c7f04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c7f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c7f08:
    // 0x1c7f08: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c7f0c:
    if (ctx->pc == 0x1C7F0Cu) {
        ctx->pc = 0x1C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F08u;
        // 0x1c7f0c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7F10u;
        goto label_1c7f10;
    }
    ctx->pc = 0x1C7F08u;
    {
        const bool branch_taken_0x1c7f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7F08u;
        // 0x1c7f0c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7f08) {
            ctx->pc = 0x1C7F2Cu;
            goto label_1c7f2c;
        }
    }
    ctx->pc = 0x1C7F10u;
label_1c7f10:
    // 0x1c7f10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c7f10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c7f14:
    // 0x1c7f14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1c7f18:
    // 0x1c7f18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7f18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c7f1c:
    // 0x1c7f1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c7f1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c7f20:
    // 0x1c7f20: 0x0  nop
    ctx->pc = 0x1c7f20u;
    // NOP
label_1c7f24:
    // 0x1c7f24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c7f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c7f28:
    // 0x1c7f28: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c7f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c7f2c:
    // 0x1c7f2c: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1c7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1c7f30:
    // 0x1c7f30: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c7f34:
    // 0x1c7f34: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x1c7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c7f38:
    // 0x1c7f38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c7f3c:
    // 0x1c7f3c: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c7f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c7f40:
    // 0x1c7f40: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c7f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c7f44:
    // 0x1c7f44: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c7f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c7f48:
    // 0x1c7f48: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c7f4c:
    // 0x1c7f4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c7f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c7f50:
    // 0x1c7f50: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c7f54:
    // 0x1c7f54: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1c7f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_1c7f58:
    // 0x1c7f58: 0x93a200fc  lbu         $v0, 0xFC($sp)
    ctx->pc = 0x1c7f58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
label_1c7f5c:
    // 0x1c7f5c: 0x97a600f8  lhu         $a2, 0xF8($sp)
    ctx->pc = 0x1c7f5cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 248)));
label_1c7f60:
    // 0x1c7f60: 0x2123821  addu        $a3, $s0, $s2
    ctx->pc = 0x1c7f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1c7f64:
    // 0x1c7f64: 0x87a500f4  lh          $a1, 0xF4($sp)
    ctx->pc = 0x1c7f64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 244)));
label_1c7f68:
    // 0x1c7f68: 0x2934021  addu        $t0, $s4, $s3
    ctx->pc = 0x1c7f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1c7f6c:
    // 0x1c7f6c: 0x87a300f0  lh          $v1, 0xF0($sp)
    ctx->pc = 0x1c7f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_1c7f70:
    // 0x1c7f70: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c7f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c7f74:
    // 0x1c7f74: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1c7f74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1c7f78:
    // 0x1c7f78: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x1c7f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1c7f7c:
    // 0x1c7f7c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1c7f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1c7f80:
    // 0x1c7f80: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x1c7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c7f84:
    // 0x1c7f84: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1c7f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1c7f88:
    // 0x1c7f88: 0xa4e30020  sh          $v1, 0x20($a3)
    ctx->pc = 0x1c7f88u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 3));
label_1c7f8c:
    // 0x1c7f8c: 0xa4e50022  sh          $a1, 0x22($a3)
    ctx->pc = 0x1c7f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 34), (uint16_t)GPR_U32(ctx, 5));
label_1c7f90:
    // 0x1c7f90: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x1c7f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
label_1c7f94:
    // 0x1c7f94: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c7f98:
    // 0x1c7f98: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c7f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c7f9c:
    // 0x1c7f9c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c7f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c7fa0:
    // 0x1c7fa0: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c7fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c7fa4:
    // 0x1c7fa4: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c7fa8:
    // 0x1c7fa8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c7fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c7fac:
    // 0x1c7fac: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c7facu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c7fb0:
    // 0x1c7fb0: 0xc50002b0  lwc1        $f0, 0x2B0($t0)
    ctx->pc = 0x1c7fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7fb4:
    // 0x1c7fb4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c7fb8:
    // 0x1c7fb8: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1c7fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_1c7fbc:
    // 0x1c7fbc: 0xc50002b4  lwc1        $f0, 0x2B4($t0)
    ctx->pc = 0x1c7fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7fc0:
    // 0x1c7fc0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c7fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c7fc4:
    // 0x1c7fc4: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1c7fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_1c7fc8:
    // 0x1c7fc8: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
label_1c7fcc:
    if (ctx->pc == 0x1C7FCCu) {
        ctx->pc = 0x1C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FC8u;
        // 0x1c7fcc: 0xe4f4001c  swc1        $f20, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FD0u;
        goto label_1c7fd0;
    }
    ctx->pc = 0x1C7FC8u;
    {
        const bool branch_taken_0x1c7fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FC8u;
        // 0x1c7fcc: 0xe4f4001c  swc1        $f20, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7fc8) {
            ctx->pc = 0x1C7DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7dc0;
        }
    }
    ctx->pc = 0x1C7FD0u;
label_1c7fd0:
    // 0x1c7fd0: 0x10000065  b           . + 4 + (0x65 << 2)
label_1c7fd4:
    if (ctx->pc == 0x1C7FD4u) {
        ctx->pc = 0x1C7FD8u;
        goto label_1c7fd8;
    }
    ctx->pc = 0x1C7FD0u;
    {
        const bool branch_taken_0x1c7fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7fd0) {
            ctx->pc = 0x1C8168u;
            { ctx->pc = 0x1c8168; return; }
        }
    }
    ctx->pc = 0x1C7FD8u;
label_1c7fd8:
    // 0x1c7fd8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c7fd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7fdc:
    // 0x1c7fdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c7fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7fe0:
    // 0x1c7fe0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c7fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7fe4:
    // 0x1c7fe4: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x1c7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1c7fe8:
    // 0x1c7fe8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1c7fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1c7fec:
    // 0x1c7fec: 0x24460260  addiu       $a2, $v0, 0x260
    ctx->pc = 0x1c7fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1c7ff0:
    // 0x1c7ff0: 0xc066d7a  jal         func_19B5E8
label_1c7ff4:
    if (ctx->pc == 0x1C7FF4u) {
        ctx->pc = 0x1C7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7FF0u;
        // 0x1c7ff4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7FF8u;
        goto label_1c7ff8;
    }
    ctx->pc = 0x1C7FF0u;
    SET_GPR_U32(ctx, 31, 0x1C7FF8u);
    ctx->pc = 0x1C7FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7FF0u;
    // 0x1c7ff4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C7FF0u, 0x1C7FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FF8u;
label_1c7ff8:
    // 0x1c7ff8: 0x27b601ac  addiu       $s6, $sp, 0x1AC
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_1c7ffc:
    // 0x1c7ffc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    ctx->pc = 0x1c8000u;
    return;
}

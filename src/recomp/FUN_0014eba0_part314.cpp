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


void FUN_0014eba0_part314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e78f0u: goto label_1e78f0;
        case 0x1e78f4u: goto label_1e78f4;
        case 0x1e78f8u: goto label_1e78f8;
        case 0x1e78fcu: goto label_1e78fc;
        case 0x1e7900u: goto label_1e7900;
        case 0x1e7904u: goto label_1e7904;
        case 0x1e7908u: goto label_1e7908;
        case 0x1e790cu: goto label_1e790c;
        case 0x1e7910u: goto label_1e7910;
        case 0x1e7914u: goto label_1e7914;
        case 0x1e7918u: goto label_1e7918;
        case 0x1e791cu: goto label_1e791c;
        case 0x1e7920u: goto label_1e7920;
        case 0x1e7924u: goto label_1e7924;
        case 0x1e7928u: goto label_1e7928;
        case 0x1e792cu: goto label_1e792c;
        case 0x1e7930u: goto label_1e7930;
        case 0x1e7934u: goto label_1e7934;
        case 0x1e7938u: goto label_1e7938;
        case 0x1e793cu: goto label_1e793c;
        case 0x1e7940u: goto label_1e7940;
        case 0x1e7944u: goto label_1e7944;
        case 0x1e7948u: goto label_1e7948;
        case 0x1e794cu: goto label_1e794c;
        case 0x1e7950u: goto label_1e7950;
        case 0x1e7954u: goto label_1e7954;
        case 0x1e7958u: goto label_1e7958;
        case 0x1e795cu: goto label_1e795c;
        case 0x1e7960u: goto label_1e7960;
        case 0x1e7964u: goto label_1e7964;
        case 0x1e7968u: goto label_1e7968;
        case 0x1e796cu: goto label_1e796c;
        case 0x1e7970u: goto label_1e7970;
        case 0x1e7974u: goto label_1e7974;
        case 0x1e7978u: goto label_1e7978;
        case 0x1e797cu: goto label_1e797c;
        case 0x1e7980u: goto label_1e7980;
        case 0x1e7984u: goto label_1e7984;
        case 0x1e7988u: goto label_1e7988;
        case 0x1e798cu: goto label_1e798c;
        case 0x1e7990u: goto label_1e7990;
        case 0x1e7994u: goto label_1e7994;
        case 0x1e7998u: goto label_1e7998;
        case 0x1e799cu: goto label_1e799c;
        case 0x1e79a0u: goto label_1e79a0;
        case 0x1e79a4u: goto label_1e79a4;
        case 0x1e79a8u: goto label_1e79a8;
        case 0x1e79acu: goto label_1e79ac;
        case 0x1e79b0u: goto label_1e79b0;
        case 0x1e79b4u: goto label_1e79b4;
        case 0x1e79b8u: goto label_1e79b8;
        case 0x1e79bcu: goto label_1e79bc;
        case 0x1e79c0u: goto label_1e79c0;
        case 0x1e79c4u: goto label_1e79c4;
        case 0x1e79c8u: goto label_1e79c8;
        case 0x1e79ccu: goto label_1e79cc;
        case 0x1e79d0u: goto label_1e79d0;
        case 0x1e79d4u: goto label_1e79d4;
        case 0x1e79d8u: goto label_1e79d8;
        case 0x1e79dcu: goto label_1e79dc;
        case 0x1e79e0u: goto label_1e79e0;
        case 0x1e79e4u: goto label_1e79e4;
        case 0x1e79e8u: goto label_1e79e8;
        case 0x1e79ecu: goto label_1e79ec;
        case 0x1e79f0u: goto label_1e79f0;
        case 0x1e79f4u: goto label_1e79f4;
        case 0x1e79f8u: goto label_1e79f8;
        case 0x1e79fcu: goto label_1e79fc;
        case 0x1e7a00u: goto label_1e7a00;
        case 0x1e7a04u: goto label_1e7a04;
        case 0x1e7a08u: goto label_1e7a08;
        case 0x1e7a0cu: goto label_1e7a0c;
        case 0x1e7a10u: goto label_1e7a10;
        case 0x1e7a14u: goto label_1e7a14;
        case 0x1e7a18u: goto label_1e7a18;
        case 0x1e7a1cu: goto label_1e7a1c;
        case 0x1e7a20u: goto label_1e7a20;
        case 0x1e7a24u: goto label_1e7a24;
        case 0x1e7a28u: goto label_1e7a28;
        case 0x1e7a2cu: goto label_1e7a2c;
        case 0x1e7a30u: goto label_1e7a30;
        case 0x1e7a34u: goto label_1e7a34;
        case 0x1e7a38u: goto label_1e7a38;
        case 0x1e7a3cu: goto label_1e7a3c;
        case 0x1e7a40u: goto label_1e7a40;
        case 0x1e7a44u: goto label_1e7a44;
        case 0x1e7a48u: goto label_1e7a48;
        case 0x1e7a4cu: goto label_1e7a4c;
        case 0x1e7a50u: goto label_1e7a50;
        case 0x1e7a54u: goto label_1e7a54;
        case 0x1e7a58u: goto label_1e7a58;
        case 0x1e7a5cu: goto label_1e7a5c;
        case 0x1e7a60u: goto label_1e7a60;
        case 0x1e7a64u: goto label_1e7a64;
        case 0x1e7a68u: goto label_1e7a68;
        case 0x1e7a6cu: goto label_1e7a6c;
        case 0x1e7a70u: goto label_1e7a70;
        case 0x1e7a74u: goto label_1e7a74;
        case 0x1e7a78u: goto label_1e7a78;
        case 0x1e7a7cu: goto label_1e7a7c;
        case 0x1e7a80u: goto label_1e7a80;
        case 0x1e7a84u: goto label_1e7a84;
        case 0x1e7a88u: goto label_1e7a88;
        case 0x1e7a8cu: goto label_1e7a8c;
        case 0x1e7a90u: goto label_1e7a90;
        case 0x1e7a94u: goto label_1e7a94;
        case 0x1e7a98u: goto label_1e7a98;
        case 0x1e7a9cu: goto label_1e7a9c;
        case 0x1e7aa0u: goto label_1e7aa0;
        case 0x1e7aa4u: goto label_1e7aa4;
        case 0x1e7aa8u: goto label_1e7aa8;
        case 0x1e7aacu: goto label_1e7aac;
        case 0x1e7ab0u: goto label_1e7ab0;
        case 0x1e7ab4u: goto label_1e7ab4;
        case 0x1e7ab8u: goto label_1e7ab8;
        case 0x1e7abcu: goto label_1e7abc;
        case 0x1e7ac0u: goto label_1e7ac0;
        case 0x1e7ac4u: goto label_1e7ac4;
        case 0x1e7ac8u: goto label_1e7ac8;
        case 0x1e7accu: goto label_1e7acc;
        case 0x1e7ad0u: goto label_1e7ad0;
        case 0x1e7ad4u: goto label_1e7ad4;
        case 0x1e7ad8u: goto label_1e7ad8;
        case 0x1e7adcu: goto label_1e7adc;
        case 0x1e7ae0u: goto label_1e7ae0;
        case 0x1e7ae4u: goto label_1e7ae4;
        case 0x1e7ae8u: goto label_1e7ae8;
        case 0x1e7aecu: goto label_1e7aec;
        case 0x1e7af0u: goto label_1e7af0;
        case 0x1e7af4u: goto label_1e7af4;
        case 0x1e7af8u: goto label_1e7af8;
        case 0x1e7afcu: goto label_1e7afc;
        case 0x1e7b00u: goto label_1e7b00;
        case 0x1e7b04u: goto label_1e7b04;
        case 0x1e7b08u: goto label_1e7b08;
        case 0x1e7b0cu: goto label_1e7b0c;
        case 0x1e7b10u: goto label_1e7b10;
        case 0x1e7b14u: goto label_1e7b14;
        case 0x1e7b18u: goto label_1e7b18;
        case 0x1e7b1cu: goto label_1e7b1c;
        case 0x1e7b20u: goto label_1e7b20;
        case 0x1e7b24u: goto label_1e7b24;
        case 0x1e7b28u: goto label_1e7b28;
        case 0x1e7b2cu: goto label_1e7b2c;
        case 0x1e7b30u: goto label_1e7b30;
        case 0x1e7b34u: goto label_1e7b34;
        case 0x1e7b38u: goto label_1e7b38;
        case 0x1e7b3cu: goto label_1e7b3c;
        case 0x1e7b40u: goto label_1e7b40;
        case 0x1e7b44u: goto label_1e7b44;
        case 0x1e7b48u: goto label_1e7b48;
        case 0x1e7b4cu: goto label_1e7b4c;
        case 0x1e7b50u: goto label_1e7b50;
        case 0x1e7b54u: goto label_1e7b54;
        case 0x1e7b58u: goto label_1e7b58;
        case 0x1e7b5cu: goto label_1e7b5c;
        case 0x1e7b60u: goto label_1e7b60;
        case 0x1e7b64u: goto label_1e7b64;
        case 0x1e7b68u: goto label_1e7b68;
        case 0x1e7b6cu: goto label_1e7b6c;
        case 0x1e7b70u: goto label_1e7b70;
        case 0x1e7b74u: goto label_1e7b74;
        case 0x1e7b78u: goto label_1e7b78;
        case 0x1e7b7cu: goto label_1e7b7c;
        case 0x1e7b80u: goto label_1e7b80;
        case 0x1e7b84u: goto label_1e7b84;
        case 0x1e7b88u: goto label_1e7b88;
        case 0x1e7b8cu: goto label_1e7b8c;
        case 0x1e7b90u: goto label_1e7b90;
        case 0x1e7b94u: goto label_1e7b94;
        case 0x1e7b98u: goto label_1e7b98;
        case 0x1e7b9cu: goto label_1e7b9c;
        case 0x1e7ba0u: goto label_1e7ba0;
        case 0x1e7ba4u: goto label_1e7ba4;
        case 0x1e7ba8u: goto label_1e7ba8;
        case 0x1e7bacu: goto label_1e7bac;
        case 0x1e7bb0u: goto label_1e7bb0;
        case 0x1e7bb4u: goto label_1e7bb4;
        case 0x1e7bb8u: goto label_1e7bb8;
        case 0x1e7bbcu: goto label_1e7bbc;
        case 0x1e7bc0u: goto label_1e7bc0;
        case 0x1e7bc4u: goto label_1e7bc4;
        case 0x1e7bc8u: goto label_1e7bc8;
        case 0x1e7bccu: goto label_1e7bcc;
        case 0x1e7bd0u: goto label_1e7bd0;
        case 0x1e7bd4u: goto label_1e7bd4;
        case 0x1e7bd8u: goto label_1e7bd8;
        case 0x1e7bdcu: goto label_1e7bdc;
        case 0x1e7be0u: goto label_1e7be0;
        case 0x1e7be4u: goto label_1e7be4;
        case 0x1e7be8u: goto label_1e7be8;
        case 0x1e7becu: goto label_1e7bec;
        case 0x1e7bf0u: goto label_1e7bf0;
        case 0x1e7bf4u: goto label_1e7bf4;
        case 0x1e7bf8u: goto label_1e7bf8;
        case 0x1e7bfcu: goto label_1e7bfc;
        case 0x1e7c00u: goto label_1e7c00;
        case 0x1e7c04u: goto label_1e7c04;
        case 0x1e7c08u: goto label_1e7c08;
        case 0x1e7c0cu: goto label_1e7c0c;
        case 0x1e7c10u: goto label_1e7c10;
        case 0x1e7c14u: goto label_1e7c14;
        case 0x1e7c18u: goto label_1e7c18;
        case 0x1e7c1cu: goto label_1e7c1c;
        case 0x1e7c20u: goto label_1e7c20;
        case 0x1e7c24u: goto label_1e7c24;
        case 0x1e7c28u: goto label_1e7c28;
        case 0x1e7c2cu: goto label_1e7c2c;
        case 0x1e7c30u: goto label_1e7c30;
        case 0x1e7c34u: goto label_1e7c34;
        case 0x1e7c38u: goto label_1e7c38;
        case 0x1e7c3cu: goto label_1e7c3c;
        case 0x1e7c40u: goto label_1e7c40;
        case 0x1e7c44u: goto label_1e7c44;
        case 0x1e7c48u: goto label_1e7c48;
        case 0x1e7c4cu: goto label_1e7c4c;
        case 0x1e7c50u: goto label_1e7c50;
        case 0x1e7c54u: goto label_1e7c54;
        case 0x1e7c58u: goto label_1e7c58;
        case 0x1e7c5cu: goto label_1e7c5c;
        case 0x1e7c60u: goto label_1e7c60;
        case 0x1e7c64u: goto label_1e7c64;
        case 0x1e7c68u: goto label_1e7c68;
        case 0x1e7c6cu: goto label_1e7c6c;
        case 0x1e7c70u: goto label_1e7c70;
        case 0x1e7c74u: goto label_1e7c74;
        case 0x1e7c78u: goto label_1e7c78;
        case 0x1e7c7cu: goto label_1e7c7c;
        case 0x1e7c80u: goto label_1e7c80;
        case 0x1e7c84u: goto label_1e7c84;
        case 0x1e7c88u: goto label_1e7c88;
        case 0x1e7c8cu: goto label_1e7c8c;
        case 0x1e7c90u: goto label_1e7c90;
        case 0x1e7c94u: goto label_1e7c94;
        case 0x1e7c98u: goto label_1e7c98;
        case 0x1e7c9cu: goto label_1e7c9c;
        case 0x1e7ca0u: goto label_1e7ca0;
        case 0x1e7ca4u: goto label_1e7ca4;
        case 0x1e7ca8u: goto label_1e7ca8;
        case 0x1e7cacu: goto label_1e7cac;
        case 0x1e7cb0u: goto label_1e7cb0;
        case 0x1e7cb4u: goto label_1e7cb4;
        case 0x1e7cb8u: goto label_1e7cb8;
        case 0x1e7cbcu: goto label_1e7cbc;
        case 0x1e7cc0u: goto label_1e7cc0;
        case 0x1e7cc4u: goto label_1e7cc4;
        case 0x1e7cc8u: goto label_1e7cc8;
        case 0x1e7cccu: goto label_1e7ccc;
        case 0x1e7cd0u: goto label_1e7cd0;
        case 0x1e7cd4u: goto label_1e7cd4;
        case 0x1e7cd8u: goto label_1e7cd8;
        case 0x1e7cdcu: goto label_1e7cdc;
        case 0x1e7ce0u: goto label_1e7ce0;
        case 0x1e7ce4u: goto label_1e7ce4;
        case 0x1e7ce8u: goto label_1e7ce8;
        case 0x1e7cecu: goto label_1e7cec;
        case 0x1e7cf0u: goto label_1e7cf0;
        case 0x1e7cf4u: goto label_1e7cf4;
        case 0x1e7cf8u: goto label_1e7cf8;
        case 0x1e7cfcu: goto label_1e7cfc;
        case 0x1e7d00u: goto label_1e7d00;
        case 0x1e7d04u: goto label_1e7d04;
        case 0x1e7d08u: goto label_1e7d08;
        case 0x1e7d0cu: goto label_1e7d0c;
        case 0x1e7d10u: goto label_1e7d10;
        case 0x1e7d14u: goto label_1e7d14;
        case 0x1e7d18u: goto label_1e7d18;
        case 0x1e7d1cu: goto label_1e7d1c;
        case 0x1e7d20u: goto label_1e7d20;
        case 0x1e7d24u: goto label_1e7d24;
        case 0x1e7d28u: goto label_1e7d28;
        case 0x1e7d2cu: goto label_1e7d2c;
        case 0x1e7d30u: goto label_1e7d30;
        case 0x1e7d34u: goto label_1e7d34;
        case 0x1e7d38u: goto label_1e7d38;
        case 0x1e7d3cu: goto label_1e7d3c;
        case 0x1e7d40u: goto label_1e7d40;
        case 0x1e7d44u: goto label_1e7d44;
        case 0x1e7d48u: goto label_1e7d48;
        case 0x1e7d4cu: goto label_1e7d4c;
        case 0x1e7d50u: goto label_1e7d50;
        case 0x1e7d54u: goto label_1e7d54;
        case 0x1e7d58u: goto label_1e7d58;
        case 0x1e7d5cu: goto label_1e7d5c;
        case 0x1e7d60u: goto label_1e7d60;
        case 0x1e7d64u: goto label_1e7d64;
        case 0x1e7d68u: goto label_1e7d68;
        case 0x1e7d6cu: goto label_1e7d6c;
        case 0x1e7d70u: goto label_1e7d70;
        case 0x1e7d74u: goto label_1e7d74;
        case 0x1e7d78u: goto label_1e7d78;
        case 0x1e7d7cu: goto label_1e7d7c;
        case 0x1e7d80u: goto label_1e7d80;
        case 0x1e7d84u: goto label_1e7d84;
        case 0x1e7d88u: goto label_1e7d88;
        case 0x1e7d8cu: goto label_1e7d8c;
        case 0x1e7d90u: goto label_1e7d90;
        case 0x1e7d94u: goto label_1e7d94;
        case 0x1e7d98u: goto label_1e7d98;
        case 0x1e7d9cu: goto label_1e7d9c;
        case 0x1e7da0u: goto label_1e7da0;
        case 0x1e7da4u: goto label_1e7da4;
        case 0x1e7da8u: goto label_1e7da8;
        case 0x1e7dacu: goto label_1e7dac;
        case 0x1e7db0u: goto label_1e7db0;
        case 0x1e7db4u: goto label_1e7db4;
        case 0x1e7db8u: goto label_1e7db8;
        case 0x1e7dbcu: goto label_1e7dbc;
        case 0x1e7dc0u: goto label_1e7dc0;
        case 0x1e7dc4u: goto label_1e7dc4;
        case 0x1e7dc8u: goto label_1e7dc8;
        case 0x1e7dccu: goto label_1e7dcc;
        case 0x1e7dd0u: goto label_1e7dd0;
        case 0x1e7dd4u: goto label_1e7dd4;
        case 0x1e7dd8u: goto label_1e7dd8;
        case 0x1e7ddcu: goto label_1e7ddc;
        case 0x1e7de0u: goto label_1e7de0;
        case 0x1e7de4u: goto label_1e7de4;
        case 0x1e7de8u: goto label_1e7de8;
        case 0x1e7decu: goto label_1e7dec;
        case 0x1e7df0u: goto label_1e7df0;
        case 0x1e7df4u: goto label_1e7df4;
        case 0x1e7df8u: goto label_1e7df8;
        case 0x1e7dfcu: goto label_1e7dfc;
        case 0x1e7e00u: goto label_1e7e00;
        case 0x1e7e04u: goto label_1e7e04;
        case 0x1e7e08u: goto label_1e7e08;
        case 0x1e7e0cu: goto label_1e7e0c;
        case 0x1e7e10u: goto label_1e7e10;
        case 0x1e7e14u: goto label_1e7e14;
        case 0x1e7e18u: goto label_1e7e18;
        case 0x1e7e1cu: goto label_1e7e1c;
        case 0x1e7e20u: goto label_1e7e20;
        case 0x1e7e24u: goto label_1e7e24;
        case 0x1e7e28u: goto label_1e7e28;
        case 0x1e7e2cu: goto label_1e7e2c;
        case 0x1e7e30u: goto label_1e7e30;
        case 0x1e7e34u: goto label_1e7e34;
        case 0x1e7e38u: goto label_1e7e38;
        case 0x1e7e3cu: goto label_1e7e3c;
        case 0x1e7e40u: goto label_1e7e40;
        case 0x1e7e44u: goto label_1e7e44;
        case 0x1e7e48u: goto label_1e7e48;
        case 0x1e7e4cu: goto label_1e7e4c;
        case 0x1e7e50u: goto label_1e7e50;
        case 0x1e7e54u: goto label_1e7e54;
        case 0x1e7e58u: goto label_1e7e58;
        case 0x1e7e5cu: goto label_1e7e5c;
        case 0x1e7e60u: goto label_1e7e60;
        case 0x1e7e64u: goto label_1e7e64;
        case 0x1e7e68u: goto label_1e7e68;
        case 0x1e7e6cu: goto label_1e7e6c;
        case 0x1e7e70u: goto label_1e7e70;
        case 0x1e7e74u: goto label_1e7e74;
        case 0x1e7e78u: goto label_1e7e78;
        case 0x1e7e7cu: goto label_1e7e7c;
        case 0x1e7e80u: goto label_1e7e80;
        case 0x1e7e84u: goto label_1e7e84;
        case 0x1e7e88u: goto label_1e7e88;
        case 0x1e7e8cu: goto label_1e7e8c;
        case 0x1e7e90u: goto label_1e7e90;
        case 0x1e7e94u: goto label_1e7e94;
        case 0x1e7e98u: goto label_1e7e98;
        case 0x1e7e9cu: goto label_1e7e9c;
        case 0x1e7ea0u: goto label_1e7ea0;
        case 0x1e7ea4u: goto label_1e7ea4;
        case 0x1e7ea8u: goto label_1e7ea8;
        case 0x1e7eacu: goto label_1e7eac;
        case 0x1e7eb0u: goto label_1e7eb0;
        case 0x1e7eb4u: goto label_1e7eb4;
        case 0x1e7eb8u: goto label_1e7eb8;
        case 0x1e7ebcu: goto label_1e7ebc;
        case 0x1e7ec0u: goto label_1e7ec0;
        case 0x1e7ec4u: goto label_1e7ec4;
        case 0x1e7ec8u: goto label_1e7ec8;
        case 0x1e7eccu: goto label_1e7ecc;
        case 0x1e7ed0u: goto label_1e7ed0;
        case 0x1e7ed4u: goto label_1e7ed4;
        case 0x1e7ed8u: goto label_1e7ed8;
        case 0x1e7edcu: goto label_1e7edc;
        case 0x1e7ee0u: goto label_1e7ee0;
        case 0x1e7ee4u: goto label_1e7ee4;
        case 0x1e7ee8u: goto label_1e7ee8;
        case 0x1e7eecu: goto label_1e7eec;
        case 0x1e7ef0u: goto label_1e7ef0;
        case 0x1e7ef4u: goto label_1e7ef4;
        case 0x1e7ef8u: goto label_1e7ef8;
        case 0x1e7efcu: goto label_1e7efc;
        case 0x1e7f00u: goto label_1e7f00;
        case 0x1e7f04u: goto label_1e7f04;
        case 0x1e7f08u: goto label_1e7f08;
        case 0x1e7f0cu: goto label_1e7f0c;
        case 0x1e7f10u: goto label_1e7f10;
        case 0x1e7f14u: goto label_1e7f14;
        case 0x1e7f18u: goto label_1e7f18;
        case 0x1e7f1cu: goto label_1e7f1c;
        case 0x1e7f20u: goto label_1e7f20;
        case 0x1e7f24u: goto label_1e7f24;
        case 0x1e7f28u: goto label_1e7f28;
        case 0x1e7f2cu: goto label_1e7f2c;
        case 0x1e7f30u: goto label_1e7f30;
        case 0x1e7f34u: goto label_1e7f34;
        case 0x1e7f38u: goto label_1e7f38;
        case 0x1e7f3cu: goto label_1e7f3c;
        case 0x1e7f40u: goto label_1e7f40;
        case 0x1e7f44u: goto label_1e7f44;
        case 0x1e7f48u: goto label_1e7f48;
        case 0x1e7f4cu: goto label_1e7f4c;
        case 0x1e7f50u: goto label_1e7f50;
        case 0x1e7f54u: goto label_1e7f54;
        case 0x1e7f58u: goto label_1e7f58;
        case 0x1e7f5cu: goto label_1e7f5c;
        case 0x1e7f60u: goto label_1e7f60;
        case 0x1e7f64u: goto label_1e7f64;
        case 0x1e7f68u: goto label_1e7f68;
        case 0x1e7f6cu: goto label_1e7f6c;
        case 0x1e7f70u: goto label_1e7f70;
        case 0x1e7f74u: goto label_1e7f74;
        case 0x1e7f78u: goto label_1e7f78;
        case 0x1e7f7cu: goto label_1e7f7c;
        case 0x1e7f80u: goto label_1e7f80;
        case 0x1e7f84u: goto label_1e7f84;
        case 0x1e7f88u: goto label_1e7f88;
        case 0x1e7f8cu: goto label_1e7f8c;
        case 0x1e7f90u: goto label_1e7f90;
        case 0x1e7f94u: goto label_1e7f94;
        case 0x1e7f98u: goto label_1e7f98;
        case 0x1e7f9cu: goto label_1e7f9c;
        case 0x1e7fa0u: goto label_1e7fa0;
        case 0x1e7fa4u: goto label_1e7fa4;
        case 0x1e7fa8u: goto label_1e7fa8;
        case 0x1e7facu: goto label_1e7fac;
        case 0x1e7fb0u: goto label_1e7fb0;
        case 0x1e7fb4u: goto label_1e7fb4;
        case 0x1e7fb8u: goto label_1e7fb8;
        case 0x1e7fbcu: goto label_1e7fbc;
        case 0x1e7fc0u: goto label_1e7fc0;
        case 0x1e7fc4u: goto label_1e7fc4;
        case 0x1e7fc8u: goto label_1e7fc8;
        case 0x1e7fccu: goto label_1e7fcc;
        case 0x1e7fd0u: goto label_1e7fd0;
        case 0x1e7fd4u: goto label_1e7fd4;
        case 0x1e7fd8u: goto label_1e7fd8;
        case 0x1e7fdcu: goto label_1e7fdc;
        case 0x1e7fe0u: goto label_1e7fe0;
        case 0x1e7fe4u: goto label_1e7fe4;
        case 0x1e7fe8u: goto label_1e7fe8;
        case 0x1e7fecu: goto label_1e7fec;
        case 0x1e7ff0u: goto label_1e7ff0;
        case 0x1e7ff4u: goto label_1e7ff4;
        case 0x1e7ff8u: goto label_1e7ff8;
        case 0x1e7ffcu: goto label_1e7ffc;
        case 0x1e8000u: goto label_1e8000;
        case 0x1e8004u: goto label_1e8004;
        case 0x1e8008u: goto label_1e8008;
        case 0x1e800cu: goto label_1e800c;
        case 0x1e8010u: goto label_1e8010;
        case 0x1e8014u: goto label_1e8014;
        case 0x1e8018u: goto label_1e8018;
        case 0x1e801cu: goto label_1e801c;
        case 0x1e8020u: goto label_1e8020;
        case 0x1e8024u: goto label_1e8024;
        case 0x1e8028u: goto label_1e8028;
        case 0x1e802cu: goto label_1e802c;
        case 0x1e8030u: goto label_1e8030;
        case 0x1e8034u: goto label_1e8034;
        case 0x1e8038u: goto label_1e8038;
        case 0x1e803cu: goto label_1e803c;
        case 0x1e8040u: goto label_1e8040;
        case 0x1e8044u: goto label_1e8044;
        case 0x1e8048u: goto label_1e8048;
        case 0x1e804cu: goto label_1e804c;
        case 0x1e8050u: goto label_1e8050;
        case 0x1e8054u: goto label_1e8054;
        case 0x1e8058u: goto label_1e8058;
        case 0x1e805cu: goto label_1e805c;
        case 0x1e8060u: goto label_1e8060;
        case 0x1e8064u: goto label_1e8064;
        case 0x1e8068u: goto label_1e8068;
        case 0x1e806cu: goto label_1e806c;
        case 0x1e8070u: goto label_1e8070;
        case 0x1e8074u: goto label_1e8074;
        case 0x1e8078u: goto label_1e8078;
        case 0x1e807cu: goto label_1e807c;
        case 0x1e8080u: goto label_1e8080;
        case 0x1e8084u: goto label_1e8084;
        case 0x1e8088u: goto label_1e8088;
        case 0x1e808cu: goto label_1e808c;
        case 0x1e8090u: goto label_1e8090;
        case 0x1e8094u: goto label_1e8094;
        case 0x1e8098u: goto label_1e8098;
        case 0x1e809cu: goto label_1e809c;
        case 0x1e80a0u: goto label_1e80a0;
        case 0x1e80a4u: goto label_1e80a4;
        case 0x1e80a8u: goto label_1e80a8;
        case 0x1e80acu: goto label_1e80ac;
        case 0x1e80b0u: goto label_1e80b0;
        case 0x1e80b4u: goto label_1e80b4;
        case 0x1e80b8u: goto label_1e80b8;
        case 0x1e80bcu: goto label_1e80bc;
        default: return;
    }

label_1e78f0:
    // 0x1e78f0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e78f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1e78f4:
    // 0x1e78f4: 0xffab0008  sd          $t3, 0x8($sp)
    ctx->pc = 0x1e78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 11));
label_1e78f8:
    // 0x1e78f8: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1e78f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1e78fc:
    // 0x1e78fc: 0xffa90010  sd          $t1, 0x10($sp)
    ctx->pc = 0x1e78fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 9));
label_1e7900:
    // 0x1e7900: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1e7900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1e7904:
    // 0x1e7904: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x1e7904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1e7908:
    // 0x1e7908: 0x24080168  addiu       $t0, $zero, 0x168
    ctx->pc = 0x1e7908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1e790c:
    // 0x1e790c: 0xc07c110  jal         func_1F0440
label_1e7910:
    if (ctx->pc == 0x1E7910u) {
        ctx->pc = 0x1E7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E790Cu;
        // 0x1e7910: 0x240a0020  addiu       $t2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7914u;
        goto label_1e7914;
    }
    ctx->pc = 0x1E790Cu;
    SET_GPR_U32(ctx, 31, 0x1E7914u);
    ctx->pc = 0x1E7910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E790Cu;
    // 0x1e7910: 0x240a0020  addiu       $t2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1E7914u;
label_1e7914:
    // 0x1e7914: 0xc070834  jal         func_1C20D0
label_1e7918:
    if (ctx->pc == 0x1E7918u) {
        ctx->pc = 0x1E7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7914u;
        // 0x1e7918: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E791Cu;
        goto label_1e791c;
    }
    ctx->pc = 0x1E7914u;
    SET_GPR_U32(ctx, 31, 0x1E791Cu);
    ctx->pc = 0x1E7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7914u;
    // 0x1e7918: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1E791Cu;
label_1e791c:
    // 0x1e791c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e791cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7920:
    // 0x1e7920: 0x240b0030  addiu       $t3, $zero, 0x30
    ctx->pc = 0x1e7920u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e7924:
    // 0x1e7924: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e7924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e7928:
    // 0x1e7928: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e792c:
    // 0x1e792c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e792cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e7930:
    // 0x1e7930: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x1e7930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_1e7934:
    // 0x1e7934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7938:
    // 0x1e7938: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e7938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e793c:
    // 0x1e793c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e793cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e7940:
    // 0x1e7940: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1e7940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1e7944:
    // 0x1e7944: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1e7944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1e7948:
    // 0x1e7948: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x1e7948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1e794c:
    // 0x1e794c: 0x24090320  addiu       $t1, $zero, 0x320
    ctx->pc = 0x1e794cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_1e7950:
    // 0x1e7950: 0xc05de30  jal         func_1778C0
label_1e7954:
    if (ctx->pc == 0x1E7954u) {
        ctx->pc = 0x1E7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7950u;
        // 0x1e7954: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7958u;
        goto label_1e7958;
    }
    ctx->pc = 0x1E7950u;
    SET_GPR_U32(ctx, 31, 0x1E7958u);
    ctx->pc = 0x1E7954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7950u;
    // 0x1e7954: 0x240a00a0  addiu       $t2, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1E7958u;
label_1e7958:
    // 0x1e7958: 0x26230420  addiu       $v1, $s1, 0x420
    ctx->pc = 0x1e7958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
label_1e795c:
    // 0x1e795c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7960:
    // 0x1e7960: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1e7960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1e7964:
    // 0x1e7964: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1e7964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
label_1e7968:
    // 0x1e7968: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e7968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e796c:
    // 0x1e796c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7970:
    // 0x1e7970: 0x90253b80  lbu         $a1, 0x3B80($at)
    ctx->pc = 0x1e7970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 15232)));
label_1e7974:
    // 0x1e7974: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1e7974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e7978:
    // 0x1e7978: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1e7978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1e797c:
    // 0x1e797c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1e797cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1e7980:
    // 0x1e7980: 0x240900c8  addiu       $t1, $zero, 0xC8
    ctx->pc = 0x1e7980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1e7984:
    // 0x1e7984: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1e7984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e7988:
    // 0x1e7988: 0xc054c60  jal         func_153180
label_1e798c:
    if (ctx->pc == 0x1E798Cu) {
        ctx->pc = 0x1E798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7988u;
        // 0x1e798c: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7990u;
        goto label_1e7990;
    }
    ctx->pc = 0x1E7988u;
    SET_GPR_U32(ctx, 31, 0x1E7990u);
    ctx->pc = 0x1E798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7988u;
    // 0x1e798c: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    { ctx->pc = 0x153180; return; }
    ctx->pc = 0x1E7990u;
label_1e7990:
    // 0x1e7990: 0xc070834  jal         func_1C20D0
label_1e7994:
    if (ctx->pc == 0x1E7994u) {
        ctx->pc = 0x1E7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7990u;
        // 0x1e7994: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7998u;
        goto label_1e7998;
    }
    ctx->pc = 0x1E7990u;
    SET_GPR_U32(ctx, 31, 0x1E7998u);
    ctx->pc = 0x1E7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7990u;
    // 0x1e7994: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1E7998u;
label_1e7998:
    // 0x1e7998: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e799c:
    // 0x1e799c: 0x262404f0  addiu       $a0, $s1, 0x4F0
    ctx->pc = 0x1e799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1264));
label_1e79a0:
    // 0x1e79a0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1e79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e79a4:
    // 0x1e79a4: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x1e79a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
label_1e79a8:
    // 0x1e79a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e79a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e79ac:
    // 0x1e79ac: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1e79acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1e79b0:
    // 0x1e79b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e79b4:
    // 0x1e79b4: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x1e79b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1e79b8:
    // 0x1e79b8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e79b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e79bc:
    // 0x1e79bc: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x1e79bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1e79c0:
    // 0x1e79c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e79c4:
    // 0x1e79c4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e79c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e79c8:
    // 0x1e79c8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e79c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e79cc:
    // 0x1e79cc: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x1e79ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1e79d0:
    // 0x1e79d0: 0xc05de30  jal         func_1778C0
label_1e79d4:
    if (ctx->pc == 0x1E79D4u) {
        ctx->pc = 0x1E79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79D0u;
        // 0x1e79d4: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E79D8u;
        goto label_1e79d8;
    }
    ctx->pc = 0x1E79D0u;
    SET_GPR_U32(ctx, 31, 0x1E79D8u);
    ctx->pc = 0x1E79D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79D0u;
    // 0x1e79d4: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1E79D8u;
label_1e79d8:
    // 0x1e79d8: 0xc070834  jal         func_1C20D0
label_1e79dc:
    if (ctx->pc == 0x1E79DCu) {
        ctx->pc = 0x1E79DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E79D8u;
        // 0x1e79dc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E79E0u;
        goto label_1e79e0;
    }
    ctx->pc = 0x1E79D8u;
    SET_GPR_U32(ctx, 31, 0x1E79E0u);
    ctx->pc = 0x1E79DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E79D8u;
    // 0x1e79dc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1E79E0u;
label_1e79e0:
    // 0x1e79e0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e79e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e79e4:
    // 0x1e79e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e79e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e79e8:
    // 0x1e79e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e79e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e79ec:
    // 0x1e79ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e79ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e79f0:
    // 0x1e79f0: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1e79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1e79f4:
    // 0x1e79f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e79f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e79f8:
    // 0x1e79f8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1e79f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e79fc:
    // 0x1e79fc: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1e79fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_1e7a00:
    // 0x1e7a00: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e7a04:
    // 0x1e7a04: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1e7a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1e7a08:
    // 0x1e7a08: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x1e7a08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1e7a0c:
    // 0x1e7a0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7a10:
    // 0x1e7a10: 0x264700d4  addiu       $a3, $s2, 0xD4
    ctx->pc = 0x1e7a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 212));
label_1e7a14:
    // 0x1e7a14: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e7a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e7a18:
    // 0x1e7a18: 0x26840590  addiu       $a0, $s4, 0x590
    ctx->pc = 0x1e7a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1424));
label_1e7a1c:
    // 0x1e7a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7a20:
    // 0x1e7a20: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1e7a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1e7a24:
    // 0x1e7a24: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1e7a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1e7a28:
    // 0x1e7a28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e7a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e7a2c:
    // 0x1e7a2c: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x1e7a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
label_1e7a30:
    // 0x1e7a30: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x1e7a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1e7a34:
    // 0x1e7a34: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x1e7a34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1e7a38:
    // 0x1e7a38: 0xc05dd88  jal         func_177620
label_1e7a3c:
    if (ctx->pc == 0x1E7A3Cu) {
        ctx->pc = 0x1E7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A38u;
        // 0x1e7a3c: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7A40u;
        goto label_1e7a40;
    }
    ctx->pc = 0x1E7A38u;
    SET_GPR_U32(ctx, 31, 0x1E7A40u);
    ctx->pc = 0x1E7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A38u;
    // 0x1e7a3c: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    { ctx->pc = 0x177620; return; }
    ctx->pc = 0x1E7A40u;
label_1e7a40:
    // 0x1e7a40: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1e7a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e7a44:
    // 0x1e7a44: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e7a48:
    // 0x1e7a48: 0xa2850600  sb          $a1, 0x600($s4)
    ctx->pc = 0x1e7a48u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1536), (uint8_t)GPR_U32(ctx, 5));
label_1e7a4c:
    // 0x1e7a4c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e7a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e7a50:
    // 0x1e7a50: 0xa2850601  sb          $a1, 0x601($s4)
    ctx->pc = 0x1e7a50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1537), (uint8_t)GPR_U32(ctx, 5));
label_1e7a54:
    // 0x1e7a54: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1e7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1e7a58:
    // 0x1e7a58: 0xa2850602  sb          $a1, 0x602($s4)
    ctx->pc = 0x1e7a58u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1538), (uint8_t)GPR_U32(ctx, 5));
label_1e7a5c:
    // 0x1e7a5c: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1e7a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e7a60:
    // 0x1e7a60: 0xa2840603  sb          $a0, 0x603($s4)
    ctx->pc = 0x1e7a60u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1539), (uint8_t)GPR_U32(ctx, 4));
label_1e7a64:
    // 0x1e7a64: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1e7a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e7a68:
    // 0x1e7a68: 0xae830604  sw          $v1, 0x604($s4)
    ctx->pc = 0x1e7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1540), GPR_U32(ctx, 3));
label_1e7a6c:
    // 0x1e7a6c: 0x26840810  addiu       $a0, $s4, 0x810
    ctx->pc = 0x1e7a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2064));
label_1e7a70:
    // 0x1e7a70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e7a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e7a74:
    // 0x1e7a74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7a78:
    // 0x1e7a78: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1e7a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_1e7a7c:
    // 0x1e7a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7a80:
    // 0x1e7a80: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x1e7a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_1e7a84:
    // 0x1e7a84: 0x264700d4  addiu       $a3, $s2, 0xD4
    ctx->pc = 0x1e7a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 212));
label_1e7a88:
    // 0x1e7a88: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1e7a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1e7a8c:
    // 0x1e7a8c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e7a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e7a90:
    // 0x1e7a90: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1e7a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1e7a94:
    // 0x1e7a94: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x1e7a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
label_1e7a98:
    // 0x1e7a98: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1e7a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1e7a9c:
    // 0x1e7a9c: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x1e7a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1e7aa0:
    // 0x1e7aa0: 0x240900a0  addiu       $t1, $zero, 0xA0
    ctx->pc = 0x1e7aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1e7aa4:
    // 0x1e7aa4: 0xc05dd88  jal         func_177620
label_1e7aa8:
    if (ctx->pc == 0x1E7AA8u) {
        ctx->pc = 0x1E7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AA4u;
        // 0x1e7aa8: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7AACu;
        goto label_1e7aac;
    }
    ctx->pc = 0x1E7AA4u;
    SET_GPR_U32(ctx, 31, 0x1E7AACu);
    ctx->pc = 0x1E7AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AA4u;
    // 0x1e7aa8: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    { ctx->pc = 0x177620; return; }
    ctx->pc = 0x1E7AACu;
label_1e7aac:
    // 0x1e7aac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e7aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e7ab0:
    // 0x1e7ab0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1e7ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1e7ab4:
    // 0x1e7ab4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1e7ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e7ab8:
    // 0x1e7ab8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_1e7abc:
    if (ctx->pc == 0x1E7ABCu) {
        ctx->pc = 0x1E7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AB8u;
        // 0x1e7abc: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7AC0u;
        goto label_1e7ac0;
    }
    ctx->pc = 0x1E7AB8u;
    {
        const bool branch_taken_0x1e7ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AB8u;
        // 0x1e7abc: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ab8) {
            ctx->pc = 0x1E79F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e79f0;
        }
    }
    ctx->pc = 0x1E7AC0u;
label_1e7ac0:
    // 0x1e7ac0: 0x240a0023  addiu       $t2, $zero, 0x23
    ctx->pc = 0x1e7ac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1e7ac4:
    // 0x1e7ac4: 0x2409005f  addiu       $t1, $zero, 0x5F
    ctx->pc = 0x1e7ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_1e7ac8:
    // 0x1e7ac8: 0xa22a0880  sb          $t2, 0x880($s1)
    ctx->pc = 0x1e7ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2176), (uint8_t)GPR_U32(ctx, 10));
label_1e7acc:
    // 0x1e7acc: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x1e7accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1e7ad0:
    // 0x1e7ad0: 0xa2290881  sb          $t1, 0x881($s1)
    ctx->pc = 0x1e7ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2177), (uint8_t)GPR_U32(ctx, 9));
label_1e7ad4:
    // 0x1e7ad4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e7ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e7ad8:
    // 0x1e7ad8: 0xa2290882  sb          $t1, 0x882($s1)
    ctx->pc = 0x1e7ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2178), (uint8_t)GPR_U32(ctx, 9));
label_1e7adc:
    // 0x1e7adc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1e7adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1e7ae0:
    // 0x1e7ae0: 0xa2280883  sb          $t0, 0x883($s1)
    ctx->pc = 0x1e7ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2179), (uint8_t)GPR_U32(ctx, 8));
label_1e7ae4:
    // 0x1e7ae4: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x1e7ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1e7ae8:
    // 0x1e7ae8: 0xae270884  sw          $a3, 0x884($s1)
    ctx->pc = 0x1e7ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2180), GPR_U32(ctx, 7));
label_1e7aec:
    // 0x1e7aec: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1e7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1e7af0:
    // 0x1e7af0: 0xa2290920  sb          $t1, 0x920($s1)
    ctx->pc = 0x1e7af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2336), (uint8_t)GPR_U32(ctx, 9));
label_1e7af4:
    // 0x1e7af4: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1e7af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1e7af8:
    // 0x1e7af8: 0xa2260921  sb          $a2, 0x921($s1)
    ctx->pc = 0x1e7af8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2337), (uint8_t)GPR_U32(ctx, 6));
label_1e7afc:
    // 0x1e7afc: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x1e7afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1e7b00:
    // 0x1e7b00: 0xa2250922  sb          $a1, 0x922($s1)
    ctx->pc = 0x1e7b00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2338), (uint8_t)GPR_U32(ctx, 5));
label_1e7b04:
    // 0x1e7b04: 0xa2280923  sb          $t0, 0x923($s1)
    ctx->pc = 0x1e7b04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2339), (uint8_t)GPR_U32(ctx, 8));
label_1e7b08:
    // 0x1e7b08: 0xae270924  sw          $a3, 0x924($s1)
    ctx->pc = 0x1e7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2340), GPR_U32(ctx, 7));
label_1e7b0c:
    // 0x1e7b0c: 0xa22909c0  sb          $t1, 0x9C0($s1)
    ctx->pc = 0x1e7b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2496), (uint8_t)GPR_U32(ctx, 9));
label_1e7b10:
    // 0x1e7b10: 0xa22309c1  sb          $v1, 0x9C1($s1)
    ctx->pc = 0x1e7b10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2497), (uint8_t)GPR_U32(ctx, 3));
label_1e7b14:
    // 0x1e7b14: 0xa22609c2  sb          $a2, 0x9C2($s1)
    ctx->pc = 0x1e7b14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2498), (uint8_t)GPR_U32(ctx, 6));
label_1e7b18:
    // 0x1e7b18: 0xa22809c3  sb          $t0, 0x9C3($s1)
    ctx->pc = 0x1e7b18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2499), (uint8_t)GPR_U32(ctx, 8));
label_1e7b1c:
    // 0x1e7b1c: 0xae2709c4  sw          $a3, 0x9C4($s1)
    ctx->pc = 0x1e7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2500), GPR_U32(ctx, 7));
label_1e7b20:
    // 0x1e7b20: 0xa22a0a60  sb          $t2, 0xA60($s1)
    ctx->pc = 0x1e7b20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2656), (uint8_t)GPR_U32(ctx, 10));
label_1e7b24:
    // 0x1e7b24: 0xa2290a61  sb          $t1, 0xA61($s1)
    ctx->pc = 0x1e7b24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2657), (uint8_t)GPR_U32(ctx, 9));
label_1e7b28:
    // 0x1e7b28: 0xa2220a62  sb          $v0, 0xA62($s1)
    ctx->pc = 0x1e7b28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2658), (uint8_t)GPR_U32(ctx, 2));
label_1e7b2c:
    // 0x1e7b2c: 0xa2280a63  sb          $t0, 0xA63($s1)
    ctx->pc = 0x1e7b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2659), (uint8_t)GPR_U32(ctx, 8));
label_1e7b30:
    // 0x1e7b30: 0xc070834  jal         func_1C20D0
label_1e7b34:
    if (ctx->pc == 0x1E7B34u) {
        ctx->pc = 0x1E7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B30u;
        // 0x1e7b34: 0xae270a64  sw          $a3, 0xA64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2660), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7B38u;
        goto label_1e7b38;
    }
    ctx->pc = 0x1E7B30u;
    SET_GPR_U32(ctx, 31, 0x1E7B38u);
    ctx->pc = 0x1E7B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B30u;
    // 0x1e7b34: 0xae270a64  sw          $a3, 0xA64($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2660), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1E7B38u;
label_1e7b38:
    // 0x1e7b38: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1e7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e7b3c:
    // 0x1e7b3c: 0x26240a90  addiu       $a0, $s1, 0xA90
    ctx->pc = 0x1e7b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2704));
label_1e7b40:
    // 0x1e7b40: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1e7b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1e7b44:
    // 0x1e7b44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e7b48:
    // 0x1e7b48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e7b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7b4c:
    // 0x1e7b4c: 0x240600c4  addiu       $a2, $zero, 0xC4
    ctx->pc = 0x1e7b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_1e7b50:
    // 0x1e7b50: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e7b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e7b54:
    // 0x1e7b54: 0x240700d8  addiu       $a3, $zero, 0xD8
    ctx->pc = 0x1e7b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_1e7b58:
    // 0x1e7b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7b5c:
    // 0x1e7b5c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e7b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e7b60:
    // 0x1e7b60: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1e7b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1e7b64:
    // 0x1e7b64: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1e7b68:
    // 0x1e7b68: 0x240902c8  addiu       $t1, $zero, 0x2C8
    ctx->pc = 0x1e7b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 712));
label_1e7b6c:
    // 0x1e7b6c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1e7b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1e7b70:
    // 0x1e7b70: 0xc05de30  jal         func_1778C0
label_1e7b74:
    if (ctx->pc == 0x1E7B74u) {
        ctx->pc = 0x1E7B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B70u;
        // 0x1e7b74: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7B78u;
        goto label_1e7b78;
    }
    ctx->pc = 0x1E7B70u;
    SET_GPR_U32(ctx, 31, 0x1E7B78u);
    ctx->pc = 0x1E7B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B70u;
    // 0x1e7b74: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1E7B78u;
label_1e7b78:
    // 0x1e7b78: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1e7b78u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1e7b7c:
    // 0x1e7b7c: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x1e7b7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e7b80:
    // 0x1e7b80: 0x1460ff52  bnez        $v1, . + 4 + (-0xAE << 2)
label_1e7b84:
    if (ctx->pc == 0x1E7B84u) {
        ctx->pc = 0x1E7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B80u;
        // 0x1e7b84: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7B88u;
        goto label_1e7b88;
    }
    ctx->pc = 0x1E7B80u;
    {
        const bool branch_taken_0x1e7b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B80u;
        // 0x1e7b84: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b80) {
            ctx->pc = 0x1E78CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e78cc; return; }
        }
    }
    ctx->pc = 0x1E7B88u;
label_1e7b88:
    // 0x1e7b88: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1e7b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1e7b8c:
    // 0x1e7b8c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1e7b8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e7b90:
    // 0x1e7b90: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1e7b90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e7b94:
    // 0x1e7b94: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1e7b94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e7b98:
    // 0x1e7b98: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e7b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e7b9c:
    // 0x1e7b9c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e7b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e7ba0:
    // 0x1e7ba0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e7ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e7ba4:
    // 0x1e7ba4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e7ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e7ba8:
    // 0x1e7ba8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e7ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e7bac:
    // 0x1e7bac: 0x3e00008  jr          $ra
label_1e7bb0:
    if (ctx->pc == 0x1E7BB0u) {
        ctx->pc = 0x1E7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BACu;
        // 0x1e7bb0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7BB4u;
        goto label_1e7bb4;
    }
    ctx->pc = 0x1E7BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BACu;
        // 0x1e7bb0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7BB4u;
label_1e7bb4:
    // 0x1e7bb4: 0x0  nop
    ctx->pc = 0x1e7bb4u;
    // NOP
label_1e7bb8:
    // 0x1e7bb8: 0x0  nop
    ctx->pc = 0x1e7bb8u;
    // NOP
label_1e7bbc:
    // 0x1e7bbc: 0x0  nop
    ctx->pc = 0x1e7bbcu;
    // NOP
label_1e7bc0:
    // 0x1e7bc0: 0x10a0008c  beqz        $a1, . + 4 + (0x8C << 2)
label_1e7bc4:
    if (ctx->pc == 0x1E7BC4u) {
        ctx->pc = 0x1E7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BC0u;
        // 0x1e7bc4: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7BC8u;
        goto label_1e7bc8;
    }
    ctx->pc = 0x1E7BC0u;
    {
        const bool branch_taken_0x1e7bc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BC0u;
        // 0x1e7bc4: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bc0) {
            ctx->pc = 0x1E7DF4u;
            goto label_1e7df4;
        }
    }
    ctx->pc = 0x1E7BC8u;
label_1e7bc8:
    // 0x1e7bc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e7bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7bcc:
    // 0x1e7bcc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e7bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e7bd0:
    // 0x1e7bd0: 0x24633120  addiu       $v1, $v1, 0x3120
    ctx->pc = 0x1e7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12576));
label_1e7bd4:
    // 0x1e7bd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e7bd8:
    // 0x1e7bd8: 0xaf878df8  sw          $a3, -0x7208($gp)
    ctx->pc = 0x1e7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 7));
label_1e7bdc:
    // 0x1e7bdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e7bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e7be0:
    // 0x1e7be0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1e7be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1e7be4:
    // 0x1e7be4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1e7be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1e7be8:
    // 0x1e7be8: 0x24a53b80  addiu       $a1, $a1, 0x3B80
    ctx->pc = 0x1e7be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15232));
label_1e7bec:
    // 0x1e7bec: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x1e7becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
label_1e7bf0:
    // 0x1e7bf0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x1e7bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e7bf4:
    // 0x1e7bf4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1e7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e7bf8:
    // 0x1e7bf8: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x1e7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1e7bfc:
    // 0x1e7bfc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1e7bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1e7c00:
    // 0x1e7c00: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1e7c00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1e7c04:
    // 0x1e7c04: 0xaf858de8  sw          $a1, -0x7218($gp)
    ctx->pc = 0x1e7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938088), GPR_U32(ctx, 5));
label_1e7c08:
    // 0x1e7c08: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x1e7c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7c0c:
    // 0x1e7c0c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1e7c10:
    if (ctx->pc == 0x1E7C10u) {
        ctx->pc = 0x1E7C14u;
        goto label_1e7c14;
    }
    ctx->pc = 0x1E7C0Cu;
    {
        const bool branch_taken_0x1e7c0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c0c) {
            ctx->pc = 0x1E7C28u;
            goto label_1e7c28;
        }
    }
    ctx->pc = 0x1E7C14u;
label_1e7c14:
    // 0x1e7c14: 0x10a70004  beq         $a1, $a3, . + 4 + (0x4 << 2)
label_1e7c18:
    if (ctx->pc == 0x1E7C18u) {
        ctx->pc = 0x1E7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C14u;
        // 0x1e7c18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C1Cu;
        goto label_1e7c1c;
    }
    ctx->pc = 0x1E7C14u;
    {
        const bool branch_taken_0x1e7c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1E7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C14u;
        // 0x1e7c18: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c14) {
            ctx->pc = 0x1E7C28u;
            goto label_1e7c28;
        }
    }
    ctx->pc = 0x1E7C1Cu;
label_1e7c1c:
    // 0x1e7c1c: 0x10a40002  beq         $a1, $a0, . + 4 + (0x2 << 2)
label_1e7c20:
    if (ctx->pc == 0x1E7C20u) {
        ctx->pc = 0x1E7C24u;
        goto label_1e7c24;
    }
    ctx->pc = 0x1E7C1Cu;
    {
        const bool branch_taken_0x1e7c1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e7c1c) {
            ctx->pc = 0x1E7C28u;
            goto label_1e7c28;
        }
    }
    ctx->pc = 0x1E7C24u;
label_1e7c24:
    // 0x1e7c24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e7c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e7c28:
    // 0x1e7c28: 0xaf858dec  sw          $a1, -0x7214($gp)
    ctx->pc = 0x1e7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938092), GPR_U32(ctx, 5));
label_1e7c2c:
    // 0x1e7c2c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1e7c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e7c30:
    // 0x1e7c30: 0x8f858e98  lw          $a1, -0x7168($gp)
    ctx->pc = 0x1e7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938264)));
label_1e7c34:
    // 0x1e7c34: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
label_1e7c38:
    if (ctx->pc == 0x1E7C38u) {
        ctx->pc = 0x1E7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C34u;
        // 0x1e7c38: 0x33040  sll         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C3Cu;
        goto label_1e7c3c;
    }
    ctx->pc = 0x1E7C34u;
    {
        const bool branch_taken_0x1e7c34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1E7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C34u;
        // 0x1e7c38: 0x33040  sll         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c34) {
            ctx->pc = 0x1E7C58u;
            goto label_1e7c58;
        }
    }
    ctx->pc = 0x1E7C3Cu;
label_1e7c3c:
    // 0x1e7c3c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x1e7c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e7c40:
    // 0x1e7c40: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1e7c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_1e7c44:
    // 0x1e7c44: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1e7c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1e7c48:
    // 0x1e7c48: 0x248418d0  addiu       $a0, $a0, 0x18D0
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6352));
label_1e7c4c:
    // 0x1e7c4c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1e7c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1e7c50:
    // 0x1e7c50: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e7c54:
    if (ctx->pc == 0x1E7C54u) {
        ctx->pc = 0x1E7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C50u;
        // 0x1e7c54: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C58u;
        goto label_1e7c58;
    }
    ctx->pc = 0x1E7C50u;
    {
        const bool branch_taken_0x1e7c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C50u;
        // 0x1e7c54: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c50) {
            ctx->pc = 0x1E7C78u;
            goto label_1e7c78;
        }
    }
    ctx->pc = 0x1E7C58u;
label_1e7c58:
    // 0x1e7c58: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1e7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_1e7c5c:
    // 0x1e7c5c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1e7c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1e7c60:
    // 0x1e7c60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e7c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1e7c64:
    // 0x1e7c64: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_1e7c68:
    // 0x1e7c68: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1e7c68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1e7c6c:
    // 0x1e7c6c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1e7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1e7c70:
    // 0x1e7c70: 0x342135e8  ori         $at, $at, 0x35E8
    ctx->pc = 0x1e7c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13800);
label_1e7c74:
    // 0x1e7c74: 0x812021  addu        $a0, $a0, $at
    ctx->pc = 0x1e7c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1e7c78:
    // 0x1e7c78: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x1e7c78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7c7c:
    // 0x1e7c7c: 0x28e100fb  slti        $at, $a3, 0xFB
    ctx->pc = 0x1e7c7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)251) ? 1 : 0);
label_1e7c80:
    // 0x1e7c80: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1e7c84:
    if (ctx->pc == 0x1E7C84u) {
        ctx->pc = 0x1E7C88u;
        goto label_1e7c88;
    }
    ctx->pc = 0x1E7C80u;
    {
        const bool branch_taken_0x1e7c80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c80) {
            ctx->pc = 0x1E7C8Cu;
            goto label_1e7c8c;
        }
    }
    ctx->pc = 0x1E7C88u;
label_1e7c88:
    // 0x1e7c88: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x1e7c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1e7c8c:
    // 0x1e7c8c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1e7c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1e7c90:
    // 0x1e7c90: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7c94:
    // 0x1e7c94: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1e7c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1e7c98:
    // 0x1e7c98: 0x3c061062  lui         $a2, 0x1062
    ctx->pc = 0x1e7c98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4194 << 16));
label_1e7c9c:
    // 0x1e7c9c: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x1e7c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e7ca0:
    // 0x1e7ca0: 0x34c64dd3  ori         $a2, $a2, 0x4DD3
    ctx->pc = 0x1e7ca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19923);
label_1e7ca4:
    // 0x1e7ca4: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x1e7ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7ca8:
    // 0x1e7ca8: 0x0  nop
    ctx->pc = 0x1e7ca8u;
    // NOP
label_1e7cac:
    // 0x1e7cac: 0x0  nop
    ctx->pc = 0x1e7cacu;
    // NOP
label_1e7cb0:
    // 0x1e7cb0: 0x3010  mfhi        $a2
    ctx->pc = 0x1e7cb0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1e7cb4:
    // 0x1e7cb4: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1e7cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1e7cb8:
    // 0x1e7cb8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1e7cb8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_1e7cbc:
    // 0x1e7cbc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1e7cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1e7cc0:
    // 0x1e7cc0: 0xac262e20  sw          $a2, 0x2E20($at)
    ctx->pc = 0x1e7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11808), GPR_U32(ctx, 6));
label_1e7cc4:
    // 0x1e7cc4: 0x84890002  lh          $t1, 0x2($a0)
    ctx->pc = 0x1e7cc4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1e7cc8:
    // 0x1e7cc8: 0x292100fb  slti        $at, $t1, 0xFB
    ctx->pc = 0x1e7cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)251) ? 1 : 0);
label_1e7ccc:
    // 0x1e7ccc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1e7cd0:
    if (ctx->pc == 0x1E7CD0u) {
        ctx->pc = 0x1E7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CCCu;
        // 0x1e7cd0: 0x240800fa  addiu       $t0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7CD4u;
        goto label_1e7cd4;
    }
    ctx->pc = 0x1E7CCCu;
    {
        const bool branch_taken_0x1e7ccc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CCCu;
        // 0x1e7cd0: 0x240800fa  addiu       $t0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ccc) {
            ctx->pc = 0x1E7CD8u;
            goto label_1e7cd8;
        }
    }
    ctx->pc = 0x1E7CD4u;
label_1e7cd4:
    // 0x1e7cd4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1e7cd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e7cd8:
    // 0x1e7cd8: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x1e7cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1e7cdc:
    // 0x1e7cdc: 0x3c061062  lui         $a2, 0x1062
    ctx->pc = 0x1e7cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4194 << 16));
label_1e7ce0:
    // 0x1e7ce0: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1e7ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1e7ce4:
    // 0x1e7ce4: 0x34c64dd3  ori         $a2, $a2, 0x4DD3
    ctx->pc = 0x1e7ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19923);
label_1e7ce8:
    // 0x1e7ce8: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x1e7ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e7cec:
    // 0x1e7cec: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7cf0:
    // 0x1e7cf0: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x1e7cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7cf4:
    // 0x1e7cf4: 0x0  nop
    ctx->pc = 0x1e7cf4u;
    // NOP
label_1e7cf8:
    // 0x1e7cf8: 0x0  nop
    ctx->pc = 0x1e7cf8u;
    // NOP
label_1e7cfc:
    // 0x1e7cfc: 0x3010  mfhi        $a2
    ctx->pc = 0x1e7cfcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1e7d00:
    // 0x1e7d00: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1e7d00u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1e7d04:
    // 0x1e7d04: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1e7d04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_1e7d08:
    // 0x1e7d08: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1e7d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1e7d0c:
    // 0x1e7d0c: 0xac262e24  sw          $a2, 0x2E24($at)
    ctx->pc = 0x1e7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11812), GPR_U32(ctx, 6));
label_1e7d10:
    // 0x1e7d10: 0x90870004  lbu         $a3, 0x4($a0)
    ctx->pc = 0x1e7d10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1e7d14:
    // 0x1e7d14: 0x28e10097  slti        $at, $a3, 0x97
    ctx->pc = 0x1e7d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)151) ? 1 : 0);
label_1e7d18:
    // 0x1e7d18: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1e7d1c:
    if (ctx->pc == 0x1E7D1Cu) {
        ctx->pc = 0x1E7D20u;
        goto label_1e7d20;
    }
    ctx->pc = 0x1E7D18u;
    {
        const bool branch_taken_0x1e7d18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d18) {
            ctx->pc = 0x1E7D24u;
            goto label_1e7d24;
        }
    }
    ctx->pc = 0x1E7D20u;
label_1e7d20:
    // 0x1e7d20: 0x24070096  addiu       $a3, $zero, 0x96
    ctx->pc = 0x1e7d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1e7d24:
    // 0x1e7d24: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1e7d24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1e7d28:
    // 0x1e7d28: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7d2c:
    // 0x1e7d2c: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1e7d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1e7d30:
    // 0x1e7d30: 0x3c061b4e  lui         $a2, 0x1B4E
    ctx->pc = 0x1e7d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6990 << 16));
label_1e7d34:
    // 0x1e7d34: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x1e7d34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e7d38:
    // 0x1e7d38: 0x34c681b5  ori         $a2, $a2, 0x81B5
    ctx->pc = 0x1e7d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33205);
label_1e7d3c:
    // 0x1e7d3c: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x1e7d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7d40:
    // 0x1e7d40: 0x0  nop
    ctx->pc = 0x1e7d40u;
    // NOP
label_1e7d44:
    // 0x1e7d44: 0x0  nop
    ctx->pc = 0x1e7d44u;
    // NOP
label_1e7d48:
    // 0x1e7d48: 0x3010  mfhi        $a2
    ctx->pc = 0x1e7d48u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1e7d4c:
    // 0x1e7d4c: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1e7d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1e7d50:
    // 0x1e7d50: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1e7d50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_1e7d54:
    // 0x1e7d54: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1e7d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1e7d58:
    // 0x1e7d58: 0xac262e28  sw          $a2, 0x2E28($at)
    ctx->pc = 0x1e7d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11816), GPR_U32(ctx, 6));
label_1e7d5c:
    // 0x1e7d5c: 0x90860005  lbu         $a2, 0x5($a0)
    ctx->pc = 0x1e7d5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_1e7d60:
    // 0x1e7d60: 0x28c10097  slti        $at, $a2, 0x97
    ctx->pc = 0x1e7d60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)151) ? 1 : 0);
label_1e7d64:
    // 0x1e7d64: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1e7d68:
    if (ctx->pc == 0x1E7D68u) {
        ctx->pc = 0x1E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D64u;
        // 0x1e7d68: 0x24080096  addiu       $t0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7D6Cu;
        goto label_1e7d6c;
    }
    ctx->pc = 0x1E7D64u;
    {
        const bool branch_taken_0x1e7d64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D64u;
        // 0x1e7d68: 0x24080096  addiu       $t0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d64) {
            ctx->pc = 0x1E7D70u;
            goto label_1e7d70;
        }
    }
    ctx->pc = 0x1E7D6Cu;
label_1e7d6c:
    // 0x1e7d6c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1e7d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e7d70:
    // 0x1e7d70: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1e7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e7d74:
    // 0x1e7d74: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7d78:
    // 0x1e7d78: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1e7d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1e7d7c:
    // 0x1e7d7c: 0xaf808df4  sw          $zero, -0x720C($gp)
    ctx->pc = 0x1e7d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 0));
label_1e7d80:
    // 0x1e7d80: 0x3c041b4e  lui         $a0, 0x1B4E
    ctx->pc = 0x1e7d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6990 << 16));
label_1e7d84:
    // 0x1e7d84: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1e7d84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1e7d88:
    // 0x1e7d88: 0x348481b5  ori         $a0, $a0, 0x81B5
    ctx->pc = 0x1e7d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33205);
label_1e7d8c:
    // 0x1e7d8c: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x1e7d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1e7d90:
    // 0x1e7d90: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x1e7d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e7d94:
    // 0x1e7d94: 0x0  nop
    ctx->pc = 0x1e7d94u;
    // NOP
label_1e7d98:
    // 0x1e7d98: 0x0  nop
    ctx->pc = 0x1e7d98u;
    // NOP
label_1e7d9c:
    // 0x1e7d9c: 0x3010  mfhi        $a2
    ctx->pc = 0x1e7d9cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1e7da0:
    // 0x1e7da0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1e7da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e7da4:
    // 0x1e7da4: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1e7da4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_1e7da8:
    // 0x1e7da8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1e7da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1e7dac:
    // 0x1e7dac: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
label_1e7db0:
    if (ctx->pc == 0x1E7DB0u) {
        ctx->pc = 0x1E7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DACu;
        // 0x1e7db0: 0xac262e2c  sw          $a2, 0x2E2C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11820), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7DB4u;
        goto label_1e7db4;
    }
    ctx->pc = 0x1E7DACu;
    {
        const bool branch_taken_0x1e7dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E7DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DACu;
        // 0x1e7db0: 0xac262e2c  sw          $a2, 0x2E2C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11820), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dac) {
            ctx->pc = 0x1E7DC0u;
            goto label_1e7dc0;
        }
    }
    ctx->pc = 0x1E7DB4u;
label_1e7db4:
    // 0x1e7db4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1e7db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e7db8:
    // 0x1e7db8: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
label_1e7dbc:
    if (ctx->pc == 0x1E7DBCu) {
        ctx->pc = 0x1E7DC0u;
        goto label_1e7dc0;
    }
    ctx->pc = 0x1E7DB8u;
    {
        const bool branch_taken_0x1e7db8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e7db8) {
            ctx->pc = 0x1E7DF8u;
            goto label_1e7df8;
        }
    }
    ctx->pc = 0x1E7DC0u;
label_1e7dc0:
    // 0x1e7dc0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1e7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e7dc4:
    // 0x1e7dc4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1e7dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_1e7dc8:
    // 0x1e7dc8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1e7dcc:
    // 0x1e7dcc: 0x2484ff8c  addiu       $a0, $a0, -0x74
    ctx->pc = 0x1e7dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967180));
label_1e7dd0:
    // 0x1e7dd0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1e7dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1e7dd4:
    // 0x1e7dd4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e7dd8:
    // 0x1e7dd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e7ddc:
    // 0x1e7ddc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e7ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7de0:
    // 0x1e7de0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1e7de4:
    if (ctx->pc == 0x1E7DE4u) {
        ctx->pc = 0x1E7DE8u;
        goto label_1e7de8;
    }
    ctx->pc = 0x1E7DE0u;
    {
        const bool branch_taken_0x1e7de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7de0) {
            ctx->pc = 0x1E7DF8u;
            goto label_1e7df8;
        }
    }
    ctx->pc = 0x1E7DE8u;
label_1e7de8:
    // 0x1e7de8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7dec:
    // 0x1e7dec: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e7df0:
    if (ctx->pc == 0x1E7DF0u) {
        ctx->pc = 0x1E7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DECu;
        // 0x1e7df0: 0xaf838df4  sw          $v1, -0x720C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7DF4u;
        goto label_1e7df4;
    }
    ctx->pc = 0x1E7DECu;
    {
        const bool branch_taken_0x1e7dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DECu;
        // 0x1e7df0: 0xaf838df4  sw          $v1, -0x720C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dec) {
            ctx->pc = 0x1E7DF8u;
            goto label_1e7df8;
        }
    }
    ctx->pc = 0x1E7DF4u;
label_1e7df4:
    // 0x1e7df4: 0xaf808df8  sw          $zero, -0x7208($gp)
    ctx->pc = 0x1e7df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
label_1e7df8:
    // 0x1e7df8: 0x3e00008  jr          $ra
label_1e7dfc:
    if (ctx->pc == 0x1E7DFCu) {
        ctx->pc = 0x1E7E00u;
        goto label_1e7e00;
    }
    ctx->pc = 0x1E7DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7E00u;
label_1e7e00:
    // 0x1e7e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e7e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e7e04:
    // 0x1e7e04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e7e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e7e08:
    // 0x1e7e08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e7e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e7e0c:
    // 0x1e7e0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e7e10:
    // 0x1e7e10: 0x8f838df8  lw          $v1, -0x7208($gp)
    ctx->pc = 0x1e7e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
label_1e7e14:
    // 0x1e7e14: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_1e7e18:
    if (ctx->pc == 0x1E7E18u) {
        ctx->pc = 0x1E7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E14u;
        // 0x1e7e18: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7E1Cu;
        goto label_1e7e1c;
    }
    ctx->pc = 0x1E7E14u;
    {
        const bool branch_taken_0x1e7e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E14u;
        // 0x1e7e18: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e14) {
            ctx->pc = 0x1E8010u;
            goto label_1e8010;
        }
    }
    ctx->pc = 0x1E7E1Cu;
label_1e7e1c:
    // 0x1e7e1c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e7e20:
    // 0x1e7e20: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1e7e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e7e24:
    // 0x1e7e24: 0x27828e00  addiu       $v0, $gp, -0x7200
    ctx->pc = 0x1e7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938112));
label_1e7e28:
    // 0x1e7e28: 0x8f868dec  lw          $a2, -0x7214($gp)
    ctx->pc = 0x1e7e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938092)));
label_1e7e2c:
    // 0x1e7e2c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e7e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e7e30:
    // 0x1e7e30: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e7e34:
    // 0x1e7e34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7e38:
    // 0x1e7e38: 0x28c10003  slti        $at, $a2, 0x3
    ctx->pc = 0x1e7e38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e7e3c:
    // 0x1e7e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7e40:
    // 0x1e7e40: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1e7e40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e7e44:
    // 0x1e7e44: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1e7e48:
    if (ctx->pc == 0x1E7E48u) {
        ctx->pc = 0x1E7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E44u;
        // 0x1e7e48: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7E4Cu;
        goto label_1e7e4c;
    }
    ctx->pc = 0x1E7E44u;
    {
        const bool branch_taken_0x1e7e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E44u;
        // 0x1e7e48: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e44) {
            ctx->pc = 0x1E7E70u;
            goto label_1e7e70;
        }
    }
    ctx->pc = 0x1E7E4Cu;
label_1e7e4c:
    // 0x1e7e4c: 0xc070834  jal         func_1C20D0
label_1e7e50:
    if (ctx->pc == 0x1E7E50u) {
        ctx->pc = 0x1E7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E4Cu;
        // 0x1e7e50: 0x24c4001b  addiu       $a0, $a2, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7E54u;
        goto label_1e7e54;
    }
    ctx->pc = 0x1E7E4Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E54u);
    ctx->pc = 0x1E7E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E4Cu;
    // 0x1e7e50: 0x24c4001b  addiu       $a0, $a2, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1E7E54u;
label_1e7e54:
    // 0x1e7e54: 0xfe0203e0  sd          $v0, 0x3E0($s0)
    ctx->pc = 0x1e7e54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 992), GPR_U64(ctx, 2));
label_1e7e58:
    // 0x1e7e58: 0x8f838dec  lw          $v1, -0x7214($gp)
    ctx->pc = 0x1e7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938092)));
label_1e7e5c:
    // 0x1e7e5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e7e60:
    // 0x1e7e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7e64:
    // 0x1e7e64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e7e68:
    // 0x1e7e68: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e7e6c:
    if (ctx->pc == 0x1E7E6Cu) {
        ctx->pc = 0x1E7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E68u;
        // 0x1e7e6c: 0x24450320  addiu       $a1, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7E70u;
        goto label_1e7e70;
    }
    ctx->pc = 0x1E7E68u;
    {
        const bool branch_taken_0x1e7e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E68u;
        // 0x1e7e6c: 0x24450320  addiu       $a1, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e68) {
            ctx->pc = 0x1E7E80u;
            goto label_1e7e80;
        }
    }
    ctx->pc = 0x1E7E70u;
label_1e7e70:
    // 0x1e7e70: 0xc070834  jal         func_1C20D0
label_1e7e74:
    if (ctx->pc == 0x1E7E74u) {
        ctx->pc = 0x1E7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E70u;
        // 0x1e7e74: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7E78u;
        goto label_1e7e78;
    }
    ctx->pc = 0x1E7E70u;
    SET_GPR_U32(ctx, 31, 0x1E7E78u);
    ctx->pc = 0x1E7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7E70u;
    // 0x1e7e74: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1E7E78u;
label_1e7e78:
    // 0x1e7e78: 0xfe0203e0  sd          $v0, 0x3E0($s0)
    ctx->pc = 0x1e7e78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 992), GPR_U64(ctx, 2));
label_1e7e7c:
    // 0x1e7e7c: 0x240503b0  addiu       $a1, $zero, 0x3B0
    ctx->pc = 0x1e7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
label_1e7e80:
    // 0x1e7e80: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1e7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1e7e84:
    // 0x1e7e84: 0x24030a08  addiu       $v1, $zero, 0xA08
    ctx->pc = 0x1e7e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2568));
label_1e7e88:
    // 0x1e7e88: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e7e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1e7e8c:
    // 0x1e7e8c: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x1e7e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1e7e90:
    // 0x1e7e90: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x1e7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_1e7e94:
    // 0x1e7e94: 0xa60403f8  sh          $a0, 0x3F8($s0)
    ctx->pc = 0x1e7e94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1016), (uint16_t)GPR_U32(ctx, 4));
label_1e7e98:
    // 0x1e7e98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e7e9c:
    // 0x1e7e9c: 0xa60303fa  sh          $v1, 0x3FA($s0)
    ctx->pc = 0x1e7e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1018), (uint16_t)GPR_U32(ctx, 3));
label_1e7ea0:
    // 0x1e7ea0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1e7ea4:
    // 0x1e7ea4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1e7ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1e7ea8:
    // 0x1e7ea8: 0xa6020408  sh          $v0, 0x408($s0)
    ctx->pc = 0x1e7ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1032), (uint16_t)GPR_U32(ctx, 2));
label_1e7eac:
    // 0x1e7eac: 0x240900c8  addiu       $t1, $zero, 0xC8
    ctx->pc = 0x1e7eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1e7eb0:
    // 0x1e7eb0: 0x24020d08  addiu       $v0, $zero, 0xD08
    ctx->pc = 0x1e7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3336));
label_1e7eb4:
    // 0x1e7eb4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1e7eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e7eb8:
    // 0x1e7eb8: 0xa602040a  sh          $v0, 0x40A($s0)
    ctx->pc = 0x1e7eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1034), (uint16_t)GPR_U32(ctx, 2));
label_1e7ebc:
    // 0x1e7ebc: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1e7ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e7ec0:
    // 0x1e7ec0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1e7ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1e7ec4:
    // 0x1e7ec4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e7ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e7ec8:
    // 0x1e7ec8: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x1e7ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
label_1e7ecc:
    // 0x1e7ecc: 0x24a2002f  addiu       $v0, $a1, 0x2F
    ctx->pc = 0x1e7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
label_1e7ed0:
    // 0x1e7ed0: 0x3464000a  ori         $a0, $v1, 0xA
    ctx->pc = 0x1e7ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_1e7ed4:
    // 0x1e7ed4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e7ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1e7ed8:
    // 0x1e7ed8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e7ed8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e7edc:
    // 0x1e7edc: 0x21bb8  dsll        $v1, $v0, 14
    ctx->pc = 0x1e7edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 14);
label_1e7ee0:
    // 0x1e7ee0: 0x2402033c  addiu       $v0, $zero, 0x33C
    ctx->pc = 0x1e7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 828));
label_1e7ee4:
    // 0x1e7ee4: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x1e7ee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1e7ee8:
    // 0x1e7ee8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1e7ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1e7eec:
    // 0x1e7eec: 0x26030420  addiu       $v1, $s0, 0x420
    ctx->pc = 0x1e7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
label_1e7ef0:
    // 0x1e7ef0: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x1e7ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_1e7ef4:
    // 0x1e7ef4: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x1e7ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
label_1e7ef8:
    // 0x1e7ef8: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1e7ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1e7efc:
    // 0x1e7efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7f00:
    // 0x1e7f00: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1e7f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1e7f04:
    // 0x1e7f04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e7f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e7f08:
    // 0x1e7f08: 0xfe0503c0  sd          $a1, 0x3C0($s0)
    ctx->pc = 0x1e7f08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 960), GPR_U64(ctx, 5));
label_1e7f0c:
    // 0x1e7f0c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1e7f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1e7f10:
    // 0x1e7f10: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e7f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e7f14:
    // 0x1e7f14: 0x8f858de8  lw          $a1, -0x7218($gp)
    ctx->pc = 0x1e7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
label_1e7f18:
    // 0x1e7f18: 0xc054c60  jal         func_153180
label_1e7f1c:
    if (ctx->pc == 0x1E7F1Cu) {
        ctx->pc = 0x1E7F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F18u;
        // 0x1e7f1c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7F20u;
        goto label_1e7f20;
    }
    ctx->pc = 0x1E7F18u;
    SET_GPR_U32(ctx, 31, 0x1E7F20u);
    ctx->pc = 0x1E7F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7F18u;
    // 0x1e7f1c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    { ctx->pc = 0x153180; return; }
    ctx->pc = 0x1E7F20u;
label_1e7f20:
    // 0x1e7f20: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7f24:
    // 0x1e7f24: 0x84222e20  lh          $v0, 0x2E20($at)
    ctx->pc = 0x1e7f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 11808)));
label_1e7f28:
    // 0x1e7f28: 0x24420154  addiu       $v0, $v0, 0x154
    ctx->pc = 0x1e7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1e7f2c:
    // 0x1e7f2c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7f30:
    // 0x1e7f30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e7f34:
    // 0x1e7f34: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e7f38:
    // 0x1e7f38: 0xa60208a0  sh          $v0, 0x8A0($s0)
    ctx->pc = 0x1e7f38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2208), (uint16_t)GPR_U32(ctx, 2));
label_1e7f3c:
    // 0x1e7f3c: 0x84222e24  lh          $v0, 0x2E24($at)
    ctx->pc = 0x1e7f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 11812)));
label_1e7f40:
    // 0x1e7f40: 0x24420154  addiu       $v0, $v0, 0x154
    ctx->pc = 0x1e7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1e7f44:
    // 0x1e7f44: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7f48:
    // 0x1e7f48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e7f4c:
    // 0x1e7f4c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e7f50:
    // 0x1e7f50: 0xa6020940  sh          $v0, 0x940($s0)
    ctx->pc = 0x1e7f50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2368), (uint16_t)GPR_U32(ctx, 2));
label_1e7f54:
    // 0x1e7f54: 0x84222e28  lh          $v0, 0x2E28($at)
    ctx->pc = 0x1e7f54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 11816)));
label_1e7f58:
    // 0x1e7f58: 0x24420154  addiu       $v0, $v0, 0x154
    ctx->pc = 0x1e7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1e7f5c:
    // 0x1e7f5c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e7f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e7f60:
    // 0x1e7f60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e7f64:
    // 0x1e7f64: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e7f68:
    // 0x1e7f68: 0xa60209e0  sh          $v0, 0x9E0($s0)
    ctx->pc = 0x1e7f68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2528), (uint16_t)GPR_U32(ctx, 2));
label_1e7f6c:
    // 0x1e7f6c: 0x84222e2c  lh          $v0, 0x2E2C($at)
    ctx->pc = 0x1e7f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 11820)));
label_1e7f70:
    // 0x1e7f70: 0x24420154  addiu       $v0, $v0, 0x154
    ctx->pc = 0x1e7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 340));
label_1e7f74:
    // 0x1e7f74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e7f78:
    // 0x1e7f78: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e7f7c:
    // 0x1e7f7c: 0xa6020a80  sh          $v0, 0xA80($s0)
    ctx->pc = 0x1e7f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2688), (uint16_t)GPR_U32(ctx, 2));
label_1e7f80:
    // 0x1e7f80: 0x8f828df4  lw          $v0, -0x720C($gp)
    ctx->pc = 0x1e7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938100)));
label_1e7f84:
    // 0x1e7f84: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1e7f88:
    if (ctx->pc == 0x1E7F88u) {
        ctx->pc = 0x1E7F8Cu;
        goto label_1e7f8c;
    }
    ctx->pc = 0x1E7F84u;
    {
        const bool branch_taken_0x1e7f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f84) {
            ctx->pc = 0x1E7FF0u;
            goto label_1e7ff0;
        }
    }
    ctx->pc = 0x1E7F8Cu;
label_1e7f8c:
    // 0x1e7f8c: 0x8f828df0  lw          $v0, -0x7210($gp)
    ctx->pc = 0x1e7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938096)));
label_1e7f90:
    // 0x1e7f90: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1e7f94:
    if (ctx->pc == 0x1E7F94u) {
        ctx->pc = 0x1E7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F90u;
        // 0x1e7f94: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7F98u;
        goto label_1e7f98;
    }
    ctx->pc = 0x1E7F90u;
    {
        const bool branch_taken_0x1e7f90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F90u;
        // 0x1e7f94: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f90) {
            ctx->pc = 0x1E7FA4u;
            goto label_1e7fa4;
        }
    }
    ctx->pc = 0x1E7F98u;
label_1e7f98:
    // 0x1e7f98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e7f9c:
    if (ctx->pc == 0x1E7F9Cu) {
        ctx->pc = 0x1E7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F98u;
        // 0x1e7f9c: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7FA0u;
        goto label_1e7fa0;
    }
    ctx->pc = 0x1E7F98u;
    {
        const bool branch_taken_0x1e7f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7F98u;
        // 0x1e7f9c: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f98) {
            ctx->pc = 0x1E7FA8u;
            goto label_1e7fa8;
        }
    }
    ctx->pc = 0x1E7FA0u;
label_1e7fa0:
    // 0x1e7fa0: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1e7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1e7fa4:
    // 0x1e7fa4: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1e7fa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1e7fa8:
    // 0x1e7fa8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e7fac:
    if (ctx->pc == 0x1E7FACu) {
        ctx->pc = 0x1E7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FA8u;
        // 0x1e7fac: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7FB0u;
        goto label_1e7fb0;
    }
    ctx->pc = 0x1E7FA8u;
    {
        const bool branch_taken_0x1e7fa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FA8u;
        // 0x1e7fac: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fa8) {
            ctx->pc = 0x1E7FCCu;
            goto label_1e7fcc;
        }
    }
    ctx->pc = 0x1E7FB0u;
label_1e7fb0:
    // 0x1e7fb0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1e7fb4:
    // 0x1e7fb4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e7fb8:
    if (ctx->pc == 0x1E7FB8u) {
        ctx->pc = 0x1E7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FB4u;
        // 0x1e7fb8: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7FBCu;
        goto label_1e7fbc;
    }
    ctx->pc = 0x1E7FB4u;
    {
        const bool branch_taken_0x1e7fb4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FB4u;
        // 0x1e7fb8: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fb4) {
            ctx->pc = 0x1E7FC4u;
            goto label_1e7fc4;
        }
    }
    ctx->pc = 0x1E7FBCu;
label_1e7fbc:
    // 0x1e7fbc: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1e7fc0:
    // 0x1e7fc0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e7fc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e7fc4:
    // 0x1e7fc4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e7fc8:
    if (ctx->pc == 0x1E7FC8u) {
        ctx->pc = 0x1E7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FC4u;
        // 0x1e7fc8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7FCCu;
        goto label_1e7fcc;
    }
    ctx->pc = 0x1E7FC4u;
    {
        const bool branch_taken_0x1e7fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FC4u;
        // 0x1e7fc8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fc4) {
            ctx->pc = 0x1E7FE8u;
            goto label_1e7fe8;
        }
    }
    ctx->pc = 0x1E7FCCu;
label_1e7fcc:
    // 0x1e7fcc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7fd0:
    // 0x1e7fd0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1e7fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e7fd4:
    // 0x1e7fd4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e7fd8:
    if (ctx->pc == 0x1E7FD8u) {
        ctx->pc = 0x1E7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FD4u;
        // 0x1e7fd8: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7FDCu;
        goto label_1e7fdc;
    }
    ctx->pc = 0x1E7FD4u;
    {
        const bool branch_taken_0x1e7fd4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FD4u;
        // 0x1e7fd8: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fd4) {
            ctx->pc = 0x1E7FE4u;
            goto label_1e7fe4;
        }
    }
    ctx->pc = 0x1E7FDCu;
label_1e7fdc:
    // 0x1e7fdc: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1e7fe0:
    // 0x1e7fe0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e7fe0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e7fe4:
    // 0x1e7fe4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1e7fe8:
    // 0x1e7fe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e7fec:
    if (ctx->pc == 0x1E7FECu) {
        ctx->pc = 0x1E7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FE8u;
        // 0x1e7fec: 0xa2020b03  sb          $v0, 0xB03($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2819), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7FF0u;
        goto label_1e7ff0;
    }
    ctx->pc = 0x1E7FE8u;
    {
        const bool branch_taken_0x1e7fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FE8u;
        // 0x1e7fec: 0xa2020b03  sb          $v0, 0xB03($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2819), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fe8) {
            ctx->pc = 0x1E7FF4u;
            goto label_1e7ff4;
        }
    }
    ctx->pc = 0x1E7FF0u;
label_1e7ff0:
    // 0x1e7ff0: 0xa2000b03  sb          $zero, 0xB03($s0)
    ctx->pc = 0x1e7ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2819), (uint8_t)GPR_U32(ctx, 0));
label_1e7ff4:
    // 0x1e7ff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ff8:
    // 0x1e7ff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7ffc:
    // 0x1e7ffc: 0x240600b3  addiu       $a2, $zero, 0xB3
    ctx->pc = 0x1e7ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_1e8000:
    // 0x1e8000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8004:
    // 0x1e8004: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e8004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8008:
    // 0x1e8008: 0xc066c72  jal         func_19B1C8
label_1e800c:
    if (ctx->pc == 0x1E800Cu) {
        ctx->pc = 0x1E800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8008u;
        // 0x1e800c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8010u;
        goto label_1e8010;
    }
    ctx->pc = 0x1E8008u;
    SET_GPR_U32(ctx, 31, 0x1E8010u);
    ctx->pc = 0x1E800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8008u;
    // 0x1e800c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1E8010u;
label_1e8010:
    // 0x1e8010: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e8014:
    // 0x1e8014: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e8014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8018:
    // 0x1e8018: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e8018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e801c:
    // 0x1e801c: 0x3e00008  jr          $ra
label_1e8020:
    if (ctx->pc == 0x1E8020u) {
        ctx->pc = 0x1E8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E801Cu;
        // 0x1e8020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8024u;
        goto label_1e8024;
    }
    ctx->pc = 0x1E801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E801Cu;
        // 0x1e8020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8024u;
label_1e8024:
    // 0x1e8024: 0x0  nop
    ctx->pc = 0x1e8024u;
    // NOP
label_1e8028:
    // 0x1e8028: 0x0  nop
    ctx->pc = 0x1e8028u;
    // NOP
label_1e802c:
    // 0x1e802c: 0x0  nop
    ctx->pc = 0x1e802cu;
    // NOP
label_1e8030:
    // 0x1e8030: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
label_1e8034:
    if (ctx->pc == 0x1E8034u) {
        ctx->pc = 0x1E8038u;
        goto label_1e8038;
    }
    ctx->pc = 0x1E8030u;
    {
        const bool branch_taken_0x1e8030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8030) {
            ctx->pc = 0x1E8150u;
            { ctx->pc = 0x1e8150; return; }
        }
    }
    ctx->pc = 0x1E8038u;
label_1e8038:
    // 0x1e8038: 0x8f868e80  lw          $a2, -0x7180($gp)
    ctx->pc = 0x1e8038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e803c:
    // 0x1e803c: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_1e8040:
    if (ctx->pc == 0x1E8040u) {
        ctx->pc = 0x1E8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E803Cu;
        // 0x1e8040: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8044u;
        goto label_1e8044;
    }
    ctx->pc = 0x1E803Cu;
    {
        const bool branch_taken_0x1e803c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E803Cu;
        // 0x1e8040: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e803c) {
            ctx->pc = 0x1E80B4u;
            goto label_1e80b4;
        }
    }
    ctx->pc = 0x1E8044u;
label_1e8044:
    // 0x1e8044: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e8044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1e8048:
    // 0x1e8048: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e8048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e804c:
    // 0x1e804c: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x1e804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_1e8050:
    // 0x1e8050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e8054:
    // 0x1e8054: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1e8054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e8058:
    // 0x1e8058: 0x1065000c  beq         $v1, $a1, . + 4 + (0xC << 2)
label_1e805c:
    if (ctx->pc == 0x1E805Cu) {
        ctx->pc = 0x1E8060u;
        goto label_1e8060;
    }
    ctx->pc = 0x1E8058u;
    {
        const bool branch_taken_0x1e8058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e8058) {
            ctx->pc = 0x1E808Cu;
            goto label_1e808c;
        }
    }
    ctx->pc = 0x1E8060u;
label_1e8060:
    // 0x1e8060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e8064:
    // 0x1e8064: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_1e8068:
    if (ctx->pc == 0x1E8068u) {
        ctx->pc = 0x1E806Cu;
        goto label_1e806c;
    }
    ctx->pc = 0x1E8064u;
    {
        const bool branch_taken_0x1e8064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e8064) {
            ctx->pc = 0x1E808Cu;
            goto label_1e808c;
        }
    }
    ctx->pc = 0x1E806Cu;
label_1e806c:
    // 0x1e806c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1e8070:
    if (ctx->pc == 0x1E8070u) {
        ctx->pc = 0x1E8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E806Cu;
        // 0x1e8070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8074u;
        goto label_1e8074;
    }
    ctx->pc = 0x1E806Cu;
    {
        const bool branch_taken_0x1e806c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E806Cu;
        // 0x1e8070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e806c) {
            ctx->pc = 0x1E8080u;
            goto label_1e8080;
        }
    }
    ctx->pc = 0x1E8074u;
label_1e8074:
    // 0x1e8074: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e8078:
    if (ctx->pc == 0x1E8078u) {
        ctx->pc = 0x1E8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8074u;
        // 0x1e8078: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E807Cu;
        goto label_1e807c;
    }
    ctx->pc = 0x1E8074u;
    {
        const bool branch_taken_0x1e8074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8074u;
        // 0x1e8078: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8074) {
            ctx->pc = 0x1E808Cu;
            goto label_1e808c;
        }
    }
    ctx->pc = 0x1E807Cu;
label_1e807c:
    // 0x1e807c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e807cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8080:
    // 0x1e8080: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e8084:
    if (ctx->pc == 0x1E8084u) {
        ctx->pc = 0x1E8088u;
        goto label_1e8088;
    }
    ctx->pc = 0x1E8080u;
    {
        const bool branch_taken_0x1e8080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8080) {
            ctx->pc = 0x1E808Cu;
            goto label_1e808c;
        }
    }
    ctx->pc = 0x1E8088u;
label_1e8088:
    // 0x1e8088: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e8088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e808c:
    // 0x1e808c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e808cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e8090:
    // 0x1e8090: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e8090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e8094:
    // 0x1e8094: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x1e8094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
label_1e8098:
    // 0x1e8098: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e809c:
    // 0x1e809c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e80a0:
    // 0x1e80a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1e80a4:
    if (ctx->pc == 0x1E80A4u) {
        ctx->pc = 0x1E80A8u;
        goto label_1e80a8;
    }
    ctx->pc = 0x1E80A0u;
    {
        const bool branch_taken_0x1e80a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e80a0) {
            ctx->pc = 0x1E80B0u;
            goto label_1e80b0;
        }
    }
    ctx->pc = 0x1E80A8u;
label_1e80a8:
    // 0x1e80a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e80ac:
    if (ctx->pc == 0x1E80ACu) {
        ctx->pc = 0x1E80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80A8u;
        // 0x1e80ac: 0xaf808e10  sw          $zero, -0x71F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E80B0u;
        goto label_1e80b0;
    }
    ctx->pc = 0x1E80A8u;
    {
        const bool branch_taken_0x1e80a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E80A8u;
        // 0x1e80ac: 0xaf808e10  sw          $zero, -0x71F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e80a8) {
            ctx->pc = 0x1E80B8u;
            goto label_1e80b8;
        }
    }
    ctx->pc = 0x1E80B0u;
label_1e80b0:
    // 0x1e80b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e80b4:
    // 0x1e80b4: 0xaf838e10  sw          $v1, -0x71F0($gp)
    ctx->pc = 0x1e80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938128), GPR_U32(ctx, 3));
label_1e80b8:
    // 0x1e80b8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1e80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e80bc:
    // 0x1e80bc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1e80bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1e80c0u;
    return;
}

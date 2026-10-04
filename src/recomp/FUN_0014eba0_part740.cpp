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


void FUN_0014eba0_part740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b7f08u: goto label_2b7f08;
        case 0x2b7f0cu: goto label_2b7f0c;
        case 0x2b7f10u: goto label_2b7f10;
        case 0x2b7f14u: goto label_2b7f14;
        case 0x2b7f18u: goto label_2b7f18;
        case 0x2b7f1cu: goto label_2b7f1c;
        case 0x2b7f20u: goto label_2b7f20;
        case 0x2b7f24u: goto label_2b7f24;
        case 0x2b7f28u: goto label_2b7f28;
        case 0x2b7f2cu: goto label_2b7f2c;
        case 0x2b7f30u: goto label_2b7f30;
        case 0x2b7f34u: goto label_2b7f34;
        case 0x2b7f38u: goto label_2b7f38;
        case 0x2b7f3cu: goto label_2b7f3c;
        case 0x2b7f40u: goto label_2b7f40;
        case 0x2b7f44u: goto label_2b7f44;
        case 0x2b7f48u: goto label_2b7f48;
        case 0x2b7f4cu: goto label_2b7f4c;
        case 0x2b7f50u: goto label_2b7f50;
        case 0x2b7f54u: goto label_2b7f54;
        case 0x2b7f58u: goto label_2b7f58;
        case 0x2b7f5cu: goto label_2b7f5c;
        case 0x2b7f60u: goto label_2b7f60;
        case 0x2b7f64u: goto label_2b7f64;
        case 0x2b7f68u: goto label_2b7f68;
        case 0x2b7f6cu: goto label_2b7f6c;
        case 0x2b7f70u: goto label_2b7f70;
        case 0x2b7f74u: goto label_2b7f74;
        case 0x2b7f78u: goto label_2b7f78;
        case 0x2b7f7cu: goto label_2b7f7c;
        case 0x2b7f80u: goto label_2b7f80;
        case 0x2b7f84u: goto label_2b7f84;
        case 0x2b7f88u: goto label_2b7f88;
        case 0x2b7f8cu: goto label_2b7f8c;
        case 0x2b7f90u: goto label_2b7f90;
        case 0x2b7f94u: goto label_2b7f94;
        case 0x2b7f98u: goto label_2b7f98;
        case 0x2b7f9cu: goto label_2b7f9c;
        case 0x2b7fa0u: goto label_2b7fa0;
        case 0x2b7fa4u: goto label_2b7fa4;
        case 0x2b7fa8u: goto label_2b7fa8;
        case 0x2b7facu: goto label_2b7fac;
        case 0x2b7fb0u: goto label_2b7fb0;
        case 0x2b7fb4u: goto label_2b7fb4;
        case 0x2b7fb8u: goto label_2b7fb8;
        case 0x2b7fbcu: goto label_2b7fbc;
        case 0x2b7fc0u: goto label_2b7fc0;
        case 0x2b7fc4u: goto label_2b7fc4;
        case 0x2b7fc8u: goto label_2b7fc8;
        case 0x2b7fccu: goto label_2b7fcc;
        case 0x2b7fd0u: goto label_2b7fd0;
        case 0x2b7fd4u: goto label_2b7fd4;
        case 0x2b7fd8u: goto label_2b7fd8;
        case 0x2b7fdcu: goto label_2b7fdc;
        case 0x2b7fe0u: goto label_2b7fe0;
        case 0x2b7fe4u: goto label_2b7fe4;
        case 0x2b7fe8u: goto label_2b7fe8;
        case 0x2b7fecu: goto label_2b7fec;
        case 0x2b7ff0u: goto label_2b7ff0;
        case 0x2b7ff4u: goto label_2b7ff4;
        case 0x2b7ff8u: goto label_2b7ff8;
        case 0x2b7ffcu: goto label_2b7ffc;
        case 0x2b8000u: goto label_2b8000;
        case 0x2b8004u: goto label_2b8004;
        case 0x2b8008u: goto label_2b8008;
        case 0x2b800cu: goto label_2b800c;
        case 0x2b8010u: goto label_2b8010;
        case 0x2b8014u: goto label_2b8014;
        case 0x2b8018u: goto label_2b8018;
        case 0x2b801cu: goto label_2b801c;
        case 0x2b8020u: goto label_2b8020;
        case 0x2b8024u: goto label_2b8024;
        case 0x2b8028u: goto label_2b8028;
        case 0x2b802cu: goto label_2b802c;
        case 0x2b8030u: goto label_2b8030;
        case 0x2b8034u: goto label_2b8034;
        case 0x2b8038u: goto label_2b8038;
        case 0x2b803cu: goto label_2b803c;
        case 0x2b8040u: goto label_2b8040;
        case 0x2b8044u: goto label_2b8044;
        case 0x2b8048u: goto label_2b8048;
        case 0x2b804cu: goto label_2b804c;
        case 0x2b8050u: goto label_2b8050;
        case 0x2b8054u: goto label_2b8054;
        case 0x2b8058u: goto label_2b8058;
        case 0x2b805cu: goto label_2b805c;
        case 0x2b8060u: goto label_2b8060;
        case 0x2b8064u: goto label_2b8064;
        case 0x2b8068u: goto label_2b8068;
        case 0x2b806cu: goto label_2b806c;
        case 0x2b8070u: goto label_2b8070;
        case 0x2b8074u: goto label_2b8074;
        case 0x2b8078u: goto label_2b8078;
        case 0x2b807cu: goto label_2b807c;
        case 0x2b8080u: goto label_2b8080;
        case 0x2b8084u: goto label_2b8084;
        case 0x2b8088u: goto label_2b8088;
        case 0x2b808cu: goto label_2b808c;
        case 0x2b8090u: goto label_2b8090;
        case 0x2b8094u: goto label_2b8094;
        case 0x2b8098u: goto label_2b8098;
        case 0x2b809cu: goto label_2b809c;
        case 0x2b80a0u: goto label_2b80a0;
        case 0x2b80a4u: goto label_2b80a4;
        case 0x2b80a8u: goto label_2b80a8;
        case 0x2b80acu: goto label_2b80ac;
        case 0x2b80b0u: goto label_2b80b0;
        case 0x2b80b4u: goto label_2b80b4;
        case 0x2b80b8u: goto label_2b80b8;
        case 0x2b80bcu: goto label_2b80bc;
        case 0x2b80c0u: goto label_2b80c0;
        case 0x2b80c4u: goto label_2b80c4;
        case 0x2b80c8u: goto label_2b80c8;
        case 0x2b80ccu: goto label_2b80cc;
        case 0x2b80d0u: goto label_2b80d0;
        case 0x2b80d4u: goto label_2b80d4;
        case 0x2b80d8u: goto label_2b80d8;
        case 0x2b80dcu: goto label_2b80dc;
        default: return;
    }

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
            { ctx->pc = 0x2c3a80; return; }
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7B44 raw=0x01F310BD");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7BB4 raw=0x01C0E7DC");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B7BD4 raw=0x0020E7DF");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7C14 raw=0x01FAF97D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B7C8C raw=0x01E0AD5F");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7CC0 raw=0x02275001");
 /* MITIGATED */
label_2b7cc4:
    // 0x2b7cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cc8:
    // 0x2b7cc8: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7cc8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7CC8 raw=0x03C7A801");
 /* MITIGATED */
label_2b7ccc:
    // 0x2b7ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7cd0:
    // 0x2b7cd0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7cd0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B7CD0 raw=0x03E8A801");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7D14 raw=0x01C0A51C");
 /* MITIGATED */
label_2b7d18:
    // 0x2b7d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7d1c:
    // 0x2b7d1c: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b7d1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B7D1C raw=0x01C0B59C");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B7D4C raw=0x01F368BD");
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
            { ctx->pc = 0x2c7dc0; return; }
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
            { ctx->pc = 0x2c5dd0; return; }
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
            { ctx->pc = 0x2c9e50; return; }
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
            { ctx->pc = 0x2bfe38; return; }
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
            { ctx->pc = 0x2c1c50; return; }
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
            { ctx->pc = 0x2bfe68; return; }
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
            goto label_2b7f0c;
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
            goto label_2b7f18;
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
            goto label_2b7f24;
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
label_2b7f08:
    // 0x2b7f08: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2b7f08u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2b7f0c:
    // 0x2b7f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f10:
    // 0x2b7f10: 0x52010007  beql        $s0, $at, . + 4 + (0x7 << 2)
label_2b7f14:
    if (ctx->pc == 0x2B7F14u) {
        ctx->pc = 0x2B7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F10u;
        // 0x2b7f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F18u;
        goto label_2b7f18;
    }
    ctx->pc = 0x2B7F10u;
    {
        const bool branch_taken_0x2b7f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7f10) {
            ctx->pc = 0x2B7F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7F10u;
            // 0x2b7f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F30u;
            goto label_2b7f30;
        }
    }
    ctx->pc = 0x2B7F18u;
label_2b7f18:
    // 0x2b7f18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7f18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7f1c:
    // 0x2b7f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f20:
    // 0x2b7f20: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2b7f20u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2b7f24:
    // 0x2b7f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f28:
    // 0x2b7f28: 0x52010004  beql        $s0, $at, . + 4 + (0x4 << 2)
label_2b7f2c:
    if (ctx->pc == 0x2B7F2Cu) {
        ctx->pc = 0x2B7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F28u;
        // 0x2b7f2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F30u;
        goto label_2b7f30;
    }
    ctx->pc = 0x2B7F28u;
    {
        const bool branch_taken_0x2b7f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7f28) {
            ctx->pc = 0x2B7F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7F28u;
            // 0x2b7f2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F3Cu;
            goto label_2b7f3c;
        }
    }
    ctx->pc = 0x2B7F30u;
label_2b7f30:
    // 0x2b7f30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7f30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7f34:
    // 0x2b7f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f38:
    // 0x2b7f38: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2b7f38u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2b7f3c:
    // 0x2b7f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f40:
    // 0x2b7f40: 0x52010001  beql        $s0, $at, . + 4 + (0x1 << 2)
label_2b7f44:
    if (ctx->pc == 0x2B7F44u) {
        ctx->pc = 0x2B7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F40u;
        // 0x2b7f44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F48u;
        goto label_2b7f48;
    }
    ctx->pc = 0x2B7F40u;
    {
        const bool branch_taken_0x2b7f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b7f40) {
            ctx->pc = 0x2B7F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7F40u;
            // 0x2b7f44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F48u;
            goto label_2b7f48;
        }
    }
    ctx->pc = 0x2B7F48u;
label_2b7f48:
    // 0x2b7f48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7f48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7f4c:
    // 0x2b7f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f50:
    // 0x2b7f50: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b7f54:
    if (ctx->pc == 0x2B7F54u) {
        ctx->pc = 0x2B7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F50u;
        // 0x2b7f54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F58u;
        goto label_2b7f58;
    }
    ctx->pc = 0x2B7F50u;
    {
        const bool branch_taken_0x2b7f50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F50u;
        // 0x2b7f54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f50) {
            ctx->pc = 0x2BDF50u;
            { ctx->pc = 0x2bdf50; return; }
        }
    }
    ctx->pc = 0x2B7F58u;
label_2b7f58:
    // 0x2b7f58: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b7f58u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b7f5c:
    // 0x2b7f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f60:
    // 0x2b7f60: 0xa213fff  j           func_884FFFC
label_2b7f64:
    if (ctx->pc == 0x2B7F64u) {
        ctx->pc = 0x2B7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F60u;
        // 0x2b7f64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F68u;
        goto label_2b7f68;
    }
    ctx->pc = 0x2B7F60u;
    ctx->pc = 0x2B7F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F60u;
    // 0x2b7f64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B7F60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7F68u;
label_2b7f68:
    // 0x2b7f68: 0xa2147ff  j           func_8851FFC
label_2b7f6c:
    if (ctx->pc == 0x2B7F6Cu) {
        ctx->pc = 0x2B7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F68u;
        // 0x2b7f6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F70u;
        goto label_2b7f70;
    }
    ctx->pc = 0x2B7F68u;
    ctx->pc = 0x2B7F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F68u;
    // 0x2b7f6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2B7F68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7F70u;
label_2b7f70:
    // 0x2b7f70: 0x400007cf  .word       0x400007CF                   # mfc0        $zero, Index # 000007CF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b7f70u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b7f74:
    // 0x2b7f74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f78:
    // 0x2b7f78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b7f78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b7f7c:
    // 0x2b7f7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f80:
    // 0x2b7f80: 0x0  nop
    ctx->pc = 0x2b7f80u;
    // NOP
label_2b7f84:
    // 0x2b7f84: 0x4a000450  vmaxx       $vf17, $vf0, $vf0x
    ctx->pc = 0x2b7f84u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2b7f88:
    // 0x2b7f88: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b7f88u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b7f8c:
    // 0x2b7f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7f90:
    // 0x2b7f90: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2b7f94:
    if (ctx->pc == 0x2B7F94u) {
        ctx->pc = 0x2B7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F90u;
        // 0x2b7f94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7F98u;
        goto label_2b7f98;
    }
    ctx->pc = 0x2B7F90u;
    {
        const bool branch_taken_0x2b7f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F90u;
        // 0x2b7f94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f90) {
            ctx->pc = 0x2B7F94u;
            goto label_2b7f94;
        }
    }
    ctx->pc = 0x2B7F98u;
label_2b7f98:
    // 0x2b7f98: 0xa8e0805  j           func_A382014
label_2b7f9c:
    if (ctx->pc == 0x2B7F9Cu) {
        ctx->pc = 0x2B7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F98u;
        // 0x2b7f9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FA0u;
        goto label_2b7fa0;
    }
    ctx->pc = 0x2B7F98u;
    ctx->pc = 0x2B7F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F98u;
    // 0x2b7f9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382014u, 0x2B7F98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B7FA0u;
label_2b7fa0:
    // 0x2b7fa0: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b7fa4:
    if (ctx->pc == 0x2B7FA4u) {
        ctx->pc = 0x2B7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FA0u;
        // 0x2b7fa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B7FA8u;
        goto label_2b7fa8;
    }
    ctx->pc = 0x2B7FA0u;
    {
        const bool branch_taken_0x2b7fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B7FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FA0u;
        // 0x2b7fa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fa0) {
            ctx->pc = 0x2BA2CCu;
            { ctx->pc = 0x2ba2cc; return; }
        }
    }
    ctx->pc = 0x2B7FA8u;
label_2b7fa8:
    // 0x2b7fa8: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b7fa8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7fac:
    // 0x2b7fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7fb0:
    // 0x2b7fb0: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b7fb0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7fb4:
    // 0x2b7fb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7fb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7fb8:
    // 0x2b7fb8: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b7fb8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7fbc:
    // 0x2b7fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7fc0:
    // 0x2b7fc0: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b7fc0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7fc4:
    // 0x2b7fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7fc8:
    // 0x2b7fc8: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b7fc8u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b7fcc:
    // 0x2b7fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7fd0:
    // 0x2b7fd0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b7fd0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b7fd4:
    // 0x2b7fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7fd8:
    // 0x2b7fd8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b7fd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b7fdc:
    // 0x2b7fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7fe0:
    // 0x2b7fe0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b7fe0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b7fe4:
    // 0x2b7fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7fe8:
    // 0x2b7fe8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b7fe8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b7fec:
    // 0x2b7fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ff0:
    // 0x2b7ff0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b7ff0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b7ff4:
    // 0x2b7ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b7ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b7ff8:
    // 0x2b7ff8: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2b7ffc:
    if (ctx->pc == 0x2B7FFCu) {
        ctx->pc = 0x2B7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FF8u;
        // 0x2b7ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8000u;
        goto label_2b8000;
    }
    ctx->pc = 0x2B7FF8u;
    {
        const bool branch_taken_0x2b7ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FF8u;
        // 0x2b7ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ff8) {
            ctx->pc = 0x2BA000u;
            { ctx->pc = 0x2ba000; return; }
        }
    }
    ctx->pc = 0x2B8000u;
label_2b8000:
    // 0x2b8000: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b8000u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b8004:
    // 0x2b8004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8008:
    // 0x2b8008: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8008u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B8008 raw=0x01FA0005");
 /* MITIGATED */
label_2b800c:
    // 0x2b800c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b800cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8010:
    // 0x2b8010: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2b8014:
    if (ctx->pc == 0x2B8014u) {
        ctx->pc = 0x2B8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8010u;
        // 0x2b8014: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8018u;
        goto label_2b8018;
    }
    ctx->pc = 0x2B8010u;
    {
        const bool branch_taken_0x2b8010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8010u;
        // 0x2b8014: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8010) {
            ctx->pc = 0x2B82ACu;
            { ctx->pc = 0x2b82ac; return; }
        }
    }
    ctx->pc = 0x2B8018u;
label_2b8018:
    // 0x2b8018: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b801c:
    if (ctx->pc == 0x2B801Cu) {
        ctx->pc = 0x2B801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8018u;
        // 0x2b801c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8020u;
        goto label_2b8020;
    }
    ctx->pc = 0x2B8018u;
    {
        const bool branch_taken_0x2b8018 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8018u;
        // 0x2b801c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8018) {
            ctx->pc = 0x2BA018u;
            { ctx->pc = 0x2ba018; return; }
        }
    }
    ctx->pc = 0x2B8020u;
label_2b8020:
    // 0x2b8020: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b8024:
    if (ctx->pc == 0x2B8024u) {
        ctx->pc = 0x2B8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8020u;
        // 0x2b8024: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8028u;
        goto label_2b8028;
    }
    ctx->pc = 0x2B8020u;
    {
        const bool branch_taken_0x2b8020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8020u;
        // 0x2b8024: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8020) {
            ctx->pc = 0x2CE028u;
            { ctx->pc = 0x2ce028; return; }
        }
    }
    ctx->pc = 0x2B8028u;
label_2b8028:
    // 0x2b8028: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8028u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b802c:
    // 0x2b802c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b802cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8030:
    // 0x2b8030: 0xb0b1000  j           func_C2C4000
label_2b8034:
    if (ctx->pc == 0x2B8034u) {
        ctx->pc = 0x2B8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8030u;
        // 0x2b8034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8038u;
        goto label_2b8038;
    }
    ctx->pc = 0x2B8030u;
    ctx->pc = 0x2B8034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8030u;
    // 0x2b8034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B8030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B8038u;
label_2b8038:
    // 0x2b8038: 0x90c3000  j           func_430C000
label_2b803c:
    if (ctx->pc == 0x2B803Cu) {
        ctx->pc = 0x2B803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8038u;
        // 0x2b803c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8040u;
        goto label_2b8040;
    }
    ctx->pc = 0x2B8038u;
    ctx->pc = 0x2B803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8038u;
    // 0x2b803c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2B8038u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B8040u;
label_2b8040:
    // 0x2b8040: 0x82e3000  j           func_B8C000
label_2b8044:
    if (ctx->pc == 0x2B8044u) {
        ctx->pc = 0x2B8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8040u;
        // 0x2b8044: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8048u;
        goto label_2b8048;
    }
    ctx->pc = 0x2B8040u;
    ctx->pc = 0x2B8044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8040u;
    // 0x2b8044: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2B8040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B8048u;
label_2b8048:
    // 0x2b8048: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b804c:
    if (ctx->pc == 0x2B804Cu) {
        ctx->pc = 0x2B804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8048u;
        // 0x2b804c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8050u;
        goto label_2b8050;
    }
    ctx->pc = 0x2B8048u;
    {
        const bool branch_taken_0x2b8048 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8048u;
        // 0x2b804c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8048) {
            ctx->pc = 0x2BA048u;
            { ctx->pc = 0x2ba048; return; }
        }
    }
    ctx->pc = 0x2B8050u;
label_2b8050:
    // 0x2b8050: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2b8054:
    if (ctx->pc == 0x2B8054u) {
        ctx->pc = 0x2B8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8050u;
        // 0x2b8054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8058u;
        goto label_2b8058;
    }
    ctx->pc = 0x2B8050u;
    {
        const bool branch_taken_0x2b8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8050u;
        // 0x2b8054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8050) {
            ctx->pc = 0x2C4058u;
            { ctx->pc = 0x2c4058; return; }
        }
    }
    ctx->pc = 0x2B8058u;
label_2b8058:
    // 0x2b8058: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2b805c:
    if (ctx->pc == 0x2B805Cu) {
        ctx->pc = 0x2B805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8058u;
        // 0x2b805c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8060u;
        goto label_2b8060;
    }
    ctx->pc = 0x2B8058u;
    {
        const bool branch_taken_0x2b8058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8058u;
        // 0x2b805c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8058) {
            ctx->pc = 0x2B8064u;
            goto label_2b8064;
        }
    }
    ctx->pc = 0x2B8060u;
label_2b8060:
    // 0x2b8060: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2b8060u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2b8064:
    // 0x2b8064: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b8064u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2b8068:
    // 0x2b8068: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b8068u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b806c:
    // 0x2b806c: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b806cu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2b8070:
    // 0x2b8070: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2b8074:
    if (ctx->pc == 0x2B8074u) {
        ctx->pc = 0x2B8074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8070u;
        // 0x2b8074: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8078u;
        goto label_2b8078;
    }
    ctx->pc = 0x2B8070u;
    {
        const bool branch_taken_0x2b8070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b8070) {
            ctx->pc = 0x2B8074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8070u;
            // 0x2b8074: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B807Cu;
            goto label_2b807c;
        }
    }
    ctx->pc = 0x2B8078u;
label_2b8078:
    // 0x2b8078: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2b8078u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2b807c:
    // 0x2b807c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b807cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8080:
    // 0x2b8080: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2b8084:
    if (ctx->pc == 0x2B8084u) {
        ctx->pc = 0x2B8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8080u;
        // 0x2b8084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8088u;
        goto label_2b8088;
    }
    ctx->pc = 0x2B8080u;
    {
        const bool branch_taken_0x2b8080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8080u;
        // 0x2b8084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8080) {
            ctx->pc = 0x2B8090u;
            goto label_2b8090;
        }
    }
    ctx->pc = 0x2B8088u;
label_2b8088:
    // 0x2b8088: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2b8088u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2b808c:
    // 0x2b808c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b808cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8090:
    // 0x2b8090: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2b8090u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2b8094:
    // 0x2b8094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b8094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b8098:
    // 0x2b8098: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b8098u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2b809c:
    // 0x2b809c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b809cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80a0:
    // 0x2b80a0: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2b80a0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2b80a4:
    // 0x2b80a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80a8:
    // 0x2b80a8: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b80a8u;
    // NOP (addi to $zero)
label_2b80ac:
    // 0x2b80ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80b0:
    // 0x2b80b0: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2b80b0u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2b80b4:
    // 0x2b80b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80b8:
    // 0x2b80b8: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b80b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b80bc:
    // 0x2b80bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80c0:
    // 0x2b80c0: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2b80c0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2b80c4:
    // 0x2b80c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80c8:
    // 0x2b80c8: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2b80c8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2b80cc:
    // 0x2b80cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80d0:
    // 0x2b80d0: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2b80d0u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2b80d4:
    // 0x2b80d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b80d8:
    // 0x2b80d8: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b80d8u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b80dc:
    // 0x2b80dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b80dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b80e0u;
    return;
}

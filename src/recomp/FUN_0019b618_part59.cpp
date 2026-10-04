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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part59(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1b7d70u: goto label_1b7d70;
        case 0x1b7d74u: goto label_1b7d74;
        case 0x1b7d78u: goto label_1b7d78;
        case 0x1b7d7cu: goto label_1b7d7c;
        case 0x1b7d80u: goto label_1b7d80;
        case 0x1b7d84u: goto label_1b7d84;
        case 0x1b7d88u: goto label_1b7d88;
        case 0x1b7d8cu: goto label_1b7d8c;
        case 0x1b7d90u: goto label_1b7d90;
        case 0x1b7d94u: goto label_1b7d94;
        case 0x1b7d98u: goto label_1b7d98;
        case 0x1b7d9cu: goto label_1b7d9c;
        case 0x1b7da0u: goto label_1b7da0;
        case 0x1b7da4u: goto label_1b7da4;
        case 0x1b7da8u: goto label_1b7da8;
        case 0x1b7dacu: goto label_1b7dac;
        case 0x1b7db0u: goto label_1b7db0;
        case 0x1b7db4u: goto label_1b7db4;
        case 0x1b7db8u: goto label_1b7db8;
        case 0x1b7dbcu: goto label_1b7dbc;
        case 0x1b7dc0u: goto label_1b7dc0;
        case 0x1b7dc4u: goto label_1b7dc4;
        case 0x1b7dc8u: goto label_1b7dc8;
        case 0x1b7dccu: goto label_1b7dcc;
        case 0x1b7dd0u: goto label_1b7dd0;
        case 0x1b7dd4u: goto label_1b7dd4;
        case 0x1b7dd8u: goto label_1b7dd8;
        case 0x1b7ddcu: goto label_1b7ddc;
        case 0x1b7de0u: goto label_1b7de0;
        case 0x1b7de4u: goto label_1b7de4;
        case 0x1b7de8u: goto label_1b7de8;
        case 0x1b7decu: goto label_1b7dec;
        case 0x1b7df0u: goto label_1b7df0;
        case 0x1b7df4u: goto label_1b7df4;
        case 0x1b7df8u: goto label_1b7df8;
        case 0x1b7dfcu: goto label_1b7dfc;
        case 0x1b7e00u: goto label_1b7e00;
        case 0x1b7e04u: goto label_1b7e04;
        case 0x1b7e08u: goto label_1b7e08;
        case 0x1b7e0cu: goto label_1b7e0c;
        case 0x1b7e10u: goto label_1b7e10;
        case 0x1b7e14u: goto label_1b7e14;
        case 0x1b7e18u: goto label_1b7e18;
        case 0x1b7e1cu: goto label_1b7e1c;
        case 0x1b7e20u: goto label_1b7e20;
        case 0x1b7e24u: goto label_1b7e24;
        case 0x1b7e28u: goto label_1b7e28;
        case 0x1b7e2cu: goto label_1b7e2c;
        case 0x1b7e30u: goto label_1b7e30;
        case 0x1b7e34u: goto label_1b7e34;
        case 0x1b7e38u: goto label_1b7e38;
        case 0x1b7e3cu: goto label_1b7e3c;
        case 0x1b7e40u: goto label_1b7e40;
        case 0x1b7e44u: goto label_1b7e44;
        case 0x1b7e48u: goto label_1b7e48;
        case 0x1b7e4cu: goto label_1b7e4c;
        case 0x1b7e50u: goto label_1b7e50;
        case 0x1b7e54u: goto label_1b7e54;
        case 0x1b7e58u: goto label_1b7e58;
        case 0x1b7e5cu: goto label_1b7e5c;
        case 0x1b7e60u: goto label_1b7e60;
        case 0x1b7e64u: goto label_1b7e64;
        case 0x1b7e68u: goto label_1b7e68;
        case 0x1b7e6cu: goto label_1b7e6c;
        case 0x1b7e70u: goto label_1b7e70;
        case 0x1b7e74u: goto label_1b7e74;
        case 0x1b7e78u: goto label_1b7e78;
        case 0x1b7e7cu: goto label_1b7e7c;
        case 0x1b7e80u: goto label_1b7e80;
        case 0x1b7e84u: goto label_1b7e84;
        case 0x1b7e88u: goto label_1b7e88;
        case 0x1b7e8cu: goto label_1b7e8c;
        case 0x1b7e90u: goto label_1b7e90;
        case 0x1b7e94u: goto label_1b7e94;
        case 0x1b7e98u: goto label_1b7e98;
        case 0x1b7e9cu: goto label_1b7e9c;
        case 0x1b7ea0u: goto label_1b7ea0;
        case 0x1b7ea4u: goto label_1b7ea4;
        case 0x1b7ea8u: goto label_1b7ea8;
        case 0x1b7eacu: goto label_1b7eac;
        case 0x1b7eb0u: goto label_1b7eb0;
        case 0x1b7eb4u: goto label_1b7eb4;
        case 0x1b7eb8u: goto label_1b7eb8;
        case 0x1b7ebcu: goto label_1b7ebc;
        case 0x1b7ec0u: goto label_1b7ec0;
        case 0x1b7ec4u: goto label_1b7ec4;
        case 0x1b7ec8u: goto label_1b7ec8;
        case 0x1b7eccu: goto label_1b7ecc;
        case 0x1b7ed0u: goto label_1b7ed0;
        case 0x1b7ed4u: goto label_1b7ed4;
        case 0x1b7ed8u: goto label_1b7ed8;
        case 0x1b7edcu: goto label_1b7edc;
        case 0x1b7ee0u: goto label_1b7ee0;
        case 0x1b7ee4u: goto label_1b7ee4;
        case 0x1b7ee8u: goto label_1b7ee8;
        case 0x1b7eecu: goto label_1b7eec;
        case 0x1b7ef0u: goto label_1b7ef0;
        case 0x1b7ef4u: goto label_1b7ef4;
        case 0x1b7ef8u: goto label_1b7ef8;
        case 0x1b7efcu: goto label_1b7efc;
        case 0x1b7f00u: goto label_1b7f00;
        case 0x1b7f04u: goto label_1b7f04;
        case 0x1b7f08u: goto label_1b7f08;
        case 0x1b7f0cu: goto label_1b7f0c;
        case 0x1b7f10u: goto label_1b7f10;
        case 0x1b7f14u: goto label_1b7f14;
        case 0x1b7f18u: goto label_1b7f18;
        case 0x1b7f1cu: goto label_1b7f1c;
        case 0x1b7f20u: goto label_1b7f20;
        case 0x1b7f24u: goto label_1b7f24;
        case 0x1b7f28u: goto label_1b7f28;
        case 0x1b7f2cu: goto label_1b7f2c;
        case 0x1b7f30u: goto label_1b7f30;
        case 0x1b7f34u: goto label_1b7f34;
        case 0x1b7f38u: goto label_1b7f38;
        case 0x1b7f3cu: goto label_1b7f3c;
        case 0x1b7f40u: goto label_1b7f40;
        case 0x1b7f44u: goto label_1b7f44;
        case 0x1b7f48u: goto label_1b7f48;
        case 0x1b7f4cu: goto label_1b7f4c;
        case 0x1b7f50u: goto label_1b7f50;
        case 0x1b7f54u: goto label_1b7f54;
        case 0x1b7f58u: goto label_1b7f58;
        case 0x1b7f5cu: goto label_1b7f5c;
        case 0x1b7f60u: goto label_1b7f60;
        case 0x1b7f64u: goto label_1b7f64;
        case 0x1b7f68u: goto label_1b7f68;
        case 0x1b7f6cu: goto label_1b7f6c;
        case 0x1b7f70u: goto label_1b7f70;
        case 0x1b7f74u: goto label_1b7f74;
        case 0x1b7f78u: goto label_1b7f78;
        case 0x1b7f7cu: goto label_1b7f7c;
        case 0x1b7f80u: goto label_1b7f80;
        case 0x1b7f84u: goto label_1b7f84;
        case 0x1b7f88u: goto label_1b7f88;
        case 0x1b7f8cu: goto label_1b7f8c;
        case 0x1b7f90u: goto label_1b7f90;
        case 0x1b7f94u: goto label_1b7f94;
        case 0x1b7f98u: goto label_1b7f98;
        case 0x1b7f9cu: goto label_1b7f9c;
        case 0x1b7fa0u: goto label_1b7fa0;
        case 0x1b7fa4u: goto label_1b7fa4;
        case 0x1b7fa8u: goto label_1b7fa8;
        case 0x1b7facu: goto label_1b7fac;
        case 0x1b7fb0u: goto label_1b7fb0;
        case 0x1b7fb4u: goto label_1b7fb4;
        case 0x1b7fb8u: goto label_1b7fb8;
        case 0x1b7fbcu: goto label_1b7fbc;
        case 0x1b7fc0u: goto label_1b7fc0;
        case 0x1b7fc4u: goto label_1b7fc4;
        case 0x1b7fc8u: goto label_1b7fc8;
        case 0x1b7fccu: goto label_1b7fcc;
        case 0x1b7fd0u: goto label_1b7fd0;
        case 0x1b7fd4u: goto label_1b7fd4;
        case 0x1b7fd8u: goto label_1b7fd8;
        case 0x1b7fdcu: goto label_1b7fdc;
        case 0x1b7fe0u: goto label_1b7fe0;
        case 0x1b7fe4u: goto label_1b7fe4;
        case 0x1b7fe8u: goto label_1b7fe8;
        case 0x1b7fecu: goto label_1b7fec;
        case 0x1b7ff0u: goto label_1b7ff0;
        case 0x1b7ff4u: goto label_1b7ff4;
        case 0x1b7ff8u: goto label_1b7ff8;
        case 0x1b7ffcu: goto label_1b7ffc;
        case 0x1b8000u: goto label_1b8000;
        case 0x1b8004u: goto label_1b8004;
        case 0x1b8008u: goto label_1b8008;
        case 0x1b800cu: goto label_1b800c;
        case 0x1b8010u: goto label_1b8010;
        case 0x1b8014u: goto label_1b8014;
        case 0x1b8018u: goto label_1b8018;
        case 0x1b801cu: goto label_1b801c;
        case 0x1b8020u: goto label_1b8020;
        case 0x1b8024u: goto label_1b8024;
        case 0x1b8028u: goto label_1b8028;
        case 0x1b802cu: goto label_1b802c;
        case 0x1b8030u: goto label_1b8030;
        case 0x1b8034u: goto label_1b8034;
        case 0x1b8038u: goto label_1b8038;
        case 0x1b803cu: goto label_1b803c;
        case 0x1b8040u: goto label_1b8040;
        case 0x1b8044u: goto label_1b8044;
        case 0x1b8048u: goto label_1b8048;
        case 0x1b804cu: goto label_1b804c;
        case 0x1b8050u: goto label_1b8050;
        case 0x1b8054u: goto label_1b8054;
        case 0x1b8058u: goto label_1b8058;
        case 0x1b805cu: goto label_1b805c;
        case 0x1b8060u: goto label_1b8060;
        case 0x1b8064u: goto label_1b8064;
        case 0x1b8068u: goto label_1b8068;
        case 0x1b806cu: goto label_1b806c;
        case 0x1b8070u: goto label_1b8070;
        case 0x1b8074u: goto label_1b8074;
        case 0x1b8078u: goto label_1b8078;
        case 0x1b807cu: goto label_1b807c;
        case 0x1b8080u: goto label_1b8080;
        case 0x1b8084u: goto label_1b8084;
        case 0x1b8088u: goto label_1b8088;
        case 0x1b808cu: goto label_1b808c;
        case 0x1b8090u: goto label_1b8090;
        case 0x1b8094u: goto label_1b8094;
        case 0x1b8098u: goto label_1b8098;
        case 0x1b809cu: goto label_1b809c;
        case 0x1b80a0u: goto label_1b80a0;
        case 0x1b80a4u: goto label_1b80a4;
        case 0x1b80a8u: goto label_1b80a8;
        case 0x1b80acu: goto label_1b80ac;
        case 0x1b80b0u: goto label_1b80b0;
        case 0x1b80b4u: goto label_1b80b4;
        case 0x1b80b8u: goto label_1b80b8;
        case 0x1b80bcu: goto label_1b80bc;
        case 0x1b80c0u: goto label_1b80c0;
        case 0x1b80c4u: goto label_1b80c4;
        case 0x1b80c8u: goto label_1b80c8;
        case 0x1b80ccu: goto label_1b80cc;
        case 0x1b80d0u: goto label_1b80d0;
        case 0x1b80d4u: goto label_1b80d4;
        case 0x1b80d8u: goto label_1b80d8;
        case 0x1b80dcu: goto label_1b80dc;
        case 0x1b80e0u: goto label_1b80e0;
        case 0x1b80e4u: goto label_1b80e4;
        case 0x1b80e8u: goto label_1b80e8;
        case 0x1b80ecu: goto label_1b80ec;
        case 0x1b80f0u: goto label_1b80f0;
        case 0x1b80f4u: goto label_1b80f4;
        case 0x1b80f8u: goto label_1b80f8;
        case 0x1b80fcu: goto label_1b80fc;
        case 0x1b8100u: goto label_1b8100;
        case 0x1b8104u: goto label_1b8104;
        case 0x1b8108u: goto label_1b8108;
        case 0x1b810cu: goto label_1b810c;
        case 0x1b8110u: goto label_1b8110;
        case 0x1b8114u: goto label_1b8114;
        case 0x1b8118u: goto label_1b8118;
        case 0x1b811cu: goto label_1b811c;
        case 0x1b8120u: goto label_1b8120;
        case 0x1b8124u: goto label_1b8124;
        case 0x1b8128u: goto label_1b8128;
        case 0x1b812cu: goto label_1b812c;
        case 0x1b8130u: goto label_1b8130;
        case 0x1b8134u: goto label_1b8134;
        case 0x1b8138u: goto label_1b8138;
        case 0x1b813cu: goto label_1b813c;
        case 0x1b8140u: goto label_1b8140;
        case 0x1b8144u: goto label_1b8144;
        case 0x1b8148u: goto label_1b8148;
        case 0x1b814cu: goto label_1b814c;
        case 0x1b8150u: goto label_1b8150;
        case 0x1b8154u: goto label_1b8154;
        case 0x1b8158u: goto label_1b8158;
        case 0x1b815cu: goto label_1b815c;
        case 0x1b8160u: goto label_1b8160;
        case 0x1b8164u: goto label_1b8164;
        case 0x1b8168u: goto label_1b8168;
        case 0x1b816cu: goto label_1b816c;
        case 0x1b8170u: goto label_1b8170;
        case 0x1b8174u: goto label_1b8174;
        case 0x1b8178u: goto label_1b8178;
        case 0x1b817cu: goto label_1b817c;
        case 0x1b8180u: goto label_1b8180;
        case 0x1b8184u: goto label_1b8184;
        case 0x1b8188u: goto label_1b8188;
        case 0x1b818cu: goto label_1b818c;
        case 0x1b8190u: goto label_1b8190;
        case 0x1b8194u: goto label_1b8194;
        case 0x1b8198u: goto label_1b8198;
        case 0x1b819cu: goto label_1b819c;
        case 0x1b81a0u: goto label_1b81a0;
        case 0x1b81a4u: goto label_1b81a4;
        case 0x1b81a8u: goto label_1b81a8;
        case 0x1b81acu: goto label_1b81ac;
        case 0x1b81b0u: goto label_1b81b0;
        case 0x1b81b4u: goto label_1b81b4;
        case 0x1b81b8u: goto label_1b81b8;
        case 0x1b81bcu: goto label_1b81bc;
        case 0x1b81c0u: goto label_1b81c0;
        case 0x1b81c4u: goto label_1b81c4;
        case 0x1b81c8u: goto label_1b81c8;
        case 0x1b81ccu: goto label_1b81cc;
        case 0x1b81d0u: goto label_1b81d0;
        case 0x1b81d4u: goto label_1b81d4;
        case 0x1b81d8u: goto label_1b81d8;
        case 0x1b81dcu: goto label_1b81dc;
        case 0x1b81e0u: goto label_1b81e0;
        case 0x1b81e4u: goto label_1b81e4;
        case 0x1b81e8u: goto label_1b81e8;
        case 0x1b81ecu: goto label_1b81ec;
        case 0x1b81f0u: goto label_1b81f0;
        case 0x1b81f4u: goto label_1b81f4;
        case 0x1b81f8u: goto label_1b81f8;
        case 0x1b81fcu: goto label_1b81fc;
        case 0x1b8200u: goto label_1b8200;
        case 0x1b8204u: goto label_1b8204;
        case 0x1b8208u: goto label_1b8208;
        case 0x1b820cu: goto label_1b820c;
        case 0x1b8210u: goto label_1b8210;
        case 0x1b8214u: goto label_1b8214;
        case 0x1b8218u: goto label_1b8218;
        case 0x1b821cu: goto label_1b821c;
        case 0x1b8220u: goto label_1b8220;
        case 0x1b8224u: goto label_1b8224;
        case 0x1b8228u: goto label_1b8228;
        case 0x1b822cu: goto label_1b822c;
        case 0x1b8230u: goto label_1b8230;
        case 0x1b8234u: goto label_1b8234;
        case 0x1b8238u: goto label_1b8238;
        case 0x1b823cu: goto label_1b823c;
        case 0x1b8240u: goto label_1b8240;
        case 0x1b8244u: goto label_1b8244;
        case 0x1b8248u: goto label_1b8248;
        case 0x1b824cu: goto label_1b824c;
        case 0x1b8250u: goto label_1b8250;
        case 0x1b8254u: goto label_1b8254;
        case 0x1b8258u: goto label_1b8258;
        case 0x1b825cu: goto label_1b825c;
        case 0x1b8260u: goto label_1b8260;
        case 0x1b8264u: goto label_1b8264;
        case 0x1b8268u: goto label_1b8268;
        case 0x1b826cu: goto label_1b826c;
        case 0x1b8270u: goto label_1b8270;
        case 0x1b8274u: goto label_1b8274;
        case 0x1b8278u: goto label_1b8278;
        case 0x1b827cu: goto label_1b827c;
        case 0x1b8280u: goto label_1b8280;
        case 0x1b8284u: goto label_1b8284;
        case 0x1b8288u: goto label_1b8288;
        case 0x1b828cu: goto label_1b828c;
        case 0x1b8290u: goto label_1b8290;
        case 0x1b8294u: goto label_1b8294;
        case 0x1b8298u: goto label_1b8298;
        case 0x1b829cu: goto label_1b829c;
        case 0x1b82a0u: goto label_1b82a0;
        case 0x1b82a4u: goto label_1b82a4;
        case 0x1b82a8u: goto label_1b82a8;
        case 0x1b82acu: goto label_1b82ac;
        case 0x1b82b0u: goto label_1b82b0;
        case 0x1b82b4u: goto label_1b82b4;
        case 0x1b82b8u: goto label_1b82b8;
        case 0x1b82bcu: goto label_1b82bc;
        case 0x1b82c0u: goto label_1b82c0;
        case 0x1b82c4u: goto label_1b82c4;
        case 0x1b82c8u: goto label_1b82c8;
        case 0x1b82ccu: goto label_1b82cc;
        case 0x1b82d0u: goto label_1b82d0;
        case 0x1b82d4u: goto label_1b82d4;
        case 0x1b82d8u: goto label_1b82d8;
        case 0x1b82dcu: goto label_1b82dc;
        case 0x1b82e0u: goto label_1b82e0;
        case 0x1b82e4u: goto label_1b82e4;
        case 0x1b82e8u: goto label_1b82e8;
        case 0x1b82ecu: goto label_1b82ec;
        case 0x1b82f0u: goto label_1b82f0;
        case 0x1b82f4u: goto label_1b82f4;
        case 0x1b82f8u: goto label_1b82f8;
        case 0x1b82fcu: goto label_1b82fc;
        case 0x1b8300u: goto label_1b8300;
        case 0x1b8304u: goto label_1b8304;
        default: return;
    }

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
    { ctx->pc = 0x1b7ab8; return; }
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
            goto label_1b7d70;
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
            goto label_1b7d74;
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
            goto label_1b7d74;
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
            goto label_1b7d70;
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
label_1b7d70:
    // 0x1b7d70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7d74:
    // 0x1b7d74: 0x3e00008  jr          $ra
label_1b7d78:
    if (ctx->pc == 0x1B7D78u) {
        ctx->pc = 0x1B7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D74u;
        // 0x1b7d78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7D7Cu;
        goto label_1b7d7c;
    }
    ctx->pc = 0x1B7D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D74u;
        // 0x1b7d78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7D7Cu;
label_1b7d7c:
    // 0x1b7d7c: 0x0  nop
    ctx->pc = 0x1b7d7cu;
    // NOP
label_1b7d80:
    // 0x1b7d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b7d84:
    // 0x1b7d84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b7d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1b7d88:
    // 0x1b7d88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b7d8c:
    // 0x1b7d8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b7d90:
    // 0x1b7d90: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1b7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_1b7d94:
    // 0x1b7d94: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1b7d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_1b7d98:
    // 0x1b7d98: 0xc06dc6a  jal         func_1B71A8
label_1b7d9c:
    if (ctx->pc == 0x1B7D9Cu) {
        ctx->pc = 0x1B7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D98u;
        // 0x1b7d9c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7DA0u;
        goto label_1b7da0;
    }
    ctx->pc = 0x1B7D98u;
    SET_GPR_U32(ctx, 31, 0x1B7DA0u);
    ctx->pc = 0x1B7D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D98u;
    // 0x1b7d9c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A8u;
    { ctx->pc = 0x1b71a8; return; }
    ctx->pc = 0x1B7DA0u;
label_1b7da0:
    // 0x1b7da0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b7da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7da4:
    // 0x1b7da4: 0x3e00008  jr          $ra
label_1b7da8:
    if (ctx->pc == 0x1B7DA8u) {
        ctx->pc = 0x1B7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DA4u;
        // 0x1b7da8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7DACu;
        goto label_1b7dac;
    }
    ctx->pc = 0x1B7DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DA4u;
        // 0x1b7da8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7DACu;
label_1b7dac:
    // 0x1b7dac: 0x0  nop
    ctx->pc = 0x1b7dacu;
    // NOP
label_1b7db0:
    // 0x1b7db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b7db4:
    // 0x1b7db4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1b7db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
label_1b7db8:
    // 0x1b7db8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b7db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b7dbc:
    // 0x1b7dbc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b7dc0:
    // 0x1b7dc0: 0xc06dcb0  jal         func_1B72C0
label_1b7dc4:
    if (ctx->pc == 0x1B7DC4u) {
        ctx->pc = 0x1B7DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DC0u;
        // 0x1b7dc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7DC8u;
        goto label_1b7dc8;
    }
    ctx->pc = 0x1B7DC0u;
    SET_GPR_U32(ctx, 31, 0x1B7DC8u);
    ctx->pc = 0x1B7DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DC0u;
    // 0x1b7dc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7DC8u;
label_1b7dc8:
    // 0x1b7dc8: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x1b7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
label_1b7dcc:
    // 0x1b7dcc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1b7dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_1b7dd0:
    // 0x1b7dd0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7dd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7dd4:
    // 0x1b7dd4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7dd8:
    // 0x1b7dd8: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x1b7dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
label_1b7ddc:
    // 0x1b7ddc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b7ddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1b7de0:
    // 0x1b7de0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b7de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1b7de4:
    // 0x1b7de4: 0x34670001  ori         $a3, $v1, 0x1
    ctx->pc = 0x1b7de4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1b7de8:
    // 0x1b7de8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1b7de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7dec:
    // 0x1b7dec: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1b7decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7df0:
    // 0x1b7df0: 0xc06dc4e  jal         func_1B7138
label_1b7df4:
    if (ctx->pc == 0x1B7DF4u) {
        ctx->pc = 0x1B7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DF0u;
        // 0x1b7df4: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7DF8u;
        goto label_1b7df8;
    }
    ctx->pc = 0x1B7DF0u;
    SET_GPR_U32(ctx, 31, 0x1B7DF8u);
    ctx->pc = 0x1B7DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7DF0u;
    // 0x1b7df4: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7138u;
    { ctx->pc = 0x1b7138; return; }
    ctx->pc = 0x1B7DF8u;
label_1b7df8:
    // 0x1b7df8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7dfc:
    // 0x1b7dfc: 0x3e00008  jr          $ra
label_1b7e00:
    if (ctx->pc == 0x1B7E00u) {
        ctx->pc = 0x1B7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DFCu;
        // 0x1b7e00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E04u;
        goto label_1b7e04;
    }
    ctx->pc = 0x1B7DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DFCu;
        // 0x1b7e00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7E04u;
label_1b7e04:
    // 0x1b7e04: 0x0  nop
    ctx->pc = 0x1b7e04u;
    // NOP
label_1b7e08:
    // 0x1b7e08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b7e0c:
    // 0x1b7e0c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1b7e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
label_1b7e10:
    // 0x1b7e10: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b7e14:
    // 0x1b7e14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1b7e18:
    // 0x1b7e18: 0xc06dcb0  jal         func_1B72C0
label_1b7e1c:
    if (ctx->pc == 0x1B7E1Cu) {
        ctx->pc = 0x1B7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E18u;
        // 0x1b7e1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E20u;
        goto label_1b7e20;
    }
    ctx->pc = 0x1B7E18u;
    SET_GPR_U32(ctx, 31, 0x1B7E20u);
    ctx->pc = 0x1B7E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E18u;
    // 0x1b7e1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    { ctx->pc = 0x1b72c0; return; }
    ctx->pc = 0x1B7E20u;
label_1b7e20:
    // 0x1b7e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e24:
    // 0x1b7e24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7e28:
    // 0x1b7e28: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x1b7e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
label_1b7e2c:
    // 0x1b7e2c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1b7e30:
    if (ctx->pc == 0x1B7E30u) {
        ctx->pc = 0x1B7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E2Cu;
        // 0x1b7e30: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E34u;
        goto label_1b7e34;
    }
    ctx->pc = 0x1B7E2Cu;
    {
        const bool branch_taken_0x1b7e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E2Cu;
        // 0x1b7e30: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e2c) {
            ctx->pc = 0x1B7E9Cu;
            goto label_1b7e9c;
        }
    }
    ctx->pc = 0x1B7E34u;
label_1b7e34:
    // 0x1b7e34: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
label_1b7e38:
    if (ctx->pc == 0x1B7E38u) {
        ctx->pc = 0x1B7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E34u;
        // 0x1b7e38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E3Cu;
        goto label_1b7e3c;
    }
    ctx->pc = 0x1B7E34u;
    {
        const bool branch_taken_0x1b7e34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E34u;
        // 0x1b7e38: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e34) {
            ctx->pc = 0x1B7EA0u;
            goto label_1b7ea0;
        }
    }
    ctx->pc = 0x1B7E3Cu;
label_1b7e3c:
    // 0x1b7e3c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b7e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7e40:
    // 0x1b7e40: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_1b7e44:
    if (ctx->pc == 0x1B7E44u) {
        ctx->pc = 0x1B7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E40u;
        // 0x1b7e44: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E48u;
        goto label_1b7e48;
    }
    ctx->pc = 0x1B7E40u;
    {
        const bool branch_taken_0x1b7e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E40u;
        // 0x1b7e44: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e40) {
            ctx->pc = 0x1B7EA0u;
            goto label_1b7ea0;
        }
    }
    ctx->pc = 0x1B7E48u;
label_1b7e48:
    // 0x1b7e48: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1b7e4c:
    if (ctx->pc == 0x1B7E4Cu) {
        ctx->pc = 0x1B7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E48u;
        // 0x1b7e4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E50u;
        goto label_1b7e50;
    }
    ctx->pc = 0x1B7E48u;
    {
        const bool branch_taken_0x1b7e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E48u;
        // 0x1b7e4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e48) {
            ctx->pc = 0x1B7EA0u;
            goto label_1b7ea0;
        }
    }
    ctx->pc = 0x1B7E50u;
label_1b7e50:
    // 0x1b7e50: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1b7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b7e54:
    // 0x1b7e54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7e54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7e58:
    // 0x1b7e58: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
label_1b7e5c:
    if (ctx->pc == 0x1B7E5Cu) {
        ctx->pc = 0x1B7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E58u;
        // 0x1b7e5c: 0x28830020  slti        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E60u;
        goto label_1b7e60;
    }
    ctx->pc = 0x1B7E58u;
    {
        const bool branch_taken_0x1b7e58 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E58u;
        // 0x1b7e5c: 0x28830020  slti        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e58) {
            ctx->pc = 0x1B7EA0u;
            goto label_1b7ea0;
        }
    }
    ctx->pc = 0x1B7E60u;
label_1b7e60:
    // 0x1b7e60: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1b7e64:
    if (ctx->pc == 0x1B7E64u) {
        ctx->pc = 0x1B7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E60u;
        // 0x1b7e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E68u;
        goto label_1b7e68;
    }
    ctx->pc = 0x1B7E60u;
    {
        const bool branch_taken_0x1b7e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E60u;
        // 0x1b7e64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e60) {
            ctx->pc = 0x1B7EA0u;
            goto label_1b7ea0;
        }
    }
    ctx->pc = 0x1B7E68u;
label_1b7e68:
    // 0x1b7e68: 0x2882003d  slti        $v0, $a0, 0x3D
    ctx->pc = 0x1b7e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
label_1b7e6c:
    // 0x1b7e6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b7e70:
    if (ctx->pc == 0x1B7E70u) {
        ctx->pc = 0x1B7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E6Cu;
        // 0x1b7e70: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E74u;
        goto label_1b7e74;
    }
    ctx->pc = 0x1B7E6Cu;
    {
        const bool branch_taken_0x1b7e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E6Cu;
        // 0x1b7e70: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e6c) {
            ctx->pc = 0x1B7E88u;
            goto label_1b7e88;
        }
    }
    ctx->pc = 0x1B7E74u;
label_1b7e74:
    // 0x1b7e74: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7e78:
    // 0x1b7e78: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x1b7e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
label_1b7e7c:
    // 0x1b7e7c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b7e80:
    if (ctx->pc == 0x1B7E80u) {
        ctx->pc = 0x1B7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E7Cu;
        // 0x1b7e80: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7E84u;
        goto label_1b7e84;
    }
    ctx->pc = 0x1B7E7Cu;
    {
        const bool branch_taken_0x1b7e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E7Cu;
        // 0x1b7e80: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7e7c) {
            ctx->pc = 0x1B7E94u;
            goto label_1b7e94;
        }
    }
    ctx->pc = 0x1B7E84u;
label_1b7e84:
    // 0x1b7e84: 0x0  nop
    ctx->pc = 0x1b7e84u;
    // NOP
label_1b7e88:
    // 0x1b7e88: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7e88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b7e8c:
    // 0x1b7e8c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b7e90:
    // 0x1b7e90: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1b7e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_1b7e94:
    // 0x1b7e94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b7e98:
    // 0x1b7e98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7e98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b7e9c:
    // 0x1b7e9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7ea0:
    // 0x1b7ea0: 0x3e00008  jr          $ra
label_1b7ea4:
    if (ctx->pc == 0x1B7EA4u) {
        ctx->pc = 0x1B7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EA0u;
        // 0x1b7ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7EA8u;
        goto label_1b7ea8;
    }
    ctx->pc = 0x1B7EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EA0u;
        // 0x1b7ea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7EA8u;
label_1b7ea8:
    // 0x1b7ea8: 0x0  nop
    ctx->pc = 0x1b7ea8u;
    // NOP
label_1b7eac:
    // 0x1b7eac: 0x0  nop
    ctx->pc = 0x1b7eacu;
    // NOP
label_1b7eb0:
    // 0x1b7eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b7eb4:
    // 0x1b7eb4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1b7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1b7eb8:
    // 0x1b7eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b7ebc:
    // 0x1b7ebc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b7ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1b7ec0:
    // 0x1b7ec0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1b7ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1b7ec4:
    // 0x1b7ec4: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1b7ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1b7ec8:
    // 0x1b7ec8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1b7ecc:
    // 0x1b7ecc: 0xffa40038  sd          $a0, 0x38($sp)
    ctx->pc = 0x1b7eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 4));
label_1b7ed0:
    // 0x1b7ed0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1b7ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1b7ed4:
    // 0x1b7ed4: 0xffa50030  sd          $a1, 0x30($sp)
    ctx->pc = 0x1b7ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 5));
label_1b7ed8:
    // 0x1b7ed8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b7ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1b7edc:
    // 0x1b7edc: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1b7edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
label_1b7ee0:
    // 0x1b7ee0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b7ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b7ee4:
    // 0x1b7ee4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1b7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1b7ee8:
    // 0x1b7ee8: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1b7ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1b7eec:
    // 0x1b7eec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7ef0:
    // 0x1b7ef0: 0xc0692a8  jal         func_1A4AA0
label_1b7ef4:
    if (ctx->pc == 0x1B7EF4u) {
        ctx->pc = 0x1B7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EF0u;
        // 0x1b7ef4: 0xffa30020  sd          $v1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7EF8u;
        goto label_1b7ef8;
    }
    ctx->pc = 0x1B7EF0u;
    SET_GPR_U32(ctx, 31, 0x1B7EF8u);
    ctx->pc = 0x1B7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EF0u;
    // 0x1b7ef4: 0xffa30020  sd          $v1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1B7EF8u;
label_1b7ef8:
    // 0x1b7ef8: 0xc066998  jal         func_19A660
label_1b7efc:
    if (ctx->pc == 0x1B7EFCu) {
        ctx->pc = 0x1B7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7EF8u;
        // 0x1b7efc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F00u;
        goto label_1b7f00;
    }
    ctx->pc = 0x1B7EF8u;
    SET_GPR_U32(ctx, 31, 0x1B7F00u);
    ctx->pc = 0x1B7EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7EF8u;
    // 0x1b7efc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A660u, 0x1B7EF8u, 0x1B7F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F00u;
label_1b7f00:
    // 0x1b7f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b7f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7f04:
    // 0x1b7f04: 0xc066a6c  jal         func_19A9B0
label_1b7f08:
    if (ctx->pc == 0x1B7F08u) {
        ctx->pc = 0x1B7F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F04u;
        // 0x1b7f08: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F0Cu;
        goto label_1b7f0c;
    }
    ctx->pc = 0x1B7F04u;
    SET_GPR_U32(ctx, 31, 0x1B7F0Cu);
    ctx->pc = 0x1B7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F04u;
    // 0x1b7f08: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x1B7F04u, 0x1B7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F0Cu;
label_1b7f0c:
    // 0x1b7f0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7f10:
    // 0x1b7f10: 0xc066440  jal         func_199100
label_1b7f14:
    if (ctx->pc == 0x1B7F14u) {
        ctx->pc = 0x1B7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F10u;
        // 0x1b7f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F18u;
        goto label_1b7f18;
    }
    ctx->pc = 0x1B7F10u;
    SET_GPR_U32(ctx, 31, 0x1B7F18u);
    ctx->pc = 0x1B7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7F10u;
    // 0x1b7f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x1B7F10u, 0x1B7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7F18u;
label_1b7f18:
    // 0x1b7f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b7f1c:
    // 0x1b7f1c: 0x3e00008  jr          $ra
label_1b7f20:
    if (ctx->pc == 0x1B7F20u) {
        ctx->pc = 0x1B7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F1Cu;
        // 0x1b7f20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F24u;
        goto label_1b7f24;
    }
    ctx->pc = 0x1B7F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F1Cu;
        // 0x1b7f20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7F24u;
label_1b7f24:
    // 0x1b7f24: 0x0  nop
    ctx->pc = 0x1b7f24u;
    // NOP
label_1b7f28:
    // 0x1b7f28: 0x0  nop
    ctx->pc = 0x1b7f28u;
    // NOP
label_1b7f2c:
    // 0x1b7f2c: 0x0  nop
    ctx->pc = 0x1b7f2cu;
    // NOP
label_1b7f30:
    // 0x1b7f30: 0x3e00008  jr          $ra
label_1b7f34:
    if (ctx->pc == 0x1B7F34u) {
        ctx->pc = 0x1B7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F30u;
        // 0x1b7f34: 0xff848810  sd          $a0, -0x77F0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936592), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F38u;
        goto label_1b7f38;
    }
    ctx->pc = 0x1B7F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F30u;
        // 0x1b7f34: 0xff848810  sd          $a0, -0x77F0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936592), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7F38u;
label_1b7f38:
    // 0x1b7f38: 0x0  nop
    ctx->pc = 0x1b7f38u;
    // NOP
label_1b7f3c:
    // 0x1b7f3c: 0x0  nop
    ctx->pc = 0x1b7f3cu;
    // NOP
label_1b7f40:
    // 0x1b7f40: 0x3e00008  jr          $ra
label_1b7f44:
    if (ctx->pc == 0x1B7F44u) {
        ctx->pc = 0x1B7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F40u;
        // 0x1b7f44: 0xdf828810  ld          $v0, -0x77F0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F48u;
        goto label_1b7f48;
    }
    ctx->pc = 0x1B7F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F40u;
        // 0x1b7f44: 0xdf828810  ld          $v0, -0x77F0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936592)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7F48u;
label_1b7f48:
    // 0x1b7f48: 0x0  nop
    ctx->pc = 0x1b7f48u;
    // NOP
label_1b7f4c:
    // 0x1b7f4c: 0x0  nop
    ctx->pc = 0x1b7f4cu;
    // NOP
label_1b7f50:
    // 0x1b7f50: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x1b7f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1b7f54:
    // 0x1b7f54: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1b7f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1b7f58:
    // 0x1b7f58: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b7f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1b7f5c:
    // 0x1b7f5c: 0x42a38  dsll        $a1, $a0, 8
    ctx->pc = 0x1b7f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 8);
label_1b7f60:
    // 0x1b7f60: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1b7f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_1b7f64:
    // 0x1b7f64: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x1b7f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_1b7f68:
    // 0x1b7f68: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b7f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b7f6c:
    // 0x1b7f6c: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x1b7f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1b7f70:
    // 0x1b7f70: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1b7f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_1b7f74:
    // 0x1b7f74: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1b7f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1b7f78:
    // 0x1b7f78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1b7f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1b7f7c:
    // 0x1b7f7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b7f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b7f80:
    // 0x1b7f80: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1b7f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1b7f84:
    // 0x1b7f84: 0x3e00008  jr          $ra
label_1b7f88:
    if (ctx->pc == 0x1B7F88u) {
        ctx->pc = 0x1B7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F84u;
        // 0x1b7f88: 0xff838810  sd          $v1, -0x77F0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936592), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7F8Cu;
        goto label_1b7f8c;
    }
    ctx->pc = 0x1B7F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7F84u;
        // 0x1b7f88: 0xff838810  sd          $v1, -0x77F0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936592), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7F8Cu;
label_1b7f8c:
    // 0x1b7f8c: 0x0  nop
    ctx->pc = 0x1b7f8cu;
    // NOP
label_1b7f90:
    // 0x1b7f90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b7f94:
    // 0x1b7f94: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b7f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b7f98:
    // 0x1b7f98: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1b7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1b7f9c:
    // 0x1b7f9c: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x1b7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_1b7fa0:
    // 0x1b7fa0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1b7fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_1b7fa4:
    // 0x1b7fa4: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1b7fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1b7fa8:
    // 0x1b7fa8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1b7fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1b7fac:
    // 0x1b7fac: 0x0  nop
    ctx->pc = 0x1b7facu;
    // NOP
label_1b7fb0:
    // 0x1b7fb0: 0x0  nop
    ctx->pc = 0x1b7fb0u;
    // NOP
label_1b7fb4:
    // 0x1b7fb4: 0x2010  mfhi        $a0
    ctx->pc = 0x1b7fb4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1b7fb8:
    // 0x1b7fb8: 0x51843  sra         $v1, $a1, 1
    ctx->pc = 0x1b7fb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
label_1b7fbc:
    // 0x1b7fbc: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x1b7fbcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
label_1b7fc0:
    // 0x1b7fc0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1b7fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1b7fc4:
    // 0x1b7fc4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1b7fc8:
    if (ctx->pc == 0x1B7FC8u) {
        ctx->pc = 0x1B7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FC4u;
        // 0x1b7fc8: 0x2484027c  addiu       $a0, $a0, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7FCCu;
        goto label_1b7fcc;
    }
    ctx->pc = 0x1B7FC4u;
    {
        const bool branch_taken_0x1b7fc4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7FC4u;
        // 0x1b7fc8: 0x2484027c  addiu       $a0, $a0, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7fc4) {
            ctx->pc = 0x1B7FD4u;
            goto label_1b7fd4;
        }
    }
    ctx->pc = 0x1B7FCCu;
label_1b7fcc:
    // 0x1b7fcc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1b7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b7fd0:
    // 0x1b7fd0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1b7fd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1b7fd4:
    // 0x1b7fd4: 0x30880fff  andi        $t0, $a0, 0xFFF
    ctx->pc = 0x1b7fd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_1b7fd8:
    // 0x1b7fd8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1b7fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1b7fdc:
    // 0x1b7fdc: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1b7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1b7fe0:
    // 0x1b7fe0: 0x24a30032  addiu       $v1, $a1, 0x32
    ctx->pc = 0x1b7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
label_1b7fe4:
    // 0x1b7fe4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1b7fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
label_1b7fe8:
    // 0x1b7fe8: 0x2407f000  addiu       $a3, $zero, -0x1000
    ctx->pc = 0x1b7fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_1b7fec:
    // 0x1b7fec: 0x33300  sll         $a2, $v1, 12
    ctx->pc = 0x1b7fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_1b7ff0:
    // 0x1b7ff0: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1b7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_1b7ff4:
    // 0x1b7ff4: 0x34650fff  ori         $a1, $v1, 0xFFF
    ctx->pc = 0x1b7ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_1b7ff8:
    // 0x1b7ff8: 0x94830018  lhu         $v1, 0x18($a0)
    ctx->pc = 0x1b7ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
label_1b7ffc:
    // 0x1b7ffc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1b7ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_1b8000:
    // 0x1b8000: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1b8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_1b8004:
    // 0x1b8004: 0xa4830018  sh          $v1, 0x18($a0)
    ctx->pc = 0x1b8004u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
label_1b8008:
    // 0x1b8008: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1b8008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1b800c:
    // 0x1b800c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1b800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1b8010:
    // 0x1b8010: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b8010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1b8014:
    // 0x1b8014: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b8014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1b8018:
    // 0x1b8018: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1b8018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1b801c:
    // 0x1b801c: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1b801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1b8020:
    // 0x1b8020: 0x94830040  lhu         $v1, 0x40($a0)
    ctx->pc = 0x1b8020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
label_1b8024:
    // 0x1b8024: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1b8024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_1b8028:
    // 0x1b8028: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1b8028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_1b802c:
    // 0x1b802c: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x1b802cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
label_1b8030:
    // 0x1b8030: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1b8030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1b8034:
    // 0x1b8034: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1b8034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1b8038:
    // 0x1b8038: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b8038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1b803c:
    // 0x1b803c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b803cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_1b8040:
    // 0x1b8040: 0x3e00008  jr          $ra
label_1b8044:
    if (ctx->pc == 0x1B8044u) {
        ctx->pc = 0x1B8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8040u;
        // 0x1b8044: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8048u;
        goto label_1b8048;
    }
    ctx->pc = 0x1B8040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8040u;
        // 0x1b8044: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8048u;
label_1b8048:
    // 0x1b8048: 0x0  nop
    ctx->pc = 0x1b8048u;
    // NOP
label_1b804c:
    // 0x1b804c: 0x0  nop
    ctx->pc = 0x1b804cu;
    // NOP
label_1b8050:
    // 0x1b8050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b8054:
    // 0x1b8054: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b8058:
    // 0x1b8058: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b8058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1b805c:
    // 0x1b805c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b805cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1b8060:
    // 0x1b8060: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b8060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b8064:
    // 0x1b8064: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1b8064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1b8068:
    // 0x1b8068: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b8068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b806c:
    // 0x1b806c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b806cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8070:
    // 0x1b8070: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b8070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b8074:
    // 0x1b8074: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b8074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b8078:
    // 0x1b8078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b807c:
    // 0x1b807c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b807cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b8080:
    // 0x1b8080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b8084:
    // 0x1b8084: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b8084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b8088:
    // 0x1b8088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b808c:
    // 0x1b808c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8090:
    // 0x1b8090: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1b8090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1b8094:
    // 0x1b8094: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b8094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1b8098:
    // 0x1b8098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b809c:
    // 0x1b809c: 0x2813c  dsll32      $s0, $v0, 4
    ctx->pc = 0x1b809cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 4));
label_1b80a0:
    // 0x1b80a0: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x1b80a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
label_1b80a4:
    // 0x1b80a4: 0xc066c5c  jal         func_19B170
label_1b80a8:
    if (ctx->pc == 0x1B80A8u) {
        ctx->pc = 0x1B80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80A4u;
        // 0x1b80a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B80ACu;
        goto label_1b80ac;
    }
    ctx->pc = 0x1B80A4u;
    SET_GPR_U32(ctx, 31, 0x1B80ACu);
    ctx->pc = 0x1B80A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80A4u;
    // 0x1b80a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B170u, 0x1B80A4u, 0x1B80ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80ACu;
label_1b80ac:
    // 0x1b80ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b80acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b80b0:
    // 0x1b80b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b80b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b80b4:
    // 0x1b80b4: 0xc066d10  jal         func_19B440
label_1b80b8:
    if (ctx->pc == 0x1B80B8u) {
        ctx->pc = 0x1B80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80B4u;
        // 0x1b80b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B80BCu;
        goto label_1b80bc;
    }
    ctx->pc = 0x1B80B4u;
    SET_GPR_U32(ctx, 31, 0x1B80BCu);
    ctx->pc = 0x1B80B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80B4u;
    // 0x1b80b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x1B80B4u, 0x1B80BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80BCu;
label_1b80bc:
    // 0x1b80bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b80bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b80c0:
    // 0x1b80c0: 0xc066d30  jal         func_19B4C0
label_1b80c4:
    if (ctx->pc == 0x1B80C4u) {
        ctx->pc = 0x1B80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80C0u;
        // 0x1b80c4: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B80C8u;
        goto label_1b80c8;
    }
    ctx->pc = 0x1B80C0u;
    SET_GPR_U32(ctx, 31, 0x1B80C8u);
    ctx->pc = 0x1B80C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80C0u;
    // 0x1b80c4: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4C0u, 0x1B80C0u, 0x1B80C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80C8u;
label_1b80c8:
    // 0x1b80c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b80c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b80cc:
    // 0x1b80cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b80ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b80d0:
    // 0x1b80d0: 0xc066d10  jal         func_19B440
label_1b80d4:
    if (ctx->pc == 0x1B80D4u) {
        ctx->pc = 0x1B80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80D0u;
        // 0x1b80d4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B80D8u;
        goto label_1b80d8;
    }
    ctx->pc = 0x1B80D0u;
    SET_GPR_U32(ctx, 31, 0x1B80D8u);
    ctx->pc = 0x1B80D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80D0u;
    // 0x1b80d4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x1B80D0u, 0x1B80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80D8u;
label_1b80d8:
    // 0x1b80d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b80d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b80dc:
    // 0x1b80dc: 0xc066ce8  jal         func_19B3A0
label_1b80e0:
    if (ctx->pc == 0x1B80E0u) {
        ctx->pc = 0x1B80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80DCu;
        // 0x1b80e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B80E4u;
        goto label_1b80e4;
    }
    ctx->pc = 0x1B80DCu;
    SET_GPR_U32(ctx, 31, 0x1B80E4u);
    ctx->pc = 0x1B80E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B80DCu;
    // 0x1b80e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B3A0u, 0x1B80DCu, 0x1B80E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B80E4u;
label_1b80e4:
    // 0x1b80e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1b80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1b80e8:
    // 0x1b80e8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1b80e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1b80ec:
    // 0x1b80ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b80ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1b80f0:
    // 0x1b80f0: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x1b80f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1b80f4:
    // 0x1b80f4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b80f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b80f8:
    // 0x1b80f8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1b80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1b80fc:
    // 0x1b80fc: 0xffa30070  sd          $v1, 0x70($sp)
    ctx->pc = 0x1b80fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 3));
label_1b8100:
    // 0x1b8100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8104:
    // 0x1b8104: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1b8104u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1b8108:
    // 0x1b8108: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1b8108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b810c:
    // 0x1b810c: 0xc066d5c  jal         func_19B570
label_1b8110:
    if (ctx->pc == 0x1B8110u) {
        ctx->pc = 0x1B8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B810Cu;
        // 0x1b8110: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8114u;
        goto label_1b8114;
    }
    ctx->pc = 0x1B810Cu;
    SET_GPR_U32(ctx, 31, 0x1B8114u);
    ctx->pc = 0x1B8110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B810Cu;
    // 0x1b8110: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B570u, 0x1B810Cu, 0x1B8114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8114u;
label_1b8114:
    // 0x1b8114: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1b8114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_1b8118:
    // 0x1b8118: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x1b8118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
label_1b811c:
    // 0x1b811c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b811cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b8120:
    // 0x1b8120: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b8120u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1b8124:
    // 0x1b8124: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1b8124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_1b8128:
    // 0x1b8128: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1b8128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b812c:
    // 0x1b812c: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1b812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_1b8130:
    // 0x1b8130: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b8134:
    // 0x1b8134: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b8134u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b8138:
    // 0x1b8138: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b8138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b813c:
    // 0x1b813c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b8140:
    // 0x1b8140: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1b8140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b8144:
    // 0x1b8144: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1b8144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_1b8148:
    // 0x1b8148: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b8148u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b814c:
    // 0x1b814c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b814cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_1b8150:
    // 0x1b8150: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b8150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b8154:
    // 0x1b8154: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1b8154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1b8158:
    // 0x1b8158: 0xffa30070  sd          $v1, 0x70($sp)
    ctx->pc = 0x1b8158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 3));
label_1b815c:
    // 0x1b815c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8160:
    // 0x1b8160: 0xc066d5c  jal         func_19B570
label_1b8164:
    if (ctx->pc == 0x1B8164u) {
        ctx->pc = 0x1B8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8160u;
        // 0x1b8164: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8168u;
        goto label_1b8168;
    }
    ctx->pc = 0x1B8160u;
    SET_GPR_U32(ctx, 31, 0x1B8168u);
    ctx->pc = 0x1B8164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8160u;
    // 0x1b8164: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B570u, 0x1B8160u, 0x1B8168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8168u;
label_1b8168:
    // 0x1b8168: 0xc066cfe  jal         func_19B3F8
label_1b816c:
    if (ctx->pc == 0x1B816Cu) {
        ctx->pc = 0x1B816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8168u;
        // 0x1b816c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8170u;
        goto label_1b8170;
    }
    ctx->pc = 0x1B8168u;
    SET_GPR_U32(ctx, 31, 0x1B8170u);
    ctx->pc = 0x1B816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8168u;
    // 0x1b816c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B3F8u, 0x1B8168u, 0x1B8170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8170u;
label_1b8170:
    // 0x1b8170: 0xc066c46  jal         func_19B118
label_1b8174:
    if (ctx->pc == 0x1B8174u) {
        ctx->pc = 0x1B8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8170u;
        // 0x1b8174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8178u;
        goto label_1b8178;
    }
    ctx->pc = 0x1B8170u;
    SET_GPR_U32(ctx, 31, 0x1B8178u);
    ctx->pc = 0x1B8174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8170u;
    // 0x1b8174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x1B8170u, 0x1B8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8178u;
label_1b8178:
    // 0x1b8178: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b8178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b817c:
    // 0x1b817c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b817cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b8180:
    // 0x1b8180: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b8180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8184:
    // 0x1b8184: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b8184u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8188:
    // 0x1b8188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b8188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b818c:
    // 0x1b818c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b818cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8190:
    // 0x1b8190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8194:
    // 0x1b8194: 0x3e00008  jr          $ra
label_1b8198:
    if (ctx->pc == 0x1B8198u) {
        ctx->pc = 0x1B8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8194u;
        // 0x1b8198: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B819Cu;
        goto label_1b819c;
    }
    ctx->pc = 0x1B8194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8194u;
        // 0x1b8198: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B819Cu;
label_1b819c:
    // 0x1b819c: 0x0  nop
    ctx->pc = 0x1b819cu;
    // NOP
label_1b81a0:
    // 0x1b81a0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b81a4:
    // 0x1b81a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b81a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b81a8:
    // 0x1b81a8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1b81ac:
    // 0x1b81ac: 0x24637800  addiu       $v1, $v1, 0x7800
    ctx->pc = 0x1b81acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30720));
label_1b81b0:
    // 0x1b81b0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b81b4:
    // 0x1b81b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b81b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b81b8:
    // 0x1b81b8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1b81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1b81bc:
    // 0x1b81bc: 0xc066c3e  jal         func_19B0F8
label_1b81c0:
    if (ctx->pc == 0x1B81C0u) {
        ctx->pc = 0x1B81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81BCu;
        // 0x1b81c0: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B81C4u;
        goto label_1b81c4;
    }
    ctx->pc = 0x1B81BCu;
    SET_GPR_U32(ctx, 31, 0x1B81C4u);
    ctx->pc = 0x1B81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81BCu;
    // 0x1b81c0: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B0F8u, 0x1B81BCu, 0x1B81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81C4u;
label_1b81c4:
    // 0x1b81c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b81c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_1b81c8:
    // 0x1b81c8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1b81cc:
    // 0x1b81cc: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x1b81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
label_1b81d0:
    // 0x1b81d0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b81d4:
    // 0x1b81d4: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1b81d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b81d8:
    // 0x1b81d8: 0xc066c3e  jal         func_19B0F8
label_1b81dc:
    if (ctx->pc == 0x1B81DCu) {
        ctx->pc = 0x1B81DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81D8u;
        // 0x1b81dc: 0x24841e20  addiu       $a0, $a0, 0x1E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B81E0u;
        goto label_1b81e0;
    }
    ctx->pc = 0x1B81D8u;
    SET_GPR_U32(ctx, 31, 0x1B81E0u);
    ctx->pc = 0x1B81DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B81D8u;
    // 0x1b81dc: 0x24841e20  addiu       $a0, $a0, 0x1E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B0F8u, 0x1B81D8u, 0x1B81E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81E0u;
label_1b81e0:
    // 0x1b81e0: 0xaf8088dc  sw          $zero, -0x7724($gp)
    ctx->pc = 0x1b81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 0));
label_1b81e4:
    // 0x1b81e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b81e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b81e8:
    // 0x1b81e8: 0x3e00008  jr          $ra
label_1b81ec:
    if (ctx->pc == 0x1B81ECu) {
        ctx->pc = 0x1B81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81E8u;
        // 0x1b81ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B81F0u;
        goto label_1b81f0;
    }
    ctx->pc = 0x1B81E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B81E8u;
        // 0x1b81ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B81E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B81F0u;
label_1b81f0:
    // 0x1b81f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b81f4:
    // 0x1b81f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b81f8:
    // 0x1b81f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b81f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b81fc:
    // 0x1b81fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b81fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1b8200:
    // 0x1b8200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b8204:
    // 0x1b8204: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1b8204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1b8208:
    // 0x1b8208: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1b8208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1b820c:
    // 0x1b820c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b820cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8210:
    // 0x1b8210: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b8210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1b8214:
    // 0x1b8214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b8214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b8218:
    // 0x1b8218: 0x2813c  dsll32      $s0, $v0, 4
    ctx->pc = 0x1b8218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 4));
label_1b821c:
    // 0x1b821c: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x1b821cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
label_1b8220:
    // 0x1b8220: 0xc066c98  jal         func_19B260
label_1b8224:
    if (ctx->pc == 0x1B8224u) {
        ctx->pc = 0x1B8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8220u;
        // 0x1b8224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8228u;
        goto label_1b8228;
    }
    ctx->pc = 0x1B8220u;
    SET_GPR_U32(ctx, 31, 0x1B8228u);
    ctx->pc = 0x1B8224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8220u;
    // 0x1b8224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B260u, 0x1B8220u, 0x1B8228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8228u;
label_1b8228:
    // 0x1b8228: 0xc066c46  jal         func_19B118
label_1b822c:
    if (ctx->pc == 0x1B822Cu) {
        ctx->pc = 0x1B822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8228u;
        // 0x1b822c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8230u;
        goto label_1b8230;
    }
    ctx->pc = 0x1B8228u;
    SET_GPR_U32(ctx, 31, 0x1B8230u);
    ctx->pc = 0x1B822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8228u;
    // 0x1b822c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x1B8228u, 0x1B8230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8230u;
label_1b8230:
    // 0x1b8230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8234:
    // 0x1b8234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8238:
    // 0x1b8238: 0x3e00008  jr          $ra
label_1b823c:
    if (ctx->pc == 0x1B823Cu) {
        ctx->pc = 0x1B823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8238u;
        // 0x1b823c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8240u;
        goto label_1b8240;
    }
    ctx->pc = 0x1B8238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8238u;
        // 0x1b823c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8240u;
label_1b8240:
    // 0x1b8240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b8244:
    // 0x1b8244: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b8244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b8248:
    // 0x1b8248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b824c:
    // 0x1b824c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b824cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1b8250:
    // 0x1b8250: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1b8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1b8254:
    // 0x1b8254: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1b8254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1b8258:
    // 0x1b8258: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b8258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1b825c:
    // 0x1b825c: 0xc066c42  jal         func_19B108
label_1b8260:
    if (ctx->pc == 0x1B8260u) {
        ctx->pc = 0x1B8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B825Cu;
        // 0x1b8260: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8264u;
        goto label_1b8264;
    }
    ctx->pc = 0x1B825Cu;
    SET_GPR_U32(ctx, 31, 0x1B8264u);
    ctx->pc = 0x1B8260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B825Cu;
    // 0x1b8260: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B108u, 0x1B825Cu, 0x1B8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8264u;
label_1b8264:
    // 0x1b8264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8268:
    // 0x1b8268: 0x3e00008  jr          $ra
label_1b826c:
    if (ctx->pc == 0x1B826Cu) {
        ctx->pc = 0x1B826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8268u;
        // 0x1b826c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8270u;
        goto label_1b8270;
    }
    ctx->pc = 0x1B8268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8268u;
        // 0x1b826c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8270u;
label_1b8270:
    // 0x1b8270: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1b8270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1b8274:
    // 0x1b8274: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b8278:
    // 0x1b8278: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1b8278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1b827c:
    // 0x1b827c: 0x24631e04  addiu       $v1, $v1, 0x1E04
    ctx->pc = 0x1b827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7684));
label_1b8280:
    // 0x1b8280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b8284:
    // 0x1b8284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b8284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b8288:
    // 0x1b8288: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b8288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b828c:
    // 0x1b828c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x1b828cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1b8290:
    // 0x1b8290: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1b8294:
    if (ctx->pc == 0x1B8294u) {
        ctx->pc = 0x1B8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8290u;
        // 0x1b8294: 0x4293c  dsll32      $a1, $a0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8298u;
        goto label_1b8298;
    }
    ctx->pc = 0x1B8290u;
    {
        const bool branch_taken_0x1b8290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8290u;
        // 0x1b8294: 0x4293c  dsll32      $a1, $a0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8290) {
            ctx->pc = 0x1B82A4u;
            goto label_1b82a4;
        }
    }
    ctx->pc = 0x1B8298u;
label_1b8298:
    // 0x1b8298: 0x8f8487a4  lw          $a0, -0x785C($gp)
    ctx->pc = 0x1b8298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
label_1b829c:
    // 0x1b829c: 0xc066a6c  jal         func_19A9B0
label_1b82a0:
    if (ctx->pc == 0x1B82A0u) {
        ctx->pc = 0x1B82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B829Cu;
        // 0x1b82a0: 0x5293e  dsrl32      $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82A4u;
        goto label_1b82a4;
    }
    ctx->pc = 0x1B829Cu;
    SET_GPR_U32(ctx, 31, 0x1B82A4u);
    ctx->pc = 0x1B82A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B829Cu;
    // 0x1b82a0: 0x5293e  dsrl32      $a1, $a1, 4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x1B829Cu, 0x1B82A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B82A4u;
label_1b82a4:
    // 0x1b82a4: 0xaf8088dc  sw          $zero, -0x7724($gp)
    ctx->pc = 0x1b82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936796), GPR_U32(ctx, 0));
label_1b82a8:
    // 0x1b82a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b82a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b82ac:
    // 0x1b82ac: 0x3e00008  jr          $ra
label_1b82b0:
    if (ctx->pc == 0x1B82B0u) {
        ctx->pc = 0x1B82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82ACu;
        // 0x1b82b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82B4u;
        goto label_1b82b4;
    }
    ctx->pc = 0x1B82ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82ACu;
        // 0x1b82b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82B4u;
label_1b82b4:
    // 0x1b82b4: 0x0  nop
    ctx->pc = 0x1b82b4u;
    // NOP
label_1b82b8:
    // 0x1b82b8: 0x0  nop
    ctx->pc = 0x1b82b8u;
    // NOP
label_1b82bc:
    // 0x1b82bc: 0x0  nop
    ctx->pc = 0x1b82bcu;
    // NOP
label_1b82c0:
    // 0x1b82c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b82c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b82c4:
    // 0x1b82c4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1b82c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_1b82c8:
    // 0x1b82c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1b82c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b82cc:
    // 0x1b82cc: 0xaf8388d8  sw          $v1, -0x7728($gp)
    ctx->pc = 0x1b82ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936792), GPR_U32(ctx, 3));
label_1b82d0:
    // 0x1b82d0: 0x8f8388d8  lw          $v1, -0x7728($gp)
    ctx->pc = 0x1b82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936792)));
label_1b82d4:
    // 0x1b82d4: 0x3e00008  jr          $ra
label_1b82d8:
    if (ctx->pc == 0x1B82D8u) {
        ctx->pc = 0x1B82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82D4u;
        // 0x1b82d8: 0xac233010  sw          $v1, 0x3010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 12304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B82DCu;
        goto label_1b82dc;
    }
    ctx->pc = 0x1B82D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82D4u;
        // 0x1b82d8: 0xac233010  sw          $v1, 0x3010($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 12304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82DCu;
label_1b82dc:
    // 0x1b82dc: 0x0  nop
    ctx->pc = 0x1b82dcu;
    // NOP
label_1b82e0:
    // 0x1b82e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b82e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b82e4:
    // 0x1b82e4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b82e8:
    // 0x1b82e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b82e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b82ec:
    // 0x1b82ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1b82ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1b82f0:
    // 0x1b82f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b82f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b82f4:
    // 0x1b82f4: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1b82f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1b82f8:
    // 0x1b82f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b82f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b82fc:
    // 0x1b82fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b82fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8300:
    // 0x1b8300: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1b8300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1b8304:
    // 0x1b8304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b8308u;
    return;
}

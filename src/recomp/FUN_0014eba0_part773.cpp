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


void FUN_0014eba0_part773(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c7ae0u: goto label_2c7ae0;
        case 0x2c7ae4u: goto label_2c7ae4;
        case 0x2c7ae8u: goto label_2c7ae8;
        case 0x2c7aecu: goto label_2c7aec;
        case 0x2c7af0u: goto label_2c7af0;
        case 0x2c7af4u: goto label_2c7af4;
        case 0x2c7af8u: goto label_2c7af8;
        case 0x2c7afcu: goto label_2c7afc;
        case 0x2c7b00u: goto label_2c7b00;
        case 0x2c7b04u: goto label_2c7b04;
        case 0x2c7b08u: goto label_2c7b08;
        case 0x2c7b0cu: goto label_2c7b0c;
        case 0x2c7b10u: goto label_2c7b10;
        case 0x2c7b14u: goto label_2c7b14;
        case 0x2c7b18u: goto label_2c7b18;
        case 0x2c7b1cu: goto label_2c7b1c;
        case 0x2c7b20u: goto label_2c7b20;
        case 0x2c7b24u: goto label_2c7b24;
        case 0x2c7b28u: goto label_2c7b28;
        case 0x2c7b2cu: goto label_2c7b2c;
        case 0x2c7b30u: goto label_2c7b30;
        case 0x2c7b34u: goto label_2c7b34;
        case 0x2c7b38u: goto label_2c7b38;
        case 0x2c7b3cu: goto label_2c7b3c;
        case 0x2c7b40u: goto label_2c7b40;
        case 0x2c7b44u: goto label_2c7b44;
        case 0x2c7b48u: goto label_2c7b48;
        case 0x2c7b4cu: goto label_2c7b4c;
        case 0x2c7b50u: goto label_2c7b50;
        case 0x2c7b54u: goto label_2c7b54;
        case 0x2c7b58u: goto label_2c7b58;
        case 0x2c7b5cu: goto label_2c7b5c;
        case 0x2c7b60u: goto label_2c7b60;
        case 0x2c7b64u: goto label_2c7b64;
        case 0x2c7b68u: goto label_2c7b68;
        case 0x2c7b6cu: goto label_2c7b6c;
        case 0x2c7b70u: goto label_2c7b70;
        case 0x2c7b74u: goto label_2c7b74;
        case 0x2c7b78u: goto label_2c7b78;
        case 0x2c7b7cu: goto label_2c7b7c;
        case 0x2c7b80u: goto label_2c7b80;
        case 0x2c7b84u: goto label_2c7b84;
        case 0x2c7b88u: goto label_2c7b88;
        case 0x2c7b8cu: goto label_2c7b8c;
        case 0x2c7b90u: goto label_2c7b90;
        case 0x2c7b94u: goto label_2c7b94;
        case 0x2c7b98u: goto label_2c7b98;
        case 0x2c7b9cu: goto label_2c7b9c;
        case 0x2c7ba0u: goto label_2c7ba0;
        case 0x2c7ba4u: goto label_2c7ba4;
        case 0x2c7ba8u: goto label_2c7ba8;
        case 0x2c7bacu: goto label_2c7bac;
        case 0x2c7bb0u: goto label_2c7bb0;
        case 0x2c7bb4u: goto label_2c7bb4;
        case 0x2c7bb8u: goto label_2c7bb8;
        case 0x2c7bbcu: goto label_2c7bbc;
        case 0x2c7bc0u: goto label_2c7bc0;
        case 0x2c7bc4u: goto label_2c7bc4;
        case 0x2c7bc8u: goto label_2c7bc8;
        case 0x2c7bccu: goto label_2c7bcc;
        case 0x2c7bd0u: goto label_2c7bd0;
        case 0x2c7bd4u: goto label_2c7bd4;
        case 0x2c7bd8u: goto label_2c7bd8;
        case 0x2c7bdcu: goto label_2c7bdc;
        case 0x2c7be0u: goto label_2c7be0;
        case 0x2c7be4u: goto label_2c7be4;
        case 0x2c7be8u: goto label_2c7be8;
        case 0x2c7becu: goto label_2c7bec;
        case 0x2c7bf0u: goto label_2c7bf0;
        case 0x2c7bf4u: goto label_2c7bf4;
        case 0x2c7bf8u: goto label_2c7bf8;
        case 0x2c7bfcu: goto label_2c7bfc;
        case 0x2c7c00u: goto label_2c7c00;
        case 0x2c7c04u: goto label_2c7c04;
        case 0x2c7c08u: goto label_2c7c08;
        case 0x2c7c0cu: goto label_2c7c0c;
        case 0x2c7c10u: goto label_2c7c10;
        case 0x2c7c14u: goto label_2c7c14;
        case 0x2c7c18u: goto label_2c7c18;
        case 0x2c7c1cu: goto label_2c7c1c;
        case 0x2c7c20u: goto label_2c7c20;
        case 0x2c7c24u: goto label_2c7c24;
        case 0x2c7c28u: goto label_2c7c28;
        case 0x2c7c2cu: goto label_2c7c2c;
        case 0x2c7c30u: goto label_2c7c30;
        case 0x2c7c34u: goto label_2c7c34;
        case 0x2c7c38u: goto label_2c7c38;
        case 0x2c7c3cu: goto label_2c7c3c;
        case 0x2c7c40u: goto label_2c7c40;
        case 0x2c7c44u: goto label_2c7c44;
        case 0x2c7c48u: goto label_2c7c48;
        case 0x2c7c4cu: goto label_2c7c4c;
        case 0x2c7c50u: goto label_2c7c50;
        case 0x2c7c54u: goto label_2c7c54;
        case 0x2c7c58u: goto label_2c7c58;
        case 0x2c7c5cu: goto label_2c7c5c;
        case 0x2c7c60u: goto label_2c7c60;
        case 0x2c7c64u: goto label_2c7c64;
        case 0x2c7c68u: goto label_2c7c68;
        case 0x2c7c6cu: goto label_2c7c6c;
        case 0x2c7c70u: goto label_2c7c70;
        case 0x2c7c74u: goto label_2c7c74;
        case 0x2c7c78u: goto label_2c7c78;
        case 0x2c7c7cu: goto label_2c7c7c;
        case 0x2c7c80u: goto label_2c7c80;
        case 0x2c7c84u: goto label_2c7c84;
        case 0x2c7c88u: goto label_2c7c88;
        case 0x2c7c8cu: goto label_2c7c8c;
        case 0x2c7c90u: goto label_2c7c90;
        case 0x2c7c94u: goto label_2c7c94;
        case 0x2c7c98u: goto label_2c7c98;
        case 0x2c7c9cu: goto label_2c7c9c;
        case 0x2c7ca0u: goto label_2c7ca0;
        case 0x2c7ca4u: goto label_2c7ca4;
        case 0x2c7ca8u: goto label_2c7ca8;
        case 0x2c7cacu: goto label_2c7cac;
        case 0x2c7cb0u: goto label_2c7cb0;
        case 0x2c7cb4u: goto label_2c7cb4;
        case 0x2c7cb8u: goto label_2c7cb8;
        case 0x2c7cbcu: goto label_2c7cbc;
        case 0x2c7cc0u: goto label_2c7cc0;
        case 0x2c7cc4u: goto label_2c7cc4;
        case 0x2c7cc8u: goto label_2c7cc8;
        case 0x2c7cccu: goto label_2c7ccc;
        case 0x2c7cd0u: goto label_2c7cd0;
        case 0x2c7cd4u: goto label_2c7cd4;
        case 0x2c7cd8u: goto label_2c7cd8;
        case 0x2c7cdcu: goto label_2c7cdc;
        case 0x2c7ce0u: goto label_2c7ce0;
        case 0x2c7ce4u: goto label_2c7ce4;
        case 0x2c7ce8u: goto label_2c7ce8;
        case 0x2c7cecu: goto label_2c7cec;
        case 0x2c7cf0u: goto label_2c7cf0;
        case 0x2c7cf4u: goto label_2c7cf4;
        case 0x2c7cf8u: goto label_2c7cf8;
        case 0x2c7cfcu: goto label_2c7cfc;
        case 0x2c7d00u: goto label_2c7d00;
        case 0x2c7d04u: goto label_2c7d04;
        case 0x2c7d08u: goto label_2c7d08;
        case 0x2c7d0cu: goto label_2c7d0c;
        case 0x2c7d10u: goto label_2c7d10;
        case 0x2c7d14u: goto label_2c7d14;
        case 0x2c7d18u: goto label_2c7d18;
        case 0x2c7d1cu: goto label_2c7d1c;
        case 0x2c7d20u: goto label_2c7d20;
        case 0x2c7d24u: goto label_2c7d24;
        case 0x2c7d28u: goto label_2c7d28;
        case 0x2c7d2cu: goto label_2c7d2c;
        case 0x2c7d30u: goto label_2c7d30;
        case 0x2c7d34u: goto label_2c7d34;
        case 0x2c7d38u: goto label_2c7d38;
        case 0x2c7d3cu: goto label_2c7d3c;
        case 0x2c7d40u: goto label_2c7d40;
        case 0x2c7d44u: goto label_2c7d44;
        case 0x2c7d48u: goto label_2c7d48;
        case 0x2c7d4cu: goto label_2c7d4c;
        case 0x2c7d50u: goto label_2c7d50;
        case 0x2c7d54u: goto label_2c7d54;
        case 0x2c7d58u: goto label_2c7d58;
        case 0x2c7d5cu: goto label_2c7d5c;
        case 0x2c7d60u: goto label_2c7d60;
        case 0x2c7d64u: goto label_2c7d64;
        case 0x2c7d68u: goto label_2c7d68;
        case 0x2c7d6cu: goto label_2c7d6c;
        case 0x2c7d70u: goto label_2c7d70;
        case 0x2c7d74u: goto label_2c7d74;
        case 0x2c7d78u: goto label_2c7d78;
        case 0x2c7d7cu: goto label_2c7d7c;
        case 0x2c7d80u: goto label_2c7d80;
        case 0x2c7d84u: goto label_2c7d84;
        case 0x2c7d88u: goto label_2c7d88;
        case 0x2c7d8cu: goto label_2c7d8c;
        case 0x2c7d90u: goto label_2c7d90;
        case 0x2c7d94u: goto label_2c7d94;
        case 0x2c7d98u: goto label_2c7d98;
        case 0x2c7d9cu: goto label_2c7d9c;
        case 0x2c7da0u: goto label_2c7da0;
        case 0x2c7da4u: goto label_2c7da4;
        case 0x2c7da8u: goto label_2c7da8;
        case 0x2c7dacu: goto label_2c7dac;
        case 0x2c7db0u: goto label_2c7db0;
        case 0x2c7db4u: goto label_2c7db4;
        case 0x2c7db8u: goto label_2c7db8;
        case 0x2c7dbcu: goto label_2c7dbc;
        case 0x2c7dc0u: goto label_2c7dc0;
        case 0x2c7dc4u: goto label_2c7dc4;
        case 0x2c7dc8u: goto label_2c7dc8;
        case 0x2c7dccu: goto label_2c7dcc;
        case 0x2c7dd0u: goto label_2c7dd0;
        case 0x2c7dd4u: goto label_2c7dd4;
        case 0x2c7dd8u: goto label_2c7dd8;
        case 0x2c7ddcu: goto label_2c7ddc;
        case 0x2c7de0u: goto label_2c7de0;
        case 0x2c7de4u: goto label_2c7de4;
        case 0x2c7de8u: goto label_2c7de8;
        case 0x2c7decu: goto label_2c7dec;
        case 0x2c7df0u: goto label_2c7df0;
        case 0x2c7df4u: goto label_2c7df4;
        case 0x2c7df8u: goto label_2c7df8;
        case 0x2c7dfcu: goto label_2c7dfc;
        case 0x2c7e00u: goto label_2c7e00;
        case 0x2c7e04u: goto label_2c7e04;
        case 0x2c7e08u: goto label_2c7e08;
        case 0x2c7e0cu: goto label_2c7e0c;
        case 0x2c7e10u: goto label_2c7e10;
        case 0x2c7e14u: goto label_2c7e14;
        case 0x2c7e18u: goto label_2c7e18;
        case 0x2c7e1cu: goto label_2c7e1c;
        case 0x2c7e20u: goto label_2c7e20;
        case 0x2c7e24u: goto label_2c7e24;
        case 0x2c7e28u: goto label_2c7e28;
        case 0x2c7e2cu: goto label_2c7e2c;
        case 0x2c7e30u: goto label_2c7e30;
        case 0x2c7e34u: goto label_2c7e34;
        case 0x2c7e38u: goto label_2c7e38;
        case 0x2c7e3cu: goto label_2c7e3c;
        case 0x2c7e40u: goto label_2c7e40;
        case 0x2c7e44u: goto label_2c7e44;
        case 0x2c7e48u: goto label_2c7e48;
        case 0x2c7e4cu: goto label_2c7e4c;
        case 0x2c7e50u: goto label_2c7e50;
        case 0x2c7e54u: goto label_2c7e54;
        case 0x2c7e58u: goto label_2c7e58;
        case 0x2c7e5cu: goto label_2c7e5c;
        case 0x2c7e60u: goto label_2c7e60;
        case 0x2c7e64u: goto label_2c7e64;
        case 0x2c7e68u: goto label_2c7e68;
        case 0x2c7e6cu: goto label_2c7e6c;
        case 0x2c7e70u: goto label_2c7e70;
        case 0x2c7e74u: goto label_2c7e74;
        case 0x2c7e78u: goto label_2c7e78;
        case 0x2c7e7cu: goto label_2c7e7c;
        case 0x2c7e80u: goto label_2c7e80;
        case 0x2c7e84u: goto label_2c7e84;
        case 0x2c7e88u: goto label_2c7e88;
        case 0x2c7e8cu: goto label_2c7e8c;
        case 0x2c7e90u: goto label_2c7e90;
        case 0x2c7e94u: goto label_2c7e94;
        case 0x2c7e98u: goto label_2c7e98;
        case 0x2c7e9cu: goto label_2c7e9c;
        case 0x2c7ea0u: goto label_2c7ea0;
        case 0x2c7ea4u: goto label_2c7ea4;
        case 0x2c7ea8u: goto label_2c7ea8;
        case 0x2c7eacu: goto label_2c7eac;
        case 0x2c7eb0u: goto label_2c7eb0;
        case 0x2c7eb4u: goto label_2c7eb4;
        case 0x2c7eb8u: goto label_2c7eb8;
        case 0x2c7ebcu: goto label_2c7ebc;
        case 0x2c7ec0u: goto label_2c7ec0;
        case 0x2c7ec4u: goto label_2c7ec4;
        case 0x2c7ec8u: goto label_2c7ec8;
        case 0x2c7eccu: goto label_2c7ecc;
        case 0x2c7ed0u: goto label_2c7ed0;
        case 0x2c7ed4u: goto label_2c7ed4;
        case 0x2c7ed8u: goto label_2c7ed8;
        case 0x2c7edcu: goto label_2c7edc;
        case 0x2c7ee0u: goto label_2c7ee0;
        case 0x2c7ee4u: goto label_2c7ee4;
        case 0x2c7ee8u: goto label_2c7ee8;
        case 0x2c7eecu: goto label_2c7eec;
        case 0x2c7ef0u: goto label_2c7ef0;
        case 0x2c7ef4u: goto label_2c7ef4;
        case 0x2c7ef8u: goto label_2c7ef8;
        case 0x2c7efcu: goto label_2c7efc;
        case 0x2c7f00u: goto label_2c7f00;
        case 0x2c7f04u: goto label_2c7f04;
        case 0x2c7f08u: goto label_2c7f08;
        case 0x2c7f0cu: goto label_2c7f0c;
        case 0x2c7f10u: goto label_2c7f10;
        case 0x2c7f14u: goto label_2c7f14;
        case 0x2c7f18u: goto label_2c7f18;
        case 0x2c7f1cu: goto label_2c7f1c;
        case 0x2c7f20u: goto label_2c7f20;
        case 0x2c7f24u: goto label_2c7f24;
        case 0x2c7f28u: goto label_2c7f28;
        case 0x2c7f2cu: goto label_2c7f2c;
        case 0x2c7f30u: goto label_2c7f30;
        case 0x2c7f34u: goto label_2c7f34;
        case 0x2c7f38u: goto label_2c7f38;
        case 0x2c7f3cu: goto label_2c7f3c;
        case 0x2c7f40u: goto label_2c7f40;
        case 0x2c7f44u: goto label_2c7f44;
        case 0x2c7f48u: goto label_2c7f48;
        case 0x2c7f4cu: goto label_2c7f4c;
        case 0x2c7f50u: goto label_2c7f50;
        case 0x2c7f54u: goto label_2c7f54;
        case 0x2c7f58u: goto label_2c7f58;
        case 0x2c7f5cu: goto label_2c7f5c;
        case 0x2c7f60u: goto label_2c7f60;
        case 0x2c7f64u: goto label_2c7f64;
        case 0x2c7f68u: goto label_2c7f68;
        case 0x2c7f6cu: goto label_2c7f6c;
        case 0x2c7f70u: goto label_2c7f70;
        case 0x2c7f74u: goto label_2c7f74;
        case 0x2c7f78u: goto label_2c7f78;
        case 0x2c7f7cu: goto label_2c7f7c;
        case 0x2c7f80u: goto label_2c7f80;
        case 0x2c7f84u: goto label_2c7f84;
        case 0x2c7f88u: goto label_2c7f88;
        case 0x2c7f8cu: goto label_2c7f8c;
        case 0x2c7f90u: goto label_2c7f90;
        case 0x2c7f94u: goto label_2c7f94;
        case 0x2c7f98u: goto label_2c7f98;
        case 0x2c7f9cu: goto label_2c7f9c;
        case 0x2c7fa0u: goto label_2c7fa0;
        case 0x2c7fa4u: goto label_2c7fa4;
        case 0x2c7fa8u: goto label_2c7fa8;
        case 0x2c7facu: goto label_2c7fac;
        case 0x2c7fb0u: goto label_2c7fb0;
        case 0x2c7fb4u: goto label_2c7fb4;
        case 0x2c7fb8u: goto label_2c7fb8;
        case 0x2c7fbcu: goto label_2c7fbc;
        case 0x2c7fc0u: goto label_2c7fc0;
        case 0x2c7fc4u: goto label_2c7fc4;
        case 0x2c7fc8u: goto label_2c7fc8;
        case 0x2c7fccu: goto label_2c7fcc;
        case 0x2c7fd0u: goto label_2c7fd0;
        case 0x2c7fd4u: goto label_2c7fd4;
        case 0x2c7fd8u: goto label_2c7fd8;
        case 0x2c7fdcu: goto label_2c7fdc;
        case 0x2c7fe0u: goto label_2c7fe0;
        case 0x2c7fe4u: goto label_2c7fe4;
        case 0x2c7fe8u: goto label_2c7fe8;
        case 0x2c7fecu: goto label_2c7fec;
        case 0x2c7ff0u: goto label_2c7ff0;
        case 0x2c7ff4u: goto label_2c7ff4;
        case 0x2c7ff8u: goto label_2c7ff8;
        case 0x2c7ffcu: goto label_2c7ffc;
        case 0x2c8000u: goto label_2c8000;
        case 0x2c8004u: goto label_2c8004;
        case 0x2c8008u: goto label_2c8008;
        case 0x2c800cu: goto label_2c800c;
        case 0x2c8010u: goto label_2c8010;
        case 0x2c8014u: goto label_2c8014;
        case 0x2c8018u: goto label_2c8018;
        case 0x2c801cu: goto label_2c801c;
        case 0x2c8020u: goto label_2c8020;
        case 0x2c8024u: goto label_2c8024;
        case 0x2c8028u: goto label_2c8028;
        case 0x2c802cu: goto label_2c802c;
        case 0x2c8030u: goto label_2c8030;
        case 0x2c8034u: goto label_2c8034;
        case 0x2c8038u: goto label_2c8038;
        case 0x2c803cu: goto label_2c803c;
        case 0x2c8040u: goto label_2c8040;
        case 0x2c8044u: goto label_2c8044;
        case 0x2c8048u: goto label_2c8048;
        case 0x2c804cu: goto label_2c804c;
        case 0x2c8050u: goto label_2c8050;
        case 0x2c8054u: goto label_2c8054;
        case 0x2c8058u: goto label_2c8058;
        case 0x2c805cu: goto label_2c805c;
        case 0x2c8060u: goto label_2c8060;
        case 0x2c8064u: goto label_2c8064;
        case 0x2c8068u: goto label_2c8068;
        case 0x2c806cu: goto label_2c806c;
        case 0x2c8070u: goto label_2c8070;
        case 0x2c8074u: goto label_2c8074;
        case 0x2c8078u: goto label_2c8078;
        case 0x2c807cu: goto label_2c807c;
        case 0x2c8080u: goto label_2c8080;
        case 0x2c8084u: goto label_2c8084;
        case 0x2c8088u: goto label_2c8088;
        case 0x2c808cu: goto label_2c808c;
        case 0x2c8090u: goto label_2c8090;
        case 0x2c8094u: goto label_2c8094;
        case 0x2c8098u: goto label_2c8098;
        case 0x2c809cu: goto label_2c809c;
        case 0x2c80a0u: goto label_2c80a0;
        case 0x2c80a4u: goto label_2c80a4;
        case 0x2c80a8u: goto label_2c80a8;
        case 0x2c80acu: goto label_2c80ac;
        case 0x2c80b0u: goto label_2c80b0;
        case 0x2c80b4u: goto label_2c80b4;
        case 0x2c80b8u: goto label_2c80b8;
        case 0x2c80bcu: goto label_2c80bc;
        case 0x2c80c0u: goto label_2c80c0;
        case 0x2c80c4u: goto label_2c80c4;
        case 0x2c80c8u: goto label_2c80c8;
        case 0x2c80ccu: goto label_2c80cc;
        case 0x2c80d0u: goto label_2c80d0;
        case 0x2c80d4u: goto label_2c80d4;
        case 0x2c80d8u: goto label_2c80d8;
        case 0x2c80dcu: goto label_2c80dc;
        case 0x2c80e0u: goto label_2c80e0;
        case 0x2c80e4u: goto label_2c80e4;
        case 0x2c80e8u: goto label_2c80e8;
        case 0x2c80ecu: goto label_2c80ec;
        case 0x2c80f0u: goto label_2c80f0;
        case 0x2c80f4u: goto label_2c80f4;
        case 0x2c80f8u: goto label_2c80f8;
        case 0x2c80fcu: goto label_2c80fc;
        case 0x2c8100u: goto label_2c8100;
        case 0x2c8104u: goto label_2c8104;
        case 0x2c8108u: goto label_2c8108;
        case 0x2c810cu: goto label_2c810c;
        case 0x2c8110u: goto label_2c8110;
        case 0x2c8114u: goto label_2c8114;
        case 0x2c8118u: goto label_2c8118;
        case 0x2c811cu: goto label_2c811c;
        case 0x2c8120u: goto label_2c8120;
        case 0x2c8124u: goto label_2c8124;
        case 0x2c8128u: goto label_2c8128;
        case 0x2c812cu: goto label_2c812c;
        case 0x2c8130u: goto label_2c8130;
        case 0x2c8134u: goto label_2c8134;
        case 0x2c8138u: goto label_2c8138;
        case 0x2c813cu: goto label_2c813c;
        case 0x2c8140u: goto label_2c8140;
        case 0x2c8144u: goto label_2c8144;
        case 0x2c8148u: goto label_2c8148;
        case 0x2c814cu: goto label_2c814c;
        case 0x2c8150u: goto label_2c8150;
        case 0x2c8154u: goto label_2c8154;
        case 0x2c8158u: goto label_2c8158;
        case 0x2c815cu: goto label_2c815c;
        case 0x2c8160u: goto label_2c8160;
        case 0x2c8164u: goto label_2c8164;
        case 0x2c8168u: goto label_2c8168;
        case 0x2c816cu: goto label_2c816c;
        case 0x2c8170u: goto label_2c8170;
        case 0x2c8174u: goto label_2c8174;
        case 0x2c8178u: goto label_2c8178;
        case 0x2c817cu: goto label_2c817c;
        case 0x2c8180u: goto label_2c8180;
        case 0x2c8184u: goto label_2c8184;
        case 0x2c8188u: goto label_2c8188;
        case 0x2c818cu: goto label_2c818c;
        case 0x2c8190u: goto label_2c8190;
        case 0x2c8194u: goto label_2c8194;
        case 0x2c8198u: goto label_2c8198;
        case 0x2c819cu: goto label_2c819c;
        case 0x2c81a0u: goto label_2c81a0;
        case 0x2c81a4u: goto label_2c81a4;
        case 0x2c81a8u: goto label_2c81a8;
        case 0x2c81acu: goto label_2c81ac;
        case 0x2c81b0u: goto label_2c81b0;
        case 0x2c81b4u: goto label_2c81b4;
        case 0x2c81b8u: goto label_2c81b8;
        case 0x2c81bcu: goto label_2c81bc;
        case 0x2c81c0u: goto label_2c81c0;
        case 0x2c81c4u: goto label_2c81c4;
        case 0x2c81c8u: goto label_2c81c8;
        case 0x2c81ccu: goto label_2c81cc;
        case 0x2c81d0u: goto label_2c81d0;
        case 0x2c81d4u: goto label_2c81d4;
        case 0x2c81d8u: goto label_2c81d8;
        case 0x2c81dcu: goto label_2c81dc;
        case 0x2c81e0u: goto label_2c81e0;
        case 0x2c81e4u: goto label_2c81e4;
        case 0x2c81e8u: goto label_2c81e8;
        case 0x2c81ecu: goto label_2c81ec;
        case 0x2c81f0u: goto label_2c81f0;
        case 0x2c81f4u: goto label_2c81f4;
        case 0x2c81f8u: goto label_2c81f8;
        case 0x2c81fcu: goto label_2c81fc;
        case 0x2c8200u: goto label_2c8200;
        case 0x2c8204u: goto label_2c8204;
        case 0x2c8208u: goto label_2c8208;
        case 0x2c820cu: goto label_2c820c;
        case 0x2c8210u: goto label_2c8210;
        case 0x2c8214u: goto label_2c8214;
        case 0x2c8218u: goto label_2c8218;
        case 0x2c821cu: goto label_2c821c;
        case 0x2c8220u: goto label_2c8220;
        case 0x2c8224u: goto label_2c8224;
        case 0x2c8228u: goto label_2c8228;
        case 0x2c822cu: goto label_2c822c;
        case 0x2c8230u: goto label_2c8230;
        case 0x2c8234u: goto label_2c8234;
        case 0x2c8238u: goto label_2c8238;
        case 0x2c823cu: goto label_2c823c;
        case 0x2c8240u: goto label_2c8240;
        case 0x2c8244u: goto label_2c8244;
        case 0x2c8248u: goto label_2c8248;
        case 0x2c824cu: goto label_2c824c;
        case 0x2c8250u: goto label_2c8250;
        case 0x2c8254u: goto label_2c8254;
        case 0x2c8258u: goto label_2c8258;
        case 0x2c825cu: goto label_2c825c;
        case 0x2c8260u: goto label_2c8260;
        case 0x2c8264u: goto label_2c8264;
        case 0x2c8268u: goto label_2c8268;
        case 0x2c826cu: goto label_2c826c;
        case 0x2c8270u: goto label_2c8270;
        case 0x2c8274u: goto label_2c8274;
        case 0x2c8278u: goto label_2c8278;
        case 0x2c827cu: goto label_2c827c;
        case 0x2c8280u: goto label_2c8280;
        case 0x2c8284u: goto label_2c8284;
        case 0x2c8288u: goto label_2c8288;
        case 0x2c828cu: goto label_2c828c;
        case 0x2c8290u: goto label_2c8290;
        case 0x2c8294u: goto label_2c8294;
        case 0x2c8298u: goto label_2c8298;
        case 0x2c829cu: goto label_2c829c;
        case 0x2c82a0u: goto label_2c82a0;
        case 0x2c82a4u: goto label_2c82a4;
        case 0x2c82a8u: goto label_2c82a8;
        case 0x2c82acu: goto label_2c82ac;
        default: return;
    }

label_2c7ae0:
    // 0x2c7ae0: 0x68206e65  ldl         $zero, 0x6E65($at)
    ctx->pc = 0x2c7ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2c7ae4:
    // 0x2c7ae4: 0x62207469  daddi       $zero, $s1, 0x7469
    ctx->pc = 0x2c7ae4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2c7ae8:
    // 0x2c7ae8: 0x6e612079  ldr         $at, 0x2079($s3)
    ctx->pc = 0x2c7ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7aec:
    // 0x2c7aec: 0x72726120  .word       0x72726120                   # madd1       $t4, $s3, $s2 # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7aecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c7af0:
    // 0x2c7af0: 0x776f  .word       0x0000776F                   # dsubu       $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7af0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c7af4:
    // 0x2c7af4: 0x0  nop
    ctx->pc = 0x2c7af4u;
    // NOP
label_2c7af8:
    // 0x2c7af8: 0x50204742  beql        $at, $zero, . + 4 + (0x4742 << 2)
label_2c7afc:
    if (ctx->pc == 0x2C7AFCu) {
        ctx->pc = 0x2C7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AF8u;
        // 0x2c7afc: 0x6f636165  ldr         $v1, 0x6165($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B00u;
        goto label_2c7b00;
    }
    ctx->pc = 0x2C7AF8u;
    {
        const bool branch_taken_0x2c7af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7af8) {
            ctx->pc = 0x2C7AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7AF8u;
            // 0x2c7afc: 0x6f636165  ldr         $v1, 0x6165($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9804u;
            return;
        }
    }
    ctx->pc = 0x2C7B00u;
label_2c7b00:
    // 0x2c7b00: 0x55206b63  bnel        $t1, $zero, . + 4 + (0x6B63 << 2)
label_2c7b04:
    if (ctx->pc == 0x2C7B04u) {
        ctx->pc = 0x2C7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B00u;
        // 0x2c7b04: 0x6e72  tlt         $zero, $zero, 441 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B08u;
        goto label_2c7b08;
    }
    ctx->pc = 0x2C7B00u;
    {
        const bool branch_taken_0x2c7b00 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b00) {
            ctx->pc = 0x2C7B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7B00u;
            // 0x2c7b04: 0x6e72  tlt         $zero, $zero, 441 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2890u;
            return;
        }
    }
    ctx->pc = 0x2C7B08u;
label_2c7b08:
    // 0x2c7b08: 0x0  nop
    ctx->pc = 0x2c7b08u;
    // NOP
label_2c7b0c:
    // 0x2c7b0c: 0x0  nop
    ctx->pc = 0x2c7b0cu;
    // NOP
label_2c7b10:
    // 0x2c7b10: 0x44204742  .word       0x44204742                   # dmfc1       $zero, $f8 # 00000742 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c7b10u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x2 at 0x2C7B10 raw=0x44204742");
 /* MITIGATED */
label_2c7b14:
    // 0x2c7b14: 0x6f676172  ldr         $a3, 0x6172($k1)
    ctx->pc = 0x2c7b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2c7b18:
    // 0x2c7b18: 0x6d41206e  ldr         $at, 0x206E($t2)
    ctx->pc = 0x2c7b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7b1c:
    // 0x2c7b1c: 0x74656c75  .word       0x74656C75                   # INVALID     $v1, $a1, 0x6C75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7b1cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7B1C raw=0x74656C75");
 /* MITIGATED */
label_2c7b20:
    // 0x2c7b20: 0x0  nop
    ctx->pc = 0x2c7b20u;
    // NOP
label_2c7b24:
    // 0x2c7b24: 0x0  nop
    ctx->pc = 0x2c7b24u;
    // NOP
label_2c7b28:
    // 0x2c7b28: 0x0  nop
    ctx->pc = 0x2c7b28u;
    // NOP
label_2c7b2c:
    // 0x2c7b2c: 0x0  nop
    ctx->pc = 0x2c7b2cu;
    // NOP
label_2c7b30:
    // 0x2c7b30: 0x54204742  bnel        $at, $zero, . + 4 + (0x4742 << 2)
label_2c7b34:
    if (ctx->pc == 0x2C7B34u) {
        ctx->pc = 0x2C7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B30u;
        // 0x2c7b34: 0x72656769  .word       0x72656769                   # INVALID     $s3, $a1, 0x6769 # 00000000 <InstrIdType: R5900_MMI_3> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x2C7B34 raw=0x72656769");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B38u;
        goto label_2c7b38;
    }
    ctx->pc = 0x2C7B30u;
    {
        const bool branch_taken_0x2c7b30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b30) {
            ctx->pc = 0x2C7B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7B30u;
            // 0x2c7b34: 0x72656769  .word       0x72656769                   # INVALID     $s3, $a1, 0x6769 # 00000000 <InstrIdType: R5900_MMI_3> (Delay Slot)
//             throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x2C7B34 raw=0x72656769");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D983Cu;
            return;
        }
    }
    ctx->pc = 0x2C7B38u;
label_2c7b38:
    // 0x2c7b38: 0x756d4120  .word       0x756D4120                   # INVALID     $t3, $t5, 0x4120 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7b38u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7B38 raw=0x756D4120");
 /* MITIGATED */
label_2c7b3c:
    // 0x2c7b3c: 0x74656c  .word       0x0074656C                   # dadd        $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7b3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c7b40:
    // 0x2c7b40: 0x54204742  bnel        $at, $zero, . + 4 + (0x4742 << 2)
label_2c7b44:
    if (ctx->pc == 0x2C7B44u) {
        ctx->pc = 0x2C7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B40u;
        // 0x2c7b44: 0x6f74726f  ldr         $s4, 0x726F($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B48u;
        goto label_2c7b48;
    }
    ctx->pc = 0x2C7B40u;
    {
        const bool branch_taken_0x2c7b40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b40) {
            ctx->pc = 0x2C7B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7B40u;
            // 0x2c7b44: 0x6f74726f  ldr         $s4, 0x726F($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D984Cu;
            return;
        }
    }
    ctx->pc = 0x2C7B48u;
label_2c7b48:
    // 0x2c7b48: 0x20657369  addi        $a1, $v1, 0x7369
    ctx->pc = 0x2c7b48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29545, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c7b4c:
    // 0x2c7b4c: 0x6c756d41  ldr         $s5, 0x6D41($v1)
    ctx->pc = 0x2c7b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27969); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2c7b50:
    // 0x2c7b50: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7b50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c7b54:
    // 0x2c7b54: 0x0  nop
    ctx->pc = 0x2c7b54u;
    // NOP
label_2c7b58:
    // 0x2c7b58: 0x0  nop
    ctx->pc = 0x2c7b58u;
    // NOP
label_2c7b5c:
    // 0x2c7b5c: 0x0  nop
    ctx->pc = 0x2c7b5cu;
    // NOP
label_2c7b60:
    // 0x2c7b60: 0x6e617548  ldr         $at, 0x7548($s3)
    ctx->pc = 0x2c7b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7b64:
    // 0x2c7b64: 0x20732767  addi        $s3, $v1, 0x2767
    ctx->pc = 0x2c7b64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10087, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c7b68:
    // 0x2c7b68: 0x20776f42  addi        $s7, $v1, 0x6F42
    ctx->pc = 0x2c7b68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28482, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2c7b6c:
    // 0x2c7b6c: 0x29474228  slti        $a3, $t2, 0x4228
    ctx->pc = 0x2c7b6cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16936) ? 1 : 0);
label_2c7b70:
    // 0x2c7b70: 0x0  nop
    ctx->pc = 0x2c7b70u;
    // NOP
label_2c7b74:
    // 0x2c7b74: 0x0  nop
    ctx->pc = 0x2c7b74u;
    // NOP
label_2c7b78:
    // 0x2c7b78: 0x53204742  beql        $t9, $zero, . + 4 + (0x4742 << 2)
label_2c7b7c:
    if (ctx->pc == 0x2C7B7Cu) {
        ctx->pc = 0x2C7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B78u;
        // 0x2c7b7c: 0x6c6c6568  ldr         $t4, 0x6568($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B80u;
        goto label_2c7b80;
    }
    ctx->pc = 0x2C7B78u;
    {
        const bool branch_taken_0x2c7b78 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b78) {
            ctx->pc = 0x2C7B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7B78u;
            // 0x2c7b7c: 0x6c6c6568  ldr         $t4, 0x6568($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9884u;
            return;
        }
    }
    ctx->pc = 0x2C7B80u;
label_2c7b80:
    // 0x2c7b80: 0x6d724120  ldr         $s2, 0x4120($t3)
    ctx->pc = 0x2c7b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c7b84:
    // 0x2c7b84: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7b84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c7b88:
    // 0x2c7b88: 0x0  nop
    ctx->pc = 0x2c7b88u;
    // NOP
label_2c7b8c:
    // 0x2c7b8c: 0x0  nop
    ctx->pc = 0x2c7b8cu;
    // NOP
label_2c7b90:
    // 0x2c7b90: 0x53204742  beql        $t9, $zero, . + 4 + (0x4742 << 2)
label_2c7b94:
    if (ctx->pc == 0x2C7B94u) {
        ctx->pc = 0x2C7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B90u;
        // 0x2c7b94: 0x64656570  daddiu      $a1, $v1, 0x6570 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25968);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7B98u;
        goto label_2c7b98;
    }
    ctx->pc = 0x2C7B90u;
    {
        const bool branch_taken_0x2c7b90 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b90) {
            ctx->pc = 0x2C7B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7B90u;
            // 0x2c7b94: 0x64656570  daddiu      $a1, $v1, 0x6570 (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25968);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D989Cu;
            return;
        }
    }
    ctx->pc = 0x2C7B98u;
label_2c7b98:
    // 0x2c7b98: 0x72635320  .word       0x72635320                   # madd1       $t2, $s3, $v1 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7b98u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_2c7b9c:
    // 0x2c7b9c: 0x6c6c6f  .word       0x006C6C6F                   # dsubu       $t5, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7b9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 12));
label_2c7ba0:
    // 0x2c7ba0: 0x57204742  bnel        $t9, $zero, . + 4 + (0x4742 << 2)
label_2c7ba4:
    if (ctx->pc == 0x2C7BA4u) {
        ctx->pc = 0x2C7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BA0u;
        // 0x2c7ba4: 0x20646e69  addi        $a0, $v1, 0x6E69 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7BA8u;
        goto label_2c7ba8;
    }
    ctx->pc = 0x2C7BA0u;
    {
        const bool branch_taken_0x2c7ba0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ba0) {
            ctx->pc = 0x2C7BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7BA0u;
            // 0x2c7ba4: 0x20646e69  addi        $a0, $v1, 0x6E69 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98ACu;
            return;
        }
    }
    ctx->pc = 0x2C7BA8u;
label_2c7ba8:
    // 0x2c7ba8: 0x6f726353  ldr         $s2, 0x6353($k1)
    ctx->pc = 0x2c7ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c7bac:
    // 0x2c7bac: 0x6c6c  .word       0x00006C6C                   # dadd        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7bacu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_2c7bb0:
    // 0x2c7bb0: 0x45204742  .word       0x45204742                   # INVALID     $t1, $zero, 0x4742 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c7bb0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x2 at 0x2C7BB0 raw=0x45204742");
 /* MITIGATED */
label_2c7bb4:
    // 0x2c7bb4: 0x6978696c  ldl         $t8, 0x696C($t3)
    ctx->pc = 0x2c7bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2c7bb8:
    // 0x2c7bb8: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c7bb8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7bbc:
    // 0x2c7bbc: 0x0  nop
    ctx->pc = 0x2c7bbcu;
    // NOP
label_2c7bc0:
    // 0x2c7bc0: 0x48204742  .word       0x48204742                   # qmfc2.ni    $zero, $vf8 # 00000742 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c7bc0u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[8]));
label_2c7bc4:
    // 0x2c7bc4: 0x696c6165  ldl         $t4, 0x6165($t3)
    ctx->pc = 0x2c7bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c7bc8:
    // 0x2c7bc8: 0x5320676e  beql        $t9, $zero, . + 4 + (0x676E << 2)
label_2c7bcc:
    if (ctx->pc == 0x2C7BCCu) {
        ctx->pc = 0x2C7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7BC8u;
        // 0x2c7bcc: 0x6c6f7263  ldr         $t7, 0x7263($v1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7BD0u;
        goto label_2c7bd0;
    }
    ctx->pc = 0x2C7BC8u;
    {
        const bool branch_taken_0x2c7bc8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bc8) {
            ctx->pc = 0x2C7BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7BC8u;
            // 0x2c7bcc: 0x6c6f7263  ldr         $t7, 0x7263($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1984u;
            return;
        }
    }
    ctx->pc = 0x2C7BD0u;
label_2c7bd0:
    // 0x2c7bd0: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7bd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c7bd4:
    // 0x2c7bd4: 0x0  nop
    ctx->pc = 0x2c7bd4u;
    // NOP
label_2c7bd8:
    // 0x2c7bd8: 0x0  nop
    ctx->pc = 0x2c7bd8u;
    // NOP
label_2c7bdc:
    // 0x2c7bdc: 0x0  nop
    ctx->pc = 0x2c7bdcu;
    // NOP
label_2c7be0:
    // 0x2c7be0: 0x6f73754d  ldr         $s3, 0x754D($k1)
    ctx->pc = 0x2c7be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30029); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2c7be4:
    // 0x2c7be4: 0x6e492075  ldr         $t1, 0x2075($s2)
    ctx->pc = 0x2c7be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c7be8:
    // 0x2c7be8: 0x61657263  daddi       $a1, $t3, 0x7263
    ctx->pc = 0x2c7be8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29283; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7bec:
    // 0x2c7bec: 0x736573  tltu        $v1, $s3, 405
    ctx->pc = 0x2c7becu;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_2c7bf0:
    // 0x2c7bf0: 0x79646f42  lq          $a0, 0x6F42($t3)
    ctx->pc = 0x2c7bf0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 28482)));
label_2c7bf4:
    // 0x2c7bf4: 0x72617567  .word       0x72617567                   # INVALID     $s3, $at, 0x7567 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7bf4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x2C7BF4 raw=0x72617567");
 /* MITIGATED */
label_2c7bf8:
    // 0x2c7bf8: 0x69772064  ldl         $s7, 0x2064($t3)
    ctx->pc = 0x2c7bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_2c7bfc:
    // 0x2c7bfc: 0x68206c6c  ldl         $zero, 0x6C6C($at)
    ctx->pc = 0x2c7bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 27756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2c7c00:
    // 0x2c7c00: 0x206c6165  addi        $t4, $v1, 0x6165
    ctx->pc = 0x2c7c00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2c7c04:
    // 0x2c7c04: 0x666c6573  daddiu      $t4, $s3, 0x6573
    ctx->pc = 0x2c7c04u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25971);
label_2c7c08:
    // 0x2c7c08: 0x6c6e6f20  ldr         $t6, 0x6F20($v1)
    ctx->pc = 0x2c7c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c7c0c:
    // 0x2c7c0c: 0x6e6f2079  ldr         $t7, 0x2079($s3)
    ctx->pc = 0x2c7c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8313); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7c10:
    // 0x2c7c10: 0x6563  .word       0x00006563                   # negu        $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7c10u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7c14:
    // 0x2c7c14: 0x0  nop
    ctx->pc = 0x2c7c14u;
    // NOP
label_2c7c18:
    // 0x2c7c18: 0x6e6f7249  ldr         $t7, 0x7249($s3)
    ctx->pc = 0x2c7c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7c1c:
    // 0x2c7c1c: 0x6f775320  ldr         $s7, 0x5320($k1)
    ctx->pc = 0x2c7c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_2c7c20:
    // 0x2c7c20: 0x6472  tlt         $zero, $zero, 401
    ctx->pc = 0x2c7c20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7c24:
    // 0x2c7c24: 0x0  nop
    ctx->pc = 0x2c7c24u;
    // NOP
label_2c7c28:
    // 0x2c7c28: 0x65657453  daddiu      $a1, $t3, 0x7453
    ctx->pc = 0x2c7c28u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29779);
label_2c7c2c:
    // 0x2c7c2c: 0x7753206c  .word       0x7753206C                   # INVALID     $k0, $s3, 0x206C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7c2cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7C2C raw=0x7753206C");
 /* MITIGATED */
label_2c7c30:
    // 0x2c7c30: 0x64726f  .word       0x0064726F                   # dsubu       $t6, $v1, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7c30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_2c7c34:
    // 0x2c7c34: 0x0  nop
    ctx->pc = 0x2c7c34u;
    // NOP
label_2c7c38:
    // 0x2c7c38: 0x616f7242  daddi       $t7, $t3, 0x7242
    ctx->pc = 0x2c7c38u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2c7c3c:
    // 0x2c7c3c: 0x77532064  .word       0x77532064                   # INVALID     $k0, $s3, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7c3cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7C3C raw=0x77532064");
 /* MITIGATED */
label_2c7c40:
    // 0x2c7c40: 0x64726f  .word       0x0064726F                   # dsubu       $t6, $v1, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7c40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_2c7c44:
    // 0x2c7c44: 0x0  nop
    ctx->pc = 0x2c7c44u;
    // NOP
label_2c7c48:
    // 0x2c7c48: 0x676e6f4c  daddiu      $t6, $k1, 0x6F4C
    ctx->pc = 0x2c7c48u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28492);
label_2c7c4c:
    // 0x2c7c4c: 0x6f775320  ldr         $s7, 0x5320($k1)
    ctx->pc = 0x2c7c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_2c7c50:
    // 0x2c7c50: 0x6472  tlt         $zero, $zero, 401
    ctx->pc = 0x2c7c50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7c54:
    // 0x2c7c54: 0x0  nop
    ctx->pc = 0x2c7c54u;
    // NOP
label_2c7c58:
    // 0x2c7c58: 0x6d696353  ldr         $t1, 0x6353($t3)
    ctx->pc = 0x2c7c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25427); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c7c5c:
    // 0x2c7c5c: 0x72617469  .word       0x72617469                   # INVALID     $s3, $at, 0x7469 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x2c7c5cu;
//     throw std::runtime_error("Unhandled MMI3 instruction: function 0x11 at 0x2C7C5C raw=0x72617469");
 /* MITIGATED */
label_2c7c60:
    // 0x2c7c60: 0x0  nop
    ctx->pc = 0x2c7c60u;
    // NOP
label_2c7c64:
    // 0x2c7c64: 0x0  nop
    ctx->pc = 0x2c7c64u;
    // NOP
label_2c7c68:
    // 0x2c7c68: 0x61657247  daddi       $a1, $t3, 0x7247
    ctx->pc = 0x2c7c68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29255; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7c6c:
    // 0x2c7c6c: 0x63532074  daddi       $s3, $k0, 0x2074
    ctx->pc = 0x2c7c6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2c7c70:
    // 0x2c7c70: 0x74696d69  .word       0x74696D69                   # INVALID     $v1, $t1, 0x6D69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7c70u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7C70 raw=0x74696D69");
 /* MITIGATED */
label_2c7c74:
    // 0x2c7c74: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7c74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7c78:
    // 0x2c7c78: 0x61657053  daddi       $a1, $t3, 0x7053
    ctx->pc = 0x2c7c78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28755; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7c7c:
    // 0x2c7c7c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c7c7cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7c80:
    // 0x2c7c80: 0x676e6f4c  daddiu      $t6, $k1, 0x6F4C
    ctx->pc = 0x2c7c80u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28492);
label_2c7c84:
    // 0x2c7c84: 0x65705320  daddiu      $s0, $t3, 0x5320
    ctx->pc = 0x2c7c84u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)21280);
label_2c7c88:
    // 0x2c7c88: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7c88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7c8c:
    // 0x2c7c8c: 0x0  nop
    ctx->pc = 0x2c7c8cu;
    // NOP
label_2c7c90:
    // 0x2c7c90: 0x626c6148  daddi       $t4, $s3, 0x6148
    ctx->pc = 0x2c7c90u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)24904; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c7c94:
    // 0x2c7c94: 0x647265  .word       0x00647265                   # or          $t6, $v1, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7c94u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2c7c98:
    // 0x2c7c98: 0x61657247  daddi       $a1, $t3, 0x7247
    ctx->pc = 0x2c7c98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29255; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7c9c:
    // 0x2c7c9c: 0x61482074  daddi       $t0, $t2, 0x2074
    ctx->pc = 0x2c7c9cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c7ca0:
    // 0x2c7ca0: 0x7265626c  .word       0x7265626C                   # INVALID     $s3, $a1, 0x626C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7ca0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2C7CA0 raw=0x7265626C");
 /* MITIGATED */
label_2c7ca4:
    // 0x2c7ca4: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7ca4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c7ca8:
    // 0x2c7ca8: 0x646e6148  daddiu      $t6, $v1, 0x6148
    ctx->pc = 0x2c7ca8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24904);
label_2c7cac:
    // 0x2c7cac: 0x65784120  daddiu      $t8, $t3, 0x4120
    ctx->pc = 0x2c7cacu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)16672);
label_2c7cb0:
    // 0x2c7cb0: 0x0  nop
    ctx->pc = 0x2c7cb0u;
    // NOP
label_2c7cb4:
    // 0x2c7cb4: 0x0  nop
    ctx->pc = 0x2c7cb4u;
    // NOP
label_2c7cb8:
    // 0x2c7cb8: 0x69727453  ldl         $s2, 0x7453($t3)
    ctx->pc = 0x2c7cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c7cbc:
    // 0x2c7cbc: 0x4120656b  .word       0x4120656B                   # INVALID     $t1, $zero, 0x656B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c7cbcu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2C7CBC raw=0x4120656B");
 /* MITIGATED */
label_2c7cc0:
    // 0x2c7cc0: 0x6578  dsll        $t4, $zero, 21
    ctx->pc = 0x2c7cc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << 21);
label_2c7cc4:
    // 0x2c7cc4: 0x0  nop
    ctx->pc = 0x2c7cc4u;
    // NOP
label_2c7cc8:
    // 0x2c7cc8: 0x62756c43  daddi       $s5, $s3, 0x6C43
    ctx->pc = 0x2c7cc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27715; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c7ccc:
    // 0x2c7ccc: 0x0  nop
    ctx->pc = 0x2c7cccu;
    // NOP
label_2c7cd0:
    // 0x2c7cd0: 0x6b697053  ldl         $t1, 0x7053($k1)
    ctx->pc = 0x2c7cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28755); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2c7cd4:
    // 0x2c7cd4: 0x43206465  .word       0x43206465                   # INVALID     $t9, $zero, 0x6465 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c7cd4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C7CD4 raw=0x43206465");
 /* MITIGATED */
label_2c7cd8:
    // 0x2c7cd8: 0x62756c  .word       0x0062756C                   # dadd        $t6, $v1, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7cd8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c7cdc:
    // 0x2c7cdc: 0x0  nop
    ctx->pc = 0x2c7cdcu;
    // NOP
label_2c7ce0:
    // 0x2c7ce0: 0x6e697754  ldr         $t1, 0x7754($s3)
    ctx->pc = 0x2c7ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30548); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c7ce4:
    // 0x2c7ce4: 0x62615320  daddi       $at, $s3, 0x5320
    ctx->pc = 0x2c7ce4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c7ce8:
    // 0x2c7ce8: 0x737265  .word       0x00737265                   # or          $t6, $v1, $s3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7ce8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_2c7cec:
    // 0x2c7cec: 0x0  nop
    ctx->pc = 0x2c7cecu;
    // NOP
label_2c7cf0:
    // 0x2c7cf0: 0x676e6957  daddiu      $t6, $k1, 0x6957
    ctx->pc = 0x2c7cf0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26967);
label_2c7cf4:
    // 0x2c7cf4: 0x62615320  daddi       $at, $s3, 0x5320
    ctx->pc = 0x2c7cf4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c7cf8:
    // 0x2c7cf8: 0x737265  .word       0x00737265                   # or          $t6, $v1, $s3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7cf8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_2c7cfc:
    // 0x2c7cfc: 0x0  nop
    ctx->pc = 0x2c7cfcu;
    // NOP
label_2c7d00:
    // 0x2c7d00: 0x6e697754  ldr         $t1, 0x7754($s3)
    ctx->pc = 0x2c7d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30548); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c7d04:
    // 0x2c7d04: 0x646f5220  daddiu      $t7, $v1, 0x5220
    ctx->pc = 0x2c7d04u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)21024);
label_2c7d08:
    // 0x2c7d08: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c7d08u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7d0c:
    // 0x2c7d0c: 0x0  nop
    ctx->pc = 0x2c7d0cu;
    // NOP
label_2c7d10:
    // 0x2c7d10: 0x72697053  .word       0x72697053                   # mtlo1       $s3 # 00097040 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7d10u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c7d14:
    // 0x2c7d14: 0x52206c61  beql        $s1, $zero, . + 4 + (0x6C61 << 2)
label_2c7d18:
    if (ctx->pc == 0x2C7D18u) {
        ctx->pc = 0x2C7D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7D14u;
        // 0x2c7d18: 0x73646f  .word       0x0073646F                   # dsubu       $t4, $v1, $s3 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7D1Cu;
        goto label_2c7d1c;
    }
    ctx->pc = 0x2C7D14u;
    {
        const bool branch_taken_0x2c7d14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d14) {
            ctx->pc = 0x2C7D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7D14u;
            // 0x2c7d18: 0x73646f  .word       0x0073646F                   # dsubu       $t4, $v1, $s3 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2E9Cu;
            return;
        }
    }
    ctx->pc = 0x2C7D1Cu;
label_2c7d1c:
    // 0x2c7d1c: 0x0  nop
    ctx->pc = 0x2c7d1cu;
    // NOP
label_2c7d20:
    // 0x2c7d20: 0x6563614d  daddiu      $v1, $t3, 0x614D
    ctx->pc = 0x2c7d20u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24909);
label_2c7d24:
    // 0x2c7d24: 0x0  nop
    ctx->pc = 0x2c7d24u;
    // NOP
label_2c7d28:
    // 0x2c7d28: 0x61657247  daddi       $a1, $t3, 0x7247
    ctx->pc = 0x2c7d28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29255; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7d2c:
    // 0x2c7d2c: 0x614d2074  daddi       $t5, $t2, 0x2074
    ctx->pc = 0x2c7d2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c7d30:
    // 0x2c7d30: 0x6563  .word       0x00006563                   # negu        $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7d30u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7d34:
    // 0x2c7d34: 0x0  nop
    ctx->pc = 0x2c7d34u;
    // NOP
label_2c7d38:
    // 0x2c7d38: 0x20726157  addi        $s2, $v1, 0x6157
    ctx->pc = 0x2c7d38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24919, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c7d3c:
    // 0x2c7d3c: 0x6e6146  .word       0x006E6146                   # srlv        $t4, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7d3cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 3) & 0x1F));
label_2c7d40:
    // 0x2c7d40: 0x6c726157  ldr         $s2, 0x6157($v1)
    ctx->pc = 0x2c7d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c7d44:
    // 0x2c7d44: 0x2064726f  addi        $a0, $v1, 0x726F
    ctx->pc = 0x2c7d44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7d48:
    // 0x2c7d48: 0x6e6146  .word       0x006E6146                   # srlv        $t4, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7d48u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 3) & 0x1F));
label_2c7d4c:
    // 0x2c7d4c: 0x0  nop
    ctx->pc = 0x2c7d4cu;
    // NOP
label_2c7d50:
    // 0x2c7d50: 0x6b616843  ldl         $at, 0x6843($k1)
    ctx->pc = 0x2c7d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c7d54:
    // 0x2c7d54: 0x6d6172  tlt         $v1, $t5, 389
    ctx->pc = 0x2c7d54u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_2c7d58:
    // 0x2c7d58: 0x0  nop
    ctx->pc = 0x2c7d58u;
    // NOP
label_2c7d5c:
    // 0x2c7d5c: 0x0  nop
    ctx->pc = 0x2c7d5cu;
    // NOP
label_2c7d60:
    // 0x2c7d60: 0x73657243  .word       0x73657243                   # INVALID     $k1, $a1, 0x7243 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7d60u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c7d64:
    // 0x2c7d64: 0x746e6563  .word       0x746E6563                   # INVALID     $v1, $t6, 0x6563 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7d64u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7D64 raw=0x746E6563");
 /* MITIGATED */
label_2c7d68:
    // 0x2c7d68: 0x61684320  daddi       $t0, $t3, 0x4320
    ctx->pc = 0x2c7d68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17184; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c7d6c:
    // 0x2c7d6c: 0x6d61726b  ldr         $at, 0x726B($t3)
    ctx->pc = 0x2c7d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7d70:
    // 0x2c7d70: 0x0  nop
    ctx->pc = 0x2c7d70u;
    // NOP
label_2c7d74:
    // 0x2c7d74: 0x0  nop
    ctx->pc = 0x2c7d74u;
    // NOP
label_2c7d78:
    // 0x2c7d78: 0x74746142  .word       0x74746142                   # INVALID     $v1, $s4, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7d78u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7D78 raw=0x74746142");
 /* MITIGATED */
label_2c7d7c:
    // 0x2c7d7c: 0x4120656c  .word       0x4120656C                   # INVALID     $t1, $zero, 0x656C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c7d7cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2C7D7C raw=0x4120656C");
 /* MITIGATED */
label_2c7d80:
    // 0x2c7d80: 0x6578  dsll        $t4, $zero, 21
    ctx->pc = 0x2c7d80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << 21);
label_2c7d84:
    // 0x2c7d84: 0x0  nop
    ctx->pc = 0x2c7d84u;
    // NOP
label_2c7d88:
    // 0x2c7d88: 0x20726157  addi        $s2, $v1, 0x6157
    ctx->pc = 0x2c7d88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24919, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c7d8c:
    // 0x2c7d8c: 0x657841  .word       0x00657841                   # INVALID     $v1, $a1, 0x7841 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7d8cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C7D8C raw=0x00657841");
 /* MITIGATED */
label_2c7d90:
    // 0x2c7d90: 0x6e6f7242  ldr         $t7, 0x7242($s3)
    ctx->pc = 0x2c7d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7d94:
    // 0x2c7d94: 0x4320657a  .word       0x4320657A                   # INVALID     $t9, $zero, 0x657A # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c7d94u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C7D94 raw=0x4320657A");
 /* MITIGATED */
label_2c7d98:
    // 0x2c7d98: 0x77616c  .word       0x0077616C                   # dadd        $t4, $v1, $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7d98u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 23); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c7d9c:
    // 0x2c7d9c: 0x0  nop
    ctx->pc = 0x2c7d9cu;
    // NOP
label_2c7da0:
    // 0x2c7da0: 0x65657453  daddiu      $a1, $t3, 0x7453
    ctx->pc = 0x2c7da0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29779);
label_2c7da4:
    // 0x2c7da4: 0x6c43206c  ldr         $v1, 0x206C($v0)
    ctx->pc = 0x2c7da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2c7da8:
    // 0x2c7da8: 0x7761  .word       0x00007761                   # addu        $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7da8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7dac:
    // 0x2c7dac: 0x0  nop
    ctx->pc = 0x2c7dacu;
    // NOP
label_2c7db0:
    // 0x2c7db0: 0x6e6f7249  ldr         $t7, 0x7249($s3)
    ctx->pc = 0x2c7db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7db4:
    // 0x2c7db4: 0x756c4620  .word       0x756C4620                   # INVALID     $t3, $t4, 0x4620 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7db4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7DB4 raw=0x756C4620");
 /* MITIGATED */
label_2c7db8:
    // 0x2c7db8: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x2c7db8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7dbc:
    // 0x2c7dbc: 0x0  nop
    ctx->pc = 0x2c7dbcu;
    // NOP
label_2c7dc0:
    // 0x2c7dc0: 0x65657453  daddiu      $a1, $t3, 0x7453
    ctx->pc = 0x2c7dc0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29779);
label_2c7dc4:
    // 0x2c7dc4: 0x6c46206c  ldr         $a2, 0x206C($v0)
    ctx->pc = 0x2c7dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2c7dc8:
    // 0x2c7dc8: 0x657475  .word       0x00657475                   # INVALID     $v1, $a1, 0x7475 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7dc8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2C7DC8 raw=0x00657475");
 /* MITIGATED */
label_2c7dcc:
    // 0x2c7dcc: 0x0  nop
    ctx->pc = 0x2c7dccu;
    // NOP
label_2c7dd0:
    // 0x2c7dd0: 0x6e6f7249  ldr         $t7, 0x7249($s3)
    ctx->pc = 0x2c7dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7dd4:
    // 0x2c7dd4: 0x646f5220  daddiu      $t7, $v1, 0x5220
    ctx->pc = 0x2c7dd4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)21024);
label_2c7dd8:
    // 0x2c7dd8: 0x0  nop
    ctx->pc = 0x2c7dd8u;
    // NOP
label_2c7ddc:
    // 0x2c7ddc: 0x0  nop
    ctx->pc = 0x2c7ddcu;
    // NOP
label_2c7de0:
    // 0x2c7de0: 0x65657453  daddiu      $a1, $t3, 0x7453
    ctx->pc = 0x2c7de0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29779);
label_2c7de4:
    // 0x2c7de4: 0x6f52206c  ldr         $s2, 0x206C($k0)
    ctx->pc = 0x2c7de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c7de8:
    // 0x2c7de8: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7de8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c7dec:
    // 0x2c7dec: 0x0  nop
    ctx->pc = 0x2c7decu;
    // NOP
label_2c7df0:
    // 0x2c7df0: 0x666e6f54  daddiu      $t6, $s3, 0x6F54
    ctx->pc = 0x2c7df0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28500);
label_2c7df4:
    // 0x2c7df4: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7df4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7df8:
    // 0x2c7df8: 0x64757453  daddiu      $s5, $v1, 0x7453
    ctx->pc = 0x2c7df8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29779);
label_2c7dfc:
    // 0x2c7dfc: 0x20646564  addi        $a0, $v1, 0x6564
    ctx->pc = 0x2c7dfcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7e00:
    // 0x2c7e00: 0x666e6f54  daddiu      $t6, $s3, 0x6F54
    ctx->pc = 0x2c7e00u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28500);
label_2c7e04:
    // 0x2c7e04: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e04u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c7e08:
    // 0x2c7e08: 0x62756f44  daddi       $s5, $s3, 0x6F44
    ctx->pc = 0x2c7e08u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28484; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c7e0c:
    // 0x2c7e0c: 0x5620656c  bnel        $s1, $zero, . + 4 + (0x656C << 2)
label_2c7e10:
    if (ctx->pc == 0x2C7E10u) {
        ctx->pc = 0x2C7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E0Cu;
        // 0x2c7e10: 0x676c756f  daddiu      $t4, $k1, 0x756F (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)30063);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E14u;
        goto label_2c7e14;
    }
    ctx->pc = 0x2C7E0Cu;
    {
        const bool branch_taken_0x2c7e0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e0c) {
            ctx->pc = 0x2C7E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7E0Cu;
            // 0x2c7e10: 0x676c756f  daddiu      $t4, $k1, 0x756F (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)30063);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E13C0u;
            return;
        }
    }
    ctx->pc = 0x2C7E14u;
label_2c7e14:
    // 0x2c7e14: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c7e18:
    // 0x2c7e18: 0x69727453  ldl         $s2, 0x7453($t3)
    ctx->pc = 0x2c7e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c7e1c:
    // 0x2c7e1c: 0x5620656b  bnel        $s1, $zero, . + 4 + (0x656B << 2)
label_2c7e20:
    if (ctx->pc == 0x2C7E20u) {
        ctx->pc = 0x2C7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E1Cu;
        // 0x2c7e20: 0x676c756f  daddiu      $t4, $k1, 0x756F (Delay Slot)
        SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)30063);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E24u;
        goto label_2c7e24;
    }
    ctx->pc = 0x2C7E1Cu;
    {
        const bool branch_taken_0x2c7e1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e1c) {
            ctx->pc = 0x2C7E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7E1Cu;
            // 0x2c7e20: 0x676c756f  daddiu      $t4, $k1, 0x756F (Delay Slot)
            SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)30063);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E13CCu;
            return;
        }
    }
    ctx->pc = 0x2C7E24u;
label_2c7e24:
    // 0x2c7e24: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c7e28:
    // 0x2c7e28: 0x66617453  daddiu      $at, $s3, 0x7453
    ctx->pc = 0x2c7e28u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29779);
label_2c7e2c:
    // 0x2c7e2c: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2c7e30:
    // 0x2c7e30: 0x6172694d  daddi       $s2, $t3, 0x694D
    ctx->pc = 0x2c7e30u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26957; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7e34:
    // 0x2c7e34: 0x53206567  beql        $t9, $zero, . + 4 + (0x6567 << 2)
label_2c7e38:
    if (ctx->pc == 0x2C7E38u) {
        ctx->pc = 0x2C7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7E34u;
        // 0x2c7e38: 0x66666174  daddiu      $a2, $s3, 0x6174 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)24948);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7E3Cu;
        goto label_2c7e3c;
    }
    ctx->pc = 0x2C7E34u;
    {
        const bool branch_taken_0x2c7e34 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7e34) {
            ctx->pc = 0x2C7E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7E34u;
            // 0x2c7e38: 0x66666174  daddiu      $a2, $s3, 0x6174 (Delay Slot)
            SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)24948);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E13D4u;
            return;
        }
    }
    ctx->pc = 0x2C7E3Cu;
label_2c7e3c:
    // 0x2c7e3c: 0x0  nop
    ctx->pc = 0x2c7e3cu;
    // NOP
label_2c7e40:
    // 0x2c7e40: 0x6d6e614e  ldr         $t6, 0x614E($t3)
    ctx->pc = 0x2c7e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24910); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c7e44:
    // 0x2c7e44: 0x47206e61  .word       0x47206E61                   # INVALID     $t9, $zero, 0x6E61 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c7e44u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x21 at 0x2C7E44 raw=0x47206E61");
 /* MITIGATED */
label_2c7e48:
    // 0x2c7e48: 0x746e7561  .word       0x746E7561                   # INVALID     $v1, $t6, 0x7561 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7e48u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7E48 raw=0x746E7561");
 /* MITIGATED */
label_2c7e4c:
    // 0x2c7e4c: 0x74656c  .word       0x0074656C                   # dadd        $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c7e50:
    // 0x2c7e50: 0x73616542  .word       0x73616542                   # INVALID     $k1, $at, 0x6542 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7e50u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c7e54:
    // 0x2c7e54: 0x61472074  daddi       $a3, $t2, 0x2074
    ctx->pc = 0x2c7e54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_2c7e58:
    // 0x2c7e58: 0x6c746e75  ldr         $s4, 0x6E75($v1)
    ctx->pc = 0x2c7e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28277); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c7e5c:
    // 0x2c7e5c: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e5cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c7e60:
    // 0x2c7e60: 0x6d6f6f42  ldr         $t7, 0x6F42($t3)
    ctx->pc = 0x2c7e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28482); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7e64:
    // 0x2c7e64: 0x6e617265  ldr         $at, 0x7265($s3)
    ctx->pc = 0x2c7e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7e68:
    // 0x2c7e68: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e68u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2c7e6c:
    // 0x2c7e6c: 0x0  nop
    ctx->pc = 0x2c7e6cu;
    // NOP
label_2c7e70:
    // 0x2c7e70: 0x6b776148  ldl         $s7, 0x6148($k1)
    ctx->pc = 0x2c7e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24904); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_2c7e74:
    // 0x2c7e74: 0x6f6f4220  ldr         $t7, 0x4220($k1)
    ctx->pc = 0x2c7e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 16928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7e78:
    // 0x2c7e78: 0x6172656d  daddi       $s2, $t3, 0x656D
    ctx->pc = 0x2c7e78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25965; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7e7c:
    // 0x2c7e7c: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e7cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c7e80:
    // 0x2c7e80: 0x6e697754  ldr         $t1, 0x7754($s3)
    ctx->pc = 0x2c7e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30548); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c7e84:
    // 0x2c7e84: 0x6e614620  ldr         $at, 0x4620($s3)
    ctx->pc = 0x2c7e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7e88:
    // 0x2c7e88: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2c7e88u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7e8c:
    // 0x2c7e8c: 0x0  nop
    ctx->pc = 0x2c7e8cu;
    // NOP
label_2c7e90:
    // 0x2c7e90: 0x6c6f6956  ldr         $t7, 0x6956($v1)
    ctx->pc = 0x2c7e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26966); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7e94:
    // 0x2c7e94: 0x46207465  .word       0x46207465                   # INVALID     $s1, $zero, 0x7465 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c7e94u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x25 at 0x2C7E94 raw=0x46207465");
 /* MITIGATED */
label_2c7e98:
    // 0x2c7e98: 0x736e61  .word       0x00736E61                   # addu        $t5, $v1, $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7e98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2c7e9c:
    // 0x2c7e9c: 0x0  nop
    ctx->pc = 0x2c7e9cu;
    // NOP
label_2c7ea0:
    // 0x2c7ea0: 0x74736142  .word       0x74736142                   # INVALID     $v1, $s3, 0x6142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7ea0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7EA0 raw=0x74736142");
 /* MITIGATED */
label_2c7ea4:
    // 0x2c7ea4: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2c7ea4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c7ea8:
    // 0x2c7ea8: 0x726f7753  .word       0x726F7753                   # mtlo1       $s3 # 000F7740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7ea8u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c7eac:
    // 0x2c7eac: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7eacu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c7eb0:
    // 0x2c7eb0: 0x61657247  daddi       $a1, $t3, 0x7247
    ctx->pc = 0x2c7eb0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29255; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7eb4:
    // 0x2c7eb4: 0x77532074  .word       0x77532074                   # INVALID     $k0, $s3, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7eb4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7EB4 raw=0x77532074");
 /* MITIGATED */
label_2c7eb8:
    // 0x2c7eb8: 0x64726f  .word       0x0064726F                   # dsubu       $t6, $v1, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7eb8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_2c7ebc:
    // 0x2c7ebc: 0x0  nop
    ctx->pc = 0x2c7ebcu;
    // NOP
label_2c7ec0:
    // 0x2c7ec0: 0x69706152  ldl         $s0, 0x6152($t3)
    ctx->pc = 0x2c7ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24914); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_2c7ec4:
    // 0x2c7ec4: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7ec4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c7ec8:
    // 0x2c7ec8: 0x66697753  daddiu      $t1, $s3, 0x7753
    ctx->pc = 0x2c7ec8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)30547);
label_2c7ecc:
    // 0x2c7ecc: 0x61522074  daddi       $s2, $t2, 0x2074
    ctx->pc = 0x2c7eccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7ed0:
    // 0x2c7ed0: 0x72656970  .word       0x72656970                   # INVALID     $s3, $a1, 0x6970 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x2c7ed0u;
//     throw std::runtime_error("Unhandled PMFHL instruction: function 0x5 at 0x2C7ED0 raw=0x72656970");
 /* MITIGATED */
label_2c7ed4:
    // 0x2c7ed4: 0x0  nop
    ctx->pc = 0x2c7ed4u;
    // NOP
label_2c7ed8:
    // 0x2c7ed8: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c7ed8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c7edc:
    // 0x2c7edc: 0x53206e6f  beql        $t9, $zero, . + 4 + (0x6E6F << 2)
label_2c7ee0:
    if (ctx->pc == 0x2C7EE0u) {
        ctx->pc = 0x2C7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7EDCu;
        // 0x2c7ee0: 0x72616570  .word       0x72616570                   # INVALID     $s3, $at, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL> (Delay Slot)
//         throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x2C7EE0 raw=0x72616570");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7EE4u;
        goto label_2c7ee4;
    }
    ctx->pc = 0x2C7EDCu;
    {
        const bool branch_taken_0x2c7edc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7edc) {
            ctx->pc = 0x2C7EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7EDCu;
            // 0x2c7ee0: 0x72616570  .word       0x72616570                   # INVALID     $s3, $at, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL> (Delay Slot)
//             throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x2C7EE0 raw=0x72616570");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E389Cu;
            return;
        }
    }
    ctx->pc = 0x2C7EE4u;
label_2c7ee4:
    // 0x2c7ee4: 0x0  nop
    ctx->pc = 0x2c7ee4u;
    // NOP
label_2c7ee8:
    // 0x2c7ee8: 0x65756c42  daddiu      $s5, $t3, 0x6C42
    ctx->pc = 0x2c7ee8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27714);
label_2c7eec:
    // 0x2c7eec: 0x61724420  daddi       $s2, $t3, 0x4420
    ctx->pc = 0x2c7eecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17440; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7ef0:
    // 0x2c7ef0: 0x6e6f67  .word       0x006E6F67                   # nor         $t5, $v1, $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7ef0u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 14)));
label_2c7ef4:
    // 0x2c7ef4: 0x0  nop
    ctx->pc = 0x2c7ef4u;
    // NOP
label_2c7ef8:
    // 0x2c7ef8: 0x6b616e53  ldl         $at, 0x6E53($k1)
    ctx->pc = 0x2c7ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c7efc:
    // 0x2c7efc: 0x6c422065  ldr         $v0, 0x2065($v0)
    ctx->pc = 0x2c7efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c7f00:
    // 0x2c7f00: 0x656461  .word       0x00656461                   # addu        $t4, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7f00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c7f04:
    // 0x2c7f04: 0x0  nop
    ctx->pc = 0x2c7f04u;
    // NOP
label_2c7f08:
    // 0x2c7f08: 0x6972694b  ldl         $s2, 0x694B($t3)
    ctx->pc = 0x2c7f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c7f0c:
    // 0x2c7f0c: 0x7753206e  .word       0x7753206E                   # INVALID     $k0, $s3, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7f0cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7F0C raw=0x7753206E");
 /* MITIGATED */
label_2c7f10:
    // 0x2c7f10: 0x64726f  .word       0x0064726F                   # dsubu       $t6, $v1, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7f10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_2c7f14:
    // 0x2c7f14: 0x0  nop
    ctx->pc = 0x2c7f14u;
    // NOP
label_2c7f18:
    // 0x2c7f18: 0x6c6c7542  ldr         $t4, 0x7542($v1)
    ctx->pc = 0x2c7f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30018); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c7f1c:
    // 0x2c7f1c: 0x0  nop
    ctx->pc = 0x2c7f1cu;
    // NOP
label_2c7f20:
    // 0x2c7f20: 0x656e6f42  daddiu      $t6, $t3, 0x6F42
    ctx->pc = 0x2c7f20u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28482);
label_2c7f24:
    // 0x2c7f24: 0x75724320  .word       0x75724320                   # INVALID     $t3, $s2, 0x4320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7f24u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7F24 raw=0x75724320");
 /* MITIGATED */
label_2c7f28:
    // 0x2c7f28: 0x72656873  .word       0x72656873                   # INVALID     $s3, $a1, 0x6873 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7f28u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2C7F28 raw=0x72656873");
 /* MITIGATED */
label_2c7f2c:
    // 0x2c7f2c: 0x0  nop
    ctx->pc = 0x2c7f2cu;
    // NOP
label_2c7f30:
    // 0x2c7f30: 0x65646c45  daddiu      $a0, $t3, 0x6C45
    ctx->pc = 0x2c7f30u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27717);
label_2c7f34:
    // 0x2c7f34: 0x77532072  .word       0x77532072                   # INVALID     $k0, $s3, 0x2072 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7f34u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7F34 raw=0x77532072");
 /* MITIGATED */
label_2c7f38:
    // 0x2c7f38: 0x64726f  .word       0x0064726F                   # dsubu       $t6, $v1, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7f38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_2c7f3c:
    // 0x2c7f3c: 0x0  nop
    ctx->pc = 0x2c7f3cu;
    // NOP
label_2c7f40:
    // 0x2c7f40: 0x6c676145  ldr         $a3, 0x6145($v1)
    ctx->pc = 0x2c7f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24901); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2c7f44:
    // 0x2c7f44: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7f44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c7f48:
    // 0x2c7f48: 0x666c6f57  daddiu      $t4, $s3, 0x6F57
    ctx->pc = 0x2c7f48u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28503);
label_2c7f4c:
    // 0x2c7f4c: 0x616c5320  daddi       $t4, $t3, 0x5320
    ctx->pc = 0x2c7f4cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c7f50:
    // 0x2c7f50: 0x726579  .word       0x00726579                   # INVALID     $v1, $s2, 0x6579 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7f50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2C7F50 raw=0x00726579");
 /* MITIGATED */
label_2c7f54:
    // 0x2c7f54: 0x0  nop
    ctx->pc = 0x2c7f54u;
    // NOP
label_2c7f58:
    // 0x2c7f58: 0x646c6f47  daddiu      $t4, $v1, 0x6F47
    ctx->pc = 0x2c7f58u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28487);
label_2c7f5c:
    // 0x2c7f5c: 0x62724f20  daddi       $s2, $s3, 0x4F20
    ctx->pc = 0x2c7f5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)20256; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7f60:
    // 0x2c7f60: 0x0  nop
    ctx->pc = 0x2c7f60u;
    // NOP
label_2c7f64:
    // 0x2c7f64: 0x0  nop
    ctx->pc = 0x2c7f64u;
    // NOP
label_2c7f68:
    // 0x2c7f68: 0x74696857  .word       0x74696857                   # INVALID     $v1, $t1, 0x6857 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7f68u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7F68 raw=0x74696857");
 /* MITIGATED */
label_2c7f6c:
    // 0x2c7f6c: 0x65462065  daddiu      $a2, $t2, 0x2065
    ctx->pc = 0x2c7f6cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2c7f70:
    // 0x2c7f70: 0x65687461  daddiu      $t0, $t3, 0x7461
    ctx->pc = 0x2c7f70u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
label_2c7f74:
    // 0x2c7f74: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c7f74u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7f78:
    // 0x2c7f78: 0x0  nop
    ctx->pc = 0x2c7f78u;
    // NOP
label_2c7f7c:
    // 0x2c7f7c: 0x0  nop
    ctx->pc = 0x2c7f7cu;
    // NOP
label_2c7f80:
    // 0x2c7f80: 0x726f7753  .word       0x726F7753                   # mtlo1       $s3 # 000F7740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7f80u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c7f84:
    // 0x2c7f84: 0x666f2064  daddiu      $t7, $s3, 0x2064
    ctx->pc = 0x2c7f84u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)8292);
label_2c7f88:
    // 0x2c7f88: 0x61654820  daddi       $a1, $t3, 0x4820
    ctx->pc = 0x2c7f88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18464; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c7f8c:
    // 0x2c7f8c: 0x6e6576  tne         $v1, $t6, 405
    ctx->pc = 0x2c7f8cu;
    if (GPR_U64(ctx, 3) != GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_2c7f90:
    // 0x2c7f90: 0x20796b53  addi        $t9, $v1, 0x6B53
    ctx->pc = 0x2c7f90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27475, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2c7f94:
    // 0x2c7f94: 0x72656950  .word       0x72656950                   # mfhi1       $t5 # 02650140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7f94u;
    SET_GPR_U64(ctx, 13, ctx->hi1);
label_2c7f98:
    // 0x2c7f98: 0x726563  .word       0x00726563                   # subu        $t4, $v1, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7f98u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2c7f9c:
    // 0x2c7f9c: 0x0  nop
    ctx->pc = 0x2c7f9cu;
    // NOP
label_2c7fa0:
    // 0x2c7fa0: 0x616e754c  daddi       $t6, $t3, 0x754C
    ctx->pc = 0x2c7fa0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)30028; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c7fa4:
    // 0x2c7fa4: 0x61684320  daddi       $t0, $t3, 0x4320
    ctx->pc = 0x2c7fa4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17184; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2c7fa8:
    // 0x2c7fa8: 0x6d61726b  ldr         $at, 0x726B($t3)
    ctx->pc = 0x2c7fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c7fac:
    // 0x2c7fac: 0x0  nop
    ctx->pc = 0x2c7facu;
    // NOP
label_2c7fb0:
    // 0x2c7fb0: 0x646c6f47  daddiu      $t4, $v1, 0x6F47
    ctx->pc = 0x2c7fb0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28487);
label_2c7fb4:
    // 0x2c7fb4: 0x61724420  daddi       $s2, $t3, 0x4420
    ctx->pc = 0x2c7fb4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17440; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2c7fb8:
    // 0x2c7fb8: 0x6e6f67  .word       0x006E6F67                   # nor         $t5, $v1, $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7fb8u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 14)));
label_2c7fbc:
    // 0x2c7fbc: 0x0  nop
    ctx->pc = 0x2c7fbcu;
    // NOP
label_2c7fc0:
    // 0x2c7fc0: 0x656e6f4c  daddiu      $t6, $t3, 0x6F4C
    ctx->pc = 0x2c7fc0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28492);
label_2c7fc4:
    // 0x2c7fc4: 0x6c6f5720  ldr         $t7, 0x5720($v1)
    ctx->pc = 0x2c7fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7fc8:
    // 0x2c7fc8: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7fc8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2c7fcc:
    // 0x2c7fcc: 0x0  nop
    ctx->pc = 0x2c7fccu;
    // NOP
label_2c7fd0:
    // 0x2c7fd0: 0x676e694b  daddiu      $t6, $k1, 0x694B
    ctx->pc = 0x2c7fd0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26955);
label_2c7fd4:
    // 0x2c7fd4: 0x6c6f5720  ldr         $t7, 0x5720($v1)
    ctx->pc = 0x2c7fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c7fd8:
    // 0x2c7fd8: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c7fd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2c7fdc:
    // 0x2c7fdc: 0x0  nop
    ctx->pc = 0x2c7fdcu;
    // NOP
label_2c7fe0:
    // 0x2c7fe0: 0x72617453  .word       0x72617453                   # mtlo1       $s3 # 00017440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c7fe0u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c7fe4:
    // 0x2c7fe4: 0x6f775320  ldr         $s7, 0x5320($k1)
    ctx->pc = 0x2c7fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_2c7fe8:
    // 0x2c7fe8: 0x6472  tlt         $zero, $zero, 401
    ctx->pc = 0x2c7fe8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c7fec:
    // 0x2c7fec: 0x0  nop
    ctx->pc = 0x2c7fecu;
    // NOP
label_2c7ff0:
    // 0x2c7ff0: 0x7473614d  .word       0x7473614D                   # INVALID     $v1, $s3, 0x614D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c7ff0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C7FF0 raw=0x7473614D");
 /* MITIGATED */
label_2c7ff4:
    // 0x2c7ff4: 0x53207265  beql        $t9, $zero, . + 4 + (0x7265 << 2)
label_2c7ff8:
    if (ctx->pc == 0x2C7FF8u) {
        ctx->pc = 0x2C7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7FF4u;
        // 0x2c7ff8: 0x64726f77  daddiu      $s2, $v1, 0x6F77 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7FFCu;
        goto label_2c7ffc;
    }
    ctx->pc = 0x2C7FF4u;
    {
        const bool branch_taken_0x2c7ff4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ff4) {
            ctx->pc = 0x2C7FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7FF4u;
            // 0x2c7ff8: 0x64726f77  daddiu      $s2, $v1, 0x6F77 (Delay Slot)
            SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E498Cu;
            return;
        }
    }
    ctx->pc = 0x2C7FFCu;
label_2c7ffc:
    // 0x2c7ffc: 0x0  nop
    ctx->pc = 0x2c7ffcu;
    // NOP
label_2c8000:
    // 0x2c8000: 0x65657453  daddiu      $a1, $t3, 0x7453
    ctx->pc = 0x2c8000u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29779);
label_2c8004:
    // 0x2c8004: 0x7453206c  .word       0x7453206C                   # INVALID     $v0, $s3, 0x206C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8004u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8004 raw=0x7453206C");
 /* MITIGATED */
label_2c8008:
    // 0x2c8008: 0x696c6c61  ldl         $t4, 0x6C61($t3)
    ctx->pc = 0x2c8008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2c800c:
    // 0x2c800c: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c800cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c8010:
    // 0x2c8010: 0x65676153  daddiu      $a3, $t3, 0x6153
    ctx->pc = 0x2c8010u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24915);
label_2c8014:
    // 0x2c8014: 0x6f775320  ldr         $s7, 0x5320($k1)
    ctx->pc = 0x2c8014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_2c8018:
    // 0x2c8018: 0x6472  tlt         $zero, $zero, 401
    ctx->pc = 0x2c8018u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c801c:
    // 0x2c801c: 0x0  nop
    ctx->pc = 0x2c801cu;
    // NOP
label_2c8020:
    // 0x2c8020: 0x6f6d6544  ldr         $t5, 0x6544($k1)
    ctx->pc = 0x2c8020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2c8024:
    // 0x2c8024: 0x7753206e  .word       0x7753206E                   # INVALID     $k0, $s3, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8024u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8024 raw=0x7753206E");
 /* MITIGATED */
label_2c8028:
    // 0x2c8028: 0x64726f  .word       0x0064726F                   # dsubu       $t6, $v1, $a0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8028u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_2c802c:
    // 0x2c802c: 0x0  nop
    ctx->pc = 0x2c802cu;
    // NOP
label_2c8030:
    // 0x2c8030: 0x67617244  daddiu      $at, $k1, 0x7244
    ctx->pc = 0x2c8030u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29252);
label_2c8034:
    // 0x2c8034: 0x42206e6f  .word       0x42206E6F                   # INVALID     $s1, $zero, 0x6E6F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c8034u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2C8034 raw=0x42206E6F");
 /* MITIGATED */
label_2c8038:
    // 0x2c8038: 0x6564616c  daddiu      $a0, $t3, 0x616C
    ctx->pc = 0x2c8038u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
label_2c803c:
    // 0x2c803c: 0x0  nop
    ctx->pc = 0x2c803cu;
    // NOP
label_2c8040:
    // 0x2c8040: 0x63616c42  daddi       $at, $k1, 0x6C42
    ctx->pc = 0x2c8040u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27714; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c8044:
    // 0x2c8044: 0x6546206b  daddiu      $a2, $t2, 0x206B
    ctx->pc = 0x2c8044u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8299);
label_2c8048:
    // 0x2c8048: 0x65687461  daddiu      $t0, $t3, 0x7461
    ctx->pc = 0x2c8048u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
label_2c804c:
    // 0x2c804c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c804cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8050:
    // 0x2c8050: 0x65676954  daddiu      $a3, $t3, 0x6954
    ctx->pc = 0x2c8050u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26964);
label_2c8054:
    // 0x2c8054: 0x6f482072  ldr         $t0, 0x2072($k0)
    ctx->pc = 0x2c8054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2c8058:
    // 0x2c8058: 0x6b6f  .word       0x00006B6F                   # dsubu       $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8058u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c805c:
    // 0x2c805c: 0x0  nop
    ctx->pc = 0x2c805cu;
    // NOP
label_2c8060:
    // 0x2c8060: 0x65766952  daddiu      $s6, $t3, 0x6952
    ctx->pc = 0x2c8060u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26962);
label_2c8064:
    // 0x2c8064: 0x614d2072  daddi       $t5, $t2, 0x2072
    ctx->pc = 0x2c8064u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c8068:
    // 0x2c8068: 0x72657473  .word       0x72657473                   # INVALID     $s3, $a1, 0x7473 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8068u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2C8068 raw=0x72657473");
 /* MITIGATED */
label_2c806c:
    // 0x2c806c: 0x0  nop
    ctx->pc = 0x2c806cu;
    // NOP
label_2c8070:
    // 0x2c8070: 0x6f706156  ldr         $s0, 0x6156($k1)
    ctx->pc = 0x2c8070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24918); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2c8074:
    // 0x2c8074: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c8074u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8078:
    // 0x2c8078: 0x66617453  daddiu      $at, $s3, 0x7453
    ctx->pc = 0x2c8078u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29779);
label_2c807c:
    // 0x2c807c: 0x666f2066  daddiu      $t7, $s3, 0x2066
    ctx->pc = 0x2c807cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)8294);
label_2c8080:
    // 0x2c8080: 0x72694620  .word       0x72694620                   # madd1       $t0, $s3, $t1 # 00000600 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8080u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2c8084:
    // 0x2c8084: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8084u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c8088:
    // 0x2c8088: 0x74736544  .word       0x74736544                   # INVALID     $v1, $s3, 0x6544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8088u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8088 raw=0x74736544");
 /* MITIGATED */
label_2c808c:
    // 0x2c808c: 0x65796f72  daddiu      $t9, $t3, 0x6F72
    ctx->pc = 0x2c808cu;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28530);
label_2c8090:
    // 0x2c8090: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c8090u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8094:
    // 0x2c8094: 0x0  nop
    ctx->pc = 0x2c8094u;
    // NOP
label_2c8098:
    // 0x2c8098: 0x63616550  daddi       $at, $k1, 0x6550
    ctx->pc = 0x2c8098u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25936; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c809c:
    // 0x2c809c: 0x206b636f  addi        $t3, $v1, 0x636F
    ctx->pc = 0x2c809cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25455, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_2c80a0:
    // 0x2c80a0: 0x77616c43  .word       0x77616C43                   # INVALID     $k1, $at, 0x6C43 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c80a0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C80A0 raw=0x77616C43");
 /* MITIGATED */
label_2c80a4:
    // 0x2c80a4: 0x0  nop
    ctx->pc = 0x2c80a4u;
    // NOP
label_2c80a8:
    // 0x2c80a8: 0x6e6f6f4d  ldr         $t7, 0x6F4D($s3)
    ctx->pc = 0x2c80a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28493); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c80ac:
    // 0x2c80ac: 0x756c4620  .word       0x756C4620                   # INVALID     $t3, $t4, 0x4620 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c80acu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C80AC raw=0x756C4620");
 /* MITIGATED */
label_2c80b0:
    // 0x2c80b0: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x2c80b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c80b4:
    // 0x2c80b4: 0x0  nop
    ctx->pc = 0x2c80b4u;
    // NOP
label_2c80b8:
    // 0x2c80b8: 0x64616853  daddiu      $at, $v1, 0x6853
    ctx->pc = 0x2c80b8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26707);
label_2c80bc:
    // 0x2c80bc: 0x5220776f  beql        $s1, $zero, . + 4 + (0x776F << 2)
label_2c80c0:
    if (ctx->pc == 0x2C80C0u) {
        ctx->pc = 0x2C80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80BCu;
        // 0x2c80c0: 0x646f  .word       0x0000646F                   # dsubu       $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80C4u;
        goto label_2c80c4;
    }
    ctx->pc = 0x2C80BCu;
    {
        const bool branch_taken_0x2c80bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80bc) {
            ctx->pc = 0x2C80C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C80BCu;
            // 0x2c80c0: 0x646f  .word       0x0000646F                   # dsubu       $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5E7Cu;
            return;
        }
    }
    ctx->pc = 0x2C80C4u;
label_2c80c4:
    // 0x2c80c4: 0x0  nop
    ctx->pc = 0x2c80c4u;
    // NOP
label_2c80c8:
    // 0x2c80c8: 0x716e6f43  .word       0x716E6F43                   # INVALID     $t3, $t6, 0x6F43 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c80c8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 11) * (uint64_t)GPR_U32(ctx, 14); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2c80cc:
    // 0x2c80cc: 0x6f726575  ldr         $s2, 0x6575($k1)
    ctx->pc = 0x2c80ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25973); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c80d0:
    // 0x2c80d0: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c80d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c80d4:
    // 0x2c80d4: 0x0  nop
    ctx->pc = 0x2c80d4u;
    // NOP
label_2c80d8:
    // 0x2c80d8: 0x62756f44  daddi       $s5, $s3, 0x6F44
    ctx->pc = 0x2c80d8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28484; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2c80dc:
    // 0x2c80dc: 0x5320656c  beql        $t9, $zero, . + 4 + (0x656C << 2)
label_2c80e0:
    if (ctx->pc == 0x2C80E0u) {
        ctx->pc = 0x2C80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C80DCu;
        // 0x2c80e0: 0x726174  teq         $v1, $s2, 389 (Delay Slot)
        if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C80E4u;
        goto label_2c80e4;
    }
    ctx->pc = 0x2C80DCu;
    {
        const bool branch_taken_0x2c80dc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c80dc) {
            ctx->pc = 0x2C80E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C80DCu;
            // 0x2c80e0: 0x726174  teq         $v1, $s2, 389 (Delay Slot)
            if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1690u;
            return;
        }
    }
    ctx->pc = 0x2C80E4u;
label_2c80e4:
    // 0x2c80e4: 0x0  nop
    ctx->pc = 0x2c80e4u;
    // NOP
label_2c80e8:
    // 0x2c80e8: 0x66617453  daddiu      $at, $s3, 0x7453
    ctx->pc = 0x2c80e8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29779);
label_2c80ec:
    // 0x2c80ec: 0x666f2066  daddiu      $t7, $s3, 0x2066
    ctx->pc = 0x2c80ecu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)8294);
label_2c80f0:
    // 0x2c80f0: 0x6e695720  ldr         $t1, 0x5720($s3)
    ctx->pc = 0x2c80f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 22304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c80f4:
    // 0x2c80f4: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c80f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c80f8:
    // 0x2c80f8: 0x73616542  .word       0x73616542                   # INVALID     $k1, $at, 0x6542 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c80f8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2c80fc:
    // 0x2c80fc: 0x614d2074  daddi       $t5, $t2, 0x2074
    ctx->pc = 0x2c80fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c8100:
    // 0x2c8100: 0x72657473  .word       0x72657473                   # INVALID     $s3, $a1, 0x7473 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8100u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2C8100 raw=0x72657473");
 /* MITIGATED */
label_2c8104:
    // 0x2c8104: 0x0  nop
    ctx->pc = 0x2c8104u;
    // NOP
label_2c8108:
    // 0x2c8108: 0x65726946  daddiu      $s2, $t3, 0x6946
    ctx->pc = 0x2c8108u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26950);
label_2c810c:
    // 0x2c810c: 0x65685720  daddiu      $t0, $t3, 0x5720
    ctx->pc = 0x2c810cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)22304);
label_2c8110:
    // 0x2c8110: 0x6c65  .word       0x00006C65                   # move        $t5, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8110u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c8114:
    // 0x2c8114: 0x0  nop
    ctx->pc = 0x2c8114u;
    // NOP
label_2c8118:
    // 0x2c8118: 0x75616542  .word       0x75616542                   # INVALID     $t3, $at, 0x6542 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8118u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8118 raw=0x75616542");
 /* MITIGATED */
label_2c811c:
    // 0x2c811c: 0x7974  teq         $zero, $zero, 485
    ctx->pc = 0x2c811cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c8120:
    // 0x2c8120: 0x63617247  daddi       $at, $k1, 0x7247
    ctx->pc = 0x2c8120u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29255; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c8124:
    // 0x2c8124: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8124u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2c8128:
    // 0x2c8128: 0x796c6f48  lq          $t4, 0x6F48($t3)
    ctx->pc = 0x2c8128u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 28488)));
label_2c812c:
    // 0x2c812c: 0x65764120  daddiu      $s6, $t3, 0x4120
    ctx->pc = 0x2c812cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)16672);
label_2c8130:
    // 0x2c8130: 0x7265676e  .word       0x7265676E                   # INVALID     $s3, $a1, 0x676E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8130u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C8130 raw=0x7265676E");
 /* MITIGATED */
label_2c8134:
    // 0x2c8134: 0x0  nop
    ctx->pc = 0x2c8134u;
    // NOP
label_2c8138:
    // 0x2c8138: 0x0  nop
    ctx->pc = 0x2c8138u;
    // NOP
label_2c813c:
    // 0x2c813c: 0x0  nop
    ctx->pc = 0x2c813cu;
    // NOP
label_2c8140:
    // 0x2c8140: 0x656c6543  daddiu      $t4, $t3, 0x6543
    ctx->pc = 0x2c8140u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25923);
label_2c8144:
    // 0x2c8144: 0x61697473  daddi       $t1, $t3, 0x7473
    ctx->pc = 0x2c8144u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29811; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2c8148:
    // 0x2c8148: 0x6c42206c  ldr         $v0, 0x206C($v0)
    ctx->pc = 0x2c8148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c814c:
    // 0x2c814c: 0x656461  .word       0x00656461                   # addu        $t4, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c814cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c8150:
    // 0x2c8150: 0x72656946  .word       0x72656946                   # INVALID     $s3, $a1, 0x6946 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8150u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x6 at 0x2C8150 raw=0x72656946");
 /* MITIGATED */
label_2c8154:
    // 0x2c8154: 0x44206563  .word       0x44206563                   # dmfc1       $zero, $f12 # 00000563 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c8154u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x23 at 0x2C8154 raw=0x44206563");
 /* MITIGATED */
label_2c8158:
    // 0x2c8158: 0x6f676172  ldr         $a3, 0x6172($k1)
    ctx->pc = 0x2c8158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2c815c:
    // 0x2c815c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c815cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c8160:
    // 0x2c8160: 0x65756c42  daddiu      $s5, $t3, 0x6C42
    ctx->pc = 0x2c8160u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27714);
label_2c8164:
    // 0x2c8164: 0x6f6f4d20  ldr         $t7, 0x4D20($k1)
    ctx->pc = 0x2c8164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 19744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c8168:
    // 0x2c8168: 0x7244206e  .word       0x7244206E                   # INVALID     $s2, $a0, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8168u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C8168 raw=0x7244206E");
 /* MITIGATED */
label_2c816c:
    // 0x2c816c: 0x6e6f6761  ldr         $t7, 0x6761($s3)
    ctx->pc = 0x2c816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26465); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c8170:
    // 0x2c8170: 0x0  nop
    ctx->pc = 0x2c8170u;
    // NOP
label_2c8174:
    // 0x2c8174: 0x0  nop
    ctx->pc = 0x2c8174u;
    // NOP
label_2c8178:
    // 0x2c8178: 0x65706956  daddiu      $s0, $t3, 0x6956
    ctx->pc = 0x2c8178u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26966);
label_2c817c:
    // 0x2c817c: 0x6c422072  ldr         $v0, 0x2072($v0)
    ctx->pc = 0x2c817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2c8180:
    // 0x2c8180: 0x656461  .word       0x00656461                   # addu        $t4, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8180u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c8184:
    // 0x2c8184: 0x0  nop
    ctx->pc = 0x2c8184u;
    // NOP
label_2c8188:
    // 0x2c8188: 0x6972694b  ldl         $s2, 0x694B($t3)
    ctx->pc = 0x2c8188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2c818c:
    // 0x2c818c: 0x6146206e  daddi       $a2, $t2, 0x206E
    ctx->pc = 0x2c818cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_2c8190:
    // 0x2c8190: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8190u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2c8194:
    // 0x2c8194: 0x0  nop
    ctx->pc = 0x2c8194u;
    // NOP
label_2c8198:
    // 0x2c8198: 0x2064614d  addi        $a0, $v1, 0x614D
    ctx->pc = 0x2c8198u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24909, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c819c:
    // 0x2c819c: 0x6c6c7542  ldr         $t4, 0x7542($v1)
    ctx->pc = 0x2c819cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30018); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c81a0:
    // 0x2c81a0: 0x0  nop
    ctx->pc = 0x2c81a0u;
    // NOP
label_2c81a4:
    // 0x2c81a4: 0x0  nop
    ctx->pc = 0x2c81a4u;
    // NOP
label_2c81a8:
    // 0x2c81a8: 0x6e6f7453  ldr         $t7, 0x7453($s3)
    ctx->pc = 0x2c81a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c81ac:
    // 0x2c81ac: 0x72432065  .word       0x72432065                   # INVALID     $s2, $v1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c81acu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C81AC raw=0x72432065");
 /* MITIGATED */
label_2c81b0:
    // 0x2c81b0: 0x65687375  daddiu      $t0, $t3, 0x7375
    ctx->pc = 0x2c81b0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29557);
label_2c81b4:
    // 0x2c81b4: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x2c81b4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c81b8:
    // 0x2c81b8: 0x69636e41  ldl         $v1, 0x6E41($t3)
    ctx->pc = 0x2c81b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28225); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2c81bc:
    // 0x2c81bc: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c81bcu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2C81BC raw=0x73746E65");
 /* MITIGATED */
label_2c81c0:
    // 0x2c81c0: 0x6f775320  ldr         $s7, 0x5320($k1)
    ctx->pc = 0x2c81c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_2c81c4:
    // 0x2c81c4: 0x6472  tlt         $zero, $zero, 401
    ctx->pc = 0x2c81c4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c81c8:
    // 0x2c81c8: 0x636c6146  daddi       $t4, $k1, 0x6146
    ctx->pc = 0x2c81c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24902; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2c81cc:
    // 0x2c81cc: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c81ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c81d0:
    // 0x2c81d0: 0x65676954  daddiu      $a3, $t3, 0x6954
    ctx->pc = 0x2c81d0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26964);
label_2c81d4:
    // 0x2c81d4: 0x6c532072  ldr         $s3, 0x2072($v0)
    ctx->pc = 0x2c81d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2c81d8:
    // 0x2c81d8: 0x72657961  .word       0x72657961                   # maddu1      $t7, $s3, $a1 # 00000140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c81d8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2c81dc:
    // 0x2c81dc: 0x0  nop
    ctx->pc = 0x2c81dcu;
    // NOP
label_2c81e0:
    // 0x2c81e0: 0x646c6f47  daddiu      $t4, $v1, 0x6F47
    ctx->pc = 0x2c81e0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28487);
label_2c81e4:
    // 0x2c81e4: 0x6f6c4720  ldr         $t4, 0x4720($k1)
    ctx->pc = 0x2c81e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 18208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2c81e8:
    // 0x2c81e8: 0x6562  .word       0x00006562                   # neg         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c81e8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2c81ec:
    // 0x2c81ec: 0x0  nop
    ctx->pc = 0x2c81ecu;
    // NOP
label_2c81f0:
    // 0x2c81f0: 0x63616550  daddi       $at, $k1, 0x6550
    ctx->pc = 0x2c81f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25936; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c81f4:
    // 0x2c81f4: 0x206b636f  addi        $t3, $v1, 0x636F
    ctx->pc = 0x2c81f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25455, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_2c81f8:
    // 0x2c81f8: 0x74616546  .word       0x74616546                   # INVALID     $v1, $at, 0x6546 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c81f8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C81F8 raw=0x74616546");
 /* MITIGATED */
label_2c81fc:
    // 0x2c81fc: 0x726568  .word       0x00726568                   # mfsa        $t4 # 00720540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c81fcu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2c8200:
    // 0x2c8200: 0x74617257  .word       0x74617257                   # INVALID     $v1, $at, 0x7257 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8200u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8200 raw=0x74617257");
 /* MITIGATED */
label_2c8204:
    // 0x2c8204: 0x666f2068  daddiu      $t7, $s3, 0x2068
    ctx->pc = 0x2c8204u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)8296);
label_2c8208:
    // 0x2c8208: 0x61654820  daddi       $a1, $t3, 0x4820
    ctx->pc = 0x2c8208u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18464; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2c820c:
    // 0x2c820c: 0x6e6576  tne         $v1, $t6, 405
    ctx->pc = 0x2c820cu;
    if (GPR_U64(ctx, 3) != GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_2c8210:
    // 0x2c8210: 0x20796b53  addi        $t9, $v1, 0x6B53
    ctx->pc = 0x2c8210u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27475, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2c8214:
    // 0x2c8214: 0x726f6353  .word       0x726F6353                   # mtlo1       $s3 # 000F6340 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8214u;
    ctx->lo1 = GPR_U64(ctx, 19);
label_2c8218:
    // 0x2c8218: 0x72656863  .word       0x72656863                   # INVALID     $s3, $a1, 0x6863 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8218u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2C8218 raw=0x72656863");
 /* MITIGATED */
label_2c821c:
    // 0x2c821c: 0x0  nop
    ctx->pc = 0x2c821cu;
    // NOP
label_2c8220:
    // 0x2c8220: 0x206c6f53  addi        $t4, $v1, 0x6F53
    ctx->pc = 0x2c8220u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28499, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2c8224:
    // 0x2c8224: 0x6b616843  ldl         $at, 0x6843($k1)
    ctx->pc = 0x2c8224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2c8228:
    // 0x2c8228: 0x6d6172  tlt         $v1, $t5, 389
    ctx->pc = 0x2c8228u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_2c822c:
    // 0x2c822c: 0x0  nop
    ctx->pc = 0x2c822cu;
    // NOP
label_2c8230:
    // 0x2c8230: 0x646c6f47  daddiu      $t4, $v1, 0x6F47
    ctx->pc = 0x2c8230u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28487);
label_2c8234:
    // 0x2c8234: 0x6f6f4d20  ldr         $t7, 0x4D20($k1)
    ctx->pc = 0x2c8234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 19744); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c8238:
    // 0x2c8238: 0x7244206e  .word       0x7244206E                   # INVALID     $s2, $a0, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8238u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2C8238 raw=0x7244206E");
 /* MITIGATED */
label_2c823c:
    // 0x2c823c: 0x6e6f6761  ldr         $t7, 0x6761($s3)
    ctx->pc = 0x2c823cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26465); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c8240:
    // 0x2c8240: 0x0  nop
    ctx->pc = 0x2c8240u;
    // NOP
label_2c8244:
    // 0x2c8244: 0x0  nop
    ctx->pc = 0x2c8244u;
    // NOP
label_2c8248:
    // 0x2c8248: 0x61766153  daddi       $s6, $t3, 0x6153
    ctx->pc = 0x2c8248u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24915; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2c824c:
    // 0x2c824c: 0x57206567  bnel        $t9, $zero, . + 4 + (0x6567 << 2)
label_2c8250:
    if (ctx->pc == 0x2C8250u) {
        ctx->pc = 0x2C8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C824Cu;
        // 0x2c8250: 0x666c6f  .word       0x00666C6F                   # dsubu       $t5, $v1, $a2 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8254u;
        goto label_2c8254;
    }
    ctx->pc = 0x2C824Cu;
    {
        const bool branch_taken_0x2c824c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c824c) {
            ctx->pc = 0x2C8250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C824Cu;
            // 0x2c8250: 0x666c6f  .word       0x00666C6F                   # dsubu       $t5, $v1, $a2 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E17ECu;
            return;
        }
    }
    ctx->pc = 0x2C8254u;
label_2c8254:
    // 0x2c8254: 0x0  nop
    ctx->pc = 0x2c8254u;
    // NOP
label_2c8258:
    // 0x2c8258: 0x7473614d  .word       0x7473614D                   # INVALID     $v1, $s3, 0x614D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c8258u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C8258 raw=0x7473614D");
 /* MITIGATED */
label_2c825c:
    // 0x2c825c: 0x57207265  bnel        $t9, $zero, . + 4 + (0x7265 << 2)
label_2c8260:
    if (ctx->pc == 0x2C8260u) {
        ctx->pc = 0x2C8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C825Cu;
        // 0x2c8260: 0x666c6f  .word       0x00666C6F                   # dsubu       $t5, $v1, $a2 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C8264u;
        goto label_2c8264;
    }
    ctx->pc = 0x2C825Cu;
    {
        const bool branch_taken_0x2c825c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c825c) {
            ctx->pc = 0x2C8260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C825Cu;
            // 0x2c8260: 0x666c6f  .word       0x00666C6F                   # dsubu       $t5, $v1, $a2 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4BF4u;
            return;
        }
    }
    ctx->pc = 0x2C8264u;
label_2c8264:
    // 0x2c8264: 0x0  nop
    ctx->pc = 0x2c8264u;
    // NOP
label_2c8268:
    // 0x2c8268: 0x6e617247  ldr         $at, 0x7247($s3)
    ctx->pc = 0x2c8268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c826c:
    // 0x2c826c: 0x74532064  .word       0x74532064                   # INVALID     $v0, $s3, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c826cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C826C raw=0x74532064");
 /* MITIGATED */
label_2c8270:
    // 0x2c8270: 0x7261  .word       0x00007261                   # addu        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c8270u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2c8274:
    // 0x2c8274: 0x0  nop
    ctx->pc = 0x2c8274u;
    // NOP
label_2c8278:
    // 0x2c8278: 0x6e617247  ldr         $at, 0x7247($s3)
    ctx->pc = 0x2c8278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2c827c:
    // 0x2c827c: 0x614d2064  daddi       $t5, $t2, 0x2064
    ctx->pc = 0x2c827cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c8280:
    // 0x2c8280: 0x72657473  .word       0x72657473                   # INVALID     $s3, $a1, 0x7473 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c8280u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2C8280 raw=0x72657473");
 /* MITIGATED */
label_2c8284:
    // 0x2c8284: 0x0  nop
    ctx->pc = 0x2c8284u;
    // NOP
label_2c8288:
    // 0x2c8288: 0x65657453  daddiu      $a1, $t3, 0x7453
    ctx->pc = 0x2c8288u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29779);
label_2c828c:
    // 0x2c828c: 0x7244206c  .word       0x7244206C                   # INVALID     $s2, $a0, 0x206C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c828cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2C828C raw=0x7244206C");
 /* MITIGATED */
label_2c8290:
    // 0x2c8290: 0x6e6f6761  ldr         $t7, 0x6761($s3)
    ctx->pc = 0x2c8290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26465); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2c8294:
    // 0x2c8294: 0x0  nop
    ctx->pc = 0x2c8294u;
    // NOP
label_2c8298:
    // 0x2c8298: 0x6361724f  daddi       $at, $k1, 0x724F
    ctx->pc = 0x2c8298u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29263; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2c829c:
    // 0x2c829c: 0x5320656c  beql        $t9, $zero, . + 4 + (0x656C << 2)
label_2c82a0:
    if (ctx->pc == 0x2C82A0u) {
        ctx->pc = 0x2C82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C829Cu;
        // 0x2c82a0: 0x64726f77  daddiu      $s2, $v1, 0x6F77 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C82A4u;
        goto label_2c82a4;
    }
    ctx->pc = 0x2C829Cu;
    {
        const bool branch_taken_0x2c829c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c829c) {
            ctx->pc = 0x2C82A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C829Cu;
            // 0x2c82a0: 0x64726f77  daddiu      $s2, $v1, 0x6F77 (Delay Slot)
            SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1850u;
            return;
        }
    }
    ctx->pc = 0x2C82A4u;
label_2c82a4:
    // 0x2c82a4: 0x0  nop
    ctx->pc = 0x2c82a4u;
    // NOP
label_2c82a8:
    // 0x2c82a8: 0x6f6d6544  ldr         $t5, 0x6544($k1)
    ctx->pc = 0x2c82a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2c82ac:
    // 0x2c82ac: 0x6146206e  daddi       $a2, $t2, 0x206E
    ctx->pc = 0x2c82acu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    ctx->pc = 0x2c82b0u;
    return;
}

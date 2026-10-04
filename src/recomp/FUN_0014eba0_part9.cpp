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


void FUN_0014eba0_part9(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x152a20u: goto label_152a20;
        case 0x152a24u: goto label_152a24;
        case 0x152a28u: goto label_152a28;
        case 0x152a2cu: goto label_152a2c;
        case 0x152a30u: goto label_152a30;
        case 0x152a34u: goto label_152a34;
        case 0x152a38u: goto label_152a38;
        case 0x152a3cu: goto label_152a3c;
        case 0x152a40u: goto label_152a40;
        case 0x152a44u: goto label_152a44;
        case 0x152a48u: goto label_152a48;
        case 0x152a4cu: goto label_152a4c;
        case 0x152a50u: goto label_152a50;
        case 0x152a54u: goto label_152a54;
        case 0x152a58u: goto label_152a58;
        case 0x152a5cu: goto label_152a5c;
        case 0x152a60u: goto label_152a60;
        case 0x152a64u: goto label_152a64;
        case 0x152a68u: goto label_152a68;
        case 0x152a6cu: goto label_152a6c;
        case 0x152a70u: goto label_152a70;
        case 0x152a74u: goto label_152a74;
        case 0x152a78u: goto label_152a78;
        case 0x152a7cu: goto label_152a7c;
        case 0x152a80u: goto label_152a80;
        case 0x152a84u: goto label_152a84;
        case 0x152a88u: goto label_152a88;
        case 0x152a8cu: goto label_152a8c;
        case 0x152a90u: goto label_152a90;
        case 0x152a94u: goto label_152a94;
        case 0x152a98u: goto label_152a98;
        case 0x152a9cu: goto label_152a9c;
        case 0x152aa0u: goto label_152aa0;
        case 0x152aa4u: goto label_152aa4;
        case 0x152aa8u: goto label_152aa8;
        case 0x152aacu: goto label_152aac;
        case 0x152ab0u: goto label_152ab0;
        case 0x152ab4u: goto label_152ab4;
        case 0x152ab8u: goto label_152ab8;
        case 0x152abcu: goto label_152abc;
        case 0x152ac0u: goto label_152ac0;
        case 0x152ac4u: goto label_152ac4;
        case 0x152ac8u: goto label_152ac8;
        case 0x152accu: goto label_152acc;
        case 0x152ad0u: goto label_152ad0;
        case 0x152ad4u: goto label_152ad4;
        case 0x152ad8u: goto label_152ad8;
        case 0x152adcu: goto label_152adc;
        case 0x152ae0u: goto label_152ae0;
        case 0x152ae4u: goto label_152ae4;
        case 0x152ae8u: goto label_152ae8;
        case 0x152aecu: goto label_152aec;
        case 0x152af0u: goto label_152af0;
        case 0x152af4u: goto label_152af4;
        case 0x152af8u: goto label_152af8;
        case 0x152afcu: goto label_152afc;
        case 0x152b00u: goto label_152b00;
        case 0x152b04u: goto label_152b04;
        case 0x152b08u: goto label_152b08;
        case 0x152b0cu: goto label_152b0c;
        case 0x152b10u: goto label_152b10;
        case 0x152b14u: goto label_152b14;
        case 0x152b18u: goto label_152b18;
        case 0x152b1cu: goto label_152b1c;
        case 0x152b20u: goto label_152b20;
        case 0x152b24u: goto label_152b24;
        case 0x152b28u: goto label_152b28;
        case 0x152b2cu: goto label_152b2c;
        case 0x152b30u: goto label_152b30;
        case 0x152b34u: goto label_152b34;
        case 0x152b38u: goto label_152b38;
        case 0x152b3cu: goto label_152b3c;
        case 0x152b40u: goto label_152b40;
        case 0x152b44u: goto label_152b44;
        case 0x152b48u: goto label_152b48;
        case 0x152b4cu: goto label_152b4c;
        case 0x152b50u: goto label_152b50;
        case 0x152b54u: goto label_152b54;
        case 0x152b58u: goto label_152b58;
        case 0x152b5cu: goto label_152b5c;
        case 0x152b60u: goto label_152b60;
        case 0x152b64u: goto label_152b64;
        case 0x152b68u: goto label_152b68;
        case 0x152b6cu: goto label_152b6c;
        case 0x152b70u: goto label_152b70;
        case 0x152b74u: goto label_152b74;
        case 0x152b78u: goto label_152b78;
        case 0x152b7cu: goto label_152b7c;
        case 0x152b80u: goto label_152b80;
        case 0x152b84u: goto label_152b84;
        case 0x152b88u: goto label_152b88;
        case 0x152b8cu: goto label_152b8c;
        case 0x152b90u: goto label_152b90;
        case 0x152b94u: goto label_152b94;
        case 0x152b98u: goto label_152b98;
        case 0x152b9cu: goto label_152b9c;
        case 0x152ba0u: goto label_152ba0;
        case 0x152ba4u: goto label_152ba4;
        case 0x152ba8u: goto label_152ba8;
        case 0x152bacu: goto label_152bac;
        case 0x152bb0u: goto label_152bb0;
        case 0x152bb4u: goto label_152bb4;
        case 0x152bb8u: goto label_152bb8;
        case 0x152bbcu: goto label_152bbc;
        case 0x152bc0u: goto label_152bc0;
        case 0x152bc4u: goto label_152bc4;
        case 0x152bc8u: goto label_152bc8;
        case 0x152bccu: goto label_152bcc;
        case 0x152bd0u: goto label_152bd0;
        case 0x152bd4u: goto label_152bd4;
        case 0x152bd8u: goto label_152bd8;
        case 0x152bdcu: goto label_152bdc;
        case 0x152be0u: goto label_152be0;
        case 0x152be4u: goto label_152be4;
        case 0x152be8u: goto label_152be8;
        case 0x152becu: goto label_152bec;
        case 0x152bf0u: goto label_152bf0;
        case 0x152bf4u: goto label_152bf4;
        case 0x152bf8u: goto label_152bf8;
        case 0x152bfcu: goto label_152bfc;
        case 0x152c00u: goto label_152c00;
        case 0x152c04u: goto label_152c04;
        case 0x152c08u: goto label_152c08;
        case 0x152c0cu: goto label_152c0c;
        case 0x152c10u: goto label_152c10;
        case 0x152c14u: goto label_152c14;
        case 0x152c18u: goto label_152c18;
        case 0x152c1cu: goto label_152c1c;
        case 0x152c20u: goto label_152c20;
        case 0x152c24u: goto label_152c24;
        case 0x152c28u: goto label_152c28;
        case 0x152c2cu: goto label_152c2c;
        case 0x152c30u: goto label_152c30;
        case 0x152c34u: goto label_152c34;
        case 0x152c38u: goto label_152c38;
        case 0x152c3cu: goto label_152c3c;
        case 0x152c40u: goto label_152c40;
        case 0x152c44u: goto label_152c44;
        case 0x152c48u: goto label_152c48;
        case 0x152c4cu: goto label_152c4c;
        case 0x152c50u: goto label_152c50;
        case 0x152c54u: goto label_152c54;
        case 0x152c58u: goto label_152c58;
        case 0x152c5cu: goto label_152c5c;
        case 0x152c60u: goto label_152c60;
        case 0x152c64u: goto label_152c64;
        case 0x152c68u: goto label_152c68;
        case 0x152c6cu: goto label_152c6c;
        case 0x152c70u: goto label_152c70;
        case 0x152c74u: goto label_152c74;
        case 0x152c78u: goto label_152c78;
        case 0x152c7cu: goto label_152c7c;
        case 0x152c80u: goto label_152c80;
        case 0x152c84u: goto label_152c84;
        case 0x152c88u: goto label_152c88;
        case 0x152c8cu: goto label_152c8c;
        case 0x152c90u: goto label_152c90;
        case 0x152c94u: goto label_152c94;
        case 0x152c98u: goto label_152c98;
        case 0x152c9cu: goto label_152c9c;
        case 0x152ca0u: goto label_152ca0;
        case 0x152ca4u: goto label_152ca4;
        case 0x152ca8u: goto label_152ca8;
        case 0x152cacu: goto label_152cac;
        case 0x152cb0u: goto label_152cb0;
        case 0x152cb4u: goto label_152cb4;
        case 0x152cb8u: goto label_152cb8;
        case 0x152cbcu: goto label_152cbc;
        case 0x152cc0u: goto label_152cc0;
        case 0x152cc4u: goto label_152cc4;
        case 0x152cc8u: goto label_152cc8;
        case 0x152cccu: goto label_152ccc;
        case 0x152cd0u: goto label_152cd0;
        case 0x152cd4u: goto label_152cd4;
        case 0x152cd8u: goto label_152cd8;
        case 0x152cdcu: goto label_152cdc;
        case 0x152ce0u: goto label_152ce0;
        case 0x152ce4u: goto label_152ce4;
        case 0x152ce8u: goto label_152ce8;
        case 0x152cecu: goto label_152cec;
        case 0x152cf0u: goto label_152cf0;
        case 0x152cf4u: goto label_152cf4;
        case 0x152cf8u: goto label_152cf8;
        case 0x152cfcu: goto label_152cfc;
        case 0x152d00u: goto label_152d00;
        case 0x152d04u: goto label_152d04;
        case 0x152d08u: goto label_152d08;
        case 0x152d0cu: goto label_152d0c;
        case 0x152d10u: goto label_152d10;
        case 0x152d14u: goto label_152d14;
        case 0x152d18u: goto label_152d18;
        case 0x152d1cu: goto label_152d1c;
        case 0x152d20u: goto label_152d20;
        case 0x152d24u: goto label_152d24;
        case 0x152d28u: goto label_152d28;
        case 0x152d2cu: goto label_152d2c;
        case 0x152d30u: goto label_152d30;
        case 0x152d34u: goto label_152d34;
        case 0x152d38u: goto label_152d38;
        case 0x152d3cu: goto label_152d3c;
        case 0x152d40u: goto label_152d40;
        case 0x152d44u: goto label_152d44;
        case 0x152d48u: goto label_152d48;
        case 0x152d4cu: goto label_152d4c;
        case 0x152d50u: goto label_152d50;
        case 0x152d54u: goto label_152d54;
        case 0x152d58u: goto label_152d58;
        case 0x152d5cu: goto label_152d5c;
        case 0x152d60u: goto label_152d60;
        case 0x152d64u: goto label_152d64;
        case 0x152d68u: goto label_152d68;
        case 0x152d6cu: goto label_152d6c;
        case 0x152d70u: goto label_152d70;
        case 0x152d74u: goto label_152d74;
        case 0x152d78u: goto label_152d78;
        case 0x152d7cu: goto label_152d7c;
        case 0x152d80u: goto label_152d80;
        case 0x152d84u: goto label_152d84;
        case 0x152d88u: goto label_152d88;
        case 0x152d8cu: goto label_152d8c;
        case 0x152d90u: goto label_152d90;
        case 0x152d94u: goto label_152d94;
        case 0x152d98u: goto label_152d98;
        case 0x152d9cu: goto label_152d9c;
        case 0x152da0u: goto label_152da0;
        case 0x152da4u: goto label_152da4;
        case 0x152da8u: goto label_152da8;
        case 0x152dacu: goto label_152dac;
        case 0x152db0u: goto label_152db0;
        case 0x152db4u: goto label_152db4;
        case 0x152db8u: goto label_152db8;
        case 0x152dbcu: goto label_152dbc;
        case 0x152dc0u: goto label_152dc0;
        case 0x152dc4u: goto label_152dc4;
        case 0x152dc8u: goto label_152dc8;
        case 0x152dccu: goto label_152dcc;
        case 0x152dd0u: goto label_152dd0;
        case 0x152dd4u: goto label_152dd4;
        case 0x152dd8u: goto label_152dd8;
        case 0x152ddcu: goto label_152ddc;
        case 0x152de0u: goto label_152de0;
        case 0x152de4u: goto label_152de4;
        case 0x152de8u: goto label_152de8;
        case 0x152decu: goto label_152dec;
        case 0x152df0u: goto label_152df0;
        case 0x152df4u: goto label_152df4;
        case 0x152df8u: goto label_152df8;
        case 0x152dfcu: goto label_152dfc;
        case 0x152e00u: goto label_152e00;
        case 0x152e04u: goto label_152e04;
        case 0x152e08u: goto label_152e08;
        case 0x152e0cu: goto label_152e0c;
        case 0x152e10u: goto label_152e10;
        case 0x152e14u: goto label_152e14;
        case 0x152e18u: goto label_152e18;
        case 0x152e1cu: goto label_152e1c;
        case 0x152e20u: goto label_152e20;
        case 0x152e24u: goto label_152e24;
        case 0x152e28u: goto label_152e28;
        case 0x152e2cu: goto label_152e2c;
        case 0x152e30u: goto label_152e30;
        case 0x152e34u: goto label_152e34;
        case 0x152e38u: goto label_152e38;
        case 0x152e3cu: goto label_152e3c;
        case 0x152e40u: goto label_152e40;
        case 0x152e44u: goto label_152e44;
        case 0x152e48u: goto label_152e48;
        case 0x152e4cu: goto label_152e4c;
        case 0x152e50u: goto label_152e50;
        case 0x152e54u: goto label_152e54;
        case 0x152e58u: goto label_152e58;
        case 0x152e5cu: goto label_152e5c;
        case 0x152e60u: goto label_152e60;
        case 0x152e64u: goto label_152e64;
        case 0x152e68u: goto label_152e68;
        case 0x152e6cu: goto label_152e6c;
        case 0x152e70u: goto label_152e70;
        case 0x152e74u: goto label_152e74;
        case 0x152e78u: goto label_152e78;
        case 0x152e7cu: goto label_152e7c;
        case 0x152e80u: goto label_152e80;
        case 0x152e84u: goto label_152e84;
        case 0x152e88u: goto label_152e88;
        case 0x152e8cu: goto label_152e8c;
        case 0x152e90u: goto label_152e90;
        case 0x152e94u: goto label_152e94;
        case 0x152e98u: goto label_152e98;
        case 0x152e9cu: goto label_152e9c;
        case 0x152ea0u: goto label_152ea0;
        case 0x152ea4u: goto label_152ea4;
        case 0x152ea8u: goto label_152ea8;
        case 0x152eacu: goto label_152eac;
        case 0x152eb0u: goto label_152eb0;
        case 0x152eb4u: goto label_152eb4;
        case 0x152eb8u: goto label_152eb8;
        case 0x152ebcu: goto label_152ebc;
        case 0x152ec0u: goto label_152ec0;
        case 0x152ec4u: goto label_152ec4;
        case 0x152ec8u: goto label_152ec8;
        case 0x152eccu: goto label_152ecc;
        case 0x152ed0u: goto label_152ed0;
        case 0x152ed4u: goto label_152ed4;
        case 0x152ed8u: goto label_152ed8;
        case 0x152edcu: goto label_152edc;
        case 0x152ee0u: goto label_152ee0;
        case 0x152ee4u: goto label_152ee4;
        case 0x152ee8u: goto label_152ee8;
        case 0x152eecu: goto label_152eec;
        case 0x152ef0u: goto label_152ef0;
        case 0x152ef4u: goto label_152ef4;
        case 0x152ef8u: goto label_152ef8;
        case 0x152efcu: goto label_152efc;
        case 0x152f00u: goto label_152f00;
        case 0x152f04u: goto label_152f04;
        case 0x152f08u: goto label_152f08;
        case 0x152f0cu: goto label_152f0c;
        case 0x152f10u: goto label_152f10;
        case 0x152f14u: goto label_152f14;
        case 0x152f18u: goto label_152f18;
        case 0x152f1cu: goto label_152f1c;
        case 0x152f20u: goto label_152f20;
        case 0x152f24u: goto label_152f24;
        case 0x152f28u: goto label_152f28;
        case 0x152f2cu: goto label_152f2c;
        case 0x152f30u: goto label_152f30;
        case 0x152f34u: goto label_152f34;
        case 0x152f38u: goto label_152f38;
        case 0x152f3cu: goto label_152f3c;
        case 0x152f40u: goto label_152f40;
        case 0x152f44u: goto label_152f44;
        case 0x152f48u: goto label_152f48;
        case 0x152f4cu: goto label_152f4c;
        case 0x152f50u: goto label_152f50;
        case 0x152f54u: goto label_152f54;
        case 0x152f58u: goto label_152f58;
        case 0x152f5cu: goto label_152f5c;
        case 0x152f60u: goto label_152f60;
        case 0x152f64u: goto label_152f64;
        case 0x152f68u: goto label_152f68;
        case 0x152f6cu: goto label_152f6c;
        case 0x152f70u: goto label_152f70;
        case 0x152f74u: goto label_152f74;
        case 0x152f78u: goto label_152f78;
        case 0x152f7cu: goto label_152f7c;
        case 0x152f80u: goto label_152f80;
        case 0x152f84u: goto label_152f84;
        case 0x152f88u: goto label_152f88;
        case 0x152f8cu: goto label_152f8c;
        case 0x152f90u: goto label_152f90;
        case 0x152f94u: goto label_152f94;
        case 0x152f98u: goto label_152f98;
        case 0x152f9cu: goto label_152f9c;
        case 0x152fa0u: goto label_152fa0;
        case 0x152fa4u: goto label_152fa4;
        case 0x152fa8u: goto label_152fa8;
        case 0x152facu: goto label_152fac;
        case 0x152fb0u: goto label_152fb0;
        case 0x152fb4u: goto label_152fb4;
        case 0x152fb8u: goto label_152fb8;
        case 0x152fbcu: goto label_152fbc;
        case 0x152fc0u: goto label_152fc0;
        case 0x152fc4u: goto label_152fc4;
        case 0x152fc8u: goto label_152fc8;
        case 0x152fccu: goto label_152fcc;
        case 0x152fd0u: goto label_152fd0;
        case 0x152fd4u: goto label_152fd4;
        case 0x152fd8u: goto label_152fd8;
        case 0x152fdcu: goto label_152fdc;
        case 0x152fe0u: goto label_152fe0;
        case 0x152fe4u: goto label_152fe4;
        case 0x152fe8u: goto label_152fe8;
        case 0x152fecu: goto label_152fec;
        case 0x152ff0u: goto label_152ff0;
        case 0x152ff4u: goto label_152ff4;
        case 0x152ff8u: goto label_152ff8;
        case 0x152ffcu: goto label_152ffc;
        case 0x153000u: goto label_153000;
        case 0x153004u: goto label_153004;
        case 0x153008u: goto label_153008;
        case 0x15300cu: goto label_15300c;
        case 0x153010u: goto label_153010;
        case 0x153014u: goto label_153014;
        case 0x153018u: goto label_153018;
        case 0x15301cu: goto label_15301c;
        case 0x153020u: goto label_153020;
        case 0x153024u: goto label_153024;
        case 0x153028u: goto label_153028;
        case 0x15302cu: goto label_15302c;
        case 0x153030u: goto label_153030;
        case 0x153034u: goto label_153034;
        case 0x153038u: goto label_153038;
        case 0x15303cu: goto label_15303c;
        case 0x153040u: goto label_153040;
        case 0x153044u: goto label_153044;
        case 0x153048u: goto label_153048;
        case 0x15304cu: goto label_15304c;
        case 0x153050u: goto label_153050;
        case 0x153054u: goto label_153054;
        case 0x153058u: goto label_153058;
        case 0x15305cu: goto label_15305c;
        case 0x153060u: goto label_153060;
        case 0x153064u: goto label_153064;
        case 0x153068u: goto label_153068;
        case 0x15306cu: goto label_15306c;
        case 0x153070u: goto label_153070;
        case 0x153074u: goto label_153074;
        case 0x153078u: goto label_153078;
        case 0x15307cu: goto label_15307c;
        case 0x153080u: goto label_153080;
        case 0x153084u: goto label_153084;
        case 0x153088u: goto label_153088;
        case 0x15308cu: goto label_15308c;
        case 0x153090u: goto label_153090;
        case 0x153094u: goto label_153094;
        case 0x153098u: goto label_153098;
        case 0x15309cu: goto label_15309c;
        case 0x1530a0u: goto label_1530a0;
        case 0x1530a4u: goto label_1530a4;
        case 0x1530a8u: goto label_1530a8;
        case 0x1530acu: goto label_1530ac;
        case 0x1530b0u: goto label_1530b0;
        case 0x1530b4u: goto label_1530b4;
        case 0x1530b8u: goto label_1530b8;
        case 0x1530bcu: goto label_1530bc;
        case 0x1530c0u: goto label_1530c0;
        case 0x1530c4u: goto label_1530c4;
        case 0x1530c8u: goto label_1530c8;
        case 0x1530ccu: goto label_1530cc;
        case 0x1530d0u: goto label_1530d0;
        case 0x1530d4u: goto label_1530d4;
        case 0x1530d8u: goto label_1530d8;
        case 0x1530dcu: goto label_1530dc;
        case 0x1530e0u: goto label_1530e0;
        case 0x1530e4u: goto label_1530e4;
        case 0x1530e8u: goto label_1530e8;
        case 0x1530ecu: goto label_1530ec;
        case 0x1530f0u: goto label_1530f0;
        case 0x1530f4u: goto label_1530f4;
        case 0x1530f8u: goto label_1530f8;
        case 0x1530fcu: goto label_1530fc;
        case 0x153100u: goto label_153100;
        case 0x153104u: goto label_153104;
        case 0x153108u: goto label_153108;
        case 0x15310cu: goto label_15310c;
        case 0x153110u: goto label_153110;
        case 0x153114u: goto label_153114;
        case 0x153118u: goto label_153118;
        case 0x15311cu: goto label_15311c;
        case 0x153120u: goto label_153120;
        case 0x153124u: goto label_153124;
        case 0x153128u: goto label_153128;
        case 0x15312cu: goto label_15312c;
        case 0x153130u: goto label_153130;
        case 0x153134u: goto label_153134;
        case 0x153138u: goto label_153138;
        case 0x15313cu: goto label_15313c;
        case 0x153140u: goto label_153140;
        case 0x153144u: goto label_153144;
        case 0x153148u: goto label_153148;
        case 0x15314cu: goto label_15314c;
        case 0x153150u: goto label_153150;
        case 0x153154u: goto label_153154;
        case 0x153158u: goto label_153158;
        case 0x15315cu: goto label_15315c;
        case 0x153160u: goto label_153160;
        case 0x153164u: goto label_153164;
        case 0x153168u: goto label_153168;
        case 0x15316cu: goto label_15316c;
        case 0x153170u: goto label_153170;
        case 0x153174u: goto label_153174;
        case 0x153178u: goto label_153178;
        case 0x15317cu: goto label_15317c;
        case 0x153180u: goto label_153180;
        case 0x153184u: goto label_153184;
        case 0x153188u: goto label_153188;
        case 0x15318cu: goto label_15318c;
        case 0x153190u: goto label_153190;
        case 0x153194u: goto label_153194;
        case 0x153198u: goto label_153198;
        case 0x15319cu: goto label_15319c;
        case 0x1531a0u: goto label_1531a0;
        case 0x1531a4u: goto label_1531a4;
        case 0x1531a8u: goto label_1531a8;
        case 0x1531acu: goto label_1531ac;
        case 0x1531b0u: goto label_1531b0;
        case 0x1531b4u: goto label_1531b4;
        case 0x1531b8u: goto label_1531b8;
        case 0x1531bcu: goto label_1531bc;
        case 0x1531c0u: goto label_1531c0;
        case 0x1531c4u: goto label_1531c4;
        case 0x1531c8u: goto label_1531c8;
        case 0x1531ccu: goto label_1531cc;
        case 0x1531d0u: goto label_1531d0;
        case 0x1531d4u: goto label_1531d4;
        case 0x1531d8u: goto label_1531d8;
        case 0x1531dcu: goto label_1531dc;
        case 0x1531e0u: goto label_1531e0;
        case 0x1531e4u: goto label_1531e4;
        case 0x1531e8u: goto label_1531e8;
        case 0x1531ecu: goto label_1531ec;
        default: return;
    }

label_152a20:
    // 0x152a20: 0x90244af2  lbu         $a0, 0x4AF2($at)
    ctx->pc = 0x152a20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
label_152a24:
    // 0x152a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x152a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152a28:
    // 0x152a28: 0xc064fbc  jal         func_193EF0
label_152a2c:
    if (ctx->pc == 0x152A2Cu) {
        ctx->pc = 0x152A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A28u;
        // 0x152a2c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152A30u;
        goto label_152a30;
    }
    ctx->pc = 0x152A28u;
    SET_GPR_U32(ctx, 31, 0x152A30u);
    ctx->pc = 0x152A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A28u;
    // 0x152a2c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EF0u;
    { ctx->pc = 0x193ef0; return; }
    ctx->pc = 0x152A30u;
label_152a30:
    // 0x152a30: 0x10000081  b           . + 4 + (0x81 << 2)
label_152a34:
    if (ctx->pc == 0x152A34u) {
        ctx->pc = 0x152A38u;
        goto label_152a38;
    }
    ctx->pc = 0x152A30u;
    {
        const bool branch_taken_0x152a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a30) {
            ctx->pc = 0x152C38u;
            goto label_152c38;
        }
    }
    ctx->pc = 0x152A38u;
label_152a38:
    // 0x152a38: 0x24a5ffce  addiu       $a1, $a1, -0x32
    ctx->pc = 0x152a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967246));
label_152a3c:
    // 0x152a3c: 0x28a10059  slti        $at, $a1, 0x59
    ctx->pc = 0x152a3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_152a40:
    // 0x152a40: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_152a44:
    if (ctx->pc == 0x152A44u) {
        ctx->pc = 0x152A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A40u;
        // 0x152a44: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152A48u;
        goto label_152a48;
    }
    ctx->pc = 0x152A40u;
    {
        const bool branch_taken_0x152a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A40u;
        // 0x152a44: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a40) {
            ctx->pc = 0x152A58u;
            goto label_152a58;
        }
    }
    ctx->pc = 0x152A48u;
label_152a48:
    // 0x152a48: 0xc065580  jal         func_195600
label_152a4c:
    if (ctx->pc == 0x152A4Cu) {
        ctx->pc = 0x152A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A48u;
        // 0x152a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152A50u;
        goto label_152a50;
    }
    ctx->pc = 0x152A48u;
    SET_GPR_U32(ctx, 31, 0x152A50u);
    ctx->pc = 0x152A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152A48u;
    // 0x152a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195600u;
    { ctx->pc = 0x195600; return; }
    ctx->pc = 0x152A50u;
label_152a50:
    // 0x152a50: 0x10000079  b           . + 4 + (0x79 << 2)
label_152a54:
    if (ctx->pc == 0x152A54u) {
        ctx->pc = 0x152A58u;
        goto label_152a58;
    }
    ctx->pc = 0x152A50u;
    {
        const bool branch_taken_0x152a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a50) {
            ctx->pc = 0x152C38u;
            goto label_152c38;
        }
    }
    ctx->pc = 0x152A58u;
label_152a58:
    // 0x152a58: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x152a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_152a5c:
    // 0x152a5c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x152a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_152a60:
    // 0x152a60: 0x246303ab  addiu       $v1, $v1, 0x3AB
    ctx->pc = 0x152a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 939));
label_152a64:
    // 0x152a64: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x152a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_152a68:
    // 0x152a68: 0x240200ab  addiu       $v0, $zero, 0xAB
    ctx->pc = 0x152a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_152a6c:
    // 0x152a6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_152a70:
    // 0x152a70: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x152a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_152a74:
    // 0x152a74: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_152a78:
    if (ctx->pc == 0x152A78u) {
        ctx->pc = 0x152A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A74u;
        // 0x152a78: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152A7Cu;
        goto label_152a7c;
    }
    ctx->pc = 0x152A74u;
    {
        const bool branch_taken_0x152a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x152A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A74u;
        // 0x152a78: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a74) {
            ctx->pc = 0x152AE4u;
            goto label_152ae4;
        }
    }
    ctx->pc = 0x152A7Cu;
label_152a7c:
    // 0x152a7c: 0x24a5ffa7  addiu       $a1, $a1, -0x59
    ctx->pc = 0x152a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967207));
label_152a80:
    // 0x152a80: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x152a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
label_152a84:
    // 0x152a84: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_152a88:
    if (ctx->pc == 0x152A88u) {
        ctx->pc = 0x152A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A84u;
        // 0x152a88: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152A8Cu;
        goto label_152a8c;
    }
    ctx->pc = 0x152A84u;
    {
        const bool branch_taken_0x152a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A84u;
        // 0x152a88: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a84) {
            ctx->pc = 0x152ABCu;
            goto label_152abc;
        }
    }
    ctx->pc = 0x152A8Cu;
label_152a8c:
    // 0x152a8c: 0x24a5ffd7  addiu       $a1, $a1, -0x29
    ctx->pc = 0x152a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
label_152a90:
    // 0x152a90: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x152a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_152a94:
    // 0x152a94: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x152a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_152a98:
    // 0x152a98: 0x2442a9a0  addiu       $v0, $v0, -0x5660
    ctx->pc = 0x152a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945184));
label_152a9c:
    // 0x152a9c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x152a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_152aa0:
    // 0x152aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152aa4:
    // 0x152aa4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x152aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_152aa8:
    // 0x152aa8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x152aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_152aac:
    // 0x152aac: 0xc08e93e  jal         func_23A4F8
label_152ab0:
    if (ctx->pc == 0x152AB0u) {
        ctx->pc = 0x152AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AACu;
        // 0x152ab0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152AB4u;
        goto label_152ab4;
    }
    ctx->pc = 0x152AACu;
    SET_GPR_U32(ctx, 31, 0x152AB4u);
    ctx->pc = 0x152AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AACu;
    // 0x152ab0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x152AB4u;
label_152ab4:
    // 0x152ab4: 0x10000060  b           . + 4 + (0x60 << 2)
label_152ab8:
    if (ctx->pc == 0x152AB8u) {
        ctx->pc = 0x152ABCu;
        goto label_152abc;
    }
    ctx->pc = 0x152AB4u;
    {
        const bool branch_taken_0x152ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ab4) {
            ctx->pc = 0x152C38u;
            goto label_152c38;
        }
    }
    ctx->pc = 0x152ABCu;
label_152abc:
    // 0x152abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152ac0:
    // 0x152ac0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_152ac4:
    // 0x152ac4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x152ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_152ac8:
    // 0x152ac8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x152ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_152acc:
    // 0x152acc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x152accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_152ad0:
    // 0x152ad0: 0x2442a5c0  addiu       $v0, $v0, -0x5A40
    ctx->pc = 0x152ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944192));
label_152ad4:
    // 0x152ad4: 0xc08e93e  jal         func_23A4F8
label_152ad8:
    if (ctx->pc == 0x152AD8u) {
        ctx->pc = 0x152AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AD4u;
        // 0x152ad8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152ADCu;
        goto label_152adc;
    }
    ctx->pc = 0x152AD4u;
    SET_GPR_U32(ctx, 31, 0x152ADCu);
    ctx->pc = 0x152AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152AD4u;
    // 0x152ad8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x152ADCu;
label_152adc:
    // 0x152adc: 0x10000056  b           . + 4 + (0x56 << 2)
label_152ae0:
    if (ctx->pc == 0x152AE0u) {
        ctx->pc = 0x152AE4u;
        goto label_152ae4;
    }
    ctx->pc = 0x152ADCu;
    {
        const bool branch_taken_0x152adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152adc) {
            ctx->pc = 0x152C38u;
            goto label_152c38;
        }
    }
    ctx->pc = 0x152AE4u;
label_152ae4:
    // 0x152ae4: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x152ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_152ae8:
    // 0x152ae8: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x152ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_152aec:
    // 0x152aec: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_152af0:
    if (ctx->pc == 0x152AF0u) {
        ctx->pc = 0x152AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AECu;
        // 0x152af0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152AF4u;
        goto label_152af4;
    }
    ctx->pc = 0x152AECu;
    {
        const bool branch_taken_0x152aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x152AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AECu;
        // 0x152af0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152aec) {
            ctx->pc = 0x152C20u;
            goto label_152c20;
        }
    }
    ctx->pc = 0x152AF4u;
label_152af4:
    // 0x152af4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152af8:
    // 0x152af8: 0x90224996  lbu         $v0, 0x4996($at)
    ctx->pc = 0x152af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18838)));
label_152afc:
    // 0x152afc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_152b00:
    if (ctx->pc == 0x152B00u) {
        ctx->pc = 0x152B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AFCu;
        // 0x152b00: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152B04u;
        goto label_152b04;
    }
    ctx->pc = 0x152AFCu;
    {
        const bool branch_taken_0x152afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152AFCu;
        // 0x152b00: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152afc) {
            ctx->pc = 0x152B20u;
            goto label_152b20;
        }
    }
    ctx->pc = 0x152B04u;
label_152b04:
    // 0x152b04: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x152b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_152b08:
    // 0x152b08: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_152b0c:
    if (ctx->pc == 0x152B0Cu) {
        ctx->pc = 0x152B10u;
        goto label_152b10;
    }
    ctx->pc = 0x152B08u;
    {
        const bool branch_taken_0x152b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b08) {
            ctx->pc = 0x152C1Cu;
            goto label_152c1c;
        }
    }
    ctx->pc = 0x152B10u;
label_152b10:
    // 0x152b10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152b14:
    // 0x152b14: 0x90224a26  lbu         $v0, 0x4A26($at)
    ctx->pc = 0x152b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18982)));
label_152b18:
    // 0x152b18: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_152b1c:
    if (ctx->pc == 0x152B1Cu) {
        ctx->pc = 0x152B20u;
        goto label_152b20;
    }
    ctx->pc = 0x152B18u;
    {
        const bool branch_taken_0x152b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b18) {
            ctx->pc = 0x152C1Cu;
            goto label_152c1c;
        }
    }
    ctx->pc = 0x152B20u;
label_152b20:
    // 0x152b20: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x152b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_152b24:
    // 0x152b24: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_152b28:
    if (ctx->pc == 0x152B28u) {
        ctx->pc = 0x152B2Cu;
        goto label_152b2c;
    }
    ctx->pc = 0x152B24u;
    {
        const bool branch_taken_0x152b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b24) {
            ctx->pc = 0x152BA4u;
            goto label_152ba4;
        }
    }
    ctx->pc = 0x152B2Cu;
label_152b2c:
    // 0x152b2c: 0xc08f0cc  jal         func_23C330
label_152b30:
    if (ctx->pc == 0x152B30u) {
        ctx->pc = 0x152B34u;
        goto label_152b34;
    }
    ctx->pc = 0x152B2Cu;
    SET_GPR_U32(ctx, 31, 0x152B34u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x152B34u;
label_152b34:
    // 0x152b34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152b38:
    // 0x152b38: 0x0  nop
    ctx->pc = 0x152b38u;
    // NOP
label_152b3c:
    // 0x152b3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_152b40:
    // 0x152b40: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x152b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_152b44:
    // 0x152b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152b48:
    // 0x152b48: 0x0  nop
    ctx->pc = 0x152b48u;
    // NOP
label_152b4c:
    // 0x152b4c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x152b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_152b50:
    // 0x152b50: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x152b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_152b54:
    // 0x152b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152b58:
    // 0x152b58: 0x0  nop
    ctx->pc = 0x152b58u;
    // NOP
label_152b5c:
    // 0x152b5c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x152b5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_152b60:
    // 0x152b60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152b60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_152b64:
    // 0x152b64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152b64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_152b68:
    // 0x152b68: 0x0  nop
    ctx->pc = 0x152b68u;
    // NOP
label_152b6c:
    // 0x152b6c: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x152b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_152b70:
    // 0x152b70: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_152b74:
    if (ctx->pc == 0x152B74u) {
        ctx->pc = 0x152B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B70u;
        // 0x152b74: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152B78u;
        goto label_152b78;
    }
    ctx->pc = 0x152B70u;
    {
        const bool branch_taken_0x152b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B70u;
        // 0x152b74: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b70) {
            ctx->pc = 0x152C1Cu;
            goto label_152c1c;
        }
    }
    ctx->pc = 0x152B78u;
label_152b78:
    // 0x152b78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152b7c:
    // 0x152b7c: 0x84244ae8  lh          $a0, 0x4AE8($at)
    ctx->pc = 0x152b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19176)));
label_152b80:
    // 0x152b80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152b84:
    // 0x152b84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152b88:
    // 0x152b88: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x152b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_152b8c:
    // 0x152b8c: 0x94224aee  lhu         $v0, 0x4AEE($at)
    ctx->pc = 0x152b8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19182)));
label_152b90:
    // 0x152b90: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x152b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_152b94:
    // 0x152b94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x152b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_152b98:
    // 0x152b98: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152b9c:
    // 0x152b9c: 0x10000020  b           . + 4 + (0x20 << 2)
label_152ba0:
    if (ctx->pc == 0x152BA0u) {
        ctx->pc = 0x152BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B9Cu;
        // 0x152ba0: 0xa4224aee  sh          $v0, 0x4AEE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152BA4u;
        goto label_152ba4;
    }
    ctx->pc = 0x152B9Cu;
    {
        const bool branch_taken_0x152b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152B9Cu;
        // 0x152ba0: 0xa4224aee  sh          $v0, 0x4AEE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b9c) {
            ctx->pc = 0x152C20u;
            goto label_152c20;
        }
    }
    ctx->pc = 0x152BA4u;
label_152ba4:
    // 0x152ba4: 0xc08f0cc  jal         func_23C330
label_152ba8:
    if (ctx->pc == 0x152BA8u) {
        ctx->pc = 0x152BACu;
        goto label_152bac;
    }
    ctx->pc = 0x152BA4u;
    SET_GPR_U32(ctx, 31, 0x152BACu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x152BACu;
label_152bac:
    // 0x152bac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152bb0:
    // 0x152bb0: 0x0  nop
    ctx->pc = 0x152bb0u;
    // NOP
label_152bb4:
    // 0x152bb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_152bb8:
    // 0x152bb8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_152bbc:
    // 0x152bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152bc0:
    // 0x152bc0: 0x0  nop
    ctx->pc = 0x152bc0u;
    // NOP
label_152bc4:
    // 0x152bc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x152bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_152bc8:
    // 0x152bc8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x152bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_152bcc:
    // 0x152bcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152bd0:
    // 0x152bd0: 0x0  nop
    ctx->pc = 0x152bd0u;
    // NOP
label_152bd4:
    // 0x152bd4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x152bd4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_152bd8:
    // 0x152bd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_152bdc:
    // 0x152bdc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_152be0:
    // 0x152be0: 0x0  nop
    ctx->pc = 0x152be0u;
    // NOP
label_152be4:
    // 0x152be4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x152be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_152be8:
    // 0x152be8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_152bec:
    if (ctx->pc == 0x152BECu) {
        ctx->pc = 0x152BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BE8u;
        // 0x152bec: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152BF0u;
        goto label_152bf0;
    }
    ctx->pc = 0x152BE8u;
    {
        const bool branch_taken_0x152be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152BE8u;
        // 0x152bec: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152be8) {
            ctx->pc = 0x152C1Cu;
            goto label_152c1c;
        }
    }
    ctx->pc = 0x152BF0u;
label_152bf0:
    // 0x152bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152bf4:
    // 0x152bf4: 0x84244ae8  lh          $a0, 0x4AE8($at)
    ctx->pc = 0x152bf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19176)));
label_152bf8:
    // 0x152bf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152bfc:
    // 0x152bfc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152c00:
    // 0x152c00: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x152c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_152c04:
    // 0x152c04: 0x94224aee  lhu         $v0, 0x4AEE($at)
    ctx->pc = 0x152c04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19182)));
label_152c08:
    // 0x152c08: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x152c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_152c0c:
    // 0x152c0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x152c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_152c10:
    // 0x152c10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152c14:
    // 0x152c14: 0x10000002  b           . + 4 + (0x2 << 2)
label_152c18:
    if (ctx->pc == 0x152C18u) {
        ctx->pc = 0x152C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C14u;
        // 0x152c18: 0xa4224aee  sh          $v0, 0x4AEE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152C1Cu;
        goto label_152c1c;
    }
    ctx->pc = 0x152C14u;
    {
        const bool branch_taken_0x152c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C14u;
        // 0x152c18: 0xa4224aee  sh          $v0, 0x4AEE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c14) {
            ctx->pc = 0x152C20u;
            goto label_152c20;
        }
    }
    ctx->pc = 0x152C1Cu;
label_152c1c:
    // 0x152c1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x152c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152c20:
    // 0x152c20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152c24:
    // 0x152c24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x152c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_152c28:
    // 0x152c28: 0x90244af2  lbu         $a0, 0x4AF2($at)
    ctx->pc = 0x152c28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
label_152c2c:
    // 0x152c2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x152c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152c30:
    // 0x152c30: 0xc064fbc  jal         func_193EF0
label_152c34:
    if (ctx->pc == 0x152C34u) {
        ctx->pc = 0x152C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C30u;
        // 0x152c34: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152C38u;
        goto label_152c38;
    }
    ctx->pc = 0x152C30u;
    SET_GPR_U32(ctx, 31, 0x152C38u);
    ctx->pc = 0x152C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C30u;
    // 0x152c34: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EF0u;
    { ctx->pc = 0x193ef0; return; }
    ctx->pc = 0x152C38u;
label_152c38:
    // 0x152c38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152c3c:
    // 0x152c3c: 0x84234ae8  lh          $v1, 0x4AE8($at)
    ctx->pc = 0x152c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19176)));
label_152c40:
    // 0x152c40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_152c44:
    // 0x152c44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152c48:
    // 0x152c48: 0xa4234ae8  sh          $v1, 0x4AE8($at)
    ctx->pc = 0x152c48u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19176), (uint16_t)GPR_U32(ctx, 3));
label_152c4c:
    // 0x152c4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_152c50:
    // 0x152c50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_152c54:
    // 0x152c54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_152c58:
    // 0x152c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152c5c:
    // 0x152c5c: 0x3e00008  jr          $ra
label_152c60:
    if (ctx->pc == 0x152C60u) {
        ctx->pc = 0x152C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C5Cu;
        // 0x152c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152C64u;
        goto label_152c64;
    }
    ctx->pc = 0x152C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C5Cu;
        // 0x152c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152C64u;
label_152c64:
    // 0x152c64: 0x0  nop
    ctx->pc = 0x152c64u;
    // NOP
label_152c68:
    // 0x152c68: 0x0  nop
    ctx->pc = 0x152c68u;
    // NOP
label_152c6c:
    // 0x152c6c: 0x0  nop
    ctx->pc = 0x152c6cu;
    // NOP
label_152c70:
    // 0x152c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_152c74:
    // 0x152c74: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x152c74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_152c78:
    // 0x152c78: 0x27838138  addiu       $v1, $gp, -0x7EC8
    ctx->pc = 0x152c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934840));
label_152c7c:
    // 0x152c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_152c80:
    // 0x152c80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x152c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_152c84:
    // 0x152c84: 0xdca80270  ld          $t0, 0x270($a1)
    ctx->pc = 0x152c84u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 624)));
label_152c88:
    // 0x152c88: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x152c88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_152c8c:
    // 0x152c8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x152c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_152c90:
    // 0x152c90: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x152c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_152c94:
    // 0x152c94: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x152c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_152c98:
    // 0x152c98: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_152c9c:
    if (ctx->pc == 0x152C9Cu) {
        ctx->pc = 0x152C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C98u;
        // 0x152c9c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152CA0u;
        goto label_152ca0;
    }
    ctx->pc = 0x152C98u;
    {
        const bool branch_taken_0x152c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C98u;
        // 0x152c9c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c98) {
            ctx->pc = 0x152CB4u;
            goto label_152cb4;
        }
    }
    ctx->pc = 0x152CA0u;
label_152ca0:
    // 0x152ca0: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
label_152ca4:
    if (ctx->pc == 0x152CA4u) {
        ctx->pc = 0x152CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CA0u;
        // 0x152ca4: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152CA8u;
        goto label_152ca8;
    }
    ctx->pc = 0x152CA0u;
    {
        const bool branch_taken_0x152ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x152CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CA0u;
        // 0x152ca4: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ca0) {
            ctx->pc = 0x152CB0u;
            goto label_152cb0;
        }
    }
    ctx->pc = 0x152CA8u;
label_152ca8:
    // 0x152ca8: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x152ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
label_152cac:
    // 0x152cac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x152cacu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_152cb0:
    // 0x152cb0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x152cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_152cb4:
    // 0x152cb4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x152cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_152cb8:
    // 0x152cb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_152cbc:
    if (ctx->pc == 0x152CBCu) {
        ctx->pc = 0x152CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CB8u;
        // 0x152cbc: 0x7343c  dsll32      $a2, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152CC0u;
        goto label_152cc0;
    }
    ctx->pc = 0x152CB8u;
    {
        const bool branch_taken_0x152cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CB8u;
        // 0x152cbc: 0x7343c  dsll32      $a2, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cb8) {
            ctx->pc = 0x152CE8u;
            goto label_152ce8;
        }
    }
    ctx->pc = 0x152CC0u;
label_152cc0:
    // 0x152cc0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x152cc0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_152cc4:
    // 0x152cc4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_152cc8:
    if (ctx->pc == 0x152CC8u) {
        ctx->pc = 0x152CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CC4u;
        // 0x152cc8: 0x61883  sra         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152CCCu;
        goto label_152ccc;
    }
    ctx->pc = 0x152CC4u;
    {
        const bool branch_taken_0x152cc4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x152CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CC4u;
        // 0x152cc8: 0x61883  sra         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cc4) {
            ctx->pc = 0x152CD4u;
            goto label_152cd4;
        }
    }
    ctx->pc = 0x152CCCu;
label_152ccc:
    // 0x152ccc: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x152cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_152cd0:
    // 0x152cd0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x152cd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_152cd4:
    // 0x152cd4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x152cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_152cd8:
    // 0x152cd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x152cd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_152cdc:
    // 0x152cdc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x152cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_152ce0:
    // 0x152ce0: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x152ce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
label_152ce4:
    // 0x152ce4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x152ce4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_152ce8:
    // 0x152ce8: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x152ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_152cec:
    // 0x152cec: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x152cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_152cf0:
    // 0x152cf0: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x152cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_152cf4:
    // 0x152cf4: 0x24a30202  addiu       $v1, $a1, 0x202
    ctx->pc = 0x152cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 514));
label_152cf8:
    // 0x152cf8: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x152cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
label_152cfc:
    // 0x152cfc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x152cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_152d00:
    // 0x152d00: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x152d00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
label_152d04:
    // 0x152d04: 0x8ca60198  lw          $a2, 0x198($a1)
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
label_152d08:
    // 0x152d08: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_152d0c:
    // 0x152d0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152d10:
    // 0x152d10: 0xe33804  sllv        $a3, $v1, $a3
    ctx->pc = 0x152d10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_152d14:
    // 0x152d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x152d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_152d18:
    // 0x152d18: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x152d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_152d1c:
    // 0x152d1c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_152d20:
    if (ctx->pc == 0x152D20u) {
        ctx->pc = 0x152D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D1Cu;
        // 0x152d20: 0xaca60198  sw          $a2, 0x198($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152D24u;
        goto label_152d24;
    }
    ctx->pc = 0x152D1Cu;
    {
        const bool branch_taken_0x152d1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x152D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D1Cu;
        // 0x152d20: 0xaca60198  sw          $a2, 0x198($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d1c) {
            ctx->pc = 0x152D34u;
            goto label_152d34;
        }
    }
    ctx->pc = 0x152D24u;
label_152d24:
    // 0x152d24: 0xc0439cc  jal         func_10E730
label_152d28:
    if (ctx->pc == 0x152D28u) {
        ctx->pc = 0x152D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D24u;
        // 0x152d28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152D2Cu;
        goto label_152d2c;
    }
    ctx->pc = 0x152D24u;
    SET_GPR_U32(ctx, 31, 0x152D2Cu);
    ctx->pc = 0x152D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D24u;
    // 0x152d28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152D24u, 0x152D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D2Cu;
label_152d2c:
    // 0x152d2c: 0xc05d604  jal         func_175810
label_152d30:
    if (ctx->pc == 0x152D30u) {
        ctx->pc = 0x152D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D2Cu;
        // 0x152d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152D34u;
        goto label_152d34;
    }
    ctx->pc = 0x152D2Cu;
    SET_GPR_U32(ctx, 31, 0x152D34u);
    ctx->pc = 0x152D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D2Cu;
    // 0x152d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175810u;
    { ctx->pc = 0x175810; return; }
    ctx->pc = 0x152D34u;
label_152d34:
    // 0x152d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152d38:
    // 0x152d38: 0x3e00008  jr          $ra
label_152d3c:
    if (ctx->pc == 0x152D3Cu) {
        ctx->pc = 0x152D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D38u;
        // 0x152d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152D40u;
        goto label_152d40;
    }
    ctx->pc = 0x152D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D38u;
        // 0x152d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152D40u;
label_152d40:
    // 0x152d40: 0x84a60250  lh          $a2, 0x250($a1)
    ctx->pc = 0x152d40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 592)));
label_152d44:
    // 0x152d44: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x152d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_152d48:
    // 0x152d48: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x152d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_152d4c:
    // 0x152d4c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x152d4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_152d50:
    // 0x152d50: 0x61200a  movz        $a0, $v1, $at
    ctx->pc = 0x152d50u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_152d54:
    // 0x152d54: 0x84a30250  lh          $v1, 0x250($a1)
    ctx->pc = 0x152d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 592)));
label_152d58:
    // 0x152d58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_152d5c:
    // 0x152d5c: 0x3e00008  jr          $ra
label_152d60:
    if (ctx->pc == 0x152D60u) {
        ctx->pc = 0x152D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D5Cu;
        // 0x152d60: 0xa4a30250  sh          $v1, 0x250($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 592), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152D64u;
        goto label_152d64;
    }
    ctx->pc = 0x152D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D5Cu;
        // 0x152d60: 0xa4a30250  sh          $v1, 0x250($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 592), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152D64u;
label_152d64:
    // 0x152d64: 0x0  nop
    ctx->pc = 0x152d64u;
    // NOP
label_152d68:
    // 0x152d68: 0x0  nop
    ctx->pc = 0x152d68u;
    // NOP
label_152d6c:
    // 0x152d6c: 0x0  nop
    ctx->pc = 0x152d6cu;
    // NOP
label_152d70:
    // 0x152d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_152d74:
    // 0x152d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_152d78:
    // 0x152d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152d7c:
    // 0x152d7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x152d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_152d80:
    // 0x152d80: 0x84a50220  lh          $a1, 0x220($a1)
    ctx->pc = 0x152d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
label_152d84:
    // 0x152d84: 0xc050fe8  jal         func_143FA0
label_152d88:
    if (ctx->pc == 0x152D88u) {
        ctx->pc = 0x152D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D84u;
        // 0x152d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152D8Cu;
        goto label_152d8c;
    }
    ctx->pc = 0x152D84u;
    SET_GPR_U32(ctx, 31, 0x152D8Cu);
    ctx->pc = 0x152D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D84u;
    // 0x152d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FA0u, 0x152D84u, 0x152D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D8Cu;
label_152d8c:
    // 0x152d8c: 0x86050252  lh          $a1, 0x252($s0)
    ctx->pc = 0x152d8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
label_152d90:
    // 0x152d90: 0xc051018  jal         func_144060
label_152d94:
    if (ctx->pc == 0x152D94u) {
        ctx->pc = 0x152D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D90u;
        // 0x152d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152D98u;
        goto label_152d98;
    }
    ctx->pc = 0x152D90u;
    SET_GPR_U32(ctx, 31, 0x152D98u);
    ctx->pc = 0x152D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D90u;
    // 0x152d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144060u, 0x152D90u, 0x152D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D98u;
label_152d98:
    // 0x152d98: 0x92030232  lbu         $v1, 0x232($s0)
    ctx->pc = 0x152d98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
label_152d9c:
    // 0x152d9c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_152da0:
    if (ctx->pc == 0x152DA0u) {
        ctx->pc = 0x152DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D9Cu;
        // 0x152da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152DA4u;
        goto label_152da4;
    }
    ctx->pc = 0x152D9Cu;
    {
        const bool branch_taken_0x152d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D9Cu;
        // 0x152da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d9c) {
            ctx->pc = 0x152DB8u;
            goto label_152db8;
        }
    }
    ctx->pc = 0x152DA4u;
label_152da4:
    // 0x152da4: 0xc0439cc  jal         func_10E730
label_152da8:
    if (ctx->pc == 0x152DA8u) {
        ctx->pc = 0x152DACu;
        goto label_152dac;
    }
    ctx->pc = 0x152DA4u;
    SET_GPR_U32(ctx, 31, 0x152DACu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152DA4u, 0x152DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DACu;
label_152dac:
    // 0x152dac: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x152dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_152db0:
    // 0x152db0: 0xc043884  jal         func_10E210
label_152db4:
    if (ctx->pc == 0x152DB4u) {
        ctx->pc = 0x152DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DB0u;
        // 0x152db4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152DB8u;
        goto label_152db8;
    }
    ctx->pc = 0x152DB0u;
    SET_GPR_U32(ctx, 31, 0x152DB8u);
    ctx->pc = 0x152DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DB0u;
    // 0x152db4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E210u, 0x152DB0u, 0x152DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DB8u;
label_152db8:
    // 0x152db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_152dbc:
    // 0x152dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152dc0:
    // 0x152dc0: 0x3e00008  jr          $ra
label_152dc4:
    if (ctx->pc == 0x152DC4u) {
        ctx->pc = 0x152DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DC0u;
        // 0x152dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152DC8u;
        goto label_152dc8;
    }
    ctx->pc = 0x152DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DC0u;
        // 0x152dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152DC8u;
label_152dc8:
    // 0x152dc8: 0x0  nop
    ctx->pc = 0x152dc8u;
    // NOP
label_152dcc:
    // 0x152dcc: 0x0  nop
    ctx->pc = 0x152dccu;
    // NOP
label_152dd0:
    // 0x152dd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x152dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_152dd4:
    // 0x152dd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152dd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_152dd8:
    // 0x152dd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x152dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_152ddc:
    // 0x152ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_152de0:
    // 0x152de0: 0xc051018  jal         func_144060
label_152de4:
    if (ctx->pc == 0x152DE4u) {
        ctx->pc = 0x152DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DE0u;
        // 0x152de4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152DE8u;
        goto label_152de8;
    }
    ctx->pc = 0x152DE0u;
    SET_GPR_U32(ctx, 31, 0x152DE8u);
    ctx->pc = 0x152DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DE0u;
    // 0x152de4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144060u, 0x152DE0u, 0x152DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DE8u;
label_152de8:
    // 0x152de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152dec:
    // 0x152dec: 0x3e00008  jr          $ra
label_152df0:
    if (ctx->pc == 0x152DF0u) {
        ctx->pc = 0x152DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DECu;
        // 0x152df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152DF4u;
        goto label_152df4;
    }
    ctx->pc = 0x152DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DECu;
        // 0x152df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152DF4u;
label_152df4:
    // 0x152df4: 0x0  nop
    ctx->pc = 0x152df4u;
    // NOP
label_152df8:
    // 0x152df8: 0x0  nop
    ctx->pc = 0x152df8u;
    // NOP
label_152dfc:
    // 0x152dfc: 0x0  nop
    ctx->pc = 0x152dfcu;
    // NOP
label_152e00:
    // 0x152e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_152e04:
    // 0x152e04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_152e08:
    // 0x152e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_152e0c:
    // 0x152e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152e10:
    // 0x152e10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_152e14:
    // 0x152e14: 0x90a20232  lbu         $v0, 0x232($a1)
    ctx->pc = 0x152e14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_152e18:
    // 0x152e18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_152e1c:
    if (ctx->pc == 0x152E1Cu) {
        ctx->pc = 0x152E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E18u;
        // 0x152e1c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152E20u;
        goto label_152e20;
    }
    ctx->pc = 0x152E18u;
    {
        const bool branch_taken_0x152e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E18u;
        // 0x152e1c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e18) {
            ctx->pc = 0x152E50u;
            goto label_152e50;
        }
    }
    ctx->pc = 0x152E20u;
label_152e20:
    // 0x152e20: 0xde030270  ld          $v1, 0x270($s0)
    ctx->pc = 0x152e20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 624)));
label_152e24:
    // 0x152e24: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x152e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_152e28:
    // 0x152e28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x152e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_152e2c:
    // 0x152e2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_152e30:
    if (ctx->pc == 0x152E30u) {
        ctx->pc = 0x152E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E2Cu;
        // 0x152e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152E34u;
        goto label_152e34;
    }
    ctx->pc = 0x152E2Cu;
    {
        const bool branch_taken_0x152e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E2Cu;
        // 0x152e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e2c) {
            ctx->pc = 0x152E3Cu;
            goto label_152e3c;
        }
    }
    ctx->pc = 0x152E34u;
label_152e34:
    // 0x152e34: 0x92020282  lbu         $v0, 0x282($s0)
    ctx->pc = 0x152e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 642)));
label_152e38:
    // 0x152e38: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x152e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_152e3c:
    // 0x152e3c: 0xc0439cc  jal         func_10E730
label_152e40:
    if (ctx->pc == 0x152E40u) {
        ctx->pc = 0x152E44u;
        goto label_152e44;
    }
    ctx->pc = 0x152E3Cu;
    SET_GPR_U32(ctx, 31, 0x152E44u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152E3Cu, 0x152E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E44u;
label_152e44:
    // 0x152e44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x152e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_152e48:
    // 0x152e48: 0xc043884  jal         func_10E210
label_152e4c:
    if (ctx->pc == 0x152E4Cu) {
        ctx->pc = 0x152E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E48u;
        // 0x152e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152E50u;
        goto label_152e50;
    }
    ctx->pc = 0x152E48u;
    SET_GPR_U32(ctx, 31, 0x152E50u);
    ctx->pc = 0x152E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E48u;
    // 0x152e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E210u, 0x152E48u, 0x152E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E50u;
label_152e50:
    // 0x152e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152e54:
    // 0x152e54: 0xc050fe8  jal         func_143FA0
label_152e58:
    if (ctx->pc == 0x152E58u) {
        ctx->pc = 0x152E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E54u;
        // 0x152e58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152E5Cu;
        goto label_152e5c;
    }
    ctx->pc = 0x152E54u;
    SET_GPR_U32(ctx, 31, 0x152E5Cu);
    ctx->pc = 0x152E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E54u;
    // 0x152e58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FA0u, 0x152E54u, 0x152E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E5Cu;
label_152e5c:
    // 0x152e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_152e60:
    // 0x152e60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_152e64:
    // 0x152e64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152e68:
    // 0x152e68: 0x3e00008  jr          $ra
label_152e6c:
    if (ctx->pc == 0x152E6Cu) {
        ctx->pc = 0x152E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E68u;
        // 0x152e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152E70u;
        goto label_152e70;
    }
    ctx->pc = 0x152E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E68u;
        // 0x152e6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152E70u;
label_152e70:
    // 0x152e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_152e74:
    // 0x152e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_152e78:
    // 0x152e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152e7c:
    // 0x152e7c: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x152e7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_152e80:
    // 0x152e80: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_152e84:
    if (ctx->pc == 0x152E84u) {
        ctx->pc = 0x152E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E80u;
        // 0x152e84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152E88u;
        goto label_152e88;
    }
    ctx->pc = 0x152E80u;
    {
        const bool branch_taken_0x152e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E80u;
        // 0x152e84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e80) {
            ctx->pc = 0x152EA4u;
            goto label_152ea4;
        }
    }
    ctx->pc = 0x152E88u;
label_152e88:
    // 0x152e88: 0xc0439cc  jal         func_10E730
label_152e8c:
    if (ctx->pc == 0x152E8Cu) {
        ctx->pc = 0x152E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E88u;
        // 0x152e8c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152E90u;
        goto label_152e90;
    }
    ctx->pc = 0x152E88u;
    SET_GPR_U32(ctx, 31, 0x152E90u);
    ctx->pc = 0x152E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E88u;
    // 0x152e8c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152E88u, 0x152E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E90u;
label_152e90:
    // 0x152e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152e94:
    // 0x152e94: 0xc0438bc  jal         func_10E2F0
label_152e98:
    if (ctx->pc == 0x152E98u) {
        ctx->pc = 0x152E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E94u;
        // 0x152e98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152E9Cu;
        goto label_152e9c;
    }
    ctx->pc = 0x152E94u;
    SET_GPR_U32(ctx, 31, 0x152E9Cu);
    ctx->pc = 0x152E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E94u;
    // 0x152e98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E2F0u, 0x152E94u, 0x152E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E9Cu;
label_152e9c:
    // 0x152e9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_152ea0:
    if (ctx->pc == 0x152EA0u) {
        ctx->pc = 0x152EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E9Cu;
        // 0x152ea0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152EA4u;
        goto label_152ea4;
    }
    ctx->pc = 0x152E9Cu;
    {
        const bool branch_taken_0x152e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E9Cu;
        // 0x152ea0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e9c) {
            ctx->pc = 0x152EC4u;
            goto label_152ec4;
        }
    }
    ctx->pc = 0x152EA4u;
label_152ea4:
    // 0x152ea4: 0x84a30252  lh          $v1, 0x252($a1)
    ctx->pc = 0x152ea4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
label_152ea8:
    // 0x152ea8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_152eac:
    // 0x152eac: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x152eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_152eb0:
    // 0x152eb0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_152eb4:
    if (ctx->pc == 0x152EB4u) {
        ctx->pc = 0x152EB8u;
        goto label_152eb8;
    }
    ctx->pc = 0x152EB0u;
    {
        const bool branch_taken_0x152eb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152eb0) {
            ctx->pc = 0x152EBCu;
            goto label_152ebc;
        }
    }
    ctx->pc = 0x152EB8u;
label_152eb8:
    // 0x152eb8: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x152eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_152ebc:
    // 0x152ebc: 0xa4a30252  sh          $v1, 0x252($a1)
    ctx->pc = 0x152ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 594), (uint16_t)GPR_U32(ctx, 3));
label_152ec0:
    // 0x152ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_152ec4:
    // 0x152ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152ec8:
    // 0x152ec8: 0x3e00008  jr          $ra
label_152ecc:
    if (ctx->pc == 0x152ECCu) {
        ctx->pc = 0x152ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EC8u;
        // 0x152ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152ED0u;
        goto label_152ed0;
    }
    ctx->pc = 0x152EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EC8u;
        // 0x152ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152ED0u;
label_152ed0:
    // 0x152ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_152ed4:
    // 0x152ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_152ed8:
    // 0x152ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152edc:
    // 0x152edc: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x152edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_152ee0:
    // 0x152ee0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_152ee4:
    if (ctx->pc == 0x152EE4u) {
        ctx->pc = 0x152EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EE0u;
        // 0x152ee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152EE8u;
        goto label_152ee8;
    }
    ctx->pc = 0x152EE0u;
    {
        const bool branch_taken_0x152ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EE0u;
        // 0x152ee4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ee0) {
            ctx->pc = 0x152F04u;
            goto label_152f04;
        }
    }
    ctx->pc = 0x152EE8u;
label_152ee8:
    // 0x152ee8: 0xc0439cc  jal         func_10E730
label_152eec:
    if (ctx->pc == 0x152EECu) {
        ctx->pc = 0x152EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EE8u;
        // 0x152eec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152EF0u;
        goto label_152ef0;
    }
    ctx->pc = 0x152EE8u;
    SET_GPR_U32(ctx, 31, 0x152EF0u);
    ctx->pc = 0x152EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EE8u;
    // 0x152eec: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152EE8u, 0x152EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EF0u;
label_152ef0:
    // 0x152ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152ef4:
    // 0x152ef4: 0xc0438dc  jal         func_10E370
label_152ef8:
    if (ctx->pc == 0x152EF8u) {
        ctx->pc = 0x152EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EF4u;
        // 0x152ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152EFCu;
        goto label_152efc;
    }
    ctx->pc = 0x152EF4u;
    SET_GPR_U32(ctx, 31, 0x152EFCu);
    ctx->pc = 0x152EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152EF4u;
    // 0x152ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E370u, 0x152EF4u, 0x152EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EFCu;
label_152efc:
    // 0x152efc: 0x10000009  b           . + 4 + (0x9 << 2)
label_152f00:
    if (ctx->pc == 0x152F00u) {
        ctx->pc = 0x152F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EFCu;
        // 0x152f00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152F04u;
        goto label_152f04;
    }
    ctx->pc = 0x152EFCu;
    {
        const bool branch_taken_0x152efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152EFCu;
        // 0x152f00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152efc) {
            ctx->pc = 0x152F24u;
            goto label_152f24;
        }
    }
    ctx->pc = 0x152F04u;
label_152f04:
    // 0x152f04: 0x84a30220  lh          $v1, 0x220($a1)
    ctx->pc = 0x152f04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
label_152f08:
    // 0x152f08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_152f0c:
    // 0x152f0c: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x152f0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_152f10:
    // 0x152f10: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_152f14:
    if (ctx->pc == 0x152F14u) {
        ctx->pc = 0x152F18u;
        goto label_152f18;
    }
    ctx->pc = 0x152F10u;
    {
        const bool branch_taken_0x152f10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f10) {
            ctx->pc = 0x152F1Cu;
            goto label_152f1c;
        }
    }
    ctx->pc = 0x152F18u;
label_152f18:
    // 0x152f18: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x152f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_152f1c:
    // 0x152f1c: 0xa4a30220  sh          $v1, 0x220($a1)
    ctx->pc = 0x152f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 544), (uint16_t)GPR_U32(ctx, 3));
label_152f20:
    // 0x152f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_152f24:
    // 0x152f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152f28:
    // 0x152f28: 0x3e00008  jr          $ra
label_152f2c:
    if (ctx->pc == 0x152F2Cu) {
        ctx->pc = 0x152F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F28u;
        // 0x152f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152F30u;
        goto label_152f30;
    }
    ctx->pc = 0x152F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F28u;
        // 0x152f2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152F30u;
label_152f30:
    // 0x152f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_152f34:
    // 0x152f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_152f38:
    // 0x152f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152f3c:
    // 0x152f3c: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x152f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_152f40:
    // 0x152f40: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_152f44:
    if (ctx->pc == 0x152F44u) {
        ctx->pc = 0x152F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F40u;
        // 0x152f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152F48u;
        goto label_152f48;
    }
    ctx->pc = 0x152F40u;
    {
        const bool branch_taken_0x152f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F40u;
        // 0x152f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f40) {
            ctx->pc = 0x152F64u;
            goto label_152f64;
        }
    }
    ctx->pc = 0x152F48u;
label_152f48:
    // 0x152f48: 0xc0439cc  jal         func_10E730
label_152f4c:
    if (ctx->pc == 0x152F4Cu) {
        ctx->pc = 0x152F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F48u;
        // 0x152f4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152F50u;
        goto label_152f50;
    }
    ctx->pc = 0x152F48u;
    SET_GPR_U32(ctx, 31, 0x152F50u);
    ctx->pc = 0x152F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F48u;
    // 0x152f4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152F48u, 0x152F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F50u;
label_152f50:
    // 0x152f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152f54:
    // 0x152f54: 0xc04390c  jal         func_10E430
label_152f58:
    if (ctx->pc == 0x152F58u) {
        ctx->pc = 0x152F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F54u;
        // 0x152f58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152F5Cu;
        goto label_152f5c;
    }
    ctx->pc = 0x152F54u;
    SET_GPR_U32(ctx, 31, 0x152F5Cu);
    ctx->pc = 0x152F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F54u;
    // 0x152f58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E430u, 0x152F54u, 0x152F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F5Cu;
label_152f5c:
    // 0x152f5c: 0x10000009  b           . + 4 + (0x9 << 2)
label_152f60:
    if (ctx->pc == 0x152F60u) {
        ctx->pc = 0x152F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F5Cu;
        // 0x152f60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152F64u;
        goto label_152f64;
    }
    ctx->pc = 0x152F5Cu;
    {
        const bool branch_taken_0x152f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F5Cu;
        // 0x152f60: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152f5c) {
            ctx->pc = 0x152F84u;
            goto label_152f84;
        }
    }
    ctx->pc = 0x152F64u;
label_152f64:
    // 0x152f64: 0x90a3024b  lbu         $v1, 0x24B($a1)
    ctx->pc = 0x152f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 587)));
label_152f68:
    // 0x152f68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_152f6c:
    // 0x152f6c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x152f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_152f70:
    // 0x152f70: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_152f74:
    if (ctx->pc == 0x152F74u) {
        ctx->pc = 0x152F78u;
        goto label_152f78;
    }
    ctx->pc = 0x152F70u;
    {
        const bool branch_taken_0x152f70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152f70) {
            ctx->pc = 0x152F7Cu;
            goto label_152f7c;
        }
    }
    ctx->pc = 0x152F78u;
label_152f78:
    // 0x152f78: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x152f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_152f7c:
    // 0x152f7c: 0xa0a3024b  sb          $v1, 0x24B($a1)
    ctx->pc = 0x152f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 587), (uint8_t)GPR_U32(ctx, 3));
label_152f80:
    // 0x152f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_152f84:
    // 0x152f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152f88:
    // 0x152f88: 0x3e00008  jr          $ra
label_152f8c:
    if (ctx->pc == 0x152F8Cu) {
        ctx->pc = 0x152F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F88u;
        // 0x152f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152F90u;
        goto label_152f90;
    }
    ctx->pc = 0x152F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F88u;
        // 0x152f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152F90u;
label_152f90:
    // 0x152f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_152f94:
    // 0x152f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_152f98:
    // 0x152f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152f9c:
    // 0x152f9c: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x152f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
label_152fa0:
    // 0x152fa0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_152fa4:
    if (ctx->pc == 0x152FA4u) {
        ctx->pc = 0x152FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FA0u;
        // 0x152fa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FA8u;
        goto label_152fa8;
    }
    ctx->pc = 0x152FA0u;
    {
        const bool branch_taken_0x152fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FA0u;
        // 0x152fa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fa0) {
            ctx->pc = 0x152FC4u;
            goto label_152fc4;
        }
    }
    ctx->pc = 0x152FA8u;
label_152fa8:
    // 0x152fa8: 0xc0439cc  jal         func_10E730
label_152fac:
    if (ctx->pc == 0x152FACu) {
        ctx->pc = 0x152FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FA8u;
        // 0x152fac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FB0u;
        goto label_152fb0;
    }
    ctx->pc = 0x152FA8u;
    SET_GPR_U32(ctx, 31, 0x152FB0u);
    ctx->pc = 0x152FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FA8u;
    // 0x152fac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152FA8u, 0x152FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FB0u;
label_152fb0:
    // 0x152fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_152fb4:
    // 0x152fb4: 0xc04396c  jal         func_10E5B0
label_152fb8:
    if (ctx->pc == 0x152FB8u) {
        ctx->pc = 0x152FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FB4u;
        // 0x152fb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FBCu;
        goto label_152fbc;
    }
    ctx->pc = 0x152FB4u;
    SET_GPR_U32(ctx, 31, 0x152FBCu);
    ctx->pc = 0x152FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152FB4u;
    // 0x152fb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E5B0u, 0x152FB4u, 0x152FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FBCu;
label_152fbc:
    // 0x152fbc: 0x10000009  b           . + 4 + (0x9 << 2)
label_152fc0:
    if (ctx->pc == 0x152FC0u) {
        ctx->pc = 0x152FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FBCu;
        // 0x152fc0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FC4u;
        goto label_152fc4;
    }
    ctx->pc = 0x152FBCu;
    {
        const bool branch_taken_0x152fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FBCu;
        // 0x152fc0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152fbc) {
            ctx->pc = 0x152FE4u;
            goto label_152fe4;
        }
    }
    ctx->pc = 0x152FC4u;
label_152fc4:
    // 0x152fc4: 0x90a3024a  lbu         $v1, 0x24A($a1)
    ctx->pc = 0x152fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 586)));
label_152fc8:
    // 0x152fc8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x152fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_152fcc:
    // 0x152fcc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x152fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_152fd0:
    // 0x152fd0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_152fd4:
    if (ctx->pc == 0x152FD4u) {
        ctx->pc = 0x152FD8u;
        goto label_152fd8;
    }
    ctx->pc = 0x152FD0u;
    {
        const bool branch_taken_0x152fd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x152fd0) {
            ctx->pc = 0x152FDCu;
            goto label_152fdc;
        }
    }
    ctx->pc = 0x152FD8u;
label_152fd8:
    // 0x152fd8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x152fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_152fdc:
    // 0x152fdc: 0xa0a3024a  sb          $v1, 0x24A($a1)
    ctx->pc = 0x152fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 586), (uint8_t)GPR_U32(ctx, 3));
label_152fe0:
    // 0x152fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_152fe4:
    // 0x152fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152fe8:
    // 0x152fe8: 0x3e00008  jr          $ra
label_152fec:
    if (ctx->pc == 0x152FECu) {
        ctx->pc = 0x152FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FE8u;
        // 0x152fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152FF0u;
        goto label_152ff0;
    }
    ctx->pc = 0x152FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152FE8u;
        // 0x152fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152FF0u;
label_152ff0:
    // 0x152ff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152ff4:
    // 0x152ff4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152ff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152ff8:
    // 0x152ff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152ffc:
    // 0x152ffc: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x152ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_153000:
    // 0x153000: 0x24650200  addiu       $a1, $v1, 0x200
    ctx->pc = 0x153000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_153004:
    // 0x153004: 0x84630200  lh          $v1, 0x200($v1)
    ctx->pc = 0x153004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 512)));
label_153008:
    // 0x153008: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_15300c:
    if (ctx->pc == 0x15300Cu) {
        ctx->pc = 0x153010u;
        goto label_153010;
    }
    ctx->pc = 0x153008u;
    {
        const bool branch_taken_0x153008 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x153008) {
            ctx->pc = 0x153040u;
            goto label_153040;
        }
    }
    ctx->pc = 0x153010u;
label_153010:
    // 0x153010: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x153010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_153014:
    // 0x153014: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x153014u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_153018:
    // 0x153018: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x153018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_15301c:
    // 0x15301c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x15301cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_153020:
    // 0x153020: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
label_153024:
    if (ctx->pc == 0x153024u) {
        ctx->pc = 0x153028u;
        goto label_153028;
    }
    ctx->pc = 0x153020u;
    {
        const bool branch_taken_0x153020 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x153020) {
            ctx->pc = 0x153040u;
            goto label_153040;
        }
    }
    ctx->pc = 0x153028u;
label_153028:
    // 0x153028: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x153028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_15302c:
    // 0x15302c: 0x24e50002  addiu       $a1, $a3, 0x2
    ctx->pc = 0x15302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_153030:
    // 0x153030: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x153030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_153034:
    // 0x153034: 0xa02827  not         $a1, $a1
    ctx->pc = 0x153034u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_153038:
    // 0x153038: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x153038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_15303c:
    // 0x15303c: 0xac830198  sw          $v1, 0x198($a0)
    ctx->pc = 0x15303cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
label_153040:
    // 0x153040: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x153040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_153044:
    // 0x153044: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x153044u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_153048:
    // 0x153048: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_15304c:
    if (ctx->pc == 0x15304Cu) {
        ctx->pc = 0x15304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153048u;
        // 0x15304c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153050u;
        goto label_153050;
    }
    ctx->pc = 0x153048u;
    {
        const bool branch_taken_0x153048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153048u;
        // 0x15304c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153048) {
            ctx->pc = 0x152FFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152ffc;
        }
    }
    ctx->pc = 0x153050u;
label_153050:
    // 0x153050: 0x8483027c  lh          $v1, 0x27C($a0)
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 636)));
label_153054:
    // 0x153054: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
label_153058:
    if (ctx->pc == 0x153058u) {
        ctx->pc = 0x15305Cu;
        goto label_15305c;
    }
    ctx->pc = 0x153054u;
    {
        const bool branch_taken_0x153054 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x153054) {
            ctx->pc = 0x153084u;
            goto label_153084;
        }
    }
    ctx->pc = 0x15305Cu;
label_15305c:
    // 0x15305c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_153060:
    // 0x153060: 0xa483027c  sh          $v1, 0x27C($a0)
    ctx->pc = 0x153060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 636), (uint16_t)GPR_U32(ctx, 3));
label_153064:
    // 0x153064: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x153064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_153068:
    // 0x153068: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x153068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_15306c:
    // 0x15306c: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_153070:
    if (ctx->pc == 0x153070u) {
        ctx->pc = 0x153074u;
        goto label_153074;
    }
    ctx->pc = 0x15306Cu;
    {
        const bool branch_taken_0x15306c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x15306c) {
            ctx->pc = 0x153084u;
            goto label_153084;
        }
    }
    ctx->pc = 0x153074u;
label_153074:
    // 0x153074: 0x8c850198  lw          $a1, 0x198($a0)
    ctx->pc = 0x153074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_153078:
    // 0x153078: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x153078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_15307c:
    // 0x15307c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15307cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_153080:
    // 0x153080: 0xac830198  sw          $v1, 0x198($a0)
    ctx->pc = 0x153080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 3));
label_153084:
    // 0x153084: 0x3e00008  jr          $ra
label_153088:
    if (ctx->pc == 0x153088u) {
        ctx->pc = 0x15308Cu;
        goto label_15308c;
    }
    ctx->pc = 0x153084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15308Cu;
label_15308c:
    // 0x15308c: 0x0  nop
    ctx->pc = 0x15308cu;
    // NOP
label_153090:
    // 0x153090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153094:
    // 0x153094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153098:
    // 0x153098: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x153098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15309c:
    // 0x15309c: 0xa4600200  sh          $zero, 0x200($v1)
    ctx->pc = 0x15309cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 512), (uint16_t)GPR_U32(ctx, 0));
label_1530a0:
    // 0x1530a0: 0xa4600202  sh          $zero, 0x202($v1)
    ctx->pc = 0x1530a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 514), (uint16_t)GPR_U32(ctx, 0));
label_1530a4:
    // 0x1530a4: 0x0  nop
    ctx->pc = 0x1530a4u;
    // NOP
label_1530a8:
    // 0x1530a8: 0x0  nop
    ctx->pc = 0x1530a8u;
    // NOP
label_1530ac:
    // 0x1530ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1530acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1530b0:
    // 0x1530b0: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x1530b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_1530b4:
    // 0x1530b4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_1530b8:
    if (ctx->pc == 0x1530B8u) {
        ctx->pc = 0x1530B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530B4u;
        // 0x1530b8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1530BCu;
        goto label_1530bc;
    }
    ctx->pc = 0x1530B4u;
    {
        const bool branch_taken_0x1530b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1530B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530B4u;
        // 0x1530b8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1530b4) {
            ctx->pc = 0x153098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153098;
        }
    }
    ctx->pc = 0x1530BCu;
label_1530bc:
    // 0x1530bc: 0xa480027c  sh          $zero, 0x27C($a0)
    ctx->pc = 0x1530bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 636), (uint16_t)GPR_U32(ctx, 0));
label_1530c0:
    // 0x1530c0: 0x3e00008  jr          $ra
label_1530c4:
    if (ctx->pc == 0x1530C4u) {
        ctx->pc = 0x1530C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530C0u;
        // 0x1530c4: 0xa480027e  sh          $zero, 0x27E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 638), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1530C8u;
        goto label_1530c8;
    }
    ctx->pc = 0x1530C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1530C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530C0u;
        // 0x1530c4: 0xa480027e  sh          $zero, 0x27E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 638), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1530C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1530C8u;
label_1530c8:
    // 0x1530c8: 0x0  nop
    ctx->pc = 0x1530c8u;
    // NOP
label_1530cc:
    // 0x1530cc: 0x0  nop
    ctx->pc = 0x1530ccu;
    // NOP
label_1530d0:
    // 0x1530d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1530d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1530d4:
    // 0x1530d4: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x1530d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
label_1530d8:
    // 0x1530d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1530d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1530dc:
    // 0x1530dc: 0x248459e0  addiu       $a0, $a0, 0x59E0
    ctx->pc = 0x1530dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23008));
label_1530e0:
    // 0x1530e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1530e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1530e4:
    // 0x1530e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1530e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1530e8:
    // 0x1530e8: 0xaf8085d4  sw          $zero, -0x7A2C($gp)
    ctx->pc = 0x1530e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936020), GPR_U32(ctx, 0));
label_1530ec:
    // 0x1530ec: 0xc041608  jal         func_105820
label_1530f0:
    if (ctx->pc == 0x1530F0u) {
        ctx->pc = 0x1530F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1530ECu;
        // 0x1530f0: 0xaf8085d8  sw          $zero, -0x7A28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1530F4u;
        goto label_1530f4;
    }
    ctx->pc = 0x1530ECu;
    SET_GPR_U32(ctx, 31, 0x1530F4u);
    ctx->pc = 0x1530F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530ECu;
    // 0x1530f0: 0xaf8085d8  sw          $zero, -0x7A28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936024), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105820u, 0x1530ECu, 0x1530F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530F4u;
label_1530f4:
    // 0x1530f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1530f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1530f8:
    // 0x1530f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1530f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1530fc:
    // 0x1530fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1530fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153100:
    // 0x153100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x153100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153104:
    // 0x153104: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x153104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_153108:
    // 0x153108: 0x240800b8  addiu       $t0, $zero, 0xB8
    ctx->pc = 0x153108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_15310c:
    // 0x15310c: 0xc0603d4  jal         func_180F50
label_153110:
    if (ctx->pc == 0x153110u) {
        ctx->pc = 0x153110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15310Cu;
        // 0x153110: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153114u;
        goto label_153114;
    }
    ctx->pc = 0x15310Cu;
    SET_GPR_U32(ctx, 31, 0x153114u);
    ctx->pc = 0x153110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15310Cu;
    // 0x153110: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x153114u;
label_153114:
    // 0x153114: 0xff828618  sd          $v0, -0x79E8($gp)
    ctx->pc = 0x153114u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U64(ctx, 2));
label_153118:
    // 0x153118: 0xc070038  jal         func_1C00E0
label_15311c:
    if (ctx->pc == 0x15311Cu) {
        ctx->pc = 0x15311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153118u;
        // 0x15311c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153120u;
        goto label_153120;
    }
    ctx->pc = 0x153118u;
    SET_GPR_U32(ctx, 31, 0x153120u);
    ctx->pc = 0x15311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153118u;
    // 0x15311c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x153120u;
label_153120:
    // 0x153120: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x153120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
label_153124:
    // 0x153124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153128:
    // 0x153128: 0xc041608  jal         func_105820
label_15312c:
    if (ctx->pc == 0x15312Cu) {
        ctx->pc = 0x15312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153128u;
        // 0x15312c: 0x248459f0  addiu       $a0, $a0, 0x59F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153130u;
        goto label_153130;
    }
    ctx->pc = 0x153128u;
    SET_GPR_U32(ctx, 31, 0x153130u);
    ctx->pc = 0x15312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153128u;
    // 0x15312c: 0x248459f0  addiu       $a0, $a0, 0x59F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105820u, 0x153128u, 0x153130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153130u;
label_153130:
    // 0x153130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153134:
    // 0x153134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x153134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153138:
    // 0x153138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15313c:
    // 0x15313c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15313cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153140:
    // 0x153140: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x153140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_153144:
    // 0x153144: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x153144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_153148:
    // 0x153148: 0xc0603d4  jal         func_180F50
label_15314c:
    if (ctx->pc == 0x15314Cu) {
        ctx->pc = 0x15314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153148u;
        // 0x15314c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153150u;
        goto label_153150;
    }
    ctx->pc = 0x153148u;
    SET_GPR_U32(ctx, 31, 0x153150u);
    ctx->pc = 0x15314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153148u;
    // 0x15314c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x153150u;
label_153150:
    // 0x153150: 0xff828610  sd          $v0, -0x79F0($gp)
    ctx->pc = 0x153150u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936080), GPR_U64(ctx, 2));
label_153154:
    // 0x153154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x153154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153158:
    // 0x153158: 0xc06064c  jal         func_181930
label_15315c:
    if (ctx->pc == 0x15315Cu) {
        ctx->pc = 0x15315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153158u;
        // 0x15315c: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
        ctx->in_delay_slot = false;
        ctx->pc = 0x153160u;
        goto label_153160;
    }
    ctx->pc = 0x153158u;
    SET_GPR_U32(ctx, 31, 0x153160u);
    ctx->pc = 0x15315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153158u;
    // 0x15315c: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    { ctx->pc = 0x181930; return; }
    ctx->pc = 0x153160u;
label_153160:
    // 0x153160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_153164:
    // 0x153164: 0xc070038  jal         func_1C00E0
label_153168:
    if (ctx->pc == 0x153168u) {
        ctx->pc = 0x153168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153164u;
        // 0x153168: 0xff828608  sd          $v0, -0x79F8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936072), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15316Cu;
        goto label_15316c;
    }
    ctx->pc = 0x153164u;
    SET_GPR_U32(ctx, 31, 0x15316Cu);
    ctx->pc = 0x153168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153164u;
    // 0x153168: 0xff828608  sd          $v0, -0x79F8($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936072), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x15316Cu;
label_15316c:
    // 0x15316c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_153170:
    // 0x153170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_153174:
    // 0x153174: 0x3e00008  jr          $ra
label_153178:
    if (ctx->pc == 0x153178u) {
        ctx->pc = 0x153178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153174u;
        // 0x153178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15317Cu;
        goto label_15317c;
    }
    ctx->pc = 0x153174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153174u;
        // 0x153178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15317Cu;
label_15317c:
    // 0x15317c: 0x0  nop
    ctx->pc = 0x15317cu;
    // NOP
label_153180:
    // 0x153180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_153184:
    // 0x153184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153188:
    // 0x153188: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15318c:
    // 0x15318c: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x15318cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_153190:
    // 0x153190: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_153194:
    // 0x153194: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x153194u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_153198:
    // 0x153198: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x153198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_15319c:
    // 0x15319c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x15319cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1531a0:
    // 0x1531a0: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_1531a4:
    if (ctx->pc == 0x1531A4u) {
        ctx->pc = 0x1531A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531A0u;
        // 0x1531a4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1531A8u;
        goto label_1531a8;
    }
    ctx->pc = 0x1531A0u;
    {
        const bool branch_taken_0x1531a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1531A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531A0u;
        // 0x1531a4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531a0) {
            ctx->pc = 0x1531CCu;
            goto label_1531cc;
        }
    }
    ctx->pc = 0x1531A8u;
label_1531a8:
    // 0x1531a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1531ac:
    if (ctx->pc == 0x1531ACu) {
        ctx->pc = 0x1531ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531A8u;
        // 0x1531ac: 0x2ca20100  sltiu       $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1531B0u;
        goto label_1531b0;
    }
    ctx->pc = 0x1531A8u;
    {
        const bool branch_taken_0x1531a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531A8u;
        // 0x1531ac: 0x2ca20100  sltiu       $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531a8) {
            ctx->pc = 0x1531B8u;
            goto label_1531b8;
        }
    }
    ctx->pc = 0x1531B0u;
label_1531b0:
    // 0x1531b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1531b4:
    if (ctx->pc == 0x1531B4u) {
        ctx->pc = 0x1531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531B0u;
        // 0x1531b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1531B8u;
        goto label_1531b8;
    }
    ctx->pc = 0x1531B0u;
    {
        const bool branch_taken_0x1531b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531B0u;
        // 0x1531b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531b0) {
            ctx->pc = 0x1531E4u;
            goto label_1531e4;
        }
    }
    ctx->pc = 0x1531B8u;
label_1531b8:
    // 0x1531b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1531bc:
    if (ctx->pc == 0x1531BCu) {
        ctx->pc = 0x1531C0u;
        goto label_1531c0;
    }
    ctx->pc = 0x1531B8u;
    {
        const bool branch_taken_0x1531b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531b8) {
            ctx->pc = 0x1531E0u;
            goto label_1531e0;
        }
    }
    ctx->pc = 0x1531C0u;
label_1531c0:
    // 0x1531c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1531c4:
    // 0x1531c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1531c8:
    if (ctx->pc == 0x1531C8u) {
        ctx->pc = 0x1531C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531C4u;
        // 0x1531c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1531CCu;
        goto label_1531cc;
    }
    ctx->pc = 0x1531C4u;
    {
        const bool branch_taken_0x1531c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531C4u;
        // 0x1531c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531c4) {
            ctx->pc = 0x1531E0u;
            goto label_1531e0;
        }
    }
    ctx->pc = 0x1531CCu;
label_1531cc:
    // 0x1531cc: 0x2ca20019  sltiu       $v0, $a1, 0x19
    ctx->pc = 0x1531ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_1531d0:
    // 0x1531d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1531d4:
    if (ctx->pc == 0x1531D4u) {
        ctx->pc = 0x1531D8u;
        goto label_1531d8;
    }
    ctx->pc = 0x1531D0u;
    {
        const bool branch_taken_0x1531d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531d0) {
            ctx->pc = 0x1531E0u;
            goto label_1531e0;
        }
    }
    ctx->pc = 0x1531D8u;
label_1531d8:
    // 0x1531d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1531dc:
    // 0x1531dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1531dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1531e0:
    // 0x1531e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1531e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1531e4:
    // 0x1531e4: 0x108600f2  beq         $a0, $a2, . + 4 + (0xF2 << 2)
label_1531e8:
    if (ctx->pc == 0x1531E8u) {
        ctx->pc = 0x1531E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531E4u;
        // 0x1531e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1531ECu;
        goto label_1531ec;
    }
    ctx->pc = 0x1531E4u;
    {
        const bool branch_taken_0x1531e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1531E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531E4u;
        // 0x1531e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531e4) {
            ctx->pc = 0x1535B0u;
            { ctx->pc = 0x1535b0; return; }
        }
    }
    ctx->pc = 0x1531ECu;
label_1531ec:
    // 0x1531ec: 0x10820078  beq         $a0, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1531f0u;
    return;
}

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


void FUN_0019b850_part505(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2919d0u: goto label_2919d0;
        case 0x2919d4u: goto label_2919d4;
        case 0x2919d8u: goto label_2919d8;
        case 0x2919dcu: goto label_2919dc;
        case 0x2919e0u: goto label_2919e0;
        case 0x2919e4u: goto label_2919e4;
        case 0x2919e8u: goto label_2919e8;
        case 0x2919ecu: goto label_2919ec;
        case 0x2919f0u: goto label_2919f0;
        case 0x2919f4u: goto label_2919f4;
        case 0x2919f8u: goto label_2919f8;
        case 0x2919fcu: goto label_2919fc;
        case 0x291a00u: goto label_291a00;
        case 0x291a04u: goto label_291a04;
        case 0x291a08u: goto label_291a08;
        case 0x291a0cu: goto label_291a0c;
        case 0x291a10u: goto label_291a10;
        case 0x291a14u: goto label_291a14;
        case 0x291a18u: goto label_291a18;
        case 0x291a1cu: goto label_291a1c;
        case 0x291a20u: goto label_291a20;
        case 0x291a24u: goto label_291a24;
        case 0x291a28u: goto label_291a28;
        case 0x291a2cu: goto label_291a2c;
        case 0x291a30u: goto label_291a30;
        case 0x291a34u: goto label_291a34;
        case 0x291a38u: goto label_291a38;
        case 0x291a3cu: goto label_291a3c;
        case 0x291a40u: goto label_291a40;
        case 0x291a44u: goto label_291a44;
        case 0x291a48u: goto label_291a48;
        case 0x291a4cu: goto label_291a4c;
        case 0x291a50u: goto label_291a50;
        case 0x291a54u: goto label_291a54;
        case 0x291a58u: goto label_291a58;
        case 0x291a5cu: goto label_291a5c;
        case 0x291a60u: goto label_291a60;
        case 0x291a64u: goto label_291a64;
        case 0x291a68u: goto label_291a68;
        case 0x291a6cu: goto label_291a6c;
        case 0x291a70u: goto label_291a70;
        case 0x291a74u: goto label_291a74;
        case 0x291a78u: goto label_291a78;
        case 0x291a7cu: goto label_291a7c;
        case 0x291a80u: goto label_291a80;
        case 0x291a84u: goto label_291a84;
        case 0x291a88u: goto label_291a88;
        case 0x291a8cu: goto label_291a8c;
        case 0x291a90u: goto label_291a90;
        case 0x291a94u: goto label_291a94;
        case 0x291a98u: goto label_291a98;
        case 0x291a9cu: goto label_291a9c;
        case 0x291aa0u: goto label_291aa0;
        case 0x291aa4u: goto label_291aa4;
        case 0x291aa8u: goto label_291aa8;
        case 0x291aacu: goto label_291aac;
        case 0x291ab0u: goto label_291ab0;
        case 0x291ab4u: goto label_291ab4;
        case 0x291ab8u: goto label_291ab8;
        case 0x291abcu: goto label_291abc;
        case 0x291ac0u: goto label_291ac0;
        case 0x291ac4u: goto label_291ac4;
        case 0x291ac8u: goto label_291ac8;
        case 0x291accu: goto label_291acc;
        case 0x291ad0u: goto label_291ad0;
        case 0x291ad4u: goto label_291ad4;
        case 0x291ad8u: goto label_291ad8;
        case 0x291adcu: goto label_291adc;
        case 0x291ae0u: goto label_291ae0;
        case 0x291ae4u: goto label_291ae4;
        case 0x291ae8u: goto label_291ae8;
        case 0x291aecu: goto label_291aec;
        case 0x291af0u: goto label_291af0;
        case 0x291af4u: goto label_291af4;
        case 0x291af8u: goto label_291af8;
        case 0x291afcu: goto label_291afc;
        case 0x291b00u: goto label_291b00;
        case 0x291b04u: goto label_291b04;
        case 0x291b08u: goto label_291b08;
        case 0x291b0cu: goto label_291b0c;
        case 0x291b10u: goto label_291b10;
        case 0x291b14u: goto label_291b14;
        case 0x291b18u: goto label_291b18;
        case 0x291b1cu: goto label_291b1c;
        case 0x291b20u: goto label_291b20;
        case 0x291b24u: goto label_291b24;
        case 0x291b28u: goto label_291b28;
        case 0x291b2cu: goto label_291b2c;
        case 0x291b30u: goto label_291b30;
        case 0x291b34u: goto label_291b34;
        case 0x291b38u: goto label_291b38;
        case 0x291b3cu: goto label_291b3c;
        case 0x291b40u: goto label_291b40;
        case 0x291b44u: goto label_291b44;
        case 0x291b48u: goto label_291b48;
        case 0x291b4cu: goto label_291b4c;
        case 0x291b50u: goto label_291b50;
        case 0x291b54u: goto label_291b54;
        case 0x291b58u: goto label_291b58;
        case 0x291b5cu: goto label_291b5c;
        case 0x291b60u: goto label_291b60;
        case 0x291b64u: goto label_291b64;
        case 0x291b68u: goto label_291b68;
        case 0x291b6cu: goto label_291b6c;
        case 0x291b70u: goto label_291b70;
        case 0x291b74u: goto label_291b74;
        case 0x291b78u: goto label_291b78;
        case 0x291b7cu: goto label_291b7c;
        case 0x291b80u: goto label_291b80;
        case 0x291b84u: goto label_291b84;
        case 0x291b88u: goto label_291b88;
        case 0x291b8cu: goto label_291b8c;
        case 0x291b90u: goto label_291b90;
        case 0x291b94u: goto label_291b94;
        case 0x291b98u: goto label_291b98;
        case 0x291b9cu: goto label_291b9c;
        case 0x291ba0u: goto label_291ba0;
        case 0x291ba4u: goto label_291ba4;
        case 0x291ba8u: goto label_291ba8;
        case 0x291bacu: goto label_291bac;
        case 0x291bb0u: goto label_291bb0;
        case 0x291bb4u: goto label_291bb4;
        case 0x291bb8u: goto label_291bb8;
        case 0x291bbcu: goto label_291bbc;
        case 0x291bc0u: goto label_291bc0;
        case 0x291bc4u: goto label_291bc4;
        case 0x291bc8u: goto label_291bc8;
        case 0x291bccu: goto label_291bcc;
        case 0x291bd0u: goto label_291bd0;
        case 0x291bd4u: goto label_291bd4;
        case 0x291bd8u: goto label_291bd8;
        case 0x291bdcu: goto label_291bdc;
        case 0x291be0u: goto label_291be0;
        case 0x291be4u: goto label_291be4;
        case 0x291be8u: goto label_291be8;
        case 0x291becu: goto label_291bec;
        case 0x291bf0u: goto label_291bf0;
        case 0x291bf4u: goto label_291bf4;
        case 0x291bf8u: goto label_291bf8;
        case 0x291bfcu: goto label_291bfc;
        case 0x291c00u: goto label_291c00;
        case 0x291c04u: goto label_291c04;
        case 0x291c08u: goto label_291c08;
        case 0x291c0cu: goto label_291c0c;
        case 0x291c10u: goto label_291c10;
        case 0x291c14u: goto label_291c14;
        case 0x291c18u: goto label_291c18;
        case 0x291c1cu: goto label_291c1c;
        case 0x291c20u: goto label_291c20;
        case 0x291c24u: goto label_291c24;
        case 0x291c28u: goto label_291c28;
        case 0x291c2cu: goto label_291c2c;
        case 0x291c30u: goto label_291c30;
        case 0x291c34u: goto label_291c34;
        case 0x291c38u: goto label_291c38;
        case 0x291c3cu: goto label_291c3c;
        case 0x291c40u: goto label_291c40;
        case 0x291c44u: goto label_291c44;
        case 0x291c48u: goto label_291c48;
        case 0x291c4cu: goto label_291c4c;
        case 0x291c50u: goto label_291c50;
        case 0x291c54u: goto label_291c54;
        case 0x291c58u: goto label_291c58;
        case 0x291c5cu: goto label_291c5c;
        case 0x291c60u: goto label_291c60;
        case 0x291c64u: goto label_291c64;
        case 0x291c68u: goto label_291c68;
        case 0x291c6cu: goto label_291c6c;
        case 0x291c70u: goto label_291c70;
        case 0x291c74u: goto label_291c74;
        case 0x291c78u: goto label_291c78;
        case 0x291c7cu: goto label_291c7c;
        case 0x291c80u: goto label_291c80;
        case 0x291c84u: goto label_291c84;
        case 0x291c88u: goto label_291c88;
        case 0x291c8cu: goto label_291c8c;
        case 0x291c90u: goto label_291c90;
        case 0x291c94u: goto label_291c94;
        case 0x291c98u: goto label_291c98;
        case 0x291c9cu: goto label_291c9c;
        case 0x291ca0u: goto label_291ca0;
        case 0x291ca4u: goto label_291ca4;
        case 0x291ca8u: goto label_291ca8;
        case 0x291cacu: goto label_291cac;
        case 0x291cb0u: goto label_291cb0;
        case 0x291cb4u: goto label_291cb4;
        case 0x291cb8u: goto label_291cb8;
        case 0x291cbcu: goto label_291cbc;
        case 0x291cc0u: goto label_291cc0;
        case 0x291cc4u: goto label_291cc4;
        case 0x291cc8u: goto label_291cc8;
        case 0x291cccu: goto label_291ccc;
        case 0x291cd0u: goto label_291cd0;
        case 0x291cd4u: goto label_291cd4;
        case 0x291cd8u: goto label_291cd8;
        case 0x291cdcu: goto label_291cdc;
        case 0x291ce0u: goto label_291ce0;
        case 0x291ce4u: goto label_291ce4;
        case 0x291ce8u: goto label_291ce8;
        case 0x291cecu: goto label_291cec;
        case 0x291cf0u: goto label_291cf0;
        case 0x291cf4u: goto label_291cf4;
        case 0x291cf8u: goto label_291cf8;
        case 0x291cfcu: goto label_291cfc;
        case 0x291d00u: goto label_291d00;
        case 0x291d04u: goto label_291d04;
        case 0x291d08u: goto label_291d08;
        case 0x291d0cu: goto label_291d0c;
        case 0x291d10u: goto label_291d10;
        case 0x291d14u: goto label_291d14;
        case 0x291d18u: goto label_291d18;
        case 0x291d1cu: goto label_291d1c;
        case 0x291d20u: goto label_291d20;
        case 0x291d24u: goto label_291d24;
        case 0x291d28u: goto label_291d28;
        case 0x291d2cu: goto label_291d2c;
        case 0x291d30u: goto label_291d30;
        case 0x291d34u: goto label_291d34;
        case 0x291d38u: goto label_291d38;
        case 0x291d3cu: goto label_291d3c;
        case 0x291d40u: goto label_291d40;
        case 0x291d44u: goto label_291d44;
        case 0x291d48u: goto label_291d48;
        case 0x291d4cu: goto label_291d4c;
        case 0x291d50u: goto label_291d50;
        case 0x291d54u: goto label_291d54;
        case 0x291d58u: goto label_291d58;
        case 0x291d5cu: goto label_291d5c;
        case 0x291d60u: goto label_291d60;
        case 0x291d64u: goto label_291d64;
        case 0x291d68u: goto label_291d68;
        case 0x291d6cu: goto label_291d6c;
        case 0x291d70u: goto label_291d70;
        case 0x291d74u: goto label_291d74;
        case 0x291d78u: goto label_291d78;
        case 0x291d7cu: goto label_291d7c;
        case 0x291d80u: goto label_291d80;
        case 0x291d84u: goto label_291d84;
        case 0x291d88u: goto label_291d88;
        case 0x291d8cu: goto label_291d8c;
        case 0x291d90u: goto label_291d90;
        case 0x291d94u: goto label_291d94;
        case 0x291d98u: goto label_291d98;
        case 0x291d9cu: goto label_291d9c;
        case 0x291da0u: goto label_291da0;
        case 0x291da4u: goto label_291da4;
        case 0x291da8u: goto label_291da8;
        case 0x291dacu: goto label_291dac;
        case 0x291db0u: goto label_291db0;
        case 0x291db4u: goto label_291db4;
        case 0x291db8u: goto label_291db8;
        case 0x291dbcu: goto label_291dbc;
        case 0x291dc0u: goto label_291dc0;
        case 0x291dc4u: goto label_291dc4;
        case 0x291dc8u: goto label_291dc8;
        case 0x291dccu: goto label_291dcc;
        case 0x291dd0u: goto label_291dd0;
        case 0x291dd4u: goto label_291dd4;
        case 0x291dd8u: goto label_291dd8;
        case 0x291ddcu: goto label_291ddc;
        case 0x291de0u: goto label_291de0;
        case 0x291de4u: goto label_291de4;
        case 0x291de8u: goto label_291de8;
        case 0x291decu: goto label_291dec;
        case 0x291df0u: goto label_291df0;
        case 0x291df4u: goto label_291df4;
        case 0x291df8u: goto label_291df8;
        case 0x291dfcu: goto label_291dfc;
        case 0x291e00u: goto label_291e00;
        case 0x291e04u: goto label_291e04;
        case 0x291e08u: goto label_291e08;
        case 0x291e0cu: goto label_291e0c;
        case 0x291e10u: goto label_291e10;
        case 0x291e14u: goto label_291e14;
        case 0x291e18u: goto label_291e18;
        case 0x291e1cu: goto label_291e1c;
        case 0x291e20u: goto label_291e20;
        case 0x291e24u: goto label_291e24;
        case 0x291e28u: goto label_291e28;
        case 0x291e2cu: goto label_291e2c;
        case 0x291e30u: goto label_291e30;
        case 0x291e34u: goto label_291e34;
        case 0x291e38u: goto label_291e38;
        case 0x291e3cu: goto label_291e3c;
        case 0x291e40u: goto label_291e40;
        case 0x291e44u: goto label_291e44;
        case 0x291e48u: goto label_291e48;
        case 0x291e4cu: goto label_291e4c;
        case 0x291e50u: goto label_291e50;
        case 0x291e54u: goto label_291e54;
        case 0x291e58u: goto label_291e58;
        case 0x291e5cu: goto label_291e5c;
        case 0x291e60u: goto label_291e60;
        case 0x291e64u: goto label_291e64;
        case 0x291e68u: goto label_291e68;
        case 0x291e6cu: goto label_291e6c;
        case 0x291e70u: goto label_291e70;
        case 0x291e74u: goto label_291e74;
        case 0x291e78u: goto label_291e78;
        case 0x291e7cu: goto label_291e7c;
        case 0x291e80u: goto label_291e80;
        case 0x291e84u: goto label_291e84;
        case 0x291e88u: goto label_291e88;
        case 0x291e8cu: goto label_291e8c;
        case 0x291e90u: goto label_291e90;
        case 0x291e94u: goto label_291e94;
        case 0x291e98u: goto label_291e98;
        case 0x291e9cu: goto label_291e9c;
        case 0x291ea0u: goto label_291ea0;
        case 0x291ea4u: goto label_291ea4;
        case 0x291ea8u: goto label_291ea8;
        case 0x291eacu: goto label_291eac;
        case 0x291eb0u: goto label_291eb0;
        case 0x291eb4u: goto label_291eb4;
        case 0x291eb8u: goto label_291eb8;
        case 0x291ebcu: goto label_291ebc;
        case 0x291ec0u: goto label_291ec0;
        case 0x291ec4u: goto label_291ec4;
        case 0x291ec8u: goto label_291ec8;
        case 0x291eccu: goto label_291ecc;
        case 0x291ed0u: goto label_291ed0;
        case 0x291ed4u: goto label_291ed4;
        case 0x291ed8u: goto label_291ed8;
        case 0x291edcu: goto label_291edc;
        case 0x291ee0u: goto label_291ee0;
        case 0x291ee4u: goto label_291ee4;
        case 0x291ee8u: goto label_291ee8;
        case 0x291eecu: goto label_291eec;
        case 0x291ef0u: goto label_291ef0;
        case 0x291ef4u: goto label_291ef4;
        case 0x291ef8u: goto label_291ef8;
        case 0x291efcu: goto label_291efc;
        case 0x291f00u: goto label_291f00;
        case 0x291f04u: goto label_291f04;
        case 0x291f08u: goto label_291f08;
        case 0x291f0cu: goto label_291f0c;
        case 0x291f10u: goto label_291f10;
        case 0x291f14u: goto label_291f14;
        case 0x291f18u: goto label_291f18;
        case 0x291f1cu: goto label_291f1c;
        case 0x291f20u: goto label_291f20;
        case 0x291f24u: goto label_291f24;
        case 0x291f28u: goto label_291f28;
        case 0x291f2cu: goto label_291f2c;
        case 0x291f30u: goto label_291f30;
        case 0x291f34u: goto label_291f34;
        case 0x291f38u: goto label_291f38;
        case 0x291f3cu: goto label_291f3c;
        case 0x291f40u: goto label_291f40;
        case 0x291f44u: goto label_291f44;
        case 0x291f48u: goto label_291f48;
        case 0x291f4cu: goto label_291f4c;
        case 0x291f50u: goto label_291f50;
        case 0x291f54u: goto label_291f54;
        case 0x291f58u: goto label_291f58;
        case 0x291f5cu: goto label_291f5c;
        case 0x291f60u: goto label_291f60;
        case 0x291f64u: goto label_291f64;
        case 0x291f68u: goto label_291f68;
        case 0x291f6cu: goto label_291f6c;
        case 0x291f70u: goto label_291f70;
        case 0x291f74u: goto label_291f74;
        case 0x291f78u: goto label_291f78;
        case 0x291f7cu: goto label_291f7c;
        case 0x291f80u: goto label_291f80;
        case 0x291f84u: goto label_291f84;
        case 0x291f88u: goto label_291f88;
        case 0x291f8cu: goto label_291f8c;
        case 0x291f90u: goto label_291f90;
        case 0x291f94u: goto label_291f94;
        case 0x291f98u: goto label_291f98;
        case 0x291f9cu: goto label_291f9c;
        case 0x291fa0u: goto label_291fa0;
        case 0x291fa4u: goto label_291fa4;
        case 0x291fa8u: goto label_291fa8;
        case 0x291facu: goto label_291fac;
        case 0x291fb0u: goto label_291fb0;
        case 0x291fb4u: goto label_291fb4;
        case 0x291fb8u: goto label_291fb8;
        case 0x291fbcu: goto label_291fbc;
        case 0x291fc0u: goto label_291fc0;
        case 0x291fc4u: goto label_291fc4;
        case 0x291fc8u: goto label_291fc8;
        case 0x291fccu: goto label_291fcc;
        case 0x291fd0u: goto label_291fd0;
        case 0x291fd4u: goto label_291fd4;
        case 0x291fd8u: goto label_291fd8;
        case 0x291fdcu: goto label_291fdc;
        case 0x291fe0u: goto label_291fe0;
        case 0x291fe4u: goto label_291fe4;
        case 0x291fe8u: goto label_291fe8;
        case 0x291fecu: goto label_291fec;
        case 0x291ff0u: goto label_291ff0;
        case 0x291ff4u: goto label_291ff4;
        case 0x291ff8u: goto label_291ff8;
        case 0x291ffcu: goto label_291ffc;
        case 0x292000u: goto label_292000;
        case 0x292004u: goto label_292004;
        case 0x292008u: goto label_292008;
        case 0x29200cu: goto label_29200c;
        case 0x292010u: goto label_292010;
        case 0x292014u: goto label_292014;
        case 0x292018u: goto label_292018;
        case 0x29201cu: goto label_29201c;
        case 0x292020u: goto label_292020;
        case 0x292024u: goto label_292024;
        case 0x292028u: goto label_292028;
        case 0x29202cu: goto label_29202c;
        case 0x292030u: goto label_292030;
        case 0x292034u: goto label_292034;
        case 0x292038u: goto label_292038;
        case 0x29203cu: goto label_29203c;
        case 0x292040u: goto label_292040;
        case 0x292044u: goto label_292044;
        case 0x292048u: goto label_292048;
        case 0x29204cu: goto label_29204c;
        case 0x292050u: goto label_292050;
        case 0x292054u: goto label_292054;
        case 0x292058u: goto label_292058;
        case 0x29205cu: goto label_29205c;
        case 0x292060u: goto label_292060;
        case 0x292064u: goto label_292064;
        case 0x292068u: goto label_292068;
        case 0x29206cu: goto label_29206c;
        case 0x292070u: goto label_292070;
        case 0x292074u: goto label_292074;
        case 0x292078u: goto label_292078;
        case 0x29207cu: goto label_29207c;
        case 0x292080u: goto label_292080;
        case 0x292084u: goto label_292084;
        case 0x292088u: goto label_292088;
        case 0x29208cu: goto label_29208c;
        case 0x292090u: goto label_292090;
        case 0x292094u: goto label_292094;
        case 0x292098u: goto label_292098;
        case 0x29209cu: goto label_29209c;
        case 0x2920a0u: goto label_2920a0;
        case 0x2920a4u: goto label_2920a4;
        case 0x2920a8u: goto label_2920a8;
        case 0x2920acu: goto label_2920ac;
        case 0x2920b0u: goto label_2920b0;
        case 0x2920b4u: goto label_2920b4;
        case 0x2920b8u: goto label_2920b8;
        case 0x2920bcu: goto label_2920bc;
        case 0x2920c0u: goto label_2920c0;
        case 0x2920c4u: goto label_2920c4;
        case 0x2920c8u: goto label_2920c8;
        case 0x2920ccu: goto label_2920cc;
        case 0x2920d0u: goto label_2920d0;
        case 0x2920d4u: goto label_2920d4;
        case 0x2920d8u: goto label_2920d8;
        case 0x2920dcu: goto label_2920dc;
        case 0x2920e0u: goto label_2920e0;
        case 0x2920e4u: goto label_2920e4;
        case 0x2920e8u: goto label_2920e8;
        case 0x2920ecu: goto label_2920ec;
        case 0x2920f0u: goto label_2920f0;
        case 0x2920f4u: goto label_2920f4;
        case 0x2920f8u: goto label_2920f8;
        case 0x2920fcu: goto label_2920fc;
        case 0x292100u: goto label_292100;
        case 0x292104u: goto label_292104;
        case 0x292108u: goto label_292108;
        case 0x29210cu: goto label_29210c;
        case 0x292110u: goto label_292110;
        case 0x292114u: goto label_292114;
        case 0x292118u: goto label_292118;
        case 0x29211cu: goto label_29211c;
        case 0x292120u: goto label_292120;
        case 0x292124u: goto label_292124;
        case 0x292128u: goto label_292128;
        case 0x29212cu: goto label_29212c;
        case 0x292130u: goto label_292130;
        case 0x292134u: goto label_292134;
        case 0x292138u: goto label_292138;
        case 0x29213cu: goto label_29213c;
        case 0x292140u: goto label_292140;
        case 0x292144u: goto label_292144;
        case 0x292148u: goto label_292148;
        case 0x29214cu: goto label_29214c;
        case 0x292150u: goto label_292150;
        case 0x292154u: goto label_292154;
        case 0x292158u: goto label_292158;
        case 0x29215cu: goto label_29215c;
        case 0x292160u: goto label_292160;
        case 0x292164u: goto label_292164;
        case 0x292168u: goto label_292168;
        case 0x29216cu: goto label_29216c;
        case 0x292170u: goto label_292170;
        case 0x292174u: goto label_292174;
        case 0x292178u: goto label_292178;
        case 0x29217cu: goto label_29217c;
        case 0x292180u: goto label_292180;
        case 0x292184u: goto label_292184;
        case 0x292188u: goto label_292188;
        case 0x29218cu: goto label_29218c;
        case 0x292190u: goto label_292190;
        case 0x292194u: goto label_292194;
        case 0x292198u: goto label_292198;
        case 0x29219cu: goto label_29219c;
        default: return;
    }

label_2919d0:
    // 0x2919d0: 0x62f2  tlt         $zero, $zero, 395
    ctx->pc = 0x2919d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2919d4:
    // 0x2919d4: 0xa8  .word       0x000000A8                   # mfsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2919d4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2919d8:
    // 0x2919d8: 0x53f30  tge         $zero, $a1, 252
    ctx->pc = 0x2919d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_2919dc:
    // 0x2919dc: 0x0  nop
    ctx->pc = 0x2919dcu;
    // NOP
label_2919e0:
    // 0x2919e0: 0x639a  .word       0x0000639A                   # div         $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919e0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2919e4:
    // 0x2919e4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x2919e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2919e8:
    // 0x2919e8: 0x9840  sll         $s3, $zero, 1
    ctx->pc = 0x2919e8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_2919ec:
    // 0x2919ec: 0x0  nop
    ctx->pc = 0x2919ecu;
    // NOP
label_2919f0:
    // 0x2919f0: 0x63ae  .word       0x000063AE                   # dsub        $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2919f4:
    // 0x2919f4: 0x90  .word       0x00000090                   # mfhi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919f4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2919f8:
    // 0x2919f8: 0x47fa0  .word       0x00047FA0                   # add         $t7, $zero, $a0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2919f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2919fc:
    // 0x2919fc: 0x0  nop
    ctx->pc = 0x2919fcu;
    // NOP
label_291a00:
    // 0x291a00: 0x643e  dsrl32      $t4, $zero, 16
    ctx->pc = 0x291a00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) >> (32 + 16));
label_291a04:
    // 0x291a04: 0x13  mtlo        $zero
    ctx->pc = 0x291a04u;
    ctx->lo = GPR_U64(ctx, 0);
label_291a08:
    // 0x291a08: 0x96d8  .word       0x000096D8                   # mult        $s2, $zero, $zero # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291a08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_291a0c:
    // 0x291a0c: 0x0  nop
    ctx->pc = 0x291a0cu;
    // NOP
label_291a10:
    // 0x291a10: 0x6451  .word       0x00006451                   # mthi        $zero # 00006440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a10u;
    ctx->hi = GPR_U64(ctx, 0);
label_291a14:
    // 0x291a14: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a14u;
    ctx->hi = GPR_U64(ctx, 0);
label_291a18:
    // 0x291a18: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x291a18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_291a1c:
    // 0x291a1c: 0x0  nop
    ctx->pc = 0x291a1cu;
    // NOP
label_291a20:
    // 0x291a20: 0x64e2  .word       0x000064E2                   # neg         $t4, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a20u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_291a24:
    // 0x291a24: 0x13  mtlo        $zero
    ctx->pc = 0x291a24u;
    ctx->lo = GPR_U64(ctx, 0);
label_291a28:
    // 0x291a28: 0x9584  .word       0x00009584                   # sllv        $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291a2c:
    // 0x291a2c: 0x0  nop
    ctx->pc = 0x291a2cu;
    // NOP
label_291a30:
    // 0x291a30: 0x64f5  .word       0x000064F5                   # INVALID     $zero, $zero, 0x64F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291A30 raw=0x000064F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291a34:
    // 0x291a34: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_291a38:
    if (ctx->pc == 0x291A38u) {
        ctx->pc = 0x291A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A34u;
        // 0x291a38: 0x23d00  sll         $a3, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A3Cu;
        goto label_291a3c;
    }
    ctx->pc = 0x291A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A34u;
        // 0x291a38: 0x23d00  sll         $a3, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291A3Cu;
label_291a3c:
    // 0x291a3c: 0x0  nop
    ctx->pc = 0x291a3cu;
    // NOP
label_291a40:
    // 0x291a40: 0x653d  .word       0x0000653D                   # INVALID     $zero, $zero, 0x653D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x291A40 raw=0x0000653D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291a44:
    // 0x291a44: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_291a48:
    if (ctx->pc == 0x291A48u) {
        ctx->pc = 0x291A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A44u;
        // 0x291a48: 0x23ea0  .word       0x00023EA0                   # add         $a3, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A4Cu;
        goto label_291a4c;
    }
    ctx->pc = 0x291A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A44u;
        // 0x291a48: 0x23ea0  .word       0x00023EA0                   # add         $a3, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291A4Cu;
label_291a4c:
    // 0x291a4c: 0x0  nop
    ctx->pc = 0x291a4cu;
    // NOP
label_291a50:
    // 0x291a50: 0x6585  .word       0x00006585                   # INVALID     $zero, $zero, 0x6585 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x291A50 raw=0x00006585"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291a54:
    // 0x291a54: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a54u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291a58:
    // 0x291a58: 0x28df0  tge         $zero, $v0, 567
    ctx->pc = 0x291a58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_291a5c:
    // 0x291a5c: 0x0  nop
    ctx->pc = 0x291a5cu;
    // NOP
label_291a60:
    // 0x291a60: 0x65d7  .word       0x000065D7                   # dsrav       $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a60u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291a64:
    // 0x291a64: 0x4d  break       0, 1
    ctx->pc = 0x291a64u;
    runtime->handleBreak(rdram, ctx);
label_291a68:
    // 0x291a68: 0x26690  .word       0x00026690                   # mfhi        $t4 # 00020680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a68u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_291a6c:
    // 0x291a6c: 0x0  nop
    ctx->pc = 0x291a6cu;
    // NOP
label_291a70:
    // 0x291a70: 0x6624  .word       0x00006624                   # and         $t4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a70u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291a74:
    // 0x291a74: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x291A74 raw=0x0000004E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291a78:
    // 0x291a78: 0x26bd0  .word       0x00026BD0                   # mfhi        $t5 # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a78u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_291a7c:
    // 0x291a7c: 0x0  nop
    ctx->pc = 0x291a7cu;
    // NOP
label_291a80:
    // 0x291a80: 0x6672  tlt         $zero, $zero, 409
    ctx->pc = 0x291a80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291a84:
    // 0x291a84: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a84u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291a88:
    // 0x291a88: 0x27e20  .word       0x00027E20                   # add         $t7, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_291a8c:
    // 0x291a8c: 0x0  nop
    ctx->pc = 0x291a8cu;
    // NOP
label_291a90:
    // 0x291a90: 0x66c2  srl         $t4, $zero, 27
    ctx->pc = 0x291a90u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 0), 27));
label_291a94:
    // 0x291a94: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a94u;
    ctx->lo = GPR_U64(ctx, 0);
label_291a98:
    // 0x291a98: 0x29790  .word       0x00029790                   # mfhi        $s2 # 00020780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291a98u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_291a9c:
    // 0x291a9c: 0x0  nop
    ctx->pc = 0x291a9cu;
    // NOP
label_291aa0:
    // 0x291aa0: 0x6715  .word       0x00006715                   # INVALID     $zero, $zero, 0x6715 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291aa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291AA0 raw=0x00006715"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291aa4:
    // 0x291aa4: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_291aa8:
    if (ctx->pc == 0x291AA8u) {
        ctx->pc = 0x291AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AA4u;
        // 0x291aa8: 0x23df0  tge         $zero, $v0, 247 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AACu;
        goto label_291aac;
    }
    ctx->pc = 0x291AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AA4u;
        // 0x291aa8: 0x23df0  tge         $zero, $v0, 247 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291AA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291AACu;
label_291aac:
    // 0x291aac: 0x0  nop
    ctx->pc = 0x291aacu;
    // NOP
label_291ab0:
    // 0x291ab0: 0x675d  .word       0x0000675D                   # dmultu      $zero, $zero # 00006740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291AB0 raw=0x0000675D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291ab4:
    // 0x291ab4: 0x93  .word       0x00000093                   # mtlo        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ab4u;
    ctx->lo = GPR_U64(ctx, 0);
label_291ab8:
    // 0x291ab8: 0x49340  sll         $s2, $a0, 13
    ctx->pc = 0x291ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_291abc:
    // 0x291abc: 0x0  nop
    ctx->pc = 0x291abcu;
    // NOP
label_291ac0:
    // 0x291ac0: 0x67f0  tge         $zero, $zero, 415
    ctx->pc = 0x291ac0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291ac4:
    // 0x291ac4: 0x13  mtlo        $zero
    ctx->pc = 0x291ac4u;
    ctx->lo = GPR_U64(ctx, 0);
label_291ac8:
    // 0x291ac8: 0x94bc  dsll32      $s2, $zero, 18
    ctx->pc = 0x291ac8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) << (32 + 18));
label_291acc:
    // 0x291acc: 0x0  nop
    ctx->pc = 0x291accu;
    // NOP
label_291ad0:
    // 0x291ad0: 0x6803  sra         $t5, $zero, 0
    ctx->pc = 0x291ad0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), 0));
label_291ad4:
    // 0x291ad4: 0x11  mthi        $zero
    ctx->pc = 0x291ad4u;
    ctx->hi = GPR_U64(ctx, 0);
label_291ad8:
    // 0x291ad8: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x291ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_291adc:
    // 0x291adc: 0x0  nop
    ctx->pc = 0x291adcu;
    // NOP
label_291ae0:
    // 0x291ae0: 0x6814  dsllv       $t5, $zero, $zero
    ctx->pc = 0x291ae0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291ae4:
    // 0x291ae4: 0x11  mthi        $zero
    ctx->pc = 0x291ae4u;
    ctx->hi = GPR_U64(ctx, 0);
label_291ae8:
    // 0x291ae8: 0x8440  sll         $s0, $zero, 17
    ctx->pc = 0x291ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_291aec:
    // 0x291aec: 0x0  nop
    ctx->pc = 0x291aecu;
    // NOP
label_291af0:
    // 0x291af0: 0x6825  move        $t5, $zero
    ctx->pc = 0x291af0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291af4:
    // 0x291af4: 0x12  mflo        $zero
    ctx->pc = 0x291af4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291af8:
    // 0x291af8: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x291af8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_291afc:
    // 0x291afc: 0x0  nop
    ctx->pc = 0x291afcu;
    // NOP
label_291b00:
    // 0x291b00: 0x6837  .word       0x00006837                   # INVALID     $zero, $zero, 0x6837 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x291B00 raw=0x00006837"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b04:
    // 0x291b04: 0x12  mflo        $zero
    ctx->pc = 0x291b04u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291b08:
    // 0x291b08: 0x8840  sll         $s1, $zero, 1
    ctx->pc = 0x291b08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_291b0c:
    // 0x291b0c: 0x0  nop
    ctx->pc = 0x291b0cu;
    // NOP
label_291b10:
    // 0x291b10: 0x6849  .word       0x00006849                   # jalr        $t5, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_291b14:
    if (ctx->pc == 0x291B14u) {
        ctx->pc = 0x291B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B10u;
        // 0x291b14: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B18u;
        goto label_291b18;
    }
    ctx->pc = 0x291B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x291B18u);
        ctx->pc = 0x291B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B10u;
        // 0x291b14: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291B10u, 0x291B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291B18u;
label_291b18:
    // 0x291b18: 0x10440  sll         $zero, $at, 17
    ctx->pc = 0x291b18u;
    
label_291b1c:
    // 0x291b1c: 0x0  nop
    ctx->pc = 0x291b1cu;
    // NOP
label_291b20:
    // 0x291b20: 0x686a  .word       0x0000686A                   # slt         $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b20u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291b24:
    // 0x291b24: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291b24u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291b28:
    // 0x291b28: 0x10440  sll         $zero, $at, 17
    ctx->pc = 0x291b28u;
    
label_291b2c:
    // 0x291b2c: 0x0  nop
    ctx->pc = 0x291b2cu;
    // NOP
label_291b30:
    // 0x291b30: 0x688b  .word       0x0000688B                   # movn        $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b30u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291b34:
    // 0x291b34: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291B34 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b38:
    // 0x291b38: 0xa200  sll         $s4, $zero, 8
    ctx->pc = 0x291b38u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_291b3c:
    // 0x291b3c: 0x0  nop
    ctx->pc = 0x291b3cu;
    // NOP
label_291b40:
    // 0x291b40: 0x68a0  .word       0x000068A0                   # add         $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_291b44:
    // 0x291b44: 0x35  .word       0x00000035                   # INVALID     $zero, $zero, 0x35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291B44 raw=0x00000035"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b48:
    // 0x291b48: 0x1a5f0  tge         $zero, $at, 663
    ctx->pc = 0x291b48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291b4c:
    // 0x291b4c: 0x0  nop
    ctx->pc = 0x291b4cu;
    // NOP
label_291b50:
    // 0x291b50: 0x68d5  .word       0x000068D5                   # INVALID     $zero, $zero, 0x68D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291B50 raw=0x000068D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b54:
    // 0x291b54: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x291b54u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291b58:
    // 0x291b58: 0x19b70  tge         $zero, $at, 621
    ctx->pc = 0x291b58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291b5c:
    // 0x291b5c: 0x0  nop
    ctx->pc = 0x291b5cu;
    // NOP
label_291b60:
    // 0x291b60: 0x6909  .word       0x00006909                   # jalr        $t5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_291b64:
    if (ctx->pc == 0x291B64u) {
        ctx->pc = 0x291B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B60u;
        // 0x291b64: 0x1d  dmultu      $zero, $zero (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291B64 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B68u;
        goto label_291b68;
    }
    ctx->pc = 0x291B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x291B68u);
        ctx->pc = 0x291B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B60u;
        // 0x291b64: 0x1d  dmultu      $zero, $zero (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291B64 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291B60u, 0x291B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291B68u;
label_291b68:
    // 0x291b68: 0xe290  .word       0x0000E290                   # mfhi        $gp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b68u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_291b6c:
    // 0x291b6c: 0x0  nop
    ctx->pc = 0x291b6cu;
    // NOP
label_291b70:
    // 0x291b70: 0x6926  .word       0x00006926                   # xor         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_291b74:
    // 0x291b74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x291B74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b78:
    // 0x291b78: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x291b78u;
    
label_291b7c:
    // 0x291b7c: 0x0  nop
    ctx->pc = 0x291b7cu;
    // NOP
label_291b80:
    // 0x291b80: 0x6927  .word       0x00006927                   # not         $t5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b80u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291b84:
    // 0x291b84: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x291b84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_291b88:
    // 0x291b88: 0x175a0  .word       0x000175A0                   # add         $t6, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_291b8c:
    // 0x291b8c: 0x0  nop
    ctx->pc = 0x291b8cu;
    // NOP
label_291b90:
    // 0x291b90: 0x6956  .word       0x00006956                   # dsrlv       $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291b94:
    // 0x291b94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291b94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x291B94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291b98:
    // 0x291b98: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x291b98u;
    
label_291b9c:
    // 0x291b9c: 0x0  nop
    ctx->pc = 0x291b9cu;
    // NOP
label_291ba0:
    // 0x291ba0: 0x6957  .word       0x00006957                   # dsrav       $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ba0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291ba4:
    // 0x291ba4: 0x52  .word       0x00000052                   # mflo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ba4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291ba8:
    // 0x291ba8: 0x28e60  .word       0x00028E60                   # add         $s1, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ba8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_291bac:
    // 0x291bac: 0x0  nop
    ctx->pc = 0x291bacu;
    // NOP
label_291bb0:
    // 0x291bb0: 0x69a9  .word       0x000069A9                   # mtsa        $zero # 00006980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291bb0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_291bb4:
    // 0x291bb4: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x291bb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_291bb8:
    // 0x291bb8: 0x1be10  .word       0x0001BE10                   # mfhi        $s7 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291bb8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_291bbc:
    // 0x291bbc: 0x0  nop
    ctx->pc = 0x291bbcu;
    // NOP
label_291bc0:
    // 0x291bc0: 0x69e1  .word       0x000069E1                   # addu        $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291bc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291bc4:
    // 0x291bc4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291bc4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291bc8:
    // 0x291bc8: 0x10440  sll         $zero, $at, 17
    ctx->pc = 0x291bc8u;
    
label_291bcc:
    // 0x291bcc: 0x0  nop
    ctx->pc = 0x291bccu;
    // NOP
label_291bd0:
    // 0x291bd0: 0x6a02  srl         $t5, $zero, 8
    ctx->pc = 0x291bd0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_291bd4:
    // 0x291bd4: 0x11  mthi        $zero
    ctx->pc = 0x291bd4u;
    ctx->hi = GPR_U64(ctx, 0);
label_291bd8:
    // 0x291bd8: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291bd8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_291bdc:
    // 0x291bdc: 0x0  nop
    ctx->pc = 0x291bdcu;
    // NOP
label_291be0:
    // 0x291be0: 0x6a13  .word       0x00006A13                   # mtlo        $zero # 00006A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291be0u;
    ctx->lo = GPR_U64(ctx, 0);
label_291be4:
    // 0x291be4: 0x11  mthi        $zero
    ctx->pc = 0x291be4u;
    ctx->hi = GPR_U64(ctx, 0);
label_291be8:
    // 0x291be8: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291be8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_291bec:
    // 0x291bec: 0x0  nop
    ctx->pc = 0x291becu;
    // NOP
label_291bf0:
    // 0x291bf0: 0x6a24  .word       0x00006A24                   # and         $t5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291bf0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291bf4:
    // 0x291bf4: 0x12  mflo        $zero
    ctx->pc = 0x291bf4u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291bf8:
    // 0x291bf8: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x291bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_291bfc:
    // 0x291bfc: 0x0  nop
    ctx->pc = 0x291bfcu;
    // NOP
label_291c00:
    // 0x291c00: 0x6a36  tne         $zero, $zero, 424
    ctx->pc = 0x291c00u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291c04:
    // 0x291c04: 0x12  mflo        $zero
    ctx->pc = 0x291c04u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_291c08:
    // 0x291c08: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x291c08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_291c0c:
    // 0x291c0c: 0x0  nop
    ctx->pc = 0x291c0cu;
    // NOP
label_291c10:
    // 0x291c10: 0x6a48  .word       0x00006A48                   # jr          $zero # 00006A40 <InstrIdType: CPU_SPECIAL>
label_291c14:
    if (ctx->pc == 0x291C14u) {
        ctx->pc = 0x291C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C10u;
        // 0x291c14: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C18u;
        goto label_291c18;
    }
    ctx->pc = 0x291C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x291C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C10u;
        // 0x291c14: 0x21  addu        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291C10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x291C18u;
label_291c18:
    // 0x291c18: 0x10510  .word       0x00010510                   # mfhi        $zero # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291c1c:
    // 0x291c1c: 0x0  nop
    ctx->pc = 0x291c1cu;
    // NOP
label_291c20:
    // 0x291c20: 0x6a69  .word       0x00006A69                   # mtsa        $zero # 00006A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291c20u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_291c24:
    // 0x291c24: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291c24u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291c28:
    // 0x291c28: 0x10510  .word       0x00010510                   # mfhi        $zero # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c28u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291c2c:
    // 0x291c2c: 0x0  nop
    ctx->pc = 0x291c2cu;
    // NOP
label_291c30:
    // 0x291c30: 0x6a8a  .word       0x00006A8A                   # movz        $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c30u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291c34:
    // 0x291c34: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291c34u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291c38:
    // 0x291c38: 0x10510  .word       0x00010510                   # mfhi        $zero # 00010500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c38u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291c3c:
    // 0x291c3c: 0x0  nop
    ctx->pc = 0x291c3cu;
    // NOP
label_291c40:
    // 0x291c40: 0x6aab  .word       0x00006AAB                   # sltu        $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c40u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_291c44:
    // 0x291c44: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x291c44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x291C44 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291c48:
    // 0x291c48: 0xf4d0  .word       0x0000F4D0                   # mfhi        $fp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c48u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_291c4c:
    // 0x291c4c: 0x0  nop
    ctx->pc = 0x291c4cu;
    // NOP
label_291c50:
    // 0x291c50: 0x6aca  .word       0x00006ACA                   # movz        $t5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291c54:
    // 0x291c54: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x291c54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_291c58:
    // 0x291c58: 0xfe50  .word       0x0000FE50                   # mfhi        $ra # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c58u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_291c5c:
    // 0x291c5c: 0x0  nop
    ctx->pc = 0x291c5cu;
    // NOP
label_291c60:
    // 0x291c60: 0x6aea  .word       0x00006AEA                   # slt         $t5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c60u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_291c64:
    // 0x291c64: 0x28  mfsa        $zero
    ctx->pc = 0x291c64u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_291c68:
    // 0x291c68: 0x13c80  sll         $a3, $at, 18
    ctx->pc = 0x291c68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 18));
label_291c6c:
    // 0x291c6c: 0x0  nop
    ctx->pc = 0x291c6cu;
    // NOP
label_291c70:
    // 0x291c70: 0x6b12  .word       0x00006B12                   # mflo        $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c70u;
    SET_GPR_U64(ctx, 13, ctx->lo);
label_291c74:
    // 0x291c74: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x291c74u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291c78:
    // 0x291c78: 0x11e10  .word       0x00011E10                   # mfhi        $v1 # 00010600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_291c7c:
    // 0x291c7c: 0x0  nop
    ctx->pc = 0x291c7cu;
    // NOP
label_291c80:
    // 0x291c80: 0x6b36  tne         $zero, $zero, 428
    ctx->pc = 0x291c80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291c84:
    // 0x291c84: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x291c84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x291C84 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291c88:
    // 0x291c88: 0xedb0  tge         $zero, $zero, 950
    ctx->pc = 0x291c88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291c8c:
    // 0x291c8c: 0x0  nop
    ctx->pc = 0x291c8cu;
    // NOP
label_291c90:
    // 0x291c90: 0x6b54  .word       0x00006B54                   # dsllv       $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291c90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291c94:
    // 0x291c94: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x291c94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x291C94 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291c98:
    // 0x291c98: 0xf3b0  tge         $zero, $zero, 974
    ctx->pc = 0x291c98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291c9c:
    // 0x291c9c: 0x0  nop
    ctx->pc = 0x291c9cu;
    // NOP
label_291ca0:
    // 0x291ca0: 0x6b73  tltu        $zero, $zero, 429
    ctx->pc = 0x291ca0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291ca4:
    // 0x291ca4: 0x27  not         $zero, $zero
    ctx->pc = 0x291ca4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291ca8:
    // 0x291ca8: 0x13330  tge         $zero, $at, 204
    ctx->pc = 0x291ca8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291cac:
    // 0x291cac: 0x0  nop
    ctx->pc = 0x291cacu;
    // NOP
label_291cb0:
    // 0x291cb0: 0x6b9a  .word       0x00006B9A                   # div         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cb0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291cb4:
    // 0x291cb4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291cb4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291cb8:
    // 0x291cb8: 0x104b0  tge         $zero, $at, 18
    ctx->pc = 0x291cb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291cbc:
    // 0x291cbc: 0x0  nop
    ctx->pc = 0x291cbcu;
    // NOP
label_291cc0:
    // 0x291cc0: 0x6bbb  dsra        $t5, $zero, 14
    ctx->pc = 0x291cc0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> 14);
label_291cc4:
    // 0x291cc4: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cc4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291cc8:
    // 0x291cc8: 0x27e50  .word       0x00027E50                   # mfhi        $t7 # 00020640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cc8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_291ccc:
    // 0x291ccc: 0x0  nop
    ctx->pc = 0x291cccu;
    // NOP
label_291cd0:
    // 0x291cd0: 0x6c0b  .word       0x00006C0B                   # movn        $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cd0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291cd4:
    // 0x291cd4: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_291cd8:
    // 0x291cd8: 0x27a60  .word       0x00027A60                   # add         $t7, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291cd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_291cdc:
    // 0x291cdc: 0x0  nop
    ctx->pc = 0x291cdcu;
    // NOP
label_291ce0:
    // 0x291ce0: 0x6c5b  .word       0x00006C5B                   # divu        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ce0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ce4:
    // 0x291ce4: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ce4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291CE4 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291ce8:
    // 0x291ce8: 0x2a360  .word       0x0002A360                   # add         $s4, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_291cec:
    // 0x291cec: 0x0  nop
    ctx->pc = 0x291cecu;
    // NOP
label_291cf0:
    // 0x291cf0: 0x6cb0  tge         $zero, $zero, 434
    ctx->pc = 0x291cf0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291cf4:
    // 0x291cf4: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x291cf4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291cf8:
    // 0x291cf8: 0x10700  sll         $zero, $at, 28
    ctx->pc = 0x291cf8u;
    
label_291cfc:
    // 0x291cfc: 0x0  nop
    ctx->pc = 0x291cfcu;
    // NOP
label_291d00:
    // 0x291d00: 0x6cd1  .word       0x00006CD1                   # mthi        $zero # 00006CC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d00u;
    ctx->hi = GPR_U64(ctx, 0);
label_291d04:
    // 0x291d04: 0x27  not         $zero, $zero
    ctx->pc = 0x291d04u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291d08:
    // 0x291d08: 0x136d0  .word       0x000136D0                   # mfhi        $a2 # 000106C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d08u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_291d0c:
    // 0x291d0c: 0x0  nop
    ctx->pc = 0x291d0cu;
    // NOP
label_291d10:
    // 0x291d10: 0x6cf8  dsll        $t5, $zero, 19
    ctx->pc = 0x291d10u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 19);
label_291d14:
    // 0x291d14: 0x22  neg         $zero, $zero
    ctx->pc = 0x291d14u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_291d18:
    // 0x291d18: 0x10b70  tge         $zero, $at, 45
    ctx->pc = 0x291d18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_291d1c:
    // 0x291d1c: 0x0  nop
    ctx->pc = 0x291d1cu;
    // NOP
label_291d20:
    // 0x291d20: 0x6d1a  .word       0x00006D1A                   # div         $t5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d20u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291d24:
    // 0x291d24: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x291d24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_291d28:
    // 0x291d28: 0xfa70  tge         $zero, $zero, 1001
    ctx->pc = 0x291d28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291d2c:
    // 0x291d2c: 0x0  nop
    ctx->pc = 0x291d2cu;
    // NOP
label_291d30:
    // 0x291d30: 0x6d3a  dsrl        $t5, $zero, 20
    ctx->pc = 0x291d30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> 20);
label_291d34:
    // 0x291d34: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d34u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_291d38:
    // 0x291d38: 0x2c620  .word       0x0002C620                   # add         $t8, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_291d3c:
    // 0x291d3c: 0x0  nop
    ctx->pc = 0x291d3cu;
    // NOP
label_291d40:
    // 0x291d40: 0x6d93  .word       0x00006D93                   # mtlo        $zero # 00006D80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d40u;
    ctx->lo = GPR_U64(ctx, 0);
label_291d44:
    // 0x291d44: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d44u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d48:
    // 0x291d48: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d48u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d4c:
    // 0x291d4c: 0x0  nop
    ctx->pc = 0x291d4cu;
    // NOP
label_291d50:
    // 0x291d50: 0x6dae  .word       0x00006DAE                   # dsub        $t5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_291d54:
    // 0x291d54: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d54u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d58:
    // 0x291d58: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d58u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d5c:
    // 0x291d5c: 0x0  nop
    ctx->pc = 0x291d5cu;
    // NOP
label_291d60:
    // 0x291d60: 0x6dc9  .word       0x00006DC9                   # jalr        $t5, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
label_291d64:
    if (ctx->pc == 0x291D64u) {
        ctx->pc = 0x291D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D60u;
        // 0x291d64: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D68u;
        goto label_291d68;
    }
    ctx->pc = 0x291D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x291D68u);
        ctx->pc = 0x291D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D60u;
        // 0x291d64: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D60u, 0x291D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291D68u;
label_291d68:
    // 0x291d68: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d68u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d6c:
    // 0x291d6c: 0x0  nop
    ctx->pc = 0x291d6cu;
    // NOP
label_291d70:
    // 0x291d70: 0x6de4  .word       0x00006DE4                   # and         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_291d74:
    // 0x291d74: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d74u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d78:
    // 0x291d78: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d7c:
    // 0x291d7c: 0x0  nop
    ctx->pc = 0x291d7cu;
    // NOP
label_291d80:
    // 0x291d80: 0x6dff  dsra32      $t5, $zero, 23
    ctx->pc = 0x291d80u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (32 + 23));
label_291d84:
    // 0x291d84: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d84u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d88:
    // 0x291d88: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d88u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d8c:
    // 0x291d8c: 0x0  nop
    ctx->pc = 0x291d8cu;
    // NOP
label_291d90:
    // 0x291d90: 0x6e1a  .word       0x00006E1A                   # div         $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d90u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_291d94:
    // 0x291d94: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291d94u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291d98:
    // 0x291d98: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291d98u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291d9c:
    // 0x291d9c: 0x0  nop
    ctx->pc = 0x291d9cu;
    // NOP
label_291da0:
    // 0x291da0: 0x6e35  .word       0x00006E35                   # INVALID     $zero, $zero, 0x6E35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291da0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x291DA0 raw=0x00006E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291da4:
    // 0x291da4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291da4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291da8:
    // 0x291da8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291da8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dac:
    // 0x291dac: 0x0  nop
    ctx->pc = 0x291dacu;
    // NOP
label_291db0:
    // 0x291db0: 0x6e50  .word       0x00006E50                   # mfhi        $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291db0u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_291db4:
    // 0x291db4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291db4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291db8:
    // 0x291db8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291db8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dbc:
    // 0x291dbc: 0x0  nop
    ctx->pc = 0x291dbcu;
    // NOP
label_291dc0:
    // 0x291dc0: 0x6e6b  .word       0x00006E6B                   # sltu        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291dc0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_291dc4:
    // 0x291dc4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291dc4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291dc8:
    // 0x291dc8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291dc8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dcc:
    // 0x291dcc: 0x0  nop
    ctx->pc = 0x291dccu;
    // NOP
label_291dd0:
    // 0x291dd0: 0x6e86  .word       0x00006E86                   # srlv        $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291dd0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291dd4:
    // 0x291dd4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291dd4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291dd8:
    // 0x291dd8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291dd8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291ddc:
    // 0x291ddc: 0x0  nop
    ctx->pc = 0x291ddcu;
    // NOP
label_291de0:
    // 0x291de0: 0x6ea1  .word       0x00006EA1                   # addu        $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291de0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_291de4:
    // 0x291de4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291de4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291de8:
    // 0x291de8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291de8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dec:
    // 0x291dec: 0x0  nop
    ctx->pc = 0x291decu;
    // NOP
label_291df0:
    // 0x291df0: 0x6ebc  dsll32      $t5, $zero, 26
    ctx->pc = 0x291df0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 26));
label_291df4:
    // 0x291df4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291df4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291df8:
    // 0x291df8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291df8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291dfc:
    // 0x291dfc: 0x0  nop
    ctx->pc = 0x291dfcu;
    // NOP
label_291e00:
    // 0x291e00: 0x6ed7  .word       0x00006ED7                   # dsrav       $t5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e00u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291e04:
    // 0x291e04: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e04u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e08:
    // 0x291e08: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e08u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e0c:
    // 0x291e0c: 0x0  nop
    ctx->pc = 0x291e0cu;
    // NOP
label_291e10:
    // 0x291e10: 0x6ef2  tlt         $zero, $zero, 443
    ctx->pc = 0x291e10u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291e14:
    // 0x291e14: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e14u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e18:
    // 0x291e18: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e18u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e1c:
    // 0x291e1c: 0x0  nop
    ctx->pc = 0x291e1cu;
    // NOP
label_291e20:
    // 0x291e20: 0x6f0d  break       0, 444
    ctx->pc = 0x291e20u;
    runtime->handleBreak(rdram, ctx);
label_291e24:
    // 0x291e24: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e24u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e28:
    // 0x291e28: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e28u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e2c:
    // 0x291e2c: 0x0  nop
    ctx->pc = 0x291e2cu;
    // NOP
label_291e30:
    // 0x291e30: 0x6f28  .word       0x00006F28                   # mfsa        $t5 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x291e30u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_291e34:
    // 0x291e34: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e34u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e38:
    // 0x291e38: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e38u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e3c:
    // 0x291e3c: 0x0  nop
    ctx->pc = 0x291e3cu;
    // NOP
label_291e40:
    // 0x291e40: 0x6f43  sra         $t5, $zero, 29
    ctx->pc = 0x291e40u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), 29));
label_291e44:
    // 0x291e44: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e44u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e48:
    // 0x291e48: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e48u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e4c:
    // 0x291e4c: 0x0  nop
    ctx->pc = 0x291e4cu;
    // NOP
label_291e50:
    // 0x291e50: 0x6f5e  .word       0x00006F5E                   # ddiv        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x291E50 raw=0x00006F5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291e54:
    // 0x291e54: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e54u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e58:
    // 0x291e58: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e58u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e5c:
    // 0x291e5c: 0x0  nop
    ctx->pc = 0x291e5cu;
    // NOP
label_291e60:
    // 0x291e60: 0x6f79  .word       0x00006F79                   # INVALID     $zero, $zero, 0x6F79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x291E60 raw=0x00006F79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291e64:
    // 0x291e64: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e64u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e68:
    // 0x291e68: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e68u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e6c:
    // 0x291e6c: 0x0  nop
    ctx->pc = 0x291e6cu;
    // NOP
label_291e70:
    // 0x291e70: 0x6f94  .word       0x00006F94                   # dsllv       $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_291e74:
    // 0x291e74: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e74u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e78:
    // 0x291e78: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e7c:
    // 0x291e7c: 0x0  nop
    ctx->pc = 0x291e7cu;
    // NOP
label_291e80:
    // 0x291e80: 0x6faf  .word       0x00006FAF                   # dsubu       $t5, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_291e84:
    // 0x291e84: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e84u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e88:
    // 0x291e88: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e88u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e8c:
    // 0x291e8c: 0x0  nop
    ctx->pc = 0x291e8cu;
    // NOP
label_291e90:
    // 0x291e90: 0x6fca  .word       0x00006FCA                   # movz        $t5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e90u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_291e94:
    // 0x291e94: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291e94u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291e98:
    // 0x291e98: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291e98u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291e9c:
    // 0x291e9c: 0x0  nop
    ctx->pc = 0x291e9cu;
    // NOP
label_291ea0:
    // 0x291ea0: 0x6fe5  .word       0x00006FE5                   # move        $t5, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ea0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291ea4:
    // 0x291ea4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ea4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ea8:
    // 0x291ea8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ea8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291eac:
    // 0x291eac: 0x0  nop
    ctx->pc = 0x291eacu;
    // NOP
label_291eb0:
    // 0x291eb0: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x291eb0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_291eb4:
    // 0x291eb4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291eb4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291eb8:
    // 0x291eb8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291eb8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291ebc:
    // 0x291ebc: 0x0  nop
    ctx->pc = 0x291ebcu;
    // NOP
label_291ec0:
    // 0x291ec0: 0x701b  divu        $t6, $zero, $zero
    ctx->pc = 0x291ec0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ec4:
    // 0x291ec4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ec4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ec8:
    // 0x291ec8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ec8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291ecc:
    // 0x291ecc: 0x0  nop
    ctx->pc = 0x291eccu;
    // NOP
label_291ed0:
    // 0x291ed0: 0x7036  tne         $zero, $zero, 448
    ctx->pc = 0x291ed0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291ed4:
    // 0x291ed4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ed4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ed8:
    // 0x291ed8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ed8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291edc:
    // 0x291edc: 0x0  nop
    ctx->pc = 0x291edcu;
    // NOP
label_291ee0:
    // 0x291ee0: 0x7051  .word       0x00007051                   # mthi        $zero # 00007040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ee0u;
    ctx->hi = GPR_U64(ctx, 0);
label_291ee4:
    // 0x291ee4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ee4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ee8:
    // 0x291ee8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ee8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291eec:
    // 0x291eec: 0x0  nop
    ctx->pc = 0x291eecu;
    // NOP
label_291ef0:
    // 0x291ef0: 0x706c  .word       0x0000706C                   # dadd        $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ef0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_291ef4:
    // 0x291ef4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ef4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ef8:
    // 0x291ef8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ef8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291efc:
    // 0x291efc: 0x0  nop
    ctx->pc = 0x291efcu;
    // NOP
label_291f00:
    // 0x291f00: 0x7087  .word       0x00007087                   # srav        $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f00u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_291f04:
    // 0x291f04: 0x25  move        $zero, $zero
    ctx->pc = 0x291f04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291f08:
    // 0x291f08: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x291f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_291f0c:
    // 0x291f0c: 0x0  nop
    ctx->pc = 0x291f0cu;
    // NOP
label_291f10:
    // 0x291f10: 0x70ac  .word       0x000070AC                   # dadd        $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_291f14:
    // 0x291f14: 0x25  move        $zero, $zero
    ctx->pc = 0x291f14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291f18:
    // 0x291f18: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x291f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_291f1c:
    // 0x291f1c: 0x0  nop
    ctx->pc = 0x291f1cu;
    // NOP
label_291f20:
    // 0x291f20: 0x70d1  .word       0x000070D1                   # mthi        $zero # 000070C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f20u;
    ctx->hi = GPR_U64(ctx, 0);
label_291f24:
    // 0x291f24: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291F24 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291f28:
    // 0x291f28: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x291f28u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_291f2c:
    // 0x291f2c: 0x0  nop
    ctx->pc = 0x291f2cu;
    // NOP
label_291f30:
    // 0x291f30: 0x70e6  .word       0x000070E6                   # xor         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_291f34:
    // 0x291f34: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x291F34 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291f38:
    // 0x291f38: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x291f38u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_291f3c:
    // 0x291f3c: 0x0  nop
    ctx->pc = 0x291f3cu;
    // NOP
label_291f40:
    // 0x291f40: 0x70fb  dsra        $t6, $zero, 3
    ctx->pc = 0x291f40u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> 3);
label_291f44:
    // 0x291f44: 0x25  move        $zero, $zero
    ctx->pc = 0x291f44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291f48:
    // 0x291f48: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x291f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_291f4c:
    // 0x291f4c: 0x0  nop
    ctx->pc = 0x291f4cu;
    // NOP
label_291f50:
    // 0x291f50: 0x7120  .word       0x00007120                   # add         $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_291f54:
    // 0x291f54: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x291f54u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291f58:
    // 0x291f58: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x291f58u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_291f5c:
    // 0x291f5c: 0x0  nop
    ctx->pc = 0x291f5cu;
    // NOP
label_291f60:
    // 0x291f60: 0x7156  .word       0x00007156                   # dsrlv       $t6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291f64:
    // 0x291f64: 0x25  move        $zero, $zero
    ctx->pc = 0x291f64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_291f68:
    // 0x291f68: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x291f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_291f6c:
    // 0x291f6c: 0x0  nop
    ctx->pc = 0x291f6cu;
    // NOP
label_291f70:
    // 0x291f70: 0x717b  dsra        $t6, $zero, 5
    ctx->pc = 0x291f70u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> 5);
label_291f74:
    // 0x291f74: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291f74u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291f78:
    // 0x291f78: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f78u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291f7c:
    // 0x291f7c: 0x0  nop
    ctx->pc = 0x291f7cu;
    // NOP
label_291f80:
    // 0x291f80: 0x7196  .word       0x00007196                   # dsrlv       $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_291f84:
    // 0x291f84: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291f84u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291f88:
    // 0x291f88: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f88u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291f8c:
    // 0x291f8c: 0x0  nop
    ctx->pc = 0x291f8cu;
    // NOP
label_291f90:
    // 0x291f90: 0x71b1  tgeu        $zero, $zero, 454
    ctx->pc = 0x291f90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_291f94:
    // 0x291f94: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291f94u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291f98:
    // 0x291f98: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291f98u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291f9c:
    // 0x291f9c: 0x0  nop
    ctx->pc = 0x291f9cu;
    // NOP
label_291fa0:
    // 0x291fa0: 0x71cc  syscall     455
    ctx->pc = 0x291fa0u;
    ctx->pc = 0x291FA4u;
runtime->handleSyscall(rdram, ctx, 0x1C7u);
label_291fa4:
    // 0x291fa4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fa4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fa8:
    // 0x291fa8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fa8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fac:
    // 0x291fac: 0x0  nop
    ctx->pc = 0x291facu;
    // NOP
label_291fb0:
    // 0x291fb0: 0x71e7  .word       0x000071E7                   # not         $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fb0u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_291fb4:
    // 0x291fb4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fb4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fb8:
    // 0x291fb8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fb8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fbc:
    // 0x291fbc: 0x0  nop
    ctx->pc = 0x291fbcu;
    // NOP
label_291fc0:
    // 0x291fc0: 0x7202  srl         $t6, $zero, 8
    ctx->pc = 0x291fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_291fc4:
    // 0x291fc4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fc4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fc8:
    // 0x291fc8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fc8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fcc:
    // 0x291fcc: 0x0  nop
    ctx->pc = 0x291fccu;
    // NOP
label_291fd0:
    // 0x291fd0: 0x721d  .word       0x0000721D                   # dmultu      $zero, $zero # 00007200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x291FD0 raw=0x0000721D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_291fd4:
    // 0x291fd4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fd4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fd8:
    // 0x291fd8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fd8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fdc:
    // 0x291fdc: 0x0  nop
    ctx->pc = 0x291fdcu;
    // NOP
label_291fe0:
    // 0x291fe0: 0x7238  dsll        $t6, $zero, 8
    ctx->pc = 0x291fe0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 8);
label_291fe4:
    // 0x291fe4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291fe4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291fe8:
    // 0x291fe8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291fe8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291fec:
    // 0x291fec: 0x0  nop
    ctx->pc = 0x291fecu;
    // NOP
label_291ff0:
    // 0x291ff0: 0x7253  .word       0x00007253                   # mtlo        $zero # 00007240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ff0u;
    ctx->lo = GPR_U64(ctx, 0);
label_291ff4:
    // 0x291ff4: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x291ff4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_291ff8:
    // 0x291ff8: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x291ff8u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_291ffc:
    // 0x291ffc: 0x0  nop
    ctx->pc = 0x291ffcu;
    // NOP
label_292000:
    // 0x292000: 0x726e  .word       0x0000726E                   # dsub        $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292000u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_292004:
    // 0x292004: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292004u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292008:
    // 0x292008: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292008u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29200c:
    // 0x29200c: 0x0  nop
    ctx->pc = 0x29200cu;
    // NOP
label_292010:
    // 0x292010: 0x7289  .word       0x00007289                   # jalr        $t6, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
label_292014:
    if (ctx->pc == 0x292014u) {
        ctx->pc = 0x292014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292010u;
        // 0x292014: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x292018u;
        goto label_292018;
    }
    ctx->pc = 0x292010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 14, 0x292018u);
        ctx->pc = 0x292014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292010u;
        // 0x292014: 0x1b  divu        $zero, $zero, $zero (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292010u, 0x292018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x292018u;
label_292018:
    // 0x292018: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292018u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29201c:
    // 0x29201c: 0x0  nop
    ctx->pc = 0x29201cu;
    // NOP
label_292020:
    // 0x292020: 0x72a4  .word       0x000072A4                   # and         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292020u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292024:
    // 0x292024: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292024u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292028:
    // 0x292028: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292028u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29202c:
    // 0x29202c: 0x0  nop
    ctx->pc = 0x29202cu;
    // NOP
label_292030:
    // 0x292030: 0x72bf  dsra32      $t6, $zero, 10
    ctx->pc = 0x292030u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 10));
label_292034:
    // 0x292034: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292034u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292038:
    // 0x292038: 0xd110  .word       0x0000D110                   # mfhi        $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292038u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29203c:
    // 0x29203c: 0x0  nop
    ctx->pc = 0x29203cu;
    // NOP
label_292040:
    // 0x292040: 0x72da  .word       0x000072DA                   # div         $t6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292040u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292044:
    // 0x292044: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x292044u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292048:
    // 0x292048: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x292048u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_29204c:
    // 0x29204c: 0x0  nop
    ctx->pc = 0x29204cu;
    // NOP
label_292050:
    // 0x292050: 0x7310  .word       0x00007310                   # mfhi        $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292050u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_292054:
    // 0x292054: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x292054u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292058:
    // 0x292058: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_29205c:
    // 0x29205c: 0x0  nop
    ctx->pc = 0x29205cu;
    // NOP
label_292060:
    // 0x292060: 0x7346  .word       0x00007346                   # srlv        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292060u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_292064:
    // 0x292064: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x292064u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292068:
    // 0x292068: 0x187a0  .word       0x000187A0                   # add         $s0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292068u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_29206c:
    // 0x29206c: 0x0  nop
    ctx->pc = 0x29206cu;
    // NOP
label_292070:
    // 0x292070: 0x7377  .word       0x00007377                   # INVALID     $zero, $zero, 0x7377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x292070 raw=0x00007377"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292074:
    // 0x292074: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x292074u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292078:
    // 0x292078: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x292078u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_29207c:
    // 0x29207c: 0x0  nop
    ctx->pc = 0x29207cu;
    // NOP
label_292080:
    // 0x292080: 0x73ad  .word       0x000073AD                   # daddu       $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292080u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292084:
    // 0x292084: 0x25  move        $zero, $zero
    ctx->pc = 0x292084u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_292088:
    // 0x292088: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x292088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_29208c:
    // 0x29208c: 0x0  nop
    ctx->pc = 0x29208cu;
    // NOP
label_292090:
    // 0x292090: 0x73d2  .word       0x000073D2                   # mflo        $t6 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292090u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_292094:
    // 0x292094: 0x25  move        $zero, $zero
    ctx->pc = 0x292094u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_292098:
    // 0x292098: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x292098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_29209c:
    // 0x29209c: 0x0  nop
    ctx->pc = 0x29209cu;
    // NOP
label_2920a0:
    // 0x2920a0: 0x73f7  .word       0x000073F7                   # INVALID     $zero, $zero, 0x73F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2920A0 raw=0x000073F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2920a4:
    // 0x2920a4: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x2920a4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2920a8:
    // 0x2920a8: 0x1a880  sll         $s5, $at, 2
    ctx->pc = 0x2920a8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_2920ac:
    // 0x2920ac: 0x0  nop
    ctx->pc = 0x2920acu;
    // NOP
label_2920b0:
    // 0x2920b0: 0x742d  .word       0x0000742D                   # daddu       $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2920b4:
    // 0x2920b4: 0x25  move        $zero, $zero
    ctx->pc = 0x2920b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2920b8:
    // 0x2920b8: 0x12500  sll         $a0, $at, 20
    ctx->pc = 0x2920b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 20));
label_2920bc:
    // 0x2920bc: 0x0  nop
    ctx->pc = 0x2920bcu;
    // NOP
label_2920c0:
    // 0x2920c0: 0x7452  .word       0x00007452                   # mflo        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920c0u;
    SET_GPR_U64(ctx, 14, ctx->lo);
label_2920c4:
    // 0x2920c4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2920C4 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2920c8:
    // 0x2920c8: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x2920c8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2920cc:
    // 0x2920cc: 0x0  nop
    ctx->pc = 0x2920ccu;
    // NOP
label_2920d0:
    // 0x2920d0: 0x7467  .word       0x00007467                   # not         $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920d0u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2920d4:
    // 0x2920d4: 0x23  negu        $zero, $zero
    ctx->pc = 0x2920d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2920d8:
    // 0x2920d8: 0x111d0  .word       0x000111D0                   # mfhi        $v0 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2920dc:
    // 0x2920dc: 0x0  nop
    ctx->pc = 0x2920dcu;
    // NOP
label_2920e0:
    // 0x2920e0: 0x748a  .word       0x0000748A                   # movz        $t6, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
label_2920e4:
    // 0x2920e4: 0x19  multu       $zero, $zero
    ctx->pc = 0x2920e4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2920e8:
    // 0x2920e8: 0xc770  tge         $zero, $zero, 797
    ctx->pc = 0x2920e8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2920ec:
    // 0x2920ec: 0x0  nop
    ctx->pc = 0x2920ecu;
    // NOP
label_2920f0:
    // 0x2920f0: 0x74a3  .word       0x000074A3                   # negu        $t6, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2920f0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2920f4:
    // 0x2920f4: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x2920f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2920F4 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2920f8:
    // 0x2920f8: 0xdb30  tge         $zero, $zero, 876
    ctx->pc = 0x2920f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2920fc:
    // 0x2920fc: 0x0  nop
    ctx->pc = 0x2920fcu;
    // NOP
label_292100:
    // 0x292100: 0x74bf  dsra32      $t6, $zero, 18
    ctx->pc = 0x292100u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 18));
label_292104:
    // 0x292104: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x292104u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_292108:
    // 0x292108: 0xd0c0  sll         $k0, $zero, 3
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_29210c:
    // 0x29210c: 0x0  nop
    ctx->pc = 0x29210cu;
    // NOP
label_292110:
    // 0x292110: 0x74da  .word       0x000074DA                   # div         $t6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292110u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_292114:
    // 0x292114: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x292114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292118:
    // 0x292118: 0xbdd0  .word       0x0000BDD0                   # mfhi        $s7 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292118u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29211c:
    // 0x29211c: 0x0  nop
    ctx->pc = 0x29211cu;
    // NOP
label_292120:
    // 0x292120: 0x74f2  tlt         $zero, $zero, 467
    ctx->pc = 0x292120u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_292124:
    // 0x292124: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x292124u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x292124 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292128:
    // 0x292128: 0xdb60  .word       0x0000DB60                   # add         $k1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292128u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_29212c:
    // 0x29212c: 0x0  nop
    ctx->pc = 0x29212cu;
    // NOP
label_292130:
    // 0x292130: 0x750e  .word       0x0000750E                   # INVALID     $zero, $zero, 0x750E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292130 raw=0x0000750E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292134:
    // 0x292134: 0x19  multu       $zero, $zero
    ctx->pc = 0x292134u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292138:
    // 0x292138: 0xc340  sll         $t8, $zero, 13
    ctx->pc = 0x292138u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_29213c:
    // 0x29213c: 0x0  nop
    ctx->pc = 0x29213cu;
    // NOP
label_292140:
    // 0x292140: 0x7527  .word       0x00007527                   # not         $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292140u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_292144:
    // 0x292144: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x292144u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292148:
    // 0x292148: 0xaf10  .word       0x0000AF10                   # mfhi        $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292148u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_29214c:
    // 0x29214c: 0x0  nop
    ctx->pc = 0x29214cu;
    // NOP
label_292150:
    // 0x292150: 0x753d  .word       0x0000753D                   # INVALID     $zero, $zero, 0x753D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x292150 raw=0x0000753D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292154:
    // 0x292154: 0x19  multu       $zero, $zero
    ctx->pc = 0x292154u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_292158:
    // 0x292158: 0xc250  .word       0x0000C250                   # mfhi        $t8 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292158u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_29215c:
    // 0x29215c: 0x0  nop
    ctx->pc = 0x29215cu;
    // NOP
label_292160:
    // 0x292160: 0x7556  .word       0x00007556                   # dsrlv       $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292160u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292164:
    // 0x292164: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x292164u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_292168:
    // 0x292168: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x292168u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_29216c:
    // 0x29216c: 0x0  nop
    ctx->pc = 0x29216cu;
    // NOP
label_292170:
    // 0x292170: 0x756c  .word       0x0000756C                   # dadd        $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292170u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_292174:
    // 0x292174: 0x3e  dsrl32      $zero, $zero, 0
    ctx->pc = 0x292174u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 0));
label_292178:
    // 0x292178: 0x1e940  sll         $sp, $at, 5
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 1), 5));
label_29217c:
    // 0x29217c: 0x0  nop
    ctx->pc = 0x29217cu;
    // NOP
label_292180:
    // 0x292180: 0x75aa  .word       0x000075AA                   # slt         $t6, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292180u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_292184:
    // 0x292184: 0x24  and         $zero, $zero, $zero
    ctx->pc = 0x292184u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_292188:
    // 0x292188: 0x118a0  .word       0x000118A0                   # add         $v1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292188u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29218c:
    // 0x29218c: 0x0  nop
    ctx->pc = 0x29218cu;
    // NOP
label_292190:
    // 0x292190: 0x75ce  .word       0x000075CE                   # INVALID     $zero, $zero, 0x75CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x292190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x292190 raw=0x000075CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292194:
    // 0x292194: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x292194u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x292194 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_292198:
    // 0x292198: 0xe8b0  tge         $zero, $zero, 930
    ctx->pc = 0x292198u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29219c:
    // 0x29219c: 0x0  nop
    ctx->pc = 0x29219cu;
    // NOP
    ctx->pc = 0x2921a0u;
    return;
}

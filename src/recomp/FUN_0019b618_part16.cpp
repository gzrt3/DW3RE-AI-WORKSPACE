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


void FUN_0019b618_part16(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a2b48u: goto label_1a2b48;
        case 0x1a2b4cu: goto label_1a2b4c;
        case 0x1a2b50u: goto label_1a2b50;
        case 0x1a2b54u: goto label_1a2b54;
        case 0x1a2b58u: goto label_1a2b58;
        case 0x1a2b5cu: goto label_1a2b5c;
        case 0x1a2b60u: goto label_1a2b60;
        case 0x1a2b64u: goto label_1a2b64;
        case 0x1a2b68u: goto label_1a2b68;
        case 0x1a2b6cu: goto label_1a2b6c;
        case 0x1a2b70u: goto label_1a2b70;
        case 0x1a2b74u: goto label_1a2b74;
        case 0x1a2b78u: goto label_1a2b78;
        case 0x1a2b7cu: goto label_1a2b7c;
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b84u: goto label_1a2b84;
        case 0x1a2b88u: goto label_1a2b88;
        case 0x1a2b8cu: goto label_1a2b8c;
        case 0x1a2b90u: goto label_1a2b90;
        case 0x1a2b94u: goto label_1a2b94;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2b9cu: goto label_1a2b9c;
        case 0x1a2ba0u: goto label_1a2ba0;
        case 0x1a2ba4u: goto label_1a2ba4;
        case 0x1a2ba8u: goto label_1a2ba8;
        case 0x1a2bacu: goto label_1a2bac;
        case 0x1a2bb0u: goto label_1a2bb0;
        case 0x1a2bb4u: goto label_1a2bb4;
        case 0x1a2bb8u: goto label_1a2bb8;
        case 0x1a2bbcu: goto label_1a2bbc;
        case 0x1a2bc0u: goto label_1a2bc0;
        case 0x1a2bc4u: goto label_1a2bc4;
        case 0x1a2bc8u: goto label_1a2bc8;
        case 0x1a2bccu: goto label_1a2bcc;
        case 0x1a2bd0u: goto label_1a2bd0;
        case 0x1a2bd4u: goto label_1a2bd4;
        case 0x1a2bd8u: goto label_1a2bd8;
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2be0u: goto label_1a2be0;
        case 0x1a2be4u: goto label_1a2be4;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2becu: goto label_1a2bec;
        case 0x1a2bf0u: goto label_1a2bf0;
        case 0x1a2bf4u: goto label_1a2bf4;
        case 0x1a2bf8u: goto label_1a2bf8;
        case 0x1a2bfcu: goto label_1a2bfc;
        case 0x1a2c00u: goto label_1a2c00;
        case 0x1a2c04u: goto label_1a2c04;
        case 0x1a2c08u: goto label_1a2c08;
        case 0x1a2c0cu: goto label_1a2c0c;
        case 0x1a2c10u: goto label_1a2c10;
        case 0x1a2c14u: goto label_1a2c14;
        case 0x1a2c18u: goto label_1a2c18;
        case 0x1a2c1cu: goto label_1a2c1c;
        case 0x1a2c20u: goto label_1a2c20;
        case 0x1a2c24u: goto label_1a2c24;
        case 0x1a2c28u: goto label_1a2c28;
        case 0x1a2c2cu: goto label_1a2c2c;
        case 0x1a2c30u: goto label_1a2c30;
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c38u: goto label_1a2c38;
        case 0x1a2c3cu: goto label_1a2c3c;
        case 0x1a2c40u: goto label_1a2c40;
        case 0x1a2c44u: goto label_1a2c44;
        case 0x1a2c48u: goto label_1a2c48;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c50u: goto label_1a2c50;
        case 0x1a2c54u: goto label_1a2c54;
        case 0x1a2c58u: goto label_1a2c58;
        case 0x1a2c5cu: goto label_1a2c5c;
        case 0x1a2c60u: goto label_1a2c60;
        case 0x1a2c64u: goto label_1a2c64;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c6cu: goto label_1a2c6c;
        case 0x1a2c70u: goto label_1a2c70;
        case 0x1a2c74u: goto label_1a2c74;
        case 0x1a2c78u: goto label_1a2c78;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c80u: goto label_1a2c80;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c88u: goto label_1a2c88;
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2c90u: goto label_1a2c90;
        case 0x1a2c94u: goto label_1a2c94;
        case 0x1a2c98u: goto label_1a2c98;
        case 0x1a2c9cu: goto label_1a2c9c;
        case 0x1a2ca0u: goto label_1a2ca0;
        case 0x1a2ca4u: goto label_1a2ca4;
        case 0x1a2ca8u: goto label_1a2ca8;
        case 0x1a2cacu: goto label_1a2cac;
        case 0x1a2cb0u: goto label_1a2cb0;
        case 0x1a2cb4u: goto label_1a2cb4;
        case 0x1a2cb8u: goto label_1a2cb8;
        case 0x1a2cbcu: goto label_1a2cbc;
        case 0x1a2cc0u: goto label_1a2cc0;
        case 0x1a2cc4u: goto label_1a2cc4;
        case 0x1a2cc8u: goto label_1a2cc8;
        case 0x1a2cccu: goto label_1a2ccc;
        case 0x1a2cd0u: goto label_1a2cd0;
        case 0x1a2cd4u: goto label_1a2cd4;
        case 0x1a2cd8u: goto label_1a2cd8;
        case 0x1a2cdcu: goto label_1a2cdc;
        case 0x1a2ce0u: goto label_1a2ce0;
        case 0x1a2ce4u: goto label_1a2ce4;
        case 0x1a2ce8u: goto label_1a2ce8;
        case 0x1a2cecu: goto label_1a2cec;
        case 0x1a2cf0u: goto label_1a2cf0;
        case 0x1a2cf4u: goto label_1a2cf4;
        case 0x1a2cf8u: goto label_1a2cf8;
        case 0x1a2cfcu: goto label_1a2cfc;
        case 0x1a2d00u: goto label_1a2d00;
        case 0x1a2d04u: goto label_1a2d04;
        case 0x1a2d08u: goto label_1a2d08;
        case 0x1a2d0cu: goto label_1a2d0c;
        case 0x1a2d10u: goto label_1a2d10;
        case 0x1a2d14u: goto label_1a2d14;
        case 0x1a2d18u: goto label_1a2d18;
        case 0x1a2d1cu: goto label_1a2d1c;
        case 0x1a2d20u: goto label_1a2d20;
        case 0x1a2d24u: goto label_1a2d24;
        case 0x1a2d28u: goto label_1a2d28;
        case 0x1a2d2cu: goto label_1a2d2c;
        case 0x1a2d30u: goto label_1a2d30;
        case 0x1a2d34u: goto label_1a2d34;
        case 0x1a2d38u: goto label_1a2d38;
        case 0x1a2d3cu: goto label_1a2d3c;
        case 0x1a2d40u: goto label_1a2d40;
        case 0x1a2d44u: goto label_1a2d44;
        case 0x1a2d48u: goto label_1a2d48;
        case 0x1a2d4cu: goto label_1a2d4c;
        case 0x1a2d50u: goto label_1a2d50;
        case 0x1a2d54u: goto label_1a2d54;
        case 0x1a2d58u: goto label_1a2d58;
        case 0x1a2d5cu: goto label_1a2d5c;
        case 0x1a2d60u: goto label_1a2d60;
        case 0x1a2d64u: goto label_1a2d64;
        case 0x1a2d68u: goto label_1a2d68;
        case 0x1a2d6cu: goto label_1a2d6c;
        case 0x1a2d70u: goto label_1a2d70;
        case 0x1a2d74u: goto label_1a2d74;
        case 0x1a2d78u: goto label_1a2d78;
        case 0x1a2d7cu: goto label_1a2d7c;
        case 0x1a2d80u: goto label_1a2d80;
        case 0x1a2d84u: goto label_1a2d84;
        case 0x1a2d88u: goto label_1a2d88;
        case 0x1a2d8cu: goto label_1a2d8c;
        case 0x1a2d90u: goto label_1a2d90;
        case 0x1a2d94u: goto label_1a2d94;
        case 0x1a2d98u: goto label_1a2d98;
        case 0x1a2d9cu: goto label_1a2d9c;
        case 0x1a2da0u: goto label_1a2da0;
        case 0x1a2da4u: goto label_1a2da4;
        case 0x1a2da8u: goto label_1a2da8;
        case 0x1a2dacu: goto label_1a2dac;
        case 0x1a2db0u: goto label_1a2db0;
        case 0x1a2db4u: goto label_1a2db4;
        case 0x1a2db8u: goto label_1a2db8;
        case 0x1a2dbcu: goto label_1a2dbc;
        case 0x1a2dc0u: goto label_1a2dc0;
        case 0x1a2dc4u: goto label_1a2dc4;
        case 0x1a2dc8u: goto label_1a2dc8;
        case 0x1a2dccu: goto label_1a2dcc;
        case 0x1a2dd0u: goto label_1a2dd0;
        case 0x1a2dd4u: goto label_1a2dd4;
        case 0x1a2dd8u: goto label_1a2dd8;
        case 0x1a2ddcu: goto label_1a2ddc;
        case 0x1a2de0u: goto label_1a2de0;
        case 0x1a2de4u: goto label_1a2de4;
        case 0x1a2de8u: goto label_1a2de8;
        case 0x1a2decu: goto label_1a2dec;
        case 0x1a2df0u: goto label_1a2df0;
        case 0x1a2df4u: goto label_1a2df4;
        case 0x1a2df8u: goto label_1a2df8;
        case 0x1a2dfcu: goto label_1a2dfc;
        case 0x1a2e00u: goto label_1a2e00;
        case 0x1a2e04u: goto label_1a2e04;
        case 0x1a2e08u: goto label_1a2e08;
        case 0x1a2e0cu: goto label_1a2e0c;
        case 0x1a2e10u: goto label_1a2e10;
        case 0x1a2e14u: goto label_1a2e14;
        case 0x1a2e18u: goto label_1a2e18;
        case 0x1a2e1cu: goto label_1a2e1c;
        case 0x1a2e20u: goto label_1a2e20;
        case 0x1a2e24u: goto label_1a2e24;
        case 0x1a2e28u: goto label_1a2e28;
        case 0x1a2e2cu: goto label_1a2e2c;
        case 0x1a2e30u: goto label_1a2e30;
        case 0x1a2e34u: goto label_1a2e34;
        case 0x1a2e38u: goto label_1a2e38;
        case 0x1a2e3cu: goto label_1a2e3c;
        case 0x1a2e40u: goto label_1a2e40;
        case 0x1a2e44u: goto label_1a2e44;
        case 0x1a2e48u: goto label_1a2e48;
        case 0x1a2e4cu: goto label_1a2e4c;
        case 0x1a2e50u: goto label_1a2e50;
        case 0x1a2e54u: goto label_1a2e54;
        case 0x1a2e58u: goto label_1a2e58;
        case 0x1a2e5cu: goto label_1a2e5c;
        case 0x1a2e60u: goto label_1a2e60;
        case 0x1a2e64u: goto label_1a2e64;
        case 0x1a2e68u: goto label_1a2e68;
        case 0x1a2e6cu: goto label_1a2e6c;
        case 0x1a2e70u: goto label_1a2e70;
        case 0x1a2e74u: goto label_1a2e74;
        case 0x1a2e78u: goto label_1a2e78;
        case 0x1a2e7cu: goto label_1a2e7c;
        case 0x1a2e80u: goto label_1a2e80;
        case 0x1a2e84u: goto label_1a2e84;
        case 0x1a2e88u: goto label_1a2e88;
        case 0x1a2e8cu: goto label_1a2e8c;
        case 0x1a2e90u: goto label_1a2e90;
        case 0x1a2e94u: goto label_1a2e94;
        case 0x1a2e98u: goto label_1a2e98;
        case 0x1a2e9cu: goto label_1a2e9c;
        case 0x1a2ea0u: goto label_1a2ea0;
        case 0x1a2ea4u: goto label_1a2ea4;
        case 0x1a2ea8u: goto label_1a2ea8;
        case 0x1a2eacu: goto label_1a2eac;
        case 0x1a2eb0u: goto label_1a2eb0;
        case 0x1a2eb4u: goto label_1a2eb4;
        case 0x1a2eb8u: goto label_1a2eb8;
        case 0x1a2ebcu: goto label_1a2ebc;
        case 0x1a2ec0u: goto label_1a2ec0;
        case 0x1a2ec4u: goto label_1a2ec4;
        case 0x1a2ec8u: goto label_1a2ec8;
        case 0x1a2eccu: goto label_1a2ecc;
        case 0x1a2ed0u: goto label_1a2ed0;
        case 0x1a2ed4u: goto label_1a2ed4;
        case 0x1a2ed8u: goto label_1a2ed8;
        case 0x1a2edcu: goto label_1a2edc;
        case 0x1a2ee0u: goto label_1a2ee0;
        case 0x1a2ee4u: goto label_1a2ee4;
        case 0x1a2ee8u: goto label_1a2ee8;
        case 0x1a2eecu: goto label_1a2eec;
        case 0x1a2ef0u: goto label_1a2ef0;
        case 0x1a2ef4u: goto label_1a2ef4;
        case 0x1a2ef8u: goto label_1a2ef8;
        case 0x1a2efcu: goto label_1a2efc;
        case 0x1a2f00u: goto label_1a2f00;
        case 0x1a2f04u: goto label_1a2f04;
        case 0x1a2f08u: goto label_1a2f08;
        case 0x1a2f0cu: goto label_1a2f0c;
        case 0x1a2f10u: goto label_1a2f10;
        case 0x1a2f14u: goto label_1a2f14;
        case 0x1a2f18u: goto label_1a2f18;
        case 0x1a2f1cu: goto label_1a2f1c;
        case 0x1a2f20u: goto label_1a2f20;
        case 0x1a2f24u: goto label_1a2f24;
        case 0x1a2f28u: goto label_1a2f28;
        case 0x1a2f2cu: goto label_1a2f2c;
        case 0x1a2f30u: goto label_1a2f30;
        case 0x1a2f34u: goto label_1a2f34;
        case 0x1a2f38u: goto label_1a2f38;
        case 0x1a2f3cu: goto label_1a2f3c;
        case 0x1a2f40u: goto label_1a2f40;
        case 0x1a2f44u: goto label_1a2f44;
        case 0x1a2f48u: goto label_1a2f48;
        case 0x1a2f4cu: goto label_1a2f4c;
        case 0x1a2f50u: goto label_1a2f50;
        case 0x1a2f54u: goto label_1a2f54;
        case 0x1a2f58u: goto label_1a2f58;
        case 0x1a2f5cu: goto label_1a2f5c;
        case 0x1a2f60u: goto label_1a2f60;
        case 0x1a2f64u: goto label_1a2f64;
        case 0x1a2f68u: goto label_1a2f68;
        case 0x1a2f6cu: goto label_1a2f6c;
        case 0x1a2f70u: goto label_1a2f70;
        case 0x1a2f74u: goto label_1a2f74;
        case 0x1a2f78u: goto label_1a2f78;
        case 0x1a2f7cu: goto label_1a2f7c;
        case 0x1a2f80u: goto label_1a2f80;
        case 0x1a2f84u: goto label_1a2f84;
        case 0x1a2f88u: goto label_1a2f88;
        case 0x1a2f8cu: goto label_1a2f8c;
        case 0x1a2f90u: goto label_1a2f90;
        case 0x1a2f94u: goto label_1a2f94;
        case 0x1a2f98u: goto label_1a2f98;
        case 0x1a2f9cu: goto label_1a2f9c;
        case 0x1a2fa0u: goto label_1a2fa0;
        case 0x1a2fa4u: goto label_1a2fa4;
        case 0x1a2fa8u: goto label_1a2fa8;
        case 0x1a2facu: goto label_1a2fac;
        case 0x1a2fb0u: goto label_1a2fb0;
        case 0x1a2fb4u: goto label_1a2fb4;
        case 0x1a2fb8u: goto label_1a2fb8;
        case 0x1a2fbcu: goto label_1a2fbc;
        case 0x1a2fc0u: goto label_1a2fc0;
        case 0x1a2fc4u: goto label_1a2fc4;
        case 0x1a2fc8u: goto label_1a2fc8;
        case 0x1a2fccu: goto label_1a2fcc;
        case 0x1a2fd0u: goto label_1a2fd0;
        case 0x1a2fd4u: goto label_1a2fd4;
        case 0x1a2fd8u: goto label_1a2fd8;
        case 0x1a2fdcu: goto label_1a2fdc;
        case 0x1a2fe0u: goto label_1a2fe0;
        case 0x1a2fe4u: goto label_1a2fe4;
        case 0x1a2fe8u: goto label_1a2fe8;
        case 0x1a2fecu: goto label_1a2fec;
        case 0x1a2ff0u: goto label_1a2ff0;
        case 0x1a2ff4u: goto label_1a2ff4;
        case 0x1a2ff8u: goto label_1a2ff8;
        case 0x1a2ffcu: goto label_1a2ffc;
        case 0x1a3000u: goto label_1a3000;
        case 0x1a3004u: goto label_1a3004;
        case 0x1a3008u: goto label_1a3008;
        case 0x1a300cu: goto label_1a300c;
        case 0x1a3010u: goto label_1a3010;
        case 0x1a3014u: goto label_1a3014;
        case 0x1a3018u: goto label_1a3018;
        case 0x1a301cu: goto label_1a301c;
        case 0x1a3020u: goto label_1a3020;
        case 0x1a3024u: goto label_1a3024;
        case 0x1a3028u: goto label_1a3028;
        case 0x1a302cu: goto label_1a302c;
        case 0x1a3030u: goto label_1a3030;
        case 0x1a3034u: goto label_1a3034;
        case 0x1a3038u: goto label_1a3038;
        case 0x1a303cu: goto label_1a303c;
        case 0x1a3040u: goto label_1a3040;
        case 0x1a3044u: goto label_1a3044;
        case 0x1a3048u: goto label_1a3048;
        case 0x1a304cu: goto label_1a304c;
        case 0x1a3050u: goto label_1a3050;
        case 0x1a3054u: goto label_1a3054;
        case 0x1a3058u: goto label_1a3058;
        case 0x1a305cu: goto label_1a305c;
        case 0x1a3060u: goto label_1a3060;
        case 0x1a3064u: goto label_1a3064;
        case 0x1a3068u: goto label_1a3068;
        case 0x1a306cu: goto label_1a306c;
        case 0x1a3070u: goto label_1a3070;
        case 0x1a3074u: goto label_1a3074;
        case 0x1a3078u: goto label_1a3078;
        case 0x1a307cu: goto label_1a307c;
        case 0x1a3080u: goto label_1a3080;
        case 0x1a3084u: goto label_1a3084;
        case 0x1a3088u: goto label_1a3088;
        case 0x1a308cu: goto label_1a308c;
        case 0x1a3090u: goto label_1a3090;
        case 0x1a3094u: goto label_1a3094;
        case 0x1a3098u: goto label_1a3098;
        case 0x1a309cu: goto label_1a309c;
        case 0x1a30a0u: goto label_1a30a0;
        case 0x1a30a4u: goto label_1a30a4;
        case 0x1a30a8u: goto label_1a30a8;
        case 0x1a30acu: goto label_1a30ac;
        case 0x1a30b0u: goto label_1a30b0;
        case 0x1a30b4u: goto label_1a30b4;
        case 0x1a30b8u: goto label_1a30b8;
        case 0x1a30bcu: goto label_1a30bc;
        case 0x1a30c0u: goto label_1a30c0;
        case 0x1a30c4u: goto label_1a30c4;
        case 0x1a30c8u: goto label_1a30c8;
        case 0x1a30ccu: goto label_1a30cc;
        case 0x1a30d0u: goto label_1a30d0;
        case 0x1a30d4u: goto label_1a30d4;
        case 0x1a30d8u: goto label_1a30d8;
        case 0x1a30dcu: goto label_1a30dc;
        case 0x1a30e0u: goto label_1a30e0;
        case 0x1a30e4u: goto label_1a30e4;
        case 0x1a30e8u: goto label_1a30e8;
        case 0x1a30ecu: goto label_1a30ec;
        case 0x1a30f0u: goto label_1a30f0;
        case 0x1a30f4u: goto label_1a30f4;
        case 0x1a30f8u: goto label_1a30f8;
        case 0x1a30fcu: goto label_1a30fc;
        case 0x1a3100u: goto label_1a3100;
        case 0x1a3104u: goto label_1a3104;
        case 0x1a3108u: goto label_1a3108;
        case 0x1a310cu: goto label_1a310c;
        case 0x1a3110u: goto label_1a3110;
        case 0x1a3114u: goto label_1a3114;
        case 0x1a3118u: goto label_1a3118;
        case 0x1a311cu: goto label_1a311c;
        case 0x1a3120u: goto label_1a3120;
        case 0x1a3124u: goto label_1a3124;
        case 0x1a3128u: goto label_1a3128;
        case 0x1a312cu: goto label_1a312c;
        case 0x1a3130u: goto label_1a3130;
        case 0x1a3134u: goto label_1a3134;
        case 0x1a3138u: goto label_1a3138;
        case 0x1a313cu: goto label_1a313c;
        case 0x1a3140u: goto label_1a3140;
        case 0x1a3144u: goto label_1a3144;
        case 0x1a3148u: goto label_1a3148;
        case 0x1a314cu: goto label_1a314c;
        case 0x1a3150u: goto label_1a3150;
        case 0x1a3154u: goto label_1a3154;
        case 0x1a3158u: goto label_1a3158;
        case 0x1a315cu: goto label_1a315c;
        case 0x1a3160u: goto label_1a3160;
        case 0x1a3164u: goto label_1a3164;
        case 0x1a3168u: goto label_1a3168;
        case 0x1a316cu: goto label_1a316c;
        case 0x1a3170u: goto label_1a3170;
        case 0x1a3174u: goto label_1a3174;
        case 0x1a3178u: goto label_1a3178;
        case 0x1a317cu: goto label_1a317c;
        case 0x1a3180u: goto label_1a3180;
        case 0x1a3184u: goto label_1a3184;
        case 0x1a3188u: goto label_1a3188;
        case 0x1a318cu: goto label_1a318c;
        case 0x1a3190u: goto label_1a3190;
        case 0x1a3194u: goto label_1a3194;
        case 0x1a3198u: goto label_1a3198;
        case 0x1a319cu: goto label_1a319c;
        case 0x1a31a0u: goto label_1a31a0;
        case 0x1a31a4u: goto label_1a31a4;
        case 0x1a31a8u: goto label_1a31a8;
        case 0x1a31acu: goto label_1a31ac;
        case 0x1a31b0u: goto label_1a31b0;
        case 0x1a31b4u: goto label_1a31b4;
        case 0x1a31b8u: goto label_1a31b8;
        case 0x1a31bcu: goto label_1a31bc;
        case 0x1a31c0u: goto label_1a31c0;
        case 0x1a31c4u: goto label_1a31c4;
        case 0x1a31c8u: goto label_1a31c8;
        case 0x1a31ccu: goto label_1a31cc;
        case 0x1a31d0u: goto label_1a31d0;
        case 0x1a31d4u: goto label_1a31d4;
        case 0x1a31d8u: goto label_1a31d8;
        case 0x1a31dcu: goto label_1a31dc;
        case 0x1a31e0u: goto label_1a31e0;
        case 0x1a31e4u: goto label_1a31e4;
        case 0x1a31e8u: goto label_1a31e8;
        case 0x1a31ecu: goto label_1a31ec;
        case 0x1a31f0u: goto label_1a31f0;
        case 0x1a31f4u: goto label_1a31f4;
        case 0x1a31f8u: goto label_1a31f8;
        case 0x1a31fcu: goto label_1a31fc;
        case 0x1a3200u: goto label_1a3200;
        case 0x1a3204u: goto label_1a3204;
        case 0x1a3208u: goto label_1a3208;
        case 0x1a320cu: goto label_1a320c;
        case 0x1a3210u: goto label_1a3210;
        case 0x1a3214u: goto label_1a3214;
        case 0x1a3218u: goto label_1a3218;
        case 0x1a321cu: goto label_1a321c;
        case 0x1a3220u: goto label_1a3220;
        case 0x1a3224u: goto label_1a3224;
        case 0x1a3228u: goto label_1a3228;
        case 0x1a322cu: goto label_1a322c;
        case 0x1a3230u: goto label_1a3230;
        case 0x1a3234u: goto label_1a3234;
        case 0x1a3238u: goto label_1a3238;
        case 0x1a323cu: goto label_1a323c;
        case 0x1a3240u: goto label_1a3240;
        case 0x1a3244u: goto label_1a3244;
        case 0x1a3248u: goto label_1a3248;
        case 0x1a324cu: goto label_1a324c;
        case 0x1a3250u: goto label_1a3250;
        case 0x1a3254u: goto label_1a3254;
        case 0x1a3258u: goto label_1a3258;
        case 0x1a325cu: goto label_1a325c;
        case 0x1a3260u: goto label_1a3260;
        case 0x1a3264u: goto label_1a3264;
        case 0x1a3268u: goto label_1a3268;
        case 0x1a326cu: goto label_1a326c;
        case 0x1a3270u: goto label_1a3270;
        case 0x1a3274u: goto label_1a3274;
        case 0x1a3278u: goto label_1a3278;
        case 0x1a327cu: goto label_1a327c;
        case 0x1a3280u: goto label_1a3280;
        case 0x1a3284u: goto label_1a3284;
        case 0x1a3288u: goto label_1a3288;
        case 0x1a328cu: goto label_1a328c;
        case 0x1a3290u: goto label_1a3290;
        case 0x1a3294u: goto label_1a3294;
        case 0x1a3298u: goto label_1a3298;
        case 0x1a329cu: goto label_1a329c;
        case 0x1a32a0u: goto label_1a32a0;
        case 0x1a32a4u: goto label_1a32a4;
        case 0x1a32a8u: goto label_1a32a8;
        case 0x1a32acu: goto label_1a32ac;
        case 0x1a32b0u: goto label_1a32b0;
        case 0x1a32b4u: goto label_1a32b4;
        case 0x1a32b8u: goto label_1a32b8;
        case 0x1a32bcu: goto label_1a32bc;
        case 0x1a32c0u: goto label_1a32c0;
        case 0x1a32c4u: goto label_1a32c4;
        case 0x1a32c8u: goto label_1a32c8;
        case 0x1a32ccu: goto label_1a32cc;
        case 0x1a32d0u: goto label_1a32d0;
        case 0x1a32d4u: goto label_1a32d4;
        case 0x1a32d8u: goto label_1a32d8;
        case 0x1a32dcu: goto label_1a32dc;
        case 0x1a32e0u: goto label_1a32e0;
        case 0x1a32e4u: goto label_1a32e4;
        case 0x1a32e8u: goto label_1a32e8;
        case 0x1a32ecu: goto label_1a32ec;
        case 0x1a32f0u: goto label_1a32f0;
        case 0x1a32f4u: goto label_1a32f4;
        case 0x1a32f8u: goto label_1a32f8;
        case 0x1a32fcu: goto label_1a32fc;
        case 0x1a3300u: goto label_1a3300;
        case 0x1a3304u: goto label_1a3304;
        case 0x1a3308u: goto label_1a3308;
        case 0x1a330cu: goto label_1a330c;
        case 0x1a3310u: goto label_1a3310;
        case 0x1a3314u: goto label_1a3314;
        default: return;
    }

label_1a2b48:
    // 0x1a2b48: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1a2b4c:
    // 0x1a2b4c: 0x8d02009c  lw          $v0, 0x9C($t0)
    ctx->pc = 0x1a2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 156)));
label_1a2b50:
    // 0x1a2b50: 0x3e00008  jr          $ra
label_1a2b54:
    if (ctx->pc == 0x1A2B54u) {
        ctx->pc = 0x1A2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B50u;
        // 0x1a2b54: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B58u;
        goto label_1a2b58;
    }
    ctx->pc = 0x1A2B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B50u;
        // 0x1a2b54: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B58u;
label_1a2b58:
    // 0x1a2b58: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2b5c:
    // 0x1a2b5c: 0x3e00008  jr          $ra
label_1a2b60:
    if (ctx->pc == 0x1A2B60u) {
        ctx->pc = 0x1A2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B5Cu;
        // 0x1a2b60: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B64u;
        goto label_1a2b64;
    }
    ctx->pc = 0x1A2B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B5Cu;
        // 0x1a2b60: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B64u;
label_1a2b64:
    // 0x1a2b64: 0x0  nop
    ctx->pc = 0x1a2b64u;
    // NOP
label_1a2b68:
    // 0x1a2b68: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2b6c:
    // 0x1a2b6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a2b70:
    // 0x1a2b70: 0x3e00008  jr          $ra
label_1a2b74:
    if (ctx->pc == 0x1A2B74u) {
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B78u;
        goto label_1a2b78;
    }
    ctx->pc = 0x1A2B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B78u;
label_1a2b78:
    // 0x1a2b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a2b7c:
    // 0x1a2b7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a2b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b80:
    // 0x1a2b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a2b84:
    // 0x1a2b84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2b88:
    // 0x1a2b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2b8c:
    // 0x1a2b8c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x1a2b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1a2b90:
    // 0x1a2b90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a2b94:
    // 0x1a2b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b98:
    // 0x1a2b98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a2b9c:
    // 0x1a2b9c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1a2ba0:
    // 0x1a2ba0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1a2ba4:
    // 0x1a2ba4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1a2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_1a2ba8:
    // 0x1a2ba8: 0xc068cea  jal         func_1A33A8
label_1a2bac:
    if (ctx->pc == 0x1A2BACu) {
        ctx->pc = 0x1A2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA8u;
        // 0x1a2bac: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BB0u;
        goto label_1a2bb0;
    }
    ctx->pc = 0x1A2BA8u;
    SET_GPR_U32(ctx, 31, 0x1A2BB0u);
    ctx->pc = 0x1A2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BA8u;
    // 0x1a2bac: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A33A8u;
    { ctx->pc = 0x1a33a8; return; }
    ctx->pc = 0x1A2BB0u;
label_1a2bb0:
    // 0x1a2bb0: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1a2bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_1a2bb4:
    // 0x1a2bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2bb8:
    // 0x1a2bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2bbc:
    // 0x1a2bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2bc0:
    // 0x1a2bc0: 0x8068cae  j           func_1A32B8
label_1a2bc4:
    if (ctx->pc == 0x1A2BC4u) {
        ctx->pc = 0x1A2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BC0u;
        // 0x1a2bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BC8u;
        goto label_1a2bc8;
    }
    ctx->pc = 0x1A2BC0u;
    ctx->pc = 0x1A2BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BC0u;
    // 0x1a2bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A32B8u;
    goto label_1a32b8;
    ctx->pc = 0x1A2BC8u;
label_1a2bc8:
    // 0x1a2bc8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2bcc:
    // 0x1a2bcc: 0x8c6201b8  lw          $v0, 0x1B8($v1)
    ctx->pc = 0x1a2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
label_1a2bd0:
    // 0x1a2bd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2bd4:
    if (ctx->pc == 0x1A2BD4u) {
        ctx->pc = 0x1A2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BD0u;
        // 0x1a2bd4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BD8u;
        goto label_1a2bd8;
    }
    ctx->pc = 0x1A2BD0u;
    {
        const bool branch_taken_0x1a2bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bd0) {
            ctx->pc = 0x1A2BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BD0u;
            // 0x1a2bd4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BD8u;
            goto label_1a2bd8;
        }
    }
    ctx->pc = 0x1A2BD8u;
label_1a2bd8:
    // 0x1a2bd8: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x1a2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_1a2bdc:
    // 0x1a2bdc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2be0:
    if (ctx->pc == 0x1A2BE0u) {
        ctx->pc = 0x1A2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BDCu;
        // 0x1a2be0: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BE4u;
        goto label_1a2be4;
    }
    ctx->pc = 0x1A2BDCu;
    {
        const bool branch_taken_0x1a2bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bdc) {
            ctx->pc = 0x1A2BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BDCu;
            // 0x1a2be0: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BE4u;
            goto label_1a2be4;
        }
    }
    ctx->pc = 0x1A2BE4u;
label_1a2be4:
    // 0x1a2be4: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x1a2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
label_1a2be8:
    // 0x1a2be8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2bec:
    if (ctx->pc == 0x1A2BECu) {
        ctx->pc = 0x1A2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BE8u;
        // 0x1a2bec: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BF0u;
        goto label_1a2bf0;
    }
    ctx->pc = 0x1A2BE8u;
    {
        const bool branch_taken_0x1a2be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2be8) {
            ctx->pc = 0x1A2BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BE8u;
            // 0x1a2bec: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BF0u;
            goto label_1a2bf0;
        }
    }
    ctx->pc = 0x1A2BF0u;
label_1a2bf0:
    // 0x1a2bf0: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_1a2bf4:
    // 0x1a2bf4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2bf8:
    if (ctx->pc == 0x1A2BF8u) {
        ctx->pc = 0x1A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BF4u;
        // 0x1a2bf8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BFCu;
        goto label_1a2bfc;
    }
    ctx->pc = 0x1A2BF4u;
    {
        const bool branch_taken_0x1a2bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bf4) {
            ctx->pc = 0x1A2BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BF4u;
            // 0x1a2bf8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BFCu;
            goto label_1a2bfc;
        }
    }
    ctx->pc = 0x1A2BFCu;
label_1a2bfc:
    // 0x1a2bfc: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x1a2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_1a2c00:
    // 0x1a2c00: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2c04:
    if (ctx->pc == 0x1A2C04u) {
        ctx->pc = 0x1A2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C00u;
        // 0x1a2c04: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C08u;
        goto label_1a2c08;
    }
    ctx->pc = 0x1A2C00u;
    {
        const bool branch_taken_0x1a2c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c00) {
            ctx->pc = 0x1A2C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C00u;
            // 0x1a2c04: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C08u;
            goto label_1a2c08;
        }
    }
    ctx->pc = 0x1A2C08u;
label_1a2c08:
    // 0x1a2c08: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x1a2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
label_1a2c0c:
    // 0x1a2c0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2c10:
    if (ctx->pc == 0x1A2C10u) {
        ctx->pc = 0x1A2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C0Cu;
        // 0x1a2c10: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C14u;
        goto label_1a2c14;
    }
    ctx->pc = 0x1A2C0Cu;
    {
        const bool branch_taken_0x1a2c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c0c) {
            ctx->pc = 0x1A2C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C0Cu;
            // 0x1a2c10: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C14u;
            goto label_1a2c14;
        }
    }
    ctx->pc = 0x1A2C14u;
label_1a2c14:
    // 0x1a2c14: 0x3e00008  jr          $ra
label_1a2c18:
    if (ctx->pc == 0x1A2C18u) {
        ctx->pc = 0x1A2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C14u;
        // 0x1a2c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C1Cu;
        goto label_1a2c1c;
    }
    ctx->pc = 0x1A2C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C14u;
        // 0x1a2c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C1Cu;
label_1a2c1c:
    // 0x1a2c1c: 0x0  nop
    ctx->pc = 0x1a2c1cu;
    // NOP
label_1a2c20:
    // 0x1a2c20: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2c24:
    // 0x1a2c24: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a2c28:
    // 0x1a2c28: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x1a2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a2c2c:
    // 0x1a2c2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a2c30:
    // 0x1a2c30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a2c34:
    // 0x1a2c34: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1a2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
label_1a2c38:
    // 0x1a2c38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2c3c:
    // 0x1a2c3c: 0x3e00008  jr          $ra
label_1a2c40:
    if (ctx->pc == 0x1A2C40u) {
        ctx->pc = 0x1A2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C3Cu;
        // 0x1a2c40: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C44u;
        goto label_1a2c44;
    }
    ctx->pc = 0x1A2C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C3Cu;
        // 0x1a2c40: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C44u;
label_1a2c44:
    // 0x1a2c44: 0x0  nop
    ctx->pc = 0x1a2c44u;
    // NOP
label_1a2c48:
    // 0x1a2c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2c4c:
    // 0x1a2c4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c50:
    // 0x1a2c50: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1a2c54:
    if (ctx->pc == 0x1A2C54u) {
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C58u;
        goto label_1a2c58;
    }
    ctx->pc = 0x1A2C50u;
    {
        const bool branch_taken_0x1a2c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c50) {
            ctx->pc = 0x1A2C88u;
            goto label_1a2c88;
        }
    }
    ctx->pc = 0x1A2C58u;
label_1a2c58:
    // 0x1a2c58: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x1a2c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2c5c:
    // 0x1a2c5c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_1a2c60:
    if (ctx->pc == 0x1A2C60u) {
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C64u;
        goto label_1a2c64;
    }
    ctx->pc = 0x1A2C5Cu;
    {
        const bool branch_taken_0x1a2c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c5c) {
            ctx->pc = 0x1A2C8Cu;
            goto label_1a2c8c;
        }
    }
    ctx->pc = 0x1A2C64u;
label_1a2c64:
    // 0x1a2c64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2c68:
    // 0x1a2c68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a2c6c:
    // 0x1a2c6c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1a2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a2c70:
    // 0x1a2c70: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a2c74:
    // 0x1a2c74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a2c78:
    if (ctx->pc == 0x1A2C78u) {
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C7Cu;
        goto label_1a2c7c;
    }
    ctx->pc = 0x1A2C74u;
    {
        const bool branch_taken_0x1a2c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c74) {
            ctx->pc = 0x1A2C8Cu;
            goto label_1a2c8c;
        }
    }
    ctx->pc = 0x1A2C7Cu;
label_1a2c7c:
    // 0x1a2c7c: 0x60f809  jalr        $v1
label_1a2c80:
    if (ctx->pc == 0x1A2C80u) {
        ctx->pc = 0x1A2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C7Cu;
        // 0x1a2c80: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C84u;
        goto label_1a2c84;
    }
    ctx->pc = 0x1A2C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A2C84u);
        ctx->pc = 0x1A2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C7Cu;
        // 0x1a2c80: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C7Cu, 0x1A2C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2C84u;
label_1a2c84:
    // 0x1a2c84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a2c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c88:
    // 0x1a2c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2c8c:
    // 0x1a2c8c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a2c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c90:
    // 0x1a2c90: 0x3e00008  jr          $ra
label_1a2c94:
    if (ctx->pc == 0x1A2C94u) {
        ctx->pc = 0x1A2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C90u;
        // 0x1a2c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C98u;
        goto label_1a2c98;
    }
    ctx->pc = 0x1A2C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C90u;
        // 0x1a2c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C98u;
label_1a2c98:
    // 0x1a2c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a2c9c:
    // 0x1a2c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2ca0:
    // 0x1a2ca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a2ca4:
    // 0x1a2ca4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a2ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ca8:
    // 0x1a2ca8: 0xc068b12  jal         func_1A2C48
label_1a2cac:
    if (ctx->pc == 0x1A2CACu) {
        ctx->pc = 0x1A2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CA8u;
        // 0x1a2cac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CB0u;
        goto label_1a2cb0;
    }
    ctx->pc = 0x1A2CA8u;
    SET_GPR_U32(ctx, 31, 0x1A2CB0u);
    ctx->pc = 0x1A2CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2CA8u;
    // 0x1a2cac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    goto label_1a2c48;
    ctx->pc = 0x1A2CB0u;
label_1a2cb0:
    // 0x1a2cb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2cb4:
    // 0x1a2cb4: 0x3e00008  jr          $ra
label_1a2cb8:
    if (ctx->pc == 0x1A2CB8u) {
        ctx->pc = 0x1A2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CB4u;
        // 0x1a2cb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CBCu;
        goto label_1a2cbc;
    }
    ctx->pc = 0x1A2CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CB4u;
        // 0x1a2cb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CBCu;
label_1a2cbc:
    // 0x1a2cbc: 0x0  nop
    ctx->pc = 0x1a2cbcu;
    // NOP
label_1a2cc0:
    // 0x1a2cc0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2cc4:
    // 0x1a2cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2cc8:
    // 0x1a2cc8: 0xfc450078  sd          $a1, 0x78($v0)
    ctx->pc = 0x1a2cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 5));
label_1a2ccc:
    // 0x1a2ccc: 0x3e00008  jr          $ra
label_1a2cd0:
    if (ctx->pc == 0x1A2CD0u) {
        ctx->pc = 0x1A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CCCu;
        // 0x1a2cd0: 0xac430070  sw          $v1, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CD4u;
        goto label_1a2cd4;
    }
    ctx->pc = 0x1A2CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CCCu;
        // 0x1a2cd0: 0xac430070  sw          $v1, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CD4u;
label_1a2cd4:
    // 0x1a2cd4: 0x0  nop
    ctx->pc = 0x1a2cd4u;
    // NOP
label_1a2cd8:
    // 0x1a2cd8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2cdc:
    // 0x1a2cdc: 0xfc400078  sd          $zero, 0x78($v0)
    ctx->pc = 0x1a2cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 0));
label_1a2ce0:
    // 0x1a2ce0: 0x3e00008  jr          $ra
label_1a2ce4:
    if (ctx->pc == 0x1A2CE4u) {
        ctx->pc = 0x1A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CE0u;
        // 0x1a2ce4: 0xac400070  sw          $zero, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CE8u;
        goto label_1a2ce8;
    }
    ctx->pc = 0x1A2CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CE0u;
        // 0x1a2ce4: 0xac400070  sw          $zero, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CE8u;
label_1a2ce8:
    // 0x1a2ce8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2cec:
    // 0x1a2cec: 0x3e00008  jr          $ra
label_1a2cf0:
    if (ctx->pc == 0x1A2CF0u) {
        ctx->pc = 0x1A2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CECu;
        // 0x1a2cf0: 0xac4500d8  sw          $a1, 0xD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CF4u;
        goto label_1a2cf4;
    }
    ctx->pc = 0x1A2CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CECu;
        // 0x1a2cf0: 0xac4500d8  sw          $a1, 0xD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CF4u;
label_1a2cf4:
    // 0x1a2cf4: 0x0  nop
    ctx->pc = 0x1a2cf4u;
    // NOP
label_1a2cf8:
    // 0x1a2cf8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2cfc:
    // 0x1a2cfc: 0x3e00008  jr          $ra
label_1a2d00:
    if (ctx->pc == 0x1A2D00u) {
        ctx->pc = 0x1A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CFCu;
        // 0x1a2d00: 0x8c6200cc  lw          $v0, 0xCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D04u;
        goto label_1a2d04;
    }
    ctx->pc = 0x1A2CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CFCu;
        // 0x1a2d00: 0x8c6200cc  lw          $v0, 0xCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D04u;
label_1a2d04:
    // 0x1a2d04: 0x0  nop
    ctx->pc = 0x1a2d04u;
    // NOP
label_1a2d08:
    // 0x1a2d08: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d0c:
    // 0x1a2d0c: 0x3e00008  jr          $ra
label_1a2d10:
    if (ctx->pc == 0x1A2D10u) {
        ctx->pc = 0x1A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D0Cu;
        // 0x1a2d10: 0x8c6200d0  lw          $v0, 0xD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D14u;
        goto label_1a2d14;
    }
    ctx->pc = 0x1A2D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D0Cu;
        // 0x1a2d10: 0x8c6200d0  lw          $v0, 0xD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D14u;
label_1a2d14:
    // 0x1a2d14: 0x0  nop
    ctx->pc = 0x1a2d14u;
    // NOP
label_1a2d18:
    // 0x1a2d18: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d1c:
    // 0x1a2d1c: 0x3e00008  jr          $ra
label_1a2d20:
    if (ctx->pc == 0x1A2D20u) {
        ctx->pc = 0x1A2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D1Cu;
        // 0x1a2d20: 0x244200b4  addiu       $v0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D24u;
        goto label_1a2d24;
    }
    ctx->pc = 0x1A2D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D1Cu;
        // 0x1a2d20: 0x244200b4  addiu       $v0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D24u;
label_1a2d24:
    // 0x1a2d24: 0x0  nop
    ctx->pc = 0x1a2d24u;
    // NOP
label_1a2d28:
    // 0x1a2d28: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d2c:
    // 0x1a2d2c: 0x3e00008  jr          $ra
label_1a2d30:
    if (ctx->pc == 0x1A2D30u) {
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x244200b4  addiu       $v0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D34u;
        goto label_1a2d34;
    }
    ctx->pc = 0x1A2D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x244200b4  addiu       $v0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D34u;
label_1a2d34:
    // 0x1a2d34: 0x0  nop
    ctx->pc = 0x1a2d34u;
    // NOP
label_1a2d38:
    // 0x1a2d38: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d3c:
    // 0x1a2d3c: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x1a2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
label_1a2d40:
    // 0x1a2d40: 0x3e00008  jr          $ra
label_1a2d44:
    if (ctx->pc == 0x1A2D44u) {
        ctx->pc = 0x1A2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D40u;
        // 0x1a2d44: 0xac6500e8  sw          $a1, 0xE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D48u;
        goto label_1a2d48;
    }
    ctx->pc = 0x1A2D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D40u;
        // 0x1a2d44: 0xac6500e8  sw          $a1, 0xE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D48u;
label_1a2d48:
    // 0x1a2d48: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d4c:
    // 0x1a2d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2d50:
    // 0x1a2d50: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x1a2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
label_1a2d54:
    // 0x1a2d54: 0x3e00008  jr          $ra
label_1a2d58:
    if (ctx->pc == 0x1A2D58u) {
        ctx->pc = 0x1A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D54u;
        // 0x1a2d58: 0xfc6500f0  sd          $a1, 0xF0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D5Cu;
        goto label_1a2d5c;
    }
    ctx->pc = 0x1A2D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D54u;
        // 0x1a2d58: 0xfc6500f0  sd          $a1, 0xF0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D5Cu;
label_1a2d5c:
    // 0x1a2d5c: 0x0  nop
    ctx->pc = 0x1a2d5cu;
    // NOP
label_1a2d60:
    // 0x1a2d60: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1a2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_1a2d64:
    // 0x1a2d64: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1a2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1a2d68:
    // 0x1a2d68: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1a2d6c:
    // 0x1a2d6c: 0x3e00008  jr          $ra
label_1a2d70:
    if (ctx->pc == 0x1A2D70u) {
        ctx->pc = 0x1A2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D6Cu;
        // 0x1a2d70: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D74u;
        goto label_1a2d74;
    }
    ctx->pc = 0x1A2D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D6Cu;
        // 0x1a2d70: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D74u;
label_1a2d74:
    // 0x1a2d74: 0x0  nop
    ctx->pc = 0x1a2d74u;
    // NOP
label_1a2d78:
    // 0x1a2d78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a2d7c:
    // 0x1a2d7c: 0x3e00008  jr          $ra
label_1a2d80:
    if (ctx->pc == 0x1A2D80u) {
        ctx->pc = 0x1A2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D7Cu;
        // 0x1a2d80: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D84u;
        goto label_1a2d84;
    }
    ctx->pc = 0x1A2D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D7Cu;
        // 0x1a2d80: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D84u;
label_1a2d84:
    // 0x1a2d84: 0x0  nop
    ctx->pc = 0x1a2d84u;
    // NOP
label_1a2d88:
    // 0x1a2d88: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a2d8c:
    // 0x1a2d8c: 0x3e00008  jr          $ra
label_1a2d90:
    if (ctx->pc == 0x1A2D90u) {
        ctx->pc = 0x1A2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D8Cu;
        // 0x1a2d90: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D94u;
        goto label_1a2d94;
    }
    ctx->pc = 0x1A2D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D8Cu;
        // 0x1a2d90: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D94u;
label_1a2d94:
    // 0x1a2d94: 0x0  nop
    ctx->pc = 0x1a2d94u;
    // NOP
label_1a2d98:
    // 0x1a2d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2d9c:
    // 0x1a2d9c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1a2d9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2da0:
    // 0x1a2da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2da4:
    // 0x1a2da4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_1a2da8:
    if (ctx->pc == 0x1A2DA8u) {
        ctx->pc = 0x1A2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DA4u;
        // 0x1a2da8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DACu;
        goto label_1a2dac;
    }
    ctx->pc = 0x1A2DA4u;
    {
        const bool branch_taken_0x1a2da4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2da4) {
            ctx->pc = 0x1A2DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2DA4u;
            // 0x1a2da8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2DACu;
            goto label_1a2dac;
        }
    }
    ctx->pc = 0x1A2DACu;
label_1a2dac:
    // 0x1a2dac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1a2db0:
    // 0x1a2db0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1a2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a2db4:
    // 0x1a2db4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1a2db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1a2db8:
    // 0x1a2db8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2dbc:
    // 0x1a2dbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a2dc0:
    // 0x1a2dc0: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x1a2dc0u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a2dc4:
    // 0x1a2dc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a2dc8:
    // 0x1a2dc8: 0x1012  mflo        $v0
    ctx->pc = 0x1a2dc8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1a2dcc:
    // 0x1a2dcc: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1a2dccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a2dd0:
    // 0x1a2dd0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a2dd4:
    // 0x1a2dd4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1a2dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1a2dd8:
    // 0x1a2dd8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_1a2ddc:
    if (ctx->pc == 0x1A2DDCu) {
        ctx->pc = 0x1A2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DD8u;
        // 0x1a2ddc: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DE0u;
        goto label_1a2de0;
    }
    ctx->pc = 0x1A2DD8u;
    {
        const bool branch_taken_0x1a2dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2dd8) {
            ctx->pc = 0x1A2DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2DD8u;
            // 0x1a2ddc: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2DE8u;
            goto label_1a2de8;
        }
    }
    ctx->pc = 0x1A2DE0u;
label_1a2de0:
    // 0x1a2de0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a2de4:
    if (ctx->pc == 0x1A2DE4u) {
        ctx->pc = 0x1A2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DE0u;
        // 0x1a2de4: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DE8u;
        goto label_1a2de8;
    }
    ctx->pc = 0x1A2DE0u;
    {
        const bool branch_taken_0x1a2de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DE0u;
        // 0x1a2de4: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2de0) {
            ctx->pc = 0x1A2DF8u;
            goto label_1a2df8;
        }
    }
    ctx->pc = 0x1A2DE8u;
label_1a2de8:
    // 0x1a2de8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1a2de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a2dec:
    // 0x1a2dec: 0xc068d2c  jal         func_1A34B0
label_1a2df0:
    if (ctx->pc == 0x1A2DF0u) {
        ctx->pc = 0x1A2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DECu;
        // 0x1a2df0: 0x24a5a2f8  addiu       $a1, $a1, -0x5D08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DF4u;
        goto label_1a2df4;
    }
    ctx->pc = 0x1A2DECu;
    SET_GPR_U32(ctx, 31, 0x1A2DF4u);
    ctx->pc = 0x1A2DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DECu;
    // 0x1a2df0: 0x24a5a2f8  addiu       $a1, $a1, -0x5D08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A2DF4u;
label_1a2df4:
    // 0x1a2df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2df8:
    // 0x1a2df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2dfc:
    // 0x1a2dfc: 0x3e00008  jr          $ra
label_1a2e00:
    if (ctx->pc == 0x1A2E00u) {
        ctx->pc = 0x1A2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DFCu;
        // 0x1a2e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E04u;
        goto label_1a2e04;
    }
    ctx->pc = 0x1A2DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DFCu;
        // 0x1a2e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E04u;
label_1a2e04:
    // 0x1a2e04: 0x0  nop
    ctx->pc = 0x1a2e04u;
    // NOP
label_1a2e08:
    // 0x1a2e08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2e0c:
    // 0x1a2e0c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a2e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a2e10:
    // 0x1a2e10: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1a2e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a2e14:
    // 0x1a2e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2e18:
    // 0x1a2e18: 0x3e00008  jr          $ra
label_1a2e1c:
    if (ctx->pc == 0x1A2E1Cu) {
        ctx->pc = 0x1A2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E18u;
        // 0x1a2e1c: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E20u;
        goto label_1a2e20;
    }
    ctx->pc = 0x1A2E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E18u;
        // 0x1a2e1c: 0x451023  subu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E20u;
label_1a2e20:
    // 0x1a2e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a2e24:
    // 0x1a2e24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a2e28:
    // 0x1a2e28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a2e2c:
    // 0x1a2e2c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a2e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2e30:
    // 0x1a2e30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a2e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a2e34:
    // 0x1a2e34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a2e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e38:
    // 0x1a2e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a2e3c:
    // 0x1a2e3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e40:
    // 0x1a2e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2e44:
    // 0x1a2e44: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x1a2e44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a2e48:
    // 0x1a2e48: 0x8e0600d8  lw          $a2, 0xD8($s0)
    ctx->pc = 0x1a2e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1a2e4c:
    // 0x1a2e4c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1a2e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_1a2e50:
    // 0x1a2e50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a2e54:
    if (ctx->pc == 0x1A2E54u) {
        ctx->pc = 0x1A2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E50u;
        // 0x1a2e54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E58u;
        goto label_1a2e58;
    }
    ctx->pc = 0x1A2E50u;
    {
        const bool branch_taken_0x1a2e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E50u;
        // 0x1a2e54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e50) {
            ctx->pc = 0x1A2E70u;
            goto label_1a2e70;
        }
    }
    ctx->pc = 0x1A2E58u;
label_1a2e58:
    // 0x1a2e58: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a2e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a2e5c:
    // 0x1a2e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e60:
    // 0x1a2e60: 0xc068d1e  jal         func_1A3478
label_1a2e64:
    if (ctx->pc == 0x1A2E64u) {
        ctx->pc = 0x1A2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E60u;
        // 0x1a2e64: 0x24a5a318  addiu       $a1, $a1, -0x5CE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E68u;
        goto label_1a2e68;
    }
    ctx->pc = 0x1A2E60u;
    SET_GPR_U32(ctx, 31, 0x1A2E68u);
    ctx->pc = 0x1A2E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E60u;
    // 0x1a2e64: 0x24a5a318  addiu       $a1, $a1, -0x5CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    { ctx->pc = 0x1a3478; return; }
    ctx->pc = 0x1A2E68u;
label_1a2e68:
    // 0x1a2e68: 0x10000042  b           . + 4 + (0x42 << 2)
label_1a2e6c:
    if (ctx->pc == 0x1A2E6Cu) {
        ctx->pc = 0x1A2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E68u;
        // 0x1a2e6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E70u;
        goto label_1a2e70;
    }
    ctx->pc = 0x1A2E68u;
    {
        const bool branch_taken_0x1a2e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E68u;
        // 0x1a2e6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e68) {
            ctx->pc = 0x1A2F74u;
            goto label_1a2f74;
        }
    }
    ctx->pc = 0x1A2E70u;
label_1a2e70:
    // 0x1a2e70: 0xae000820  sw          $zero, 0x820($s0)
    ctx->pc = 0x1a2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 0));
label_1a2e74:
    // 0x1a2e74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2e78:
    // 0x1a2e78: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_1a2e7c:
    if (ctx->pc == 0x1A2E7Cu) {
        ctx->pc = 0x1A2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E78u;
        // 0x1a2e7c: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E80u;
        goto label_1a2e80;
    }
    ctx->pc = 0x1A2E78u;
    {
        const bool branch_taken_0x1a2e78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E78u;
        // 0x1a2e7c: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e78) {
            ctx->pc = 0x1A2EB0u;
            goto label_1a2eb0;
        }
    }
    ctx->pc = 0x1A2E80u;
label_1a2e80:
    // 0x1a2e80: 0xc067e60  jal         func_19F980
label_1a2e84:
    if (ctx->pc == 0x1A2E84u) {
        ctx->pc = 0x1A2E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E80u;
        // 0x1a2e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E88u;
        goto label_1a2e88;
    }
    ctx->pc = 0x1A2E80u;
    SET_GPR_U32(ctx, 31, 0x1A2E88u);
    ctx->pc = 0x1A2E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E80u;
    // 0x1a2e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F980u;
    { ctx->pc = 0x19f980; return; }
    ctx->pc = 0x1A2E88u;
label_1a2e88:
    // 0x1a2e88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a2e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e8c:
    // 0x1a2e8c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_1a2e90:
    if (ctx->pc == 0x1A2E90u) {
        ctx->pc = 0x1A2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E8Cu;
        // 0x1a2e90: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E94u;
        goto label_1a2e94;
    }
    ctx->pc = 0x1A2E8Cu;
    {
        const bool branch_taken_0x1a2e8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E8Cu;
        // 0x1a2e90: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e8c) {
            ctx->pc = 0x1A2EB0u;
            goto label_1a2eb0;
        }
    }
    ctx->pc = 0x1A2E94u;
label_1a2e94:
    // 0x1a2e94: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1a2e98:
    // 0x1a2e98: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_1a2e9c:
    // 0x1a2e9c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1a2ea0:
    if (ctx->pc == 0x1A2EA0u) {
        ctx->pc = 0x1A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E9Cu;
        // 0x1a2ea0: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EA4u;
        goto label_1a2ea4;
    }
    ctx->pc = 0x1A2E9Cu;
    {
        const bool branch_taken_0x1a2e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E9Cu;
        // 0x1a2ea0: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2e9c) {
            ctx->pc = 0x1A2EB0u;
            goto label_1a2eb0;
        }
    }
    ctx->pc = 0x1A2EA4u;
label_1a2ea4:
    // 0x1a2ea4: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x1a2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_1a2ea8:
    // 0x1a2ea8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1a2eac:
    if (ctx->pc == 0x1A2EACu) {
        ctx->pc = 0x1A2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EA8u;
        // 0x1a2eac: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EB0u;
        goto label_1a2eb0;
    }
    ctx->pc = 0x1A2EA8u;
    {
        const bool branch_taken_0x1a2ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EA8u;
        // 0x1a2eac: 0x2e620005  sltiu       $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ea8) {
            ctx->pc = 0x1A2E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e80;
        }
    }
    ctx->pc = 0x1A2EB0u;
label_1a2eb0:
    // 0x1a2eb0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1a2eb4:
    if (ctx->pc == 0x1A2EB4u) {
        ctx->pc = 0x1A2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB0u;
        // 0x1a2eb4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EB8u;
        goto label_1a2eb8;
    }
    ctx->pc = 0x1A2EB0u;
    {
        const bool branch_taken_0x1a2eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB0u;
        // 0x1a2eb4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2eb0) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2EB8u;
label_1a2eb8:
    // 0x1a2eb8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1a2ebc:
    // 0x1a2ebc: 0x2442a360  addiu       $v0, $v0, -0x5CA0
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943584));
label_1a2ec0:
    // 0x1a2ec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a2ec4:
    // 0x1a2ec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2ec8:
    // 0x1a2ec8: 0x800008  jr          $a0
label_1a2ecc:
    if (ctx->pc == 0x1A2ECCu) {
        ctx->pc = 0x1A2ED0u;
        goto label_1a2ed0;
    }
    ctx->pc = 0x1A2EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2ED0u: goto label_1a2ed0;
            case 0x1A2EE4u: goto label_1a2ee4;
            case 0x1A2F14u: goto label_1a2f14;
            case 0x1A2F38u: goto label_1a2f38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A2ED0u;
label_1a2ed0:
    // 0x1a2ed0: 0xc068c94  jal         func_1A3250
label_1a2ed4:
    if (ctx->pc == 0x1A2ED4u) {
        ctx->pc = 0x1A2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ED0u;
        // 0x1a2ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2ED8u;
        goto label_1a2ed8;
    }
    ctx->pc = 0x1A2ED0u;
    SET_GPR_U32(ctx, 31, 0x1A2ED8u);
    ctx->pc = 0x1A2ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2ED0u;
    // 0x1a2ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3250u;
    goto label_1a3250;
    ctx->pc = 0x1A2ED8u;
label_1a2ed8:
    // 0x1a2ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2edc:
    // 0x1a2edc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a2ee0:
    if (ctx->pc == 0x1A2EE0u) {
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EE4u;
        goto label_1a2ee4;
    }
    ctx->pc = 0x1A2EDCu;
    {
        const bool branch_taken_0x1a2edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2edc) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2EE4u;
label_1a2ee4:
    // 0x1a2ee4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1a2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_1a2ee8:
    // 0x1a2ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2eec:
    // 0x1a2eec: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1a2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_1a2ef0:
    // 0x1a2ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ef4:
    // 0x1a2ef4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1a2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_1a2ef8:
    // 0x1a2ef8: 0xc068c2a  jal         func_1A30A8
label_1a2efc:
    if (ctx->pc == 0x1A2EFCu) {
        ctx->pc = 0x1A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EF8u;
        // 0x1a2efc: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F00u;
        goto label_1a2f00;
    }
    ctx->pc = 0x1A2EF8u;
    SET_GPR_U32(ctx, 31, 0x1A2F00u);
    ctx->pc = 0x1A2EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EF8u;
    // 0x1a2efc: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    goto label_1a30a8;
    ctx->pc = 0x1A2F00u;
label_1a2f00:
    // 0x1a2f00: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1a2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1a2f04:
    // 0x1a2f04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f08:
    // 0x1a2f08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2f0c:
    // 0x1a2f0c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a2f10:
    if (ctx->pc == 0x1A2F10u) {
        ctx->pc = 0x1A2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F0Cu;
        // 0x1a2f10: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F14u;
        goto label_1a2f14;
    }
    ctx->pc = 0x1A2F0Cu;
    {
        const bool branch_taken_0x1a2f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F0Cu;
        // 0x1a2f10: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f0c) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2F14u;
label_1a2f14:
    // 0x1a2f14: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1a2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1a2f18:
    // 0x1a2f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f1c:
    // 0x1a2f1c: 0xc068c2a  jal         func_1A30A8
label_1a2f20:
    if (ctx->pc == 0x1A2F20u) {
        ctx->pc = 0x1A2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F1Cu;
        // 0x1a2f20: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F24u;
        goto label_1a2f24;
    }
    ctx->pc = 0x1A2F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F24u);
    ctx->pc = 0x1A2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F1Cu;
    // 0x1a2f20: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    goto label_1a30a8;
    ctx->pc = 0x1A2F24u;
label_1a2f24:
    // 0x1a2f24: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1a2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1a2f28:
    // 0x1a2f28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f2c:
    // 0x1a2f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2f30:
    // 0x1a2f30: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a2f34:
    if (ctx->pc == 0x1A2F34u) {
        ctx->pc = 0x1A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F30u;
        // 0x1a2f34: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F38u;
        goto label_1a2f38;
    }
    ctx->pc = 0x1A2F30u;
    {
        const bool branch_taken_0x1a2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F30u;
        // 0x1a2f34: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f30) {
            ctx->pc = 0x1A2F58u;
            goto label_1a2f58;
        }
    }
    ctx->pc = 0x1A2F38u;
label_1a2f38:
    // 0x1a2f38: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1a2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1a2f3c:
    // 0x1a2f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f40:
    // 0x1a2f40: 0xc068c2a  jal         func_1A30A8
label_1a2f44:
    if (ctx->pc == 0x1A2F44u) {
        ctx->pc = 0x1A2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F40u;
        // 0x1a2f44: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F48u;
        goto label_1a2f48;
    }
    ctx->pc = 0x1A2F40u;
    SET_GPR_U32(ctx, 31, 0x1A2F48u);
    ctx->pc = 0x1A2F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F40u;
    // 0x1a2f44: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    goto label_1a30a8;
    ctx->pc = 0x1A2F48u;
label_1a2f48:
    // 0x1a2f48: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1a2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1a2f4c:
    // 0x1a2f4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f50:
    // 0x1a2f50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2f54:
    // 0x1a2f54: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1a2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_1a2f58:
    // 0x1a2f58: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1a2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_1a2f5c:
    // 0x1a2f5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a2f60:
    if (ctx->pc == 0x1A2F60u) {
        ctx->pc = 0x1A2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F5Cu;
        // 0x1a2f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F64u;
        goto label_1a2f64;
    }
    ctx->pc = 0x1A2F5Cu;
    {
        const bool branch_taken_0x1a2f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F5Cu;
        // 0x1a2f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f5c) {
            ctx->pc = 0x1A2F74u;
            goto label_1a2f74;
        }
    }
    ctx->pc = 0x1A2F64u;
label_1a2f64:
    // 0x1a2f64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2f68:
    // 0x1a2f68: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
label_1a2f6c:
    if (ctx->pc == 0x1A2F6Cu) {
        ctx->pc = 0x1A2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F68u;
        // 0x1a2f6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F70u;
        goto label_1a2f70;
    }
    ctx->pc = 0x1A2F68u;
    {
        const bool branch_taken_0x1a2f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F68u;
        // 0x1a2f6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f68) {
            ctx->pc = 0x1A2E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2e78;
        }
    }
    ctx->pc = 0x1A2F70u;
label_1a2f70:
    // 0x1a2f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2f74:
    // 0x1a2f74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a2f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a2f78:
    // 0x1a2f78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a2f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2f7c:
    // 0x1a2f7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a2f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2f80:
    // 0x1a2f80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a2f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2f84:
    // 0x1a2f84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2f88:
    // 0x1a2f88: 0x3e00008  jr          $ra
label_1a2f8c:
    if (ctx->pc == 0x1A2F8Cu) {
        ctx->pc = 0x1A2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F88u;
        // 0x1a2f8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F90u;
        goto label_1a2f90;
    }
    ctx->pc = 0x1A2F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F88u;
        // 0x1a2f8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2F90u;
label_1a2f90:
    // 0x1a2f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a2f94:
    // 0x1a2f94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2f98:
    // 0x1a2f98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a2f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a2f9c:
    // 0x1a2f9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a2f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a2fa0:
    // 0x1a2fa0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a2fa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fa4:
    // 0x1a2fa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a2fa8:
    // 0x1a2fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fac:
    // 0x1a2fac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a2fb0:
    // 0x1a2fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2fb4:
    // 0x1a2fb4: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_1a2fb8:
    if (ctx->pc == 0x1A2FB8u) {
        ctx->pc = 0x1A2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FB4u;
        // 0x1a2fb8: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FBCu;
        goto label_1a2fbc;
    }
    ctx->pc = 0x1A2FB4u;
    {
        const bool branch_taken_0x1a2fb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FB4u;
        // 0x1a2fb8: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fb4) {
            ctx->pc = 0x1A2FC8u;
            goto label_1a2fc8;
        }
    }
    ctx->pc = 0x1A2FBCu;
label_1a2fbc:
    // 0x1a2fbc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1a2fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1a2fc0:
    // 0x1a2fc0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1a2fc4:
    if (ctx->pc == 0x1A2FC4u) {
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FC8u;
        goto label_1a2fc8;
    }
    ctx->pc = 0x1A2FC0u;
    {
        const bool branch_taken_0x1a2fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fc0) {
            ctx->pc = 0x1A3004u;
            goto label_1a3004;
        }
    }
    ctx->pc = 0x1A2FC8u;
label_1a2fc8:
    // 0x1a2fc8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a2fcc:
    // 0x1a2fcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a2fd0:
    if (ctx->pc == 0x1A2FD0u) {
        ctx->pc = 0x1A2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FCCu;
        // 0x1a2fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FD4u;
        goto label_1a2fd4;
    }
    ctx->pc = 0x1A2FCCu;
    {
        const bool branch_taken_0x1a2fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FCCu;
        // 0x1a2fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fcc) {
            ctx->pc = 0x1A2FE0u;
            goto label_1a2fe0;
        }
    }
    ctx->pc = 0x1A2FD4u;
label_1a2fd4:
    // 0x1a2fd4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a2fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a2fd8:
    // 0x1a2fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2fdc:
    // 0x1a2fdc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a2fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a2fe0:
    // 0x1a2fe0: 0xc0680e0  jal         func_1A0380
label_1a2fe4:
    if (ctx->pc == 0x1A2FE4u) {
        ctx->pc = 0x1A2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FE0u;
        // 0x1a2fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FE8u;
        goto label_1a2fe8;
    }
    ctx->pc = 0x1A2FE0u;
    SET_GPR_U32(ctx, 31, 0x1A2FE8u);
    ctx->pc = 0x1A2FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FE0u;
    // 0x1a2fe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    { ctx->pc = 0x1a0380; return; }
    ctx->pc = 0x1A2FE8u;
label_1a2fe8:
    // 0x1a2fe8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a2fec:
    if (ctx->pc == 0x1A2FECu) {
        ctx->pc = 0x1A2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FE8u;
        // 0x1a2fec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FF0u;
        goto label_1a2ff0;
    }
    ctx->pc = 0x1A2FE8u;
    {
        const bool branch_taken_0x1a2fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FE8u;
        // 0x1a2fec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fe8) {
            ctx->pc = 0x1A2FFCu;
            goto label_1a2ffc;
        }
    }
    ctx->pc = 0x1A2FF0u;
label_1a2ff0:
    // 0x1a2ff0: 0xc068088  jal         func_1A0220
label_1a2ff4:
    if (ctx->pc == 0x1A2FF4u) {
        ctx->pc = 0x1A2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FF0u;
        // 0x1a2ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FF8u;
        goto label_1a2ff8;
    }
    ctx->pc = 0x1A2FF0u;
    SET_GPR_U32(ctx, 31, 0x1A2FF8u);
    ctx->pc = 0x1A2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2FF0u;
    // 0x1a2ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0220u;
    { ctx->pc = 0x1a0220; return; }
    ctx->pc = 0x1A2FF8u;
label_1a2ff8:
    // 0x1a2ff8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1a2ff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a2ffc:
    // 0x1a2ffc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3000:
    if (ctx->pc == 0x1A3000u) {
        ctx->pc = 0x1A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FFCu;
        // 0x1a3000: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3004u;
        goto label_1a3004;
    }
    ctx->pc = 0x1A2FFCu;
    {
        const bool branch_taken_0x1a2ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FFCu;
        // 0x1a3000: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ffc) {
            ctx->pc = 0x1A301Cu;
            goto label_1a301c;
        }
    }
    ctx->pc = 0x1A3004u;
label_1a3004:
    // 0x1a3004: 0xc0680e0  jal         func_1A0380
label_1a3008:
    if (ctx->pc == 0x1A3008u) {
        ctx->pc = 0x1A3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3004u;
        // 0x1a3008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A300Cu;
        goto label_1a300c;
    }
    ctx->pc = 0x1A3004u;
    SET_GPR_U32(ctx, 31, 0x1A300Cu);
    ctx->pc = 0x1A3008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3004u;
    // 0x1a3008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    { ctx->pc = 0x1a0380; return; }
    ctx->pc = 0x1A300Cu;
label_1a300c:
    // 0x1a300c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a300cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3010:
    // 0x1a3010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a3010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3014:
    // 0x1a3014: 0xc068b26  jal         func_1A2C98
label_1a3018:
    if (ctx->pc == 0x1A3018u) {
        ctx->pc = 0x1A3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3014u;
        // 0x1a3018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A301Cu;
        goto label_1a301c;
    }
    ctx->pc = 0x1A3014u;
    SET_GPR_U32(ctx, 31, 0x1A301Cu);
    ctx->pc = 0x1A3018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3014u;
    // 0x1a3018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    goto label_1a2c98;
    ctx->pc = 0x1A301Cu;
label_1a301c:
    // 0x1a301c: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1a301cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1a3020:
    // 0x1a3020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3024:
    // 0x1a3024: 0xc0680bc  jal         func_1A02F0
label_1a3028:
    if (ctx->pc == 0x1A3028u) {
        ctx->pc = 0x1A3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3024u;
        // 0x1a3028: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A302Cu;
        goto label_1a302c;
    }
    ctx->pc = 0x1A3024u;
    SET_GPR_U32(ctx, 31, 0x1A302Cu);
    ctx->pc = 0x1A3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3024u;
    // 0x1a3028: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02F0u;
    { ctx->pc = 0x1a02f0; return; }
    ctx->pc = 0x1A302Cu;
label_1a302c:
    // 0x1a302c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a302cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1a3030:
    // 0x1a3030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3034:
    // 0x1a3034: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1a3038:
    if (ctx->pc == 0x1A3038u) {
        ctx->pc = 0x1A3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3034u;
        // 0x1a3038: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A303Cu;
        goto label_1a303c;
    }
    ctx->pc = 0x1A3034u;
    {
        const bool branch_taken_0x1a3034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3034) {
            ctx->pc = 0x1A3038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3034u;
            // 0x1a3038: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A303Cu;
label_1a303c:
    // 0x1a303c: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
label_1a3040:
    if (ctx->pc == 0x1A3040u) {
        ctx->pc = 0x1A3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A303Cu;
        // 0x1a3040: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3044u;
        goto label_1a3044;
    }
    ctx->pc = 0x1A303Cu;
    {
        const bool branch_taken_0x1a303c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a303c) {
            ctx->pc = 0x1A3040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A303Cu;
            // 0x1a3040: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3054u;
            goto label_1a3054;
        }
    }
    ctx->pc = 0x1A3044u;
label_1a3044:
    // 0x1a3044: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a3044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1a3048:
    // 0x1a3048: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a304c:
    // 0x1a304c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a304cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_1a3050:
    // 0x1a3050: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1a3050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1a3054:
    // 0x1a3054: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1a3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1a3058:
    // 0x1a3058: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a3058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a305c:
    // 0x1a305c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a305cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a3060:
    // 0x1a3060: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x1a3060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1a3064:
    // 0x1a3064: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1a3068:
    if (ctx->pc == 0x1A3068u) {
        ctx->pc = 0x1A3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3064u;
        // 0x1a3068: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A306Cu;
        goto label_1a306c;
    }
    ctx->pc = 0x1A3064u;
    {
        const bool branch_taken_0x1a3064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3064u;
        // 0x1a3068: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3064) {
            ctx->pc = 0x1A3088u;
            goto label_1a3088;
        }
    }
    ctx->pc = 0x1A306Cu;
label_1a306c:
    // 0x1a306c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1a306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1a3070:
    // 0x1a3070: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a3070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3074:
    // 0x1a3074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a3078:
    // 0x1a3078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a3078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a307c:
    // 0x1a307c: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1a307cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_1a3080:
    // 0x1a3080: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a3080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1a3084:
    // 0x1a3084: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a3084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3088:
    // 0x1a3088: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a308c:
    // 0x1a308c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a308cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3090:
    // 0x1a3090: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3094:
    // 0x1a3094: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a3094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3098:
    // 0x1a3098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a309c:
    // 0x1a309c: 0x3e00008  jr          $ra
label_1a30a0:
    if (ctx->pc == 0x1A30A0u) {
        ctx->pc = 0x1A30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A309Cu;
        // 0x1a30a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30A4u;
        goto label_1a30a4;
    }
    ctx->pc = 0x1A309Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A309Cu;
        // 0x1a30a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A309Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A30A4u;
label_1a30a4:
    // 0x1a30a4: 0x0  nop
    ctx->pc = 0x1a30a4u;
    // NOP
label_1a30a8:
    // 0x1a30a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a30a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a30ac:
    // 0x1a30ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a30acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a30b0:
    // 0x1a30b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a30b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a30b4:
    // 0x1a30b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a30b8:
    // 0x1a30b8: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x1a30b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
label_1a30bc:
    // 0x1a30bc: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x1a30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_1a30c0:
    // 0x1a30c0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_1a30c4:
    if (ctx->pc == 0x1A30C4u) {
        ctx->pc = 0x1A30C8u;
        goto label_1a30c8;
    }
    ctx->pc = 0x1A30C0u;
    {
        const bool branch_taken_0x1a30c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a30c0) {
            ctx->pc = 0x1A30D8u;
            goto label_1a30d8;
        }
    }
    ctx->pc = 0x1A30C8u;
label_1a30c8:
    // 0x1a30c8: 0xc068c3c  jal         func_1A30F0
label_1a30cc:
    if (ctx->pc == 0x1A30CCu) {
        ctx->pc = 0x1A30CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C8u;
        // 0x1a30cc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30D0u;
        goto label_1a30d0;
    }
    ctx->pc = 0x1A30C8u;
    SET_GPR_U32(ctx, 31, 0x1A30D0u);
    ctx->pc = 0x1A30CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30C8u;
    // 0x1a30cc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30F0u;
    goto label_1a30f0;
    ctx->pc = 0x1A30D0u;
label_1a30d0:
    // 0x1a30d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a30d4:
    if (ctx->pc == 0x1A30D4u) {
        ctx->pc = 0x1A30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30D0u;
        // 0x1a30d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30D8u;
        goto label_1a30d8;
    }
    ctx->pc = 0x1A30D0u;
    {
        const bool branch_taken_0x1a30d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30D0u;
        // 0x1a30d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30d0) {
            ctx->pc = 0x1A30E4u;
            goto label_1a30e4;
        }
    }
    ctx->pc = 0x1A30D8u;
label_1a30d8:
    // 0x1a30d8: 0xc068be4  jal         func_1A2F90
label_1a30dc:
    if (ctx->pc == 0x1A30DCu) {
        ctx->pc = 0x1A30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30D8u;
        // 0x1a30dc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30E0u;
        goto label_1a30e0;
    }
    ctx->pc = 0x1A30D8u;
    SET_GPR_U32(ctx, 31, 0x1A30E0u);
    ctx->pc = 0x1A30DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30D8u;
    // 0x1a30dc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F90u;
    goto label_1a2f90;
    ctx->pc = 0x1A30E0u;
label_1a30e0:
    // 0x1a30e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a30e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a30e4:
    // 0x1a30e4: 0x3e00008  jr          $ra
label_1a30e8:
    if (ctx->pc == 0x1A30E8u) {
        ctx->pc = 0x1A30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30E4u;
        // 0x1a30e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30ECu;
        goto label_1a30ec;
    }
    ctx->pc = 0x1A30E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30E4u;
        // 0x1a30e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A30E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A30ECu;
label_1a30ec:
    // 0x1a30ec: 0x0  nop
    ctx->pc = 0x1a30ecu;
    // NOP
label_1a30f0:
    // 0x1a30f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a30f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a30f4:
    // 0x1a30f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a30f8:
    // 0x1a30f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a30f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a30fc:
    // 0x1a30fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a30fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a3100:
    // 0x1a3100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3104:
    // 0x1a3104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a3108:
    // 0x1a3108: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a310c:
    // 0x1a310c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a3110:
    // 0x1a3110: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a3114:
    // 0x1a3114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3118:
    // 0x1a3118: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x1a3118u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a311c:
    // 0x1a311c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_1a3120:
    if (ctx->pc == 0x1A3120u) {
        ctx->pc = 0x1A3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A311Cu;
        // 0x1a3120: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3124u;
        goto label_1a3124;
    }
    ctx->pc = 0x1A311Cu;
    {
        const bool branch_taken_0x1a311c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A311Cu;
        // 0x1a3120: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a311c) {
            ctx->pc = 0x1A3130u;
            goto label_1a3130;
        }
    }
    ctx->pc = 0x1A3124u;
label_1a3124:
    // 0x1a3124: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1a3124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1a3128:
    // 0x1a3128: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1a312c:
    if (ctx->pc == 0x1A312Cu) {
        ctx->pc = 0x1A312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3128u;
        // 0x1a312c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3130u;
        goto label_1a3130;
    }
    ctx->pc = 0x1A3128u;
    {
        const bool branch_taken_0x1a3128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3128) {
            ctx->pc = 0x1A312Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3128u;
            // 0x1a312c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3138u;
            goto label_1a3138;
        }
    }
    ctx->pc = 0x1A3130u;
label_1a3130:
    // 0x1a3130: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a3130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3134:
    // 0x1a3134: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a3134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a3138:
    // 0x1a3138: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a313c:
    if (ctx->pc == 0x1A313Cu) {
        ctx->pc = 0x1A313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3138u;
        // 0x1a313c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3140u;
        goto label_1a3140;
    }
    ctx->pc = 0x1A3138u;
    {
        const bool branch_taken_0x1a3138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3138u;
        // 0x1a313c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3138) {
            ctx->pc = 0x1A314Cu;
            goto label_1a314c;
        }
    }
    ctx->pc = 0x1A3140u;
label_1a3140:
    // 0x1a3140: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1a3140u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_1a3144:
    // 0x1a3144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3148:
    // 0x1a3148: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a3148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a314c:
    // 0x1a314c: 0xc0680e0  jal         func_1A0380
label_1a3150:
    if (ctx->pc == 0x1A3150u) {
        ctx->pc = 0x1A3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A314Cu;
        // 0x1a3150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3154u;
        goto label_1a3154;
    }
    ctx->pc = 0x1A314Cu;
    SET_GPR_U32(ctx, 31, 0x1A3154u);
    ctx->pc = 0x1A3150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A314Cu;
    // 0x1a3150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    { ctx->pc = 0x1a0380; return; }
    ctx->pc = 0x1A3154u;
label_1a3154:
    // 0x1a3154: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a3158:
    if (ctx->pc == 0x1A3158u) {
        ctx->pc = 0x1A3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3154u;
        // 0x1a3158: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A315Cu;
        goto label_1a315c;
    }
    ctx->pc = 0x1A3154u;
    {
        const bool branch_taken_0x1a3154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3154u;
        // 0x1a3158: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3154) {
            ctx->pc = 0x1A3170u;
            goto label_1a3170;
        }
    }
    ctx->pc = 0x1A315Cu;
label_1a315c:
    // 0x1a315c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_1a3160:
    if (ctx->pc == 0x1A3160u) {
        ctx->pc = 0x1A3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A315Cu;
        // 0x1a3160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3164u;
        goto label_1a3164;
    }
    ctx->pc = 0x1A315Cu;
    {
        const bool branch_taken_0x1a315c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A315Cu;
        // 0x1a3160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a315c) {
            ctx->pc = 0x1A3174u;
            goto label_1a3174;
        }
    }
    ctx->pc = 0x1A3164u;
label_1a3164:
    // 0x1a3164: 0xc068088  jal         func_1A0220
label_1a3168:
    if (ctx->pc == 0x1A3168u) {
        ctx->pc = 0x1A3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3164u;
        // 0x1a3168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A316Cu;
        goto label_1a316c;
    }
    ctx->pc = 0x1A3164u;
    SET_GPR_U32(ctx, 31, 0x1A316Cu);
    ctx->pc = 0x1A3168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3164u;
    // 0x1a3168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0220u;
    { ctx->pc = 0x1a0220; return; }
    ctx->pc = 0x1A316Cu;
label_1a316c:
    // 0x1a316c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a316cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3170:
    // 0x1a3170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3174:
    // 0x1a3174: 0xc067e60  jal         func_19F980
label_1a3178:
    if (ctx->pc == 0x1A3178u) {
        ctx->pc = 0x1A3178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3174u;
        // 0x1a3178: 0xae110120  sw          $s1, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A317Cu;
        goto label_1a317c;
    }
    ctx->pc = 0x1A3174u;
    SET_GPR_U32(ctx, 31, 0x1A317Cu);
    ctx->pc = 0x1A3178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3174u;
    // 0x1a3178: 0xae110120  sw          $s1, 0x120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F980u;
    { ctx->pc = 0x19f980; return; }
    ctx->pc = 0x1A317Cu;
label_1a317c:
    // 0x1a317c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1a3180:
    if (ctx->pc == 0x1A3180u) {
        ctx->pc = 0x1A3180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A317Cu;
        // 0x1a3180: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3184u;
        goto label_1a3184;
    }
    ctx->pc = 0x1A317Cu;
    {
        const bool branch_taken_0x1a317c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a317c) {
            ctx->pc = 0x1A3180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A317Cu;
            // 0x1a3180: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3198u;
            goto label_1a3198;
        }
    }
    ctx->pc = 0x1A3184u;
label_1a3184:
    // 0x1a3184: 0xc068c94  jal         func_1A3250
label_1a3188:
    if (ctx->pc == 0x1A3188u) {
        ctx->pc = 0x1A3188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3184u;
        // 0x1a3188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A318Cu;
        goto label_1a318c;
    }
    ctx->pc = 0x1A3184u;
    SET_GPR_U32(ctx, 31, 0x1A318Cu);
    ctx->pc = 0x1A3188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3184u;
    // 0x1a3188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3250u;
    goto label_1a3250;
    ctx->pc = 0x1A318Cu;
label_1a318c:
    // 0x1a318c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1a318cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_1a3190:
    // 0x1a3190: 0x10000026  b           . + 4 + (0x26 << 2)
label_1a3194:
    if (ctx->pc == 0x1A3194u) {
        ctx->pc = 0x1A3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3190u;
        // 0x1a3194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3198u;
        goto label_1a3198;
    }
    ctx->pc = 0x1A3190u;
    {
        const bool branch_taken_0x1a3190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3190u;
        // 0x1a3194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3190) {
            ctx->pc = 0x1A322Cu;
            goto label_1a322c;
        }
    }
    ctx->pc = 0x1A3198u;
label_1a3198:
    // 0x1a3198: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a3198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a319c:
    // 0x1a319c: 0x8e040174  lw          $a0, 0x174($s0)
    ctx->pc = 0x1a319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1a31a0:
    // 0x1a31a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a31a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a31a4:
    // 0x1a31a4: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1a31a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_1a31a8:
    // 0x1a31a8: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_1a31ac:
    if (ctx->pc == 0x1A31ACu) {
        ctx->pc = 0x1A31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A8u;
        // 0x1a31ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31B0u;
        goto label_1a31b0;
    }
    ctx->pc = 0x1A31A8u;
    {
        const bool branch_taken_0x1a31a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A31ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A8u;
        // 0x1a31ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31a8) {
            ctx->pc = 0x1A322Cu;
            goto label_1a322c;
        }
    }
    ctx->pc = 0x1A31B0u;
label_1a31b0:
    // 0x1a31b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a31b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a31b4:
    // 0x1a31b4: 0xc0680e0  jal         func_1A0380
label_1a31b8:
    if (ctx->pc == 0x1A31B8u) {
        ctx->pc = 0x1A31B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31B4u;
        // 0x1a31b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31BCu;
        goto label_1a31bc;
    }
    ctx->pc = 0x1A31B4u;
    SET_GPR_U32(ctx, 31, 0x1A31BCu);
    ctx->pc = 0x1A31B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31B4u;
    // 0x1a31b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0380u;
    { ctx->pc = 0x1a0380; return; }
    ctx->pc = 0x1A31BCu;
label_1a31bc:
    // 0x1a31bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a31bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a31c0:
    // 0x1a31c0: 0x222180b  movn        $v1, $s1, $v0
    ctx->pc = 0x1a31c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 17));
label_1a31c4:
    // 0x1a31c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1a31c8:
    if (ctx->pc == 0x1A31C8u) {
        ctx->pc = 0x1A31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31C4u;
        // 0x1a31c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31CCu;
        goto label_1a31cc;
    }
    ctx->pc = 0x1A31C4u;
    {
        const bool branch_taken_0x1a31c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31C4u;
        // 0x1a31c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a31c4) {
            ctx->pc = 0x1A31E0u;
            goto label_1a31e0;
        }
    }
    ctx->pc = 0x1A31CCu;
label_1a31cc:
    // 0x1a31cc: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_1a31d0:
    if (ctx->pc == 0x1A31D0u) {
        ctx->pc = 0x1A31D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31CCu;
        // 0x1a31d0: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31D4u;
        goto label_1a31d4;
    }
    ctx->pc = 0x1A31CCu;
    {
        const bool branch_taken_0x1a31cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a31cc) {
            ctx->pc = 0x1A31D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A31CCu;
            // 0x1a31d0: 0x8e050118  lw          $a1, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A31E4u;
            goto label_1a31e4;
        }
    }
    ctx->pc = 0x1A31D4u;
label_1a31d4:
    // 0x1a31d4: 0xc068088  jal         func_1A0220
label_1a31d8:
    if (ctx->pc == 0x1A31D8u) {
        ctx->pc = 0x1A31D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31D4u;
        // 0x1a31d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31DCu;
        goto label_1a31dc;
    }
    ctx->pc = 0x1A31D4u;
    SET_GPR_U32(ctx, 31, 0x1A31DCu);
    ctx->pc = 0x1A31D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31D4u;
    // 0x1a31d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0220u;
    { ctx->pc = 0x1a0220; return; }
    ctx->pc = 0x1A31DCu;
label_1a31dc:
    // 0x1a31dc: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x1a31dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
label_1a31e0:
    // 0x1a31e0: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1a31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1a31e4:
    // 0x1a31e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a31e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a31e8:
    // 0x1a31e8: 0xc0680bc  jal         func_1A02F0
label_1a31ec:
    if (ctx->pc == 0x1A31ECu) {
        ctx->pc = 0x1A31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31E8u;
        // 0x1a31ec: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31F0u;
        goto label_1a31f0;
    }
    ctx->pc = 0x1A31E8u;
    SET_GPR_U32(ctx, 31, 0x1A31F0u);
    ctx->pc = 0x1A31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31E8u;
    // 0x1a31ec: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A02F0u;
    { ctx->pc = 0x1a02f0; return; }
    ctx->pc = 0x1A31F0u;
label_1a31f0:
    // 0x1a31f0: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1a31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1a31f4:
    // 0x1a31f4: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1a31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1a31f8:
    // 0x1a31f8: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1a31f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_1a31fc:
    // 0x1a31fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3200:
    // 0x1a3200: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1a3200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1a3204:
    // 0x1a3204: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x1a3204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1a3208:
    // 0x1a3208: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a3208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a320c:
    // 0x1a320c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a3210:
    // 0x1a3210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a3210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a3214:
    // 0x1a3214: 0xae030118  sw          $v1, 0x118($s0)
    ctx->pc = 0x1a3214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 3));
label_1a3218:
    // 0x1a3218: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_1a321c:
    if (ctx->pc == 0x1A321Cu) {
        ctx->pc = 0x1A321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3218u;
        // 0x1a321c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3220u;
        goto label_1a3220;
    }
    ctx->pc = 0x1A3218u;
    {
        const bool branch_taken_0x1a3218 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3218u;
        // 0x1a321c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3218) {
            ctx->pc = 0x1A3228u;
            goto label_1a3228;
        }
    }
    ctx->pc = 0x1A3220u;
label_1a3220:
    // 0x1a3220: 0xc068b26  jal         func_1A2C98
label_1a3224:
    if (ctx->pc == 0x1A3224u) {
        ctx->pc = 0x1A3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3220u;
        // 0x1a3224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3228u;
        goto label_1a3228;
    }
    ctx->pc = 0x1A3220u;
    SET_GPR_U32(ctx, 31, 0x1A3228u);
    ctx->pc = 0x1A3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3220u;
    // 0x1a3224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    goto label_1a2c98;
    ctx->pc = 0x1A3228u;
label_1a3228:
    // 0x1a3228: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a3228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a322c:
    // 0x1a322c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3230:
    // 0x1a3230: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a3230u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3234:
    // 0x1a3234: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a3234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3238:
    // 0x1a3238: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a323c:
    // 0x1a323c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a323cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3240:
    // 0x1a3240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3244:
    // 0x1a3244: 0x3e00008  jr          $ra
label_1a3248:
    if (ctx->pc == 0x1A3248u) {
        ctx->pc = 0x1A3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3244u;
        // 0x1a3248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A324Cu;
        goto label_1a324c;
    }
    ctx->pc = 0x1A3244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3244u;
        // 0x1a3248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A324Cu;
label_1a324c:
    // 0x1a324c: 0x0  nop
    ctx->pc = 0x1a324cu;
    // NOP
label_1a3250:
    // 0x1a3250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3254:
    // 0x1a3254: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a3258:
    // 0x1a3258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a325c:
    // 0x1a325c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a325cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3260:
    // 0x1a3260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3264:
    // 0x1a3264: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x1a3264u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1a3268:
    // 0x1a3268: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a326c:
    // 0x1a326c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a3270:
    if (ctx->pc == 0x1A3270u) {
        ctx->pc = 0x1A3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A326Cu;
        // 0x1a3270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3274u;
        goto label_1a3274;
    }
    ctx->pc = 0x1A326Cu;
    {
        const bool branch_taken_0x1a326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A326Cu;
        // 0x1a3270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a326c) {
            ctx->pc = 0x1A32A0u;
            goto label_1a32a0;
        }
    }
    ctx->pc = 0x1A3274u;
label_1a3274:
    // 0x1a3274: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a3274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a3278:
    // 0x1a3278: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a327c:
    if (ctx->pc == 0x1A327Cu) {
        ctx->pc = 0x1A327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3278u;
        // 0x1a327c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3280u;
        goto label_1a3280;
    }
    ctx->pc = 0x1A3278u;
    {
        const bool branch_taken_0x1a3278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3278u;
        // 0x1a327c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3278) {
            ctx->pc = 0x1A32A4u;
            goto label_1a32a4;
        }
    }
    ctx->pc = 0x1A3280u;
label_1a3280:
    // 0x1a3280: 0xc068cb2  jal         func_1A32C8
label_1a3284:
    if (ctx->pc == 0x1A3284u) {
        ctx->pc = 0x1A3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3280u;
        // 0x1a3284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3288u;
        goto label_1a3288;
    }
    ctx->pc = 0x1A3280u;
    SET_GPR_U32(ctx, 31, 0x1A3288u);
    ctx->pc = 0x1A3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3280u;
    // 0x1a3284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A32C8u;
    goto label_1a32c8;
    ctx->pc = 0x1A3288u;
label_1a3288:
    // 0x1a3288: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1a3288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_1a328c:
    // 0x1a328c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3290:
    // 0x1a3290: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1a3290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1a3294:
    // 0x1a3294: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a3294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3298:
    // 0x1a3298: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a3298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a329c:
    // 0x1a329c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a329cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a32a0:
    // 0x1a32a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a32a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a32a4:
    // 0x1a32a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a32a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a32a8:
    // 0x1a32a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a32a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a32ac:
    // 0x1a32ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a32acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a32b0:
    // 0x1a32b0: 0x3e00008  jr          $ra
label_1a32b4:
    if (ctx->pc == 0x1A32B4u) {
        ctx->pc = 0x1A32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32B0u;
        // 0x1a32b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32B8u;
        goto label_1a32b8;
    }
    ctx->pc = 0x1A32B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32B0u;
        // 0x1a32b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A32B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A32B8u;
label_1a32b8:
    // 0x1a32b8: 0xac800848  sw          $zero, 0x848($a0)
    ctx->pc = 0x1a32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2120), GPR_U32(ctx, 0));
label_1a32bc:
    // 0x1a32bc: 0x806781e  j           func_19E078
label_1a32c0:
    if (ctx->pc == 0x1A32C0u) {
        ctx->pc = 0x1A32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32BCu;
        // 0x1a32c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32C4u;
        goto label_1a32c4;
    }
    ctx->pc = 0x1A32BCu;
    ctx->pc = 0x1A32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32BCu;
    // 0x1a32c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E078u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x19e078; return; }
    ctx->pc = 0x1A32C4u;
label_1a32c4:
    // 0x1a32c4: 0x0  nop
    ctx->pc = 0x1a32c4u;
    // NOP
label_1a32c8:
    // 0x1a32c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a32c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a32cc:
    // 0x1a32cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a32ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a32d0:
    // 0x1a32d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a32d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a32d4:
    // 0x1a32d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a32d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a32d8:
    // 0x1a32d8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1a32dc:
    // 0x1a32dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a32e0:
    if (ctx->pc == 0x1A32E0u) {
        ctx->pc = 0x1A32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32DCu;
        // 0x1a32e0: 0x8e060118  lw          $a2, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32E4u;
        goto label_1a32e4;
    }
    ctx->pc = 0x1A32DCu;
    {
        const bool branch_taken_0x1a32dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32DCu;
        // 0x1a32e0: 0x8e060118  lw          $a2, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32dc) {
            ctx->pc = 0x1A32F8u;
            goto label_1a32f8;
        }
    }
    ctx->pc = 0x1A32E4u;
label_1a32e4:
    // 0x1a32e4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a32e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a32e8:
    // 0x1a32e8: 0xc068d2c  jal         func_1A34B0
label_1a32ec:
    if (ctx->pc == 0x1A32ECu) {
        ctx->pc = 0x1A32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32E8u;
        // 0x1a32ec: 0x24a5a378  addiu       $a1, $a1, -0x5C88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32F0u;
        goto label_1a32f0;
    }
    ctx->pc = 0x1A32E8u;
    SET_GPR_U32(ctx, 31, 0x1A32F0u);
    ctx->pc = 0x1A32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32E8u;
    // 0x1a32ec: 0x24a5a378  addiu       $a1, $a1, -0x5C88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A32F0u;
label_1a32f0:
    // 0x1a32f0: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a32f4:
    if (ctx->pc == 0x1A32F4u) {
        ctx->pc = 0x1A32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32F0u;
        // 0x1a32f4: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A32F8u;
        goto label_1a32f8;
    }
    ctx->pc = 0x1A32F0u;
    {
        const bool branch_taken_0x1a32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32F0u;
        // 0x1a32f4: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32f0) {
            ctx->pc = 0x1A3334u;
            { ctx->pc = 0x1a3334; return; }
        }
    }
    ctx->pc = 0x1A32F8u;
label_1a32f8:
    // 0x1a32f8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1a32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_1a32fc:
    // 0x1a32fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3300:
    // 0x1a3300: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1a3304:
    if (ctx->pc == 0x1A3304u) {
        ctx->pc = 0x1A3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3300u;
        // 0x1a3304: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3308u;
        goto label_1a3308;
    }
    ctx->pc = 0x1A3300u;
    {
        const bool branch_taken_0x1a3300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3300u;
        // 0x1a3304: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3300) {
            ctx->pc = 0x1A3320u;
            { ctx->pc = 0x1a3320; return; }
        }
    }
    ctx->pc = 0x1A3308u;
label_1a3308:
    // 0x1a3308: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x1a3308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_1a330c:
    // 0x1a330c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1a330cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1a3310:
    // 0x1a3310: 0xc0682c0  jal         func_1A0B00
label_1a3314:
    if (ctx->pc == 0x1A3314u) {
        ctx->pc = 0x1A3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3310u;
        // 0x1a3314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3318u;
        { ctx->pc = 0x1a3318; return; }
    }
    ctx->pc = 0x1A3310u;
    SET_GPR_U32(ctx, 31, 0x1A3318u);
    ctx->pc = 0x1A3314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3310u;
    // 0x1a3314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B00u;
    { ctx->pc = 0x1a0b00; return; }
    ctx->pc = 0x1A3318u;
    ctx->pc = 0x1a3318u;
    return;
}

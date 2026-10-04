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


void FUN_0019b910_part114(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d2be0u: goto label_1d2be0;
        case 0x1d2be4u: goto label_1d2be4;
        case 0x1d2be8u: goto label_1d2be8;
        case 0x1d2becu: goto label_1d2bec;
        case 0x1d2bf0u: goto label_1d2bf0;
        case 0x1d2bf4u: goto label_1d2bf4;
        case 0x1d2bf8u: goto label_1d2bf8;
        case 0x1d2bfcu: goto label_1d2bfc;
        case 0x1d2c00u: goto label_1d2c00;
        case 0x1d2c04u: goto label_1d2c04;
        case 0x1d2c08u: goto label_1d2c08;
        case 0x1d2c0cu: goto label_1d2c0c;
        case 0x1d2c10u: goto label_1d2c10;
        case 0x1d2c14u: goto label_1d2c14;
        case 0x1d2c18u: goto label_1d2c18;
        case 0x1d2c1cu: goto label_1d2c1c;
        case 0x1d2c20u: goto label_1d2c20;
        case 0x1d2c24u: goto label_1d2c24;
        case 0x1d2c28u: goto label_1d2c28;
        case 0x1d2c2cu: goto label_1d2c2c;
        case 0x1d2c30u: goto label_1d2c30;
        case 0x1d2c34u: goto label_1d2c34;
        case 0x1d2c38u: goto label_1d2c38;
        case 0x1d2c3cu: goto label_1d2c3c;
        case 0x1d2c40u: goto label_1d2c40;
        case 0x1d2c44u: goto label_1d2c44;
        case 0x1d2c48u: goto label_1d2c48;
        case 0x1d2c4cu: goto label_1d2c4c;
        case 0x1d2c50u: goto label_1d2c50;
        case 0x1d2c54u: goto label_1d2c54;
        case 0x1d2c58u: goto label_1d2c58;
        case 0x1d2c5cu: goto label_1d2c5c;
        case 0x1d2c60u: goto label_1d2c60;
        case 0x1d2c64u: goto label_1d2c64;
        case 0x1d2c68u: goto label_1d2c68;
        case 0x1d2c6cu: goto label_1d2c6c;
        case 0x1d2c70u: goto label_1d2c70;
        case 0x1d2c74u: goto label_1d2c74;
        case 0x1d2c78u: goto label_1d2c78;
        case 0x1d2c7cu: goto label_1d2c7c;
        case 0x1d2c80u: goto label_1d2c80;
        case 0x1d2c84u: goto label_1d2c84;
        case 0x1d2c88u: goto label_1d2c88;
        case 0x1d2c8cu: goto label_1d2c8c;
        case 0x1d2c90u: goto label_1d2c90;
        case 0x1d2c94u: goto label_1d2c94;
        case 0x1d2c98u: goto label_1d2c98;
        case 0x1d2c9cu: goto label_1d2c9c;
        case 0x1d2ca0u: goto label_1d2ca0;
        case 0x1d2ca4u: goto label_1d2ca4;
        case 0x1d2ca8u: goto label_1d2ca8;
        case 0x1d2cacu: goto label_1d2cac;
        case 0x1d2cb0u: goto label_1d2cb0;
        case 0x1d2cb4u: goto label_1d2cb4;
        case 0x1d2cb8u: goto label_1d2cb8;
        case 0x1d2cbcu: goto label_1d2cbc;
        case 0x1d2cc0u: goto label_1d2cc0;
        case 0x1d2cc4u: goto label_1d2cc4;
        case 0x1d2cc8u: goto label_1d2cc8;
        case 0x1d2cccu: goto label_1d2ccc;
        case 0x1d2cd0u: goto label_1d2cd0;
        case 0x1d2cd4u: goto label_1d2cd4;
        case 0x1d2cd8u: goto label_1d2cd8;
        case 0x1d2cdcu: goto label_1d2cdc;
        case 0x1d2ce0u: goto label_1d2ce0;
        case 0x1d2ce4u: goto label_1d2ce4;
        case 0x1d2ce8u: goto label_1d2ce8;
        case 0x1d2cecu: goto label_1d2cec;
        case 0x1d2cf0u: goto label_1d2cf0;
        case 0x1d2cf4u: goto label_1d2cf4;
        case 0x1d2cf8u: goto label_1d2cf8;
        case 0x1d2cfcu: goto label_1d2cfc;
        case 0x1d2d00u: goto label_1d2d00;
        case 0x1d2d04u: goto label_1d2d04;
        case 0x1d2d08u: goto label_1d2d08;
        case 0x1d2d0cu: goto label_1d2d0c;
        case 0x1d2d10u: goto label_1d2d10;
        case 0x1d2d14u: goto label_1d2d14;
        case 0x1d2d18u: goto label_1d2d18;
        case 0x1d2d1cu: goto label_1d2d1c;
        case 0x1d2d20u: goto label_1d2d20;
        case 0x1d2d24u: goto label_1d2d24;
        case 0x1d2d28u: goto label_1d2d28;
        case 0x1d2d2cu: goto label_1d2d2c;
        case 0x1d2d30u: goto label_1d2d30;
        case 0x1d2d34u: goto label_1d2d34;
        case 0x1d2d38u: goto label_1d2d38;
        case 0x1d2d3cu: goto label_1d2d3c;
        case 0x1d2d40u: goto label_1d2d40;
        case 0x1d2d44u: goto label_1d2d44;
        case 0x1d2d48u: goto label_1d2d48;
        case 0x1d2d4cu: goto label_1d2d4c;
        case 0x1d2d50u: goto label_1d2d50;
        case 0x1d2d54u: goto label_1d2d54;
        case 0x1d2d58u: goto label_1d2d58;
        case 0x1d2d5cu: goto label_1d2d5c;
        case 0x1d2d60u: goto label_1d2d60;
        case 0x1d2d64u: goto label_1d2d64;
        case 0x1d2d68u: goto label_1d2d68;
        case 0x1d2d6cu: goto label_1d2d6c;
        case 0x1d2d70u: goto label_1d2d70;
        case 0x1d2d74u: goto label_1d2d74;
        case 0x1d2d78u: goto label_1d2d78;
        case 0x1d2d7cu: goto label_1d2d7c;
        case 0x1d2d80u: goto label_1d2d80;
        case 0x1d2d84u: goto label_1d2d84;
        case 0x1d2d88u: goto label_1d2d88;
        case 0x1d2d8cu: goto label_1d2d8c;
        case 0x1d2d90u: goto label_1d2d90;
        case 0x1d2d94u: goto label_1d2d94;
        case 0x1d2d98u: goto label_1d2d98;
        case 0x1d2d9cu: goto label_1d2d9c;
        case 0x1d2da0u: goto label_1d2da0;
        case 0x1d2da4u: goto label_1d2da4;
        case 0x1d2da8u: goto label_1d2da8;
        case 0x1d2dacu: goto label_1d2dac;
        case 0x1d2db0u: goto label_1d2db0;
        case 0x1d2db4u: goto label_1d2db4;
        case 0x1d2db8u: goto label_1d2db8;
        case 0x1d2dbcu: goto label_1d2dbc;
        case 0x1d2dc0u: goto label_1d2dc0;
        case 0x1d2dc4u: goto label_1d2dc4;
        case 0x1d2dc8u: goto label_1d2dc8;
        case 0x1d2dccu: goto label_1d2dcc;
        case 0x1d2dd0u: goto label_1d2dd0;
        case 0x1d2dd4u: goto label_1d2dd4;
        case 0x1d2dd8u: goto label_1d2dd8;
        case 0x1d2ddcu: goto label_1d2ddc;
        case 0x1d2de0u: goto label_1d2de0;
        case 0x1d2de4u: goto label_1d2de4;
        case 0x1d2de8u: goto label_1d2de8;
        case 0x1d2decu: goto label_1d2dec;
        case 0x1d2df0u: goto label_1d2df0;
        case 0x1d2df4u: goto label_1d2df4;
        case 0x1d2df8u: goto label_1d2df8;
        case 0x1d2dfcu: goto label_1d2dfc;
        case 0x1d2e00u: goto label_1d2e00;
        case 0x1d2e04u: goto label_1d2e04;
        case 0x1d2e08u: goto label_1d2e08;
        case 0x1d2e0cu: goto label_1d2e0c;
        case 0x1d2e10u: goto label_1d2e10;
        case 0x1d2e14u: goto label_1d2e14;
        case 0x1d2e18u: goto label_1d2e18;
        case 0x1d2e1cu: goto label_1d2e1c;
        case 0x1d2e20u: goto label_1d2e20;
        case 0x1d2e24u: goto label_1d2e24;
        case 0x1d2e28u: goto label_1d2e28;
        case 0x1d2e2cu: goto label_1d2e2c;
        case 0x1d2e30u: goto label_1d2e30;
        case 0x1d2e34u: goto label_1d2e34;
        case 0x1d2e38u: goto label_1d2e38;
        case 0x1d2e3cu: goto label_1d2e3c;
        case 0x1d2e40u: goto label_1d2e40;
        case 0x1d2e44u: goto label_1d2e44;
        case 0x1d2e48u: goto label_1d2e48;
        case 0x1d2e4cu: goto label_1d2e4c;
        case 0x1d2e50u: goto label_1d2e50;
        case 0x1d2e54u: goto label_1d2e54;
        case 0x1d2e58u: goto label_1d2e58;
        case 0x1d2e5cu: goto label_1d2e5c;
        case 0x1d2e60u: goto label_1d2e60;
        case 0x1d2e64u: goto label_1d2e64;
        case 0x1d2e68u: goto label_1d2e68;
        case 0x1d2e6cu: goto label_1d2e6c;
        case 0x1d2e70u: goto label_1d2e70;
        case 0x1d2e74u: goto label_1d2e74;
        case 0x1d2e78u: goto label_1d2e78;
        case 0x1d2e7cu: goto label_1d2e7c;
        case 0x1d2e80u: goto label_1d2e80;
        case 0x1d2e84u: goto label_1d2e84;
        case 0x1d2e88u: goto label_1d2e88;
        case 0x1d2e8cu: goto label_1d2e8c;
        case 0x1d2e90u: goto label_1d2e90;
        case 0x1d2e94u: goto label_1d2e94;
        case 0x1d2e98u: goto label_1d2e98;
        case 0x1d2e9cu: goto label_1d2e9c;
        case 0x1d2ea0u: goto label_1d2ea0;
        case 0x1d2ea4u: goto label_1d2ea4;
        case 0x1d2ea8u: goto label_1d2ea8;
        case 0x1d2eacu: goto label_1d2eac;
        case 0x1d2eb0u: goto label_1d2eb0;
        case 0x1d2eb4u: goto label_1d2eb4;
        case 0x1d2eb8u: goto label_1d2eb8;
        case 0x1d2ebcu: goto label_1d2ebc;
        case 0x1d2ec0u: goto label_1d2ec0;
        case 0x1d2ec4u: goto label_1d2ec4;
        case 0x1d2ec8u: goto label_1d2ec8;
        case 0x1d2eccu: goto label_1d2ecc;
        case 0x1d2ed0u: goto label_1d2ed0;
        case 0x1d2ed4u: goto label_1d2ed4;
        case 0x1d2ed8u: goto label_1d2ed8;
        case 0x1d2edcu: goto label_1d2edc;
        case 0x1d2ee0u: goto label_1d2ee0;
        case 0x1d2ee4u: goto label_1d2ee4;
        case 0x1d2ee8u: goto label_1d2ee8;
        case 0x1d2eecu: goto label_1d2eec;
        case 0x1d2ef0u: goto label_1d2ef0;
        case 0x1d2ef4u: goto label_1d2ef4;
        case 0x1d2ef8u: goto label_1d2ef8;
        case 0x1d2efcu: goto label_1d2efc;
        case 0x1d2f00u: goto label_1d2f00;
        case 0x1d2f04u: goto label_1d2f04;
        case 0x1d2f08u: goto label_1d2f08;
        case 0x1d2f0cu: goto label_1d2f0c;
        case 0x1d2f10u: goto label_1d2f10;
        case 0x1d2f14u: goto label_1d2f14;
        case 0x1d2f18u: goto label_1d2f18;
        case 0x1d2f1cu: goto label_1d2f1c;
        case 0x1d2f20u: goto label_1d2f20;
        case 0x1d2f24u: goto label_1d2f24;
        case 0x1d2f28u: goto label_1d2f28;
        case 0x1d2f2cu: goto label_1d2f2c;
        case 0x1d2f30u: goto label_1d2f30;
        case 0x1d2f34u: goto label_1d2f34;
        case 0x1d2f38u: goto label_1d2f38;
        case 0x1d2f3cu: goto label_1d2f3c;
        case 0x1d2f40u: goto label_1d2f40;
        case 0x1d2f44u: goto label_1d2f44;
        case 0x1d2f48u: goto label_1d2f48;
        case 0x1d2f4cu: goto label_1d2f4c;
        case 0x1d2f50u: goto label_1d2f50;
        case 0x1d2f54u: goto label_1d2f54;
        case 0x1d2f58u: goto label_1d2f58;
        case 0x1d2f5cu: goto label_1d2f5c;
        case 0x1d2f60u: goto label_1d2f60;
        case 0x1d2f64u: goto label_1d2f64;
        case 0x1d2f68u: goto label_1d2f68;
        case 0x1d2f6cu: goto label_1d2f6c;
        case 0x1d2f70u: goto label_1d2f70;
        case 0x1d2f74u: goto label_1d2f74;
        case 0x1d2f78u: goto label_1d2f78;
        case 0x1d2f7cu: goto label_1d2f7c;
        case 0x1d2f80u: goto label_1d2f80;
        case 0x1d2f84u: goto label_1d2f84;
        case 0x1d2f88u: goto label_1d2f88;
        case 0x1d2f8cu: goto label_1d2f8c;
        case 0x1d2f90u: goto label_1d2f90;
        case 0x1d2f94u: goto label_1d2f94;
        case 0x1d2f98u: goto label_1d2f98;
        case 0x1d2f9cu: goto label_1d2f9c;
        case 0x1d2fa0u: goto label_1d2fa0;
        case 0x1d2fa4u: goto label_1d2fa4;
        case 0x1d2fa8u: goto label_1d2fa8;
        case 0x1d2facu: goto label_1d2fac;
        case 0x1d2fb0u: goto label_1d2fb0;
        case 0x1d2fb4u: goto label_1d2fb4;
        case 0x1d2fb8u: goto label_1d2fb8;
        case 0x1d2fbcu: goto label_1d2fbc;
        case 0x1d2fc0u: goto label_1d2fc0;
        case 0x1d2fc4u: goto label_1d2fc4;
        case 0x1d2fc8u: goto label_1d2fc8;
        case 0x1d2fccu: goto label_1d2fcc;
        case 0x1d2fd0u: goto label_1d2fd0;
        case 0x1d2fd4u: goto label_1d2fd4;
        case 0x1d2fd8u: goto label_1d2fd8;
        case 0x1d2fdcu: goto label_1d2fdc;
        case 0x1d2fe0u: goto label_1d2fe0;
        case 0x1d2fe4u: goto label_1d2fe4;
        case 0x1d2fe8u: goto label_1d2fe8;
        case 0x1d2fecu: goto label_1d2fec;
        case 0x1d2ff0u: goto label_1d2ff0;
        case 0x1d2ff4u: goto label_1d2ff4;
        case 0x1d2ff8u: goto label_1d2ff8;
        case 0x1d2ffcu: goto label_1d2ffc;
        case 0x1d3000u: goto label_1d3000;
        case 0x1d3004u: goto label_1d3004;
        case 0x1d3008u: goto label_1d3008;
        case 0x1d300cu: goto label_1d300c;
        case 0x1d3010u: goto label_1d3010;
        case 0x1d3014u: goto label_1d3014;
        case 0x1d3018u: goto label_1d3018;
        case 0x1d301cu: goto label_1d301c;
        case 0x1d3020u: goto label_1d3020;
        case 0x1d3024u: goto label_1d3024;
        case 0x1d3028u: goto label_1d3028;
        case 0x1d302cu: goto label_1d302c;
        case 0x1d3030u: goto label_1d3030;
        case 0x1d3034u: goto label_1d3034;
        case 0x1d3038u: goto label_1d3038;
        case 0x1d303cu: goto label_1d303c;
        case 0x1d3040u: goto label_1d3040;
        case 0x1d3044u: goto label_1d3044;
        case 0x1d3048u: goto label_1d3048;
        case 0x1d304cu: goto label_1d304c;
        case 0x1d3050u: goto label_1d3050;
        case 0x1d3054u: goto label_1d3054;
        case 0x1d3058u: goto label_1d3058;
        case 0x1d305cu: goto label_1d305c;
        case 0x1d3060u: goto label_1d3060;
        case 0x1d3064u: goto label_1d3064;
        case 0x1d3068u: goto label_1d3068;
        case 0x1d306cu: goto label_1d306c;
        case 0x1d3070u: goto label_1d3070;
        case 0x1d3074u: goto label_1d3074;
        case 0x1d3078u: goto label_1d3078;
        case 0x1d307cu: goto label_1d307c;
        case 0x1d3080u: goto label_1d3080;
        case 0x1d3084u: goto label_1d3084;
        case 0x1d3088u: goto label_1d3088;
        case 0x1d308cu: goto label_1d308c;
        case 0x1d3090u: goto label_1d3090;
        case 0x1d3094u: goto label_1d3094;
        case 0x1d3098u: goto label_1d3098;
        case 0x1d309cu: goto label_1d309c;
        case 0x1d30a0u: goto label_1d30a0;
        case 0x1d30a4u: goto label_1d30a4;
        case 0x1d30a8u: goto label_1d30a8;
        case 0x1d30acu: goto label_1d30ac;
        case 0x1d30b0u: goto label_1d30b0;
        case 0x1d30b4u: goto label_1d30b4;
        case 0x1d30b8u: goto label_1d30b8;
        case 0x1d30bcu: goto label_1d30bc;
        case 0x1d30c0u: goto label_1d30c0;
        case 0x1d30c4u: goto label_1d30c4;
        case 0x1d30c8u: goto label_1d30c8;
        case 0x1d30ccu: goto label_1d30cc;
        case 0x1d30d0u: goto label_1d30d0;
        case 0x1d30d4u: goto label_1d30d4;
        case 0x1d30d8u: goto label_1d30d8;
        case 0x1d30dcu: goto label_1d30dc;
        case 0x1d30e0u: goto label_1d30e0;
        case 0x1d30e4u: goto label_1d30e4;
        case 0x1d30e8u: goto label_1d30e8;
        case 0x1d30ecu: goto label_1d30ec;
        case 0x1d30f0u: goto label_1d30f0;
        case 0x1d30f4u: goto label_1d30f4;
        case 0x1d30f8u: goto label_1d30f8;
        case 0x1d30fcu: goto label_1d30fc;
        case 0x1d3100u: goto label_1d3100;
        case 0x1d3104u: goto label_1d3104;
        case 0x1d3108u: goto label_1d3108;
        case 0x1d310cu: goto label_1d310c;
        case 0x1d3110u: goto label_1d3110;
        case 0x1d3114u: goto label_1d3114;
        case 0x1d3118u: goto label_1d3118;
        case 0x1d311cu: goto label_1d311c;
        case 0x1d3120u: goto label_1d3120;
        case 0x1d3124u: goto label_1d3124;
        case 0x1d3128u: goto label_1d3128;
        case 0x1d312cu: goto label_1d312c;
        case 0x1d3130u: goto label_1d3130;
        case 0x1d3134u: goto label_1d3134;
        case 0x1d3138u: goto label_1d3138;
        case 0x1d313cu: goto label_1d313c;
        case 0x1d3140u: goto label_1d3140;
        case 0x1d3144u: goto label_1d3144;
        case 0x1d3148u: goto label_1d3148;
        case 0x1d314cu: goto label_1d314c;
        case 0x1d3150u: goto label_1d3150;
        case 0x1d3154u: goto label_1d3154;
        case 0x1d3158u: goto label_1d3158;
        case 0x1d315cu: goto label_1d315c;
        case 0x1d3160u: goto label_1d3160;
        case 0x1d3164u: goto label_1d3164;
        case 0x1d3168u: goto label_1d3168;
        case 0x1d316cu: goto label_1d316c;
        case 0x1d3170u: goto label_1d3170;
        case 0x1d3174u: goto label_1d3174;
        case 0x1d3178u: goto label_1d3178;
        case 0x1d317cu: goto label_1d317c;
        case 0x1d3180u: goto label_1d3180;
        case 0x1d3184u: goto label_1d3184;
        case 0x1d3188u: goto label_1d3188;
        case 0x1d318cu: goto label_1d318c;
        case 0x1d3190u: goto label_1d3190;
        case 0x1d3194u: goto label_1d3194;
        case 0x1d3198u: goto label_1d3198;
        case 0x1d319cu: goto label_1d319c;
        case 0x1d31a0u: goto label_1d31a0;
        case 0x1d31a4u: goto label_1d31a4;
        case 0x1d31a8u: goto label_1d31a8;
        case 0x1d31acu: goto label_1d31ac;
        case 0x1d31b0u: goto label_1d31b0;
        case 0x1d31b4u: goto label_1d31b4;
        case 0x1d31b8u: goto label_1d31b8;
        case 0x1d31bcu: goto label_1d31bc;
        case 0x1d31c0u: goto label_1d31c0;
        case 0x1d31c4u: goto label_1d31c4;
        case 0x1d31c8u: goto label_1d31c8;
        case 0x1d31ccu: goto label_1d31cc;
        case 0x1d31d0u: goto label_1d31d0;
        case 0x1d31d4u: goto label_1d31d4;
        case 0x1d31d8u: goto label_1d31d8;
        case 0x1d31dcu: goto label_1d31dc;
        case 0x1d31e0u: goto label_1d31e0;
        case 0x1d31e4u: goto label_1d31e4;
        case 0x1d31e8u: goto label_1d31e8;
        case 0x1d31ecu: goto label_1d31ec;
        case 0x1d31f0u: goto label_1d31f0;
        case 0x1d31f4u: goto label_1d31f4;
        case 0x1d31f8u: goto label_1d31f8;
        case 0x1d31fcu: goto label_1d31fc;
        case 0x1d3200u: goto label_1d3200;
        case 0x1d3204u: goto label_1d3204;
        case 0x1d3208u: goto label_1d3208;
        case 0x1d320cu: goto label_1d320c;
        case 0x1d3210u: goto label_1d3210;
        case 0x1d3214u: goto label_1d3214;
        case 0x1d3218u: goto label_1d3218;
        case 0x1d321cu: goto label_1d321c;
        case 0x1d3220u: goto label_1d3220;
        case 0x1d3224u: goto label_1d3224;
        case 0x1d3228u: goto label_1d3228;
        case 0x1d322cu: goto label_1d322c;
        case 0x1d3230u: goto label_1d3230;
        case 0x1d3234u: goto label_1d3234;
        case 0x1d3238u: goto label_1d3238;
        case 0x1d323cu: goto label_1d323c;
        case 0x1d3240u: goto label_1d3240;
        case 0x1d3244u: goto label_1d3244;
        case 0x1d3248u: goto label_1d3248;
        case 0x1d324cu: goto label_1d324c;
        case 0x1d3250u: goto label_1d3250;
        case 0x1d3254u: goto label_1d3254;
        case 0x1d3258u: goto label_1d3258;
        case 0x1d325cu: goto label_1d325c;
        case 0x1d3260u: goto label_1d3260;
        case 0x1d3264u: goto label_1d3264;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d326cu: goto label_1d326c;
        case 0x1d3270u: goto label_1d3270;
        case 0x1d3274u: goto label_1d3274;
        case 0x1d3278u: goto label_1d3278;
        case 0x1d327cu: goto label_1d327c;
        case 0x1d3280u: goto label_1d3280;
        case 0x1d3284u: goto label_1d3284;
        case 0x1d3288u: goto label_1d3288;
        case 0x1d328cu: goto label_1d328c;
        case 0x1d3290u: goto label_1d3290;
        case 0x1d3294u: goto label_1d3294;
        case 0x1d3298u: goto label_1d3298;
        case 0x1d329cu: goto label_1d329c;
        case 0x1d32a0u: goto label_1d32a0;
        case 0x1d32a4u: goto label_1d32a4;
        case 0x1d32a8u: goto label_1d32a8;
        case 0x1d32acu: goto label_1d32ac;
        case 0x1d32b0u: goto label_1d32b0;
        case 0x1d32b4u: goto label_1d32b4;
        case 0x1d32b8u: goto label_1d32b8;
        case 0x1d32bcu: goto label_1d32bc;
        case 0x1d32c0u: goto label_1d32c0;
        case 0x1d32c4u: goto label_1d32c4;
        case 0x1d32c8u: goto label_1d32c8;
        case 0x1d32ccu: goto label_1d32cc;
        case 0x1d32d0u: goto label_1d32d0;
        case 0x1d32d4u: goto label_1d32d4;
        case 0x1d32d8u: goto label_1d32d8;
        case 0x1d32dcu: goto label_1d32dc;
        case 0x1d32e0u: goto label_1d32e0;
        case 0x1d32e4u: goto label_1d32e4;
        case 0x1d32e8u: goto label_1d32e8;
        case 0x1d32ecu: goto label_1d32ec;
        case 0x1d32f0u: goto label_1d32f0;
        case 0x1d32f4u: goto label_1d32f4;
        case 0x1d32f8u: goto label_1d32f8;
        case 0x1d32fcu: goto label_1d32fc;
        case 0x1d3300u: goto label_1d3300;
        case 0x1d3304u: goto label_1d3304;
        case 0x1d3308u: goto label_1d3308;
        case 0x1d330cu: goto label_1d330c;
        case 0x1d3310u: goto label_1d3310;
        case 0x1d3314u: goto label_1d3314;
        case 0x1d3318u: goto label_1d3318;
        case 0x1d331cu: goto label_1d331c;
        case 0x1d3320u: goto label_1d3320;
        case 0x1d3324u: goto label_1d3324;
        case 0x1d3328u: goto label_1d3328;
        case 0x1d332cu: goto label_1d332c;
        case 0x1d3330u: goto label_1d3330;
        case 0x1d3334u: goto label_1d3334;
        case 0x1d3338u: goto label_1d3338;
        case 0x1d333cu: goto label_1d333c;
        case 0x1d3340u: goto label_1d3340;
        case 0x1d3344u: goto label_1d3344;
        case 0x1d3348u: goto label_1d3348;
        case 0x1d334cu: goto label_1d334c;
        case 0x1d3350u: goto label_1d3350;
        case 0x1d3354u: goto label_1d3354;
        case 0x1d3358u: goto label_1d3358;
        case 0x1d335cu: goto label_1d335c;
        case 0x1d3360u: goto label_1d3360;
        case 0x1d3364u: goto label_1d3364;
        case 0x1d3368u: goto label_1d3368;
        case 0x1d336cu: goto label_1d336c;
        case 0x1d3370u: goto label_1d3370;
        case 0x1d3374u: goto label_1d3374;
        case 0x1d3378u: goto label_1d3378;
        case 0x1d337cu: goto label_1d337c;
        case 0x1d3380u: goto label_1d3380;
        case 0x1d3384u: goto label_1d3384;
        case 0x1d3388u: goto label_1d3388;
        case 0x1d338cu: goto label_1d338c;
        case 0x1d3390u: goto label_1d3390;
        case 0x1d3394u: goto label_1d3394;
        case 0x1d3398u: goto label_1d3398;
        case 0x1d339cu: goto label_1d339c;
        case 0x1d33a0u: goto label_1d33a0;
        case 0x1d33a4u: goto label_1d33a4;
        case 0x1d33a8u: goto label_1d33a8;
        case 0x1d33acu: goto label_1d33ac;
        default: return;
    }

label_1d2be0:
    // 0x1d2be0: 0x29a10400  slti        $at, $t5, 0x400
    ctx->pc = 0x1d2be0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1d2be4:
    // 0x1d2be4: 0x260c0  sll         $t4, $v0, 3
    ctx->pc = 0x1d2be4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d2be8:
    // 0x1d2be8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d2bec:
    if (ctx->pc == 0x1D2BECu) {
        ctx->pc = 0x1D2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BE8u;
        // 0x1d2bec: 0x258e0018  addiu       $t6, $t4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2BF0u;
        goto label_1d2bf0;
    }
    ctx->pc = 0x1D2BE8u;
    {
        const bool branch_taken_0x1d2be8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BE8u;
        // 0x1d2bec: 0x258e0018  addiu       $t6, $t4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2be8) {
            ctx->pc = 0x1D2BF4u;
            goto label_1d2bf4;
        }
    }
    ctx->pc = 0x1D2BF0u;
label_1d2bf0:
    // 0x1d2bf0: 0x240d03ff  addiu       $t5, $zero, 0x3FF
    ctx->pc = 0x1d2bf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1d2bf4:
    // 0x1d2bf4: 0x29c10280  slti        $at, $t6, 0x280
    ctx->pc = 0x1d2bf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)640) ? 1 : 0);
label_1d2bf8:
    // 0x1d2bf8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d2bfc:
    if (ctx->pc == 0x1D2BFCu) {
        ctx->pc = 0x1D2C00u;
        goto label_1d2c00;
    }
    ctx->pc = 0x1D2BF8u;
    {
        const bool branch_taken_0x1d2bf8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2bf8) {
            ctx->pc = 0x1D2C04u;
            goto label_1d2c04;
        }
    }
    ctx->pc = 0x1D2C00u;
label_1d2c00:
    // 0x1d2c00: 0x240e027f  addiu       $t6, $zero, 0x27F
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
label_1d2c04:
    // 0x1d2c04: 0xfca70070  sd          $a3, 0x70($a1)
    ctx->pc = 0x1d2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 7));
label_1d2c08:
    // 0x1d2c08: 0x2502ffe0  addiu       $v0, $t0, -0x20
    ctx->pc = 0x1d2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_1d2c0c:
    // 0x1d2c0c: 0xa4a20098  sh          $v0, 0x98($a1)
    ctx->pc = 0x1d2c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 2));
label_1d2c10:
    // 0x1d2c10: 0x107900  sll         $t7, $s0, 4
    ctx->pc = 0x1d2c10u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1d2c14:
    // 0x1d2c14: 0x2562fff0  addiu       $v0, $t3, -0x10
    ctx->pc = 0x1d2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
label_1d2c18:
    // 0x1d2c18: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x1d2c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_1d2c1c:
    // 0x1d2c1c: 0xa4a2009a  sh          $v0, 0x9A($a1)
    ctx->pc = 0x1d2c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 2));
label_1d2c20:
    // 0x1d2c20: 0x25430010  addiu       $v1, $t2, 0x10
    ctx->pc = 0x1d2c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_1d2c24:
    // 0x1d2c24: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1d2c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d2c28:
    // 0x1d2c28: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1d2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_1d2c2c:
    // 0x1d2c2c: 0xc8100  sll         $s0, $t4, 4
    ctx->pc = 0x1d2c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1d2c30:
    // 0x1d2c30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2c30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d2c34:
    // 0x1d2c34: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1d2c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_1d2c38:
    // 0x1d2c38: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x1d2c38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_1d2c3c:
    // 0x1d2c3c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1d2c3cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_1d2c40:
    // 0x1d2c40: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1d2c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1d2c44:
    // 0x1d2c44: 0xd8900  sll         $s1, $t5, 4
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1d2c48:
    // 0x1d2c48: 0xc6638  dsll        $t4, $t4, 24
    ctx->pc = 0x1d2c48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 24);
label_1d2c4c:
    // 0x1d2c4c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x1d2c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
label_1d2c50:
    // 0x1d2c50: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1d2c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1d2c54:
    // 0x1d2c54: 0xaca6009c  sw          $a2, 0x9C($a1)
    ctx->pc = 0x1d2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 6));
label_1d2c58:
    // 0x1d2c58: 0xa4a400a8  sh          $a0, 0xA8($a1)
    ctx->pc = 0x1d2c58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 168), (uint16_t)GPR_U32(ctx, 4));
label_1d2c5c:
    // 0x1d2c5c: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1d2c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1d2c60:
    // 0x1d2c60: 0x25a4ffff  addiu       $a0, $t5, -0x1
    ctx->pc = 0x1d2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_1d2c64:
    // 0x1d2c64: 0xa4a300aa  sh          $v1, 0xAA($a1)
    ctx->pc = 0x1d2c64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 170), (uint16_t)GPR_U32(ctx, 3));
label_1d2c68:
    // 0x1d2c68: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1d2c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1d2c6c:
    // 0x1d2c6c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d2c6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1d2c70:
    // 0x1d2c70: 0x323b8  dsll        $a0, $v1, 14
    ctx->pc = 0x1d2c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 14);
label_1d2c74:
    // 0x1d2c74: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1d2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d2c78:
    // 0x1d2c78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d2c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1d2c7c:
    // 0x1d2c7c: 0x1828825  or          $s1, $t4, $v0
    ctx->pc = 0x1d2c7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_1d2c80:
    // 0x1d2c80: 0xe2100  sll         $a0, $t6, 4
    ctx->pc = 0x1d2c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1d2c84:
    // 0x1d2c84: 0x25ccffff  addiu       $t4, $t6, -0x1
    ctx->pc = 0x1d2c84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_1d2c88:
    // 0x1d2c88: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d2c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1d2c8c:
    // 0x1d2c8c: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x1d2c8cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
label_1d2c90:
    // 0x1d2c90: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1d2c90u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_1d2c94:
    // 0x1d2c94: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1d2c94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2c98:
    // 0x1d2c98: 0xd68bc  dsll32      $t5, $t5, 2
    ctx->pc = 0x1d2c98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 2));
label_1d2c9c:
    // 0x1d2c9c: 0xaca300ac  sw          $v1, 0xAC($a1)
    ctx->pc = 0x1d2c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 3));
label_1d2ca0:
    // 0x1d2ca0: 0x1b16825  or          $t5, $t5, $s1
    ctx->pc = 0x1d2ca0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 17));
label_1d2ca4:
    // 0x1d2ca4: 0xa4af0090  sh          $t7, 0x90($a1)
    ctx->pc = 0x1d2ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 15));
label_1d2ca8:
    // 0x1d2ca8: 0xa4b00092  sh          $s0, 0x92($a1)
    ctx->pc = 0x1d2ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 146), (uint16_t)GPR_U32(ctx, 16));
label_1d2cac:
    // 0x1d2cac: 0xa4a600a0  sh          $a2, 0xA0($a1)
    ctx->pc = 0x1d2cacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 6));
label_1d2cb0:
    // 0x1d2cb0: 0xa4a400a2  sh          $a0, 0xA2($a1)
    ctx->pc = 0x1d2cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 162), (uint16_t)GPR_U32(ctx, 4));
label_1d2cb4:
    // 0x1d2cb4: 0xfcad0078  sd          $t5, 0x78($a1)
    ctx->pc = 0x1d2cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 13));
label_1d2cb8:
    // 0x1d2cb8: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1d2cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_1d2cbc:
    // 0x1d2cbc: 0xa0a3008b  sb          $v1, 0x8B($a1)
    ctx->pc = 0x1d2cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 139), (uint8_t)GPR_U32(ctx, 3));
label_1d2cc0:
    // 0x1d2cc0: 0xfca700c0  sd          $a3, 0xC0($a1)
    ctx->pc = 0x1d2cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 192), GPR_U64(ctx, 7));
label_1d2cc4:
    // 0x1d2cc4: 0xa4a800e8  sh          $t0, 0xE8($a1)
    ctx->pc = 0x1d2cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 232), (uint16_t)GPR_U32(ctx, 8));
label_1d2cc8:
    // 0x1d2cc8: 0xa4ab00ea  sh          $t3, 0xEA($a1)
    ctx->pc = 0x1d2cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 234), (uint16_t)GPR_U32(ctx, 11));
label_1d2ccc:
    // 0x1d2ccc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1d2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d2cd0:
    // 0x1d2cd0: 0xaca300ec  sw          $v1, 0xEC($a1)
    ctx->pc = 0x1d2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 3));
label_1d2cd4:
    // 0x1d2cd4: 0xa4a90100  sh          $t1, 0x100($a1)
    ctx->pc = 0x1d2cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 256), (uint16_t)GPR_U32(ctx, 9));
label_1d2cd8:
    // 0x1d2cd8: 0xa4ab0102  sh          $t3, 0x102($a1)
    ctx->pc = 0x1d2cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 258), (uint16_t)GPR_U32(ctx, 11));
label_1d2cdc:
    // 0x1d2cdc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1d2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d2ce0:
    // 0x1d2ce0: 0xaca30104  sw          $v1, 0x104($a1)
    ctx->pc = 0x1d2ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 3));
label_1d2ce4:
    // 0x1d2ce4: 0xa4a80118  sh          $t0, 0x118($a1)
    ctx->pc = 0x1d2ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 280), (uint16_t)GPR_U32(ctx, 8));
label_1d2ce8:
    // 0x1d2ce8: 0xa4aa011a  sh          $t2, 0x11A($a1)
    ctx->pc = 0x1d2ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 282), (uint16_t)GPR_U32(ctx, 10));
label_1d2cec:
    // 0x1d2cec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1d2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d2cf0:
    // 0x1d2cf0: 0xaca3011c  sw          $v1, 0x11C($a1)
    ctx->pc = 0x1d2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 3));
label_1d2cf4:
    // 0x1d2cf4: 0xa4a90130  sh          $t1, 0x130($a1)
    ctx->pc = 0x1d2cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 9));
label_1d2cf8:
    // 0x1d2cf8: 0xa4aa0132  sh          $t2, 0x132($a1)
    ctx->pc = 0x1d2cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 306), (uint16_t)GPR_U32(ctx, 10));
label_1d2cfc:
    // 0x1d2cfc: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1d2cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d2d00:
    // 0x1d2d00: 0xaca30134  sw          $v1, 0x134($a1)
    ctx->pc = 0x1d2d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 3));
label_1d2d04:
    // 0x1d2d04: 0xa4af00e0  sh          $t7, 0xE0($a1)
    ctx->pc = 0x1d2d04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 224), (uint16_t)GPR_U32(ctx, 15));
label_1d2d08:
    // 0x1d2d08: 0xa4b000e2  sh          $s0, 0xE2($a1)
    ctx->pc = 0x1d2d08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 226), (uint16_t)GPR_U32(ctx, 16));
label_1d2d0c:
    // 0x1d2d0c: 0xa4a600f8  sh          $a2, 0xF8($a1)
    ctx->pc = 0x1d2d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 248), (uint16_t)GPR_U32(ctx, 6));
label_1d2d10:
    // 0x1d2d10: 0xa4b000fa  sh          $s0, 0xFA($a1)
    ctx->pc = 0x1d2d10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 250), (uint16_t)GPR_U32(ctx, 16));
label_1d2d14:
    // 0x1d2d14: 0xa4af0110  sh          $t7, 0x110($a1)
    ctx->pc = 0x1d2d14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 272), (uint16_t)GPR_U32(ctx, 15));
label_1d2d18:
    // 0x1d2d18: 0xa4a40112  sh          $a0, 0x112($a1)
    ctx->pc = 0x1d2d18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 274), (uint16_t)GPR_U32(ctx, 4));
label_1d2d1c:
    // 0x1d2d1c: 0xa4a60128  sh          $a2, 0x128($a1)
    ctx->pc = 0x1d2d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 296), (uint16_t)GPR_U32(ctx, 6));
label_1d2d20:
    // 0x1d2d20: 0xa4a4012a  sh          $a0, 0x12A($a1)
    ctx->pc = 0x1d2d20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 298), (uint16_t)GPR_U32(ctx, 4));
label_1d2d24:
    // 0x1d2d24: 0xfcad00c8  sd          $t5, 0xC8($a1)
    ctx->pc = 0x1d2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 200), GPR_U64(ctx, 13));
label_1d2d28:
    // 0x1d2d28: 0x92630232  lbu         $v1, 0x232($s3)
    ctx->pc = 0x1d2d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_1d2d2c:
    // 0x1d2d2c: 0x146c0019  bne         $v1, $t4, . + 4 + (0x19 << 2)
label_1d2d30:
    if (ctx->pc == 0x1D2D30u) {
        ctx->pc = 0x1D2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D2Cu;
        // 0x1d2d30: 0x24a200c0  addiu       $v0, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D34u;
        goto label_1d2d34;
    }
    ctx->pc = 0x1D2D2Cu;
    {
        const bool branch_taken_0x1d2d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        ctx->pc = 0x1D2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D2Cu;
        // 0x1d2d30: 0x24a200c0  addiu       $v0, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d2c) {
            ctx->pc = 0x1D2D94u;
            goto label_1d2d94;
        }
    }
    ctx->pc = 0x1D2D34u;
label_1d2d34:
    // 0x1d2d34: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d2d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d2d38:
    // 0x1d2d38: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d2d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d2d3c:
    // 0x1d2d3c: 0xa0460018  sb          $a2, 0x18($v0)
    ctx->pc = 0x1d2d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 6));
label_1d2d40:
    // 0x1d2d40: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d2d44:
    // 0x1d2d44: 0xa0460019  sb          $a2, 0x19($v0)
    ctx->pc = 0x1d2d44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 6));
label_1d2d48:
    // 0x1d2d48: 0xa046001a  sb          $a2, 0x1A($v0)
    ctx->pc = 0x1d2d48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 6));
label_1d2d4c:
    // 0x1d2d4c: 0xa054001b  sb          $s4, 0x1B($v0)
    ctx->pc = 0x1d2d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 20));
label_1d2d50:
    // 0x1d2d50: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1d2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1d2d54:
    // 0x1d2d54: 0xa0460030  sb          $a2, 0x30($v0)
    ctx->pc = 0x1d2d54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 6));
label_1d2d58:
    // 0x1d2d58: 0xa0460031  sb          $a2, 0x31($v0)
    ctx->pc = 0x1d2d58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 6));
label_1d2d5c:
    // 0x1d2d5c: 0xa0460032  sb          $a2, 0x32($v0)
    ctx->pc = 0x1d2d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 6));
label_1d2d60:
    // 0x1d2d60: 0xa0540033  sb          $s4, 0x33($v0)
    ctx->pc = 0x1d2d60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 20));
label_1d2d64:
    // 0x1d2d64: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x1d2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
label_1d2d68:
    // 0x1d2d68: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x1d2d68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
label_1d2d6c:
    // 0x1d2d6c: 0xa0460049  sb          $a2, 0x49($v0)
    ctx->pc = 0x1d2d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 6));
label_1d2d70:
    // 0x1d2d70: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x1d2d70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
label_1d2d74:
    // 0x1d2d74: 0xa054004b  sb          $s4, 0x4B($v0)
    ctx->pc = 0x1d2d74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 20));
label_1d2d78:
    // 0x1d2d78: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1d2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
label_1d2d7c:
    // 0x1d2d7c: 0xa0430060  sb          $v1, 0x60($v0)
    ctx->pc = 0x1d2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 3));
label_1d2d80:
    // 0x1d2d80: 0xa0460061  sb          $a2, 0x61($v0)
    ctx->pc = 0x1d2d80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 6));
label_1d2d84:
    // 0x1d2d84: 0xa0430062  sb          $v1, 0x62($v0)
    ctx->pc = 0x1d2d84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 98), (uint8_t)GPR_U32(ctx, 3));
label_1d2d88:
    // 0x1d2d88: 0xa0540063  sb          $s4, 0x63($v0)
    ctx->pc = 0x1d2d88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 99), (uint8_t)GPR_U32(ctx, 20));
label_1d2d8c:
    // 0x1d2d8c: 0x10000032  b           . + 4 + (0x32 << 2)
label_1d2d90:
    if (ctx->pc == 0x1D2D90u) {
        ctx->pc = 0x1D2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D8Cu;
        // 0x1d2d90: 0xac440064  sw          $a0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2D94u;
        goto label_1d2d94;
    }
    ctx->pc = 0x1D2D8Cu;
    {
        const bool branch_taken_0x1d2d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D8Cu;
        // 0x1d2d90: 0xac440064  sw          $a0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d8c) {
            ctx->pc = 0x1D2E58u;
            goto label_1d2e58;
        }
    }
    ctx->pc = 0x1D2D94u;
label_1d2d94:
    // 0x1d2d94: 0x92630234  lbu         $v1, 0x234($s3)
    ctx->pc = 0x1d2d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
label_1d2d98:
    // 0x1d2d98: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_1d2d9c:
    if (ctx->pc == 0x1D2D9Cu) {
        ctx->pc = 0x1D2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D98u;
        // 0x1d2d9c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2DA0u;
        goto label_1d2da0;
    }
    ctx->pc = 0x1D2D98u;
    {
        const bool branch_taken_0x1d2d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D98u;
        // 0x1d2d9c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d98) {
            ctx->pc = 0x1D2E00u;
            goto label_1d2e00;
        }
    }
    ctx->pc = 0x1D2DA0u;
label_1d2da0:
    // 0x1d2da0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d2da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d2da4:
    // 0x1d2da4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d2da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d2da8:
    // 0x1d2da8: 0xa0460018  sb          $a2, 0x18($v0)
    ctx->pc = 0x1d2da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 6));
label_1d2dac:
    // 0x1d2dac: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d2db0:
    // 0x1d2db0: 0xa0460019  sb          $a2, 0x19($v0)
    ctx->pc = 0x1d2db0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 6));
label_1d2db4:
    // 0x1d2db4: 0xa046001a  sb          $a2, 0x1A($v0)
    ctx->pc = 0x1d2db4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 6));
label_1d2db8:
    // 0x1d2db8: 0xa054001b  sb          $s4, 0x1B($v0)
    ctx->pc = 0x1d2db8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 20));
label_1d2dbc:
    // 0x1d2dbc: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1d2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1d2dc0:
    // 0x1d2dc0: 0xa0460030  sb          $a2, 0x30($v0)
    ctx->pc = 0x1d2dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 6));
label_1d2dc4:
    // 0x1d2dc4: 0xa0460031  sb          $a2, 0x31($v0)
    ctx->pc = 0x1d2dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 6));
label_1d2dc8:
    // 0x1d2dc8: 0xa0460032  sb          $a2, 0x32($v0)
    ctx->pc = 0x1d2dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 6));
label_1d2dcc:
    // 0x1d2dcc: 0xa0540033  sb          $s4, 0x33($v0)
    ctx->pc = 0x1d2dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 20));
label_1d2dd0:
    // 0x1d2dd0: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x1d2dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
label_1d2dd4:
    // 0x1d2dd4: 0xa0430048  sb          $v1, 0x48($v0)
    ctx->pc = 0x1d2dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 3));
label_1d2dd8:
    // 0x1d2dd8: 0xa0430049  sb          $v1, 0x49($v0)
    ctx->pc = 0x1d2dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 3));
label_1d2ddc:
    // 0x1d2ddc: 0xa046004a  sb          $a2, 0x4A($v0)
    ctx->pc = 0x1d2ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 6));
label_1d2de0:
    // 0x1d2de0: 0xa054004b  sb          $s4, 0x4B($v0)
    ctx->pc = 0x1d2de0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 20));
label_1d2de4:
    // 0x1d2de4: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1d2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
label_1d2de8:
    // 0x1d2de8: 0xa0430060  sb          $v1, 0x60($v0)
    ctx->pc = 0x1d2de8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 3));
label_1d2dec:
    // 0x1d2dec: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x1d2decu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 3));
label_1d2df0:
    // 0x1d2df0: 0xa0460062  sb          $a2, 0x62($v0)
    ctx->pc = 0x1d2df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 98), (uint8_t)GPR_U32(ctx, 6));
label_1d2df4:
    // 0x1d2df4: 0xa0540063  sb          $s4, 0x63($v0)
    ctx->pc = 0x1d2df4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 99), (uint8_t)GPR_U32(ctx, 20));
label_1d2df8:
    // 0x1d2df8: 0x10000017  b           . + 4 + (0x17 << 2)
label_1d2dfc:
    if (ctx->pc == 0x1D2DFCu) {
        ctx->pc = 0x1D2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DF8u;
        // 0x1d2dfc: 0xac440064  sw          $a0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E00u;
        goto label_1d2e00;
    }
    ctx->pc = 0x1D2DF8u;
    {
        const bool branch_taken_0x1d2df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DF8u;
        // 0x1d2dfc: 0xac440064  sw          $a0, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2df8) {
            ctx->pc = 0x1D2E58u;
            goto label_1d2e58;
        }
    }
    ctx->pc = 0x1D2E00u;
label_1d2e00:
    // 0x1d2e00: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d2e04:
    // 0x1d2e04: 0xa0460018  sb          $a2, 0x18($v0)
    ctx->pc = 0x1d2e04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 6));
label_1d2e08:
    // 0x1d2e08: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d2e0c:
    // 0x1d2e0c: 0xa0460019  sb          $a2, 0x19($v0)
    ctx->pc = 0x1d2e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 6));
label_1d2e10:
    // 0x1d2e10: 0xa046001a  sb          $a2, 0x1A($v0)
    ctx->pc = 0x1d2e10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 6));
label_1d2e14:
    // 0x1d2e14: 0xa054001b  sb          $s4, 0x1B($v0)
    ctx->pc = 0x1d2e14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 20));
label_1d2e18:
    // 0x1d2e18: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1d2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1d2e1c:
    // 0x1d2e1c: 0xa0460030  sb          $a2, 0x30($v0)
    ctx->pc = 0x1d2e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 6));
label_1d2e20:
    // 0x1d2e20: 0xa0460031  sb          $a2, 0x31($v0)
    ctx->pc = 0x1d2e20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 6));
label_1d2e24:
    // 0x1d2e24: 0xa0460032  sb          $a2, 0x32($v0)
    ctx->pc = 0x1d2e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 6));
label_1d2e28:
    // 0x1d2e28: 0xa0540033  sb          $s4, 0x33($v0)
    ctx->pc = 0x1d2e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 51), (uint8_t)GPR_U32(ctx, 20));
label_1d2e2c:
    // 0x1d2e2c: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x1d2e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
label_1d2e30:
    // 0x1d2e30: 0xa0460048  sb          $a2, 0x48($v0)
    ctx->pc = 0x1d2e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 6));
label_1d2e34:
    // 0x1d2e34: 0xa0430049  sb          $v1, 0x49($v0)
    ctx->pc = 0x1d2e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 3));
label_1d2e38:
    // 0x1d2e38: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x1d2e38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
label_1d2e3c:
    // 0x1d2e3c: 0xa054004b  sb          $s4, 0x4B($v0)
    ctx->pc = 0x1d2e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 75), (uint8_t)GPR_U32(ctx, 20));
label_1d2e40:
    // 0x1d2e40: 0xac44004c  sw          $a0, 0x4C($v0)
    ctx->pc = 0x1d2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
label_1d2e44:
    // 0x1d2e44: 0xa0460060  sb          $a2, 0x60($v0)
    ctx->pc = 0x1d2e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 6));
label_1d2e48:
    // 0x1d2e48: 0xa0430061  sb          $v1, 0x61($v0)
    ctx->pc = 0x1d2e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 3));
label_1d2e4c:
    // 0x1d2e4c: 0xa0430062  sb          $v1, 0x62($v0)
    ctx->pc = 0x1d2e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 98), (uint8_t)GPR_U32(ctx, 3));
label_1d2e50:
    // 0x1d2e50: 0xa0540063  sb          $s4, 0x63($v0)
    ctx->pc = 0x1d2e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 99), (uint8_t)GPR_U32(ctx, 20));
label_1d2e54:
    // 0x1d2e54: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x1d2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
label_1d2e58:
    // 0x1d2e58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d2e5c:
    // 0x1d2e5c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1d2e60:
    // 0x1d2e60: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d2e64:
    // 0x1d2e64: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1d2e68:
    // 0x1d2e68: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d2e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2e6c:
    // 0x1d2e6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e70:
    // 0x1d2e70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d2e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e74:
    // 0x1d2e74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2e78:
    // 0x1d2e78: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d2e7c:
    // 0x1d2e7c: 0xc066c72  jal         func_19B1C8
label_1d2e80:
    if (ctx->pc == 0x1D2E80u) {
        ctx->pc = 0x1D2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E7Cu;
        // 0x1d2e80: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E84u;
        goto label_1d2e84;
    }
    ctx->pc = 0x1D2E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D2E84u);
    ctx->pc = 0x1D2E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2E7Cu;
    // 0x1d2e80: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D2E7Cu, 0x1D2E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2E84u;
label_1d2e84:
    // 0x1d2e84: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_1d2e88:
    if (ctx->pc == 0x1D2E88u) {
        ctx->pc = 0x1D2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E84u;
        // 0x1d2e88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2E8Cu;
        goto label_1d2e8c;
    }
    ctx->pc = 0x1D2E84u;
    {
        const bool branch_taken_0x1d2e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E84u;
        // 0x1d2e88: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e84) {
            ctx->pc = 0x1D3250u;
            goto label_1d3250;
        }
    }
    ctx->pc = 0x1D2E8Cu;
label_1d2e8c:
    // 0x1d2e8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2e90:
    // 0x1d2e90: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1d2e94:
    // 0x1d2e94: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1d2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1d2e98:
    // 0x1d2e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d2e9c:
    // 0x1d2e9c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1d2e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2ea0:
    // 0x1d2ea0: 0xc08f3d6  jal         func_23CF58
label_1d2ea4:
    if (ctx->pc == 0x1D2EA4u) {
        ctx->pc = 0x1D2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EA0u;
        // 0x1d2ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EA8u;
        goto label_1d2ea8;
    }
    ctx->pc = 0x1D2EA0u;
    SET_GPR_U32(ctx, 31, 0x1D2EA8u);
    ctx->pc = 0x1D2EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EA0u;
    // 0x1d2ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x1D2EA8u;
label_1d2ea8:
    // 0x1d2ea8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1d2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1d2eac:
    // 0x1d2eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2eb0:
    // 0x1d2eb0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1d2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1d2eb4:
    // 0x1d2eb4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1d2eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d2eb8:
    // 0x1d2eb8: 0xc0550d0  jal         func_154340
label_1d2ebc:
    if (ctx->pc == 0x1D2EBCu) {
        ctx->pc = 0x1D2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EB8u;
        // 0x1d2ebc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EC0u;
        goto label_1d2ec0;
    }
    ctx->pc = 0x1D2EB8u;
    SET_GPR_U32(ctx, 31, 0x1D2EC0u);
    ctx->pc = 0x1D2EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2EB8u;
    // 0x1d2ebc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x1D2EB8u, 0x1D2EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2EC0u;
label_1d2ec0:
    // 0x1d2ec0: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x1d2ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d2ec4:
    // 0x1d2ec4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d2ec8:
    if (ctx->pc == 0x1D2EC8u) {
        ctx->pc = 0x1D2ECCu;
        goto label_1d2ecc;
    }
    ctx->pc = 0x1D2EC4u;
    {
        const bool branch_taken_0x1d2ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ec4) {
            ctx->pc = 0x1D2ED8u;
            goto label_1d2ed8;
        }
    }
    ctx->pc = 0x1D2ECCu;
label_1d2ecc:
    // 0x1d2ecc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d2ed0:
    // 0x1d2ed0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d2ed4:
    if (ctx->pc == 0x1D2ED4u) {
        ctx->pc = 0x1D2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ED0u;
        // 0x1d2ed4: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2ED8u;
        goto label_1d2ed8;
    }
    ctx->pc = 0x1D2ED0u;
    {
        const bool branch_taken_0x1d2ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ED0u;
        // 0x1d2ed4: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ed0) {
            ctx->pc = 0x1D2EE0u;
            goto label_1d2ee0;
        }
    }
    ctx->pc = 0x1D2ED8u;
label_1d2ed8:
    // 0x1d2ed8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d2edc:
    // 0x1d2edc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1d2ee0:
    // 0x1d2ee0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d2ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ee4:
    // 0x1d2ee4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d2ee4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ee8:
    // 0x1d2ee8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d2ee8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2eec:
    // 0x1d2eec: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1d2eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1d2ef0:
    // 0x1d2ef0: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1d2ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d2ef4:
    // 0x1d2ef4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d2ef8:
    if (ctx->pc == 0x1D2EF8u) {
        ctx->pc = 0x1D2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EF4u;
        // 0x1d2ef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2EFCu;
        goto label_1d2efc;
    }
    ctx->pc = 0x1D2EF4u;
    {
        const bool branch_taken_0x1d2ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EF4u;
        // 0x1d2ef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ef4) {
            ctx->pc = 0x1D2F04u;
            goto label_1d2f04;
        }
    }
    ctx->pc = 0x1D2EFCu;
label_1d2efc:
    // 0x1d2efc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1d2efcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1d2f00:
    // 0x1d2f00: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x1d2f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1d2f04:
    // 0x1d2f04: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d2f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d2f08:
    // 0x1d2f08: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1d2f08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2f0c:
    // 0x1d2f0c: 0x8e4d0004  lw          $t5, 0x4($s2)
    ctx->pc = 0x1d2f0cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d2f10:
    // 0x1d2f10: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x1d2f10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_1d2f14:
    // 0x1d2f14: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1d2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d2f18:
    // 0x1d2f18: 0xdf878618  ld          $a3, -0x79E8($gp)
    ctx->pc = 0x1d2f18u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936088)));
label_1d2f1c:
    // 0x1d2f1c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d2f20:
    // 0x1d2f20: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d2f24:
    // 0x1d2f24: 0x25aeff40  addiu       $t6, $t5, -0xC0
    ctx->pc = 0x1d2f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967104));
label_1d2f28:
    // 0x1d2f28: 0x102001a  div         $zero, $t0, $v0
    ctx->pc = 0x1d2f28u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d2f2c:
    // 0x1d2f2c: 0xa65821  addu        $t3, $a1, $a2
    ctx->pc = 0x1d2f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d2f30:
    // 0x1d2f30: 0x1636021  addu        $t4, $t3, $v1
    ctx->pc = 0x1d2f30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1d2f34:
    // 0x1d2f34: 0x4010  mfhi        $t0
    ctx->pc = 0x1d2f34u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1d2f38:
    // 0x1d2f38: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
label_1d2f3c:
    if (ctx->pc == 0x1D2F3Cu) {
        ctx->pc = 0x1D2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F38u;
        // 0x1d2f3c: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F40u;
        goto label_1d2f40;
    }
    ctx->pc = 0x1D2F38u;
    {
        const bool branch_taken_0x1d2f38 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1D2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F38u;
        // 0x1d2f3c: 0x3102000f  andi        $v0, $t0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f38) {
            ctx->pc = 0x1D2F4Cu;
            goto label_1d2f4c;
        }
    }
    ctx->pc = 0x1D2F40u;
label_1d2f40:
    // 0x1d2f40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d2f44:
    if (ctx->pc == 0x1D2F44u) {
        ctx->pc = 0x1D2F48u;
        goto label_1d2f48;
    }
    ctx->pc = 0x1D2F40u;
    {
        const bool branch_taken_0x1d2f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f40) {
            ctx->pc = 0x1D2F4Cu;
            goto label_1d2f4c;
        }
    }
    ctx->pc = 0x1D2F48u;
label_1d2f48:
    // 0x1d2f48: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1d2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1d2f4c:
    // 0x1d2f4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d2f50:
    // 0x1d2f50: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1d2f54:
    if (ctx->pc == 0x1D2F54u) {
        ctx->pc = 0x1D2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F50u;
        // 0x1d2f54: 0x82903  sra         $a1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F58u;
        goto label_1d2f58;
    }
    ctx->pc = 0x1D2F50u;
    {
        const bool branch_taken_0x1d2f50 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1D2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F50u;
        // 0x1d2f54: 0x82903  sra         $a1, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f50) {
            ctx->pc = 0x1D2F60u;
            goto label_1d2f60;
        }
    }
    ctx->pc = 0x1D2F58u;
label_1d2f58:
    // 0x1d2f58: 0x2503000f  addiu       $v1, $t0, 0xF
    ctx->pc = 0x1d2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
label_1d2f5c:
    // 0x1d2f5c: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x1d2f5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
label_1d2f60:
    // 0x1d2f60: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1d2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d2f64:
    // 0x1d2f64: 0x244f0010  addiu       $t7, $v0, 0x10
    ctx->pc = 0x1d2f64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d2f68:
    // 0x1d2f68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d2f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d2f6c:
    // 0x1d2f6c: 0x29e10100  slti        $at, $t7, 0x100
    ctx->pc = 0x1d2f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)256) ? 1 : 0);
label_1d2f70:
    // 0x1d2f70: 0x350c0  sll         $t2, $v1, 3
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d2f74:
    // 0x1d2f74: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d2f78:
    if (ctx->pc == 0x1D2F78u) {
        ctx->pc = 0x1D2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F74u;
        // 0x1d2f78: 0x25580018  addiu       $t8, $t2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2F7Cu;
        goto label_1d2f7c;
    }
    ctx->pc = 0x1D2F74u;
    {
        const bool branch_taken_0x1d2f74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F74u;
        // 0x1d2f78: 0x25580018  addiu       $t8, $t2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f74) {
            ctx->pc = 0x1D2F80u;
            goto label_1d2f80;
        }
    }
    ctx->pc = 0x1D2F7Cu;
label_1d2f7c:
    // 0x1d2f7c: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x1d2f7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d2f80:
    // 0x1d2f80: 0x2b010100  slti        $at, $t8, 0x100
    ctx->pc = 0x1d2f80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)256) ? 1 : 0);
label_1d2f84:
    // 0x1d2f84: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d2f88:
    if (ctx->pc == 0x1D2F88u) {
        ctx->pc = 0x1D2F8Cu;
        goto label_1d2f8c;
    }
    ctx->pc = 0x1D2F84u;
    {
        const bool branch_taken_0x1d2f84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f84) {
            ctx->pc = 0x1D2F90u;
            goto label_1d2f90;
        }
    }
    ctx->pc = 0x1D2F8Cu;
label_1d2f8c:
    // 0x1d2f8c: 0x241800ff  addiu       $t8, $zero, 0xFF
    ctx->pc = 0x1d2f8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d2f90:
    // 0x1d2f90: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d2f94:
    // 0x1d2f94: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x1d2f94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d2f98:
    // 0x1d2f98: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x1d2f98u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1d2f9c:
    // 0x1d2f9c: 0xac83c  dsll32      $t9, $t2, 0
    ctx->pc = 0x1d2f9cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 10) << (32 + 0));
label_1d2fa0:
    // 0x1d2fa0: 0xf5100  sll         $t2, $t7, 4
    ctx->pc = 0x1d2fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1d2fa4:
    // 0x1d2fa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d2fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1d2fa8:
    // 0x1d2fa8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d2fa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d2fac:
    // 0x1d2fac: 0x25c5fff0  addiu       $a1, $t6, -0x10
    ctx->pc = 0x1d2facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967280));
label_1d2fb0:
    // 0x1d2fb0: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1d2fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_1d2fb4:
    // 0x1d2fb4: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x1d2fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_1d2fb8:
    // 0x1d2fb8: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x1d2fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1d2fbc:
    // 0x1d2fbc: 0x19c83f  dsra32      $t9, $t9, 0
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 25) >> (32 + 0));
label_1d2fc0:
    // 0x1d2fc0: 0x763021  addu        $a2, $v1, $s6
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1d2fc4:
    // 0x1d2fc4: 0x25be0010  addiu       $fp, $t5, 0x10
    ctx->pc = 0x1d2fc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
label_1d2fc8:
    // 0x1d2fc8: 0x2563ffe0  addiu       $v1, $t3, -0x20
    ctx->pc = 0x1d2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967264));
label_1d2fcc:
    // 0x1d2fcc: 0xfcc70070  sd          $a3, 0x70($a2)
    ctx->pc = 0x1d2fccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 112), GPR_U64(ctx, 7));
label_1d2fd0:
    // 0x1d2fd0: 0xa4c30098  sh          $v1, 0x98($a2)
    ctx->pc = 0x1d2fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 152), (uint16_t)GPR_U32(ctx, 3));
label_1d2fd4:
    // 0x1d2fd4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1d2fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1d2fd8:
    // 0x1d2fd8: 0xa4c5009a  sh          $a1, 0x9A($a2)
    ctx->pc = 0x1d2fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 154), (uint16_t)GPR_U32(ctx, 5));
label_1d2fdc:
    // 0x1d2fdc: 0x25830020  addiu       $v1, $t4, 0x20
    ctx->pc = 0x1d2fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
label_1d2fe0:
    // 0x1d2fe0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1d2fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d2fe4:
    // 0x1d2fe4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1d2fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1d2fe8:
    // 0x1d2fe8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1d2fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_1d2fec:
    // 0x1d2fec: 0xacc5009c  sw          $a1, 0x9C($a2)
    ctx->pc = 0x1d2fecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 5));
label_1d2ff0:
    // 0x1d2ff0: 0xf283c  dsll32      $a1, $t7, 0
    ctx->pc = 0x1d2ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) << (32 + 0));
label_1d2ff4:
    // 0x1d2ff4: 0xa4c300a8  sh          $v1, 0xA8($a2)
    ctx->pc = 0x1d2ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 168), (uint16_t)GPR_U32(ctx, 3));
label_1d2ff8:
    // 0x1d2ff8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d2ff8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1d2ffc:
    // 0x1d2ffc: 0xa4de00aa  sh          $fp, 0xAA($a2)
    ctx->pc = 0x1d2ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 170), (uint16_t)GPR_U32(ctx, 30));
label_1d3000:
    // 0x1d3000: 0x51bb8  dsll        $v1, $a1, 14
    ctx->pc = 0x1d3000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 14);
label_1d3004:
    // 0x1d3004: 0x8e4f0008  lw          $t7, 0x8($s2)
    ctx->pc = 0x1d3004u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d3008:
    // 0x1d3008: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d3008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d300c:
    // 0x1d300c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d300cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3010:
    // 0x1d3010: 0x191e38  dsll        $v1, $t9, 24
    ctx->pc = 0x1d3010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) << 24);
label_1d3014:
    // 0x1d3014: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1d3014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d3018:
    // 0x1d3018: 0x181100  sll         $v0, $t8, 4
    ctx->pc = 0x1d3018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
label_1d301c:
    // 0x1d301c: 0x24590008  addiu       $t9, $v0, 0x8
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d3020:
    // 0x1d3020: 0x2702ffff  addiu       $v0, $t8, -0x1
    ctx->pc = 0x1d3020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
label_1d3024:
    // 0x1d3024: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d3024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1d3028:
    // 0x1d3028: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d302c:
    // 0x1d302c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d302cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1d3030:
    // 0x1d3030: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1d3030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_1d3034:
    // 0x1d3034: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1d3034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1d3038:
    // 0x1d3038: 0xaccf00ac  sw          $t7, 0xAC($a2)
    ctx->pc = 0x1d3038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 172), GPR_U32(ctx, 15));
label_1d303c:
    // 0x1d303c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1d303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d3040:
    // 0x1d3040: 0xa4c80090  sh          $t0, 0x90($a2)
    ctx->pc = 0x1d3040u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 8));
label_1d3044:
    // 0x1d3044: 0x24580440  addiu       $t8, $v0, 0x440
    ctx->pc = 0x1d3044u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
label_1d3048:
    // 0x1d3048: 0xa4c90092  sh          $t1, 0x92($a2)
    ctx->pc = 0x1d3048u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 146), (uint16_t)GPR_U32(ctx, 9));
label_1d304c:
    // 0x1d304c: 0xa4ca00a0  sh          $t2, 0xA0($a2)
    ctx->pc = 0x1d304cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 160), (uint16_t)GPR_U32(ctx, 10));
label_1d3050:
    // 0x1d3050: 0xa4d900a2  sh          $t9, 0xA2($a2)
    ctx->pc = 0x1d3050u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 162), (uint16_t)GPR_U32(ctx, 25));
label_1d3054:
    // 0x1d3054: 0xfcc30078  sd          $v1, 0x78($a2)
    ctx->pc = 0x1d3054u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 120), GPR_U64(ctx, 3));
label_1d3058:
    // 0x1d3058: 0x93a500b0  lbu         $a1, 0xB0($sp)
    ctx->pc = 0x1d3058u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
label_1d305c:
    // 0x1d305c: 0xa0c5008b  sb          $a1, 0x8B($a2)
    ctx->pc = 0x1d305cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 139), (uint8_t)GPR_U32(ctx, 5));
label_1d3060:
    // 0x1d3060: 0xfc470440  sd          $a3, 0x440($v0)
    ctx->pc = 0x1d3060u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 1088), GPR_U64(ctx, 7));
label_1d3064:
    // 0x1d3064: 0xa44b0468  sh          $t3, 0x468($v0)
    ctx->pc = 0x1d3064u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1128), (uint16_t)GPR_U32(ctx, 11));
label_1d3068:
    // 0x1d3068: 0xa44e046a  sh          $t6, 0x46A($v0)
    ctx->pc = 0x1d3068u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1130), (uint16_t)GPR_U32(ctx, 14));
label_1d306c:
    // 0x1d306c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1d306cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d3070:
    // 0x1d3070: 0xac45046c  sw          $a1, 0x46C($v0)
    ctx->pc = 0x1d3070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1132), GPR_U32(ctx, 5));
label_1d3074:
    // 0x1d3074: 0xa44c0480  sh          $t4, 0x480($v0)
    ctx->pc = 0x1d3074u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1152), (uint16_t)GPR_U32(ctx, 12));
label_1d3078:
    // 0x1d3078: 0xa44e0482  sh          $t6, 0x482($v0)
    ctx->pc = 0x1d3078u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1154), (uint16_t)GPR_U32(ctx, 14));
label_1d307c:
    // 0x1d307c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1d307cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d3080:
    // 0x1d3080: 0xac450484  sw          $a1, 0x484($v0)
    ctx->pc = 0x1d3080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1156), GPR_U32(ctx, 5));
label_1d3084:
    // 0x1d3084: 0xa44b0498  sh          $t3, 0x498($v0)
    ctx->pc = 0x1d3084u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1176), (uint16_t)GPR_U32(ctx, 11));
label_1d3088:
    // 0x1d3088: 0xa44d049a  sh          $t5, 0x49A($v0)
    ctx->pc = 0x1d3088u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1178), (uint16_t)GPR_U32(ctx, 13));
label_1d308c:
    // 0x1d308c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1d308cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d3090:
    // 0x1d3090: 0xac45049c  sw          $a1, 0x49C($v0)
    ctx->pc = 0x1d3090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 5));
label_1d3094:
    // 0x1d3094: 0xa44c04b0  sh          $t4, 0x4B0($v0)
    ctx->pc = 0x1d3094u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1200), (uint16_t)GPR_U32(ctx, 12));
label_1d3098:
    // 0x1d3098: 0xa44d04b2  sh          $t5, 0x4B2($v0)
    ctx->pc = 0x1d3098u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1202), (uint16_t)GPR_U32(ctx, 13));
label_1d309c:
    // 0x1d309c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1d309cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1d30a0:
    // 0x1d30a0: 0xac4504b4  sw          $a1, 0x4B4($v0)
    ctx->pc = 0x1d30a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1204), GPR_U32(ctx, 5));
label_1d30a4:
    // 0x1d30a4: 0xa4480460  sh          $t0, 0x460($v0)
    ctx->pc = 0x1d30a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1120), (uint16_t)GPR_U32(ctx, 8));
label_1d30a8:
    // 0x1d30a8: 0xa4490462  sh          $t1, 0x462($v0)
    ctx->pc = 0x1d30a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1122), (uint16_t)GPR_U32(ctx, 9));
label_1d30ac:
    // 0x1d30ac: 0xa44a0478  sh          $t2, 0x478($v0)
    ctx->pc = 0x1d30acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1144), (uint16_t)GPR_U32(ctx, 10));
label_1d30b0:
    // 0x1d30b0: 0xa449047a  sh          $t1, 0x47A($v0)
    ctx->pc = 0x1d30b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1146), (uint16_t)GPR_U32(ctx, 9));
label_1d30b4:
    // 0x1d30b4: 0xa4480490  sh          $t0, 0x490($v0)
    ctx->pc = 0x1d30b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1168), (uint16_t)GPR_U32(ctx, 8));
label_1d30b8:
    // 0x1d30b8: 0xa4590492  sh          $t9, 0x492($v0)
    ctx->pc = 0x1d30b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1170), (uint16_t)GPR_U32(ctx, 25));
label_1d30bc:
    // 0x1d30bc: 0xa44a04a8  sh          $t2, 0x4A8($v0)
    ctx->pc = 0x1d30bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1192), (uint16_t)GPR_U32(ctx, 10));
label_1d30c0:
    // 0x1d30c0: 0xa45904aa  sh          $t9, 0x4AA($v0)
    ctx->pc = 0x1d30c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1194), (uint16_t)GPR_U32(ctx, 25));
label_1d30c4:
    // 0x1d30c4: 0xfc430448  sd          $v1, 0x448($v0)
    ctx->pc = 0x1d30c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 1096), GPR_U64(ctx, 3));
label_1d30c8:
    // 0x1d30c8: 0x92620232  lbu         $v0, 0x232($s3)
    ctx->pc = 0x1d30c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_1d30cc:
    // 0x1d30cc: 0x145e0018  bne         $v0, $fp, . + 4 + (0x18 << 2)
label_1d30d0:
    if (ctx->pc == 0x1D30D0u) {
        ctx->pc = 0x1D30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30CCu;
        // 0x1d30d0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D30D4u;
        goto label_1d30d4;
    }
    ctx->pc = 0x1D30CCu;
    {
        const bool branch_taken_0x1d30cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x1D30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30CCu;
        // 0x1d30d0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30cc) {
            ctx->pc = 0x1D3130u;
            goto label_1d3130;
        }
    }
    ctx->pc = 0x1D30D4u;
label_1d30d4:
    // 0x1d30d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d30d8:
    // 0x1d30d8: 0xa3050018  sb          $a1, 0x18($t8)
    ctx->pc = 0x1d30d8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 24), (uint8_t)GPR_U32(ctx, 5));
label_1d30dc:
    // 0x1d30dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d30e0:
    // 0x1d30e0: 0xa3050019  sb          $a1, 0x19($t8)
    ctx->pc = 0x1d30e0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 25), (uint8_t)GPR_U32(ctx, 5));
label_1d30e4:
    // 0x1d30e4: 0xa305001a  sb          $a1, 0x1A($t8)
    ctx->pc = 0x1d30e4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 26), (uint8_t)GPR_U32(ctx, 5));
label_1d30e8:
    // 0x1d30e8: 0xa314001b  sb          $s4, 0x1B($t8)
    ctx->pc = 0x1d30e8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 27), (uint8_t)GPR_U32(ctx, 20));
label_1d30ec:
    // 0x1d30ec: 0xaf03001c  sw          $v1, 0x1C($t8)
    ctx->pc = 0x1d30ecu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 28), GPR_U32(ctx, 3));
label_1d30f0:
    // 0x1d30f0: 0xa3050030  sb          $a1, 0x30($t8)
    ctx->pc = 0x1d30f0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 48), (uint8_t)GPR_U32(ctx, 5));
label_1d30f4:
    // 0x1d30f4: 0xa3050031  sb          $a1, 0x31($t8)
    ctx->pc = 0x1d30f4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 49), (uint8_t)GPR_U32(ctx, 5));
label_1d30f8:
    // 0x1d30f8: 0xa3050032  sb          $a1, 0x32($t8)
    ctx->pc = 0x1d30f8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 50), (uint8_t)GPR_U32(ctx, 5));
label_1d30fc:
    // 0x1d30fc: 0xa3140033  sb          $s4, 0x33($t8)
    ctx->pc = 0x1d30fcu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 51), (uint8_t)GPR_U32(ctx, 20));
label_1d3100:
    // 0x1d3100: 0xaf030034  sw          $v1, 0x34($t8)
    ctx->pc = 0x1d3100u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 3));
label_1d3104:
    // 0x1d3104: 0xa3020048  sb          $v0, 0x48($t8)
    ctx->pc = 0x1d3104u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 72), (uint8_t)GPR_U32(ctx, 2));
label_1d3108:
    // 0x1d3108: 0xa3050049  sb          $a1, 0x49($t8)
    ctx->pc = 0x1d3108u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 73), (uint8_t)GPR_U32(ctx, 5));
label_1d310c:
    // 0x1d310c: 0xa302004a  sb          $v0, 0x4A($t8)
    ctx->pc = 0x1d310cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 74), (uint8_t)GPR_U32(ctx, 2));
label_1d3110:
    // 0x1d3110: 0xa314004b  sb          $s4, 0x4B($t8)
    ctx->pc = 0x1d3110u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 75), (uint8_t)GPR_U32(ctx, 20));
label_1d3114:
    // 0x1d3114: 0xaf03004c  sw          $v1, 0x4C($t8)
    ctx->pc = 0x1d3114u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 76), GPR_U32(ctx, 3));
label_1d3118:
    // 0x1d3118: 0xa3020060  sb          $v0, 0x60($t8)
    ctx->pc = 0x1d3118u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 96), (uint8_t)GPR_U32(ctx, 2));
label_1d311c:
    // 0x1d311c: 0xa3050061  sb          $a1, 0x61($t8)
    ctx->pc = 0x1d311cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 97), (uint8_t)GPR_U32(ctx, 5));
label_1d3120:
    // 0x1d3120: 0xa3020062  sb          $v0, 0x62($t8)
    ctx->pc = 0x1d3120u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 98), (uint8_t)GPR_U32(ctx, 2));
label_1d3124:
    // 0x1d3124: 0xa3140063  sb          $s4, 0x63($t8)
    ctx->pc = 0x1d3124u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 99), (uint8_t)GPR_U32(ctx, 20));
label_1d3128:
    // 0x1d3128: 0x10000032  b           . + 4 + (0x32 << 2)
label_1d312c:
    if (ctx->pc == 0x1D312Cu) {
        ctx->pc = 0x1D312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3128u;
        // 0x1d312c: 0xaf030064  sw          $v1, 0x64($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3130u;
        goto label_1d3130;
    }
    ctx->pc = 0x1D3128u;
    {
        const bool branch_taken_0x1d3128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3128u;
        // 0x1d312c: 0xaf030064  sw          $v1, 0x64($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3128) {
            ctx->pc = 0x1D31F4u;
            goto label_1d31f4;
        }
    }
    ctx->pc = 0x1D3130u;
label_1d3130:
    // 0x1d3130: 0x92620234  lbu         $v0, 0x234($s3)
    ctx->pc = 0x1d3130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
label_1d3134:
    // 0x1d3134: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1d3138:
    if (ctx->pc == 0x1D3138u) {
        ctx->pc = 0x1D3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3134u;
        // 0x1d3138: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D313Cu;
        goto label_1d313c;
    }
    ctx->pc = 0x1D3134u;
    {
        const bool branch_taken_0x1d3134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3134u;
        // 0x1d3138: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3134) {
            ctx->pc = 0x1D3198u;
            goto label_1d3198;
        }
    }
    ctx->pc = 0x1D313Cu;
label_1d313c:
    // 0x1d313c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d313cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d3140:
    // 0x1d3140: 0xa3050018  sb          $a1, 0x18($t8)
    ctx->pc = 0x1d3140u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 24), (uint8_t)GPR_U32(ctx, 5));
label_1d3144:
    // 0x1d3144: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d3144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d3148:
    // 0x1d3148: 0xa3050019  sb          $a1, 0x19($t8)
    ctx->pc = 0x1d3148u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 25), (uint8_t)GPR_U32(ctx, 5));
label_1d314c:
    // 0x1d314c: 0xa305001a  sb          $a1, 0x1A($t8)
    ctx->pc = 0x1d314cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 26), (uint8_t)GPR_U32(ctx, 5));
label_1d3150:
    // 0x1d3150: 0xa314001b  sb          $s4, 0x1B($t8)
    ctx->pc = 0x1d3150u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 27), (uint8_t)GPR_U32(ctx, 20));
label_1d3154:
    // 0x1d3154: 0xaf03001c  sw          $v1, 0x1C($t8)
    ctx->pc = 0x1d3154u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 28), GPR_U32(ctx, 3));
label_1d3158:
    // 0x1d3158: 0xa3050030  sb          $a1, 0x30($t8)
    ctx->pc = 0x1d3158u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 48), (uint8_t)GPR_U32(ctx, 5));
label_1d315c:
    // 0x1d315c: 0xa3050031  sb          $a1, 0x31($t8)
    ctx->pc = 0x1d315cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 49), (uint8_t)GPR_U32(ctx, 5));
label_1d3160:
    // 0x1d3160: 0xa3050032  sb          $a1, 0x32($t8)
    ctx->pc = 0x1d3160u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 50), (uint8_t)GPR_U32(ctx, 5));
label_1d3164:
    // 0x1d3164: 0xa3140033  sb          $s4, 0x33($t8)
    ctx->pc = 0x1d3164u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 51), (uint8_t)GPR_U32(ctx, 20));
label_1d3168:
    // 0x1d3168: 0xaf030034  sw          $v1, 0x34($t8)
    ctx->pc = 0x1d3168u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 3));
label_1d316c:
    // 0x1d316c: 0xa3020048  sb          $v0, 0x48($t8)
    ctx->pc = 0x1d316cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 72), (uint8_t)GPR_U32(ctx, 2));
label_1d3170:
    // 0x1d3170: 0xa3020049  sb          $v0, 0x49($t8)
    ctx->pc = 0x1d3170u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 73), (uint8_t)GPR_U32(ctx, 2));
label_1d3174:
    // 0x1d3174: 0xa305004a  sb          $a1, 0x4A($t8)
    ctx->pc = 0x1d3174u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 74), (uint8_t)GPR_U32(ctx, 5));
label_1d3178:
    // 0x1d3178: 0xa314004b  sb          $s4, 0x4B($t8)
    ctx->pc = 0x1d3178u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 75), (uint8_t)GPR_U32(ctx, 20));
label_1d317c:
    // 0x1d317c: 0xaf03004c  sw          $v1, 0x4C($t8)
    ctx->pc = 0x1d317cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 76), GPR_U32(ctx, 3));
label_1d3180:
    // 0x1d3180: 0xa3020060  sb          $v0, 0x60($t8)
    ctx->pc = 0x1d3180u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 96), (uint8_t)GPR_U32(ctx, 2));
label_1d3184:
    // 0x1d3184: 0xa3020061  sb          $v0, 0x61($t8)
    ctx->pc = 0x1d3184u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 97), (uint8_t)GPR_U32(ctx, 2));
label_1d3188:
    // 0x1d3188: 0xa3050062  sb          $a1, 0x62($t8)
    ctx->pc = 0x1d3188u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 98), (uint8_t)GPR_U32(ctx, 5));
label_1d318c:
    // 0x1d318c: 0xa3140063  sb          $s4, 0x63($t8)
    ctx->pc = 0x1d318cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 99), (uint8_t)GPR_U32(ctx, 20));
label_1d3190:
    // 0x1d3190: 0x10000018  b           . + 4 + (0x18 << 2)
label_1d3194:
    if (ctx->pc == 0x1D3194u) {
        ctx->pc = 0x1D3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3190u;
        // 0x1d3194: 0xaf030064  sw          $v1, 0x64($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3198u;
        goto label_1d3198;
    }
    ctx->pc = 0x1D3190u;
    {
        const bool branch_taken_0x1d3190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3190u;
        // 0x1d3194: 0xaf030064  sw          $v1, 0x64($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3190) {
            ctx->pc = 0x1D31F4u;
            goto label_1d31f4;
        }
    }
    ctx->pc = 0x1D3198u;
label_1d3198:
    // 0x1d3198: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d3198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d319c:
    // 0x1d319c: 0xa3050018  sb          $a1, 0x18($t8)
    ctx->pc = 0x1d319cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 24), (uint8_t)GPR_U32(ctx, 5));
label_1d31a0:
    // 0x1d31a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d31a4:
    // 0x1d31a4: 0xa3050019  sb          $a1, 0x19($t8)
    ctx->pc = 0x1d31a4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 25), (uint8_t)GPR_U32(ctx, 5));
label_1d31a8:
    // 0x1d31a8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d31ac:
    // 0x1d31ac: 0xa305001a  sb          $a1, 0x1A($t8)
    ctx->pc = 0x1d31acu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 26), (uint8_t)GPR_U32(ctx, 5));
label_1d31b0:
    // 0x1d31b0: 0xa314001b  sb          $s4, 0x1B($t8)
    ctx->pc = 0x1d31b0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 27), (uint8_t)GPR_U32(ctx, 20));
label_1d31b4:
    // 0x1d31b4: 0xaf03001c  sw          $v1, 0x1C($t8)
    ctx->pc = 0x1d31b4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 28), GPR_U32(ctx, 3));
label_1d31b8:
    // 0x1d31b8: 0xa3050030  sb          $a1, 0x30($t8)
    ctx->pc = 0x1d31b8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 48), (uint8_t)GPR_U32(ctx, 5));
label_1d31bc:
    // 0x1d31bc: 0xa3050031  sb          $a1, 0x31($t8)
    ctx->pc = 0x1d31bcu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 49), (uint8_t)GPR_U32(ctx, 5));
label_1d31c0:
    // 0x1d31c0: 0xa3050032  sb          $a1, 0x32($t8)
    ctx->pc = 0x1d31c0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 50), (uint8_t)GPR_U32(ctx, 5));
label_1d31c4:
    // 0x1d31c4: 0xa3140033  sb          $s4, 0x33($t8)
    ctx->pc = 0x1d31c4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 51), (uint8_t)GPR_U32(ctx, 20));
label_1d31c8:
    // 0x1d31c8: 0xaf030034  sw          $v1, 0x34($t8)
    ctx->pc = 0x1d31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 3));
label_1d31cc:
    // 0x1d31cc: 0xa3050048  sb          $a1, 0x48($t8)
    ctx->pc = 0x1d31ccu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 72), (uint8_t)GPR_U32(ctx, 5));
label_1d31d0:
    // 0x1d31d0: 0xa3020049  sb          $v0, 0x49($t8)
    ctx->pc = 0x1d31d0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 73), (uint8_t)GPR_U32(ctx, 2));
label_1d31d4:
    // 0x1d31d4: 0xa302004a  sb          $v0, 0x4A($t8)
    ctx->pc = 0x1d31d4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 74), (uint8_t)GPR_U32(ctx, 2));
label_1d31d8:
    // 0x1d31d8: 0xa314004b  sb          $s4, 0x4B($t8)
    ctx->pc = 0x1d31d8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 75), (uint8_t)GPR_U32(ctx, 20));
label_1d31dc:
    // 0x1d31dc: 0xaf03004c  sw          $v1, 0x4C($t8)
    ctx->pc = 0x1d31dcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 76), GPR_U32(ctx, 3));
label_1d31e0:
    // 0x1d31e0: 0xa3050060  sb          $a1, 0x60($t8)
    ctx->pc = 0x1d31e0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 96), (uint8_t)GPR_U32(ctx, 5));
label_1d31e4:
    // 0x1d31e4: 0xa3020061  sb          $v0, 0x61($t8)
    ctx->pc = 0x1d31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 97), (uint8_t)GPR_U32(ctx, 2));
label_1d31e8:
    // 0x1d31e8: 0xa3020062  sb          $v0, 0x62($t8)
    ctx->pc = 0x1d31e8u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 98), (uint8_t)GPR_U32(ctx, 2));
label_1d31ec:
    // 0x1d31ec: 0xa3140063  sb          $s4, 0x63($t8)
    ctx->pc = 0x1d31ecu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 99), (uint8_t)GPR_U32(ctx, 20));
label_1d31f0:
    // 0x1d31f0: 0xaf030064  sw          $v1, 0x64($t8)
    ctx->pc = 0x1d31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 100), GPR_U32(ctx, 3));
label_1d31f4:
    // 0x1d31f4: 0x0  nop
    ctx->pc = 0x1d31f4u;
    // NOP
label_1d31f8:
    // 0x1d31f8: 0xc055240  jal         func_154900
label_1d31fc:
    if (ctx->pc == 0x1D31FCu) {
        ctx->pc = 0x1D31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31F8u;
        // 0x1d31fc: 0x8fa500d0  lw          $a1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3200u;
        goto label_1d3200;
    }
    ctx->pc = 0x1D31F8u;
    SET_GPR_U32(ctx, 31, 0x1D3200u);
    ctx->pc = 0x1D31FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31F8u;
    // 0x1d31fc: 0x8fa500d0  lw          $a1, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154900u, 0x1D31F8u, 0x1D3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3200u;
label_1d3200:
    // 0x1d3200: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x1d3200u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1d3204:
    // 0x1d3204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d3204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d3208:
    // 0x1d3208: 0x2a02000f  slti        $v0, $s0, 0xF
    ctx->pc = 0x1d3208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
label_1d320c:
    // 0x1d320c: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x1d320cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_1d3210:
    // 0x1d3210: 0x26b50080  addiu       $s5, $s5, 0x80
    ctx->pc = 0x1d3210u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
label_1d3214:
    // 0x1d3214: 0x1440ff35  bnez        $v0, . + 4 + (-0xCB << 2)
label_1d3218:
    if (ctx->pc == 0x1D3218u) {
        ctx->pc = 0x1D3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3214u;
        // 0x1d3218: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D321Cu;
        goto label_1d321c;
    }
    ctx->pc = 0x1D3214u;
    {
        const bool branch_taken_0x1d3214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3214u;
        // 0x1d3218: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3214) {
            ctx->pc = 0x1D2EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2eec;
        }
    }
    ctx->pc = 0x1D321Cu;
label_1d321c:
    // 0x1d321c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d321cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d3220:
    // 0x1d3220: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d3220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1d3224:
    // 0x1d3224: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d3224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d3228:
    // 0x1d3228: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d3228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1d322c:
    // 0x1d322c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d322cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d3230:
    // 0x1d3230: 0x240600bc  addiu       $a2, $zero, 0xBC
    ctx->pc = 0x1d3230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1d3234:
    // 0x1d3234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3238:
    // 0x1d3238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d323c:
    // 0x1d323c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d323cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3240:
    // 0x1d3240: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d3240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d3244:
    // 0x1d3244: 0xc066c72  jal         func_19B1C8
label_1d3248:
    if (ctx->pc == 0x1D3248u) {
        ctx->pc = 0x1D3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3244u;
        // 0x1d3248: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D324Cu;
        goto label_1d324c;
    }
    ctx->pc = 0x1D3244u;
    SET_GPR_U32(ctx, 31, 0x1D324Cu);
    ctx->pc = 0x1D3248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3244u;
    // 0x1d3248: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D3244u, 0x1D324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D324Cu;
label_1d324c:
    // 0x1d324c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d3250:
    // 0x1d3250: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d3250u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d3254:
    // 0x1d3254: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d3254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d3258:
    // 0x1d3258: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d3258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d325c:
    // 0x1d325c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d325cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d3260:
    // 0x1d3260: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d3260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3264:
    // 0x1d3264: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d3264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3268:
    // 0x1d3268: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d326c:
    // 0x1d326c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d326cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3270:
    // 0x1d3270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3274:
    // 0x1d3274: 0x3e00008  jr          $ra
label_1d3278:
    if (ctx->pc == 0x1D3278u) {
        ctx->pc = 0x1D3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3274u;
        // 0x1d3278: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D327Cu;
        goto label_1d327c;
    }
    ctx->pc = 0x1D3274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3274u;
        // 0x1d3278: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D327Cu;
label_1d327c:
    // 0x1d327c: 0x0  nop
    ctx->pc = 0x1d327cu;
    // NOP
label_1d3280:
    // 0x1d3280: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d3280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d3284:
    // 0x1d3284: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1d3284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_1d3288:
    // 0x1d3288: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d3288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d328c:
    // 0x1d328c: 0x24c61740  addiu       $a2, $a2, 0x1740
    ctx->pc = 0x1d328cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5952));
label_1d3290:
    // 0x1d3290: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1d3290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d3294:
    // 0x1d3294: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d3294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d3298:
    // 0x1d3298: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d3298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d329c:
    // 0x1d329c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d32a0:
    // 0x1d32a0: 0x539c0  sll         $a3, $a1, 7
    ctx->pc = 0x1d32a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_1d32a4:
    // 0x1d32a4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1d32a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d32a8:
    // 0x1d32a8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1d32a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_1d32ac:
    // 0x1d32ac: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d32b0:
    // 0x1d32b0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d32b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d32b4:
    // 0x1d32b4: 0x246303c4  addiu       $v1, $v1, 0x3C4
    ctx->pc = 0x1d32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 964));
label_1d32b8:
    // 0x1d32b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d32bc:
    // 0x1d32bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d32c0:
    // 0x1d32c0: 0x8c630194  lw          $v1, 0x194($v1)
    ctx->pc = 0x1d32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_1d32c4:
    // 0x1d32c4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1d32c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_1d32c8:
    // 0x1d32c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1d32cc:
    if (ctx->pc == 0x1D32CCu) {
        ctx->pc = 0x1D32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32C8u;
        // 0x1d32cc: 0xc42821  addu        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D32D0u;
        goto label_1d32d0;
    }
    ctx->pc = 0x1D32C8u;
    {
        const bool branch_taken_0x1d32c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32C8u;
        // 0x1d32cc: 0xc42821  addu        $a1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32c8) {
            ctx->pc = 0x1D32F8u;
            goto label_1d32f8;
        }
    }
    ctx->pc = 0x1D32D0u;
label_1d32d0:
    // 0x1d32d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1d32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1d32d4:
    // 0x1d32d4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d32d8:
    // 0x1d32d8: 0x34644800  ori         $a0, $v1, 0x4800
    ctx->pc = 0x1d32d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18432);
label_1d32dc:
    // 0x1d32dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d32dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d32e0:
    // 0x1d32e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1d32e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d32e4:
    // 0x1d32e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d32e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d32e8:
    // 0x1d32e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d32e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d32ec:
    // 0x1d32ec: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1d32f0:
    // 0x1d32f0: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x1d32f0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1d32f4:
    // 0x1d32f4: 0xac264800  sw          $a2, 0x4800($at)
    ctx->pc = 0x1d32f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18432), GPR_U32(ctx, 6));
label_1d32f8:
    // 0x1d32f8: 0x3e00008  jr          $ra
label_1d32fc:
    if (ctx->pc == 0x1D32FCu) {
        ctx->pc = 0x1D3300u;
        goto label_1d3300;
    }
    ctx->pc = 0x1D32F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D32F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3300u;
label_1d3300:
    // 0x1d3300: 0x3e00008  jr          $ra
label_1d3304:
    if (ctx->pc == 0x1D3304u) {
        ctx->pc = 0x1D3308u;
        goto label_1d3308;
    }
    ctx->pc = 0x1D3300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3308u;
label_1d3308:
    // 0x1d3308: 0x0  nop
    ctx->pc = 0x1d3308u;
    // NOP
label_1d330c:
    // 0x1d330c: 0x0  nop
    ctx->pc = 0x1d330cu;
    // NOP
label_1d3310:
    // 0x1d3310: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1d3314:
    // 0x1d3314: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d3314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1d3318:
    // 0x1d3318: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1d331c:
    // 0x1d331c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1d3320:
    // 0x1d3320: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d3320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d3324:
    // 0x1d3324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d3324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d3328:
    // 0x1d3328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d3328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d332c:
    // 0x1d332c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d3330:
    // 0x1d3330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d3330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d3334:
    // 0x1d3334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d3338:
    // 0x1d3338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d333c:
    // 0x1d333c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1d333cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1d3340:
    // 0x1d3340: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1d3340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_1d3344:
    // 0x1d3344: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d3344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d3348:
    // 0x1d3348: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1d3348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1d334c:
    // 0x1d334c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x1d334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_1d3350:
    // 0x1d3350: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d3354:
    // 0x1d3354: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d3354u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3358:
    // 0x1d3358: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d3358u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d335c:
    // 0x1d335c: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1d335cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d3360:
    // 0x1d3360: 0x3c10821  addu        $at, $fp, $at
    ctx->pc = 0x1d3360u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 1)));
label_1d3364:
    // 0x1d3364: 0xac204800  sw          $zero, 0x4800($at)
    ctx->pc = 0x1d3364u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18432), GPR_U32(ctx, 0));
label_1d3368:
    // 0x1d3368: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d336c:
    // 0x1d336c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d336cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3370:
    // 0x1d3370: 0x3d61021  addu        $v0, $fp, $s6
    ctx->pc = 0x1d3370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
label_1d3374:
    // 0x1d3374: 0x53a821  addu        $s5, $v0, $s3
    ctx->pc = 0x1d3374u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d3378:
    // 0x1d3378: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d3378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d337c:
    // 0x1d337c: 0xc05e234  jal         func_1788D0
label_1d3380:
    if (ctx->pc == 0x1D3380u) {
        ctx->pc = 0x1D3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D337Cu;
        // 0x1d3380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3384u;
        goto label_1d3384;
    }
    ctx->pc = 0x1D337Cu;
    SET_GPR_U32(ctx, 31, 0x1D3384u);
    ctx->pc = 0x1D3380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D337Cu;
    // 0x1d3380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D337Cu, 0x1D3384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3384u;
label_1d3384:
    // 0x1d3384: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3388:
    // 0x1d3388: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1d3388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1d338c:
    // 0x1d338c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d338cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3390:
    // 0x1d3390: 0xc05e1d4  jal         func_178750
label_1d3394:
    if (ctx->pc == 0x1D3394u) {
        ctx->pc = 0x1D3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3390u;
        // 0x1d3394: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3398u;
        goto label_1d3398;
    }
    ctx->pc = 0x1D3390u;
    SET_GPR_U32(ctx, 31, 0x1D3398u);
    ctx->pc = 0x1D3394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3390u;
    // 0x1d3394: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x1D3390u, 0x1D3398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3398u;
label_1d3398:
    // 0x1d3398: 0x3c028400  lui         $v0, 0x8400
    ctx->pc = 0x1d3398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33792 << 16));
label_1d339c:
    // 0x1d339c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d339cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1d33a0:
    // 0x1d33a0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d33a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1d33a4:
    // 0x1d33a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d33a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d33a8:
    // 0x1d33a8: 0x3c025353  lui         $v0, 0x5353
    ctx->pc = 0x1d33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21331 << 16));
label_1d33ac:
    // 0x1d33ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d33acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->pc = 0x1d33b0u;
    return;
}

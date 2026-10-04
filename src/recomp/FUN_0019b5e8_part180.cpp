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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f2c58u: goto label_1f2c58;
        case 0x1f2c5cu: goto label_1f2c5c;
        case 0x1f2c60u: goto label_1f2c60;
        case 0x1f2c64u: goto label_1f2c64;
        case 0x1f2c68u: goto label_1f2c68;
        case 0x1f2c6cu: goto label_1f2c6c;
        case 0x1f2c70u: goto label_1f2c70;
        case 0x1f2c74u: goto label_1f2c74;
        case 0x1f2c78u: goto label_1f2c78;
        case 0x1f2c7cu: goto label_1f2c7c;
        case 0x1f2c80u: goto label_1f2c80;
        case 0x1f2c84u: goto label_1f2c84;
        case 0x1f2c88u: goto label_1f2c88;
        case 0x1f2c8cu: goto label_1f2c8c;
        case 0x1f2c90u: goto label_1f2c90;
        case 0x1f2c94u: goto label_1f2c94;
        case 0x1f2c98u: goto label_1f2c98;
        case 0x1f2c9cu: goto label_1f2c9c;
        case 0x1f2ca0u: goto label_1f2ca0;
        case 0x1f2ca4u: goto label_1f2ca4;
        case 0x1f2ca8u: goto label_1f2ca8;
        case 0x1f2cacu: goto label_1f2cac;
        case 0x1f2cb0u: goto label_1f2cb0;
        case 0x1f2cb4u: goto label_1f2cb4;
        case 0x1f2cb8u: goto label_1f2cb8;
        case 0x1f2cbcu: goto label_1f2cbc;
        case 0x1f2cc0u: goto label_1f2cc0;
        case 0x1f2cc4u: goto label_1f2cc4;
        case 0x1f2cc8u: goto label_1f2cc8;
        case 0x1f2cccu: goto label_1f2ccc;
        case 0x1f2cd0u: goto label_1f2cd0;
        case 0x1f2cd4u: goto label_1f2cd4;
        case 0x1f2cd8u: goto label_1f2cd8;
        case 0x1f2cdcu: goto label_1f2cdc;
        case 0x1f2ce0u: goto label_1f2ce0;
        case 0x1f2ce4u: goto label_1f2ce4;
        case 0x1f2ce8u: goto label_1f2ce8;
        case 0x1f2cecu: goto label_1f2cec;
        case 0x1f2cf0u: goto label_1f2cf0;
        case 0x1f2cf4u: goto label_1f2cf4;
        case 0x1f2cf8u: goto label_1f2cf8;
        case 0x1f2cfcu: goto label_1f2cfc;
        case 0x1f2d00u: goto label_1f2d00;
        case 0x1f2d04u: goto label_1f2d04;
        case 0x1f2d08u: goto label_1f2d08;
        case 0x1f2d0cu: goto label_1f2d0c;
        case 0x1f2d10u: goto label_1f2d10;
        case 0x1f2d14u: goto label_1f2d14;
        case 0x1f2d18u: goto label_1f2d18;
        case 0x1f2d1cu: goto label_1f2d1c;
        case 0x1f2d20u: goto label_1f2d20;
        case 0x1f2d24u: goto label_1f2d24;
        case 0x1f2d28u: goto label_1f2d28;
        case 0x1f2d2cu: goto label_1f2d2c;
        case 0x1f2d30u: goto label_1f2d30;
        case 0x1f2d34u: goto label_1f2d34;
        case 0x1f2d38u: goto label_1f2d38;
        case 0x1f2d3cu: goto label_1f2d3c;
        case 0x1f2d40u: goto label_1f2d40;
        case 0x1f2d44u: goto label_1f2d44;
        case 0x1f2d48u: goto label_1f2d48;
        case 0x1f2d4cu: goto label_1f2d4c;
        case 0x1f2d50u: goto label_1f2d50;
        case 0x1f2d54u: goto label_1f2d54;
        case 0x1f2d58u: goto label_1f2d58;
        case 0x1f2d5cu: goto label_1f2d5c;
        case 0x1f2d60u: goto label_1f2d60;
        case 0x1f2d64u: goto label_1f2d64;
        case 0x1f2d68u: goto label_1f2d68;
        case 0x1f2d6cu: goto label_1f2d6c;
        case 0x1f2d70u: goto label_1f2d70;
        case 0x1f2d74u: goto label_1f2d74;
        case 0x1f2d78u: goto label_1f2d78;
        case 0x1f2d7cu: goto label_1f2d7c;
        case 0x1f2d80u: goto label_1f2d80;
        case 0x1f2d84u: goto label_1f2d84;
        case 0x1f2d88u: goto label_1f2d88;
        case 0x1f2d8cu: goto label_1f2d8c;
        case 0x1f2d90u: goto label_1f2d90;
        case 0x1f2d94u: goto label_1f2d94;
        case 0x1f2d98u: goto label_1f2d98;
        case 0x1f2d9cu: goto label_1f2d9c;
        case 0x1f2da0u: goto label_1f2da0;
        case 0x1f2da4u: goto label_1f2da4;
        case 0x1f2da8u: goto label_1f2da8;
        case 0x1f2dacu: goto label_1f2dac;
        case 0x1f2db0u: goto label_1f2db0;
        case 0x1f2db4u: goto label_1f2db4;
        case 0x1f2db8u: goto label_1f2db8;
        case 0x1f2dbcu: goto label_1f2dbc;
        case 0x1f2dc0u: goto label_1f2dc0;
        case 0x1f2dc4u: goto label_1f2dc4;
        case 0x1f2dc8u: goto label_1f2dc8;
        case 0x1f2dccu: goto label_1f2dcc;
        case 0x1f2dd0u: goto label_1f2dd0;
        case 0x1f2dd4u: goto label_1f2dd4;
        case 0x1f2dd8u: goto label_1f2dd8;
        case 0x1f2ddcu: goto label_1f2ddc;
        case 0x1f2de0u: goto label_1f2de0;
        case 0x1f2de4u: goto label_1f2de4;
        case 0x1f2de8u: goto label_1f2de8;
        case 0x1f2decu: goto label_1f2dec;
        case 0x1f2df0u: goto label_1f2df0;
        case 0x1f2df4u: goto label_1f2df4;
        case 0x1f2df8u: goto label_1f2df8;
        case 0x1f2dfcu: goto label_1f2dfc;
        case 0x1f2e00u: goto label_1f2e00;
        case 0x1f2e04u: goto label_1f2e04;
        case 0x1f2e08u: goto label_1f2e08;
        case 0x1f2e0cu: goto label_1f2e0c;
        case 0x1f2e10u: goto label_1f2e10;
        case 0x1f2e14u: goto label_1f2e14;
        case 0x1f2e18u: goto label_1f2e18;
        case 0x1f2e1cu: goto label_1f2e1c;
        case 0x1f2e20u: goto label_1f2e20;
        case 0x1f2e24u: goto label_1f2e24;
        case 0x1f2e28u: goto label_1f2e28;
        case 0x1f2e2cu: goto label_1f2e2c;
        case 0x1f2e30u: goto label_1f2e30;
        case 0x1f2e34u: goto label_1f2e34;
        case 0x1f2e38u: goto label_1f2e38;
        case 0x1f2e3cu: goto label_1f2e3c;
        case 0x1f2e40u: goto label_1f2e40;
        case 0x1f2e44u: goto label_1f2e44;
        case 0x1f2e48u: goto label_1f2e48;
        case 0x1f2e4cu: goto label_1f2e4c;
        case 0x1f2e50u: goto label_1f2e50;
        case 0x1f2e54u: goto label_1f2e54;
        case 0x1f2e58u: goto label_1f2e58;
        case 0x1f2e5cu: goto label_1f2e5c;
        case 0x1f2e60u: goto label_1f2e60;
        case 0x1f2e64u: goto label_1f2e64;
        case 0x1f2e68u: goto label_1f2e68;
        case 0x1f2e6cu: goto label_1f2e6c;
        case 0x1f2e70u: goto label_1f2e70;
        case 0x1f2e74u: goto label_1f2e74;
        case 0x1f2e78u: goto label_1f2e78;
        case 0x1f2e7cu: goto label_1f2e7c;
        case 0x1f2e80u: goto label_1f2e80;
        case 0x1f2e84u: goto label_1f2e84;
        case 0x1f2e88u: goto label_1f2e88;
        case 0x1f2e8cu: goto label_1f2e8c;
        case 0x1f2e90u: goto label_1f2e90;
        case 0x1f2e94u: goto label_1f2e94;
        case 0x1f2e98u: goto label_1f2e98;
        case 0x1f2e9cu: goto label_1f2e9c;
        case 0x1f2ea0u: goto label_1f2ea0;
        case 0x1f2ea4u: goto label_1f2ea4;
        case 0x1f2ea8u: goto label_1f2ea8;
        case 0x1f2eacu: goto label_1f2eac;
        case 0x1f2eb0u: goto label_1f2eb0;
        case 0x1f2eb4u: goto label_1f2eb4;
        case 0x1f2eb8u: goto label_1f2eb8;
        case 0x1f2ebcu: goto label_1f2ebc;
        case 0x1f2ec0u: goto label_1f2ec0;
        case 0x1f2ec4u: goto label_1f2ec4;
        case 0x1f2ec8u: goto label_1f2ec8;
        case 0x1f2eccu: goto label_1f2ecc;
        case 0x1f2ed0u: goto label_1f2ed0;
        case 0x1f2ed4u: goto label_1f2ed4;
        case 0x1f2ed8u: goto label_1f2ed8;
        case 0x1f2edcu: goto label_1f2edc;
        case 0x1f2ee0u: goto label_1f2ee0;
        case 0x1f2ee4u: goto label_1f2ee4;
        case 0x1f2ee8u: goto label_1f2ee8;
        case 0x1f2eecu: goto label_1f2eec;
        case 0x1f2ef0u: goto label_1f2ef0;
        case 0x1f2ef4u: goto label_1f2ef4;
        case 0x1f2ef8u: goto label_1f2ef8;
        case 0x1f2efcu: goto label_1f2efc;
        case 0x1f2f00u: goto label_1f2f00;
        case 0x1f2f04u: goto label_1f2f04;
        case 0x1f2f08u: goto label_1f2f08;
        case 0x1f2f0cu: goto label_1f2f0c;
        case 0x1f2f10u: goto label_1f2f10;
        case 0x1f2f14u: goto label_1f2f14;
        case 0x1f2f18u: goto label_1f2f18;
        case 0x1f2f1cu: goto label_1f2f1c;
        case 0x1f2f20u: goto label_1f2f20;
        case 0x1f2f24u: goto label_1f2f24;
        case 0x1f2f28u: goto label_1f2f28;
        case 0x1f2f2cu: goto label_1f2f2c;
        case 0x1f2f30u: goto label_1f2f30;
        case 0x1f2f34u: goto label_1f2f34;
        case 0x1f2f38u: goto label_1f2f38;
        case 0x1f2f3cu: goto label_1f2f3c;
        case 0x1f2f40u: goto label_1f2f40;
        case 0x1f2f44u: goto label_1f2f44;
        case 0x1f2f48u: goto label_1f2f48;
        case 0x1f2f4cu: goto label_1f2f4c;
        case 0x1f2f50u: goto label_1f2f50;
        case 0x1f2f54u: goto label_1f2f54;
        case 0x1f2f58u: goto label_1f2f58;
        case 0x1f2f5cu: goto label_1f2f5c;
        case 0x1f2f60u: goto label_1f2f60;
        case 0x1f2f64u: goto label_1f2f64;
        case 0x1f2f68u: goto label_1f2f68;
        case 0x1f2f6cu: goto label_1f2f6c;
        case 0x1f2f70u: goto label_1f2f70;
        case 0x1f2f74u: goto label_1f2f74;
        case 0x1f2f78u: goto label_1f2f78;
        case 0x1f2f7cu: goto label_1f2f7c;
        case 0x1f2f80u: goto label_1f2f80;
        case 0x1f2f84u: goto label_1f2f84;
        case 0x1f2f88u: goto label_1f2f88;
        case 0x1f2f8cu: goto label_1f2f8c;
        case 0x1f2f90u: goto label_1f2f90;
        case 0x1f2f94u: goto label_1f2f94;
        case 0x1f2f98u: goto label_1f2f98;
        case 0x1f2f9cu: goto label_1f2f9c;
        case 0x1f2fa0u: goto label_1f2fa0;
        case 0x1f2fa4u: goto label_1f2fa4;
        case 0x1f2fa8u: goto label_1f2fa8;
        case 0x1f2facu: goto label_1f2fac;
        case 0x1f2fb0u: goto label_1f2fb0;
        case 0x1f2fb4u: goto label_1f2fb4;
        case 0x1f2fb8u: goto label_1f2fb8;
        case 0x1f2fbcu: goto label_1f2fbc;
        case 0x1f2fc0u: goto label_1f2fc0;
        case 0x1f2fc4u: goto label_1f2fc4;
        case 0x1f2fc8u: goto label_1f2fc8;
        case 0x1f2fccu: goto label_1f2fcc;
        case 0x1f2fd0u: goto label_1f2fd0;
        case 0x1f2fd4u: goto label_1f2fd4;
        case 0x1f2fd8u: goto label_1f2fd8;
        case 0x1f2fdcu: goto label_1f2fdc;
        case 0x1f2fe0u: goto label_1f2fe0;
        case 0x1f2fe4u: goto label_1f2fe4;
        case 0x1f2fe8u: goto label_1f2fe8;
        case 0x1f2fecu: goto label_1f2fec;
        case 0x1f2ff0u: goto label_1f2ff0;
        case 0x1f2ff4u: goto label_1f2ff4;
        case 0x1f2ff8u: goto label_1f2ff8;
        case 0x1f2ffcu: goto label_1f2ffc;
        case 0x1f3000u: goto label_1f3000;
        case 0x1f3004u: goto label_1f3004;
        case 0x1f3008u: goto label_1f3008;
        case 0x1f300cu: goto label_1f300c;
        case 0x1f3010u: goto label_1f3010;
        case 0x1f3014u: goto label_1f3014;
        case 0x1f3018u: goto label_1f3018;
        case 0x1f301cu: goto label_1f301c;
        case 0x1f3020u: goto label_1f3020;
        case 0x1f3024u: goto label_1f3024;
        case 0x1f3028u: goto label_1f3028;
        case 0x1f302cu: goto label_1f302c;
        case 0x1f3030u: goto label_1f3030;
        case 0x1f3034u: goto label_1f3034;
        case 0x1f3038u: goto label_1f3038;
        case 0x1f303cu: goto label_1f303c;
        case 0x1f3040u: goto label_1f3040;
        case 0x1f3044u: goto label_1f3044;
        case 0x1f3048u: goto label_1f3048;
        case 0x1f304cu: goto label_1f304c;
        case 0x1f3050u: goto label_1f3050;
        case 0x1f3054u: goto label_1f3054;
        case 0x1f3058u: goto label_1f3058;
        case 0x1f305cu: goto label_1f305c;
        case 0x1f3060u: goto label_1f3060;
        case 0x1f3064u: goto label_1f3064;
        case 0x1f3068u: goto label_1f3068;
        case 0x1f306cu: goto label_1f306c;
        case 0x1f3070u: goto label_1f3070;
        case 0x1f3074u: goto label_1f3074;
        case 0x1f3078u: goto label_1f3078;
        case 0x1f307cu: goto label_1f307c;
        case 0x1f3080u: goto label_1f3080;
        case 0x1f3084u: goto label_1f3084;
        case 0x1f3088u: goto label_1f3088;
        case 0x1f308cu: goto label_1f308c;
        case 0x1f3090u: goto label_1f3090;
        case 0x1f3094u: goto label_1f3094;
        case 0x1f3098u: goto label_1f3098;
        case 0x1f309cu: goto label_1f309c;
        case 0x1f30a0u: goto label_1f30a0;
        case 0x1f30a4u: goto label_1f30a4;
        case 0x1f30a8u: goto label_1f30a8;
        case 0x1f30acu: goto label_1f30ac;
        case 0x1f30b0u: goto label_1f30b0;
        case 0x1f30b4u: goto label_1f30b4;
        case 0x1f30b8u: goto label_1f30b8;
        case 0x1f30bcu: goto label_1f30bc;
        case 0x1f30c0u: goto label_1f30c0;
        case 0x1f30c4u: goto label_1f30c4;
        case 0x1f30c8u: goto label_1f30c8;
        case 0x1f30ccu: goto label_1f30cc;
        case 0x1f30d0u: goto label_1f30d0;
        case 0x1f30d4u: goto label_1f30d4;
        case 0x1f30d8u: goto label_1f30d8;
        case 0x1f30dcu: goto label_1f30dc;
        case 0x1f30e0u: goto label_1f30e0;
        case 0x1f30e4u: goto label_1f30e4;
        case 0x1f30e8u: goto label_1f30e8;
        case 0x1f30ecu: goto label_1f30ec;
        case 0x1f30f0u: goto label_1f30f0;
        case 0x1f30f4u: goto label_1f30f4;
        case 0x1f30f8u: goto label_1f30f8;
        case 0x1f30fcu: goto label_1f30fc;
        case 0x1f3100u: goto label_1f3100;
        case 0x1f3104u: goto label_1f3104;
        case 0x1f3108u: goto label_1f3108;
        case 0x1f310cu: goto label_1f310c;
        case 0x1f3110u: goto label_1f3110;
        case 0x1f3114u: goto label_1f3114;
        case 0x1f3118u: goto label_1f3118;
        case 0x1f311cu: goto label_1f311c;
        case 0x1f3120u: goto label_1f3120;
        case 0x1f3124u: goto label_1f3124;
        case 0x1f3128u: goto label_1f3128;
        case 0x1f312cu: goto label_1f312c;
        case 0x1f3130u: goto label_1f3130;
        case 0x1f3134u: goto label_1f3134;
        case 0x1f3138u: goto label_1f3138;
        case 0x1f313cu: goto label_1f313c;
        case 0x1f3140u: goto label_1f3140;
        case 0x1f3144u: goto label_1f3144;
        case 0x1f3148u: goto label_1f3148;
        case 0x1f314cu: goto label_1f314c;
        case 0x1f3150u: goto label_1f3150;
        case 0x1f3154u: goto label_1f3154;
        case 0x1f3158u: goto label_1f3158;
        case 0x1f315cu: goto label_1f315c;
        case 0x1f3160u: goto label_1f3160;
        case 0x1f3164u: goto label_1f3164;
        case 0x1f3168u: goto label_1f3168;
        case 0x1f316cu: goto label_1f316c;
        case 0x1f3170u: goto label_1f3170;
        case 0x1f3174u: goto label_1f3174;
        case 0x1f3178u: goto label_1f3178;
        case 0x1f317cu: goto label_1f317c;
        case 0x1f3180u: goto label_1f3180;
        case 0x1f3184u: goto label_1f3184;
        case 0x1f3188u: goto label_1f3188;
        case 0x1f318cu: goto label_1f318c;
        case 0x1f3190u: goto label_1f3190;
        case 0x1f3194u: goto label_1f3194;
        case 0x1f3198u: goto label_1f3198;
        case 0x1f319cu: goto label_1f319c;
        case 0x1f31a0u: goto label_1f31a0;
        case 0x1f31a4u: goto label_1f31a4;
        case 0x1f31a8u: goto label_1f31a8;
        case 0x1f31acu: goto label_1f31ac;
        case 0x1f31b0u: goto label_1f31b0;
        case 0x1f31b4u: goto label_1f31b4;
        case 0x1f31b8u: goto label_1f31b8;
        case 0x1f31bcu: goto label_1f31bc;
        case 0x1f31c0u: goto label_1f31c0;
        case 0x1f31c4u: goto label_1f31c4;
        case 0x1f31c8u: goto label_1f31c8;
        case 0x1f31ccu: goto label_1f31cc;
        case 0x1f31d0u: goto label_1f31d0;
        case 0x1f31d4u: goto label_1f31d4;
        case 0x1f31d8u: goto label_1f31d8;
        case 0x1f31dcu: goto label_1f31dc;
        case 0x1f31e0u: goto label_1f31e0;
        case 0x1f31e4u: goto label_1f31e4;
        case 0x1f31e8u: goto label_1f31e8;
        case 0x1f31ecu: goto label_1f31ec;
        case 0x1f31f0u: goto label_1f31f0;
        case 0x1f31f4u: goto label_1f31f4;
        case 0x1f31f8u: goto label_1f31f8;
        case 0x1f31fcu: goto label_1f31fc;
        case 0x1f3200u: goto label_1f3200;
        case 0x1f3204u: goto label_1f3204;
        case 0x1f3208u: goto label_1f3208;
        case 0x1f320cu: goto label_1f320c;
        case 0x1f3210u: goto label_1f3210;
        case 0x1f3214u: goto label_1f3214;
        case 0x1f3218u: goto label_1f3218;
        case 0x1f321cu: goto label_1f321c;
        case 0x1f3220u: goto label_1f3220;
        case 0x1f3224u: goto label_1f3224;
        case 0x1f3228u: goto label_1f3228;
        case 0x1f322cu: goto label_1f322c;
        case 0x1f3230u: goto label_1f3230;
        case 0x1f3234u: goto label_1f3234;
        case 0x1f3238u: goto label_1f3238;
        case 0x1f323cu: goto label_1f323c;
        case 0x1f3240u: goto label_1f3240;
        case 0x1f3244u: goto label_1f3244;
        case 0x1f3248u: goto label_1f3248;
        case 0x1f324cu: goto label_1f324c;
        case 0x1f3250u: goto label_1f3250;
        case 0x1f3254u: goto label_1f3254;
        case 0x1f3258u: goto label_1f3258;
        case 0x1f325cu: goto label_1f325c;
        case 0x1f3260u: goto label_1f3260;
        case 0x1f3264u: goto label_1f3264;
        case 0x1f3268u: goto label_1f3268;
        case 0x1f326cu: goto label_1f326c;
        case 0x1f3270u: goto label_1f3270;
        case 0x1f3274u: goto label_1f3274;
        case 0x1f3278u: goto label_1f3278;
        case 0x1f327cu: goto label_1f327c;
        case 0x1f3280u: goto label_1f3280;
        case 0x1f3284u: goto label_1f3284;
        case 0x1f3288u: goto label_1f3288;
        case 0x1f328cu: goto label_1f328c;
        case 0x1f3290u: goto label_1f3290;
        case 0x1f3294u: goto label_1f3294;
        case 0x1f3298u: goto label_1f3298;
        case 0x1f329cu: goto label_1f329c;
        case 0x1f32a0u: goto label_1f32a0;
        case 0x1f32a4u: goto label_1f32a4;
        case 0x1f32a8u: goto label_1f32a8;
        case 0x1f32acu: goto label_1f32ac;
        case 0x1f32b0u: goto label_1f32b0;
        case 0x1f32b4u: goto label_1f32b4;
        case 0x1f32b8u: goto label_1f32b8;
        case 0x1f32bcu: goto label_1f32bc;
        case 0x1f32c0u: goto label_1f32c0;
        case 0x1f32c4u: goto label_1f32c4;
        case 0x1f32c8u: goto label_1f32c8;
        case 0x1f32ccu: goto label_1f32cc;
        case 0x1f32d0u: goto label_1f32d0;
        case 0x1f32d4u: goto label_1f32d4;
        case 0x1f32d8u: goto label_1f32d8;
        case 0x1f32dcu: goto label_1f32dc;
        case 0x1f32e0u: goto label_1f32e0;
        case 0x1f32e4u: goto label_1f32e4;
        case 0x1f32e8u: goto label_1f32e8;
        case 0x1f32ecu: goto label_1f32ec;
        case 0x1f32f0u: goto label_1f32f0;
        case 0x1f32f4u: goto label_1f32f4;
        case 0x1f32f8u: goto label_1f32f8;
        case 0x1f32fcu: goto label_1f32fc;
        case 0x1f3300u: goto label_1f3300;
        case 0x1f3304u: goto label_1f3304;
        case 0x1f3308u: goto label_1f3308;
        case 0x1f330cu: goto label_1f330c;
        case 0x1f3310u: goto label_1f3310;
        case 0x1f3314u: goto label_1f3314;
        case 0x1f3318u: goto label_1f3318;
        case 0x1f331cu: goto label_1f331c;
        case 0x1f3320u: goto label_1f3320;
        case 0x1f3324u: goto label_1f3324;
        case 0x1f3328u: goto label_1f3328;
        case 0x1f332cu: goto label_1f332c;
        case 0x1f3330u: goto label_1f3330;
        case 0x1f3334u: goto label_1f3334;
        case 0x1f3338u: goto label_1f3338;
        case 0x1f333cu: goto label_1f333c;
        case 0x1f3340u: goto label_1f3340;
        case 0x1f3344u: goto label_1f3344;
        case 0x1f3348u: goto label_1f3348;
        case 0x1f334cu: goto label_1f334c;
        case 0x1f3350u: goto label_1f3350;
        case 0x1f3354u: goto label_1f3354;
        case 0x1f3358u: goto label_1f3358;
        case 0x1f335cu: goto label_1f335c;
        case 0x1f3360u: goto label_1f3360;
        case 0x1f3364u: goto label_1f3364;
        case 0x1f3368u: goto label_1f3368;
        case 0x1f336cu: goto label_1f336c;
        case 0x1f3370u: goto label_1f3370;
        case 0x1f3374u: goto label_1f3374;
        case 0x1f3378u: goto label_1f3378;
        case 0x1f337cu: goto label_1f337c;
        case 0x1f3380u: goto label_1f3380;
        case 0x1f3384u: goto label_1f3384;
        case 0x1f3388u: goto label_1f3388;
        case 0x1f338cu: goto label_1f338c;
        case 0x1f3390u: goto label_1f3390;
        case 0x1f3394u: goto label_1f3394;
        case 0x1f3398u: goto label_1f3398;
        case 0x1f339cu: goto label_1f339c;
        case 0x1f33a0u: goto label_1f33a0;
        case 0x1f33a4u: goto label_1f33a4;
        case 0x1f33a8u: goto label_1f33a8;
        case 0x1f33acu: goto label_1f33ac;
        case 0x1f33b0u: goto label_1f33b0;
        case 0x1f33b4u: goto label_1f33b4;
        case 0x1f33b8u: goto label_1f33b8;
        case 0x1f33bcu: goto label_1f33bc;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33c4u: goto label_1f33c4;
        case 0x1f33c8u: goto label_1f33c8;
        case 0x1f33ccu: goto label_1f33cc;
        case 0x1f33d0u: goto label_1f33d0;
        case 0x1f33d4u: goto label_1f33d4;
        case 0x1f33d8u: goto label_1f33d8;
        case 0x1f33dcu: goto label_1f33dc;
        case 0x1f33e0u: goto label_1f33e0;
        case 0x1f33e4u: goto label_1f33e4;
        case 0x1f33e8u: goto label_1f33e8;
        case 0x1f33ecu: goto label_1f33ec;
        case 0x1f33f0u: goto label_1f33f0;
        case 0x1f33f4u: goto label_1f33f4;
        case 0x1f33f8u: goto label_1f33f8;
        case 0x1f33fcu: goto label_1f33fc;
        case 0x1f3400u: goto label_1f3400;
        case 0x1f3404u: goto label_1f3404;
        case 0x1f3408u: goto label_1f3408;
        case 0x1f340cu: goto label_1f340c;
        case 0x1f3410u: goto label_1f3410;
        case 0x1f3414u: goto label_1f3414;
        case 0x1f3418u: goto label_1f3418;
        case 0x1f341cu: goto label_1f341c;
        case 0x1f3420u: goto label_1f3420;
        case 0x1f3424u: goto label_1f3424;
        default: return;
    }

label_1f2c58:
    // 0x1f2c58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f2c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2c5c:
    // 0x1f2c5c: 0x0  nop
    ctx->pc = 0x1f2c5cu;
    // NOP
label_1f2c60:
    // 0x1f2c60: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x1f2c60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2c64:
    // 0x1f2c64: 0x0  nop
    ctx->pc = 0x1f2c64u;
    // NOP
label_1f2c68:
    // 0x1f2c68: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1f2c6c:
    if (ctx->pc == 0x1F2C6Cu) {
        ctx->pc = 0x1F2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C68u;
        // 0x1f2c6c: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C70u;
        goto label_1f2c70;
    }
    ctx->pc = 0x1F2C68u;
    {
        const bool branch_taken_0x1f2c68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C68u;
        // 0x1f2c6c: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c68) {
            ctx->pc = 0x1F2C9Cu;
            goto label_1f2c9c;
        }
    }
    ctx->pc = 0x1F2C70u;
label_1f2c70:
    // 0x1f2c70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1f2c74:
    // 0x1f2c74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f2c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2c78:
    // 0x1f2c78: 0x0  nop
    ctx->pc = 0x1f2c78u;
    // NOP
label_1f2c7c:
    // 0x1f2c7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f2c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2c80:
    // 0x1f2c80: 0x0  nop
    ctx->pc = 0x1f2c80u;
    // NOP
label_1f2c84:
    // 0x1f2c84: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1f2c88:
    if (ctx->pc == 0x1F2C88u) {
        ctx->pc = 0x1F2C8Cu;
        goto label_1f2c8c;
    }
    ctx->pc = 0x1F2C84u;
    {
        const bool branch_taken_0x1f2c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2c84) {
            ctx->pc = 0x1F2CCCu;
            goto label_1f2ccc;
        }
    }
    ctx->pc = 0x1F2C8Cu;
label_1f2c8c:
    // 0x1f2c8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1f2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1f2c90:
    // 0x1f2c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2c94:
    // 0x1f2c94: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f2c98:
    if (ctx->pc == 0x1F2C98u) {
        ctx->pc = 0x1F2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C94u;
        // 0x1f2c98: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C9Cu;
        goto label_1f2c9c;
    }
    ctx->pc = 0x1F2C94u;
    {
        const bool branch_taken_0x1f2c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C94u;
        // 0x1f2c98: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c94) {
            ctx->pc = 0x1F2CCCu;
            goto label_1f2ccc;
        }
    }
    ctx->pc = 0x1F2C9Cu;
label_1f2c9c:
    // 0x1f2c9c: 0x0  nop
    ctx->pc = 0x1f2c9cu;
    // NOP
label_1f2ca0:
    // 0x1f2ca0: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x1f2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
label_1f2ca4:
    // 0x1f2ca4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1f2ca8:
    // 0x1f2ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f2ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2cac:
    // 0x1f2cac: 0x0  nop
    ctx->pc = 0x1f2cacu;
    // NOP
label_1f2cb0:
    // 0x1f2cb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f2cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2cb4:
    // 0x1f2cb4: 0x0  nop
    ctx->pc = 0x1f2cb4u;
    // NOP
label_1f2cb8:
    // 0x1f2cb8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1f2cbc:
    if (ctx->pc == 0x1F2CBCu) {
        ctx->pc = 0x1F2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CB8u;
        // 0x1f2cbc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CC0u;
        goto label_1f2cc0;
    }
    ctx->pc = 0x1F2CB8u;
    {
        const bool branch_taken_0x1f2cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CB8u;
        // 0x1f2cbc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cb8) {
            ctx->pc = 0x1F2CCCu;
            goto label_1f2ccc;
        }
    }
    ctx->pc = 0x1F2CC0u;
label_1f2cc0:
    // 0x1f2cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2cc4:
    // 0x1f2cc4: 0x0  nop
    ctx->pc = 0x1f2cc4u;
    // NOP
label_1f2cc8:
    // 0x1f2cc8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1f2cc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1f2ccc:
    // 0x1f2ccc: 0x0  nop
    ctx->pc = 0x1f2cccu;
    // NOP
label_1f2cd0:
    // 0x1f2cd0: 0xc085d34  jal         func_2174D0
label_1f2cd4:
    if (ctx->pc == 0x1F2CD4u) {
        ctx->pc = 0x1F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CD0u;
        // 0x1f2cd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CD8u;
        goto label_1f2cd8;
    }
    ctx->pc = 0x1F2CD0u;
    SET_GPR_U32(ctx, 31, 0x1F2CD8u);
    ctx->pc = 0x1F2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CD0u;
    // 0x1f2cd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174D0u;
    { ctx->pc = 0x2174d0; return; }
    ctx->pc = 0x1F2CD8u;
label_1f2cd8:
    // 0x1f2cd8: 0xc07b48c  jal         func_1ED230
label_1f2cdc:
    if (ctx->pc == 0x1F2CDCu) {
        ctx->pc = 0x1F2CE0u;
        goto label_1f2ce0;
    }
    ctx->pc = 0x1F2CD8u;
    SET_GPR_U32(ctx, 31, 0x1F2CE0u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F2CE0u;
label_1f2ce0:
    // 0x1f2ce0: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_1f2ce4:
    if (ctx->pc == 0x1F2CE4u) {
        ctx->pc = 0x1F2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CE0u;
        // 0x1f2ce4: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CE8u;
        goto label_1f2ce8;
    }
    ctx->pc = 0x1F2CE0u;
    {
        const bool branch_taken_0x1f2ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CE0u;
        // 0x1f2ce4: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ce0) {
            ctx->pc = 0x1F2C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f2c04; return; }
        }
    }
    ctx->pc = 0x1F2CE8u;
label_1f2ce8:
    // 0x1f2ce8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f2cec:
    // 0x1f2cec: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_1f2cf0:
    if (ctx->pc == 0x1F2CF0u) {
        ctx->pc = 0x1F2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CECu;
        // 0x1f2cf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CF4u;
        goto label_1f2cf4;
    }
    ctx->pc = 0x1F2CECu;
    {
        const bool branch_taken_0x1f2cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CECu;
        // 0x1f2cf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cec) {
            ctx->pc = 0x1F2D08u;
            goto label_1f2d08;
        }
    }
    ctx->pc = 0x1F2CF4u;
label_1f2cf4:
    // 0x1f2cf4: 0xc085bd0  jal         func_216F40
label_1f2cf8:
    if (ctx->pc == 0x1F2CF8u) {
        ctx->pc = 0x1F2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CF4u;
        // 0x1f2cf8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CFCu;
        goto label_1f2cfc;
    }
    ctx->pc = 0x1F2CF4u;
    SET_GPR_U32(ctx, 31, 0x1F2CFCu);
    ctx->pc = 0x1F2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CF4u;
    // 0x1f2cf8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F40u;
    { ctx->pc = 0x216f40; return; }
    ctx->pc = 0x1F2CFCu;
label_1f2cfc:
    // 0x1f2cfc: 0xc078078  jal         func_1E01E0
label_1f2d00:
    if (ctx->pc == 0x1F2D00u) {
        ctx->pc = 0x1F2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CFCu;
        // 0x1f2d00: 0xaf808fd4  sw          $zero, -0x702C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D04u;
        goto label_1f2d04;
    }
    ctx->pc = 0x1F2CFCu;
    SET_GPR_U32(ctx, 31, 0x1F2D04u);
    ctx->pc = 0x1F2D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CFCu;
    // 0x1f2d00: 0xaf808fd4  sw          $zero, -0x702C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1F2D04u;
label_1f2d04:
    // 0x1f2d04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f2d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d08:
    // 0x1f2d08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f2d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2d0c:
    // 0x1f2d0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f2d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2d10:
    // 0x1f2d10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f2d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f2d14:
    // 0x1f2d14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f2d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2d18:
    // 0x1f2d18: 0x3e00008  jr          $ra
label_1f2d1c:
    if (ctx->pc == 0x1F2D1Cu) {
        ctx->pc = 0x1F2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D18u;
        // 0x1f2d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D20u;
        goto label_1f2d20;
    }
    ctx->pc = 0x1F2D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D18u;
        // 0x1f2d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2D20u;
label_1f2d20:
    // 0x1f2d20: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_1f2d24:
    // 0x1f2d24: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1f2d28:
    // 0x1f2d28: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1f2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1f2d2c:
    // 0x1f2d2c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1f2d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1f2d30:
    // 0x1f2d30: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1f2d34:
    // 0x1f2d34: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1f2d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1f2d38:
    // 0x1f2d38: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1f2d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1f2d3c:
    // 0x1f2d3c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1f2d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1f2d40:
    // 0x1f2d40: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1f2d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1f2d44:
    // 0x1f2d44: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1f2d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1f2d48:
    // 0x1f2d48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f2d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1f2d4c:
    // 0x1f2d4c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f2d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f2d50:
    // 0x1f2d50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f2d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f2d54:
    // 0x1f2d54: 0xc07cc60  jal         func_1F3180
label_1f2d58:
    if (ctx->pc == 0x1F2D58u) {
        ctx->pc = 0x1F2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D54u;
        // 0x1f2d58: 0xaf808fd4  sw          $zero, -0x702C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D5Cu;
        goto label_1f2d5c;
    }
    ctx->pc = 0x1F2D54u;
    SET_GPR_U32(ctx, 31, 0x1F2D5Cu);
    ctx->pc = 0x1F2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D54u;
    // 0x1f2d58: 0xaf808fd4  sw          $zero, -0x702C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3180u;
    goto label_1f3180;
    ctx->pc = 0x1F2D5Cu;
label_1f2d5c:
    // 0x1f2d5c: 0xc07082c  jal         func_1C20B0
label_1f2d60:
    if (ctx->pc == 0x1F2D60u) {
        ctx->pc = 0x1F2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D5Cu;
        // 0x1f2d60: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D64u;
        goto label_1f2d64;
    }
    ctx->pc = 0x1F2D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2D64u);
    ctx->pc = 0x1F2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D5Cu;
    // 0x1f2d60: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1F2D64u;
label_1f2d64:
    // 0x1f2d64: 0xffa200f8  sd          $v0, 0xF8($sp)
    ctx->pc = 0x1f2d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
label_1f2d68:
    // 0x1f2d68: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1f2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1f2d6c:
    // 0x1f2d6c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1f2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_1f2d70:
    // 0x1f2d70: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1f2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1f2d74:
    // 0x1f2d74: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f2d78:
    // 0x1f2d78: 0x24637ff0  addiu       $v1, $v1, 0x7FF0
    ctx->pc = 0x1f2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32752));
label_1f2d7c:
    // 0x1f2d7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f2d80:
    // 0x1f2d80: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1f2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1f2d84:
    // 0x1f2d84: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1f2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1f2d88:
    // 0x1f2d88: 0xc05e234  jal         func_1788D0
label_1f2d8c:
    if (ctx->pc == 0x1F2D8Cu) {
        ctx->pc = 0x1F2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D88u;
        // 0x1f2d8c: 0x24050e83  addiu       $a1, $zero, 0xE83 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3715));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D90u;
        goto label_1f2d90;
    }
    ctx->pc = 0x1F2D88u;
    SET_GPR_U32(ctx, 31, 0x1F2D90u);
    ctx->pc = 0x1F2D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D88u;
    // 0x1f2d8c: 0x24050e83  addiu       $a1, $zero, 0xE83 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3715));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F2D88u, 0x1F2D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D90u;
label_1f2d90:
    // 0x1f2d90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f2d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d94:
    // 0x1f2d94: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1f2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_1f2d98:
    // 0x1f2d98: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1f2d98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d9c:
    // 0x1f2d9c: 0x0  nop
    ctx->pc = 0x1f2d9cu;
    // NOP
label_1f2da0:
    // 0x1f2da0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f2da0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2da4:
    // 0x1f2da4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f2da4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2da8:
    // 0x1f2da8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2dac:
    // 0x1f2dac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f2dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2db0:
    // 0x1f2db0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f2db0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2db4:
    // 0x1f2db4: 0x0  nop
    ctx->pc = 0x1f2db4u;
    // NOP
label_1f2db8:
    // 0x1f2db8: 0xc070834  jal         func_1C20D0
label_1f2dbc:
    if (ctx->pc == 0x1F2DBCu) {
        ctx->pc = 0x1F2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DB8u;
        // 0x1f2dbc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2DC0u;
        goto label_1f2dc0;
    }
    ctx->pc = 0x1F2DB8u;
    SET_GPR_U32(ctx, 31, 0x1F2DC0u);
    ctx->pc = 0x1F2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DB8u;
    // 0x1f2dbc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2DC0u;
label_1f2dc0:
    // 0x1f2dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2dc4:
    // 0x1f2dc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f2dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2dc8:
    // 0x1f2dc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2dcc:
    // 0x1f2dcc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f2dccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2dd0:
    // 0x1f2dd0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f2dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2dd4:
    // 0x1f2dd4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1f2dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f2dd8:
    // 0x1f2dd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2ddc:
    // 0x1f2ddc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1f2ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2de0:
    // 0x1f2de0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2de4:
    // 0x1f2de4: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x1f2de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1f2de8:
    // 0x1f2de8: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1f2de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_1f2dec:
    // 0x1f2dec: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x1f2decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f2df0:
    // 0x1f2df0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1f2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1f2df4:
    // 0x1f2df4: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1f2df4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f2df8:
    // 0x1f2df8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1f2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1f2dfc:
    // 0x1f2dfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f2e00:
    // 0x1f2e00: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1f2e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1f2e04:
    // 0x1f2e04: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x1f2e04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1f2e08:
    // 0x1f2e08: 0xc05df9c  jal         func_177E70
label_1f2e0c:
    if (ctx->pc == 0x1F2E0Cu) {
        ctx->pc = 0x1F2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E08u;
        // 0x1f2e0c: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E10u;
        goto label_1f2e10;
    }
    ctx->pc = 0x1F2E08u;
    SET_GPR_U32(ctx, 31, 0x1F2E10u);
    ctx->pc = 0x1F2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E08u;
    // 0x1f2e0c: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1F2E08u, 0x1F2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E10u;
label_1f2e10:
    // 0x1f2e10: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f2e14:
    // 0x1f2e14: 0x24427fd0  addiu       $v0, $v0, 0x7FD0
    ctx->pc = 0x1f2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32720));
label_1f2e18:
    // 0x1f2e18: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1f2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1f2e1c:
    // 0x1f2e1c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f2e20:
    // 0x1f2e20: 0x51a821  addu        $s5, $v0, $s1
    ctx->pc = 0x1f2e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f2e24:
    // 0x1f2e24: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f2e28:
    // 0x1f2e28: 0x4410022  bgez        $v0, . + 4 + (0x22 << 2)
label_1f2e2c:
    if (ctx->pc == 0x1F2E2Cu) {
        ctx->pc = 0x1F2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E28u;
        // 0x1f2e2c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E30u;
        goto label_1f2e30;
    }
    ctx->pc = 0x1F2E28u;
    {
        const bool branch_taken_0x1f2e28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E28u;
        // 0x1f2e2c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e28) {
            ctx->pc = 0x1F2EB4u;
            goto label_1f2eb4;
        }
    }
    ctx->pc = 0x1F2E30u;
label_1f2e30:
    // 0x1f2e30: 0xc070834  jal         func_1C20D0
label_1f2e34:
    if (ctx->pc == 0x1F2E34u) {
        ctx->pc = 0x1F2E38u;
        goto label_1f2e38;
    }
    ctx->pc = 0x1F2E30u;
    SET_GPR_U32(ctx, 31, 0x1F2E38u);
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2E38u;
label_1f2e38:
    // 0x1f2e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2e3c:
    // 0x1f2e3c: 0x26840690  addiu       $a0, $s4, 0x690
    ctx->pc = 0x1f2e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1680));
label_1f2e40:
    // 0x1f2e40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2e44:
    // 0x1f2e44: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1f2e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f2e48:
    // 0x1f2e48: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f2e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2e4c:
    // 0x1f2e4c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1f2e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2e50:
    // 0x1f2e50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2e54:
    // 0x1f2e54: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f2e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2e58:
    // 0x1f2e58: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2e5c:
    // 0x1f2e5c: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x1f2e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1f2e60:
    // 0x1f2e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2e64:
    // 0x1f2e64: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f2e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f2e68:
    // 0x1f2e68: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f2e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f2e6c:
    // 0x1f2e6c: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x1f2e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f2e70:
    // 0x1f2e70: 0xc05df9c  jal         func_177E70
label_1f2e74:
    if (ctx->pc == 0x1F2E74u) {
        ctx->pc = 0x1F2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E70u;
        // 0x1f2e74: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E78u;
        goto label_1f2e78;
    }
    ctx->pc = 0x1F2E70u;
    SET_GPR_U32(ctx, 31, 0x1F2E78u);
    ctx->pc = 0x1F2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E70u;
    // 0x1f2e74: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1F2E70u, 0x1F2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E78u;
label_1f2e78:
    // 0x1f2e78: 0x26830d10  addiu       $v1, $s4, 0xD10
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3344));
label_1f2e7c:
    // 0x1f2e7c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2e80:
    // 0x1f2e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2e84:
    // 0x1f2e84: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2e88:
    // 0x1f2e88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2e8c:
    // 0x1f2e8c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2e90:
    // 0x1f2e90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2e94:
    // 0x1f2e94: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f2e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f2e98:
    // 0x1f2e98: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1f2e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f2e9c:
    // 0x1f2e9c: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x1f2e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2ea0:
    // 0x1f2ea0: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x1f2ea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2ea4:
    // 0x1f2ea4: 0xc054c60  jal         func_153180
label_1f2ea8:
    if (ctx->pc == 0x1F2EA8u) {
        ctx->pc = 0x1F2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EA4u;
        // 0x1f2ea8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EACu;
        goto label_1f2eac;
    }
    ctx->pc = 0x1F2EA4u;
    SET_GPR_U32(ctx, 31, 0x1F2EACu);
    ctx->pc = 0x1F2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EA4u;
    // 0x1f2ea8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2EA4u, 0x1F2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EACu;
label_1f2eac:
    // 0x1f2eac: 0x10000042  b           . + 4 + (0x42 << 2)
label_1f2eb0:
    if (ctx->pc == 0x1F2EB0u) {
        ctx->pc = 0x1F2EB4u;
        goto label_1f2eb4;
    }
    ctx->pc = 0x1F2EACu;
    {
        const bool branch_taken_0x1f2eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2eac) {
            ctx->pc = 0x1F2FB8u;
            goto label_1f2fb8;
        }
    }
    ctx->pc = 0x1F2EB4u;
label_1f2eb4:
    // 0x1f2eb4: 0x0  nop
    ctx->pc = 0x1f2eb4u;
    // NOP
label_1f2eb8:
    // 0x1f2eb8: 0xc070834  jal         func_1C20D0
label_1f2ebc:
    if (ctx->pc == 0x1F2EBCu) {
        ctx->pc = 0x1F2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EB8u;
        // 0x1f2ebc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EC0u;
        goto label_1f2ec0;
    }
    ctx->pc = 0x1F2EB8u;
    SET_GPR_U32(ctx, 31, 0x1F2EC0u);
    ctx->pc = 0x1F2EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EB8u;
    // 0x1f2ebc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2EC0u;
label_1f2ec0:
    // 0x1f2ec0: 0x240300a8  addiu       $v1, $zero, 0xA8
    ctx->pc = 0x1f2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f2ec4:
    // 0x1f2ec4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1f2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f2ec8:
    // 0x1f2ec8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2ecc:
    // 0x1f2ecc: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1f2eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_1f2ed0:
    // 0x1f2ed0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2ed4:
    // 0x1f2ed4: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1f2ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1f2ed8:
    // 0x1f2ed8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2edc:
    // 0x1f2edc: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1f2edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1f2ee0:
    // 0x1f2ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2ee4:
    // 0x1f2ee4: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1f2ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1f2ee8:
    // 0x1f2ee8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1f2eec:
    if (ctx->pc == 0x1F2EECu) {
        ctx->pc = 0x1F2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EE8u;
        // 0x1f2eec: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EF0u;
        goto label_1f2ef0;
    }
    ctx->pc = 0x1F2EE8u;
    {
        const bool branch_taken_0x1f2ee8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EE8u;
        // 0x1f2eec: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ee8) {
            ctx->pc = 0x1F2EFCu;
            goto label_1f2efc;
        }
    }
    ctx->pc = 0x1F2EF0u;
label_1f2ef0:
    // 0x1f2ef0: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1f2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1f2ef4:
    // 0x1f2ef4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f2ef8:
    if (ctx->pc == 0x1F2EF8u) {
        ctx->pc = 0x1F2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EF4u;
        // 0x1f2ef8: 0x723023  subu        $a2, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EFCu;
        goto label_1f2efc;
    }
    ctx->pc = 0x1F2EF4u;
    {
        const bool branch_taken_0x1f2ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EF4u;
        // 0x1f2ef8: 0x723023  subu        $a2, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ef4) {
            ctx->pc = 0x1F2F00u;
            goto label_1f2f00;
        }
    }
    ctx->pc = 0x1F2EFCu;
label_1f2efc:
    // 0x1f2efc: 0x26460188  addiu       $a2, $s2, 0x188
    ctx->pc = 0x1f2efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 392));
label_1f2f00:
    // 0x1f2f00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f04:
    // 0x1f2f04: 0x26670054  addiu       $a3, $s3, 0x54
    ctx->pc = 0x1f2f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_1f2f08:
    // 0x1f2f08: 0x26840690  addiu       $a0, $s4, 0x690
    ctx->pc = 0x1f2f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1680));
label_1f2f0c:
    // 0x1f2f0c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f2f0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2f10:
    // 0x1f2f10: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1f2f14:
    // 0x1f2f14: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2f18:
    // 0x1f2f18: 0xc05ded8  jal         func_177B60
label_1f2f1c:
    if (ctx->pc == 0x1F2F1Cu) {
        ctx->pc = 0x1F2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F18u;
        // 0x1f2f1c: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F20u;
        goto label_1f2f20;
    }
    ctx->pc = 0x1F2F18u;
    SET_GPR_U32(ctx, 31, 0x1F2F20u);
    ctx->pc = 0x1F2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F18u;
    // 0x1f2f1c: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1F2F18u, 0x1F2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F20u;
label_1f2f20:
    // 0x1f2f20: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1f2f24:
    if (ctx->pc == 0x1F2F24u) {
        ctx->pc = 0x1F2F28u;
        goto label_1f2f28;
    }
    ctx->pc = 0x1F2F20u;
    {
        const bool branch_taken_0x1f2f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f20) {
            ctx->pc = 0x1F2F34u;
            goto label_1f2f34;
        }
    }
    ctx->pc = 0x1F2F28u;
label_1f2f28:
    // 0x1f2f28: 0xa2800733  sb          $zero, 0x733($s4)
    ctx->pc = 0x1f2f28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1843), (uint8_t)GPR_U32(ctx, 0));
label_1f2f2c:
    // 0x1f2f2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f2f30:
    if (ctx->pc == 0x1F2F30u) {
        ctx->pc = 0x1F2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F2Cu;
        // 0x1f2f30: 0xa2800703  sb          $zero, 0x703($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1795), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F34u;
        goto label_1f2f34;
    }
    ctx->pc = 0x1F2F2Cu;
    {
        const bool branch_taken_0x1f2f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F2Cu;
        // 0x1f2f30: 0xa2800703  sb          $zero, 0x703($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1795), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f2c) {
            ctx->pc = 0x1F2F40u;
            goto label_1f2f40;
        }
    }
    ctx->pc = 0x1F2F34u;
label_1f2f34:
    // 0x1f2f34: 0x0  nop
    ctx->pc = 0x1f2f34u;
    // NOP
label_1f2f38:
    // 0x1f2f38: 0xa280074b  sb          $zero, 0x74B($s4)
    ctx->pc = 0x1f2f38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1867), (uint8_t)GPR_U32(ctx, 0));
label_1f2f3c:
    // 0x1f2f3c: 0xa280071b  sb          $zero, 0x71B($s4)
    ctx->pc = 0x1f2f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1819), (uint8_t)GPR_U32(ctx, 0));
label_1f2f40:
    // 0x1f2f40: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1f2f44:
    if (ctx->pc == 0x1F2F44u) {
        ctx->pc = 0x1F2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F40u;
        // 0x1f2f44: 0x26470198  addiu       $a3, $s2, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F48u;
        goto label_1f2f48;
    }
    ctx->pc = 0x1F2F40u;
    {
        const bool branch_taken_0x1f2f40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F40u;
        // 0x1f2f44: 0x26470198  addiu       $a3, $s2, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f40) {
            ctx->pc = 0x1F2F50u;
            goto label_1f2f50;
        }
    }
    ctx->pc = 0x1F2F48u;
label_1f2f48:
    // 0x1f2f48: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1f2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1f2f4c:
    // 0x1f2f4c: 0x523823  subu        $a3, $v0, $s2
    ctx->pc = 0x1f2f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f2f50:
    // 0x1f2f50: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_1f2f54:
    if (ctx->pc == 0x1F2F54u) {
        ctx->pc = 0x1F2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F50u;
        // 0x1f2f54: 0x2668003c  addiu       $t0, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F58u;
        goto label_1f2f58;
    }
    ctx->pc = 0x1F2F50u;
    {
        const bool branch_taken_0x1f2f50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F50u;
        // 0x1f2f54: 0x2668003c  addiu       $t0, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f50) {
            ctx->pc = 0x1F2F8Cu;
            goto label_1f2f8c;
        }
    }
    ctx->pc = 0x1F2F58u;
label_1f2f58:
    // 0x1f2f58: 0x26830d10  addiu       $v1, $s4, 0xD10
    ctx->pc = 0x1f2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3344));
label_1f2f5c:
    // 0x1f2f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2f60:
    // 0x1f2f60: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2f64:
    // 0x1f2f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f68:
    // 0x1f2f68: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2f6c:
    // 0x1f2f6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f2f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f2f70:
    // 0x1f2f70: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1f2f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f2f74:
    // 0x1f2f74: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x1f2f74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2f78:
    // 0x1f2f78: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f2f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f2f7c:
    // 0x1f2f7c: 0xc054c60  jal         func_153180
label_1f2f80:
    if (ctx->pc == 0x1F2F80u) {
        ctx->pc = 0x1F2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F7Cu;
        // 0x1f2f80: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F84u;
        goto label_1f2f84;
    }
    ctx->pc = 0x1F2F7Cu;
    SET_GPR_U32(ctx, 31, 0x1F2F84u);
    ctx->pc = 0x1F2F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F7Cu;
    // 0x1f2f80: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2F7Cu, 0x1F2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F84u;
label_1f2f84:
    // 0x1f2f84: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f2f88:
    if (ctx->pc == 0x1F2F88u) {
        ctx->pc = 0x1F2F8Cu;
        goto label_1f2f8c;
    }
    ctx->pc = 0x1F2F84u;
    {
        const bool branch_taken_0x1f2f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f84) {
            ctx->pc = 0x1F2FB8u;
            goto label_1f2fb8;
        }
    }
    ctx->pc = 0x1F2F8Cu;
label_1f2f8c:
    // 0x1f2f8c: 0x0  nop
    ctx->pc = 0x1f2f8cu;
    // NOP
label_1f2f90:
    // 0x1f2f90: 0x26820d10  addiu       $v0, $s4, 0xD10
    ctx->pc = 0x1f2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3344));
label_1f2f94:
    // 0x1f2f94: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f2f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2f98:
    // 0x1f2f98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f2f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2f9c:
    // 0x1f2f9c: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x1f2f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
label_1f2fa0:
    // 0x1f2fa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2fa4:
    // 0x1f2fa4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1f2fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f2fa8:
    // 0x1f2fa8: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x1f2fa8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2fac:
    // 0x1f2fac: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f2facu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f2fb0:
    // 0x1f2fb0: 0xc054c60  jal         func_153180
label_1f2fb4:
    if (ctx->pc == 0x1F2FB4u) {
        ctx->pc = 0x1F2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FB0u;
        // 0x1f2fb4: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2FB8u;
        goto label_1f2fb8;
    }
    ctx->pc = 0x1F2FB0u;
    SET_GPR_U32(ctx, 31, 0x1F2FB8u);
    ctx->pc = 0x1F2FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FB0u;
    // 0x1f2fb4: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2FB0u, 0x1F2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FB8u;
label_1f2fb8:
    // 0x1f2fb8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1f2fb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1f2fbc:
    // 0x1f2fbc: 0x2ae20004  slti        $v0, $s7, 0x4
    ctx->pc = 0x1f2fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
label_1f2fc0:
    // 0x1f2fc0: 0x26d600d0  addiu       $s6, $s6, 0xD0
    ctx->pc = 0x1f2fc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
label_1f2fc4:
    // 0x1f2fc4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1f2fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1f2fc8:
    // 0x1f2fc8: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x1f2fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1f2fcc:
    // 0x1f2fcc: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
label_1f2fd0:
    if (ctx->pc == 0x1F2FD0u) {
        ctx->pc = 0x1F2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FCCu;
        // 0x1f2fd0: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2FD4u;
        goto label_1f2fd4;
    }
    ctx->pc = 0x1F2FCCu;
    {
        const bool branch_taken_0x1f2fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FCCu;
        // 0x1f2fd0: 0x2673001c  addiu       $s3, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2fcc) {
            ctx->pc = 0x1F2DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2db4;
        }
    }
    ctx->pc = 0x1F2FD4u;
label_1f2fd4:
    // 0x1f2fd4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1f2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1f2fd8:
    // 0x1f2fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f2fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f2fdc:
    // 0x1f2fdc: 0x24420340  addiu       $v0, $v0, 0x340
    ctx->pc = 0x1f2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
label_1f2fe0:
    // 0x1f2fe0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1f2fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1f2fe4:
    // 0x1f2fe4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1f2fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f2fe8:
    // 0x1f2fe8: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
label_1f2fec:
    if (ctx->pc == 0x1F2FECu) {
        ctx->pc = 0x1F2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FE8u;
        // 0x1f2fec: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2FF0u;
        goto label_1f2ff0;
    }
    ctx->pc = 0x1F2FE8u;
    {
        const bool branch_taken_0x1f2fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FE8u;
        // 0x1f2fec: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2fe8) {
            ctx->pc = 0x1F2D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2d9c;
        }
    }
    ctx->pc = 0x1F2FF0u;
label_1f2ff0:
    // 0x1f2ff0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1f2ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f2ff4:
    // 0x1f2ff4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1f2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1f2ff8:
    // 0x1f2ff8: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1f2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1f2ffc:
    // 0x1f2ffc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1f3000:
    // 0x1f3000: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f3000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f3004:
    // 0x1f3004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3008:
    // 0x1f3008: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f3008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1f300c:
    // 0x1f300c: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x1f300cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_1f3010:
    // 0x1f3010: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1f3010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f3014:
    // 0x1f3014: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1f3014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f3018:
    // 0x1f3018: 0x24090090  addiu       $t1, $zero, 0x90
    ctx->pc = 0x1f3018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1f301c:
    // 0x1f301c: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1f301cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f3020:
    // 0x1f3020: 0x24441390  addiu       $a0, $v0, 0x1390
    ctx->pc = 0x1f3020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5008));
label_1f3024:
    // 0x1f3024: 0xc07c110  jal         func_1F0440
label_1f3028:
    if (ctx->pc == 0x1F3028u) {
        ctx->pc = 0x1F3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3024u;
        // 0x1f3028: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F302Cu;
        goto label_1f302c;
    }
    ctx->pc = 0x1F3024u;
    SET_GPR_U32(ctx, 31, 0x1F302Cu);
    ctx->pc = 0x1F3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3024u;
    // 0x1f3028: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1F302Cu;
label_1f302c:
    // 0x1f302c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f302cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3030:
    // 0x1f3030: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f3030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3034:
    // 0x1f3034: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f3034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3038:
    // 0x1f3038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f3038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f303c:
    // 0x1f303c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f303cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3040:
    // 0x1f3040: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f3040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3044:
    // 0x1f3044: 0x0  nop
    ctx->pc = 0x1f3044u;
    // NOP
label_1f3048:
    // 0x1f3048: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1f3048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f304c:
    // 0x1f304c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f3050:
    // 0x1f3050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3054:
    // 0x1f3054: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f3058:
    // 0x1f3058: 0x26d70134  addiu       $s7, $s6, 0x134
    ctx->pc = 0x1f3058u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 308));
label_1f305c:
    // 0x1f305c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1f3060:
    // 0x1f3060: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1f3060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f3064:
    // 0x1f3064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3068:
    // 0x1f3068: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1f3068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f306c:
    // 0x1f306c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1f306cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f3070:
    // 0x1f3070: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f3070u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f3074:
    // 0x1f3074: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x1f3074u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f3078:
    // 0x1f3078: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f3078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f307c:
    // 0x1f307c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f3080:
    // 0x1f3080: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1f3080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1f3084:
    // 0x1f3084: 0x24441700  addiu       $a0, $v0, 0x1700
    ctx->pc = 0x1f3084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5888));
label_1f3088:
    // 0x1f3088: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x1f3088u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_1f308c:
    // 0x1f308c: 0x26020138  addiu       $v0, $s0, 0x138
    ctx->pc = 0x1f308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
label_1f3090:
    // 0x1f3090: 0xc05de30  jal         func_1778C0
label_1f3094:
    if (ctx->pc == 0x1F3094u) {
        ctx->pc = 0x1F3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3090u;
        // 0x1f3094: 0x304affff  andi        $t2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3098u;
        goto label_1f3098;
    }
    ctx->pc = 0x1F3090u;
    SET_GPR_U32(ctx, 31, 0x1F3098u);
    ctx->pc = 0x1F3094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3090u;
    // 0x1f3094: 0x304affff  andi        $t2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F3090u, 0x1F3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3098u;
label_1f3098:
    // 0x1f3098: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1f3098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1f309c:
    // 0x1f309c: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x1f309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1f30a0:
    // 0x1f30a0: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1f30a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f30a4:
    // 0x1f30a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1f30a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f30a8:
    // 0x1f30a8: 0xc055148  jal         func_154520
label_1f30ac:
    if (ctx->pc == 0x1F30ACu) {
        ctx->pc = 0x1F30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30A8u;
        // 0x1f30ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30B0u;
        goto label_1f30b0;
    }
    ctx->pc = 0x1F30A8u;
    SET_GPR_U32(ctx, 31, 0x1F30B0u);
    ctx->pc = 0x1F30ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30A8u;
    // 0x1f30ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1F30A8u, 0x1F30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30B0u;
label_1f30b0:
    // 0x1f30b0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1f30b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1f30b4:
    // 0x1f30b4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1f30b8:
    if (ctx->pc == 0x1F30B8u) {
        ctx->pc = 0x1F30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30B4u;
        // 0x1f30b8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30BCu;
        goto label_1f30bc;
    }
    ctx->pc = 0x1F30B4u;
    {
        const bool branch_taken_0x1f30b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30B4u;
        // 0x1f30b8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30b4) {
            ctx->pc = 0x1F30C0u;
            goto label_1f30c0;
        }
    }
    ctx->pc = 0x1F30BCu;
label_1f30bc:
    // 0x1f30bc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1f30bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1f30c0:
    // 0x1f30c0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1f30c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f30c4:
    // 0x1f30c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1f30c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f30c8:
    // 0x1f30c8: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1f30c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1f30cc:
    // 0x1f30cc: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1f30ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1f30d0:
    // 0x1f30d0: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x1f30d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1f30d4:
    // 0x1f30d4: 0xc054e5c  jal         func_153970
label_1f30d8:
    if (ctx->pc == 0x1F30D8u) {
        ctx->pc = 0x1F30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30D4u;
        // 0x1f30d8: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30DCu;
        goto label_1f30dc;
    }
    ctx->pc = 0x1F30D4u;
    SET_GPR_U32(ctx, 31, 0x1F30DCu);
    ctx->pc = 0x1F30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30D4u;
    // 0x1f30d8: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1F30D4u, 0x1F30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30DCu;
label_1f30dc:
    // 0x1f30dc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1f30e0:
    // 0x1f30e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f30e4:
    // 0x1f30e4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f30e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f30e8:
    // 0x1f30e8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1f30e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f30ec:
    // 0x1f30ec: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1f30ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f30f0:
    // 0x1f30f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f30f4:
    // 0x1f30f4: 0xc054e74  jal         func_1539D0
label_1f30f8:
    if (ctx->pc == 0x1F30F8u) {
        ctx->pc = 0x1F30F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30F4u;
        // 0x1f30f8: 0x24441840  addiu       $a0, $v0, 0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F30FCu;
        goto label_1f30fc;
    }
    ctx->pc = 0x1F30F4u;
    SET_GPR_U32(ctx, 31, 0x1F30FCu);
    ctx->pc = 0x1F30F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30F4u;
    // 0x1f30f8: 0x24441840  addiu       $a0, $v0, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1F30F4u, 0x1F30FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30FCu;
label_1f30fc:
    // 0x1f30fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f30fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1f3100:
    // 0x1f3100: 0x26d60034  addiu       $s6, $s6, 0x34
    ctx->pc = 0x1f3100u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 52));
label_1f3104:
    // 0x1f3104: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x1f3104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f3108:
    // 0x1f3108: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x1f3108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1f310c:
    // 0x1f310c: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x1f310cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_1f3110:
    // 0x1f3110: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x1f3110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_1f3114:
    // 0x1f3114: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_1f3118:
    if (ctx->pc == 0x1F3118u) {
        ctx->pc = 0x1F3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3114u;
        // 0x1f3118: 0x26736800  addiu       $s3, $s3, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 26624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F311Cu;
        goto label_1f311c;
    }
    ctx->pc = 0x1F3114u;
    {
        const bool branch_taken_0x1f3114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3114u;
        // 0x1f3118: 0x26736800  addiu       $s3, $s3, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 26624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3114) {
            ctx->pc = 0x1F3044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3044;
        }
    }
    ctx->pc = 0x1F311Cu;
label_1f311c:
    // 0x1f311c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1f311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1f3120:
    // 0x1f3120: 0x24647fff  addiu       $a0, $v1, 0x7FFF
    ctx->pc = 0x1f3120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
label_1f3124:
    // 0x1f3124: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1f3124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1f3128:
    // 0x1f3128: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f312c:
    // 0x1f312c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1f312cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1f3130:
    // 0x1f3130: 0x24836841  addiu       $v1, $a0, 0x6841
    ctx->pc = 0x1f3130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 26689));
label_1f3134:
    // 0x1f3134: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x1f3134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_1f3138:
    // 0x1f3138: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1f3138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1f313c:
    // 0x1f313c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1f313cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f3140:
    // 0x1f3140: 0x1460ff0b  bnez        $v1, . + 4 + (-0xF5 << 2)
label_1f3144:
    if (ctx->pc == 0x1F3144u) {
        ctx->pc = 0x1F3148u;
        goto label_1f3148;
    }
    ctx->pc = 0x1F3140u;
    {
        const bool branch_taken_0x1f3140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3140) {
            ctx->pc = 0x1F2D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2d70;
        }
    }
    ctx->pc = 0x1F3148u;
label_1f3148:
    // 0x1f3148: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f3148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1f314c:
    // 0x1f314c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1f314cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f3150:
    // 0x1f3150: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1f3150u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f3154:
    // 0x1f3154: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1f3154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f3158:
    // 0x1f3158: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1f3158u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f315c:
    // 0x1f315c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1f315cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f3160:
    // 0x1f3160: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1f3160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f3164:
    // 0x1f3164: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f3164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f3168:
    // 0x1f3168: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f3168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f316c:
    // 0x1f316c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f316cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f3170:
    // 0x1f3170: 0x3e00008  jr          $ra
label_1f3174:
    if (ctx->pc == 0x1F3174u) {
        ctx->pc = 0x1F3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3170u;
        // 0x1f3174: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3178u;
        goto label_1f3178;
    }
    ctx->pc = 0x1F3170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3170u;
        // 0x1f3174: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3178u;
label_1f3178:
    // 0x1f3178: 0x0  nop
    ctx->pc = 0x1f3178u;
    // NOP
label_1f317c:
    // 0x1f317c: 0x0  nop
    ctx->pc = 0x1f317cu;
    // NOP
label_1f3180:
    // 0x1f3180: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x1f3180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
label_1f3184:
    // 0x1f3184: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f3184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f3188:
    // 0x1f3188: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f3188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f318c:
    // 0x1f318c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f3190:
    // 0x1f3190: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f3190u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3194:
    // 0x1f3194: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f3194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f3198:
    // 0x1f3198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f319c:
    // 0x1f319c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f319cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f31a0:
    // 0x1f31a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f31a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f31a4:
    // 0x1f31a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f31a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f31a8:
    // 0x1f31a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f31a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f31ac:
    // 0x1f31ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f31acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f31b0:
    // 0x1f31b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f31b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f31b4:
    // 0x1f31b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f31b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f31b8:
    // 0x1f31b8: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1f31bc:
    if (ctx->pc == 0x1F31BCu) {
        ctx->pc = 0x1F31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31B8u;
        // 0x1f31bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31C0u;
        goto label_1f31c0;
    }
    ctx->pc = 0x1F31B8u;
    {
        const bool branch_taken_0x1f31b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31B8u;
        // 0x1f31bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31b8) {
            ctx->pc = 0x1F31C8u;
            goto label_1f31c8;
        }
    }
    ctx->pc = 0x1F31C0u;
label_1f31c0:
    // 0x1f31c0: 0xc056a24  jal         func_15A890
label_1f31c4:
    if (ctx->pc == 0x1F31C4u) {
        ctx->pc = 0x1F31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31C0u;
        // 0x1f31c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31C8u;
        goto label_1f31c8;
    }
    ctx->pc = 0x1F31C0u;
    SET_GPR_U32(ctx, 31, 0x1F31C8u);
    ctx->pc = 0x1F31C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31C0u;
    // 0x1f31c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A890u, 0x1F31C0u, 0x1F31C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31C8u;
label_1f31c8:
    // 0x1f31c8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f31cc:
    // 0x1f31cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f31ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f31d0:
    // 0x1f31d0: 0x24637fd0  addiu       $v1, $v1, 0x7FD0
    ctx->pc = 0x1f31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32720));
label_1f31d4:
    // 0x1f31d4: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x1f31d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1f31d8:
    // 0x1f31d8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x1f31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1f31dc:
    // 0x1f31dc: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x1f31dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1f31e0:
    // 0x1f31e0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1f31e4:
    // 0x1f31e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1f31e8:
    // 0x1f31e8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1f31ec:
    if (ctx->pc == 0x1F31ECu) {
        ctx->pc = 0x1F31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31E8u;
        // 0x1f31ec: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F31F0u;
        goto label_1f31f0;
    }
    ctx->pc = 0x1F31E8u;
    {
        const bool branch_taken_0x1f31e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31E8u;
        // 0x1f31ec: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31e8) {
            ctx->pc = 0x1F31B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f31b8;
        }
    }
    ctx->pc = 0x1F31F0u;
label_1f31f0:
    // 0x1f31f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f31f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f31f4:
    // 0x1f31f4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1f31f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f31f8:
    // 0x1f31f8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1f31fc:
    if (ctx->pc == 0x1F31FCu) {
        ctx->pc = 0x1F31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31F8u;
        // 0x1f31fc: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3200u;
        goto label_1f3200;
    }
    ctx->pc = 0x1F31F8u;
    {
        const bool branch_taken_0x1f31f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31F8u;
        // 0x1f31fc: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31f8) {
            ctx->pc = 0x1F31B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f31b0;
        }
    }
    ctx->pc = 0x1F3200u;
label_1f3200:
    // 0x1f3200: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f3200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f3204:
    // 0x1f3204: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3208:
    // 0x1f3208: 0x9034490c  lbu         $s4, 0x490C($at)
    ctx->pc = 0x1f3208u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1f320c:
    // 0x1f320c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f320cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3210:
    // 0x1f3210: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3214:
    // 0x1f3214: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3218:
    // 0x1f3218: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f321c:
    // 0x1f321c: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3220:
    // 0x1f3220: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3224:
    // 0x1f3224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3228:
    // 0x1f3228: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f322c:
    // 0x1f322c: 0xc08f20e  jal         func_23C838
label_1f3230:
    if (ctx->pc == 0x1F3230u) {
        ctx->pc = 0x1F3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F322Cu;
        // 0x1f3230: 0x24a5d180  addiu       $a1, $a1, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3234u;
        goto label_1f3234;
    }
    ctx->pc = 0x1F322Cu;
    SET_GPR_U32(ctx, 31, 0x1F3234u);
    ctx->pc = 0x1F3230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F322Cu;
    // 0x1f3230: 0x24a5d180  addiu       $a1, $a1, -0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3234u;
label_1f3234:
    // 0x1f3234: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3238:
    // 0x1f3238: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f323c:
    // 0x1f323c: 0x8c237fd0  lw          $v1, 0x7FD0($at)
    ctx->pc = 0x1f323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f3240:
    // 0x1f3240: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x1f3240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1f3244:
    // 0x1f3244: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3248:
    // 0x1f3248: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f324c:
    // 0x1f324c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f324cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3250:
    // 0x1f3250: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3254:
    // 0x1f3254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3258:
    // 0x1f3258: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f325c:
    // 0x1f325c: 0xc08f20e  jal         func_23C838
label_1f3260:
    if (ctx->pc == 0x1F3260u) {
        ctx->pc = 0x1F3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F325Cu;
        // 0x1f3260: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3264u;
        goto label_1f3264;
    }
    ctx->pc = 0x1F325Cu;
    SET_GPR_U32(ctx, 31, 0x1F3264u);
    ctx->pc = 0x1F3260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F325Cu;
    // 0x1f3260: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3264u;
label_1f3264:
    // 0x1f3264: 0x27b101f0  addiu       $s1, $sp, 0x1F0
    ctx->pc = 0x1f3264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1f3268:
    // 0x1f3268: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f3268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f326c:
    // 0x1f326c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1f326cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f3270:
    // 0x1f3270: 0x1682001d  bne         $s4, $v0, . + 4 + (0x1D << 2)
label_1f3274:
    if (ctx->pc == 0x1F3274u) {
        ctx->pc = 0x1F3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3270u;
        // 0x1f3274: 0xa3a00170  sb          $zero, 0x170($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3278u;
        goto label_1f3278;
    }
    ctx->pc = 0x1F3270u;
    {
        const bool branch_taken_0x1f3270 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3270u;
        // 0x1f3274: 0xa3a00170  sb          $zero, 0x170($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3270) {
            ctx->pc = 0x1F32E8u;
            goto label_1f32e8;
        }
    }
    ctx->pc = 0x1F3278u;
label_1f3278:
    // 0x1f3278: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1f3278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1f327c:
    // 0x1f327c: 0x90224913  lbu         $v0, 0x4913($at)
    ctx->pc = 0x1f327cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18707)));
label_1f3280:
    // 0x1f3280: 0x104006bb  beqz        $v0, . + 4 + (0x6BB << 2)
label_1f3284:
    if (ctx->pc == 0x1F3284u) {
        ctx->pc = 0x1F3288u;
        goto label_1f3288;
    }
    ctx->pc = 0x1F3280u;
    {
        const bool branch_taken_0x1f3280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3280) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3288u;
label_1f3288:
    // 0x1f3288: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f3288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f328c:
    // 0x1f328c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f328cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3290:
    // 0x1f3290: 0x8c2625b8  lw          $a2, 0x25B8($at)
    ctx->pc = 0x1f3290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
label_1f3294:
    // 0x1f3294: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3298:
    // 0x1f3298: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f329c:
    // 0x1f329c: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x1f329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_1f32a0:
    // 0x1f32a0: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f32a4:
    // 0x1f32a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f32a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f32a8:
    // 0x1f32a8: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f32a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f32ac:
    // 0x1f32ac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f32acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f32b0:
    // 0x1f32b0: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f32b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f32b4:
    // 0x1f32b4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f32b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f32b8:
    // 0x1f32b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1f32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f32bc:
    // 0x1f32bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f32bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f32c0:
    // 0x1f32c0: 0xac237fd0  sw          $v1, 0x7FD0($at)
    ctx->pc = 0x1f32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32720), GPR_U32(ctx, 3));
label_1f32c4:
    // 0x1f32c4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f32c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f32c8:
    // 0x1f32c8: 0x8c237fd0  lw          $v1, 0x7FD0($at)
    ctx->pc = 0x1f32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f32cc:
    // 0x1f32cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f32d0:
    // 0x1f32d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f32d4:
    // 0x1f32d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f32d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f32d8:
    // 0x1f32d8: 0xc08f20e  jal         func_23C838
label_1f32dc:
    if (ctx->pc == 0x1F32DCu) {
        ctx->pc = 0x1F32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32D8u;
        // 0x1f32dc: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32E0u;
        goto label_1f32e0;
    }
    ctx->pc = 0x1F32D8u;
    SET_GPR_U32(ctx, 31, 0x1F32E0u);
    ctx->pc = 0x1F32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F32D8u;
    // 0x1f32dc: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F32E0u;
label_1f32e0:
    // 0x1f32e0: 0x100006a3  b           . + 4 + (0x6A3 << 2)
label_1f32e4:
    if (ctx->pc == 0x1F32E4u) {
        ctx->pc = 0x1F32E8u;
        goto label_1f32e8;
    }
    ctx->pc = 0x1F32E0u;
    {
        const bool branch_taken_0x1f32e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f32e0) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F32E8u;
label_1f32e8:
    // 0x1f32e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f32ec:
    // 0x1f32ec: 0x1682002e  bne         $s4, $v0, . + 4 + (0x2E << 2)
label_1f32f0:
    if (ctx->pc == 0x1F32F0u) {
        ctx->pc = 0x1F32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32ECu;
        // 0x1f32f0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F32F4u;
        goto label_1f32f4;
    }
    ctx->pc = 0x1F32ECu;
    {
        const bool branch_taken_0x1f32ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32ECu;
        // 0x1f32f0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f32ec) {
            ctx->pc = 0x1F33A8u;
            goto label_1f33a8;
        }
    }
    ctx->pc = 0x1F32F4u;
label_1f32f4:
    // 0x1f32f4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f32f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f32f8:
    // 0x1f32f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f32f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f32fc:
    // 0x1f32fc: 0x8c297fd0  lw          $t1, 0x7FD0($at)
    ctx->pc = 0x1f32fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f3300:
    // 0x1f3300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3304:
    // 0x1f3304: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f3304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3308:
    // 0x1f3308: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f330c:
    // 0x1f330c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1f330cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1f3310:
    // 0x1f3310: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x1f3310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_1f3314:
    // 0x1f3314: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1f3314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1f3318:
    // 0x1f3318: 0x0  nop
    ctx->pc = 0x1f3318u;
    // NOP
label_1f331c:
    // 0x1f331c: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x1f331cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1f3320:
    // 0x1f3320: 0x9082367c  lbu         $v0, 0x367C($a0)
    ctx->pc = 0x1f3320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
label_1f3324:
    // 0x1f3324: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f3328:
    if (ctx->pc == 0x1F3328u) {
        ctx->pc = 0x1F332Cu;
        goto label_1f332c;
    }
    ctx->pc = 0x1F3324u;
    {
        const bool branch_taken_0x1f3324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3324) {
            ctx->pc = 0x1F335Cu;
            goto label_1f335c;
        }
    }
    ctx->pc = 0x1F332Cu;
label_1f332c:
    // 0x1f332c: 0x8c823674  lw          $v0, 0x3674($a0)
    ctx->pc = 0x1f332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13940)));
label_1f3330:
    // 0x1f3330: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f3334:
    if (ctx->pc == 0x1F3334u) {
        ctx->pc = 0x1F3338u;
        goto label_1f3338;
    }
    ctx->pc = 0x1F3330u;
    {
        const bool branch_taken_0x1f3330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3330) {
            ctx->pc = 0x1F335Cu;
            goto label_1f335c;
        }
    }
    ctx->pc = 0x1F3338u;
label_1f3338:
    // 0x1f3338: 0x8c843670  lw          $a0, 0x3670($a0)
    ctx->pc = 0x1f3338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13936)));
label_1f333c:
    // 0x1f333c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1f333cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f3340:
    // 0x1f3340: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f3340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f3344:
    // 0x1f3344: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3348:
    // 0x1f3348: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f3348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f334c:
    // 0x1f334c: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
label_1f3350:
    if (ctx->pc == 0x1F3350u) {
        ctx->pc = 0x1F3354u;
        goto label_1f3354;
    }
    ctx->pc = 0x1F334Cu;
    {
        const bool branch_taken_0x1f334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1f334c) {
            ctx->pc = 0x1F335Cu;
            goto label_1f335c;
        }
    }
    ctx->pc = 0x1F3354u;
label_1f3354:
    // 0x1f3354: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f3358:
    if (ctx->pc == 0x1F3358u) {
        ctx->pc = 0x1F3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3354u;
        // 0x1f3358: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F335Cu;
        goto label_1f335c;
    }
    ctx->pc = 0x1F3354u;
    {
        const bool branch_taken_0x1f3354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3354u;
        // 0x1f3358: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3354) {
            ctx->pc = 0x1F336Cu;
            goto label_1f336c;
        }
    }
    ctx->pc = 0x1F335Cu;
label_1f335c:
    // 0x1f335c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f335cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f3360:
    // 0x1f3360: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f3360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f3364:
    // 0x1f3364: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f3368:
    if (ctx->pc == 0x1F3368u) {
        ctx->pc = 0x1F3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3364u;
        // 0x1f3368: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F336Cu;
        goto label_1f336c;
    }
    ctx->pc = 0x1F3364u;
    {
        const bool branch_taken_0x1f3364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3364u;
        // 0x1f3368: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3364) {
            ctx->pc = 0x1F3318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3318;
        }
    }
    ctx->pc = 0x1F336Cu;
label_1f336c:
    // 0x1f336c: 0x0  nop
    ctx->pc = 0x1f336cu;
    // NOP
label_1f3370:
    // 0x1f3370: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3374:
    // 0x1f3374: 0x14c2067e  bne         $a2, $v0, . + 4 + (0x67E << 2)
label_1f3378:
    if (ctx->pc == 0x1F3378u) {
        ctx->pc = 0x1F337Cu;
        goto label_1f337c;
    }
    ctx->pc = 0x1F3374u;
    {
        const bool branch_taken_0x1f3374 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3374) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F337Cu;
label_1f337c:
    // 0x1f337c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3380:
    // 0x1f3380: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3384:
    // 0x1f3384: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1f3384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1f3388:
    // 0x1f3388: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f338c:
    // 0x1f338c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3390:
    // 0x1f3390: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1f3390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1f3394:
    // 0x1f3394: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3398:
    // 0x1f3398: 0xc08f20e  jal         func_23C838
label_1f339c:
    if (ctx->pc == 0x1F339Cu) {
        ctx->pc = 0x1F339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3398u;
        // 0x1f339c: 0x24a5d1c0  addiu       $a1, $a1, -0x2E40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33A0u;
        goto label_1f33a0;
    }
    ctx->pc = 0x1F3398u;
    SET_GPR_U32(ctx, 31, 0x1F33A0u);
    ctx->pc = 0x1F339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3398u;
    // 0x1f339c: 0x24a5d1c0  addiu       $a1, $a1, -0x2E40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F33A0u;
label_1f33a0:
    // 0x1f33a0: 0x10000673  b           . + 4 + (0x673 << 2)
label_1f33a4:
    if (ctx->pc == 0x1F33A4u) {
        ctx->pc = 0x1F33A8u;
        goto label_1f33a8;
    }
    ctx->pc = 0x1F33A0u;
    {
        const bool branch_taken_0x1f33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33a0) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F33A8u;
label_1f33a8:
    // 0x1f33a8: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
label_1f33ac:
    if (ctx->pc == 0x1F33ACu) {
        ctx->pc = 0x1F33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33A8u;
        // 0x1f33ac: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33B0u;
        goto label_1f33b0;
    }
    ctx->pc = 0x1F33A8u;
    {
        const bool branch_taken_0x1f33a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33A8u;
        // 0x1f33ac: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33a8) {
            ctx->pc = 0x1F33E0u;
            goto label_1f33e0;
        }
    }
    ctx->pc = 0x1F33B0u;
label_1f33b0:
    // 0x1f33b0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f33b4:
    // 0x1f33b4: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f33b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f33b8:
    // 0x1f33b8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f33b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f33bc:
    // 0x1f33bc: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f33c0:
    // 0x1f33c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f33c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f33c4:
    // 0x1f33c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f33c8:
    // 0x1f33c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f33cc:
    // 0x1f33cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f33ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f33d0:
    // 0x1f33d0: 0xc08f20e  jal         func_23C838
label_1f33d4:
    if (ctx->pc == 0x1F33D4u) {
        ctx->pc = 0x1F33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33D0u;
        // 0x1f33d4: 0x24a5d1f0  addiu       $a1, $a1, -0x2E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33D8u;
        goto label_1f33d8;
    }
    ctx->pc = 0x1F33D0u;
    SET_GPR_U32(ctx, 31, 0x1F33D8u);
    ctx->pc = 0x1F33D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F33D0u;
    // 0x1f33d4: 0x24a5d1f0  addiu       $a1, $a1, -0x2E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F33D8u;
label_1f33d8:
    // 0x1f33d8: 0x10000665  b           . + 4 + (0x665 << 2)
label_1f33dc:
    if (ctx->pc == 0x1F33DCu) {
        ctx->pc = 0x1F33E0u;
        goto label_1f33e0;
    }
    ctx->pc = 0x1F33D8u;
    {
        const bool branch_taken_0x1f33d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33d8) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F33E0u;
label_1f33e0:
    // 0x1f33e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f33e4:
    // 0x1f33e4: 0x1682002d  bne         $s4, $v0, . + 4 + (0x2D << 2)
label_1f33e8:
    if (ctx->pc == 0x1F33E8u) {
        ctx->pc = 0x1F33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33E4u;
        // 0x1f33e8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F33ECu;
        goto label_1f33ec;
    }
    ctx->pc = 0x1F33E4u;
    {
        const bool branch_taken_0x1f33e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F33E4u;
        // 0x1f33e8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33e4) {
            ctx->pc = 0x1F349Cu;
            { ctx->pc = 0x1f349c; return; }
        }
    }
    ctx->pc = 0x1F33ECu;
label_1f33ec:
    // 0x1f33ec: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1f33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1f33f0:
    // 0x1f33f0: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f33f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f33f4:
    // 0x1f33f4: 0x24426d70  addiu       $v0, $v0, 0x6D70
    ctx->pc = 0x1f33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28016));
label_1f33f8:
    // 0x1f33f8: 0x8c266db8  lw          $a2, 0x6DB8($at)
    ctx->pc = 0x1f33f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28088)));
label_1f33fc:
    // 0x1f33fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3400:
    // 0x1f3400: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1f3400u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1f3404:
    // 0x1f3404: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1f3404u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1f3408:
    // 0x1f3408: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f340c:
    // 0x1f340c: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1f340cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
label_1f3410:
    // 0x1f3410: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1f3410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
label_1f3414:
    // 0x1f3414: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3418:
    // 0x1f3418: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f341c:
    // 0x1f341c: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f341cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3420:
    // 0x1f3420: 0x9467000a  lhu         $a3, 0xA($v1)
    ctx->pc = 0x1f3420u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1f3424:
    // 0x1f3424: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x1f3428u;
    return;
}

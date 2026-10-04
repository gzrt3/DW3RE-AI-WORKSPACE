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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b2cb0u: goto label_2b2cb0;
        case 0x2b2cb4u: goto label_2b2cb4;
        case 0x2b2cb8u: goto label_2b2cb8;
        case 0x2b2cbcu: goto label_2b2cbc;
        case 0x2b2cc0u: goto label_2b2cc0;
        case 0x2b2cc4u: goto label_2b2cc4;
        case 0x2b2cc8u: goto label_2b2cc8;
        case 0x2b2cccu: goto label_2b2ccc;
        case 0x2b2cd0u: goto label_2b2cd0;
        case 0x2b2cd4u: goto label_2b2cd4;
        case 0x2b2cd8u: goto label_2b2cd8;
        case 0x2b2cdcu: goto label_2b2cdc;
        case 0x2b2ce0u: goto label_2b2ce0;
        case 0x2b2ce4u: goto label_2b2ce4;
        case 0x2b2ce8u: goto label_2b2ce8;
        case 0x2b2cecu: goto label_2b2cec;
        case 0x2b2cf0u: goto label_2b2cf0;
        case 0x2b2cf4u: goto label_2b2cf4;
        case 0x2b2cf8u: goto label_2b2cf8;
        case 0x2b2cfcu: goto label_2b2cfc;
        case 0x2b2d00u: goto label_2b2d00;
        case 0x2b2d04u: goto label_2b2d04;
        case 0x2b2d08u: goto label_2b2d08;
        case 0x2b2d0cu: goto label_2b2d0c;
        case 0x2b2d10u: goto label_2b2d10;
        case 0x2b2d14u: goto label_2b2d14;
        case 0x2b2d18u: goto label_2b2d18;
        case 0x2b2d1cu: goto label_2b2d1c;
        case 0x2b2d20u: goto label_2b2d20;
        case 0x2b2d24u: goto label_2b2d24;
        case 0x2b2d28u: goto label_2b2d28;
        case 0x2b2d2cu: goto label_2b2d2c;
        case 0x2b2d30u: goto label_2b2d30;
        case 0x2b2d34u: goto label_2b2d34;
        case 0x2b2d38u: goto label_2b2d38;
        case 0x2b2d3cu: goto label_2b2d3c;
        case 0x2b2d40u: goto label_2b2d40;
        case 0x2b2d44u: goto label_2b2d44;
        case 0x2b2d48u: goto label_2b2d48;
        case 0x2b2d4cu: goto label_2b2d4c;
        case 0x2b2d50u: goto label_2b2d50;
        case 0x2b2d54u: goto label_2b2d54;
        case 0x2b2d58u: goto label_2b2d58;
        case 0x2b2d5cu: goto label_2b2d5c;
        case 0x2b2d60u: goto label_2b2d60;
        case 0x2b2d64u: goto label_2b2d64;
        case 0x2b2d68u: goto label_2b2d68;
        case 0x2b2d6cu: goto label_2b2d6c;
        case 0x2b2d70u: goto label_2b2d70;
        case 0x2b2d74u: goto label_2b2d74;
        case 0x2b2d78u: goto label_2b2d78;
        case 0x2b2d7cu: goto label_2b2d7c;
        case 0x2b2d80u: goto label_2b2d80;
        case 0x2b2d84u: goto label_2b2d84;
        case 0x2b2d88u: goto label_2b2d88;
        case 0x2b2d8cu: goto label_2b2d8c;
        case 0x2b2d90u: goto label_2b2d90;
        case 0x2b2d94u: goto label_2b2d94;
        case 0x2b2d98u: goto label_2b2d98;
        case 0x2b2d9cu: goto label_2b2d9c;
        case 0x2b2da0u: goto label_2b2da0;
        case 0x2b2da4u: goto label_2b2da4;
        case 0x2b2da8u: goto label_2b2da8;
        case 0x2b2dacu: goto label_2b2dac;
        case 0x2b2db0u: goto label_2b2db0;
        case 0x2b2db4u: goto label_2b2db4;
        case 0x2b2db8u: goto label_2b2db8;
        case 0x2b2dbcu: goto label_2b2dbc;
        case 0x2b2dc0u: goto label_2b2dc0;
        case 0x2b2dc4u: goto label_2b2dc4;
        case 0x2b2dc8u: goto label_2b2dc8;
        case 0x2b2dccu: goto label_2b2dcc;
        case 0x2b2dd0u: goto label_2b2dd0;
        case 0x2b2dd4u: goto label_2b2dd4;
        case 0x2b2dd8u: goto label_2b2dd8;
        case 0x2b2ddcu: goto label_2b2ddc;
        case 0x2b2de0u: goto label_2b2de0;
        case 0x2b2de4u: goto label_2b2de4;
        case 0x2b2de8u: goto label_2b2de8;
        case 0x2b2decu: goto label_2b2dec;
        case 0x2b2df0u: goto label_2b2df0;
        case 0x2b2df4u: goto label_2b2df4;
        case 0x2b2df8u: goto label_2b2df8;
        case 0x2b2dfcu: goto label_2b2dfc;
        case 0x2b2e00u: goto label_2b2e00;
        case 0x2b2e04u: goto label_2b2e04;
        case 0x2b2e08u: goto label_2b2e08;
        case 0x2b2e0cu: goto label_2b2e0c;
        case 0x2b2e10u: goto label_2b2e10;
        case 0x2b2e14u: goto label_2b2e14;
        case 0x2b2e18u: goto label_2b2e18;
        case 0x2b2e1cu: goto label_2b2e1c;
        case 0x2b2e20u: goto label_2b2e20;
        case 0x2b2e24u: goto label_2b2e24;
        case 0x2b2e28u: goto label_2b2e28;
        case 0x2b2e2cu: goto label_2b2e2c;
        case 0x2b2e30u: goto label_2b2e30;
        case 0x2b2e34u: goto label_2b2e34;
        case 0x2b2e38u: goto label_2b2e38;
        case 0x2b2e3cu: goto label_2b2e3c;
        case 0x2b2e40u: goto label_2b2e40;
        case 0x2b2e44u: goto label_2b2e44;
        case 0x2b2e48u: goto label_2b2e48;
        case 0x2b2e4cu: goto label_2b2e4c;
        case 0x2b2e50u: goto label_2b2e50;
        case 0x2b2e54u: goto label_2b2e54;
        case 0x2b2e58u: goto label_2b2e58;
        case 0x2b2e5cu: goto label_2b2e5c;
        case 0x2b2e60u: goto label_2b2e60;
        case 0x2b2e64u: goto label_2b2e64;
        case 0x2b2e68u: goto label_2b2e68;
        case 0x2b2e6cu: goto label_2b2e6c;
        case 0x2b2e70u: goto label_2b2e70;
        case 0x2b2e74u: goto label_2b2e74;
        case 0x2b2e78u: goto label_2b2e78;
        case 0x2b2e7cu: goto label_2b2e7c;
        case 0x2b2e80u: goto label_2b2e80;
        case 0x2b2e84u: goto label_2b2e84;
        case 0x2b2e88u: goto label_2b2e88;
        case 0x2b2e8cu: goto label_2b2e8c;
        case 0x2b2e90u: goto label_2b2e90;
        case 0x2b2e94u: goto label_2b2e94;
        case 0x2b2e98u: goto label_2b2e98;
        case 0x2b2e9cu: goto label_2b2e9c;
        case 0x2b2ea0u: goto label_2b2ea0;
        case 0x2b2ea4u: goto label_2b2ea4;
        case 0x2b2ea8u: goto label_2b2ea8;
        case 0x2b2eacu: goto label_2b2eac;
        case 0x2b2eb0u: goto label_2b2eb0;
        case 0x2b2eb4u: goto label_2b2eb4;
        case 0x2b2eb8u: goto label_2b2eb8;
        case 0x2b2ebcu: goto label_2b2ebc;
        case 0x2b2ec0u: goto label_2b2ec0;
        case 0x2b2ec4u: goto label_2b2ec4;
        case 0x2b2ec8u: goto label_2b2ec8;
        case 0x2b2eccu: goto label_2b2ecc;
        case 0x2b2ed0u: goto label_2b2ed0;
        case 0x2b2ed4u: goto label_2b2ed4;
        case 0x2b2ed8u: goto label_2b2ed8;
        case 0x2b2edcu: goto label_2b2edc;
        case 0x2b2ee0u: goto label_2b2ee0;
        case 0x2b2ee4u: goto label_2b2ee4;
        case 0x2b2ee8u: goto label_2b2ee8;
        case 0x2b2eecu: goto label_2b2eec;
        case 0x2b2ef0u: goto label_2b2ef0;
        case 0x2b2ef4u: goto label_2b2ef4;
        case 0x2b2ef8u: goto label_2b2ef8;
        case 0x2b2efcu: goto label_2b2efc;
        case 0x2b2f00u: goto label_2b2f00;
        case 0x2b2f04u: goto label_2b2f04;
        case 0x2b2f08u: goto label_2b2f08;
        case 0x2b2f0cu: goto label_2b2f0c;
        case 0x2b2f10u: goto label_2b2f10;
        case 0x2b2f14u: goto label_2b2f14;
        case 0x2b2f18u: goto label_2b2f18;
        case 0x2b2f1cu: goto label_2b2f1c;
        case 0x2b2f20u: goto label_2b2f20;
        case 0x2b2f24u: goto label_2b2f24;
        case 0x2b2f28u: goto label_2b2f28;
        case 0x2b2f2cu: goto label_2b2f2c;
        case 0x2b2f30u: goto label_2b2f30;
        case 0x2b2f34u: goto label_2b2f34;
        case 0x2b2f38u: goto label_2b2f38;
        case 0x2b2f3cu: goto label_2b2f3c;
        case 0x2b2f40u: goto label_2b2f40;
        case 0x2b2f44u: goto label_2b2f44;
        case 0x2b2f48u: goto label_2b2f48;
        case 0x2b2f4cu: goto label_2b2f4c;
        case 0x2b2f50u: goto label_2b2f50;
        case 0x2b2f54u: goto label_2b2f54;
        case 0x2b2f58u: goto label_2b2f58;
        case 0x2b2f5cu: goto label_2b2f5c;
        case 0x2b2f60u: goto label_2b2f60;
        case 0x2b2f64u: goto label_2b2f64;
        case 0x2b2f68u: goto label_2b2f68;
        case 0x2b2f6cu: goto label_2b2f6c;
        case 0x2b2f70u: goto label_2b2f70;
        case 0x2b2f74u: goto label_2b2f74;
        case 0x2b2f78u: goto label_2b2f78;
        case 0x2b2f7cu: goto label_2b2f7c;
        case 0x2b2f80u: goto label_2b2f80;
        case 0x2b2f84u: goto label_2b2f84;
        case 0x2b2f88u: goto label_2b2f88;
        case 0x2b2f8cu: goto label_2b2f8c;
        case 0x2b2f90u: goto label_2b2f90;
        case 0x2b2f94u: goto label_2b2f94;
        case 0x2b2f98u: goto label_2b2f98;
        case 0x2b2f9cu: goto label_2b2f9c;
        case 0x2b2fa0u: goto label_2b2fa0;
        case 0x2b2fa4u: goto label_2b2fa4;
        case 0x2b2fa8u: goto label_2b2fa8;
        case 0x2b2facu: goto label_2b2fac;
        case 0x2b2fb0u: goto label_2b2fb0;
        case 0x2b2fb4u: goto label_2b2fb4;
        case 0x2b2fb8u: goto label_2b2fb8;
        case 0x2b2fbcu: goto label_2b2fbc;
        case 0x2b2fc0u: goto label_2b2fc0;
        case 0x2b2fc4u: goto label_2b2fc4;
        case 0x2b2fc8u: goto label_2b2fc8;
        case 0x2b2fccu: goto label_2b2fcc;
        case 0x2b2fd0u: goto label_2b2fd0;
        case 0x2b2fd4u: goto label_2b2fd4;
        case 0x2b2fd8u: goto label_2b2fd8;
        case 0x2b2fdcu: goto label_2b2fdc;
        case 0x2b2fe0u: goto label_2b2fe0;
        case 0x2b2fe4u: goto label_2b2fe4;
        case 0x2b2fe8u: goto label_2b2fe8;
        case 0x2b2fecu: goto label_2b2fec;
        case 0x2b2ff0u: goto label_2b2ff0;
        case 0x2b2ff4u: goto label_2b2ff4;
        case 0x2b2ff8u: goto label_2b2ff8;
        case 0x2b2ffcu: goto label_2b2ffc;
        case 0x2b3000u: goto label_2b3000;
        case 0x2b3004u: goto label_2b3004;
        case 0x2b3008u: goto label_2b3008;
        case 0x2b300cu: goto label_2b300c;
        case 0x2b3010u: goto label_2b3010;
        case 0x2b3014u: goto label_2b3014;
        case 0x2b3018u: goto label_2b3018;
        case 0x2b301cu: goto label_2b301c;
        case 0x2b3020u: goto label_2b3020;
        case 0x2b3024u: goto label_2b3024;
        case 0x2b3028u: goto label_2b3028;
        case 0x2b302cu: goto label_2b302c;
        case 0x2b3030u: goto label_2b3030;
        case 0x2b3034u: goto label_2b3034;
        case 0x2b3038u: goto label_2b3038;
        case 0x2b303cu: goto label_2b303c;
        case 0x2b3040u: goto label_2b3040;
        case 0x2b3044u: goto label_2b3044;
        case 0x2b3048u: goto label_2b3048;
        case 0x2b304cu: goto label_2b304c;
        case 0x2b3050u: goto label_2b3050;
        case 0x2b3054u: goto label_2b3054;
        case 0x2b3058u: goto label_2b3058;
        case 0x2b305cu: goto label_2b305c;
        case 0x2b3060u: goto label_2b3060;
        case 0x2b3064u: goto label_2b3064;
        case 0x2b3068u: goto label_2b3068;
        case 0x2b306cu: goto label_2b306c;
        case 0x2b3070u: goto label_2b3070;
        case 0x2b3074u: goto label_2b3074;
        case 0x2b3078u: goto label_2b3078;
        case 0x2b307cu: goto label_2b307c;
        case 0x2b3080u: goto label_2b3080;
        case 0x2b3084u: goto label_2b3084;
        case 0x2b3088u: goto label_2b3088;
        case 0x2b308cu: goto label_2b308c;
        case 0x2b3090u: goto label_2b3090;
        case 0x2b3094u: goto label_2b3094;
        case 0x2b3098u: goto label_2b3098;
        case 0x2b309cu: goto label_2b309c;
        case 0x2b30a0u: goto label_2b30a0;
        case 0x2b30a4u: goto label_2b30a4;
        case 0x2b30a8u: goto label_2b30a8;
        case 0x2b30acu: goto label_2b30ac;
        case 0x2b30b0u: goto label_2b30b0;
        case 0x2b30b4u: goto label_2b30b4;
        case 0x2b30b8u: goto label_2b30b8;
        case 0x2b30bcu: goto label_2b30bc;
        case 0x2b30c0u: goto label_2b30c0;
        case 0x2b30c4u: goto label_2b30c4;
        case 0x2b30c8u: goto label_2b30c8;
        case 0x2b30ccu: goto label_2b30cc;
        case 0x2b30d0u: goto label_2b30d0;
        case 0x2b30d4u: goto label_2b30d4;
        case 0x2b30d8u: goto label_2b30d8;
        case 0x2b30dcu: goto label_2b30dc;
        case 0x2b30e0u: goto label_2b30e0;
        case 0x2b30e4u: goto label_2b30e4;
        case 0x2b30e8u: goto label_2b30e8;
        case 0x2b30ecu: goto label_2b30ec;
        case 0x2b30f0u: goto label_2b30f0;
        case 0x2b30f4u: goto label_2b30f4;
        case 0x2b30f8u: goto label_2b30f8;
        case 0x2b30fcu: goto label_2b30fc;
        case 0x2b3100u: goto label_2b3100;
        case 0x2b3104u: goto label_2b3104;
        case 0x2b3108u: goto label_2b3108;
        case 0x2b310cu: goto label_2b310c;
        case 0x2b3110u: goto label_2b3110;
        case 0x2b3114u: goto label_2b3114;
        case 0x2b3118u: goto label_2b3118;
        case 0x2b311cu: goto label_2b311c;
        case 0x2b3120u: goto label_2b3120;
        case 0x2b3124u: goto label_2b3124;
        case 0x2b3128u: goto label_2b3128;
        case 0x2b312cu: goto label_2b312c;
        case 0x2b3130u: goto label_2b3130;
        case 0x2b3134u: goto label_2b3134;
        case 0x2b3138u: goto label_2b3138;
        case 0x2b313cu: goto label_2b313c;
        case 0x2b3140u: goto label_2b3140;
        case 0x2b3144u: goto label_2b3144;
        case 0x2b3148u: goto label_2b3148;
        case 0x2b314cu: goto label_2b314c;
        case 0x2b3150u: goto label_2b3150;
        case 0x2b3154u: goto label_2b3154;
        case 0x2b3158u: goto label_2b3158;
        case 0x2b315cu: goto label_2b315c;
        case 0x2b3160u: goto label_2b3160;
        case 0x2b3164u: goto label_2b3164;
        case 0x2b3168u: goto label_2b3168;
        case 0x2b316cu: goto label_2b316c;
        case 0x2b3170u: goto label_2b3170;
        case 0x2b3174u: goto label_2b3174;
        case 0x2b3178u: goto label_2b3178;
        case 0x2b317cu: goto label_2b317c;
        case 0x2b3180u: goto label_2b3180;
        case 0x2b3184u: goto label_2b3184;
        case 0x2b3188u: goto label_2b3188;
        case 0x2b318cu: goto label_2b318c;
        case 0x2b3190u: goto label_2b3190;
        case 0x2b3194u: goto label_2b3194;
        case 0x2b3198u: goto label_2b3198;
        case 0x2b319cu: goto label_2b319c;
        case 0x2b31a0u: goto label_2b31a0;
        case 0x2b31a4u: goto label_2b31a4;
        case 0x2b31a8u: goto label_2b31a8;
        case 0x2b31acu: goto label_2b31ac;
        case 0x2b31b0u: goto label_2b31b0;
        case 0x2b31b4u: goto label_2b31b4;
        case 0x2b31b8u: goto label_2b31b8;
        case 0x2b31bcu: goto label_2b31bc;
        case 0x2b31c0u: goto label_2b31c0;
        case 0x2b31c4u: goto label_2b31c4;
        case 0x2b31c8u: goto label_2b31c8;
        case 0x2b31ccu: goto label_2b31cc;
        case 0x2b31d0u: goto label_2b31d0;
        case 0x2b31d4u: goto label_2b31d4;
        case 0x2b31d8u: goto label_2b31d8;
        case 0x2b31dcu: goto label_2b31dc;
        case 0x2b31e0u: goto label_2b31e0;
        case 0x2b31e4u: goto label_2b31e4;
        case 0x2b31e8u: goto label_2b31e8;
        case 0x2b31ecu: goto label_2b31ec;
        case 0x2b31f0u: goto label_2b31f0;
        case 0x2b31f4u: goto label_2b31f4;
        case 0x2b31f8u: goto label_2b31f8;
        case 0x2b31fcu: goto label_2b31fc;
        case 0x2b3200u: goto label_2b3200;
        case 0x2b3204u: goto label_2b3204;
        case 0x2b3208u: goto label_2b3208;
        case 0x2b320cu: goto label_2b320c;
        case 0x2b3210u: goto label_2b3210;
        case 0x2b3214u: goto label_2b3214;
        case 0x2b3218u: goto label_2b3218;
        case 0x2b321cu: goto label_2b321c;
        case 0x2b3220u: goto label_2b3220;
        case 0x2b3224u: goto label_2b3224;
        case 0x2b3228u: goto label_2b3228;
        case 0x2b322cu: goto label_2b322c;
        case 0x2b3230u: goto label_2b3230;
        case 0x2b3234u: goto label_2b3234;
        case 0x2b3238u: goto label_2b3238;
        case 0x2b323cu: goto label_2b323c;
        case 0x2b3240u: goto label_2b3240;
        case 0x2b3244u: goto label_2b3244;
        case 0x2b3248u: goto label_2b3248;
        case 0x2b324cu: goto label_2b324c;
        case 0x2b3250u: goto label_2b3250;
        case 0x2b3254u: goto label_2b3254;
        case 0x2b3258u: goto label_2b3258;
        case 0x2b325cu: goto label_2b325c;
        case 0x2b3260u: goto label_2b3260;
        case 0x2b3264u: goto label_2b3264;
        case 0x2b3268u: goto label_2b3268;
        case 0x2b326cu: goto label_2b326c;
        case 0x2b3270u: goto label_2b3270;
        case 0x2b3274u: goto label_2b3274;
        case 0x2b3278u: goto label_2b3278;
        case 0x2b327cu: goto label_2b327c;
        case 0x2b3280u: goto label_2b3280;
        case 0x2b3284u: goto label_2b3284;
        case 0x2b3288u: goto label_2b3288;
        case 0x2b328cu: goto label_2b328c;
        case 0x2b3290u: goto label_2b3290;
        case 0x2b3294u: goto label_2b3294;
        case 0x2b3298u: goto label_2b3298;
        case 0x2b329cu: goto label_2b329c;
        case 0x2b32a0u: goto label_2b32a0;
        case 0x2b32a4u: goto label_2b32a4;
        case 0x2b32a8u: goto label_2b32a8;
        case 0x2b32acu: goto label_2b32ac;
        case 0x2b32b0u: goto label_2b32b0;
        case 0x2b32b4u: goto label_2b32b4;
        case 0x2b32b8u: goto label_2b32b8;
        case 0x2b32bcu: goto label_2b32bc;
        case 0x2b32c0u: goto label_2b32c0;
        case 0x2b32c4u: goto label_2b32c4;
        case 0x2b32c8u: goto label_2b32c8;
        case 0x2b32ccu: goto label_2b32cc;
        case 0x2b32d0u: goto label_2b32d0;
        case 0x2b32d4u: goto label_2b32d4;
        case 0x2b32d8u: goto label_2b32d8;
        case 0x2b32dcu: goto label_2b32dc;
        case 0x2b32e0u: goto label_2b32e0;
        case 0x2b32e4u: goto label_2b32e4;
        case 0x2b32e8u: goto label_2b32e8;
        case 0x2b32ecu: goto label_2b32ec;
        case 0x2b32f0u: goto label_2b32f0;
        case 0x2b32f4u: goto label_2b32f4;
        case 0x2b32f8u: goto label_2b32f8;
        case 0x2b32fcu: goto label_2b32fc;
        case 0x2b3300u: goto label_2b3300;
        case 0x2b3304u: goto label_2b3304;
        case 0x2b3308u: goto label_2b3308;
        case 0x2b330cu: goto label_2b330c;
        case 0x2b3310u: goto label_2b3310;
        case 0x2b3314u: goto label_2b3314;
        case 0x2b3318u: goto label_2b3318;
        case 0x2b331cu: goto label_2b331c;
        case 0x2b3320u: goto label_2b3320;
        case 0x2b3324u: goto label_2b3324;
        case 0x2b3328u: goto label_2b3328;
        case 0x2b332cu: goto label_2b332c;
        case 0x2b3330u: goto label_2b3330;
        case 0x2b3334u: goto label_2b3334;
        case 0x2b3338u: goto label_2b3338;
        case 0x2b333cu: goto label_2b333c;
        case 0x2b3340u: goto label_2b3340;
        case 0x2b3344u: goto label_2b3344;
        case 0x2b3348u: goto label_2b3348;
        case 0x2b334cu: goto label_2b334c;
        case 0x2b3350u: goto label_2b3350;
        case 0x2b3354u: goto label_2b3354;
        case 0x2b3358u: goto label_2b3358;
        case 0x2b335cu: goto label_2b335c;
        case 0x2b3360u: goto label_2b3360;
        case 0x2b3364u: goto label_2b3364;
        case 0x2b3368u: goto label_2b3368;
        case 0x2b336cu: goto label_2b336c;
        case 0x2b3370u: goto label_2b3370;
        case 0x2b3374u: goto label_2b3374;
        case 0x2b3378u: goto label_2b3378;
        case 0x2b337cu: goto label_2b337c;
        case 0x2b3380u: goto label_2b3380;
        case 0x2b3384u: goto label_2b3384;
        case 0x2b3388u: goto label_2b3388;
        case 0x2b338cu: goto label_2b338c;
        case 0x2b3390u: goto label_2b3390;
        case 0x2b3394u: goto label_2b3394;
        case 0x2b3398u: goto label_2b3398;
        case 0x2b339cu: goto label_2b339c;
        case 0x2b33a0u: goto label_2b33a0;
        case 0x2b33a4u: goto label_2b33a4;
        case 0x2b33a8u: goto label_2b33a8;
        case 0x2b33acu: goto label_2b33ac;
        case 0x2b33b0u: goto label_2b33b0;
        case 0x2b33b4u: goto label_2b33b4;
        case 0x2b33b8u: goto label_2b33b8;
        case 0x2b33bcu: goto label_2b33bc;
        case 0x2b33c0u: goto label_2b33c0;
        case 0x2b33c4u: goto label_2b33c4;
        case 0x2b33c8u: goto label_2b33c8;
        case 0x2b33ccu: goto label_2b33cc;
        case 0x2b33d0u: goto label_2b33d0;
        case 0x2b33d4u: goto label_2b33d4;
        case 0x2b33d8u: goto label_2b33d8;
        case 0x2b33dcu: goto label_2b33dc;
        case 0x2b33e0u: goto label_2b33e0;
        case 0x2b33e4u: goto label_2b33e4;
        case 0x2b33e8u: goto label_2b33e8;
        case 0x2b33ecu: goto label_2b33ec;
        case 0x2b33f0u: goto label_2b33f0;
        case 0x2b33f4u: goto label_2b33f4;
        case 0x2b33f8u: goto label_2b33f8;
        case 0x2b33fcu: goto label_2b33fc;
        case 0x2b3400u: goto label_2b3400;
        case 0x2b3404u: goto label_2b3404;
        case 0x2b3408u: goto label_2b3408;
        case 0x2b340cu: goto label_2b340c;
        case 0x2b3410u: goto label_2b3410;
        case 0x2b3414u: goto label_2b3414;
        case 0x2b3418u: goto label_2b3418;
        case 0x2b341cu: goto label_2b341c;
        case 0x2b3420u: goto label_2b3420;
        case 0x2b3424u: goto label_2b3424;
        case 0x2b3428u: goto label_2b3428;
        case 0x2b342cu: goto label_2b342c;
        case 0x2b3430u: goto label_2b3430;
        case 0x2b3434u: goto label_2b3434;
        case 0x2b3438u: goto label_2b3438;
        case 0x2b343cu: goto label_2b343c;
        case 0x2b3440u: goto label_2b3440;
        case 0x2b3444u: goto label_2b3444;
        case 0x2b3448u: goto label_2b3448;
        case 0x2b344cu: goto label_2b344c;
        case 0x2b3450u: goto label_2b3450;
        case 0x2b3454u: goto label_2b3454;
        case 0x2b3458u: goto label_2b3458;
        case 0x2b345cu: goto label_2b345c;
        case 0x2b3460u: goto label_2b3460;
        case 0x2b3464u: goto label_2b3464;
        case 0x2b3468u: goto label_2b3468;
        case 0x2b346cu: goto label_2b346c;
        case 0x2b3470u: goto label_2b3470;
        case 0x2b3474u: goto label_2b3474;
        case 0x2b3478u: goto label_2b3478;
        case 0x2b347cu: goto label_2b347c;
        default: return;
    }

label_2b2cb0:
    // 0x2b2cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cb4:
    // 0x2b2cb4: 0x1f048bd  .word       0x01F048BD                   # INVALID     $t7, $s0, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2CB4 raw=0x01F048BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2cb8:
    // 0x2b2cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cbc:
    // 0x2b2cbc: 0x1f050be  .word       0x01F050BE                   # dsrl32      $t2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) >> (32 + 2));
label_2b2cc0:
    // 0x2b2cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cc4:
    // 0x2b2cc4: 0x1f05d0b  .word       0x01F05D0B                   # movn        $t3, $t7, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cc4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2cc8:
    // 0x2b2cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ccc:
    // 0x2b2ccc: 0x1f321bc  .word       0x01F321BC                   # dsll32      $a0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 6));
label_2b2cd0:
    // 0x2b2cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cd4:
    // 0x2b2cd4: 0x1f328bd  .word       0x01F328BD                   # INVALID     $t7, $s3, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2CD4 raw=0x01F328BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2cd8:
    // 0x2b2cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cdc:
    // 0x2b2cdc: 0x1f330be  .word       0x01F330BE                   # dsrl32      $a2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 2));
label_2b2ce0:
    // 0x2b2ce0: 0x81e4a37d  lb          $a0, -0x5C83($t7)
    ctx->pc = 0x2b2ce0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b2ce4:
    // 0x2b2ce4: 0x1f33ecb  .word       0x01F33ECB                   # movn        $a3, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ce4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2ce8:
    // 0x2b2ce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cec:
    // 0x2b2cec: 0x1f141bc  .word       0x01F141BC                   # dsll32      $t0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 6));
label_2b2cf0:
    // 0x2b2cf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cf4:
    // 0x2b2cf4: 0x1f148bd  .word       0x01F148BD                   # INVALID     $t7, $s1, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2CF4 raw=0x01F148BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2cf8:
    // 0x2b2cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cfc:
    // 0x2b2cfc: 0x1f150be  .word       0x01F150BE                   # dsrl32      $t2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2d00:
    // 0x2b2d00: 0x3e3d803  .word       0x03E3D803                   # sra         $k1, $v1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d00u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 3), 0));
label_2b2d04:
    // 0x2b2d04: 0x1f15d4b  .word       0x01F15D4B                   # movn        $t3, $t7, $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d04u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2d08:
    // 0x2b2d08: 0x81fb03bc  lb          $k1, 0x3BC($t7)
    ctx->pc = 0x2b2d08u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b2d0c:
    // 0x2b2d0c: 0x1f121bc  .word       0x01F121BC                   # dsll32      $a0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 6));
label_2b2d10:
    // 0x2b2d10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d14:
    // 0x2b2d14: 0x1f128bd  .word       0x01F128BD                   # INVALID     $t7, $s1, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D14 raw=0x01F128BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d18:
    // 0x2b2d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d1c:
    // 0x2b2d1c: 0x1f130be  .word       0x01F130BE                   # dsrl32      $a2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2d20:
    // 0x2b2d20: 0x81e4ab7d  lb          $a0, -0x5483($t7)
    ctx->pc = 0x2b2d20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b2d24:
    // 0x2b2d24: 0x1f13e4b  .word       0x01F13E4B                   # movn        $a3, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d24u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2d28:
    // 0x2b2d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d2c:
    // 0x2b2d2c: 0x1f241bc  .word       0x01F241BC                   # dsll32      $t0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 6));
label_2b2d30:
    // 0x2b2d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d34:
    // 0x2b2d34: 0x1f248bd  .word       0x01F248BD                   # INVALID     $t7, $s2, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D34 raw=0x01F248BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d38:
    // 0x2b2d38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d3c:
    // 0x2b2d3c: 0x1f250be  .word       0x01F250BE                   # dsrl32      $t2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) >> (32 + 2));
label_2b2d40:
    // 0x2b2d40: 0x3e3c801  .word       0x03E3C801                   # INVALID     $ra, $v1, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B2D40 raw=0x03E3C801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d44:
    // 0x2b2d44: 0x1f25d8b  .word       0x01F25D8B                   # movn        $t3, $t7, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d44u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2d48:
    // 0x2b2d48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d4c:
    // 0x2b2d4c: 0x1f221bc  .word       0x01F221BC                   # dsll32      $a0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 6));
label_2b2d50:
    // 0x2b2d50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d54:
    // 0x2b2d54: 0x1f228bd  .word       0x01F228BD                   # INVALID     $t7, $s2, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D54 raw=0x01F228BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d58:
    // 0x2b2d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d5c:
    // 0x2b2d5c: 0x1f230be  .word       0x01F230BE                   # dsrl32      $a2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) >> (32 + 2));
label_2b2d60:
    // 0x2b2d60: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x2b2d60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b2d64:
    // 0x2b2d64: 0x1f23e8b  .word       0x01F23E8B                   # movn        $a3, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d64u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2d68:
    // 0x2b2d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d6c:
    // 0x2b2d6c: 0x1f341bc  .word       0x01F341BC                   # dsll32      $t0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 6));
label_2b2d70:
    // 0x2b2d70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d74:
    // 0x2b2d74: 0x1f348bd  .word       0x01F348BD                   # INVALID     $t7, $s3, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D74 raw=0x01F348BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d78:
    // 0x2b2d78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d7c:
    // 0x2b2d7c: 0x1f350be  .word       0x01F350BE                   # dsrl32      $t2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) >> (32 + 2));
label_2b2d80:
    // 0x2b2d80: 0x3e3d002  .word       0x03E3D002                   # srl         $k0, $v1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d80u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_2b2d84:
    // 0x2b2d84: 0x1f35dcb  .word       0x01F35DCB                   # movn        $t3, $t7, $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d84u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2d88:
    // 0x2b2d88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d8c:
    // 0x2b2d8c: 0x1f021bc  .word       0x01F021BC                   # dsll32      $a0, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 6));
label_2b2d90:
    // 0x2b2d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d94:
    // 0x2b2d94: 0x1f028bd  .word       0x01F028BD                   # INVALID     $t7, $s0, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D94 raw=0x01F028BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d98:
    // 0x2b2d98: 0x11e807ff  beq         $t7, $t0, . + 4 + (0x7FF << 2)
label_2b2d9c:
    if (ctx->pc == 0x2B2D9Cu) {
        ctx->pc = 0x2B2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D98u;
        // 0x2b2d9c: 0x1f030be  .word       0x01F030BE                   # dsrl32      $a2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2DA0u;
        goto label_2b2da0;
    }
    ctx->pc = 0x2B2D98u;
    {
        const bool branch_taken_0x2b2d98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D98u;
        // 0x2b2d9c: 0x1f030be  .word       0x01F030BE                   # dsrl32      $a2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d98) {
            ctx->pc = 0x2B4D98u;
            { ctx->pc = 0x2b4d98; return; }
        }
    }
    ctx->pc = 0x2B2DA0u;
label_2b2da0:
    // 0x2b2da0: 0x81e4bb7d  lb          $a0, -0x4483($t7)
    ctx->pc = 0x2b2da0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b2da4:
    // 0x2b2da4: 0x1f03e0b  .word       0x01F03E0B                   # movn        $a3, $t7, $s0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2da4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2da8:
    // 0x2b2da8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2da8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dac:
    // 0x2b2dac: 0x20f41c  .word       0x0020F41C                   # dmult       $at, $zero # 0000F400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2dacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B2DAC raw=0x0020F41C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2db0:
    // 0x2b2db0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2db0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2db4:
    // 0x2b2db4: 0x4000ac  .word       0x004000AC                   # dadd        $zero, $v0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2db4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 2); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b2db8:
    // 0x2b2db8: 0x33000f  .word       0x0033000F                   # sync # 00330000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2db8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b2dbc:
    // 0x2b2dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2dc0:
    // 0x2b2dc0: 0x3e3c000  .word       0x03E3C000                   # sll         $t8, $v1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2dc0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_2b2dc4:
    // 0x2b2dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2dc8:
    // 0x2b2dc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2dc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dcc:
    // 0x2b2dcc: 0x3e8402  .word       0x003E8402                   # srl         $s0, $fp, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2dccu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 30), 16));
label_2b2dd0:
    // 0x2b2dd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2dd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dd4:
    // 0x2b2dd4: 0x401083  .word       0x00401083                   # sra         $v0, $zero, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 2));
label_2b2dd8:
    // 0x2b2dd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2dd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ddc:
    // 0x2b2ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2de0:
    // 0x2b2de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2de4:
    // 0x2b2de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2de8:
    // 0x2b2de8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2de8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dec:
    // 0x2b2dec: 0x3d842f  .word       0x003D842F                   # dsubu       $s0, $at, $sp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2decu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_2b2df0:
    // 0x2b2df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2df4:
    // 0x2b2df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2df8:
    // 0x2b2df8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dfc:
    // 0x2b2dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e00:
    // 0x2b2e00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e04:
    // 0x2b2e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e08:
    // 0x2b2e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e0c:
    // 0x2b2e0c: 0x208410  .word       0x00208410                   # mfhi        $s0 # 00200400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2e0cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2b2e10:
    // 0x2b2e10: 0x11ef07ff  beq         $t7, $t7, . + 4 + (0x7FF << 2)
label_2b2e14:
    if (ctx->pc == 0x2B2E14u) {
        ctx->pc = 0x2B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E10u;
        // 0x2b2e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E18u;
        goto label_2b2e18;
    }
    ctx->pc = 0x2B2E10u;
    {
        const bool branch_taken_0x2b2e10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E10u;
        // 0x2b2e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e10) {
            ctx->pc = 0x2B4E10u;
            { ctx->pc = 0x2b4e10; return; }
        }
    }
    ctx->pc = 0x2B2E18u;
label_2b2e18:
    // 0x2b2e18: 0x100f7801  beq         $zero, $t7, . + 4 + (0x7801 << 2)
label_2b2e1c:
    if (ctx->pc == 0x2B2E1Cu) {
        ctx->pc = 0x2B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E18u;
        // 0x2b2e1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E20u;
        goto label_2b2e20;
    }
    ctx->pc = 0x2B2E18u;
    {
        const bool branch_taken_0x2b2e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E18u;
        // 0x2b2e1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e18) {
            ctx->pc = 0x2D0E20u;
            return;
        }
    }
    ctx->pc = 0x2B2E20u;
label_2b2e20:
    // 0x2b2e20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e24:
    // 0x2b2e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e28:
    // 0x2b2e28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e2c:
    // 0x2b2e2c: 0x30817d  .word       0x0030817D                   # INVALID     $at, $s0, -0x7E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2e2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2E2C raw=0x0030817D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2e30:
    // 0x2b2e30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e34:
    // 0x2b2e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e38:
    // 0x2b2e38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e3c:
    // 0x2b2e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e40:
    // 0x2b2e40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e44:
    // 0x2b2e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e48:
    // 0x2b2e48: 0x806a83fc  lb          $t2, -0x7C04($v1)
    ctx->pc = 0x2b2e48u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935548)));
label_2b2e4c:
    // 0x2b2e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e50:
    // 0x2b2e50: 0x800506bc  lb          $a1, 0x6BC($zero)
    ctx->pc = 0x2b2e50u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x6BCu));
label_2b2e54:
    // 0x2b2e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e58:
    // 0x2b2e58: 0x500e0002  beql        $zero, $t6, . + 4 + (0x2 << 2)
label_2b2e5c:
    if (ctx->pc == 0x2B2E5Cu) {
        ctx->pc = 0x2B2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E58u;
        // 0x2b2e5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E60u;
        goto label_2b2e60;
    }
    ctx->pc = 0x2B2E58u;
    {
        const bool branch_taken_0x2b2e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b2e58) {
            ctx->pc = 0x2B2E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E58u;
            // 0x2b2e5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2E64u;
            goto label_2b2e64;
        }
    }
    ctx->pc = 0x2B2E60u;
label_2b2e60:
    // 0x2b2e60: 0x100d031e  beq         $zero, $t5, . + 4 + (0x31E << 2)
label_2b2e64:
    if (ctx->pc == 0x2B2E64u) {
        ctx->pc = 0x2B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E60u;
        // 0x2b2e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E68u;
        goto label_2b2e68;
    }
    ctx->pc = 0x2B2E60u;
    {
        const bool branch_taken_0x2b2e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E60u;
        // 0x2b2e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e60) {
            ctx->pc = 0x2B3ADCu;
            { ctx->pc = 0x2b3adc; return; }
        }
    }
    ctx->pc = 0x2B2E68u;
label_2b2e68:
    // 0x2b2e68: 0x100d038f  beq         $zero, $t5, . + 4 + (0x38F << 2)
label_2b2e6c:
    if (ctx->pc == 0x2B2E6Cu) {
        ctx->pc = 0x2B2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E68u;
        // 0x2b2e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E70u;
        goto label_2b2e70;
    }
    ctx->pc = 0x2B2E68u;
    {
        const bool branch_taken_0x2b2e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E68u;
        // 0x2b2e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e68) {
            ctx->pc = 0x2B3CA8u;
            { ctx->pc = 0x2b3ca8; return; }
        }
    }
    ctx->pc = 0x2B2E70u;
label_2b2e70:
    // 0x2b2e70: 0x9022803  j           func_408A00C
label_2b2e74:
    if (ctx->pc == 0x2B2E74u) {
        ctx->pc = 0x2B2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E70u;
        // 0x2b2e74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E78u;
        goto label_2b2e78;
    }
    ctx->pc = 0x2B2E70u;
    ctx->pc = 0x2B2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E70u;
    // 0x2b2e74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408A00Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408A00Cu, 0x2B2E70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2E78u;
label_2b2e78:
    // 0x2b2e78: 0x45000000  bc1f        . + 4 + (0x0 << 2)
label_2b2e7c:
    if (ctx->pc == 0x2B2E7Cu) {
        ctx->pc = 0x2B2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E78u;
        // 0x2b2e7c: 0x800002ff  lb          $zero, 0x2FF($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 767)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E80u;
        goto label_2b2e80;
    }
    ctx->pc = 0x2B2E78u;
    {
        const bool branch_taken_0x2b2e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E78u;
        // 0x2b2e7c: 0x800002ff  lb          $zero, 0x2FF($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 767)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e78) {
            ctx->pc = 0x2B2E7Cu;
            goto label_2b2e7c;
        }
    }
    ctx->pc = 0x2B2E80u;
label_2b2e80:
    // 0x2b2e80: 0x43b40000  .word       0x43B40000                   # INVALID     $sp, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b2e80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x2B2E80 raw=0x43B40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2e84:
    // 0x2b2e84: 0x810006e2  lb          $zero, 0x6E2($t0)
    ctx->pc = 0x2b2e84u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1762)));
label_2b2e88:
    // 0x2b2e88: 0x220000  .word       0x00220000                   # sll         $zero, $v0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2e88u;
    
label_2b2e8c:
    // 0x2b2e8c: 0x20065e  .word       0x0020065E                   # ddiv        $zero, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2e8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B2E8C raw=0x0020065E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2e90:
    // 0x2b2e90: 0x100c6800  beq         $zero, $t4, . + 4 + (0x6800 << 2)
label_2b2e94:
    if (ctx->pc == 0x2B2E94u) {
        ctx->pc = 0x2B2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E90u;
        // 0x2b2e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E98u;
        goto label_2b2e98;
    }
    ctx->pc = 0x2B2E90u;
    {
        const bool branch_taken_0x2b2e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E90u;
        // 0x2b2e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e90) {
            ctx->pc = 0x2CCE94u;
            return;
        }
    }
    ctx->pc = 0x2B2E98u;
label_2b2e98:
    // 0x2b2e98: 0x800812f4  lb          $t0, 0x12F4($zero)
    ctx->pc = 0x2b2e98u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x12F4u));
label_2b2e9c:
    // 0x2b2e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ea0:
    // 0x2b2ea0: 0x10062804  beq         $zero, $a2, . + 4 + (0x2804 << 2)
label_2b2ea4:
    if (ctx->pc == 0x2B2EA4u) {
        ctx->pc = 0x2B2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EA0u;
        // 0x2b2ea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2EA8u;
        goto label_2b2ea8;
    }
    ctx->pc = 0x2B2EA0u;
    {
        const bool branch_taken_0x2b2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EA0u;
        // 0x2b2ea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ea0) {
            ctx->pc = 0x2BCEB4u;
            { ctx->pc = 0x2bceb4; return; }
        }
    }
    ctx->pc = 0x2B2EA8u;
label_2b2ea8:
    // 0x2b2ea8: 0x800b31f0  lb          $t3, 0x31F0($zero)
    ctx->pc = 0x2b2ea8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x31F0u));
label_2b2eac:
    // 0x2b2eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2eb0:
    // 0x2b2eb0: 0x1f22800  .word       0x01F22800                   # sll         $a1, $s2, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 0));
label_2b2eb4:
    // 0x2b2eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2eb8:
    // 0x2b2eb8: 0x1e12801  .word       0x01E12801                   # INVALID     $t7, $at, 0x2801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2eb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B2EB8 raw=0x01E12801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2ebc:
    // 0x2b2ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ec0:
    // 0x2b2ec0: 0x1ff2802  .word       0x01FF2802                   # srl         $a1, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 31), 0));
label_2b2ec4:
    // 0x2b2ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ec8:
    // 0x2b2ec8: 0x1f12803  .word       0x01F12803                   # sra         $a1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ec8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 0));
label_2b2ecc:
    // 0x2b2ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ed0:
    // 0x2b2ed0: 0x81ed937d  lb          $t5, -0x6C83($t7)
    ctx->pc = 0x2b2ed0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2b2ed4:
    // 0x2b2ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ed8:
    // 0x2b2ed8: 0x81ed0b7d  lb          $t5, 0xB7D($t7)
    ctx->pc = 0x2b2ed8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2941)));
label_2b2edc:
    // 0x2b2edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ee0:
    // 0x2b2ee0: 0x81edfb7d  lb          $t5, -0x483($t7)
    ctx->pc = 0x2b2ee0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294966141)));
label_2b2ee4:
    // 0x2b2ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ee8:
    // 0x2b2ee8: 0x81ed8b7d  lb          $t5, -0x7483($t7)
    ctx->pc = 0x2b2ee8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2b2eec:
    // 0x2b2eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ef0:
    // 0x2b2ef0: 0x1004000f  beq         $zero, $a0, . + 4 + (0xF << 2)
label_2b2ef4:
    if (ctx->pc == 0x2B2EF4u) {
        ctx->pc = 0x2B2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EF0u;
        // 0x2b2ef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2EF8u;
        goto label_2b2ef8;
    }
    ctx->pc = 0x2B2EF0u;
    {
        const bool branch_taken_0x2b2ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EF0u;
        // 0x2b2ef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ef0) {
            ctx->pc = 0x2B2F30u;
            goto label_2b2f30;
        }
    }
    ctx->pc = 0x2B2EF8u;
label_2b2ef8:
    // 0x2b2ef8: 0x804423fe  lb          $a0, 0x23FE($v0)
    ctx->pc = 0x2b2ef8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9214)));
label_2b2efc:
    // 0x2b2efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f00:
    // 0x2b2f00: 0x81ff3b7c  lb          $ra, 0x3B7C($t7)
    ctx->pc = 0x2b2f00u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2f04:
    // 0x2b2f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f08:
    // 0x2b2f08: 0x81f13b7c  lb          $s1, 0x3B7C($t7)
    ctx->pc = 0x2b2f08u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2f0c:
    // 0x2b2f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f10:
    // 0x2b2f10: 0x10090020  beq         $zero, $t1, . + 4 + (0x20 << 2)
label_2b2f14:
    if (ctx->pc == 0x2B2F14u) {
        ctx->pc = 0x2B2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F10u;
        // 0x2b2f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2F18u;
        goto label_2b2f18;
    }
    ctx->pc = 0x2B2F10u;
    {
        const bool branch_taken_0x2b2f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F10u;
        // 0x2b2f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f10) {
            ctx->pc = 0x2B2F94u;
            goto label_2b2f94;
        }
    }
    ctx->pc = 0x2B2F18u;
label_2b2f18:
    // 0x2b2f18: 0x1f420e4  .word       0x01F420E4                   # and         $a0, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b2f1c:
    // 0x2b2f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f20:
    // 0x2b2f20: 0x1f520e5  .word       0x01F520E5                   # or          $a0, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b2f24:
    // 0x2b2f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f28:
    // 0x2b2f28: 0x1f620e6  .word       0x01F620E6                   # xor         $a0, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b2f2c:
    // 0x2b2f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f30:
    // 0x2b2f30: 0x1f720e7  .word       0x01F720E7                   # nor         $a0, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f30u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b2f34:
    // 0x2b2f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f38:
    // 0x2b2f38: 0x1e12010  .word       0x01E12010                   # mfhi        $a0 # 01E10000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f38u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b2f3c:
    // 0x2b2f3c: 0x1f1a1bc  .word       0x01F1A1BC                   # dsll32      $s4, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 6));
label_2b2f40:
    // 0x2b2f40: 0x0  nop
    ctx->pc = 0x2b2f40u;
    // NOP
label_2b2f44:
    // 0x2b2f44: 0x4a2e0200  vaddx.w     $vf8, $vf0, $vf14x
    ctx->pc = 0x2b2f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2b2f48:
    // 0x2b2f48: 0x1e32011  .word       0x01E32011                   # mthi        $t7 # 00032000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f48u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b2f4c:
    // 0x2b2f4c: 0x1f1a8bd  .word       0x01F1A8BD                   # INVALID     $t7, $s1, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2F4C raw=0x01F1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2f50:
    // 0x2b2f50: 0x1fc2012  .word       0x01FC2012                   # mflo        $a0 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f50u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2b2f54:
    // 0x2b2f54: 0x1f1b0be  .word       0x01F1B0BE                   # dsrl32      $s6, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2f58:
    // 0x2b2f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f5c:
    // 0x2b2f5c: 0x1f1be8b  .word       0x01F1BE8B                   # movn        $s7, $t7, $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f5cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_2b2f60:
    // 0x2b2f60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f64:
    // 0x2b2f64: 0x1df09bc  .word       0x01DF09BC                   # dsll32      $at, $ra, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 31) << (32 + 6));
label_2b2f68:
    // 0x2b2f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f6c:
    // 0x2b2f6c: 0x1df18bd  .word       0x01DF18BD                   # INVALID     $t6, $ra, 0x18BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2F6C raw=0x01DF18BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2f70:
    // 0x2b2f70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f74:
    // 0x2b2f74: 0x1dfe60a  .word       0x01DFE60A                   # movz        $gp, $t6, $ra # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f74u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
label_2b2f78:
    // 0x2b2f78: 0x81fa03bc  lb          $k0, 0x3BC($t7)
    ctx->pc = 0x2b2f78u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b2f7c:
    // 0x2b2f7c: 0x42d07f  .word       0x0042D07F                   # dsra32      $k0, $v0, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f7cu;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 2) >> (32 + 1));
label_2b2f80:
    // 0x2b2f80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f84:
    // 0x2b2f84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f88:
    // 0x2b2f88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f8c:
    // 0x2b2f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f90:
    // 0x2b2f90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f94:
    // 0x2b2f94: 0x1e0c610  .word       0x01E0C610                   # mfhi        $t8 # 01E00600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f94u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2b2f98:
    // 0x2b2f98: 0x34024800  ori         $v0, $zero, 0x4800
    ctx->pc = 0x2b2f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)18432);
label_2b2f9c:
    // 0x2b2f9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2fa0:
    // 0x2b2fa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fa4:
    // 0x2b2fa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2fa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2fa8:
    // 0x2b2fa8: 0x8233ffe  j           func_8CFFF8
label_2b2fac:
    if (ctx->pc == 0x2B2FACu) {
        ctx->pc = 0x2B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FA8u;
        // 0x2b2fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FB0u;
        goto label_2b2fb0;
    }
    ctx->pc = 0x2B2FA8u;
    ctx->pc = 0x2B2FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FA8u;
    // 0x2b2fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8CFFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8CFFF8u, 0x2B2FA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2FB0u;
label_2b2fb0:
    // 0x2b2fb0: 0x81ff3b7c  lb          $ra, 0x3B7C($t7)
    ctx->pc = 0x2b2fb0u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2fb4:
    // 0x2b2fb4: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B2FB4 raw=0x01C0D69C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2fb8:
    // 0x2b2fb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fbc:
    // 0x2b2fbc: 0x1f861bc  .word       0x01F861BC                   # dsll32      $t4, $t8, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 6));
label_2b2fc0:
    // 0x2b2fc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fc4:
    // 0x2b2fc4: 0x1f868bd  .word       0x01F868BD                   # INVALID     $t7, $t8, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2FC4 raw=0x01F868BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2fc8:
    // 0x2b2fc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fcc:
    // 0x2b2fcc: 0x1f870be  .word       0x01F870BE                   # dsrl32      $t6, $t8, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) >> (32 + 2));
label_2b2fd0:
    // 0x2b2fd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fd4:
    // 0x2b2fd4: 0x1c07ccb  .word       0x01C07CCB                   # movn        $t7, $t6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fd4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 14));
label_2b2fd8:
    // 0x2b2fd8: 0x81f13b7c  lb          $s1, 0x3B7C($t7)
    ctx->pc = 0x2b2fd8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2fdc:
    // 0x2b2fdc: 0x1df09bc  .word       0x01DF09BC                   # dsll32      $at, $ra, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 31) << (32 + 6));
label_2b2fe0:
    // 0x2b2fe0: 0x81f2d33c  lb          $s2, -0x2CC4($t7)
    ctx->pc = 0x2b2fe0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955836)));
label_2b2fe4:
    // 0x2b2fe4: 0x1df18bd  .word       0x01DF18BD                   # INVALID     $t6, $ra, 0x18BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fe4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2FE4 raw=0x01DF18BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2fe8:
    // 0x2b2fe8: 0x800a18f0  lb          $t2, 0x18F0($zero)
    ctx->pc = 0x2b2fe8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x18F0u));
label_2b2fec:
    // 0x2b2fec: 0x19bd684  .word       0x019BD684                   # sllv        $k0, $k1, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fecu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 27), GPR_U32(ctx, 12) & 0x1F));
label_2b2ff0:
    // 0x2b2ff0: 0xa236802  j           func_88DA008
label_2b2ff4:
    if (ctx->pc == 0x2B2FF4u) {
        ctx->pc = 0x2B2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FF0u;
        // 0x2b2ff4: 0x1dfe60a  .word       0x01DFE60A                   # movz        $gp, $t6, $ra # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FF8u;
        goto label_2b2ff8;
    }
    ctx->pc = 0x2B2FF0u;
    ctx->pc = 0x2B2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FF0u;
    // 0x2b2ff4: 0x1dfe60a  .word       0x01DFE60A                   # movz        $gp, $t6, $ra # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88DA008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88DA008u, 0x2B2FF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2FF8u;
label_2b2ff8:
    // 0x2b2ff8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ffc:
    // 0x2b2ffc: 0x1f1a1bc  .word       0x01F1A1BC                   # dsll32      $s4, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ffcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 6));
label_2b3000:
    // 0x2b3000: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3000u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3004:
    // 0x2b3004: 0x1f1a8bd  .word       0x01F1A8BD                   # INVALID     $t7, $s1, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3004u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B3004 raw=0x01F1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3008:
    // 0x2b3008: 0x800a78f0  lb          $t2, 0x78F0($zero)
    ctx->pc = 0x2b3008u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x78F0u));
label_2b300c:
    // 0x2b300c: 0x1d9d1ff  .word       0x01D9D1FF                   # dsra32      $k0, $t9, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b300cu;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 25) >> (32 + 7));
label_2b3010:
    // 0x2b3010: 0x800b5ff2  lb          $t3, 0x5FF2($zero)
    ctx->pc = 0x2b3010u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5FF2u));
label_2b3014:
    // 0x2b3014: 0x1f1b0be  .word       0x01F1B0BE                   # dsrl32      $s6, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3014u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) >> (32 + 2));
label_2b3018:
    // 0x2b3018: 0x8182337c  lb          $v0, 0x337C($t4)
    ctx->pc = 0x2b3018u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b301c:
    // 0x2b301c: 0x1f1be8b  .word       0x01F1BE8B                   # movn        $s7, $t7, $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b301cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_2b3020:
    // 0x2b3020: 0x50020003  beql        $zero, $v0, . + 4 + (0x3 << 2)
label_2b3024:
    if (ctx->pc == 0x2B3024u) {
        ctx->pc = 0x2B3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3020u;
        // 0x2b3024: 0x1dd9cef  .word       0x01DD9CEF                   # dsubu       $s3, $t6, $sp # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) - GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3028u;
        goto label_2b3028;
    }
    ctx->pc = 0x2B3020u;
    {
        const bool branch_taken_0x2b3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3020) {
            ctx->pc = 0x2B3024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3020u;
            // 0x2b3024: 0x1dd9cef  .word       0x01DD9CEF                   # dsubu       $s3, $t6, $sp # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) - GPR_U64(ctx, 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3030u;
            goto label_2b3030;
        }
    }
    ctx->pc = 0x2B3028u;
label_2b3028:
    // 0x2b3028: 0x2400000f  addiu       $zero, $zero, 0xF
    ctx->pc = 0x2b3028u;
    // NOP (addiu $zero, ...)
label_2b302c:
    // 0x2b302c: 0x1e0c610  .word       0x01E0C610                   # mfhi        $t8 # 01E00600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b302cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2b3030:
    // 0x2b3030: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_2b3034:
    if (ctx->pc == 0x2B3034u) {
        ctx->pc = 0x2B3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3030u;
        // 0x2b3034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3038u;
        goto label_2b3038;
    }
    ctx->pc = 0x2B3030u;
    {
        const bool branch_taken_0x2b3030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3030) {
            ctx->pc = 0x2B3034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3030u;
            // 0x2b3034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B303Cu;
            goto label_2b303c;
        }
    }
    ctx->pc = 0x2B3038u;
label_2b3038:
    // 0x2b3038: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b303c:
    // 0x2b303c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b303cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3040:
    // 0x2b3040: 0xa236802  j           func_88DA008
label_2b3044:
    if (ctx->pc == 0x2B3044u) {
        ctx->pc = 0x2B3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3040u;
        // 0x2b3044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3048u;
        goto label_2b3048;
    }
    ctx->pc = 0x2B3040u;
    ctx->pc = 0x2B3044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3040u;
    // 0x2b3044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88DA008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88DA008u, 0x2B3040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3048u;
label_2b3048:
    // 0x2b3048: 0x81fa03bc  lb          $k0, 0x3BC($t7)
    ctx->pc = 0x2b3048u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b304c:
    // 0x2b304c: 0x42d07f  .word       0x0042D07F                   # dsra32      $k0, $v0, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b304cu;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 2) >> (32 + 1));
label_2b3050:
    // 0x2b3050: 0x8233ffe  j           func_8CFFF8
label_2b3054:
    if (ctx->pc == 0x2B3054u) {
        ctx->pc = 0x2B3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3050u;
        // 0x2b3054: 0x1f861bc  .word       0x01F861BC                   # dsll32      $t4, $t8, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3058u;
        goto label_2b3058;
    }
    ctx->pc = 0x2B3050u;
    ctx->pc = 0x2B3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3050u;
    // 0x2b3054: 0x1f861bc  .word       0x01F861BC                   # dsll32      $t4, $t8, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8CFFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8CFFF8u, 0x2B3050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3058u;
label_2b3058:
    // 0x2b3058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b305c:
    // 0x2b305c: 0x1d3997c  .word       0x01D3997C                   # dsll32      $s3, $s3, 5 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b305cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 5));
label_2b3060:
    // 0x2b3060: 0x81cd137d  lb          $t5, 0x137D($t6)
    ctx->pc = 0x2b3060u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4989)));
label_2b3064:
    // 0x2b3064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3068:
    // 0x2b3068: 0x34024800  ori         $v0, $zero, 0x4800
    ctx->pc = 0x2b3068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)18432);
label_2b306c:
    // 0x2b306c: 0x1f2917d  .word       0x01F2917D                   # INVALID     $t7, $s2, -0x6E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b306cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B306C raw=0x01F2917D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3070:
    // 0x2b3070: 0x81ff3b7c  lb          $ra, 0x3B7C($t7)
    ctx->pc = 0x2b3070u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b3074:
    // 0x2b3074: 0x1f868bd  .word       0x01F868BD                   # INVALID     $t7, $t8, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3074u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B3074 raw=0x01F868BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3078:
    // 0x2b3078: 0x81ed9b7d  lb          $t5, -0x6483($t7)
    ctx->pc = 0x2b3078u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b307c:
    // 0x2b307c: 0x1f870be  .word       0x01F870BE                   # dsrl32      $t6, $t8, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b307cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) >> (32 + 2));
label_2b3080:
    // 0x2b3080: 0x520b07ea  beql        $s0, $t3, . + 4 + (0x7EA << 2)
label_2b3084:
    if (ctx->pc == 0x2B3084u) {
        ctx->pc = 0x2B3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3080u;
        // 0x2b3084: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B3084 raw=0x01C0D69C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3088u;
        goto label_2b3088;
    }
    ctx->pc = 0x2B3080u;
    {
        const bool branch_taken_0x2b3080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b3080) {
            ctx->pc = 0x2B3084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3080u;
            // 0x2b3084: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //             throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B3084 raw=0x01C0D69C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B502Cu;
            { ctx->pc = 0x2b502c; return; }
        }
    }
    ctx->pc = 0x2B3088u;
label_2b3088:
    // 0x2b3088: 0x81cd937d  lb          $t5, -0x6C83($t6)
    ctx->pc = 0x2b3088u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294939517)));
label_2b308c:
    // 0x2b308c: 0x1c07ccb  .word       0x01C07CCB                   # movn        $t7, $t6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b308cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 14));
label_2b3090:
    // 0x2b3090: 0x800066fc  lb          $zero, 0x66FC($zero)
    ctx->pc = 0x2b3090u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x66FCu));
label_2b3094:
    // 0x2b3094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3098:
    // 0x2b3098: 0x10010001  beq         $zero, $at, . + 4 + (0x1 << 2)
label_2b309c:
    if (ctx->pc == 0x2B309Cu) {
        ctx->pc = 0x2B309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3098u;
        // 0x2b309c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30A0u;
        goto label_2b30a0;
    }
    ctx->pc = 0x2B3098u;
    {
        const bool branch_taken_0x2b3098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3098u;
        // 0x2b309c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3098) {
            ctx->pc = 0x2B30A0u;
            goto label_2b30a0;
        }
    }
    ctx->pc = 0x2B30A0u;
label_2b30a0:
    // 0x2b30a0: 0x800e0bb1  lb          $t6, 0xBB1($zero)
    ctx->pc = 0x2b30a0u;
    SET_GPR_S32(ctx, 14, (int8_t)FAST_READ8(0xBB1u));
label_2b30a4:
    // 0x2b30a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b30a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b30a8:
    // 0x2b30a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b30a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b30ac:
    // 0x2b30ac: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b30acu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b30b0:
    // 0x2b30b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b30b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b30b4:
    // 0x2b30b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b30b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b30b8:
    // 0x2b30b8: 0x0  nop
    ctx->pc = 0x2b30b8u;
    // NOP
label_2b30bc:
    // 0x2b30bc: 0x0  nop
    ctx->pc = 0x2b30bcu;
    // NOP
label_2b30c0:
    // 0x2b30c0: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x2b30c0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_2b30c4:
    // 0x2b30c4: 0x0  nop
    ctx->pc = 0x2b30c4u;
    // NOP
label_2b30c8:
    // 0x2b30c8: 0x0  nop
    ctx->pc = 0x2b30c8u;
    // NOP
label_2b30cc:
    // 0x2b30cc: 0x0  nop
    ctx->pc = 0x2b30ccu;
    // NOP
label_2b30d0:
    // 0x2b30d0: 0x0  nop
    ctx->pc = 0x2b30d0u;
    // NOP
label_2b30d4:
    // 0x2b30d4: 0x0  nop
    ctx->pc = 0x2b30d4u;
    // NOP
label_2b30d8:
    // 0x2b30d8: 0x0  nop
    ctx->pc = 0x2b30d8u;
    // NOP
label_2b30dc:
    // 0x2b30dc: 0x0  nop
    ctx->pc = 0x2b30dcu;
    // NOP
label_2b30e0:
    // 0x2b30e0: 0x0  nop
    ctx->pc = 0x2b30e0u;
    // NOP
label_2b30e4:
    // 0x2b30e4: 0x0  nop
    ctx->pc = 0x2b30e4u;
    // NOP
label_2b30e8:
    // 0x2b30e8: 0x0  nop
    ctx->pc = 0x2b30e8u;
    // NOP
label_2b30ec:
    // 0x2b30ec: 0x0  nop
    ctx->pc = 0x2b30ecu;
    // NOP
label_2b30f0:
    // 0x2b30f0: 0x0  nop
    ctx->pc = 0x2b30f0u;
    // NOP
label_2b30f4:
    // 0x2b30f4: 0x0  nop
    ctx->pc = 0x2b30f4u;
    // NOP
label_2b30f8:
    // 0x2b30f8: 0x0  nop
    ctx->pc = 0x2b30f8u;
    // NOP
label_2b30fc:
    // 0x2b30fc: 0x0  nop
    ctx->pc = 0x2b30fcu;
    // NOP
label_2b3100:
    // 0x2b3100: 0x10000001  b           . + 4 + (0x1 << 2)
label_2b3104:
    if (ctx->pc == 0x2B3104u) {
        ctx->pc = 0x2B3108u;
        goto label_2b3108;
    }
    ctx->pc = 0x2B3100u;
    {
        const bool branch_taken_0x2b3100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3100) {
            ctx->pc = 0x2B3108u;
            goto label_2b3108;
        }
    }
    ctx->pc = 0x2B3108u;
label_2b3108:
    // 0x2b3108: 0x0  nop
    ctx->pc = 0x2b3108u;
    // NOP
label_2b310c:
    // 0x2b310c: 0x0  nop
    ctx->pc = 0x2b310cu;
    // NOP
label_2b3110:
    // 0x2b3110: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3110u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b3114:
    // 0x2b3114: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x2b3114u;
    // NOP (addi to $zero)
label_2b3118:
    // 0x2b3118: 0x0  nop
    ctx->pc = 0x2b3118u;
    // NOP
label_2b311c:
    // 0x2b311c: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_2b3120:
    if (ctx->pc == 0x2B3120u) {
        ctx->pc = 0x2B3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B311Cu;
        // 0x2b3120: 0x1000002c  b           . + 4 + (0x2C << 2) (Delay Slot)
        // Likely branch instruction at 0x2B3120 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3124u;
        goto label_2b3124;
    }
    ctx->pc = 0x2B311Cu;
    {
        const bool branch_taken_0x2b311c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2B3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B311Cu;
        // 0x2b3120: 0x1000002c  b           . + 4 + (0x2C << 2) (Delay Slot)
        // Likely branch instruction at 0x2B3120 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b311c) {
            ctx->pc = 0x2B3120u;
            goto label_2b3120;
        }
    }
    ctx->pc = 0x2B3124u;
label_2b3124:
    // 0x2b3124: 0x0  nop
    ctx->pc = 0x2b3124u;
    // NOP
label_2b3128:
    // 0x2b3128: 0x0  nop
    ctx->pc = 0x2b3128u;
    // NOP
label_2b312c:
    // 0x2b312c: 0x0  nop
    ctx->pc = 0x2b312cu;
    // NOP
label_2b3130:
    // 0x2b3130: 0x0  nop
    ctx->pc = 0x2b3130u;
    // NOP
label_2b3134:
    // 0x2b3134: 0x4a560300  vaddx.z     $vf12, $vf0, $vf22x
    ctx->pc = 0x2b3134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[22], ctx->vu0_vf[22], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_2b3138:
    // 0x2b3138: 0x10010000  beq         $zero, $at, . + 4 + (0x0 << 2)
label_2b313c:
    if (ctx->pc == 0x2B313Cu) {
        ctx->pc = 0x2B313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3138u;
        // 0x2b313c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3140u;
        goto label_2b3140;
    }
    ctx->pc = 0x2B3138u;
    {
        const bool branch_taken_0x2b3138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3138u;
        // 0x2b313c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3138) {
            ctx->pc = 0x2B313Cu;
            goto label_2b313c;
        }
    }
    ctx->pc = 0x2B3140u;
label_2b3140:
    // 0x2b3140: 0x10030004  beq         $zero, $v1, . + 4 + (0x4 << 2)
label_2b3144:
    if (ctx->pc == 0x2B3144u) {
        ctx->pc = 0x2B3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3140u;
        // 0x2b3144: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3148u;
        goto label_2b3148;
    }
    ctx->pc = 0x2B3140u;
    {
        const bool branch_taken_0x2b3140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3140u;
        // 0x2b3144: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3140) {
            ctx->pc = 0x2B3154u;
            goto label_2b3154;
        }
    }
    ctx->pc = 0x2B3148u;
label_2b3148:
    // 0x2b3148: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
label_2b314c:
    if (ctx->pc == 0x2B314Cu) {
        ctx->pc = 0x2B314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3148u;
        // 0x2b314c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3150u;
        goto label_2b3150;
    }
    ctx->pc = 0x2B3148u;
    {
        const bool branch_taken_0x2b3148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3148u;
        // 0x2b314c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3148) {
            ctx->pc = 0x2B316Cu;
            goto label_2b316c;
        }
    }
    ctx->pc = 0x2B3150u;
label_2b3150:
    // 0x2b3150: 0x1004000a  beq         $zero, $a0, . + 4 + (0xA << 2)
label_2b3154:
    if (ctx->pc == 0x2B3154u) {
        ctx->pc = 0x2B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3150u;
        // 0x2b3154: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3158u;
        goto label_2b3158;
    }
    ctx->pc = 0x2B3150u;
    {
        const bool branch_taken_0x2b3150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3150u;
        // 0x2b3154: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3150) {
            ctx->pc = 0x2B317Cu;
            goto label_2b317c;
        }
    }
    ctx->pc = 0x2B3158u;
label_2b3158:
    // 0x2b3158: 0x1005000c  beq         $zero, $a1, . + 4 + (0xC << 2)
label_2b315c:
    if (ctx->pc == 0x2B315Cu) {
        ctx->pc = 0x2B315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3158u;
        // 0x2b315c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3160u;
        goto label_2b3160;
    }
    ctx->pc = 0x2B3158u;
    {
        const bool branch_taken_0x2b3158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3158u;
        // 0x2b315c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3158) {
            ctx->pc = 0x2B318Cu;
            goto label_2b318c;
        }
    }
    ctx->pc = 0x2B3160u;
label_2b3160:
    // 0x2b3160: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x2b3160u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b3164:
    // 0x2b3164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3168:
    // 0x2b3168: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x2b3168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b316c:
    // 0x2b316c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b316cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3170:
    // 0x2b3170: 0x81e30b7c  lb          $v1, 0xB7C($t7)
    ctx->pc = 0x2b3170u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b3174:
    // 0x2b3174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3178:
    // 0x2b3178: 0x81e40b7c  lb          $a0, 0xB7C($t7)
    ctx->pc = 0x2b3178u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b317c:
    // 0x2b317c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b317cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3180:
    // 0x2b3180: 0x81e91b7c  lb          $t1, 0x1B7C($t7)
    ctx->pc = 0x2b3180u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b3184:
    // 0x2b3184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3188:
    // 0x2b3188: 0x81ea1b7c  lb          $t2, 0x1B7C($t7)
    ctx->pc = 0x2b3188u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b318c:
    // 0x2b318c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b318cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3190:
    // 0x2b3190: 0x81eb1b7c  lb          $t3, 0x1B7C($t7)
    ctx->pc = 0x2b3190u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b3194:
    // 0x2b3194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3198:
    // 0x2b3198: 0x81ec1b7c  lb          $t4, 0x1B7C($t7)
    ctx->pc = 0x2b3198u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b319c:
    // 0x2b319c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b319cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b31a0:
    // 0x2b31a0: 0x81e5137c  lb          $a1, 0x137C($t7)
    ctx->pc = 0x2b31a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b31a4:
    // 0x2b31a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b31a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b31a8:
    // 0x2b31a8: 0x81e8137c  lb          $t0, 0x137C($t7)
    ctx->pc = 0x2b31a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b31ac:
    // 0x2b31ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b31acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b31b0:
    // 0x2b31b0: 0x81ed237c  lb          $t5, 0x237C($t7)
    ctx->pc = 0x2b31b0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2b31b4:
    // 0x2b31b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b31b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b31b8:
    // 0x2b31b8: 0x81ee237c  lb          $t6, 0x237C($t7)
    ctx->pc = 0x2b31b8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2b31bc:
    // 0x2b31bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b31bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b31c0:
    // 0x2b31c0: 0x1f12800  .word       0x01F12800                   # sll         $a1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b31c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 0));
label_2b31c4:
    // 0x2b31c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b31c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b31c8:
    // 0x2b31c8: 0x11e407ff  beq         $t7, $a0, . + 4 + (0x7FF << 2)
label_2b31cc:
    if (ctx->pc == 0x2B31CCu) {
        ctx->pc = 0x2B31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31C8u;
        // 0x2b31cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B31D0u;
        goto label_2b31d0;
    }
    ctx->pc = 0x2B31C8u;
    {
        const bool branch_taken_0x2b31c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31C8u;
        // 0x2b31cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b31c8) {
            ctx->pc = 0x2B51C8u;
            { ctx->pc = 0x2b51c8; return; }
        }
    }
    ctx->pc = 0x2B31D0u;
label_2b31d0:
    // 0x2b31d0: 0x80022072  lb          $v0, 0x2072($zero)
    ctx->pc = 0x2b31d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x2072u));
label_2b31d4:
    // 0x2b31d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b31d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b31d8:
    // 0x2b31d8: 0x800306bc  lb          $v1, 0x6BC($zero)
    ctx->pc = 0x2b31d8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x6BCu));
label_2b31dc:
    // 0x2b31dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b31dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b31e0:
    // 0x2b31e0: 0x10040040  beq         $zero, $a0, . + 4 + (0x40 << 2)
label_2b31e4:
    if (ctx->pc == 0x2B31E4u) {
        ctx->pc = 0x2B31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31E0u;
        // 0x2b31e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B31E8u;
        goto label_2b31e8;
    }
    ctx->pc = 0x2B31E0u;
    {
        const bool branch_taken_0x2b31e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31E0u;
        // 0x2b31e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b31e0) {
            ctx->pc = 0x2B32E4u;
            goto label_2b32e4;
        }
    }
    ctx->pc = 0x2B31E8u;
label_2b31e8:
    // 0x2b31e8: 0x10080003  beq         $zero, $t0, . + 4 + (0x3 << 2)
label_2b31ec:
    if (ctx->pc == 0x2B31ECu) {
        ctx->pc = 0x2B31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31E8u;
        // 0x2b31ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B31F0u;
        goto label_2b31f0;
    }
    ctx->pc = 0x2B31E8u;
    {
        const bool branch_taken_0x2b31e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31E8u;
        // 0x2b31ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b31e8) {
            ctx->pc = 0x2B31F8u;
            goto label_2b31f8;
        }
    }
    ctx->pc = 0x2B31F0u;
label_2b31f0:
    // 0x2b31f0: 0x10061801  beq         $zero, $a2, . + 4 + (0x1801 << 2)
label_2b31f4:
    if (ctx->pc == 0x2B31F4u) {
        ctx->pc = 0x2B31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31F0u;
        // 0x2b31f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B31F8u;
        goto label_2b31f8;
    }
    ctx->pc = 0x2B31F0u;
    {
        const bool branch_taken_0x2b31f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31F0u;
        // 0x2b31f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b31f0) {
            ctx->pc = 0x2B91F8u;
            { ctx->pc = 0x2b91f8; return; }
        }
    }
    ctx->pc = 0x2B31F8u;
label_2b31f8:
    // 0x2b31f8: 0x800832b0  lb          $t0, 0x32B0($zero)
    ctx->pc = 0x2b31f8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x32B0u));
label_2b31fc:
    // 0x2b31fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b31fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3200:
    // 0x2b3200: 0x81f2337c  lb          $s2, 0x337C($t7)
    ctx->pc = 0x2b3200u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_2b3204:
    // 0x2b3204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3208:
    // 0x2b3208: 0x81f4337c  lb          $s4, 0x337C($t7)
    ctx->pc = 0x2b3208u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_2b320c:
    // 0x2b320c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b320cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3210:
    // 0x2b3210: 0x81f3337c  lb          $s3, 0x337C($t7)
    ctx->pc = 0x2b3210u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13180)));
label_2b3214:
    // 0x2b3214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3218:
    // 0x2b3218: 0x100b5001  beq         $zero, $t3, . + 4 + (0x5001 << 2)
label_2b321c:
    if (ctx->pc == 0x2B321Cu) {
        ctx->pc = 0x2B321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3218u;
        // 0x2b321c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3220u;
        goto label_2b3220;
    }
    ctx->pc = 0x2B3218u;
    {
        const bool branch_taken_0x2b3218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3218u;
        // 0x2b321c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3218) {
            ctx->pc = 0x2C7220u;
            return;
        }
    }
    ctx->pc = 0x2B3220u;
label_2b3220:
    // 0x2b3220: 0x100c5002  beq         $zero, $t4, . + 4 + (0x5002 << 2)
label_2b3224:
    if (ctx->pc == 0x2B3224u) {
        ctx->pc = 0x2B3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3220u;
        // 0x2b3224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3228u;
        goto label_2b3228;
    }
    ctx->pc = 0x2B3220u;
    {
        const bool branch_taken_0x2b3220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B3224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3220u;
        // 0x2b3224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3220) {
            ctx->pc = 0x2C722Cu;
            return;
        }
    }
    ctx->pc = 0x2B3228u;
label_2b3228:
    // 0x2b3228: 0x120d5002  beq         $s0, $t5, . + 4 + (0x5002 << 2)
label_2b322c:
    if (ctx->pc == 0x2B322Cu) {
        ctx->pc = 0x2B322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3228u;
        // 0x2b322c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3230u;
        goto label_2b3230;
    }
    ctx->pc = 0x2B3228u;
    {
        const bool branch_taken_0x2b3228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3228u;
        // 0x2b322c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3228) {
            ctx->pc = 0x2C7234u;
            return;
        }
    }
    ctx->pc = 0x2B3230u;
label_2b3230:
    // 0x2b3230: 0x806ea3fc  lb          $t6, -0x5C04($v1)
    ctx->pc = 0x2b3230u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943740)));
label_2b3234:
    // 0x2b3234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3238:
    // 0x2b3238: 0x3ea8800  .word       0x03EA8800                   # sll         $s1, $t2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3238u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 10), 0));
label_2b323c:
    // 0x2b323c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b323cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3240:
    // 0x2b3240: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3240u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3244:
    // 0x2b3244: 0x1f22da8  .word       0x01F22DA8                   # mfsa        $a1 # 01F20580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b3244u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_2b3248:
    // 0x2b3248: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3248u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b324c:
    // 0x2b324c: 0x1f24568  .word       0x01F24568                   # mfsa        $t0 # 01F20540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b324cu;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_2b3250:
    // 0x2b3250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3254:
    // 0x2b3254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3258:
    // 0x2b3258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b325c:
    // 0x2b325c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b325cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3260:
    // 0x2b3260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3264:
    // 0x2b3264: 0x1f609bc  .word       0x01F609BC                   # dsll32      $at, $s6, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 22) << (32 + 6));
label_2b3268:
    // 0x2b3268: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b326c:
    // 0x2b326c: 0x1f610bd  .word       0x01F610BD                   # INVALID     $t7, $s6, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b326cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B326C raw=0x01F610BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3270:
    // 0x2b3270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3274:
    // 0x2b3274: 0x1f618be  .word       0x01F618BE                   # dsrl32      $v1, $s6, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> (32 + 2));
label_2b3278:
    // 0x2b3278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b327c:
    // 0x2b327c: 0x1f625cb  .word       0x01F625CB                   # movn        $a0, $t7, $s6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b327cu;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b3280:
    // 0x2b3280: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3284:
    // 0x2b3284: 0x1f509bc  .word       0x01F509BC                   # dsll32      $at, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 21) << (32 + 6));
label_2b3288:
    // 0x2b3288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b328c:
    // 0x2b328c: 0x1f510bd  .word       0x01F510BD                   # INVALID     $t7, $s5, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b328cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B328C raw=0x01F510BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3290:
    // 0x2b3290: 0x803473fd  lb          $s4, 0x73FD($at)
    ctx->pc = 0x2b3290u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29693)));
label_2b3294:
    // 0x2b3294: 0x1f518be  .word       0x01F518BE                   # dsrl32      $v1, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) >> (32 + 2));
label_2b3298:
    // 0x2b3298: 0x81f703bc  lb          $s7, 0x3BC($t7)
    ctx->pc = 0x2b3298u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b329c:
    // 0x2b329c: 0x1f5268b  .word       0x01F5268B                   # movn        $a0, $t7, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b329cu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b32a0:
    // 0x2b32a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b32a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b32a4:
    // 0x2b32a4: 0x1f549bc  .word       0x01F549BC                   # dsll32      $t1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b32a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) << (32 + 6));
label_2b32a8:
    // 0x2b32a8: 0x100d6805  beq         $zero, $t5, . + 4 + (0x6805 << 2)
label_2b32ac:
    if (ctx->pc == 0x2B32ACu) {
        ctx->pc = 0x2B32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32A8u;
        // 0x2b32ac: 0x1f550bd  .word       0x01F550BD                   # INVALID     $t7, $s5, 0x50BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B32AC raw=0x01F550BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B32B0u;
        goto label_2b32b0;
    }
    ctx->pc = 0x2B32A8u;
    {
        const bool branch_taken_0x2b32a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32A8u;
        // 0x2b32ac: 0x1f550bd  .word       0x01F550BD                   # INVALID     $t7, $s5, 0x50BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B32AC raw=0x01F550BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32a8) {
            ctx->pc = 0x2CD2C0u;
            return;
        }
    }
    ctx->pc = 0x2B32B0u;
label_2b32b0:
    // 0x2b32b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b32b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b32b4:
    // 0x2b32b4: 0x1f558be  .word       0x01F558BE                   # dsrl32      $t3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b32b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 21) >> (32 + 2));
label_2b32b8:
    // 0x2b32b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b32b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b32bc:
    // 0x2b32bc: 0x1f567cb  .word       0x01F567CB                   # movn        $t4, $t7, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b32bcu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 15));
label_2b32c0:
    // 0x2b32c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b32c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b32c4:
    // 0x2b32c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b32c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b32c8:
    // 0x2b32c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b32c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b32cc:
    // 0x2b32cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b32ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b32d0:
    // 0x2b32d0: 0x81fa03bc  lb          $k0, 0x3BC($t7)
    ctx->pc = 0x2b32d0u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b32d4:
    // 0x2b32d4: 0x1e0bddc  .word       0x01E0BDDC                   # dmult       $t7, $zero # 0000BDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b32d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B32D4 raw=0x01E0BDDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b32d8:
    // 0x2b32d8: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x2b32d8u;
    // CACHE instruction (ignored)
label_2b32dc:
    // 0x2b32dc: 0x81dff9ff  lb          $ra, -0x601($t6)
    ctx->pc = 0x2b32dcu;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294965759)));
label_2b32e0:
    // 0x2b32e0: 0x3eba000  .word       0x03EBA000                   # sll         $s4, $t3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b32e0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 11), 0));
label_2b32e4:
    // 0x2b32e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b32e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b32e8:
    // 0x2b32e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b32e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b32ec:
    // 0x2b32ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b32ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b32f0:
    // 0x2b32f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b32f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b32f4:
    // 0x2b32f4: 0x20bdde  .word       0x0020BDDE                   # ddiv        $s7, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b32f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B32F4 raw=0x0020BDDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b32f8:
    // 0x2b32f8: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2b32f8u;
    // NOP (addiu $zero, ...)
label_2b32fc:
    // 0x2b32fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b32fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3300:
    // 0x2b3300: 0x100b5805  beq         $zero, $t3, . + 4 + (0x5805 << 2)
label_2b3304:
    if (ctx->pc == 0x2B3304u) {
        ctx->pc = 0x2B3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3300u;
        // 0x2b3304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3308u;
        goto label_2b3308;
    }
    ctx->pc = 0x2B3300u;
    {
        const bool branch_taken_0x2b3300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3300u;
        // 0x2b3304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3300) {
            ctx->pc = 0x2C9318u;
            return;
        }
    }
    ctx->pc = 0x2B3308u;
label_2b3308:
    // 0x2b3308: 0x3ec6800  .word       0x03EC6800                   # sll         $t5, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3308u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 0));
label_2b330c:
    // 0x2b330c: 0x1e0d69c  .word       0x01E0D69C                   # dmult       $t7, $zero # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b330cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B330C raw=0x01E0D69C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3310:
    // 0x2b3310: 0x3ec7002  .word       0x03EC7002                   # srl         $t6, $t4, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3310u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 0));
label_2b3314:
    // 0x2b3314: 0x1fbb97d  .word       0x01FBB97D                   # INVALID     $t7, $k1, -0x4683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3314u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B3314 raw=0x01FBB97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3318:
    // 0x2b3318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b331c:
    // 0x2b331c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b331cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3320:
    // 0x2b3320: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3320u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3324:
    // 0x2b3324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3328:
    // 0x2b3328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b332c:
    // 0x2b332c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b332cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3330:
    // 0x2b3330: 0x3edd800  .word       0x03EDD800                   # sll         $k1, $t5, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3330u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
label_2b3334:
    // 0x2b3334: 0x1fed17d  .word       0x01FED17D                   # INVALID     $t7, $fp, -0x2E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B3334 raw=0x01FED17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3338:
    // 0x2b3338: 0x100c6005  beq         $zero, $t4, . + 4 + (0x6005 << 2)
label_2b333c:
    if (ctx->pc == 0x2B333Cu) {
        ctx->pc = 0x2B333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3338u;
        // 0x2b333c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3340u;
        goto label_2b3340;
    }
    ctx->pc = 0x2B3338u;
    {
        const bool branch_taken_0x2b3338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3338u;
        // 0x2b333c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3338) {
            ctx->pc = 0x2CB350u;
            return;
        }
    }
    ctx->pc = 0x2B3340u;
label_2b3340:
    // 0x2b3340: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3340u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3344:
    // 0x2b3344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3348:
    // 0x2b3348: 0x800427f2  lb          $a0, 0x27F2($zero)
    ctx->pc = 0x2b3348u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x27F2u));
label_2b334c:
    // 0x2b334c: 0x1f394ac  .word       0x01F394AC                   # dadd        $s2, $t7, $s3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b334cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b3350:
    // 0x2b3350: 0x3edf002  .word       0x03EDF002                   # srl         $fp, $t5, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3350u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 13), 0));
label_2b3354:
    // 0x2b3354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3358:
    // 0x2b3358: 0x5201000a  beql        $s0, $at, . + 4 + (0xA << 2)
label_2b335c:
    if (ctx->pc == 0x2B335Cu) {
        ctx->pc = 0x2B335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3358u;
        // 0x2b335c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3360u;
        goto label_2b3360;
    }
    ctx->pc = 0x2B3358u;
    {
        const bool branch_taken_0x2b3358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3358) {
            ctx->pc = 0x2B335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3358u;
            // 0x2b335c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3384u;
            goto label_2b3384;
        }
    }
    ctx->pc = 0x2B3360u;
label_2b3360:
    // 0x2b3360: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3360u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3364:
    // 0x2b3364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3368:
    // 0x2b3368: 0x520e000c  beql        $s0, $t6, . + 4 + (0xC << 2)
label_2b336c:
    if (ctx->pc == 0x2B336Cu) {
        ctx->pc = 0x2B336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3368u;
        // 0x2b336c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3370u;
        goto label_2b3370;
    }
    ctx->pc = 0x2B3368u;
    {
        const bool branch_taken_0x2b3368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b3368) {
            ctx->pc = 0x2B336Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3368u;
            // 0x2b336c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B339Cu;
            goto label_2b339c;
        }
    }
    ctx->pc = 0x2B3370u;
label_2b3370:
    // 0x2b3370: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3370u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3374:
    // 0x2b3374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3378:
    // 0x2b3378: 0x520407d8  beql        $s0, $a0, . + 4 + (0x7D8 << 2)
label_2b337c:
    if (ctx->pc == 0x2B337Cu) {
        ctx->pc = 0x2B337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3378u;
        // 0x2b337c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3380u;
        goto label_2b3380;
    }
    ctx->pc = 0x2B3378u;
    {
        const bool branch_taken_0x2b3378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b3378) {
            ctx->pc = 0x2B337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3378u;
            // 0x2b337c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B52DCu;
            { ctx->pc = 0x2b52dc; return; }
        }
    }
    ctx->pc = 0x2B3380u;
label_2b3380:
    // 0x2b3380: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3380u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3384:
    // 0x2b3384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3388:
    // 0x2b3388: 0x800056fc  lb          $zero, 0x56FC($zero)
    ctx->pc = 0x2b3388u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x56FCu));
label_2b338c:
    // 0x2b338c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b338cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3390:
    // 0x2b3390: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3390u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3394:
    // 0x2b3394: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3394u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3398:
    // 0x2b3398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b339c:
    // 0x2b339c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b339cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b33a0:
    // 0x2b33a0: 0x400007c6  .word       0x400007C6                   # mfc0        $zero, Index # 000007C6 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b33a0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b33a4:
    // 0x2b33a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b33a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b33a8:
    // 0x2b33a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b33a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b33ac:
    // 0x2b33ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b33acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b33b0:
    // 0x2b33b0: 0xa226800  j           func_889A000
label_2b33b4:
    if (ctx->pc == 0x2B33B4u) {
        ctx->pc = 0x2B33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33B0u;
        // 0x2b33b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B33B8u;
        goto label_2b33b8;
    }
    ctx->pc = 0x2B33B0u;
    ctx->pc = 0x2B33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B33B0u;
    // 0x2b33b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x889A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x889A000u, 0x2B33B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B33B8u;
label_2b33b8:
    // 0x2b33b8: 0xa226802  j           func_889A008
label_2b33bc:
    if (ctx->pc == 0x2B33BCu) {
        ctx->pc = 0x2B33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33B8u;
        // 0x2b33bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B33C0u;
        goto label_2b33c0;
    }
    ctx->pc = 0x2B33B8u;
    ctx->pc = 0x2B33BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B33B8u;
    // 0x2b33bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x889A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x889A008u, 0x2B33B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B33C0u;
label_2b33c0:
    // 0x2b33c0: 0x400007f4  .word       0x400007F4                   # mfc0        $zero, Index # 000007F4 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b33c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b33c4:
    // 0x2b33c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b33c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b33c8:
    // 0x2b33c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b33c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b33cc:
    // 0x2b33cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b33ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b33d0:
    // 0x2b33d0: 0x800e77f2  lb          $t6, 0x77F2($zero)
    ctx->pc = 0x2b33d0u;
    SET_GPR_S32(ctx, 14, (int8_t)FAST_READ8(0x77F2u));
label_2b33d4:
    // 0x2b33d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b33d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b33d8:
    // 0x2b33d8: 0x400007f3  .word       0x400007F3                   # mfc0        $zero, Index # 000007F3 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b33d8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b33dc:
    // 0x2b33dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b33dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b33e0:
    // 0x2b33e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b33e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b33e4:
    // 0x2b33e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b33e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b33e8:
    // 0x2b33e8: 0x0  nop
    ctx->pc = 0x2b33e8u;
    // NOP
label_2b33ec:
    // 0x2b33ec: 0x0  nop
    ctx->pc = 0x2b33ecu;
    // NOP
label_2b33f0:
    // 0x2b33f0: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x2b33f0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_2b33f4:
    // 0x2b33f4: 0x0  nop
    ctx->pc = 0x2b33f4u;
    // NOP
label_2b33f8:
    // 0x2b33f8: 0x0  nop
    ctx->pc = 0x2b33f8u;
    // NOP
label_2b33fc:
    // 0x2b33fc: 0x0  nop
    ctx->pc = 0x2b33fcu;
    // NOP
label_2b3400:
    // 0x2b3400: 0x0  nop
    ctx->pc = 0x2b3400u;
    // NOP
label_2b3404:
    // 0x2b3404: 0x4a0503f8  vcallms     0xA078
    ctx->pc = 0x2b3404u;
    {     ctx->vu0_tpc = 0x78;     runtime->executeVU0Microprogram(rdram, ctx, 0x78); }
label_2b3408:
    // 0x2b3408: 0x1ff0005  .word       0x01FF0005                   # INVALID     $t7, $ra, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3408u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B3408 raw=0x01FF0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b340c:
    // 0x2b340c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b340cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3410:
    // 0x2b3410: 0x1fe0004  sllv        $zero, $fp, $t7
    ctx->pc = 0x2b3410u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 15) & 0x1F));
label_2b3414:
    // 0x2b3414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3418:
    // 0x2b3418: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3418u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B3418 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b341c:
    // 0x2b341c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b341cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b3420:
    // 0x2b3420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3424:
    // 0x2b3424: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3424u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3428:
    // 0x2b3428: 0x3e0f805  .word       0x03E0F805                   # INVALID     $ra, $zero, -0x7FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3428u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B3428 raw=0x03E0F805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b342c:
    // 0x2b342c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b342cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3430:
    // 0x2b3430: 0x0  nop
    ctx->pc = 0x2b3430u;
    // NOP
label_2b3434:
    // 0x2b3434: 0x4a190400  vaddx       $vf16, $vf0, $vf25x
    ctx->pc = 0x2b3434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_2b3438:
    // 0x2b3438: 0x100100ca  beq         $zero, $at, . + 4 + (0xCA << 2)
label_2b343c:
    if (ctx->pc == 0x2B343Cu) {
        ctx->pc = 0x2B343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3438u;
        // 0x2b343c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3440u;
        goto label_2b3440;
    }
    ctx->pc = 0x2B3438u;
    {
        const bool branch_taken_0x2b3438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3438u;
        // 0x2b343c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3438) {
            ctx->pc = 0x2B3764u;
            { ctx->pc = 0x2b3764; return; }
        }
    }
    ctx->pc = 0x2B3440u;
label_2b3440:
    // 0x2b3440: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3440u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3444:
    // 0x2b3444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3448:
    // 0x2b3448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b344c:
    // 0x2b344c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b344cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3450:
    // 0x2b3450: 0x100100d4  beq         $zero, $at, . + 4 + (0xD4 << 2)
label_2b3454:
    if (ctx->pc == 0x2B3454u) {
        ctx->pc = 0x2B3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3450u;
        // 0x2b3454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3458u;
        goto label_2b3458;
    }
    ctx->pc = 0x2B3450u;
    {
        const bool branch_taken_0x2b3450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3450u;
        // 0x2b3454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3450) {
            ctx->pc = 0x2B37A4u;
            { ctx->pc = 0x2b37a4; return; }
        }
    }
    ctx->pc = 0x2B3458u;
label_2b3458:
    // 0x2b3458: 0x40000002  .word       0x40000002                   # mfc0        $zero, Index # 00000002 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3458u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b345c:
    // 0x2b345c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b345cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3460:
    // 0x2b3460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3464:
    // 0x2b3464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3468:
    // 0x2b3468: 0x1001002c  beq         $zero, $at, . + 4 + (0x2C << 2)
label_2b346c:
    if (ctx->pc == 0x2B346Cu) {
        ctx->pc = 0x2B346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3468u;
        // 0x2b346c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3470u;
        goto label_2b3470;
    }
    ctx->pc = 0x2B3468u;
    {
        const bool branch_taken_0x2b3468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3468u;
        // 0x2b346c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3468) {
            ctx->pc = 0x2B351Cu;
            { ctx->pc = 0x2b351c; return; }
        }
    }
    ctx->pc = 0x2B3470u;
label_2b3470:
    // 0x2b3470: 0x800306bc  lb          $v1, 0x6BC($zero)
    ctx->pc = 0x2b3470u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x6BCu));
label_2b3474:
    // 0x2b3474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3478:
    // 0x2b3478: 0x800118b0  lb          $at, 0x18B0($zero)
    ctx->pc = 0x2b3478u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x18B0u));
label_2b347c:
    // 0x2b347c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b347cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b3480u;
    return;
}

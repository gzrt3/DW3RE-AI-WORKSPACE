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


void FUN_0014eba0_part763(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c2cc0u: goto label_2c2cc0;
        case 0x2c2cc4u: goto label_2c2cc4;
        case 0x2c2cc8u: goto label_2c2cc8;
        case 0x2c2cccu: goto label_2c2ccc;
        case 0x2c2cd0u: goto label_2c2cd0;
        case 0x2c2cd4u: goto label_2c2cd4;
        case 0x2c2cd8u: goto label_2c2cd8;
        case 0x2c2cdcu: goto label_2c2cdc;
        case 0x2c2ce0u: goto label_2c2ce0;
        case 0x2c2ce4u: goto label_2c2ce4;
        case 0x2c2ce8u: goto label_2c2ce8;
        case 0x2c2cecu: goto label_2c2cec;
        case 0x2c2cf0u: goto label_2c2cf0;
        case 0x2c2cf4u: goto label_2c2cf4;
        case 0x2c2cf8u: goto label_2c2cf8;
        case 0x2c2cfcu: goto label_2c2cfc;
        case 0x2c2d00u: goto label_2c2d00;
        case 0x2c2d04u: goto label_2c2d04;
        case 0x2c2d08u: goto label_2c2d08;
        case 0x2c2d0cu: goto label_2c2d0c;
        case 0x2c2d10u: goto label_2c2d10;
        case 0x2c2d14u: goto label_2c2d14;
        case 0x2c2d18u: goto label_2c2d18;
        case 0x2c2d1cu: goto label_2c2d1c;
        case 0x2c2d20u: goto label_2c2d20;
        case 0x2c2d24u: goto label_2c2d24;
        case 0x2c2d28u: goto label_2c2d28;
        case 0x2c2d2cu: goto label_2c2d2c;
        case 0x2c2d30u: goto label_2c2d30;
        case 0x2c2d34u: goto label_2c2d34;
        case 0x2c2d38u: goto label_2c2d38;
        case 0x2c2d3cu: goto label_2c2d3c;
        case 0x2c2d40u: goto label_2c2d40;
        case 0x2c2d44u: goto label_2c2d44;
        case 0x2c2d48u: goto label_2c2d48;
        case 0x2c2d4cu: goto label_2c2d4c;
        case 0x2c2d50u: goto label_2c2d50;
        case 0x2c2d54u: goto label_2c2d54;
        case 0x2c2d58u: goto label_2c2d58;
        case 0x2c2d5cu: goto label_2c2d5c;
        case 0x2c2d60u: goto label_2c2d60;
        case 0x2c2d64u: goto label_2c2d64;
        case 0x2c2d68u: goto label_2c2d68;
        case 0x2c2d6cu: goto label_2c2d6c;
        case 0x2c2d70u: goto label_2c2d70;
        case 0x2c2d74u: goto label_2c2d74;
        case 0x2c2d78u: goto label_2c2d78;
        case 0x2c2d7cu: goto label_2c2d7c;
        case 0x2c2d80u: goto label_2c2d80;
        case 0x2c2d84u: goto label_2c2d84;
        case 0x2c2d88u: goto label_2c2d88;
        case 0x2c2d8cu: goto label_2c2d8c;
        case 0x2c2d90u: goto label_2c2d90;
        case 0x2c2d94u: goto label_2c2d94;
        case 0x2c2d98u: goto label_2c2d98;
        case 0x2c2d9cu: goto label_2c2d9c;
        case 0x2c2da0u: goto label_2c2da0;
        case 0x2c2da4u: goto label_2c2da4;
        case 0x2c2da8u: goto label_2c2da8;
        case 0x2c2dacu: goto label_2c2dac;
        case 0x2c2db0u: goto label_2c2db0;
        case 0x2c2db4u: goto label_2c2db4;
        case 0x2c2db8u: goto label_2c2db8;
        case 0x2c2dbcu: goto label_2c2dbc;
        case 0x2c2dc0u: goto label_2c2dc0;
        case 0x2c2dc4u: goto label_2c2dc4;
        case 0x2c2dc8u: goto label_2c2dc8;
        case 0x2c2dccu: goto label_2c2dcc;
        case 0x2c2dd0u: goto label_2c2dd0;
        case 0x2c2dd4u: goto label_2c2dd4;
        case 0x2c2dd8u: goto label_2c2dd8;
        case 0x2c2ddcu: goto label_2c2ddc;
        case 0x2c2de0u: goto label_2c2de0;
        case 0x2c2de4u: goto label_2c2de4;
        case 0x2c2de8u: goto label_2c2de8;
        case 0x2c2decu: goto label_2c2dec;
        case 0x2c2df0u: goto label_2c2df0;
        case 0x2c2df4u: goto label_2c2df4;
        case 0x2c2df8u: goto label_2c2df8;
        case 0x2c2dfcu: goto label_2c2dfc;
        case 0x2c2e00u: goto label_2c2e00;
        case 0x2c2e04u: goto label_2c2e04;
        case 0x2c2e08u: goto label_2c2e08;
        case 0x2c2e0cu: goto label_2c2e0c;
        case 0x2c2e10u: goto label_2c2e10;
        case 0x2c2e14u: goto label_2c2e14;
        case 0x2c2e18u: goto label_2c2e18;
        case 0x2c2e1cu: goto label_2c2e1c;
        case 0x2c2e20u: goto label_2c2e20;
        case 0x2c2e24u: goto label_2c2e24;
        case 0x2c2e28u: goto label_2c2e28;
        case 0x2c2e2cu: goto label_2c2e2c;
        case 0x2c2e30u: goto label_2c2e30;
        case 0x2c2e34u: goto label_2c2e34;
        case 0x2c2e38u: goto label_2c2e38;
        case 0x2c2e3cu: goto label_2c2e3c;
        case 0x2c2e40u: goto label_2c2e40;
        case 0x2c2e44u: goto label_2c2e44;
        case 0x2c2e48u: goto label_2c2e48;
        case 0x2c2e4cu: goto label_2c2e4c;
        case 0x2c2e50u: goto label_2c2e50;
        case 0x2c2e54u: goto label_2c2e54;
        case 0x2c2e58u: goto label_2c2e58;
        case 0x2c2e5cu: goto label_2c2e5c;
        case 0x2c2e60u: goto label_2c2e60;
        case 0x2c2e64u: goto label_2c2e64;
        case 0x2c2e68u: goto label_2c2e68;
        case 0x2c2e6cu: goto label_2c2e6c;
        case 0x2c2e70u: goto label_2c2e70;
        case 0x2c2e74u: goto label_2c2e74;
        case 0x2c2e78u: goto label_2c2e78;
        case 0x2c2e7cu: goto label_2c2e7c;
        case 0x2c2e80u: goto label_2c2e80;
        case 0x2c2e84u: goto label_2c2e84;
        case 0x2c2e88u: goto label_2c2e88;
        case 0x2c2e8cu: goto label_2c2e8c;
        case 0x2c2e90u: goto label_2c2e90;
        case 0x2c2e94u: goto label_2c2e94;
        case 0x2c2e98u: goto label_2c2e98;
        case 0x2c2e9cu: goto label_2c2e9c;
        case 0x2c2ea0u: goto label_2c2ea0;
        case 0x2c2ea4u: goto label_2c2ea4;
        case 0x2c2ea8u: goto label_2c2ea8;
        case 0x2c2eacu: goto label_2c2eac;
        case 0x2c2eb0u: goto label_2c2eb0;
        case 0x2c2eb4u: goto label_2c2eb4;
        case 0x2c2eb8u: goto label_2c2eb8;
        case 0x2c2ebcu: goto label_2c2ebc;
        case 0x2c2ec0u: goto label_2c2ec0;
        case 0x2c2ec4u: goto label_2c2ec4;
        case 0x2c2ec8u: goto label_2c2ec8;
        case 0x2c2eccu: goto label_2c2ecc;
        case 0x2c2ed0u: goto label_2c2ed0;
        case 0x2c2ed4u: goto label_2c2ed4;
        case 0x2c2ed8u: goto label_2c2ed8;
        case 0x2c2edcu: goto label_2c2edc;
        case 0x2c2ee0u: goto label_2c2ee0;
        case 0x2c2ee4u: goto label_2c2ee4;
        case 0x2c2ee8u: goto label_2c2ee8;
        case 0x2c2eecu: goto label_2c2eec;
        case 0x2c2ef0u: goto label_2c2ef0;
        case 0x2c2ef4u: goto label_2c2ef4;
        case 0x2c2ef8u: goto label_2c2ef8;
        case 0x2c2efcu: goto label_2c2efc;
        case 0x2c2f00u: goto label_2c2f00;
        case 0x2c2f04u: goto label_2c2f04;
        case 0x2c2f08u: goto label_2c2f08;
        case 0x2c2f0cu: goto label_2c2f0c;
        case 0x2c2f10u: goto label_2c2f10;
        case 0x2c2f14u: goto label_2c2f14;
        case 0x2c2f18u: goto label_2c2f18;
        case 0x2c2f1cu: goto label_2c2f1c;
        case 0x2c2f20u: goto label_2c2f20;
        case 0x2c2f24u: goto label_2c2f24;
        case 0x2c2f28u: goto label_2c2f28;
        case 0x2c2f2cu: goto label_2c2f2c;
        case 0x2c2f30u: goto label_2c2f30;
        case 0x2c2f34u: goto label_2c2f34;
        case 0x2c2f38u: goto label_2c2f38;
        case 0x2c2f3cu: goto label_2c2f3c;
        case 0x2c2f40u: goto label_2c2f40;
        case 0x2c2f44u: goto label_2c2f44;
        case 0x2c2f48u: goto label_2c2f48;
        case 0x2c2f4cu: goto label_2c2f4c;
        case 0x2c2f50u: goto label_2c2f50;
        case 0x2c2f54u: goto label_2c2f54;
        case 0x2c2f58u: goto label_2c2f58;
        case 0x2c2f5cu: goto label_2c2f5c;
        case 0x2c2f60u: goto label_2c2f60;
        case 0x2c2f64u: goto label_2c2f64;
        case 0x2c2f68u: goto label_2c2f68;
        case 0x2c2f6cu: goto label_2c2f6c;
        case 0x2c2f70u: goto label_2c2f70;
        case 0x2c2f74u: goto label_2c2f74;
        case 0x2c2f78u: goto label_2c2f78;
        case 0x2c2f7cu: goto label_2c2f7c;
        case 0x2c2f80u: goto label_2c2f80;
        case 0x2c2f84u: goto label_2c2f84;
        case 0x2c2f88u: goto label_2c2f88;
        case 0x2c2f8cu: goto label_2c2f8c;
        case 0x2c2f90u: goto label_2c2f90;
        case 0x2c2f94u: goto label_2c2f94;
        case 0x2c2f98u: goto label_2c2f98;
        case 0x2c2f9cu: goto label_2c2f9c;
        case 0x2c2fa0u: goto label_2c2fa0;
        case 0x2c2fa4u: goto label_2c2fa4;
        case 0x2c2fa8u: goto label_2c2fa8;
        case 0x2c2facu: goto label_2c2fac;
        case 0x2c2fb0u: goto label_2c2fb0;
        case 0x2c2fb4u: goto label_2c2fb4;
        case 0x2c2fb8u: goto label_2c2fb8;
        case 0x2c2fbcu: goto label_2c2fbc;
        case 0x2c2fc0u: goto label_2c2fc0;
        case 0x2c2fc4u: goto label_2c2fc4;
        case 0x2c2fc8u: goto label_2c2fc8;
        case 0x2c2fccu: goto label_2c2fcc;
        case 0x2c2fd0u: goto label_2c2fd0;
        case 0x2c2fd4u: goto label_2c2fd4;
        case 0x2c2fd8u: goto label_2c2fd8;
        case 0x2c2fdcu: goto label_2c2fdc;
        case 0x2c2fe0u: goto label_2c2fe0;
        case 0x2c2fe4u: goto label_2c2fe4;
        case 0x2c2fe8u: goto label_2c2fe8;
        case 0x2c2fecu: goto label_2c2fec;
        case 0x2c2ff0u: goto label_2c2ff0;
        case 0x2c2ff4u: goto label_2c2ff4;
        case 0x2c2ff8u: goto label_2c2ff8;
        case 0x2c2ffcu: goto label_2c2ffc;
        case 0x2c3000u: goto label_2c3000;
        case 0x2c3004u: goto label_2c3004;
        case 0x2c3008u: goto label_2c3008;
        case 0x2c300cu: goto label_2c300c;
        case 0x2c3010u: goto label_2c3010;
        case 0x2c3014u: goto label_2c3014;
        case 0x2c3018u: goto label_2c3018;
        case 0x2c301cu: goto label_2c301c;
        case 0x2c3020u: goto label_2c3020;
        case 0x2c3024u: goto label_2c3024;
        case 0x2c3028u: goto label_2c3028;
        case 0x2c302cu: goto label_2c302c;
        case 0x2c3030u: goto label_2c3030;
        case 0x2c3034u: goto label_2c3034;
        case 0x2c3038u: goto label_2c3038;
        case 0x2c303cu: goto label_2c303c;
        case 0x2c3040u: goto label_2c3040;
        case 0x2c3044u: goto label_2c3044;
        case 0x2c3048u: goto label_2c3048;
        case 0x2c304cu: goto label_2c304c;
        case 0x2c3050u: goto label_2c3050;
        case 0x2c3054u: goto label_2c3054;
        case 0x2c3058u: goto label_2c3058;
        case 0x2c305cu: goto label_2c305c;
        case 0x2c3060u: goto label_2c3060;
        case 0x2c3064u: goto label_2c3064;
        case 0x2c3068u: goto label_2c3068;
        case 0x2c306cu: goto label_2c306c;
        case 0x2c3070u: goto label_2c3070;
        case 0x2c3074u: goto label_2c3074;
        case 0x2c3078u: goto label_2c3078;
        case 0x2c307cu: goto label_2c307c;
        case 0x2c3080u: goto label_2c3080;
        case 0x2c3084u: goto label_2c3084;
        case 0x2c3088u: goto label_2c3088;
        case 0x2c308cu: goto label_2c308c;
        case 0x2c3090u: goto label_2c3090;
        case 0x2c3094u: goto label_2c3094;
        case 0x2c3098u: goto label_2c3098;
        case 0x2c309cu: goto label_2c309c;
        case 0x2c30a0u: goto label_2c30a0;
        case 0x2c30a4u: goto label_2c30a4;
        case 0x2c30a8u: goto label_2c30a8;
        case 0x2c30acu: goto label_2c30ac;
        case 0x2c30b0u: goto label_2c30b0;
        case 0x2c30b4u: goto label_2c30b4;
        case 0x2c30b8u: goto label_2c30b8;
        case 0x2c30bcu: goto label_2c30bc;
        case 0x2c30c0u: goto label_2c30c0;
        case 0x2c30c4u: goto label_2c30c4;
        case 0x2c30c8u: goto label_2c30c8;
        case 0x2c30ccu: goto label_2c30cc;
        case 0x2c30d0u: goto label_2c30d0;
        case 0x2c30d4u: goto label_2c30d4;
        case 0x2c30d8u: goto label_2c30d8;
        case 0x2c30dcu: goto label_2c30dc;
        case 0x2c30e0u: goto label_2c30e0;
        case 0x2c30e4u: goto label_2c30e4;
        case 0x2c30e8u: goto label_2c30e8;
        case 0x2c30ecu: goto label_2c30ec;
        case 0x2c30f0u: goto label_2c30f0;
        case 0x2c30f4u: goto label_2c30f4;
        case 0x2c30f8u: goto label_2c30f8;
        case 0x2c30fcu: goto label_2c30fc;
        case 0x2c3100u: goto label_2c3100;
        case 0x2c3104u: goto label_2c3104;
        case 0x2c3108u: goto label_2c3108;
        case 0x2c310cu: goto label_2c310c;
        case 0x2c3110u: goto label_2c3110;
        case 0x2c3114u: goto label_2c3114;
        case 0x2c3118u: goto label_2c3118;
        case 0x2c311cu: goto label_2c311c;
        case 0x2c3120u: goto label_2c3120;
        case 0x2c3124u: goto label_2c3124;
        case 0x2c3128u: goto label_2c3128;
        case 0x2c312cu: goto label_2c312c;
        case 0x2c3130u: goto label_2c3130;
        case 0x2c3134u: goto label_2c3134;
        case 0x2c3138u: goto label_2c3138;
        case 0x2c313cu: goto label_2c313c;
        case 0x2c3140u: goto label_2c3140;
        case 0x2c3144u: goto label_2c3144;
        case 0x2c3148u: goto label_2c3148;
        case 0x2c314cu: goto label_2c314c;
        case 0x2c3150u: goto label_2c3150;
        case 0x2c3154u: goto label_2c3154;
        case 0x2c3158u: goto label_2c3158;
        case 0x2c315cu: goto label_2c315c;
        case 0x2c3160u: goto label_2c3160;
        case 0x2c3164u: goto label_2c3164;
        case 0x2c3168u: goto label_2c3168;
        case 0x2c316cu: goto label_2c316c;
        case 0x2c3170u: goto label_2c3170;
        case 0x2c3174u: goto label_2c3174;
        case 0x2c3178u: goto label_2c3178;
        case 0x2c317cu: goto label_2c317c;
        case 0x2c3180u: goto label_2c3180;
        case 0x2c3184u: goto label_2c3184;
        case 0x2c3188u: goto label_2c3188;
        case 0x2c318cu: goto label_2c318c;
        case 0x2c3190u: goto label_2c3190;
        case 0x2c3194u: goto label_2c3194;
        case 0x2c3198u: goto label_2c3198;
        case 0x2c319cu: goto label_2c319c;
        case 0x2c31a0u: goto label_2c31a0;
        case 0x2c31a4u: goto label_2c31a4;
        case 0x2c31a8u: goto label_2c31a8;
        case 0x2c31acu: goto label_2c31ac;
        case 0x2c31b0u: goto label_2c31b0;
        case 0x2c31b4u: goto label_2c31b4;
        case 0x2c31b8u: goto label_2c31b8;
        case 0x2c31bcu: goto label_2c31bc;
        case 0x2c31c0u: goto label_2c31c0;
        case 0x2c31c4u: goto label_2c31c4;
        case 0x2c31c8u: goto label_2c31c8;
        case 0x2c31ccu: goto label_2c31cc;
        case 0x2c31d0u: goto label_2c31d0;
        case 0x2c31d4u: goto label_2c31d4;
        case 0x2c31d8u: goto label_2c31d8;
        case 0x2c31dcu: goto label_2c31dc;
        case 0x2c31e0u: goto label_2c31e0;
        case 0x2c31e4u: goto label_2c31e4;
        case 0x2c31e8u: goto label_2c31e8;
        case 0x2c31ecu: goto label_2c31ec;
        case 0x2c31f0u: goto label_2c31f0;
        case 0x2c31f4u: goto label_2c31f4;
        case 0x2c31f8u: goto label_2c31f8;
        case 0x2c31fcu: goto label_2c31fc;
        case 0x2c3200u: goto label_2c3200;
        case 0x2c3204u: goto label_2c3204;
        case 0x2c3208u: goto label_2c3208;
        case 0x2c320cu: goto label_2c320c;
        case 0x2c3210u: goto label_2c3210;
        case 0x2c3214u: goto label_2c3214;
        case 0x2c3218u: goto label_2c3218;
        case 0x2c321cu: goto label_2c321c;
        case 0x2c3220u: goto label_2c3220;
        case 0x2c3224u: goto label_2c3224;
        case 0x2c3228u: goto label_2c3228;
        case 0x2c322cu: goto label_2c322c;
        case 0x2c3230u: goto label_2c3230;
        case 0x2c3234u: goto label_2c3234;
        case 0x2c3238u: goto label_2c3238;
        case 0x2c323cu: goto label_2c323c;
        case 0x2c3240u: goto label_2c3240;
        case 0x2c3244u: goto label_2c3244;
        case 0x2c3248u: goto label_2c3248;
        case 0x2c324cu: goto label_2c324c;
        case 0x2c3250u: goto label_2c3250;
        case 0x2c3254u: goto label_2c3254;
        case 0x2c3258u: goto label_2c3258;
        case 0x2c325cu: goto label_2c325c;
        case 0x2c3260u: goto label_2c3260;
        case 0x2c3264u: goto label_2c3264;
        case 0x2c3268u: goto label_2c3268;
        case 0x2c326cu: goto label_2c326c;
        case 0x2c3270u: goto label_2c3270;
        case 0x2c3274u: goto label_2c3274;
        case 0x2c3278u: goto label_2c3278;
        case 0x2c327cu: goto label_2c327c;
        case 0x2c3280u: goto label_2c3280;
        case 0x2c3284u: goto label_2c3284;
        case 0x2c3288u: goto label_2c3288;
        case 0x2c328cu: goto label_2c328c;
        case 0x2c3290u: goto label_2c3290;
        case 0x2c3294u: goto label_2c3294;
        case 0x2c3298u: goto label_2c3298;
        case 0x2c329cu: goto label_2c329c;
        case 0x2c32a0u: goto label_2c32a0;
        case 0x2c32a4u: goto label_2c32a4;
        case 0x2c32a8u: goto label_2c32a8;
        case 0x2c32acu: goto label_2c32ac;
        case 0x2c32b0u: goto label_2c32b0;
        case 0x2c32b4u: goto label_2c32b4;
        case 0x2c32b8u: goto label_2c32b8;
        case 0x2c32bcu: goto label_2c32bc;
        case 0x2c32c0u: goto label_2c32c0;
        case 0x2c32c4u: goto label_2c32c4;
        case 0x2c32c8u: goto label_2c32c8;
        case 0x2c32ccu: goto label_2c32cc;
        case 0x2c32d0u: goto label_2c32d0;
        case 0x2c32d4u: goto label_2c32d4;
        case 0x2c32d8u: goto label_2c32d8;
        case 0x2c32dcu: goto label_2c32dc;
        case 0x2c32e0u: goto label_2c32e0;
        case 0x2c32e4u: goto label_2c32e4;
        case 0x2c32e8u: goto label_2c32e8;
        case 0x2c32ecu: goto label_2c32ec;
        case 0x2c32f0u: goto label_2c32f0;
        case 0x2c32f4u: goto label_2c32f4;
        case 0x2c32f8u: goto label_2c32f8;
        case 0x2c32fcu: goto label_2c32fc;
        case 0x2c3300u: goto label_2c3300;
        case 0x2c3304u: goto label_2c3304;
        case 0x2c3308u: goto label_2c3308;
        case 0x2c330cu: goto label_2c330c;
        case 0x2c3310u: goto label_2c3310;
        case 0x2c3314u: goto label_2c3314;
        case 0x2c3318u: goto label_2c3318;
        case 0x2c331cu: goto label_2c331c;
        case 0x2c3320u: goto label_2c3320;
        case 0x2c3324u: goto label_2c3324;
        case 0x2c3328u: goto label_2c3328;
        case 0x2c332cu: goto label_2c332c;
        case 0x2c3330u: goto label_2c3330;
        case 0x2c3334u: goto label_2c3334;
        case 0x2c3338u: goto label_2c3338;
        case 0x2c333cu: goto label_2c333c;
        case 0x2c3340u: goto label_2c3340;
        case 0x2c3344u: goto label_2c3344;
        case 0x2c3348u: goto label_2c3348;
        case 0x2c334cu: goto label_2c334c;
        case 0x2c3350u: goto label_2c3350;
        case 0x2c3354u: goto label_2c3354;
        case 0x2c3358u: goto label_2c3358;
        case 0x2c335cu: goto label_2c335c;
        case 0x2c3360u: goto label_2c3360;
        case 0x2c3364u: goto label_2c3364;
        case 0x2c3368u: goto label_2c3368;
        case 0x2c336cu: goto label_2c336c;
        case 0x2c3370u: goto label_2c3370;
        case 0x2c3374u: goto label_2c3374;
        case 0x2c3378u: goto label_2c3378;
        case 0x2c337cu: goto label_2c337c;
        case 0x2c3380u: goto label_2c3380;
        case 0x2c3384u: goto label_2c3384;
        case 0x2c3388u: goto label_2c3388;
        case 0x2c338cu: goto label_2c338c;
        case 0x2c3390u: goto label_2c3390;
        case 0x2c3394u: goto label_2c3394;
        case 0x2c3398u: goto label_2c3398;
        case 0x2c339cu: goto label_2c339c;
        case 0x2c33a0u: goto label_2c33a0;
        case 0x2c33a4u: goto label_2c33a4;
        case 0x2c33a8u: goto label_2c33a8;
        case 0x2c33acu: goto label_2c33ac;
        case 0x2c33b0u: goto label_2c33b0;
        case 0x2c33b4u: goto label_2c33b4;
        case 0x2c33b8u: goto label_2c33b8;
        case 0x2c33bcu: goto label_2c33bc;
        case 0x2c33c0u: goto label_2c33c0;
        case 0x2c33c4u: goto label_2c33c4;
        case 0x2c33c8u: goto label_2c33c8;
        case 0x2c33ccu: goto label_2c33cc;
        case 0x2c33d0u: goto label_2c33d0;
        case 0x2c33d4u: goto label_2c33d4;
        case 0x2c33d8u: goto label_2c33d8;
        case 0x2c33dcu: goto label_2c33dc;
        case 0x2c33e0u: goto label_2c33e0;
        case 0x2c33e4u: goto label_2c33e4;
        case 0x2c33e8u: goto label_2c33e8;
        case 0x2c33ecu: goto label_2c33ec;
        case 0x2c33f0u: goto label_2c33f0;
        case 0x2c33f4u: goto label_2c33f4;
        case 0x2c33f8u: goto label_2c33f8;
        case 0x2c33fcu: goto label_2c33fc;
        case 0x2c3400u: goto label_2c3400;
        case 0x2c3404u: goto label_2c3404;
        case 0x2c3408u: goto label_2c3408;
        case 0x2c340cu: goto label_2c340c;
        case 0x2c3410u: goto label_2c3410;
        case 0x2c3414u: goto label_2c3414;
        case 0x2c3418u: goto label_2c3418;
        case 0x2c341cu: goto label_2c341c;
        case 0x2c3420u: goto label_2c3420;
        case 0x2c3424u: goto label_2c3424;
        case 0x2c3428u: goto label_2c3428;
        case 0x2c342cu: goto label_2c342c;
        case 0x2c3430u: goto label_2c3430;
        case 0x2c3434u: goto label_2c3434;
        case 0x2c3438u: goto label_2c3438;
        case 0x2c343cu: goto label_2c343c;
        case 0x2c3440u: goto label_2c3440;
        case 0x2c3444u: goto label_2c3444;
        case 0x2c3448u: goto label_2c3448;
        case 0x2c344cu: goto label_2c344c;
        case 0x2c3450u: goto label_2c3450;
        case 0x2c3454u: goto label_2c3454;
        case 0x2c3458u: goto label_2c3458;
        case 0x2c345cu: goto label_2c345c;
        case 0x2c3460u: goto label_2c3460;
        case 0x2c3464u: goto label_2c3464;
        case 0x2c3468u: goto label_2c3468;
        case 0x2c346cu: goto label_2c346c;
        case 0x2c3470u: goto label_2c3470;
        case 0x2c3474u: goto label_2c3474;
        case 0x2c3478u: goto label_2c3478;
        case 0x2c347cu: goto label_2c347c;
        case 0x2c3480u: goto label_2c3480;
        case 0x2c3484u: goto label_2c3484;
        case 0x2c3488u: goto label_2c3488;
        case 0x2c348cu: goto label_2c348c;
        default: return;
    }

label_2c2cc0:
    // 0x2c2cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cc4:
    // 0x2c2cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2cc8:
    // 0x2c2cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ccc:
    // 0x2c2ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2cd0:
    // 0x2c2cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cd4:
    // 0x2c2cd4: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2cd4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2c2cd8:
    // 0x2c2cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cdc:
    // 0x2c2cdc: 0x20f5e1  .word       0x0020F5E1                   # addu        $fp, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2cdcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2c2ce0:
    // 0x2c2ce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ce4:
    // 0x2c2ce4: 0x1c0ad9c  .word       0x01C0AD9C                   # dmult       $t6, $zero # 0000AD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2ce4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C2CE4 raw=0x01C0AD9C");
 /* MITIGATED */
label_2c2ce8:
    // 0x2c2ce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cec:
    // 0x2c2cec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2cecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2cf0:
    // 0x2c2cf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cf4:
    // 0x2c2cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2cf8:
    // 0x2c2cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cfc:
    // 0x2c2cfc: 0x20bddf  .word       0x0020BDDF                   # ddivu       $s7, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2cfcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C2CFC raw=0x0020BDDF");
 /* MITIGATED */
label_2c2d00:
    // 0x2c2d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d04:
    // 0x2c2d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d08:
    // 0x2c2d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d0c:
    // 0x2c2d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d10:
    // 0x2c2d10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d14:
    // 0x2c2d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d18:
    // 0x2c2d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d1c:
    // 0x2c2d1c: 0x20bd90  .word       0x0020BD90                   # mfhi        $s7 # 00200580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2d1cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2c2d20:
    // 0x2c2d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d24:
    // 0x2c2d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d28:
    // 0x2c2d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d2c:
    // 0x2c2d2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d30:
    // 0x2c2d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d34:
    // 0x2c2d34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d38:
    // 0x2c2d38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d3c:
    // 0x2c2d3c: 0x1f6b17d  .word       0x01F6B17D                   # INVALID     $t7, $s6, -0x4E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2d3cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C2D3C raw=0x01F6B17D");
 /* MITIGATED */
label_2c2d40:
    // 0x2c2d40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d44:
    // 0x2c2d44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d48:
    // 0x2c2d48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d4c:
    // 0x2c2d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d50:
    // 0x2c2d50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d54:
    // 0x2c2d54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d58:
    // 0x2c2d58: 0x3e6b002  .word       0x03E6B002                   # srl         $s6, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2d58u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 6), 0));
label_2c2d5c:
    // 0x2c2d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d60:
    // 0x2c2d60: 0x3e7b002  .word       0x03E7B002                   # srl         $s6, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2d60u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2c2d64:
    // 0x2c2d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d68:
    // 0x2c2d68: 0x1f81801  .word       0x01F81801                   # INVALID     $t7, $t8, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2d68u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C2D68 raw=0x01F81801");
 /* MITIGATED */
label_2c2d6c:
    // 0x2c2d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d70:
    // 0x2c2d70: 0x1f91802  .word       0x01F91802                   # srl         $v1, $t9, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 0));
label_2c2d74:
    // 0x2c2d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d78:
    // 0x2c2d78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d7c:
    // 0x2c2d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d80:
    // 0x2c2d80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d84:
    // 0x2c2d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2d88:
    // 0x2c2d88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d8c:
    // 0x2c2d8c: 0x1f8c17c  .word       0x01F8C17C                   # dsll32      $t8, $t8, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2d8cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 5));
label_2c2d90:
    // 0x2c2d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d94:
    // 0x2c2d94: 0x1f9c97c  .word       0x01F9C97C                   # dsll32      $t9, $t9, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2d94u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 5));
label_2c2d98:
    // 0x2c2d98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2d98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2d9c:
    // 0x2c2d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2da0:
    // 0x2c2da0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2da0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2da4:
    // 0x2c2da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2da8:
    // 0x2c2da8: 0x3e6c001  .word       0x03E6C001                   # INVALID     $ra, $a2, -0x3FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2da8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C2DA8 raw=0x03E6C001");
 /* MITIGATED */
label_2c2dac:
    // 0x2c2dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2db0:
    // 0x2c2db0: 0x3e7c801  .word       0x03E7C801                   # INVALID     $ra, $a3, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2db0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C2DB0 raw=0x03E7C801");
 /* MITIGATED */
label_2c2db4:
    // 0x2c2db4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2db4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2db8:
    // 0x2c2db8: 0x19a1803  .word       0x019A1803                   # sra         $v1, $k0, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2db8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 26), 0));
label_2c2dbc:
    // 0x2c2dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2dc0:
    // 0x2c2dc0: 0x19b1804  sllv        $v1, $k1, $t4
    ctx->pc = 0x2c2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 27), GPR_U32(ctx, 12) & 0x1F));
label_2c2dc4:
    // 0x2c2dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2dc8:
    // 0x2c2dc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2dc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2dcc:
    // 0x2c2dcc: 0x400683  .word       0x00400683                   # sra         $zero, $zero, 26 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2dccu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 26));
label_2c2dd0:
    // 0x2c2dd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2dd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2dd4:
    // 0x2c2dd4: 0x4006c3  .word       0x004006C3                   # sra         $zero, $zero, 27 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2dd4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 27));
label_2c2dd8:
    // 0x2c2dd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2dd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ddc:
    // 0x2c2ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2de0:
    // 0x2c2de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2de4:
    // 0x2c2de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2de8:
    // 0x2c2de8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2de8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2dec:
    // 0x2c2dec: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2decu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C2DEC raw=0x01C0D69C");
 /* MITIGATED */
label_2c2df0:
    // 0x2c2df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2df4:
    // 0x2c2df4: 0x1c0dedc  .word       0x01C0DEDC                   # dmult       $t6, $zero # 0000DEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2df4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C2DF4 raw=0x01C0DEDC");
 /* MITIGATED */
label_2c2df8:
    // 0x2c2df8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2dfc:
    // 0x2c2dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e00:
    // 0x2c2e00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2e04:
    // 0x2c2e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e08:
    // 0x2c2e08: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2e08u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2c2e0c:
    // 0x2c2e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e10:
    // 0x2c2e10: 0x3e7d800  .word       0x03E7D800                   # sll         $k1, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2e10u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2c2e14:
    // 0x2c2e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e18:
    // 0x2c2e18: 0x10063003  beq         $zero, $a2, . + 4 + (0x3003 << 2)
label_2c2e1c:
    if (ctx->pc == 0x2C2E1Cu) {
        ctx->pc = 0x2C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E18u;
        // 0x2c2e1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2E20u;
        goto label_2c2e20;
    }
    ctx->pc = 0x2C2E18u;
    {
        const bool branch_taken_0x2c2e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E18u;
        // 0x2c2e1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e18) {
            ctx->pc = 0x2CEE28u;
            return;
        }
    }
    ctx->pc = 0x2C2E20u;
label_2c2e20:
    // 0x2c2e20: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2c2e24:
    if (ctx->pc == 0x2C2E24u) {
        ctx->pc = 0x2C2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E20u;
        // 0x2c2e24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2E28u;
        goto label_2c2e28;
    }
    ctx->pc = 0x2C2E20u;
    {
        const bool branch_taken_0x2c2e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E20u;
        // 0x2c2e24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e20) {
            ctx->pc = 0x2D0E30u;
            return;
        }
    }
    ctx->pc = 0x2C2E28u;
label_2c2e28:
    // 0x2c2e28: 0x10031805  beq         $zero, $v1, . + 4 + (0x1805 << 2)
label_2c2e2c:
    if (ctx->pc == 0x2C2E2Cu) {
        ctx->pc = 0x2C2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E28u;
        // 0x2c2e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2E30u;
        goto label_2c2e30;
    }
    ctx->pc = 0x2C2E28u;
    {
        const bool branch_taken_0x2c2e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E28u;
        // 0x2c2e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e28) {
            ctx->pc = 0x2C8E40u;
            { ctx->pc = 0x2c8e40; return; }
        }
    }
    ctx->pc = 0x2C2E30u;
label_2c2e30:
    // 0x2c2e30: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2c2e30u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2c2e34:
    // 0x2c2e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e38:
    // 0x2c2e38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2e38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2e3c:
    // 0x2c2e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e40:
    // 0x2c2e40: 0x520a07bf  beql        $s0, $t2, . + 4 + (0x7BF << 2)
label_2c2e44:
    if (ctx->pc == 0x2C2E44u) {
        ctx->pc = 0x2C2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E40u;
        // 0x2c2e44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2E48u;
        goto label_2c2e48;
    }
    ctx->pc = 0x2C2E40u;
    {
        const bool branch_taken_0x2c2e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c2e40) {
            ctx->pc = 0x2C2E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2E40u;
            // 0x2c2e44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D40u;
            { ctx->pc = 0x2c4d40; return; }
        }
    }
    ctx->pc = 0x2C2E48u;
label_2c2e48:
    // 0x2c2e48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2e48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2e4c:
    // 0x2c2e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e50:
    // 0x2c2e50: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c2e50u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C2E50 raw=0x48000800");
 /* MITIGATED */
label_2c2e54:
    // 0x2c2e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e58:
    // 0x2c2e58: 0x808713ff  lb          $a3, 0x13FF($a0)
    ctx->pc = 0x2c2e58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5119)));
label_2c2e5c:
    // 0x2c2e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e60:
    // 0x2c2e60: 0x0  nop
    ctx->pc = 0x2c2e60u;
    // NOP
label_2c2e64:
    // 0x2c2e64: 0x4a000450  vmaxx       $vf17, $vf0, $vf0x
    ctx->pc = 0x2c2e64u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2c2e68:
    // 0x2c2e68: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c2e68u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c2e6c:
    // 0x2c2e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e70:
    // 0x2c2e70: 0x88c1000  j           func_2304000
label_2c2e74:
    if (ctx->pc == 0x2C2E74u) {
        ctx->pc = 0x2C2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E70u;
        // 0x2c2e74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2E78u;
        goto label_2c2e78;
    }
    ctx->pc = 0x2C2E70u;
    ctx->pc = 0x2C2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E70u;
    // 0x2c2e74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2304000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304000u, 0x2C2E70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C2E78u;
label_2c2e78:
    // 0x2c2e78: 0x1006102c  beq         $zero, $a2, . + 4 + (0x102C << 2)
label_2c2e7c:
    if (ctx->pc == 0x2C2E7Cu) {
        ctx->pc = 0x2C2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E78u;
        // 0x2c2e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2E80u;
        goto label_2c2e80;
    }
    ctx->pc = 0x2C2E78u;
    {
        const bool branch_taken_0x2c2e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E78u;
        // 0x2c2e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e78) {
            ctx->pc = 0x2C6F2Cu;
            { ctx->pc = 0x2c6f2c; return; }
        }
    }
    ctx->pc = 0x2C2E80u;
label_2c2e80:
    // 0x2c2e80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2e80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2e84:
    // 0x2c2e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e88:
    // 0x2c2e88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2e88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2e8c:
    // 0x2c2e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e90:
    // 0x2c2e90: 0x800c3330  lb          $t4, 0x3330($zero)
    ctx->pc = 0x2c2e90u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x3330u));
label_2c2e94:
    // 0x2c2e94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2e94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2e98:
    // 0x2c2e98: 0xa8c1000  j           func_A304000
label_2c2e9c:
    if (ctx->pc == 0x2C2E9Cu) {
        ctx->pc = 0x2C2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E98u;
        // 0x2c2e9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EA0u;
        goto label_2c2ea0;
    }
    ctx->pc = 0x2C2E98u;
    ctx->pc = 0x2C2E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2E98u;
    // 0x2c2e9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA304000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA304000u, 0x2C2E98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C2EA0u;
label_2c2ea0:
    // 0x2c2ea0: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2c2ea4:
    if (ctx->pc == 0x2C2EA4u) {
        ctx->pc = 0x2C2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EA0u;
        // 0x2c2ea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EA8u;
        goto label_2c2ea8;
    }
    ctx->pc = 0x2C2EA0u;
    {
        const bool branch_taken_0x2c2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2C2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EA0u;
        // 0x2c2ea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ea0) {
            ctx->pc = 0x2C6EA8u;
            { ctx->pc = 0x2c6ea8; return; }
        }
    }
    ctx->pc = 0x2C2EA8u;
label_2c2ea8:
    // 0x2c2ea8: 0x90c2800  j           func_430A000
label_2c2eac:
    if (ctx->pc == 0x2C2EACu) {
        ctx->pc = 0x2C2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EA8u;
        // 0x2c2eac: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EB0u;
        goto label_2c2eb0;
    }
    ctx->pc = 0x2C2EA8u;
    ctx->pc = 0x2C2EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2EA8u;
    // 0x2c2eac: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430A000u, 0x2C2EA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C2EB0u;
label_2c2eb0:
    // 0x2c2eb0: 0x82e2800  j           func_B8A000
label_2c2eb4:
    if (ctx->pc == 0x2C2EB4u) {
        ctx->pc = 0x2C2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EB0u;
        // 0x2c2eb4: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EB8u;
        goto label_2c2eb8;
    }
    ctx->pc = 0x2C2EB0u;
    ctx->pc = 0x2C2EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2EB0u;
    // 0x2c2eb4: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8A000u, 0x2C2EB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C2EB8u;
label_2c2eb8:
    // 0x2c2eb8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2c2ebc:
    if (ctx->pc == 0x2C2EBCu) {
        ctx->pc = 0x2C2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EB8u;
        // 0x2c2ebc: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EC0u;
        goto label_2c2ec0;
    }
    ctx->pc = 0x2C2EB8u;
    {
        const bool branch_taken_0x2c2eb8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EB8u;
        // 0x2c2ebc: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2eb8) {
            ctx->pc = 0x2C4EB8u;
            { ctx->pc = 0x2c4eb8; return; }
        }
    }
    ctx->pc = 0x2C2EC0u;
label_2c2ec0:
    // 0x2c2ec0: 0x10032801  beq         $zero, $v1, . + 4 + (0x2801 << 2)
label_2c2ec4:
    if (ctx->pc == 0x2C2EC4u) {
        ctx->pc = 0x2C2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EC0u;
        // 0x2c2ec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EC8u;
        goto label_2c2ec8;
    }
    ctx->pc = 0x2C2EC0u;
    {
        const bool branch_taken_0x2c2ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C2EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EC0u;
        // 0x2c2ec4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ec0) {
            ctx->pc = 0x2CCEC8u;
            { ctx->pc = 0x2ccec8; return; }
        }
    }
    ctx->pc = 0x2C2EC8u;
label_2c2ec8:
    // 0x2c2ec8: 0x10010002  beq         $zero, $at, . + 4 + (0x2 << 2)
label_2c2ecc:
    if (ctx->pc == 0x2C2ECCu) {
        ctx->pc = 0x2C2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EC8u;
        // 0x2c2ecc: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2ED0u;
        goto label_2c2ed0;
    }
    ctx->pc = 0x2C2EC8u;
    {
        const bool branch_taken_0x2c2ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EC8u;
        // 0x2c2ecc: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ec8) {
            ctx->pc = 0x2C2ED4u;
            goto label_2c2ed4;
        }
    }
    ctx->pc = 0x2C2ED0u;
label_2c2ed0:
    // 0x2c2ed0: 0x80017074  lb          $at, 0x7074($zero)
    ctx->pc = 0x2c2ed0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x7074u));
label_2c2ed4:
    // 0x2c2ed4: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2ed4u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2c2ed8:
    // 0x2c2ed8: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2c2ed8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2c2edc:
    // 0x2c2edc: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2edcu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c2ee0:
    // 0x2c2ee0: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_2c2ee4:
    if (ctx->pc == 0x2C2EE4u) {
        ctx->pc = 0x2C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EE0u;
        // 0x2c2ee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EE8u;
        goto label_2c2ee8;
    }
    ctx->pc = 0x2C2EE0u;
    {
        const bool branch_taken_0x2c2ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c2ee0) {
            ctx->pc = 0x2C2EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2EE0u;
            // 0x2c2ee4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2EECu;
            goto label_2c2eec;
        }
    }
    ctx->pc = 0x2C2EE8u;
label_2c2ee8:
    // 0x2c2ee8: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2c2ee8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2c2eec:
    // 0x2c2eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ef0:
    // 0x2c2ef0: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2c2ef4:
    if (ctx->pc == 0x2C2EF4u) {
        ctx->pc = 0x2C2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EF0u;
        // 0x2c2ef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2EF8u;
        goto label_2c2ef8;
    }
    ctx->pc = 0x2C2EF0u;
    {
        const bool branch_taken_0x2c2ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EF0u;
        // 0x2c2ef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ef0) {
            ctx->pc = 0x2C2F00u;
            goto label_2c2f00;
        }
    }
    ctx->pc = 0x2C2EF8u;
label_2c2ef8:
    // 0x2c2ef8: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2c2ef8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2c2efc:
    // 0x2c2efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f00:
    // 0x2c2f00: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2c2f00u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c2f04:
    // 0x2c2f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f08:
    // 0x2c2f08: 0x802813fe  lb          $t0, 0x13FE($at)
    ctx->pc = 0x2c2f08u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5118)));
label_2c2f0c:
    // 0x2c2f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f10:
    // 0x2c2f10: 0x1f42800  .word       0x01F42800                   # sll         $a1, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2f10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2c2f14:
    // 0x2c2f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f18:
    // 0x2c2f18: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2c2f18u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2c2f1c:
    // 0x2c2f1c: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2c2f20:
    // 0x2c2f20: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2c2f20u;
    // NOP (addi to $zero)
label_2c2f24:
    // 0x2c2f24: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2f24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C2F24 raw=0x01F310BD");
 /* MITIGATED */
label_2c2f28:
    // 0x2c2f28: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2c2f28u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2c2f2c:
    // 0x2c2f2c: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2c2f30:
    // 0x2c2f30: 0x81e6a37d  lb          $a2, -0x5C83($t7)
    ctx->pc = 0x2c2f30u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c2f34:
    // 0x2c2f34: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2f34u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2c2f38:
    // 0x2c2f38: 0x800c31f0  lb          $t4, 0x31F0($zero)
    ctx->pc = 0x2c2f38u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x31F0u));
label_2c2f3c:
    // 0x2c2f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f40:
    // 0x2c2f40: 0x800c39f0  lb          $t4, 0x39F0($zero)
    ctx->pc = 0x2c2f40u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x39F0u));
label_2c2f44:
    // 0x2c2f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f48:
    // 0x2c2f48: 0x800c39f0  lb          $t4, 0x39F0($zero)
    ctx->pc = 0x2c2f48u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x39F0u));
label_2c2f4c:
    // 0x2c2f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f50:
    // 0x2c2f50: 0x80074231  lb          $a3, 0x4231($zero)
    ctx->pc = 0x2c2f50u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4231u));
label_2c2f54:
    // 0x2c2f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f58:
    // 0x2c2f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2f5c:
    // 0x2c2f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f60:
    // 0x2c2f60: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
label_2c2f64:
    if (ctx->pc == 0x2C2F64u) {
        ctx->pc = 0x2C2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F60u;
        // 0x2c2f64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2F68u;
        goto label_2c2f68;
    }
    ctx->pc = 0x2C2F60u;
    {
        const bool branch_taken_0x2c2f60 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c2f60) {
            ctx->pc = 0x2C2F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2F60u;
            // 0x2c2f64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2F6Cu;
            return;
        }
    }
    ctx->pc = 0x2C2F68u;
label_2c2f68:
    // 0x2c2f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2f6c:
    // 0x2c2f6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f70:
    // 0x2c2f70: 0x802713ff  lb          $a3, 0x13FF($at)
    ctx->pc = 0x2c2f70u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5119)));
label_2c2f74:
    // 0x2c2f74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f78:
    // 0x2c2f78: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2c2f78u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c2f7c:
    // 0x2c2f7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f80:
    // 0x2c2f80: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2c2f80u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2c2f84:
    // 0x2c2f84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f88:
    // 0x2c2f88: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2c2f88u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2c2f8c:
    // 0x2c2f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f90:
    // 0x2c2f90: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2c2f90u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2c2f94:
    // 0x2c2f94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2f94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2f98:
    // 0x2c2f98: 0x81f503bc  lb          $s5, 0x3BC($t7)
    ctx->pc = 0x2c2f98u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c2f9c:
    // 0x2c2f9c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2f9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2c2fa0:
    // 0x2c2fa0: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2c2fa0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2c2fa4:
    // 0x2c2fa4: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2fa4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C2FA4 raw=0x01F368BD");
 /* MITIGATED */
label_2c2fa8:
    // 0x2c2fa8: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2c2fa8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2c2fac:
    // 0x2c2fac: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2facu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2c2fb0:
    // 0x2c2fb0: 0x81fc237c  lb          $gp, 0x237C($t7)
    ctx->pc = 0x2c2fb0u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2c2fb4:
    // 0x2c2fb4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2fb4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2c2fb8:
    // 0x2c2fb8: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2c2fb8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2c2fbc:
    // 0x2c2fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2fc0:
    // 0x2c2fc0: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2c2fc0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2c2fc4:
    // 0x2c2fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2fc8:
    // 0x2c2fc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2fc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2fcc:
    // 0x2c2fcc: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2fccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2c2fd0:
    // 0x2c2fd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2fd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2fd4:
    // 0x2c2fd4: 0x20f561  .word       0x0020F561                   # addu        $fp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2fd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2c2fd8:
    // 0x2c2fd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2fd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2fdc:
    // 0x2c2fdc: 0x1c0afdc  .word       0x01C0AFDC                   # dmult       $t6, $zero # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2fdcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C2FDC raw=0x01C0AFDC");
 /* MITIGATED */
label_2c2fe0:
    // 0x2c2fe0: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2c2fe0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2c2fe4:
    // 0x2c2fe4: 0x1e7e5aa  .word       0x01E7E5AA                   # slt         $gp, $t7, $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2fe4u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2c2fe8:
    // 0x2c2fe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2fe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2fec:
    // 0x2c2fec: 0x1e8e72a  .word       0x01E8E72A                   # slt         $gp, $t7, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2fecu;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2c2ff0:
    // 0x2c2ff0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ff0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ff4:
    // 0x2c2ff4: 0x1c5a268  .word       0x01C5A268                   # mfsa        $s4 # 01C50240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2ff4u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2c2ff8:
    // 0x2c2ff8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ffc:
    // 0x2c2ffc: 0x20afdf  .word       0x0020AFDF                   # ddivu       $s5, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2ffcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C2FFC raw=0x0020AFDF");
 /* MITIGATED */
label_2c3000:
    // 0x2c3000: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3000u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3004:
    // 0x2c3004: 0x1e0b59f  .word       0x01E0B59F                   # ddivu       $s6, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3004u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C3004 raw=0x01E0B59F");
 /* MITIGATED */
label_2c3008:
    // 0x2c3008: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3008u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c300c:
    // 0x2c300c: 0x1e0e71f  .word       0x01E0E71F                   # ddivu       $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c300cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C300C raw=0x01E0E71F");
 /* MITIGATED */
label_2c3010:
    // 0x2c3010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3014:
    // 0x2c3014: 0x1c6a2a8  .word       0x01C6A2A8                   # mfsa        $s4 # 01C60280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3014u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2c3018:
    // 0x2c3018: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3018u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c301c:
    // 0x2c301c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c301cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2c3020:
    // 0x2c3020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3024:
    // 0x2c3024: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3024u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2c3028:
    // 0x2c3028: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2c3028u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2c302c:
    // 0x2c302c: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c302cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2c3030:
    // 0x2c3030: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c3030u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c3034:
    // 0x2c3034: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3034u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2c3038:
    // 0x2c3038: 0x10063003  beq         $zero, $a2, . + 4 + (0x3003 << 2)
label_2c303c:
    if (ctx->pc == 0x2C303Cu) {
        ctx->pc = 0x2C303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3038u;
        // 0x2c303c: 0x1c04a5c  .word       0x01C04A5C                   # dmult       $t6, $zero # 00004A40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C303C raw=0x01C04A5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3040u;
        goto label_2c3040;
    }
    ctx->pc = 0x2C3038u;
    {
        const bool branch_taken_0x2c3038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3038u;
        // 0x2c303c: 0x1c04a5c  .word       0x01C04A5C                   # dmult       $t6, $zero # 00004A40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C303C raw=0x01C04A5C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3038) {
            ctx->pc = 0x2CF048u;
            return;
        }
    }
    ctx->pc = 0x2C3040u;
label_2c3040:
    // 0x2c3040: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2c3040u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2c3044:
    // 0x2c3044: 0x1c0529c  .word       0x01C0529C                   # dmult       $t6, $zero # 00005280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3044u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C3044 raw=0x01C0529C");
 /* MITIGATED */
label_2c3048:
    // 0x2c3048: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3048u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c304c:
    // 0x2c304c: 0x1f6b17c  .word       0x01F6B17C                   # dsll32      $s6, $s6, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c304cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 5));
label_2c3050:
    // 0x2c3050: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2c3050u;
    // NOP (addiu $zero, ...)
label_2c3054:
    // 0x2c3054: 0x1fce17c  .word       0x01FCE17C                   # dsll32      $gp, $gp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3054u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 5));
label_2c3058:
    // 0x2c3058: 0x3e64ffd  .word       0x03E64FFD                   # INVALID     $ra, $a2, 0x4FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3058u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3058 raw=0x03E64FFD");
 /* MITIGATED */
label_2c305c:
    // 0x2c305c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c305cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3060:
    // 0x2c3060: 0x3e75000  .word       0x03E75000                   # sll         $t2, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3060u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2c3064:
    // 0x2c3064: 0x1f5f97d  .word       0x01F5F97D                   # INVALID     $t7, $s5, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3064u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3064 raw=0x01F5F97D");
 /* MITIGATED */
label_2c3068:
    // 0x2c3068: 0x3e6b7fe  .word       0x03E6B7FE                   # dsrl32      $s6, $a2, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3068u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) >> (32 + 31));
label_2c306c:
    // 0x2c306c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c306cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3070:
    // 0x2c3070: 0x3e7e001  .word       0x03E7E001                   # INVALID     $ra, $a3, -0x1FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3070u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C3070 raw=0x03E7E001");
 /* MITIGATED */
label_2c3074:
    // 0x2c3074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3078:
    // 0x2c3078: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2c3078u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2c307c:
    // 0x2c307c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c307cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3080:
    // 0x2c3080: 0x8062abfc  lb          $v0, -0x5404($v1)
    ctx->pc = 0x2c3080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945788)));
label_2c3084:
    // 0x2c3084: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2c3088:
    // 0x2c3088: 0x3e6afff  .word       0x03E6AFFF                   # dsra32      $s5, $a2, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3088u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 6) >> (32 + 31));
label_2c308c:
    // 0x2c308c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c308cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C308C raw=0x01F310BD");
 /* MITIGATED */
label_2c3090:
    // 0x2c3090: 0x3e7a802  .word       0x03E7A802                   # srl         $s5, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3090u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2c3094:
    // 0x2c3094: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2c3098:
    // 0x2c3098: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2c309c:
    if (ctx->pc == 0x2C309Cu) {
        ctx->pc = 0x2C309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3098u;
        // 0x2c309c: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30A0u;
        goto label_2c30a0;
    }
    ctx->pc = 0x2C3098u;
    {
        const bool branch_taken_0x2c3098 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c3098) {
            ctx->pc = 0x2C309Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3098u;
            // 0x2c309c: 0x1e0254b  .word       0x01E0254B                   # movn        $a0, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD0B4u;
            return;
        }
    }
    ctx->pc = 0x2C30A0u;
label_2c30a0:
    // 0x2c30a0: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2c30a4:
    if (ctx->pc == 0x2C30A4u) {
        ctx->pc = 0x2C30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30A0u;
        // 0x2c30a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30A8u;
        goto label_2c30a8;
    }
    ctx->pc = 0x2C30A0u;
    {
        const bool branch_taken_0x2c30a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30A0u;
        // 0x2c30a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c30a0) {
            ctx->pc = 0x2D10B0u;
            return;
        }
    }
    ctx->pc = 0x2C30A8u;
label_2c30a8:
    // 0x2c30a8: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2c30a8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2c30ac:
    // 0x2c30ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c30b0:
    // 0x2c30b0: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2c30b0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2c30b4:
    // 0x2c30b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c30b8:
    // 0x2c30b8: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2c30b8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2c30bc:
    // 0x2c30bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c30c0:
    // 0x2c30c0: 0x5a00481d  blezl       $s0, . + 4 + (0x481D << 2)
label_2c30c4:
    if (ctx->pc == 0x2C30C4u) {
        ctx->pc = 0x2C30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30C0u;
        // 0x2c30c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30C8u;
        goto label_2c30c8;
    }
    ctx->pc = 0x2C30C0u;
    {
        const bool branch_taken_0x2c30c0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c30c0) {
            ctx->pc = 0x2C30C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C30C0u;
            // 0x2c30c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5138u;
            return;
        }
    }
    ctx->pc = 0x2C30C8u;
label_2c30c8:
    // 0x2c30c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c30c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c30cc:
    // 0x2c30cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c30d0:
    // 0x2c30d0: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2c30d0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2c30d4:
    // 0x2c30d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c30d8:
    // 0x2c30d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c30d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c30dc:
    // 0x2c30dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c30e0:
    // 0x2c30e0: 0x520c07d6  beql        $s0, $t4, . + 4 + (0x7D6 << 2)
label_2c30e4:
    if (ctx->pc == 0x2C30E4u) {
        ctx->pc = 0x2C30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C30E0u;
        // 0x2c30e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C30E8u;
        goto label_2c30e8;
    }
    ctx->pc = 0x2C30E0u;
    {
        const bool branch_taken_0x2c30e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c30e0) {
            ctx->pc = 0x2C30E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C30E0u;
            // 0x2c30e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C503Cu;
            { ctx->pc = 0x2c503c; return; }
        }
    }
    ctx->pc = 0x2C30E8u;
label_2c30e8:
    // 0x2c30e8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c30e8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c30ec:
    // 0x2c30ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c30f0:
    // 0x2c30f0: 0x810413fe  lb          $a0, 0x13FE($t0)
    ctx->pc = 0x2c30f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5118)));
label_2c30f4:
    // 0x2c30f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c30f8:
    // 0x2c30f8: 0x800701b0  lb          $a3, 0x1B0($zero)
    ctx->pc = 0x2c30f8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x1B0u));
label_2c30fc:
    // 0x2c30fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c30fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3100:
    // 0x2c3100: 0x802113fe  lb          $at, 0x13FE($at)
    ctx->pc = 0x2c3100u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5118)));
label_2c3104:
    // 0x2c3104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3108:
    // 0x2c3108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c310c:
    // 0x2c310c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c310cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3110:
    // 0x2c3110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3114:
    // 0x2c3114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3118:
    // 0x2c3118: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2c311c:
    if (ctx->pc == 0x2C311Cu) {
        ctx->pc = 0x2C311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3118u;
        // 0x2c311c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3120u;
        goto label_2c3120;
    }
    ctx->pc = 0x2C3118u;
    {
        const bool branch_taken_0x2c3118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3118u;
        // 0x2c311c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3118) {
            ctx->pc = 0x2CB120u;
            { ctx->pc = 0x2cb120; return; }
        }
    }
    ctx->pc = 0x2C3120u;
label_2c3120:
    // 0x2c3120: 0x810413ff  lb          $a0, 0x13FF($t0)
    ctx->pc = 0x2c3120u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5119)));
label_2c3124:
    // 0x2c3124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3128:
    // 0x2c3128: 0x5a0027af  blezl       $s0, . + 4 + (0x27AF << 2)
label_2c312c:
    if (ctx->pc == 0x2C312Cu) {
        ctx->pc = 0x2C312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3128u;
        // 0x2c312c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3130u;
        goto label_2c3130;
    }
    ctx->pc = 0x2C3128u;
    {
        const bool branch_taken_0x2c3128 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c3128) {
            ctx->pc = 0x2C312Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3128u;
            // 0x2c312c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCFE8u;
            { ctx->pc = 0x2ccfe8; return; }
        }
    }
    ctx->pc = 0x2C3130u;
label_2c3130:
    // 0x2c3130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3134:
    // 0x2c3134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3138:
    // 0x2c3138: 0x81080bfe  lb          $t0, 0xBFE($t0)
    ctx->pc = 0x2c3138u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3070)));
label_2c313c:
    // 0x2c313c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c313cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3140:
    // 0x2c3140: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3140u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C3140 raw=0x01FA0005");
 /* MITIGATED */
label_2c3144:
    // 0x2c3144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3148:
    // 0x2c3148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c314c:
    // 0x2c314c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c314cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3150:
    // 0x2c3150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3154:
    // 0x2c3154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3158:
    // 0x2c3158: 0x11eb47ff  beq         $t7, $t3, . + 4 + (0x47FF << 2)
label_2c315c:
    if (ctx->pc == 0x2C315Cu) {
        ctx->pc = 0x2C315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3158u;
        // 0x2c315c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3160u;
        goto label_2c3160;
    }
    ctx->pc = 0x2C3158u;
    {
        const bool branch_taken_0x2c3158 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3158u;
        // 0x2c315c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3158) {
            ctx->pc = 0x2D5158u;
            return;
        }
    }
    ctx->pc = 0x2C3160u;
label_2c3160:
    // 0x2c3160: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c3164:
    if (ctx->pc == 0x2C3164u) {
        ctx->pc = 0x2C3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3160u;
        // 0x2c3164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3168u;
        goto label_2c3168;
    }
    ctx->pc = 0x2C3160u;
    {
        const bool branch_taken_0x2c3160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C3164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3160u;
        // 0x2c3164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3160) {
            ctx->pc = 0x2D9168u;
            return;
        }
    }
    ctx->pc = 0x2C3168u;
label_2c3168:
    // 0x2c3168: 0x810b0bff  lb          $t3, 0xBFF($t0)
    ctx->pc = 0x2c3168u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3071)));
label_2c316c:
    // 0x2c316c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c316cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3170:
    // 0x2c3170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3174:
    // 0x2c3174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3178:
    // 0x2c3178: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3178u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c317c:
    // 0x2c317c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c317cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3180:
    // 0x2c3180: 0x1002102c  beq         $zero, $v0, . + 4 + (0x102C << 2)
label_2c3184:
    if (ctx->pc == 0x2C3184u) {
        ctx->pc = 0x2C3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3180u;
        // 0x2c3184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3188u;
        goto label_2c3188;
    }
    ctx->pc = 0x2C3180u;
    {
        const bool branch_taken_0x2c3180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3180u;
        // 0x2c3184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3180) {
            ctx->pc = 0x2C7234u;
            { ctx->pc = 0x2c7234; return; }
        }
    }
    ctx->pc = 0x2C3188u;
label_2c3188:
    // 0x2c3188: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c3188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c318c:
    // 0x2c318c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c318cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3190:
    // 0x2c3190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3194:
    // 0x2c3194: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c3194u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c3198:
    // 0x2c3198: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c319c:
    // 0x2c319c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c319cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31a0:
    // 0x2c31a0: 0x40000798  .word       0x40000798                   # mfc0        $zero, Index # 00000798 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c31a0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c31a4:
    // 0x2c31a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31a8:
    // 0x2c31a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c31a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c31ac:
    // 0x2c31ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31b0:
    // 0x2c31b0: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2c31b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2c31b4:
    // 0x2c31b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31b8:
    // 0x2c31b8: 0x52010016  beql        $s0, $at, . + 4 + (0x16 << 2)
label_2c31bc:
    if (ctx->pc == 0x2C31BCu) {
        ctx->pc = 0x2C31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31B8u;
        // 0x2c31bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C31C0u;
        goto label_2c31c0;
    }
    ctx->pc = 0x2C31B8u;
    {
        const bool branch_taken_0x2c31b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c31b8) {
            ctx->pc = 0x2C31BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C31B8u;
            // 0x2c31bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3214u;
            goto label_2c3214;
        }
    }
    ctx->pc = 0x2C31C0u;
label_2c31c0:
    // 0x2c31c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c31c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c31c4:
    // 0x2c31c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31c8:
    // 0x2c31c8: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2c31c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2c31cc:
    // 0x2c31cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31d0:
    // 0x2c31d0: 0x52010013  beql        $s0, $at, . + 4 + (0x13 << 2)
label_2c31d4:
    if (ctx->pc == 0x2C31D4u) {
        ctx->pc = 0x2C31D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31D0u;
        // 0x2c31d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C31D8u;
        goto label_2c31d8;
    }
    ctx->pc = 0x2C31D0u;
    {
        const bool branch_taken_0x2c31d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c31d0) {
            ctx->pc = 0x2C31D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C31D0u;
            // 0x2c31d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3220u;
            goto label_2c3220;
        }
    }
    ctx->pc = 0x2C31D8u;
label_2c31d8:
    // 0x2c31d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c31d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c31dc:
    // 0x2c31dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31e0:
    // 0x2c31e0: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2c31e0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2c31e4:
    // 0x2c31e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31e8:
    // 0x2c31e8: 0x52010010  beql        $s0, $at, . + 4 + (0x10 << 2)
label_2c31ec:
    if (ctx->pc == 0x2C31ECu) {
        ctx->pc = 0x2C31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31E8u;
        // 0x2c31ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C31F0u;
        goto label_2c31f0;
    }
    ctx->pc = 0x2C31E8u;
    {
        const bool branch_taken_0x2c31e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c31e8) {
            ctx->pc = 0x2C31ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C31E8u;
            // 0x2c31ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C322Cu;
            goto label_2c322c;
        }
    }
    ctx->pc = 0x2C31F0u;
label_2c31f0:
    // 0x2c31f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c31f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c31f4:
    // 0x2c31f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c31f8:
    // 0x2c31f8: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2c31f8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2c31fc:
    // 0x2c31fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c31fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3200:
    // 0x2c3200: 0x5201000d  beql        $s0, $at, . + 4 + (0xD << 2)
label_2c3204:
    if (ctx->pc == 0x2C3204u) {
        ctx->pc = 0x2C3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3200u;
        // 0x2c3204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3208u;
        goto label_2c3208;
    }
    ctx->pc = 0x2C3200u;
    {
        const bool branch_taken_0x2c3200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c3200) {
            ctx->pc = 0x2C3204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3200u;
            // 0x2c3204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3238u;
            goto label_2c3238;
        }
    }
    ctx->pc = 0x2C3208u;
label_2c3208:
    // 0x2c3208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c320c:
    // 0x2c320c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c320cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3210:
    // 0x2c3210: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2c3210u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2c3214:
    // 0x2c3214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3218:
    // 0x2c3218: 0x5201000a  beql        $s0, $at, . + 4 + (0xA << 2)
label_2c321c:
    if (ctx->pc == 0x2C321Cu) {
        ctx->pc = 0x2C321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3218u;
        // 0x2c321c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3220u;
        goto label_2c3220;
    }
    ctx->pc = 0x2C3218u;
    {
        const bool branch_taken_0x2c3218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c3218) {
            ctx->pc = 0x2C321Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3218u;
            // 0x2c321c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3244u;
            goto label_2c3244;
        }
    }
    ctx->pc = 0x2C3220u;
label_2c3220:
    // 0x2c3220: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3220u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3224:
    // 0x2c3224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3228:
    // 0x2c3228: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2c3228u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2c322c:
    // 0x2c322c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c322cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3230:
    // 0x2c3230: 0x52010007  beql        $s0, $at, . + 4 + (0x7 << 2)
label_2c3234:
    if (ctx->pc == 0x2C3234u) {
        ctx->pc = 0x2C3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3230u;
        // 0x2c3234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3238u;
        goto label_2c3238;
    }
    ctx->pc = 0x2C3230u;
    {
        const bool branch_taken_0x2c3230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c3230) {
            ctx->pc = 0x2C3234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3230u;
            // 0x2c3234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3250u;
            goto label_2c3250;
        }
    }
    ctx->pc = 0x2C3238u;
label_2c3238:
    // 0x2c3238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c323c:
    // 0x2c323c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c323cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3240:
    // 0x2c3240: 0x420f000b  .word       0x420F000B                   # INVALID     $s0, $t7, 0xB # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3240u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xB at 0x2C3240 raw=0x420F000B");
 /* MITIGATED */
label_2c3244:
    // 0x2c3244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3248:
    // 0x2c3248: 0x100e0066  beq         $zero, $t6, . + 4 + (0x66 << 2)
label_2c324c:
    if (ctx->pc == 0x2C324Cu) {
        ctx->pc = 0x2C324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3248u;
        // 0x2c324c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3250u;
        goto label_2c3250;
    }
    ctx->pc = 0x2C3248u;
    {
        const bool branch_taken_0x2c3248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3248u;
        // 0x2c324c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3248) {
            ctx->pc = 0x2C33E4u;
            goto label_2c33e4;
        }
    }
    ctx->pc = 0x2C3250u;
label_2c3250:
    // 0x2c3250: 0x420f0036  .word       0x420F0036                   # INVALID     $s0, $t7, 0x36 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3250u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x36 at 0x2C3250 raw=0x420F0036");
 /* MITIGATED */
label_2c3254:
    // 0x2c3254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3258:
    // 0x2c3258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c325c:
    // 0x2c325c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c325cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3260:
    // 0x2c3260: 0x420f001d  .word       0x420F001D                   # INVALID     $s0, $t7, 0x1D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3260u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x2C3260 raw=0x420F001D");
 /* MITIGATED */
label_2c3264:
    // 0x2c3264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3268:
    // 0x2c3268: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c326c:
    // 0x2c326c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c326cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3270:
    // 0x2c3270: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2c3274:
    if (ctx->pc == 0x2C3274u) {
        ctx->pc = 0x2C3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3270u;
        // 0x2c3274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3278u;
        goto label_2c3278;
    }
    ctx->pc = 0x2C3270u;
    {
        const bool branch_taken_0x2c3270 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3270u;
        // 0x2c3274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3270) {
            ctx->pc = 0x2C9270u;
            { ctx->pc = 0x2c9270; return; }
        }
    }
    ctx->pc = 0x2C3278u;
label_2c3278:
    // 0x2c3278: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2c3278u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2c327c:
    // 0x2c327c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c327cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3280:
    // 0x2c3280: 0xa2137ff  j           func_884DFFC
label_2c3284:
    if (ctx->pc == 0x2C3284u) {
        ctx->pc = 0x2C3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3280u;
        // 0x2c3284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3288u;
        goto label_2c3288;
    }
    ctx->pc = 0x2C3280u;
    ctx->pc = 0x2C3284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3280u;
    // 0x2c3284: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884DFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884DFFCu, 0x2C3280u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C3288u;
label_2c3288:
    // 0x2c3288: 0x400007c8  .word       0x400007C8                   # mfc0        $zero, Index # 000007C8 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c3288u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c328c:
    // 0x2c328c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c328cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3290:
    // 0x2c3290: 0xa213fff  j           func_884FFFC
label_2c3294:
    if (ctx->pc == 0x2C3294u) {
        ctx->pc = 0x2C3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3290u;
        // 0x2c3294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3298u;
        goto label_2c3298;
    }
    ctx->pc = 0x2C3290u;
    ctx->pc = 0x2C3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3290u;
    // 0x2c3294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2C3290u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C3298u;
label_2c3298:
    // 0x2c3298: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3298u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c329c:
    // 0x2c329c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c329cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32a0:
    // 0x2c32a0: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2c32a0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2c32a4:
    // 0x2c32a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32a8:
    // 0x2c32a8: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2c32a8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2c32ac:
    // 0x2c32ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32b0:
    // 0x2c32b0: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2c32b0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2c32b4:
    // 0x2c32b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32b8:
    // 0x2c32b8: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2c32b8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2c32bc:
    // 0x2c32bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32c0:
    // 0x2c32c0: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2c32c0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2c32c4:
    // 0x2c32c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32c8:
    // 0x2c32c8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c32cc:
    if (ctx->pc == 0x2C32CCu) {
        ctx->pc = 0x2C32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32C8u;
        // 0x2c32cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C32D0u;
        goto label_2c32d0;
    }
    ctx->pc = 0x2C32C8u;
    {
        const bool branch_taken_0x2c32c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32C8u;
        // 0x2c32cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32c8) {
            ctx->pc = 0x2DF2D0u;
            return;
        }
    }
    ctx->pc = 0x2C32D0u;
label_2c32d0:
    // 0x2c32d0: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2c32d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c32d4:
    // 0x2c32d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32d8:
    // 0x2c32d8: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2c32d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c32dc:
    // 0x2c32dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32e0:
    // 0x2c32e0: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2c32e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c32e4:
    // 0x2c32e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32e8:
    // 0x2c32e8: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2c32e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c32ec:
    // 0x2c32ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c32f0:
    // 0x2c32f0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c32f4:
    if (ctx->pc == 0x2C32F4u) {
        ctx->pc = 0x2C32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32F0u;
        // 0x2c32f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C32F8u;
        goto label_2c32f8;
    }
    ctx->pc = 0x2C32F0u;
    {
        const bool branch_taken_0x2c32f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32F0u;
        // 0x2c32f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c32f0) {
            ctx->pc = 0x2DF2F8u;
            return;
        }
    }
    ctx->pc = 0x2C32F8u;
label_2c32f8:
    // 0x2c32f8: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2c32f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c32fc:
    // 0x2c32fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c32fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3300:
    // 0x2c3300: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2c3300u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c3304:
    // 0x2c3304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3308:
    // 0x2c3308: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2c3308u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c330c:
    // 0x2c330c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c330cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3310:
    // 0x2c3310: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2c3310u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c3314:
    // 0x2c3314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3318:
    // 0x2c3318: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c331c:
    if (ctx->pc == 0x2C331Cu) {
        ctx->pc = 0x2C331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3318u;
        // 0x2c331c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3320u;
        goto label_2c3320;
    }
    ctx->pc = 0x2C3318u;
    {
        const bool branch_taken_0x2c3318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3318u;
        // 0x2c331c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3318) {
            ctx->pc = 0x2DF320u;
            return;
        }
    }
    ctx->pc = 0x2C3320u;
label_2c3320:
    // 0x2c3320: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2c3320u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c3324:
    // 0x2c3324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3328:
    // 0x2c3328: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2c3328u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c332c:
    // 0x2c332c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c332cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3330:
    // 0x2c3330: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2c3330u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c3334:
    // 0x2c3334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3338:
    // 0x2c3338: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2c3338u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c333c:
    // 0x2c333c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c333cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3340:
    // 0x2c3340: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c3340u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C3340 raw=0x48007800");
 /* MITIGATED */
label_2c3344:
    // 0x2c3344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3348:
    // 0x2c3348: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3348u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c334c:
    // 0x2c334c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c334cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3350:
    // 0x2c3350: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2c3350u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2c3354:
    // 0x2c3354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3358:
    // 0x2c3358: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2c3358u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c335c:
    // 0x2c335c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c335cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3360:
    // 0x2c3360: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2c3360u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c3364:
    // 0x2c3364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3368:
    // 0x2c3368: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2c3368u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c336c:
    // 0x2c336c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c336cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3370:
    // 0x2c3370: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2c3370u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c3374:
    // 0x2c3374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3378:
    // 0x2c3378: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c337c:
    if (ctx->pc == 0x2C337Cu) {
        ctx->pc = 0x2C337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3378u;
        // 0x2c337c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3380u;
        goto label_2c3380;
    }
    ctx->pc = 0x2C3378u;
    {
        const bool branch_taken_0x2c3378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3378u;
        // 0x2c337c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3378) {
            ctx->pc = 0x2DF380u;
            return;
        }
    }
    ctx->pc = 0x2C3380u;
label_2c3380:
    // 0x2c3380: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2c3380u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c3384:
    // 0x2c3384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3388:
    // 0x2c3388: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2c3388u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c338c:
    // 0x2c338c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c338cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3390:
    // 0x2c3390: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2c3390u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c3394:
    // 0x2c3394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3398:
    // 0x2c3398: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2c3398u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c339c:
    // 0x2c339c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c339cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33a0:
    // 0x2c33a0: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c33a4:
    if (ctx->pc == 0x2C33A4u) {
        ctx->pc = 0x2C33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33A0u;
        // 0x2c33a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C33A8u;
        goto label_2c33a8;
    }
    ctx->pc = 0x2C33A0u;
    {
        const bool branch_taken_0x2c33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33A0u;
        // 0x2c33a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33a0) {
            ctx->pc = 0x2DF3A8u;
            return;
        }
    }
    ctx->pc = 0x2C33A8u;
label_2c33a8:
    // 0x2c33a8: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2c33a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c33ac:
    // 0x2c33ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33b0:
    // 0x2c33b0: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2c33b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c33b4:
    // 0x2c33b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33b8:
    // 0x2c33b8: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2c33b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c33bc:
    // 0x2c33bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33c0:
    // 0x2c33c0: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2c33c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c33c4:
    // 0x2c33c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33c8:
    // 0x2c33c8: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c33cc:
    if (ctx->pc == 0x2C33CCu) {
        ctx->pc = 0x2C33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33C8u;
        // 0x2c33cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C33D0u;
        goto label_2c33d0;
    }
    ctx->pc = 0x2C33C8u;
    {
        const bool branch_taken_0x2c33c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33C8u;
        // 0x2c33cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33c8) {
            ctx->pc = 0x2DF3D0u;
            return;
        }
    }
    ctx->pc = 0x2C33D0u;
label_2c33d0:
    // 0x2c33d0: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2c33d0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c33d4:
    // 0x2c33d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33d8:
    // 0x2c33d8: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2c33d8u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c33dc:
    // 0x2c33dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33e0:
    // 0x2c33e0: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2c33e0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c33e4:
    // 0x2c33e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33e8:
    // 0x2c33e8: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2c33e8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c33ec:
    // 0x2c33ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33f0:
    // 0x2c33f0: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2c33f0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c33f4:
    // 0x2c33f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c33f8:
    // 0x2c33f8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c33f8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C33F8 raw=0x48000800");
 /* MITIGATED */
label_2c33fc:
    // 0x2c33fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c33fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3400:
    // 0x2c3400: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3400u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3404:
    // 0x2c3404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3408:
    // 0x2c3408: 0x1f537f8  .word       0x01F537F8                   # dsll        $a2, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << 31);
label_2c340c:
    // 0x2c340c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c340cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3410:
    // 0x2c3410: 0x1f337fb  .word       0x01F337FB                   # dsra        $a2, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3410u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 19) >> 31);
label_2c3414:
    // 0x2c3414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3418:
    // 0x2c3418: 0x1f437fe  .word       0x01F437FE                   # dsrl32      $a2, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) >> (32 + 31));
label_2c341c:
    // 0x2c341c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c341cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3420:
    // 0x2c3420: 0x1f63ff8  .word       0x01F63FF8                   # dsll        $a3, $s6, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) << 31);
label_2c3424:
    // 0x2c3424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3428:
    // 0x2c3428: 0x1f73ffb  .word       0x01F73FFB                   # dsra        $a3, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3428u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 23) >> 31);
label_2c342c:
    // 0x2c342c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c342cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3430:
    // 0x2c3430: 0x1f83ffe  .word       0x01F83FFE                   # dsrl32      $a3, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) >> (32 + 31));
label_2c3434:
    // 0x2c3434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3438:
    // 0x2c3438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c343c:
    // 0x2c343c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c343cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3440:
    // 0x2c3440: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3440u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3444:
    // 0x2c3444: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3444u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2c3448:
    // 0x2c3448: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c344c:
    if (ctx->pc == 0x2C344Cu) {
        ctx->pc = 0x2C344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3448u;
        // 0x2c344c: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3450u;
        goto label_2c3450;
    }
    ctx->pc = 0x2C3448u;
    {
        const bool branch_taken_0x2c3448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3448u;
        // 0x2c344c: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3448) {
            ctx->pc = 0x2C3494u;
            { ctx->pc = 0x2c3494; return; }
        }
    }
    ctx->pc = 0x2C3450u;
label_2c3450:
    // 0x2c3450: 0x10090038  beq         $zero, $t1, . + 4 + (0x38 << 2)
label_2c3454:
    if (ctx->pc == 0x2C3454u) {
        ctx->pc = 0x2C3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3450u;
        // 0x2c3454: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3458u;
        goto label_2c3458;
    }
    ctx->pc = 0x2C3450u;
    {
        const bool branch_taken_0x2c3450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3450u;
        // 0x2c3454: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3450) {
            ctx->pc = 0x2C3534u;
            { ctx->pc = 0x2c3534; return; }
        }
    }
    ctx->pc = 0x2C3458u;
label_2c3458:
    // 0x2c3458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c345c:
    // 0x2c345c: 0x1f6b13c  .word       0x01F6B13C                   # dsll32      $s6, $s6, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c345cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 4));
label_2c3460:
    // 0x2c3460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3464:
    // 0x2c3464: 0x1f7b93c  .word       0x01F7B93C                   # dsll32      $s7, $s7, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3464u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 4));
label_2c3468:
    // 0x2c3468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c346c:
    // 0x2c346c: 0x1f8c13c  .word       0x01F8C13C                   # dsll32      $t8, $t8, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c346cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 4));
label_2c3470:
    // 0x2c3470: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3470u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C3470 raw=0x03E8A801");
 /* MITIGATED */
label_2c3474:
    // 0x2c3474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3478:
    // 0x2c3478: 0x3e89806  srlv        $s3, $t0, $ra
    ctx->pc = 0x2c3478u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c347c:
    // 0x2c347c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c347cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3480:
    // 0x2c3480: 0x3e8a00b  movn        $s4, $ra, $t0
    ctx->pc = 0x2c3480u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 31));
label_2c3484:
    // 0x2c3484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3488:
    // 0x2c3488: 0x3e8a810  .word       0x03E8A810                   # mfhi        $s5 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3488u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2c348c:
    // 0x2c348c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c348cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2c3490u;
    return;
}

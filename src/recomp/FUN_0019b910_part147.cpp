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


void FUN_0019b910_part147(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e2db0u: goto label_1e2db0;
        case 0x1e2db4u: goto label_1e2db4;
        case 0x1e2db8u: goto label_1e2db8;
        case 0x1e2dbcu: goto label_1e2dbc;
        case 0x1e2dc0u: goto label_1e2dc0;
        case 0x1e2dc4u: goto label_1e2dc4;
        case 0x1e2dc8u: goto label_1e2dc8;
        case 0x1e2dccu: goto label_1e2dcc;
        case 0x1e2dd0u: goto label_1e2dd0;
        case 0x1e2dd4u: goto label_1e2dd4;
        case 0x1e2dd8u: goto label_1e2dd8;
        case 0x1e2ddcu: goto label_1e2ddc;
        case 0x1e2de0u: goto label_1e2de0;
        case 0x1e2de4u: goto label_1e2de4;
        case 0x1e2de8u: goto label_1e2de8;
        case 0x1e2decu: goto label_1e2dec;
        case 0x1e2df0u: goto label_1e2df0;
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2df8u: goto label_1e2df8;
        case 0x1e2dfcu: goto label_1e2dfc;
        case 0x1e2e00u: goto label_1e2e00;
        case 0x1e2e04u: goto label_1e2e04;
        case 0x1e2e08u: goto label_1e2e08;
        case 0x1e2e0cu: goto label_1e2e0c;
        case 0x1e2e10u: goto label_1e2e10;
        case 0x1e2e14u: goto label_1e2e14;
        case 0x1e2e18u: goto label_1e2e18;
        case 0x1e2e1cu: goto label_1e2e1c;
        case 0x1e2e20u: goto label_1e2e20;
        case 0x1e2e24u: goto label_1e2e24;
        case 0x1e2e28u: goto label_1e2e28;
        case 0x1e2e2cu: goto label_1e2e2c;
        case 0x1e2e30u: goto label_1e2e30;
        case 0x1e2e34u: goto label_1e2e34;
        case 0x1e2e38u: goto label_1e2e38;
        case 0x1e2e3cu: goto label_1e2e3c;
        case 0x1e2e40u: goto label_1e2e40;
        case 0x1e2e44u: goto label_1e2e44;
        case 0x1e2e48u: goto label_1e2e48;
        case 0x1e2e4cu: goto label_1e2e4c;
        case 0x1e2e50u: goto label_1e2e50;
        case 0x1e2e54u: goto label_1e2e54;
        case 0x1e2e58u: goto label_1e2e58;
        case 0x1e2e5cu: goto label_1e2e5c;
        case 0x1e2e60u: goto label_1e2e60;
        case 0x1e2e64u: goto label_1e2e64;
        case 0x1e2e68u: goto label_1e2e68;
        case 0x1e2e6cu: goto label_1e2e6c;
        case 0x1e2e70u: goto label_1e2e70;
        case 0x1e2e74u: goto label_1e2e74;
        case 0x1e2e78u: goto label_1e2e78;
        case 0x1e2e7cu: goto label_1e2e7c;
        case 0x1e2e80u: goto label_1e2e80;
        case 0x1e2e84u: goto label_1e2e84;
        case 0x1e2e88u: goto label_1e2e88;
        case 0x1e2e8cu: goto label_1e2e8c;
        case 0x1e2e90u: goto label_1e2e90;
        case 0x1e2e94u: goto label_1e2e94;
        case 0x1e2e98u: goto label_1e2e98;
        case 0x1e2e9cu: goto label_1e2e9c;
        case 0x1e2ea0u: goto label_1e2ea0;
        case 0x1e2ea4u: goto label_1e2ea4;
        case 0x1e2ea8u: goto label_1e2ea8;
        case 0x1e2eacu: goto label_1e2eac;
        case 0x1e2eb0u: goto label_1e2eb0;
        case 0x1e2eb4u: goto label_1e2eb4;
        case 0x1e2eb8u: goto label_1e2eb8;
        case 0x1e2ebcu: goto label_1e2ebc;
        case 0x1e2ec0u: goto label_1e2ec0;
        case 0x1e2ec4u: goto label_1e2ec4;
        case 0x1e2ec8u: goto label_1e2ec8;
        case 0x1e2eccu: goto label_1e2ecc;
        case 0x1e2ed0u: goto label_1e2ed0;
        case 0x1e2ed4u: goto label_1e2ed4;
        case 0x1e2ed8u: goto label_1e2ed8;
        case 0x1e2edcu: goto label_1e2edc;
        case 0x1e2ee0u: goto label_1e2ee0;
        case 0x1e2ee4u: goto label_1e2ee4;
        case 0x1e2ee8u: goto label_1e2ee8;
        case 0x1e2eecu: goto label_1e2eec;
        case 0x1e2ef0u: goto label_1e2ef0;
        case 0x1e2ef4u: goto label_1e2ef4;
        case 0x1e2ef8u: goto label_1e2ef8;
        case 0x1e2efcu: goto label_1e2efc;
        case 0x1e2f00u: goto label_1e2f00;
        case 0x1e2f04u: goto label_1e2f04;
        case 0x1e2f08u: goto label_1e2f08;
        case 0x1e2f0cu: goto label_1e2f0c;
        case 0x1e2f10u: goto label_1e2f10;
        case 0x1e2f14u: goto label_1e2f14;
        case 0x1e2f18u: goto label_1e2f18;
        case 0x1e2f1cu: goto label_1e2f1c;
        case 0x1e2f20u: goto label_1e2f20;
        case 0x1e2f24u: goto label_1e2f24;
        case 0x1e2f28u: goto label_1e2f28;
        case 0x1e2f2cu: goto label_1e2f2c;
        case 0x1e2f30u: goto label_1e2f30;
        case 0x1e2f34u: goto label_1e2f34;
        case 0x1e2f38u: goto label_1e2f38;
        case 0x1e2f3cu: goto label_1e2f3c;
        case 0x1e2f40u: goto label_1e2f40;
        case 0x1e2f44u: goto label_1e2f44;
        case 0x1e2f48u: goto label_1e2f48;
        case 0x1e2f4cu: goto label_1e2f4c;
        case 0x1e2f50u: goto label_1e2f50;
        case 0x1e2f54u: goto label_1e2f54;
        case 0x1e2f58u: goto label_1e2f58;
        case 0x1e2f5cu: goto label_1e2f5c;
        case 0x1e2f60u: goto label_1e2f60;
        case 0x1e2f64u: goto label_1e2f64;
        case 0x1e2f68u: goto label_1e2f68;
        case 0x1e2f6cu: goto label_1e2f6c;
        case 0x1e2f70u: goto label_1e2f70;
        case 0x1e2f74u: goto label_1e2f74;
        case 0x1e2f78u: goto label_1e2f78;
        case 0x1e2f7cu: goto label_1e2f7c;
        case 0x1e2f80u: goto label_1e2f80;
        case 0x1e2f84u: goto label_1e2f84;
        case 0x1e2f88u: goto label_1e2f88;
        case 0x1e2f8cu: goto label_1e2f8c;
        case 0x1e2f90u: goto label_1e2f90;
        case 0x1e2f94u: goto label_1e2f94;
        case 0x1e2f98u: goto label_1e2f98;
        case 0x1e2f9cu: goto label_1e2f9c;
        case 0x1e2fa0u: goto label_1e2fa0;
        case 0x1e2fa4u: goto label_1e2fa4;
        case 0x1e2fa8u: goto label_1e2fa8;
        case 0x1e2facu: goto label_1e2fac;
        case 0x1e2fb0u: goto label_1e2fb0;
        case 0x1e2fb4u: goto label_1e2fb4;
        case 0x1e2fb8u: goto label_1e2fb8;
        case 0x1e2fbcu: goto label_1e2fbc;
        case 0x1e2fc0u: goto label_1e2fc0;
        case 0x1e2fc4u: goto label_1e2fc4;
        case 0x1e2fc8u: goto label_1e2fc8;
        case 0x1e2fccu: goto label_1e2fcc;
        case 0x1e2fd0u: goto label_1e2fd0;
        case 0x1e2fd4u: goto label_1e2fd4;
        case 0x1e2fd8u: goto label_1e2fd8;
        case 0x1e2fdcu: goto label_1e2fdc;
        case 0x1e2fe0u: goto label_1e2fe0;
        case 0x1e2fe4u: goto label_1e2fe4;
        case 0x1e2fe8u: goto label_1e2fe8;
        case 0x1e2fecu: goto label_1e2fec;
        case 0x1e2ff0u: goto label_1e2ff0;
        case 0x1e2ff4u: goto label_1e2ff4;
        case 0x1e2ff8u: goto label_1e2ff8;
        case 0x1e2ffcu: goto label_1e2ffc;
        case 0x1e3000u: goto label_1e3000;
        case 0x1e3004u: goto label_1e3004;
        case 0x1e3008u: goto label_1e3008;
        case 0x1e300cu: goto label_1e300c;
        case 0x1e3010u: goto label_1e3010;
        case 0x1e3014u: goto label_1e3014;
        case 0x1e3018u: goto label_1e3018;
        case 0x1e301cu: goto label_1e301c;
        case 0x1e3020u: goto label_1e3020;
        case 0x1e3024u: goto label_1e3024;
        case 0x1e3028u: goto label_1e3028;
        case 0x1e302cu: goto label_1e302c;
        case 0x1e3030u: goto label_1e3030;
        case 0x1e3034u: goto label_1e3034;
        case 0x1e3038u: goto label_1e3038;
        case 0x1e303cu: goto label_1e303c;
        case 0x1e3040u: goto label_1e3040;
        case 0x1e3044u: goto label_1e3044;
        case 0x1e3048u: goto label_1e3048;
        case 0x1e304cu: goto label_1e304c;
        case 0x1e3050u: goto label_1e3050;
        case 0x1e3054u: goto label_1e3054;
        case 0x1e3058u: goto label_1e3058;
        case 0x1e305cu: goto label_1e305c;
        case 0x1e3060u: goto label_1e3060;
        case 0x1e3064u: goto label_1e3064;
        case 0x1e3068u: goto label_1e3068;
        case 0x1e306cu: goto label_1e306c;
        case 0x1e3070u: goto label_1e3070;
        case 0x1e3074u: goto label_1e3074;
        case 0x1e3078u: goto label_1e3078;
        case 0x1e307cu: goto label_1e307c;
        case 0x1e3080u: goto label_1e3080;
        case 0x1e3084u: goto label_1e3084;
        case 0x1e3088u: goto label_1e3088;
        case 0x1e308cu: goto label_1e308c;
        case 0x1e3090u: goto label_1e3090;
        case 0x1e3094u: goto label_1e3094;
        case 0x1e3098u: goto label_1e3098;
        case 0x1e309cu: goto label_1e309c;
        case 0x1e30a0u: goto label_1e30a0;
        case 0x1e30a4u: goto label_1e30a4;
        case 0x1e30a8u: goto label_1e30a8;
        case 0x1e30acu: goto label_1e30ac;
        case 0x1e30b0u: goto label_1e30b0;
        case 0x1e30b4u: goto label_1e30b4;
        case 0x1e30b8u: goto label_1e30b8;
        case 0x1e30bcu: goto label_1e30bc;
        case 0x1e30c0u: goto label_1e30c0;
        case 0x1e30c4u: goto label_1e30c4;
        case 0x1e30c8u: goto label_1e30c8;
        case 0x1e30ccu: goto label_1e30cc;
        case 0x1e30d0u: goto label_1e30d0;
        case 0x1e30d4u: goto label_1e30d4;
        case 0x1e30d8u: goto label_1e30d8;
        case 0x1e30dcu: goto label_1e30dc;
        case 0x1e30e0u: goto label_1e30e0;
        case 0x1e30e4u: goto label_1e30e4;
        case 0x1e30e8u: goto label_1e30e8;
        case 0x1e30ecu: goto label_1e30ec;
        case 0x1e30f0u: goto label_1e30f0;
        case 0x1e30f4u: goto label_1e30f4;
        case 0x1e30f8u: goto label_1e30f8;
        case 0x1e30fcu: goto label_1e30fc;
        case 0x1e3100u: goto label_1e3100;
        case 0x1e3104u: goto label_1e3104;
        case 0x1e3108u: goto label_1e3108;
        case 0x1e310cu: goto label_1e310c;
        case 0x1e3110u: goto label_1e3110;
        case 0x1e3114u: goto label_1e3114;
        case 0x1e3118u: goto label_1e3118;
        case 0x1e311cu: goto label_1e311c;
        case 0x1e3120u: goto label_1e3120;
        case 0x1e3124u: goto label_1e3124;
        case 0x1e3128u: goto label_1e3128;
        case 0x1e312cu: goto label_1e312c;
        case 0x1e3130u: goto label_1e3130;
        case 0x1e3134u: goto label_1e3134;
        case 0x1e3138u: goto label_1e3138;
        case 0x1e313cu: goto label_1e313c;
        case 0x1e3140u: goto label_1e3140;
        case 0x1e3144u: goto label_1e3144;
        case 0x1e3148u: goto label_1e3148;
        case 0x1e314cu: goto label_1e314c;
        case 0x1e3150u: goto label_1e3150;
        case 0x1e3154u: goto label_1e3154;
        case 0x1e3158u: goto label_1e3158;
        case 0x1e315cu: goto label_1e315c;
        case 0x1e3160u: goto label_1e3160;
        case 0x1e3164u: goto label_1e3164;
        case 0x1e3168u: goto label_1e3168;
        case 0x1e316cu: goto label_1e316c;
        case 0x1e3170u: goto label_1e3170;
        case 0x1e3174u: goto label_1e3174;
        case 0x1e3178u: goto label_1e3178;
        case 0x1e317cu: goto label_1e317c;
        case 0x1e3180u: goto label_1e3180;
        case 0x1e3184u: goto label_1e3184;
        case 0x1e3188u: goto label_1e3188;
        case 0x1e318cu: goto label_1e318c;
        case 0x1e3190u: goto label_1e3190;
        case 0x1e3194u: goto label_1e3194;
        case 0x1e3198u: goto label_1e3198;
        case 0x1e319cu: goto label_1e319c;
        case 0x1e31a0u: goto label_1e31a0;
        case 0x1e31a4u: goto label_1e31a4;
        case 0x1e31a8u: goto label_1e31a8;
        case 0x1e31acu: goto label_1e31ac;
        case 0x1e31b0u: goto label_1e31b0;
        case 0x1e31b4u: goto label_1e31b4;
        case 0x1e31b8u: goto label_1e31b8;
        case 0x1e31bcu: goto label_1e31bc;
        case 0x1e31c0u: goto label_1e31c0;
        case 0x1e31c4u: goto label_1e31c4;
        case 0x1e31c8u: goto label_1e31c8;
        case 0x1e31ccu: goto label_1e31cc;
        case 0x1e31d0u: goto label_1e31d0;
        case 0x1e31d4u: goto label_1e31d4;
        case 0x1e31d8u: goto label_1e31d8;
        case 0x1e31dcu: goto label_1e31dc;
        case 0x1e31e0u: goto label_1e31e0;
        case 0x1e31e4u: goto label_1e31e4;
        case 0x1e31e8u: goto label_1e31e8;
        case 0x1e31ecu: goto label_1e31ec;
        case 0x1e31f0u: goto label_1e31f0;
        case 0x1e31f4u: goto label_1e31f4;
        case 0x1e31f8u: goto label_1e31f8;
        case 0x1e31fcu: goto label_1e31fc;
        case 0x1e3200u: goto label_1e3200;
        case 0x1e3204u: goto label_1e3204;
        case 0x1e3208u: goto label_1e3208;
        case 0x1e320cu: goto label_1e320c;
        case 0x1e3210u: goto label_1e3210;
        case 0x1e3214u: goto label_1e3214;
        case 0x1e3218u: goto label_1e3218;
        case 0x1e321cu: goto label_1e321c;
        case 0x1e3220u: goto label_1e3220;
        case 0x1e3224u: goto label_1e3224;
        case 0x1e3228u: goto label_1e3228;
        case 0x1e322cu: goto label_1e322c;
        case 0x1e3230u: goto label_1e3230;
        case 0x1e3234u: goto label_1e3234;
        case 0x1e3238u: goto label_1e3238;
        case 0x1e323cu: goto label_1e323c;
        case 0x1e3240u: goto label_1e3240;
        case 0x1e3244u: goto label_1e3244;
        case 0x1e3248u: goto label_1e3248;
        case 0x1e324cu: goto label_1e324c;
        case 0x1e3250u: goto label_1e3250;
        case 0x1e3254u: goto label_1e3254;
        case 0x1e3258u: goto label_1e3258;
        case 0x1e325cu: goto label_1e325c;
        case 0x1e3260u: goto label_1e3260;
        case 0x1e3264u: goto label_1e3264;
        case 0x1e3268u: goto label_1e3268;
        case 0x1e326cu: goto label_1e326c;
        case 0x1e3270u: goto label_1e3270;
        case 0x1e3274u: goto label_1e3274;
        case 0x1e3278u: goto label_1e3278;
        case 0x1e327cu: goto label_1e327c;
        case 0x1e3280u: goto label_1e3280;
        case 0x1e3284u: goto label_1e3284;
        case 0x1e3288u: goto label_1e3288;
        case 0x1e328cu: goto label_1e328c;
        case 0x1e3290u: goto label_1e3290;
        case 0x1e3294u: goto label_1e3294;
        case 0x1e3298u: goto label_1e3298;
        case 0x1e329cu: goto label_1e329c;
        case 0x1e32a0u: goto label_1e32a0;
        case 0x1e32a4u: goto label_1e32a4;
        case 0x1e32a8u: goto label_1e32a8;
        case 0x1e32acu: goto label_1e32ac;
        case 0x1e32b0u: goto label_1e32b0;
        case 0x1e32b4u: goto label_1e32b4;
        case 0x1e32b8u: goto label_1e32b8;
        case 0x1e32bcu: goto label_1e32bc;
        case 0x1e32c0u: goto label_1e32c0;
        case 0x1e32c4u: goto label_1e32c4;
        case 0x1e32c8u: goto label_1e32c8;
        case 0x1e32ccu: goto label_1e32cc;
        case 0x1e32d0u: goto label_1e32d0;
        case 0x1e32d4u: goto label_1e32d4;
        case 0x1e32d8u: goto label_1e32d8;
        case 0x1e32dcu: goto label_1e32dc;
        case 0x1e32e0u: goto label_1e32e0;
        case 0x1e32e4u: goto label_1e32e4;
        case 0x1e32e8u: goto label_1e32e8;
        case 0x1e32ecu: goto label_1e32ec;
        case 0x1e32f0u: goto label_1e32f0;
        case 0x1e32f4u: goto label_1e32f4;
        case 0x1e32f8u: goto label_1e32f8;
        case 0x1e32fcu: goto label_1e32fc;
        case 0x1e3300u: goto label_1e3300;
        case 0x1e3304u: goto label_1e3304;
        case 0x1e3308u: goto label_1e3308;
        case 0x1e330cu: goto label_1e330c;
        case 0x1e3310u: goto label_1e3310;
        case 0x1e3314u: goto label_1e3314;
        case 0x1e3318u: goto label_1e3318;
        case 0x1e331cu: goto label_1e331c;
        case 0x1e3320u: goto label_1e3320;
        case 0x1e3324u: goto label_1e3324;
        case 0x1e3328u: goto label_1e3328;
        case 0x1e332cu: goto label_1e332c;
        case 0x1e3330u: goto label_1e3330;
        case 0x1e3334u: goto label_1e3334;
        case 0x1e3338u: goto label_1e3338;
        case 0x1e333cu: goto label_1e333c;
        case 0x1e3340u: goto label_1e3340;
        case 0x1e3344u: goto label_1e3344;
        case 0x1e3348u: goto label_1e3348;
        case 0x1e334cu: goto label_1e334c;
        case 0x1e3350u: goto label_1e3350;
        case 0x1e3354u: goto label_1e3354;
        case 0x1e3358u: goto label_1e3358;
        case 0x1e335cu: goto label_1e335c;
        case 0x1e3360u: goto label_1e3360;
        case 0x1e3364u: goto label_1e3364;
        case 0x1e3368u: goto label_1e3368;
        case 0x1e336cu: goto label_1e336c;
        case 0x1e3370u: goto label_1e3370;
        case 0x1e3374u: goto label_1e3374;
        case 0x1e3378u: goto label_1e3378;
        case 0x1e337cu: goto label_1e337c;
        case 0x1e3380u: goto label_1e3380;
        case 0x1e3384u: goto label_1e3384;
        case 0x1e3388u: goto label_1e3388;
        case 0x1e338cu: goto label_1e338c;
        case 0x1e3390u: goto label_1e3390;
        case 0x1e3394u: goto label_1e3394;
        case 0x1e3398u: goto label_1e3398;
        case 0x1e339cu: goto label_1e339c;
        case 0x1e33a0u: goto label_1e33a0;
        case 0x1e33a4u: goto label_1e33a4;
        case 0x1e33a8u: goto label_1e33a8;
        case 0x1e33acu: goto label_1e33ac;
        case 0x1e33b0u: goto label_1e33b0;
        case 0x1e33b4u: goto label_1e33b4;
        case 0x1e33b8u: goto label_1e33b8;
        case 0x1e33bcu: goto label_1e33bc;
        case 0x1e33c0u: goto label_1e33c0;
        case 0x1e33c4u: goto label_1e33c4;
        case 0x1e33c8u: goto label_1e33c8;
        case 0x1e33ccu: goto label_1e33cc;
        case 0x1e33d0u: goto label_1e33d0;
        case 0x1e33d4u: goto label_1e33d4;
        case 0x1e33d8u: goto label_1e33d8;
        case 0x1e33dcu: goto label_1e33dc;
        case 0x1e33e0u: goto label_1e33e0;
        case 0x1e33e4u: goto label_1e33e4;
        case 0x1e33e8u: goto label_1e33e8;
        case 0x1e33ecu: goto label_1e33ec;
        case 0x1e33f0u: goto label_1e33f0;
        case 0x1e33f4u: goto label_1e33f4;
        case 0x1e33f8u: goto label_1e33f8;
        case 0x1e33fcu: goto label_1e33fc;
        case 0x1e3400u: goto label_1e3400;
        case 0x1e3404u: goto label_1e3404;
        case 0x1e3408u: goto label_1e3408;
        case 0x1e340cu: goto label_1e340c;
        case 0x1e3410u: goto label_1e3410;
        case 0x1e3414u: goto label_1e3414;
        case 0x1e3418u: goto label_1e3418;
        case 0x1e341cu: goto label_1e341c;
        case 0x1e3420u: goto label_1e3420;
        case 0x1e3424u: goto label_1e3424;
        case 0x1e3428u: goto label_1e3428;
        case 0x1e342cu: goto label_1e342c;
        case 0x1e3430u: goto label_1e3430;
        case 0x1e3434u: goto label_1e3434;
        case 0x1e3438u: goto label_1e3438;
        case 0x1e343cu: goto label_1e343c;
        case 0x1e3440u: goto label_1e3440;
        case 0x1e3444u: goto label_1e3444;
        case 0x1e3448u: goto label_1e3448;
        case 0x1e344cu: goto label_1e344c;
        case 0x1e3450u: goto label_1e3450;
        case 0x1e3454u: goto label_1e3454;
        case 0x1e3458u: goto label_1e3458;
        case 0x1e345cu: goto label_1e345c;
        case 0x1e3460u: goto label_1e3460;
        case 0x1e3464u: goto label_1e3464;
        case 0x1e3468u: goto label_1e3468;
        case 0x1e346cu: goto label_1e346c;
        case 0x1e3470u: goto label_1e3470;
        case 0x1e3474u: goto label_1e3474;
        case 0x1e3478u: goto label_1e3478;
        case 0x1e347cu: goto label_1e347c;
        case 0x1e3480u: goto label_1e3480;
        case 0x1e3484u: goto label_1e3484;
        case 0x1e3488u: goto label_1e3488;
        case 0x1e348cu: goto label_1e348c;
        case 0x1e3490u: goto label_1e3490;
        case 0x1e3494u: goto label_1e3494;
        case 0x1e3498u: goto label_1e3498;
        case 0x1e349cu: goto label_1e349c;
        case 0x1e34a0u: goto label_1e34a0;
        case 0x1e34a4u: goto label_1e34a4;
        case 0x1e34a8u: goto label_1e34a8;
        case 0x1e34acu: goto label_1e34ac;
        case 0x1e34b0u: goto label_1e34b0;
        case 0x1e34b4u: goto label_1e34b4;
        case 0x1e34b8u: goto label_1e34b8;
        case 0x1e34bcu: goto label_1e34bc;
        case 0x1e34c0u: goto label_1e34c0;
        case 0x1e34c4u: goto label_1e34c4;
        case 0x1e34c8u: goto label_1e34c8;
        case 0x1e34ccu: goto label_1e34cc;
        case 0x1e34d0u: goto label_1e34d0;
        case 0x1e34d4u: goto label_1e34d4;
        case 0x1e34d8u: goto label_1e34d8;
        case 0x1e34dcu: goto label_1e34dc;
        case 0x1e34e0u: goto label_1e34e0;
        case 0x1e34e4u: goto label_1e34e4;
        case 0x1e34e8u: goto label_1e34e8;
        case 0x1e34ecu: goto label_1e34ec;
        case 0x1e34f0u: goto label_1e34f0;
        case 0x1e34f4u: goto label_1e34f4;
        case 0x1e34f8u: goto label_1e34f8;
        case 0x1e34fcu: goto label_1e34fc;
        case 0x1e3500u: goto label_1e3500;
        case 0x1e3504u: goto label_1e3504;
        case 0x1e3508u: goto label_1e3508;
        case 0x1e350cu: goto label_1e350c;
        case 0x1e3510u: goto label_1e3510;
        case 0x1e3514u: goto label_1e3514;
        case 0x1e3518u: goto label_1e3518;
        case 0x1e351cu: goto label_1e351c;
        case 0x1e3520u: goto label_1e3520;
        case 0x1e3524u: goto label_1e3524;
        case 0x1e3528u: goto label_1e3528;
        case 0x1e352cu: goto label_1e352c;
        case 0x1e3530u: goto label_1e3530;
        case 0x1e3534u: goto label_1e3534;
        case 0x1e3538u: goto label_1e3538;
        case 0x1e353cu: goto label_1e353c;
        case 0x1e3540u: goto label_1e3540;
        case 0x1e3544u: goto label_1e3544;
        case 0x1e3548u: goto label_1e3548;
        case 0x1e354cu: goto label_1e354c;
        case 0x1e3550u: goto label_1e3550;
        case 0x1e3554u: goto label_1e3554;
        case 0x1e3558u: goto label_1e3558;
        case 0x1e355cu: goto label_1e355c;
        case 0x1e3560u: goto label_1e3560;
        case 0x1e3564u: goto label_1e3564;
        case 0x1e3568u: goto label_1e3568;
        case 0x1e356cu: goto label_1e356c;
        case 0x1e3570u: goto label_1e3570;
        case 0x1e3574u: goto label_1e3574;
        case 0x1e3578u: goto label_1e3578;
        case 0x1e357cu: goto label_1e357c;
        default: return;
    }

label_1e2db0:
    // 0x1e2db0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2db4:
    // 0x1e2db4: 0x14c40048  bne         $a2, $a0, . + 4 + (0x48 << 2)
label_1e2db8:
    if (ctx->pc == 0x1E2DB8u) {
        ctx->pc = 0x1E2DBCu;
        goto label_1e2dbc;
    }
    ctx->pc = 0x1E2DB4u;
    {
        const bool branch_taken_0x1e2db4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e2db4) {
            ctx->pc = 0x1E2ED8u;
            goto label_1e2ed8;
        }
    }
    ctx->pc = 0x1E2DBCu;
label_1e2dbc:
    // 0x1e2dbc: 0x8f848d34  lw          $a0, -0x72CC($gp)
    ctx->pc = 0x1e2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2dc0:
    // 0x1e2dc0: 0x14930045  bne         $a0, $s3, . + 4 + (0x45 << 2)
label_1e2dc4:
    if (ctx->pc == 0x1E2DC4u) {
        ctx->pc = 0x1E2DC8u;
        goto label_1e2dc8;
    }
    ctx->pc = 0x1E2DC0u;
    {
        const bool branch_taken_0x1e2dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e2dc0) {
            ctx->pc = 0x1E2ED8u;
            goto label_1e2ed8;
        }
    }
    ctx->pc = 0x1E2DC8u;
label_1e2dc8:
    // 0x1e2dc8: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x1e2dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2dcc:
    // 0x1e2dcc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1e2dd0:
    if (ctx->pc == 0x1E2DD0u) {
        ctx->pc = 0x1E2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DCCu;
        // 0x1e2dd0: 0x3088000f  andi        $t0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DD4u;
        goto label_1e2dd4;
    }
    ctx->pc = 0x1E2DCCu;
    {
        const bool branch_taken_0x1e2dcc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DCCu;
        // 0x1e2dd0: 0x3088000f  andi        $t0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dcc) {
            ctx->pc = 0x1E2DE0u;
            goto label_1e2de0;
        }
    }
    ctx->pc = 0x1E2DD4u;
label_1e2dd4:
    // 0x1e2dd4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_1e2dd8:
    if (ctx->pc == 0x1E2DD8u) {
        ctx->pc = 0x1E2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DD4u;
        // 0x1e2dd8: 0x29010008  slti        $at, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DDCu;
        goto label_1e2ddc;
    }
    ctx->pc = 0x1E2DD4u;
    {
        const bool branch_taken_0x1e2dd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DD4u;
        // 0x1e2dd8: 0x29010008  slti        $at, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dd4) {
            ctx->pc = 0x1E2DE4u;
            goto label_1e2de4;
        }
    }
    ctx->pc = 0x1E2DDCu;
label_1e2ddc:
    // 0x1e2ddc: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
label_1e2de0:
    // 0x1e2de0: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x1e2de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e2de4:
    // 0x1e2de4: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1e2de8:
    if (ctx->pc == 0x1E2DE8u) {
        ctx->pc = 0x1E2DECu;
        goto label_1e2dec;
    }
    ctx->pc = 0x1E2DE4u;
    {
        const bool branch_taken_0x1e2de4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2de4) {
            ctx->pc = 0x1E2E5Cu;
            goto label_1e2e5c;
        }
    }
    ctx->pc = 0x1E2DECu;
label_1e2dec:
    // 0x1e2dec: 0x821c0  sll         $a0, $t0, 7
    ctx->pc = 0x1e2decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
label_1e2df0:
    // 0x1e2df0: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2df4:
    // 0x1e2df4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2df8:
    if (ctx->pc == 0x1E2DF8u) {
        ctx->pc = 0x1E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DF4u;
        // 0x1e2df8: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DFCu;
        goto label_1e2dfc;
    }
    ctx->pc = 0x1E2DF4u;
    {
        const bool branch_taken_0x1e2df4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DF4u;
        // 0x1e2df8: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2df4) {
            ctx->pc = 0x1E2E04u;
            goto label_1e2e04;
        }
    }
    ctx->pc = 0x1E2DFCu;
label_1e2dfc:
    // 0x1e2dfc: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2e00:
    // 0x1e2e00: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2e00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2e04:
    // 0x1e2e04: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x1e2e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1e2e08:
    // 0x1e2e08: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e2e0c:
    // 0x1e2e0c: 0xa0a600a8  sb          $a2, 0xA8($a1)
    ctx->pc = 0x1e2e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 6));
label_1e2e10:
    // 0x1e2e10: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x1e2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2e14:
    // 0x1e2e14: 0xa0a60088  sb          $a2, 0x88($a1)
    ctx->pc = 0x1e2e14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 6));
label_1e2e18:
    // 0x1e2e18: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1e2e18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e2e1c:
    // 0x1e2e1c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2e20:
    if (ctx->pc == 0x1E2E20u) {
        ctx->pc = 0x1E2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E1Cu;
        // 0x1e2e20: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E24u;
        goto label_1e2e24;
    }
    ctx->pc = 0x1E2E1Cu;
    {
        const bool branch_taken_0x1e2e1c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E1Cu;
        // 0x1e2e20: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e1c) {
            ctx->pc = 0x1E2E2Cu;
            goto label_1e2e2c;
        }
    }
    ctx->pc = 0x1E2E24u;
label_1e2e24:
    // 0x1e2e24: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2e28:
    // 0x1e2e28: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2e28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2e2c:
    // 0x1e2e2c: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1e2e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2e30:
    // 0x1e2e30: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e2e30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e2e34:
    // 0x1e2e34: 0xa0a700a9  sb          $a3, 0xA9($a1)
    ctx->pc = 0x1e2e34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 7));
label_1e2e38:
    // 0x1e2e38: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x1e2e38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
label_1e2e3c:
    // 0x1e2e3c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2e40:
    if (ctx->pc == 0x1E2E40u) {
        ctx->pc = 0x1E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E3Cu;
        // 0x1e2e40: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E44u;
        goto label_1e2e44;
    }
    ctx->pc = 0x1E2E3Cu;
    {
        const bool branch_taken_0x1e2e3c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E3Cu;
        // 0x1e2e40: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e3c) {
            ctx->pc = 0x1E2E4Cu;
            goto label_1e2e4c;
        }
    }
    ctx->pc = 0x1E2E44u;
label_1e2e44:
    // 0x1e2e44: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2e48:
    // 0x1e2e48: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2e48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2e4c:
    // 0x1e2e4c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e2e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2e50:
    // 0x1e2e50: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e2e50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e2e54:
    // 0x1e2e54: 0x10000026  b           . + 4 + (0x26 << 2)
label_1e2e58:
    if (ctx->pc == 0x1E2E58u) {
        ctx->pc = 0x1E2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E54u;
        // 0x1e2e58: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E5Cu;
        goto label_1e2e5c;
    }
    ctx->pc = 0x1E2E54u;
    {
        const bool branch_taken_0x1e2e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E54u;
        // 0x1e2e58: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e54) {
            ctx->pc = 0x1E2EF0u;
            goto label_1e2ef0;
        }
    }
    ctx->pc = 0x1E2E5Cu;
label_1e2e5c:
    // 0x1e2e5c: 0x0  nop
    ctx->pc = 0x1e2e5cu;
    // NOP
label_1e2e60:
    // 0x1e2e60: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e2e64:
    // 0x1e2e64: 0x884023  subu        $t0, $a0, $t0
    ctx->pc = 0x1e2e64u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2e68:
    // 0x1e2e68: 0x821c0  sll         $a0, $t0, 7
    ctx->pc = 0x1e2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
label_1e2e6c:
    // 0x1e2e6c: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x1e2e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2e70:
    // 0x1e2e70: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2e74:
    if (ctx->pc == 0x1E2E74u) {
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E78u;
        goto label_1e2e78;
    }
    ctx->pc = 0x1E2E70u;
    {
        const bool branch_taken_0x1e2e70 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e70) {
            ctx->pc = 0x1E2E80u;
            goto label_1e2e80;
        }
    }
    ctx->pc = 0x1E2E78u;
label_1e2e78:
    // 0x1e2e78: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2e7c:
    // 0x1e2e7c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2e7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2e80:
    // 0x1e2e80: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x1e2e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1e2e84:
    // 0x1e2e84: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x1e2e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e2e88:
    // 0x1e2e88: 0xa0a600a8  sb          $a2, 0xA8($a1)
    ctx->pc = 0x1e2e88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 6));
label_1e2e8c:
    // 0x1e2e8c: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x1e2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2e90:
    // 0x1e2e90: 0xa0a60088  sb          $a2, 0x88($a1)
    ctx->pc = 0x1e2e90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 6));
label_1e2e94:
    // 0x1e2e94: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1e2e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e2e98:
    // 0x1e2e98: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2e9c:
    if (ctx->pc == 0x1E2E9Cu) {
        ctx->pc = 0x1E2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E98u;
        // 0x1e2e9c: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2EA0u;
        goto label_1e2ea0;
    }
    ctx->pc = 0x1E2E98u;
    {
        const bool branch_taken_0x1e2e98 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E98u;
        // 0x1e2e9c: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e98) {
            ctx->pc = 0x1E2EA8u;
            goto label_1e2ea8;
        }
    }
    ctx->pc = 0x1E2EA0u;
label_1e2ea0:
    // 0x1e2ea0: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2ea4:
    // 0x1e2ea4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2ea4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2ea8:
    // 0x1e2ea8: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1e2ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2eac:
    // 0x1e2eac: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e2eacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e2eb0:
    // 0x1e2eb0: 0xa0a700a9  sb          $a3, 0xA9($a1)
    ctx->pc = 0x1e2eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 7));
label_1e2eb4:
    // 0x1e2eb4: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x1e2eb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
label_1e2eb8:
    // 0x1e2eb8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2ebc:
    if (ctx->pc == 0x1E2EBCu) {
        ctx->pc = 0x1E2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EB8u;
        // 0x1e2ebc: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2EC0u;
        goto label_1e2ec0;
    }
    ctx->pc = 0x1E2EB8u;
    {
        const bool branch_taken_0x1e2eb8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EB8u;
        // 0x1e2ebc: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2eb8) {
            ctx->pc = 0x1E2EC8u;
            goto label_1e2ec8;
        }
    }
    ctx->pc = 0x1E2EC0u;
label_1e2ec0:
    // 0x1e2ec0: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2ec4:
    // 0x1e2ec4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2ec4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2ec8:
    // 0x1e2ec8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e2ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2ecc:
    // 0x1e2ecc: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e2eccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e2ed0:
    // 0x1e2ed0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e2ed4:
    if (ctx->pc == 0x1E2ED4u) {
        ctx->pc = 0x1E2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ED0u;
        // 0x1e2ed4: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2ED8u;
        goto label_1e2ed8;
    }
    ctx->pc = 0x1E2ED0u;
    {
        const bool branch_taken_0x1e2ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ED0u;
        // 0x1e2ed4: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ed0) {
            ctx->pc = 0x1E2EF0u;
            goto label_1e2ef0;
        }
    }
    ctx->pc = 0x1E2ED8u;
label_1e2ed8:
    // 0x1e2ed8: 0xa0a000a8  sb          $zero, 0xA8($a1)
    ctx->pc = 0x1e2ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 0));
label_1e2edc:
    // 0x1e2edc: 0xa0a00088  sb          $zero, 0x88($a1)
    ctx->pc = 0x1e2edcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 0));
label_1e2ee0:
    // 0x1e2ee0: 0xa0a000a9  sb          $zero, 0xA9($a1)
    ctx->pc = 0x1e2ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 0));
label_1e2ee4:
    // 0x1e2ee4: 0xa0a00089  sb          $zero, 0x89($a1)
    ctx->pc = 0x1e2ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 0));
label_1e2ee8:
    // 0x1e2ee8: 0xa0a000aa  sb          $zero, 0xAA($a1)
    ctx->pc = 0x1e2ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 0));
label_1e2eec:
    // 0x1e2eec: 0xa0a0008a  sb          $zero, 0x8A($a1)
    ctx->pc = 0x1e2eecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 0));
label_1e2ef0:
    // 0x1e2ef0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e2ef4:
    // 0x1e2ef4: 0x248426a0  addiu       $a0, $a0, 0x26A0
    ctx->pc = 0x1e2ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9888));
label_1e2ef8:
    // 0x1e2ef8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e2ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e2efc:
    // 0x1e2efc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1e2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e2f00:
    // 0x1e2f00: 0x24080b88  addiu       $t0, $zero, 0xB88
    ctx->pc = 0x1e2f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2952));
label_1e2f04:
    // 0x1e2f04: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1e2f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2f08:
    // 0x1e2f08: 0x74940  sll         $t1, $a3, 5
    ctx->pc = 0x1e2f08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e2f0c:
    // 0x1e2f0c: 0xa4a60138  sh          $a2, 0x138($a1)
    ctx->pc = 0x1e2f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 312), (uint16_t)GPR_U32(ctx, 6));
label_1e2f10:
    // 0x1e2f10: 0x73a40  sll         $a3, $a3, 9
    ctx->pc = 0x1e2f10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
label_1e2f14:
    // 0x1e2f14: 0x25260020  addiu       $a2, $t1, 0x20
    ctx->pc = 0x1e2f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_1e2f18:
    // 0x1e2f18: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1e2f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1e2f1c:
    // 0x1e2f1c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1e2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1e2f20:
    // 0x1e2f20: 0xa4a7013a  sh          $a3, 0x13A($a1)
    ctx->pc = 0x1e2f20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 314), (uint16_t)GPR_U32(ctx, 7));
label_1e2f24:
    // 0x1e2f24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1e2f24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1e2f28:
    // 0x1e2f28: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x1e2f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1e2f2c:
    // 0x1e2f2c: 0xa4a80148  sh          $t0, 0x148($a1)
    ctx->pc = 0x1e2f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 328), (uint16_t)GPR_U32(ctx, 8));
label_1e2f30:
    // 0x1e2f30: 0x3484c00a  ori         $a0, $a0, 0xC00A
    ctx->pc = 0x1e2f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49162);
label_1e2f34:
    // 0x1e2f34: 0x93638  dsll        $a2, $t1, 24
    ctx->pc = 0x1e2f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 24);
label_1e2f38:
    // 0x1e2f38: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1e2f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1e2f3c:
    // 0x1e2f3c: 0xa4a7014a  sh          $a3, 0x14A($a1)
    ctx->pc = 0x1e2f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 330), (uint16_t)GPR_U32(ctx, 7));
label_1e2f40:
    // 0x1e2f40: 0x2524001f  addiu       $a0, $t1, 0x1F
    ctx->pc = 0x1e2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
label_1e2f44:
    // 0x1e2f44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e2f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e2f48:
    // 0x1e2f48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e2f48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1e2f4c:
    // 0x1e2f4c: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x1e2f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
label_1e2f50:
    // 0x1e2f50: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x1e2f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1e2f54:
    // 0x1e2f54: 0xfca40100  sd          $a0, 0x100($a1)
    ctx->pc = 0x1e2f54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 256), GPR_U64(ctx, 4));
label_1e2f58:
    // 0x1e2f58: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2f5c:
    // 0x1e2f5c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_1e2f60:
    if (ctx->pc == 0x1E2F60u) {
        ctx->pc = 0x1E2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F5Cu;
        // 0x1e2f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F64u;
        goto label_1e2f64;
    }
    ctx->pc = 0x1E2F5Cu;
    {
        const bool branch_taken_0x1e2f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F5Cu;
        // 0x1e2f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f5c) {
            ctx->pc = 0x1E2F90u;
            goto label_1e2f90;
        }
    }
    ctx->pc = 0x1E2F64u;
label_1e2f64:
    // 0x1e2f64: 0x8f868d38  lw          $a2, -0x72C8($gp)
    ctx->pc = 0x1e2f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2f68:
    // 0x1e2f68: 0x24040268  addiu       $a0, $zero, 0x268
    ctx->pc = 0x1e2f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
label_1e2f6c:
    // 0x1e2f6c: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x1e2f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1e2f70:
    // 0x1e2f70: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1e2f74:
    if (ctx->pc == 0x1E2F74u) {
        ctx->pc = 0x1E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F70u;
        // 0x1e2f74: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F78u;
        goto label_1e2f78;
    }
    ctx->pc = 0x1E2F70u;
    {
        const bool branch_taken_0x1e2f70 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F70u;
        // 0x1e2f74: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f70) {
            ctx->pc = 0x1E2F80u;
            goto label_1e2f80;
        }
    }
    ctx->pc = 0x1E2F78u;
label_1e2f78:
    // 0x1e2f78: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1e2f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1e2f7c:
    // 0x1e2f7c: 0x43103  sra         $a2, $a0, 4
    ctx->pc = 0x1e2f7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
label_1e2f80:
    // 0x1e2f80: 0x240402d0  addiu       $a0, $zero, 0x2D0
    ctx->pc = 0x1e2f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1e2f84:
    // 0x1e2f84: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2f88:
    if (ctx->pc == 0x1E2F88u) {
        ctx->pc = 0x1E2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F84u;
        // 0x1e2f88: 0x863823  subu        $a3, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F8Cu;
        goto label_1e2f8c;
    }
    ctx->pc = 0x1E2F84u;
    {
        const bool branch_taken_0x1e2f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F84u;
        // 0x1e2f88: 0x863823  subu        $a3, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f84) {
            ctx->pc = 0x1E2F90u;
            goto label_1e2f90;
        }
    }
    ctx->pc = 0x1E2F8Cu;
label_1e2f8c:
    // 0x1e2f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f90:
    // 0x1e2f90: 0x240401b0  addiu       $a0, $zero, 0x1B0
    ctx->pc = 0x1e2f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
label_1e2f94:
    // 0x1e2f94: 0x24060384  addiu       $a2, $zero, 0x384
    ctx->pc = 0x1e2f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e2f98:
    // 0x1e2f98: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1e2f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e2f9c:
    // 0x1e2f9c: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x1e2f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e2fa0:
    // 0x1e2fa0: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x1e2fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_1e2fa4:
    // 0x1e2fa4: 0x248400b8  addiu       $a0, $a0, 0xB8
    ctx->pc = 0x1e2fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
label_1e2fa8:
    // 0x1e2fa8: 0xa4a70140  sh          $a3, 0x140($a1)
    ctx->pc = 0x1e2fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 7));
label_1e2fac:
    // 0x1e2fac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e2facu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e2fb0:
    // 0x1e2fb0: 0xa4a20142  sh          $v0, 0x142($a1)
    ctx->pc = 0x1e2fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 322), (uint16_t)GPR_U32(ctx, 2));
label_1e2fb4:
    // 0x1e2fb4: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1e2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1e2fb8:
    // 0x1e2fb8: 0xaca60144  sw          $a2, 0x144($a1)
    ctx->pc = 0x1e2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 324), GPR_U32(ctx, 6));
label_1e2fbc:
    // 0x1e2fbc: 0xa4a40150  sh          $a0, 0x150($a1)
    ctx->pc = 0x1e2fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 336), (uint16_t)GPR_U32(ctx, 4));
label_1e2fc0:
    // 0x1e2fc0: 0xa4a30152  sh          $v1, 0x152($a1)
    ctx->pc = 0x1e2fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 338), (uint16_t)GPR_U32(ctx, 3));
label_1e2fc4:
    // 0x1e2fc4: 0xaca60154  sw          $a2, 0x154($a1)
    ctx->pc = 0x1e2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 6));
label_1e2fc8:
    // 0x1e2fc8: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2fcc:
    // 0x1e2fcc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1e2fd0:
    if (ctx->pc == 0x1E2FD0u) {
        ctx->pc = 0x1E2FD4u;
        goto label_1e2fd4;
    }
    ctx->pc = 0x1E2FCCu;
    {
        const bool branch_taken_0x1e2fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2fcc) {
            ctx->pc = 0x1E2FF4u;
            goto label_1e2ff4;
        }
    }
    ctx->pc = 0x1E2FD4u;
label_1e2fd4:
    // 0x1e2fd4: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2fd8:
    // 0x1e2fd8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e2fdc:
    // 0x1e2fdc: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
label_1e2fe0:
    if (ctx->pc == 0x1E2FE0u) {
        ctx->pc = 0x1E2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FDCu;
        // 0x1e2fe0: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2FE4u;
        goto label_1e2fe4;
    }
    ctx->pc = 0x1E2FDCu;
    {
        const bool branch_taken_0x1e2fdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FDCu;
        // 0x1e2fe0: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fdc) {
            ctx->pc = 0x1E302Cu;
            goto label_1e302c;
        }
    }
    ctx->pc = 0x1E2FE4u;
label_1e2fe4:
    // 0x1e2fe4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e2fe8:
    // 0x1e2fe8: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1e2fe8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1e2fec:
    // 0x1e2fec: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e2ff0:
    if (ctx->pc == 0x1E2FF0u) {
        ctx->pc = 0x1E2FF4u;
        goto label_1e2ff4;
    }
    ctx->pc = 0x1E2FECu;
    {
        const bool branch_taken_0x1e2fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2fec) {
            ctx->pc = 0x1E302Cu;
            goto label_1e302c;
        }
    }
    ctx->pc = 0x1E2FF4u;
label_1e2ff4:
    // 0x1e2ff4: 0x0  nop
    ctx->pc = 0x1e2ff4u;
    // NOP
label_1e2ff8:
    // 0x1e2ff8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e2ffc:
    // 0x1e2ffc: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_1e3000:
    if (ctx->pc == 0x1E3000u) {
        ctx->pc = 0x1E3004u;
        goto label_1e3004;
    }
    ctx->pc = 0x1E2FFCu;
    {
        const bool branch_taken_0x1e2ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2ffc) {
            ctx->pc = 0x1E3028u;
            goto label_1e3028;
        }
    }
    ctx->pc = 0x1E3004u;
label_1e3004:
    // 0x1e3004: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e3004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e3008:
    // 0x1e3008: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e3008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e300c:
    // 0x1e300c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1e3010:
    if (ctx->pc == 0x1E3010u) {
        ctx->pc = 0x1E3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E300Cu;
        // 0x1e3010: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3014u;
        goto label_1e3014;
    }
    ctx->pc = 0x1E300Cu;
    {
        const bool branch_taken_0x1e300c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E300Cu;
        // 0x1e3010: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e300c) {
            ctx->pc = 0x1E301Cu;
            goto label_1e301c;
        }
    }
    ctx->pc = 0x1E3014u;
label_1e3014:
    // 0x1e3014: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e3014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e3018:
    // 0x1e3018: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e3018u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e301c:
    // 0x1e301c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3020:
    // 0x1e3020: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3024:
    if (ctx->pc == 0x1E3024u) {
        ctx->pc = 0x1E3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3020u;
        // 0x1e3024: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3028u;
        goto label_1e3028;
    }
    ctx->pc = 0x1E3020u;
    {
        const bool branch_taken_0x1e3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3020u;
        // 0x1e3024: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3020) {
            ctx->pc = 0x1E302Cu;
            goto label_1e302c;
        }
    }
    ctx->pc = 0x1E3028u;
label_1e3028:
    // 0x1e3028: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e3028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e302c:
    // 0x1e302c: 0x0  nop
    ctx->pc = 0x1e302cu;
    // NOP
label_1e3030:
    // 0x1e3030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3034:
    // 0x1e3034: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1e3038:
    if (ctx->pc == 0x1E3038u) {
        ctx->pc = 0x1E303Cu;
        goto label_1e303c;
    }
    ctx->pc = 0x1E3034u;
    {
        const bool branch_taken_0x1e3034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3034) {
            ctx->pc = 0x1E3048u;
            goto label_1e3048;
        }
    }
    ctx->pc = 0x1E303Cu;
label_1e303c:
    // 0x1e303c: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x1e303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e3040:
    // 0x1e3040: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
label_1e3044:
    if (ctx->pc == 0x1E3044u) {
        ctx->pc = 0x1E3048u;
        goto label_1e3048;
    }
    ctx->pc = 0x1E3040u;
    {
        const bool branch_taken_0x1e3040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1e3040) {
            ctx->pc = 0x1E3060u;
            goto label_1e3060;
        }
    }
    ctx->pc = 0x1E3048u;
label_1e3048:
    // 0x1e3048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e304c:
    // 0x1e304c: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
label_1e3050:
    if (ctx->pc == 0x1E3050u) {
        ctx->pc = 0x1E3054u;
        goto label_1e3054;
    }
    ctx->pc = 0x1E304Cu;
    {
        const bool branch_taken_0x1e304c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e304c) {
            ctx->pc = 0x1E3080u;
            goto label_1e3080;
        }
    }
    ctx->pc = 0x1E3054u;
label_1e3054:
    // 0x1e3054: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x1e3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e3058:
    // 0x1e3058: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
label_1e305c:
    if (ctx->pc == 0x1E305Cu) {
        ctx->pc = 0x1E3060u;
        goto label_1e3060;
    }
    ctx->pc = 0x1E3058u;
    {
        const bool branch_taken_0x1e3058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e3058) {
            ctx->pc = 0x1E3080u;
            goto label_1e3080;
        }
    }
    ctx->pc = 0x1E3060u;
label_1e3060:
    // 0x1e3060: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3064:
    // 0x1e3064: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1e3064u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1e3068:
    // 0x1e3068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e306c:
    // 0x1e306c: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1e306cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1e3070:
    // 0x1e3070: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1e3070u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1e3074:
    // 0x1e3074: 0xa0a60133  sb          $a2, 0x133($a1)
    ctx->pc = 0x1e3074u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 6));
label_1e3078:
    // 0x1e3078: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e307c:
    if (ctx->pc == 0x1E307Cu) {
        ctx->pc = 0x1E307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3078u;
        // 0x1e307c: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3080u;
        goto label_1e3080;
    }
    ctx->pc = 0x1E3078u;
    {
        const bool branch_taken_0x1e3078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3078u;
        // 0x1e307c: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3078) {
            ctx->pc = 0x1E309Cu;
            goto label_1e309c;
        }
    }
    ctx->pc = 0x1E3080u;
label_1e3080:
    // 0x1e3080: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1e3080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e3084:
    // 0x1e3084: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1e3084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1e3088:
    // 0x1e3088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e308c:
    // 0x1e308c: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1e308cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1e3090:
    // 0x1e3090: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1e3090u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1e3094:
    // 0x1e3094: 0xa0a60133  sb          $a2, 0x133($a1)
    ctx->pc = 0x1e3094u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 6));
label_1e3098:
    // 0x1e3098: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x1e3098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
label_1e309c:
    // 0x1e309c: 0x0  nop
    ctx->pc = 0x1e309cu;
    // NOP
label_1e30a0:
    // 0x1e30a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e30a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e30a4:
    // 0x1e30a4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1e30a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1e30a8:
    // 0x1e30a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e30a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e30ac:
    // 0x1e30ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e30acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e30b0:
    // 0x1e30b0: 0xc066c72  jal         func_19B1C8
label_1e30b4:
    if (ctx->pc == 0x1E30B4u) {
        ctx->pc = 0x1E30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30B0u;
        // 0x1e30b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E30B8u;
        goto label_1e30b8;
    }
    ctx->pc = 0x1E30B0u;
    SET_GPR_U32(ctx, 31, 0x1E30B8u);
    ctx->pc = 0x1E30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30B0u;
    // 0x1e30b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E30B0u, 0x1E30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30B8u;
label_1e30b8:
    // 0x1e30b8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e30b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1e30bc:
    // 0x1e30bc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e30bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1e30c0:
    // 0x1e30c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e30c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e30c4:
    // 0x1e30c4: 0x0  nop
    ctx->pc = 0x1e30c4u;
    // NOP
label_1e30c8:
    // 0x1e30c8: 0x8f878d30  lw          $a3, -0x72D0($gp)
    ctx->pc = 0x1e30c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
label_1e30cc:
    // 0x1e30cc: 0x267182a  slt         $v1, $s3, $a3
    ctx->pc = 0x1e30ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e30d0:
    // 0x1e30d0: 0x1460febc  bnez        $v1, . + 4 + (-0x144 << 2)
label_1e30d4:
    if (ctx->pc == 0x1E30D4u) {
        ctx->pc = 0x1E30D8u;
        goto label_1e30d8;
    }
    ctx->pc = 0x1E30D0u;
    {
        const bool branch_taken_0x1e30d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e30d0) {
            ctx->pc = 0x1E2BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e2bc4; return; }
        }
    }
    ctx->pc = 0x1E30D8u;
label_1e30d8:
    // 0x1e30d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e30d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e30dc:
    // 0x1e30dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e30dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e30e0:
    // 0x1e30e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e30e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e30e4:
    // 0x1e30e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e30e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e30e8:
    // 0x1e30e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e30e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e30ec:
    // 0x1e30ec: 0x3e00008  jr          $ra
label_1e30f0:
    if (ctx->pc == 0x1E30F0u) {
        ctx->pc = 0x1E30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30ECu;
        // 0x1e30f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E30F4u;
        goto label_1e30f4;
    }
    ctx->pc = 0x1E30ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30ECu;
        // 0x1e30f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E30ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E30F4u;
label_1e30f4:
    // 0x1e30f4: 0x0  nop
    ctx->pc = 0x1e30f4u;
    // NOP
label_1e30f8:
    // 0x1e30f8: 0x0  nop
    ctx->pc = 0x1e30f8u;
    // NOP
label_1e30fc:
    // 0x1e30fc: 0x0  nop
    ctx->pc = 0x1e30fcu;
    // NOP
label_1e3100:
    // 0x1e3100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e3104:
    // 0x1e3104: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e3108:
    // 0x1e3108: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e3108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1e310c:
    // 0x1e310c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e3110:
    // 0x1e3110: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e3110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3114:
    // 0x1e3114: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e3114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e3118:
    // 0x1e3118: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e3118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e311c:
    // 0x1e311c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e311cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3120:
    // 0x1e3120: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e3120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e3124:
    // 0x1e3124: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e3124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e3128:
    // 0x1e3128: 0x27828d40  addiu       $v0, $gp, -0x72C0
    ctx->pc = 0x1e3128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937920));
label_1e312c:
    // 0x1e312c: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1e312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1e3130:
    // 0x1e3130: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e3130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e3134:
    // 0x1e3134: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1e3134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3138:
    // 0x1e3138: 0xc05e234  jal         func_1788D0
label_1e313c:
    if (ctx->pc == 0x1E313Cu) {
        ctx->pc = 0x1E313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3138u;
        // 0x1e313c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3140u;
        goto label_1e3140;
    }
    ctx->pc = 0x1E3138u;
    SET_GPR_U32(ctx, 31, 0x1E3140u);
    ctx->pc = 0x1E313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3138u;
    // 0x1e313c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E3138u, 0x1E3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3140u;
label_1e3140:
    // 0x1e3140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3144:
    // 0x1e3144: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3148:
    // 0x1e3148: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1e3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e314c:
    // 0x1e314c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e3150:
    // 0x1e3150: 0x232a021  addu        $s4, $s1, $s2
    ctx->pc = 0x1e3150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1e3154:
    // 0x1e3154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3158:
    // 0x1e3158: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e315c:
    // 0x1e315c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e3160:
    // 0x1e3160: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1e3160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e3164:
    // 0x1e3164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3168:
    // 0x1e3168: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e316c:
    // 0x1e316c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e3170:
    // 0x1e3170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3174:
    // 0x1e3174: 0xdc252a28  ld          $a1, 0x2A28($at)
    ctx->pc = 0x1e3174u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10792)));
label_1e3178:
    // 0x1e3178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e317c:
    // 0x1e317c: 0x240803b6  addiu       $t0, $zero, 0x3B6
    ctx->pc = 0x1e317cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
label_1e3180:
    // 0x1e3180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3184:
    // 0x1e3184: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e3184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3188:
    // 0x1e3188: 0xc05de30  jal         func_1778C0
label_1e318c:
    if (ctx->pc == 0x1E318Cu) {
        ctx->pc = 0x1E318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3188u;
        // 0x1e318c: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3190u;
        goto label_1e3190;
    }
    ctx->pc = 0x1E3188u;
    SET_GPR_U32(ctx, 31, 0x1E3190u);
    ctx->pc = 0x1E318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3188u;
    // 0x1e318c: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3188u, 0x1E3190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3190u;
label_1e3190:
    // 0x1e3190: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e3190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3194:
    // 0x1e3194: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e3194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1e3198:
    // 0x1e3198: 0xa2840080  sb          $a0, 0x80($s4)
    ctx->pc = 0x1e3198u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 4));
label_1e319c:
    // 0x1e319c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1e319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e31a0:
    // 0x1e31a0: 0xa2840081  sb          $a0, 0x81($s4)
    ctx->pc = 0x1e31a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 4));
label_1e31a4:
    // 0x1e31a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e31a8:
    // 0x1e31a8: 0xa2840082  sb          $a0, 0x82($s4)
    ctx->pc = 0x1e31a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 4));
label_1e31ac:
    // 0x1e31ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e31b0:
    // 0x1e31b0: 0xa2840083  sb          $a0, 0x83($s4)
    ctx->pc = 0x1e31b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 4));
label_1e31b4:
    // 0x1e31b4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e31b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e31b8:
    // 0x1e31b8: 0xae860084  sw          $a2, 0x84($s4)
    ctx->pc = 0x1e31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 6));
label_1e31bc:
    // 0x1e31bc: 0x26840470  addiu       $a0, $s4, 0x470
    ctx->pc = 0x1e31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1e31c0:
    // 0x1e31c0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x1e31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_1e31c4:
    // 0x1e31c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e31c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e31c8:
    // 0x1e31c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e31cc:
    // 0x1e31cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e31ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e31d0:
    // 0x1e31d0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e31d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e31d4:
    // 0x1e31d4: 0x240803b6  addiu       $t0, $zero, 0x3B6
    ctx->pc = 0x1e31d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
label_1e31d8:
    // 0x1e31d8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e31d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e31dc:
    // 0x1e31dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e31dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e31e0:
    // 0x1e31e0: 0xdc252a30  ld          $a1, 0x2A30($at)
    ctx->pc = 0x1e31e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10800)));
label_1e31e4:
    // 0x1e31e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e31e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e31e8:
    // 0x1e31e8: 0xc05de30  jal         func_1778C0
label_1e31ec:
    if (ctx->pc == 0x1E31ECu) {
        ctx->pc = 0x1E31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31E8u;
        // 0x1e31ec: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E31F0u;
        goto label_1e31f0;
    }
    ctx->pc = 0x1E31E8u;
    SET_GPR_U32(ctx, 31, 0x1E31F0u);
    ctx->pc = 0x1E31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E31E8u;
    // 0x1e31ec: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E31E8u, 0x1E31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E31F0u;
label_1e31f0:
    // 0x1e31f0: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1e31f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e31f4:
    // 0x1e31f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e31f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e31f8:
    // 0x1e31f8: 0xa28b04e0  sb          $t3, 0x4E0($s4)
    ctx->pc = 0x1e31f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1248), (uint8_t)GPR_U32(ctx, 11));
label_1e31fc:
    // 0x1e31fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e3200:
    // 0x1e3200: 0xa28b04e1  sb          $t3, 0x4E1($s4)
    ctx->pc = 0x1e3200u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1249), (uint8_t)GPR_U32(ctx, 11));
label_1e3204:
    // 0x1e3204: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1e3204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_1e3208:
    // 0x1e3208: 0xa28b04e2  sb          $t3, 0x4E2($s4)
    ctx->pc = 0x1e3208u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1250), (uint8_t)GPR_U32(ctx, 11));
label_1e320c:
    // 0x1e320c: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x1e320cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1e3210:
    // 0x1e3210: 0xa28b04e3  sb          $t3, 0x4E3($s4)
    ctx->pc = 0x1e3210u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1251), (uint8_t)GPR_U32(ctx, 11));
label_1e3214:
    // 0x1e3214: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_1e3218:
    if (ctx->pc == 0x1E3218u) {
        ctx->pc = 0x1E3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3214u;
        // 0x1e3218: 0xae8304e4  sw          $v1, 0x4E4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E321Cu;
        goto label_1e321c;
    }
    ctx->pc = 0x1E3214u;
    {
        const bool branch_taken_0x1e3214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3214u;
        // 0x1e3218: 0xae8304e4  sw          $v1, 0x4E4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3214) {
            ctx->pc = 0x1E3148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3148;
        }
    }
    ctx->pc = 0x1E321Cu;
label_1e321c:
    // 0x1e321c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1e321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e3220:
    // 0x1e3220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e3220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3224:
    // 0x1e3224: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e3224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e3228:
    // 0x1e3228: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e322c:
    // 0x1e322c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e322cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e3230:
    // 0x1e3230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3234:
    // 0x1e3234: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e3238:
    // 0x1e3238: 0x262408d0  addiu       $a0, $s1, 0x8D0
    ctx->pc = 0x1e3238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
label_1e323c:
    // 0x1e323c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e3240:
    // 0x1e3240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3244:
    // 0x1e3244: 0xdc252a38  ld          $a1, 0x2A38($at)
    ctx->pc = 0x1e3244u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10808)));
label_1e3248:
    // 0x1e3248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e324c:
    // 0x1e324c: 0x240803b6  addiu       $t0, $zero, 0x3B6
    ctx->pc = 0x1e324cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
label_1e3250:
    // 0x1e3250: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3254:
    // 0x1e3254: 0xc05de30  jal         func_1778C0
label_1e3258:
    if (ctx->pc == 0x1E3258u) {
        ctx->pc = 0x1E3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3254u;
        // 0x1e3258: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E325Cu;
        goto label_1e325c;
    }
    ctx->pc = 0x1E3254u;
    SET_GPR_U32(ctx, 31, 0x1E325Cu);
    ctx->pc = 0x1E3258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3254u;
    // 0x1e3258: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3254u, 0x1E325Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E325Cu;
label_1e325c:
    // 0x1e325c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e325cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3260:
    // 0x1e3260: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e3260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1e3264:
    // 0x1e3264: 0xa2250940  sb          $a1, 0x940($s1)
    ctx->pc = 0x1e3264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2368), (uint8_t)GPR_U32(ctx, 5));
label_1e3268:
    // 0x1e3268: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e3268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1e326c:
    // 0x1e326c: 0xa2250941  sb          $a1, 0x941($s1)
    ctx->pc = 0x1e326cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2369), (uint8_t)GPR_U32(ctx, 5));
label_1e3270:
    // 0x1e3270: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x1e3270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e3274:
    // 0x1e3274: 0xa2250942  sb          $a1, 0x942($s1)
    ctx->pc = 0x1e3274u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2370), (uint8_t)GPR_U32(ctx, 5));
label_1e3278:
    // 0x1e3278: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e3278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e327c:
    // 0x1e327c: 0xa2250943  sb          $a1, 0x943($s1)
    ctx->pc = 0x1e327cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2371), (uint8_t)GPR_U32(ctx, 5));
label_1e3280:
    // 0x1e3280: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
label_1e3284:
    if (ctx->pc == 0x1E3284u) {
        ctx->pc = 0x1E3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3280u;
        // 0x1e3284: 0xae240944  sw          $a0, 0x944($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2372), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3288u;
        goto label_1e3288;
    }
    ctx->pc = 0x1E3280u;
    {
        const bool branch_taken_0x1e3280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3280u;
        // 0x1e3284: 0xae240944  sw          $a0, 0x944($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2372), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3280) {
            ctx->pc = 0x1E3128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3128;
        }
    }
    ctx->pc = 0x1E3288u;
label_1e3288:
    // 0x1e3288: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e3288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e328c:
    // 0x1e328c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e328cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e3290:
    // 0x1e3290: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e3290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e3294:
    // 0x1e3294: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e3294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3298:
    // 0x1e3298: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e3298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e329c:
    // 0x1e329c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e329cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e32a0:
    // 0x1e32a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e32a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e32a4:
    // 0x1e32a4: 0x3e00008  jr          $ra
label_1e32a8:
    if (ctx->pc == 0x1E32A8u) {
        ctx->pc = 0x1E32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32A4u;
        // 0x1e32a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32ACu;
        goto label_1e32ac;
    }
    ctx->pc = 0x1E32A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32A4u;
        // 0x1e32a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E32ACu;
label_1e32ac:
    // 0x1e32ac: 0x0  nop
    ctx->pc = 0x1e32acu;
    // NOP
label_1e32b0:
    // 0x1e32b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e32b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e32b4:
    // 0x1e32b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e32b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e32b8:
    // 0x1e32b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e32bc:
    // 0x1e32bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e32bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e32c0:
    // 0x1e32c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e32c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e32c4:
    // 0x1e32c4: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e32c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e32c8:
    // 0x1e32c8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1e32cc:
    if (ctx->pc == 0x1E32CCu) {
        ctx->pc = 0x1E32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32C8u;
        // 0x1e32cc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32D0u;
        goto label_1e32d0;
    }
    ctx->pc = 0x1E32C8u;
    {
        const bool branch_taken_0x1e32c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E32CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32C8u;
        // 0x1e32cc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32c8) {
            ctx->pc = 0x1E32D8u;
            goto label_1e32d8;
        }
    }
    ctx->pc = 0x1E32D0u;
label_1e32d0:
    // 0x1e32d0: 0x1483009a  bne         $a0, $v1, . + 4 + (0x9A << 2)
label_1e32d4:
    if (ctx->pc == 0x1E32D4u) {
        ctx->pc = 0x1E32D8u;
        goto label_1e32d8;
    }
    ctx->pc = 0x1E32D0u;
    {
        const bool branch_taken_0x1e32d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e32d0) {
            ctx->pc = 0x1E353Cu;
            goto label_1e353c;
        }
    }
    ctx->pc = 0x1E32D8u;
label_1e32d8:
    // 0x1e32d8: 0x8f858d6c  lw          $a1, -0x7294($gp)
    ctx->pc = 0x1e32d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
label_1e32dc:
    // 0x1e32dc: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e32dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e32e0:
    // 0x1e32e0: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e32e4:
    // 0x1e32e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e32e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e32e8:
    // 0x1e32e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e32e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e32ec:
    // 0x1e32ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e32f0:
    if (ctx->pc == 0x1E32F0u) {
        ctx->pc = 0x1E32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32ECu;
        // 0x1e32f0: 0x248428a0  addiu       $a0, $a0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E32F4u;
        goto label_1e32f4;
    }
    ctx->pc = 0x1E32ECu;
    {
        const bool branch_taken_0x1e32ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32ECu;
        // 0x1e32f0: 0x248428a0  addiu       $a0, $a0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32ec) {
            ctx->pc = 0x1E3308u;
            goto label_1e3308;
        }
    }
    ctx->pc = 0x1E32F4u;
label_1e32f4:
    // 0x1e32f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e32f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e32f8:
    // 0x1e32f8: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
label_1e32fc:
    if (ctx->pc == 0x1E32FCu) {
        ctx->pc = 0x1E3300u;
        goto label_1e3300;
    }
    ctx->pc = 0x1E32F8u;
    {
        const bool branch_taken_0x1e32f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e32f8) {
            ctx->pc = 0x1E3314u;
            goto label_1e3314;
        }
    }
    ctx->pc = 0x1E3300u;
label_1e3300:
    // 0x1e3300: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1e3300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1e3304:
    // 0x1e3304: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e3304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e3308:
    // 0x1e3308: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x1e3308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e330c:
    // 0x1e330c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1e3310:
    if (ctx->pc == 0x1E3310u) {
        ctx->pc = 0x1E3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E330Cu;
        // 0x1e3310: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3314u;
        goto label_1e3314;
    }
    ctx->pc = 0x1E330Cu;
    {
        const bool branch_taken_0x1e330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E330Cu;
        // 0x1e3310: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e330c) {
            ctx->pc = 0x1E32F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e32f4;
        }
    }
    ctx->pc = 0x1E3314u;
label_1e3314:
    // 0x1e3314: 0x0  nop
    ctx->pc = 0x1e3314u;
    // NOP
label_1e3318:
    // 0x1e3318: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x1e3318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e331c:
    // 0x1e331c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e331cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3320:
    // 0x1e3320: 0x14c2000e  bne         $a2, $v0, . + 4 + (0xE << 2)
label_1e3324:
    if (ctx->pc == 0x1E3324u) {
        ctx->pc = 0x1E3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3320u;
        // 0x1e3324: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3328u;
        goto label_1e3328;
    }
    ctx->pc = 0x1E3320u;
    {
        const bool branch_taken_0x1e3320 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3320u;
        // 0x1e3324: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3320) {
            ctx->pc = 0x1E335Cu;
            goto label_1e335c;
        }
    }
    ctx->pc = 0x1E3328u;
label_1e3328:
    // 0x1e3328: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e3328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e332c:
    // 0x1e332c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1e332cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1e3330:
    // 0x1e3330: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x1e3330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
label_1e3334:
    // 0x1e3334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3338:
    // 0x1e3338: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e333c:
    // 0x1e333c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e3340:
    // 0x1e3340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e3340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e3344:
    // 0x1e3344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3348:
    // 0x1e3348: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e3348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e334c:
    // 0x1e334c: 0xc056fc8  jal         func_15BF20
label_1e3350:
    if (ctx->pc == 0x1E3350u) {
        ctx->pc = 0x1E3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E334Cu;
        // 0x1e3350: 0x8f848d6c  lw          $a0, -0x7294($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3354u;
        goto label_1e3354;
    }
    ctx->pc = 0x1E334Cu;
    SET_GPR_U32(ctx, 31, 0x1E3354u);
    ctx->pc = 0x1E3350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E334Cu;
    // 0x1e3350: 0x8f848d6c  lw          $a0, -0x7294($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x1E334Cu, 0x1E3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3354u;
label_1e3354:
    // 0x1e3354: 0x1000000d  b           . + 4 + (0xD << 2)
label_1e3358:
    if (ctx->pc == 0x1E3358u) {
        ctx->pc = 0x1E335Cu;
        goto label_1e335c;
    }
    ctx->pc = 0x1E3354u;
    {
        const bool branch_taken_0x1e3354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3354) {
            ctx->pc = 0x1E338Cu;
            goto label_1e338c;
        }
    }
    ctx->pc = 0x1E335Cu;
label_1e335c:
    // 0x1e335c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e3360:
    // 0x1e3360: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1e3360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1e3364:
    // 0x1e3364: 0x244226d0  addiu       $v0, $v0, 0x26D0
    ctx->pc = 0x1e3364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9936));
label_1e3368:
    // 0x1e3368: 0x8f838d34  lw          $v1, -0x72CC($gp)
    ctx->pc = 0x1e3368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e336c:
    // 0x1e336c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1e336cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e3370:
    // 0x1e3370: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e3370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e3374:
    // 0x1e3374: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e3374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e3378:
    // 0x1e3378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e3378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e337c:
    // 0x1e337c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3380:
    // 0x1e3380: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e3380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3384:
    // 0x1e3384: 0xc056fc8  jal         func_15BF20
label_1e3388:
    if (ctx->pc == 0x1E3388u) {
        ctx->pc = 0x1E3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3384u;
        // 0x1e3388: 0x8f848d6c  lw          $a0, -0x7294($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E338Cu;
        goto label_1e338c;
    }
    ctx->pc = 0x1E3384u;
    SET_GPR_U32(ctx, 31, 0x1E338Cu);
    ctx->pc = 0x1E3388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3384u;
    // 0x1e3388: 0x8f848d6c  lw          $a0, -0x7294($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x1E3384u, 0x1E338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E338Cu;
label_1e338c:
    // 0x1e338c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e338cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1e3390:
    // 0x1e3390: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e3390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e3394:
    // 0x1e3394: 0x246354c0  addiu       $v1, $v1, 0x54C0
    ctx->pc = 0x1e3394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21696));
label_1e3398:
    // 0x1e3398: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1e3398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e339c:
    // 0x1e339c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e33a0:
    // 0x1e33a0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e33a4:
    // 0x1e33a4: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x1e33a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e33a8:
    // 0x1e33a8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e33a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e33ac:
    // 0x1e33ac: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x1e33acu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e33b0:
    // 0x1e33b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e33b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e33b4:
    // 0x1e33b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e33b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e33b8:
    // 0x1e33b8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e33b8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e33bc:
    // 0x1e33bc: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1e33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1e33c0:
    // 0x1e33c0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1e33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e33c4:
    // 0x1e33c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e33c8:
    // 0x1e33c8: 0x27828d40  addiu       $v0, $gp, -0x72C0
    ctx->pc = 0x1e33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937920));
label_1e33cc:
    // 0x1e33cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e33d0:
    // 0x1e33d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e33d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e33d4:
    // 0x1e33d4: 0x0  nop
    ctx->pc = 0x1e33d4u;
    // NOP
label_1e33d8:
    // 0x1e33d8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1e33d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e33dc:
    // 0x1e33dc: 0x240701c8  addiu       $a3, $zero, 0x1C8
    ctx->pc = 0x1e33dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 456));
label_1e33e0:
    // 0x1e33e0: 0x24060188  addiu       $a2, $zero, 0x188
    ctx->pc = 0x1e33e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_1e33e4:
    // 0x1e33e4: 0x340384c0  ori         $v1, $zero, 0x84C0
    ctx->pc = 0x1e33e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33984);
label_1e33e8:
    // 0x1e33e8: 0x34028580  ori         $v0, $zero, 0x8580
    ctx->pc = 0x1e33e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34176);
label_1e33ec:
    // 0x1e33ec: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e33ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e33f0:
    // 0x1e33f0: 0xa96821  addu        $t5, $a1, $t1
    ctx->pc = 0x1e33f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1e33f4:
    // 0x1e33f4: 0xdc2e2a28  ld          $t6, 0x2A28($at)
    ctx->pc = 0x1e33f4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 1), 10792)));
label_1e33f8:
    // 0x1e33f8: 0x119082a  slt         $at, $t0, $t9
    ctx->pc = 0x1e33f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_1e33fc:
    // 0x1e33fc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e3400:
    if (ctx->pc == 0x1E3400u) {
        ctx->pc = 0x1E3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33FCu;
        // 0x1e3400: 0xfdae0070  sd          $t6, 0x70($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 112), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3404u;
        goto label_1e3404;
    }
    ctx->pc = 0x1E33FCu;
    {
        const bool branch_taken_0x1e33fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E33FCu;
        // 0x1e3400: 0xfdae0070  sd          $t6, 0x70($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 112), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33fc) {
            ctx->pc = 0x1E340Cu;
            goto label_1e340c;
        }
    }
    ctx->pc = 0x1E3404u;
label_1e3404:
    // 0x1e3404: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3408:
    if (ctx->pc == 0x1E3408u) {
        ctx->pc = 0x1E3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3404u;
        // 0x1e3408: 0x240e0080  addiu       $t6, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E340Cu;
        goto label_1e340c;
    }
    ctx->pc = 0x1E3404u;
    {
        const bool branch_taken_0x1e3404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3404u;
        // 0x1e3408: 0x240e0080  addiu       $t6, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3404) {
            ctx->pc = 0x1E3410u;
            goto label_1e3410;
        }
    }
    ctx->pc = 0x1E340Cu;
label_1e340c:
    // 0x1e340c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e340cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3410:
    // 0x1e3410: 0xa1ae0083  sb          $t6, 0x83($t5)
    ctx->pc = 0x1e3410u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 131), (uint8_t)GPR_U32(ctx, 14));
label_1e3414:
    // 0x1e3414: 0x257001e4  addiu       $s0, $t3, 0x1E4
    ctx->pc = 0x1e3414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 484));
label_1e3418:
    // 0x1e3418: 0xa5aa0088  sh          $t2, 0x88($t5)
    ctx->pc = 0x1e3418u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 136), (uint16_t)GPR_U32(ctx, 10));
label_1e341c:
    // 0x1e341c: 0x256e01c8  addiu       $t6, $t3, 0x1C8
    ctx->pc = 0x1e341cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 456));
label_1e3420:
    // 0x1e3420: 0xa5aa008a  sh          $t2, 0x8A($t5)
    ctx->pc = 0x1e3420u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 138), (uint16_t)GPR_U32(ctx, 10));
label_1e3424:
    // 0x1e3424: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1e3424u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1e3428:
    // 0x1e3428: 0xa5a70098  sh          $a3, 0x98($t5)
    ctx->pc = 0x1e3428u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 152), (uint16_t)GPR_U32(ctx, 7));
label_1e342c:
    // 0x1e342c: 0x25cf6c00  addiu       $t7, $t6, 0x6C00
    ctx->pc = 0x1e342cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
label_1e3430:
    // 0x1e3430: 0xa5a6009a  sh          $a2, 0x9A($t5)
    ctx->pc = 0x1e3430u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 154), (uint16_t)GPR_U32(ctx, 6));
label_1e3434:
    // 0x1e3434: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1e3434u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1e3438:
    // 0x1e3438: 0xa5af0090  sh          $t7, 0x90($t5)
    ctx->pc = 0x1e3438u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 15));
label_1e343c:
    // 0x1e343c: 0x272e03b6  addiu       $t6, $t9, 0x3B6
    ctx->pc = 0x1e343cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 25), 950));
label_1e3440:
    // 0x1e3440: 0xa5a30092  sh          $v1, 0x92($t5)
    ctx->pc = 0x1e3440u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 146), (uint16_t)GPR_U32(ctx, 3));
label_1e3444:
    // 0x1e3444: 0x26186c00  addiu       $t8, $s0, 0x6C00
    ctx->pc = 0x1e3444u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
label_1e3448:
    // 0x1e3448: 0xadae0094  sw          $t6, 0x94($t5)
    ctx->pc = 0x1e3448u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 148), GPR_U32(ctx, 14));
label_1e344c:
    // 0x1e344c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e344cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e3450:
    // 0x1e3450: 0xa5b800a0  sh          $t8, 0xA0($t5)
    ctx->pc = 0x1e3450u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 160), (uint16_t)GPR_U32(ctx, 24));
label_1e3454:
    // 0x1e3454: 0xa5a200a2  sh          $v0, 0xA2($t5)
    ctx->pc = 0x1e3454u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 162), (uint16_t)GPR_U32(ctx, 2));
label_1e3458:
    // 0x1e3458: 0xadae00a4  sw          $t6, 0xA4($t5)
    ctx->pc = 0x1e3458u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 164), GPR_U32(ctx, 14));
label_1e345c:
    // 0x1e345c: 0xdc302a30  ld          $s0, 0x2A30($at)
    ctx->pc = 0x1e345cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 10800)));
label_1e3460:
    // 0x1e3460: 0x119082a  slt         $at, $t0, $t9
    ctx->pc = 0x1e3460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_1e3464:
    // 0x1e3464: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e3468:
    if (ctx->pc == 0x1E3468u) {
        ctx->pc = 0x1E3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3464u;
        // 0x1e3468: 0xfdb004d0  sd          $s0, 0x4D0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 1232), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E346Cu;
        goto label_1e346c;
    }
    ctx->pc = 0x1E3464u;
    {
        const bool branch_taken_0x1e3464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3464u;
        // 0x1e3468: 0xfdb004d0  sd          $s0, 0x4D0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 1232), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3464) {
            ctx->pc = 0x1E3474u;
            goto label_1e3474;
        }
    }
    ctx->pc = 0x1E346Cu;
label_1e346c:
    // 0x1e346c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3470:
    if (ctx->pc == 0x1E3470u) {
        ctx->pc = 0x1E3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E346Cu;
        // 0x1e3470: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3474u;
        goto label_1e3474;
    }
    ctx->pc = 0x1E346Cu;
    {
        const bool branch_taken_0x1e346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E346Cu;
        // 0x1e3470: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e346c) {
            ctx->pc = 0x1E3478u;
            goto label_1e3478;
        }
    }
    ctx->pc = 0x1E3474u;
label_1e3474:
    // 0x1e3474: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1e3474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3478:
    // 0x1e3478: 0xa1b004e3  sb          $s0, 0x4E3($t5)
    ctx->pc = 0x1e3478u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1251), (uint8_t)GPR_U32(ctx, 16));
label_1e347c:
    // 0x1e347c: 0x27310001  addiu       $s1, $t9, 0x1
    ctx->pc = 0x1e347cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1e3480:
    // 0x1e3480: 0xc8100  sll         $s0, $t4, 4
    ctx->pc = 0x1e3480u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1e3484:
    // 0x1e3484: 0xa5aa04e8  sh          $t2, 0x4E8($t5)
    ctx->pc = 0x1e3484u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1256), (uint16_t)GPR_U32(ctx, 10));
label_1e3488:
    // 0x1e3488: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e3488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1e348c:
    // 0x1e348c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1e348cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1e3490:
    // 0x1e3490: 0xa5b004ea  sh          $s0, 0x4EA($t5)
    ctx->pc = 0x1e3490u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1258), (uint16_t)GPR_U32(ctx, 16));
label_1e3494:
    // 0x1e3494: 0x252900a0  addiu       $t1, $t1, 0xA0
    ctx->pc = 0x1e3494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 160));
label_1e3498:
    // 0x1e3498: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x1e3498u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1e349c:
    // 0x1e349c: 0xa5a704f8  sh          $a3, 0x4F8($t5)
    ctx->pc = 0x1e349cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1272), (uint16_t)GPR_U32(ctx, 7));
label_1e34a0:
    // 0x1e34a0: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1e34a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1e34a4:
    // 0x1e34a4: 0x256b0016  addiu       $t3, $t3, 0x16
    ctx->pc = 0x1e34a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 22));
label_1e34a8:
    // 0x1e34a8: 0x1081c0  sll         $s0, $s0, 7
    ctx->pc = 0x1e34a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_1e34ac:
    // 0x1e34ac: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x1e34acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
label_1e34b0:
    // 0x1e34b0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e34b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1e34b4:
    // 0x1e34b4: 0xa5b004fa  sh          $s0, 0x4FA($t5)
    ctx->pc = 0x1e34b4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1274), (uint16_t)GPR_U32(ctx, 16));
label_1e34b8:
    // 0x1e34b8: 0xa5af04f0  sh          $t7, 0x4F0($t5)
    ctx->pc = 0x1e34b8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1264), (uint16_t)GPR_U32(ctx, 15));
label_1e34bc:
    // 0x1e34bc: 0xa5a304f2  sh          $v1, 0x4F2($t5)
    ctx->pc = 0x1e34bcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1266), (uint16_t)GPR_U32(ctx, 3));
label_1e34c0:
    // 0x1e34c0: 0x2b2f0007  slti        $t7, $t9, 0x7
    ctx->pc = 0x1e34c0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)7) ? 1 : 0);
label_1e34c4:
    // 0x1e34c4: 0xadae04f4  sw          $t6, 0x4F4($t5)
    ctx->pc = 0x1e34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1268), GPR_U32(ctx, 14));
label_1e34c8:
    // 0x1e34c8: 0xa5b80500  sh          $t8, 0x500($t5)
    ctx->pc = 0x1e34c8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1280), (uint16_t)GPR_U32(ctx, 24));
label_1e34cc:
    // 0x1e34cc: 0xa5a20502  sh          $v0, 0x502($t5)
    ctx->pc = 0x1e34ccu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1282), (uint16_t)GPR_U32(ctx, 2));
label_1e34d0:
    // 0x1e34d0: 0x15e0ffc6  bnez        $t7, . + 4 + (-0x3A << 2)
label_1e34d4:
    if (ctx->pc == 0x1E34D4u) {
        ctx->pc = 0x1E34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D0u;
        // 0x1e34d4: 0xadae0504  sw          $t6, 0x504($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 1284), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E34D8u;
        goto label_1e34d8;
    }
    ctx->pc = 0x1E34D0u;
    {
        const bool branch_taken_0x1e34d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E34D0u;
        // 0x1e34d4: 0xadae0504  sw          $t6, 0x504($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 1284), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e34d0) {
            ctx->pc = 0x1E33ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e33ec;
        }
    }
    ctx->pc = 0x1E34D8u;
label_1e34d8:
    // 0x1e34d8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e34d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e34dc:
    // 0x1e34dc: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x1e34dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e34e0:
    // 0x1e34e0: 0xdc392a38  ld          $t9, 0x2A38($at)
    ctx->pc = 0x1e34e0u;
    SET_GPR_U64(ctx, 25, READ64(ADD32(GPR_U32(ctx, 1), 10808)));
label_1e34e4:
    // 0x1e34e4: 0x240f0808  addiu       $t7, $zero, 0x808
    ctx->pc = 0x1e34e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
label_1e34e8:
    // 0x1e34e8: 0x240e0188  addiu       $t6, $zero, 0x188
    ctx->pc = 0x1e34e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_1e34ec:
    // 0x1e34ec: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1e34ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1e34f0:
    // 0x1e34f0: 0x240c03b6  addiu       $t4, $zero, 0x3B6
    ctx->pc = 0x1e34f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
label_1e34f4:
    // 0x1e34f4: 0x340b8800  ori         $t3, $zero, 0x8800
    ctx->pc = 0x1e34f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
label_1e34f8:
    // 0x1e34f8: 0x24060097  addiu       $a2, $zero, 0x97
    ctx->pc = 0x1e34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
label_1e34fc:
    // 0x1e34fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e34fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3500:
    // 0x1e3500: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e3500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3504:
    // 0x1e3504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3508:
    // 0x1e3508: 0xfcb90930  sd          $t9, 0x930($a1)
    ctx->pc = 0x1e3508u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 2352), GPR_U64(ctx, 25));
label_1e350c:
    // 0x1e350c: 0xa0b80943  sb          $t8, 0x943($a1)
    ctx->pc = 0x1e350cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2371), (uint8_t)GPR_U32(ctx, 24));
label_1e3510:
    // 0x1e3510: 0xa4aa0948  sh          $t2, 0x948($a1)
    ctx->pc = 0x1e3510u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2376), (uint16_t)GPR_U32(ctx, 10));
label_1e3514:
    // 0x1e3514: 0xa4aa094a  sh          $t2, 0x94A($a1)
    ctx->pc = 0x1e3514u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2378), (uint16_t)GPR_U32(ctx, 10));
label_1e3518:
    // 0x1e3518: 0xa4af0958  sh          $t7, 0x958($a1)
    ctx->pc = 0x1e3518u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2392), (uint16_t)GPR_U32(ctx, 15));
label_1e351c:
    // 0x1e351c: 0xa4ae095a  sh          $t6, 0x95A($a1)
    ctx->pc = 0x1e351cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2394), (uint16_t)GPR_U32(ctx, 14));
label_1e3520:
    // 0x1e3520: 0xa4ad0950  sh          $t5, 0x950($a1)
    ctx->pc = 0x1e3520u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2384), (uint16_t)GPR_U32(ctx, 13));
label_1e3524:
    // 0x1e3524: 0xa4a30952  sh          $v1, 0x952($a1)
    ctx->pc = 0x1e3524u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2386), (uint16_t)GPR_U32(ctx, 3));
label_1e3528:
    // 0x1e3528: 0xacac0954  sw          $t4, 0x954($a1)
    ctx->pc = 0x1e3528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2388), GPR_U32(ctx, 12));
label_1e352c:
    // 0x1e352c: 0xa4ab0960  sh          $t3, 0x960($a1)
    ctx->pc = 0x1e352cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2400), (uint16_t)GPR_U32(ctx, 11));
label_1e3530:
    // 0x1e3530: 0xa4a20962  sh          $v0, 0x962($a1)
    ctx->pc = 0x1e3530u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2402), (uint16_t)GPR_U32(ctx, 2));
label_1e3534:
    // 0x1e3534: 0xc066c72  jal         func_19B1C8
label_1e3538:
    if (ctx->pc == 0x1E3538u) {
        ctx->pc = 0x1E3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3534u;
        // 0x1e3538: 0xacac0964  sw          $t4, 0x964($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2404), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E353Cu;
        goto label_1e353c;
    }
    ctx->pc = 0x1E3534u;
    SET_GPR_U32(ctx, 31, 0x1E353Cu);
    ctx->pc = 0x1E3538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3534u;
    // 0x1e3538: 0xacac0964  sw          $t4, 0x964($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 2404), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E3534u, 0x1E353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E353Cu;
label_1e353c:
    // 0x1e353c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e353cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3540:
    // 0x1e3540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3544:
    // 0x1e3544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3548:
    // 0x1e3548: 0x3e00008  jr          $ra
label_1e354c:
    if (ctx->pc == 0x1E354Cu) {
        ctx->pc = 0x1E354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3548u;
        // 0x1e354c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3550u;
        goto label_1e3550;
    }
    ctx->pc = 0x1E3548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3548u;
        // 0x1e354c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3550u;
label_1e3550:
    // 0x1e3550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e3554:
    // 0x1e3554: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3558:
    // 0x1e3558: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e3558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e355c:
    // 0x1e355c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e355cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1e3560:
    // 0x1e3560: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e3560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e3564:
    // 0x1e3564: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e3564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e3568:
    // 0x1e3568: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e3568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e356c:
    // 0x1e356c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e3570:
    // 0x1e3570: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e3570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e3574:
    // 0x1e3574: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e3574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e3578:
    // 0x1e3578: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e357c:
    if (ctx->pc == 0x1E357Cu) {
        ctx->pc = 0x1E357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3578u;
        // 0x1e357c: 0xaf808d50  sw          $zero, -0x72B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3580u;
        { ctx->pc = 0x1e3580; return; }
    }
    ctx->pc = 0x1E3578u;
    {
        const bool branch_taken_0x1e3578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3578u;
        // 0x1e357c: 0xaf808d50  sw          $zero, -0x72B0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3578) {
            ctx->pc = 0x1E3588u;
            { ctx->pc = 0x1e3588; return; }
        }
    }
    ctx->pc = 0x1E3580u;
    ctx->pc = 0x1e3580u;
    return;
}

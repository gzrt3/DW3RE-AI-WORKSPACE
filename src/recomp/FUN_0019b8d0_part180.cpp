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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1f3428u: goto label_1f3428;
        case 0x1f342cu: goto label_1f342c;
        case 0x1f3430u: goto label_1f3430;
        case 0x1f3434u: goto label_1f3434;
        case 0x1f3438u: goto label_1f3438;
        case 0x1f343cu: goto label_1f343c;
        case 0x1f3440u: goto label_1f3440;
        case 0x1f3444u: goto label_1f3444;
        case 0x1f3448u: goto label_1f3448;
        case 0x1f344cu: goto label_1f344c;
        case 0x1f3450u: goto label_1f3450;
        case 0x1f3454u: goto label_1f3454;
        case 0x1f3458u: goto label_1f3458;
        case 0x1f345cu: goto label_1f345c;
        case 0x1f3460u: goto label_1f3460;
        case 0x1f3464u: goto label_1f3464;
        case 0x1f3468u: goto label_1f3468;
        case 0x1f346cu: goto label_1f346c;
        case 0x1f3470u: goto label_1f3470;
        case 0x1f3474u: goto label_1f3474;
        case 0x1f3478u: goto label_1f3478;
        case 0x1f347cu: goto label_1f347c;
        case 0x1f3480u: goto label_1f3480;
        case 0x1f3484u: goto label_1f3484;
        case 0x1f3488u: goto label_1f3488;
        case 0x1f348cu: goto label_1f348c;
        case 0x1f3490u: goto label_1f3490;
        case 0x1f3494u: goto label_1f3494;
        case 0x1f3498u: goto label_1f3498;
        case 0x1f349cu: goto label_1f349c;
        case 0x1f34a0u: goto label_1f34a0;
        case 0x1f34a4u: goto label_1f34a4;
        case 0x1f34a8u: goto label_1f34a8;
        case 0x1f34acu: goto label_1f34ac;
        case 0x1f34b0u: goto label_1f34b0;
        case 0x1f34b4u: goto label_1f34b4;
        case 0x1f34b8u: goto label_1f34b8;
        case 0x1f34bcu: goto label_1f34bc;
        case 0x1f34c0u: goto label_1f34c0;
        case 0x1f34c4u: goto label_1f34c4;
        case 0x1f34c8u: goto label_1f34c8;
        case 0x1f34ccu: goto label_1f34cc;
        case 0x1f34d0u: goto label_1f34d0;
        case 0x1f34d4u: goto label_1f34d4;
        case 0x1f34d8u: goto label_1f34d8;
        case 0x1f34dcu: goto label_1f34dc;
        case 0x1f34e0u: goto label_1f34e0;
        case 0x1f34e4u: goto label_1f34e4;
        case 0x1f34e8u: goto label_1f34e8;
        case 0x1f34ecu: goto label_1f34ec;
        case 0x1f34f0u: goto label_1f34f0;
        case 0x1f34f4u: goto label_1f34f4;
        case 0x1f34f8u: goto label_1f34f8;
        case 0x1f34fcu: goto label_1f34fc;
        case 0x1f3500u: goto label_1f3500;
        case 0x1f3504u: goto label_1f3504;
        case 0x1f3508u: goto label_1f3508;
        case 0x1f350cu: goto label_1f350c;
        case 0x1f3510u: goto label_1f3510;
        case 0x1f3514u: goto label_1f3514;
        case 0x1f3518u: goto label_1f3518;
        case 0x1f351cu: goto label_1f351c;
        case 0x1f3520u: goto label_1f3520;
        case 0x1f3524u: goto label_1f3524;
        case 0x1f3528u: goto label_1f3528;
        case 0x1f352cu: goto label_1f352c;
        case 0x1f3530u: goto label_1f3530;
        case 0x1f3534u: goto label_1f3534;
        case 0x1f3538u: goto label_1f3538;
        case 0x1f353cu: goto label_1f353c;
        case 0x1f3540u: goto label_1f3540;
        case 0x1f3544u: goto label_1f3544;
        case 0x1f3548u: goto label_1f3548;
        case 0x1f354cu: goto label_1f354c;
        case 0x1f3550u: goto label_1f3550;
        case 0x1f3554u: goto label_1f3554;
        case 0x1f3558u: goto label_1f3558;
        case 0x1f355cu: goto label_1f355c;
        case 0x1f3560u: goto label_1f3560;
        case 0x1f3564u: goto label_1f3564;
        case 0x1f3568u: goto label_1f3568;
        case 0x1f356cu: goto label_1f356c;
        case 0x1f3570u: goto label_1f3570;
        case 0x1f3574u: goto label_1f3574;
        case 0x1f3578u: goto label_1f3578;
        case 0x1f357cu: goto label_1f357c;
        case 0x1f3580u: goto label_1f3580;
        case 0x1f3584u: goto label_1f3584;
        case 0x1f3588u: goto label_1f3588;
        case 0x1f358cu: goto label_1f358c;
        case 0x1f3590u: goto label_1f3590;
        case 0x1f3594u: goto label_1f3594;
        case 0x1f3598u: goto label_1f3598;
        case 0x1f359cu: goto label_1f359c;
        case 0x1f35a0u: goto label_1f35a0;
        case 0x1f35a4u: goto label_1f35a4;
        case 0x1f35a8u: goto label_1f35a8;
        case 0x1f35acu: goto label_1f35ac;
        case 0x1f35b0u: goto label_1f35b0;
        case 0x1f35b4u: goto label_1f35b4;
        case 0x1f35b8u: goto label_1f35b8;
        case 0x1f35bcu: goto label_1f35bc;
        case 0x1f35c0u: goto label_1f35c0;
        case 0x1f35c4u: goto label_1f35c4;
        case 0x1f35c8u: goto label_1f35c8;
        case 0x1f35ccu: goto label_1f35cc;
        case 0x1f35d0u: goto label_1f35d0;
        case 0x1f35d4u: goto label_1f35d4;
        case 0x1f35d8u: goto label_1f35d8;
        case 0x1f35dcu: goto label_1f35dc;
        case 0x1f35e0u: goto label_1f35e0;
        case 0x1f35e4u: goto label_1f35e4;
        case 0x1f35e8u: goto label_1f35e8;
        case 0x1f35ecu: goto label_1f35ec;
        case 0x1f35f0u: goto label_1f35f0;
        case 0x1f35f4u: goto label_1f35f4;
        case 0x1f35f8u: goto label_1f35f8;
        case 0x1f35fcu: goto label_1f35fc;
        case 0x1f3600u: goto label_1f3600;
        case 0x1f3604u: goto label_1f3604;
        case 0x1f3608u: goto label_1f3608;
        case 0x1f360cu: goto label_1f360c;
        case 0x1f3610u: goto label_1f3610;
        case 0x1f3614u: goto label_1f3614;
        case 0x1f3618u: goto label_1f3618;
        case 0x1f361cu: goto label_1f361c;
        case 0x1f3620u: goto label_1f3620;
        case 0x1f3624u: goto label_1f3624;
        case 0x1f3628u: goto label_1f3628;
        case 0x1f362cu: goto label_1f362c;
        case 0x1f3630u: goto label_1f3630;
        case 0x1f3634u: goto label_1f3634;
        case 0x1f3638u: goto label_1f3638;
        case 0x1f363cu: goto label_1f363c;
        case 0x1f3640u: goto label_1f3640;
        case 0x1f3644u: goto label_1f3644;
        case 0x1f3648u: goto label_1f3648;
        case 0x1f364cu: goto label_1f364c;
        case 0x1f3650u: goto label_1f3650;
        case 0x1f3654u: goto label_1f3654;
        case 0x1f3658u: goto label_1f3658;
        case 0x1f365cu: goto label_1f365c;
        case 0x1f3660u: goto label_1f3660;
        case 0x1f3664u: goto label_1f3664;
        case 0x1f3668u: goto label_1f3668;
        case 0x1f366cu: goto label_1f366c;
        case 0x1f3670u: goto label_1f3670;
        case 0x1f3674u: goto label_1f3674;
        case 0x1f3678u: goto label_1f3678;
        case 0x1f367cu: goto label_1f367c;
        case 0x1f3680u: goto label_1f3680;
        case 0x1f3684u: goto label_1f3684;
        case 0x1f3688u: goto label_1f3688;
        case 0x1f368cu: goto label_1f368c;
        case 0x1f3690u: goto label_1f3690;
        case 0x1f3694u: goto label_1f3694;
        case 0x1f3698u: goto label_1f3698;
        case 0x1f369cu: goto label_1f369c;
        case 0x1f36a0u: goto label_1f36a0;
        case 0x1f36a4u: goto label_1f36a4;
        case 0x1f36a8u: goto label_1f36a8;
        case 0x1f36acu: goto label_1f36ac;
        case 0x1f36b0u: goto label_1f36b0;
        case 0x1f36b4u: goto label_1f36b4;
        case 0x1f36b8u: goto label_1f36b8;
        case 0x1f36bcu: goto label_1f36bc;
        case 0x1f36c0u: goto label_1f36c0;
        case 0x1f36c4u: goto label_1f36c4;
        case 0x1f36c8u: goto label_1f36c8;
        case 0x1f36ccu: goto label_1f36cc;
        case 0x1f36d0u: goto label_1f36d0;
        case 0x1f36d4u: goto label_1f36d4;
        case 0x1f36d8u: goto label_1f36d8;
        case 0x1f36dcu: goto label_1f36dc;
        case 0x1f36e0u: goto label_1f36e0;
        case 0x1f36e4u: goto label_1f36e4;
        case 0x1f36e8u: goto label_1f36e8;
        case 0x1f36ecu: goto label_1f36ec;
        case 0x1f36f0u: goto label_1f36f0;
        case 0x1f36f4u: goto label_1f36f4;
        case 0x1f36f8u: goto label_1f36f8;
        case 0x1f36fcu: goto label_1f36fc;
        case 0x1f3700u: goto label_1f3700;
        case 0x1f3704u: goto label_1f3704;
        case 0x1f3708u: goto label_1f3708;
        case 0x1f370cu: goto label_1f370c;
        default: return;
    }

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
            { ctx->pc = 0x1f2db4; return; }
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
            { ctx->pc = 0x1f2d9c; return; }
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
            { ctx->pc = 0x1f2d70; return; }
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
            goto label_1f349c;
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
label_1f3428:
    // 0x1f3428: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f342c:
    // 0x1f342c: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x1f342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f3430:
    // 0x1f3430: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1f3430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f3434:
    // 0x1f3434: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1f3434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f3438:
    // 0x1f3438: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1f3438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1f343c:
    // 0x1f343c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f343cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3440:
    // 0x1f3440: 0xac227fe4  sw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3440u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 2));
label_1f3444:
    // 0x1f3444: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f3444u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f3448:
    // 0x1f3448: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f344c:
    // 0x1f344c: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3450:
    // 0x1f3450: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f3450u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f3454:
    // 0x1f3454: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f3454u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3458:
    // 0x1f3458: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f345c:
    // 0x1f345c: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x1f345cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1f3460:
    // 0x1f3460: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3464:
    // 0x1f3464: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3464u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3468:
    // 0x1f3468: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f346c:
    // 0x1f346c: 0xac267fe8  sw          $a2, 0x7FE8($at)
    ctx->pc = 0x1f346cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32744), GPR_U32(ctx, 6));
label_1f3470:
    // 0x1f3470: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3474:
    // 0x1f3474: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3478:
    // 0x1f3478: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f3478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f347c:
    // 0x1f347c: 0x8c227fe8  lw          $v0, 0x7FE8($at)
    ctx->pc = 0x1f347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32744)));
label_1f3480:
    // 0x1f3480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3484:
    // 0x1f3484: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f3484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f3488:
    // 0x1f3488: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1f3488u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f348c:
    // 0x1f348c: 0xc08f20e  jal         func_23C838
label_1f3490:
    if (ctx->pc == 0x1F3490u) {
        ctx->pc = 0x1F3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F348Cu;
        // 0x1f3490: 0x24a5d220  addiu       $a1, $a1, -0x2DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3494u;
        goto label_1f3494;
    }
    ctx->pc = 0x1F348Cu;
    SET_GPR_U32(ctx, 31, 0x1F3494u);
    ctx->pc = 0x1F3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F348Cu;
    // 0x1f3490: 0x24a5d220  addiu       $a1, $a1, -0x2DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3494u;
label_1f3494:
    // 0x1f3494: 0x10000636  b           . + 4 + (0x636 << 2)
label_1f3498:
    if (ctx->pc == 0x1F3498u) {
        ctx->pc = 0x1F349Cu;
        goto label_1f349c;
    }
    ctx->pc = 0x1F3494u;
    {
        const bool branch_taken_0x1f3494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3494) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F349Cu;
label_1f349c:
    // 0x1f349c: 0x1682002d  bne         $s4, $v0, . + 4 + (0x2D << 2)
label_1f34a0:
    if (ctx->pc == 0x1F34A0u) {
        ctx->pc = 0x1F34A4u;
        goto label_1f34a4;
    }
    ctx->pc = 0x1F349Cu;
    {
        const bool branch_taken_0x1f349c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f349c) {
            ctx->pc = 0x1F3554u;
            goto label_1f3554;
        }
    }
    ctx->pc = 0x1F34A4u;
label_1f34a4:
    // 0x1f34a4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1f34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1f34a8:
    // 0x1f34a8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f34a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f34ac:
    // 0x1f34ac: 0x244225b8  addiu       $v0, $v0, 0x25B8
    ctx->pc = 0x1f34acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9656));
label_1f34b0:
    // 0x1f34b0: 0x8c262600  lw          $a2, 0x2600($at)
    ctx->pc = 0x1f34b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9728)));
label_1f34b4:
    // 0x1f34b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f34b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f34b8:
    // 0x1f34b8: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1f34b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1f34bc:
    // 0x1f34bc: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1f34bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1f34c0:
    // 0x1f34c0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f34c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f34c4:
    // 0x1f34c4: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1f34c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
label_1f34c8:
    // 0x1f34c8: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1f34c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
label_1f34cc:
    // 0x1f34cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f34ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f34d0:
    // 0x1f34d0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f34d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f34d4:
    // 0x1f34d4: 0x8c227fd0  lw          $v0, 0x7FD0($at)
    ctx->pc = 0x1f34d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f34d8:
    // 0x1f34d8: 0x9467000a  lhu         $a3, 0xA($v1)
    ctx->pc = 0x1f34d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1f34dc:
    // 0x1f34dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f34e0:
    // 0x1f34e0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f34e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f34e4:
    // 0x1f34e4: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x1f34e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f34e8:
    // 0x1f34e8: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1f34e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f34ec:
    // 0x1f34ec: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1f34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f34f0:
    // 0x1f34f0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1f34f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1f34f4:
    // 0x1f34f4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f34f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f34f8:
    // 0x1f34f8: 0xac227fd4  sw          $v0, 0x7FD4($at)
    ctx->pc = 0x1f34f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32724), GPR_U32(ctx, 2));
label_1f34fc:
    // 0x1f34fc: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f34fcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f3500:
    // 0x1f3500: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3504:
    // 0x1f3504: 0x8c227fd4  lw          $v0, 0x7FD4($at)
    ctx->pc = 0x1f3504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32724)));
label_1f3508:
    // 0x1f3508: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f3508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f350c:
    // 0x1f350c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f350cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3510:
    // 0x1f3510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3514:
    // 0x1f3514: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x1f3514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1f3518:
    // 0x1f3518: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f351c:
    // 0x1f351c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f351cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3520:
    // 0x1f3520: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f3520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f3524:
    // 0x1f3524: 0xac267fd8  sw          $a2, 0x7FD8($at)
    ctx->pc = 0x1f3524u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32728), GPR_U32(ctx, 6));
label_1f3528:
    // 0x1f3528: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f352c:
    // 0x1f352c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3530:
    // 0x1f3530: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f3530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3534:
    // 0x1f3534: 0x8c227fd8  lw          $v0, 0x7FD8($at)
    ctx->pc = 0x1f3534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32728)));
label_1f3538:
    // 0x1f3538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f353c:
    // 0x1f353c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f3540:
    // 0x1f3540: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1f3540u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3544:
    // 0x1f3544: 0xc08f20e  jal         func_23C838
label_1f3548:
    if (ctx->pc == 0x1F3548u) {
        ctx->pc = 0x1F3548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3544u;
        // 0x1f3548: 0x24a5d250  addiu       $a1, $a1, -0x2DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F354Cu;
        goto label_1f354c;
    }
    ctx->pc = 0x1F3544u;
    SET_GPR_U32(ctx, 31, 0x1F354Cu);
    ctx->pc = 0x1F3548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3544u;
    // 0x1f3548: 0x24a5d250  addiu       $a1, $a1, -0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F354Cu;
label_1f354c:
    // 0x1f354c: 0x10000608  b           . + 4 + (0x608 << 2)
label_1f3550:
    if (ctx->pc == 0x1F3550u) {
        ctx->pc = 0x1F3554u;
        goto label_1f3554;
    }
    ctx->pc = 0x1F354Cu;
    {
        const bool branch_taken_0x1f354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f354c) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3554u;
label_1f3554:
    // 0x1f3554: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f3554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f3558:
    // 0x1f3558: 0x1682001f  bne         $s4, $v0, . + 4 + (0x1F << 2)
label_1f355c:
    if (ctx->pc == 0x1F355Cu) {
        ctx->pc = 0x1F355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3558u;
        // 0x1f355c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3560u;
        goto label_1f3560;
    }
    ctx->pc = 0x1F3558u;
    {
        const bool branch_taken_0x1f3558 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3558u;
        // 0x1f355c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3558) {
            ctx->pc = 0x1F35D8u;
            goto label_1f35d8;
        }
    }
    ctx->pc = 0x1F3560u;
label_1f3560:
    // 0x1f3560: 0x240200df  addiu       $v0, $zero, 0xDF
    ctx->pc = 0x1f3560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_1f3564:
    // 0x1f3564: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3568:
    // 0x1f3568: 0xac227fd4  sw          $v0, 0x7FD4($at)
    ctx->pc = 0x1f3568u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32724), GPR_U32(ctx, 2));
label_1f356c:
    // 0x1f356c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f356cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3570:
    // 0x1f3570: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f3570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f3574:
    // 0x1f3574: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3578:
    // 0x1f3578: 0xac237fe0  sw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f3578u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32736), GPR_U32(ctx, 3));
label_1f357c:
    // 0x1f357c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f357cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3580:
    // 0x1f3580: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3584:
    // 0x1f3584: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3588:
    // 0x1f3588: 0x8c237fd4  lw          $v1, 0x7FD4($at)
    ctx->pc = 0x1f3588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32724)));
label_1f358c:
    // 0x1f358c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f358cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3590:
    // 0x1f3590: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3594:
    // 0x1f3594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3598:
    // 0x1f3598: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f359c:
    // 0x1f359c: 0xc08f20e  jal         func_23C838
label_1f35a0:
    if (ctx->pc == 0x1F35A0u) {
        ctx->pc = 0x1F35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F359Cu;
        // 0x1f35a0: 0x24a5d280  addiu       $a1, $a1, -0x2D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F35A4u;
        goto label_1f35a4;
    }
    ctx->pc = 0x1F359Cu;
    SET_GPR_U32(ctx, 31, 0x1F35A4u);
    ctx->pc = 0x1F35A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F359Cu;
    // 0x1f35a0: 0x24a5d280  addiu       $a1, $a1, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F35A4u;
label_1f35a4:
    // 0x1f35a4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f35a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f35a8:
    // 0x1f35a8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f35ac:
    // 0x1f35ac: 0x8c237fd4  lw          $v1, 0x7FD4($at)
    ctx->pc = 0x1f35acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32724)));
label_1f35b0:
    // 0x1f35b0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f35b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f35b4:
    // 0x1f35b4: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f35b8:
    // 0x1f35b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f35b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f35bc:
    // 0x1f35bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f35c0:
    // 0x1f35c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f35c4:
    // 0x1f35c4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f35c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f35c8:
    // 0x1f35c8: 0xc08f20e  jal         func_23C838
label_1f35cc:
    if (ctx->pc == 0x1F35CCu) {
        ctx->pc = 0x1F35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35C8u;
        // 0x1f35cc: 0x24a5d2b0  addiu       $a1, $a1, -0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F35D0u;
        goto label_1f35d0;
    }
    ctx->pc = 0x1F35C8u;
    SET_GPR_U32(ctx, 31, 0x1F35D0u);
    ctx->pc = 0x1F35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F35C8u;
    // 0x1f35cc: 0x24a5d2b0  addiu       $a1, $a1, -0x2D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F35D0u;
label_1f35d0:
    // 0x1f35d0: 0x100005e7  b           . + 4 + (0x5E7 << 2)
label_1f35d4:
    if (ctx->pc == 0x1F35D4u) {
        ctx->pc = 0x1F35D8u;
        goto label_1f35d8;
    }
    ctx->pc = 0x1F35D0u;
    {
        const bool branch_taken_0x1f35d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f35d0) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F35D8u;
label_1f35d8:
    // 0x1f35d8: 0x16830014  bne         $s4, $v1, . + 4 + (0x14 << 2)
label_1f35dc:
    if (ctx->pc == 0x1F35DCu) {
        ctx->pc = 0x1F35E0u;
        goto label_1f35e0;
    }
    ctx->pc = 0x1F35D8u;
    {
        const bool branch_taken_0x1f35d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f35d8) {
            ctx->pc = 0x1F362Cu;
            goto label_1f362c;
        }
    }
    ctx->pc = 0x1F35E0u;
label_1f35e0:
    // 0x1f35e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f35e4:
    // 0x1f35e4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f35e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f35e8:
    // 0x1f35e8: 0xac227fd0  sw          $v0, 0x7FD0($at)
    ctx->pc = 0x1f35e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32720), GPR_U32(ctx, 2));
label_1f35ec:
    // 0x1f35ec: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f35ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f35f0:
    // 0x1f35f0: 0x240300df  addiu       $v1, $zero, 0xDF
    ctx->pc = 0x1f35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_1f35f4:
    // 0x1f35f4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f35f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f35f8:
    // 0x1f35f8: 0xac237fe4  sw          $v1, 0x7FE4($at)
    ctx->pc = 0x1f35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 3));
label_1f35fc:
    // 0x1f35fc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3600:
    // 0x1f3600: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3604:
    // 0x1f3604: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3608:
    // 0x1f3608: 0x8c237fe4  lw          $v1, 0x7FE4($at)
    ctx->pc = 0x1f3608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f360c:
    // 0x1f360c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3610:
    // 0x1f3610: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3614:
    // 0x1f3614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3618:
    // 0x1f3618: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f361c:
    // 0x1f361c: 0xc08f20e  jal         func_23C838
label_1f3620:
    if (ctx->pc == 0x1F3620u) {
        ctx->pc = 0x1F3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F361Cu;
        // 0x1f3620: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3624u;
        goto label_1f3624;
    }
    ctx->pc = 0x1F361Cu;
    SET_GPR_U32(ctx, 31, 0x1F3624u);
    ctx->pc = 0x1F3620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F361Cu;
    // 0x1f3620: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3624u;
label_1f3624:
    // 0x1f3624: 0x100005d2  b           . + 4 + (0x5D2 << 2)
label_1f3628:
    if (ctx->pc == 0x1F3628u) {
        ctx->pc = 0x1F362Cu;
        goto label_1f362c;
    }
    ctx->pc = 0x1F3624u;
    {
        const bool branch_taken_0x1f3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3624) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F362Cu;
label_1f362c:
    // 0x1f362c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1f362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1f3630:
    // 0x1f3630: 0x1683002d  bne         $s4, $v1, . + 4 + (0x2D << 2)
label_1f3634:
    if (ctx->pc == 0x1F3634u) {
        ctx->pc = 0x1F3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3630u;
        // 0x1f3634: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3638u;
        goto label_1f3638;
    }
    ctx->pc = 0x1F3630u;
    {
        const bool branch_taken_0x1f3630 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3630u;
        // 0x1f3634: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3630) {
            ctx->pc = 0x1F36E8u;
            goto label_1f36e8;
        }
    }
    ctx->pc = 0x1F3638u;
label_1f3638:
    // 0x1f3638: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f363c:
    // 0x1f363c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f363cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3640:
    // 0x1f3640: 0x8c297fd0  lw          $t1, 0x7FD0($at)
    ctx->pc = 0x1f3640u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f3644:
    // 0x1f3644: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3648:
    // 0x1f3648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f3648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f364c:
    // 0x1f364c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f364cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3650:
    // 0x1f3650: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1f3650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1f3654:
    // 0x1f3654: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x1f3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_1f3658:
    // 0x1f3658: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1f3658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1f365c:
    // 0x1f365c: 0x0  nop
    ctx->pc = 0x1f365cu;
    // NOP
label_1f3660:
    // 0x1f3660: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x1f3660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1f3664:
    // 0x1f3664: 0x9082367c  lbu         $v0, 0x367C($a0)
    ctx->pc = 0x1f3664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
label_1f3668:
    // 0x1f3668: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f366c:
    if (ctx->pc == 0x1F366Cu) {
        ctx->pc = 0x1F3670u;
        goto label_1f3670;
    }
    ctx->pc = 0x1F3668u;
    {
        const bool branch_taken_0x1f3668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3668) {
            ctx->pc = 0x1F36A0u;
            goto label_1f36a0;
        }
    }
    ctx->pc = 0x1F3670u;
label_1f3670:
    // 0x1f3670: 0x8c823674  lw          $v0, 0x3674($a0)
    ctx->pc = 0x1f3670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13940)));
label_1f3674:
    // 0x1f3674: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f3678:
    if (ctx->pc == 0x1F3678u) {
        ctx->pc = 0x1F367Cu;
        goto label_1f367c;
    }
    ctx->pc = 0x1F3674u;
    {
        const bool branch_taken_0x1f3674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3674) {
            ctx->pc = 0x1F36A0u;
            goto label_1f36a0;
        }
    }
    ctx->pc = 0x1F367Cu;
label_1f367c:
    // 0x1f367c: 0x8c843670  lw          $a0, 0x3670($a0)
    ctx->pc = 0x1f367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13936)));
label_1f3680:
    // 0x1f3680: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1f3680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f3684:
    // 0x1f3684: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f3684u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f3688:
    // 0x1f3688: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f368c:
    // 0x1f368c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f368cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3690:
    // 0x1f3690: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
label_1f3694:
    if (ctx->pc == 0x1F3694u) {
        ctx->pc = 0x1F3698u;
        goto label_1f3698;
    }
    ctx->pc = 0x1F3690u;
    {
        const bool branch_taken_0x1f3690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1f3690) {
            ctx->pc = 0x1F36A0u;
            goto label_1f36a0;
        }
    }
    ctx->pc = 0x1F3698u;
label_1f3698:
    // 0x1f3698: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f369c:
    if (ctx->pc == 0x1F369Cu) {
        ctx->pc = 0x1F369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3698u;
        // 0x1f369c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F36A0u;
        goto label_1f36a0;
    }
    ctx->pc = 0x1F3698u;
    {
        const bool branch_taken_0x1f3698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3698u;
        // 0x1f369c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3698) {
            ctx->pc = 0x1F36B0u;
            goto label_1f36b0;
        }
    }
    ctx->pc = 0x1F36A0u;
label_1f36a0:
    // 0x1f36a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f36a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f36a4:
    // 0x1f36a4: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f36a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f36a8:
    // 0x1f36a8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f36ac:
    if (ctx->pc == 0x1F36ACu) {
        ctx->pc = 0x1F36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36A8u;
        // 0x1f36ac: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F36B0u;
        goto label_1f36b0;
    }
    ctx->pc = 0x1F36A8u;
    {
        const bool branch_taken_0x1f36a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36A8u;
        // 0x1f36ac: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36a8) {
            ctx->pc = 0x1F365Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f365c;
        }
    }
    ctx->pc = 0x1F36B0u;
label_1f36b0:
    // 0x1f36b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f36b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f36b4:
    // 0x1f36b4: 0x14c205ae  bne         $a2, $v0, . + 4 + (0x5AE << 2)
label_1f36b8:
    if (ctx->pc == 0x1F36B8u) {
        ctx->pc = 0x1F36BCu;
        goto label_1f36bc;
    }
    ctx->pc = 0x1F36B4u;
    {
        const bool branch_taken_0x1f36b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f36b4) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F36BCu;
label_1f36bc:
    // 0x1f36bc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f36c0:
    // 0x1f36c0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f36c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f36c4:
    // 0x1f36c4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1f36c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1f36c8:
    // 0x1f36c8: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f36cc:
    // 0x1f36cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f36d0:
    // 0x1f36d0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1f36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1f36d4:
    // 0x1f36d4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f36d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f36d8:
    // 0x1f36d8: 0xc08f20e  jal         func_23C838
label_1f36dc:
    if (ctx->pc == 0x1F36DCu) {
        ctx->pc = 0x1F36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36D8u;
        // 0x1f36dc: 0x24a5d300  addiu       $a1, $a1, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F36E0u;
        goto label_1f36e0;
    }
    ctx->pc = 0x1F36D8u;
    SET_GPR_U32(ctx, 31, 0x1F36E0u);
    ctx->pc = 0x1F36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F36D8u;
    // 0x1f36dc: 0x24a5d300  addiu       $a1, $a1, -0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F36E0u;
label_1f36e0:
    // 0x1f36e0: 0x100005a3  b           . + 4 + (0x5A3 << 2)
label_1f36e4:
    if (ctx->pc == 0x1F36E4u) {
        ctx->pc = 0x1F36E8u;
        goto label_1f36e8;
    }
    ctx->pc = 0x1F36E0u;
    {
        const bool branch_taken_0x1f36e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f36e0) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F36E8u;
label_1f36e8:
    // 0x1f36e8: 0x1683000d  bne         $s4, $v1, . + 4 + (0xD << 2)
label_1f36ec:
    if (ctx->pc == 0x1F36ECu) {
        ctx->pc = 0x1F36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36E8u;
        // 0x1f36ec: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F36F0u;
        goto label_1f36f0;
    }
    ctx->pc = 0x1F36E8u;
    {
        const bool branch_taken_0x1f36e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F36E8u;
        // 0x1f36ec: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36e8) {
            ctx->pc = 0x1F3720u;
            { ctx->pc = 0x1f3720; return; }
        }
    }
    ctx->pc = 0x1F36F0u;
label_1f36f0:
    // 0x1f36f0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f36f4:
    // 0x1f36f4: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f36f8:
    // 0x1f36f8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f36f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f36fc:
    // 0x1f36fc: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3700:
    // 0x1f3700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3704:
    // 0x1f3704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3708:
    // 0x1f3708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f370c:
    // 0x1f370c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f370cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1f3710u;
    return;
}

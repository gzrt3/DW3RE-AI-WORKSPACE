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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part49(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b2f08u: goto label_1b2f08;
        case 0x1b2f0cu: goto label_1b2f0c;
        case 0x1b2f10u: goto label_1b2f10;
        case 0x1b2f14u: goto label_1b2f14;
        case 0x1b2f18u: goto label_1b2f18;
        case 0x1b2f1cu: goto label_1b2f1c;
        case 0x1b2f20u: goto label_1b2f20;
        case 0x1b2f24u: goto label_1b2f24;
        case 0x1b2f28u: goto label_1b2f28;
        case 0x1b2f2cu: goto label_1b2f2c;
        case 0x1b2f30u: goto label_1b2f30;
        case 0x1b2f34u: goto label_1b2f34;
        case 0x1b2f38u: goto label_1b2f38;
        case 0x1b2f3cu: goto label_1b2f3c;
        case 0x1b2f40u: goto label_1b2f40;
        case 0x1b2f44u: goto label_1b2f44;
        case 0x1b2f48u: goto label_1b2f48;
        case 0x1b2f4cu: goto label_1b2f4c;
        case 0x1b2f50u: goto label_1b2f50;
        case 0x1b2f54u: goto label_1b2f54;
        case 0x1b2f58u: goto label_1b2f58;
        case 0x1b2f5cu: goto label_1b2f5c;
        case 0x1b2f60u: goto label_1b2f60;
        case 0x1b2f64u: goto label_1b2f64;
        case 0x1b2f68u: goto label_1b2f68;
        case 0x1b2f6cu: goto label_1b2f6c;
        case 0x1b2f70u: goto label_1b2f70;
        case 0x1b2f74u: goto label_1b2f74;
        case 0x1b2f78u: goto label_1b2f78;
        case 0x1b2f7cu: goto label_1b2f7c;
        case 0x1b2f80u: goto label_1b2f80;
        case 0x1b2f84u: goto label_1b2f84;
        case 0x1b2f88u: goto label_1b2f88;
        case 0x1b2f8cu: goto label_1b2f8c;
        case 0x1b2f90u: goto label_1b2f90;
        case 0x1b2f94u: goto label_1b2f94;
        case 0x1b2f98u: goto label_1b2f98;
        case 0x1b2f9cu: goto label_1b2f9c;
        case 0x1b2fa0u: goto label_1b2fa0;
        case 0x1b2fa4u: goto label_1b2fa4;
        case 0x1b2fa8u: goto label_1b2fa8;
        case 0x1b2facu: goto label_1b2fac;
        case 0x1b2fb0u: goto label_1b2fb0;
        case 0x1b2fb4u: goto label_1b2fb4;
        case 0x1b2fb8u: goto label_1b2fb8;
        case 0x1b2fbcu: goto label_1b2fbc;
        case 0x1b2fc0u: goto label_1b2fc0;
        case 0x1b2fc4u: goto label_1b2fc4;
        case 0x1b2fc8u: goto label_1b2fc8;
        case 0x1b2fccu: goto label_1b2fcc;
        case 0x1b2fd0u: goto label_1b2fd0;
        case 0x1b2fd4u: goto label_1b2fd4;
        case 0x1b2fd8u: goto label_1b2fd8;
        case 0x1b2fdcu: goto label_1b2fdc;
        case 0x1b2fe0u: goto label_1b2fe0;
        case 0x1b2fe4u: goto label_1b2fe4;
        case 0x1b2fe8u: goto label_1b2fe8;
        case 0x1b2fecu: goto label_1b2fec;
        case 0x1b2ff0u: goto label_1b2ff0;
        case 0x1b2ff4u: goto label_1b2ff4;
        case 0x1b2ff8u: goto label_1b2ff8;
        case 0x1b2ffcu: goto label_1b2ffc;
        case 0x1b3000u: goto label_1b3000;
        case 0x1b3004u: goto label_1b3004;
        case 0x1b3008u: goto label_1b3008;
        case 0x1b300cu: goto label_1b300c;
        case 0x1b3010u: goto label_1b3010;
        case 0x1b3014u: goto label_1b3014;
        case 0x1b3018u: goto label_1b3018;
        case 0x1b301cu: goto label_1b301c;
        case 0x1b3020u: goto label_1b3020;
        case 0x1b3024u: goto label_1b3024;
        case 0x1b3028u: goto label_1b3028;
        case 0x1b302cu: goto label_1b302c;
        case 0x1b3030u: goto label_1b3030;
        case 0x1b3034u: goto label_1b3034;
        case 0x1b3038u: goto label_1b3038;
        case 0x1b303cu: goto label_1b303c;
        case 0x1b3040u: goto label_1b3040;
        case 0x1b3044u: goto label_1b3044;
        case 0x1b3048u: goto label_1b3048;
        case 0x1b304cu: goto label_1b304c;
        case 0x1b3050u: goto label_1b3050;
        case 0x1b3054u: goto label_1b3054;
        case 0x1b3058u: goto label_1b3058;
        case 0x1b305cu: goto label_1b305c;
        case 0x1b3060u: goto label_1b3060;
        case 0x1b3064u: goto label_1b3064;
        case 0x1b3068u: goto label_1b3068;
        case 0x1b306cu: goto label_1b306c;
        case 0x1b3070u: goto label_1b3070;
        case 0x1b3074u: goto label_1b3074;
        case 0x1b3078u: goto label_1b3078;
        case 0x1b307cu: goto label_1b307c;
        case 0x1b3080u: goto label_1b3080;
        case 0x1b3084u: goto label_1b3084;
        case 0x1b3088u: goto label_1b3088;
        case 0x1b308cu: goto label_1b308c;
        case 0x1b3090u: goto label_1b3090;
        case 0x1b3094u: goto label_1b3094;
        case 0x1b3098u: goto label_1b3098;
        case 0x1b309cu: goto label_1b309c;
        case 0x1b30a0u: goto label_1b30a0;
        case 0x1b30a4u: goto label_1b30a4;
        case 0x1b30a8u: goto label_1b30a8;
        case 0x1b30acu: goto label_1b30ac;
        case 0x1b30b0u: goto label_1b30b0;
        case 0x1b30b4u: goto label_1b30b4;
        case 0x1b30b8u: goto label_1b30b8;
        case 0x1b30bcu: goto label_1b30bc;
        case 0x1b30c0u: goto label_1b30c0;
        case 0x1b30c4u: goto label_1b30c4;
        case 0x1b30c8u: goto label_1b30c8;
        case 0x1b30ccu: goto label_1b30cc;
        case 0x1b30d0u: goto label_1b30d0;
        case 0x1b30d4u: goto label_1b30d4;
        case 0x1b30d8u: goto label_1b30d8;
        case 0x1b30dcu: goto label_1b30dc;
        case 0x1b30e0u: goto label_1b30e0;
        case 0x1b30e4u: goto label_1b30e4;
        case 0x1b30e8u: goto label_1b30e8;
        case 0x1b30ecu: goto label_1b30ec;
        case 0x1b30f0u: goto label_1b30f0;
        case 0x1b30f4u: goto label_1b30f4;
        case 0x1b30f8u: goto label_1b30f8;
        case 0x1b30fcu: goto label_1b30fc;
        case 0x1b3100u: goto label_1b3100;
        case 0x1b3104u: goto label_1b3104;
        case 0x1b3108u: goto label_1b3108;
        case 0x1b310cu: goto label_1b310c;
        case 0x1b3110u: goto label_1b3110;
        case 0x1b3114u: goto label_1b3114;
        case 0x1b3118u: goto label_1b3118;
        case 0x1b311cu: goto label_1b311c;
        case 0x1b3120u: goto label_1b3120;
        case 0x1b3124u: goto label_1b3124;
        case 0x1b3128u: goto label_1b3128;
        case 0x1b312cu: goto label_1b312c;
        case 0x1b3130u: goto label_1b3130;
        case 0x1b3134u: goto label_1b3134;
        case 0x1b3138u: goto label_1b3138;
        case 0x1b313cu: goto label_1b313c;
        case 0x1b3140u: goto label_1b3140;
        case 0x1b3144u: goto label_1b3144;
        case 0x1b3148u: goto label_1b3148;
        case 0x1b314cu: goto label_1b314c;
        case 0x1b3150u: goto label_1b3150;
        case 0x1b3154u: goto label_1b3154;
        case 0x1b3158u: goto label_1b3158;
        case 0x1b315cu: goto label_1b315c;
        case 0x1b3160u: goto label_1b3160;
        case 0x1b3164u: goto label_1b3164;
        case 0x1b3168u: goto label_1b3168;
        case 0x1b316cu: goto label_1b316c;
        case 0x1b3170u: goto label_1b3170;
        case 0x1b3174u: goto label_1b3174;
        case 0x1b3178u: goto label_1b3178;
        case 0x1b317cu: goto label_1b317c;
        case 0x1b3180u: goto label_1b3180;
        case 0x1b3184u: goto label_1b3184;
        case 0x1b3188u: goto label_1b3188;
        case 0x1b318cu: goto label_1b318c;
        case 0x1b3190u: goto label_1b3190;
        case 0x1b3194u: goto label_1b3194;
        case 0x1b3198u: goto label_1b3198;
        case 0x1b319cu: goto label_1b319c;
        case 0x1b31a0u: goto label_1b31a0;
        case 0x1b31a4u: goto label_1b31a4;
        case 0x1b31a8u: goto label_1b31a8;
        case 0x1b31acu: goto label_1b31ac;
        case 0x1b31b0u: goto label_1b31b0;
        case 0x1b31b4u: goto label_1b31b4;
        case 0x1b31b8u: goto label_1b31b8;
        case 0x1b31bcu: goto label_1b31bc;
        case 0x1b31c0u: goto label_1b31c0;
        case 0x1b31c4u: goto label_1b31c4;
        case 0x1b31c8u: goto label_1b31c8;
        case 0x1b31ccu: goto label_1b31cc;
        case 0x1b31d0u: goto label_1b31d0;
        case 0x1b31d4u: goto label_1b31d4;
        case 0x1b31d8u: goto label_1b31d8;
        case 0x1b31dcu: goto label_1b31dc;
        case 0x1b31e0u: goto label_1b31e0;
        case 0x1b31e4u: goto label_1b31e4;
        case 0x1b31e8u: goto label_1b31e8;
        case 0x1b31ecu: goto label_1b31ec;
        case 0x1b31f0u: goto label_1b31f0;
        case 0x1b31f4u: goto label_1b31f4;
        case 0x1b31f8u: goto label_1b31f8;
        case 0x1b31fcu: goto label_1b31fc;
        case 0x1b3200u: goto label_1b3200;
        case 0x1b3204u: goto label_1b3204;
        case 0x1b3208u: goto label_1b3208;
        case 0x1b320cu: goto label_1b320c;
        case 0x1b3210u: goto label_1b3210;
        case 0x1b3214u: goto label_1b3214;
        case 0x1b3218u: goto label_1b3218;
        case 0x1b321cu: goto label_1b321c;
        case 0x1b3220u: goto label_1b3220;
        case 0x1b3224u: goto label_1b3224;
        case 0x1b3228u: goto label_1b3228;
        case 0x1b322cu: goto label_1b322c;
        case 0x1b3230u: goto label_1b3230;
        case 0x1b3234u: goto label_1b3234;
        case 0x1b3238u: goto label_1b3238;
        case 0x1b323cu: goto label_1b323c;
        case 0x1b3240u: goto label_1b3240;
        case 0x1b3244u: goto label_1b3244;
        case 0x1b3248u: goto label_1b3248;
        case 0x1b324cu: goto label_1b324c;
        case 0x1b3250u: goto label_1b3250;
        case 0x1b3254u: goto label_1b3254;
        case 0x1b3258u: goto label_1b3258;
        case 0x1b325cu: goto label_1b325c;
        case 0x1b3260u: goto label_1b3260;
        case 0x1b3264u: goto label_1b3264;
        case 0x1b3268u: goto label_1b3268;
        case 0x1b326cu: goto label_1b326c;
        case 0x1b3270u: goto label_1b3270;
        case 0x1b3274u: goto label_1b3274;
        case 0x1b3278u: goto label_1b3278;
        case 0x1b327cu: goto label_1b327c;
        case 0x1b3280u: goto label_1b3280;
        case 0x1b3284u: goto label_1b3284;
        case 0x1b3288u: goto label_1b3288;
        case 0x1b328cu: goto label_1b328c;
        case 0x1b3290u: goto label_1b3290;
        case 0x1b3294u: goto label_1b3294;
        case 0x1b3298u: goto label_1b3298;
        case 0x1b329cu: goto label_1b329c;
        case 0x1b32a0u: goto label_1b32a0;
        case 0x1b32a4u: goto label_1b32a4;
        case 0x1b32a8u: goto label_1b32a8;
        case 0x1b32acu: goto label_1b32ac;
        case 0x1b32b0u: goto label_1b32b0;
        case 0x1b32b4u: goto label_1b32b4;
        case 0x1b32b8u: goto label_1b32b8;
        case 0x1b32bcu: goto label_1b32bc;
        case 0x1b32c0u: goto label_1b32c0;
        case 0x1b32c4u: goto label_1b32c4;
        case 0x1b32c8u: goto label_1b32c8;
        case 0x1b32ccu: goto label_1b32cc;
        case 0x1b32d0u: goto label_1b32d0;
        case 0x1b32d4u: goto label_1b32d4;
        case 0x1b32d8u: goto label_1b32d8;
        case 0x1b32dcu: goto label_1b32dc;
        case 0x1b32e0u: goto label_1b32e0;
        case 0x1b32e4u: goto label_1b32e4;
        case 0x1b32e8u: goto label_1b32e8;
        case 0x1b32ecu: goto label_1b32ec;
        case 0x1b32f0u: goto label_1b32f0;
        case 0x1b32f4u: goto label_1b32f4;
        case 0x1b32f8u: goto label_1b32f8;
        case 0x1b32fcu: goto label_1b32fc;
        case 0x1b3300u: goto label_1b3300;
        case 0x1b3304u: goto label_1b3304;
        case 0x1b3308u: goto label_1b3308;
        case 0x1b330cu: goto label_1b330c;
        case 0x1b3310u: goto label_1b3310;
        case 0x1b3314u: goto label_1b3314;
        case 0x1b3318u: goto label_1b3318;
        case 0x1b331cu: goto label_1b331c;
        case 0x1b3320u: goto label_1b3320;
        case 0x1b3324u: goto label_1b3324;
        case 0x1b3328u: goto label_1b3328;
        case 0x1b332cu: goto label_1b332c;
        case 0x1b3330u: goto label_1b3330;
        case 0x1b3334u: goto label_1b3334;
        case 0x1b3338u: goto label_1b3338;
        case 0x1b333cu: goto label_1b333c;
        case 0x1b3340u: goto label_1b3340;
        case 0x1b3344u: goto label_1b3344;
        case 0x1b3348u: goto label_1b3348;
        case 0x1b334cu: goto label_1b334c;
        case 0x1b3350u: goto label_1b3350;
        case 0x1b3354u: goto label_1b3354;
        case 0x1b3358u: goto label_1b3358;
        case 0x1b335cu: goto label_1b335c;
        case 0x1b3360u: goto label_1b3360;
        case 0x1b3364u: goto label_1b3364;
        case 0x1b3368u: goto label_1b3368;
        case 0x1b336cu: goto label_1b336c;
        case 0x1b3370u: goto label_1b3370;
        case 0x1b3374u: goto label_1b3374;
        case 0x1b3378u: goto label_1b3378;
        case 0x1b337cu: goto label_1b337c;
        case 0x1b3380u: goto label_1b3380;
        case 0x1b3384u: goto label_1b3384;
        case 0x1b3388u: goto label_1b3388;
        case 0x1b338cu: goto label_1b338c;
        case 0x1b3390u: goto label_1b3390;
        case 0x1b3394u: goto label_1b3394;
        case 0x1b3398u: goto label_1b3398;
        case 0x1b339cu: goto label_1b339c;
        case 0x1b33a0u: goto label_1b33a0;
        case 0x1b33a4u: goto label_1b33a4;
        case 0x1b33a8u: goto label_1b33a8;
        case 0x1b33acu: goto label_1b33ac;
        case 0x1b33b0u: goto label_1b33b0;
        case 0x1b33b4u: goto label_1b33b4;
        case 0x1b33b8u: goto label_1b33b8;
        case 0x1b33bcu: goto label_1b33bc;
        case 0x1b33c0u: goto label_1b33c0;
        case 0x1b33c4u: goto label_1b33c4;
        case 0x1b33c8u: goto label_1b33c8;
        case 0x1b33ccu: goto label_1b33cc;
        case 0x1b33d0u: goto label_1b33d0;
        case 0x1b33d4u: goto label_1b33d4;
        case 0x1b33d8u: goto label_1b33d8;
        case 0x1b33dcu: goto label_1b33dc;
        case 0x1b33e0u: goto label_1b33e0;
        case 0x1b33e4u: goto label_1b33e4;
        case 0x1b33e8u: goto label_1b33e8;
        case 0x1b33ecu: goto label_1b33ec;
        case 0x1b33f0u: goto label_1b33f0;
        case 0x1b33f4u: goto label_1b33f4;
        case 0x1b33f8u: goto label_1b33f8;
        case 0x1b33fcu: goto label_1b33fc;
        case 0x1b3400u: goto label_1b3400;
        case 0x1b3404u: goto label_1b3404;
        case 0x1b3408u: goto label_1b3408;
        case 0x1b340cu: goto label_1b340c;
        case 0x1b3410u: goto label_1b3410;
        case 0x1b3414u: goto label_1b3414;
        case 0x1b3418u: goto label_1b3418;
        case 0x1b341cu: goto label_1b341c;
        case 0x1b3420u: goto label_1b3420;
        case 0x1b3424u: goto label_1b3424;
        case 0x1b3428u: goto label_1b3428;
        case 0x1b342cu: goto label_1b342c;
        case 0x1b3430u: goto label_1b3430;
        case 0x1b3434u: goto label_1b3434;
        case 0x1b3438u: goto label_1b3438;
        case 0x1b343cu: goto label_1b343c;
        case 0x1b3440u: goto label_1b3440;
        case 0x1b3444u: goto label_1b3444;
        case 0x1b3448u: goto label_1b3448;
        case 0x1b344cu: goto label_1b344c;
        case 0x1b3450u: goto label_1b3450;
        case 0x1b3454u: goto label_1b3454;
        case 0x1b3458u: goto label_1b3458;
        case 0x1b345cu: goto label_1b345c;
        case 0x1b3460u: goto label_1b3460;
        case 0x1b3464u: goto label_1b3464;
        case 0x1b3468u: goto label_1b3468;
        case 0x1b346cu: goto label_1b346c;
        case 0x1b3470u: goto label_1b3470;
        case 0x1b3474u: goto label_1b3474;
        case 0x1b3478u: goto label_1b3478;
        case 0x1b347cu: goto label_1b347c;
        case 0x1b3480u: goto label_1b3480;
        case 0x1b3484u: goto label_1b3484;
        case 0x1b3488u: goto label_1b3488;
        case 0x1b348cu: goto label_1b348c;
        case 0x1b3490u: goto label_1b3490;
        case 0x1b3494u: goto label_1b3494;
        case 0x1b3498u: goto label_1b3498;
        case 0x1b349cu: goto label_1b349c;
        case 0x1b34a0u: goto label_1b34a0;
        case 0x1b34a4u: goto label_1b34a4;
        case 0x1b34a8u: goto label_1b34a8;
        case 0x1b34acu: goto label_1b34ac;
        case 0x1b34b0u: goto label_1b34b0;
        case 0x1b34b4u: goto label_1b34b4;
        case 0x1b34b8u: goto label_1b34b8;
        case 0x1b34bcu: goto label_1b34bc;
        case 0x1b34c0u: goto label_1b34c0;
        case 0x1b34c4u: goto label_1b34c4;
        case 0x1b34c8u: goto label_1b34c8;
        case 0x1b34ccu: goto label_1b34cc;
        case 0x1b34d0u: goto label_1b34d0;
        case 0x1b34d4u: goto label_1b34d4;
        case 0x1b34d8u: goto label_1b34d8;
        case 0x1b34dcu: goto label_1b34dc;
        case 0x1b34e0u: goto label_1b34e0;
        case 0x1b34e4u: goto label_1b34e4;
        case 0x1b34e8u: goto label_1b34e8;
        case 0x1b34ecu: goto label_1b34ec;
        case 0x1b34f0u: goto label_1b34f0;
        case 0x1b34f4u: goto label_1b34f4;
        case 0x1b34f8u: goto label_1b34f8;
        case 0x1b34fcu: goto label_1b34fc;
        case 0x1b3500u: goto label_1b3500;
        case 0x1b3504u: goto label_1b3504;
        case 0x1b3508u: goto label_1b3508;
        case 0x1b350cu: goto label_1b350c;
        case 0x1b3510u: goto label_1b3510;
        case 0x1b3514u: goto label_1b3514;
        case 0x1b3518u: goto label_1b3518;
        case 0x1b351cu: goto label_1b351c;
        case 0x1b3520u: goto label_1b3520;
        case 0x1b3524u: goto label_1b3524;
        case 0x1b3528u: goto label_1b3528;
        case 0x1b352cu: goto label_1b352c;
        case 0x1b3530u: goto label_1b3530;
        case 0x1b3534u: goto label_1b3534;
        case 0x1b3538u: goto label_1b3538;
        case 0x1b353cu: goto label_1b353c;
        case 0x1b3540u: goto label_1b3540;
        case 0x1b3544u: goto label_1b3544;
        case 0x1b3548u: goto label_1b3548;
        case 0x1b354cu: goto label_1b354c;
        case 0x1b3550u: goto label_1b3550;
        case 0x1b3554u: goto label_1b3554;
        case 0x1b3558u: goto label_1b3558;
        case 0x1b355cu: goto label_1b355c;
        case 0x1b3560u: goto label_1b3560;
        case 0x1b3564u: goto label_1b3564;
        case 0x1b3568u: goto label_1b3568;
        case 0x1b356cu: goto label_1b356c;
        case 0x1b3570u: goto label_1b3570;
        case 0x1b3574u: goto label_1b3574;
        case 0x1b3578u: goto label_1b3578;
        case 0x1b357cu: goto label_1b357c;
        case 0x1b3580u: goto label_1b3580;
        case 0x1b3584u: goto label_1b3584;
        case 0x1b3588u: goto label_1b3588;
        case 0x1b358cu: goto label_1b358c;
        case 0x1b3590u: goto label_1b3590;
        case 0x1b3594u: goto label_1b3594;
        case 0x1b3598u: goto label_1b3598;
        case 0x1b359cu: goto label_1b359c;
        case 0x1b35a0u: goto label_1b35a0;
        case 0x1b35a4u: goto label_1b35a4;
        case 0x1b35a8u: goto label_1b35a8;
        case 0x1b35acu: goto label_1b35ac;
        case 0x1b35b0u: goto label_1b35b0;
        case 0x1b35b4u: goto label_1b35b4;
        case 0x1b35b8u: goto label_1b35b8;
        case 0x1b35bcu: goto label_1b35bc;
        case 0x1b35c0u: goto label_1b35c0;
        case 0x1b35c4u: goto label_1b35c4;
        case 0x1b35c8u: goto label_1b35c8;
        case 0x1b35ccu: goto label_1b35cc;
        case 0x1b35d0u: goto label_1b35d0;
        case 0x1b35d4u: goto label_1b35d4;
        case 0x1b35d8u: goto label_1b35d8;
        case 0x1b35dcu: goto label_1b35dc;
        case 0x1b35e0u: goto label_1b35e0;
        case 0x1b35e4u: goto label_1b35e4;
        case 0x1b35e8u: goto label_1b35e8;
        case 0x1b35ecu: goto label_1b35ec;
        case 0x1b35f0u: goto label_1b35f0;
        case 0x1b35f4u: goto label_1b35f4;
        case 0x1b35f8u: goto label_1b35f8;
        case 0x1b35fcu: goto label_1b35fc;
        case 0x1b3600u: goto label_1b3600;
        case 0x1b3604u: goto label_1b3604;
        case 0x1b3608u: goto label_1b3608;
        case 0x1b360cu: goto label_1b360c;
        case 0x1b3610u: goto label_1b3610;
        case 0x1b3614u: goto label_1b3614;
        case 0x1b3618u: goto label_1b3618;
        case 0x1b361cu: goto label_1b361c;
        case 0x1b3620u: goto label_1b3620;
        case 0x1b3624u: goto label_1b3624;
        case 0x1b3628u: goto label_1b3628;
        case 0x1b362cu: goto label_1b362c;
        case 0x1b3630u: goto label_1b3630;
        case 0x1b3634u: goto label_1b3634;
        case 0x1b3638u: goto label_1b3638;
        case 0x1b363cu: goto label_1b363c;
        case 0x1b3640u: goto label_1b3640;
        case 0x1b3644u: goto label_1b3644;
        case 0x1b3648u: goto label_1b3648;
        case 0x1b364cu: goto label_1b364c;
        case 0x1b3650u: goto label_1b3650;
        case 0x1b3654u: goto label_1b3654;
        case 0x1b3658u: goto label_1b3658;
        case 0x1b365cu: goto label_1b365c;
        case 0x1b3660u: goto label_1b3660;
        case 0x1b3664u: goto label_1b3664;
        case 0x1b3668u: goto label_1b3668;
        case 0x1b366cu: goto label_1b366c;
        case 0x1b3670u: goto label_1b3670;
        case 0x1b3674u: goto label_1b3674;
        case 0x1b3678u: goto label_1b3678;
        case 0x1b367cu: goto label_1b367c;
        case 0x1b3680u: goto label_1b3680;
        case 0x1b3684u: goto label_1b3684;
        case 0x1b3688u: goto label_1b3688;
        case 0x1b368cu: goto label_1b368c;
        case 0x1b3690u: goto label_1b3690;
        case 0x1b3694u: goto label_1b3694;
        case 0x1b3698u: goto label_1b3698;
        case 0x1b369cu: goto label_1b369c;
        case 0x1b36a0u: goto label_1b36a0;
        case 0x1b36a4u: goto label_1b36a4;
        case 0x1b36a8u: goto label_1b36a8;
        case 0x1b36acu: goto label_1b36ac;
        case 0x1b36b0u: goto label_1b36b0;
        case 0x1b36b4u: goto label_1b36b4;
        case 0x1b36b8u: goto label_1b36b8;
        case 0x1b36bcu: goto label_1b36bc;
        case 0x1b36c0u: goto label_1b36c0;
        case 0x1b36c4u: goto label_1b36c4;
        case 0x1b36c8u: goto label_1b36c8;
        case 0x1b36ccu: goto label_1b36cc;
        case 0x1b36d0u: goto label_1b36d0;
        case 0x1b36d4u: goto label_1b36d4;
        default: return;
    }

label_1b2f08:
    if (ctx->pc == 0x1B2F08u) {
        ctx->pc = 0x1B2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F04u;
        // 0x1b2f08: 0x46016000  add.s       $f0, $f12, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F0Cu;
        goto label_1b2f0c;
    }
    ctx->pc = 0x1B2F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F04u;
        // 0x1b2f08: 0x46016000  add.s       $f0, $f12, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2F0Cu;
label_1b2f0c:
    // 0x1b2f0c: 0x0  nop
    ctx->pc = 0x1b2f0cu;
    // NOP
label_1b2f10:
    // 0x1b2f10: 0x460c6142  mul.s       $f5, $f12, $f12
    ctx->pc = 0x1b2f10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1b2f14:
    // 0x1b2f14: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x1b2f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
label_1b2f18:
    // 0x1b2f18: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x1b2f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
label_1b2f1c:
    // 0x1b2f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2f20:
    // 0x1b2f20: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
label_1b2f24:
    // 0x1b2f24: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x1b2f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
label_1b2f28:
    // 0x1b2f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2f2c:
    // 0x1b2f2c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x1b2f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
label_1b2f30:
    // 0x1b2f30: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x1b2f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
label_1b2f34:
    // 0x1b2f34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b2f38:
    // 0x1b2f38: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x1b2f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
label_1b2f3c:
    // 0x1b2f3c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1b2f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
label_1b2f40:
    // 0x1b2f40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b2f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b2f44:
    // 0x1b2f44: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1b2f48:
    // 0x1b2f48: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b2f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_1b2f4c:
    // 0x1b2f4c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b2f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b2f50:
    // 0x1b2f50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b2f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b2f54:
    // 0x1b2f54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b2f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b2f58:
    // 0x1b2f58: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1b2f5c:
    // 0x1b2f5c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b2f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b2f60:
    // 0x1b2f60: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1b2f64:
    // 0x1b2f64: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b2f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1b2f68:
    // 0x1b2f68: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1b2f6c:
    // 0x1b2f6c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1b2f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1b2f70:
    // 0x1b2f70: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1b2f74:
    // 0x1b2f74: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
label_1b2f78:
    if (ctx->pc == 0x1B2F78u) {
        ctx->pc = 0x1B2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F74u;
        // 0x1b2f78: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2F7Cu;
        goto label_1b2f7c;
    }
    ctx->pc = 0x1B2F74u;
    {
        const bool branch_taken_0x1b2f74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F74u;
        // 0x1b2f78: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f74) {
            ctx->pc = 0x1B2FB0u;
            goto label_1b2fb0;
        }
    }
    ctx->pc = 0x1B2F7Cu;
label_1b2f7c:
    // 0x1b2f7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b2f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1b2f80:
    // 0x1b2f80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2f84:
    // 0x1b2f84: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x1b2f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_1b2f88:
    // 0x1b2f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b2f8c:
    // 0x1b2f8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b2f90:
    // 0x1b2f90: 0x0  nop
    ctx->pc = 0x1b2f90u;
    // NOP
label_1b2f94:
    // 0x1b2f94: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x1b2f94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1b2f98:
    // 0x1b2f98: 0x0  nop
    ctx->pc = 0x1b2f98u;
    // NOP
label_1b2f9c:
    // 0x1b2f9c: 0x0  nop
    ctx->pc = 0x1b2f9cu;
    // NOP
label_1b2fa0:
    // 0x1b2fa0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b2fa0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1b2fa4:
    // 0x1b2fa4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1b2fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_1b2fa8:
    // 0x1b2fa8: 0x3e00008  jr          $ra
label_1b2fac:
    if (ctx->pc == 0x1B2FACu) {
        ctx->pc = 0x1B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FA8u;
        // 0x1b2fac: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2FB0u;
        goto label_1b2fb0;
    }
    ctx->pc = 0x1B2FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FA8u;
        // 0x1b2fac: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2FB0u;
label_1b2fb0:
    // 0x1b2fb0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b2fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1b2fb4:
    // 0x1b2fb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2fb8:
    // 0x1b2fb8: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x1b2fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_1b2fbc:
    // 0x1b2fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b2fc0:
    // 0x1b2fc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b2fc4:
    // 0x1b2fc4: 0x28c2ff83  slti        $v0, $a2, -0x7D
    ctx->pc = 0x1b2fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967171) ? 1 : 0);
label_1b2fc8:
    // 0x1b2fc8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1b2fc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1b2fcc:
    // 0x1b2fcc: 0x0  nop
    ctx->pc = 0x1b2fccu;
    // NOP
label_1b2fd0:
    // 0x1b2fd0: 0x0  nop
    ctx->pc = 0x1b2fd0u;
    // NOP
label_1b2fd4:
    // 0x1b2fd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b2fd4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1b2fd8:
    // 0x1b2fd8: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x1b2fd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_1b2fdc:
    // 0x1b2fdc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x1b2fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_1b2fe0:
    // 0x1b2fe0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b2fe4:
    if (ctx->pc == 0x1B2FE4u) {
        ctx->pc = 0x1B2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FE0u;
        // 0x1b2fe4: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2FE8u;
        goto label_1b2fe8;
    }
    ctx->pc = 0x1B2FE0u;
    {
        const bool branch_taken_0x1b2fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FE0u;
        // 0x1b2fe4: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fe0) {
            ctx->pc = 0x1B3000u;
            goto label_1b3000;
        }
    }
    ctx->pc = 0x1B2FE8u;
label_1b2fe8:
    // 0x1b2fe8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b2fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b2fec:
    // 0x1b2fec: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x1b2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_1b2ff0:
    // 0x1b2ff0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b2ff4:
    // 0x1b2ff4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b2ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2ff8:
    // 0x1b2ff8: 0x3e00008  jr          $ra
label_1b2ffc:
    if (ctx->pc == 0x1B2FFCu) {
        ctx->pc = 0x1B2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FF8u;
        // 0x1b2ffc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3000u;
        goto label_1b3000;
    }
    ctx->pc = 0x1B2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FF8u;
        // 0x1b2ffc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3000u;
label_1b3000:
    // 0x1b3000: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b3000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b3004:
    // 0x1b3004: 0x24c30064  addiu       $v1, $a2, 0x64
    ctx->pc = 0x1b3004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
label_1b3008:
    // 0x1b3008: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1b3008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
label_1b300c:
    // 0x1b300c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b3010:
    // 0x1b3010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3014:
    // 0x1b3014: 0x3c010d80  lui         $at, 0xD80
    ctx->pc = 0x1b3014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3456 << 16));
label_1b3018:
    // 0x1b3018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b301c:
    // 0x1b301c: 0x0  nop
    ctx->pc = 0x1b301cu;
    // NOP
label_1b3020:
    // 0x1b3020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b3024:
    // 0x1b3024: 0x3e00008  jr          $ra
label_1b3028:
    if (ctx->pc == 0x1B3028u) {
        ctx->pc = 0x1B302Cu;
        goto label_1b302c;
    }
    ctx->pc = 0x1B3024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B302Cu;
label_1b302c:
    // 0x1b302c: 0x0  nop
    ctx->pc = 0x1b302cu;
    // NOP
label_1b3030:
    // 0x1b3030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3034:
    // 0x1b3034: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b3034u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b3038:
    // 0x1b3038: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b3038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b303c:
    // 0x1b303c: 0x0  nop
    ctx->pc = 0x1b303cu;
    // NOP
label_1b3040:
    // 0x1b3040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b3040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b3044:
    // 0x1b3044: 0x46006846  mov.s       $f1, $f13
    ctx->pc = 0x1b3044u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
label_1b3048:
    // 0x1b3048: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b3048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b304c:
    // 0x1b304c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b304cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1b3050:
    // 0x1b3050: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3054:
    // 0x1b3054: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b3054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b3058:
    // 0x1b3058: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b305c:
    // 0x1b305c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1b305cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_1b3060:
    // 0x1b3060: 0xe23024  and         $a2, $a3, $v0
    ctx->pc = 0x1b3060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1b3064:
    // 0x1b3064: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1b3064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1b3068:
    // 0x1b3068: 0xa35024  and         $t2, $a1, $v1
    ctx->pc = 0x1b3068u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b306c:
    // 0x1b306c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1b306cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b3070:
    // 0x1b3070: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b3074:
    if (ctx->pc == 0x1B3074u) {
        ctx->pc = 0x1B3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3070u;
        // 0x1b3074: 0xaa2826  xor         $a1, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3078u;
        goto label_1b3078;
    }
    ctx->pc = 0x1B3070u;
    {
        const bool branch_taken_0x1b3070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3070u;
        // 0x1b3074: 0xaa2826  xor         $a1, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3070) {
            ctx->pc = 0x1B3090u;
            goto label_1b3090;
        }
    }
    ctx->pc = 0x1B3078u;
label_1b3078:
    // 0x1b3078: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1b3078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_1b307c:
    // 0x1b307c: 0x0  nop
    ctx->pc = 0x1b307cu;
    // NOP
label_1b3080:
    // 0x1b3080: 0x0  nop
    ctx->pc = 0x1b3080u;
    // NOP
label_1b3084:
    // 0x1b3084: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b3084u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_1b3088:
    // 0x1b3088: 0x1000005b  b           . + 4 + (0x5B << 2)
label_1b308c:
    if (ctx->pc == 0x1B308Cu) {
        ctx->pc = 0x1B3090u;
        goto label_1b3090;
    }
    ctx->pc = 0x1B3088u;
    {
        const bool branch_taken_0x1b3088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3088) {
            ctx->pc = 0x1B31F8u;
            goto label_1b31f8;
        }
    }
    ctx->pc = 0x1B3090u;
label_1b3090:
    // 0x1b3090: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1b3090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b3094:
    // 0x1b3094: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_1b3098:
    if (ctx->pc == 0x1B3098u) {
        ctx->pc = 0x1B309Cu;
        goto label_1b309c;
    }
    ctx->pc = 0x1B3094u;
    {
        const bool branch_taken_0x1b3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3094) {
            ctx->pc = 0x1B31F8u;
            goto label_1b31f8;
        }
    }
    ctx->pc = 0x1B309Cu;
label_1b309c:
    // 0x1b309c: 0x10a60030  beq         $a1, $a2, . + 4 + (0x30 << 2)
label_1b30a0:
    if (ctx->pc == 0x1B30A0u) {
        ctx->pc = 0x1B30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B309Cu;
        // 0x1b30a0: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30A4u;
        goto label_1b30a4;
    }
    ctx->pc = 0x1B309Cu;
    {
        const bool branch_taken_0x1b309c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B309Cu;
        // 0x1b30a0: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b309c) {
            ctx->pc = 0x1B3160u;
            goto label_1b3160;
        }
    }
    ctx->pc = 0x1B30A4u;
label_1b30a4:
    // 0x1b30a4: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x1b30a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
label_1b30a8:
    // 0x1b30a8: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x1b30a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
label_1b30ac:
    // 0x1b30ac: 0x2902ff82  slti        $v0, $t0, -0x7E
    ctx->pc = 0x1b30acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_1b30b0:
    // 0x1b30b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b30b4:
    if (ctx->pc == 0x1B30B4u) {
        ctx->pc = 0x1B30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30B0u;
        // 0x1b30b4: 0x2467ff81  addiu       $a3, $v1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30B8u;
        goto label_1b30b8;
    }
    ctx->pc = 0x1B30B0u;
    {
        const bool branch_taken_0x1b30b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30B0u;
        // 0x1b30b4: 0x2467ff81  addiu       $a3, $v1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30b0) {
            ctx->pc = 0x1B30C8u;
            goto label_1b30c8;
        }
    }
    ctx->pc = 0x1B30B8u;
label_1b30b8:
    // 0x1b30b8: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1b30b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1b30bc:
    // 0x1b30bc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1b30c0:
    // 0x1b30c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b30c4:
    if (ctx->pc == 0x1B30C4u) {
        ctx->pc = 0x1B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30C0u;
        // 0x1b30c4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30C8u;
        goto label_1b30c8;
    }
    ctx->pc = 0x1B30C0u;
    {
        const bool branch_taken_0x1b30c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30C0u;
        // 0x1b30c4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30c0) {
            ctx->pc = 0x1B30D4u;
            goto label_1b30d4;
        }
    }
    ctx->pc = 0x1B30C8u;
label_1b30c8:
    // 0x1b30c8: 0x2402ff82  addiu       $v0, $zero, -0x7E
    ctx->pc = 0x1b30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
label_1b30cc:
    // 0x1b30cc: 0x482023  subu        $a0, $v0, $t0
    ctx->pc = 0x1b30ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1b30d0:
    // 0x1b30d0: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1b30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_1b30d4:
    // 0x1b30d4: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x1b30d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_1b30d8:
    // 0x1b30d8: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
label_1b30dc:
    if (ctx->pc == 0x1B30DCu) {
        ctx->pc = 0x1B30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30D8u;
        // 0x1b30dc: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30E0u;
        goto label_1b30e0;
    }
    ctx->pc = 0x1B30D8u;
    {
        const bool branch_taken_0x1b30d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30D8u;
        // 0x1b30dc: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30d8) {
            ctx->pc = 0x1B30F8u;
            goto label_1b30f8;
        }
    }
    ctx->pc = 0x1B30E0u;
label_1b30e0:
    // 0x1b30e0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1b30e4:
    // 0x1b30e4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_1b30e8:
    // 0x1b30e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b30e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b30ec:
    // 0x1b30ec: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1b30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1b30f0:
    // 0x1b30f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b30f4:
    if (ctx->pc == 0x1B30F4u) {
        ctx->pc = 0x1B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30F0u;
        // 0x1b30f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B30F8u;
        goto label_1b30f8;
    }
    ctx->pc = 0x1B30F0u;
    {
        const bool branch_taken_0x1b30f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30F0u;
        // 0x1b30f4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30f0) {
            ctx->pc = 0x1B3100u;
            goto label_1b3100;
        }
    }
    ctx->pc = 0x1B30F8u;
label_1b30f8:
    // 0x1b30f8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x1b30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1b30fc:
    // 0x1b30fc: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x1b30fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_1b3100:
    // 0x1b3100: 0x1072023  subu        $a0, $t0, $a3
    ctx->pc = 0x1b3100u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1b3104:
    // 0x1b3104: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b3108:
    // 0x1b3108: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b3108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1b310c:
    // 0x1b310c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_1b3110:
    if (ctx->pc == 0x1B3110u) {
        ctx->pc = 0x1B3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B310Cu;
        // 0x1b3110: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3114u;
        goto label_1b3114;
    }
    ctx->pc = 0x1B310Cu;
    {
        const bool branch_taken_0x1b310c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B310Cu;
        // 0x1b3110: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b310c) {
            ctx->pc = 0x1B3150u;
            goto label_1b3150;
        }
    }
    ctx->pc = 0x1B3114u;
label_1b3114:
    // 0x1b3114: 0x0  nop
    ctx->pc = 0x1b3114u;
    // NOP
label_1b3118:
    // 0x1b3118: 0x0  nop
    ctx->pc = 0x1b3118u;
    // NOP
label_1b311c:
    // 0x1b311c: 0x0  nop
    ctx->pc = 0x1b311cu;
    // NOP
label_1b3120:
    // 0x1b3120: 0x0  nop
    ctx->pc = 0x1b3120u;
    // NOP
label_1b3124:
    // 0x1b3124: 0x460fff8  bltz        $v1, . + 4 + (-0x8 << 2)
label_1b3128:
    if (ctx->pc == 0x1B3128u) {
        ctx->pc = 0x1B3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3124u;
        // 0x1b3128: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B312Cu;
        goto label_1b312c;
    }
    ctx->pc = 0x1B3124u;
    {
        const bool branch_taken_0x1b3124 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3124u;
        // 0x1b3128: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3124) {
            ctx->pc = 0x1B3108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3108;
        }
    }
    ctx->pc = 0x1B312Cu;
label_1b312c:
    // 0x1b312c: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_1b3130:
    if (ctx->pc == 0x1B3130u) {
        ctx->pc = 0x1B3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B312Cu;
        // 0x1b3130: 0xa17c2  srl         $v0, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3134u;
        goto label_1b3134;
    }
    ctx->pc = 0x1B312Cu;
    {
        const bool branch_taken_0x1b312c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b312c) {
            ctx->pc = 0x1B3130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B312Cu;
            // 0x1b3130: 0xa17c2  srl         $v0, $t2, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3164u;
            goto label_1b3164;
        }
    }
    ctx->pc = 0x1B3134u;
label_1b3134:
    // 0x1b3134: 0x0  nop
    ctx->pc = 0x1b3134u;
    // NOP
label_1b3138:
    // 0x1b3138: 0x0  nop
    ctx->pc = 0x1b3138u;
    // NOP
label_1b313c:
    // 0x1b313c: 0x0  nop
    ctx->pc = 0x1b313cu;
    // NOP
label_1b3140:
    // 0x1b3140: 0x0  nop
    ctx->pc = 0x1b3140u;
    // NOP
label_1b3144:
    // 0x1b3144: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_1b3148:
    if (ctx->pc == 0x1B3148u) {
        ctx->pc = 0x1B3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3144u;
        // 0x1b3148: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B314Cu;
        goto label_1b314c;
    }
    ctx->pc = 0x1B3144u;
    {
        const bool branch_taken_0x1b3144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3144u;
        // 0x1b3148: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3144) {
            ctx->pc = 0x1B3108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3108;
        }
    }
    ctx->pc = 0x1B314Cu;
label_1b314c:
    // 0x1b314c: 0x0  nop
    ctx->pc = 0x1b314cu;
    // NOP
label_1b3150:
    // 0x1b3150: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1b3150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b3154:
    // 0x1b3154: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1b3154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_1b3158:
    // 0x1b3158: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_1b315c:
    if (ctx->pc == 0x1B315Cu) {
        ctx->pc = 0x1B315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3158u;
        // 0x1b315c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3160u;
        goto label_1b3160;
    }
    ctx->pc = 0x1B3158u;
    {
        const bool branch_taken_0x1b3158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3158u;
        // 0x1b315c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3158) {
            ctx->pc = 0x1B3180u;
            goto label_1b3180;
        }
    }
    ctx->pc = 0x1B3160u;
label_1b3160:
    // 0x1b3160: 0xa17c2  srl         $v0, $t2, 31
    ctx->pc = 0x1b3160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_1b3164:
    // 0x1b3164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b3168:
    // 0x1b3168: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b3168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1b316c:
    // 0x1b316c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b316cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1b3170:
    // 0x1b3170: 0xc420ad70  lwc1        $f0, -0x5290($at)
    ctx->pc = 0x1b3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3174:
    // 0x1b3174: 0x10000020  b           . + 4 + (0x20 << 2)
label_1b3178:
    if (ctx->pc == 0x1B3178u) {
        ctx->pc = 0x1B317Cu;
        goto label_1b317c;
    }
    ctx->pc = 0x1B3174u;
    {
        const bool branch_taken_0x1b3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3174) {
            ctx->pc = 0x1B31F8u;
            goto label_1b31f8;
        }
    }
    ctx->pc = 0x1B317Cu;
label_1b317c:
    // 0x1b317c: 0x0  nop
    ctx->pc = 0x1b317cu;
    // NOP
label_1b3180:
    // 0x1b3180: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b3184:
    // 0x1b3184: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1b3184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b3188:
    // 0x1b3188: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1b318c:
    if (ctx->pc == 0x1B318Cu) {
        ctx->pc = 0x1B3190u;
        goto label_1b3190;
    }
    ctx->pc = 0x1B3188u;
    {
        const bool branch_taken_0x1b3188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3188) {
            ctx->pc = 0x1B31B8u;
            goto label_1b31b8;
        }
    }
    ctx->pc = 0x1B3190u;
label_1b3190:
    // 0x1b3190: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b3190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_1b3194:
    // 0x1b3194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3198:
    // 0x1b3198: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1b3198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1b319c:
    // 0x1b319c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1b319cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b31a0:
    // 0x1b31a0: 0x0  nop
    ctx->pc = 0x1b31a0u;
    // NOP
label_1b31a4:
    // 0x1b31a4: 0x0  nop
    ctx->pc = 0x1b31a4u;
    // NOP
label_1b31a8:
    // 0x1b31a8: 0x0  nop
    ctx->pc = 0x1b31a8u;
    // NOP
label_1b31ac:
    // 0x1b31ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1b31b0:
    if (ctx->pc == 0x1B31B0u) {
        ctx->pc = 0x1B31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31ACu;
        // 0x1b31b0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B31B4u;
        goto label_1b31b4;
    }
    ctx->pc = 0x1B31ACu;
    {
        const bool branch_taken_0x1b31ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31ACu;
        // 0x1b31b0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31ac) {
            ctx->pc = 0x1B3198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3198;
        }
    }
    ctx->pc = 0x1B31B4u;
label_1b31b4:
    // 0x1b31b4: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x1b31b4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_1b31b8:
    // 0x1b31b8: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
label_1b31bc:
    if (ctx->pc == 0x1B31BCu) {
        ctx->pc = 0x1B31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31B8u;
        // 0x1b31bc: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B31C0u;
        goto label_1b31c0;
    }
    ctx->pc = 0x1B31B8u;
    {
        const bool branch_taken_0x1b31b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31B8u;
        // 0x1b31bc: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31b8) {
            ctx->pc = 0x1B31E8u;
            goto label_1b31e8;
        }
    }
    ctx->pc = 0x1B31C0u;
label_1b31c0:
    // 0x1b31c0: 0x24e3007f  addiu       $v1, $a3, 0x7F
    ctx->pc = 0x1b31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
label_1b31c4:
    // 0x1b31c4: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1b31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
label_1b31c8:
    // 0x1b31c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1b31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b31cc:
    // 0x1b31cc: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1b31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
label_1b31d0:
    // 0x1b31d0: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1b31d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b31d4:
    // 0x1b31d4: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1b31d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_1b31d8:
    // 0x1b31d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b31d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b31dc:
    // 0x1b31dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b31e0:
    if (ctx->pc == 0x1B31E0u) {
        ctx->pc = 0x1B31E4u;
        goto label_1b31e4;
    }
    ctx->pc = 0x1B31DCu;
    {
        const bool branch_taken_0x1b31dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b31dc) {
            ctx->pc = 0x1B31F8u;
            goto label_1b31f8;
        }
    }
    ctx->pc = 0x1B31E4u;
label_1b31e4:
    // 0x1b31e4: 0x0  nop
    ctx->pc = 0x1b31e4u;
    // NOP
label_1b31e8:
    // 0x1b31e8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x1b31e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1b31ec:
    // 0x1b31ec: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x1b31ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_1b31f0:
    // 0x1b31f0: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1b31f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_1b31f4:
    // 0x1b31f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b31f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b31f8:
    // 0x1b31f8: 0x3e00008  jr          $ra
label_1b31fc:
    if (ctx->pc == 0x1B31FCu) {
        ctx->pc = 0x1B31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31F8u;
        // 0x1b31fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3200u;
        goto label_1b3200;
    }
    ctx->pc = 0x1B31F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31F8u;
        // 0x1b31fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B31F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3200u;
label_1b3200:
    // 0x1b3200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b3200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b3204:
    // 0x1b3204: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1b3204u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1b3208:
    // 0x1b3208: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1b3208u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_1b320c:
    // 0x1b320c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1b320cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1b3210:
    // 0x1b3210: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b3210u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1b3214:
    // 0x1b3214: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b3214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1b3218:
    // 0x1b3218: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b3218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1b321c:
    // 0x1b321c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b3220:
    // 0x1b3220: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1b3220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1b3224:
    // 0x1b3224: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b3224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1b3228:
    // 0x1b3228: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1b3228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1b322c:
    // 0x1b322c: 0x4413a000  mfc1        $s3, $f20
    ctx->pc = 0x1b322cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
label_1b3230:
    // 0x1b3230: 0x4412a800  mfc1        $s2, $f21
    ctx->pc = 0x1b3230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_1b3234:
    // 0x1b3234: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b3234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b3238:
    // 0x1b3238: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b3238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_1b323c:
    // 0x1b323c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b323cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b3240:
    // 0x1b3240: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3244:
    // 0x1b3244: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x1b3244u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_1b3248:
    // 0x1b3248: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1b3248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b324c:
    // 0x1b324c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b3250:
    // 0x1b3250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3254:
    // 0x1b3254: 0x106001e7  beqz        $v1, . + 4 + (0x1E7 << 2)
label_1b3258:
    if (ctx->pc == 0x1B3258u) {
        ctx->pc = 0x1B3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3254u;
        // 0x1b3258: 0x2628824  and         $s1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B325Cu;
        goto label_1b325c;
    }
    ctx->pc = 0x1B3254u;
    {
        const bool branch_taken_0x1b3254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3254u;
        // 0x1b3258: 0x2628824  and         $s1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3254) {
            ctx->pc = 0x1B39F4u;
            { ctx->pc = 0x1b39f4; return; }
        }
    }
    ctx->pc = 0x1B325Cu;
label_1b325c:
    // 0x1b325c: 0x6610016  bgez        $s3, . + 4 + (0x16 << 2)
label_1b3260:
    if (ctx->pc == 0x1B3260u) {
        ctx->pc = 0x1B3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B325Cu;
        // 0x1b3260: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3264u;
        goto label_1b3264;
    }
    ctx->pc = 0x1B325Cu;
    {
        const bool branch_taken_0x1b325c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1B3260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B325Cu;
        // 0x1b3260: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b325c) {
            ctx->pc = 0x1B32B8u;
            goto label_1b32b8;
        }
    }
    ctx->pc = 0x1B3264u;
label_1b3264:
    // 0x1b3264: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x1b3264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
label_1b3268:
    // 0x1b3268: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b326c:
    // 0x1b326c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b326cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b3270:
    // 0x1b3270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b3274:
    if (ctx->pc == 0x1B3274u) {
        ctx->pc = 0x1B3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3270u;
        // 0x1b3274: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3278u;
        goto label_1b3278;
    }
    ctx->pc = 0x1B3270u;
    {
        const bool branch_taken_0x1b3270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3270u;
        // 0x1b3274: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3270) {
            ctx->pc = 0x1B3280u;
            goto label_1b3280;
        }
    }
    ctx->pc = 0x1B3278u;
label_1b3278:
    // 0x1b3278: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b327c:
    if (ctx->pc == 0x1B327Cu) {
        ctx->pc = 0x1B327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3278u;
        // 0x1b327c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3280u;
        goto label_1b3280;
    }
    ctx->pc = 0x1B3278u;
    {
        const bool branch_taken_0x1b3278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3278u;
        // 0x1b327c: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3278) {
            ctx->pc = 0x1B32B8u;
            goto label_1b32b8;
        }
    }
    ctx->pc = 0x1B3280u;
label_1b3280:
    // 0x1b3280: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b3284:
    // 0x1b3284: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b3284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b3288:
    // 0x1b3288: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b328c:
    if (ctx->pc == 0x1B328Cu) {
        ctx->pc = 0x1B328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3288u;
        // 0x1b328c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3290u;
        goto label_1b3290;
    }
    ctx->pc = 0x1B3288u;
    {
        const bool branch_taken_0x1b3288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3288u;
        // 0x1b328c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3288) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B3290u;
label_1b3290:
    // 0x1b3290: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x1b3290u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
label_1b3294:
    // 0x1b3294: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1b3294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1b3298:
    // 0x1b3298: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b3298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b329c:
    // 0x1b329c: 0x502007  srav        $a0, $s0, $v0
    ctx->pc = 0x1b329cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
label_1b32a0:
    // 0x1b32a0: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1b32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_1b32a4:
    // 0x1b32a4: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_1b32a8:
    if (ctx->pc == 0x1B32A8u) {
        ctx->pc = 0x1B32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32A4u;
        // 0x1b32a8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B32ACu;
        goto label_1b32ac;
    }
    ctx->pc = 0x1B32A4u;
    {
        const bool branch_taken_0x1b32a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32A4u;
        // 0x1b32a8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32a4) {
            ctx->pc = 0x1B32BCu;
            goto label_1b32bc;
        }
    }
    ctx->pc = 0x1B32ACu;
label_1b32ac:
    // 0x1b32ac: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1b32acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1b32b0:
    // 0x1b32b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b32b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b32b4:
    // 0x1b32b4: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x1b32b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b32b8:
    // 0x1b32b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b32bc:
    // 0x1b32bc: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
label_1b32c0:
    if (ctx->pc == 0x1B32C0u) {
        ctx->pc = 0x1B32C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32BCu;
        // 0x1b32c0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B32C4u;
        goto label_1b32c4;
    }
    ctx->pc = 0x1B32BCu;
    {
        const bool branch_taken_0x1b32bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b32bc) {
            ctx->pc = 0x1B32C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B32BCu;
            // 0x1b32c0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B32E8u;
            goto label_1b32e8;
        }
    }
    ctx->pc = 0x1B32C4u;
label_1b32c4:
    // 0x1b32c4: 0x64301cb  bgezl       $s2, . + 4 + (0x1CB << 2)
label_1b32c8:
    if (ctx->pc == 0x1B32C8u) {
        ctx->pc = 0x1B32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32C4u;
        // 0x1b32c8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B32CCu;
        goto label_1b32cc;
    }
    ctx->pc = 0x1B32C4u;
    {
        const bool branch_taken_0x1b32c4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1b32c4) {
            ctx->pc = 0x1B32C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B32C4u;
            // 0x1b32c8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B39F4u;
            { ctx->pc = 0x1b39f4; return; }
        }
    }
    ctx->pc = 0x1B32CCu;
label_1b32cc:
    // 0x1b32cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b32ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b32d0:
    // 0x1b32d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b32d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b32d4:
    // 0x1b32d4: 0x0  nop
    ctx->pc = 0x1b32d4u;
    // NOP
label_1b32d8:
    // 0x1b32d8: 0x0  nop
    ctx->pc = 0x1b32d8u;
    // NOP
label_1b32dc:
    // 0x1b32dc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1b32dcu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
label_1b32e0:
    // 0x1b32e0: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_1b32e4:
    if (ctx->pc == 0x1B32E4u) {
        ctx->pc = 0x1B32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32E0u;
        // 0x1b32e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B32E8u;
        goto label_1b32e8;
    }
    ctx->pc = 0x1B32E0u;
    {
        const bool branch_taken_0x1b32e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32E0u;
        // 0x1b32e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32e0) {
            ctx->pc = 0x1B39F8u;
            { ctx->pc = 0x1b39f8; return; }
        }
    }
    ctx->pc = 0x1B32E8u;
label_1b32e8:
    // 0x1b32e8: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_1b32ec:
    if (ctx->pc == 0x1B32ECu) {
        ctx->pc = 0x1B32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32E8u;
        // 0x1b32ec: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B32F0u;
        goto label_1b32f0;
    }
    ctx->pc = 0x1B32E8u;
    {
        const bool branch_taken_0x1b32e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32E8u;
        // 0x1b32ec: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32e8) {
            ctx->pc = 0x1B32F8u;
            goto label_1b32f8;
        }
    }
    ctx->pc = 0x1B32F0u;
label_1b32f0:
    // 0x1b32f0: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_1b32f4:
    if (ctx->pc == 0x1B32F4u) {
        ctx->pc = 0x1B32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32F0u;
        // 0x1b32f4: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B32F8u;
        goto label_1b32f8;
    }
    ctx->pc = 0x1B32F0u;
    {
        const bool branch_taken_0x1b32f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32F0u;
        // 0x1b32f4: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32f0) {
            ctx->pc = 0x1B39F4u;
            { ctx->pc = 0x1b39f4; return; }
        }
    }
    ctx->pc = 0x1B32F8u;
label_1b32f8:
    // 0x1b32f8: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
label_1b32fc:
    if (ctx->pc == 0x1B32FCu) {
        ctx->pc = 0x1B3300u;
        goto label_1b3300;
    }
    ctx->pc = 0x1B32F8u;
    {
        const bool branch_taken_0x1b32f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b32f8) {
            ctx->pc = 0x1B3330u;
            goto label_1b3330;
        }
    }
    ctx->pc = 0x1B3300u;
label_1b3300:
    // 0x1b3300: 0x660000b  bltz        $s3, . + 4 + (0xB << 2)
label_1b3304:
    if (ctx->pc == 0x1B3304u) {
        ctx->pc = 0x1B3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3300u;
        // 0x1b3304: 0xdfbf0048  ld          $ra, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3308u;
        goto label_1b3308;
    }
    ctx->pc = 0x1B3300u;
    {
        const bool branch_taken_0x1b3300 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3300u;
        // 0x1b3304: 0xdfbf0048  ld          $ra, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3300) {
            ctx->pc = 0x1B3330u;
            goto label_1b3330;
        }
    }
    ctx->pc = 0x1B3308u;
label_1b3308:
    // 0x1b3308: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b3308u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b330c:
    // 0x1b330c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b3310:
    // 0x1b3310: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b3310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b3314:
    // 0x1b3314: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b3314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b3318:
    // 0x1b3318: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b3318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b331c:
    // 0x1b331c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b331cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b3320:
    // 0x1b3320: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b3320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b3324:
    // 0x1b3324: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1b3324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b3328:
    // 0x1b3328: 0x806cf7a  j           func_1B3DE8
label_1b332c:
    if (ctx->pc == 0x1B332Cu) {
        ctx->pc = 0x1B332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3328u;
        // 0x1b332c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3330u;
        goto label_1b3330;
    }
    ctx->pc = 0x1B3328u;
    ctx->pc = 0x1B332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3328u;
    // 0x1b332c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DE8u;
    { ctx->pc = 0x1b3de8; return; }
    ctx->pc = 0x1B3330u;
label_1b3330:
    // 0x1b3330: 0xc06d448  jal         func_1B5120
label_1b3334:
    if (ctx->pc == 0x1B3334u) {
        ctx->pc = 0x1B3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3330u;
        // 0x1b3334: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3338u;
        goto label_1b3338;
    }
    ctx->pc = 0x1B3330u;
    SET_GPR_U32(ctx, 31, 0x1B3338u);
    ctx->pc = 0x1B3334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3330u;
    // 0x1b3334: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1B3338u;
label_1b3338:
    // 0x1b3338: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b3338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_1b333c:
    // 0x1b333c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3340:
    // 0x1b3340: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x1b3340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1b3344:
    // 0x1b3344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b3348:
    if (ctx->pc == 0x1B3348u) {
        ctx->pc = 0x1B3348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3344u;
        // 0x1b3348: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B334Cu;
        goto label_1b334c;
    }
    ctx->pc = 0x1B3344u;
    {
        const bool branch_taken_0x1b3344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3344u;
        // 0x1b3348: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3344) {
            ctx->pc = 0x1B3358u;
            goto label_1b3358;
        }
    }
    ctx->pc = 0x1B334Cu;
label_1b334c:
    // 0x1b334c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1b334cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1b3350:
    // 0x1b3350: 0x16250019  bne         $s1, $a1, . + 4 + (0x19 << 2)
label_1b3354:
    if (ctx->pc == 0x1B3354u) {
        ctx->pc = 0x1B3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3350u;
        // 0x1b3354: 0x134fc2  srl         $t1, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3358u;
        goto label_1b3358;
    }
    ctx->pc = 0x1B3350u;
    {
        const bool branch_taken_0x1b3350 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3350u;
        // 0x1b3354: 0x134fc2  srl         $t1, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3350) {
            ctx->pc = 0x1B33B8u;
            goto label_1b33b8;
        }
    }
    ctx->pc = 0x1B3358u;
label_1b3358:
    // 0x1b3358: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
label_1b335c:
    if (ctx->pc == 0x1B335Cu) {
        ctx->pc = 0x1B335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3358u;
        // 0x1b335c: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3360u;
        goto label_1b3360;
    }
    ctx->pc = 0x1B3358u;
    {
        const bool branch_taken_0x1b3358 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3358u;
        // 0x1b335c: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3358) {
            ctx->pc = 0x1B3374u;
            goto label_1b3374;
        }
    }
    ctx->pc = 0x1B3360u;
label_1b3360:
    // 0x1b3360: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b3364:
    // 0x1b3364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3368:
    // 0x1b3368: 0x0  nop
    ctx->pc = 0x1b3368u;
    // NOP
label_1b336c:
    // 0x1b336c: 0x0  nop
    ctx->pc = 0x1b336cu;
    // NOP
label_1b3370:
    // 0x1b3370: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x1b3370u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[4];
label_1b3374:
    // 0x1b3374: 0x661019f  bgez        $s3, . + 4 + (0x19F << 2)
label_1b3378:
    if (ctx->pc == 0x1B3378u) {
        ctx->pc = 0x1B3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3374u;
        // 0x1b3378: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B337Cu;
        goto label_1b337c;
    }
    ctx->pc = 0x1B3374u;
    {
        const bool branch_taken_0x1b3374 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1B3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3374u;
        // 0x1b3378: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3374) {
            ctx->pc = 0x1B39F4u;
            { ctx->pc = 0x1b39f4; return; }
        }
    }
    ctx->pc = 0x1B337Cu;
label_1b337c:
    // 0x1b337c: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1b337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_1b3380:
    // 0x1b3380: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1b3384:
    // 0x1b3384: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x1b3384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_1b3388:
    // 0x1b3388: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b338c:
    if (ctx->pc == 0x1B338Cu) {
        ctx->pc = 0x1B338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3388u;
        // 0x1b338c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3390u;
        goto label_1b3390;
    }
    ctx->pc = 0x1B3388u;
    {
        const bool branch_taken_0x1b3388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3388u;
        // 0x1b338c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3388) {
            ctx->pc = 0x1B33A8u;
            goto label_1b33a8;
        }
    }
    ctx->pc = 0x1B3390u;
label_1b3390:
    // 0x1b3390: 0x46042001  sub.s       $f0, $f4, $f4
    ctx->pc = 0x1b3390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[4]);
label_1b3394:
    // 0x1b3394: 0x0  nop
    ctx->pc = 0x1b3394u;
    // NOP
label_1b3398:
    // 0x1b3398: 0x0  nop
    ctx->pc = 0x1b3398u;
    // NOP
label_1b339c:
    // 0x1b339c: 0x46000103  div.s       $f4, $f0, $f0
    ctx->pc = 0x1b339cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[0];
label_1b33a0:
    // 0x1b33a0: 0x10000194  b           . + 4 + (0x194 << 2)
label_1b33a4:
    if (ctx->pc == 0x1B33A4u) {
        ctx->pc = 0x1B33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33A0u;
        // 0x1b33a4: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B33A8u;
        goto label_1b33a8;
    }
    ctx->pc = 0x1B33A0u;
    {
        const bool branch_taken_0x1b33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33A0u;
        // 0x1b33a4: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33a0) {
            ctx->pc = 0x1B39F4u;
            { ctx->pc = 0x1b39f4; return; }
        }
    }
    ctx->pc = 0x1B33A8u;
label_1b33a8:
    // 0x1b33a8: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
label_1b33ac:
    if (ctx->pc == 0x1B33ACu) {
        ctx->pc = 0x1B33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33A8u;
        // 0x1b33ac: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B33B0u;
        goto label_1b33b0;
    }
    ctx->pc = 0x1B33A8u;
    {
        const bool branch_taken_0x1b33a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b33a8) {
            ctx->pc = 0x1B33ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B33A8u;
            // 0x1b33ac: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B33B0u;
            goto label_1b33b0;
        }
    }
    ctx->pc = 0x1B33B0u;
label_1b33b0:
    // 0x1b33b0: 0x10000190  b           . + 4 + (0x190 << 2)
label_1b33b4:
    if (ctx->pc == 0x1B33B4u) {
        ctx->pc = 0x1B33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33B0u;
        // 0x1b33b4: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B33B8u;
        goto label_1b33b8;
    }
    ctx->pc = 0x1B33B0u;
    {
        const bool branch_taken_0x1b33b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33B0u;
        // 0x1b33b4: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33b0) {
            ctx->pc = 0x1B39F4u;
            { ctx->pc = 0x1b39f4; return; }
        }
    }
    ctx->pc = 0x1B33B8u;
label_1b33b8:
    // 0x1b33b8: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x1b33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1b33bc:
    // 0x1b33bc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x1b33bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_1b33c0:
    // 0x1b33c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b33c4:
    if (ctx->pc == 0x1B33C4u) {
        ctx->pc = 0x1B33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33C0u;
        // 0x1b33c4: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B33C8u;
        goto label_1b33c8;
    }
    ctx->pc = 0x1B33C0u;
    {
        const bool branch_taken_0x1b33c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33C0u;
        // 0x1b33c4: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33c0) {
            ctx->pc = 0x1B33E0u;
            goto label_1b33e0;
        }
    }
    ctx->pc = 0x1B33C8u;
label_1b33c8:
    // 0x1b33c8: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x1b33c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
label_1b33cc:
    // 0x1b33cc: 0x0  nop
    ctx->pc = 0x1b33ccu;
    // NOP
label_1b33d0:
    // 0x1b33d0: 0x0  nop
    ctx->pc = 0x1b33d0u;
    // NOP
label_1b33d4:
    // 0x1b33d4: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b33d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_1b33d8:
    // 0x1b33d8: 0x10000187  b           . + 4 + (0x187 << 2)
label_1b33dc:
    if (ctx->pc == 0x1B33DCu) {
        ctx->pc = 0x1B33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33D8u;
        // 0x1b33dc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B33E0u;
        goto label_1b33e0;
    }
    ctx->pc = 0x1B33D8u;
    {
        const bool branch_taken_0x1b33d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33D8u;
        // 0x1b33dc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33d8) {
            ctx->pc = 0x1B39F8u;
            { ctx->pc = 0x1b39f8; return; }
        }
    }
    ctx->pc = 0x1B33E0u;
label_1b33e0:
    // 0x1b33e0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b33e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b33e4:
    // 0x1b33e4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1b33e8:
    if (ctx->pc == 0x1B33E8u) {
        ctx->pc = 0x1B33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33E4u;
        // 0x1b33e8: 0x3c02001c  lui         $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B33ECu;
        goto label_1b33ec;
    }
    ctx->pc = 0x1B33E4u;
    {
        const bool branch_taken_0x1b33e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33E4u;
        // 0x1b33e8: 0x3c02001c  lui         $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33e4) {
            ctx->pc = 0x1B34E0u;
            goto label_1b34e0;
        }
    }
    ctx->pc = 0x1B33ECu;
label_1b33ec:
    // 0x1b33ec: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x1b33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_1b33f0:
    // 0x1b33f0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x1b33f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
label_1b33f4:
    // 0x1b33f4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1b33f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1b33f8:
    // 0x1b33f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b33fc:
    if (ctx->pc == 0x1B33FCu) {
        ctx->pc = 0x1B33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33F8u;
        // 0x1b33fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3400u;
        goto label_1b3400;
    }
    ctx->pc = 0x1B33F8u;
    {
        const bool branch_taken_0x1b33f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33F8u;
        // 0x1b33fc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33f8) {
            ctx->pc = 0x1B3410u;
            goto label_1b3410;
        }
    }
    ctx->pc = 0x1B3400u;
label_1b3400:
    // 0x1b3400: 0x641000b  bgez        $s2, . + 4 + (0xB << 2)
label_1b3404:
    if (ctx->pc == 0x1B3404u) {
        ctx->pc = 0x1B3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3400u;
        // 0x1b3404: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3408u;
        goto label_1b3408;
    }
    ctx->pc = 0x1B3400u;
    {
        const bool branch_taken_0x1b3400 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3400u;
        // 0x1b3404: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3400) {
            ctx->pc = 0x1B3430u;
            goto label_1b3430;
        }
    }
    ctx->pc = 0x1B3408u;
label_1b3408:
    // 0x1b3408: 0x1000017a  b           . + 4 + (0x17A << 2)
label_1b340c:
    if (ctx->pc == 0x1B340Cu) {
        ctx->pc = 0x1B340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3408u;
        // 0x1b340c: 0xc440adfc  lwc1        $f0, -0x5204($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3410u;
        goto label_1b3410;
    }
    ctx->pc = 0x1B3408u;
    {
        const bool branch_taken_0x1b3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3408u;
        // 0x1b340c: 0xc440adfc  lwc1        $f0, -0x5204($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3408) {
            ctx->pc = 0x1B39F4u;
            { ctx->pc = 0x1b39f4; return; }
        }
    }
    ctx->pc = 0x1B3410u;
label_1b3410:
    // 0x1b3410: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x1b3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_1b3414:
    // 0x1b3414: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1b3414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1b3418:
    // 0x1b3418: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1b341c:
    if (ctx->pc == 0x1B341Cu) {
        ctx->pc = 0x1B341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3418u;
        // 0x1b341c: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3420u;
        goto label_1b3420;
    }
    ctx->pc = 0x1B3418u;
    {
        const bool branch_taken_0x1b3418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3418u;
        // 0x1b341c: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3418) {
            ctx->pc = 0x1B3440u;
            goto label_1b3440;
        }
    }
    ctx->pc = 0x1B3420u;
label_1b3420:
    // 0x1b3420: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
label_1b3424:
    if (ctx->pc == 0x1B3424u) {
        ctx->pc = 0x1B3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3420u;
        // 0x1b3424: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3428u;
        goto label_1b3428;
    }
    ctx->pc = 0x1B3420u;
    {
        const bool branch_taken_0x1b3420 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1B3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3420u;
        // 0x1b3424: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3420) {
            ctx->pc = 0x1B3430u;
            goto label_1b3430;
        }
    }
    ctx->pc = 0x1B3428u;
label_1b3428:
    // 0x1b3428: 0x10000172  b           . + 4 + (0x172 << 2)
label_1b342c:
    if (ctx->pc == 0x1B342Cu) {
        ctx->pc = 0x1B342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3428u;
        // 0x1b342c: 0xc440adfc  lwc1        $f0, -0x5204($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3430u;
        goto label_1b3430;
    }
    ctx->pc = 0x1B3428u;
    {
        const bool branch_taken_0x1b3428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3428u;
        // 0x1b342c: 0xc440adfc  lwc1        $f0, -0x5204($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3428) {
            ctx->pc = 0x1B39F4u;
            { ctx->pc = 0x1b39f4; return; }
        }
    }
    ctx->pc = 0x1B3430u;
label_1b3430:
    // 0x1b3430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b3430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3434:
    // 0x1b3434: 0x10000170  b           . + 4 + (0x170 << 2)
label_1b3438:
    if (ctx->pc == 0x1B3438u) {
        ctx->pc = 0x1B3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3434u;
        // 0x1b3438: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B343Cu;
        goto label_1b343c;
    }
    ctx->pc = 0x1B3434u;
    {
        const bool branch_taken_0x1b3434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3434u;
        // 0x1b3438: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3434) {
            ctx->pc = 0x1B39F8u;
            { ctx->pc = 0x1b39f8; return; }
        }
    }
    ctx->pc = 0x1B343Cu;
label_1b343c:
    // 0x1b343c: 0x0  nop
    ctx->pc = 0x1b343cu;
    // NOP
label_1b3440:
    // 0x1b3440: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b3444:
    // 0x1b3444: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3448:
    // 0x1b3448: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1b3448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1b344c:
    // 0x1b344c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b344cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3450:
    // 0x1b3450: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x1b3450u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_1b3454:
    // 0x1b3454: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b3458:
    // 0x1b3458: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b345c:
    // 0x1b345c: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1b345cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
label_1b3460:
    // 0x1b3460: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b3460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b3464:
    // 0x1b3464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3468:
    // 0x1b3468: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
label_1b346c:
    // 0x1b346c: 0x3421a570  ori         $at, $at, 0xA570
    ctx->pc = 0x1b346cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42352);
label_1b3470:
    // 0x1b3470: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b3470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b3474:
    // 0x1b3474: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x1b3474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
label_1b3478:
    // 0x1b3478: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x1b3478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
label_1b347c:
    // 0x1b347c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b347cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b3480:
    // 0x1b3480: 0x0  nop
    ctx->pc = 0x1b3480u;
    // NOP
label_1b3484:
    // 0x1b3484: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x1b3484u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_1b3488:
    // 0x1b3488: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x1b3488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
label_1b348c:
    // 0x1b348c: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x1b348cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
label_1b3490:
    // 0x1b3490: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b3490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b3494:
    // 0x1b3494: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x1b3494u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1b3498:
    // 0x1b3498: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x1b3498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
label_1b349c:
    // 0x1b349c: 0x46056402  mul.s       $f16, $f12, $f5
    ctx->pc = 0x1b349cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
label_1b34a0:
    // 0x1b34a0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b34a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b34a4:
    // 0x1b34a4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b34a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b34a8:
    // 0x1b34a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b34a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b34ac:
    // 0x1b34ac: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1b34acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_1b34b0:
    // 0x1b34b0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x1b34b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1b34b4:
    // 0x1b34b4: 0x46032341  sub.s       $f13, $f4, $f3
    ctx->pc = 0x1b34b4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b34b8:
    // 0x1b34b8: 0x460d8000  add.s       $f0, $f16, $f13
    ctx->pc = 0x1b34b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
label_1b34bc:
    // 0x1b34bc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b34bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b34c0:
    // 0x1b34c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b34c4:
    // 0x1b34c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b34c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b34c8:
    // 0x1b34c8: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x1b34c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b34cc:
    // 0x1b34cc: 0x0  nop
    ctx->pc = 0x1b34ccu;
    // NOP
label_1b34d0:
    // 0x1b34d0: 0x46103001  sub.s       $f0, $f6, $f16
    ctx->pc = 0x1b34d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[16]);
label_1b34d4:
    // 0x1b34d4: 0x10000094  b           . + 4 + (0x94 << 2)
label_1b34d8:
    if (ctx->pc == 0x1B34D8u) {
        ctx->pc = 0x1B34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34D4u;
        // 0x1b34d8: 0x46006881  sub.s       $f2, $f13, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B34DCu;
        goto label_1b34dc;
    }
    ctx->pc = 0x1B34D4u;
    {
        const bool branch_taken_0x1b34d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34D4u;
        // 0x1b34d8: 0x46006881  sub.s       $f2, $f13, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34d4) {
            ctx->pc = 0x1B3728u;
            { ctx->pc = 0x1b3728; return; }
        }
    }
    ctx->pc = 0x1B34DCu;
label_1b34dc:
    // 0x1b34dc: 0x0  nop
    ctx->pc = 0x1b34dcu;
    // NOP
label_1b34e0:
    // 0x1b34e0: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x1b34e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_1b34e4:
    // 0x1b34e4: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x1b34e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
label_1b34e8:
    // 0x1b34e8: 0x111dc3  sra         $v1, $s1, 23
    ctx->pc = 0x1b34e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
label_1b34ec:
    // 0x1b34ec: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1b34ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b34f0:
    // 0x1b34f0: 0x2468ff81  addiu       $t0, $v1, -0x7F
    ctx->pc = 0x1b34f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
label_1b34f4:
    // 0x1b34f4: 0x858825  or          $s1, $a0, $a1
    ctx->pc = 0x1b34f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1b34f8:
    // 0x1b34f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b34fc:
    if (ctx->pc == 0x1B34FCu) {
        ctx->pc = 0x1B34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34F8u;
        // 0x1b34fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3500u;
        goto label_1b3500;
    }
    ctx->pc = 0x1B34F8u;
    {
        const bool branch_taken_0x1b34f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34F8u;
        // 0x1b34fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34f8) {
            ctx->pc = 0x1B3524u;
            goto label_1b3524;
        }
    }
    ctx->pc = 0x1B3500u;
label_1b3500:
    // 0x1b3500: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b3500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1b3504:
    // 0x1b3504: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x1b3504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
label_1b3508:
    // 0x1b3508: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1b3508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b350c:
    // 0x1b350c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b3510:
    if (ctx->pc == 0x1B3510u) {
        ctx->pc = 0x1B3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B350Cu;
        // 0x1b3510: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3514u;
        goto label_1b3514;
    }
    ctx->pc = 0x1B350Cu;
    {
        const bool branch_taken_0x1b350c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B350Cu;
        // 0x1b3510: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b350c) {
            ctx->pc = 0x1B3524u;
            goto label_1b3524;
        }
    }
    ctx->pc = 0x1B3514u;
label_1b3514:
    // 0x1b3514: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1b3514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
label_1b3518:
    // 0x1b3518: 0x2468ff82  addiu       $t0, $v1, -0x7E
    ctx->pc = 0x1b3518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967170));
label_1b351c:
    // 0x1b351c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1b351cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1b3520:
    // 0x1b3520: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b3520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3524:
    // 0x1b3524: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x1b3524u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3528:
    // 0x1b3528: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1b3528u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1b352c:
    // 0x1b352c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b3530:
    // 0x1b3530: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3534:
    // 0x1b3534: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b3534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1b3538:
    // 0x1b3538: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
label_1b353c:
    // 0x1b353c: 0xc421ad78  lwc1        $f1, -0x5288($at)
    ctx->pc = 0x1b353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3540:
    // 0x1b3540: 0x46016000  add.s       $f0, $f12, $f1
    ctx->pc = 0x1b3540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_1b3544:
    // 0x1b3544: 0x46016401  sub.s       $f16, $f12, $f1
    ctx->pc = 0x1b3544u;
    ctx->f[16] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_1b3548:
    // 0x1b3548: 0x0  nop
    ctx->pc = 0x1b3548u;
    // NOP
label_1b354c:
    // 0x1b354c: 0x0  nop
    ctx->pc = 0x1b354cu;
    // NOP
label_1b3550:
    // 0x1b3550: 0x46001343  div.s       $f13, $f2, $f0
    ctx->pc = 0x1b3550u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[13] = ctx->f[2] / ctx->f[0];
label_1b3554:
    // 0x1b3554: 0x460d8502  mul.s       $f20, $f16, $f13
    ctx->pc = 0x1b3554u;
    ctx->f[20] = FPU_MUL_S(ctx->f[16], ctx->f[13]);
label_1b3558:
    // 0x1b3558: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1b3558u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1b355c:
    // 0x1b355c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b355cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b3560:
    // 0x1b3560: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x1b3560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_1b3564:
    // 0x1b3564: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b3564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b3568:
    // 0x1b3568: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1b356c:
    // 0x1b356c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1b356cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b3570:
    // 0x1b3570: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1b3570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_1b3574:
    // 0x1b3574: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1b3574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1b3578:
    // 0x1b3578: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b3578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b357c:
    // 0x1b357c: 0x72540  sll         $a0, $a3, 21
    ctx->pc = 0x1b357cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
label_1b3580:
    // 0x1b3580: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b3580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b3584:
    // 0x1b3584: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1b3584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1b3588:
    // 0x1b3588: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1b3588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1b358c:
    // 0x1b358c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b358cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b3590:
    // 0x1b3590: 0x0  nop
    ctx->pc = 0x1b3590u;
    // NOP
label_1b3594:
    // 0x1b3594: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x1b3594u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_1b3598:
    // 0x1b3598: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
label_1b359c:
    // 0x1b359c: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x1b359cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
label_1b35a0:
    // 0x1b35a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b35a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b35a4:
    // 0x1b35a4: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x1b35a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
label_1b35a8:
    // 0x1b35a8: 0x34213255  ori         $at, $at, 0x3255
    ctx->pc = 0x1b35a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12885);
label_1b35ac:
    // 0x1b35ac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b35acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b35b0:
    // 0x1b35b0: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x1b35b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
label_1b35b4:
    // 0x1b35b4: 0x3421a305  ori         $at, $at, 0xA305
    ctx->pc = 0x1b35b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41733);
label_1b35b8:
    // 0x1b35b8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b35b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1b35bc:
    // 0x1b35bc: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1b35bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
label_1b35c0:
    // 0x1b35c0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b35c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b35c4:
    // 0x1b35c4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b35c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1b35c8:
    // 0x1b35c8: 0x4614a382  mul.s       $f14, $f20, $f20
    ctx->pc = 0x1b35c8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_1b35cc:
    // 0x1b35cc: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x1b35ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
label_1b35d0:
    // 0x1b35d0: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x1b35d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
label_1b35d4:
    // 0x1b35d4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1b35d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1b35d8:
    // 0x1b35d8: 0x46016081  sub.s       $f2, $f12, $f1
    ctx->pc = 0x1b35d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_1b35dc:
    // 0x1b35dc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1b35dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_1b35e0:
    // 0x1b35e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b35e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b35e4:
    // 0x1b35e4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1b35e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1b35e8:
    // 0x1b35e8: 0x460f2842  mul.s       $f1, $f5, $f15
    ctx->pc = 0x1b35e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
label_1b35ec:
    // 0x1b35ec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b35ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1b35f0:
    // 0x1b35f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b35f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b35f4:
    // 0x1b35f4: 0x46142900  add.s       $f4, $f5, $f20
    ctx->pc = 0x1b35f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
label_1b35f8:
    // 0x1b35f8: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b35f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_1b35fc:
    // 0x1b35fc: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1b35fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1b3600:
    // 0x1b3600: 0x46018041  sub.s       $f1, $f16, $f1
    ctx->pc = 0x1b3600u;
    ctx->f[1] = FPU_SUB_S(ctx->f[16], ctx->f[1]);
label_1b3604:
    // 0x1b3604: 0x460e71c2  mul.s       $f7, $f14, $f14
    ctx->pc = 0x1b3604u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
label_1b3608:
    // 0x1b3608: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1b3608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_1b360c:
    // 0x1b360c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b360cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1b3610:
    // 0x1b3610: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b3610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_1b3614:
    // 0x1b3614: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x1b3614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
label_1b3618:
    // 0x1b3618: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b3618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1b361c:
    // 0x1b361c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x1b361cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1b3620:
    // 0x1b3620: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b3620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_1b3624:
    // 0x1b3624: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1b3624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_1b3628:
    // 0x1b3628: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b3628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_1b362c:
    // 0x1b362c: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x1b362cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
label_1b3630:
    // 0x1b3630: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b3630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_1b3634:
    // 0x1b3634: 0x46052b82  mul.s       $f14, $f5, $f5
    ctx->pc = 0x1b3634u;
    ctx->f[14] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_1b3638:
    // 0x1b3638: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x1b3638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
label_1b363c:
    // 0x1b363c: 0x46037080  add.s       $f2, $f14, $f3
    ctx->pc = 0x1b363cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
label_1b3640:
    // 0x1b3640: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x1b3640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_1b3644:
    // 0x1b3644: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1b3644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1b3648:
    // 0x1b3648: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1b3648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b364c:
    // 0x1b364c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b364cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b3650:
    // 0x1b3650: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1b3650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1b3654:
    // 0x1b3654: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b3654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1b3658:
    // 0x1b3658: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x1b3658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b365c:
    // 0x1b365c: 0x0  nop
    ctx->pc = 0x1b365cu;
    // NOP
label_1b3660:
    // 0x1b3660: 0x460378c1  sub.s       $f3, $f15, $f3
    ctx->pc = 0x1b3660u;
    ctx->f[3] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
label_1b3664:
    // 0x1b3664: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x1b3664u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
label_1b3668:
    // 0x1b3668: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x1b3668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
label_1b366c:
    // 0x1b366c: 0x460f2c02  mul.s       $f16, $f5, $f15
    ctx->pc = 0x1b366cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
label_1b3670:
    // 0x1b3670: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x1b3670u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1b3674:
    // 0x1b3674: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x1b3674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1b3678:
    // 0x1b3678: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x1b3678u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b367c:
    // 0x1b367c: 0x460d8000  add.s       $f0, $f16, $f13
    ctx->pc = 0x1b367cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
label_1b3680:
    // 0x1b3680: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b3680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1b3684:
    // 0x1b3684: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1b3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1b3688:
    // 0x1b3688: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b3688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1b368c:
    // 0x1b368c: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x1b368cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1b3690:
    // 0x1b3690: 0x0  nop
    ctx->pc = 0x1b3690u;
    // NOP
label_1b3694:
    // 0x1b3694: 0x461040c1  sub.s       $f3, $f8, $f16
    ctx->pc = 0x1b3694u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[16]);
label_1b3698:
    // 0x1b3698: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x1b3698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
label_1b369c:
    // 0x1b369c: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x1b369cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
label_1b36a0:
    // 0x1b36a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b36a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b36a4:
    // 0x1b36a4: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x1b36a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
label_1b36a8:
    // 0x1b36a8: 0x3421c3a0  ori         $at, $at, 0xC3A0
    ctx->pc = 0x1b36a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50080);
label_1b36ac:
    // 0x1b36ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b36acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b36b0:
    // 0x1b36b0: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x1b36b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
label_1b36b4:
    // 0x1b36b4: 0x3421384f  ori         $at, $at, 0x384F
    ctx->pc = 0x1b36b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14415);
label_1b36b8:
    // 0x1b36b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b36b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b36bc:
    // 0x1b36bc: 0x460369c1  sub.s       $f7, $f13, $f3
    ctx->pc = 0x1b36bcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[13], ctx->f[3]);
label_1b36c0:
    // 0x1b36c0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b36c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1b36c4:
    // 0x1b36c4: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x1b36c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
label_1b36c8:
    // 0x1b36c8: 0xc423ad80  lwc1        $f3, -0x5280($at)
    ctx->pc = 0x1b36c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b36cc:
    // 0x1b36cc: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x1b36ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_1b36d0:
    // 0x1b36d0: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b36d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1b36d4:
    // 0x1b36d4: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x1b36d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    ctx->pc = 0x1b36d8u;
    return;
}

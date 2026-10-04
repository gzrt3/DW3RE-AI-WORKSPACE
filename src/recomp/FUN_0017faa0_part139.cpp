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


void FUN_0017faa0_part139(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c30c0u: goto label_1c30c0;
        case 0x1c30c4u: goto label_1c30c4;
        case 0x1c30c8u: goto label_1c30c8;
        case 0x1c30ccu: goto label_1c30cc;
        case 0x1c30d0u: goto label_1c30d0;
        case 0x1c30d4u: goto label_1c30d4;
        case 0x1c30d8u: goto label_1c30d8;
        case 0x1c30dcu: goto label_1c30dc;
        case 0x1c30e0u: goto label_1c30e0;
        case 0x1c30e4u: goto label_1c30e4;
        case 0x1c30e8u: goto label_1c30e8;
        case 0x1c30ecu: goto label_1c30ec;
        case 0x1c30f0u: goto label_1c30f0;
        case 0x1c30f4u: goto label_1c30f4;
        case 0x1c30f8u: goto label_1c30f8;
        case 0x1c30fcu: goto label_1c30fc;
        case 0x1c3100u: goto label_1c3100;
        case 0x1c3104u: goto label_1c3104;
        case 0x1c3108u: goto label_1c3108;
        case 0x1c310cu: goto label_1c310c;
        case 0x1c3110u: goto label_1c3110;
        case 0x1c3114u: goto label_1c3114;
        case 0x1c3118u: goto label_1c3118;
        case 0x1c311cu: goto label_1c311c;
        case 0x1c3120u: goto label_1c3120;
        case 0x1c3124u: goto label_1c3124;
        case 0x1c3128u: goto label_1c3128;
        case 0x1c312cu: goto label_1c312c;
        case 0x1c3130u: goto label_1c3130;
        case 0x1c3134u: goto label_1c3134;
        case 0x1c3138u: goto label_1c3138;
        case 0x1c313cu: goto label_1c313c;
        case 0x1c3140u: goto label_1c3140;
        case 0x1c3144u: goto label_1c3144;
        case 0x1c3148u: goto label_1c3148;
        case 0x1c314cu: goto label_1c314c;
        case 0x1c3150u: goto label_1c3150;
        case 0x1c3154u: goto label_1c3154;
        case 0x1c3158u: goto label_1c3158;
        case 0x1c315cu: goto label_1c315c;
        case 0x1c3160u: goto label_1c3160;
        case 0x1c3164u: goto label_1c3164;
        case 0x1c3168u: goto label_1c3168;
        case 0x1c316cu: goto label_1c316c;
        case 0x1c3170u: goto label_1c3170;
        case 0x1c3174u: goto label_1c3174;
        case 0x1c3178u: goto label_1c3178;
        case 0x1c317cu: goto label_1c317c;
        case 0x1c3180u: goto label_1c3180;
        case 0x1c3184u: goto label_1c3184;
        case 0x1c3188u: goto label_1c3188;
        case 0x1c318cu: goto label_1c318c;
        case 0x1c3190u: goto label_1c3190;
        case 0x1c3194u: goto label_1c3194;
        case 0x1c3198u: goto label_1c3198;
        case 0x1c319cu: goto label_1c319c;
        case 0x1c31a0u: goto label_1c31a0;
        case 0x1c31a4u: goto label_1c31a4;
        case 0x1c31a8u: goto label_1c31a8;
        case 0x1c31acu: goto label_1c31ac;
        case 0x1c31b0u: goto label_1c31b0;
        case 0x1c31b4u: goto label_1c31b4;
        case 0x1c31b8u: goto label_1c31b8;
        case 0x1c31bcu: goto label_1c31bc;
        case 0x1c31c0u: goto label_1c31c0;
        case 0x1c31c4u: goto label_1c31c4;
        case 0x1c31c8u: goto label_1c31c8;
        case 0x1c31ccu: goto label_1c31cc;
        case 0x1c31d0u: goto label_1c31d0;
        case 0x1c31d4u: goto label_1c31d4;
        case 0x1c31d8u: goto label_1c31d8;
        case 0x1c31dcu: goto label_1c31dc;
        case 0x1c31e0u: goto label_1c31e0;
        case 0x1c31e4u: goto label_1c31e4;
        case 0x1c31e8u: goto label_1c31e8;
        case 0x1c31ecu: goto label_1c31ec;
        case 0x1c31f0u: goto label_1c31f0;
        case 0x1c31f4u: goto label_1c31f4;
        case 0x1c31f8u: goto label_1c31f8;
        case 0x1c31fcu: goto label_1c31fc;
        case 0x1c3200u: goto label_1c3200;
        case 0x1c3204u: goto label_1c3204;
        case 0x1c3208u: goto label_1c3208;
        case 0x1c320cu: goto label_1c320c;
        case 0x1c3210u: goto label_1c3210;
        case 0x1c3214u: goto label_1c3214;
        case 0x1c3218u: goto label_1c3218;
        case 0x1c321cu: goto label_1c321c;
        case 0x1c3220u: goto label_1c3220;
        case 0x1c3224u: goto label_1c3224;
        case 0x1c3228u: goto label_1c3228;
        case 0x1c322cu: goto label_1c322c;
        case 0x1c3230u: goto label_1c3230;
        case 0x1c3234u: goto label_1c3234;
        case 0x1c3238u: goto label_1c3238;
        case 0x1c323cu: goto label_1c323c;
        case 0x1c3240u: goto label_1c3240;
        case 0x1c3244u: goto label_1c3244;
        case 0x1c3248u: goto label_1c3248;
        case 0x1c324cu: goto label_1c324c;
        case 0x1c3250u: goto label_1c3250;
        case 0x1c3254u: goto label_1c3254;
        case 0x1c3258u: goto label_1c3258;
        case 0x1c325cu: goto label_1c325c;
        case 0x1c3260u: goto label_1c3260;
        case 0x1c3264u: goto label_1c3264;
        case 0x1c3268u: goto label_1c3268;
        case 0x1c326cu: goto label_1c326c;
        case 0x1c3270u: goto label_1c3270;
        case 0x1c3274u: goto label_1c3274;
        case 0x1c3278u: goto label_1c3278;
        case 0x1c327cu: goto label_1c327c;
        case 0x1c3280u: goto label_1c3280;
        case 0x1c3284u: goto label_1c3284;
        case 0x1c3288u: goto label_1c3288;
        case 0x1c328cu: goto label_1c328c;
        case 0x1c3290u: goto label_1c3290;
        case 0x1c3294u: goto label_1c3294;
        case 0x1c3298u: goto label_1c3298;
        case 0x1c329cu: goto label_1c329c;
        case 0x1c32a0u: goto label_1c32a0;
        case 0x1c32a4u: goto label_1c32a4;
        case 0x1c32a8u: goto label_1c32a8;
        case 0x1c32acu: goto label_1c32ac;
        case 0x1c32b0u: goto label_1c32b0;
        case 0x1c32b4u: goto label_1c32b4;
        case 0x1c32b8u: goto label_1c32b8;
        case 0x1c32bcu: goto label_1c32bc;
        case 0x1c32c0u: goto label_1c32c0;
        case 0x1c32c4u: goto label_1c32c4;
        case 0x1c32c8u: goto label_1c32c8;
        case 0x1c32ccu: goto label_1c32cc;
        case 0x1c32d0u: goto label_1c32d0;
        case 0x1c32d4u: goto label_1c32d4;
        case 0x1c32d8u: goto label_1c32d8;
        case 0x1c32dcu: goto label_1c32dc;
        case 0x1c32e0u: goto label_1c32e0;
        case 0x1c32e4u: goto label_1c32e4;
        case 0x1c32e8u: goto label_1c32e8;
        case 0x1c32ecu: goto label_1c32ec;
        case 0x1c32f0u: goto label_1c32f0;
        case 0x1c32f4u: goto label_1c32f4;
        case 0x1c32f8u: goto label_1c32f8;
        case 0x1c32fcu: goto label_1c32fc;
        case 0x1c3300u: goto label_1c3300;
        case 0x1c3304u: goto label_1c3304;
        case 0x1c3308u: goto label_1c3308;
        case 0x1c330cu: goto label_1c330c;
        case 0x1c3310u: goto label_1c3310;
        case 0x1c3314u: goto label_1c3314;
        case 0x1c3318u: goto label_1c3318;
        case 0x1c331cu: goto label_1c331c;
        case 0x1c3320u: goto label_1c3320;
        case 0x1c3324u: goto label_1c3324;
        case 0x1c3328u: goto label_1c3328;
        case 0x1c332cu: goto label_1c332c;
        case 0x1c3330u: goto label_1c3330;
        case 0x1c3334u: goto label_1c3334;
        case 0x1c3338u: goto label_1c3338;
        case 0x1c333cu: goto label_1c333c;
        case 0x1c3340u: goto label_1c3340;
        case 0x1c3344u: goto label_1c3344;
        case 0x1c3348u: goto label_1c3348;
        case 0x1c334cu: goto label_1c334c;
        case 0x1c3350u: goto label_1c3350;
        case 0x1c3354u: goto label_1c3354;
        case 0x1c3358u: goto label_1c3358;
        case 0x1c335cu: goto label_1c335c;
        case 0x1c3360u: goto label_1c3360;
        case 0x1c3364u: goto label_1c3364;
        case 0x1c3368u: goto label_1c3368;
        case 0x1c336cu: goto label_1c336c;
        case 0x1c3370u: goto label_1c3370;
        case 0x1c3374u: goto label_1c3374;
        case 0x1c3378u: goto label_1c3378;
        case 0x1c337cu: goto label_1c337c;
        case 0x1c3380u: goto label_1c3380;
        case 0x1c3384u: goto label_1c3384;
        case 0x1c3388u: goto label_1c3388;
        case 0x1c338cu: goto label_1c338c;
        case 0x1c3390u: goto label_1c3390;
        case 0x1c3394u: goto label_1c3394;
        case 0x1c3398u: goto label_1c3398;
        case 0x1c339cu: goto label_1c339c;
        case 0x1c33a0u: goto label_1c33a0;
        case 0x1c33a4u: goto label_1c33a4;
        case 0x1c33a8u: goto label_1c33a8;
        case 0x1c33acu: goto label_1c33ac;
        case 0x1c33b0u: goto label_1c33b0;
        case 0x1c33b4u: goto label_1c33b4;
        case 0x1c33b8u: goto label_1c33b8;
        case 0x1c33bcu: goto label_1c33bc;
        case 0x1c33c0u: goto label_1c33c0;
        case 0x1c33c4u: goto label_1c33c4;
        case 0x1c33c8u: goto label_1c33c8;
        case 0x1c33ccu: goto label_1c33cc;
        case 0x1c33d0u: goto label_1c33d0;
        case 0x1c33d4u: goto label_1c33d4;
        case 0x1c33d8u: goto label_1c33d8;
        case 0x1c33dcu: goto label_1c33dc;
        case 0x1c33e0u: goto label_1c33e0;
        case 0x1c33e4u: goto label_1c33e4;
        case 0x1c33e8u: goto label_1c33e8;
        case 0x1c33ecu: goto label_1c33ec;
        case 0x1c33f0u: goto label_1c33f0;
        case 0x1c33f4u: goto label_1c33f4;
        case 0x1c33f8u: goto label_1c33f8;
        case 0x1c33fcu: goto label_1c33fc;
        case 0x1c3400u: goto label_1c3400;
        case 0x1c3404u: goto label_1c3404;
        case 0x1c3408u: goto label_1c3408;
        case 0x1c340cu: goto label_1c340c;
        case 0x1c3410u: goto label_1c3410;
        case 0x1c3414u: goto label_1c3414;
        case 0x1c3418u: goto label_1c3418;
        case 0x1c341cu: goto label_1c341c;
        case 0x1c3420u: goto label_1c3420;
        case 0x1c3424u: goto label_1c3424;
        case 0x1c3428u: goto label_1c3428;
        case 0x1c342cu: goto label_1c342c;
        case 0x1c3430u: goto label_1c3430;
        case 0x1c3434u: goto label_1c3434;
        case 0x1c3438u: goto label_1c3438;
        case 0x1c343cu: goto label_1c343c;
        case 0x1c3440u: goto label_1c3440;
        case 0x1c3444u: goto label_1c3444;
        case 0x1c3448u: goto label_1c3448;
        case 0x1c344cu: goto label_1c344c;
        case 0x1c3450u: goto label_1c3450;
        case 0x1c3454u: goto label_1c3454;
        case 0x1c3458u: goto label_1c3458;
        case 0x1c345cu: goto label_1c345c;
        case 0x1c3460u: goto label_1c3460;
        case 0x1c3464u: goto label_1c3464;
        case 0x1c3468u: goto label_1c3468;
        case 0x1c346cu: goto label_1c346c;
        case 0x1c3470u: goto label_1c3470;
        case 0x1c3474u: goto label_1c3474;
        case 0x1c3478u: goto label_1c3478;
        case 0x1c347cu: goto label_1c347c;
        case 0x1c3480u: goto label_1c3480;
        case 0x1c3484u: goto label_1c3484;
        case 0x1c3488u: goto label_1c3488;
        case 0x1c348cu: goto label_1c348c;
        case 0x1c3490u: goto label_1c3490;
        case 0x1c3494u: goto label_1c3494;
        case 0x1c3498u: goto label_1c3498;
        case 0x1c349cu: goto label_1c349c;
        case 0x1c34a0u: goto label_1c34a0;
        case 0x1c34a4u: goto label_1c34a4;
        case 0x1c34a8u: goto label_1c34a8;
        case 0x1c34acu: goto label_1c34ac;
        case 0x1c34b0u: goto label_1c34b0;
        case 0x1c34b4u: goto label_1c34b4;
        case 0x1c34b8u: goto label_1c34b8;
        case 0x1c34bcu: goto label_1c34bc;
        case 0x1c34c0u: goto label_1c34c0;
        case 0x1c34c4u: goto label_1c34c4;
        case 0x1c34c8u: goto label_1c34c8;
        case 0x1c34ccu: goto label_1c34cc;
        case 0x1c34d0u: goto label_1c34d0;
        case 0x1c34d4u: goto label_1c34d4;
        case 0x1c34d8u: goto label_1c34d8;
        case 0x1c34dcu: goto label_1c34dc;
        case 0x1c34e0u: goto label_1c34e0;
        case 0x1c34e4u: goto label_1c34e4;
        case 0x1c34e8u: goto label_1c34e8;
        case 0x1c34ecu: goto label_1c34ec;
        case 0x1c34f0u: goto label_1c34f0;
        case 0x1c34f4u: goto label_1c34f4;
        case 0x1c34f8u: goto label_1c34f8;
        case 0x1c34fcu: goto label_1c34fc;
        case 0x1c3500u: goto label_1c3500;
        case 0x1c3504u: goto label_1c3504;
        case 0x1c3508u: goto label_1c3508;
        case 0x1c350cu: goto label_1c350c;
        case 0x1c3510u: goto label_1c3510;
        case 0x1c3514u: goto label_1c3514;
        case 0x1c3518u: goto label_1c3518;
        case 0x1c351cu: goto label_1c351c;
        case 0x1c3520u: goto label_1c3520;
        case 0x1c3524u: goto label_1c3524;
        case 0x1c3528u: goto label_1c3528;
        case 0x1c352cu: goto label_1c352c;
        case 0x1c3530u: goto label_1c3530;
        case 0x1c3534u: goto label_1c3534;
        case 0x1c3538u: goto label_1c3538;
        case 0x1c353cu: goto label_1c353c;
        case 0x1c3540u: goto label_1c3540;
        case 0x1c3544u: goto label_1c3544;
        case 0x1c3548u: goto label_1c3548;
        case 0x1c354cu: goto label_1c354c;
        case 0x1c3550u: goto label_1c3550;
        case 0x1c3554u: goto label_1c3554;
        case 0x1c3558u: goto label_1c3558;
        case 0x1c355cu: goto label_1c355c;
        case 0x1c3560u: goto label_1c3560;
        case 0x1c3564u: goto label_1c3564;
        case 0x1c3568u: goto label_1c3568;
        case 0x1c356cu: goto label_1c356c;
        case 0x1c3570u: goto label_1c3570;
        case 0x1c3574u: goto label_1c3574;
        case 0x1c3578u: goto label_1c3578;
        case 0x1c357cu: goto label_1c357c;
        case 0x1c3580u: goto label_1c3580;
        case 0x1c3584u: goto label_1c3584;
        case 0x1c3588u: goto label_1c3588;
        case 0x1c358cu: goto label_1c358c;
        case 0x1c3590u: goto label_1c3590;
        case 0x1c3594u: goto label_1c3594;
        case 0x1c3598u: goto label_1c3598;
        case 0x1c359cu: goto label_1c359c;
        case 0x1c35a0u: goto label_1c35a0;
        case 0x1c35a4u: goto label_1c35a4;
        case 0x1c35a8u: goto label_1c35a8;
        case 0x1c35acu: goto label_1c35ac;
        case 0x1c35b0u: goto label_1c35b0;
        case 0x1c35b4u: goto label_1c35b4;
        case 0x1c35b8u: goto label_1c35b8;
        case 0x1c35bcu: goto label_1c35bc;
        case 0x1c35c0u: goto label_1c35c0;
        case 0x1c35c4u: goto label_1c35c4;
        case 0x1c35c8u: goto label_1c35c8;
        case 0x1c35ccu: goto label_1c35cc;
        case 0x1c35d0u: goto label_1c35d0;
        case 0x1c35d4u: goto label_1c35d4;
        case 0x1c35d8u: goto label_1c35d8;
        case 0x1c35dcu: goto label_1c35dc;
        case 0x1c35e0u: goto label_1c35e0;
        case 0x1c35e4u: goto label_1c35e4;
        case 0x1c35e8u: goto label_1c35e8;
        case 0x1c35ecu: goto label_1c35ec;
        case 0x1c35f0u: goto label_1c35f0;
        case 0x1c35f4u: goto label_1c35f4;
        case 0x1c35f8u: goto label_1c35f8;
        case 0x1c35fcu: goto label_1c35fc;
        case 0x1c3600u: goto label_1c3600;
        case 0x1c3604u: goto label_1c3604;
        case 0x1c3608u: goto label_1c3608;
        case 0x1c360cu: goto label_1c360c;
        case 0x1c3610u: goto label_1c3610;
        case 0x1c3614u: goto label_1c3614;
        case 0x1c3618u: goto label_1c3618;
        case 0x1c361cu: goto label_1c361c;
        case 0x1c3620u: goto label_1c3620;
        case 0x1c3624u: goto label_1c3624;
        case 0x1c3628u: goto label_1c3628;
        case 0x1c362cu: goto label_1c362c;
        case 0x1c3630u: goto label_1c3630;
        case 0x1c3634u: goto label_1c3634;
        case 0x1c3638u: goto label_1c3638;
        case 0x1c363cu: goto label_1c363c;
        case 0x1c3640u: goto label_1c3640;
        case 0x1c3644u: goto label_1c3644;
        case 0x1c3648u: goto label_1c3648;
        case 0x1c364cu: goto label_1c364c;
        case 0x1c3650u: goto label_1c3650;
        case 0x1c3654u: goto label_1c3654;
        case 0x1c3658u: goto label_1c3658;
        case 0x1c365cu: goto label_1c365c;
        case 0x1c3660u: goto label_1c3660;
        case 0x1c3664u: goto label_1c3664;
        case 0x1c3668u: goto label_1c3668;
        case 0x1c366cu: goto label_1c366c;
        case 0x1c3670u: goto label_1c3670;
        case 0x1c3674u: goto label_1c3674;
        case 0x1c3678u: goto label_1c3678;
        case 0x1c367cu: goto label_1c367c;
        case 0x1c3680u: goto label_1c3680;
        case 0x1c3684u: goto label_1c3684;
        case 0x1c3688u: goto label_1c3688;
        case 0x1c368cu: goto label_1c368c;
        case 0x1c3690u: goto label_1c3690;
        case 0x1c3694u: goto label_1c3694;
        case 0x1c3698u: goto label_1c3698;
        case 0x1c369cu: goto label_1c369c;
        case 0x1c36a0u: goto label_1c36a0;
        case 0x1c36a4u: goto label_1c36a4;
        case 0x1c36a8u: goto label_1c36a8;
        case 0x1c36acu: goto label_1c36ac;
        case 0x1c36b0u: goto label_1c36b0;
        case 0x1c36b4u: goto label_1c36b4;
        case 0x1c36b8u: goto label_1c36b8;
        case 0x1c36bcu: goto label_1c36bc;
        case 0x1c36c0u: goto label_1c36c0;
        case 0x1c36c4u: goto label_1c36c4;
        case 0x1c36c8u: goto label_1c36c8;
        case 0x1c36ccu: goto label_1c36cc;
        case 0x1c36d0u: goto label_1c36d0;
        case 0x1c36d4u: goto label_1c36d4;
        case 0x1c36d8u: goto label_1c36d8;
        case 0x1c36dcu: goto label_1c36dc;
        case 0x1c36e0u: goto label_1c36e0;
        case 0x1c36e4u: goto label_1c36e4;
        case 0x1c36e8u: goto label_1c36e8;
        case 0x1c36ecu: goto label_1c36ec;
        case 0x1c36f0u: goto label_1c36f0;
        case 0x1c36f4u: goto label_1c36f4;
        case 0x1c36f8u: goto label_1c36f8;
        case 0x1c36fcu: goto label_1c36fc;
        case 0x1c3700u: goto label_1c3700;
        case 0x1c3704u: goto label_1c3704;
        case 0x1c3708u: goto label_1c3708;
        case 0x1c370cu: goto label_1c370c;
        case 0x1c3710u: goto label_1c3710;
        case 0x1c3714u: goto label_1c3714;
        case 0x1c3718u: goto label_1c3718;
        case 0x1c371cu: goto label_1c371c;
        case 0x1c3720u: goto label_1c3720;
        case 0x1c3724u: goto label_1c3724;
        case 0x1c3728u: goto label_1c3728;
        case 0x1c372cu: goto label_1c372c;
        case 0x1c3730u: goto label_1c3730;
        case 0x1c3734u: goto label_1c3734;
        case 0x1c3738u: goto label_1c3738;
        case 0x1c373cu: goto label_1c373c;
        case 0x1c3740u: goto label_1c3740;
        case 0x1c3744u: goto label_1c3744;
        case 0x1c3748u: goto label_1c3748;
        case 0x1c374cu: goto label_1c374c;
        case 0x1c3750u: goto label_1c3750;
        case 0x1c3754u: goto label_1c3754;
        case 0x1c3758u: goto label_1c3758;
        case 0x1c375cu: goto label_1c375c;
        case 0x1c3760u: goto label_1c3760;
        case 0x1c3764u: goto label_1c3764;
        case 0x1c3768u: goto label_1c3768;
        case 0x1c376cu: goto label_1c376c;
        case 0x1c3770u: goto label_1c3770;
        case 0x1c3774u: goto label_1c3774;
        case 0x1c3778u: goto label_1c3778;
        case 0x1c377cu: goto label_1c377c;
        case 0x1c3780u: goto label_1c3780;
        case 0x1c3784u: goto label_1c3784;
        case 0x1c3788u: goto label_1c3788;
        case 0x1c378cu: goto label_1c378c;
        case 0x1c3790u: goto label_1c3790;
        case 0x1c3794u: goto label_1c3794;
        case 0x1c3798u: goto label_1c3798;
        case 0x1c379cu: goto label_1c379c;
        case 0x1c37a0u: goto label_1c37a0;
        case 0x1c37a4u: goto label_1c37a4;
        case 0x1c37a8u: goto label_1c37a8;
        case 0x1c37acu: goto label_1c37ac;
        case 0x1c37b0u: goto label_1c37b0;
        case 0x1c37b4u: goto label_1c37b4;
        case 0x1c37b8u: goto label_1c37b8;
        case 0x1c37bcu: goto label_1c37bc;
        case 0x1c37c0u: goto label_1c37c0;
        case 0x1c37c4u: goto label_1c37c4;
        case 0x1c37c8u: goto label_1c37c8;
        case 0x1c37ccu: goto label_1c37cc;
        case 0x1c37d0u: goto label_1c37d0;
        case 0x1c37d4u: goto label_1c37d4;
        case 0x1c37d8u: goto label_1c37d8;
        case 0x1c37dcu: goto label_1c37dc;
        case 0x1c37e0u: goto label_1c37e0;
        case 0x1c37e4u: goto label_1c37e4;
        case 0x1c37e8u: goto label_1c37e8;
        case 0x1c37ecu: goto label_1c37ec;
        case 0x1c37f0u: goto label_1c37f0;
        case 0x1c37f4u: goto label_1c37f4;
        case 0x1c37f8u: goto label_1c37f8;
        case 0x1c37fcu: goto label_1c37fc;
        case 0x1c3800u: goto label_1c3800;
        case 0x1c3804u: goto label_1c3804;
        case 0x1c3808u: goto label_1c3808;
        case 0x1c380cu: goto label_1c380c;
        case 0x1c3810u: goto label_1c3810;
        case 0x1c3814u: goto label_1c3814;
        case 0x1c3818u: goto label_1c3818;
        case 0x1c381cu: goto label_1c381c;
        case 0x1c3820u: goto label_1c3820;
        case 0x1c3824u: goto label_1c3824;
        case 0x1c3828u: goto label_1c3828;
        case 0x1c382cu: goto label_1c382c;
        case 0x1c3830u: goto label_1c3830;
        case 0x1c3834u: goto label_1c3834;
        case 0x1c3838u: goto label_1c3838;
        case 0x1c383cu: goto label_1c383c;
        case 0x1c3840u: goto label_1c3840;
        case 0x1c3844u: goto label_1c3844;
        case 0x1c3848u: goto label_1c3848;
        case 0x1c384cu: goto label_1c384c;
        case 0x1c3850u: goto label_1c3850;
        case 0x1c3854u: goto label_1c3854;
        case 0x1c3858u: goto label_1c3858;
        case 0x1c385cu: goto label_1c385c;
        case 0x1c3860u: goto label_1c3860;
        case 0x1c3864u: goto label_1c3864;
        case 0x1c3868u: goto label_1c3868;
        case 0x1c386cu: goto label_1c386c;
        case 0x1c3870u: goto label_1c3870;
        case 0x1c3874u: goto label_1c3874;
        case 0x1c3878u: goto label_1c3878;
        case 0x1c387cu: goto label_1c387c;
        case 0x1c3880u: goto label_1c3880;
        case 0x1c3884u: goto label_1c3884;
        case 0x1c3888u: goto label_1c3888;
        case 0x1c388cu: goto label_1c388c;
        default: return;
    }

label_1c30c0:
    // 0x1c30c0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c30c4:
    // 0x1c30c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c30c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c30c8:
    // 0x1c30c8: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c30cc:
    // 0x1c30cc: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x1c30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
label_1c30d0:
    // 0x1c30d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c30d4:
    // 0x1c30d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1c30d8:
    // 0x1c30d8: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c30d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c30dc:
    // 0x1c30dc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1c30e0:
    // 0x1c30e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c30e4:
    // 0x1c30e4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c30e8:
    // 0x1c30e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c30ec:
    // 0x1c30ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c30ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c30f0:
    // 0x1c30f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c30f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c30f4:
    // 0x1c30f4: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1c30f8:
    // 0x1c30f8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c30f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c30fc:
    // 0x1c30fc: 0xc066c72  jal         func_19B1C8
label_1c3100:
    if (ctx->pc == 0x1C3100u) {
        ctx->pc = 0x1C3100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30FCu;
        // 0x1c3100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3104u;
        goto label_1c3104;
    }
    ctx->pc = 0x1C30FCu;
    SET_GPR_U32(ctx, 31, 0x1C3104u);
    ctx->pc = 0x1C3100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30FCu;
    // 0x1c3100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C3104u;
label_1c3104:
    // 0x1c3104: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3108:
    // 0x1c3108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c310c:
    // 0x1c310c: 0x2442f530  addiu       $v0, $v0, -0xAD0
    ctx->pc = 0x1c310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964528));
label_1c3110:
    // 0x1c3110: 0x24060608  addiu       $a2, $zero, 0x608
    ctx->pc = 0x1c3110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_1c3114:
    // 0x1c3114: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c3114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c3118:
    // 0x1c3118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c311c:
    // 0x1c311c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c311cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3120:
    // 0x1c3120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3124:
    // 0x1c3124: 0xc066c72  jal         func_19B1C8
label_1c3128:
    if (ctx->pc == 0x1C3128u) {
        ctx->pc = 0x1C3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3124u;
        // 0x1c3128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C312Cu;
        goto label_1c312c;
    }
    ctx->pc = 0x1C3124u;
    SET_GPR_U32(ctx, 31, 0x1C312Cu);
    ctx->pc = 0x1C3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3124u;
    // 0x1c3128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C312Cu;
label_1c312c:
    // 0x1c312c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3130:
    // 0x1c3130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3134:
    // 0x1c3134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3138:
    // 0x1c3138: 0x3e00008  jr          $ra
label_1c313c:
    if (ctx->pc == 0x1C313Cu) {
        ctx->pc = 0x1C313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3138u;
        // 0x1c313c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3140u;
        goto label_1c3140;
    }
    ctx->pc = 0x1C3138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3138u;
        // 0x1c313c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3140u;
label_1c3140:
    // 0x1c3140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c3140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c3144:
    // 0x1c3144: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c3144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1c3148:
    // 0x1c3148: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c3148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c314c:
    // 0x1c314c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c3150:
    // 0x1c3150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c3154:
    // 0x1c3154: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c3154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3158:
    // 0x1c3158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c315c:
    // 0x1c315c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c315cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3160:
    // 0x1c3160: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c3160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3164:
    // 0x1c3164: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1c3164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1c3168:
    // 0x1c3168: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1c3168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1c316c:
    // 0x1c316c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c3170:
    // 0x1c3170: 0x24433620  addiu       $v1, $v0, 0x3620
    ctx->pc = 0x1c3170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_1c3174:
    // 0x1c3174: 0x9042367c  lbu         $v0, 0x367C($v0)
    ctx->pc = 0x1c3174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13948)));
label_1c3178:
    // 0x1c3178: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c317c:
    if (ctx->pc == 0x1C317Cu) {
        ctx->pc = 0x1C3180u;
        goto label_1c3180;
    }
    ctx->pc = 0x1C3178u;
    {
        const bool branch_taken_0x1c3178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3178) {
            ctx->pc = 0x1C31ACu;
            goto label_1c31ac;
        }
    }
    ctx->pc = 0x1C3180u;
label_1c3180:
    // 0x1c3180: 0x9063005d  lbu         $v1, 0x5D($v1)
    ctx->pc = 0x1c3180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 93)));
label_1c3184:
    // 0x1c3184: 0x28620082  slti        $v0, $v1, 0x82
    ctx->pc = 0x1c3184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)130) ? 1 : 0);
label_1c3188:
    // 0x1c3188: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c318c:
    if (ctx->pc == 0x1C318Cu) {
        ctx->pc = 0x1C3190u;
        goto label_1c3190;
    }
    ctx->pc = 0x1C3188u;
    {
        const bool branch_taken_0x1c3188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3188) {
            ctx->pc = 0x1C3198u;
            goto label_1c3198;
        }
    }
    ctx->pc = 0x1C3190u;
label_1c3190:
    // 0x1c3190: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c3194:
    if (ctx->pc == 0x1C3194u) {
        ctx->pc = 0x1C3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3190u;
        // 0x1c3194: 0x2463ffd7  addiu       $v1, $v1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3198u;
        goto label_1c3198;
    }
    ctx->pc = 0x1C3190u;
    {
        const bool branch_taken_0x1c3190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3190u;
        // 0x1c3194: 0x2463ffd7  addiu       $v1, $v1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3190) {
            ctx->pc = 0x1C31B4u;
            goto label_1c31b4;
        }
    }
    ctx->pc = 0x1C3198u;
label_1c3198:
    // 0x1c3198: 0x28620059  slti        $v0, $v1, 0x59
    ctx->pc = 0x1c3198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)89) ? 1 : 0);
label_1c319c:
    // 0x1c319c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c31a0:
    if (ctx->pc == 0x1C31A0u) {
        ctx->pc = 0x1C31A4u;
        goto label_1c31a4;
    }
    ctx->pc = 0x1C319Cu;
    {
        const bool branch_taken_0x1c319c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c319c) {
            ctx->pc = 0x1C31B4u;
            goto label_1c31b4;
        }
    }
    ctx->pc = 0x1C31A4u;
label_1c31a4:
    // 0x1c31a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c31a8:
    if (ctx->pc == 0x1C31A8u) {
        ctx->pc = 0x1C31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A4u;
        // 0x1c31a8: 0x2463ffd7  addiu       $v1, $v1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31ACu;
        goto label_1c31ac;
    }
    ctx->pc = 0x1C31A4u;
    {
        const bool branch_taken_0x1c31a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A4u;
        // 0x1c31a8: 0x2463ffd7  addiu       $v1, $v1, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31a4) {
            ctx->pc = 0x1C31B4u;
            goto label_1c31b4;
        }
    }
    ctx->pc = 0x1C31ACu;
label_1c31ac:
    // 0x1c31ac: 0x0  nop
    ctx->pc = 0x1c31acu;
    // NOP
label_1c31b0:
    // 0x1c31b0: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x1c31b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_1c31b4:
    // 0x1c31b4: 0x0  nop
    ctx->pc = 0x1c31b4u;
    // NOP
label_1c31b8:
    // 0x1c31b8: 0x39880  sll         $s3, $v1, 2
    ctx->pc = 0x1c31b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c31bc:
    // 0x1c31bc: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c31c0:
    // 0x1c31c0: 0x27838978  addiu       $v1, $gp, -0x7688
    ctx->pc = 0x1c31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936952));
label_1c31c4:
    // 0x1c31c4: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x1c31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
label_1c31c8:
    // 0x1c31c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1c31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1c31cc:
    // 0x1c31cc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1c31d0:
    // 0x1c31d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c31d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c31d4:
    // 0x1c31d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c31d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c31d8:
    // 0x1c31d8: 0xc08e93e  jal         func_23A4F8
label_1c31dc:
    if (ctx->pc == 0x1C31DCu) {
        ctx->pc = 0x1C31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31D8u;
        // 0x1c31dc: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C31E0u;
        goto label_1c31e0;
    }
    ctx->pc = 0x1C31D8u;
    SET_GPR_U32(ctx, 31, 0x1C31E0u);
    ctx->pc = 0x1C31DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31D8u;
    // 0x1c31dc: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C31E0u;
label_1c31e0:
    // 0x1c31e0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c31e4:
    // 0x1c31e4: 0x27838980  addiu       $v1, $gp, -0x7680
    ctx->pc = 0x1c31e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936960));
label_1c31e8:
    // 0x1c31e8: 0x2442f530  addiu       $v0, $v0, -0xAD0
    ctx->pc = 0x1c31e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964528));
label_1c31ec:
    // 0x1c31ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1c31ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1c31f0:
    // 0x1c31f0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1c31f4:
    // 0x1c31f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c31f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c31f8:
    // 0x1c31f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c31f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c31fc:
    // 0x1c31fc: 0xc08e93e  jal         func_23A4F8
label_1c3200:
    if (ctx->pc == 0x1C3200u) {
        ctx->pc = 0x1C3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31FCu;
        // 0x1c3200: 0x24066080  addiu       $a2, $zero, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3204u;
        goto label_1c3204;
    }
    ctx->pc = 0x1C31FCu;
    SET_GPR_U32(ctx, 31, 0x1C3204u);
    ctx->pc = 0x1C3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31FCu;
    // 0x1c3200: 0x24066080  addiu       $a2, $zero, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C3204u;
label_1c3204:
    // 0x1c3204: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c3208:
    // 0x1c3208: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1c3208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1c320c:
    // 0x1c320c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1c320cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c3210:
    // 0x1c3210: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_1c3214:
    if (ctx->pc == 0x1C3214u) {
        ctx->pc = 0x1C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3210u;
        // 0x1c3214: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3218u;
        goto label_1c3218;
    }
    ctx->pc = 0x1C3210u;
    {
        const bool branch_taken_0x1c3210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3210u;
        // 0x1c3214: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3210) {
            ctx->pc = 0x1C3164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3164;
        }
    }
    ctx->pc = 0x1C3218u;
label_1c3218:
    // 0x1c3218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c3218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c321c:
    // 0x1c321c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c321cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c3220:
    // 0x1c3220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3224:
    // 0x1c3224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3228:
    // 0x1c3228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c322c:
    // 0x1c322c: 0x3e00008  jr          $ra
label_1c3230:
    if (ctx->pc == 0x1C3230u) {
        ctx->pc = 0x1C3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C322Cu;
        // 0x1c3230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3234u;
        goto label_1c3234;
    }
    ctx->pc = 0x1C322Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C322Cu;
        // 0x1c3230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C322Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3234u;
label_1c3234:
    // 0x1c3234: 0x0  nop
    ctx->pc = 0x1c3234u;
    // NOP
label_1c3238:
    // 0x1c3238: 0x0  nop
    ctx->pc = 0x1c3238u;
    // NOP
label_1c323c:
    // 0x1c323c: 0x0  nop
    ctx->pc = 0x1c323cu;
    // NOP
label_1c3240:
    // 0x1c3240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c3244:
    // 0x1c3244: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c3244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1c3248:
    // 0x1c3248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c324c:
    // 0x1c324c: 0x27828978  addiu       $v0, $gp, -0x7688
    ctx->pc = 0x1c324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936952));
label_1c3250:
    // 0x1c3250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c3254:
    // 0x1c3254: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c3254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c3258:
    // 0x1c3258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c325c:
    // 0x1c325c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1c3260:
    // 0x1c3260: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c3260u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c3264:
    // 0x1c3264: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c3264u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c3268:
    // 0x1c3268: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c3268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c326c:
    // 0x1c326c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c326cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c3270:
    // 0x1c3270: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c3270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3274:
    // 0x1c3274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3278:
    // 0x1c3278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c327c:
    // 0x1c327c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c327cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3280:
    // 0x1c3280: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c3280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1c3284:
    // 0x1c3284: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c3284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c3288:
    // 0x1c3288: 0xc066c72  jal         func_19B1C8
label_1c328c:
    if (ctx->pc == 0x1C328Cu) {
        ctx->pc = 0x1C328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3288u;
        // 0x1c328c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3290u;
        goto label_1c3290;
    }
    ctx->pc = 0x1C3288u;
    SET_GPR_U32(ctx, 31, 0x1C3290u);
    ctx->pc = 0x1C328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3288u;
    // 0x1c328c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C3290u;
label_1c3290:
    // 0x1c3290: 0x27828980  addiu       $v0, $gp, -0x7680
    ctx->pc = 0x1c3290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936960));
label_1c3294:
    // 0x1c3294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3298:
    // 0x1c3298: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c3298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c329c:
    // 0x1c329c: 0x24060608  addiu       $a2, $zero, 0x608
    ctx->pc = 0x1c329cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_1c32a0:
    // 0x1c32a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c32a4:
    // 0x1c32a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c32a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c32a8:
    // 0x1c32a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c32a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c32ac:
    // 0x1c32ac: 0xc066c72  jal         func_19B1C8
label_1c32b0:
    if (ctx->pc == 0x1C32B0u) {
        ctx->pc = 0x1C32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32ACu;
        // 0x1c32b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C32B4u;
        goto label_1c32b4;
    }
    ctx->pc = 0x1C32ACu;
    SET_GPR_U32(ctx, 31, 0x1C32B4u);
    ctx->pc = 0x1C32B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32ACu;
    // 0x1c32b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C32B4u;
label_1c32b4:
    // 0x1c32b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c32b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c32b8:
    // 0x1c32b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c32b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c32bc:
    // 0x1c32bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c32bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c32c0:
    // 0x1c32c0: 0x3e00008  jr          $ra
label_1c32c4:
    if (ctx->pc == 0x1C32C4u) {
        ctx->pc = 0x1C32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32C0u;
        // 0x1c32c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C32C8u;
        goto label_1c32c8;
    }
    ctx->pc = 0x1C32C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C32C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32C0u;
        // 0x1c32c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C32C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C32C8u;
label_1c32c8:
    // 0x1c32c8: 0x0  nop
    ctx->pc = 0x1c32c8u;
    // NOP
label_1c32cc:
    // 0x1c32cc: 0x0  nop
    ctx->pc = 0x1c32ccu;
    // NOP
label_1c32d0:
    // 0x1c32d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c32d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c32d4:
    // 0x1c32d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c32d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c32d8:
    // 0x1c32d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c32d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c32dc:
    // 0x1c32dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c32dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c32e0:
    // 0x1c32e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c32e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c32e4:
    // 0x1c32e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c32e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c32e8:
    // 0x1c32e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c32e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c32ec:
    // 0x1c32ec: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c32ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c32f0:
    // 0x1c32f0: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x1c32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
label_1c32f4:
    // 0x1c32f4: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c32f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c32f8:
    // 0x1c32f8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c32f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c32fc:
    // 0x1c32fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c3300:
    if (ctx->pc == 0x1C3300u) {
        ctx->pc = 0x1C3304u;
        goto label_1c3304;
    }
    ctx->pc = 0x1C32FCu;
    {
        const bool branch_taken_0x1c32fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c32fc) {
            ctx->pc = 0x1C3310u;
            goto label_1c3310;
        }
    }
    ctx->pc = 0x1C3304u;
label_1c3304:
    // 0x1c3304: 0xc070038  jal         func_1C00E0
label_1c3308:
    if (ctx->pc == 0x1C3308u) {
        ctx->pc = 0x1C330Cu;
        goto label_1c330c;
    }
    ctx->pc = 0x1C3304u;
    SET_GPR_U32(ctx, 31, 0x1C330Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C330Cu;
label_1c330c:
    // 0x1c330c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c330cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c3310:
    // 0x1c3310: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c3310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c3314:
    // 0x1c3314: 0x2463f740  addiu       $v1, $v1, -0x8C0
    ctx->pc = 0x1c3314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965056));
label_1c3318:
    // 0x1c3318: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c3318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c331c:
    // 0x1c331c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c331cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c3320:
    // 0x1c3320: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c3324:
    if (ctx->pc == 0x1C3324u) {
        ctx->pc = 0x1C3328u;
        goto label_1c3328;
    }
    ctx->pc = 0x1C3320u;
    {
        const bool branch_taken_0x1c3320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3320) {
            ctx->pc = 0x1C3334u;
            goto label_1c3334;
        }
    }
    ctx->pc = 0x1C3328u;
label_1c3328:
    // 0x1c3328: 0xc070038  jal         func_1C00E0
label_1c332c:
    if (ctx->pc == 0x1C332Cu) {
        ctx->pc = 0x1C3330u;
        goto label_1c3330;
    }
    ctx->pc = 0x1C3328u;
    SET_GPR_U32(ctx, 31, 0x1C3330u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C3330u;
label_1c3330:
    // 0x1c3330: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c3330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c3334:
    // 0x1c3334: 0x0  nop
    ctx->pc = 0x1c3334u;
    // NOP
label_1c3338:
    // 0x1c3338: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c333c:
    // 0x1c333c: 0x2a03002a  slti        $v1, $s0, 0x2A
    ctx->pc = 0x1c333cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)42) ? 1 : 0);
label_1c3340:
    // 0x1c3340: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1c3344:
    if (ctx->pc == 0x1C3344u) {
        ctx->pc = 0x1C3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3340u;
        // 0x1c3344: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3348u;
        goto label_1c3348;
    }
    ctx->pc = 0x1C3340u;
    {
        const bool branch_taken_0x1c3340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3340u;
        // 0x1c3344: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3340) {
            ctx->pc = 0x1C32ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c32ec;
        }
    }
    ctx->pc = 0x1C3348u;
label_1c3348:
    // 0x1c3348: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c3348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c334c:
    // 0x1c334c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c334cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3350:
    // 0x1c3350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3354:
    // 0x1c3354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3358:
    // 0x1c3358: 0x3e00008  jr          $ra
label_1c335c:
    if (ctx->pc == 0x1C335Cu) {
        ctx->pc = 0x1C335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3358u;
        // 0x1c335c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3360u;
        goto label_1c3360;
    }
    ctx->pc = 0x1C3358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3358u;
        // 0x1c335c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3360u;
label_1c3360:
    // 0x1c3360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c3364:
    // 0x1c3364: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c3364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1c3368:
    // 0x1c3368: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c3368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c336c:
    // 0x1c336c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c3370:
    // 0x1c3370: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c3370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c3374:
    // 0x1c3374: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c3378:
    // 0x1c3378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c337c:
    // 0x1c337c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c337cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c3380:
    // 0x1c3380: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c3380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3384:
    // 0x1c3384: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c3384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3388:
    // 0x1c3388: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c338c:
    // 0x1c338c: 0x2442f7f0  addiu       $v0, $v0, -0x810
    ctx->pc = 0x1c338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965232));
label_1c3390:
    // 0x1c3390: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c3390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c3394:
    // 0x1c3394: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c3394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c3398:
    // 0x1c3398: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c339c:
    if (ctx->pc == 0x1C339Cu) {
        ctx->pc = 0x1C339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3398u;
        // 0x1c339c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33A0u;
        goto label_1c33a0;
    }
    ctx->pc = 0x1C3398u;
    {
        const bool branch_taken_0x1c3398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3398u;
        // 0x1c339c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3398) {
            ctx->pc = 0x1C33ACu;
            goto label_1c33ac;
        }
    }
    ctx->pc = 0x1C33A0u;
label_1c33a0:
    // 0x1c33a0: 0xc070080  jal         func_1C0200
label_1c33a4:
    if (ctx->pc == 0x1C33A4u) {
        ctx->pc = 0x1C33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33A0u;
        // 0x1c33a4: 0x24055a80  addiu       $a1, $zero, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33A8u;
        goto label_1c33a8;
    }
    ctx->pc = 0x1C33A0u;
    SET_GPR_U32(ctx, 31, 0x1C33A8u);
    ctx->pc = 0x1C33A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33A0u;
    // 0x1c33a4: 0x24055a80  addiu       $a1, $zero, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C33A8u;
label_1c33a8:
    // 0x1c33a8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c33a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c33ac:
    // 0x1c33ac: 0x0  nop
    ctx->pc = 0x1c33acu;
    // NOP
label_1c33b0:
    // 0x1c33b0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c33b4:
    // 0x1c33b4: 0x2442f740  addiu       $v0, $v0, -0x8C0
    ctx->pc = 0x1c33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
label_1c33b8:
    // 0x1c33b8: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c33b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c33bc:
    // 0x1c33bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c33c0:
    // 0x1c33c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c33c4:
    if (ctx->pc == 0x1C33C4u) {
        ctx->pc = 0x1C33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33C0u;
        // 0x1c33c4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33C8u;
        goto label_1c33c8;
    }
    ctx->pc = 0x1C33C0u;
    {
        const bool branch_taken_0x1c33c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33C0u;
        // 0x1c33c4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33c0) {
            ctx->pc = 0x1C33D4u;
            goto label_1c33d4;
        }
    }
    ctx->pc = 0x1C33C8u;
label_1c33c8:
    // 0x1c33c8: 0xc070080  jal         func_1C0200
label_1c33cc:
    if (ctx->pc == 0x1C33CCu) {
        ctx->pc = 0x1C33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33C8u;
        // 0x1c33cc: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33D0u;
        goto label_1c33d0;
    }
    ctx->pc = 0x1C33C8u;
    SET_GPR_U32(ctx, 31, 0x1C33D0u);
    ctx->pc = 0x1C33CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33C8u;
    // 0x1c33cc: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C33D0u;
label_1c33d0:
    // 0x1c33d0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c33d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c33d4:
    // 0x1c33d4: 0x0  nop
    ctx->pc = 0x1c33d4u;
    // NOP
label_1c33d8:
    // 0x1c33d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c33d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c33dc:
    // 0x1c33dc: 0x2a02002a  slti        $v0, $s0, 0x2A
    ctx->pc = 0x1c33dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)42) ? 1 : 0);
label_1c33e0:
    // 0x1c33e0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1c33e4:
    if (ctx->pc == 0x1C33E4u) {
        ctx->pc = 0x1C33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33E0u;
        // 0x1c33e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33E8u;
        goto label_1c33e8;
    }
    ctx->pc = 0x1C33E0u;
    {
        const bool branch_taken_0x1c33e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33E0u;
        // 0x1c33e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c33e0) {
            ctx->pc = 0x1C3388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3388;
        }
    }
    ctx->pc = 0x1C33E8u;
label_1c33e8:
    // 0x1c33e8: 0xc041738  jal         func_105CE0
label_1c33ec:
    if (ctx->pc == 0x1C33ECu) {
        ctx->pc = 0x1C33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33E8u;
        // 0x1c33ec: 0x240405c4  addiu       $a0, $zero, 0x5C4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1476));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33F0u;
        goto label_1c33f0;
    }
    ctx->pc = 0x1C33E8u;
    SET_GPR_U32(ctx, 31, 0x1C33F0u);
    ctx->pc = 0x1C33ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33E8u;
    // 0x1c33ec: 0x240405c4  addiu       $a0, $zero, 0x5C4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C33E8u, 0x1C33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33F0u;
label_1c33f0:
    // 0x1c33f0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c33f4:
    // 0x1c33f4: 0xc070080  jal         func_1C0200
label_1c33f8:
    if (ctx->pc == 0x1C33F8u) {
        ctx->pc = 0x1C33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C33F4u;
        // 0x1c33f8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C33FCu;
        goto label_1c33fc;
    }
    ctx->pc = 0x1C33F4u;
    SET_GPR_U32(ctx, 31, 0x1C33FCu);
    ctx->pc = 0x1C33F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33F4u;
    // 0x1c33f8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C33FCu;
label_1c33fc:
    // 0x1c33fc: 0x240405c4  addiu       $a0, $zero, 0x5C4
    ctx->pc = 0x1c33fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1476));
label_1c3400:
    // 0x1c3400: 0xc0416e4  jal         func_105B90
label_1c3404:
    if (ctx->pc == 0x1C3404u) {
        ctx->pc = 0x1C3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3400u;
        // 0x1c3404: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3408u;
        goto label_1c3408;
    }
    ctx->pc = 0x1C3400u;
    SET_GPR_U32(ctx, 31, 0x1C3408u);
    ctx->pc = 0x1C3404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3400u;
    // 0x1c3404: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C3400u, 0x1C3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3408u;
label_1c3408:
    // 0x1c3408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c340c:
    // 0x1c340c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c340cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3410:
    // 0x1c3410: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c3410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3414:
    // 0x1c3414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3418:
    // 0x1c3418: 0xc0602c8  jal         func_180B20
label_1c341c:
    if (ctx->pc == 0x1C341Cu) {
        ctx->pc = 0x1C341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3418u;
        // 0x1c341c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3420u;
        goto label_1c3420;
    }
    ctx->pc = 0x1C3418u;
    SET_GPR_U32(ctx, 31, 0x1C3420u);
    ctx->pc = 0x1C341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3418u;
    // 0x1c341c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    { ctx->pc = 0x180b20; return; }
    ctx->pc = 0x1C3420u;
label_1c3420:
    // 0x1c3420: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c3420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3424:
    // 0x1c3424: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3428:
    // 0x1c3428: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c342c:
    // 0x1c342c: 0x2442f7f0  addiu       $v0, $v0, -0x810
    ctx->pc = 0x1c342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965232));
label_1c3430:
    // 0x1c3430: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c3430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c3434:
    // 0x1c3434: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1c3434u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3438:
    // 0x1c3438: 0xc060678  jal         func_1819E0
label_1c343c:
    if (ctx->pc == 0x1C343Cu) {
        ctx->pc = 0x1C343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3438u;
        // 0x1c343c: 0x26b40080  addiu       $s4, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3440u;
        goto label_1c3440;
    }
    ctx->pc = 0x1C3438u;
    SET_GPR_U32(ctx, 31, 0x1C3440u);
    ctx->pc = 0x1C343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3438u;
    // 0x1c343c: 0x26b40080  addiu       $s4, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x1C3440u;
label_1c3440:
    // 0x1c3440: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c3440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c3444:
    // 0x1c3444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3448:
    // 0x1c3448: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c3448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c344c:
    // 0x1c344c: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1c344cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c3450:
    // 0x1c3450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3454:
    // 0x1c3454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3458:
    // 0x1c3458: 0x240a00a0  addiu       $t2, $zero, 0xA0
    ctx->pc = 0x1c3458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1c345c:
    // 0x1c345c: 0xc060300  jal         func_180C00
label_1c3460:
    if (ctx->pc == 0x1C3460u) {
        ctx->pc = 0x1C3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C345Cu;
        // 0x1c3460: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3464u;
        goto label_1c3464;
    }
    ctx->pc = 0x1C345Cu;
    SET_GPR_U32(ctx, 31, 0x1C3464u);
    ctx->pc = 0x1C3460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C345Cu;
    // 0x1c3460: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    { ctx->pc = 0x180c00; return; }
    ctx->pc = 0x1C3464u;
label_1c3464:
    // 0x1c3464: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c3464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c3468:
    // 0x1c3468: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1c3468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c346c:
    // 0x1c346c: 0xc08e93e  jal         func_23A4F8
label_1c3470:
    if (ctx->pc == 0x1C3470u) {
        ctx->pc = 0x1C3470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C346Cu;
        // 0x1c3470: 0x24065a00  addiu       $a2, $zero, 0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3474u;
        goto label_1c3474;
    }
    ctx->pc = 0x1C346Cu;
    SET_GPR_U32(ctx, 31, 0x1C3474u);
    ctx->pc = 0x1C3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C346Cu;
    // 0x1c3470: 0x24065a00  addiu       $a2, $zero, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C3474u;
label_1c3474:
    // 0x1c3474: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3478:
    // 0x1c3478: 0x2442f740  addiu       $v0, $v0, -0x8C0
    ctx->pc = 0x1c3478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
label_1c347c:
    // 0x1c347c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c3480:
    // 0x1c3480: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1c3480u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3484:
    // 0x1c3484: 0xc060668  jal         func_1819A0
label_1c3488:
    if (ctx->pc == 0x1C3488u) {
        ctx->pc = 0x1C3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3484u;
        // 0x1c3488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C348Cu;
        goto label_1c348c;
    }
    ctx->pc = 0x1C3484u;
    SET_GPR_U32(ctx, 31, 0x1C348Cu);
    ctx->pc = 0x1C3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3484u;
    // 0x1c3488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    { ctx->pc = 0x1819a0; return; }
    ctx->pc = 0x1C348Cu;
label_1c348c:
    // 0x1c348c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1c348cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c3490:
    // 0x1c3490: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3494:
    // 0x1c3494: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c3494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c3498:
    // 0x1c3498: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c3498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c349c:
    // 0x1c349c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c349cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c34a0:
    // 0x1c34a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c34a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c34a4:
    // 0x1c34a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c34a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c34a8:
    // 0x1c34a8: 0xc060300  jal         func_180C00
label_1c34ac:
    if (ctx->pc == 0x1C34ACu) {
        ctx->pc = 0x1C34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34A8u;
        // 0x1c34ac: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34B0u;
        goto label_1c34b0;
    }
    ctx->pc = 0x1C34A8u;
    SET_GPR_U32(ctx, 31, 0x1C34B0u);
    ctx->pc = 0x1C34ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34A8u;
    // 0x1c34ac: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    { ctx->pc = 0x180c00; return; }
    ctx->pc = 0x1C34B0u;
label_1c34b0:
    // 0x1c34b0: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x1c34b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_1c34b4:
    // 0x1c34b4: 0x26255a40  addiu       $a1, $s1, 0x5A40
    ctx->pc = 0x1c34b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23104));
label_1c34b8:
    // 0x1c34b8: 0xc08e93e  jal         func_23A4F8
label_1c34bc:
    if (ctx->pc == 0x1C34BCu) {
        ctx->pc = 0x1C34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34B8u;
        // 0x1c34bc: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34C0u;
        goto label_1c34c0;
    }
    ctx->pc = 0x1C34B8u;
    SET_GPR_U32(ctx, 31, 0x1C34C0u);
    ctx->pc = 0x1C34BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34B8u;
    // 0x1c34bc: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C34C0u;
label_1c34c0:
    // 0x1c34c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c34c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c34c4:
    // 0x1c34c4: 0x2a62002a  slti        $v0, $s3, 0x2A
    ctx->pc = 0x1c34c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)42) ? 1 : 0);
label_1c34c8:
    // 0x1c34c8: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_1c34cc:
    if (ctx->pc == 0x1C34CCu) {
        ctx->pc = 0x1C34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34C8u;
        // 0x1c34cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34D0u;
        goto label_1c34d0;
    }
    ctx->pc = 0x1C34C8u;
    {
        const bool branch_taken_0x1c34c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34C8u;
        // 0x1c34cc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34c8) {
            ctx->pc = 0x1C3414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3414;
        }
    }
    ctx->pc = 0x1C34D0u;
label_1c34d0:
    // 0x1c34d0: 0xc070038  jal         func_1C00E0
label_1c34d4:
    if (ctx->pc == 0x1C34D4u) {
        ctx->pc = 0x1C34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34D0u;
        // 0x1c34d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34D8u;
        goto label_1c34d8;
    }
    ctx->pc = 0x1C34D0u;
    SET_GPR_U32(ctx, 31, 0x1C34D8u);
    ctx->pc = 0x1C34D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34D0u;
    // 0x1c34d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C34D8u;
label_1c34d8:
    // 0x1c34d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c34d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c34dc:
    // 0x1c34dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c34dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c34e0:
    // 0x1c34e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c34e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c34e4:
    // 0x1c34e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c34e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c34e8:
    // 0x1c34e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c34e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c34ec:
    // 0x1c34ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c34ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c34f0:
    // 0x1c34f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c34f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c34f4:
    // 0x1c34f4: 0x3e00008  jr          $ra
label_1c34f8:
    if (ctx->pc == 0x1C34F8u) {
        ctx->pc = 0x1C34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34F4u;
        // 0x1c34f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C34FCu;
        goto label_1c34fc;
    }
    ctx->pc = 0x1C34F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34F4u;
        // 0x1c34f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C34F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C34FCu;
label_1c34fc:
    // 0x1c34fc: 0x0  nop
    ctx->pc = 0x1c34fcu;
    // NOP
label_1c3500:
    // 0x1c3500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c3504:
    // 0x1c3504: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3508:
    // 0x1c3508: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c350c:
    // 0x1c350c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c350cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1c3510:
    // 0x1c3510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c3514:
    // 0x1c3514: 0x2442f740  addiu       $v0, $v0, -0x8C0
    ctx->pc = 0x1c3514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
label_1c3518:
    // 0x1c3518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c351c:
    // 0x1c351c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c351cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c3520:
    // 0x1c3520: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c3520u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c3524:
    // 0x1c3524: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c3524u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c3528:
    // 0x1c3528: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c3528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c352c:
    // 0x1c352c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c352cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1c3530:
    // 0x1c3530: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c3530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3534:
    // 0x1c3534: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c3534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c3538:
    // 0x1c3538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c353c:
    // 0x1c353c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c353cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3540:
    // 0x1c3540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3544:
    // 0x1c3544: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c3544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1c3548:
    // 0x1c3548: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c3548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c354c:
    // 0x1c354c: 0xc066c72  jal         func_19B1C8
label_1c3550:
    if (ctx->pc == 0x1C3550u) {
        ctx->pc = 0x1C3550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C354Cu;
        // 0x1c3550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3554u;
        goto label_1c3554;
    }
    ctx->pc = 0x1C354Cu;
    SET_GPR_U32(ctx, 31, 0x1C3554u);
    ctx->pc = 0x1C3550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C354Cu;
    // 0x1c3550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C3554u;
label_1c3554:
    // 0x1c3554: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3558:
    // 0x1c3558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c355c:
    // 0x1c355c: 0x2442f7f0  addiu       $v0, $v0, -0x810
    ctx->pc = 0x1c355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965232));
label_1c3560:
    // 0x1c3560: 0x240605a8  addiu       $a2, $zero, 0x5A8
    ctx->pc = 0x1c3560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1448));
label_1c3564:
    // 0x1c3564: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c3564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c3568:
    // 0x1c3568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c356c:
    // 0x1c356c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c356cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3570:
    // 0x1c3570: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3574:
    // 0x1c3574: 0xc066c72  jal         func_19B1C8
label_1c3578:
    if (ctx->pc == 0x1C3578u) {
        ctx->pc = 0x1C3578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3574u;
        // 0x1c3578: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C357Cu;
        goto label_1c357c;
    }
    ctx->pc = 0x1C3574u;
    SET_GPR_U32(ctx, 31, 0x1C357Cu);
    ctx->pc = 0x1C3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3574u;
    // 0x1c3578: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C357Cu;
label_1c357c:
    // 0x1c357c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c357cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3580:
    // 0x1c3580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3584:
    // 0x1c3584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3588:
    // 0x1c3588: 0x3e00008  jr          $ra
label_1c358c:
    if (ctx->pc == 0x1C358Cu) {
        ctx->pc = 0x1C358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3588u;
        // 0x1c358c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3590u;
        goto label_1c3590;
    }
    ctx->pc = 0x1C3588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3588u;
        // 0x1c358c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3590u;
label_1c3590:
    // 0x1c3590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c3590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1c3594:
    // 0x1c3594: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c3594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1c3598:
    // 0x1c3598: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c3598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1c359c:
    // 0x1c359c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c35a0:
    // 0x1c35a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c35a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c35a4:
    // 0x1c35a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c35a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c35a8:
    // 0x1c35a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c35a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c35ac:
    // 0x1c35ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c35acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c35b0:
    // 0x1c35b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c35b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c35b4:
    // 0x1c35b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c35b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c35b8:
    // 0x1c35b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c35b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c35bc:
    // 0x1c35bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c35bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c35c0:
    // 0x1c35c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1c35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1c35c4:
    // 0x1c35c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c35c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c35c8:
    // 0x1c35c8: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1c35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1c35cc:
    // 0x1c35cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c35ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c35d0:
    // 0x1c35d0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1c35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1c35d4:
    // 0x1c35d4: 0x24523620  addiu       $s2, $v0, 0x3620
    ctx->pc = 0x1c35d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_1c35d8:
    // 0x1c35d8: 0x9242005c  lbu         $v0, 0x5C($s2)
    ctx->pc = 0x1c35d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 92)));
label_1c35dc:
    // 0x1c35dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c35e0:
    if (ctx->pc == 0x1C35E0u) {
        ctx->pc = 0x1C35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35DCu;
        // 0x1c35e0: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C35E4u;
        goto label_1c35e4;
    }
    ctx->pc = 0x1C35DCu;
    {
        const bool branch_taken_0x1c35dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35DCu;
        // 0x1c35e0: 0x2511821  addu        $v1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35dc) {
            ctx->pc = 0x1C35FCu;
            goto label_1c35fc;
        }
    }
    ctx->pc = 0x1C35E4u;
label_1c35e4:
    // 0x1c35e4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1c35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1c35e8:
    // 0x1c35e8: 0x9063005e  lbu         $v1, 0x5E($v1)
    ctx->pc = 0x1c35e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 94)));
label_1c35ec:
    // 0x1c35ec: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1c35f0:
    if (ctx->pc == 0x1C35F0u) {
        ctx->pc = 0x1C35F4u;
        goto label_1c35f4;
    }
    ctx->pc = 0x1C35ECu;
    {
        const bool branch_taken_0x1c35ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c35ec) {
            ctx->pc = 0x1C3604u;
            goto label_1c3604;
        }
    }
    ctx->pc = 0x1C35F4u;
label_1c35f4:
    // 0x1c35f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c35f8:
    if (ctx->pc == 0x1C35F8u) {
        ctx->pc = 0x1C35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35F4u;
        // 0x1c35f8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C35FCu;
        goto label_1c35fc;
    }
    ctx->pc = 0x1C35F4u;
    {
        const bool branch_taken_0x1c35f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35F4u;
        // 0x1c35f8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35f4) {
            ctx->pc = 0x1C3604u;
            goto label_1c3604;
        }
    }
    ctx->pc = 0x1C35FCu;
label_1c35fc:
    // 0x1c35fc: 0x0  nop
    ctx->pc = 0x1c35fcu;
    // NOP
label_1c3600:
    // 0x1c3600: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c3600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3604:
    // 0x1c3604: 0x0  nop
    ctx->pc = 0x1c3604u;
    // NOP
label_1c3608:
    // 0x1c3608: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c360c:
    // 0x1c360c: 0x3b080  sll         $s6, $v1, 2
    ctx->pc = 0x1c360cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c3610:
    // 0x1c3610: 0x2442f740  addiu       $v0, $v0, -0x8C0
    ctx->pc = 0x1c3610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965056));
label_1c3614:
    // 0x1c3614: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1c3614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1c3618:
    // 0x1c3618: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c361c:
    // 0x1c361c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c361cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3620:
    // 0x1c3620: 0x2463f8a0  addiu       $v1, $v1, -0x760
    ctx->pc = 0x1c3620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965408));
label_1c3624:
    // 0x1c3624: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1c3624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1c3628:
    // 0x1c3628: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1c3628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1c362c:
    // 0x1c362c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1c362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1c3630:
    // 0x1c3630: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c3630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3634:
    // 0x1c3634: 0xc08e93e  jal         func_23A4F8
label_1c3638:
    if (ctx->pc == 0x1C3638u) {
        ctx->pc = 0x1C3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3634u;
        // 0x1c3638: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C363Cu;
        goto label_1c363c;
    }
    ctx->pc = 0x1C3634u;
    SET_GPR_U32(ctx, 31, 0x1C363Cu);
    ctx->pc = 0x1C3638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3634u;
    // 0x1c3638: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C363Cu;
label_1c363c:
    // 0x1c363c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c363cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3640:
    // 0x1c3640: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c3640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c3644:
    // 0x1c3644: 0x2442f7f0  addiu       $v0, $v0, -0x810
    ctx->pc = 0x1c3644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965232));
label_1c3648:
    // 0x1c3648: 0x2463f8d0  addiu       $v1, $v1, -0x730
    ctx->pc = 0x1c3648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965456));
label_1c364c:
    // 0x1c364c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1c364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1c3650:
    // 0x1c3650: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1c3650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1c3654:
    // 0x1c3654: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c3654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3658:
    // 0x1c3658: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1c3658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1c365c:
    // 0x1c365c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1c365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1c3660:
    // 0x1c3660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c3660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3664:
    // 0x1c3664: 0xc08e93e  jal         func_23A4F8
label_1c3668:
    if (ctx->pc == 0x1C3668u) {
        ctx->pc = 0x1C3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3664u;
        // 0x1c3668: 0x24065a80  addiu       $a2, $zero, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C366Cu;
        goto label_1c366c;
    }
    ctx->pc = 0x1C3664u;
    SET_GPR_U32(ctx, 31, 0x1C366Cu);
    ctx->pc = 0x1C3668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3664u;
    // 0x1c3668: 0x24065a80  addiu       $a2, $zero, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C366Cu;
label_1c366c:
    // 0x1c366c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c366cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c3670:
    // 0x1c3670: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x1c3670u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c3674:
    // 0x1c3674: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_1c3678:
    if (ctx->pc == 0x1C3678u) {
        ctx->pc = 0x1C3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3674u;
        // 0x1c3678: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C367Cu;
        goto label_1c367c;
    }
    ctx->pc = 0x1C3674u;
    {
        const bool branch_taken_0x1c3674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3674u;
        // 0x1c3678: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3674) {
            ctx->pc = 0x1C35D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c35d8;
        }
    }
    ctx->pc = 0x1C367Cu;
label_1c367c:
    // 0x1c367c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c367cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c3680:
    // 0x1c3680: 0x26940090  addiu       $s4, $s4, 0x90
    ctx->pc = 0x1c3680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_1c3684:
    // 0x1c3684: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1c3684u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c3688:
    // 0x1c3688: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
label_1c368c:
    if (ctx->pc == 0x1C368Cu) {
        ctx->pc = 0x1C368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3688u;
        // 0x1c368c: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3690u;
        goto label_1c3690;
    }
    ctx->pc = 0x1C3688u;
    {
        const bool branch_taken_0x1c3688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3688u;
        // 0x1c368c: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3688) {
            ctx->pc = 0x1C35C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c35c0;
        }
    }
    ctx->pc = 0x1C3690u;
label_1c3690:
    // 0x1c3690: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c3690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1c3694:
    // 0x1c3694: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c3694u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c3698:
    // 0x1c3698: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c3698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c369c:
    // 0x1c369c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c369cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c36a0:
    // 0x1c36a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c36a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c36a4:
    // 0x1c36a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c36a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c36a8:
    // 0x1c36a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c36a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c36ac:
    // 0x1c36ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c36acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c36b0:
    // 0x1c36b0: 0x3e00008  jr          $ra
label_1c36b4:
    if (ctx->pc == 0x1C36B4u) {
        ctx->pc = 0x1C36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36B0u;
        // 0x1c36b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C36B8u;
        goto label_1c36b8;
    }
    ctx->pc = 0x1C36B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36B0u;
        // 0x1c36b4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C36B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C36B8u;
label_1c36b8:
    // 0x1c36b8: 0x0  nop
    ctx->pc = 0x1c36b8u;
    // NOP
label_1c36bc:
    // 0x1c36bc: 0x0  nop
    ctx->pc = 0x1c36bcu;
    // NOP
label_1c36c0:
    // 0x1c36c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c36c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c36c4:
    // 0x1c36c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c36c8:
    // 0x1c36c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c36c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c36cc:
    // 0x1c36cc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1c36ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1c36d0:
    // 0x1c36d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c36d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c36d4:
    // 0x1c36d4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c36d8:
    // 0x1c36d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c36d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c36dc:
    // 0x1c36dc: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x1c36dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
label_1c36e0:
    // 0x1c36e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c36e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c36e4:
    // 0x1c36e4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c36e8:
    // 0x1c36e8: 0x2442f8a0  addiu       $v0, $v0, -0x760
    ctx->pc = 0x1c36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965408));
label_1c36ec:
    // 0x1c36ec: 0x38880  sll         $s1, $v1, 2
    ctx->pc = 0x1c36ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c36f0:
    // 0x1c36f0: 0x8c293ffc  lw          $t1, 0x3FFC($at)
    ctx->pc = 0x1c36f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c36f4:
    // 0x1c36f4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c36f8:
    // 0x1c36f8: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1c36f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c36fc:
    // 0x1c36fc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1c36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1c3700:
    // 0x1c3700: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c3704:
    // 0x1c3704: 0x25081e00  addiu       $t0, $t0, 0x1E00
    ctx->pc = 0x1c3704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7680));
label_1c3708:
    // 0x1c3708: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c3708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c370c:
    // 0x1c370c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c370cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c3710:
    // 0x1c3710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3714:
    // 0x1c3714: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x1c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1c3718:
    // 0x1c3718: 0x1039021  addu        $s2, $t0, $v1
    ctx->pc = 0x1c3718u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1c371c:
    // 0x1c371c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c371cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3720:
    // 0x1c3720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3724:
    // 0x1c3724: 0xc066c72  jal         func_19B1C8
label_1c3728:
    if (ctx->pc == 0x1C3728u) {
        ctx->pc = 0x1C3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3724u;
        // 0x1c3728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C372Cu;
        goto label_1c372c;
    }
    ctx->pc = 0x1C3724u;
    SET_GPR_U32(ctx, 31, 0x1C372Cu);
    ctx->pc = 0x1C3728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3724u;
    // 0x1c3728: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C372Cu;
label_1c372c:
    // 0x1c372c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3730:
    // 0x1c3730: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3734:
    // 0x1c3734: 0x2442f8d0  addiu       $v0, $v0, -0x730
    ctx->pc = 0x1c3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965456));
label_1c3738:
    // 0x1c3738: 0x240605a8  addiu       $a2, $zero, 0x5A8
    ctx->pc = 0x1c3738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1448));
label_1c373c:
    // 0x1c373c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c3740:
    // 0x1c3740: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3744:
    // 0x1c3744: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1c3744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1c3748:
    // 0x1c3748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c374c:
    // 0x1c374c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c3750:
    // 0x1c3750: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c3750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3754:
    // 0x1c3754: 0xc066c72  jal         func_19B1C8
label_1c3758:
    if (ctx->pc == 0x1C3758u) {
        ctx->pc = 0x1C3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3754u;
        // 0x1c3758: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C375Cu;
        goto label_1c375c;
    }
    ctx->pc = 0x1C3754u;
    SET_GPR_U32(ctx, 31, 0x1C375Cu);
    ctx->pc = 0x1C3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3754u;
    // 0x1c3758: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C375Cu;
label_1c375c:
    // 0x1c375c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c3760:
    // 0x1c3760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3764:
    // 0x1c3764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3768:
    // 0x1c3768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c376c:
    // 0x1c376c: 0x3e00008  jr          $ra
label_1c3770:
    if (ctx->pc == 0x1C3770u) {
        ctx->pc = 0x1C3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C376Cu;
        // 0x1c3770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3774u;
        goto label_1c3774;
    }
    ctx->pc = 0x1C376Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C376Cu;
        // 0x1c3770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C376Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3774u;
label_1c3774:
    // 0x1c3774: 0x0  nop
    ctx->pc = 0x1c3774u;
    // NOP
label_1c3778:
    // 0x1c3778: 0x0  nop
    ctx->pc = 0x1c3778u;
    // NOP
label_1c377c:
    // 0x1c377c: 0x0  nop
    ctx->pc = 0x1c377cu;
    // NOP
label_1c3780:
    // 0x1c3780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c3780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c3784:
    // 0x1c3784: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c3784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c3788:
    // 0x1c3788: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c3788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c378c:
    // 0x1c378c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c3790:
    // 0x1c3790: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c3794:
    // 0x1c3794: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c3798:
    // 0x1c3798: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c3798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c379c:
    // 0x1c379c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c37a0:
    // 0x1c37a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c37a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c37a4:
    // 0x1c37a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c37a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c37a8:
    // 0x1c37a8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c37ac:
    // 0x1c37ac: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x1c37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
label_1c37b0:
    // 0x1c37b0: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1c37b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c37b4:
    // 0x1c37b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c37b8:
    // 0x1c37b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c37bc:
    if (ctx->pc == 0x1C37BCu) {
        ctx->pc = 0x1C37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37B8u;
        // 0x1c37bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C37C0u;
        goto label_1c37c0;
    }
    ctx->pc = 0x1C37B8u;
    {
        const bool branch_taken_0x1c37b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37B8u;
        // 0x1c37bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37b8) {
            ctx->pc = 0x1C37CCu;
            goto label_1c37cc;
        }
    }
    ctx->pc = 0x1C37C0u;
label_1c37c0:
    // 0x1c37c0: 0xc070080  jal         func_1C0200
label_1c37c4:
    if (ctx->pc == 0x1C37C4u) {
        ctx->pc = 0x1C37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37C0u;
        // 0x1c37c4: 0x24051480  addiu       $a1, $zero, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C37C8u;
        goto label_1c37c8;
    }
    ctx->pc = 0x1C37C0u;
    SET_GPR_U32(ctx, 31, 0x1C37C8u);
    ctx->pc = 0x1C37C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37C0u;
    // 0x1c37c4: 0x24051480  addiu       $a1, $zero, 0x1480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C37C8u;
label_1c37c8:
    // 0x1c37c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c37c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1c37cc:
    // 0x1c37cc: 0x0  nop
    ctx->pc = 0x1c37ccu;
    // NOP
label_1c37d0:
    // 0x1c37d0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c37d4:
    // 0x1c37d4: 0x2442f900  addiu       $v0, $v0, -0x700
    ctx->pc = 0x1c37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
label_1c37d8:
    // 0x1c37d8: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1c37d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c37dc:
    // 0x1c37dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c37e0:
    // 0x1c37e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c37e4:
    if (ctx->pc == 0x1C37E4u) {
        ctx->pc = 0x1C37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37E0u;
        // 0x1c37e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C37E8u;
        goto label_1c37e8;
    }
    ctx->pc = 0x1C37E0u;
    {
        const bool branch_taken_0x1c37e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37E0u;
        // 0x1c37e4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37e0) {
            ctx->pc = 0x1C37F4u;
            goto label_1c37f4;
        }
    }
    ctx->pc = 0x1C37E8u;
label_1c37e8:
    // 0x1c37e8: 0xc070080  jal         func_1C0200
label_1c37ec:
    if (ctx->pc == 0x1C37ECu) {
        ctx->pc = 0x1C37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37E8u;
        // 0x1c37ec: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C37F0u;
        goto label_1c37f0;
    }
    ctx->pc = 0x1C37E8u;
    SET_GPR_U32(ctx, 31, 0x1C37F0u);
    ctx->pc = 0x1C37ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C37E8u;
    // 0x1c37ec: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C37F0u;
label_1c37f0:
    // 0x1c37f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1c37f4:
    // 0x1c37f4: 0x0  nop
    ctx->pc = 0x1c37f4u;
    // NOP
label_1c37f8:
    // 0x1c37f8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1c37fc:
    // 0x1c37fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c3800:
    if (ctx->pc == 0x1C3800u) {
        ctx->pc = 0x1C3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37FCu;
        // 0x1c3800: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3804u;
        goto label_1c3804;
    }
    ctx->pc = 0x1C37FCu;
    {
        const bool branch_taken_0x1c37fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37FCu;
        // 0x1c3800: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37fc) {
            ctx->pc = 0x1C3814u;
            goto label_1c3814;
        }
    }
    ctx->pc = 0x1C3804u;
label_1c3804:
    // 0x1c3804: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c3804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c3808:
    // 0x1c3808: 0xc070080  jal         func_1C0200
label_1c380c:
    if (ctx->pc == 0x1C380Cu) {
        ctx->pc = 0x1C380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3808u;
        // 0x1c380c: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3810u;
        goto label_1c3810;
    }
    ctx->pc = 0x1C3808u;
    SET_GPR_U32(ctx, 31, 0x1C3810u);
    ctx->pc = 0x1C380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3808u;
    // 0x1c380c: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C3810u;
label_1c3810:
    // 0x1c3810: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1c3810u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1c3814:
    // 0x1c3814: 0x0  nop
    ctx->pc = 0x1c3814u;
    // NOP
label_1c3818:
    // 0x1c3818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c381c:
    // 0x1c381c: 0x2a020039  slti        $v0, $s0, 0x39
    ctx->pc = 0x1c381cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)57) ? 1 : 0);
label_1c3820:
    // 0x1c3820: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c3820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1c3824:
    // 0x1c3824: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_1c3828:
    if (ctx->pc == 0x1C3828u) {
        ctx->pc = 0x1C3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3824u;
        // 0x1c3828: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C382Cu;
        goto label_1c382c;
    }
    ctx->pc = 0x1C3824u;
    {
        const bool branch_taken_0x1c3824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3824u;
        // 0x1c3828: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3824) {
            ctx->pc = 0x1C37A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c37a8;
        }
    }
    ctx->pc = 0x1C382Cu;
label_1c382c:
    // 0x1c382c: 0xc041738  jal         func_105CE0
label_1c3830:
    if (ctx->pc == 0x1C3830u) {
        ctx->pc = 0x1C3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C382Cu;
        // 0x1c3830: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3834u;
        goto label_1c3834;
    }
    ctx->pc = 0x1C382Cu;
    SET_GPR_U32(ctx, 31, 0x1C3834u);
    ctx->pc = 0x1C3830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C382Cu;
    // 0x1c3830: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C382Cu, 0x1C3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3834u;
label_1c3834:
    // 0x1c3834: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c3834u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c3838:
    // 0x1c3838: 0xc070080  jal         func_1C0200
label_1c383c:
    if (ctx->pc == 0x1C383Cu) {
        ctx->pc = 0x1C383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3838u;
        // 0x1c383c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3840u;
        goto label_1c3840;
    }
    ctx->pc = 0x1C3838u;
    SET_GPR_U32(ctx, 31, 0x1C3840u);
    ctx->pc = 0x1C383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3838u;
    // 0x1c383c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C3840u;
label_1c3840:
    // 0x1c3840: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c3840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c3844:
    // 0x1c3844: 0xc0416e4  jal         func_105B90
label_1c3848:
    if (ctx->pc == 0x1C3848u) {
        ctx->pc = 0x1C3848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3844u;
        // 0x1c3848: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C384Cu;
        goto label_1c384c;
    }
    ctx->pc = 0x1C3844u;
    SET_GPR_U32(ctx, 31, 0x1C384Cu);
    ctx->pc = 0x1C3848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3844u;
    // 0x1c3848: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C3844u, 0x1C384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C384Cu;
label_1c384c:
    // 0x1c384c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c384cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3850:
    // 0x1c3850: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c3850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3854:
    // 0x1c3854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3858:
    // 0x1c3858: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c385c:
    // 0x1c385c: 0xc070ea8  jal         func_1C3AA0
label_1c3860:
    if (ctx->pc == 0x1C3860u) {
        ctx->pc = 0x1C3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C385Cu;
        // 0x1c3860: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3864u;
        goto label_1c3864;
    }
    ctx->pc = 0x1C385Cu;
    SET_GPR_U32(ctx, 31, 0x1C3864u);
    ctx->pc = 0x1C3860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C385Cu;
    // 0x1c3860: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1C3864u;
label_1c3864:
    // 0x1c3864: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c3864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c3868:
    // 0x1c3868: 0x2a220039  slti        $v0, $s1, 0x39
    ctx->pc = 0x1c3868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)57) ? 1 : 0);
label_1c386c:
    // 0x1c386c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1c3870:
    if (ctx->pc == 0x1C3870u) {
        ctx->pc = 0x1C3874u;
        goto label_1c3874;
    }
    ctx->pc = 0x1C386Cu;
    {
        const bool branch_taken_0x1c386c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c386c) {
            ctx->pc = 0x1C3854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3854;
        }
    }
    ctx->pc = 0x1C3874u;
label_1c3874:
    // 0x1c3874: 0xc070038  jal         func_1C00E0
label_1c3878:
    if (ctx->pc == 0x1C3878u) {
        ctx->pc = 0x1C3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3874u;
        // 0x1c3878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C387Cu;
        goto label_1c387c;
    }
    ctx->pc = 0x1C3874u;
    SET_GPR_U32(ctx, 31, 0x1C387Cu);
    ctx->pc = 0x1C3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3874u;
    // 0x1c3878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C387Cu;
label_1c387c:
    // 0x1c387c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c3880:
    // 0x1c3880: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c3880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c3884:
    // 0x1c3884: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c3884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c3888:
    // 0x1c3888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c388c:
    // 0x1c388c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c388cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1c3890u;
    return;
}

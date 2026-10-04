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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part49(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b3480u: goto label_2b3480;
        case 0x2b3484u: goto label_2b3484;
        case 0x2b3488u: goto label_2b3488;
        case 0x2b348cu: goto label_2b348c;
        case 0x2b3490u: goto label_2b3490;
        case 0x2b3494u: goto label_2b3494;
        case 0x2b3498u: goto label_2b3498;
        case 0x2b349cu: goto label_2b349c;
        case 0x2b34a0u: goto label_2b34a0;
        case 0x2b34a4u: goto label_2b34a4;
        case 0x2b34a8u: goto label_2b34a8;
        case 0x2b34acu: goto label_2b34ac;
        case 0x2b34b0u: goto label_2b34b0;
        case 0x2b34b4u: goto label_2b34b4;
        case 0x2b34b8u: goto label_2b34b8;
        case 0x2b34bcu: goto label_2b34bc;
        case 0x2b34c0u: goto label_2b34c0;
        case 0x2b34c4u: goto label_2b34c4;
        case 0x2b34c8u: goto label_2b34c8;
        case 0x2b34ccu: goto label_2b34cc;
        case 0x2b34d0u: goto label_2b34d0;
        case 0x2b34d4u: goto label_2b34d4;
        case 0x2b34d8u: goto label_2b34d8;
        case 0x2b34dcu: goto label_2b34dc;
        case 0x2b34e0u: goto label_2b34e0;
        case 0x2b34e4u: goto label_2b34e4;
        case 0x2b34e8u: goto label_2b34e8;
        case 0x2b34ecu: goto label_2b34ec;
        case 0x2b34f0u: goto label_2b34f0;
        case 0x2b34f4u: goto label_2b34f4;
        case 0x2b34f8u: goto label_2b34f8;
        case 0x2b34fcu: goto label_2b34fc;
        case 0x2b3500u: goto label_2b3500;
        case 0x2b3504u: goto label_2b3504;
        case 0x2b3508u: goto label_2b3508;
        case 0x2b350cu: goto label_2b350c;
        case 0x2b3510u: goto label_2b3510;
        case 0x2b3514u: goto label_2b3514;
        case 0x2b3518u: goto label_2b3518;
        case 0x2b351cu: goto label_2b351c;
        case 0x2b3520u: goto label_2b3520;
        case 0x2b3524u: goto label_2b3524;
        case 0x2b3528u: goto label_2b3528;
        case 0x2b352cu: goto label_2b352c;
        case 0x2b3530u: goto label_2b3530;
        case 0x2b3534u: goto label_2b3534;
        case 0x2b3538u: goto label_2b3538;
        case 0x2b353cu: goto label_2b353c;
        case 0x2b3540u: goto label_2b3540;
        case 0x2b3544u: goto label_2b3544;
        case 0x2b3548u: goto label_2b3548;
        case 0x2b354cu: goto label_2b354c;
        case 0x2b3550u: goto label_2b3550;
        case 0x2b3554u: goto label_2b3554;
        case 0x2b3558u: goto label_2b3558;
        case 0x2b355cu: goto label_2b355c;
        case 0x2b3560u: goto label_2b3560;
        case 0x2b3564u: goto label_2b3564;
        case 0x2b3568u: goto label_2b3568;
        case 0x2b356cu: goto label_2b356c;
        case 0x2b3570u: goto label_2b3570;
        case 0x2b3574u: goto label_2b3574;
        case 0x2b3578u: goto label_2b3578;
        case 0x2b357cu: goto label_2b357c;
        case 0x2b3580u: goto label_2b3580;
        case 0x2b3584u: goto label_2b3584;
        case 0x2b3588u: goto label_2b3588;
        case 0x2b358cu: goto label_2b358c;
        case 0x2b3590u: goto label_2b3590;
        case 0x2b3594u: goto label_2b3594;
        case 0x2b3598u: goto label_2b3598;
        case 0x2b359cu: goto label_2b359c;
        case 0x2b35a0u: goto label_2b35a0;
        case 0x2b35a4u: goto label_2b35a4;
        case 0x2b35a8u: goto label_2b35a8;
        case 0x2b35acu: goto label_2b35ac;
        case 0x2b35b0u: goto label_2b35b0;
        case 0x2b35b4u: goto label_2b35b4;
        case 0x2b35b8u: goto label_2b35b8;
        case 0x2b35bcu: goto label_2b35bc;
        case 0x2b35c0u: goto label_2b35c0;
        case 0x2b35c4u: goto label_2b35c4;
        case 0x2b35c8u: goto label_2b35c8;
        case 0x2b35ccu: goto label_2b35cc;
        case 0x2b35d0u: goto label_2b35d0;
        case 0x2b35d4u: goto label_2b35d4;
        case 0x2b35d8u: goto label_2b35d8;
        case 0x2b35dcu: goto label_2b35dc;
        case 0x2b35e0u: goto label_2b35e0;
        case 0x2b35e4u: goto label_2b35e4;
        case 0x2b35e8u: goto label_2b35e8;
        case 0x2b35ecu: goto label_2b35ec;
        case 0x2b35f0u: goto label_2b35f0;
        case 0x2b35f4u: goto label_2b35f4;
        case 0x2b35f8u: goto label_2b35f8;
        case 0x2b35fcu: goto label_2b35fc;
        case 0x2b3600u: goto label_2b3600;
        case 0x2b3604u: goto label_2b3604;
        case 0x2b3608u: goto label_2b3608;
        case 0x2b360cu: goto label_2b360c;
        case 0x2b3610u: goto label_2b3610;
        case 0x2b3614u: goto label_2b3614;
        case 0x2b3618u: goto label_2b3618;
        case 0x2b361cu: goto label_2b361c;
        case 0x2b3620u: goto label_2b3620;
        case 0x2b3624u: goto label_2b3624;
        case 0x2b3628u: goto label_2b3628;
        case 0x2b362cu: goto label_2b362c;
        case 0x2b3630u: goto label_2b3630;
        case 0x2b3634u: goto label_2b3634;
        case 0x2b3638u: goto label_2b3638;
        case 0x2b363cu: goto label_2b363c;
        case 0x2b3640u: goto label_2b3640;
        case 0x2b3644u: goto label_2b3644;
        case 0x2b3648u: goto label_2b3648;
        case 0x2b364cu: goto label_2b364c;
        case 0x2b3650u: goto label_2b3650;
        case 0x2b3654u: goto label_2b3654;
        case 0x2b3658u: goto label_2b3658;
        case 0x2b365cu: goto label_2b365c;
        case 0x2b3660u: goto label_2b3660;
        case 0x2b3664u: goto label_2b3664;
        case 0x2b3668u: goto label_2b3668;
        case 0x2b366cu: goto label_2b366c;
        case 0x2b3670u: goto label_2b3670;
        case 0x2b3674u: goto label_2b3674;
        case 0x2b3678u: goto label_2b3678;
        case 0x2b367cu: goto label_2b367c;
        case 0x2b3680u: goto label_2b3680;
        case 0x2b3684u: goto label_2b3684;
        case 0x2b3688u: goto label_2b3688;
        case 0x2b368cu: goto label_2b368c;
        case 0x2b3690u: goto label_2b3690;
        case 0x2b3694u: goto label_2b3694;
        case 0x2b3698u: goto label_2b3698;
        case 0x2b369cu: goto label_2b369c;
        case 0x2b36a0u: goto label_2b36a0;
        case 0x2b36a4u: goto label_2b36a4;
        case 0x2b36a8u: goto label_2b36a8;
        case 0x2b36acu: goto label_2b36ac;
        case 0x2b36b0u: goto label_2b36b0;
        case 0x2b36b4u: goto label_2b36b4;
        case 0x2b36b8u: goto label_2b36b8;
        case 0x2b36bcu: goto label_2b36bc;
        case 0x2b36c0u: goto label_2b36c0;
        case 0x2b36c4u: goto label_2b36c4;
        case 0x2b36c8u: goto label_2b36c8;
        case 0x2b36ccu: goto label_2b36cc;
        case 0x2b36d0u: goto label_2b36d0;
        case 0x2b36d4u: goto label_2b36d4;
        case 0x2b36d8u: goto label_2b36d8;
        case 0x2b36dcu: goto label_2b36dc;
        case 0x2b36e0u: goto label_2b36e0;
        case 0x2b36e4u: goto label_2b36e4;
        case 0x2b36e8u: goto label_2b36e8;
        case 0x2b36ecu: goto label_2b36ec;
        case 0x2b36f0u: goto label_2b36f0;
        case 0x2b36f4u: goto label_2b36f4;
        case 0x2b36f8u: goto label_2b36f8;
        case 0x2b36fcu: goto label_2b36fc;
        case 0x2b3700u: goto label_2b3700;
        case 0x2b3704u: goto label_2b3704;
        case 0x2b3708u: goto label_2b3708;
        case 0x2b370cu: goto label_2b370c;
        case 0x2b3710u: goto label_2b3710;
        case 0x2b3714u: goto label_2b3714;
        case 0x2b3718u: goto label_2b3718;
        case 0x2b371cu: goto label_2b371c;
        case 0x2b3720u: goto label_2b3720;
        case 0x2b3724u: goto label_2b3724;
        case 0x2b3728u: goto label_2b3728;
        case 0x2b372cu: goto label_2b372c;
        case 0x2b3730u: goto label_2b3730;
        case 0x2b3734u: goto label_2b3734;
        case 0x2b3738u: goto label_2b3738;
        case 0x2b373cu: goto label_2b373c;
        case 0x2b3740u: goto label_2b3740;
        case 0x2b3744u: goto label_2b3744;
        case 0x2b3748u: goto label_2b3748;
        case 0x2b374cu: goto label_2b374c;
        case 0x2b3750u: goto label_2b3750;
        case 0x2b3754u: goto label_2b3754;
        case 0x2b3758u: goto label_2b3758;
        case 0x2b375cu: goto label_2b375c;
        case 0x2b3760u: goto label_2b3760;
        case 0x2b3764u: goto label_2b3764;
        case 0x2b3768u: goto label_2b3768;
        case 0x2b376cu: goto label_2b376c;
        case 0x2b3770u: goto label_2b3770;
        case 0x2b3774u: goto label_2b3774;
        case 0x2b3778u: goto label_2b3778;
        case 0x2b377cu: goto label_2b377c;
        case 0x2b3780u: goto label_2b3780;
        case 0x2b3784u: goto label_2b3784;
        case 0x2b3788u: goto label_2b3788;
        case 0x2b378cu: goto label_2b378c;
        case 0x2b3790u: goto label_2b3790;
        case 0x2b3794u: goto label_2b3794;
        case 0x2b3798u: goto label_2b3798;
        case 0x2b379cu: goto label_2b379c;
        case 0x2b37a0u: goto label_2b37a0;
        case 0x2b37a4u: goto label_2b37a4;
        case 0x2b37a8u: goto label_2b37a8;
        case 0x2b37acu: goto label_2b37ac;
        case 0x2b37b0u: goto label_2b37b0;
        case 0x2b37b4u: goto label_2b37b4;
        case 0x2b37b8u: goto label_2b37b8;
        case 0x2b37bcu: goto label_2b37bc;
        case 0x2b37c0u: goto label_2b37c0;
        case 0x2b37c4u: goto label_2b37c4;
        case 0x2b37c8u: goto label_2b37c8;
        case 0x2b37ccu: goto label_2b37cc;
        case 0x2b37d0u: goto label_2b37d0;
        case 0x2b37d4u: goto label_2b37d4;
        case 0x2b37d8u: goto label_2b37d8;
        case 0x2b37dcu: goto label_2b37dc;
        case 0x2b37e0u: goto label_2b37e0;
        case 0x2b37e4u: goto label_2b37e4;
        case 0x2b37e8u: goto label_2b37e8;
        case 0x2b37ecu: goto label_2b37ec;
        case 0x2b37f0u: goto label_2b37f0;
        case 0x2b37f4u: goto label_2b37f4;
        case 0x2b37f8u: goto label_2b37f8;
        case 0x2b37fcu: goto label_2b37fc;
        case 0x2b3800u: goto label_2b3800;
        case 0x2b3804u: goto label_2b3804;
        case 0x2b3808u: goto label_2b3808;
        case 0x2b380cu: goto label_2b380c;
        case 0x2b3810u: goto label_2b3810;
        case 0x2b3814u: goto label_2b3814;
        case 0x2b3818u: goto label_2b3818;
        case 0x2b381cu: goto label_2b381c;
        case 0x2b3820u: goto label_2b3820;
        case 0x2b3824u: goto label_2b3824;
        case 0x2b3828u: goto label_2b3828;
        case 0x2b382cu: goto label_2b382c;
        case 0x2b3830u: goto label_2b3830;
        case 0x2b3834u: goto label_2b3834;
        case 0x2b3838u: goto label_2b3838;
        case 0x2b383cu: goto label_2b383c;
        case 0x2b3840u: goto label_2b3840;
        case 0x2b3844u: goto label_2b3844;
        case 0x2b3848u: goto label_2b3848;
        case 0x2b384cu: goto label_2b384c;
        case 0x2b3850u: goto label_2b3850;
        case 0x2b3854u: goto label_2b3854;
        case 0x2b3858u: goto label_2b3858;
        case 0x2b385cu: goto label_2b385c;
        case 0x2b3860u: goto label_2b3860;
        case 0x2b3864u: goto label_2b3864;
        case 0x2b3868u: goto label_2b3868;
        case 0x2b386cu: goto label_2b386c;
        case 0x2b3870u: goto label_2b3870;
        case 0x2b3874u: goto label_2b3874;
        case 0x2b3878u: goto label_2b3878;
        case 0x2b387cu: goto label_2b387c;
        case 0x2b3880u: goto label_2b3880;
        case 0x2b3884u: goto label_2b3884;
        case 0x2b3888u: goto label_2b3888;
        case 0x2b388cu: goto label_2b388c;
        case 0x2b3890u: goto label_2b3890;
        case 0x2b3894u: goto label_2b3894;
        case 0x2b3898u: goto label_2b3898;
        case 0x2b389cu: goto label_2b389c;
        case 0x2b38a0u: goto label_2b38a0;
        case 0x2b38a4u: goto label_2b38a4;
        case 0x2b38a8u: goto label_2b38a8;
        case 0x2b38acu: goto label_2b38ac;
        case 0x2b38b0u: goto label_2b38b0;
        case 0x2b38b4u: goto label_2b38b4;
        default: return;
    }

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
            goto label_2b3764;
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
            goto label_2b37a4;
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
            goto label_2b351c;
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
label_2b3480:
    // 0x2b3480: 0x1f91800  .word       0x01F91800                   # sll         $v1, $t9, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 25), 0));
label_2b3484:
    // 0x2b3484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3488:
    // 0x2b3488: 0x1fa1801  .word       0x01FA1801                   # INVALID     $t7, $k0, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3488u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B3488 raw=0x01FA1801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b348c:
    // 0x2b348c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b348cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3490:
    // 0x2b3490: 0x1fb1802  .word       0x01FB1802                   # srl         $v1, $k1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3490u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 27), 0));
label_2b3494:
    // 0x2b3494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3498:
    // 0x2b3498: 0x1fc1803  .word       0x01FC1803                   # sra         $v1, $gp, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3498u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 28), 0));
label_2b349c:
    // 0x2b349c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b349cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34a0:
    // 0x2b34a0: 0x1fd1804  sllv        $v1, $sp, $t7
    ctx->pc = 0x2b34a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 29), GPR_U32(ctx, 15) & 0x1F));
label_2b34a4:
    // 0x2b34a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34a8:
    // 0x2b34a8: 0x3e2c800  .word       0x03E2C800                   # sll         $t9, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b34a8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b34ac:
    // 0x2b34ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34b0:
    // 0x2b34b0: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b34b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B34B0 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b34b4:
    // 0x2b34b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34b8:
    // 0x2b34b8: 0x3e2d802  .word       0x03E2D802                   # srl         $k1, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b34b8u;
    SET_GPR_S32(ctx, 27, (int32_t)SRL32(GPR_U32(ctx, 2), 0));
label_2b34bc:
    // 0x2b34bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34c0:
    // 0x2b34c0: 0x3e2e003  .word       0x03E2E003                   # sra         $gp, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b34c0u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 2), 0));
label_2b34c4:
    // 0x2b34c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34c8:
    // 0x2b34c8: 0x3e2e804  sllv        $sp, $v0, $ra
    ctx->pc = 0x2b34c8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 31) & 0x1F));
label_2b34cc:
    // 0x2b34cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34d0:
    // 0x2b34d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b34d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b34d4:
    // 0x2b34d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34d8:
    // 0x2b34d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b34d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b34dc:
    // 0x2b34dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34e0:
    // 0x2b34e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b34e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b34e4:
    // 0x2b34e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34e8:
    // 0x2b34e8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b34e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b34ec:
    // 0x2b34ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b34f0:
    // 0x2b34f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b34f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b34f4:
    // 0x2b34f4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b34f4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b34f8:
    // 0x2b34f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b34f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b34fc:
    // 0x2b34fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b34fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3500:
    // 0x2b3500: 0x0  nop
    ctx->pc = 0x2b3500u;
    // NOP
label_2b3504:
    // 0x2b3504: 0x4a27041d  .word       0x4A27041D                   # vmaxi.w     $vf16, $vf0, $I # 00070000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x2b3504u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_2b3508:
    // 0x2b3508: 0x1f10000  .word       0x01F10000                   # sll         $zero, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3508u;
    
label_2b350c:
    // 0x2b350c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b350cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3510:
    // 0x2b3510: 0x1e80006  srlv        $zero, $t0, $t7
    ctx->pc = 0x2b3510u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
label_2b3514:
    // 0x2b3514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3518:
    // 0x2b3518: 0x1e90007  srav        $zero, $t1, $t7
    ctx->pc = 0x2b3518u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 9), GPR_U32(ctx, 15) & 0x1F));
label_2b351c:
    // 0x2b351c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b351cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3520:
    // 0x2b3520: 0x1ea0008  .word       0x01EA0008                   # jr          $t7 # 000A0000 <InstrIdType: CPU_SPECIAL>
label_2b3524:
    if (ctx->pc == 0x2B3524u) {
        ctx->pc = 0x2B3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3520u;
        // 0x2b3524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3528u;
        goto label_2b3528;
    }
    ctx->pc = 0x2B3520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x2B3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3520u;
        // 0x2b3524: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3520u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B3528u;
label_2b3528:
    // 0x2b3528: 0x1eb0009  .word       0x01EB0009                   # jalr        $zero, $t7 # 000B0000 <InstrIdType: CPU_SPECIAL>
label_2b352c:
    if (ctx->pc == 0x2B352Cu) {
        ctx->pc = 0x2B352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3528u;
        // 0x2b352c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3530u;
        goto label_2b3530;
    }
    ctx->pc = 0x2B3528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = 0x2B352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3528u;
        // 0x2b352c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3528u, 0x2B3530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B3530u;
label_2b3530:
    // 0x2b3530: 0x1f20001  .word       0x01F20001                   # INVALID     $t7, $s2, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3530u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B3530 raw=0x01F20001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3534:
    // 0x2b3534: 0x1f141bc  .word       0x01F141BC                   # dsll32      $t0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3534u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 6));
label_2b3538:
    // 0x2b3538: 0x1f30002  .word       0x01F30002                   # srl         $zero, $s3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3538u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 19), 0));
label_2b353c:
    // 0x2b353c: 0x1f148bd  .word       0x01F148BD                   # INVALID     $t7, $s1, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b353cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B353C raw=0x01F148BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3540:
    // 0x2b3540: 0x1f40003  .word       0x01F40003                   # sra         $zero, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3540u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 20), 0));
label_2b3544:
    // 0x2b3544: 0x1f150be  .word       0x01F150BE                   # dsrl32      $t2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3544u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) >> (32 + 2));
label_2b3548:
    // 0x2b3548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b354c:
    // 0x2b354c: 0x1f1584b  .word       0x01F1584B                   # movn        $t3, $t7, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b354cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b3550:
    // 0x2b3550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3554:
    // 0x2b3554: 0x1f241bc  .word       0x01F241BC                   # dsll32      $t0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3554u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 6));
label_2b3558:
    // 0x2b3558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b355c:
    // 0x2b355c: 0x1f248bd  .word       0x01F248BD                   # INVALID     $t7, $s2, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b355cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B355C raw=0x01F248BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3560:
    // 0x2b3560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3564:
    // 0x2b3564: 0x1f250be  .word       0x01F250BE                   # dsrl32      $t2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3564u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) >> (32 + 2));
label_2b3568:
    // 0x2b3568: 0x1f9000e  .word       0x01F9000E                   # INVALID     $t7, $t9, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3568u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2B3568 raw=0x01F9000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b356c:
    // 0x2b356c: 0x1f2588b  .word       0x01F2588B                   # movn        $t3, $t7, $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b356cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b3570:
    // 0x2b3570: 0x1fa000f  .word       0x01FA000F                   # sync # 01FA0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3570u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b3574:
    // 0x2b3574: 0x1f341bc  .word       0x01F341BC                   # dsll32      $t0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3574u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 6));
label_2b3578:
    // 0x2b3578: 0x1fb0010  .word       0x01FB0010                   # mfhi        $zero # 01FB0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3578u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2b357c:
    // 0x2b357c: 0x1f348bd  .word       0x01F348BD                   # INVALID     $t7, $s3, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b357cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B357C raw=0x01F348BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3580:
    // 0x2b3580: 0x1fc0011  .word       0x01FC0011                   # mthi        $t7 # 001C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3580u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b3584:
    // 0x2b3584: 0x1f350be  .word       0x01F350BE                   # dsrl32      $t2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3584u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) >> (32 + 2));
label_2b3588:
    // 0x2b3588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b358c:
    // 0x2b358c: 0x1f358cb  .word       0x01F358CB                   # movn        $t3, $t7, $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b358cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b3590:
    // 0x2b3590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3594:
    // 0x2b3594: 0x1f441bc  .word       0x01F441BC                   # dsll32      $t0, $s4, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3594u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) << (32 + 6));
label_2b3598:
    // 0x2b3598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b359c:
    // 0x2b359c: 0x1f448bd  .word       0x01F448BD                   # INVALID     $t7, $s4, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b359cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B359C raw=0x01F448BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b35a0:
    // 0x2b35a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35a4:
    // 0x2b35a4: 0x1f450be  .word       0x01F450BE                   # dsrl32      $t2, $s4, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 20) >> (32 + 2));
label_2b35a8:
    // 0x2b35a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35ac:
    // 0x2b35ac: 0x1f4590b  .word       0x01F4590B                   # movn        $t3, $t7, $s4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35acu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b35b0:
    // 0x2b35b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35b4:
    // 0x2b35b4: 0x1f1c9bc  .word       0x01F1C9BC                   # dsll32      $t9, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35b4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 17) << (32 + 6));
label_2b35b8:
    // 0x2b35b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35bc:
    // 0x2b35bc: 0x1f1d0bd  .word       0x01F1D0BD                   # INVALID     $t7, $s1, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B35BC raw=0x01F1D0BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b35c0:
    // 0x2b35c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35c4:
    // 0x2b35c4: 0x1f1d8be  .word       0x01F1D8BE                   # dsrl32      $k1, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35c4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 17) >> (32 + 2));
label_2b35c8:
    // 0x2b35c8: 0x1eb0004  sllv        $zero, $t3, $t7
    ctx->pc = 0x2b35c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 15) & 0x1F));
label_2b35cc:
    // 0x2b35cc: 0x1f1e30b  .word       0x01F1E30B                   # movn        $gp, $t7, $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35ccu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 15));
label_2b35d0:
    // 0x2b35d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35d4:
    // 0x2b35d4: 0x1f2c9bc  .word       0x01F2C9BC                   # dsll32      $t9, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35d4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 18) << (32 + 6));
label_2b35d8:
    // 0x2b35d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35dc:
    // 0x2b35dc: 0x1f2d0bd  .word       0x01F2D0BD                   # INVALID     $t7, $s2, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B35DC raw=0x01F2D0BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b35e0:
    // 0x2b35e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35e4:
    // 0x2b35e4: 0x1f2d8be  .word       0x01F2D8BE                   # dsrl32      $k1, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35e4u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 18) >> (32 + 2));
label_2b35e8:
    // 0x2b35e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35ec:
    // 0x2b35ec: 0x1f2e34b  .word       0x01F2E34B                   # movn        $gp, $t7, $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35ecu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 15));
label_2b35f0:
    // 0x2b35f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35f4:
    // 0x2b35f4: 0x1f3c9bc  .word       0x01F3C9BC                   # dsll32      $t9, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35f4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 19) << (32 + 6));
label_2b35f8:
    // 0x2b35f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b35f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b35fc:
    // 0x2b35fc: 0x1f3d0bd  .word       0x01F3D0BD                   # INVALID     $t7, $s3, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b35fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B35FC raw=0x01F3D0BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3600:
    // 0x2b3600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3604:
    // 0x2b3604: 0x1f3d8be  .word       0x01F3D8BE                   # dsrl32      $k1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3604u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 19) >> (32 + 2));
label_2b3608:
    // 0x2b3608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b360c:
    // 0x2b360c: 0x1f3e38b  .word       0x01F3E38B                   # movn        $gp, $t7, $s3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b360cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 15));
label_2b3610:
    // 0x2b3610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3614:
    // 0x2b3614: 0x1f4c9bc  .word       0x01F4C9BC                   # dsll32      $t9, $s4, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3614u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 20) << (32 + 6));
label_2b3618:
    // 0x2b3618: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3618u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b361c:
    // 0x2b361c: 0x1f4d0bd  .word       0x01F4D0BD                   # INVALID     $t7, $s4, -0x2F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b361cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B361C raw=0x01F4D0BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3620:
    // 0x2b3620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3624:
    // 0x2b3624: 0x41f4d8be  .word       0x41F4D8BE                   # INVALID     $t7, $s4, -0x2742 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3624u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x2B3624 raw=0x41F4D8BE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3628:
    // 0x2b3628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b362c:
    // 0x2b362c: 0x1f4e3cb  .word       0x01F4E3CB                   # movn        $gp, $t7, $s4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b362cu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 15));
label_2b3630:
    // 0x2b3630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3634:
    // 0x2b3634: 0x410b0783  .word       0x410B0783                   # INVALID     $t0, $t3, 0x783 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x2b3634u;
    // BC0 (Condition: 0xB) - Handled by branch logic
label_2b3638:
    // 0x2b3638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b363c:
    // 0x2b363c: 0x2b597c  .word       0x002B597C                   # dsll32      $t3, $t3, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b363cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 5));
label_2b3640:
    // 0x2b3640: 0x0  nop
    ctx->pc = 0x2b3640u;
    // NOP
label_2b3644:
    // 0x2b3644: 0x4a000450  vmaxx       $vf17, $vf0, $vf0x
    ctx->pc = 0x2b3644u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2b3648:
    // 0x2b3648: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b3648u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b364c:
    // 0x2b364c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b364cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3650:
    // 0x2b3650: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2b3654:
    if (ctx->pc == 0x2B3654u) {
        ctx->pc = 0x2B3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3650u;
        // 0x2b3654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3658u;
        goto label_2b3658;
    }
    ctx->pc = 0x2B3650u;
    {
        const bool branch_taken_0x2b3650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3650u;
        // 0x2b3654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3650) {
            ctx->pc = 0x2B597Cu;
            { ctx->pc = 0x2b597c; return; }
        }
    }
    ctx->pc = 0x2B3658u;
label_2b3658:
    // 0x2b3658: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2b3658u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b365c:
    // 0x2b365c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b365cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3660:
    // 0x2b3660: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2b3660u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b3664:
    // 0x2b3664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3668:
    // 0x2b3668: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2b3668u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b366c:
    // 0x2b366c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b366cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3670:
    // 0x2b3670: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2b3670u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b3674:
    // 0x2b3674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3678:
    // 0x2b3678: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2b3678u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2b367c:
    // 0x2b367c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b367cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3680:
    // 0x2b3680: 0x80990b7c  lb          $t9, 0xB7C($a0)
    ctx->pc = 0x2b3680u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2940)));
label_2b3684:
    // 0x2b3684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3688:
    // 0x2b3688: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b3688u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b368c:
    // 0x2b368c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b368cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3690:
    // 0x2b3690: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2b3690u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b3694:
    // 0x2b3694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3698:
    // 0x2b3698: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2b3698u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b369c:
    // 0x2b369c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b369cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b36a0:
    // 0x2b36a0: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2b36a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b36a4:
    // 0x2b36a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b36a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b36a8:
    // 0x2b36a8: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2b36a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b36ac:
    // 0x2b36ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b36acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b36b0:
    // 0x2b36b0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b36b0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b36b4:
    // 0x2b36b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b36b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b36b8:
    // 0x2b36b8: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2b36bc:
    if (ctx->pc == 0x2B36BCu) {
        ctx->pc = 0x2B36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36B8u;
        // 0x2b36bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36C0u;
        goto label_2b36c0;
    }
    ctx->pc = 0x2B36B8u;
    {
        const bool branch_taken_0x2b36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36B8u;
        // 0x2b36bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36b8) {
            ctx->pc = 0x2B36BCu;
            goto label_2b36bc;
        }
    }
    ctx->pc = 0x2B36C0u;
label_2b36c0:
    // 0x2b36c0: 0xa8e1005  j           func_A384014
label_2b36c4:
    if (ctx->pc == 0x2B36C4u) {
        ctx->pc = 0x2B36C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36C0u;
        // 0x2b36c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36C8u;
        goto label_2b36c8;
    }
    ctx->pc = 0x2B36C0u;
    ctx->pc = 0x2B36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B36C0u;
    // 0x2b36c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA384014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA384014u, 0x2B36C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B36C8u;
label_2b36c8:
    // 0x2b36c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b36c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b36cc:
    // 0x2b36cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b36ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b36d0:
    // 0x2b36d0: 0x800008f0  lb          $zero, 0x8F0($zero)
    ctx->pc = 0x2b36d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x8F0u));
label_2b36d4:
    // 0x2b36d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b36d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b36d8:
    // 0x2b36d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b36d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b36dc:
    // 0x2b36dc: 0x590541  .word       0x00590541                   # INVALID     $v0, $t9, 0x541 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b36dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B36DC raw=0x00590541"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b36e0:
    // 0x2b36e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b36e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b36e4:
    // 0x2b36e4: 0x1190545  .word       0x01190545                   # INVALID     $t0, $t9, 0x545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b36e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B36E4 raw=0x01190545"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b36e8:
    // 0x2b36e8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b36e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B36E8 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b36ec:
    // 0x2b36ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b36ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b36f0:
    // 0x2b36f0: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2b36f4:
    if (ctx->pc == 0x2B36F4u) {
        ctx->pc = 0x2B36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36F0u;
        // 0x2b36f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B36F8u;
        goto label_2b36f8;
    }
    ctx->pc = 0x2B36F0u;
    {
        const bool branch_taken_0x2b36f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36F0u;
        // 0x2b36f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36f0) {
            ctx->pc = 0x2B398Cu;
            { ctx->pc = 0x2b398c; return; }
        }
    }
    ctx->pc = 0x2B36F8u;
label_2b36f8:
    // 0x2b36f8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b36fc:
    if (ctx->pc == 0x2B36FCu) {
        ctx->pc = 0x2B36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36F8u;
        // 0x2b36fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3700u;
        goto label_2b3700;
    }
    ctx->pc = 0x2B36F8u;
    {
        const bool branch_taken_0x2b36f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B36F8u;
        // 0x2b36fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b36f8) {
            ctx->pc = 0x2B56F8u;
            { ctx->pc = 0x2b56f8; return; }
        }
    }
    ctx->pc = 0x2B3700u;
label_2b3700:
    // 0x2b3700: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b3704:
    if (ctx->pc == 0x2B3704u) {
        ctx->pc = 0x2B3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3700u;
        // 0x2b3704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3708u;
        goto label_2b3708;
    }
    ctx->pc = 0x2B3700u;
    {
        const bool branch_taken_0x2b3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3700u;
        // 0x2b3704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3700) {
            ctx->pc = 0x2C9708u;
            return;
        }
    }
    ctx->pc = 0x2B3708u;
label_2b3708:
    // 0x2b3708: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3708u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b370c:
    // 0x2b370c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b370cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3710:
    // 0x2b3710: 0xb0b1000  j           func_C2C4000
label_2b3714:
    if (ctx->pc == 0x2B3714u) {
        ctx->pc = 0x2B3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3710u;
        // 0x2b3714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3718u;
        goto label_2b3718;
    }
    ctx->pc = 0x2B3710u;
    ctx->pc = 0x2B3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3710u;
    // 0x2b3714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B3710u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3718u;
label_2b3718:
    // 0x2b3718: 0x90c1800  j           func_4306000
label_2b371c:
    if (ctx->pc == 0x2B371Cu) {
        ctx->pc = 0x2B371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3718u;
        // 0x2b371c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3720u;
        goto label_2b3720;
    }
    ctx->pc = 0x2B3718u;
    ctx->pc = 0x2B371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3718u;
    // 0x2b371c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306000u, 0x2B3718u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3720u;
label_2b3720:
    // 0x2b3720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3724:
    // 0x2b3724: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b3724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2b3728:
    // 0x2b3728: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b372c:
    // 0x2b372c: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b372cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2b3730:
    // 0x2b3730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3734:
    // 0x2b3734: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b3734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_2b3738:
    // 0x2b3738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b373c:
    // 0x2b373c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b373cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3740:
    // 0x2b3740: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3744:
    // 0x2b3744: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b3744u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2b3748:
    // 0x2b3748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b374c:
    // 0x2b374c: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b374cu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2b3750:
    // 0x2b3750: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3750u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3754:
    // 0x2b3754: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b3754u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2b3758:
    // 0x2b3758: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2b375c:
    if (ctx->pc == 0x2B375Cu) {
        ctx->pc = 0x2B375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3758u;
        // 0x2b375c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3760u;
        goto label_2b3760;
    }
    ctx->pc = 0x2B3758u;
    {
        const bool branch_taken_0x2b3758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3758u;
        // 0x2b375c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3758) {
            ctx->pc = 0x2B3768u;
            goto label_2b3768;
        }
    }
    ctx->pc = 0x2B3760u;
label_2b3760:
    // 0x2b3760: 0x10040000  beq         $zero, $a0, . + 4 + (0x0 << 2)
label_2b3764:
    if (ctx->pc == 0x2B3764u) {
        ctx->pc = 0x2B3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3760u;
        // 0x2b3764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3768u;
        goto label_2b3768;
    }
    ctx->pc = 0x2B3760u;
    {
        const bool branch_taken_0x2b3760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3760u;
        // 0x2b3764: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3760) {
            ctx->pc = 0x2B3764u;
            goto label_2b3764;
        }
    }
    ctx->pc = 0x2B3768u;
label_2b3768:
    // 0x2b3768: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b376c:
    if (ctx->pc == 0x2B376Cu) {
        ctx->pc = 0x2B376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3768u;
        // 0x2b376c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3770u;
        goto label_2b3770;
    }
    ctx->pc = 0x2B3768u;
    {
        const bool branch_taken_0x2b3768 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3768u;
        // 0x2b376c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3768) {
            ctx->pc = 0x2B5768u;
            { ctx->pc = 0x2b5768; return; }
        }
    }
    ctx->pc = 0x2B3770u;
label_2b3770:
    // 0x2b3770: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2b3770u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2b3774:
    // 0x2b3774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3778:
    // 0x2b3778: 0x10031801  beq         $zero, $v1, . + 4 + (0x1801 << 2)
label_2b377c:
    if (ctx->pc == 0x2B377Cu) {
        ctx->pc = 0x2B377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3778u;
        // 0x2b377c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3780u;
        goto label_2b3780;
    }
    ctx->pc = 0x2B3778u;
    {
        const bool branch_taken_0x2b3778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3778u;
        // 0x2b377c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3778) {
            ctx->pc = 0x2B9780u;
            { ctx->pc = 0x2b9780; return; }
        }
    }
    ctx->pc = 0x2B3780u;
label_2b3780:
    // 0x2b3780: 0x1f41fff  .word       0x01F41FFF                   # dsra32      $v1, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3780u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 20) >> (32 + 31));
label_2b3784:
    // 0x2b3784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3788:
    // 0x2b3788: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2b3788u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b378c:
    // 0x2b378c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b378cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3790:
    // 0x2b3790: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b3790u;
    // NOP (addi to $zero)
label_2b3794:
    // 0x2b3794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3798:
    // 0x2b3798: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2b3798u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2b379c:
    // 0x2b379c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b379cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37a0:
    // 0x2b37a0: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2b37a0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2b37a4:
    // 0x2b37a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37a8:
    // 0x2b37a8: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2b37a8u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2b37ac:
    // 0x2b37ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37b0:
    // 0x2b37b0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2b37b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b37b4:
    // 0x2b37b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37b8:
    // 0x2b37b8: 0x931800  .word       0x00931800                   # sll         $v1, $s3, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 0));
label_2b37bc:
    // 0x2b37bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37c0:
    // 0x2b37c0: 0x81f41b7c  lb          $s4, 0x1B7C($t7)
    ctx->pc = 0x2b37c0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2b37c4:
    // 0x2b37c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37c8:
    // 0x2b37c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b37c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b37cc:
    // 0x2b37cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37d0:
    // 0x2b37d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b37d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b37d4:
    // 0x2b37d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37d8:
    // 0x2b37d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b37d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b37dc:
    // 0x2b37dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37e0:
    // 0x2b37e0: 0x8094a33d  lb          $s4, -0x5CC3($a0)
    ctx->pc = 0x2b37e0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294943549)));
label_2b37e4:
    // 0x2b37e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37e8:
    // 0x2b37e8: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2b37e8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2b37ec:
    // 0x2b37ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b37ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b37f0:
    // 0x2b37f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b37f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b37f4:
    // 0x2b37f4: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b37f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2b37f8:
    // 0x2b37f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b37f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b37fc:
    // 0x2b37fc: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b37fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B37FC raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3800:
    // 0x2b3800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3804:
    // 0x2b3804: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2b3808:
    // 0x2b3808: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3808u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b380c:
    // 0x2b380c: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b380cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2b3810:
    // 0x2b3810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3814:
    // 0x2b3814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3818:
    // 0x2b3818: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3818u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b381c:
    // 0x2b381c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b381cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3820:
    // 0x2b3820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3824:
    // 0x2b3824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3828:
    // 0x2b3828: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2b3828u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b382c:
    // 0x2b382c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b382cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3830:
    // 0x2b3830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3834:
    // 0x2b3834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3838:
    // 0x2b3838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b383c:
    // 0x2b383c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b383cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3840:
    // 0x2b3840: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3840u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3844:
    // 0x2b3844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3848:
    // 0x2b3848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b384c:
    // 0x2b384c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b384cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3850:
    // 0x2b3850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3854:
    // 0x2b3854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3858:
    // 0x2b3858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b385c:
    // 0x2b385c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b385cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b3860:
    // 0x2b3860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3864:
    // 0x2b3864: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3864u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b3868:
    // 0x2b3868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b386c:
    // 0x2b386c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b386cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B386C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3870:
    // 0x2b3870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3874:
    // 0x2b3874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3878:
    // 0x2b3878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b387c:
    // 0x2b387c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b387cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3880:
    // 0x2b3880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3884:
    // 0x2b3884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3888:
    // 0x2b3888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b388c:
    // 0x2b388c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b388cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B388C raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3890:
    // 0x2b3890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3894:
    // 0x2b3894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3898:
    // 0x2b3898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b389c:
    // 0x2b389c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b389cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b38a0:
    // 0x2b38a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38a4:
    // 0x2b38a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b38a8:
    // 0x2b38a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38ac:
    // 0x2b38ac: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b38acu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2b38b0:
    // 0x2b38b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38b4:
    // 0x2b38b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b38b8u;
    return;
}

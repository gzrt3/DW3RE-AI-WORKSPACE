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


void FUN_0019b910_part115(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d33b0u: goto label_1d33b0;
        case 0x1d33b4u: goto label_1d33b4;
        case 0x1d33b8u: goto label_1d33b8;
        case 0x1d33bcu: goto label_1d33bc;
        case 0x1d33c0u: goto label_1d33c0;
        case 0x1d33c4u: goto label_1d33c4;
        case 0x1d33c8u: goto label_1d33c8;
        case 0x1d33ccu: goto label_1d33cc;
        case 0x1d33d0u: goto label_1d33d0;
        case 0x1d33d4u: goto label_1d33d4;
        case 0x1d33d8u: goto label_1d33d8;
        case 0x1d33dcu: goto label_1d33dc;
        case 0x1d33e0u: goto label_1d33e0;
        case 0x1d33e4u: goto label_1d33e4;
        case 0x1d33e8u: goto label_1d33e8;
        case 0x1d33ecu: goto label_1d33ec;
        case 0x1d33f0u: goto label_1d33f0;
        case 0x1d33f4u: goto label_1d33f4;
        case 0x1d33f8u: goto label_1d33f8;
        case 0x1d33fcu: goto label_1d33fc;
        case 0x1d3400u: goto label_1d3400;
        case 0x1d3404u: goto label_1d3404;
        case 0x1d3408u: goto label_1d3408;
        case 0x1d340cu: goto label_1d340c;
        case 0x1d3410u: goto label_1d3410;
        case 0x1d3414u: goto label_1d3414;
        case 0x1d3418u: goto label_1d3418;
        case 0x1d341cu: goto label_1d341c;
        case 0x1d3420u: goto label_1d3420;
        case 0x1d3424u: goto label_1d3424;
        case 0x1d3428u: goto label_1d3428;
        case 0x1d342cu: goto label_1d342c;
        case 0x1d3430u: goto label_1d3430;
        case 0x1d3434u: goto label_1d3434;
        case 0x1d3438u: goto label_1d3438;
        case 0x1d343cu: goto label_1d343c;
        case 0x1d3440u: goto label_1d3440;
        case 0x1d3444u: goto label_1d3444;
        case 0x1d3448u: goto label_1d3448;
        case 0x1d344cu: goto label_1d344c;
        case 0x1d3450u: goto label_1d3450;
        case 0x1d3454u: goto label_1d3454;
        case 0x1d3458u: goto label_1d3458;
        case 0x1d345cu: goto label_1d345c;
        case 0x1d3460u: goto label_1d3460;
        case 0x1d3464u: goto label_1d3464;
        case 0x1d3468u: goto label_1d3468;
        case 0x1d346cu: goto label_1d346c;
        case 0x1d3470u: goto label_1d3470;
        case 0x1d3474u: goto label_1d3474;
        case 0x1d3478u: goto label_1d3478;
        case 0x1d347cu: goto label_1d347c;
        case 0x1d3480u: goto label_1d3480;
        case 0x1d3484u: goto label_1d3484;
        case 0x1d3488u: goto label_1d3488;
        case 0x1d348cu: goto label_1d348c;
        case 0x1d3490u: goto label_1d3490;
        case 0x1d3494u: goto label_1d3494;
        case 0x1d3498u: goto label_1d3498;
        case 0x1d349cu: goto label_1d349c;
        case 0x1d34a0u: goto label_1d34a0;
        case 0x1d34a4u: goto label_1d34a4;
        case 0x1d34a8u: goto label_1d34a8;
        case 0x1d34acu: goto label_1d34ac;
        case 0x1d34b0u: goto label_1d34b0;
        case 0x1d34b4u: goto label_1d34b4;
        case 0x1d34b8u: goto label_1d34b8;
        case 0x1d34bcu: goto label_1d34bc;
        case 0x1d34c0u: goto label_1d34c0;
        case 0x1d34c4u: goto label_1d34c4;
        case 0x1d34c8u: goto label_1d34c8;
        case 0x1d34ccu: goto label_1d34cc;
        case 0x1d34d0u: goto label_1d34d0;
        case 0x1d34d4u: goto label_1d34d4;
        case 0x1d34d8u: goto label_1d34d8;
        case 0x1d34dcu: goto label_1d34dc;
        case 0x1d34e0u: goto label_1d34e0;
        case 0x1d34e4u: goto label_1d34e4;
        case 0x1d34e8u: goto label_1d34e8;
        case 0x1d34ecu: goto label_1d34ec;
        case 0x1d34f0u: goto label_1d34f0;
        case 0x1d34f4u: goto label_1d34f4;
        case 0x1d34f8u: goto label_1d34f8;
        case 0x1d34fcu: goto label_1d34fc;
        case 0x1d3500u: goto label_1d3500;
        case 0x1d3504u: goto label_1d3504;
        case 0x1d3508u: goto label_1d3508;
        case 0x1d350cu: goto label_1d350c;
        case 0x1d3510u: goto label_1d3510;
        case 0x1d3514u: goto label_1d3514;
        case 0x1d3518u: goto label_1d3518;
        case 0x1d351cu: goto label_1d351c;
        case 0x1d3520u: goto label_1d3520;
        case 0x1d3524u: goto label_1d3524;
        case 0x1d3528u: goto label_1d3528;
        case 0x1d352cu: goto label_1d352c;
        case 0x1d3530u: goto label_1d3530;
        case 0x1d3534u: goto label_1d3534;
        case 0x1d3538u: goto label_1d3538;
        case 0x1d353cu: goto label_1d353c;
        case 0x1d3540u: goto label_1d3540;
        case 0x1d3544u: goto label_1d3544;
        case 0x1d3548u: goto label_1d3548;
        case 0x1d354cu: goto label_1d354c;
        case 0x1d3550u: goto label_1d3550;
        case 0x1d3554u: goto label_1d3554;
        case 0x1d3558u: goto label_1d3558;
        case 0x1d355cu: goto label_1d355c;
        case 0x1d3560u: goto label_1d3560;
        case 0x1d3564u: goto label_1d3564;
        case 0x1d3568u: goto label_1d3568;
        case 0x1d356cu: goto label_1d356c;
        case 0x1d3570u: goto label_1d3570;
        case 0x1d3574u: goto label_1d3574;
        case 0x1d3578u: goto label_1d3578;
        case 0x1d357cu: goto label_1d357c;
        case 0x1d3580u: goto label_1d3580;
        case 0x1d3584u: goto label_1d3584;
        case 0x1d3588u: goto label_1d3588;
        case 0x1d358cu: goto label_1d358c;
        case 0x1d3590u: goto label_1d3590;
        case 0x1d3594u: goto label_1d3594;
        case 0x1d3598u: goto label_1d3598;
        case 0x1d359cu: goto label_1d359c;
        case 0x1d35a0u: goto label_1d35a0;
        case 0x1d35a4u: goto label_1d35a4;
        case 0x1d35a8u: goto label_1d35a8;
        case 0x1d35acu: goto label_1d35ac;
        case 0x1d35b0u: goto label_1d35b0;
        case 0x1d35b4u: goto label_1d35b4;
        case 0x1d35b8u: goto label_1d35b8;
        case 0x1d35bcu: goto label_1d35bc;
        case 0x1d35c0u: goto label_1d35c0;
        case 0x1d35c4u: goto label_1d35c4;
        case 0x1d35c8u: goto label_1d35c8;
        case 0x1d35ccu: goto label_1d35cc;
        case 0x1d35d0u: goto label_1d35d0;
        case 0x1d35d4u: goto label_1d35d4;
        case 0x1d35d8u: goto label_1d35d8;
        case 0x1d35dcu: goto label_1d35dc;
        case 0x1d35e0u: goto label_1d35e0;
        case 0x1d35e4u: goto label_1d35e4;
        case 0x1d35e8u: goto label_1d35e8;
        case 0x1d35ecu: goto label_1d35ec;
        case 0x1d35f0u: goto label_1d35f0;
        case 0x1d35f4u: goto label_1d35f4;
        case 0x1d35f8u: goto label_1d35f8;
        case 0x1d35fcu: goto label_1d35fc;
        case 0x1d3600u: goto label_1d3600;
        case 0x1d3604u: goto label_1d3604;
        case 0x1d3608u: goto label_1d3608;
        case 0x1d360cu: goto label_1d360c;
        case 0x1d3610u: goto label_1d3610;
        case 0x1d3614u: goto label_1d3614;
        case 0x1d3618u: goto label_1d3618;
        case 0x1d361cu: goto label_1d361c;
        case 0x1d3620u: goto label_1d3620;
        case 0x1d3624u: goto label_1d3624;
        case 0x1d3628u: goto label_1d3628;
        case 0x1d362cu: goto label_1d362c;
        case 0x1d3630u: goto label_1d3630;
        case 0x1d3634u: goto label_1d3634;
        case 0x1d3638u: goto label_1d3638;
        case 0x1d363cu: goto label_1d363c;
        case 0x1d3640u: goto label_1d3640;
        case 0x1d3644u: goto label_1d3644;
        case 0x1d3648u: goto label_1d3648;
        case 0x1d364cu: goto label_1d364c;
        case 0x1d3650u: goto label_1d3650;
        case 0x1d3654u: goto label_1d3654;
        case 0x1d3658u: goto label_1d3658;
        case 0x1d365cu: goto label_1d365c;
        case 0x1d3660u: goto label_1d3660;
        case 0x1d3664u: goto label_1d3664;
        case 0x1d3668u: goto label_1d3668;
        case 0x1d366cu: goto label_1d366c;
        case 0x1d3670u: goto label_1d3670;
        case 0x1d3674u: goto label_1d3674;
        case 0x1d3678u: goto label_1d3678;
        case 0x1d367cu: goto label_1d367c;
        case 0x1d3680u: goto label_1d3680;
        case 0x1d3684u: goto label_1d3684;
        case 0x1d3688u: goto label_1d3688;
        case 0x1d368cu: goto label_1d368c;
        case 0x1d3690u: goto label_1d3690;
        case 0x1d3694u: goto label_1d3694;
        case 0x1d3698u: goto label_1d3698;
        case 0x1d369cu: goto label_1d369c;
        case 0x1d36a0u: goto label_1d36a0;
        case 0x1d36a4u: goto label_1d36a4;
        case 0x1d36a8u: goto label_1d36a8;
        case 0x1d36acu: goto label_1d36ac;
        case 0x1d36b0u: goto label_1d36b0;
        case 0x1d36b4u: goto label_1d36b4;
        case 0x1d36b8u: goto label_1d36b8;
        case 0x1d36bcu: goto label_1d36bc;
        case 0x1d36c0u: goto label_1d36c0;
        case 0x1d36c4u: goto label_1d36c4;
        case 0x1d36c8u: goto label_1d36c8;
        case 0x1d36ccu: goto label_1d36cc;
        case 0x1d36d0u: goto label_1d36d0;
        case 0x1d36d4u: goto label_1d36d4;
        case 0x1d36d8u: goto label_1d36d8;
        case 0x1d36dcu: goto label_1d36dc;
        case 0x1d36e0u: goto label_1d36e0;
        case 0x1d36e4u: goto label_1d36e4;
        case 0x1d36e8u: goto label_1d36e8;
        case 0x1d36ecu: goto label_1d36ec;
        case 0x1d36f0u: goto label_1d36f0;
        case 0x1d36f4u: goto label_1d36f4;
        case 0x1d36f8u: goto label_1d36f8;
        case 0x1d36fcu: goto label_1d36fc;
        case 0x1d3700u: goto label_1d3700;
        case 0x1d3704u: goto label_1d3704;
        case 0x1d3708u: goto label_1d3708;
        case 0x1d370cu: goto label_1d370c;
        case 0x1d3710u: goto label_1d3710;
        case 0x1d3714u: goto label_1d3714;
        case 0x1d3718u: goto label_1d3718;
        case 0x1d371cu: goto label_1d371c;
        case 0x1d3720u: goto label_1d3720;
        case 0x1d3724u: goto label_1d3724;
        case 0x1d3728u: goto label_1d3728;
        case 0x1d372cu: goto label_1d372c;
        case 0x1d3730u: goto label_1d3730;
        case 0x1d3734u: goto label_1d3734;
        case 0x1d3738u: goto label_1d3738;
        case 0x1d373cu: goto label_1d373c;
        case 0x1d3740u: goto label_1d3740;
        case 0x1d3744u: goto label_1d3744;
        case 0x1d3748u: goto label_1d3748;
        case 0x1d374cu: goto label_1d374c;
        case 0x1d3750u: goto label_1d3750;
        case 0x1d3754u: goto label_1d3754;
        case 0x1d3758u: goto label_1d3758;
        case 0x1d375cu: goto label_1d375c;
        case 0x1d3760u: goto label_1d3760;
        case 0x1d3764u: goto label_1d3764;
        case 0x1d3768u: goto label_1d3768;
        case 0x1d376cu: goto label_1d376c;
        case 0x1d3770u: goto label_1d3770;
        case 0x1d3774u: goto label_1d3774;
        case 0x1d3778u: goto label_1d3778;
        case 0x1d377cu: goto label_1d377c;
        case 0x1d3780u: goto label_1d3780;
        case 0x1d3784u: goto label_1d3784;
        case 0x1d3788u: goto label_1d3788;
        case 0x1d378cu: goto label_1d378c;
        case 0x1d3790u: goto label_1d3790;
        case 0x1d3794u: goto label_1d3794;
        case 0x1d3798u: goto label_1d3798;
        case 0x1d379cu: goto label_1d379c;
        case 0x1d37a0u: goto label_1d37a0;
        case 0x1d37a4u: goto label_1d37a4;
        case 0x1d37a8u: goto label_1d37a8;
        case 0x1d37acu: goto label_1d37ac;
        case 0x1d37b0u: goto label_1d37b0;
        case 0x1d37b4u: goto label_1d37b4;
        case 0x1d37b8u: goto label_1d37b8;
        case 0x1d37bcu: goto label_1d37bc;
        case 0x1d37c0u: goto label_1d37c0;
        case 0x1d37c4u: goto label_1d37c4;
        case 0x1d37c8u: goto label_1d37c8;
        case 0x1d37ccu: goto label_1d37cc;
        case 0x1d37d0u: goto label_1d37d0;
        case 0x1d37d4u: goto label_1d37d4;
        case 0x1d37d8u: goto label_1d37d8;
        case 0x1d37dcu: goto label_1d37dc;
        case 0x1d37e0u: goto label_1d37e0;
        case 0x1d37e4u: goto label_1d37e4;
        case 0x1d37e8u: goto label_1d37e8;
        case 0x1d37ecu: goto label_1d37ec;
        case 0x1d37f0u: goto label_1d37f0;
        case 0x1d37f4u: goto label_1d37f4;
        case 0x1d37f8u: goto label_1d37f8;
        case 0x1d37fcu: goto label_1d37fc;
        case 0x1d3800u: goto label_1d3800;
        case 0x1d3804u: goto label_1d3804;
        case 0x1d3808u: goto label_1d3808;
        case 0x1d380cu: goto label_1d380c;
        case 0x1d3810u: goto label_1d3810;
        case 0x1d3814u: goto label_1d3814;
        case 0x1d3818u: goto label_1d3818;
        case 0x1d381cu: goto label_1d381c;
        case 0x1d3820u: goto label_1d3820;
        case 0x1d3824u: goto label_1d3824;
        case 0x1d3828u: goto label_1d3828;
        case 0x1d382cu: goto label_1d382c;
        case 0x1d3830u: goto label_1d3830;
        case 0x1d3834u: goto label_1d3834;
        case 0x1d3838u: goto label_1d3838;
        case 0x1d383cu: goto label_1d383c;
        case 0x1d3840u: goto label_1d3840;
        case 0x1d3844u: goto label_1d3844;
        case 0x1d3848u: goto label_1d3848;
        case 0x1d384cu: goto label_1d384c;
        case 0x1d3850u: goto label_1d3850;
        case 0x1d3854u: goto label_1d3854;
        case 0x1d3858u: goto label_1d3858;
        case 0x1d385cu: goto label_1d385c;
        case 0x1d3860u: goto label_1d3860;
        case 0x1d3864u: goto label_1d3864;
        case 0x1d3868u: goto label_1d3868;
        case 0x1d386cu: goto label_1d386c;
        case 0x1d3870u: goto label_1d3870;
        case 0x1d3874u: goto label_1d3874;
        case 0x1d3878u: goto label_1d3878;
        case 0x1d387cu: goto label_1d387c;
        case 0x1d3880u: goto label_1d3880;
        case 0x1d3884u: goto label_1d3884;
        case 0x1d3888u: goto label_1d3888;
        case 0x1d388cu: goto label_1d388c;
        case 0x1d3890u: goto label_1d3890;
        case 0x1d3894u: goto label_1d3894;
        case 0x1d3898u: goto label_1d3898;
        case 0x1d389cu: goto label_1d389c;
        case 0x1d38a0u: goto label_1d38a0;
        case 0x1d38a4u: goto label_1d38a4;
        case 0x1d38a8u: goto label_1d38a8;
        case 0x1d38acu: goto label_1d38ac;
        case 0x1d38b0u: goto label_1d38b0;
        case 0x1d38b4u: goto label_1d38b4;
        case 0x1d38b8u: goto label_1d38b8;
        case 0x1d38bcu: goto label_1d38bc;
        case 0x1d38c0u: goto label_1d38c0;
        case 0x1d38c4u: goto label_1d38c4;
        case 0x1d38c8u: goto label_1d38c8;
        case 0x1d38ccu: goto label_1d38cc;
        case 0x1d38d0u: goto label_1d38d0;
        case 0x1d38d4u: goto label_1d38d4;
        case 0x1d38d8u: goto label_1d38d8;
        case 0x1d38dcu: goto label_1d38dc;
        case 0x1d38e0u: goto label_1d38e0;
        case 0x1d38e4u: goto label_1d38e4;
        case 0x1d38e8u: goto label_1d38e8;
        case 0x1d38ecu: goto label_1d38ec;
        case 0x1d38f0u: goto label_1d38f0;
        case 0x1d38f4u: goto label_1d38f4;
        case 0x1d38f8u: goto label_1d38f8;
        case 0x1d38fcu: goto label_1d38fc;
        case 0x1d3900u: goto label_1d3900;
        case 0x1d3904u: goto label_1d3904;
        case 0x1d3908u: goto label_1d3908;
        case 0x1d390cu: goto label_1d390c;
        case 0x1d3910u: goto label_1d3910;
        case 0x1d3914u: goto label_1d3914;
        case 0x1d3918u: goto label_1d3918;
        case 0x1d391cu: goto label_1d391c;
        case 0x1d3920u: goto label_1d3920;
        case 0x1d3924u: goto label_1d3924;
        case 0x1d3928u: goto label_1d3928;
        case 0x1d392cu: goto label_1d392c;
        case 0x1d3930u: goto label_1d3930;
        case 0x1d3934u: goto label_1d3934;
        case 0x1d3938u: goto label_1d3938;
        case 0x1d393cu: goto label_1d393c;
        case 0x1d3940u: goto label_1d3940;
        case 0x1d3944u: goto label_1d3944;
        case 0x1d3948u: goto label_1d3948;
        case 0x1d394cu: goto label_1d394c;
        case 0x1d3950u: goto label_1d3950;
        case 0x1d3954u: goto label_1d3954;
        case 0x1d3958u: goto label_1d3958;
        case 0x1d395cu: goto label_1d395c;
        case 0x1d3960u: goto label_1d3960;
        case 0x1d3964u: goto label_1d3964;
        case 0x1d3968u: goto label_1d3968;
        case 0x1d396cu: goto label_1d396c;
        case 0x1d3970u: goto label_1d3970;
        case 0x1d3974u: goto label_1d3974;
        case 0x1d3978u: goto label_1d3978;
        case 0x1d397cu: goto label_1d397c;
        case 0x1d3980u: goto label_1d3980;
        case 0x1d3984u: goto label_1d3984;
        case 0x1d3988u: goto label_1d3988;
        case 0x1d398cu: goto label_1d398c;
        case 0x1d3990u: goto label_1d3990;
        case 0x1d3994u: goto label_1d3994;
        case 0x1d3998u: goto label_1d3998;
        case 0x1d399cu: goto label_1d399c;
        case 0x1d39a0u: goto label_1d39a0;
        case 0x1d39a4u: goto label_1d39a4;
        case 0x1d39a8u: goto label_1d39a8;
        case 0x1d39acu: goto label_1d39ac;
        case 0x1d39b0u: goto label_1d39b0;
        case 0x1d39b4u: goto label_1d39b4;
        case 0x1d39b8u: goto label_1d39b8;
        case 0x1d39bcu: goto label_1d39bc;
        case 0x1d39c0u: goto label_1d39c0;
        case 0x1d39c4u: goto label_1d39c4;
        case 0x1d39c8u: goto label_1d39c8;
        case 0x1d39ccu: goto label_1d39cc;
        case 0x1d39d0u: goto label_1d39d0;
        case 0x1d39d4u: goto label_1d39d4;
        case 0x1d39d8u: goto label_1d39d8;
        case 0x1d39dcu: goto label_1d39dc;
        case 0x1d39e0u: goto label_1d39e0;
        case 0x1d39e4u: goto label_1d39e4;
        case 0x1d39e8u: goto label_1d39e8;
        case 0x1d39ecu: goto label_1d39ec;
        case 0x1d39f0u: goto label_1d39f0;
        case 0x1d39f4u: goto label_1d39f4;
        case 0x1d39f8u: goto label_1d39f8;
        case 0x1d39fcu: goto label_1d39fc;
        case 0x1d3a00u: goto label_1d3a00;
        case 0x1d3a04u: goto label_1d3a04;
        case 0x1d3a08u: goto label_1d3a08;
        case 0x1d3a0cu: goto label_1d3a0c;
        case 0x1d3a10u: goto label_1d3a10;
        case 0x1d3a14u: goto label_1d3a14;
        case 0x1d3a18u: goto label_1d3a18;
        case 0x1d3a1cu: goto label_1d3a1c;
        case 0x1d3a20u: goto label_1d3a20;
        case 0x1d3a24u: goto label_1d3a24;
        case 0x1d3a28u: goto label_1d3a28;
        case 0x1d3a2cu: goto label_1d3a2c;
        case 0x1d3a30u: goto label_1d3a30;
        case 0x1d3a34u: goto label_1d3a34;
        case 0x1d3a38u: goto label_1d3a38;
        case 0x1d3a3cu: goto label_1d3a3c;
        case 0x1d3a40u: goto label_1d3a40;
        case 0x1d3a44u: goto label_1d3a44;
        case 0x1d3a48u: goto label_1d3a48;
        case 0x1d3a4cu: goto label_1d3a4c;
        case 0x1d3a50u: goto label_1d3a50;
        case 0x1d3a54u: goto label_1d3a54;
        case 0x1d3a58u: goto label_1d3a58;
        case 0x1d3a5cu: goto label_1d3a5c;
        case 0x1d3a60u: goto label_1d3a60;
        case 0x1d3a64u: goto label_1d3a64;
        case 0x1d3a68u: goto label_1d3a68;
        case 0x1d3a6cu: goto label_1d3a6c;
        case 0x1d3a70u: goto label_1d3a70;
        case 0x1d3a74u: goto label_1d3a74;
        case 0x1d3a78u: goto label_1d3a78;
        case 0x1d3a7cu: goto label_1d3a7c;
        case 0x1d3a80u: goto label_1d3a80;
        case 0x1d3a84u: goto label_1d3a84;
        case 0x1d3a88u: goto label_1d3a88;
        case 0x1d3a8cu: goto label_1d3a8c;
        case 0x1d3a90u: goto label_1d3a90;
        case 0x1d3a94u: goto label_1d3a94;
        case 0x1d3a98u: goto label_1d3a98;
        case 0x1d3a9cu: goto label_1d3a9c;
        case 0x1d3aa0u: goto label_1d3aa0;
        case 0x1d3aa4u: goto label_1d3aa4;
        case 0x1d3aa8u: goto label_1d3aa8;
        case 0x1d3aacu: goto label_1d3aac;
        case 0x1d3ab0u: goto label_1d3ab0;
        case 0x1d3ab4u: goto label_1d3ab4;
        case 0x1d3ab8u: goto label_1d3ab8;
        case 0x1d3abcu: goto label_1d3abc;
        case 0x1d3ac0u: goto label_1d3ac0;
        case 0x1d3ac4u: goto label_1d3ac4;
        case 0x1d3ac8u: goto label_1d3ac8;
        case 0x1d3accu: goto label_1d3acc;
        case 0x1d3ad0u: goto label_1d3ad0;
        case 0x1d3ad4u: goto label_1d3ad4;
        case 0x1d3ad8u: goto label_1d3ad8;
        case 0x1d3adcu: goto label_1d3adc;
        case 0x1d3ae0u: goto label_1d3ae0;
        case 0x1d3ae4u: goto label_1d3ae4;
        case 0x1d3ae8u: goto label_1d3ae8;
        case 0x1d3aecu: goto label_1d3aec;
        case 0x1d3af0u: goto label_1d3af0;
        case 0x1d3af4u: goto label_1d3af4;
        case 0x1d3af8u: goto label_1d3af8;
        case 0x1d3afcu: goto label_1d3afc;
        case 0x1d3b00u: goto label_1d3b00;
        case 0x1d3b04u: goto label_1d3b04;
        case 0x1d3b08u: goto label_1d3b08;
        case 0x1d3b0cu: goto label_1d3b0c;
        case 0x1d3b10u: goto label_1d3b10;
        case 0x1d3b14u: goto label_1d3b14;
        case 0x1d3b18u: goto label_1d3b18;
        case 0x1d3b1cu: goto label_1d3b1c;
        case 0x1d3b20u: goto label_1d3b20;
        case 0x1d3b24u: goto label_1d3b24;
        case 0x1d3b28u: goto label_1d3b28;
        case 0x1d3b2cu: goto label_1d3b2c;
        case 0x1d3b30u: goto label_1d3b30;
        case 0x1d3b34u: goto label_1d3b34;
        case 0x1d3b38u: goto label_1d3b38;
        case 0x1d3b3cu: goto label_1d3b3c;
        case 0x1d3b40u: goto label_1d3b40;
        case 0x1d3b44u: goto label_1d3b44;
        case 0x1d3b48u: goto label_1d3b48;
        case 0x1d3b4cu: goto label_1d3b4c;
        case 0x1d3b50u: goto label_1d3b50;
        case 0x1d3b54u: goto label_1d3b54;
        case 0x1d3b58u: goto label_1d3b58;
        case 0x1d3b5cu: goto label_1d3b5c;
        case 0x1d3b60u: goto label_1d3b60;
        case 0x1d3b64u: goto label_1d3b64;
        case 0x1d3b68u: goto label_1d3b68;
        case 0x1d3b6cu: goto label_1d3b6c;
        case 0x1d3b70u: goto label_1d3b70;
        case 0x1d3b74u: goto label_1d3b74;
        case 0x1d3b78u: goto label_1d3b78;
        case 0x1d3b7cu: goto label_1d3b7c;
        default: return;
    }

label_1d33b0:
    // 0x1d33b0: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1d33b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1d33b4:
    // 0x1d33b4: 0xfea30060  sd          $v1, 0x60($s5)
    ctx->pc = 0x1d33b4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 96), GPR_U64(ctx, 3));
label_1d33b8:
    // 0x1d33b8: 0xfea20068  sd          $v0, 0x68($s5)
    ctx->pc = 0x1d33b8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 104), GPR_U64(ctx, 2));
label_1d33bc:
    // 0x1d33bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d33bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d33c0:
    // 0x1d33c0: 0x2b2a021  addu        $s4, $s5, $s2
    ctx->pc = 0x1d33c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1d33c4:
    // 0x1d33c4: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x1d33c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_1d33c8:
    // 0x1d33c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d33c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d33cc:
    // 0x1d33cc: 0xc05e0f0  jal         func_1783C0
label_1d33d0:
    if (ctx->pc == 0x1D33D0u) {
        ctx->pc = 0x1D33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33CCu;
        // 0x1d33d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D33D4u;
        goto label_1d33d4;
    }
    ctx->pc = 0x1D33CCu;
    SET_GPR_U32(ctx, 31, 0x1D33D4u);
    ctx->pc = 0x1D33D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D33CCu;
    // 0x1d33d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1783C0u, 0x1D33CCu, 0x1D33D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D33D4u;
label_1d33d4:
    // 0x1d33d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d33d8:
    // 0x1d33d8: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1d33d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d33dc:
    // 0x1d33dc: 0xa2840088  sb          $a0, 0x88($s4)
    ctx->pc = 0x1d33dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 136), (uint8_t)GPR_U32(ctx, 4));
label_1d33e0:
    // 0x1d33e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d33e4:
    // 0x1d33e4: 0xa2840089  sb          $a0, 0x89($s4)
    ctx->pc = 0x1d33e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 137), (uint8_t)GPR_U32(ctx, 4));
label_1d33e8:
    // 0x1d33e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d33e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d33ec:
    // 0x1d33ec: 0xa284008a  sb          $a0, 0x8A($s4)
    ctx->pc = 0x1d33ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 138), (uint8_t)GPR_U32(ctx, 4));
label_1d33f0:
    // 0x1d33f0: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1d33f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1d33f4:
    // 0x1d33f4: 0xa283008b  sb          $v1, 0x8B($s4)
    ctx->pc = 0x1d33f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 139), (uint8_t)GPR_U32(ctx, 3));
label_1d33f8:
    // 0x1d33f8: 0x1a20fff1  blez        $s1, . + 4 + (-0xF << 2)
label_1d33fc:
    if (ctx->pc == 0x1D33FCu) {
        ctx->pc = 0x1D33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F8u;
        // 0x1d33fc: 0xae82008c  sw          $v0, 0x8C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3400u;
        goto label_1d3400;
    }
    ctx->pc = 0x1D33F8u;
    {
        const bool branch_taken_0x1d33f8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F8u;
        // 0x1d33fc: 0xae82008c  sw          $v0, 0x8C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33f8) {
            ctx->pc = 0x1D33C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d33c0;
        }
    }
    ctx->pc = 0x1D3400u;
label_1d3400:
    // 0x1d3400: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d3400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1d3404:
    // 0x1d3404: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d3404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1d3408:
    // 0x1d3408: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d3408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1d340c:
    // 0x1d340c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d340cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3410:
    // 0x1d3410: 0x3c02f531  lui         $v0, 0xF531
    ctx->pc = 0x1d3410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62769 << 16));
label_1d3414:
    // 0x1d3414: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d3414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d3418:
    // 0x1d3418: 0x34425315  ori         $v0, $v0, 0x5315
    ctx->pc = 0x1d3418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21269);
label_1d341c:
    // 0x1d341c: 0xfea300b0  sd          $v1, 0xB0($s5)
    ctx->pc = 0x1d341cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 176), GPR_U64(ctx, 3));
label_1d3420:
    // 0x1d3420: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d3420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1d3424:
    // 0x1d3424: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3428:
    // 0x1d3428: 0x3c023153  lui         $v0, 0x3153
    ctx->pc = 0x1d3428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12627 << 16));
label_1d342c:
    // 0x1d342c: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1d342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1d3430:
    // 0x1d3430: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d3430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d3434:
    // 0x1d3434: 0xfea200b8  sd          $v0, 0xB8($s5)
    ctx->pc = 0x1d3434u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 184), GPR_U64(ctx, 2));
label_1d3438:
    // 0x1d3438: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1d3438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1d343c:
    // 0x1d343c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_1d3440:
    // 0x1d3440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3444:
    // 0x1d3444: 0xc05e158  jal         func_178560
label_1d3448:
    if (ctx->pc == 0x1D3448u) {
        ctx->pc = 0x1D3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3444u;
        // 0x1d3448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D344Cu;
        goto label_1d344c;
    }
    ctx->pc = 0x1D3444u;
    SET_GPR_U32(ctx, 31, 0x1D344Cu);
    ctx->pc = 0x1D3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3444u;
    // 0x1d3448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1D3444u, 0x1D344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D344Cu;
label_1d344c:
    // 0x1d344c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d344cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d3450:
    // 0x1d3450: 0x1a40fff9  blez        $s2, . + 4 + (-0x7 << 2)
label_1d3454:
    if (ctx->pc == 0x1D3454u) {
        ctx->pc = 0x1D3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3450u;
        // 0x1d3454: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3458u;
        goto label_1d3458;
    }
    ctx->pc = 0x1D3450u;
    {
        const bool branch_taken_0x1d3450 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1D3454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3450u;
        // 0x1d3454: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3450) {
            ctx->pc = 0x1D3438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3438;
        }
    }
    ctx->pc = 0x1D3458u;
label_1d3458:
    // 0x1d3458: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d3458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d345c:
    // 0x1d345c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d345cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1d3460:
    // 0x1d3460: 0x34210200  ori         $at, $at, 0x200
    ctx->pc = 0x1d3460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)512);
label_1d3464:
    // 0x1d3464: 0x2a18821  addu        $s1, $s5, $at
    ctx->pc = 0x1d3464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
label_1d3468:
    // 0x1d3468: 0xc05e234  jal         func_1788D0
label_1d346c:
    if (ctx->pc == 0x1D346Cu) {
        ctx->pc = 0x1D346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3468u;
        // 0x1d346c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3470u;
        goto label_1d3470;
    }
    ctx->pc = 0x1D3468u;
    SET_GPR_U32(ctx, 31, 0x1D3470u);
    ctx->pc = 0x1D346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3468u;
    // 0x1d346c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D3468u, 0x1D3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3470u;
label_1d3470:
    // 0x1d3470: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1d3470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1d3474:
    // 0x1d3474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3478:
    // 0x1d3478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d347c:
    // 0x1d347c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d347cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3480:
    // 0x1d3480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3484:
    // 0x1d3484: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1d3484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d3488:
    // 0x1d3488: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d3488u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d348c:
    // 0x1d348c: 0xc05dd10  jal         func_177440
label_1d3490:
    if (ctx->pc == 0x1D3490u) {
        ctx->pc = 0x1D3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D348Cu;
        // 0x1d3490: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3494u;
        goto label_1d3494;
    }
    ctx->pc = 0x1D348Cu;
    SET_GPR_U32(ctx, 31, 0x1D3494u);
    ctx->pc = 0x1D3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D348Cu;
    // 0x1d3490: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177440u, 0x1D348Cu, 0x1D3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3494u;
label_1d3494:
    // 0x1d3494: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d3494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d3498:
    // 0x1d3498: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1d3498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d349c:
    // 0x1d349c: 0xa2250078  sb          $a1, 0x78($s1)
    ctx->pc = 0x1d349cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 5));
label_1d34a0:
    // 0x1d34a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d34a4:
    // 0x1d34a4: 0xa2250079  sb          $a1, 0x79($s1)
    ctx->pc = 0x1d34a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 5));
label_1d34a8:
    // 0x1d34a8: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x1d34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1d34ac:
    // 0x1d34ac: 0xa225007a  sb          $a1, 0x7A($s1)
    ctx->pc = 0x1d34acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 5));
label_1d34b0:
    // 0x1d34b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d34b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d34b4:
    // 0x1d34b4: 0xa223007b  sb          $v1, 0x7B($s1)
    ctx->pc = 0x1d34b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 3));
label_1d34b8:
    // 0x1d34b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d34b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d34bc:
    // 0x1d34bc: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x1d34bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_1d34c0:
    // 0x1d34c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d34c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d34c4:
    // 0x1d34c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d34c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d34c8:
    // 0x1d34c8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1d34c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d34cc:
    // 0x1d34cc: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1d34ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d34d0:
    // 0x1d34d0: 0xc05e060  jal         func_178180
label_1d34d4:
    if (ctx->pc == 0x1D34D4u) {
        ctx->pc = 0x1D34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34D0u;
        // 0x1d34d4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D34D8u;
        goto label_1d34d8;
    }
    ctx->pc = 0x1D34D0u;
    SET_GPR_U32(ctx, 31, 0x1D34D8u);
    ctx->pc = 0x1D34D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34D0u;
    // 0x1d34d4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1D34D0u, 0x1D34D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34D8u;
label_1d34d8:
    // 0x1d34d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d34d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d34dc:
    // 0x1d34dc: 0x2a02001c  slti        $v0, $s0, 0x1C
    ctx->pc = 0x1d34dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)28) ? 1 : 0);
label_1d34e0:
    // 0x1d34e0: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_1d34e4:
    if (ctx->pc == 0x1D34E4u) {
        ctx->pc = 0x1D34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34E0u;
        // 0x1d34e4: 0x26730140  addiu       $s3, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D34E8u;
        goto label_1d34e8;
    }
    ctx->pc = 0x1D34E0u;
    {
        const bool branch_taken_0x1d34e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34E0u;
        // 0x1d34e4: 0x26730140  addiu       $s3, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34e0) {
            ctx->pc = 0x1D3370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d3370; return; }
        }
    }
    ctx->pc = 0x1D34E8u;
label_1d34e8:
    // 0x1d34e8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1d34e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1d34ec:
    // 0x1d34ec: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x1d34ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d34f0:
    // 0x1d34f0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_1d34f4:
    if (ctx->pc == 0x1D34F4u) {
        ctx->pc = 0x1D34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34F0u;
        // 0x1d34f4: 0x26d62300  addiu       $s6, $s6, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D34F8u;
        goto label_1d34f8;
    }
    ctx->pc = 0x1D34F0u;
    {
        const bool branch_taken_0x1d34f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34F0u;
        // 0x1d34f4: 0x26d62300  addiu       $s6, $s6, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34f0) {
            ctx->pc = 0x1D3368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d3368; return; }
        }
    }
    ctx->pc = 0x1D34F8u;
label_1d34f8:
    // 0x1d34f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d34f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d34fc:
    // 0x1d34fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d34fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3500:
    // 0x1d3500: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d3500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3504:
    // 0x1d3504: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d3504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3508:
    // 0x1d3508: 0x3d71021  addu        $v0, $fp, $s7
    ctx->pc = 0x1d3508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_1d350c:
    // 0x1d350c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d350cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1d3510:
    // 0x1d3510: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x1d3510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
label_1d3514:
    // 0x1d3514: 0x24504600  addiu       $s0, $v0, 0x4600
    ctx->pc = 0x1d3514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17920));
label_1d3518:
    // 0x1d3518: 0xc05e234  jal         func_1788D0
label_1d351c:
    if (ctx->pc == 0x1D351Cu) {
        ctx->pc = 0x1D351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3518u;
        // 0x1d351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3520u;
        goto label_1d3520;
    }
    ctx->pc = 0x1D3518u;
    SET_GPR_U32(ctx, 31, 0x1D3520u);
    ctx->pc = 0x1D351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3518u;
    // 0x1d351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D3518u, 0x1D3520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3520u;
label_1d3520:
    // 0x1d3520: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d3520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3524:
    // 0x1d3524: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d3524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1d3528:
    // 0x1d3528: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d352c:
    // 0x1d352c: 0xc05e1d4  jal         func_178750
label_1d3530:
    if (ctx->pc == 0x1D3530u) {
        ctx->pc = 0x1D3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D352Cu;
        // 0x1d3530: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3534u;
        goto label_1d3534;
    }
    ctx->pc = 0x1D352Cu;
    SET_GPR_U32(ctx, 31, 0x1D3534u);
    ctx->pc = 0x1D3530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D352Cu;
    // 0x1d3530: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x1D352Cu, 0x1D3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3534u;
label_1d3534:
    // 0x1d3534: 0x3c028400  lui         $v0, 0x8400
    ctx->pc = 0x1d3534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33792 << 16));
label_1d3538:
    // 0x1d3538: 0x3403800f  ori         $v1, $zero, 0x800F
    ctx->pc = 0x1d3538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32783);
label_1d353c:
    // 0x1d353c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d353cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1d3540:
    // 0x1d3540: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d3540u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3544:
    // 0x1d3544: 0x3c025353  lui         $v0, 0x5353
    ctx->pc = 0x1d3544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21331 << 16));
label_1d3548:
    // 0x1d3548: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d3548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d354c:
    // 0x1d354c: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1d354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1d3550:
    // 0x1d3550: 0xfe030060  sd          $v1, 0x60($s0)
    ctx->pc = 0x1d3550u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 3));
label_1d3554:
    // 0x1d3554: 0xfe020068  sd          $v0, 0x68($s0)
    ctx->pc = 0x1d3554u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 2));
label_1d3558:
    // 0x1d3558: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d355c:
    // 0x1d355c: 0x0  nop
    ctx->pc = 0x1d355cu;
    // NOP
label_1d3560:
    // 0x1d3560: 0x2119821  addu        $s3, $s0, $s1
    ctx->pc = 0x1d3560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1d3564:
    // 0x1d3564: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x1d3564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1d3568:
    // 0x1d3568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d356c:
    // 0x1d356c: 0xc05e0f0  jal         func_1783C0
label_1d3570:
    if (ctx->pc == 0x1D3570u) {
        ctx->pc = 0x1D3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D356Cu;
        // 0x1d3570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3574u;
        goto label_1d3574;
    }
    ctx->pc = 0x1D356Cu;
    SET_GPR_U32(ctx, 31, 0x1D3574u);
    ctx->pc = 0x1D3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D356Cu;
    // 0x1d3570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1783C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1783C0u, 0x1D356Cu, 0x1D3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3574u;
label_1d3574:
    // 0x1d3574: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1d3574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d3578:
    // 0x1d3578: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1d3578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d357c:
    // 0x1d357c: 0xa2640088  sb          $a0, 0x88($s3)
    ctx->pc = 0x1d357cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 4));
label_1d3580:
    // 0x1d3580: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d3580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1d3584:
    // 0x1d3584: 0xa2640089  sb          $a0, 0x89($s3)
    ctx->pc = 0x1d3584u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 137), (uint8_t)GPR_U32(ctx, 4));
label_1d3588:
    // 0x1d3588: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d358c:
    // 0x1d358c: 0xa264008a  sb          $a0, 0x8A($s3)
    ctx->pc = 0x1d358cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 4));
label_1d3590:
    // 0x1d3590: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1d3590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1d3594:
    // 0x1d3594: 0xa262008b  sb          $v0, 0x8B($s3)
    ctx->pc = 0x1d3594u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 2));
label_1d3598:
    // 0x1d3598: 0x2aa2000f  slti        $v0, $s5, 0xF
    ctx->pc = 0x1d3598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)15) ? 1 : 0);
label_1d359c:
    // 0x1d359c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1d35a0:
    if (ctx->pc == 0x1D35A0u) {
        ctx->pc = 0x1D35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D359Cu;
        // 0x1d35a0: 0xae63008c  sw          $v1, 0x8C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D35A4u;
        goto label_1d35a4;
    }
    ctx->pc = 0x1D359Cu;
    {
        const bool branch_taken_0x1d359c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D359Cu;
        // 0x1d35a0: 0xae63008c  sw          $v1, 0x8C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d359c) {
            ctx->pc = 0x1D355Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d355c;
        }
    }
    ctx->pc = 0x1D35A4u;
label_1d35a4:
    // 0x1d35a4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1d35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1d35a8:
    // 0x1d35a8: 0x3403800f  ori         $v1, $zero, 0x800F
    ctx->pc = 0x1d35a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32783);
label_1d35ac:
    // 0x1d35ac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d35acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1d35b0:
    // 0x1d35b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d35b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d35b4:
    // 0x1d35b4: 0x3c02f531  lui         $v0, 0xF531
    ctx->pc = 0x1d35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62769 << 16));
label_1d35b8:
    // 0x1d35b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d35b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d35bc:
    // 0x1d35bc: 0x34425315  ori         $v0, $v0, 0x5315
    ctx->pc = 0x1d35bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21269);
label_1d35c0:
    // 0x1d35c0: 0xfe030430  sd          $v1, 0x430($s0)
    ctx->pc = 0x1d35c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1072), GPR_U64(ctx, 3));
label_1d35c4:
    // 0x1d35c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d35c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1d35c8:
    // 0x1d35c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d35c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d35cc:
    // 0x1d35cc: 0x3c023153  lui         $v0, 0x3153
    ctx->pc = 0x1d35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12627 << 16));
label_1d35d0:
    // 0x1d35d0: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1d35d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1d35d4:
    // 0x1d35d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d35d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d35d8:
    // 0x1d35d8: 0xfe020438  sd          $v0, 0x438($s0)
    ctx->pc = 0x1d35d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1080), GPR_U64(ctx, 2));
label_1d35dc:
    // 0x1d35dc: 0x0  nop
    ctx->pc = 0x1d35dcu;
    // NOP
label_1d35e0:
    // 0x1d35e0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1d35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1d35e4:
    // 0x1d35e4: 0x24440440  addiu       $a0, $v0, 0x440
    ctx->pc = 0x1d35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
label_1d35e8:
    // 0x1d35e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d35e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d35ec:
    // 0x1d35ec: 0xc05e158  jal         func_178560
label_1d35f0:
    if (ctx->pc == 0x1D35F0u) {
        ctx->pc = 0x1D35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35ECu;
        // 0x1d35f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D35F4u;
        goto label_1d35f4;
    }
    ctx->pc = 0x1D35ECu;
    SET_GPR_U32(ctx, 31, 0x1D35F4u);
    ctx->pc = 0x1D35F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35ECu;
    // 0x1d35f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1D35ECu, 0x1D35F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35F4u;
label_1d35f4:
    // 0x1d35f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d35f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d35f8:
    // 0x1d35f8: 0x2a63000f  slti        $v1, $s3, 0xF
    ctx->pc = 0x1d35f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
label_1d35fc:
    // 0x1d35fc: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1d3600:
    if (ctx->pc == 0x1D3600u) {
        ctx->pc = 0x1D3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35FCu;
        // 0x1d3600: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3604u;
        goto label_1d3604;
    }
    ctx->pc = 0x1D35FCu;
    {
        const bool branch_taken_0x1d35fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35FCu;
        // 0x1d3600: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35fc) {
            ctx->pc = 0x1D35DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d35dc;
        }
    }
    ctx->pc = 0x1D3604u;
label_1d3604:
    // 0x1d3604: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d3604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d3608:
    // 0x1d3608: 0x2a830008  slti        $v1, $s4, 0x8
    ctx->pc = 0x1d3608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d360c:
    // 0x1d360c: 0x1460ffbe  bnez        $v1, . + 4 + (-0x42 << 2)
label_1d3610:
    if (ctx->pc == 0x1D3610u) {
        ctx->pc = 0x1D3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D360Cu;
        // 0x1d3610: 0x26520bc0  addiu       $s2, $s2, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3614u;
        goto label_1d3614;
    }
    ctx->pc = 0x1D360Cu;
    {
        const bool branch_taken_0x1d360c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D360Cu;
        // 0x1d3610: 0x26520bc0  addiu       $s2, $s2, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d360c) {
            ctx->pc = 0x1D3508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3508;
        }
    }
    ctx->pc = 0x1D3614u;
label_1d3614:
    // 0x1d3614: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d3614u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1d3618:
    // 0x1d3618: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x1d3618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d361c:
    // 0x1d361c: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_1d3620:
    if (ctx->pc == 0x1D3620u) {
        ctx->pc = 0x1D3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D361Cu;
        // 0x1d3620: 0x26f75e00  addiu       $s7, $s7, 0x5E00 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3624u;
        goto label_1d3624;
    }
    ctx->pc = 0x1D361Cu;
    {
        const bool branch_taken_0x1d361c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D361Cu;
        // 0x1d3620: 0x26f75e00  addiu       $s7, $s7, 0x5E00 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d361c) {
            ctx->pc = 0x1D3500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3500;
        }
    }
    ctx->pc = 0x1D3624u;
label_1d3624:
    // 0x1d3624: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1d3624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d3628:
    // 0x1d3628: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1d3628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1d362c:
    // 0x1d362c: 0x34854810  ori         $a1, $a0, 0x4810
    ctx->pc = 0x1d362cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18448);
label_1d3630:
    // 0x1d3630: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d3634:
    // 0x1d3634: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1d3634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1d3638:
    // 0x1d3638: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1d3638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d363c:
    // 0x1d363c: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x1d363cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d3640:
    // 0x1d3640: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d3644:
    // 0x1d3644: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d3644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d3648:
    // 0x1d3648: 0x1480ff3e  bnez        $a0, . + 4 + (-0xC2 << 2)
label_1d364c:
    if (ctx->pc == 0x1D364Cu) {
        ctx->pc = 0x1D364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3648u;
        // 0x1d364c: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3650u;
        goto label_1d3650;
    }
    ctx->pc = 0x1D3648u;
    {
        const bool branch_taken_0x1d3648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3648u;
        // 0x1d364c: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3648) {
            ctx->pc = 0x1D3344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d3344; return; }
        }
    }
    ctx->pc = 0x1D3650u;
label_1d3650:
    // 0x1d3650: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d3650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d3654:
    // 0x1d3654: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d3654u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d3658:
    // 0x1d3658: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d3658u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d365c:
    // 0x1d365c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d365cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d3660:
    // 0x1d3660: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d3660u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d3664:
    // 0x1d3664: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d3664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3668:
    // 0x1d3668: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d3668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d366c:
    // 0x1d366c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d366cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d3670:
    // 0x1d3670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3674:
    // 0x1d3674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3678:
    // 0x1d3678: 0x3e00008  jr          $ra
label_1d367c:
    if (ctx->pc == 0x1D367Cu) {
        ctx->pc = 0x1D367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3678u;
        // 0x1d367c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3680u;
        goto label_1d3680;
    }
    ctx->pc = 0x1D3678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3678u;
        // 0x1d367c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3680u;
label_1d3680:
    // 0x1d3680: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1d3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1d3684:
    // 0x1d3684: 0x24022dc0  addiu       $v0, $zero, 0x2DC0
    ctx->pc = 0x1d3684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11712));
label_1d3688:
    // 0x1d3688: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d3688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1d368c:
    // 0x1d368c: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x1d368cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1d3690:
    // 0x1d3690: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d3690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1d3694:
    // 0x1d3694: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d3694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d3698:
    // 0x1d3698: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d3698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1d369c:
    // 0x1d369c: 0x2463a760  addiu       $v1, $v1, -0x58A0
    ctx->pc = 0x1d369cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944608));
label_1d36a0:
    // 0x1d36a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d36a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1d36a4:
    // 0x1d36a4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d36a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1d36a8:
    // 0x1d36a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d36a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d36ac:
    // 0x1d36ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d36acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d36b0:
    // 0x1d36b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d36b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d36b4:
    // 0x1d36b4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d36b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d36b8:
    // 0x1d36b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d36b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d36bc:
    // 0x1d36bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d36bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d36c0:
    // 0x1d36c0: 0x44a00b  movn        $s4, $v0, $a0
    ctx->pc = 0x1d36c0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_1d36c4:
    // 0x1d36c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d36c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d36c8:
    // 0x1d36c8: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1d36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d36cc:
    // 0x1d36cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d36ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d36d0:
    // 0x1d36d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d36d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d36d4:
    // 0x1d36d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d36d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d36d8:
    // 0x1d36d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d36d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d36dc:
    // 0x1d36dc: 0xc06465c  jal         func_191970
label_1d36e0:
    if (ctx->pc == 0x1D36E0u) {
        ctx->pc = 0x1D36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36DCu;
        // 0x1d36e0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D36E4u;
        goto label_1d36e4;
    }
    ctx->pc = 0x1D36DCu;
    SET_GPR_U32(ctx, 31, 0x1D36E4u);
    ctx->pc = 0x1D36E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36DCu;
    // 0x1d36e0: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191970u, 0x1D36DCu, 0x1D36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D36E4u;
label_1d36e4:
    // 0x1d36e4: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x1d36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_1d36e8:
    // 0x1d36e8: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x1d36e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d36ec:
    // 0x1d36ec: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1d36ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d36f0:
    // 0x1d36f0: 0xc066e44  jal         func_19B910
label_1d36f4:
    if (ctx->pc == 0x1D36F4u) {
        ctx->pc = 0x1D36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36F0u;
        // 0x1d36f4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D36F8u;
        goto label_1d36f8;
    }
    ctx->pc = 0x1D36F0u;
    SET_GPR_U32(ctx, 31, 0x1D36F8u);
    ctx->pc = 0x1D36F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36F0u;
    // 0x1d36f4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1D36F8u;
label_1d36f8:
    // 0x1d36f8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1d36f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1d36fc:
    // 0x1d36fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d36fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3700:
    // 0x1d3700: 0xc066e6c  jal         func_19B9B0
label_1d3704:
    if (ctx->pc == 0x1D3704u) {
        ctx->pc = 0x1D3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3700u;
        // 0x1d3704: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3708u;
        goto label_1d3708;
    }
    ctx->pc = 0x1D3700u;
    SET_GPR_U32(ctx, 31, 0x1D3708u);
    ctx->pc = 0x1D3704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3700u;
    // 0x1d3704: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1D3708u;
label_1d3708:
    // 0x1d3708: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1d3708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1d370c:
    // 0x1d370c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d370cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d3710:
    // 0x1d3710: 0xc066e96  jal         func_19BA58
label_1d3714:
    if (ctx->pc == 0x1D3714u) {
        ctx->pc = 0x1D3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3710u;
        // 0x1d3714: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3718u;
        goto label_1d3718;
    }
    ctx->pc = 0x1D3710u;
    SET_GPR_U32(ctx, 31, 0x1D3718u);
    ctx->pc = 0x1D3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3710u;
    // 0x1d3714: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1D3718u;
label_1d3718:
    // 0x1d3718: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1d3718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1d371c:
    // 0x1d371c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d371cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1d3720:
    // 0x1d3720: 0xc066ec0  jal         func_19BB00
label_1d3724:
    if (ctx->pc == 0x1D3724u) {
        ctx->pc = 0x1D3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3720u;
        // 0x1d3724: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3728u;
        goto label_1d3728;
    }
    ctx->pc = 0x1D3720u;
    SET_GPR_U32(ctx, 31, 0x1D3728u);
    ctx->pc = 0x1D3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3720u;
    // 0x1d3724: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1D3728u;
label_1d3728:
    // 0x1d3728: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d3728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d372c:
    // 0x1d372c: 0x8c234968  lw          $v1, 0x4968($at)
    ctx->pc = 0x1d372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_1d3730:
    // 0x1d3730: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x1d3730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_1d3734:
    // 0x1d3734: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d3734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d3738:
    // 0x1d3738: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x1d3738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1d373c:
    // 0x1d373c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d3740:
    if (ctx->pc == 0x1D3740u) {
        ctx->pc = 0x1D3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D373Cu;
        // 0x1d3740: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3744u;
        goto label_1d3744;
    }
    ctx->pc = 0x1D373Cu;
    {
        const bool branch_taken_0x1d373c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D373Cu;
        // 0x1d3740: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d373c) {
            ctx->pc = 0x1D3750u;
            goto label_1d3750;
        }
    }
    ctx->pc = 0x1D3744u;
label_1d3744:
    // 0x1d3744: 0x8c2349f8  lw          $v1, 0x49F8($at)
    ctx->pc = 0x1d3744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_1d3748:
    // 0x1d3748: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d374c:
    if (ctx->pc == 0x1D374Cu) {
        ctx->pc = 0x1D374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3748u;
        // 0x1d374c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3750u;
        goto label_1d3750;
    }
    ctx->pc = 0x1D3748u;
    {
        const bool branch_taken_0x1d3748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3748u;
        // 0x1d374c: 0xafa300e0  sw          $v1, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3748) {
            ctx->pc = 0x1D3754u;
            goto label_1d3754;
        }
    }
    ctx->pc = 0x1D3750u;
label_1d3750:
    // 0x1d3750: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1d3750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_1d3754:
    // 0x1d3754: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1d3754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_1d3758:
    // 0x1d3758: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x1d3758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_1d375c:
    // 0x1d375c: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1d375cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_1d3760:
    // 0x1d3760: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1d3760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1d3764:
    // 0x1d3764: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1d3764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1d3768:
    // 0x1d3768: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x1d3768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1d376c:
    // 0x1d376c: 0x248402e0  addiu       $a0, $a0, 0x2E0
    ctx->pc = 0x1d376cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_1d3770:
    // 0x1d3770: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d3770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d3774:
    // 0x1d3774: 0x240516e0  addiu       $a1, $zero, 0x16E0
    ctx->pc = 0x1d3774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5856));
label_1d3778:
    // 0x1d3778: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1d3778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1d377c:
    // 0x1d377c: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1d377cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1d3780:
    // 0x1d3780: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x1d3780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d3784:
    // 0x1d3784: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d3784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d3788:
    // 0x1d3788: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d3788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d378c:
    // 0x1d378c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1d378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d3790:
    // 0x1d3790: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1d3794:
    // 0x1d3794: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d3794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1d3798:
    // 0x1d3798: 0x10800377  beqz        $a0, . + 4 + (0x377 << 2)
label_1d379c:
    if (ctx->pc == 0x1D379Cu) {
        ctx->pc = 0x1D379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3798u;
        // 0x1d379c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D37A0u;
        goto label_1d37a0;
    }
    ctx->pc = 0x1D3798u;
    {
        const bool branch_taken_0x1d3798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3798u;
        // 0x1d379c: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3798) {
            ctx->pc = 0x1D4578u;
            { ctx->pc = 0x1d4578; return; }
        }
    }
    ctx->pc = 0x1D37A0u;
label_1d37a0:
    // 0x1d37a0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1d37a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1d37a4:
    // 0x1d37a4: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x1d37a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
label_1d37a8:
    // 0x1d37a8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1d37ac:
    if (ctx->pc == 0x1D37ACu) {
        ctx->pc = 0x1D37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37A8u;
        // 0x1d37ac: 0x3c024280  lui         $v0, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D37B0u;
        goto label_1d37b0;
    }
    ctx->pc = 0x1D37A8u;
    {
        const bool branch_taken_0x1d37a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37A8u;
        // 0x1d37ac: 0x3c024280  lui         $v0, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37a8) {
            ctx->pc = 0x1D37C8u;
            goto label_1d37c8;
        }
    }
    ctx->pc = 0x1D37B0u;
label_1d37b0:
    // 0x1d37b0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1d37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d37b4:
    // 0x1d37b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d37b8:
    // 0x1d37b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1d37bc:
    // 0x1d37bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d37bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d37c0:
    // 0x1d37c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d37c4:
    if (ctx->pc == 0x1D37C4u) {
        ctx->pc = 0x1D37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37C0u;
        // 0x1d37c4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D37C8u;
        goto label_1d37c8;
    }
    ctx->pc = 0x1D37C0u;
    {
        const bool branch_taken_0x1d37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37C0u;
        // 0x1d37c4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37c0) {
            ctx->pc = 0x1D37CCu;
            goto label_1d37cc;
        }
    }
    ctx->pc = 0x1D37C8u;
label_1d37c8:
    // 0x1d37c8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d37c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d37cc:
    // 0x1d37cc: 0x28610039  slti        $at, $v1, 0x39
    ctx->pc = 0x1d37ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
label_1d37d0:
    // 0x1d37d0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1d37d4:
    if (ctx->pc == 0x1D37D4u) {
        ctx->pc = 0x1D37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37D0u;
        // 0x1d37d4: 0x3c024280  lui         $v0, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D37D8u;
        goto label_1d37d8;
    }
    ctx->pc = 0x1D37D0u;
    {
        const bool branch_taken_0x1d37d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37D0u;
        // 0x1d37d4: 0x3c024280  lui         $v0, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37d0) {
            ctx->pc = 0x1D37F0u;
            goto label_1d37f0;
        }
    }
    ctx->pc = 0x1D37D8u;
label_1d37d8:
    // 0x1d37d8: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x1d37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1d37dc:
    // 0x1d37dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d37e0:
    // 0x1d37e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1d37e4:
    // 0x1d37e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d37e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d37e8:
    // 0x1d37e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d37ec:
    if (ctx->pc == 0x1D37ECu) {
        ctx->pc = 0x1D37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37E8u;
        // 0x1d37ec: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D37F0u;
        goto label_1d37f0;
    }
    ctx->pc = 0x1D37E8u;
    {
        const bool branch_taken_0x1d37e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37E8u;
        // 0x1d37ec: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37e8) {
            ctx->pc = 0x1D37F4u;
            goto label_1d37f4;
        }
    }
    ctx->pc = 0x1D37F0u;
label_1d37f0:
    // 0x1d37f0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d37f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d37f4:
    // 0x1d37f4: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1d37f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d37f8:
    // 0x1d37f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d37fc:
    if (ctx->pc == 0x1D37FCu) {
        ctx->pc = 0x1D37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37F8u;
        // 0x1d37fc: 0x3f0c0  sll         $fp, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3800u;
        goto label_1d3800;
    }
    ctx->pc = 0x1D37F8u;
    {
        const bool branch_taken_0x1d37f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37F8u;
        // 0x1d37fc: 0x3f0c0  sll         $fp, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37f8) {
            ctx->pc = 0x1D3808u;
            goto label_1d3808;
        }
    }
    ctx->pc = 0x1D3800u;
label_1d3800:
    // 0x1d3800: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d3804:
    if (ctx->pc == 0x1D3804u) {
        ctx->pc = 0x1D3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3800u;
        // 0x1d3804: 0xafbe0100  sw          $fp, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3808u;
        goto label_1d3808;
    }
    ctx->pc = 0x1D3800u;
    {
        const bool branch_taken_0x1d3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3800u;
        // 0x1d3804: 0xafbe0100  sw          $fp, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3800) {
            ctx->pc = 0x1D3828u;
            goto label_1d3828;
        }
    }
    ctx->pc = 0x1D3808u;
label_1d3808:
    // 0x1d3808: 0x28610059  slti        $at, $v1, 0x59
    ctx->pc = 0x1d3808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)89) ? 1 : 0);
label_1d380c:
    // 0x1d380c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1d3810:
    if (ctx->pc == 0x1D3810u) {
        ctx->pc = 0x1D3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D380Cu;
        // 0x1d3810: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3814u;
        goto label_1d3814;
    }
    ctx->pc = 0x1D380Cu;
    {
        const bool branch_taken_0x1d380c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D380Cu;
        // 0x1d3810: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d380c) {
            ctx->pc = 0x1D3820u;
            goto label_1d3820;
        }
    }
    ctx->pc = 0x1D3814u;
label_1d3814:
    // 0x1d3814: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d3814u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3818:
    // 0x1d3818: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d381c:
    if (ctx->pc == 0x1D381Cu) {
        ctx->pc = 0x1D381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3818u;
        // 0x1d381c: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3820u;
        goto label_1d3820;
    }
    ctx->pc = 0x1D3818u;
    {
        const bool branch_taken_0x1d3818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3818u;
        // 0x1d381c: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3818) {
            ctx->pc = 0x1D3828u;
            goto label_1d3828;
        }
    }
    ctx->pc = 0x1D3820u;
label_1d3820:
    // 0x1d3820: 0x241e0080  addiu       $fp, $zero, 0x80
    ctx->pc = 0x1d3820u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d3824:
    // 0x1d3824: 0xafbe0100  sw          $fp, 0x100($sp)
    ctx->pc = 0x1d3824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 30));
label_1d3828:
    // 0x1d3828: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x1d3828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_1d382c:
    // 0x1d382c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3830:
    // 0x1d3830: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1d3834:
    // 0x1d3834: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1d3838:
    // 0x1d3838: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x1d3838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1d383c:
    // 0x1d383c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1d383cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1d3840:
    // 0x1d3840: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1d3840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3844:
    // 0x1d3844: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d3844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d3848:
    // 0x1d3848: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d3848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d384c:
    // 0x1d384c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1d384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1d3850:
    // 0x1d3850: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x1d3850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3854:
    // 0x1d3854: 0xc066e1a  jal         func_19B868
label_1d3858:
    if (ctx->pc == 0x1D3858u) {
        ctx->pc = 0x1D3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3854u;
        // 0x1d3858: 0xe7a0016c  swc1        $f0, 0x16C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D385Cu;
        goto label_1d385c;
    }
    ctx->pc = 0x1D3854u;
    SET_GPR_U32(ctx, 31, 0x1D385Cu);
    ctx->pc = 0x1D3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3854u;
    // 0x1d3858: 0xe7a0016c  swc1        $f0, 0x16C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x1D3854u, 0x1D385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D385Cu;
label_1d385c:
    // 0x1d385c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d385cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1d3860:
    // 0x1d3860: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x1d3860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_1d3864:
    // 0x1d3864: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1d3864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1d3868:
    // 0x1d3868: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1d3868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1d386c:
    // 0x1d386c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1d386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d3870:
    // 0x1d3870: 0xc066d86  jal         func_19B618
label_1d3874:
    if (ctx->pc == 0x1D3874u) {
        ctx->pc = 0x1D3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3870u;
        // 0x1d3874: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3878u;
        goto label_1d3878;
    }
    ctx->pc = 0x1D3870u;
    SET_GPR_U32(ctx, 31, 0x1D3878u);
    ctx->pc = 0x1D3874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3870u;
    // 0x1d3874: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x1D3870u, 0x1D3878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3878u;
label_1d3878:
    // 0x1d3878: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1d3878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d387c:
    // 0x1d387c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1d3880:
    // 0x1d3880: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d3880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d3884:
    // 0x1d3884: 0x2463b260  addiu       $v1, $v1, -0x4DA0
    ctx->pc = 0x1d3884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947424));
label_1d3888:
    // 0x1d3888: 0x2442b1a0  addiu       $v0, $v0, -0x4E60
    ctx->pc = 0x1d3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
label_1d388c:
    // 0x1d388c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1d388cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3890:
    // 0x1d3890: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d3894:
    // 0x1d3894: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d3898:
    // 0x1d3898: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1d3898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d389c:
    // 0x1d389c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d389cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d38a0:
    // 0x1d38a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1d38a4:
    // 0x1d38a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d38a8:
    // 0x1d38a8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d38ac:
    // 0x1d38ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d38acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d38b0:
    // 0x1d38b0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d38b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1d38b4:
    // 0x1d38b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1d38b8:
    if (ctx->pc == 0x1D38B8u) {
        ctx->pc = 0x1D38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38B4u;
        // 0x1d38b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D38BCu;
        goto label_1d38bc;
    }
    ctx->pc = 0x1D38B4u;
    {
        const bool branch_taken_0x1d38b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38B4u;
        // 0x1d38b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38b4) {
            ctx->pc = 0x1D38C8u;
            goto label_1d38c8;
        }
    }
    ctx->pc = 0x1D38BCu;
label_1d38bc:
    // 0x1d38bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d38bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d38c0:
    // 0x1d38c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d38c4:
    if (ctx->pc == 0x1D38C4u) {
        ctx->pc = 0x1D38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38C0u;
        // 0x1d38c4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D38C8u;
        goto label_1d38c8;
    }
    ctx->pc = 0x1D38C0u;
    {
        const bool branch_taken_0x1d38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38C0u;
        // 0x1d38c4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38c0) {
            ctx->pc = 0x1D38E0u;
            goto label_1d38e0;
        }
    }
    ctx->pc = 0x1D38C8u;
label_1d38c8:
    // 0x1d38c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d38cc:
    // 0x1d38cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d38ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d38d0:
    // 0x1d38d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d38d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d38d4:
    // 0x1d38d4: 0x0  nop
    ctx->pc = 0x1d38d4u;
    // NOP
label_1d38d8:
    // 0x1d38d8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1d38d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1d38dc:
    // 0x1d38dc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1d38dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1d38e0:
    // 0x1d38e0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1d38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1d38e4:
    // 0x1d38e4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d38e8:
    // 0x1d38e8: 0x2442b1a0  addiu       $v0, $v0, -0x4E60
    ctx->pc = 0x1d38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
label_1d38ec:
    // 0x1d38ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1d38f0:
    // 0x1d38f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d38f4:
    // 0x1d38f4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d38f8:
    // 0x1d38f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d38fc:
    // 0x1d38fc: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d38fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1d3900:
    // 0x1d3900: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1d3904:
    if (ctx->pc == 0x1D3904u) {
        ctx->pc = 0x1D3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3900u;
        // 0x1d3904: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3908u;
        goto label_1d3908;
    }
    ctx->pc = 0x1D3900u;
    {
        const bool branch_taken_0x1d3900 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3900u;
        // 0x1d3904: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3900) {
            ctx->pc = 0x1D3914u;
            goto label_1d3914;
        }
    }
    ctx->pc = 0x1D3908u;
label_1d3908:
    // 0x1d3908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d390c:
    // 0x1d390c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d3910:
    if (ctx->pc == 0x1D3910u) {
        ctx->pc = 0x1D3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D390Cu;
        // 0x1d3910: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3914u;
        goto label_1d3914;
    }
    ctx->pc = 0x1D390Cu;
    {
        const bool branch_taken_0x1d390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D390Cu;
        // 0x1d3910: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d390c) {
            ctx->pc = 0x1D392Cu;
            goto label_1d392c;
        }
    }
    ctx->pc = 0x1D3914u;
label_1d3914:
    // 0x1d3914: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d3914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d3918:
    // 0x1d3918: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d3918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d391c:
    // 0x1d391c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d391cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3920:
    // 0x1d3920: 0x0  nop
    ctx->pc = 0x1d3920u;
    // NOP
label_1d3924:
    // 0x1d3924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d3928:
    // 0x1d3928: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d3928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d392c:
    // 0x1d392c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1d392cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1d3930:
    // 0x1d3930: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1d3930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_1d3934:
    // 0x1d3934: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d3934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_1d3938:
    // 0x1d3938: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d3938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d393c:
    // 0x1d393c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d393cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3940:
    // 0x1d3940: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3944:
    // 0x1d3944: 0x2442b260  addiu       $v0, $v0, -0x4DA0
    ctx->pc = 0x1d3944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947424));
label_1d3948:
    // 0x1d3948: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d394c:
    // 0x1d394c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d394cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3950:
    // 0x1d3950: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d3950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d3954:
    // 0x1d3954: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1d3954u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1d3958:
    // 0x1d3958: 0x46141001  sub.s       $f0, $f2, $f20
    ctx->pc = 0x1d3958u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_1d395c:
    // 0x1d395c: 0xe421b500  swc1        $f1, -0x4B00($at)
    ctx->pc = 0x1d395cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948096), bits); }
label_1d3960:
    // 0x1d3960: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3964:
    // 0x1d3964: 0xe420b4e4  swc1        $f0, -0x4B1C($at)
    ctx->pc = 0x1d3964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948068), bits); }
label_1d3968:
    // 0x1d3968: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x1d3968u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_1d396c:
    // 0x1d396c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3970:
    // 0x1d3970: 0xe420b504  swc1        $f0, -0x4AFC($at)
    ctx->pc = 0x1d3970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948100), bits); }
label_1d3974:
    // 0x1d3974: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3978:
    // 0x1d3978: 0xe422b4d0  swc1        $f2, -0x4B30($at)
    ctx->pc = 0x1d3978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948048), bits); }
label_1d397c:
    // 0x1d397c: 0x46031040  add.s       $f1, $f2, $f3
    ctx->pc = 0x1d397cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1d3980:
    // 0x1d3980: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3984:
    // 0x1d3984: 0xe421b4e0  swc1        $f1, -0x4B20($at)
    ctx->pc = 0x1d3984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948064), bits); }
label_1d3988:
    // 0x1d3988: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d398c:
    // 0x1d398c: 0xe421b4f0  swc1        $f1, -0x4B10($at)
    ctx->pc = 0x1d398cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948080), bits); }
label_1d3990:
    // 0x1d3990: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1d3990u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_1d3994:
    // 0x1d3994: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3998:
    // 0x1d3998: 0xe420b4d4  swc1        $f0, -0x4B2C($at)
    ctx->pc = 0x1d3998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948052), bits); }
label_1d399c:
    // 0x1d399c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d399cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d39a0:
    // 0x1d39a0: 0xe420b4f4  swc1        $f0, -0x4B0C($at)
    ctx->pc = 0x1d39a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948084), bits); }
label_1d39a4:
    // 0x1d39a4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1d39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d39a8:
    // 0x1d39a8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1d39a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1d39ac:
    // 0x1d39ac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1d39acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1d39b0:
    // 0x1d39b0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1d39b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1d39b4:
    // 0x1d39b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d39b8:
    // 0x1d39b8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1d39b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d39bc:
    // 0x1d39bc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d39bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d39c0:
    // 0x1d39c0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d39c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d39c4:
    // 0x1d39c4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d39c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d39c8:
    // 0x1d39c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d39cc:
    // 0x1d39cc: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x1d39ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1d39d0:
    // 0x1d39d0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_1d39d4:
    if (ctx->pc == 0x1D39D4u) {
        ctx->pc = 0x1D39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39D0u;
        // 0x1d39d4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D39D8u;
        goto label_1d39d8;
    }
    ctx->pc = 0x1D39D0u;
    {
        const bool branch_taken_0x1d39d0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39D0u;
        // 0x1d39d4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39d0) {
            ctx->pc = 0x1D39E4u;
            goto label_1d39e4;
        }
    }
    ctx->pc = 0x1D39D8u;
label_1d39d8:
    // 0x1d39d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d39d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d39dc:
    // 0x1d39dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d39e0:
    if (ctx->pc == 0x1D39E0u) {
        ctx->pc = 0x1D39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39DCu;
        // 0x1d39e0: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D39E4u;
        goto label_1d39e4;
    }
    ctx->pc = 0x1D39DCu;
    {
        const bool branch_taken_0x1d39dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39DCu;
        // 0x1d39e0: 0x468001a0  cvt.s.w     $f6, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39dc) {
            ctx->pc = 0x1D39FCu;
            goto label_1d39fc;
        }
    }
    ctx->pc = 0x1D39E4u;
label_1d39e4:
    // 0x1d39e4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1d39e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1d39e8:
    // 0x1d39e8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d39e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1d39ec:
    // 0x1d39ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d39ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d39f0:
    // 0x1d39f0: 0x0  nop
    ctx->pc = 0x1d39f0u;
    // NOP
label_1d39f4:
    // 0x1d39f4: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x1d39f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_1d39f8:
    // 0x1d39f8: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x1d39f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_1d39fc:
    // 0x1d39fc: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1d39fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d3a00:
    // 0x1d3a00: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3a04:
    // 0x1d3a04: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d3a08:
    // 0x1d3a08: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d3a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d3a0c:
    // 0x1d3a0c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3a10:
    // 0x1d3a10: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d3a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3a14:
    // 0x1d3a14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d3a18:
    // 0x1d3a18: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x1d3a18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1d3a1c:
    // 0x1d3a1c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_1d3a20:
    if (ctx->pc == 0x1D3A20u) {
        ctx->pc = 0x1D3A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A1Cu;
        // 0x1d3a20: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A24u;
        goto label_1d3a24;
    }
    ctx->pc = 0x1D3A1Cu;
    {
        const bool branch_taken_0x1d3a1c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D3A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A1Cu;
        // 0x1d3a20: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a1c) {
            ctx->pc = 0x1D3A30u;
            goto label_1d3a30;
        }
    }
    ctx->pc = 0x1D3A24u;
label_1d3a24:
    // 0x1d3a24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d3a24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3a28:
    // 0x1d3a28: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d3a2c:
    if (ctx->pc == 0x1D3A2Cu) {
        ctx->pc = 0x1D3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A28u;
        // 0x1d3a2c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A30u;
        goto label_1d3a30;
    }
    ctx->pc = 0x1D3A28u;
    {
        const bool branch_taken_0x1d3a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A28u;
        // 0x1d3a2c: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a28) {
            ctx->pc = 0x1D3A48u;
            goto label_1d3a48;
        }
    }
    ctx->pc = 0x1D3A30u;
label_1d3a30:
    // 0x1d3a30: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1d3a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1d3a34:
    // 0x1d3a34: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d3a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1d3a38:
    // 0x1d3a38: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d3a38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3a3c:
    // 0x1d3a3c: 0x0  nop
    ctx->pc = 0x1d3a3cu;
    // NOP
label_1d3a40:
    // 0x1d3a40: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1d3a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1d3a44:
    // 0x1d3a44: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1d3a44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1d3a48:
    // 0x1d3a48: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1d3a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1d3a4c:
    // 0x1d3a4c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d3a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3a50:
    // 0x1d3a50: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d3a54:
    // 0x1d3a54: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d3a54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d3a58:
    // 0x1d3a58: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3a5c:
    // 0x1d3a5c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d3a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3a60:
    // 0x1d3a60: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d3a64:
    // 0x1d3a64: 0x94840004  lhu         $a0, 0x4($a0)
    ctx->pc = 0x1d3a64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1d3a68:
    // 0x1d3a68: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_1d3a6c:
    if (ctx->pc == 0x1D3A6Cu) {
        ctx->pc = 0x1D3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A68u;
        // 0x1d3a6c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A70u;
        goto label_1d3a70;
    }
    ctx->pc = 0x1D3A68u;
    {
        const bool branch_taken_0x1d3a68 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A68u;
        // 0x1d3a6c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a68) {
            ctx->pc = 0x1D3A7Cu;
            goto label_1d3a7c;
        }
    }
    ctx->pc = 0x1D3A70u;
label_1d3a70:
    // 0x1d3a70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d3a70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3a74:
    // 0x1d3a74: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d3a78:
    if (ctx->pc == 0x1D3A78u) {
        ctx->pc = 0x1D3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A74u;
        // 0x1d3a78: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3A7Cu;
        goto label_1d3a7c;
    }
    ctx->pc = 0x1D3A74u;
    {
        const bool branch_taken_0x1d3a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A74u;
        // 0x1d3a78: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a74) {
            ctx->pc = 0x1D3A94u;
            goto label_1d3a94;
        }
    }
    ctx->pc = 0x1D3A7Cu;
label_1d3a7c:
    // 0x1d3a7c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1d3a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1d3a80:
    // 0x1d3a80: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d3a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1d3a84:
    // 0x1d3a84: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d3a84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3a88:
    // 0x1d3a88: 0x0  nop
    ctx->pc = 0x1d3a88u;
    // NOP
label_1d3a8c:
    // 0x1d3a8c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1d3a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1d3a90:
    // 0x1d3a90: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1d3a90u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_1d3a94:
    // 0x1d3a94: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1d3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1d3a98:
    // 0x1d3a98: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1d3a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3a9c:
    // 0x1d3a9c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d3aa0:
    // 0x1d3aa0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d3aa4:
    // 0x1d3aa4: 0x2442b1a0  addiu       $v0, $v0, -0x4E60
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
label_1d3aa8:
    // 0x1d3aa8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1d3aac:
    // 0x1d3aac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d3ab0:
    // 0x1d3ab0: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d3ab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_1d3ab4:
    // 0x1d3ab4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1d3ab8:
    if (ctx->pc == 0x1D3AB8u) {
        ctx->pc = 0x1D3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AB4u;
        // 0x1d3ab8: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3ABCu;
        goto label_1d3abc;
    }
    ctx->pc = 0x1D3AB4u;
    {
        const bool branch_taken_0x1d3ab4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AB4u;
        // 0x1d3ab8: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ab4) {
            ctx->pc = 0x1D3AC8u;
            goto label_1d3ac8;
        }
    }
    ctx->pc = 0x1D3ABCu;
label_1d3abc:
    // 0x1d3abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3ac0:
    // 0x1d3ac0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d3ac4:
    if (ctx->pc == 0x1D3AC4u) {
        ctx->pc = 0x1D3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AC0u;
        // 0x1d3ac4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AC8u;
        goto label_1d3ac8;
    }
    ctx->pc = 0x1D3AC0u;
    {
        const bool branch_taken_0x1d3ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AC0u;
        // 0x1d3ac4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ac0) {
            ctx->pc = 0x1D3AE0u;
            goto label_1d3ae0;
        }
    }
    ctx->pc = 0x1D3AC8u;
label_1d3ac8:
    // 0x1d3ac8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d3ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d3acc:
    // 0x1d3acc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1d3accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1d3ad0:
    // 0x1d3ad0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d3ad0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3ad4:
    // 0x1d3ad4: 0x0  nop
    ctx->pc = 0x1d3ad4u;
    // NOP
label_1d3ad8:
    // 0x1d3ad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d3adc:
    // 0x1d3adc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d3adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d3ae0:
    // 0x1d3ae0: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1d3ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d3ae4:
    // 0x1d3ae4: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_1d3ae8:
    if (ctx->pc == 0x1D3AE8u) {
        ctx->pc = 0x1D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AE4u;
        // 0x1d3ae8: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AECu;
        goto label_1d3aec;
    }
    ctx->pc = 0x1D3AE4u;
    {
        const bool branch_taken_0x1d3ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AE4u;
        // 0x1d3ae8: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ae4) {
            ctx->pc = 0x1D3B30u;
            goto label_1d3b30;
        }
    }
    ctx->pc = 0x1D3AECu;
label_1d3aec:
    // 0x1d3aec: 0xc421b500  lwc1        $f1, -0x4B00($at)
    ctx->pc = 0x1d3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3af0:
    // 0x1d3af0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d3af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d3af4:
    // 0x1d3af4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3af8:
    // 0x1d3af8: 0xe421b580  swc1        $f1, -0x4A80($at)
    ctx->pc = 0x1d3af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948224), bits); }
label_1d3afc:
    // 0x1d3afc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b00:
    // 0x1d3b00: 0xe420b570  swc1        $f0, -0x4A90($at)
    ctx->pc = 0x1d3b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948208), bits); }
label_1d3b04:
    // 0x1d3b04: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b08:
    // 0x1d3b08: 0xe420b560  swc1        $f0, -0x4AA0($at)
    ctx->pc = 0x1d3b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948192), bits); }
label_1d3b0c:
    // 0x1d3b0c: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x1d3b0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_1d3b10:
    // 0x1d3b10: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b14:
    // 0x1d3b14: 0xe421b550  swc1        $f1, -0x4AB0($at)
    ctx->pc = 0x1d3b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948176), bits); }
label_1d3b18:
    // 0x1d3b18: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b1c:
    // 0x1d3b1c: 0xe421b540  swc1        $f1, -0x4AC0($at)
    ctx->pc = 0x1d3b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948160), bits); }
label_1d3b20:
    // 0x1d3b20: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x1d3b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d3b24:
    // 0x1d3b24: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b28:
    // 0x1d3b28: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d3b2c:
    if (ctx->pc == 0x1D3B2Cu) {
        ctx->pc = 0x1D3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B28u;
        // 0x1d3b2c: 0xe420b530  swc1        $f0, -0x4AD0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B30u;
        goto label_1d3b30;
    }
    ctx->pc = 0x1D3B28u;
    {
        const bool branch_taken_0x1d3b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B28u;
        // 0x1d3b2c: 0xe420b530  swc1        $f0, -0x4AD0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b28) {
            ctx->pc = 0x1D3B9Cu;
            { ctx->pc = 0x1d3b9c; return; }
        }
    }
    ctx->pc = 0x1D3B30u;
label_1d3b30:
    // 0x1d3b30: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b34:
    // 0x1d3b34: 0xc423b500  lwc1        $f3, -0x4B00($at)
    ctx->pc = 0x1d3b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d3b38:
    // 0x1d3b38: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1d3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1d3b3c:
    // 0x1d3b3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d3b40:
    // 0x1d3b40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d3b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3b44:
    // 0x1d3b44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d3b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d3b48:
    // 0x1d3b48: 0x0  nop
    ctx->pc = 0x1d3b48u;
    // NOP
label_1d3b4c:
    // 0x1d3b4c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1d3b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1d3b50:
    // 0x1d3b50: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b54:
    // 0x1d3b54: 0xe423b580  swc1        $f3, -0x4A80($at)
    ctx->pc = 0x1d3b54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948224), bits); }
label_1d3b58:
    // 0x1d3b58: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b5c:
    // 0x1d3b5c: 0xe420b570  swc1        $f0, -0x4A90($at)
    ctx->pc = 0x1d3b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948208), bits); }
label_1d3b60:
    // 0x1d3b60: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1d3b60u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1d3b64:
    // 0x1d3b64: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b68:
    // 0x1d3b68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d3b68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d3b6c:
    // 0x1d3b6c: 0xe421b560  swc1        $f1, -0x4AA0($at)
    ctx->pc = 0x1d3b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948192), bits); }
label_1d3b70:
    // 0x1d3b70: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x1d3b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1d3b74:
    // 0x1d3b74: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b78:
    // 0x1d3b78: 0xe420b550  swc1        $f0, -0x4AB0($at)
    ctx->pc = 0x1d3b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948176), bits); }
label_1d3b7c:
    // 0x1d3b7c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1d3b7cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x1d3b80u;
    return;
}

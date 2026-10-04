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


void FUN_0017faa0_part631(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b38b8u: goto label_2b38b8;
        case 0x2b38bcu: goto label_2b38bc;
        case 0x2b38c0u: goto label_2b38c0;
        case 0x2b38c4u: goto label_2b38c4;
        case 0x2b38c8u: goto label_2b38c8;
        case 0x2b38ccu: goto label_2b38cc;
        case 0x2b38d0u: goto label_2b38d0;
        case 0x2b38d4u: goto label_2b38d4;
        case 0x2b38d8u: goto label_2b38d8;
        case 0x2b38dcu: goto label_2b38dc;
        case 0x2b38e0u: goto label_2b38e0;
        case 0x2b38e4u: goto label_2b38e4;
        case 0x2b38e8u: goto label_2b38e8;
        case 0x2b38ecu: goto label_2b38ec;
        case 0x2b38f0u: goto label_2b38f0;
        case 0x2b38f4u: goto label_2b38f4;
        case 0x2b38f8u: goto label_2b38f8;
        case 0x2b38fcu: goto label_2b38fc;
        case 0x2b3900u: goto label_2b3900;
        case 0x2b3904u: goto label_2b3904;
        case 0x2b3908u: goto label_2b3908;
        case 0x2b390cu: goto label_2b390c;
        case 0x2b3910u: goto label_2b3910;
        case 0x2b3914u: goto label_2b3914;
        case 0x2b3918u: goto label_2b3918;
        case 0x2b391cu: goto label_2b391c;
        case 0x2b3920u: goto label_2b3920;
        case 0x2b3924u: goto label_2b3924;
        case 0x2b3928u: goto label_2b3928;
        case 0x2b392cu: goto label_2b392c;
        case 0x2b3930u: goto label_2b3930;
        case 0x2b3934u: goto label_2b3934;
        case 0x2b3938u: goto label_2b3938;
        case 0x2b393cu: goto label_2b393c;
        case 0x2b3940u: goto label_2b3940;
        case 0x2b3944u: goto label_2b3944;
        case 0x2b3948u: goto label_2b3948;
        case 0x2b394cu: goto label_2b394c;
        case 0x2b3950u: goto label_2b3950;
        case 0x2b3954u: goto label_2b3954;
        case 0x2b3958u: goto label_2b3958;
        case 0x2b395cu: goto label_2b395c;
        case 0x2b3960u: goto label_2b3960;
        case 0x2b3964u: goto label_2b3964;
        case 0x2b3968u: goto label_2b3968;
        case 0x2b396cu: goto label_2b396c;
        case 0x2b3970u: goto label_2b3970;
        case 0x2b3974u: goto label_2b3974;
        case 0x2b3978u: goto label_2b3978;
        case 0x2b397cu: goto label_2b397c;
        case 0x2b3980u: goto label_2b3980;
        case 0x2b3984u: goto label_2b3984;
        case 0x2b3988u: goto label_2b3988;
        case 0x2b398cu: goto label_2b398c;
        case 0x2b3990u: goto label_2b3990;
        case 0x2b3994u: goto label_2b3994;
        case 0x2b3998u: goto label_2b3998;
        case 0x2b399cu: goto label_2b399c;
        case 0x2b39a0u: goto label_2b39a0;
        case 0x2b39a4u: goto label_2b39a4;
        case 0x2b39a8u: goto label_2b39a8;
        case 0x2b39acu: goto label_2b39ac;
        case 0x2b39b0u: goto label_2b39b0;
        case 0x2b39b4u: goto label_2b39b4;
        case 0x2b39b8u: goto label_2b39b8;
        case 0x2b39bcu: goto label_2b39bc;
        case 0x2b39c0u: goto label_2b39c0;
        case 0x2b39c4u: goto label_2b39c4;
        case 0x2b39c8u: goto label_2b39c8;
        case 0x2b39ccu: goto label_2b39cc;
        case 0x2b39d0u: goto label_2b39d0;
        case 0x2b39d4u: goto label_2b39d4;
        case 0x2b39d8u: goto label_2b39d8;
        case 0x2b39dcu: goto label_2b39dc;
        case 0x2b39e0u: goto label_2b39e0;
        case 0x2b39e4u: goto label_2b39e4;
        case 0x2b39e8u: goto label_2b39e8;
        case 0x2b39ecu: goto label_2b39ec;
        case 0x2b39f0u: goto label_2b39f0;
        case 0x2b39f4u: goto label_2b39f4;
        case 0x2b39f8u: goto label_2b39f8;
        case 0x2b39fcu: goto label_2b39fc;
        case 0x2b3a00u: goto label_2b3a00;
        case 0x2b3a04u: goto label_2b3a04;
        case 0x2b3a08u: goto label_2b3a08;
        case 0x2b3a0cu: goto label_2b3a0c;
        case 0x2b3a10u: goto label_2b3a10;
        case 0x2b3a14u: goto label_2b3a14;
        case 0x2b3a18u: goto label_2b3a18;
        case 0x2b3a1cu: goto label_2b3a1c;
        case 0x2b3a20u: goto label_2b3a20;
        case 0x2b3a24u: goto label_2b3a24;
        case 0x2b3a28u: goto label_2b3a28;
        case 0x2b3a2cu: goto label_2b3a2c;
        case 0x2b3a30u: goto label_2b3a30;
        case 0x2b3a34u: goto label_2b3a34;
        case 0x2b3a38u: goto label_2b3a38;
        case 0x2b3a3cu: goto label_2b3a3c;
        case 0x2b3a40u: goto label_2b3a40;
        case 0x2b3a44u: goto label_2b3a44;
        case 0x2b3a48u: goto label_2b3a48;
        case 0x2b3a4cu: goto label_2b3a4c;
        case 0x2b3a50u: goto label_2b3a50;
        case 0x2b3a54u: goto label_2b3a54;
        case 0x2b3a58u: goto label_2b3a58;
        case 0x2b3a5cu: goto label_2b3a5c;
        case 0x2b3a60u: goto label_2b3a60;
        case 0x2b3a64u: goto label_2b3a64;
        case 0x2b3a68u: goto label_2b3a68;
        case 0x2b3a6cu: goto label_2b3a6c;
        case 0x2b3a70u: goto label_2b3a70;
        case 0x2b3a74u: goto label_2b3a74;
        case 0x2b3a78u: goto label_2b3a78;
        case 0x2b3a7cu: goto label_2b3a7c;
        case 0x2b3a80u: goto label_2b3a80;
        case 0x2b3a84u: goto label_2b3a84;
        case 0x2b3a88u: goto label_2b3a88;
        case 0x2b3a8cu: goto label_2b3a8c;
        case 0x2b3a90u: goto label_2b3a90;
        case 0x2b3a94u: goto label_2b3a94;
        case 0x2b3a98u: goto label_2b3a98;
        case 0x2b3a9cu: goto label_2b3a9c;
        case 0x2b3aa0u: goto label_2b3aa0;
        case 0x2b3aa4u: goto label_2b3aa4;
        case 0x2b3aa8u: goto label_2b3aa8;
        case 0x2b3aacu: goto label_2b3aac;
        case 0x2b3ab0u: goto label_2b3ab0;
        case 0x2b3ab4u: goto label_2b3ab4;
        case 0x2b3ab8u: goto label_2b3ab8;
        case 0x2b3abcu: goto label_2b3abc;
        case 0x2b3ac0u: goto label_2b3ac0;
        case 0x2b3ac4u: goto label_2b3ac4;
        case 0x2b3ac8u: goto label_2b3ac8;
        case 0x2b3accu: goto label_2b3acc;
        case 0x2b3ad0u: goto label_2b3ad0;
        case 0x2b3ad4u: goto label_2b3ad4;
        case 0x2b3ad8u: goto label_2b3ad8;
        case 0x2b3adcu: goto label_2b3adc;
        case 0x2b3ae0u: goto label_2b3ae0;
        case 0x2b3ae4u: goto label_2b3ae4;
        case 0x2b3ae8u: goto label_2b3ae8;
        case 0x2b3aecu: goto label_2b3aec;
        case 0x2b3af0u: goto label_2b3af0;
        case 0x2b3af4u: goto label_2b3af4;
        case 0x2b3af8u: goto label_2b3af8;
        case 0x2b3afcu: goto label_2b3afc;
        case 0x2b3b00u: goto label_2b3b00;
        case 0x2b3b04u: goto label_2b3b04;
        case 0x2b3b08u: goto label_2b3b08;
        case 0x2b3b0cu: goto label_2b3b0c;
        case 0x2b3b10u: goto label_2b3b10;
        case 0x2b3b14u: goto label_2b3b14;
        case 0x2b3b18u: goto label_2b3b18;
        case 0x2b3b1cu: goto label_2b3b1c;
        case 0x2b3b20u: goto label_2b3b20;
        case 0x2b3b24u: goto label_2b3b24;
        case 0x2b3b28u: goto label_2b3b28;
        case 0x2b3b2cu: goto label_2b3b2c;
        case 0x2b3b30u: goto label_2b3b30;
        case 0x2b3b34u: goto label_2b3b34;
        case 0x2b3b38u: goto label_2b3b38;
        case 0x2b3b3cu: goto label_2b3b3c;
        case 0x2b3b40u: goto label_2b3b40;
        case 0x2b3b44u: goto label_2b3b44;
        case 0x2b3b48u: goto label_2b3b48;
        case 0x2b3b4cu: goto label_2b3b4c;
        case 0x2b3b50u: goto label_2b3b50;
        case 0x2b3b54u: goto label_2b3b54;
        case 0x2b3b58u: goto label_2b3b58;
        case 0x2b3b5cu: goto label_2b3b5c;
        case 0x2b3b60u: goto label_2b3b60;
        case 0x2b3b64u: goto label_2b3b64;
        case 0x2b3b68u: goto label_2b3b68;
        case 0x2b3b6cu: goto label_2b3b6c;
        case 0x2b3b70u: goto label_2b3b70;
        case 0x2b3b74u: goto label_2b3b74;
        case 0x2b3b78u: goto label_2b3b78;
        case 0x2b3b7cu: goto label_2b3b7c;
        case 0x2b3b80u: goto label_2b3b80;
        case 0x2b3b84u: goto label_2b3b84;
        case 0x2b3b88u: goto label_2b3b88;
        case 0x2b3b8cu: goto label_2b3b8c;
        case 0x2b3b90u: goto label_2b3b90;
        case 0x2b3b94u: goto label_2b3b94;
        case 0x2b3b98u: goto label_2b3b98;
        case 0x2b3b9cu: goto label_2b3b9c;
        case 0x2b3ba0u: goto label_2b3ba0;
        case 0x2b3ba4u: goto label_2b3ba4;
        case 0x2b3ba8u: goto label_2b3ba8;
        case 0x2b3bacu: goto label_2b3bac;
        case 0x2b3bb0u: goto label_2b3bb0;
        case 0x2b3bb4u: goto label_2b3bb4;
        case 0x2b3bb8u: goto label_2b3bb8;
        case 0x2b3bbcu: goto label_2b3bbc;
        case 0x2b3bc0u: goto label_2b3bc0;
        case 0x2b3bc4u: goto label_2b3bc4;
        case 0x2b3bc8u: goto label_2b3bc8;
        case 0x2b3bccu: goto label_2b3bcc;
        case 0x2b3bd0u: goto label_2b3bd0;
        case 0x2b3bd4u: goto label_2b3bd4;
        case 0x2b3bd8u: goto label_2b3bd8;
        case 0x2b3bdcu: goto label_2b3bdc;
        case 0x2b3be0u: goto label_2b3be0;
        case 0x2b3be4u: goto label_2b3be4;
        case 0x2b3be8u: goto label_2b3be8;
        case 0x2b3becu: goto label_2b3bec;
        case 0x2b3bf0u: goto label_2b3bf0;
        case 0x2b3bf4u: goto label_2b3bf4;
        case 0x2b3bf8u: goto label_2b3bf8;
        case 0x2b3bfcu: goto label_2b3bfc;
        case 0x2b3c00u: goto label_2b3c00;
        case 0x2b3c04u: goto label_2b3c04;
        case 0x2b3c08u: goto label_2b3c08;
        case 0x2b3c0cu: goto label_2b3c0c;
        case 0x2b3c10u: goto label_2b3c10;
        case 0x2b3c14u: goto label_2b3c14;
        case 0x2b3c18u: goto label_2b3c18;
        case 0x2b3c1cu: goto label_2b3c1c;
        case 0x2b3c20u: goto label_2b3c20;
        case 0x2b3c24u: goto label_2b3c24;
        case 0x2b3c28u: goto label_2b3c28;
        case 0x2b3c2cu: goto label_2b3c2c;
        case 0x2b3c30u: goto label_2b3c30;
        case 0x2b3c34u: goto label_2b3c34;
        case 0x2b3c38u: goto label_2b3c38;
        case 0x2b3c3cu: goto label_2b3c3c;
        case 0x2b3c40u: goto label_2b3c40;
        case 0x2b3c44u: goto label_2b3c44;
        case 0x2b3c48u: goto label_2b3c48;
        case 0x2b3c4cu: goto label_2b3c4c;
        default: return;
    }

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
            goto label_2b398c;
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
label_2b38b8:
    // 0x2b38b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38bc:
    // 0x2b38bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b38c0:
    // 0x2b38c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38c4:
    // 0x2b38c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b38c8:
    // 0x2b38c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38cc:
    // 0x2b38cc: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b38ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B38CC raw=0x01FAF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b38d0:
    // 0x2b38d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38d4:
    // 0x2b38d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b38d8:
    // 0x2b38d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38dc:
    // 0x2b38dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b38e0:
    // 0x2b38e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38e4:
    // 0x2b38e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b38e8:
    // 0x2b38e8: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b38e8u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b38ec:
    // 0x2b38ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b38f0:
    // 0x2b38f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38f4:
    // 0x2b38f4: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b38f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B38F4 raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b38f8:
    // 0x2b38f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b38f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b38fc:
    // 0x2b38fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b38fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3900:
    // 0x2b3900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3904:
    // 0x2b3904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3908:
    // 0x2b3908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b390c:
    // 0x2b390c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b390cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3910:
    // 0x2b3910: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3910u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b3914:
    // 0x2b3914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3918:
    // 0x2b3918: 0x81d41b7c  lb          $s4, 0x1B7C($t6)
    ctx->pc = 0x2b3918u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 7036)));
label_2b391c:
    // 0x2b391c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b391cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3920:
    // 0x2b3920: 0x8034f33d  lb          $s4, -0xCC3($at)
    ctx->pc = 0x2b3920u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964029)));
label_2b3924:
    // 0x2b3924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3928:
    // 0x2b3928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b392c:
    // 0x2b392c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b392cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3930:
    // 0x2b3930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3934:
    // 0x2b3934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3938:
    // 0x2b3938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b393c:
    // 0x2b393c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b393cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3940:
    // 0x2b3940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3944:
    // 0x2b3944: 0x1cba52a  .word       0x01CBA52A                   # slt         $s4, $t6, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3944u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2b3948:
    // 0x2b3948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b394c:
    // 0x2b394c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b394cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3950:
    // 0x2b3950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3954:
    // 0x2b3954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3958:
    // 0x2b3958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b395c:
    // 0x2b395c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b395cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3960:
    // 0x2b3960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3964:
    // 0x2b3964: 0x1e0a51f  .word       0x01E0A51F                   # ddivu       $s4, $t7, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3964u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B3964 raw=0x01E0A51F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3968:
    // 0x2b3968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b396c:
    // 0x2b396c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b396cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3970:
    // 0x2b3970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3974:
    // 0x2b3974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3978:
    // 0x2b3978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b397c:
    // 0x2b397c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b397cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3980:
    // 0x2b3980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3984:
    // 0x2b3984: 0x1f4a17c  .word       0x01F4A17C                   # dsll32      $s4, $s4, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3984u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 5));
label_2b3988:
    // 0x2b3988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b398c:
    // 0x2b398c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b398cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3990:
    // 0x2b3990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3994:
    // 0x2b3994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3998:
    // 0x2b3998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b399c:
    // 0x2b399c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b399cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b39a0:
    // 0x2b39a0: 0x3e7a001  .word       0x03E7A001                   # INVALID     $ra, $a3, -0x5FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b39a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B39A0 raw=0x03E7A001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b39a4:
    // 0x2b39a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b39a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b39a8:
    // 0x2b39a8: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2b39a8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2b39ac:
    // 0x2b39ac: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b39acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b39b0:
    // 0x2b39b0: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2b39b0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2b39b4:
    // 0x2b39b4: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b39b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B39B4 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b39b8:
    // 0x2b39b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b39b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b39bc:
    // 0x2b39bc: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b39bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b39c0:
    // 0x2b39c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b39c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b39c4:
    // 0x2b39c4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b39c4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2b39c8:
    // 0x2b39c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b39c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b39cc:
    // 0x2b39cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b39ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b39d0:
    // 0x2b39d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b39d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b39d4:
    // 0x2b39d4: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b39d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2b39d8:
    // 0x2b39d8: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2b39d8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2b39dc:
    // 0x2b39dc: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b39dcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b39e0:
    // 0x2b39e0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b39e0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b39e4:
    // 0x2b39e4: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b39e4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2b39e8:
    // 0x2b39e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b39e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b39ec:
    // 0x2b39ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b39ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b39f0:
    // 0x2b39f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b39f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b39f4:
    // 0x2b39f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b39f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b39f8:
    // 0x2b39f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b39f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b39fc:
    // 0x2b39fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b39fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a00:
    // 0x2b3a00: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2b3a00u;
    // NOP (addiu $zero, ...)
label_2b3a04:
    // 0x2b3a04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a08:
    // 0x2b3a08: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2b3a08u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2b3a0c:
    // 0x2b3a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a10:
    // 0x2b3a10: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2b3a10u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2b3a14:
    // 0x2b3a14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a18:
    // 0x2b3a18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3a18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3a1c:
    // 0x2b3a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a20:
    // 0x2b3a20: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2b3a24:
    if (ctx->pc == 0x2B3A24u) {
        ctx->pc = 0x2B3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A20u;
        // 0x2b3a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A28u;
        goto label_2b3a28;
    }
    ctx->pc = 0x2B3A20u;
    {
        const bool branch_taken_0x2b3a20 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b3a20) {
            ctx->pc = 0x2B3A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3A20u;
            // 0x2b3a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDA3Cu;
            return;
        }
    }
    ctx->pc = 0x2B3A28u;
label_2b3a28:
    // 0x2b3a28: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b3a2c:
    if (ctx->pc == 0x2B3A2Cu) {
        ctx->pc = 0x2B3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A28u;
        // 0x2b3a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A30u;
        goto label_2b3a30;
    }
    ctx->pc = 0x2B3A28u;
    {
        const bool branch_taken_0x2b3a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A28u;
        // 0x2b3a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a28) {
            ctx->pc = 0x2C1A38u;
            return;
        }
    }
    ctx->pc = 0x2B3A30u;
label_2b3a30:
    // 0x2b3a30: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2b3a30u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2b3a34:
    // 0x2b3a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a38:
    // 0x2b3a38: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2b3a38u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2b3a3c:
    // 0x2b3a3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a40:
    // 0x2b3a40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3a40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3a44:
    // 0x2b3a44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a48:
    // 0x2b3a48: 0x5a004822  blezl       $s0, . + 4 + (0x4822 << 2)
label_2b3a4c:
    if (ctx->pc == 0x2B3A4Cu) {
        ctx->pc = 0x2B3A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A48u;
        // 0x2b3a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A50u;
        goto label_2b3a50;
    }
    ctx->pc = 0x2B3A48u;
    {
        const bool branch_taken_0x2b3a48 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b3a48) {
            ctx->pc = 0x2B3A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3A48u;
            // 0x2b3a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5AD4u;
            return;
        }
    }
    ctx->pc = 0x2B3A50u;
label_2b3a50:
    // 0x2b3a50: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2b3a50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2b3a54:
    // 0x2b3a54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a58:
    // 0x2b3a58: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
label_2b3a5c:
    if (ctx->pc == 0x2B3A5Cu) {
        ctx->pc = 0x2B3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A58u;
        // 0x2b3a5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A60u;
        goto label_2b3a60;
    }
    ctx->pc = 0x2B3A58u;
    {
        const bool branch_taken_0x2b3a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A58u;
        // 0x2b3a5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a58) {
            ctx->pc = 0x2BBA60u;
            { ctx->pc = 0x2bba60; return; }
        }
    }
    ctx->pc = 0x2B3A60u;
label_2b3a60:
    // 0x2b3a60: 0x10020001  beq         $zero, $v0, . + 4 + (0x1 << 2)
label_2b3a64:
    if (ctx->pc == 0x2B3A64u) {
        ctx->pc = 0x2B3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A60u;
        // 0x2b3a64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A68u;
        goto label_2b3a68;
    }
    ctx->pc = 0x2B3A60u;
    {
        const bool branch_taken_0x2b3a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A60u;
        // 0x2b3a64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a60) {
            ctx->pc = 0x2B3A68u;
            goto label_2b3a68;
        }
    }
    ctx->pc = 0x2B3A68u;
label_2b3a68:
    // 0x2b3a68: 0x800410b4  lb          $a0, 0x10B4($zero)
    ctx->pc = 0x2b3a68u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B4u));
label_2b3a6c:
    // 0x2b3a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a70:
    // 0x2b3a70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3a70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3a74:
    // 0x2b3a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a78:
    // 0x2b3a78: 0x50020004  beql        $zero, $v0, . + 4 + (0x4 << 2)
label_2b3a7c:
    if (ctx->pc == 0x2B3A7Cu) {
        ctx->pc = 0x2B3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A78u;
        // 0x2b3a7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3A80u;
        goto label_2b3a80;
    }
    ctx->pc = 0x2B3A78u;
    {
        const bool branch_taken_0x2b3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3a78) {
            ctx->pc = 0x2B3A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3A78u;
            // 0x2b3a7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3A8Cu;
            goto label_2b3a8c;
        }
    }
    ctx->pc = 0x2B3A80u;
label_2b3a80:
    // 0x2b3a80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3a80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3a84:
    // 0x2b3a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a88:
    // 0x2b3a88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3a88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3a8c:
    // 0x2b3a8c: 0x559ce8  .word       0x00559CE8                   # mfsa        $s3 # 005504C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b3a8cu;
    SET_GPR_U32(ctx, 19, ctx->sa);
label_2b3a90:
    // 0x2b3a90: 0x40000003  .word       0x40000003                   # mfc0        $zero, Index # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3a90u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3a94:
    // 0x2b3a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a98:
    // 0x2b3a98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3a98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3a9c:
    // 0x2b3a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3aa0:
    // 0x2b3aa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3aa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3aa4:
    // 0x2b3aa4: 0x1559cec  .word       0x01559CEC                   # dadd        $s3, $t2, $s5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3aa4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 10); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_2b3aa8:
    // 0x2b3aa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3aa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3aac:
    // 0x2b3aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ab0:
    // 0x2b3ab0: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b3ab0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b3ab4:
    // 0x2b3ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ab8:
    // 0x2b3ab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3ab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3abc:
    // 0x2b3abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ac0:
    // 0x2b3ac0: 0x520c079e  beql        $s0, $t4, . + 4 + (0x79E << 2)
label_2b3ac4:
    if (ctx->pc == 0x2B3AC4u) {
        ctx->pc = 0x2B3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AC0u;
        // 0x2b3ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3AC8u;
        goto label_2b3ac8;
    }
    ctx->pc = 0x2B3AC0u;
    {
        const bool branch_taken_0x2b3ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b3ac0) {
            ctx->pc = 0x2B3AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3AC0u;
            // 0x2b3ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B593Cu;
            { ctx->pc = 0x2b593c; return; }
        }
    }
    ctx->pc = 0x2B3AC8u;
label_2b3ac8:
    // 0x2b3ac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3ac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3acc:
    // 0x2b3acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ad0:
    // 0x2b3ad0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b3ad0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b3ad4:
    // 0x2b3ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ad8:
    // 0x2b3ad8: 0x9041005  j           func_4104014
label_2b3adc:
    if (ctx->pc == 0x2B3ADCu) {
        ctx->pc = 0x2B3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AD8u;
        // 0x2b3adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3AE0u;
        goto label_2b3ae0;
    }
    ctx->pc = 0x2B3AD8u;
    ctx->pc = 0x2B3ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AD8u;
    // 0x2b3adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104014u, 0x2B3AD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3AE0u;
label_2b3ae0:
    // 0x2b3ae0: 0x88e1005  j           func_2384014
label_2b3ae4:
    if (ctx->pc == 0x2B3AE4u) {
        ctx->pc = 0x2B3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AE0u;
        // 0x2b3ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3AE8u;
        goto label_2b3ae8;
    }
    ctx->pc = 0x2B3AE0u;
    ctx->pc = 0x2B3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AE0u;
    // 0x2b3ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384014u, 0x2B3AE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3AE8u;
label_2b3ae8:
    // 0x2b3ae8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3aec:
    // 0x2b3aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3af0:
    // 0x2b3af0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3af0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3af4:
    // 0x2b3af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3af8:
    // 0x2b3af8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3af8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3afc:
    // 0x2b3afc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3afcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b00:
    // 0x2b3b00: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b3b04:
    if (ctx->pc == 0x2B3B04u) {
        ctx->pc = 0x2B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B00u;
        // 0x2b3b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B08u;
        goto label_2b3b08;
    }
    ctx->pc = 0x2B3B00u;
    {
        const bool branch_taken_0x2b3b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B00u;
        // 0x2b3b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b00) {
            ctx->pc = 0x2BBB08u;
            { ctx->pc = 0x2bbb08; return; }
        }
    }
    ctx->pc = 0x2B3B08u;
label_2b3b08:
    // 0x2b3b08: 0xb041005  j           func_C104014
label_2b3b0c:
    if (ctx->pc == 0x2B3B0Cu) {
        ctx->pc = 0x2B3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B08u;
        // 0x2b3b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B10u;
        goto label_2b3b10;
    }
    ctx->pc = 0x2B3B08u;
    ctx->pc = 0x2B3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B08u;
    // 0x2b3b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104014u, 0x2B3B08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3B10u;
label_2b3b10:
    // 0x2b3b10: 0x5a002780  blezl       $s0, . + 4 + (0x2780 << 2)
label_2b3b14:
    if (ctx->pc == 0x2B3B14u) {
        ctx->pc = 0x2B3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B10u;
        // 0x2b3b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B18u;
        goto label_2b3b18;
    }
    ctx->pc = 0x2B3B10u;
    {
        const bool branch_taken_0x2b3b10 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b3b10) {
            ctx->pc = 0x2B3B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B10u;
            // 0x2b3b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD914u;
            { ctx->pc = 0x2bd914; return; }
        }
    }
    ctx->pc = 0x2B3B18u;
label_2b3b18:
    // 0x2b3b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b1c:
    // 0x2b3b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b20:
    // 0x2b3b20: 0x500e0003  beql        $zero, $t6, . + 4 + (0x3 << 2)
label_2b3b24:
    if (ctx->pc == 0x2B3B24u) {
        ctx->pc = 0x2B3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B20u;
        // 0x2b3b24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B28u;
        goto label_2b3b28;
    }
    ctx->pc = 0x2B3B20u;
    {
        const bool branch_taken_0x2b3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b3b20) {
            ctx->pc = 0x2B3B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B20u;
            // 0x2b3b24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3B30u;
            goto label_2b3b30;
        }
    }
    ctx->pc = 0x2B3B28u;
label_2b3b28:
    // 0x2b3b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b2c:
    // 0x2b3b2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b30:
    // 0x2b3b30: 0x400001d3  .word       0x400001D3                   # mfc0        $zero, Index # 000001D3 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3b30u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3b34:
    // 0x2b3b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b38:
    // 0x2b3b38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b3c:
    // 0x2b3b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b40:
    // 0x2b3b40: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b3b44:
    if (ctx->pc == 0x2B3B44u) {
        ctx->pc = 0x2B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B40u;
        // 0x2b3b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B48u;
        goto label_2b3b48;
    }
    ctx->pc = 0x2B3B40u;
    {
        const bool branch_taken_0x2b3b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B40u;
        // 0x2b3b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b40) {
            ctx->pc = 0x2B7E6Cu;
            { ctx->pc = 0x2b7e6c; return; }
        }
    }
    ctx->pc = 0x2B3B48u;
label_2b3b48:
    // 0x2b3b48: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b3b4c:
    // 0x2b3b4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b50:
    // 0x2b3b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b54:
    // 0x2b3b54: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3b54u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3b58:
    // 0x2b3b58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b5c:
    // 0x2b3b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b60:
    // 0x2b3b60: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b3b60u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b3b64:
    // 0x2b3b64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b68:
    // 0x2b3b68: 0x88e0805  j           func_2382014
label_2b3b6c:
    if (ctx->pc == 0x2B3B6Cu) {
        ctx->pc = 0x2B3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B68u;
        // 0x2b3b6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B70u;
        goto label_2b3b70;
    }
    ctx->pc = 0x2B3B68u;
    ctx->pc = 0x2B3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B68u;
    // 0x2b3b6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382014u, 0x2B3B68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3B70u;
label_2b3b70:
    // 0x2b3b70: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2b3b74:
    // 0x2b3b74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b78:
    // 0x2b3b78: 0x52010037  beql        $s0, $at, . + 4 + (0x37 << 2)
label_2b3b7c:
    if (ctx->pc == 0x2B3B7Cu) {
        ctx->pc = 0x2B3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B78u;
        // 0x2b3b7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B80u;
        goto label_2b3b80;
    }
    ctx->pc = 0x2B3B78u;
    {
        const bool branch_taken_0x2b3b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3b78) {
            ctx->pc = 0x2B3B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B78u;
            // 0x2b3b7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C58u;
            { ctx->pc = 0x2b3c58; return; }
        }
    }
    ctx->pc = 0x2B3B80u;
label_2b3b80:
    // 0x2b3b80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b84:
    // 0x2b3b84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b88:
    // 0x2b3b88: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2b3b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2b3b8c:
    // 0x2b3b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b90:
    // 0x2b3b90: 0x52010034  beql        $s0, $at, . + 4 + (0x34 << 2)
label_2b3b94:
    if (ctx->pc == 0x2B3B94u) {
        ctx->pc = 0x2B3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B90u;
        // 0x2b3b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B98u;
        goto label_2b3b98;
    }
    ctx->pc = 0x2B3B90u;
    {
        const bool branch_taken_0x2b3b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3b90) {
            ctx->pc = 0x2B3B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B90u;
            // 0x2b3b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C64u;
            { ctx->pc = 0x2b3c64; return; }
        }
    }
    ctx->pc = 0x2B3B98u;
label_2b3b98:
    // 0x2b3b98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b9c:
    // 0x2b3b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ba0:
    // 0x2b3ba0: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2b3ba0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2b3ba4:
    // 0x2b3ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ba8:
    // 0x2b3ba8: 0x52010031  beql        $s0, $at, . + 4 + (0x31 << 2)
label_2b3bac:
    if (ctx->pc == 0x2B3BACu) {
        ctx->pc = 0x2B3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BA8u;
        // 0x2b3bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3BB0u;
        goto label_2b3bb0;
    }
    ctx->pc = 0x2B3BA8u;
    {
        const bool branch_taken_0x2b3ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3ba8) {
            ctx->pc = 0x2B3BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BA8u;
            // 0x2b3bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C70u;
            { ctx->pc = 0x2b3c70; return; }
        }
    }
    ctx->pc = 0x2B3BB0u;
label_2b3bb0:
    // 0x2b3bb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3bb4:
    // 0x2b3bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bb8:
    // 0x2b3bb8: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2b3bb8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2b3bbc:
    // 0x2b3bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bc0:
    // 0x2b3bc0: 0x5201002e  beql        $s0, $at, . + 4 + (0x2E << 2)
label_2b3bc4:
    if (ctx->pc == 0x2B3BC4u) {
        ctx->pc = 0x2B3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BC0u;
        // 0x2b3bc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3BC8u;
        goto label_2b3bc8;
    }
    ctx->pc = 0x2B3BC0u;
    {
        const bool branch_taken_0x2b3bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3bc0) {
            ctx->pc = 0x2B3BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BC0u;
            // 0x2b3bc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C7Cu;
            { ctx->pc = 0x2b3c7c; return; }
        }
    }
    ctx->pc = 0x2B3BC8u;
label_2b3bc8:
    // 0x2b3bc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3bc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3bcc:
    // 0x2b3bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bd0:
    // 0x2b3bd0: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2b3bd0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2b3bd4:
    // 0x2b3bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bd8:
    // 0x2b3bd8: 0x5201002b  beql        $s0, $at, . + 4 + (0x2B << 2)
label_2b3bdc:
    if (ctx->pc == 0x2B3BDCu) {
        ctx->pc = 0x2B3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BD8u;
        // 0x2b3bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3BE0u;
        goto label_2b3be0;
    }
    ctx->pc = 0x2B3BD8u;
    {
        const bool branch_taken_0x2b3bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3bd8) {
            ctx->pc = 0x2B3BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BD8u;
            // 0x2b3bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C88u;
            { ctx->pc = 0x2b3c88; return; }
        }
    }
    ctx->pc = 0x2B3BE0u;
label_2b3be0:
    // 0x2b3be0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3be4:
    // 0x2b3be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3be8:
    // 0x2b3be8: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2b3be8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2b3bec:
    // 0x2b3bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bf0:
    // 0x2b3bf0: 0x52010028  beql        $s0, $at, . + 4 + (0x28 << 2)
label_2b3bf4:
    if (ctx->pc == 0x2B3BF4u) {
        ctx->pc = 0x2B3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BF0u;
        // 0x2b3bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3BF8u;
        goto label_2b3bf8;
    }
    ctx->pc = 0x2B3BF0u;
    {
        const bool branch_taken_0x2b3bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3bf0) {
            ctx->pc = 0x2B3BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BF0u;
            // 0x2b3bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C94u;
            { ctx->pc = 0x2b3c94; return; }
        }
    }
    ctx->pc = 0x2B3BF8u;
label_2b3bf8:
    // 0x2b3bf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3bf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3bfc:
    // 0x2b3bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c00:
    // 0x2b3c00: 0x120f704b  beq         $s0, $t7, . + 4 + (0x704B << 2)
label_2b3c04:
    if (ctx->pc == 0x2B3C04u) {
        ctx->pc = 0x2B3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C00u;
        // 0x2b3c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3C08u;
        goto label_2b3c08;
    }
    ctx->pc = 0x2B3C00u;
    {
        const bool branch_taken_0x2b3c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C00u;
        // 0x2b3c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c00) {
            ctx->pc = 0x2CFD30u;
            return;
        }
    }
    ctx->pc = 0x2B3C08u;
label_2b3c08:
    // 0x2b3c08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c0c:
    // 0x2b3c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c10:
    // 0x2b3c10: 0x5a00781d  blezl       $s0, . + 4 + (0x781D << 2)
label_2b3c14:
    if (ctx->pc == 0x2B3C14u) {
        ctx->pc = 0x2B3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C10u;
        // 0x2b3c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3C18u;
        goto label_2b3c18;
    }
    ctx->pc = 0x2B3C10u;
    {
        const bool branch_taken_0x2b3c10 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b3c10) {
            ctx->pc = 0x2B3C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3C10u;
            // 0x2b3c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C88u;
            return;
        }
    }
    ctx->pc = 0x2B3C18u;
label_2b3c18:
    // 0x2b3c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c1c:
    // 0x2b3c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c20:
    // 0x2b3c20: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b3c24:
    if (ctx->pc == 0x2B3C24u) {
        ctx->pc = 0x2B3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C20u;
        // 0x2b3c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3C28u;
        goto label_2b3c28;
    }
    ctx->pc = 0x2B3C20u;
    {
        const bool branch_taken_0x2b3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C20u;
        // 0x2b3c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c20) {
            ctx->pc = 0x2CFC6Cu;
            return;
        }
    }
    ctx->pc = 0x2B3C28u;
label_2b3c28:
    // 0x2b3c28: 0x1d61ffa  .word       0x01D61FFA                   # dsrl        $v1, $s6, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> 31);
label_2b3c2c:
    // 0x2b3c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c30:
    // 0x2b3c30: 0x1d71ffc  .word       0x01D71FFC                   # dsll32      $v1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 31));
label_2b3c34:
    // 0x2b3c34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c38:
    // 0x2b3c38: 0x1d81ffe  .word       0x01D81FFE                   # dsrl32      $v1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> (32 + 31));
label_2b3c3c:
    // 0x2b3c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c40:
    // 0x2b3c40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c44:
    // 0x2b3c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c48:
    // 0x2b3c48: 0x1f93ff8  .word       0x01F93FF8                   # dsll        $a3, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) << 31);
label_2b3c4c:
    // 0x2b3c4c: 0x960582  .word       0x00960582                   # srl         $zero, $s6, 22 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c4cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 22), 22));
    ctx->pc = 0x2b3c50u;
    return;
}

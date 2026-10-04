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


void FUN_0014eba0_part764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c3490u: goto label_2c3490;
        case 0x2c3494u: goto label_2c3494;
        case 0x2c3498u: goto label_2c3498;
        case 0x2c349cu: goto label_2c349c;
        case 0x2c34a0u: goto label_2c34a0;
        case 0x2c34a4u: goto label_2c34a4;
        case 0x2c34a8u: goto label_2c34a8;
        case 0x2c34acu: goto label_2c34ac;
        case 0x2c34b0u: goto label_2c34b0;
        case 0x2c34b4u: goto label_2c34b4;
        case 0x2c34b8u: goto label_2c34b8;
        case 0x2c34bcu: goto label_2c34bc;
        case 0x2c34c0u: goto label_2c34c0;
        case 0x2c34c4u: goto label_2c34c4;
        case 0x2c34c8u: goto label_2c34c8;
        case 0x2c34ccu: goto label_2c34cc;
        case 0x2c34d0u: goto label_2c34d0;
        case 0x2c34d4u: goto label_2c34d4;
        case 0x2c34d8u: goto label_2c34d8;
        case 0x2c34dcu: goto label_2c34dc;
        case 0x2c34e0u: goto label_2c34e0;
        case 0x2c34e4u: goto label_2c34e4;
        case 0x2c34e8u: goto label_2c34e8;
        case 0x2c34ecu: goto label_2c34ec;
        case 0x2c34f0u: goto label_2c34f0;
        case 0x2c34f4u: goto label_2c34f4;
        case 0x2c34f8u: goto label_2c34f8;
        case 0x2c34fcu: goto label_2c34fc;
        case 0x2c3500u: goto label_2c3500;
        case 0x2c3504u: goto label_2c3504;
        case 0x2c3508u: goto label_2c3508;
        case 0x2c350cu: goto label_2c350c;
        case 0x2c3510u: goto label_2c3510;
        case 0x2c3514u: goto label_2c3514;
        case 0x2c3518u: goto label_2c3518;
        case 0x2c351cu: goto label_2c351c;
        case 0x2c3520u: goto label_2c3520;
        case 0x2c3524u: goto label_2c3524;
        case 0x2c3528u: goto label_2c3528;
        case 0x2c352cu: goto label_2c352c;
        case 0x2c3530u: goto label_2c3530;
        case 0x2c3534u: goto label_2c3534;
        case 0x2c3538u: goto label_2c3538;
        case 0x2c353cu: goto label_2c353c;
        case 0x2c3540u: goto label_2c3540;
        case 0x2c3544u: goto label_2c3544;
        case 0x2c3548u: goto label_2c3548;
        case 0x2c354cu: goto label_2c354c;
        case 0x2c3550u: goto label_2c3550;
        case 0x2c3554u: goto label_2c3554;
        case 0x2c3558u: goto label_2c3558;
        case 0x2c355cu: goto label_2c355c;
        case 0x2c3560u: goto label_2c3560;
        case 0x2c3564u: goto label_2c3564;
        case 0x2c3568u: goto label_2c3568;
        case 0x2c356cu: goto label_2c356c;
        case 0x2c3570u: goto label_2c3570;
        case 0x2c3574u: goto label_2c3574;
        case 0x2c3578u: goto label_2c3578;
        case 0x2c357cu: goto label_2c357c;
        case 0x2c3580u: goto label_2c3580;
        case 0x2c3584u: goto label_2c3584;
        case 0x2c3588u: goto label_2c3588;
        case 0x2c358cu: goto label_2c358c;
        case 0x2c3590u: goto label_2c3590;
        case 0x2c3594u: goto label_2c3594;
        case 0x2c3598u: goto label_2c3598;
        case 0x2c359cu: goto label_2c359c;
        case 0x2c35a0u: goto label_2c35a0;
        case 0x2c35a4u: goto label_2c35a4;
        case 0x2c35a8u: goto label_2c35a8;
        case 0x2c35acu: goto label_2c35ac;
        case 0x2c35b0u: goto label_2c35b0;
        case 0x2c35b4u: goto label_2c35b4;
        case 0x2c35b8u: goto label_2c35b8;
        case 0x2c35bcu: goto label_2c35bc;
        case 0x2c35c0u: goto label_2c35c0;
        case 0x2c35c4u: goto label_2c35c4;
        case 0x2c35c8u: goto label_2c35c8;
        case 0x2c35ccu: goto label_2c35cc;
        case 0x2c35d0u: goto label_2c35d0;
        case 0x2c35d4u: goto label_2c35d4;
        case 0x2c35d8u: goto label_2c35d8;
        case 0x2c35dcu: goto label_2c35dc;
        case 0x2c35e0u: goto label_2c35e0;
        case 0x2c35e4u: goto label_2c35e4;
        case 0x2c35e8u: goto label_2c35e8;
        case 0x2c35ecu: goto label_2c35ec;
        case 0x2c35f0u: goto label_2c35f0;
        case 0x2c35f4u: goto label_2c35f4;
        case 0x2c35f8u: goto label_2c35f8;
        case 0x2c35fcu: goto label_2c35fc;
        case 0x2c3600u: goto label_2c3600;
        case 0x2c3604u: goto label_2c3604;
        case 0x2c3608u: goto label_2c3608;
        case 0x2c360cu: goto label_2c360c;
        case 0x2c3610u: goto label_2c3610;
        case 0x2c3614u: goto label_2c3614;
        case 0x2c3618u: goto label_2c3618;
        case 0x2c361cu: goto label_2c361c;
        case 0x2c3620u: goto label_2c3620;
        case 0x2c3624u: goto label_2c3624;
        case 0x2c3628u: goto label_2c3628;
        case 0x2c362cu: goto label_2c362c;
        case 0x2c3630u: goto label_2c3630;
        case 0x2c3634u: goto label_2c3634;
        case 0x2c3638u: goto label_2c3638;
        case 0x2c363cu: goto label_2c363c;
        case 0x2c3640u: goto label_2c3640;
        case 0x2c3644u: goto label_2c3644;
        case 0x2c3648u: goto label_2c3648;
        case 0x2c364cu: goto label_2c364c;
        case 0x2c3650u: goto label_2c3650;
        case 0x2c3654u: goto label_2c3654;
        case 0x2c3658u: goto label_2c3658;
        case 0x2c365cu: goto label_2c365c;
        case 0x2c3660u: goto label_2c3660;
        case 0x2c3664u: goto label_2c3664;
        case 0x2c3668u: goto label_2c3668;
        case 0x2c366cu: goto label_2c366c;
        case 0x2c3670u: goto label_2c3670;
        case 0x2c3674u: goto label_2c3674;
        case 0x2c3678u: goto label_2c3678;
        case 0x2c367cu: goto label_2c367c;
        case 0x2c3680u: goto label_2c3680;
        case 0x2c3684u: goto label_2c3684;
        case 0x2c3688u: goto label_2c3688;
        case 0x2c368cu: goto label_2c368c;
        case 0x2c3690u: goto label_2c3690;
        case 0x2c3694u: goto label_2c3694;
        case 0x2c3698u: goto label_2c3698;
        case 0x2c369cu: goto label_2c369c;
        case 0x2c36a0u: goto label_2c36a0;
        case 0x2c36a4u: goto label_2c36a4;
        case 0x2c36a8u: goto label_2c36a8;
        case 0x2c36acu: goto label_2c36ac;
        case 0x2c36b0u: goto label_2c36b0;
        case 0x2c36b4u: goto label_2c36b4;
        case 0x2c36b8u: goto label_2c36b8;
        case 0x2c36bcu: goto label_2c36bc;
        case 0x2c36c0u: goto label_2c36c0;
        case 0x2c36c4u: goto label_2c36c4;
        case 0x2c36c8u: goto label_2c36c8;
        case 0x2c36ccu: goto label_2c36cc;
        case 0x2c36d0u: goto label_2c36d0;
        case 0x2c36d4u: goto label_2c36d4;
        case 0x2c36d8u: goto label_2c36d8;
        case 0x2c36dcu: goto label_2c36dc;
        case 0x2c36e0u: goto label_2c36e0;
        case 0x2c36e4u: goto label_2c36e4;
        case 0x2c36e8u: goto label_2c36e8;
        case 0x2c36ecu: goto label_2c36ec;
        case 0x2c36f0u: goto label_2c36f0;
        case 0x2c36f4u: goto label_2c36f4;
        case 0x2c36f8u: goto label_2c36f8;
        case 0x2c36fcu: goto label_2c36fc;
        case 0x2c3700u: goto label_2c3700;
        case 0x2c3704u: goto label_2c3704;
        case 0x2c3708u: goto label_2c3708;
        case 0x2c370cu: goto label_2c370c;
        case 0x2c3710u: goto label_2c3710;
        case 0x2c3714u: goto label_2c3714;
        case 0x2c3718u: goto label_2c3718;
        case 0x2c371cu: goto label_2c371c;
        case 0x2c3720u: goto label_2c3720;
        case 0x2c3724u: goto label_2c3724;
        case 0x2c3728u: goto label_2c3728;
        case 0x2c372cu: goto label_2c372c;
        case 0x2c3730u: goto label_2c3730;
        case 0x2c3734u: goto label_2c3734;
        case 0x2c3738u: goto label_2c3738;
        case 0x2c373cu: goto label_2c373c;
        case 0x2c3740u: goto label_2c3740;
        case 0x2c3744u: goto label_2c3744;
        case 0x2c3748u: goto label_2c3748;
        case 0x2c374cu: goto label_2c374c;
        case 0x2c3750u: goto label_2c3750;
        case 0x2c3754u: goto label_2c3754;
        case 0x2c3758u: goto label_2c3758;
        case 0x2c375cu: goto label_2c375c;
        case 0x2c3760u: goto label_2c3760;
        case 0x2c3764u: goto label_2c3764;
        case 0x2c3768u: goto label_2c3768;
        case 0x2c376cu: goto label_2c376c;
        case 0x2c3770u: goto label_2c3770;
        case 0x2c3774u: goto label_2c3774;
        case 0x2c3778u: goto label_2c3778;
        case 0x2c377cu: goto label_2c377c;
        case 0x2c3780u: goto label_2c3780;
        case 0x2c3784u: goto label_2c3784;
        case 0x2c3788u: goto label_2c3788;
        case 0x2c378cu: goto label_2c378c;
        case 0x2c3790u: goto label_2c3790;
        case 0x2c3794u: goto label_2c3794;
        case 0x2c3798u: goto label_2c3798;
        case 0x2c379cu: goto label_2c379c;
        case 0x2c37a0u: goto label_2c37a0;
        case 0x2c37a4u: goto label_2c37a4;
        case 0x2c37a8u: goto label_2c37a8;
        case 0x2c37acu: goto label_2c37ac;
        case 0x2c37b0u: goto label_2c37b0;
        case 0x2c37b4u: goto label_2c37b4;
        case 0x2c37b8u: goto label_2c37b8;
        case 0x2c37bcu: goto label_2c37bc;
        case 0x2c37c0u: goto label_2c37c0;
        case 0x2c37c4u: goto label_2c37c4;
        case 0x2c37c8u: goto label_2c37c8;
        case 0x2c37ccu: goto label_2c37cc;
        case 0x2c37d0u: goto label_2c37d0;
        case 0x2c37d4u: goto label_2c37d4;
        case 0x2c37d8u: goto label_2c37d8;
        case 0x2c37dcu: goto label_2c37dc;
        case 0x2c37e0u: goto label_2c37e0;
        case 0x2c37e4u: goto label_2c37e4;
        case 0x2c37e8u: goto label_2c37e8;
        case 0x2c37ecu: goto label_2c37ec;
        case 0x2c37f0u: goto label_2c37f0;
        case 0x2c37f4u: goto label_2c37f4;
        case 0x2c37f8u: goto label_2c37f8;
        case 0x2c37fcu: goto label_2c37fc;
        case 0x2c3800u: goto label_2c3800;
        case 0x2c3804u: goto label_2c3804;
        case 0x2c3808u: goto label_2c3808;
        case 0x2c380cu: goto label_2c380c;
        case 0x2c3810u: goto label_2c3810;
        case 0x2c3814u: goto label_2c3814;
        case 0x2c3818u: goto label_2c3818;
        case 0x2c381cu: goto label_2c381c;
        case 0x2c3820u: goto label_2c3820;
        case 0x2c3824u: goto label_2c3824;
        case 0x2c3828u: goto label_2c3828;
        case 0x2c382cu: goto label_2c382c;
        case 0x2c3830u: goto label_2c3830;
        case 0x2c3834u: goto label_2c3834;
        case 0x2c3838u: goto label_2c3838;
        case 0x2c383cu: goto label_2c383c;
        case 0x2c3840u: goto label_2c3840;
        case 0x2c3844u: goto label_2c3844;
        case 0x2c3848u: goto label_2c3848;
        case 0x2c384cu: goto label_2c384c;
        case 0x2c3850u: goto label_2c3850;
        case 0x2c3854u: goto label_2c3854;
        case 0x2c3858u: goto label_2c3858;
        case 0x2c385cu: goto label_2c385c;
        case 0x2c3860u: goto label_2c3860;
        case 0x2c3864u: goto label_2c3864;
        case 0x2c3868u: goto label_2c3868;
        case 0x2c386cu: goto label_2c386c;
        case 0x2c3870u: goto label_2c3870;
        case 0x2c3874u: goto label_2c3874;
        case 0x2c3878u: goto label_2c3878;
        case 0x2c387cu: goto label_2c387c;
        case 0x2c3880u: goto label_2c3880;
        case 0x2c3884u: goto label_2c3884;
        case 0x2c3888u: goto label_2c3888;
        case 0x2c388cu: goto label_2c388c;
        case 0x2c3890u: goto label_2c3890;
        case 0x2c3894u: goto label_2c3894;
        case 0x2c3898u: goto label_2c3898;
        case 0x2c389cu: goto label_2c389c;
        case 0x2c38a0u: goto label_2c38a0;
        case 0x2c38a4u: goto label_2c38a4;
        case 0x2c38a8u: goto label_2c38a8;
        case 0x2c38acu: goto label_2c38ac;
        case 0x2c38b0u: goto label_2c38b0;
        case 0x2c38b4u: goto label_2c38b4;
        case 0x2c38b8u: goto label_2c38b8;
        case 0x2c38bcu: goto label_2c38bc;
        case 0x2c38c0u: goto label_2c38c0;
        case 0x2c38c4u: goto label_2c38c4;
        case 0x2c38c8u: goto label_2c38c8;
        case 0x2c38ccu: goto label_2c38cc;
        case 0x2c38d0u: goto label_2c38d0;
        case 0x2c38d4u: goto label_2c38d4;
        case 0x2c38d8u: goto label_2c38d8;
        case 0x2c38dcu: goto label_2c38dc;
        case 0x2c38e0u: goto label_2c38e0;
        case 0x2c38e4u: goto label_2c38e4;
        case 0x2c38e8u: goto label_2c38e8;
        case 0x2c38ecu: goto label_2c38ec;
        case 0x2c38f0u: goto label_2c38f0;
        case 0x2c38f4u: goto label_2c38f4;
        case 0x2c38f8u: goto label_2c38f8;
        case 0x2c38fcu: goto label_2c38fc;
        case 0x2c3900u: goto label_2c3900;
        case 0x2c3904u: goto label_2c3904;
        case 0x2c3908u: goto label_2c3908;
        case 0x2c390cu: goto label_2c390c;
        case 0x2c3910u: goto label_2c3910;
        case 0x2c3914u: goto label_2c3914;
        case 0x2c3918u: goto label_2c3918;
        case 0x2c391cu: goto label_2c391c;
        case 0x2c3920u: goto label_2c3920;
        case 0x2c3924u: goto label_2c3924;
        case 0x2c3928u: goto label_2c3928;
        case 0x2c392cu: goto label_2c392c;
        case 0x2c3930u: goto label_2c3930;
        case 0x2c3934u: goto label_2c3934;
        case 0x2c3938u: goto label_2c3938;
        case 0x2c393cu: goto label_2c393c;
        case 0x2c3940u: goto label_2c3940;
        case 0x2c3944u: goto label_2c3944;
        case 0x2c3948u: goto label_2c3948;
        case 0x2c394cu: goto label_2c394c;
        case 0x2c3950u: goto label_2c3950;
        case 0x2c3954u: goto label_2c3954;
        case 0x2c3958u: goto label_2c3958;
        case 0x2c395cu: goto label_2c395c;
        case 0x2c3960u: goto label_2c3960;
        case 0x2c3964u: goto label_2c3964;
        case 0x2c3968u: goto label_2c3968;
        case 0x2c396cu: goto label_2c396c;
        case 0x2c3970u: goto label_2c3970;
        case 0x2c3974u: goto label_2c3974;
        case 0x2c3978u: goto label_2c3978;
        case 0x2c397cu: goto label_2c397c;
        case 0x2c3980u: goto label_2c3980;
        case 0x2c3984u: goto label_2c3984;
        case 0x2c3988u: goto label_2c3988;
        case 0x2c398cu: goto label_2c398c;
        case 0x2c3990u: goto label_2c3990;
        case 0x2c3994u: goto label_2c3994;
        case 0x2c3998u: goto label_2c3998;
        case 0x2c399cu: goto label_2c399c;
        case 0x2c39a0u: goto label_2c39a0;
        case 0x2c39a4u: goto label_2c39a4;
        case 0x2c39a8u: goto label_2c39a8;
        case 0x2c39acu: goto label_2c39ac;
        case 0x2c39b0u: goto label_2c39b0;
        case 0x2c39b4u: goto label_2c39b4;
        case 0x2c39b8u: goto label_2c39b8;
        case 0x2c39bcu: goto label_2c39bc;
        case 0x2c39c0u: goto label_2c39c0;
        case 0x2c39c4u: goto label_2c39c4;
        case 0x2c39c8u: goto label_2c39c8;
        case 0x2c39ccu: goto label_2c39cc;
        case 0x2c39d0u: goto label_2c39d0;
        case 0x2c39d4u: goto label_2c39d4;
        case 0x2c39d8u: goto label_2c39d8;
        case 0x2c39dcu: goto label_2c39dc;
        case 0x2c39e0u: goto label_2c39e0;
        case 0x2c39e4u: goto label_2c39e4;
        case 0x2c39e8u: goto label_2c39e8;
        case 0x2c39ecu: goto label_2c39ec;
        case 0x2c39f0u: goto label_2c39f0;
        case 0x2c39f4u: goto label_2c39f4;
        case 0x2c39f8u: goto label_2c39f8;
        case 0x2c39fcu: goto label_2c39fc;
        case 0x2c3a00u: goto label_2c3a00;
        case 0x2c3a04u: goto label_2c3a04;
        case 0x2c3a08u: goto label_2c3a08;
        case 0x2c3a0cu: goto label_2c3a0c;
        case 0x2c3a10u: goto label_2c3a10;
        case 0x2c3a14u: goto label_2c3a14;
        case 0x2c3a18u: goto label_2c3a18;
        case 0x2c3a1cu: goto label_2c3a1c;
        case 0x2c3a20u: goto label_2c3a20;
        case 0x2c3a24u: goto label_2c3a24;
        case 0x2c3a28u: goto label_2c3a28;
        case 0x2c3a2cu: goto label_2c3a2c;
        case 0x2c3a30u: goto label_2c3a30;
        case 0x2c3a34u: goto label_2c3a34;
        case 0x2c3a38u: goto label_2c3a38;
        case 0x2c3a3cu: goto label_2c3a3c;
        case 0x2c3a40u: goto label_2c3a40;
        case 0x2c3a44u: goto label_2c3a44;
        case 0x2c3a48u: goto label_2c3a48;
        case 0x2c3a4cu: goto label_2c3a4c;
        case 0x2c3a50u: goto label_2c3a50;
        case 0x2c3a54u: goto label_2c3a54;
        case 0x2c3a58u: goto label_2c3a58;
        case 0x2c3a5cu: goto label_2c3a5c;
        case 0x2c3a60u: goto label_2c3a60;
        case 0x2c3a64u: goto label_2c3a64;
        case 0x2c3a68u: goto label_2c3a68;
        case 0x2c3a6cu: goto label_2c3a6c;
        case 0x2c3a70u: goto label_2c3a70;
        case 0x2c3a74u: goto label_2c3a74;
        case 0x2c3a78u: goto label_2c3a78;
        case 0x2c3a7cu: goto label_2c3a7c;
        case 0x2c3a80u: goto label_2c3a80;
        case 0x2c3a84u: goto label_2c3a84;
        case 0x2c3a88u: goto label_2c3a88;
        case 0x2c3a8cu: goto label_2c3a8c;
        case 0x2c3a90u: goto label_2c3a90;
        case 0x2c3a94u: goto label_2c3a94;
        case 0x2c3a98u: goto label_2c3a98;
        case 0x2c3a9cu: goto label_2c3a9c;
        case 0x2c3aa0u: goto label_2c3aa0;
        case 0x2c3aa4u: goto label_2c3aa4;
        case 0x2c3aa8u: goto label_2c3aa8;
        case 0x2c3aacu: goto label_2c3aac;
        case 0x2c3ab0u: goto label_2c3ab0;
        case 0x2c3ab4u: goto label_2c3ab4;
        case 0x2c3ab8u: goto label_2c3ab8;
        case 0x2c3abcu: goto label_2c3abc;
        case 0x2c3ac0u: goto label_2c3ac0;
        case 0x2c3ac4u: goto label_2c3ac4;
        case 0x2c3ac8u: goto label_2c3ac8;
        case 0x2c3accu: goto label_2c3acc;
        case 0x2c3ad0u: goto label_2c3ad0;
        case 0x2c3ad4u: goto label_2c3ad4;
        case 0x2c3ad8u: goto label_2c3ad8;
        case 0x2c3adcu: goto label_2c3adc;
        case 0x2c3ae0u: goto label_2c3ae0;
        case 0x2c3ae4u: goto label_2c3ae4;
        case 0x2c3ae8u: goto label_2c3ae8;
        case 0x2c3aecu: goto label_2c3aec;
        case 0x2c3af0u: goto label_2c3af0;
        case 0x2c3af4u: goto label_2c3af4;
        case 0x2c3af8u: goto label_2c3af8;
        case 0x2c3afcu: goto label_2c3afc;
        case 0x2c3b00u: goto label_2c3b00;
        case 0x2c3b04u: goto label_2c3b04;
        case 0x2c3b08u: goto label_2c3b08;
        case 0x2c3b0cu: goto label_2c3b0c;
        case 0x2c3b10u: goto label_2c3b10;
        case 0x2c3b14u: goto label_2c3b14;
        case 0x2c3b18u: goto label_2c3b18;
        case 0x2c3b1cu: goto label_2c3b1c;
        case 0x2c3b20u: goto label_2c3b20;
        case 0x2c3b24u: goto label_2c3b24;
        case 0x2c3b28u: goto label_2c3b28;
        case 0x2c3b2cu: goto label_2c3b2c;
        case 0x2c3b30u: goto label_2c3b30;
        case 0x2c3b34u: goto label_2c3b34;
        case 0x2c3b38u: goto label_2c3b38;
        case 0x2c3b3cu: goto label_2c3b3c;
        case 0x2c3b40u: goto label_2c3b40;
        case 0x2c3b44u: goto label_2c3b44;
        case 0x2c3b48u: goto label_2c3b48;
        case 0x2c3b4cu: goto label_2c3b4c;
        case 0x2c3b50u: goto label_2c3b50;
        case 0x2c3b54u: goto label_2c3b54;
        case 0x2c3b58u: goto label_2c3b58;
        case 0x2c3b5cu: goto label_2c3b5c;
        case 0x2c3b60u: goto label_2c3b60;
        case 0x2c3b64u: goto label_2c3b64;
        case 0x2c3b68u: goto label_2c3b68;
        case 0x2c3b6cu: goto label_2c3b6c;
        case 0x2c3b70u: goto label_2c3b70;
        case 0x2c3b74u: goto label_2c3b74;
        case 0x2c3b78u: goto label_2c3b78;
        case 0x2c3b7cu: goto label_2c3b7c;
        case 0x2c3b80u: goto label_2c3b80;
        case 0x2c3b84u: goto label_2c3b84;
        case 0x2c3b88u: goto label_2c3b88;
        case 0x2c3b8cu: goto label_2c3b8c;
        case 0x2c3b90u: goto label_2c3b90;
        case 0x2c3b94u: goto label_2c3b94;
        case 0x2c3b98u: goto label_2c3b98;
        case 0x2c3b9cu: goto label_2c3b9c;
        case 0x2c3ba0u: goto label_2c3ba0;
        case 0x2c3ba4u: goto label_2c3ba4;
        case 0x2c3ba8u: goto label_2c3ba8;
        case 0x2c3bacu: goto label_2c3bac;
        case 0x2c3bb0u: goto label_2c3bb0;
        case 0x2c3bb4u: goto label_2c3bb4;
        case 0x2c3bb8u: goto label_2c3bb8;
        case 0x2c3bbcu: goto label_2c3bbc;
        case 0x2c3bc0u: goto label_2c3bc0;
        case 0x2c3bc4u: goto label_2c3bc4;
        case 0x2c3bc8u: goto label_2c3bc8;
        case 0x2c3bccu: goto label_2c3bcc;
        case 0x2c3bd0u: goto label_2c3bd0;
        case 0x2c3bd4u: goto label_2c3bd4;
        case 0x2c3bd8u: goto label_2c3bd8;
        case 0x2c3bdcu: goto label_2c3bdc;
        case 0x2c3be0u: goto label_2c3be0;
        case 0x2c3be4u: goto label_2c3be4;
        case 0x2c3be8u: goto label_2c3be8;
        case 0x2c3becu: goto label_2c3bec;
        case 0x2c3bf0u: goto label_2c3bf0;
        case 0x2c3bf4u: goto label_2c3bf4;
        case 0x2c3bf8u: goto label_2c3bf8;
        case 0x2c3bfcu: goto label_2c3bfc;
        case 0x2c3c00u: goto label_2c3c00;
        case 0x2c3c04u: goto label_2c3c04;
        case 0x2c3c08u: goto label_2c3c08;
        case 0x2c3c0cu: goto label_2c3c0c;
        case 0x2c3c10u: goto label_2c3c10;
        case 0x2c3c14u: goto label_2c3c14;
        case 0x2c3c18u: goto label_2c3c18;
        case 0x2c3c1cu: goto label_2c3c1c;
        case 0x2c3c20u: goto label_2c3c20;
        case 0x2c3c24u: goto label_2c3c24;
        case 0x2c3c28u: goto label_2c3c28;
        case 0x2c3c2cu: goto label_2c3c2c;
        case 0x2c3c30u: goto label_2c3c30;
        case 0x2c3c34u: goto label_2c3c34;
        case 0x2c3c38u: goto label_2c3c38;
        case 0x2c3c3cu: goto label_2c3c3c;
        case 0x2c3c40u: goto label_2c3c40;
        case 0x2c3c44u: goto label_2c3c44;
        case 0x2c3c48u: goto label_2c3c48;
        case 0x2c3c4cu: goto label_2c3c4c;
        case 0x2c3c50u: goto label_2c3c50;
        case 0x2c3c54u: goto label_2c3c54;
        case 0x2c3c58u: goto label_2c3c58;
        case 0x2c3c5cu: goto label_2c3c5c;
        default: return;
    }

label_2c3490:
    // 0x2c3490: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3490u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2c3494:
    // 0x2c3494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3498:
    // 0x2c3498: 0x3e8b807  srav        $s7, $t0, $ra
    ctx->pc = 0x2c3498u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c349c:
    // 0x2c349c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c349cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c34a0:
    // 0x2c34a0: 0x3e8c00c  .word       0x03E8C00C                   # syscall     768 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c34a0u;
    ctx->pc = 0x2C34A4u;
runtime->handleSyscall(rdram, ctx, 0xFA300u);
label_2c34a4:
    // 0x2c34a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c34a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c34a8:
    // 0x2c34a8: 0x3e8b011  .word       0x03E8B011                   # mthi        $ra # 0008B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c34a8u;
    ctx->hi = GPR_U64(ctx, 31);
label_2c34ac:
    // 0x2c34ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c34acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c34b0:
    // 0x2c34b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c34b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c34b4:
    // 0x2c34b4: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c34b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c34b8:
    // 0x2c34b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c34b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c34bc:
    // 0x2c34bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c34bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c34c0:
    // 0x2c34c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c34c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c34c4:
    // 0x2c34c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c34c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c34c8:
    // 0x2c34c8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c34c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2c34cc:
    // 0x2c34cc: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2c34ccu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2c34d0:
    // 0x2c34d0: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c34d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2c34d4:
    // 0x2c34d4: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2c34d4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2c34d8:
    // 0x2c34d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c34d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c34dc:
    // 0x2c34dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c34dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c34e0:
    // 0x2c34e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c34e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c34e4:
    // 0x2c34e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c34e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c34e8:
    // 0x2c34e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c34e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c34ec:
    // 0x2c34ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c34ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c34f0:
    // 0x2c34f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c34f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c34f4:
    // 0x2c34f4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c34f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2C34F4 raw=0x01E0E71E");
 /* MITIGATED */
label_2c34f8:
    // 0x2c34f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c34f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c34fc:
    // 0x2c34fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c34fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3500:
    // 0x2c3500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3504:
    // 0x2c3504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3508:
    // 0x2c3508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c350c:
    // 0x2c350c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c350cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3510:
    // 0x2c3510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3514:
    // 0x2c3514: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3514u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2c3518:
    // 0x2c3518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c351c:
    // 0x2c351c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c351cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2c3520:
    // 0x2c3520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3524:
    // 0x2c3524: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3524u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2c3528:
    // 0x2c3528: 0x3f804189  .word       0x3F804189                   # lui         $zero, 0x4189 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c3528u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)16777 << 16));
label_2c352c:
    // 0x2c352c: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2c352cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2c3530:
    // 0x2c3530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3534:
    // 0x2c3534: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3534u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c3538:
    // 0x2c3538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c353c:
    // 0x2c353c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c353cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2c3540:
    // 0x2c3540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3544:
    // 0x2c3544: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3544u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c3548:
    // 0x2c3548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c354c:
    // 0x2c354c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c354cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2c3550:
    // 0x2c3550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3554:
    // 0x2c3554: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3554u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2c3558:
    // 0x2c3558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c355c:
    // 0x2c355c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c355cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3560:
    // 0x2c3560: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3560u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2c3564:
    // 0x2c3564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3568:
    // 0x2c3568: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3568u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C3568 raw=0x03E8B805");
 /* MITIGATED */
label_2c356c:
    // 0x2c356c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c356cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3570:
    // 0x2c3570: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2c3570u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2c3574:
    // 0x2c3574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3578:
    // 0x2c3578: 0x3e8b00f  .word       0x03E8B00F                   # sync # 03E8B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3578u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2c357c:
    // 0x2c357c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c357cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3580:
    // 0x2c3580: 0x1f02ffd  .word       0x01F02FFD                   # INVALID     $t7, $s0, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3580u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3580 raw=0x01F02FFD");
 /* MITIGATED */
label_2c3584:
    // 0x2c3584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3588:
    // 0x2c3588: 0x1f12ffe  .word       0x01F12FFE                   # dsrl32      $a1, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) >> (32 + 31));
label_2c358c:
    // 0x2c358c: 0x400403  .word       0x00400403                   # sra         $zero, $zero, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c358cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 16));
label_2c3590:
    // 0x2c3590: 0x1f22fff  .word       0x01F22FFF                   # dsra32      $a1, $s2, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3590u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 31));
label_2c3594:
    // 0x2c3594: 0x400443  .word       0x00400443                   # sra         $zero, $zero, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3594u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 17));
label_2c3598:
    // 0x2c3598: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c3598u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2C3598 raw=0x437F0000");
 /* MITIGATED */
label_2c359c:
    // 0x2c359c: 0x80400483  lb          $zero, 0x483($v0)
    ctx->pc = 0x2c359cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1155)));
label_2c35a0:
    // 0x2c35a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c35a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c35a4:
    // 0x2c35a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c35a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c35a8:
    // 0x2c35a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c35a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c35ac:
    // 0x2c35ac: 0x1c584e8  .word       0x01C584E8                   # mfsa        $s0 # 01C504C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c35acu;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2c35b0:
    // 0x2c35b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c35b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c35b4:
    // 0x2c35b4: 0x1c58d28  .word       0x01C58D28                   # mfsa        $s1 # 01C50500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c35b4u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2c35b8:
    // 0x2c35b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c35b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c35bc:
    // 0x2c35bc: 0x1c59568  .word       0x01C59568                   # mfsa        $s2 # 01C50540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c35bcu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c35c0:
    // 0x2c35c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c35c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c35c4:
    // 0x2c35c4: 0x1c68428  .word       0x01C68428                   # mfsa        $s0 # 01C60400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c35c4u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2c35c8:
    // 0x2c35c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c35c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c35cc:
    // 0x2c35cc: 0x1c68c68  .word       0x01C68C68                   # mfsa        $s1 # 01C60440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c35ccu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2c35d0:
    // 0x2c35d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c35d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c35d4:
    // 0x2c35d4: 0x1c694a8  .word       0x01C694A8                   # mfsa        $s2 # 01C60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c35d4u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c35d8:
    // 0x2c35d8: 0x3e89803  .word       0x03E89803                   # sra         $s3, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c35d8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 8), 0));
label_2c35dc:
    // 0x2c35dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c35dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c35e0:
    // 0x2c35e0: 0x3e8a008  .word       0x03E8A008                   # jr          $ra # 0008A000 <InstrIdType: CPU_SPECIAL>
label_2c35e4:
    if (ctx->pc == 0x2C35E4u) {
        ctx->pc = 0x2C35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35E0u;
        // 0x2c35e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C35E8u;
        goto label_2c35e8;
    }
    ctx->pc = 0x2C35E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35E0u;
        // 0x2c35e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C35E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C35E8u;
label_2c35e8:
    // 0x2c35e8: 0x3e8a80d  break       1000, 672
    ctx->pc = 0x2c35e8u;
    runtime->handleBreak(rdram, ctx);
label_2c35ec:
    // 0x2c35ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c35ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c35f0:
    // 0x2c35f0: 0x3e89812  .word       0x03E89812                   # mflo        $s3 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c35f0u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_2c35f4:
    // 0x2c35f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c35f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c35f8:
    // 0x2c35f8: 0x3e88004  sllv        $s0, $t0, $ra
    ctx->pc = 0x2c35f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c35fc:
    // 0x2c35fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c35fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3600:
    // 0x2c3600: 0x3e88809  .word       0x03E88809                   # jalr        $s1, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2c3604:
    if (ctx->pc == 0x2C3604u) {
        ctx->pc = 0x2C3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3600u;
        // 0x2c3604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3608u;
        goto label_2c3608;
    }
    ctx->pc = 0x2C3600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 17, 0x2C3608u);
        ctx->pc = 0x2C3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3600u;
        // 0x2c3604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3600u, 0x2C3608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3608u;
label_2c3608:
    // 0x2c3608: 0x3e8900e  .word       0x03E8900E                   # INVALID     $ra, $t0, -0x6FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3608u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2C3608 raw=0x03E8900E");
 /* MITIGATED */
label_2c360c:
    // 0x2c360c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c360cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3610:
    // 0x2c3610: 0x3e88013  .word       0x03E88013                   # mtlo        $ra # 00088000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3610u;
    ctx->lo = GPR_U64(ctx, 31);
label_2c3614:
    // 0x2c3614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3618:
    // 0x2c3618: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2c361c:
    if (ctx->pc == 0x2C361Cu) {
        ctx->pc = 0x2C361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3618u;
        // 0x2c361c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3620u;
        goto label_2c3620;
    }
    ctx->pc = 0x2C3618u;
    {
        const bool branch_taken_0x2c3618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3618u;
        // 0x2c361c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3618) {
            ctx->pc = 0x2C361Cu;
            goto label_2c361c;
        }
    }
    ctx->pc = 0x2C3620u;
label_2c3620:
    // 0x2c3620: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2c3624:
    if (ctx->pc == 0x2C3624u) {
        ctx->pc = 0x2C3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3620u;
        // 0x2c3624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3628u;
        goto label_2c3628;
    }
    ctx->pc = 0x2C3620u;
    {
        const bool branch_taken_0x2c3620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3620u;
        // 0x2c3624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3620) {
            ctx->pc = 0x2C36A4u;
            goto label_2c36a4;
        }
    }
    ctx->pc = 0x2C3628u;
label_2c3628:
    // 0x2c3628: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2c362c:
    if (ctx->pc == 0x2C362Cu) {
        ctx->pc = 0x2C362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3628u;
        // 0x2c362c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3630u;
        goto label_2c3630;
    }
    ctx->pc = 0x2C3628u;
    {
        const bool branch_taken_0x2c3628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3628u;
        // 0x2c362c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3628) {
            ctx->pc = 0x2C3634u;
            goto label_2c3634;
        }
    }
    ctx->pc = 0x2C3630u;
label_2c3630:
    // 0x2c3630: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c3634:
    if (ctx->pc == 0x2C3634u) {
        ctx->pc = 0x2C3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3630u;
        // 0x2c3634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3638u;
        goto label_2c3638;
    }
    ctx->pc = 0x2C3630u;
    {
        const bool branch_taken_0x2c3630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3630u;
        // 0x2c3634: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3630) {
            ctx->pc = 0x2C367Cu;
            goto label_2c367c;
        }
    }
    ctx->pc = 0x2C3638u;
label_2c3638:
    // 0x2c3638: 0x10090038  beq         $zero, $t1, . + 4 + (0x38 << 2)
label_2c363c:
    if (ctx->pc == 0x2C363Cu) {
        ctx->pc = 0x2C363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3638u;
        // 0x2c363c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3640u;
        goto label_2c3640;
    }
    ctx->pc = 0x2C3638u;
    {
        const bool branch_taken_0x2c3638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3638u;
        // 0x2c363c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3638) {
            ctx->pc = 0x2C371Cu;
            goto label_2c371c;
        }
    }
    ctx->pc = 0x2C3640u;
label_2c3640:
    // 0x2c3640: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2c3644:
    if (ctx->pc == 0x2C3644u) {
        ctx->pc = 0x2C3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3640u;
        // 0x2c3644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3648u;
        goto label_2c3648;
    }
    ctx->pc = 0x2C3640u;
    {
        const bool branch_taken_0x2c3640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3640u;
        // 0x2c3644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3640) {
            ctx->pc = 0x2C3650u;
            goto label_2c3650;
        }
    }
    ctx->pc = 0x2C3648u;
label_2c3648:
    // 0x2c3648: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c364c:
    if (ctx->pc == 0x2C364Cu) {
        ctx->pc = 0x2C364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3648u;
        // 0x2c364c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3650u;
        goto label_2c3650;
    }
    ctx->pc = 0x2C3648u;
    {
        const bool branch_taken_0x2c3648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3648u;
        // 0x2c364c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3648) {
            ctx->pc = 0x2C364Cu;
            goto label_2c364c;
        }
    }
    ctx->pc = 0x2C3650u;
label_2c3650:
    // 0x2c3650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3654:
    // 0x2c3654: 0x1000747  .word       0x01000747                   # srav        $zero, $zero, $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3654u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c3658:
    // 0x2c3658: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c3658u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c365c:
    // 0x2c365c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c365cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3660:
    // 0x2c3660: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c3660u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3664:
    // 0x2c3664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3668:
    // 0x2c3668: 0x0  nop
    ctx->pc = 0x2c3668u;
    // NOP
label_2c366c:
    // 0x2c366c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2c366cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2c3670:
    // 0x2c3670: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c3670u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3674:
    // 0x2c3674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3678:
    // 0x2c3678: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c3678u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c367c:
    // 0x2c367c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c367cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3680:
    // 0x2c3680: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c3680u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3684:
    // 0x2c3684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3688:
    // 0x2c3688: 0x4202007d  .word       0x4202007D                   # INVALID     $s0, $v0, 0x7D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3688u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3D at 0x2C3688 raw=0x4202007D");
 /* MITIGATED */
label_2c368c:
    // 0x2c368c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c368cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3690:
    // 0x2c3690: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3690u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3694:
    // 0x2c3694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3698:
    // 0x2c3698: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c369c:
    if (ctx->pc == 0x2C369Cu) {
        ctx->pc = 0x2C369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3698u;
        // 0x2c369c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36A0u;
        goto label_2c36a0;
    }
    ctx->pc = 0x2C3698u;
    {
        const bool branch_taken_0x2c3698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3698u;
        // 0x2c369c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3698) {
            ctx->pc = 0x2D76A0u;
            return;
        }
    }
    ctx->pc = 0x2C36A0u;
label_2c36a0:
    // 0x2c36a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c36a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c36a4:
    // 0x2c36a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c36a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c36a8:
    // 0x2c36a8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c36ac:
    if (ctx->pc == 0x2C36ACu) {
        ctx->pc = 0x2C36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36A8u;
        // 0x2c36ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36B0u;
        goto label_2c36b0;
    }
    ctx->pc = 0x2C36A8u;
    {
        const bool branch_taken_0x2c36a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c36a8) {
            ctx->pc = 0x2C36ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36A8u;
            // 0x2c36ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5698u;
            { ctx->pc = 0x2c5698; return; }
        }
    }
    ctx->pc = 0x2C36B0u;
label_2c36b0:
    // 0x2c36b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c36b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c36b4:
    // 0x2c36b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c36b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c36b8:
    // 0x2c36b8: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c36bc:
    if (ctx->pc == 0x2C36BCu) {
        ctx->pc = 0x2C36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36B8u;
        // 0x2c36bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36C0u;
        goto label_2c36c0;
    }
    ctx->pc = 0x2C36B8u;
    {
        const bool branch_taken_0x2c36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36B8u;
        // 0x2c36bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36b8) {
            ctx->pc = 0x2C379Cu;
            goto label_2c379c;
        }
    }
    ctx->pc = 0x2C36C0u;
label_2c36c0:
    // 0x2c36c0: 0x4202006a  .word       0x4202006A                   # INVALID     $s0, $v0, 0x6A # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c36c0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2A at 0x2C36C0 raw=0x4202006A");
 /* MITIGATED */
label_2c36c4:
    // 0x2c36c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c36c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c36c8:
    // 0x2c36c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c36c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c36cc:
    // 0x2c36cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c36ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c36d0:
    // 0x2c36d0: 0x500b0066  beql        $zero, $t3, . + 4 + (0x66 << 2)
label_2c36d4:
    if (ctx->pc == 0x2C36D4u) {
        ctx->pc = 0x2C36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36D0u;
        // 0x2c36d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36D8u;
        goto label_2c36d8;
    }
    ctx->pc = 0x2C36D0u;
    {
        const bool branch_taken_0x2c36d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c36d0) {
            ctx->pc = 0x2C36D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C36D0u;
            // 0x2c36d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C386Cu;
            goto label_2c386c;
        }
    }
    ctx->pc = 0x2C36D8u;
label_2c36d8:
    // 0x2c36d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c36d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c36dc:
    // 0x2c36dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c36dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c36e0:
    // 0x2c36e0: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2c36e4:
    if (ctx->pc == 0x2C36E4u) {
        ctx->pc = 0x2C36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36E0u;
        // 0x2c36e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36E8u;
        goto label_2c36e8;
    }
    ctx->pc = 0x2C36E0u;
    {
        const bool branch_taken_0x2c36e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36E0u;
        // 0x2c36e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36e0) {
            ctx->pc = 0x2C38E4u;
            goto label_2c38e4;
        }
    }
    ctx->pc = 0x2C36E8u;
label_2c36e8:
    // 0x2c36e8: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2c36ec:
    if (ctx->pc == 0x2C36ECu) {
        ctx->pc = 0x2C36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36E8u;
        // 0x2c36ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36F0u;
        goto label_2c36f0;
    }
    ctx->pc = 0x2C36E8u;
    {
        const bool branch_taken_0x2c36e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36E8u;
        // 0x2c36ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36e8) {
            ctx->pc = 0x2C36F4u;
            goto label_2c36f4;
        }
    }
    ctx->pc = 0x2C36F0u;
label_2c36f0:
    // 0x2c36f0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2c36f4:
    if (ctx->pc == 0x2C36F4u) {
        ctx->pc = 0x2C36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36F0u;
        // 0x2c36f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36F8u;
        goto label_2c36f8;
    }
    ctx->pc = 0x2C36F0u;
    {
        const bool branch_taken_0x2c36f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C36F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36F0u;
        // 0x2c36f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36f0) {
            ctx->pc = 0x2C36F4u;
            goto label_2c36f4;
        }
    }
    ctx->pc = 0x2C36F8u;
label_2c36f8:
    // 0x2c36f8: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c36fc:
    if (ctx->pc == 0x2C36FCu) {
        ctx->pc = 0x2C36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36F8u;
        // 0x2c36fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3700u;
        goto label_2c3700;
    }
    ctx->pc = 0x2C36F8u;
    {
        const bool branch_taken_0x2c36f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36F8u;
        // 0x2c36fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36f8) {
            ctx->pc = 0x2C37DCu;
            goto label_2c37dc;
        }
    }
    ctx->pc = 0x2C3700u;
label_2c3700:
    // 0x2c3700: 0x10090012  beq         $zero, $t1, . + 4 + (0x12 << 2)
label_2c3704:
    if (ctx->pc == 0x2C3704u) {
        ctx->pc = 0x2C3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3700u;
        // 0x2c3704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3708u;
        goto label_2c3708;
    }
    ctx->pc = 0x2C3700u;
    {
        const bool branch_taken_0x2c3700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C3704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3700u;
        // 0x2c3704: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3700) {
            ctx->pc = 0x2C374Cu;
            goto label_2c374c;
        }
    }
    ctx->pc = 0x2C3708u;
label_2c3708:
    // 0x2c3708: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c3708u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c370c:
    // 0x2c370c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c370cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3710:
    // 0x2c3710: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c3714:
    if (ctx->pc == 0x2C3714u) {
        ctx->pc = 0x2C3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3710u;
        // 0x2c3714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3718u;
        goto label_2c3718;
    }
    ctx->pc = 0x2C3710u;
    {
        const bool branch_taken_0x2c3710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3710u;
        // 0x2c3714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3710) {
            ctx->pc = 0x2C3714u;
            goto label_2c3714;
        }
    }
    ctx->pc = 0x2C3718u;
label_2c3718:
    // 0x2c3718: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3718u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c371c:
    // 0x2c371c: 0x1000747  .word       0x01000747                   # srav        $zero, $zero, $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c371cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c3720:
    // 0x2c3720: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c3720u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3724:
    // 0x2c3724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3728:
    // 0x2c3728: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c3728u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c372c:
    // 0x2c372c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c372cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3730:
    // 0x2c3730: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c3730u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3734:
    // 0x2c3734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3738:
    // 0x2c3738: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c3738u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c373c:
    // 0x2c373c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c373cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3740:
    // 0x2c3740: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c3740u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3744:
    // 0x2c3744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3748:
    // 0x2c3748: 0x42020065  .word       0x42020065                   # INVALID     $s0, $v0, 0x65 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3748u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x25 at 0x2C3748 raw=0x42020065");
 /* MITIGATED */
label_2c374c:
    // 0x2c374c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c374cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3750:
    // 0x2c3750: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3750u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3754:
    // 0x2c3754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3758:
    // 0x2c3758: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c375c:
    if (ctx->pc == 0x2C375Cu) {
        ctx->pc = 0x2C375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3758u;
        // 0x2c375c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3760u;
        goto label_2c3760;
    }
    ctx->pc = 0x2C3758u;
    {
        const bool branch_taken_0x2c3758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3758u;
        // 0x2c375c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3758) {
            ctx->pc = 0x2D7760u;
            return;
        }
    }
    ctx->pc = 0x2C3760u;
label_2c3760:
    // 0x2c3760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3764:
    // 0x2c3764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3768:
    // 0x2c3768: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c376c:
    if (ctx->pc == 0x2C376Cu) {
        ctx->pc = 0x2C376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3768u;
        // 0x2c376c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3770u;
        goto label_2c3770;
    }
    ctx->pc = 0x2C3768u;
    {
        const bool branch_taken_0x2c3768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c3768) {
            ctx->pc = 0x2C376Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3768u;
            // 0x2c376c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5758u;
            { ctx->pc = 0x2c5758; return; }
        }
    }
    ctx->pc = 0x2C3770u;
label_2c3770:
    // 0x2c3770: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3770u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3774:
    // 0x2c3774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3778:
    // 0x2c3778: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c377c:
    if (ctx->pc == 0x2C377Cu) {
        ctx->pc = 0x2C377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3778u;
        // 0x2c377c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3780u;
        goto label_2c3780;
    }
    ctx->pc = 0x2C3778u;
    {
        const bool branch_taken_0x2c3778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3778u;
        // 0x2c377c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3778) {
            ctx->pc = 0x2C37C4u;
            goto label_2c37c4;
        }
    }
    ctx->pc = 0x2C3780u;
label_2c3780:
    // 0x2c3780: 0x42020052  .word       0x42020052                   # INVALID     $s0, $v0, 0x52 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3780u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x12 at 0x2C3780 raw=0x42020052");
 /* MITIGATED */
label_2c3784:
    // 0x2c3784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3788:
    // 0x2c3788: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3788u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c378c:
    // 0x2c378c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c378cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3790:
    // 0x2c3790: 0x500b004e  beql        $zero, $t3, . + 4 + (0x4E << 2)
label_2c3794:
    if (ctx->pc == 0x2C3794u) {
        ctx->pc = 0x2C3794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3790u;
        // 0x2c3794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3798u;
        goto label_2c3798;
    }
    ctx->pc = 0x2C3790u;
    {
        const bool branch_taken_0x2c3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c3790) {
            ctx->pc = 0x2C3794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3790u;
            // 0x2c3794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38CCu;
            goto label_2c38cc;
        }
    }
    ctx->pc = 0x2C3798u;
label_2c3798:
    // 0x2c3798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c379c:
    // 0x2c379c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c379cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c37a0:
    // 0x2c37a0: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2c37a4:
    if (ctx->pc == 0x2C37A4u) {
        ctx->pc = 0x2C37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A0u;
        // 0x2c37a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37A8u;
        goto label_2c37a8;
    }
    ctx->pc = 0x2C37A0u;
    {
        const bool branch_taken_0x2c37a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A0u;
        // 0x2c37a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37a0) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C37A8u;
label_2c37a8:
    // 0x2c37a8: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2c37ac:
    if (ctx->pc == 0x2C37ACu) {
        ctx->pc = 0x2C37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A8u;
        // 0x2c37ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37B0u;
        goto label_2c37b0;
    }
    ctx->pc = 0x2C37A8u;
    {
        const bool branch_taken_0x2c37a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A8u;
        // 0x2c37ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37a8) {
            ctx->pc = 0x2C37B0u;
            goto label_2c37b0;
        }
    }
    ctx->pc = 0x2C37B0u;
label_2c37b0:
    // 0x2c37b0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2c37b4:
    if (ctx->pc == 0x2C37B4u) {
        ctx->pc = 0x2C37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37B0u;
        // 0x2c37b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37B8u;
        goto label_2c37b8;
    }
    ctx->pc = 0x2C37B0u;
    {
        const bool branch_taken_0x2c37b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37B0u;
        // 0x2c37b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37b0) {
            ctx->pc = 0x2C37B4u;
            goto label_2c37b4;
        }
    }
    ctx->pc = 0x2C37B8u;
label_2c37b8:
    // 0x2c37b8: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c37bc:
    if (ctx->pc == 0x2C37BCu) {
        ctx->pc = 0x2C37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37B8u;
        // 0x2c37bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37C0u;
        goto label_2c37c0;
    }
    ctx->pc = 0x2C37B8u;
    {
        const bool branch_taken_0x2c37b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37B8u;
        // 0x2c37bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37b8) {
            ctx->pc = 0x2C3804u;
            goto label_2c3804;
        }
    }
    ctx->pc = 0x2C37C0u;
label_2c37c0:
    // 0x2c37c0: 0x10090038  beq         $zero, $t1, . + 4 + (0x38 << 2)
label_2c37c4:
    if (ctx->pc == 0x2C37C4u) {
        ctx->pc = 0x2C37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37C0u;
        // 0x2c37c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37C8u;
        goto label_2c37c8;
    }
    ctx->pc = 0x2C37C0u;
    {
        const bool branch_taken_0x2c37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37C0u;
        // 0x2c37c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37c0) {
            ctx->pc = 0x2C38A4u;
            goto label_2c38a4;
        }
    }
    ctx->pc = 0x2C37C8u;
label_2c37c8:
    // 0x2c37c8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c37c8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c37cc:
    // 0x2c37cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c37ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c37d0:
    // 0x2c37d0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c37d4:
    if (ctx->pc == 0x2C37D4u) {
        ctx->pc = 0x2C37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37D0u;
        // 0x2c37d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37D8u;
        goto label_2c37d8;
    }
    ctx->pc = 0x2C37D0u;
    {
        const bool branch_taken_0x2c37d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37D0u;
        // 0x2c37d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37d0) {
            ctx->pc = 0x2C37D4u;
            goto label_2c37d4;
        }
    }
    ctx->pc = 0x2C37D8u;
label_2c37d8:
    // 0x2c37d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c37d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c37dc:
    // 0x2c37dc: 0x1000743  .word       0x01000743                   # sra         $zero, $zero, 29 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c37dcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 29));
label_2c37e0:
    // 0x2c37e0: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c37e0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c37e4:
    // 0x2c37e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c37e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c37e8:
    // 0x2c37e8: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c37e8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c37ec:
    // 0x2c37ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c37ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c37f0:
    // 0x2c37f0: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c37f0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c37f4:
    // 0x2c37f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c37f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c37f8:
    // 0x2c37f8: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c37f8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c37fc:
    // 0x2c37fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c37fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3800:
    // 0x2c3800: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c3800u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3804:
    // 0x2c3804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3808:
    // 0x2c3808: 0x4202004d  .word       0x4202004D                   # INVALID     $s0, $v0, 0x4D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3808u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xD at 0x2C3808 raw=0x4202004D");
 /* MITIGATED */
label_2c380c:
    // 0x2c380c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c380cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3810:
    // 0x2c3810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3814:
    // 0x2c3814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3818:
    // 0x2c3818: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c381c:
    if (ctx->pc == 0x2C381Cu) {
        ctx->pc = 0x2C381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3818u;
        // 0x2c381c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3820u;
        goto label_2c3820;
    }
    ctx->pc = 0x2C3818u;
    {
        const bool branch_taken_0x2c3818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3818u;
        // 0x2c381c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3818) {
            ctx->pc = 0x2D7820u;
            return;
        }
    }
    ctx->pc = 0x2C3820u;
label_2c3820:
    // 0x2c3820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3824:
    // 0x2c3824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3828:
    // 0x2c3828: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c382c:
    if (ctx->pc == 0x2C382Cu) {
        ctx->pc = 0x2C382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3828u;
        // 0x2c382c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3830u;
        goto label_2c3830;
    }
    ctx->pc = 0x2C3828u;
    {
        const bool branch_taken_0x2c3828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c3828) {
            ctx->pc = 0x2C382Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3828u;
            // 0x2c382c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5818u;
            { ctx->pc = 0x2c5818; return; }
        }
    }
    ctx->pc = 0x2C3830u;
label_2c3830:
    // 0x2c3830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3834:
    // 0x2c3834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3838:
    // 0x2c3838: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c383c:
    if (ctx->pc == 0x2C383Cu) {
        ctx->pc = 0x2C383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3838u;
        // 0x2c383c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3840u;
        goto label_2c3840;
    }
    ctx->pc = 0x2C3838u;
    {
        const bool branch_taken_0x2c3838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3838u;
        // 0x2c383c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3838) {
            ctx->pc = 0x2C391Cu;
            goto label_2c391c;
        }
    }
    ctx->pc = 0x2C3840u;
label_2c3840:
    // 0x2c3840: 0x4202003a  .word       0x4202003A                   # INVALID     $s0, $v0, 0x3A # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3840u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3A at 0x2C3840 raw=0x4202003A");
 /* MITIGATED */
label_2c3844:
    // 0x2c3844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3848:
    // 0x2c3848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c384c:
    // 0x2c384c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c384cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3850:
    // 0x2c3850: 0x500b0036  beql        $zero, $t3, . + 4 + (0x36 << 2)
label_2c3854:
    if (ctx->pc == 0x2C3854u) {
        ctx->pc = 0x2C3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3850u;
        // 0x2c3854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3858u;
        goto label_2c3858;
    }
    ctx->pc = 0x2C3850u;
    {
        const bool branch_taken_0x2c3850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c3850) {
            ctx->pc = 0x2C3854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3850u;
            // 0x2c3854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C392Cu;
            goto label_2c392c;
        }
    }
    ctx->pc = 0x2C3858u;
label_2c3858:
    // 0x2c3858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c385c:
    // 0x2c385c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c385cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3860:
    // 0x2c3860: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2c3864:
    if (ctx->pc == 0x2C3864u) {
        ctx->pc = 0x2C3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3860u;
        // 0x2c3864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3868u;
        goto label_2c3868;
    }
    ctx->pc = 0x2C3860u;
    {
        const bool branch_taken_0x2c3860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3860u;
        // 0x2c3864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3860) {
            ctx->pc = 0x2C4064u;
            { ctx->pc = 0x2c4064; return; }
        }
    }
    ctx->pc = 0x2C3868u;
label_2c3868:
    // 0x2c3868: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2c386c:
    if (ctx->pc == 0x2C386Cu) {
        ctx->pc = 0x2C386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3868u;
        // 0x2c386c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3870u;
        goto label_2c3870;
    }
    ctx->pc = 0x2C3868u;
    {
        const bool branch_taken_0x2c3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3868u;
        // 0x2c386c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3868) {
            ctx->pc = 0x2C388Cu;
            goto label_2c388c;
        }
    }
    ctx->pc = 0x2C3870u;
label_2c3870:
    // 0x2c3870: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2c3874:
    if (ctx->pc == 0x2C3874u) {
        ctx->pc = 0x2C3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3870u;
        // 0x2c3874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3878u;
        goto label_2c3878;
    }
    ctx->pc = 0x2C3870u;
    {
        const bool branch_taken_0x2c3870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3870u;
        // 0x2c3874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3870) {
            ctx->pc = 0x2C3878u;
            goto label_2c3878;
        }
    }
    ctx->pc = 0x2C3878u;
label_2c3878:
    // 0x2c3878: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c387c:
    if (ctx->pc == 0x2C387Cu) {
        ctx->pc = 0x2C387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3878u;
        // 0x2c387c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3880u;
        goto label_2c3880;
    }
    ctx->pc = 0x2C3878u;
    {
        const bool branch_taken_0x2c3878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3878u;
        // 0x2c387c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3878) {
            ctx->pc = 0x2C395Cu;
            goto label_2c395c;
        }
    }
    ctx->pc = 0x2C3880u;
label_2c3880:
    // 0x2c3880: 0x10090012  beq         $zero, $t1, . + 4 + (0x12 << 2)
label_2c3884:
    if (ctx->pc == 0x2C3884u) {
        ctx->pc = 0x2C3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3880u;
        // 0x2c3884: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3888u;
        goto label_2c3888;
    }
    ctx->pc = 0x2C3880u;
    {
        const bool branch_taken_0x2c3880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3880u;
        // 0x2c3884: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3880) {
            ctx->pc = 0x2C38CCu;
            goto label_2c38cc;
        }
    }
    ctx->pc = 0x2C3888u;
label_2c3888:
    // 0x2c3888: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c3888u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c388c:
    // 0x2c388c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c388cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3890:
    // 0x2c3890: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c3894:
    if (ctx->pc == 0x2C3894u) {
        ctx->pc = 0x2C3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3890u;
        // 0x2c3894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3898u;
        goto label_2c3898;
    }
    ctx->pc = 0x2C3890u;
    {
        const bool branch_taken_0x2c3890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3890u;
        // 0x2c3894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3890) {
            ctx->pc = 0x2C3894u;
            goto label_2c3894;
        }
    }
    ctx->pc = 0x2C3898u;
label_2c3898:
    // 0x2c3898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c389c:
    // 0x2c389c: 0x1000747  .word       0x01000747                   # srav        $zero, $zero, $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c389cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c38a0:
    // 0x2c38a0: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c38a0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c38a4:
    // 0x2c38a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38a8:
    // 0x2c38a8: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c38a8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c38ac:
    // 0x2c38ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38b0:
    // 0x2c38b0: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c38b0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c38b4:
    // 0x2c38b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38b8:
    // 0x2c38b8: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c38b8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c38bc:
    // 0x2c38bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38c0:
    // 0x2c38c0: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c38c0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c38c4:
    // 0x2c38c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38c8:
    // 0x2c38c8: 0x42020035  .word       0x42020035                   # INVALID     $s0, $v0, 0x35 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c38c8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x35 at 0x2C38C8 raw=0x42020035");
 /* MITIGATED */
label_2c38cc:
    // 0x2c38cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38d0:
    // 0x2c38d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c38d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c38d4:
    // 0x2c38d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38d8:
    // 0x2c38d8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c38dc:
    if (ctx->pc == 0x2C38DCu) {
        ctx->pc = 0x2C38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38D8u;
        // 0x2c38dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C38E0u;
        goto label_2c38e0;
    }
    ctx->pc = 0x2C38D8u;
    {
        const bool branch_taken_0x2c38d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38D8u;
        // 0x2c38dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38d8) {
            ctx->pc = 0x2D78E0u;
            return;
        }
    }
    ctx->pc = 0x2C38E0u;
label_2c38e0:
    // 0x2c38e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c38e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c38e4:
    // 0x2c38e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38e8:
    // 0x2c38e8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c38ec:
    if (ctx->pc == 0x2C38ECu) {
        ctx->pc = 0x2C38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38E8u;
        // 0x2c38ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C38F0u;
        goto label_2c38f0;
    }
    ctx->pc = 0x2C38E8u;
    {
        const bool branch_taken_0x2c38e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c38e8) {
            ctx->pc = 0x2C38ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C38E8u;
            // 0x2c38ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C58D8u;
            { ctx->pc = 0x2c58d8; return; }
        }
    }
    ctx->pc = 0x2C38F0u;
label_2c38f0:
    // 0x2c38f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c38f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c38f4:
    // 0x2c38f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c38f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c38f8:
    // 0x2c38f8: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c38fc:
    if (ctx->pc == 0x2C38FCu) {
        ctx->pc = 0x2C38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38F8u;
        // 0x2c38fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3900u;
        goto label_2c3900;
    }
    ctx->pc = 0x2C38F8u;
    {
        const bool branch_taken_0x2c38f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38F8u;
        // 0x2c38fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38f8) {
            ctx->pc = 0x2C3944u;
            goto label_2c3944;
        }
    }
    ctx->pc = 0x2C3900u;
label_2c3900:
    // 0x2c3900: 0x42020022  .word       0x42020022                   # INVALID     $s0, $v0, 0x22 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3900u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x22 at 0x2C3900 raw=0x42020022");
 /* MITIGATED */
label_2c3904:
    // 0x2c3904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3908:
    // 0x2c3908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c390c:
    // 0x2c390c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c390cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3910:
    // 0x2c3910: 0x500b001e  beql        $zero, $t3, . + 4 + (0x1E << 2)
label_2c3914:
    if (ctx->pc == 0x2C3914u) {
        ctx->pc = 0x2C3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3910u;
        // 0x2c3914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3918u;
        goto label_2c3918;
    }
    ctx->pc = 0x2C3910u;
    {
        const bool branch_taken_0x2c3910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c3910) {
            ctx->pc = 0x2C3914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3910u;
            // 0x2c3914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C398Cu;
            goto label_2c398c;
        }
    }
    ctx->pc = 0x2C3918u;
label_2c3918:
    // 0x2c3918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c391c:
    // 0x2c391c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c391cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3920:
    // 0x2c3920: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2c3924:
    if (ctx->pc == 0x2C3924u) {
        ctx->pc = 0x2C3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3920u;
        // 0x2c3924: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3928u;
        goto label_2c3928;
    }
    ctx->pc = 0x2C3920u;
    {
        const bool branch_taken_0x2c3920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3920u;
        // 0x2c3924: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3920) {
            ctx->pc = 0x2C3D24u;
            { ctx->pc = 0x2c3d24; return; }
        }
    }
    ctx->pc = 0x2C3928u;
label_2c3928:
    // 0x2c3928: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2c392c:
    if (ctx->pc == 0x2C392Cu) {
        ctx->pc = 0x2C392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3928u;
        // 0x2c392c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3930u;
        goto label_2c3930;
    }
    ctx->pc = 0x2C3928u;
    {
        const bool branch_taken_0x2c3928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3928u;
        // 0x2c392c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3928) {
            ctx->pc = 0x2C393Cu;
            goto label_2c393c;
        }
    }
    ctx->pc = 0x2C3930u;
label_2c3930:
    // 0x2c3930: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2c3934:
    if (ctx->pc == 0x2C3934u) {
        ctx->pc = 0x2C3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3930u;
        // 0x2c3934: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3938u;
        goto label_2c3938;
    }
    ctx->pc = 0x2C3930u;
    {
        const bool branch_taken_0x2c3930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3930u;
        // 0x2c3934: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3930) {
            ctx->pc = 0x2C3938u;
            goto label_2c3938;
        }
    }
    ctx->pc = 0x2C3938u;
label_2c3938:
    // 0x2c3938: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c393c:
    if (ctx->pc == 0x2C393Cu) {
        ctx->pc = 0x2C393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3938u;
        // 0x2c393c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3940u;
        goto label_2c3940;
    }
    ctx->pc = 0x2C3938u;
    {
        const bool branch_taken_0x2c3938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3938u;
        // 0x2c393c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3938) {
            ctx->pc = 0x2C3984u;
            goto label_2c3984;
        }
    }
    ctx->pc = 0x2C3940u;
label_2c3940:
    // 0x2c3940: 0x10090038  beq         $zero, $t1, . + 4 + (0x38 << 2)
label_2c3944:
    if (ctx->pc == 0x2C3944u) {
        ctx->pc = 0x2C3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3940u;
        // 0x2c3944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3948u;
        goto label_2c3948;
    }
    ctx->pc = 0x2C3940u;
    {
        const bool branch_taken_0x2c3940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C3944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3940u;
        // 0x2c3944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3940) {
            ctx->pc = 0x2C3A24u;
            goto label_2c3a24;
        }
    }
    ctx->pc = 0x2C3948u;
label_2c3948:
    // 0x2c3948: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c3948u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c394c:
    // 0x2c394c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c394cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3950:
    // 0x2c3950: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c3954:
    if (ctx->pc == 0x2C3954u) {
        ctx->pc = 0x2C3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3950u;
        // 0x2c3954: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3958u;
        goto label_2c3958;
    }
    ctx->pc = 0x2C3950u;
    {
        const bool branch_taken_0x2c3950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3950u;
        // 0x2c3954: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3950) {
            ctx->pc = 0x2C3954u;
            goto label_2c3954;
        }
    }
    ctx->pc = 0x2C3958u;
label_2c3958:
    // 0x2c3958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c395c:
    // 0x2c395c: 0x1000743  .word       0x01000743                   # sra         $zero, $zero, 29 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c395cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 29));
label_2c3960:
    // 0x2c3960: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c3960u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3964:
    // 0x2c3964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3968:
    // 0x2c3968: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c3968u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c396c:
    // 0x2c396c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c396cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3970:
    // 0x2c3970: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c3970u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3974:
    // 0x2c3974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3978:
    // 0x2c3978: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c3978u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c397c:
    // 0x2c397c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c397cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3980:
    // 0x2c3980: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c3980u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3984:
    // 0x2c3984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3988:
    // 0x2c3988: 0x4202001d  .word       0x4202001D                   # INVALID     $s0, $v0, 0x1D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3988u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x2C3988 raw=0x4202001D");
 /* MITIGATED */
label_2c398c:
    // 0x2c398c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c398cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3990:
    // 0x2c3990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3994:
    // 0x2c3994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3998:
    // 0x2c3998: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c399c:
    if (ctx->pc == 0x2C399Cu) {
        ctx->pc = 0x2C399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3998u;
        // 0x2c399c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C39A0u;
        goto label_2c39a0;
    }
    ctx->pc = 0x2C3998u;
    {
        const bool branch_taken_0x2c3998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3998u;
        // 0x2c399c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3998) {
            ctx->pc = 0x2D79A0u;
            return;
        }
    }
    ctx->pc = 0x2C39A0u;
label_2c39a0:
    // 0x2c39a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c39a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c39a4:
    // 0x2c39a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c39a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c39a8:
    // 0x2c39a8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c39ac:
    if (ctx->pc == 0x2C39ACu) {
        ctx->pc = 0x2C39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39A8u;
        // 0x2c39ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C39B0u;
        goto label_2c39b0;
    }
    ctx->pc = 0x2C39A8u;
    {
        const bool branch_taken_0x2c39a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c39a8) {
            ctx->pc = 0x2C39ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C39A8u;
            // 0x2c39ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5998u;
            { ctx->pc = 0x2c5998; return; }
        }
    }
    ctx->pc = 0x2C39B0u;
label_2c39b0:
    // 0x2c39b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c39b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c39b4:
    // 0x2c39b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c39b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c39b8:
    // 0x2c39b8: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c39bc:
    if (ctx->pc == 0x2C39BCu) {
        ctx->pc = 0x2C39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39B8u;
        // 0x2c39bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C39C0u;
        goto label_2c39c0;
    }
    ctx->pc = 0x2C39B8u;
    {
        const bool branch_taken_0x2c39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39B8u;
        // 0x2c39bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39b8) {
            ctx->pc = 0x2C3A9Cu;
            goto label_2c3a9c;
        }
    }
    ctx->pc = 0x2C39C0u;
label_2c39c0:
    // 0x2c39c0: 0x4202000a  .word       0x4202000A                   # INVALID     $s0, $v0, 0xA # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c39c0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xA at 0x2C39C0 raw=0x4202000A");
 /* MITIGATED */
label_2c39c4:
    // 0x2c39c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c39c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c39c8:
    // 0x2c39c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c39c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c39cc:
    // 0x2c39cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c39ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c39d0:
    // 0x2c39d0: 0x500b0006  beql        $zero, $t3, . + 4 + (0x6 << 2)
label_2c39d4:
    if (ctx->pc == 0x2C39D4u) {
        ctx->pc = 0x2C39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39D0u;
        // 0x2c39d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C39D8u;
        goto label_2c39d8;
    }
    ctx->pc = 0x2C39D0u;
    {
        const bool branch_taken_0x2c39d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c39d0) {
            ctx->pc = 0x2C39D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C39D0u;
            // 0x2c39d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C39ECu;
            goto label_2c39ec;
        }
    }
    ctx->pc = 0x2C39D8u;
label_2c39d8:
    // 0x2c39d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c39d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c39dc:
    // 0x2c39dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c39dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c39e0:
    // 0x2c39e0: 0x10030038  beq         $zero, $v1, . + 4 + (0x38 << 2)
label_2c39e4:
    if (ctx->pc == 0x2C39E4u) {
        ctx->pc = 0x2C39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39E0u;
        // 0x2c39e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C39E8u;
        goto label_2c39e8;
    }
    ctx->pc = 0x2C39E0u;
    {
        const bool branch_taken_0x2c39e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39E0u;
        // 0x2c39e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39e0) {
            ctx->pc = 0x2C3AC4u;
            goto label_2c3ac4;
        }
    }
    ctx->pc = 0x2C39E8u;
label_2c39e8:
    // 0x2c39e8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c39e8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c39ec:
    // 0x2c39ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c39ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c39f0:
    // 0x2c39f0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c39f4:
    if (ctx->pc == 0x2C39F4u) {
        ctx->pc = 0x2C39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39F0u;
        // 0x2c39f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C39F8u;
        goto label_2c39f8;
    }
    ctx->pc = 0x2C39F0u;
    {
        const bool branch_taken_0x2c39f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39F0u;
        // 0x2c39f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39f0) {
            ctx->pc = 0x2C39F4u;
            goto label_2c39f4;
        }
    }
    ctx->pc = 0x2C39F8u;
label_2c39f8:
    // 0x2c39f8: 0x42010075  .word       0x42010075                   # INVALID     $s0, $at, 0x75 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c39f8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x35 at 0x2C39F8 raw=0x42010075");
 /* MITIGATED */
label_2c39fc:
    // 0x2c39fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c39fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a00:
    // 0x2c3a00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3a00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3a04:
    // 0x2c3a04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a08:
    // 0x2c3a08: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c3a08u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C3A08 raw=0x48007800");
 /* MITIGATED */
label_2c3a0c:
    // 0x2c3a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a10:
    // 0x2c3a10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3a10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3a14:
    // 0x2c3a14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a18:
    // 0x2c3a18: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3a18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2c3a1c:
    // 0x2c3a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a20:
    // 0x2c3a20: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3a20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C3A20 raw=0x01F64001");
 /* MITIGATED */
label_2c3a24:
    // 0x2c3a24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a28:
    // 0x2c3a28: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3a28u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2c3a2c:
    // 0x2c3a2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a30:
    // 0x2c3a30: 0x1f84003  .word       0x01F84003                   # sra         $t0, $t8, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3a30u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 0));
label_2c3a34:
    // 0x2c3a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a38:
    // 0x2c3a38: 0x1f94004  sllv        $t0, $t9, $t7
    ctx->pc = 0x2c3a38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2c3a3c:
    // 0x2c3a3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a40:
    // 0x2c3a40: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2c3a40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2c3a44:
    // 0x2c3a44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a48:
    // 0x2c3a48: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2c3a48u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2c3a4c:
    // 0x2c3a4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a50:
    // 0x2c3a50: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2c3a50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2c3a54:
    // 0x2c3a54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a58:
    // 0x2c3a58: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2c3a58u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2c3a5c:
    // 0x2c3a5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a60:
    // 0x2c3a60: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2c3a60u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2c3a64:
    // 0x2c3a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a68:
    // 0x2c3a68: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c3a68u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C3A68 raw=0x48001000");
 /* MITIGATED */
label_2c3a6c:
    // 0x2c3a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a70:
    // 0x2c3a70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3a70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3a74:
    // 0x2c3a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3a78:
    // 0x2c3a78: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c3a78u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3a7c:
    // 0x2c3a7c: 0x1e9fce8  .word       0x01E9FCE8                   # mfsa        $ra # 01E904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3a7cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c3a80:
    // 0x2c3a80: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c3a80u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3a84:
    // 0x2c3a84: 0x1eafd28  .word       0x01EAFD28                   # mfsa        $ra # 01EA0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3a84u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c3a88:
    // 0x2c3a88: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c3a88u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3a8c:
    // 0x2c3a8c: 0x1f0fd68  .word       0x01F0FD68                   # mfsa        $ra # 01F00540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3a8cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c3a90:
    // 0x2c3a90: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c3a90u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3a94:
    // 0x2c3a94: 0x1f1fda8  .word       0x01F1FDA8                   # mfsa        $ra # 01F10580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3a94u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c3a98:
    // 0x2c3a98: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c3a98u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c3a9c:
    // 0x2c3a9c: 0x1f2fde8  .word       0x01F2FDE8                   # mfsa        $ra # 01F205C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3a9cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c3aa0:
    // 0x2c3aa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3aa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3aa4:
    // 0x2c3aa4: 0x1d399ff  .word       0x01D399FF                   # dsra32      $s3, $s3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3aa4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 7));
label_2c3aa8:
    // 0x2c3aa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3aa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3aac:
    // 0x2c3aac: 0x1c949ff  .word       0x01C949FF                   # dsra32      $t1, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3aacu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 7));
label_2c3ab0:
    // 0x2c3ab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3ab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3ab4:
    // 0x2c3ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ab8:
    // 0x2c3ab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3ab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3abc:
    // 0x2c3abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ac0:
    // 0x2c3ac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3ac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3ac4:
    // 0x2c3ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ac8:
    // 0x2c3ac8: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2c3ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2c3acc:
    // 0x2c3acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ad0:
    // 0x2c3ad0: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2c3ad0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2c3ad4:
    // 0x2c3ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ad8:
    // 0x2c3ad8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3ad8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3adc:
    // 0x2c3adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ae0:
    // 0x2c3ae0: 0x50040011  beql        $zero, $a0, . + 4 + (0x11 << 2)
label_2c3ae4:
    if (ctx->pc == 0x2C3AE4u) {
        ctx->pc = 0x2C3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AE0u;
        // 0x2c3ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3AE8u;
        goto label_2c3ae8;
    }
    ctx->pc = 0x2C3AE0u;
    {
        const bool branch_taken_0x2c3ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c3ae0) {
            ctx->pc = 0x2C3AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3AE0u;
            // 0x2c3ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3B28u;
            goto label_2c3b28;
        }
    }
    ctx->pc = 0x2C3AE8u;
label_2c3ae8:
    // 0x2c3ae8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3ae8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3aec:
    // 0x2c3aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3af0:
    // 0x2c3af0: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2c3af0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2c3af4:
    // 0x2c3af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3af8:
    // 0x2c3af8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3af8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3afc:
    // 0x2c3afc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3afcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b00:
    // 0x2c3b00: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2c3b04:
    if (ctx->pc == 0x2C3B04u) {
        ctx->pc = 0x2C3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B00u;
        // 0x2c3b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B08u;
        goto label_2c3b08;
    }
    ctx->pc = 0x2C3B00u;
    {
        const bool branch_taken_0x2c3b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c3b00) {
            ctx->pc = 0x2C3B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B00u;
            // 0x2c3b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3B10u;
            goto label_2c3b10;
        }
    }
    ctx->pc = 0x2C3B08u;
label_2c3b08:
    // 0x2c3b08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3b08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3b0c:
    // 0x2c3b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b10:
    // 0x2c3b10: 0x40000024  .word       0x40000024                   # mfc0        $zero, Index # 00000024 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c3b10u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c3b14:
    // 0x2c3b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b18:
    // 0x2c3b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3b1c:
    // 0x2c3b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b20:
    // 0x2c3b20: 0x42010024  .word       0x42010024                   # INVALID     $s0, $at, 0x24 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3b20u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x24 at 0x2C3B20 raw=0x42010024");
 /* MITIGATED */
label_2c3b24:
    // 0x2c3b24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b28:
    // 0x2c3b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3b2c:
    // 0x2c3b2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b30:
    // 0x2c3b30: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2c3b30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2c3b34:
    // 0x2c3b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b38:
    // 0x2c3b38: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2c3b38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2c3b3c:
    // 0x2c3b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b40:
    // 0x2c3b40: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2c3b40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c3b44:
    // 0x2c3b44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b48:
    // 0x2c3b48: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2c3b48u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2c3b4c:
    // 0x2c3b4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b50:
    // 0x2c3b50: 0x81e9e37d  lb          $t1, -0x1C83($t7)
    ctx->pc = 0x2c3b50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959997)));
label_2c3b54:
    // 0x2c3b54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b58:
    // 0x2c3b58: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c3b5c:
    if (ctx->pc == 0x2C3B5Cu) {
        ctx->pc = 0x2C3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B58u;
        // 0x2c3b5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B60u;
        goto label_2c3b60;
    }
    ctx->pc = 0x2C3B58u;
    {
        const bool branch_taken_0x2c3b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B58u;
        // 0x2c3b5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b58) {
            ctx->pc = 0x2D9B60u;
            return;
        }
    }
    ctx->pc = 0x2C3B60u;
label_2c3b60:
    // 0x2c3b60: 0x4000001a  .word       0x4000001A                   # mfc0        $zero, Index # 0000001A <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c3b60u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c3b64:
    // 0x2c3b64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b68:
    // 0x2c3b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3b6c:
    // 0x2c3b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b70:
    // 0x2c3b70: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2c3b70u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2c3b74:
    // 0x2c3b74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b78:
    // 0x2c3b78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3b7c:
    // 0x2c3b7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b80:
    // 0x2c3b80: 0x50040010  beql        $zero, $a0, . + 4 + (0x10 << 2)
label_2c3b84:
    if (ctx->pc == 0x2C3B84u) {
        ctx->pc = 0x2C3B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B80u;
        // 0x2c3b84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3B88u;
        goto label_2c3b88;
    }
    ctx->pc = 0x2C3B80u;
    {
        const bool branch_taken_0x2c3b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c3b80) {
            ctx->pc = 0x2C3B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3B80u;
            // 0x2c3b84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3BC4u;
            goto label_2c3bc4;
        }
    }
    ctx->pc = 0x2C3B88u;
label_2c3b88:
    // 0x2c3b88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3b88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3b8c:
    // 0x2c3b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b90:
    // 0x2c3b90: 0x42010016  .word       0x42010016                   # INVALID     $s0, $at, 0x16 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c3b90u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x16 at 0x2C3B90 raw=0x42010016");
 /* MITIGATED */
label_2c3b94:
    // 0x2c3b94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3b98:
    // 0x2c3b98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3b9c:
    // 0x2c3b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ba0:
    // 0x2c3ba0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2c3ba0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2c3ba4:
    // 0x2c3ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ba8:
    // 0x2c3ba8: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2c3ba8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c3bac:
    // 0x2c3bac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3bacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3bb0:
    // 0x2c3bb0: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2c3bb0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2c3bb4:
    // 0x2c3bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3bb8:
    // 0x2c3bb8: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2c3bb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2c3bbc:
    // 0x2c3bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3bc0:
    // 0x2c3bc0: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2c3bc0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2c3bc4:
    // 0x2c3bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3bc8:
    // 0x2c3bc8: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2c3bc8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2c3bcc:
    // 0x2c3bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3bd0:
    // 0x2c3bd0: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2c3bd0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2c3bd4:
    // 0x2c3bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3bd8:
    // 0x2c3bd8: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2c3bd8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c3bdc:
    // 0x2c3bdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3bdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3be0:
    // 0x2c3be0: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2c3be0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2c3be4:
    // 0x2c3be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3be8:
    // 0x2c3be8: 0x81e9e37d  lb          $t1, -0x1C83($t7)
    ctx->pc = 0x2c3be8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959997)));
label_2c3bec:
    // 0x2c3bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3bf0:
    // 0x2c3bf0: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2c3bf4:
    if (ctx->pc == 0x2C3BF4u) {
        ctx->pc = 0x2C3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BF0u;
        // 0x2c3bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3BF8u;
        goto label_2c3bf8;
    }
    ctx->pc = 0x2C3BF0u;
    {
        const bool branch_taken_0x2c3bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BF0u;
        // 0x2c3bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bf0) {
            ctx->pc = 0x2D9BFCu;
            return;
        }
    }
    ctx->pc = 0x2C3BF8u;
label_2c3bf8:
    // 0x2c3bf8: 0x40000007  .word       0x40000007                   # mfc0        $zero, Index # 00000007 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c3bf8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c3bfc:
    // 0x2c3bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c00:
    // 0x2c3c00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c04:
    // 0x2c3c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c08:
    // 0x2c3c08: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2c3c08u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2c3c0c:
    // 0x2c3c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c10:
    // 0x2c3c10: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2c3c10u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c3c14:
    // 0x2c3c14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c18:
    // 0x2c3c18: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2c3c1c:
    // 0x2c3c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c20:
    // 0x2c3c20: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2c3c20u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2c3c24:
    // 0x2c3c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c28:
    // 0x2c3c28: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2c3c28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2c3c2c:
    // 0x2c3c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c30:
    // 0x2c3c30: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c3c34:
    if (ctx->pc == 0x2C3C34u) {
        ctx->pc = 0x2C3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C30u;
        // 0x2c3c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C38u;
        goto label_2c3c38;
    }
    ctx->pc = 0x2C3C30u;
    {
        const bool branch_taken_0x2c3c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C30u;
        // 0x2c3c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c30) {
            ctx->pc = 0x2D9C38u;
            return;
        }
    }
    ctx->pc = 0x2C3C38u;
label_2c3c38:
    // 0x2c3c38: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c3c38u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C3C38 raw=0x48001000");
 /* MITIGATED */
label_2c3c3c:
    // 0x2c3c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c40:
    // 0x2c3c40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c44:
    // 0x2c3c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c48:
    // 0x2c3c48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c4c:
    // 0x2c3c4c: 0x3d9e58  .word       0x003D9E58                   # mult        $s3, $at, $sp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3c4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_2c3c50:
    // 0x2c3c50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c54:
    // 0x2c3c54: 0x3d4e98  .word       0x003D4E98                   # mult        $t1, $at, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2c3c58:
    // 0x2c3c58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c5c:
    // 0x2c3c5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2c3c60u;
    return;
}

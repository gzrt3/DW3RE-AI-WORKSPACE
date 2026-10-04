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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part17(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a3550u: goto label_1a3550;
        case 0x1a3554u: goto label_1a3554;
        case 0x1a3558u: goto label_1a3558;
        case 0x1a355cu: goto label_1a355c;
        case 0x1a3560u: goto label_1a3560;
        case 0x1a3564u: goto label_1a3564;
        case 0x1a3568u: goto label_1a3568;
        case 0x1a356cu: goto label_1a356c;
        case 0x1a3570u: goto label_1a3570;
        case 0x1a3574u: goto label_1a3574;
        case 0x1a3578u: goto label_1a3578;
        case 0x1a357cu: goto label_1a357c;
        case 0x1a3580u: goto label_1a3580;
        case 0x1a3584u: goto label_1a3584;
        case 0x1a3588u: goto label_1a3588;
        case 0x1a358cu: goto label_1a358c;
        case 0x1a3590u: goto label_1a3590;
        case 0x1a3594u: goto label_1a3594;
        case 0x1a3598u: goto label_1a3598;
        case 0x1a359cu: goto label_1a359c;
        case 0x1a35a0u: goto label_1a35a0;
        case 0x1a35a4u: goto label_1a35a4;
        case 0x1a35a8u: goto label_1a35a8;
        case 0x1a35acu: goto label_1a35ac;
        case 0x1a35b0u: goto label_1a35b0;
        case 0x1a35b4u: goto label_1a35b4;
        case 0x1a35b8u: goto label_1a35b8;
        case 0x1a35bcu: goto label_1a35bc;
        case 0x1a35c0u: goto label_1a35c0;
        case 0x1a35c4u: goto label_1a35c4;
        case 0x1a35c8u: goto label_1a35c8;
        case 0x1a35ccu: goto label_1a35cc;
        case 0x1a35d0u: goto label_1a35d0;
        case 0x1a35d4u: goto label_1a35d4;
        case 0x1a35d8u: goto label_1a35d8;
        case 0x1a35dcu: goto label_1a35dc;
        case 0x1a35e0u: goto label_1a35e0;
        case 0x1a35e4u: goto label_1a35e4;
        case 0x1a35e8u: goto label_1a35e8;
        case 0x1a35ecu: goto label_1a35ec;
        case 0x1a35f0u: goto label_1a35f0;
        case 0x1a35f4u: goto label_1a35f4;
        case 0x1a35f8u: goto label_1a35f8;
        case 0x1a35fcu: goto label_1a35fc;
        case 0x1a3600u: goto label_1a3600;
        case 0x1a3604u: goto label_1a3604;
        case 0x1a3608u: goto label_1a3608;
        case 0x1a360cu: goto label_1a360c;
        case 0x1a3610u: goto label_1a3610;
        case 0x1a3614u: goto label_1a3614;
        case 0x1a3618u: goto label_1a3618;
        case 0x1a361cu: goto label_1a361c;
        case 0x1a3620u: goto label_1a3620;
        case 0x1a3624u: goto label_1a3624;
        case 0x1a3628u: goto label_1a3628;
        case 0x1a362cu: goto label_1a362c;
        case 0x1a3630u: goto label_1a3630;
        case 0x1a3634u: goto label_1a3634;
        case 0x1a3638u: goto label_1a3638;
        case 0x1a363cu: goto label_1a363c;
        case 0x1a3640u: goto label_1a3640;
        case 0x1a3644u: goto label_1a3644;
        case 0x1a3648u: goto label_1a3648;
        case 0x1a364cu: goto label_1a364c;
        case 0x1a3650u: goto label_1a3650;
        case 0x1a3654u: goto label_1a3654;
        case 0x1a3658u: goto label_1a3658;
        case 0x1a365cu: goto label_1a365c;
        case 0x1a3660u: goto label_1a3660;
        case 0x1a3664u: goto label_1a3664;
        case 0x1a3668u: goto label_1a3668;
        case 0x1a366cu: goto label_1a366c;
        case 0x1a3670u: goto label_1a3670;
        case 0x1a3674u: goto label_1a3674;
        case 0x1a3678u: goto label_1a3678;
        case 0x1a367cu: goto label_1a367c;
        case 0x1a3680u: goto label_1a3680;
        case 0x1a3684u: goto label_1a3684;
        case 0x1a3688u: goto label_1a3688;
        case 0x1a368cu: goto label_1a368c;
        case 0x1a3690u: goto label_1a3690;
        case 0x1a3694u: goto label_1a3694;
        case 0x1a3698u: goto label_1a3698;
        case 0x1a369cu: goto label_1a369c;
        case 0x1a36a0u: goto label_1a36a0;
        case 0x1a36a4u: goto label_1a36a4;
        case 0x1a36a8u: goto label_1a36a8;
        case 0x1a36acu: goto label_1a36ac;
        case 0x1a36b0u: goto label_1a36b0;
        case 0x1a36b4u: goto label_1a36b4;
        case 0x1a36b8u: goto label_1a36b8;
        case 0x1a36bcu: goto label_1a36bc;
        case 0x1a36c0u: goto label_1a36c0;
        case 0x1a36c4u: goto label_1a36c4;
        case 0x1a36c8u: goto label_1a36c8;
        case 0x1a36ccu: goto label_1a36cc;
        case 0x1a36d0u: goto label_1a36d0;
        case 0x1a36d4u: goto label_1a36d4;
        case 0x1a36d8u: goto label_1a36d8;
        case 0x1a36dcu: goto label_1a36dc;
        case 0x1a36e0u: goto label_1a36e0;
        case 0x1a36e4u: goto label_1a36e4;
        case 0x1a36e8u: goto label_1a36e8;
        case 0x1a36ecu: goto label_1a36ec;
        case 0x1a36f0u: goto label_1a36f0;
        case 0x1a36f4u: goto label_1a36f4;
        case 0x1a36f8u: goto label_1a36f8;
        case 0x1a36fcu: goto label_1a36fc;
        case 0x1a3700u: goto label_1a3700;
        case 0x1a3704u: goto label_1a3704;
        case 0x1a3708u: goto label_1a3708;
        case 0x1a370cu: goto label_1a370c;
        case 0x1a3710u: goto label_1a3710;
        case 0x1a3714u: goto label_1a3714;
        case 0x1a3718u: goto label_1a3718;
        case 0x1a371cu: goto label_1a371c;
        case 0x1a3720u: goto label_1a3720;
        case 0x1a3724u: goto label_1a3724;
        case 0x1a3728u: goto label_1a3728;
        case 0x1a372cu: goto label_1a372c;
        case 0x1a3730u: goto label_1a3730;
        case 0x1a3734u: goto label_1a3734;
        case 0x1a3738u: goto label_1a3738;
        case 0x1a373cu: goto label_1a373c;
        case 0x1a3740u: goto label_1a3740;
        case 0x1a3744u: goto label_1a3744;
        case 0x1a3748u: goto label_1a3748;
        case 0x1a374cu: goto label_1a374c;
        case 0x1a3750u: goto label_1a3750;
        case 0x1a3754u: goto label_1a3754;
        case 0x1a3758u: goto label_1a3758;
        case 0x1a375cu: goto label_1a375c;
        case 0x1a3760u: goto label_1a3760;
        case 0x1a3764u: goto label_1a3764;
        case 0x1a3768u: goto label_1a3768;
        case 0x1a376cu: goto label_1a376c;
        case 0x1a3770u: goto label_1a3770;
        case 0x1a3774u: goto label_1a3774;
        case 0x1a3778u: goto label_1a3778;
        case 0x1a377cu: goto label_1a377c;
        case 0x1a3780u: goto label_1a3780;
        case 0x1a3784u: goto label_1a3784;
        case 0x1a3788u: goto label_1a3788;
        case 0x1a378cu: goto label_1a378c;
        case 0x1a3790u: goto label_1a3790;
        case 0x1a3794u: goto label_1a3794;
        case 0x1a3798u: goto label_1a3798;
        case 0x1a379cu: goto label_1a379c;
        case 0x1a37a0u: goto label_1a37a0;
        case 0x1a37a4u: goto label_1a37a4;
        case 0x1a37a8u: goto label_1a37a8;
        case 0x1a37acu: goto label_1a37ac;
        case 0x1a37b0u: goto label_1a37b0;
        case 0x1a37b4u: goto label_1a37b4;
        case 0x1a37b8u: goto label_1a37b8;
        case 0x1a37bcu: goto label_1a37bc;
        case 0x1a37c0u: goto label_1a37c0;
        case 0x1a37c4u: goto label_1a37c4;
        case 0x1a37c8u: goto label_1a37c8;
        case 0x1a37ccu: goto label_1a37cc;
        case 0x1a37d0u: goto label_1a37d0;
        case 0x1a37d4u: goto label_1a37d4;
        case 0x1a37d8u: goto label_1a37d8;
        case 0x1a37dcu: goto label_1a37dc;
        case 0x1a37e0u: goto label_1a37e0;
        case 0x1a37e4u: goto label_1a37e4;
        case 0x1a37e8u: goto label_1a37e8;
        case 0x1a37ecu: goto label_1a37ec;
        case 0x1a37f0u: goto label_1a37f0;
        case 0x1a37f4u: goto label_1a37f4;
        case 0x1a37f8u: goto label_1a37f8;
        case 0x1a37fcu: goto label_1a37fc;
        case 0x1a3800u: goto label_1a3800;
        case 0x1a3804u: goto label_1a3804;
        case 0x1a3808u: goto label_1a3808;
        case 0x1a380cu: goto label_1a380c;
        case 0x1a3810u: goto label_1a3810;
        case 0x1a3814u: goto label_1a3814;
        case 0x1a3818u: goto label_1a3818;
        case 0x1a381cu: goto label_1a381c;
        case 0x1a3820u: goto label_1a3820;
        case 0x1a3824u: goto label_1a3824;
        case 0x1a3828u: goto label_1a3828;
        case 0x1a382cu: goto label_1a382c;
        case 0x1a3830u: goto label_1a3830;
        case 0x1a3834u: goto label_1a3834;
        case 0x1a3838u: goto label_1a3838;
        case 0x1a383cu: goto label_1a383c;
        case 0x1a3840u: goto label_1a3840;
        case 0x1a3844u: goto label_1a3844;
        case 0x1a3848u: goto label_1a3848;
        case 0x1a384cu: goto label_1a384c;
        case 0x1a3850u: goto label_1a3850;
        case 0x1a3854u: goto label_1a3854;
        case 0x1a3858u: goto label_1a3858;
        case 0x1a385cu: goto label_1a385c;
        case 0x1a3860u: goto label_1a3860;
        case 0x1a3864u: goto label_1a3864;
        case 0x1a3868u: goto label_1a3868;
        case 0x1a386cu: goto label_1a386c;
        case 0x1a3870u: goto label_1a3870;
        case 0x1a3874u: goto label_1a3874;
        case 0x1a3878u: goto label_1a3878;
        case 0x1a387cu: goto label_1a387c;
        case 0x1a3880u: goto label_1a3880;
        case 0x1a3884u: goto label_1a3884;
        case 0x1a3888u: goto label_1a3888;
        case 0x1a388cu: goto label_1a388c;
        case 0x1a3890u: goto label_1a3890;
        case 0x1a3894u: goto label_1a3894;
        case 0x1a3898u: goto label_1a3898;
        case 0x1a389cu: goto label_1a389c;
        case 0x1a38a0u: goto label_1a38a0;
        case 0x1a38a4u: goto label_1a38a4;
        case 0x1a38a8u: goto label_1a38a8;
        case 0x1a38acu: goto label_1a38ac;
        case 0x1a38b0u: goto label_1a38b0;
        case 0x1a38b4u: goto label_1a38b4;
        case 0x1a38b8u: goto label_1a38b8;
        case 0x1a38bcu: goto label_1a38bc;
        case 0x1a38c0u: goto label_1a38c0;
        case 0x1a38c4u: goto label_1a38c4;
        case 0x1a38c8u: goto label_1a38c8;
        case 0x1a38ccu: goto label_1a38cc;
        case 0x1a38d0u: goto label_1a38d0;
        case 0x1a38d4u: goto label_1a38d4;
        case 0x1a38d8u: goto label_1a38d8;
        case 0x1a38dcu: goto label_1a38dc;
        case 0x1a38e0u: goto label_1a38e0;
        case 0x1a38e4u: goto label_1a38e4;
        case 0x1a38e8u: goto label_1a38e8;
        case 0x1a38ecu: goto label_1a38ec;
        case 0x1a38f0u: goto label_1a38f0;
        case 0x1a38f4u: goto label_1a38f4;
        case 0x1a38f8u: goto label_1a38f8;
        case 0x1a38fcu: goto label_1a38fc;
        case 0x1a3900u: goto label_1a3900;
        case 0x1a3904u: goto label_1a3904;
        case 0x1a3908u: goto label_1a3908;
        case 0x1a390cu: goto label_1a390c;
        case 0x1a3910u: goto label_1a3910;
        case 0x1a3914u: goto label_1a3914;
        case 0x1a3918u: goto label_1a3918;
        case 0x1a391cu: goto label_1a391c;
        case 0x1a3920u: goto label_1a3920;
        case 0x1a3924u: goto label_1a3924;
        case 0x1a3928u: goto label_1a3928;
        case 0x1a392cu: goto label_1a392c;
        case 0x1a3930u: goto label_1a3930;
        case 0x1a3934u: goto label_1a3934;
        case 0x1a3938u: goto label_1a3938;
        case 0x1a393cu: goto label_1a393c;
        case 0x1a3940u: goto label_1a3940;
        case 0x1a3944u: goto label_1a3944;
        case 0x1a3948u: goto label_1a3948;
        case 0x1a394cu: goto label_1a394c;
        case 0x1a3950u: goto label_1a3950;
        case 0x1a3954u: goto label_1a3954;
        case 0x1a3958u: goto label_1a3958;
        case 0x1a395cu: goto label_1a395c;
        case 0x1a3960u: goto label_1a3960;
        case 0x1a3964u: goto label_1a3964;
        case 0x1a3968u: goto label_1a3968;
        case 0x1a396cu: goto label_1a396c;
        case 0x1a3970u: goto label_1a3970;
        case 0x1a3974u: goto label_1a3974;
        case 0x1a3978u: goto label_1a3978;
        case 0x1a397cu: goto label_1a397c;
        case 0x1a3980u: goto label_1a3980;
        case 0x1a3984u: goto label_1a3984;
        case 0x1a3988u: goto label_1a3988;
        case 0x1a398cu: goto label_1a398c;
        case 0x1a3990u: goto label_1a3990;
        case 0x1a3994u: goto label_1a3994;
        case 0x1a3998u: goto label_1a3998;
        case 0x1a399cu: goto label_1a399c;
        case 0x1a39a0u: goto label_1a39a0;
        case 0x1a39a4u: goto label_1a39a4;
        case 0x1a39a8u: goto label_1a39a8;
        case 0x1a39acu: goto label_1a39ac;
        case 0x1a39b0u: goto label_1a39b0;
        case 0x1a39b4u: goto label_1a39b4;
        case 0x1a39b8u: goto label_1a39b8;
        case 0x1a39bcu: goto label_1a39bc;
        case 0x1a39c0u: goto label_1a39c0;
        case 0x1a39c4u: goto label_1a39c4;
        case 0x1a39c8u: goto label_1a39c8;
        case 0x1a39ccu: goto label_1a39cc;
        case 0x1a39d0u: goto label_1a39d0;
        case 0x1a39d4u: goto label_1a39d4;
        case 0x1a39d8u: goto label_1a39d8;
        case 0x1a39dcu: goto label_1a39dc;
        case 0x1a39e0u: goto label_1a39e0;
        case 0x1a39e4u: goto label_1a39e4;
        case 0x1a39e8u: goto label_1a39e8;
        case 0x1a39ecu: goto label_1a39ec;
        case 0x1a39f0u: goto label_1a39f0;
        case 0x1a39f4u: goto label_1a39f4;
        case 0x1a39f8u: goto label_1a39f8;
        case 0x1a39fcu: goto label_1a39fc;
        case 0x1a3a00u: goto label_1a3a00;
        case 0x1a3a04u: goto label_1a3a04;
        case 0x1a3a08u: goto label_1a3a08;
        case 0x1a3a0cu: goto label_1a3a0c;
        case 0x1a3a10u: goto label_1a3a10;
        case 0x1a3a14u: goto label_1a3a14;
        case 0x1a3a18u: goto label_1a3a18;
        case 0x1a3a1cu: goto label_1a3a1c;
        case 0x1a3a20u: goto label_1a3a20;
        case 0x1a3a24u: goto label_1a3a24;
        case 0x1a3a28u: goto label_1a3a28;
        case 0x1a3a2cu: goto label_1a3a2c;
        case 0x1a3a30u: goto label_1a3a30;
        case 0x1a3a34u: goto label_1a3a34;
        case 0x1a3a38u: goto label_1a3a38;
        case 0x1a3a3cu: goto label_1a3a3c;
        case 0x1a3a40u: goto label_1a3a40;
        case 0x1a3a44u: goto label_1a3a44;
        case 0x1a3a48u: goto label_1a3a48;
        case 0x1a3a4cu: goto label_1a3a4c;
        case 0x1a3a50u: goto label_1a3a50;
        case 0x1a3a54u: goto label_1a3a54;
        case 0x1a3a58u: goto label_1a3a58;
        case 0x1a3a5cu: goto label_1a3a5c;
        case 0x1a3a60u: goto label_1a3a60;
        case 0x1a3a64u: goto label_1a3a64;
        case 0x1a3a68u: goto label_1a3a68;
        case 0x1a3a6cu: goto label_1a3a6c;
        case 0x1a3a70u: goto label_1a3a70;
        case 0x1a3a74u: goto label_1a3a74;
        case 0x1a3a78u: goto label_1a3a78;
        case 0x1a3a7cu: goto label_1a3a7c;
        case 0x1a3a80u: goto label_1a3a80;
        case 0x1a3a84u: goto label_1a3a84;
        case 0x1a3a88u: goto label_1a3a88;
        case 0x1a3a8cu: goto label_1a3a8c;
        case 0x1a3a90u: goto label_1a3a90;
        case 0x1a3a94u: goto label_1a3a94;
        case 0x1a3a98u: goto label_1a3a98;
        case 0x1a3a9cu: goto label_1a3a9c;
        case 0x1a3aa0u: goto label_1a3aa0;
        case 0x1a3aa4u: goto label_1a3aa4;
        case 0x1a3aa8u: goto label_1a3aa8;
        case 0x1a3aacu: goto label_1a3aac;
        case 0x1a3ab0u: goto label_1a3ab0;
        case 0x1a3ab4u: goto label_1a3ab4;
        case 0x1a3ab8u: goto label_1a3ab8;
        case 0x1a3abcu: goto label_1a3abc;
        case 0x1a3ac0u: goto label_1a3ac0;
        case 0x1a3ac4u: goto label_1a3ac4;
        case 0x1a3ac8u: goto label_1a3ac8;
        case 0x1a3accu: goto label_1a3acc;
        case 0x1a3ad0u: goto label_1a3ad0;
        case 0x1a3ad4u: goto label_1a3ad4;
        case 0x1a3ad8u: goto label_1a3ad8;
        case 0x1a3adcu: goto label_1a3adc;
        case 0x1a3ae0u: goto label_1a3ae0;
        case 0x1a3ae4u: goto label_1a3ae4;
        case 0x1a3ae8u: goto label_1a3ae8;
        case 0x1a3aecu: goto label_1a3aec;
        case 0x1a3af0u: goto label_1a3af0;
        case 0x1a3af4u: goto label_1a3af4;
        case 0x1a3af8u: goto label_1a3af8;
        case 0x1a3afcu: goto label_1a3afc;
        case 0x1a3b00u: goto label_1a3b00;
        case 0x1a3b04u: goto label_1a3b04;
        case 0x1a3b08u: goto label_1a3b08;
        case 0x1a3b0cu: goto label_1a3b0c;
        case 0x1a3b10u: goto label_1a3b10;
        case 0x1a3b14u: goto label_1a3b14;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b1cu: goto label_1a3b1c;
        case 0x1a3b20u: goto label_1a3b20;
        case 0x1a3b24u: goto label_1a3b24;
        case 0x1a3b28u: goto label_1a3b28;
        case 0x1a3b2cu: goto label_1a3b2c;
        case 0x1a3b30u: goto label_1a3b30;
        case 0x1a3b34u: goto label_1a3b34;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b3cu: goto label_1a3b3c;
        case 0x1a3b40u: goto label_1a3b40;
        case 0x1a3b44u: goto label_1a3b44;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b4cu: goto label_1a3b4c;
        case 0x1a3b50u: goto label_1a3b50;
        case 0x1a3b54u: goto label_1a3b54;
        case 0x1a3b58u: goto label_1a3b58;
        case 0x1a3b5cu: goto label_1a3b5c;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b64u: goto label_1a3b64;
        case 0x1a3b68u: goto label_1a3b68;
        case 0x1a3b6cu: goto label_1a3b6c;
        case 0x1a3b70u: goto label_1a3b70;
        case 0x1a3b74u: goto label_1a3b74;
        case 0x1a3b78u: goto label_1a3b78;
        case 0x1a3b7cu: goto label_1a3b7c;
        case 0x1a3b80u: goto label_1a3b80;
        case 0x1a3b84u: goto label_1a3b84;
        case 0x1a3b88u: goto label_1a3b88;
        case 0x1a3b8cu: goto label_1a3b8c;
        case 0x1a3b90u: goto label_1a3b90;
        case 0x1a3b94u: goto label_1a3b94;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3b9cu: goto label_1a3b9c;
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3ba4u: goto label_1a3ba4;
        case 0x1a3ba8u: goto label_1a3ba8;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        case 0x1a3c00u: goto label_1a3c00;
        case 0x1a3c04u: goto label_1a3c04;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c0cu: goto label_1a3c0c;
        case 0x1a3c10u: goto label_1a3c10;
        case 0x1a3c14u: goto label_1a3c14;
        case 0x1a3c18u: goto label_1a3c18;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c20u: goto label_1a3c20;
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c28u: goto label_1a3c28;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c30u: goto label_1a3c30;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c3cu: goto label_1a3c3c;
        case 0x1a3c40u: goto label_1a3c40;
        case 0x1a3c44u: goto label_1a3c44;
        case 0x1a3c48u: goto label_1a3c48;
        case 0x1a3c4cu: goto label_1a3c4c;
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c54u: goto label_1a3c54;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c60u: goto label_1a3c60;
        case 0x1a3c64u: goto label_1a3c64;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c6cu: goto label_1a3c6c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c74u: goto label_1a3c74;
        case 0x1a3c78u: goto label_1a3c78;
        case 0x1a3c7cu: goto label_1a3c7c;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c8cu: goto label_1a3c8c;
        case 0x1a3c90u: goto label_1a3c90;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3c9cu: goto label_1a3c9c;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca4u: goto label_1a3ca4;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cacu: goto label_1a3cac;
        case 0x1a3cb0u: goto label_1a3cb0;
        case 0x1a3cb4u: goto label_1a3cb4;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cbcu: goto label_1a3cbc;
        case 0x1a3cc0u: goto label_1a3cc0;
        case 0x1a3cc4u: goto label_1a3cc4;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cccu: goto label_1a3ccc;
        case 0x1a3cd0u: goto label_1a3cd0;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3cd8u: goto label_1a3cd8;
        case 0x1a3cdcu: goto label_1a3cdc;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cecu: goto label_1a3cec;
        case 0x1a3cf0u: goto label_1a3cf0;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3cf8u: goto label_1a3cf8;
        case 0x1a3cfcu: goto label_1a3cfc;
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        default: return;
    }

label_1a3550:
    // 0x1a3550: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x1a3550u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
label_1a3554:
    // 0x1a3554: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a3554u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3558:
    // 0x1a3558: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x1a3558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
label_1a355c:
    // 0x1a355c: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x1a355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
label_1a3560:
    // 0x1a3560: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x1a3560u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1a3564:
    // 0x1a3564: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x1a3564u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1a3568:
    // 0x1a3568: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x1a3568u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_1a356c:
    // 0x1a356c: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x1a356cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
label_1a3570:
    // 0x1a3570: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x1a3570u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
label_1a3574:
    // 0x1a3574: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a3574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a3578:
    // 0x1a3578: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a3578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a357c:
    // 0x1a357c: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x1a357cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
label_1a3580:
    // 0x1a3580: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a3580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a3584:
    // 0x1a3584: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a3584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1a3588:
    // 0x1a3588: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a3588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1a358c:
    // 0x1a358c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a358cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1a3590:
    // 0x1a3590: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x1a3590u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
label_1a3594:
    // 0x1a3594: 0xf  sync
    ctx->pc = 0x1a3594u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a3598:
    // 0x1a3598: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x1a3598u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_1a359c:
    // 0x1a359c: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
label_1a35a0:
    if (ctx->pc == 0x1A35A0u) {
        ctx->pc = 0x1A35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A359Cu;
        // 0x1a35a0: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35A4u;
        goto label_1a35a4;
    }
    ctx->pc = 0x1A359Cu;
    {
        const bool branch_taken_0x1a359c = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x1A35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A359Cu;
        // 0x1a35a0: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a359c) {
            ctx->pc = 0x1A3548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1a3548; return; }
        }
    }
    ctx->pc = 0x1A35A4u;
label_1a35a4:
    // 0x1a35a4: 0xc0692a8  jal         func_1A4AA0
label_1a35a8:
    if (ctx->pc == 0x1A35A8u) {
        ctx->pc = 0x1A35A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35A4u;
        // 0x1a35a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35ACu;
        goto label_1a35ac;
    }
    ctx->pc = 0x1A35A4u;
    SET_GPR_U32(ctx, 31, 0x1A35ACu);
    ctx->pc = 0x1A35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35A4u;
    // 0x1a35a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1A35ACu;
label_1a35ac:
    // 0x1a35ac: 0xc06b518  jal         func_1AD460
label_1a35b0:
    if (ctx->pc == 0x1A35B0u) {
        ctx->pc = 0x1A35B4u;
        goto label_1a35b4;
    }
    ctx->pc = 0x1A35ACu;
    SET_GPR_U32(ctx, 31, 0x1A35B4u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A35B4u;
label_1a35b4:
    // 0x1a35b4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a35b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1a35b8:
    // 0x1a35b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a35bc:
    // 0x1a35bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a35bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a35c0:
    // 0x1a35c0: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1a35c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
label_1a35c4:
    // 0x1a35c4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1a35c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1a35c8:
    // 0x1a35c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a35cc:
    // 0x1a35cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1a35d0:
    // 0x1a35d0: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x1a35d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
label_1a35d4:
    // 0x1a35d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a35d8:
    // 0x1a35d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a35dc:
    // 0x1a35dc: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1a35dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
label_1a35e0:
    // 0x1a35e0: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x1a35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_1a35e4:
    // 0x1a35e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a35e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a35e8:
    // 0x1a35e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a35e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a35ec:
    // 0x1a35ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a35ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a35f0:
    // 0x1a35f0: 0x806b52a  j           func_1AD4A8
label_1a35f4:
    if (ctx->pc == 0x1A35F4u) {
        ctx->pc = 0x1A35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35F0u;
        // 0x1a35f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A35F8u;
        goto label_1a35f8;
    }
    ctx->pc = 0x1A35F0u;
    ctx->pc = 0x1A35F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35F0u;
    // 0x1a35f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A35F8u;
label_1a35f8:
    // 0x1a35f8: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x1a35f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
label_1a35fc:
    // 0x1a35fc: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x1a35fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
label_1a3600:
    // 0x1a3600: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1a3600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1a3604:
    // 0x1a3604: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1a3604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_1a3608:
    // 0x1a3608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a360c:
    // 0x1a360c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1a360cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_1a3610:
    // 0x1a3610: 0x3e00008  jr          $ra
label_1a3614:
    if (ctx->pc == 0x1A3614u) {
        ctx->pc = 0x1A3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3610u;
        // 0x1a3614: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3618u;
        goto label_1a3618;
    }
    ctx->pc = 0x1A3610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3610u;
        // 0x1a3614: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3618u;
label_1a3618:
    // 0x1a3618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a361c:
    // 0x1a361c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a361cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a3620:
    // 0x1a3620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3624:
    // 0x1a3624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3628:
    // 0x1a3628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a362c:
    // 0x1a362c: 0xc067dd2  jal         func_19F748
label_1a3630:
    if (ctx->pc == 0x1A3630u) {
        ctx->pc = 0x1A3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A362Cu;
        // 0x1a3630: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3634u;
        goto label_1a3634;
    }
    ctx->pc = 0x1A362Cu;
    SET_GPR_U32(ctx, 31, 0x1A3634u);
    ctx->pc = 0x1A3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A362Cu;
    // 0x1a3630: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3634u;
label_1a3634:
    // 0x1a3634: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a3634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3638:
    // 0x1a3638: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x1a3638u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_1a363c:
    // 0x1a363c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1a363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1a3640:
    // 0x1a3640: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x1a3640u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
label_1a3644:
    // 0x1a3644: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x1a3644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_1a3648:
    // 0x1a3648: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x1a3648u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
label_1a364c:
    // 0x1a364c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1a3650:
    if (ctx->pc == 0x1A3650u) {
        ctx->pc = 0x1A3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A364Cu;
        // 0x1a3650: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3654u;
        goto label_1a3654;
    }
    ctx->pc = 0x1A364Cu;
    {
        const bool branch_taken_0x1a364c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A364Cu;
        // 0x1a3650: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a364c) {
            ctx->pc = 0x1A3664u;
            goto label_1a3664;
        }
    }
    ctx->pc = 0x1A3654u;
label_1a3654:
    // 0x1a3654: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a3658:
    // 0x1a3658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a365c:
    // 0x1a365c: 0xc068d2c  jal         func_1A34B0
label_1a3660:
    if (ctx->pc == 0x1A3660u) {
        ctx->pc = 0x1A3660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A365Cu;
        // 0x1a3660: 0x24a5a3a8  addiu       $a1, $a1, -0x5C58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3664u;
        goto label_1a3664;
    }
    ctx->pc = 0x1A365Cu;
    SET_GPR_U32(ctx, 31, 0x1A3664u);
    ctx->pc = 0x1A3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A365Cu;
    // 0x1a3660: 0x24a5a3a8  addiu       $a1, $a1, -0x5C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3664u;
label_1a3664:
    // 0x1a3664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3668:
    // 0x1a3668: 0xc067dd2  jal         func_19F748
label_1a366c:
    if (ctx->pc == 0x1A366Cu) {
        ctx->pc = 0x1A366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3668u;
        // 0x1a366c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3670u;
        goto label_1a3670;
    }
    ctx->pc = 0x1A3668u;
    SET_GPR_U32(ctx, 31, 0x1A3670u);
    ctx->pc = 0x1A366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3668u;
    // 0x1a366c: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3670u;
label_1a3670:
    // 0x1a3670: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a3670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3674:
    // 0x1a3674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3678:
    // 0x1a3678: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1a3678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1a367c:
    // 0x1a367c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3680:
    // 0x1a3680: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1a3680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_1a3684:
    // 0x1a3684: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1a3684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
label_1a3688:
    // 0x1a3688: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x1a3688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
label_1a368c:
    // 0x1a368c: 0xc067dd2  jal         func_19F748
label_1a3690:
    if (ctx->pc == 0x1A3690u) {
        ctx->pc = 0x1A3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A368Cu;
        // 0x1a3690: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3694u;
        goto label_1a3694;
    }
    ctx->pc = 0x1A368Cu;
    SET_GPR_U32(ctx, 31, 0x1A3694u);
    ctx->pc = 0x1A3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A368Cu;
    // 0x1a3690: 0xae020138  sw          $v0, 0x138($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3694u;
label_1a3694:
    // 0x1a3694: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a3698:
    if (ctx->pc == 0x1A3698u) {
        ctx->pc = 0x1A3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3694u;
        // 0x1a3698: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A369Cu;
        goto label_1a369c;
    }
    ctx->pc = 0x1A3694u;
    {
        const bool branch_taken_0x1a3694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3694u;
        // 0x1a3698: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3694) {
            ctx->pc = 0x1A36C0u;
            goto label_1a36c0;
        }
    }
    ctx->pc = 0x1A369Cu;
label_1a369c:
    // 0x1a369c: 0xc067ca0  jal         func_19F280
label_1a36a0:
    if (ctx->pc == 0x1A36A0u) {
        ctx->pc = 0x1A36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A369Cu;
        // 0x1a36a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36A4u;
        goto label_1a36a4;
    }
    ctx->pc = 0x1A369Cu;
    SET_GPR_U32(ctx, 31, 0x1A36A4u);
    ctx->pc = 0x1A36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A369Cu;
    // 0x1a36a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A36A4u;
label_1a36a4:
    // 0x1a36a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a36a8:
    // 0x1a36a8: 0xc067c94  jal         func_19F250
label_1a36ac:
    if (ctx->pc == 0x1A36ACu) {
        ctx->pc = 0x1A36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36A8u;
        // 0x1a36ac: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36B0u;
        goto label_1a36b0;
    }
    ctx->pc = 0x1A36A8u;
    SET_GPR_U32(ctx, 31, 0x1A36B0u);
    ctx->pc = 0x1A36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36A8u;
    // 0x1a36ac: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x1A36B0u;
label_1a36b0:
    // 0x1a36b0: 0xc067ca0  jal         func_19F280
label_1a36b4:
    if (ctx->pc == 0x1A36B4u) {
        ctx->pc = 0x1A36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36B0u;
        // 0x1a36b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36B8u;
        goto label_1a36b8;
    }
    ctx->pc = 0x1A36B0u;
    SET_GPR_U32(ctx, 31, 0x1A36B8u);
    ctx->pc = 0x1A36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36B0u;
    // 0x1a36b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A36B8u;
label_1a36b8:
    // 0x1a36b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a36bc:
    if (ctx->pc == 0x1A36BCu) {
        ctx->pc = 0x1A36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36B8u;
        // 0x1a36bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36C0u;
        goto label_1a36c0;
    }
    ctx->pc = 0x1A36B8u;
    {
        const bool branch_taken_0x1a36b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36B8u;
        // 0x1a36bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36b8) {
            ctx->pc = 0x1A36D8u;
            goto label_1a36d8;
        }
    }
    ctx->pc = 0x1A36C0u;
label_1a36c0:
    // 0x1a36c0: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1a36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_1a36c4:
    // 0x1a36c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a36c8:
    // 0x1a36c8: 0x24c65a40  addiu       $a2, $a2, 0x5A40
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23104));
label_1a36cc:
    // 0x1a36cc: 0xc068eb2  jal         func_1A3AC8
label_1a36d0:
    if (ctx->pc == 0x1A36D0u) {
        ctx->pc = 0x1A36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36CCu;
        // 0x1a36d0: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36D4u;
        goto label_1a36d4;
    }
    ctx->pc = 0x1A36CCu;
    SET_GPR_U32(ctx, 31, 0x1A36D4u);
    ctx->pc = 0x1A36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36CCu;
    // 0x1a36d0: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AC8u;
    goto label_1a3ac8;
    ctx->pc = 0x1A36D4u;
label_1a36d4:
    // 0x1a36d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a36d8:
    // 0x1a36d8: 0xc067dd2  jal         func_19F748
label_1a36dc:
    if (ctx->pc == 0x1A36DCu) {
        ctx->pc = 0x1A36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36D8u;
        // 0x1a36dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36E0u;
        goto label_1a36e0;
    }
    ctx->pc = 0x1A36D8u;
    SET_GPR_U32(ctx, 31, 0x1A36E0u);
    ctx->pc = 0x1A36DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36D8u;
    // 0x1a36dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A36E0u;
label_1a36e0:
    // 0x1a36e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a36e4:
    if (ctx->pc == 0x1A36E4u) {
        ctx->pc = 0x1A36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36E0u;
        // 0x1a36e4: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36E8u;
        goto label_1a36e8;
    }
    ctx->pc = 0x1A36E0u;
    {
        const bool branch_taken_0x1a36e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36E0u;
        // 0x1a36e4: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36e0) {
            ctx->pc = 0x1A370Cu;
            goto label_1a370c;
        }
    }
    ctx->pc = 0x1A36E8u;
label_1a36e8:
    // 0x1a36e8: 0xc067ca0  jal         func_19F280
label_1a36ec:
    if (ctx->pc == 0x1A36ECu) {
        ctx->pc = 0x1A36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36E8u;
        // 0x1a36ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36F0u;
        goto label_1a36f0;
    }
    ctx->pc = 0x1A36E8u;
    SET_GPR_U32(ctx, 31, 0x1A36F0u);
    ctx->pc = 0x1A36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36E8u;
    // 0x1a36ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A36F0u;
label_1a36f0:
    // 0x1a36f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a36f4:
    // 0x1a36f4: 0xc067c94  jal         func_19F250
label_1a36f8:
    if (ctx->pc == 0x1A36F8u) {
        ctx->pc = 0x1A36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36F4u;
        // 0x1a36f8: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A36FCu;
        goto label_1a36fc;
    }
    ctx->pc = 0x1A36F4u;
    SET_GPR_U32(ctx, 31, 0x1A36FCu);
    ctx->pc = 0x1A36F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36F4u;
    // 0x1a36f8: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x1A36FCu;
label_1a36fc:
    // 0x1a36fc: 0xc067ca0  jal         func_19F280
label_1a3700:
    if (ctx->pc == 0x1A3700u) {
        ctx->pc = 0x1A3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A36FCu;
        // 0x1a3700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3704u;
        goto label_1a3704;
    }
    ctx->pc = 0x1A36FCu;
    SET_GPR_U32(ctx, 31, 0x1A3704u);
    ctx->pc = 0x1A3700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36FCu;
    // 0x1a3700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A3704u;
label_1a3704:
    // 0x1a3704: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a3708:
    if (ctx->pc == 0x1A3708u) {
        ctx->pc = 0x1A370Cu;
        goto label_1a370c;
    }
    ctx->pc = 0x1A3704u;
    {
        const bool branch_taken_0x1a3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3704) {
            ctx->pc = 0x1A3720u;
            goto label_1a3720;
        }
    }
    ctx->pc = 0x1A370Cu;
label_1a370c:
    // 0x1a370c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1a370cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_1a3710:
    // 0x1a3710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3714:
    // 0x1a3714: 0x24c65a80  addiu       $a2, $a2, 0x5A80
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23168));
label_1a3718:
    // 0x1a3718: 0xc068eb2  jal         func_1A3AC8
label_1a371c:
    if (ctx->pc == 0x1A371Cu) {
        ctx->pc = 0x1A371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3718u;
        // 0x1a371c: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3720u;
        goto label_1a3720;
    }
    ctx->pc = 0x1A3718u;
    SET_GPR_U32(ctx, 31, 0x1A3720u);
    ctx->pc = 0x1A371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3718u;
    // 0x1a371c: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AC8u;
    goto label_1a3ac8;
    ctx->pc = 0x1A3720u;
label_1a3720:
    // 0x1a3720: 0xc067ed6  jal         func_19FB58
label_1a3724:
    if (ctx->pc == 0x1A3724u) {
        ctx->pc = 0x1A3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3720u;
        // 0x1a3724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3728u;
        goto label_1a3728;
    }
    ctx->pc = 0x1A3720u;
    SET_GPR_U32(ctx, 31, 0x1A3728u);
    ctx->pc = 0x1A3724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3720u;
    // 0x1a3724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FB58u;
    { ctx->pc = 0x19fb58; return; }
    ctx->pc = 0x1A3728u;
label_1a3728:
    // 0x1a3728: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x1a3728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_1a372c:
    // 0x1a372c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a372cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3730:
    // 0x1a3730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3734:
    // 0x1a3734: 0x8068dd0  j           func_1A3740
label_1a3738:
    if (ctx->pc == 0x1A3738u) {
        ctx->pc = 0x1A3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3734u;
        // 0x1a3738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A373Cu;
        goto label_1a373c;
    }
    ctx->pc = 0x1A3734u;
    ctx->pc = 0x1A3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3734u;
    // 0x1a3738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3740u;
    goto label_1a3740;
    ctx->pc = 0x1A373Cu;
label_1a373c:
    // 0x1a373c: 0x0  nop
    ctx->pc = 0x1a373cu;
    // NOP
label_1a3740:
    // 0x1a3740: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a3740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1a3744:
    // 0x1a3744: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a3744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3748:
    // 0x1a3748: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1a3748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_1a374c:
    // 0x1a374c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x1a374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_1a3750:
    // 0x1a3750: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1a3750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_1a3754:
    // 0x1a3754: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x1a3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_1a3758:
    // 0x1a3758: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1a3758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_1a375c:
    // 0x1a375c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x1a375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_1a3760:
    // 0x1a3760: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1a3760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_1a3764:
    // 0x1a3764: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1a3764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_1a3768:
    // 0x1a3768: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1a3768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1a376c:
    // 0x1a376c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x1a376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_1a3770:
    // 0x1a3770: 0x8cbe0040  lw          $fp, 0x40($a1)
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_1a3774:
    // 0x1a3774: 0x8fc60848  lw          $a2, 0x848($fp)
    ctx->pc = 0x1a3774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2120)));
label_1a3778:
    // 0x1a3778: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
label_1a377c:
    if (ctx->pc == 0x1A377Cu) {
        ctx->pc = 0x1A377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3778u;
        // 0x1a377c: 0x8fc20124  lw          $v0, 0x124($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3780u;
        goto label_1a3780;
    }
    ctx->pc = 0x1A3778u;
    {
        const bool branch_taken_0x1a3778 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3778) {
            ctx->pc = 0x1A377Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3778u;
            // 0x1a377c: 0x8fc20124  lw          $v0, 0x124($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A37A8u;
            goto label_1a37a8;
        }
    }
    ctx->pc = 0x1A3780u;
label_1a3780:
    // 0x1a3780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3784:
    // 0x1a3784: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a3784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3788:
    // 0x1a3788: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a3788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a378c:
    // 0x1a378c: 0xafc30174  sw          $v1, 0x174($fp)
    ctx->pc = 0x1a378cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 372), GPR_U32(ctx, 3));
label_1a3790:
    // 0x1a3790: 0xafc2017c  sw          $v0, 0x17C($fp)
    ctx->pc = 0x1a3790u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 380), GPR_U32(ctx, 2));
label_1a3794:
    // 0x1a3794: 0xafc40144  sw          $a0, 0x144($fp)
    ctx->pc = 0x1a3794u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 324), GPR_U32(ctx, 4));
label_1a3798:
    // 0x1a3798: 0xafc2013c  sw          $v0, 0x13C($fp)
    ctx->pc = 0x1a3798u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 316), GPR_U32(ctx, 2));
label_1a379c:
    // 0x1a379c: 0xafc20140  sw          $v0, 0x140($fp)
    ctx->pc = 0x1a379cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 320), GPR_U32(ctx, 2));
label_1a37a0:
    // 0x1a37a0: 0xafc20188  sw          $v0, 0x188($fp)
    ctx->pc = 0x1a37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 2));
label_1a37a4:
    // 0x1a37a4: 0x8fc20124  lw          $v0, 0x124($fp)
    ctx->pc = 0x1a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
label_1a37a8:
    // 0x1a37a8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1a37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1a37ac:
    // 0x1a37ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a37acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a37b0:
    // 0x1a37b0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1a37b4:
    if (ctx->pc == 0x1A37B4u) {
        ctx->pc = 0x1A37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37B0u;
        // 0x1a37b4: 0xafc2012c  sw          $v0, 0x12C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37B8u;
        goto label_1a37b8;
    }
    ctx->pc = 0x1A37B0u;
    {
        const bool branch_taken_0x1a37b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37B0u;
        // 0x1a37b4: 0xafc2012c  sw          $v0, 0x12C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37b0) {
            ctx->pc = 0x1A37D4u;
            goto label_1a37d4;
        }
    }
    ctx->pc = 0x1A37B8u;
label_1a37b8:
    // 0x1a37b8: 0x8fc2013c  lw          $v0, 0x13C($fp)
    ctx->pc = 0x1a37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 316)));
label_1a37bc:
    // 0x1a37bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a37c0:
    if (ctx->pc == 0x1A37C0u) {
        ctx->pc = 0x1A37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37BCu;
        // 0x1a37c0: 0x8fc20128  lw          $v0, 0x128($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37C4u;
        goto label_1a37c4;
    }
    ctx->pc = 0x1A37BCu;
    {
        const bool branch_taken_0x1a37bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37BCu;
        // 0x1a37c0: 0x8fc20128  lw          $v0, 0x128($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37bc) {
            ctx->pc = 0x1A37D8u;
            goto label_1a37d8;
        }
    }
    ctx->pc = 0x1A37C4u;
label_1a37c4:
    // 0x1a37c4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1a37c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_1a37c8:
    // 0x1a37c8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1a37c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1a37cc:
    // 0x1a37cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a37d0:
    if (ctx->pc == 0x1A37D0u) {
        ctx->pc = 0x1A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37CCu;
        // 0x1a37d0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37D4u;
        goto label_1a37d4;
    }
    ctx->pc = 0x1A37CCu;
    {
        const bool branch_taken_0x1a37cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37CCu;
        // 0x1a37d0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37cc) {
            ctx->pc = 0x1A37E0u;
            goto label_1a37e0;
        }
    }
    ctx->pc = 0x1A37D4u;
label_1a37d4:
    // 0x1a37d4: 0x8fc20128  lw          $v0, 0x128($fp)
    ctx->pc = 0x1a37d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
label_1a37d8:
    // 0x1a37d8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1a37d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1a37dc:
    // 0x1a37dc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1a37dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1a37e0:
    // 0x1a37e0: 0xafc20130  sw          $v0, 0x130($fp)
    ctx->pc = 0x1a37e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 304), GPR_U32(ctx, 2));
label_1a37e4:
    // 0x1a37e4: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x1a37e4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a37e8:
    // 0x1a37e8: 0x8fc2012c  lw          $v0, 0x12C($fp)
    ctx->pc = 0x1a37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
label_1a37ec:
    // 0x1a37ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a37f0:
    // 0x1a37f0: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a37f4:
    // 0x1a37f4: 0x16e30004  bne         $s7, $v1, . + 4 + (0x4 << 2)
label_1a37f8:
    if (ctx->pc == 0x1A37F8u) {
        ctx->pc = 0x1A37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37F4u;
        // 0x1a37f8: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A37FCu;
        goto label_1a37fc;
    }
    ctx->pc = 0x1A37F4u;
    {
        const bool branch_taken_0x1a37f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A37F4u;
        // 0x1a37f8: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37f4) {
            ctx->pc = 0x1A3808u;
            goto label_1a3808;
        }
    }
    ctx->pc = 0x1A37FCu;
label_1a37fc:
    // 0x1a37fc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a3800:
    // 0x1a3800: 0x12c2006d  beq         $s6, $v0, . + 4 + (0x6D << 2)
label_1a3804:
    if (ctx->pc == 0x1A3804u) {
        ctx->pc = 0x1A3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3800u;
        // 0x1a3804: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3808u;
        goto label_1a3808;
    }
    ctx->pc = 0x1A3800u;
    {
        const bool branch_taken_0x1a3800 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3800u;
        // 0x1a3804: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3800) {
            ctx->pc = 0x1A39B8u;
            goto label_1a39b8;
        }
    }
    ctx->pc = 0x1A3808u;
label_1a3808:
    // 0x1a3808: 0xacb60004  sw          $s6, 0x4($a1)
    ctx->pc = 0x1a3808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 22));
label_1a380c:
    // 0x1a380c: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x1a380cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1a3810:
    // 0x1a3810: 0xacb70000  sw          $s7, 0x0($a1)
    ctx->pc = 0x1a3810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 23));
label_1a3814:
    // 0x1a3814: 0x2d08018  mult        $s0, $s6, $s0
    ctx->pc = 0x1a3814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1a3818:
    // 0x1a3818: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1a3818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_1a381c:
    // 0x1a381c: 0x27d10108  addiu       $s1, $fp, 0x108
    ctx->pc = 0x1a381cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
label_1a3820:
    // 0x1a3820: 0x27c20320  addiu       $v0, $fp, 0x320
    ctx->pc = 0x1a3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 800));
label_1a3824:
    // 0x1a3824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3828:
    // 0x1a3828: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1a3828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1a382c:
    // 0x1a382c: 0x27d301e8  addiu       $s3, $fp, 0x1E8
    ctx->pc = 0x1a382cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 488));
label_1a3830:
    // 0x1a3830: 0x27c20388  addiu       $v0, $fp, 0x388
    ctx->pc = 0x1a3830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 904));
label_1a3834:
    // 0x1a3834: 0x2f08018  mult        $s0, $s7, $s0
    ctx->pc = 0x1a3834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1a3838:
    // 0x1a3838: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1a3838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_1a383c:
    // 0x1a383c: 0x27d40250  addiu       $s4, $fp, 0x250
    ctx->pc = 0x1a383cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 592));
label_1a3840:
    // 0x1a3840: 0x27c203f0  addiu       $v0, $fp, 0x3F0
    ctx->pc = 0x1a3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1008));
label_1a3844:
    // 0x1a3844: 0x27d502b8  addiu       $s5, $fp, 0x2B8
    ctx->pc = 0x1a3844u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 696));
label_1a3848:
    // 0x1a3848: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1a3848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1a384c:
    // 0x1a384c: 0x169043  sra         $s2, $s6, 1
    ctx->pc = 0x1a384cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
label_1a3850:
    // 0x1a3850: 0x27c20458  addiu       $v0, $fp, 0x458
    ctx->pc = 0x1a3850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1112));
label_1a3854:
    // 0x1a3854: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x1a3854u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_1a3858:
    // 0x1a3858: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1a3858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_1a385c:
    // 0x1a385c: 0x27c204c0  addiu       $v0, $fp, 0x4C0
    ctx->pc = 0x1a385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1216));
label_1a3860:
    // 0x1a3860: 0xc068b62  jal         func_1A2D88
label_1a3864:
    if (ctx->pc == 0x1A3864u) {
        ctx->pc = 0x1A3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3860u;
        // 0x1a3864: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3868u;
        goto label_1a3868;
    }
    ctx->pc = 0x1A3860u;
    SET_GPR_U32(ctx, 31, 0x1A3868u);
    ctx->pc = 0x1A3864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3860u;
    // 0x1a3864: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D88u;
    { ctx->pc = 0x1a2d88; return; }
    ctx->pc = 0x1A3868u;
label_1a3868:
    // 0x1a3868: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a3868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a386c:
    // 0x1a386c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a386cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3870:
    // 0x1a3870: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3874:
    // 0x1a3874: 0xc068b66  jal         func_1A2D98
label_1a3878:
    if (ctx->pc == 0x1A3878u) {
        ctx->pc = 0x1A3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3874u;
        // 0x1a3878: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A387Cu;
        goto label_1a387c;
    }
    ctx->pc = 0x1A3874u;
    SET_GPR_U32(ctx, 31, 0x1A387Cu);
    ctx->pc = 0x1A3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3874u;
    // 0x1a3878: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D98u;
    { ctx->pc = 0x1a2d98; return; }
    ctx->pc = 0x1A387Cu;
label_1a387c:
    // 0x1a387c: 0xafc200fc  sw          $v0, 0xFC($fp)
    ctx->pc = 0x1a387cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
label_1a3880:
    // 0x1a3880: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a3880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a3884:
    // 0x1a3884: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a3884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3888:
    // 0x1a3888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a388c:
    // 0x1a388c: 0xc068b66  jal         func_1A2D98
label_1a3890:
    if (ctx->pc == 0x1A3890u) {
        ctx->pc = 0x1A3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A388Cu;
        // 0x1a3890: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3894u;
        goto label_1a3894;
    }
    ctx->pc = 0x1A388Cu;
    SET_GPR_U32(ctx, 31, 0x1A3894u);
    ctx->pc = 0x1A3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A388Cu;
    // 0x1a3890: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D98u;
    { ctx->pc = 0x1a2d98; return; }
    ctx->pc = 0x1A3894u;
label_1a3894:
    // 0x1a3894: 0xafc20100  sw          $v0, 0x100($fp)
    ctx->pc = 0x1a3894u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
label_1a3898:
    // 0x1a3898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a3898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a389c:
    // 0x1a389c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a389cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a38a0:
    // 0x1a38a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1a38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1a38a4:
    // 0x1a38a4: 0xc068b66  jal         func_1A2D98
label_1a38a8:
    if (ctx->pc == 0x1A38A8u) {
        ctx->pc = 0x1A38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38A4u;
        // 0x1a38a8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38ACu;
        goto label_1a38ac;
    }
    ctx->pc = 0x1A38A4u;
    SET_GPR_U32(ctx, 31, 0x1A38ACu);
    ctx->pc = 0x1A38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38A4u;
    // 0x1a38a8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D98u;
    { ctx->pc = 0x1a2d98; return; }
    ctx->pc = 0x1A38ACu;
label_1a38ac:
    // 0x1a38ac: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x1a38acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1a38b0:
    // 0x1a38b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a38b4:
    // 0x1a38b4: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x1a38b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a38b8:
    // 0x1a38b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a38b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a38bc:
    // 0x1a38bc: 0x8faa003c  lw          $t2, 0x3C($sp)
    ctx->pc = 0x1a38bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a38c0:
    // 0x1a38c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1a38c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a38c4:
    // 0x1a38c4: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x1a38c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a38c8:
    // 0x1a38c8: 0xafc20104  sw          $v0, 0x104($fp)
    ctx->pc = 0x1a38c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
label_1a38cc:
    // 0x1a38cc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1a38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1a38d0:
    // 0x1a38d0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x1a38d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a38d4:
    // 0x1a38d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a38d8:
    // 0x1a38d8: 0x8fc200fc  lw          $v0, 0xFC($fp)
    ctx->pc = 0x1a38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
label_1a38dc:
    // 0x1a38dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1a38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1a38e0:
    // 0x1a38e0: 0x8fc30100  lw          $v1, 0x100($fp)
    ctx->pc = 0x1a38e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 256)));
label_1a38e4:
    // 0x1a38e4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a38e8:
    // 0x1a38e8: 0x8fc20104  lw          $v0, 0x104($fp)
    ctx->pc = 0x1a38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 260)));
label_1a38ec:
    // 0x1a38ec: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x1a38ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
label_1a38f0:
    // 0x1a38f0: 0xafb60028  sw          $s6, 0x28($sp)
    ctx->pc = 0x1a38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 22));
label_1a38f4:
    // 0x1a38f4: 0xc068e7a  jal         func_1A39E8
label_1a38f8:
    if (ctx->pc == 0x1A38F8u) {
        ctx->pc = 0x1A38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A38F4u;
        // 0x1a38f8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A38FCu;
        goto label_1a38fc;
    }
    ctx->pc = 0x1A38F4u;
    SET_GPR_U32(ctx, 31, 0x1A38FCu);
    ctx->pc = 0x1A38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A38F4u;
    // 0x1a38f8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A39E8u;
    goto label_1a39e8;
    ctx->pc = 0x1A38FCu;
label_1a38fc:
    // 0x1a38fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a38fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3900:
    // 0x1a3900: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3904:
    // 0x1a3904: 0xc068d7e  jal         func_1A35F8
label_1a3908:
    if (ctx->pc == 0x1A3908u) {
        ctx->pc = 0x1A3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3904u;
        // 0x1a3908: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A390Cu;
        goto label_1a390c;
    }
    ctx->pc = 0x1A3904u;
    SET_GPR_U32(ctx, 31, 0x1A390Cu);
    ctx->pc = 0x1A3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3904u;
    // 0x1a3908: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    goto label_1a35f8;
    ctx->pc = 0x1A390Cu;
label_1a390c:
    // 0x1a390c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a3910:
    // 0x1a3910: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3914:
    // 0x1a3914: 0xc068d7e  jal         func_1A35F8
label_1a3918:
    if (ctx->pc == 0x1A3918u) {
        ctx->pc = 0x1A3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3914u;
        // 0x1a3918: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A391Cu;
        goto label_1a391c;
    }
    ctx->pc = 0x1A3914u;
    SET_GPR_U32(ctx, 31, 0x1A391Cu);
    ctx->pc = 0x1A3918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3914u;
    // 0x1a3918: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    goto label_1a35f8;
    ctx->pc = 0x1A391Cu;
label_1a391c:
    // 0x1a391c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a3920:
    // 0x1a3920: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3924:
    // 0x1a3924: 0xc068d7e  jal         func_1A35F8
label_1a3928:
    if (ctx->pc == 0x1A3928u) {
        ctx->pc = 0x1A3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3924u;
        // 0x1a3928: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A392Cu;
        goto label_1a392c;
    }
    ctx->pc = 0x1A3924u;
    SET_GPR_U32(ctx, 31, 0x1A392Cu);
    ctx->pc = 0x1A3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3924u;
    // 0x1a3928: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    goto label_1a35f8;
    ctx->pc = 0x1A392Cu;
label_1a392c:
    // 0x1a392c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1a392cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3930:
    // 0x1a3930: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3934:
    // 0x1a3934: 0xc068d7e  jal         func_1A35F8
label_1a3938:
    if (ctx->pc == 0x1A3938u) {
        ctx->pc = 0x1A3938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3934u;
        // 0x1a3938: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A393Cu;
        goto label_1a393c;
    }
    ctx->pc = 0x1A3934u;
    SET_GPR_U32(ctx, 31, 0x1A393Cu);
    ctx->pc = 0x1A3938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3934u;
    // 0x1a3938: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    goto label_1a35f8;
    ctx->pc = 0x1A393Cu;
label_1a393c:
    // 0x1a393c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1a393cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1a3940:
    // 0x1a3940: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3944:
    // 0x1a3944: 0xc068d7e  jal         func_1A35F8
label_1a3948:
    if (ctx->pc == 0x1A3948u) {
        ctx->pc = 0x1A3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3944u;
        // 0x1a3948: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A394Cu;
        goto label_1a394c;
    }
    ctx->pc = 0x1A3944u;
    SET_GPR_U32(ctx, 31, 0x1A394Cu);
    ctx->pc = 0x1A3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3944u;
    // 0x1a3948: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    goto label_1a35f8;
    ctx->pc = 0x1A394Cu;
label_1a394c:
    // 0x1a394c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a3950:
    // 0x1a3950: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3954:
    // 0x1a3954: 0xc068d7e  jal         func_1A35F8
label_1a3958:
    if (ctx->pc == 0x1A3958u) {
        ctx->pc = 0x1A3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3954u;
        // 0x1a3958: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A395Cu;
        goto label_1a395c;
    }
    ctx->pc = 0x1A3954u;
    SET_GPR_U32(ctx, 31, 0x1A395Cu);
    ctx->pc = 0x1A3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3954u;
    // 0x1a3958: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    goto label_1a35f8;
    ctx->pc = 0x1A395Cu;
label_1a395c:
    // 0x1a395c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1a395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a3960:
    // 0x1a3960: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3964:
    // 0x1a3964: 0xc068d7e  jal         func_1A35F8
label_1a3968:
    if (ctx->pc == 0x1A3968u) {
        ctx->pc = 0x1A3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3964u;
        // 0x1a3968: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A396Cu;
        goto label_1a396c;
    }
    ctx->pc = 0x1A3964u;
    SET_GPR_U32(ctx, 31, 0x1A396Cu);
    ctx->pc = 0x1A3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3964u;
    // 0x1a3968: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    goto label_1a35f8;
    ctx->pc = 0x1A396Cu;
label_1a396c:
    // 0x1a396c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3970:
    // 0x1a3970: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a3970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3974:
    // 0x1a3974: 0xc068d7e  jal         func_1A35F8
label_1a3978:
    if (ctx->pc == 0x1A3978u) {
        ctx->pc = 0x1A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3974u;
        // 0x1a3978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A397Cu;
        goto label_1a397c;
    }
    ctx->pc = 0x1A3974u;
    SET_GPR_U32(ctx, 31, 0x1A397Cu);
    ctx->pc = 0x1A3978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3974u;
    // 0x1a3978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    goto label_1a35f8;
    ctx->pc = 0x1A397Cu;
label_1a397c:
    // 0x1a397c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1a397cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a3980:
    // 0x1a3980: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a3980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3984:
    // 0x1a3984: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1a3984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_1a3988:
    // 0x1a3988: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1a3988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1a398c:
    // 0x1a398c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1a398cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a3990:
    // 0x1a3990: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1a3990u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a3994:
    // 0x1a3994: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1a3994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a3998:
    // 0x1a3998: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1a3998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a399c:
    // 0x1a399c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1a399cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a39a0:
    // 0x1a39a0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1a39a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a39a4:
    // 0x1a39a4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1a39a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a39a8:
    // 0x1a39a8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1a39a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a39ac:
    // 0x1a39ac: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a39acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a39b0:
    // 0x1a39b0: 0x8068d7e  j           func_1A35F8
label_1a39b4:
    if (ctx->pc == 0x1A39B4u) {
        ctx->pc = 0x1A39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39B0u;
        // 0x1a39b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39B8u;
        goto label_1a39b8;
    }
    ctx->pc = 0x1A39B0u;
    ctx->pc = 0x1A39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39B0u;
    // 0x1a39b4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A35F8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a35f8;
    ctx->pc = 0x1A39B8u;
label_1a39b8:
    // 0x1a39b8: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1a39b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1a39bc:
    // 0x1a39bc: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1a39bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a39c0:
    // 0x1a39c0: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1a39c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a39c4:
    // 0x1a39c4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1a39c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a39c8:
    // 0x1a39c8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1a39c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a39cc:
    // 0x1a39cc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1a39ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a39d0:
    // 0x1a39d0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1a39d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a39d4:
    // 0x1a39d4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1a39d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a39d8:
    // 0x1a39d8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1a39d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a39dc:
    // 0x1a39dc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a39dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a39e0:
    // 0x1a39e0: 0x3e00008  jr          $ra
label_1a39e4:
    if (ctx->pc == 0x1A39E4u) {
        ctx->pc = 0x1A39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39E0u;
        // 0x1a39e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A39E8u;
        goto label_1a39e8;
    }
    ctx->pc = 0x1A39E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39E0u;
        // 0x1a39e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A39E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A39E8u;
label_1a39e8:
    // 0x1a39e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a39e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a39ec:
    // 0x1a39ec: 0x3c0e0fff  lui         $t6, 0xFFF
    ctx->pc = 0x1a39ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4095 << 16));
label_1a39f0:
    // 0x1a39f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1a39f4:
    // 0x1a39f4: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x1a39f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
label_1a39f8:
    // 0x1a39f8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1a39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1a39fc:
    // 0x1a39fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a39fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3a00:
    // 0x1a3a00: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1a3a00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a3a04:
    // 0x1a3a04: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1a3a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a3a08:
    // 0x1a3a08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a3a0c:
    // 0x1a3a0c: 0x24120180  addiu       $s2, $zero, 0x180
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1a3a10:
    // 0x1a3a10: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x1a3a10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a3a14:
    // 0x1a3a14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a3a18:
    // 0x1a3a18: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x1a3a18u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a3a1c:
    // 0x1a3a1c: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x1a3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
label_1a3a20:
    // 0x1a3a20: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x1a3a20u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1a3a24:
    // 0x1a3a24: 0x18e8824  and         $s1, $t4, $t6
    ctx->pc = 0x1a3a24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
label_1a3a28:
    // 0x1a3a28: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x1a3a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
label_1a3a2c:
    // 0x1a3a2c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a3a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a3a30:
    // 0x1a3a30: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1a3a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a3a34:
    // 0x1a3a34: 0x8fad0060  lw          $t5, 0x60($sp)
    ctx->pc = 0x1a3a34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1a3a38:
    // 0x1a3a38: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x1a3a38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
label_1a3a3c:
    // 0x1a3a3c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a3a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a3a40:
    // 0x1a3a40: 0x8fb40068  lw          $s4, 0x68($sp)
    ctx->pc = 0x1a3a40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a3a44:
    // 0x1a3a44: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x1a3a44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
label_1a3a48:
    // 0x1a3a48: 0x1ae7824  and         $t7, $t5, $t6
    ctx->pc = 0x1a3a48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
label_1a3a4c:
    // 0x1a3a4c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x1a3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_1a3a50:
    // 0x1a3a50: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x1a3a50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_1a3a54:
    // 0x1a3a54: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x1a3a54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
label_1a3a58:
    // 0x1a3a58: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x1a3a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a3a5c:
    // 0x1a3a5c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x1a3a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1a3a60:
    // 0x1a3a60: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x1a3a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
label_1a3a64:
    // 0x1a3a64: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x1a3a64u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
label_1a3a68:
    // 0x1a3a68: 0x1936025  or          $t4, $t4, $s3
    ctx->pc = 0x1a3a68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 19));
label_1a3a6c:
    // 0x1a3a6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3a70:
    // 0x1a3a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3a74:
    // 0x1a3a74: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_1a3a78:
    // 0x1a3a78: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1a3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1a3a7c:
    // 0x1a3a7c: 0x28e1824  and         $v1, $s4, $t6
    ctx->pc = 0x1a3a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 14));
label_1a3a80:
    // 0x1a3a80: 0x1ae6824  and         $t5, $t5, $t6
    ctx->pc = 0x1a3a80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 14));
label_1a3a84:
    // 0x1a3a84: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x1a3a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_1a3a88:
    // 0x1a3a88: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1a3a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_1a3a8c:
    // 0x1a3a8c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a3a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1a3a90:
    // 0x1a3a90: 0x1b36825  or          $t5, $t5, $s3
    ctx->pc = 0x1a3a90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 19));
label_1a3a94:
    // 0x1a3a94: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x1a3a94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
label_1a3a98:
    // 0x1a3a98: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x1a3a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_1a3a9c:
    // 0x1a3a9c: 0xad0f0000  sw          $t7, 0x0($t0)
    ctx->pc = 0x1a3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
label_1a3aa0:
    // 0x1a3aa0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x1a3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_1a3aa4:
    // 0x1a3aa4: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x1a3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
label_1a3aa8:
    // 0x1a3aa8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3aac:
    // 0x1a3aac: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x1a3aacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
label_1a3ab0:
    // 0x1a3ab0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a3ab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3ab4:
    // 0x1a3ab4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a3ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3ab8:
    // 0x1a3ab8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a3ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3abc:
    // 0x1a3abc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a3ac0:
    // 0x1a3ac0: 0x3e00008  jr          $ra
label_1a3ac4:
    if (ctx->pc == 0x1A3AC4u) {
        ctx->pc = 0x1A3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AC0u;
        // 0x1a3ac4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3AC8u;
        goto label_1a3ac8;
    }
    ctx->pc = 0x1A3AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AC0u;
        // 0x1a3ac4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3AC8u;
label_1a3ac8:
    // 0x1a3ac8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a3ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a3acc:
    // 0x1a3acc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a3ad0:
    // 0x1a3ad0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a3ad4:
    // 0x1a3ad4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a3ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a3ad8:
    // 0x1a3ad8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a3ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3adc:
    // 0x1a3adc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a3adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a3ae0:
    // 0x1a3ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ae4:
    // 0x1a3ae4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a3ae8:
    // 0x1a3ae8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a3ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3aec:
    // 0x1a3aec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3af0:
    // 0x1a3af0: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a3af4:
    // 0x1a3af4: 0xc068b12  jal         func_1A2C48
label_1a3af8:
    if (ctx->pc == 0x1A3AF8u) {
        ctx->pc = 0x1A3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AF4u;
        // 0x1a3af8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3AFCu;
        goto label_1a3afc;
    }
    ctx->pc = 0x1A3AF4u;
    SET_GPR_U32(ctx, 31, 0x1A3AFCu);
    ctx->pc = 0x1A3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AF4u;
    // 0x1a3af8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x1A3AFCu;
label_1a3afc:
    // 0x1a3afc: 0xc067ca0  jal         func_19F280
label_1a3b00:
    if (ctx->pc == 0x1A3B00u) {
        ctx->pc = 0x1A3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AFCu;
        // 0x1a3b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B04u;
        goto label_1a3b04;
    }
    ctx->pc = 0x1A3AFCu;
    SET_GPR_U32(ctx, 31, 0x1A3B04u);
    ctx->pc = 0x1A3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AFCu;
    // 0x1a3b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A3B04u;
label_1a3b04:
    // 0x1a3b04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a3b08:
    // 0x1a3b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b0c:
    // 0x1a3b0c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1a3b10:
    // 0x1a3b10: 0xc067ca0  jal         func_19F280
label_1a3b14:
    if (ctx->pc == 0x1A3B14u) {
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B10u;
        // 0x1a3b14: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B18u;
        goto label_1a3b18;
    }
    ctx->pc = 0x1A3B10u;
    SET_GPR_U32(ctx, 31, 0x1A3B18u);
    ctx->pc = 0x1A3B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B10u;
    // 0x1a3b14: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A3B18u;
label_1a3b18:
    // 0x1a3b18: 0xc06b518  jal         func_1AD460
label_1a3b1c:
    if (ctx->pc == 0x1A3B1Cu) {
        ctx->pc = 0x1A3B20u;
        goto label_1a3b20;
    }
    ctx->pc = 0x1A3B18u;
    SET_GPR_U32(ctx, 31, 0x1A3B20u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A3B20u;
label_1a3b20:
    // 0x1a3b20: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1a3b24:
    // 0x1a3b24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a3b28:
    // 0x1a3b28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a3b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a3b2c:
    // 0x1a3b2c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a3b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_1a3b30:
    // 0x1a3b30: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1a3b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1a3b34:
    // 0x1a3b34: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a3b38:
    // 0x1a3b38: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a3b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1a3b3c:
    // 0x1a3b3c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1a3b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
label_1a3b40:
    // 0x1a3b40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a3b44:
    // 0x1a3b44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a3b48:
    // 0x1a3b48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1a3b4c:
    // 0x1a3b4c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a3b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
label_1a3b50:
    // 0x1a3b50: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1a3b54:
    // 0x1a3b54: 0xc06b52a  jal         func_1AD4A8
label_1a3b58:
    if (ctx->pc == 0x1A3B58u) {
        ctx->pc = 0x1A3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B54u;
        // 0x1a3b58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B5Cu;
        goto label_1a3b5c;
    }
    ctx->pc = 0x1A3B54u;
    SET_GPR_U32(ctx, 31, 0x1A3B5Cu);
    ctx->pc = 0x1A3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B54u;
    // 0x1a3b58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A3B5Cu;
label_1a3b5c:
    // 0x1a3b5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a3b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b60:
    // 0x1a3b60: 0xc067c94  jal         func_19F250
label_1a3b64:
    if (ctx->pc == 0x1A3B64u) {
        ctx->pc = 0x1A3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B60u;
        // 0x1a3b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B68u;
        goto label_1a3b68;
    }
    ctx->pc = 0x1A3B60u;
    SET_GPR_U32(ctx, 31, 0x1A3B68u);
    ctx->pc = 0x1A3B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B60u;
    // 0x1a3b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x1A3B68u;
label_1a3b68:
    // 0x1a3b68: 0xc067ca0  jal         func_19F280
label_1a3b6c:
    if (ctx->pc == 0x1A3B6Cu) {
        ctx->pc = 0x1A3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B68u;
        // 0x1a3b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B70u;
        goto label_1a3b70;
    }
    ctx->pc = 0x1A3B68u;
    SET_GPR_U32(ctx, 31, 0x1A3B70u);
    ctx->pc = 0x1A3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B68u;
    // 0x1a3b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A3B70u;
label_1a3b70:
    // 0x1a3b70: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a3b74:
    // 0x1a3b74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3b78:
    // 0x1a3b78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a3b7c:
    // 0x1a3b7c: 0xc068b12  jal         func_1A2C48
label_1a3b80:
    if (ctx->pc == 0x1A3B80u) {
        ctx->pc = 0x1A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B7Cu;
        // 0x1a3b80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B84u;
        goto label_1a3b84;
    }
    ctx->pc = 0x1A3B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3B84u);
    ctx->pc = 0x1A3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B7Cu;
    // 0x1a3b80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x1A3B84u;
label_1a3b84:
    // 0x1a3b84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a3b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3b88:
    // 0x1a3b88: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a3b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3b8c:
    // 0x1a3b8c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a3b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3b90:
    // 0x1a3b90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a3b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3b94:
    // 0x1a3b94: 0x3e00008  jr          $ra
label_1a3b98:
    if (ctx->pc == 0x1A3B98u) {
        ctx->pc = 0x1A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B94u;
        // 0x1a3b98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B9Cu;
        goto label_1a3b9c;
    }
    ctx->pc = 0x1A3B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B94u;
        // 0x1a3b98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3B9Cu;
label_1a3b9c:
    // 0x1a3b9c: 0x0  nop
    ctx->pc = 0x1a3b9cu;
    // NOP
label_1a3ba0:
    // 0x1a3ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a3ba4:
    // 0x1a3ba4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a3ba8:
    // 0x1a3ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3bac:
    // 0x1a3bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bb0:
    // 0x1a3bb0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a3bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a3bb4:
    // 0x1a3bb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a3bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3bb8:
    // 0x1a3bb8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a3bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a3bbc:
    // 0x1a3bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bc0:
    // 0x1a3bc0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a3bc4:
    // 0x1a3bc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a3bc8:
    // 0x1a3bc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a3bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a3bcc:
    // 0x1a3bcc: 0xc06781e  jal         func_19E078
label_1a3bd0:
    if (ctx->pc == 0x1A3BD0u) {
        ctx->pc = 0x1A3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BCCu;
        // 0x1a3bd0: 0xae300848  sw          $s0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BD4u;
        goto label_1a3bd4;
    }
    ctx->pc = 0x1A3BCCu;
    SET_GPR_U32(ctx, 31, 0x1A3BD4u);
    ctx->pc = 0x1A3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BCCu;
    // 0x1a3bd0: 0xae300848  sw          $s0, 0x848($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E078u;
    { ctx->pc = 0x19e078; return; }
    ctx->pc = 0x1A3BD4u;
label_1a3bd4:
    // 0x1a3bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bd8:
    // 0x1a3bd8: 0xc067dd2  jal         func_19F748
label_1a3bdc:
    if (ctx->pc == 0x1A3BDCu) {
        ctx->pc = 0x1A3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BD8u;
        // 0x1a3bdc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BE0u;
        goto label_1a3be0;
    }
    ctx->pc = 0x1A3BD8u;
    SET_GPR_U32(ctx, 31, 0x1A3BE0u);
    ctx->pc = 0x1A3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BD8u;
    // 0x1a3bdc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3BE0u;
label_1a3be0:
    // 0x1a3be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a3be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3be4:
    // 0x1a3be4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_1a3be8:
    // 0x1a3be8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
label_1a3bec:
    // 0x1a3bec: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x1a3becu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1a3bf0:
    // 0x1a3bf0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1a3bf4:
    // 0x1a3bf4: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x1a3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
label_1a3bf8:
    // 0x1a3bf8: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x1a3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
label_1a3bfc:
    // 0x1a3bfc: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x1a3bfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1a3c00:
    // 0x1a3c00: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x1a3c00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1a3c04:
    // 0x1a3c04: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_1a3c08:
    if (ctx->pc == 0x1A3C08u) {
        ctx->pc = 0x1A3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C04u;
        // 0x1a3c08: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C0Cu;
        goto label_1a3c0c;
    }
    ctx->pc = 0x1A3C04u;
    {
        const bool branch_taken_0x1a3c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C04u;
        // 0x1a3c08: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c04) {
            ctx->pc = 0x1A3C1Cu;
            goto label_1a3c1c;
        }
    }
    ctx->pc = 0x1A3C0Cu;
label_1a3c0c:
    // 0x1a3c0c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a3c10:
    // 0x1a3c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c14:
    // 0x1a3c14: 0xc068d2c  jal         func_1A34B0
label_1a3c18:
    if (ctx->pc == 0x1A3C18u) {
        ctx->pc = 0x1A3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C14u;
        // 0x1a3c18: 0x24a5a3c0  addiu       $a1, $a1, -0x5C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C1Cu;
        goto label_1a3c1c;
    }
    ctx->pc = 0x1A3C14u;
    SET_GPR_U32(ctx, 31, 0x1A3C1Cu);
    ctx->pc = 0x1A3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C14u;
    // 0x1a3c18: 0x24a5a3c0  addiu       $a1, $a1, -0x5C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3C1Cu;
label_1a3c1c:
    // 0x1a3c1c: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_1a3c20:
    // 0x1a3c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c24:
    // 0x1a3c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a3c28:
    // 0x1a3c28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a3c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a3c2c:
    // 0x1a3c2c: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x1a3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
label_1a3c30:
    // 0x1a3c30: 0xc067dd2  jal         func_19F748
label_1a3c34:
    if (ctx->pc == 0x1A3C34u) {
        ctx->pc = 0x1A3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C30u;
        // 0x1a3c34: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C38u;
        goto label_1a3c38;
    }
    ctx->pc = 0x1A3C30u;
    SET_GPR_U32(ctx, 31, 0x1A3C38u);
    ctx->pc = 0x1A3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C30u;
    // 0x1a3c34: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3C38u;
label_1a3c38:
    // 0x1a3c38: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x1a3c38u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_1a3c3c:
    // 0x1a3c3c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1a3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1a3c40:
    // 0x1a3c40: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_1a3c44:
    if (ctx->pc == 0x1A3C44u) {
        ctx->pc = 0x1A3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C40u;
        // 0x1a3c44: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C48u;
        goto label_1a3c48;
    }
    ctx->pc = 0x1A3C40u;
    {
        const bool branch_taken_0x1a3c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C40u;
        // 0x1a3c44: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c40) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C48u;
label_1a3c48:
    // 0x1a3c48: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_1a3c4c:
    if (ctx->pc == 0x1A3C4Cu) {
        ctx->pc = 0x1A3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C48u;
        // 0x1a3c4c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C50u;
        goto label_1a3c50;
    }
    ctx->pc = 0x1A3C48u;
    {
        const bool branch_taken_0x1a3c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C48u;
        // 0x1a3c4c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c48) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C50u;
label_1a3c50:
    // 0x1a3c50: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_1a3c54:
    if (ctx->pc == 0x1A3C54u) {
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C58u;
        goto label_1a3c58;
    }
    ctx->pc = 0x1A3C50u;
    {
        const bool branch_taken_0x1a3c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c50) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C58u;
label_1a3c58:
    // 0x1a3c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c5c:
    // 0x1a3c5c: 0xc068d2c  jal         func_1A34B0
label_1a3c60:
    if (ctx->pc == 0x1A3C60u) {
        ctx->pc = 0x1A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C5Cu;
        // 0x1a3c60: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C64u;
        goto label_1a3c64;
    }
    ctx->pc = 0x1A3C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C64u);
    ctx->pc = 0x1A3C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C5Cu;
    // 0x1a3c60: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3C64u;
label_1a3c64:
    // 0x1a3c64: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_1a3c68:
    // 0x1a3c68: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
label_1a3c6c:
    // 0x1a3c6c: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_1a3c70:
    // 0x1a3c70: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
label_1a3c74:
    // 0x1a3c74: 0x8e260134  lw          $a2, 0x134($s1)
    ctx->pc = 0x1a3c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_1a3c78:
    // 0x1a3c78: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
label_1a3c7c:
    // 0x1a3c7c: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x1a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_1a3c80:
    // 0x1a3c80: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x1a3c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
label_1a3c84:
    // 0x1a3c84: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1a3c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_1a3c88:
    // 0x1a3c88: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1a3c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1a3c8c:
    // 0x1a3c8c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1a3c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_1a3c90:
    // 0x1a3c90: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1a3c94:
    // 0x1a3c94: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1a3c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1a3c98:
    // 0x1a3c98: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1a3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1a3c9c:
    // 0x1a3c9c: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x1a3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
label_1a3ca0:
    // 0x1a3ca0: 0xae270124  sw          $a3, 0x124($s1)
    ctx->pc = 0x1a3ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 7));
label_1a3ca4:
    // 0x1a3ca4: 0xae250128  sw          $a1, 0x128($s1)
    ctx->pc = 0x1a3ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 5));
label_1a3ca8:
    // 0x1a3ca8: 0xae260134  sw          $a2, 0x134($s1)
    ctx->pc = 0x1a3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 6));
label_1a3cac:
    // 0x1a3cac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a3cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a3cb0:
    // 0x1a3cb0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a3cb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3cb4:
    // 0x1a3cb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a3cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3cb8:
    // 0x1a3cb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3cbc:
    // 0x1a3cbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3cc0:
    // 0x1a3cc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a3cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3cc4:
    // 0x1a3cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3cc8:
    // 0x1a3cc8: 0x3e00008  jr          $ra
label_1a3ccc:
    if (ctx->pc == 0x1A3CCCu) {
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CD0u;
        goto label_1a3cd0;
    }
    ctx->pc = 0x1A3CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3CD0u;
label_1a3cd0:
    // 0x1a3cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3cd4:
    // 0x1a3cd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a3cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3cd8:
    // 0x1a3cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3cdc:
    // 0x1a3cdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3ce0:
    // 0x1a3ce0: 0xc067dd2  jal         func_19F748
label_1a3ce4:
    if (ctx->pc == 0x1A3CE4u) {
        ctx->pc = 0x1A3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CE0u;
        // 0x1a3ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CE8u;
        goto label_1a3ce8;
    }
    ctx->pc = 0x1A3CE0u;
    SET_GPR_U32(ctx, 31, 0x1A3CE8u);
    ctx->pc = 0x1A3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CE0u;
    // 0x1a3ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3CE8u;
label_1a3ce8:
    // 0x1a3ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3cec:
    // 0x1a3cec: 0xc067dd2  jal         func_19F748
label_1a3cf0:
    if (ctx->pc == 0x1A3CF0u) {
        ctx->pc = 0x1A3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CECu;
        // 0x1a3cf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CF4u;
        goto label_1a3cf4;
    }
    ctx->pc = 0x1A3CECu;
    SET_GPR_U32(ctx, 31, 0x1A3CF4u);
    ctx->pc = 0x1A3CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CECu;
    // 0x1a3cf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3CF4u;
label_1a3cf4:
    // 0x1a3cf4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a3cf8:
    if (ctx->pc == 0x1A3CF8u) {
        ctx->pc = 0x1A3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF4u;
        // 0x1a3cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CFCu;
        goto label_1a3cfc;
    }
    ctx->pc = 0x1A3CF4u;
    {
        const bool branch_taken_0x1a3cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF4u;
        // 0x1a3cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cf4) {
            ctx->pc = 0x1A3D20u;
            { ctx->pc = 0x1a3d20; return; }
        }
    }
    ctx->pc = 0x1A3CFCu;
label_1a3cfc:
    // 0x1a3cfc: 0xc067dd2  jal         func_19F748
label_1a3d00:
    if (ctx->pc == 0x1A3D00u) {
        ctx->pc = 0x1A3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CFCu;
        // 0x1a3d00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D04u;
        goto label_1a3d04;
    }
    ctx->pc = 0x1A3CFCu;
    SET_GPR_U32(ctx, 31, 0x1A3D04u);
    ctx->pc = 0x1A3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CFCu;
    // 0x1a3d00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D04u;
label_1a3d04:
    // 0x1a3d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d08:
    // 0x1a3d08: 0xc067dd2  jal         func_19F748
label_1a3d0c:
    if (ctx->pc == 0x1A3D0Cu) {
        ctx->pc = 0x1A3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D08u;
        // 0x1a3d0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D10u;
        goto label_1a3d10;
    }
    ctx->pc = 0x1A3D08u;
    SET_GPR_U32(ctx, 31, 0x1A3D10u);
    ctx->pc = 0x1A3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D08u;
    // 0x1a3d0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D10u;
label_1a3d10:
    // 0x1a3d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d14:
    // 0x1a3d14: 0xc067dd2  jal         func_19F748
label_1a3d18:
    if (ctx->pc == 0x1A3D18u) {
        ctx->pc = 0x1A3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D14u;
        // 0x1a3d18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D1Cu;
        goto label_1a3d1c;
    }
    ctx->pc = 0x1A3D14u;
    SET_GPR_U32(ctx, 31, 0x1A3D1Cu);
    ctx->pc = 0x1A3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D14u;
    // 0x1a3d18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D1Cu;
label_1a3d1c:
    // 0x1a3d1c: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x1a3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    ctx->pc = 0x1a3d20u;
    return;
}

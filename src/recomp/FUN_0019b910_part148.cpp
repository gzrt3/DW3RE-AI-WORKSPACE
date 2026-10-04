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


void FUN_0019b910_part148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e3580u: goto label_1e3580;
        case 0x1e3584u: goto label_1e3584;
        case 0x1e3588u: goto label_1e3588;
        case 0x1e358cu: goto label_1e358c;
        case 0x1e3590u: goto label_1e3590;
        case 0x1e3594u: goto label_1e3594;
        case 0x1e3598u: goto label_1e3598;
        case 0x1e359cu: goto label_1e359c;
        case 0x1e35a0u: goto label_1e35a0;
        case 0x1e35a4u: goto label_1e35a4;
        case 0x1e35a8u: goto label_1e35a8;
        case 0x1e35acu: goto label_1e35ac;
        case 0x1e35b0u: goto label_1e35b0;
        case 0x1e35b4u: goto label_1e35b4;
        case 0x1e35b8u: goto label_1e35b8;
        case 0x1e35bcu: goto label_1e35bc;
        case 0x1e35c0u: goto label_1e35c0;
        case 0x1e35c4u: goto label_1e35c4;
        case 0x1e35c8u: goto label_1e35c8;
        case 0x1e35ccu: goto label_1e35cc;
        case 0x1e35d0u: goto label_1e35d0;
        case 0x1e35d4u: goto label_1e35d4;
        case 0x1e35d8u: goto label_1e35d8;
        case 0x1e35dcu: goto label_1e35dc;
        case 0x1e35e0u: goto label_1e35e0;
        case 0x1e35e4u: goto label_1e35e4;
        case 0x1e35e8u: goto label_1e35e8;
        case 0x1e35ecu: goto label_1e35ec;
        case 0x1e35f0u: goto label_1e35f0;
        case 0x1e35f4u: goto label_1e35f4;
        case 0x1e35f8u: goto label_1e35f8;
        case 0x1e35fcu: goto label_1e35fc;
        case 0x1e3600u: goto label_1e3600;
        case 0x1e3604u: goto label_1e3604;
        case 0x1e3608u: goto label_1e3608;
        case 0x1e360cu: goto label_1e360c;
        case 0x1e3610u: goto label_1e3610;
        case 0x1e3614u: goto label_1e3614;
        case 0x1e3618u: goto label_1e3618;
        case 0x1e361cu: goto label_1e361c;
        case 0x1e3620u: goto label_1e3620;
        case 0x1e3624u: goto label_1e3624;
        case 0x1e3628u: goto label_1e3628;
        case 0x1e362cu: goto label_1e362c;
        case 0x1e3630u: goto label_1e3630;
        case 0x1e3634u: goto label_1e3634;
        case 0x1e3638u: goto label_1e3638;
        case 0x1e363cu: goto label_1e363c;
        case 0x1e3640u: goto label_1e3640;
        case 0x1e3644u: goto label_1e3644;
        case 0x1e3648u: goto label_1e3648;
        case 0x1e364cu: goto label_1e364c;
        case 0x1e3650u: goto label_1e3650;
        case 0x1e3654u: goto label_1e3654;
        case 0x1e3658u: goto label_1e3658;
        case 0x1e365cu: goto label_1e365c;
        case 0x1e3660u: goto label_1e3660;
        case 0x1e3664u: goto label_1e3664;
        case 0x1e3668u: goto label_1e3668;
        case 0x1e366cu: goto label_1e366c;
        case 0x1e3670u: goto label_1e3670;
        case 0x1e3674u: goto label_1e3674;
        case 0x1e3678u: goto label_1e3678;
        case 0x1e367cu: goto label_1e367c;
        case 0x1e3680u: goto label_1e3680;
        case 0x1e3684u: goto label_1e3684;
        case 0x1e3688u: goto label_1e3688;
        case 0x1e368cu: goto label_1e368c;
        case 0x1e3690u: goto label_1e3690;
        case 0x1e3694u: goto label_1e3694;
        case 0x1e3698u: goto label_1e3698;
        case 0x1e369cu: goto label_1e369c;
        case 0x1e36a0u: goto label_1e36a0;
        case 0x1e36a4u: goto label_1e36a4;
        case 0x1e36a8u: goto label_1e36a8;
        case 0x1e36acu: goto label_1e36ac;
        case 0x1e36b0u: goto label_1e36b0;
        case 0x1e36b4u: goto label_1e36b4;
        case 0x1e36b8u: goto label_1e36b8;
        case 0x1e36bcu: goto label_1e36bc;
        case 0x1e36c0u: goto label_1e36c0;
        case 0x1e36c4u: goto label_1e36c4;
        case 0x1e36c8u: goto label_1e36c8;
        case 0x1e36ccu: goto label_1e36cc;
        case 0x1e36d0u: goto label_1e36d0;
        case 0x1e36d4u: goto label_1e36d4;
        case 0x1e36d8u: goto label_1e36d8;
        case 0x1e36dcu: goto label_1e36dc;
        case 0x1e36e0u: goto label_1e36e0;
        case 0x1e36e4u: goto label_1e36e4;
        case 0x1e36e8u: goto label_1e36e8;
        case 0x1e36ecu: goto label_1e36ec;
        case 0x1e36f0u: goto label_1e36f0;
        case 0x1e36f4u: goto label_1e36f4;
        case 0x1e36f8u: goto label_1e36f8;
        case 0x1e36fcu: goto label_1e36fc;
        case 0x1e3700u: goto label_1e3700;
        case 0x1e3704u: goto label_1e3704;
        case 0x1e3708u: goto label_1e3708;
        case 0x1e370cu: goto label_1e370c;
        case 0x1e3710u: goto label_1e3710;
        case 0x1e3714u: goto label_1e3714;
        case 0x1e3718u: goto label_1e3718;
        case 0x1e371cu: goto label_1e371c;
        case 0x1e3720u: goto label_1e3720;
        case 0x1e3724u: goto label_1e3724;
        case 0x1e3728u: goto label_1e3728;
        case 0x1e372cu: goto label_1e372c;
        case 0x1e3730u: goto label_1e3730;
        case 0x1e3734u: goto label_1e3734;
        case 0x1e3738u: goto label_1e3738;
        case 0x1e373cu: goto label_1e373c;
        case 0x1e3740u: goto label_1e3740;
        case 0x1e3744u: goto label_1e3744;
        case 0x1e3748u: goto label_1e3748;
        case 0x1e374cu: goto label_1e374c;
        case 0x1e3750u: goto label_1e3750;
        case 0x1e3754u: goto label_1e3754;
        case 0x1e3758u: goto label_1e3758;
        case 0x1e375cu: goto label_1e375c;
        case 0x1e3760u: goto label_1e3760;
        case 0x1e3764u: goto label_1e3764;
        case 0x1e3768u: goto label_1e3768;
        case 0x1e376cu: goto label_1e376c;
        case 0x1e3770u: goto label_1e3770;
        case 0x1e3774u: goto label_1e3774;
        case 0x1e3778u: goto label_1e3778;
        case 0x1e377cu: goto label_1e377c;
        case 0x1e3780u: goto label_1e3780;
        case 0x1e3784u: goto label_1e3784;
        case 0x1e3788u: goto label_1e3788;
        case 0x1e378cu: goto label_1e378c;
        case 0x1e3790u: goto label_1e3790;
        case 0x1e3794u: goto label_1e3794;
        case 0x1e3798u: goto label_1e3798;
        case 0x1e379cu: goto label_1e379c;
        case 0x1e37a0u: goto label_1e37a0;
        case 0x1e37a4u: goto label_1e37a4;
        case 0x1e37a8u: goto label_1e37a8;
        case 0x1e37acu: goto label_1e37ac;
        case 0x1e37b0u: goto label_1e37b0;
        case 0x1e37b4u: goto label_1e37b4;
        case 0x1e37b8u: goto label_1e37b8;
        case 0x1e37bcu: goto label_1e37bc;
        case 0x1e37c0u: goto label_1e37c0;
        case 0x1e37c4u: goto label_1e37c4;
        case 0x1e37c8u: goto label_1e37c8;
        case 0x1e37ccu: goto label_1e37cc;
        case 0x1e37d0u: goto label_1e37d0;
        case 0x1e37d4u: goto label_1e37d4;
        case 0x1e37d8u: goto label_1e37d8;
        case 0x1e37dcu: goto label_1e37dc;
        case 0x1e37e0u: goto label_1e37e0;
        case 0x1e37e4u: goto label_1e37e4;
        case 0x1e37e8u: goto label_1e37e8;
        case 0x1e37ecu: goto label_1e37ec;
        case 0x1e37f0u: goto label_1e37f0;
        case 0x1e37f4u: goto label_1e37f4;
        case 0x1e37f8u: goto label_1e37f8;
        case 0x1e37fcu: goto label_1e37fc;
        case 0x1e3800u: goto label_1e3800;
        case 0x1e3804u: goto label_1e3804;
        case 0x1e3808u: goto label_1e3808;
        case 0x1e380cu: goto label_1e380c;
        case 0x1e3810u: goto label_1e3810;
        case 0x1e3814u: goto label_1e3814;
        case 0x1e3818u: goto label_1e3818;
        case 0x1e381cu: goto label_1e381c;
        case 0x1e3820u: goto label_1e3820;
        case 0x1e3824u: goto label_1e3824;
        case 0x1e3828u: goto label_1e3828;
        case 0x1e382cu: goto label_1e382c;
        case 0x1e3830u: goto label_1e3830;
        case 0x1e3834u: goto label_1e3834;
        case 0x1e3838u: goto label_1e3838;
        case 0x1e383cu: goto label_1e383c;
        case 0x1e3840u: goto label_1e3840;
        case 0x1e3844u: goto label_1e3844;
        case 0x1e3848u: goto label_1e3848;
        case 0x1e384cu: goto label_1e384c;
        case 0x1e3850u: goto label_1e3850;
        case 0x1e3854u: goto label_1e3854;
        case 0x1e3858u: goto label_1e3858;
        case 0x1e385cu: goto label_1e385c;
        case 0x1e3860u: goto label_1e3860;
        case 0x1e3864u: goto label_1e3864;
        case 0x1e3868u: goto label_1e3868;
        case 0x1e386cu: goto label_1e386c;
        case 0x1e3870u: goto label_1e3870;
        case 0x1e3874u: goto label_1e3874;
        case 0x1e3878u: goto label_1e3878;
        case 0x1e387cu: goto label_1e387c;
        case 0x1e3880u: goto label_1e3880;
        case 0x1e3884u: goto label_1e3884;
        case 0x1e3888u: goto label_1e3888;
        case 0x1e388cu: goto label_1e388c;
        case 0x1e3890u: goto label_1e3890;
        case 0x1e3894u: goto label_1e3894;
        case 0x1e3898u: goto label_1e3898;
        case 0x1e389cu: goto label_1e389c;
        case 0x1e38a0u: goto label_1e38a0;
        case 0x1e38a4u: goto label_1e38a4;
        case 0x1e38a8u: goto label_1e38a8;
        case 0x1e38acu: goto label_1e38ac;
        case 0x1e38b0u: goto label_1e38b0;
        case 0x1e38b4u: goto label_1e38b4;
        case 0x1e38b8u: goto label_1e38b8;
        case 0x1e38bcu: goto label_1e38bc;
        case 0x1e38c0u: goto label_1e38c0;
        case 0x1e38c4u: goto label_1e38c4;
        case 0x1e38c8u: goto label_1e38c8;
        case 0x1e38ccu: goto label_1e38cc;
        case 0x1e38d0u: goto label_1e38d0;
        case 0x1e38d4u: goto label_1e38d4;
        case 0x1e38d8u: goto label_1e38d8;
        case 0x1e38dcu: goto label_1e38dc;
        case 0x1e38e0u: goto label_1e38e0;
        case 0x1e38e4u: goto label_1e38e4;
        case 0x1e38e8u: goto label_1e38e8;
        case 0x1e38ecu: goto label_1e38ec;
        case 0x1e38f0u: goto label_1e38f0;
        case 0x1e38f4u: goto label_1e38f4;
        case 0x1e38f8u: goto label_1e38f8;
        case 0x1e38fcu: goto label_1e38fc;
        case 0x1e3900u: goto label_1e3900;
        case 0x1e3904u: goto label_1e3904;
        case 0x1e3908u: goto label_1e3908;
        case 0x1e390cu: goto label_1e390c;
        case 0x1e3910u: goto label_1e3910;
        case 0x1e3914u: goto label_1e3914;
        case 0x1e3918u: goto label_1e3918;
        case 0x1e391cu: goto label_1e391c;
        case 0x1e3920u: goto label_1e3920;
        case 0x1e3924u: goto label_1e3924;
        case 0x1e3928u: goto label_1e3928;
        case 0x1e392cu: goto label_1e392c;
        case 0x1e3930u: goto label_1e3930;
        case 0x1e3934u: goto label_1e3934;
        case 0x1e3938u: goto label_1e3938;
        case 0x1e393cu: goto label_1e393c;
        case 0x1e3940u: goto label_1e3940;
        case 0x1e3944u: goto label_1e3944;
        case 0x1e3948u: goto label_1e3948;
        case 0x1e394cu: goto label_1e394c;
        case 0x1e3950u: goto label_1e3950;
        case 0x1e3954u: goto label_1e3954;
        case 0x1e3958u: goto label_1e3958;
        case 0x1e395cu: goto label_1e395c;
        case 0x1e3960u: goto label_1e3960;
        case 0x1e3964u: goto label_1e3964;
        case 0x1e3968u: goto label_1e3968;
        case 0x1e396cu: goto label_1e396c;
        case 0x1e3970u: goto label_1e3970;
        case 0x1e3974u: goto label_1e3974;
        case 0x1e3978u: goto label_1e3978;
        case 0x1e397cu: goto label_1e397c;
        case 0x1e3980u: goto label_1e3980;
        case 0x1e3984u: goto label_1e3984;
        case 0x1e3988u: goto label_1e3988;
        case 0x1e398cu: goto label_1e398c;
        case 0x1e3990u: goto label_1e3990;
        case 0x1e3994u: goto label_1e3994;
        case 0x1e3998u: goto label_1e3998;
        case 0x1e399cu: goto label_1e399c;
        case 0x1e39a0u: goto label_1e39a0;
        case 0x1e39a4u: goto label_1e39a4;
        case 0x1e39a8u: goto label_1e39a8;
        case 0x1e39acu: goto label_1e39ac;
        case 0x1e39b0u: goto label_1e39b0;
        case 0x1e39b4u: goto label_1e39b4;
        case 0x1e39b8u: goto label_1e39b8;
        case 0x1e39bcu: goto label_1e39bc;
        case 0x1e39c0u: goto label_1e39c0;
        case 0x1e39c4u: goto label_1e39c4;
        case 0x1e39c8u: goto label_1e39c8;
        case 0x1e39ccu: goto label_1e39cc;
        case 0x1e39d0u: goto label_1e39d0;
        case 0x1e39d4u: goto label_1e39d4;
        case 0x1e39d8u: goto label_1e39d8;
        case 0x1e39dcu: goto label_1e39dc;
        case 0x1e39e0u: goto label_1e39e0;
        case 0x1e39e4u: goto label_1e39e4;
        case 0x1e39e8u: goto label_1e39e8;
        case 0x1e39ecu: goto label_1e39ec;
        case 0x1e39f0u: goto label_1e39f0;
        case 0x1e39f4u: goto label_1e39f4;
        case 0x1e39f8u: goto label_1e39f8;
        case 0x1e39fcu: goto label_1e39fc;
        case 0x1e3a00u: goto label_1e3a00;
        case 0x1e3a04u: goto label_1e3a04;
        case 0x1e3a08u: goto label_1e3a08;
        case 0x1e3a0cu: goto label_1e3a0c;
        case 0x1e3a10u: goto label_1e3a10;
        case 0x1e3a14u: goto label_1e3a14;
        case 0x1e3a18u: goto label_1e3a18;
        case 0x1e3a1cu: goto label_1e3a1c;
        case 0x1e3a20u: goto label_1e3a20;
        case 0x1e3a24u: goto label_1e3a24;
        case 0x1e3a28u: goto label_1e3a28;
        case 0x1e3a2cu: goto label_1e3a2c;
        case 0x1e3a30u: goto label_1e3a30;
        case 0x1e3a34u: goto label_1e3a34;
        case 0x1e3a38u: goto label_1e3a38;
        case 0x1e3a3cu: goto label_1e3a3c;
        case 0x1e3a40u: goto label_1e3a40;
        case 0x1e3a44u: goto label_1e3a44;
        case 0x1e3a48u: goto label_1e3a48;
        case 0x1e3a4cu: goto label_1e3a4c;
        case 0x1e3a50u: goto label_1e3a50;
        case 0x1e3a54u: goto label_1e3a54;
        case 0x1e3a58u: goto label_1e3a58;
        case 0x1e3a5cu: goto label_1e3a5c;
        case 0x1e3a60u: goto label_1e3a60;
        case 0x1e3a64u: goto label_1e3a64;
        case 0x1e3a68u: goto label_1e3a68;
        case 0x1e3a6cu: goto label_1e3a6c;
        case 0x1e3a70u: goto label_1e3a70;
        case 0x1e3a74u: goto label_1e3a74;
        case 0x1e3a78u: goto label_1e3a78;
        case 0x1e3a7cu: goto label_1e3a7c;
        case 0x1e3a80u: goto label_1e3a80;
        case 0x1e3a84u: goto label_1e3a84;
        case 0x1e3a88u: goto label_1e3a88;
        case 0x1e3a8cu: goto label_1e3a8c;
        case 0x1e3a90u: goto label_1e3a90;
        case 0x1e3a94u: goto label_1e3a94;
        case 0x1e3a98u: goto label_1e3a98;
        case 0x1e3a9cu: goto label_1e3a9c;
        case 0x1e3aa0u: goto label_1e3aa0;
        case 0x1e3aa4u: goto label_1e3aa4;
        case 0x1e3aa8u: goto label_1e3aa8;
        case 0x1e3aacu: goto label_1e3aac;
        case 0x1e3ab0u: goto label_1e3ab0;
        case 0x1e3ab4u: goto label_1e3ab4;
        case 0x1e3ab8u: goto label_1e3ab8;
        case 0x1e3abcu: goto label_1e3abc;
        case 0x1e3ac0u: goto label_1e3ac0;
        case 0x1e3ac4u: goto label_1e3ac4;
        case 0x1e3ac8u: goto label_1e3ac8;
        case 0x1e3accu: goto label_1e3acc;
        case 0x1e3ad0u: goto label_1e3ad0;
        case 0x1e3ad4u: goto label_1e3ad4;
        case 0x1e3ad8u: goto label_1e3ad8;
        case 0x1e3adcu: goto label_1e3adc;
        case 0x1e3ae0u: goto label_1e3ae0;
        case 0x1e3ae4u: goto label_1e3ae4;
        case 0x1e3ae8u: goto label_1e3ae8;
        case 0x1e3aecu: goto label_1e3aec;
        case 0x1e3af0u: goto label_1e3af0;
        case 0x1e3af4u: goto label_1e3af4;
        case 0x1e3af8u: goto label_1e3af8;
        case 0x1e3afcu: goto label_1e3afc;
        case 0x1e3b00u: goto label_1e3b00;
        case 0x1e3b04u: goto label_1e3b04;
        case 0x1e3b08u: goto label_1e3b08;
        case 0x1e3b0cu: goto label_1e3b0c;
        case 0x1e3b10u: goto label_1e3b10;
        case 0x1e3b14u: goto label_1e3b14;
        case 0x1e3b18u: goto label_1e3b18;
        case 0x1e3b1cu: goto label_1e3b1c;
        case 0x1e3b20u: goto label_1e3b20;
        case 0x1e3b24u: goto label_1e3b24;
        case 0x1e3b28u: goto label_1e3b28;
        case 0x1e3b2cu: goto label_1e3b2c;
        case 0x1e3b30u: goto label_1e3b30;
        case 0x1e3b34u: goto label_1e3b34;
        case 0x1e3b38u: goto label_1e3b38;
        case 0x1e3b3cu: goto label_1e3b3c;
        case 0x1e3b40u: goto label_1e3b40;
        case 0x1e3b44u: goto label_1e3b44;
        case 0x1e3b48u: goto label_1e3b48;
        case 0x1e3b4cu: goto label_1e3b4c;
        case 0x1e3b50u: goto label_1e3b50;
        case 0x1e3b54u: goto label_1e3b54;
        case 0x1e3b58u: goto label_1e3b58;
        case 0x1e3b5cu: goto label_1e3b5c;
        case 0x1e3b60u: goto label_1e3b60;
        case 0x1e3b64u: goto label_1e3b64;
        case 0x1e3b68u: goto label_1e3b68;
        case 0x1e3b6cu: goto label_1e3b6c;
        case 0x1e3b70u: goto label_1e3b70;
        case 0x1e3b74u: goto label_1e3b74;
        case 0x1e3b78u: goto label_1e3b78;
        case 0x1e3b7cu: goto label_1e3b7c;
        case 0x1e3b80u: goto label_1e3b80;
        case 0x1e3b84u: goto label_1e3b84;
        case 0x1e3b88u: goto label_1e3b88;
        case 0x1e3b8cu: goto label_1e3b8c;
        case 0x1e3b90u: goto label_1e3b90;
        case 0x1e3b94u: goto label_1e3b94;
        case 0x1e3b98u: goto label_1e3b98;
        case 0x1e3b9cu: goto label_1e3b9c;
        case 0x1e3ba0u: goto label_1e3ba0;
        case 0x1e3ba4u: goto label_1e3ba4;
        case 0x1e3ba8u: goto label_1e3ba8;
        case 0x1e3bacu: goto label_1e3bac;
        case 0x1e3bb0u: goto label_1e3bb0;
        case 0x1e3bb4u: goto label_1e3bb4;
        case 0x1e3bb8u: goto label_1e3bb8;
        case 0x1e3bbcu: goto label_1e3bbc;
        case 0x1e3bc0u: goto label_1e3bc0;
        case 0x1e3bc4u: goto label_1e3bc4;
        case 0x1e3bc8u: goto label_1e3bc8;
        case 0x1e3bccu: goto label_1e3bcc;
        case 0x1e3bd0u: goto label_1e3bd0;
        case 0x1e3bd4u: goto label_1e3bd4;
        case 0x1e3bd8u: goto label_1e3bd8;
        case 0x1e3bdcu: goto label_1e3bdc;
        case 0x1e3be0u: goto label_1e3be0;
        case 0x1e3be4u: goto label_1e3be4;
        case 0x1e3be8u: goto label_1e3be8;
        case 0x1e3becu: goto label_1e3bec;
        case 0x1e3bf0u: goto label_1e3bf0;
        case 0x1e3bf4u: goto label_1e3bf4;
        case 0x1e3bf8u: goto label_1e3bf8;
        case 0x1e3bfcu: goto label_1e3bfc;
        case 0x1e3c00u: goto label_1e3c00;
        case 0x1e3c04u: goto label_1e3c04;
        case 0x1e3c08u: goto label_1e3c08;
        case 0x1e3c0cu: goto label_1e3c0c;
        case 0x1e3c10u: goto label_1e3c10;
        case 0x1e3c14u: goto label_1e3c14;
        case 0x1e3c18u: goto label_1e3c18;
        case 0x1e3c1cu: goto label_1e3c1c;
        case 0x1e3c20u: goto label_1e3c20;
        case 0x1e3c24u: goto label_1e3c24;
        case 0x1e3c28u: goto label_1e3c28;
        case 0x1e3c2cu: goto label_1e3c2c;
        case 0x1e3c30u: goto label_1e3c30;
        case 0x1e3c34u: goto label_1e3c34;
        case 0x1e3c38u: goto label_1e3c38;
        case 0x1e3c3cu: goto label_1e3c3c;
        case 0x1e3c40u: goto label_1e3c40;
        case 0x1e3c44u: goto label_1e3c44;
        case 0x1e3c48u: goto label_1e3c48;
        case 0x1e3c4cu: goto label_1e3c4c;
        case 0x1e3c50u: goto label_1e3c50;
        case 0x1e3c54u: goto label_1e3c54;
        case 0x1e3c58u: goto label_1e3c58;
        case 0x1e3c5cu: goto label_1e3c5c;
        case 0x1e3c60u: goto label_1e3c60;
        case 0x1e3c64u: goto label_1e3c64;
        case 0x1e3c68u: goto label_1e3c68;
        case 0x1e3c6cu: goto label_1e3c6c;
        case 0x1e3c70u: goto label_1e3c70;
        case 0x1e3c74u: goto label_1e3c74;
        case 0x1e3c78u: goto label_1e3c78;
        case 0x1e3c7cu: goto label_1e3c7c;
        case 0x1e3c80u: goto label_1e3c80;
        case 0x1e3c84u: goto label_1e3c84;
        case 0x1e3c88u: goto label_1e3c88;
        case 0x1e3c8cu: goto label_1e3c8c;
        case 0x1e3c90u: goto label_1e3c90;
        case 0x1e3c94u: goto label_1e3c94;
        case 0x1e3c98u: goto label_1e3c98;
        case 0x1e3c9cu: goto label_1e3c9c;
        case 0x1e3ca0u: goto label_1e3ca0;
        case 0x1e3ca4u: goto label_1e3ca4;
        case 0x1e3ca8u: goto label_1e3ca8;
        case 0x1e3cacu: goto label_1e3cac;
        case 0x1e3cb0u: goto label_1e3cb0;
        case 0x1e3cb4u: goto label_1e3cb4;
        case 0x1e3cb8u: goto label_1e3cb8;
        case 0x1e3cbcu: goto label_1e3cbc;
        case 0x1e3cc0u: goto label_1e3cc0;
        case 0x1e3cc4u: goto label_1e3cc4;
        case 0x1e3cc8u: goto label_1e3cc8;
        case 0x1e3cccu: goto label_1e3ccc;
        case 0x1e3cd0u: goto label_1e3cd0;
        case 0x1e3cd4u: goto label_1e3cd4;
        case 0x1e3cd8u: goto label_1e3cd8;
        case 0x1e3cdcu: goto label_1e3cdc;
        case 0x1e3ce0u: goto label_1e3ce0;
        case 0x1e3ce4u: goto label_1e3ce4;
        case 0x1e3ce8u: goto label_1e3ce8;
        case 0x1e3cecu: goto label_1e3cec;
        case 0x1e3cf0u: goto label_1e3cf0;
        case 0x1e3cf4u: goto label_1e3cf4;
        case 0x1e3cf8u: goto label_1e3cf8;
        case 0x1e3cfcu: goto label_1e3cfc;
        case 0x1e3d00u: goto label_1e3d00;
        case 0x1e3d04u: goto label_1e3d04;
        case 0x1e3d08u: goto label_1e3d08;
        case 0x1e3d0cu: goto label_1e3d0c;
        case 0x1e3d10u: goto label_1e3d10;
        case 0x1e3d14u: goto label_1e3d14;
        case 0x1e3d18u: goto label_1e3d18;
        case 0x1e3d1cu: goto label_1e3d1c;
        case 0x1e3d20u: goto label_1e3d20;
        case 0x1e3d24u: goto label_1e3d24;
        case 0x1e3d28u: goto label_1e3d28;
        case 0x1e3d2cu: goto label_1e3d2c;
        case 0x1e3d30u: goto label_1e3d30;
        case 0x1e3d34u: goto label_1e3d34;
        case 0x1e3d38u: goto label_1e3d38;
        case 0x1e3d3cu: goto label_1e3d3c;
        case 0x1e3d40u: goto label_1e3d40;
        case 0x1e3d44u: goto label_1e3d44;
        case 0x1e3d48u: goto label_1e3d48;
        case 0x1e3d4cu: goto label_1e3d4c;
        default: return;
    }

label_1e3580:
    // 0x1e3580: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3584:
    if (ctx->pc == 0x1E3584u) {
        ctx->pc = 0x1E3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3580u;
        // 0x1e3584: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3588u;
        goto label_1e3588;
    }
    ctx->pc = 0x1E3580u;
    {
        const bool branch_taken_0x1e3580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3580u;
        // 0x1e3584: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3580) {
            ctx->pc = 0x1E358Cu;
            goto label_1e358c;
        }
    }
    ctx->pc = 0x1E3588u;
label_1e3588:
    // 0x1e3588: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e3588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e358c:
    // 0x1e358c: 0xaf828d4c  sw          $v0, -0x72B4($gp)
    ctx->pc = 0x1e358cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 2));
label_1e3590:
    // 0x1e3590: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3594:
    // 0x1e3594: 0xaf808d48  sw          $zero, -0x72B8($gp)
    ctx->pc = 0x1e3594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
label_1e3598:
    // 0x1e3598: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e3598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e359c:
    // 0x1e359c: 0x27828d58  addiu       $v0, $gp, -0x72A8
    ctx->pc = 0x1e359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937944));
label_1e35a0:
    // 0x1e35a0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e35a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e35a4:
    // 0x1e35a4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e35a8:
    // 0x1e35a8: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1e35a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e35ac:
    // 0x1e35ac: 0xc05e234  jal         func_1788D0
label_1e35b0:
    if (ctx->pc == 0x1E35B0u) {
        ctx->pc = 0x1E35B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35ACu;
        // 0x1e35b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E35B4u;
        goto label_1e35b4;
    }
    ctx->pc = 0x1E35ACu;
    SET_GPR_U32(ctx, 31, 0x1E35B4u);
    ctx->pc = 0x1E35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E35ACu;
    // 0x1e35b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E35ACu, 0x1E35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35B4u;
label_1e35b4:
    // 0x1e35b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e35b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e35b8:
    // 0x1e35b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e35b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e35bc:
    // 0x1e35bc: 0x0  nop
    ctx->pc = 0x1e35bcu;
    // NOP
label_1e35c0:
    // 0x1e35c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e35c4:
    // 0x1e35c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e35c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e35c8:
    // 0x1e35c8: 0x2b2a021  addu        $s4, $s5, $s2
    ctx->pc = 0x1e35c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1e35cc:
    // 0x1e35cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e35d0:
    // 0x1e35d0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e35d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e35d4:
    // 0x1e35d4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e35d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e35d8:
    // 0x1e35d8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1e35d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e35dc:
    // 0x1e35dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e35e0:
    // 0x1e35e0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e35e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e35e4:
    // 0x1e35e4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e35e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e35e8:
    // 0x1e35e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e35e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e35ec:
    // 0x1e35ec: 0xdc252a20  ld          $a1, 0x2A20($at)
    ctx->pc = 0x1e35ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10784)));
label_1e35f0:
    // 0x1e35f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e35f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e35f4:
    // 0x1e35f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e35f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e35f8:
    // 0x1e35f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e35f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e35fc:
    // 0x1e35fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e35fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3600:
    // 0x1e3600: 0xc05de30  jal         func_1778C0
label_1e3604:
    if (ctx->pc == 0x1E3604u) {
        ctx->pc = 0x1E3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3600u;
        // 0x1e3604: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3608u;
        goto label_1e3608;
    }
    ctx->pc = 0x1E3600u;
    SET_GPR_U32(ctx, 31, 0x1E3608u);
    ctx->pc = 0x1E3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3600u;
    // 0x1e3604: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3600u, 0x1E3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3608u;
label_1e3608:
    // 0x1e3608: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e3608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1e360c:
    // 0x1e360c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3610:
    // 0x1e3610: 0xa2850080  sb          $a1, 0x80($s4)
    ctx->pc = 0x1e3610u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 5));
label_1e3614:
    // 0x1e3614: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e3614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e3618:
    // 0x1e3618: 0xa2850081  sb          $a1, 0x81($s4)
    ctx->pc = 0x1e3618u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 5));
label_1e361c:
    // 0x1e361c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e361cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1e3620:
    // 0x1e3620: 0xa2850082  sb          $a1, 0x82($s4)
    ctx->pc = 0x1e3620u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 5));
label_1e3624:
    // 0x1e3624: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x1e3624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1e3628:
    // 0x1e3628: 0xa2830083  sb          $v1, 0x83($s4)
    ctx->pc = 0x1e3628u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 3));
label_1e362c:
    // 0x1e362c: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x1e362cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e3630:
    // 0x1e3630: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_1e3634:
    if (ctx->pc == 0x1E3634u) {
        ctx->pc = 0x1E3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3630u;
        // 0x1e3634: 0xae840084  sw          $a0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3638u;
        goto label_1e3638;
    }
    ctx->pc = 0x1E3630u;
    {
        const bool branch_taken_0x1e3630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3630u;
        // 0x1e3634: 0xae840084  sw          $a0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3630) {
            ctx->pc = 0x1E35BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e35bc;
        }
    }
    ctx->pc = 0x1E3638u;
label_1e3638:
    // 0x1e3638: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e3638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e363c:
    // 0x1e363c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1e363cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e3640:
    // 0x1e3640: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_1e3644:
    if (ctx->pc == 0x1E3644u) {
        ctx->pc = 0x1E3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3640u;
        // 0x1e3644: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3648u;
        goto label_1e3648;
    }
    ctx->pc = 0x1E3640u;
    {
        const bool branch_taken_0x1e3640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3640u;
        // 0x1e3644: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3640) {
            ctx->pc = 0x1E359Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e359c;
        }
    }
    ctx->pc = 0x1E3648u;
label_1e3648:
    // 0x1e3648: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e3648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e364c:
    // 0x1e364c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e364cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e3650:
    // 0x1e3650: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e3650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e3654:
    // 0x1e3654: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e3654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3658:
    // 0x1e3658: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e3658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e365c:
    // 0x1e365c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e365cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3660:
    // 0x1e3660: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e3660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3664:
    // 0x1e3664: 0x3e00008  jr          $ra
label_1e3668:
    if (ctx->pc == 0x1E3668u) {
        ctx->pc = 0x1E3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3664u;
        // 0x1e3668: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E366Cu;
        goto label_1e366c;
    }
    ctx->pc = 0x1E3664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3664u;
        // 0x1e3668: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E366Cu;
label_1e366c:
    // 0x1e366c: 0x0  nop
    ctx->pc = 0x1e366cu;
    // NOP
label_1e3670:
    // 0x1e3670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e3674:
    // 0x1e3674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e3678:
    // 0x1e3678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e367c:
    // 0x1e367c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e367cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3680:
    // 0x1e3680: 0x8f838d50  lw          $v1, -0x72B0($gp)
    ctx->pc = 0x1e3680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937936)));
label_1e3684:
    // 0x1e3684: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
label_1e3688:
    if (ctx->pc == 0x1E3688u) {
        ctx->pc = 0x1E3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3684u;
        // 0x1e3688: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E368Cu;
        goto label_1e368c;
    }
    ctx->pc = 0x1E3684u;
    {
        const bool branch_taken_0x1e3684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3684u;
        // 0x1e3688: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3684) {
            ctx->pc = 0x1E3834u;
            goto label_1e3834;
        }
    }
    ctx->pc = 0x1E368Cu;
label_1e368c:
    // 0x1e368c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e368cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e3690:
    // 0x1e3690: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1e3690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e3694:
    // 0x1e3694: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e3698:
    // 0x1e3698: 0x27828d58  addiu       $v0, $gp, -0x72A8
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937944));
label_1e369c:
    // 0x1e369c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e369cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e36a0:
    // 0x1e36a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e36a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e36a4:
    // 0x1e36a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e36a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e36a8:
    // 0x1e36a8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e36ac:
    // 0x1e36ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e36acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e36b0:
    // 0x1e36b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e36b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e36b4:
    // 0x1e36b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e36b8:
    // 0x1e36b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e36b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e36bc:
    // 0x1e36bc: 0x0  nop
    ctx->pc = 0x1e36bcu;
    // NOP
label_1e36c0:
    // 0x1e36c0: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1e36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1e36c4:
    // 0x1e36c4: 0x3c025397  lui         $v0, 0x5397
    ctx->pc = 0x1e36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21399 << 16));
label_1e36c8:
    // 0x1e36c8: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1e36c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
label_1e36cc:
    // 0x1e36cc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1e36ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e36d0:
    // 0x1e36d0: 0x24c62900  addiu       $a2, $a2, 0x2900
    ctx->pc = 0x1e36d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10496));
label_1e36d4:
    // 0x1e36d4: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1e36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1e36d8:
    // 0x1e36d8: 0x3442829d  ori         $v0, $v0, 0x829D
    ctx->pc = 0x1e36d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33437);
label_1e36dc:
    // 0x1e36dc: 0x24100038  addiu       $s0, $zero, 0x38
    ctx->pc = 0x1e36dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1e36e0:
    // 0x1e36e0: 0x250828a0  addiu       $t0, $t0, 0x28A0
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
label_1e36e4:
    // 0x1e36e4: 0x8f8d8db8  lw          $t5, -0x7248($gp)
    ctx->pc = 0x1e36e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e36e8:
    // 0x1e36e8: 0x8f8c8d4c  lw          $t4, -0x72B4($gp)
    ctx->pc = 0x1e36e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937932)));
label_1e36ec:
    // 0x1e36ec: 0x8f8e8218  lw          $t6, -0x7DE8($gp)
    ctx->pc = 0x1e36ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e36f0:
    // 0x1e36f0: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1e36f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1e36f4:
    // 0x1e36f4: 0x258c0005  addiu       $t4, $t4, 0x5
    ctx->pc = 0x1e36f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 5));
label_1e36f8:
    // 0x1e36f8: 0x1896023  subu        $t4, $t4, $t1
    ctx->pc = 0x1e36f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_1e36fc:
    // 0x1e36fc: 0x18d001a  div         $zero, $t4, $t5
    ctx->pc = 0x1e36fcu;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e3700:
    // 0x1e3700: 0x0  nop
    ctx->pc = 0x1e3700u;
    // NOP
label_1e3704:
    // 0x1e3704: 0x0  nop
    ctx->pc = 0x1e3704u;
    // NOP
label_1e3708:
    // 0x1e3708: 0x6010  mfhi        $t4
    ctx->pc = 0x1e3708u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1e370c:
    // 0x1e370c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x1e370cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_1e3710:
    // 0x1e3710: 0x10c6021  addu        $t4, $t0, $t4
    ctx->pc = 0x1e3710u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
label_1e3714:
    // 0x1e3714: 0x15c70003  bne         $t6, $a3, . + 4 + (0x3 << 2)
label_1e3718:
    if (ctx->pc == 0x1E3718u) {
        ctx->pc = 0x1E3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3714u;
        // 0x1e3718: 0x8d8c0000  lw          $t4, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E371Cu;
        goto label_1e371c;
    }
    ctx->pc = 0x1E3714u;
    {
        const bool branch_taken_0x1e3714 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3714u;
        // 0x1e3718: 0x8d8c0000  lw          $t4, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3714) {
            ctx->pc = 0x1E3724u;
            goto label_1e3724;
        }
    }
    ctx->pc = 0x1E371Cu;
label_1e371c:
    // 0x1e371c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3720:
    if (ctx->pc == 0x1E3720u) {
        ctx->pc = 0x1E3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E371Cu;
        // 0x1e3720: 0x240d0017  addiu       $t5, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3724u;
        goto label_1e3724;
    }
    ctx->pc = 0x1E371Cu;
    {
        const bool branch_taken_0x1e371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E371Cu;
        // 0x1e3720: 0x240d0017  addiu       $t5, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e371c) {
            ctx->pc = 0x1E3728u;
            goto label_1e3728;
        }
    }
    ctx->pc = 0x1E3724u;
label_1e3724:
    // 0x1e3724: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x1e3724u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e3728:
    // 0x1e3728: 0x158d0005  bne         $t4, $t5, . + 4 + (0x5 << 2)
label_1e372c:
    if (ctx->pc == 0x1E372Cu) {
        ctx->pc = 0x1E372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3728u;
        // 0x1e372c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3730u;
        goto label_1e3730;
    }
    ctx->pc = 0x1E3728u;
    {
        const bool branch_taken_0x1e3728 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x1E372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3728u;
        // 0x1e372c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3728) {
            ctx->pc = 0x1E3740u;
            goto label_1e3740;
        }
    }
    ctx->pc = 0x1E3730u;
label_1e3730:
    // 0x1e3730: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x1e3730u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1e3734:
    // 0x1e3734: 0xdc2d2a20  ld          $t5, 0x2A20($at)
    ctx->pc = 0x1e3734u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 10784)));
label_1e3738:
    // 0x1e3738: 0x10000014  b           . + 4 + (0x14 << 2)
label_1e373c:
    if (ctx->pc == 0x1E373Cu) {
        ctx->pc = 0x1E373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3738u;
        // 0x1e373c: 0xfd8d0070  sd          $t5, 0x70($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 112), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3740u;
        goto label_1e3740;
    }
    ctx->pc = 0x1E3738u;
    {
        const bool branch_taken_0x1e3738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3738u;
        // 0x1e373c: 0xfd8d0070  sd          $t5, 0x70($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 112), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3738) {
            ctx->pc = 0x1E378Cu;
            goto label_1e378c;
        }
    }
    ctx->pc = 0x1E3740u;
label_1e3740:
    // 0x1e3740: 0x15c7000c  bne         $t6, $a3, . + 4 + (0xC << 2)
label_1e3744:
    if (ctx->pc == 0x1E3744u) {
        ctx->pc = 0x1E3748u;
        goto label_1e3748;
    }
    ctx->pc = 0x1E3740u;
    {
        const bool branch_taken_0x1e3740 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e3740) {
            ctx->pc = 0x1E3774u;
            goto label_1e3774;
        }
    }
    ctx->pc = 0x1E3748u;
label_1e3748:
    // 0x1e3748: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
label_1e374c:
    if (ctx->pc == 0x1E374Cu) {
        ctx->pc = 0x1E3750u;
        goto label_1e3750;
    }
    ctx->pc = 0x1E3748u;
    {
        const bool branch_taken_0x1e3748 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3748) {
            ctx->pc = 0x1E3758u;
            goto label_1e3758;
        }
    }
    ctx->pc = 0x1E3750u;
label_1e3750:
    // 0x1e3750: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3754:
    if (ctx->pc == 0x1E3754u) {
        ctx->pc = 0x1E3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3750u;
        // 0x1e3754: 0x240c0023  addiu       $t4, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3758u;
        goto label_1e3758;
    }
    ctx->pc = 0x1E3750u;
    {
        const bool branch_taken_0x1e3750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3750u;
        // 0x1e3754: 0x240c0023  addiu       $t4, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3750) {
            ctx->pc = 0x1E375Cu;
            goto label_1e375c;
        }
    }
    ctx->pc = 0x1E3758u;
label_1e3758:
    // 0x1e3758: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
label_1e375c:
    // 0x1e375c: 0xc68c0  sll         $t5, $t4, 3
    ctx->pc = 0x1e375cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_1e3760:
    // 0x1e3760: 0xcd6821  addu        $t5, $a2, $t5
    ctx->pc = 0x1e3760u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_1e3764:
    // 0x1e3764: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x1e3764u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1e3768:
    // 0x1e3768: 0xddad0000  ld          $t5, 0x0($t5)
    ctx->pc = 0x1e3768u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_1e376c:
    // 0x1e376c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e3770:
    if (ctx->pc == 0x1E3770u) {
        ctx->pc = 0x1E3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E376Cu;
        // 0x1e3770: 0xfd8d0070  sd          $t5, 0x70($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 112), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3774u;
        goto label_1e3774;
    }
    ctx->pc = 0x1E376Cu;
    {
        const bool branch_taken_0x1e376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E376Cu;
        // 0x1e3770: 0xfd8d0070  sd          $t5, 0x70($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 112), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e376c) {
            ctx->pc = 0x1E378Cu;
            goto label_1e378c;
        }
    }
    ctx->pc = 0x1E3774u;
label_1e3774:
    // 0x1e3774: 0x0  nop
    ctx->pc = 0x1e3774u;
    // NOP
label_1e3778:
    // 0x1e3778: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x1e3778u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_1e377c:
    // 0x1e377c: 0xcc6821  addu        $t5, $a2, $t4
    ctx->pc = 0x1e377cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_1e3780:
    // 0x1e3780: 0xddad0060  ld          $t5, 0x60($t5)
    ctx->pc = 0x1e3780u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 13), 96)));
label_1e3784:
    // 0x1e3784: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1e3788:
    // 0x1e3788: 0xfd8d0070  sd          $t5, 0x70($t4)
    ctx->pc = 0x1e3788u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 112), GPR_U64(ctx, 13));
label_1e378c:
    // 0x1e378c: 0x0  nop
    ctx->pc = 0x1e378cu;
    // NOP
label_1e3790:
    // 0x1e3790: 0x8f8e8d48  lw          $t6, -0x72B8($gp)
    ctx->pc = 0x1e3790u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
label_1e3794:
    // 0x1e3794: 0x256fff98  addiu       $t7, $t3, -0x68
    ctx->pc = 0x1e3794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967192));
label_1e3798:
    // 0x1e3798: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x1e3798u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1e379c:
    // 0x1e379c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1e379cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1e37a0:
    // 0x1e37a0: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1e37a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
label_1e37a4:
    // 0x1e37a4: 0x292d0008  slti        $t5, $t1, 0x8
    ctx->pc = 0x1e37a4u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e37a8:
    // 0x1e37a8: 0x256b0050  addiu       $t3, $t3, 0x50
    ctx->pc = 0x1e37a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
label_1e37ac:
    // 0x1e37ac: 0x1cfc821  addu        $t9, $t6, $t7
    ctx->pc = 0x1e37acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
label_1e37b0:
    // 0x1e37b0: 0x272f0028  addiu       $t7, $t9, 0x28
    ctx->pc = 0x1e37b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 25), 40));
label_1e37b4:
    // 0x1e37b4: 0x1970c0  sll         $t6, $t9, 3
    ctx->pc = 0x1e37b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
label_1e37b8:
    // 0x1e37b8: 0x6f8823  subu        $s1, $v1, $t7
    ctx->pc = 0x1e37b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
label_1e37bc:
    // 0x1e37bc: 0x25d87900  addiu       $t8, $t6, 0x7900
    ctx->pc = 0x1e37bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 30976));
label_1e37c0:
    // 0x1e37c0: 0x117940  sll         $t7, $s1, 5
    ctx->pc = 0x1e37c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_1e37c4:
    // 0x1e37c4: 0x272e0050  addiu       $t6, $t9, 0x50
    ctx->pc = 0x1e37c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 25), 80));
label_1e37c8:
    // 0x1e37c8: 0x22f7818  mult        $t7, $s1, $t7
    ctx->pc = 0x1e37c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_1e37cc:
    // 0x1e37cc: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x1e37ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_1e37d0:
    // 0x1e37d0: 0x25ce7900  addiu       $t6, $t6, 0x7900
    ctx->pc = 0x1e37d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 30976));
label_1e37d4:
    // 0x1e37d4: 0x4f0018  mult        $zero, $v0, $t7
    ctx->pc = 0x1e37d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e37d8:
    // 0x1e37d8: 0xfcfc2  srl         $t9, $t7, 31
    ctx->pc = 0x1e37d8u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
label_1e37dc:
    // 0x1e37dc: 0x0  nop
    ctx->pc = 0x1e37dcu;
    // NOP
label_1e37e0:
    // 0x1e37e0: 0x7810  mfhi        $t7
    ctx->pc = 0x1e37e0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_1e37e4:
    // 0x1e37e4: 0xf7b83  sra         $t7, $t7, 14
    ctx->pc = 0x1e37e4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 14));
label_1e37e8:
    // 0x1e37e8: 0x1f97821  addu        $t7, $t7, $t9
    ctx->pc = 0x1e37e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_1e37ec:
    // 0x1e37ec: 0x20f7823  subu        $t7, $s0, $t7
    ctx->pc = 0x1e37ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
label_1e37f0:
    // 0x1e37f0: 0xfc900  sll         $t9, $t7, 4
    ctx->pc = 0x1e37f0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1e37f4:
    // 0x1e37f4: 0x27396c00  addiu       $t9, $t9, 0x6C00
    ctx->pc = 0x1e37f4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 27648));
label_1e37f8:
    // 0x1e37f8: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x1e37f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
label_1e37fc:
    // 0x1e37fc: 0xa5990090  sh          $t9, 0x90($t4)
    ctx->pc = 0x1e37fcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 144), (uint16_t)GPR_U32(ctx, 25));
label_1e3800:
    // 0x1e3800: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1e3804:
    // 0x1e3804: 0xa5980092  sh          $t8, 0x92($t4)
    ctx->pc = 0x1e3804u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 146), (uint16_t)GPR_U32(ctx, 24));
label_1e3808:
    // 0x1e3808: 0x25ef6c00  addiu       $t7, $t7, 0x6C00
    ctx->pc = 0x1e3808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27648));
label_1e380c:
    // 0x1e380c: 0xad800094  sw          $zero, 0x94($t4)
    ctx->pc = 0x1e380cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 148), GPR_U32(ctx, 0));
label_1e3810:
    // 0x1e3810: 0xa58f00a0  sh          $t7, 0xA0($t4)
    ctx->pc = 0x1e3810u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 160), (uint16_t)GPR_U32(ctx, 15));
label_1e3814:
    // 0x1e3814: 0xa58e00a2  sh          $t6, 0xA2($t4)
    ctx->pc = 0x1e3814u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 162), (uint16_t)GPR_U32(ctx, 14));
label_1e3818:
    // 0x1e3818: 0x15a0ffb2  bnez        $t5, . + 4 + (-0x4E << 2)
label_1e381c:
    if (ctx->pc == 0x1E381Cu) {
        ctx->pc = 0x1E381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3818u;
        // 0x1e381c: 0xad8000a4  sw          $zero, 0xA4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3820u;
        goto label_1e3820;
    }
    ctx->pc = 0x1E3818u;
    {
        const bool branch_taken_0x1e3818 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3818u;
        // 0x1e381c: 0xad8000a4  sw          $zero, 0xA4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3818) {
            ctx->pc = 0x1E36E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e36e4;
        }
    }
    ctx->pc = 0x1E3820u;
label_1e3820:
    // 0x1e3820: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1e3820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1e3824:
    // 0x1e3824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3828:
    // 0x1e3828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e3828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e382c:
    // 0x1e382c: 0xc066c72  jal         func_19B1C8
label_1e3830:
    if (ctx->pc == 0x1E3830u) {
        ctx->pc = 0x1E3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E382Cu;
        // 0x1e3830: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3834u;
        goto label_1e3834;
    }
    ctx->pc = 0x1E382Cu;
    SET_GPR_U32(ctx, 31, 0x1E3834u);
    ctx->pc = 0x1E3830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E382Cu;
    // 0x1e3830: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E382Cu, 0x1E3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3834u;
label_1e3834:
    // 0x1e3834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3838:
    // 0x1e3838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e383c:
    // 0x1e383c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e383cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3840:
    // 0x1e3840: 0x3e00008  jr          $ra
label_1e3844:
    if (ctx->pc == 0x1E3844u) {
        ctx->pc = 0x1E3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3840u;
        // 0x1e3844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3848u;
        goto label_1e3848;
    }
    ctx->pc = 0x1E3840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3840u;
        // 0x1e3844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3848u;
label_1e3848:
    // 0x1e3848: 0x0  nop
    ctx->pc = 0x1e3848u;
    // NOP
label_1e384c:
    // 0x1e384c: 0x0  nop
    ctx->pc = 0x1e384cu;
    // NOP
label_1e3850:
    // 0x1e3850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e3850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e3854:
    // 0x1e3854: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3858:
    // 0x1e3858: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e3858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e385c:
    // 0x1e385c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e3860:
    // 0x1e3860: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e3860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e3864:
    // 0x1e3864: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e3864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e3868:
    // 0x1e3868: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e3868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e386c:
    // 0x1e386c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e3870:
    if (ctx->pc == 0x1E3870u) {
        ctx->pc = 0x1E3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E386Cu;
        // 0x1e3870: 0xaf808d70  sw          $zero, -0x7290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3874u;
        goto label_1e3874;
    }
    ctx->pc = 0x1E386Cu;
    {
        const bool branch_taken_0x1e386c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E386Cu;
        // 0x1e3870: 0xaf808d70  sw          $zero, -0x7290($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e386c) {
            ctx->pc = 0x1E387Cu;
            goto label_1e387c;
        }
    }
    ctx->pc = 0x1E3874u;
label_1e3874:
    // 0x1e3874: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3878:
    if (ctx->pc == 0x1E3878u) {
        ctx->pc = 0x1E3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3874u;
        // 0x1e3878: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E387Cu;
        goto label_1e387c;
    }
    ctx->pc = 0x1E3874u;
    {
        const bool branch_taken_0x1e3874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3874u;
        // 0x1e3878: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3874) {
            ctx->pc = 0x1E3880u;
            goto label_1e3880;
        }
    }
    ctx->pc = 0x1E387Cu;
label_1e387c:
    // 0x1e387c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e387cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e3880:
    // 0x1e3880: 0xaf828d6c  sw          $v0, -0x7294($gp)
    ctx->pc = 0x1e3880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937964), GPR_U32(ctx, 2));
label_1e3884:
    // 0x1e3884: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3888:
    // 0x1e3888: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e388c:
    // 0x1e388c: 0xaf808d64  sw          $zero, -0x729C($gp)
    ctx->pc = 0x1e388cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937956), GPR_U32(ctx, 0));
label_1e3890:
    // 0x1e3890: 0xaf828d68  sw          $v0, -0x7298($gp)
    ctx->pc = 0x1e3890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 2));
label_1e3894:
    // 0x1e3894: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3898:
    // 0x1e3898: 0xaf808d60  sw          $zero, -0x72A0($gp)
    ctx->pc = 0x1e3898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937952), GPR_U32(ctx, 0));
label_1e389c:
    // 0x1e389c: 0x27828d78  addiu       $v0, $gp, -0x7288
    ctx->pc = 0x1e389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937976));
label_1e38a0:
    // 0x1e38a0: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1e38a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1e38a4:
    // 0x1e38a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e38a8:
    // 0x1e38a8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1e38a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e38ac:
    // 0x1e38ac: 0xc05e234  jal         func_1788D0
label_1e38b0:
    if (ctx->pc == 0x1E38B0u) {
        ctx->pc = 0x1E38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38ACu;
        // 0x1e38b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38B4u;
        goto label_1e38b4;
    }
    ctx->pc = 0x1E38ACu;
    SET_GPR_U32(ctx, 31, 0x1E38B4u);
    ctx->pc = 0x1E38B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38ACu;
    // 0x1e38b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E38ACu, 0x1E38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38B4u;
label_1e38b4:
    // 0x1e38b4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1e38b8:
    // 0x1e38b8: 0x24050118  addiu       $a1, $zero, 0x118
    ctx->pc = 0x1e38b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_1e38bc:
    // 0x1e38bc: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1e38bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1e38c0:
    // 0x1e38c0: 0x24070384  addiu       $a3, $zero, 0x384
    ctx->pc = 0x1e38c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e38c4:
    // 0x1e38c4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1e38c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e38c8:
    // 0x1e38c8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1e38c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e38cc:
    // 0x1e38cc: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1e38ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e38d0:
    // 0x1e38d0: 0xc05e060  jal         func_178180
label_1e38d4:
    if (ctx->pc == 0x1E38D4u) {
        ctx->pc = 0x1E38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38D0u;
        // 0x1e38d4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38D8u;
        goto label_1e38d8;
    }
    ctx->pc = 0x1E38D0u;
    SET_GPR_U32(ctx, 31, 0x1E38D8u);
    ctx->pc = 0x1E38D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38D0u;
    // 0x1e38d4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1E38D0u, 0x1E38D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38D8u;
label_1e38d8:
    // 0x1e38d8: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x1e38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1e38dc:
    // 0x1e38dc: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x1e38dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_1e38e0:
    // 0x1e38e0: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1e38e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1e38e4:
    // 0x1e38e4: 0x24070384  addiu       $a3, $zero, 0x384
    ctx->pc = 0x1e38e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e38e8:
    // 0x1e38e8: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x1e38e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_1e38ec:
    // 0x1e38ec: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1e38ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e38f0:
    // 0x1e38f0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1e38f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e38f4:
    // 0x1e38f4: 0xc05e060  jal         func_178180
label_1e38f8:
    if (ctx->pc == 0x1E38F8u) {
        ctx->pc = 0x1E38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E38F4u;
        // 0x1e38f8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E38FCu;
        goto label_1e38fc;
    }
    ctx->pc = 0x1E38F4u;
    SET_GPR_U32(ctx, 31, 0x1E38FCu);
    ctx->pc = 0x1E38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E38F4u;
    // 0x1e38f8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1E38F4u, 0x1E38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E38FCu;
label_1e38fc:
    // 0x1e38fc: 0x26240170  addiu       $a0, $s1, 0x170
    ctx->pc = 0x1e38fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_1e3900:
    // 0x1e3900: 0x24050268  addiu       $a1, $zero, 0x268
    ctx->pc = 0x1e3900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
label_1e3904:
    // 0x1e3904: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1e3904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1e3908:
    // 0x1e3908: 0x24070384  addiu       $a3, $zero, 0x384
    ctx->pc = 0x1e3908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e390c:
    // 0x1e390c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1e390cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e3910:
    // 0x1e3910: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1e3910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3914:
    // 0x1e3914: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1e3914u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3918:
    // 0x1e3918: 0xc05e060  jal         func_178180
label_1e391c:
    if (ctx->pc == 0x1E391Cu) {
        ctx->pc = 0x1E391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3918u;
        // 0x1e391c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3920u;
        goto label_1e3920;
    }
    ctx->pc = 0x1E3918u;
    SET_GPR_U32(ctx, 31, 0x1E3920u);
    ctx->pc = 0x1E391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3918u;
    // 0x1e391c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1E3918u, 0x1E3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3920u;
label_1e3920:
    // 0x1e3920: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x1e3920u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e3924:
    // 0x1e3924: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1e3924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e3928:
    // 0x1e3928: 0xa22e0078  sb          $t6, 0x78($s1)
    ctx->pc = 0x1e3928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 14));
label_1e392c:
    // 0x1e392c: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x1e392cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e3930:
    // 0x1e3930: 0xa22e0079  sb          $t6, 0x79($s1)
    ctx->pc = 0x1e3930u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 14));
label_1e3934:
    // 0x1e3934: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x1e3934u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_1e3938:
    // 0x1e3938: 0xa226007a  sb          $a2, 0x7A($s1)
    ctx->pc = 0x1e3938u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 6));
label_1e393c:
    // 0x1e393c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3940:
    // 0x1e3940: 0xa22d007b  sb          $t5, 0x7B($s1)
    ctx->pc = 0x1e3940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 13));
label_1e3944:
    // 0x1e3944: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e3944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3948:
    // 0x1e3948: 0xae2c007c  sw          $t4, 0x7C($s1)
    ctx->pc = 0x1e3948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 12));
label_1e394c:
    // 0x1e394c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3950:
    // 0x1e3950: 0xa22e0088  sb          $t6, 0x88($s1)
    ctx->pc = 0x1e3950u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 14));
label_1e3954:
    // 0x1e3954: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e3958:
    // 0x1e3958: 0xa22e0089  sb          $t6, 0x89($s1)
    ctx->pc = 0x1e3958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 14));
label_1e395c:
    // 0x1e395c: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x1e395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1e3960:
    // 0x1e3960: 0xa226008a  sb          $a2, 0x8A($s1)
    ctx->pc = 0x1e3960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 6));
label_1e3964:
    // 0x1e3964: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x1e3964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1e3968:
    // 0x1e3968: 0xa22d008b  sb          $t5, 0x8B($s1)
    ctx->pc = 0x1e3968u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 13));
label_1e396c:
    // 0x1e396c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x1e396cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e3970:
    // 0x1e3970: 0xae2c008c  sw          $t4, 0x8C($s1)
    ctx->pc = 0x1e3970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 12));
label_1e3974:
    // 0x1e3974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3978:
    // 0x1e3978: 0xa22e0098  sb          $t6, 0x98($s1)
    ctx->pc = 0x1e3978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 14));
label_1e397c:
    // 0x1e397c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e397cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3980:
    // 0x1e3980: 0xa22e0099  sb          $t6, 0x99($s1)
    ctx->pc = 0x1e3980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 14));
label_1e3984:
    // 0x1e3984: 0xa226009a  sb          $a2, 0x9A($s1)
    ctx->pc = 0x1e3984u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 6));
label_1e3988:
    // 0x1e3988: 0xa22d009b  sb          $t5, 0x9B($s1)
    ctx->pc = 0x1e3988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 13));
label_1e398c:
    // 0x1e398c: 0xae2c009c  sw          $t4, 0x9C($s1)
    ctx->pc = 0x1e398cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 12));
label_1e3990:
    // 0x1e3990: 0xa22e00a8  sb          $t6, 0xA8($s1)
    ctx->pc = 0x1e3990u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 14));
label_1e3994:
    // 0x1e3994: 0xa22e00a9  sb          $t6, 0xA9($s1)
    ctx->pc = 0x1e3994u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 14));
label_1e3998:
    // 0x1e3998: 0xa22600aa  sb          $a2, 0xAA($s1)
    ctx->pc = 0x1e3998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 6));
label_1e399c:
    // 0x1e399c: 0xa22d00ab  sb          $t5, 0xAB($s1)
    ctx->pc = 0x1e399cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 13));
label_1e39a0:
    // 0x1e39a0: 0xae2c00ac  sw          $t4, 0xAC($s1)
    ctx->pc = 0x1e39a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 12));
label_1e39a4:
    // 0x1e39a4: 0xa22e0128  sb          $t6, 0x128($s1)
    ctx->pc = 0x1e39a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 14));
label_1e39a8:
    // 0x1e39a8: 0xa22e0129  sb          $t6, 0x129($s1)
    ctx->pc = 0x1e39a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 297), (uint8_t)GPR_U32(ctx, 14));
label_1e39ac:
    // 0x1e39ac: 0xa226012a  sb          $a2, 0x12A($s1)
    ctx->pc = 0x1e39acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 298), (uint8_t)GPR_U32(ctx, 6));
label_1e39b0:
    // 0x1e39b0: 0xa22d012b  sb          $t5, 0x12B($s1)
    ctx->pc = 0x1e39b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 299), (uint8_t)GPR_U32(ctx, 13));
label_1e39b4:
    // 0x1e39b4: 0xae2c012c  sw          $t4, 0x12C($s1)
    ctx->pc = 0x1e39b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 12));
label_1e39b8:
    // 0x1e39b8: 0xa22e0138  sb          $t6, 0x138($s1)
    ctx->pc = 0x1e39b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 312), (uint8_t)GPR_U32(ctx, 14));
label_1e39bc:
    // 0x1e39bc: 0xa22e0139  sb          $t6, 0x139($s1)
    ctx->pc = 0x1e39bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 313), (uint8_t)GPR_U32(ctx, 14));
label_1e39c0:
    // 0x1e39c0: 0xa226013a  sb          $a2, 0x13A($s1)
    ctx->pc = 0x1e39c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 314), (uint8_t)GPR_U32(ctx, 6));
label_1e39c4:
    // 0x1e39c4: 0xa22d013b  sb          $t5, 0x13B($s1)
    ctx->pc = 0x1e39c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 315), (uint8_t)GPR_U32(ctx, 13));
label_1e39c8:
    // 0x1e39c8: 0xae2c013c  sw          $t4, 0x13C($s1)
    ctx->pc = 0x1e39c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 12));
label_1e39cc:
    // 0x1e39cc: 0xa22e0148  sb          $t6, 0x148($s1)
    ctx->pc = 0x1e39ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 328), (uint8_t)GPR_U32(ctx, 14));
label_1e39d0:
    // 0x1e39d0: 0xa22e0149  sb          $t6, 0x149($s1)
    ctx->pc = 0x1e39d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 329), (uint8_t)GPR_U32(ctx, 14));
label_1e39d4:
    // 0x1e39d4: 0xa226014a  sb          $a2, 0x14A($s1)
    ctx->pc = 0x1e39d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 330), (uint8_t)GPR_U32(ctx, 6));
label_1e39d8:
    // 0x1e39d8: 0xa22d014b  sb          $t5, 0x14B($s1)
    ctx->pc = 0x1e39d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 331), (uint8_t)GPR_U32(ctx, 13));
label_1e39dc:
    // 0x1e39dc: 0xae2c014c  sw          $t4, 0x14C($s1)
    ctx->pc = 0x1e39dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 12));
label_1e39e0:
    // 0x1e39e0: 0xa22e0158  sb          $t6, 0x158($s1)
    ctx->pc = 0x1e39e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 344), (uint8_t)GPR_U32(ctx, 14));
label_1e39e4:
    // 0x1e39e4: 0xa22e0159  sb          $t6, 0x159($s1)
    ctx->pc = 0x1e39e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 345), (uint8_t)GPR_U32(ctx, 14));
label_1e39e8:
    // 0x1e39e8: 0xa226015a  sb          $a2, 0x15A($s1)
    ctx->pc = 0x1e39e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 346), (uint8_t)GPR_U32(ctx, 6));
label_1e39ec:
    // 0x1e39ec: 0xa22d015b  sb          $t5, 0x15B($s1)
    ctx->pc = 0x1e39ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 347), (uint8_t)GPR_U32(ctx, 13));
label_1e39f0:
    // 0x1e39f0: 0xae2c015c  sw          $t4, 0x15C($s1)
    ctx->pc = 0x1e39f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 12));
label_1e39f4:
    // 0x1e39f4: 0xa22e01d8  sb          $t6, 0x1D8($s1)
    ctx->pc = 0x1e39f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 472), (uint8_t)GPR_U32(ctx, 14));
label_1e39f8:
    // 0x1e39f8: 0xa22e01d9  sb          $t6, 0x1D9($s1)
    ctx->pc = 0x1e39f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 473), (uint8_t)GPR_U32(ctx, 14));
label_1e39fc:
    // 0x1e39fc: 0xa22601da  sb          $a2, 0x1DA($s1)
    ctx->pc = 0x1e39fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 474), (uint8_t)GPR_U32(ctx, 6));
label_1e3a00:
    // 0x1e3a00: 0xa22d01db  sb          $t5, 0x1DB($s1)
    ctx->pc = 0x1e3a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 475), (uint8_t)GPR_U32(ctx, 13));
label_1e3a04:
    // 0x1e3a04: 0xae2c01dc  sw          $t4, 0x1DC($s1)
    ctx->pc = 0x1e3a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 12));
label_1e3a08:
    // 0x1e3a08: 0xa22e01e8  sb          $t6, 0x1E8($s1)
    ctx->pc = 0x1e3a08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 488), (uint8_t)GPR_U32(ctx, 14));
label_1e3a0c:
    // 0x1e3a0c: 0xa22e01e9  sb          $t6, 0x1E9($s1)
    ctx->pc = 0x1e3a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 489), (uint8_t)GPR_U32(ctx, 14));
label_1e3a10:
    // 0x1e3a10: 0xa22601ea  sb          $a2, 0x1EA($s1)
    ctx->pc = 0x1e3a10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 490), (uint8_t)GPR_U32(ctx, 6));
label_1e3a14:
    // 0x1e3a14: 0xa22d01eb  sb          $t5, 0x1EB($s1)
    ctx->pc = 0x1e3a14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 491), (uint8_t)GPR_U32(ctx, 13));
label_1e3a18:
    // 0x1e3a18: 0xae2c01ec  sw          $t4, 0x1EC($s1)
    ctx->pc = 0x1e3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 12));
label_1e3a1c:
    // 0x1e3a1c: 0xa22e01f8  sb          $t6, 0x1F8($s1)
    ctx->pc = 0x1e3a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 504), (uint8_t)GPR_U32(ctx, 14));
label_1e3a20:
    // 0x1e3a20: 0xa22e01f9  sb          $t6, 0x1F9($s1)
    ctx->pc = 0x1e3a20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 505), (uint8_t)GPR_U32(ctx, 14));
label_1e3a24:
    // 0x1e3a24: 0xa22601fa  sb          $a2, 0x1FA($s1)
    ctx->pc = 0x1e3a24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 506), (uint8_t)GPR_U32(ctx, 6));
label_1e3a28:
    // 0x1e3a28: 0xa22d01fb  sb          $t5, 0x1FB($s1)
    ctx->pc = 0x1e3a28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 507), (uint8_t)GPR_U32(ctx, 13));
label_1e3a2c:
    // 0x1e3a2c: 0xae2c01fc  sw          $t4, 0x1FC($s1)
    ctx->pc = 0x1e3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 508), GPR_U32(ctx, 12));
label_1e3a30:
    // 0x1e3a30: 0xa22e0208  sb          $t6, 0x208($s1)
    ctx->pc = 0x1e3a30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 520), (uint8_t)GPR_U32(ctx, 14));
label_1e3a34:
    // 0x1e3a34: 0xa22e0209  sb          $t6, 0x209($s1)
    ctx->pc = 0x1e3a34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 521), (uint8_t)GPR_U32(ctx, 14));
label_1e3a38:
    // 0x1e3a38: 0xa226020a  sb          $a2, 0x20A($s1)
    ctx->pc = 0x1e3a38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 522), (uint8_t)GPR_U32(ctx, 6));
label_1e3a3c:
    // 0x1e3a3c: 0xa22d020b  sb          $t5, 0x20B($s1)
    ctx->pc = 0x1e3a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 523), (uint8_t)GPR_U32(ctx, 13));
label_1e3a40:
    // 0x1e3a40: 0xae2c020c  sw          $t4, 0x20C($s1)
    ctx->pc = 0x1e3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 12));
label_1e3a44:
    // 0x1e3a44: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x1e3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_1e3a48:
    // 0x1e3a48: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e3a4c:
    // 0x1e3a4c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e3a50:
    // 0x1e3a50: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e3a54:
    // 0x1e3a54: 0xdc252a20  ld          $a1, 0x2A20($at)
    ctx->pc = 0x1e3a54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10784)));
label_1e3a58:
    // 0x1e3a58: 0xc05de30  jal         func_1778C0
label_1e3a5c:
    if (ctx->pc == 0x1E3A5Cu) {
        ctx->pc = 0x1E3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A58u;
        // 0x1e3a5c: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A60u;
        goto label_1e3a60;
    }
    ctx->pc = 0x1E3A58u;
    SET_GPR_U32(ctx, 31, 0x1E3A60u);
    ctx->pc = 0x1E3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3A58u;
    // 0x1e3a5c: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3A58u, 0x1E3A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A60u;
label_1e3a60:
    // 0x1e3a60: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1e3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e3a64:
    // 0x1e3a64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3a68:
    // 0x1e3a68: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1e3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1e3a6c:
    // 0x1e3a6c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e3a70:
    // 0x1e3a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3a74:
    // 0x1e3a74: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e3a78:
    // 0x1e3a78: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3a7c:
    // 0x1e3a7c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1e3a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1e3a80:
    // 0x1e3a80: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e3a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e3a84:
    // 0x1e3a84: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1e3a88:
    if (ctx->pc == 0x1E3A88u) {
        ctx->pc = 0x1E3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A84u;
        // 0x1e3a88: 0x24070124  addiu       $a3, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3A8Cu;
        goto label_1e3a8c;
    }
    ctx->pc = 0x1E3A84u;
    {
        const bool branch_taken_0x1e3a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3A84u;
        // 0x1e3a88: 0x24070124  addiu       $a3, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a84) {
            ctx->pc = 0x1E3A90u;
            goto label_1e3a90;
        }
    }
    ctx->pc = 0x1E3A8Cu;
label_1e3a8c:
    // 0x1e3a8c: 0x24070138  addiu       $a3, $zero, 0x138
    ctx->pc = 0x1e3a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_1e3a90:
    // 0x1e3a90: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e3a94:
    // 0x1e3a94: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x1e3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_1e3a98:
    // 0x1e3a98: 0xdc252940  ld          $a1, 0x2940($at)
    ctx->pc = 0x1e3a98u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10560)));
label_1e3a9c:
    // 0x1e3a9c: 0x24060138  addiu       $a2, $zero, 0x138
    ctx->pc = 0x1e3a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_1e3aa0:
    // 0x1e3aa0: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x1e3aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e3aa4:
    // 0x1e3aa4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3aa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3aa8:
    // 0x1e3aa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e3aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3aac:
    // 0x1e3aac: 0xc05de30  jal         func_1778C0
label_1e3ab0:
    if (ctx->pc == 0x1E3AB0u) {
        ctx->pc = 0x1E3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AACu;
        // 0x1e3ab0: 0x240b0130  addiu       $t3, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3AB4u;
        goto label_1e3ab4;
    }
    ctx->pc = 0x1E3AACu;
    SET_GPR_U32(ctx, 31, 0x1E3AB4u);
    ctx->pc = 0x1E3AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3AACu;
    // 0x1e3ab0: 0x240b0130  addiu       $t3, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3AACu, 0x1E3AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3AB4u;
label_1e3ab4:
    // 0x1e3ab4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1e3ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e3ab8:
    // 0x1e3ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3abc:
    // 0x1e3abc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1e3abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1e3ac0:
    // 0x1e3ac0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e3ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e3ac4:
    // 0x1e3ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3ac8:
    // 0x1e3ac8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e3acc:
    // 0x1e3acc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3ad0:
    // 0x1e3ad0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1e3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1e3ad4:
    // 0x1e3ad4: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e3ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e3ad8:
    // 0x1e3ad8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1e3adc:
    if (ctx->pc == 0x1E3ADCu) {
        ctx->pc = 0x1E3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AD8u;
        // 0x1e3adc: 0x24070124  addiu       $a3, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3AE0u;
        goto label_1e3ae0;
    }
    ctx->pc = 0x1E3AD8u;
    {
        const bool branch_taken_0x1e3ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3AD8u;
        // 0x1e3adc: 0x24070124  addiu       $a3, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ad8) {
            ctx->pc = 0x1E3AE4u;
            goto label_1e3ae4;
        }
    }
    ctx->pc = 0x1E3AE0u;
label_1e3ae0:
    // 0x1e3ae0: 0x24070138  addiu       $a3, $zero, 0x138
    ctx->pc = 0x1e3ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_1e3ae4:
    // 0x1e3ae4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e3ae8:
    // 0x1e3ae8: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x1e3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_1e3aec:
    // 0x1e3aec: 0xdc252948  ld          $a1, 0x2948($at)
    ctx->pc = 0x1e3aecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10568)));
label_1e3af0:
    // 0x1e3af0: 0x24060138  addiu       $a2, $zero, 0x138
    ctx->pc = 0x1e3af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
label_1e3af4:
    // 0x1e3af4: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x1e3af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e3af8:
    // 0x1e3af8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3af8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3afc:
    // 0x1e3afc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e3afcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b00:
    // 0x1e3b00: 0xc05de30  jal         func_1778C0
label_1e3b04:
    if (ctx->pc == 0x1E3B04u) {
        ctx->pc = 0x1E3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B00u;
        // 0x1e3b04: 0x240b0130  addiu       $t3, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B08u;
        goto label_1e3b08;
    }
    ctx->pc = 0x1E3B00u;
    SET_GPR_U32(ctx, 31, 0x1E3B08u);
    ctx->pc = 0x1E3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B00u;
    // 0x1e3b04: 0x240b0130  addiu       $t3, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3B00u, 0x1E3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B08u;
label_1e3b08:
    // 0x1e3b08: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1e3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e3b0c:
    // 0x1e3b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3b10:
    // 0x1e3b10: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1e3b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1e3b14:
    // 0x1e3b14: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e3b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e3b18:
    // 0x1e3b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3b1c:
    // 0x1e3b1c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e3b20:
    // 0x1e3b20: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3b24:
    // 0x1e3b24: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1e3b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1e3b28:
    // 0x1e3b28: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e3b2c:
    // 0x1e3b2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1e3b30:
    if (ctx->pc == 0x1E3B30u) {
        ctx->pc = 0x1E3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B2Cu;
        // 0x1e3b30: 0x24070154  addiu       $a3, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B34u;
        goto label_1e3b34;
    }
    ctx->pc = 0x1E3B2Cu;
    {
        const bool branch_taken_0x1e3b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B2Cu;
        // 0x1e3b30: 0x24070154  addiu       $a3, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b2c) {
            ctx->pc = 0x1E3B38u;
            goto label_1e3b38;
        }
    }
    ctx->pc = 0x1E3B34u;
label_1e3b34:
    // 0x1e3b34: 0x24070168  addiu       $a3, $zero, 0x168
    ctx->pc = 0x1e3b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1e3b38:
    // 0x1e3b38: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e3b3c:
    // 0x1e3b3c: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x1e3b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_1e3b40:
    // 0x1e3b40: 0xdc252950  ld          $a1, 0x2950($at)
    ctx->pc = 0x1e3b40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10576)));
label_1e3b44:
    // 0x1e3b44: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x1e3b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1e3b48:
    // 0x1e3b48: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x1e3b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e3b4c:
    // 0x1e3b4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3b4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b50:
    // 0x1e3b50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e3b50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b54:
    // 0x1e3b54: 0xc05de30  jal         func_1778C0
label_1e3b58:
    if (ctx->pc == 0x1E3B58u) {
        ctx->pc = 0x1E3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B54u;
        // 0x1e3b58: 0x240b00d0  addiu       $t3, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B5Cu;
        goto label_1e3b5c;
    }
    ctx->pc = 0x1E3B54u;
    SET_GPR_U32(ctx, 31, 0x1E3B5Cu);
    ctx->pc = 0x1E3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B54u;
    // 0x1e3b58: 0x240b00d0  addiu       $t3, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3B54u, 0x1E3B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B5Cu;
label_1e3b5c:
    // 0x1e3b5c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3b60:
    // 0x1e3b60: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e3b64:
    // 0x1e3b64: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e3b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e3b68:
    // 0x1e3b68: 0x262404a0  addiu       $a0, $s1, 0x4A0
    ctx->pc = 0x1e3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1184));
label_1e3b6c:
    // 0x1e3b6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3b70:
    // 0x1e3b70: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1e3b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e3b74:
    // 0x1e3b74: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e3b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e3b78:
    // 0x1e3b78: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x1e3b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1e3b7c:
    // 0x1e3b7c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e3b80:
    // 0x1e3b80: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e3b84:
    // 0x1e3b84: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e3b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e3b88:
    // 0x1e3b88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3b88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b8c:
    // 0x1e3b8c: 0xdc252918  ld          $a1, 0x2918($at)
    ctx->pc = 0x1e3b8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10520)));
label_1e3b90:
    // 0x1e3b90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e3b90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b94:
    // 0x1e3b94: 0xc05de30  jal         func_1778C0
label_1e3b98:
    if (ctx->pc == 0x1E3B98u) {
        ctx->pc = 0x1E3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3B94u;
        // 0x1e3b98: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3B9Cu;
        goto label_1e3b9c;
    }
    ctx->pc = 0x1E3B94u;
    SET_GPR_U32(ctx, 31, 0x1E3B9Cu);
    ctx->pc = 0x1E3B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3B94u;
    // 0x1e3b98: 0x240b0100  addiu       $t3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3B94u, 0x1E3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3B9Cu;
label_1e3b9c:
    // 0x1e3b9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e3b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e3ba0:
    // 0x1e3ba0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1e3ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e3ba4:
    // 0x1e3ba4: 0x1460ff3d  bnez        $v1, . + 4 + (-0xC3 << 2)
label_1e3ba8:
    if (ctx->pc == 0x1E3BA8u) {
        ctx->pc = 0x1E3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BA4u;
        // 0x1e3ba8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3BACu;
        goto label_1e3bac;
    }
    ctx->pc = 0x1E3BA4u;
    {
        const bool branch_taken_0x1e3ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BA4u;
        // 0x1e3ba8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ba4) {
            ctx->pc = 0x1E389Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e389c;
        }
    }
    ctx->pc = 0x1E3BACu;
label_1e3bac:
    // 0x1e3bac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e3bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3bb0:
    // 0x1e3bb0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e3bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3bb4:
    // 0x1e3bb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e3bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3bb8:
    // 0x1e3bb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e3bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3bbc:
    // 0x1e3bbc: 0x3e00008  jr          $ra
label_1e3bc0:
    if (ctx->pc == 0x1E3BC0u) {
        ctx->pc = 0x1E3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BBCu;
        // 0x1e3bc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3BC4u;
        goto label_1e3bc4;
    }
    ctx->pc = 0x1E3BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BBCu;
        // 0x1e3bc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3BC4u;
label_1e3bc4:
    // 0x1e3bc4: 0x0  nop
    ctx->pc = 0x1e3bc4u;
    // NOP
label_1e3bc8:
    // 0x1e3bc8: 0x0  nop
    ctx->pc = 0x1e3bc8u;
    // NOP
label_1e3bcc:
    // 0x1e3bcc: 0x0  nop
    ctx->pc = 0x1e3bccu;
    // NOP
label_1e3bd0:
    // 0x1e3bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e3bd4:
    // 0x1e3bd4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1e3bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1e3bd8:
    // 0x1e3bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3bdc:
    // 0x1e3bdc: 0x2463b8b0  addiu       $v1, $v1, -0x4750
    ctx->pc = 0x1e3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949040));
label_1e3be0:
    // 0x1e3be0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1e3be0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1e3be4:
    // 0x1e3be4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1e3be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3be8:
    // 0x1e3be8: 0x84640014  lh          $a0, 0x14($v1)
    ctx->pc = 0x1e3be8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_1e3bec:
    // 0x1e3bec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1e3becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e3bf0:
    // 0x1e3bf0: 0x90630016  lbu         $v1, 0x16($v1)
    ctx->pc = 0x1e3bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
label_1e3bf4:
    // 0x1e3bf4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1e3bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_1e3bf8:
    // 0x1e3bf8: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x1e3bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_1e3bfc:
    // 0x1e3bfc: 0xa4c40014  sh          $a0, 0x14($a2)
    ctx->pc = 0x1e3bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 20), (uint16_t)GPR_U32(ctx, 4));
label_1e3c00:
    // 0x1e3c00: 0xa0c30016  sb          $v1, 0x16($a2)
    ctx->pc = 0x1e3c00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 22), (uint8_t)GPR_U32(ctx, 3));
label_1e3c04:
    // 0x1e3c04: 0x8f838d70  lw          $v1, -0x7290($gp)
    ctx->pc = 0x1e3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1e3c08:
    // 0x1e3c08: 0x1060017f  beqz        $v1, . + 4 + (0x17F << 2)
label_1e3c0c:
    if (ctx->pc == 0x1E3C0Cu) {
        ctx->pc = 0x1E3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C08u;
        // 0x1e3c0c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C10u;
        goto label_1e3c10;
    }
    ctx->pc = 0x1E3C08u;
    {
        const bool branch_taken_0x1e3c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C08u;
        // 0x1e3c0c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c08) {
            ctx->pc = 0x1E4208u;
            { ctx->pc = 0x1e4208; return; }
        }
    }
    ctx->pc = 0x1E3C10u;
label_1e3c10:
    // 0x1e3c10: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e3c14:
    // 0x1e3c14: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1e3c14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e3c18:
    // 0x1e3c18: 0x27858d78  addiu       $a1, $gp, -0x7288
    ctx->pc = 0x1e3c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937976));
label_1e3c1c:
    // 0x1e3c1c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e3c20:
    // 0x1e3c20: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e3c24:
    // 0x1e3c24: 0x8f868d6c  lw          $a2, -0x7294($gp)
    ctx->pc = 0x1e3c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
label_1e3c28:
    // 0x1e3c28: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3c2c:
    // 0x1e3c2c: 0x74140  sll         $t0, $a3, 5
    ctx->pc = 0x1e3c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e3c30:
    // 0x1e3c30: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1e3c34:
    // 0x1e3c34: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1e3c38:
    // 0x1e3c38: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e3c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3c3c:
    // 0x1e3c3c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e3c40:
    if (ctx->pc == 0x1E3C40u) {
        ctx->pc = 0x1E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C3Cu;
        // 0x1e3c40: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C44u;
        goto label_1e3c44;
    }
    ctx->pc = 0x1E3C3Cu;
    {
        const bool branch_taken_0x1e3c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C3Cu;
        // 0x1e3c40: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c3c) {
            ctx->pc = 0x1E3C4Cu;
            goto label_1e3c4c;
        }
    }
    ctx->pc = 0x1E3C44u;
label_1e3c44:
    // 0x1e3c44: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3c48:
    if (ctx->pc == 0x1E3C48u) {
        ctx->pc = 0x1E3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C44u;
        // 0x1e3c48: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C4Cu;
        goto label_1e3c4c;
    }
    ctx->pc = 0x1E3C44u;
    {
        const bool branch_taken_0x1e3c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C44u;
        // 0x1e3c48: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c44) {
            ctx->pc = 0x1E3C50u;
            goto label_1e3c50;
        }
    }
    ctx->pc = 0x1E3C4Cu;
label_1e3c4c:
    // 0x1e3c4c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e3c50:
    // 0x1e3c50: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x1e3c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e3c54:
    // 0x1e3c54: 0x10200124  beqz        $at, . + 4 + (0x124 << 2)
label_1e3c58:
    if (ctx->pc == 0x1E3C58u) {
        ctx->pc = 0x1E3C5Cu;
        goto label_1e3c5c;
    }
    ctx->pc = 0x1E3C54u;
    {
        const bool branch_taken_0x1e3c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c54) {
            ctx->pc = 0x1E40E8u;
            { ctx->pc = 0x1e40e8; return; }
        }
    }
    ctx->pc = 0x1E3C5Cu;
label_1e3c5c:
    // 0x1e3c5c: 0x8f828d60  lw          $v0, -0x72A0($gp)
    ctx->pc = 0x1e3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937952)));
label_1e3c60:
    // 0x1e3c60: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1e3c64:
    if (ctx->pc == 0x1E3C64u) {
        ctx->pc = 0x1E3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C60u;
        // 0x1e3c64: 0x3047000f  andi        $a3, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C68u;
        goto label_1e3c68;
    }
    ctx->pc = 0x1E3C60u;
    {
        const bool branch_taken_0x1e3c60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C60u;
        // 0x1e3c64: 0x3047000f  andi        $a3, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c60) {
            ctx->pc = 0x1E3C74u;
            goto label_1e3c74;
        }
    }
    ctx->pc = 0x1E3C68u;
label_1e3c68:
    // 0x1e3c68: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1e3c6c:
    if (ctx->pc == 0x1E3C6Cu) {
        ctx->pc = 0x1E3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C68u;
        // 0x1e3c6c: 0x28e10008  slti        $at, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C70u;
        goto label_1e3c70;
    }
    ctx->pc = 0x1E3C68u;
    {
        const bool branch_taken_0x1e3c68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C68u;
        // 0x1e3c6c: 0x28e10008  slti        $at, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c68) {
            ctx->pc = 0x1E3C78u;
            goto label_1e3c78;
        }
    }
    ctx->pc = 0x1E3C70u;
label_1e3c70:
    // 0x1e3c70: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1e3c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_1e3c74:
    // 0x1e3c74: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x1e3c74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e3c78:
    // 0x1e3c78: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_1e3c7c:
    if (ctx->pc == 0x1E3C7Cu) {
        ctx->pc = 0x1E3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C78u;
        // 0x1e3c7c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C80u;
        goto label_1e3c80;
    }
    ctx->pc = 0x1E3C78u;
    {
        const bool branch_taken_0x1e3c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C78u;
        // 0x1e3c7c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c78) {
            ctx->pc = 0x1E3CECu;
            goto label_1e3cec;
        }
    }
    ctx->pc = 0x1E3C80u;
label_1e3c80:
    // 0x1e3c80: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1e3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1e3c84:
    // 0x1e3c84: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1e3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1e3c88:
    // 0x1e3c88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e3c8c:
    // 0x1e3c8c: 0x471823  subu        $v1, $v0, $a3
    ctx->pc = 0x1e3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1e3c90:
    // 0x1e3c90: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e3c94:
    if (ctx->pc == 0x1E3C94u) {
        ctx->pc = 0x1E3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C90u;
        // 0x1e3c94: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3C98u;
        goto label_1e3c98;
    }
    ctx->pc = 0x1E3C90u;
    {
        const bool branch_taken_0x1e3c90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C90u;
        // 0x1e3c94: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c90) {
            ctx->pc = 0x1E3CA0u;
            goto label_1e3ca0;
        }
    }
    ctx->pc = 0x1E3C98u;
label_1e3c98:
    // 0x1e3c98: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1e3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1e3c9c:
    // 0x1e3c9c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1e3c9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1e3ca0:
    // 0x1e3ca0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1e3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1e3ca4:
    // 0x1e3ca4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e3ca8:
    // 0x1e3ca8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1e3ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1e3cac:
    // 0x1e3cac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3cb0:
    // 0x1e3cb0: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1e3cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e3cb4:
    // 0x1e3cb4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e3cb8:
    if (ctx->pc == 0x1E3CB8u) {
        ctx->pc = 0x1E3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CB4u;
        // 0x1e3cb8: 0x618c3  sra         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CBCu;
        goto label_1e3cbc;
    }
    ctx->pc = 0x1E3CB4u;
    {
        const bool branch_taken_0x1e3cb4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CB4u;
        // 0x1e3cb8: 0x618c3  sra         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cb4) {
            ctx->pc = 0x1E3CC4u;
            goto label_1e3cc4;
        }
    }
    ctx->pc = 0x1E3CBCu;
label_1e3cbc:
    // 0x1e3cbc: 0x24c30007  addiu       $v1, $a2, 0x7
    ctx->pc = 0x1e3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e3cc0:
    // 0x1e3cc0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1e3cc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1e3cc4:
    // 0x1e3cc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1e3cc8:
    // 0x1e3cc8: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x1e3cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e3ccc:
    // 0x1e3ccc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e3cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e3cd0:
    // 0x1e3cd0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1e3cd4:
    if (ctx->pc == 0x1E3CD4u) {
        ctx->pc = 0x1E3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CD0u;
        // 0x1e3cd4: 0x730c3  sra         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CD8u;
        goto label_1e3cd8;
    }
    ctx->pc = 0x1E3CD0u;
    {
        const bool branch_taken_0x1e3cd0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CD0u;
        // 0x1e3cd4: 0x730c3  sra         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cd0) {
            ctx->pc = 0x1E3CE0u;
            goto label_1e3ce0;
        }
    }
    ctx->pc = 0x1E3CD8u;
label_1e3cd8:
    // 0x1e3cd8: 0x24e60007  addiu       $a2, $a3, 0x7
    ctx->pc = 0x1e3cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_1e3cdc:
    // 0x1e3cdc: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x1e3cdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
label_1e3ce0:
    // 0x1e3ce0: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x1e3ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_1e3ce4:
    // 0x1e3ce4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e3ce8:
    if (ctx->pc == 0x1E3CE8u) {
        ctx->pc = 0x1E3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CE4u;
        // 0x1e3ce8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3CECu;
        goto label_1e3cec;
    }
    ctx->pc = 0x1E3CE4u;
    {
        const bool branch_taken_0x1e3ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CE4u;
        // 0x1e3ce8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ce4) {
            ctx->pc = 0x1E3D58u;
            { ctx->pc = 0x1e3d58; return; }
        }
    }
    ctx->pc = 0x1E3CECu;
label_1e3cec:
    // 0x1e3cec: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x1e3cecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1e3cf0:
    // 0x1e3cf0: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1e3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1e3cf4:
    // 0x1e3cf4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1e3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1e3cf8:
    // 0x1e3cf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e3cfc:
    // 0x1e3cfc: 0x471823  subu        $v1, $v0, $a3
    ctx->pc = 0x1e3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1e3d00:
    // 0x1e3d00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e3d04:
    if (ctx->pc == 0x1E3D04u) {
        ctx->pc = 0x1E3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D00u;
        // 0x1e3d04: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D08u;
        goto label_1e3d08;
    }
    ctx->pc = 0x1E3D00u;
    {
        const bool branch_taken_0x1e3d00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D00u;
        // 0x1e3d04: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d00) {
            ctx->pc = 0x1E3D10u;
            goto label_1e3d10;
        }
    }
    ctx->pc = 0x1E3D08u;
label_1e3d08:
    // 0x1e3d08: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x1e3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1e3d0c:
    // 0x1e3d0c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1e3d0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1e3d10:
    // 0x1e3d10: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1e3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1e3d14:
    // 0x1e3d14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e3d18:
    // 0x1e3d18: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1e3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1e3d1c:
    // 0x1e3d1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e3d20:
    // 0x1e3d20: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1e3d20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e3d24:
    // 0x1e3d24: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e3d28:
    if (ctx->pc == 0x1E3D28u) {
        ctx->pc = 0x1E3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D24u;
        // 0x1e3d28: 0x618c3  sra         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D2Cu;
        goto label_1e3d2c;
    }
    ctx->pc = 0x1E3D24u;
    {
        const bool branch_taken_0x1e3d24 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D24u;
        // 0x1e3d28: 0x618c3  sra         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d24) {
            ctx->pc = 0x1E3D34u;
            goto label_1e3d34;
        }
    }
    ctx->pc = 0x1E3D2Cu;
label_1e3d2c:
    // 0x1e3d2c: 0x24c30007  addiu       $v1, $a2, 0x7
    ctx->pc = 0x1e3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e3d30:
    // 0x1e3d30: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1e3d30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1e3d34:
    // 0x1e3d34: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1e3d38:
    // 0x1e3d38: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x1e3d38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e3d3c:
    // 0x1e3d3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e3d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1e3d40:
    // 0x1e3d40: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1e3d44:
    if (ctx->pc == 0x1E3D44u) {
        ctx->pc = 0x1E3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D40u;
        // 0x1e3d44: 0x730c3  sra         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D48u;
        goto label_1e3d48;
    }
    ctx->pc = 0x1E3D40u;
    {
        const bool branch_taken_0x1e3d40 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D40u;
        // 0x1e3d44: 0x730c3  sra         $a2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d40) {
            ctx->pc = 0x1E3D50u;
            { ctx->pc = 0x1e3d50; return; }
        }
    }
    ctx->pc = 0x1E3D48u;
label_1e3d48:
    // 0x1e3d48: 0x24e60007  addiu       $a2, $a3, 0x7
    ctx->pc = 0x1e3d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_1e3d4c:
    // 0x1e3d4c: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x1e3d4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    ctx->pc = 0x1e3d50u;
    return;
}

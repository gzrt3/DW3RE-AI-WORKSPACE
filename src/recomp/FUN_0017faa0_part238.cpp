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


void FUN_0017faa0_part238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1f3710u: goto label_1f3710;
        case 0x1f3714u: goto label_1f3714;
        case 0x1f3718u: goto label_1f3718;
        case 0x1f371cu: goto label_1f371c;
        case 0x1f3720u: goto label_1f3720;
        case 0x1f3724u: goto label_1f3724;
        case 0x1f3728u: goto label_1f3728;
        case 0x1f372cu: goto label_1f372c;
        case 0x1f3730u: goto label_1f3730;
        case 0x1f3734u: goto label_1f3734;
        case 0x1f3738u: goto label_1f3738;
        case 0x1f373cu: goto label_1f373c;
        case 0x1f3740u: goto label_1f3740;
        case 0x1f3744u: goto label_1f3744;
        case 0x1f3748u: goto label_1f3748;
        case 0x1f374cu: goto label_1f374c;
        case 0x1f3750u: goto label_1f3750;
        case 0x1f3754u: goto label_1f3754;
        case 0x1f3758u: goto label_1f3758;
        case 0x1f375cu: goto label_1f375c;
        case 0x1f3760u: goto label_1f3760;
        case 0x1f3764u: goto label_1f3764;
        case 0x1f3768u: goto label_1f3768;
        case 0x1f376cu: goto label_1f376c;
        case 0x1f3770u: goto label_1f3770;
        case 0x1f3774u: goto label_1f3774;
        case 0x1f3778u: goto label_1f3778;
        case 0x1f377cu: goto label_1f377c;
        case 0x1f3780u: goto label_1f3780;
        case 0x1f3784u: goto label_1f3784;
        case 0x1f3788u: goto label_1f3788;
        case 0x1f378cu: goto label_1f378c;
        case 0x1f3790u: goto label_1f3790;
        case 0x1f3794u: goto label_1f3794;
        case 0x1f3798u: goto label_1f3798;
        case 0x1f379cu: goto label_1f379c;
        case 0x1f37a0u: goto label_1f37a0;
        case 0x1f37a4u: goto label_1f37a4;
        case 0x1f37a8u: goto label_1f37a8;
        case 0x1f37acu: goto label_1f37ac;
        case 0x1f37b0u: goto label_1f37b0;
        case 0x1f37b4u: goto label_1f37b4;
        case 0x1f37b8u: goto label_1f37b8;
        case 0x1f37bcu: goto label_1f37bc;
        case 0x1f37c0u: goto label_1f37c0;
        case 0x1f37c4u: goto label_1f37c4;
        case 0x1f37c8u: goto label_1f37c8;
        case 0x1f37ccu: goto label_1f37cc;
        case 0x1f37d0u: goto label_1f37d0;
        case 0x1f37d4u: goto label_1f37d4;
        case 0x1f37d8u: goto label_1f37d8;
        case 0x1f37dcu: goto label_1f37dc;
        case 0x1f37e0u: goto label_1f37e0;
        case 0x1f37e4u: goto label_1f37e4;
        case 0x1f37e8u: goto label_1f37e8;
        case 0x1f37ecu: goto label_1f37ec;
        case 0x1f37f0u: goto label_1f37f0;
        case 0x1f37f4u: goto label_1f37f4;
        case 0x1f37f8u: goto label_1f37f8;
        case 0x1f37fcu: goto label_1f37fc;
        case 0x1f3800u: goto label_1f3800;
        case 0x1f3804u: goto label_1f3804;
        case 0x1f3808u: goto label_1f3808;
        case 0x1f380cu: goto label_1f380c;
        case 0x1f3810u: goto label_1f3810;
        case 0x1f3814u: goto label_1f3814;
        case 0x1f3818u: goto label_1f3818;
        case 0x1f381cu: goto label_1f381c;
        case 0x1f3820u: goto label_1f3820;
        case 0x1f3824u: goto label_1f3824;
        case 0x1f3828u: goto label_1f3828;
        case 0x1f382cu: goto label_1f382c;
        case 0x1f3830u: goto label_1f3830;
        case 0x1f3834u: goto label_1f3834;
        case 0x1f3838u: goto label_1f3838;
        case 0x1f383cu: goto label_1f383c;
        case 0x1f3840u: goto label_1f3840;
        case 0x1f3844u: goto label_1f3844;
        case 0x1f3848u: goto label_1f3848;
        case 0x1f384cu: goto label_1f384c;
        case 0x1f3850u: goto label_1f3850;
        case 0x1f3854u: goto label_1f3854;
        case 0x1f3858u: goto label_1f3858;
        case 0x1f385cu: goto label_1f385c;
        case 0x1f3860u: goto label_1f3860;
        case 0x1f3864u: goto label_1f3864;
        case 0x1f3868u: goto label_1f3868;
        case 0x1f386cu: goto label_1f386c;
        case 0x1f3870u: goto label_1f3870;
        case 0x1f3874u: goto label_1f3874;
        case 0x1f3878u: goto label_1f3878;
        case 0x1f387cu: goto label_1f387c;
        case 0x1f3880u: goto label_1f3880;
        case 0x1f3884u: goto label_1f3884;
        case 0x1f3888u: goto label_1f3888;
        case 0x1f388cu: goto label_1f388c;
        case 0x1f3890u: goto label_1f3890;
        case 0x1f3894u: goto label_1f3894;
        case 0x1f3898u: goto label_1f3898;
        case 0x1f389cu: goto label_1f389c;
        case 0x1f38a0u: goto label_1f38a0;
        case 0x1f38a4u: goto label_1f38a4;
        case 0x1f38a8u: goto label_1f38a8;
        case 0x1f38acu: goto label_1f38ac;
        case 0x1f38b0u: goto label_1f38b0;
        case 0x1f38b4u: goto label_1f38b4;
        case 0x1f38b8u: goto label_1f38b8;
        case 0x1f38bcu: goto label_1f38bc;
        case 0x1f38c0u: goto label_1f38c0;
        case 0x1f38c4u: goto label_1f38c4;
        case 0x1f38c8u: goto label_1f38c8;
        case 0x1f38ccu: goto label_1f38cc;
        case 0x1f38d0u: goto label_1f38d0;
        case 0x1f38d4u: goto label_1f38d4;
        case 0x1f38d8u: goto label_1f38d8;
        case 0x1f38dcu: goto label_1f38dc;
        case 0x1f38e0u: goto label_1f38e0;
        case 0x1f38e4u: goto label_1f38e4;
        case 0x1f38e8u: goto label_1f38e8;
        case 0x1f38ecu: goto label_1f38ec;
        case 0x1f38f0u: goto label_1f38f0;
        case 0x1f38f4u: goto label_1f38f4;
        case 0x1f38f8u: goto label_1f38f8;
        case 0x1f38fcu: goto label_1f38fc;
        case 0x1f3900u: goto label_1f3900;
        case 0x1f3904u: goto label_1f3904;
        case 0x1f3908u: goto label_1f3908;
        case 0x1f390cu: goto label_1f390c;
        case 0x1f3910u: goto label_1f3910;
        case 0x1f3914u: goto label_1f3914;
        case 0x1f3918u: goto label_1f3918;
        case 0x1f391cu: goto label_1f391c;
        case 0x1f3920u: goto label_1f3920;
        case 0x1f3924u: goto label_1f3924;
        case 0x1f3928u: goto label_1f3928;
        case 0x1f392cu: goto label_1f392c;
        case 0x1f3930u: goto label_1f3930;
        case 0x1f3934u: goto label_1f3934;
        case 0x1f3938u: goto label_1f3938;
        case 0x1f393cu: goto label_1f393c;
        case 0x1f3940u: goto label_1f3940;
        case 0x1f3944u: goto label_1f3944;
        case 0x1f3948u: goto label_1f3948;
        case 0x1f394cu: goto label_1f394c;
        case 0x1f3950u: goto label_1f3950;
        case 0x1f3954u: goto label_1f3954;
        case 0x1f3958u: goto label_1f3958;
        case 0x1f395cu: goto label_1f395c;
        case 0x1f3960u: goto label_1f3960;
        case 0x1f3964u: goto label_1f3964;
        case 0x1f3968u: goto label_1f3968;
        case 0x1f396cu: goto label_1f396c;
        case 0x1f3970u: goto label_1f3970;
        case 0x1f3974u: goto label_1f3974;
        case 0x1f3978u: goto label_1f3978;
        case 0x1f397cu: goto label_1f397c;
        case 0x1f3980u: goto label_1f3980;
        case 0x1f3984u: goto label_1f3984;
        case 0x1f3988u: goto label_1f3988;
        case 0x1f398cu: goto label_1f398c;
        case 0x1f3990u: goto label_1f3990;
        case 0x1f3994u: goto label_1f3994;
        case 0x1f3998u: goto label_1f3998;
        case 0x1f399cu: goto label_1f399c;
        case 0x1f39a0u: goto label_1f39a0;
        case 0x1f39a4u: goto label_1f39a4;
        case 0x1f39a8u: goto label_1f39a8;
        case 0x1f39acu: goto label_1f39ac;
        case 0x1f39b0u: goto label_1f39b0;
        case 0x1f39b4u: goto label_1f39b4;
        case 0x1f39b8u: goto label_1f39b8;
        case 0x1f39bcu: goto label_1f39bc;
        case 0x1f39c0u: goto label_1f39c0;
        case 0x1f39c4u: goto label_1f39c4;
        case 0x1f39c8u: goto label_1f39c8;
        case 0x1f39ccu: goto label_1f39cc;
        case 0x1f39d0u: goto label_1f39d0;
        case 0x1f39d4u: goto label_1f39d4;
        case 0x1f39d8u: goto label_1f39d8;
        case 0x1f39dcu: goto label_1f39dc;
        case 0x1f39e0u: goto label_1f39e0;
        case 0x1f39e4u: goto label_1f39e4;
        case 0x1f39e8u: goto label_1f39e8;
        case 0x1f39ecu: goto label_1f39ec;
        case 0x1f39f0u: goto label_1f39f0;
        case 0x1f39f4u: goto label_1f39f4;
        case 0x1f39f8u: goto label_1f39f8;
        case 0x1f39fcu: goto label_1f39fc;
        case 0x1f3a00u: goto label_1f3a00;
        case 0x1f3a04u: goto label_1f3a04;
        case 0x1f3a08u: goto label_1f3a08;
        case 0x1f3a0cu: goto label_1f3a0c;
        case 0x1f3a10u: goto label_1f3a10;
        case 0x1f3a14u: goto label_1f3a14;
        case 0x1f3a18u: goto label_1f3a18;
        case 0x1f3a1cu: goto label_1f3a1c;
        case 0x1f3a20u: goto label_1f3a20;
        case 0x1f3a24u: goto label_1f3a24;
        case 0x1f3a28u: goto label_1f3a28;
        case 0x1f3a2cu: goto label_1f3a2c;
        case 0x1f3a30u: goto label_1f3a30;
        case 0x1f3a34u: goto label_1f3a34;
        case 0x1f3a38u: goto label_1f3a38;
        case 0x1f3a3cu: goto label_1f3a3c;
        case 0x1f3a40u: goto label_1f3a40;
        case 0x1f3a44u: goto label_1f3a44;
        case 0x1f3a48u: goto label_1f3a48;
        case 0x1f3a4cu: goto label_1f3a4c;
        case 0x1f3a50u: goto label_1f3a50;
        case 0x1f3a54u: goto label_1f3a54;
        case 0x1f3a58u: goto label_1f3a58;
        case 0x1f3a5cu: goto label_1f3a5c;
        case 0x1f3a60u: goto label_1f3a60;
        case 0x1f3a64u: goto label_1f3a64;
        case 0x1f3a68u: goto label_1f3a68;
        case 0x1f3a6cu: goto label_1f3a6c;
        case 0x1f3a70u: goto label_1f3a70;
        case 0x1f3a74u: goto label_1f3a74;
        case 0x1f3a78u: goto label_1f3a78;
        case 0x1f3a7cu: goto label_1f3a7c;
        case 0x1f3a80u: goto label_1f3a80;
        case 0x1f3a84u: goto label_1f3a84;
        case 0x1f3a88u: goto label_1f3a88;
        case 0x1f3a8cu: goto label_1f3a8c;
        case 0x1f3a90u: goto label_1f3a90;
        case 0x1f3a94u: goto label_1f3a94;
        case 0x1f3a98u: goto label_1f3a98;
        case 0x1f3a9cu: goto label_1f3a9c;
        case 0x1f3aa0u: goto label_1f3aa0;
        case 0x1f3aa4u: goto label_1f3aa4;
        case 0x1f3aa8u: goto label_1f3aa8;
        case 0x1f3aacu: goto label_1f3aac;
        case 0x1f3ab0u: goto label_1f3ab0;
        case 0x1f3ab4u: goto label_1f3ab4;
        case 0x1f3ab8u: goto label_1f3ab8;
        case 0x1f3abcu: goto label_1f3abc;
        case 0x1f3ac0u: goto label_1f3ac0;
        case 0x1f3ac4u: goto label_1f3ac4;
        case 0x1f3ac8u: goto label_1f3ac8;
        case 0x1f3accu: goto label_1f3acc;
        case 0x1f3ad0u: goto label_1f3ad0;
        case 0x1f3ad4u: goto label_1f3ad4;
        case 0x1f3ad8u: goto label_1f3ad8;
        case 0x1f3adcu: goto label_1f3adc;
        case 0x1f3ae0u: goto label_1f3ae0;
        case 0x1f3ae4u: goto label_1f3ae4;
        case 0x1f3ae8u: goto label_1f3ae8;
        case 0x1f3aecu: goto label_1f3aec;
        case 0x1f3af0u: goto label_1f3af0;
        case 0x1f3af4u: goto label_1f3af4;
        case 0x1f3af8u: goto label_1f3af8;
        case 0x1f3afcu: goto label_1f3afc;
        case 0x1f3b00u: goto label_1f3b00;
        case 0x1f3b04u: goto label_1f3b04;
        case 0x1f3b08u: goto label_1f3b08;
        case 0x1f3b0cu: goto label_1f3b0c;
        case 0x1f3b10u: goto label_1f3b10;
        case 0x1f3b14u: goto label_1f3b14;
        case 0x1f3b18u: goto label_1f3b18;
        case 0x1f3b1cu: goto label_1f3b1c;
        case 0x1f3b20u: goto label_1f3b20;
        case 0x1f3b24u: goto label_1f3b24;
        case 0x1f3b28u: goto label_1f3b28;
        case 0x1f3b2cu: goto label_1f3b2c;
        case 0x1f3b30u: goto label_1f3b30;
        case 0x1f3b34u: goto label_1f3b34;
        case 0x1f3b38u: goto label_1f3b38;
        case 0x1f3b3cu: goto label_1f3b3c;
        case 0x1f3b40u: goto label_1f3b40;
        case 0x1f3b44u: goto label_1f3b44;
        case 0x1f3b48u: goto label_1f3b48;
        case 0x1f3b4cu: goto label_1f3b4c;
        case 0x1f3b50u: goto label_1f3b50;
        case 0x1f3b54u: goto label_1f3b54;
        case 0x1f3b58u: goto label_1f3b58;
        case 0x1f3b5cu: goto label_1f3b5c;
        case 0x1f3b60u: goto label_1f3b60;
        case 0x1f3b64u: goto label_1f3b64;
        case 0x1f3b68u: goto label_1f3b68;
        case 0x1f3b6cu: goto label_1f3b6c;
        case 0x1f3b70u: goto label_1f3b70;
        case 0x1f3b74u: goto label_1f3b74;
        case 0x1f3b78u: goto label_1f3b78;
        case 0x1f3b7cu: goto label_1f3b7c;
        case 0x1f3b80u: goto label_1f3b80;
        case 0x1f3b84u: goto label_1f3b84;
        case 0x1f3b88u: goto label_1f3b88;
        case 0x1f3b8cu: goto label_1f3b8c;
        case 0x1f3b90u: goto label_1f3b90;
        case 0x1f3b94u: goto label_1f3b94;
        case 0x1f3b98u: goto label_1f3b98;
        case 0x1f3b9cu: goto label_1f3b9c;
        case 0x1f3ba0u: goto label_1f3ba0;
        case 0x1f3ba4u: goto label_1f3ba4;
        case 0x1f3ba8u: goto label_1f3ba8;
        case 0x1f3bacu: goto label_1f3bac;
        case 0x1f3bb0u: goto label_1f3bb0;
        case 0x1f3bb4u: goto label_1f3bb4;
        case 0x1f3bb8u: goto label_1f3bb8;
        case 0x1f3bbcu: goto label_1f3bbc;
        case 0x1f3bc0u: goto label_1f3bc0;
        case 0x1f3bc4u: goto label_1f3bc4;
        case 0x1f3bc8u: goto label_1f3bc8;
        case 0x1f3bccu: goto label_1f3bcc;
        case 0x1f3bd0u: goto label_1f3bd0;
        case 0x1f3bd4u: goto label_1f3bd4;
        case 0x1f3bd8u: goto label_1f3bd8;
        case 0x1f3bdcu: goto label_1f3bdc;
        case 0x1f3be0u: goto label_1f3be0;
        case 0x1f3be4u: goto label_1f3be4;
        case 0x1f3be8u: goto label_1f3be8;
        case 0x1f3becu: goto label_1f3bec;
        case 0x1f3bf0u: goto label_1f3bf0;
        case 0x1f3bf4u: goto label_1f3bf4;
        case 0x1f3bf8u: goto label_1f3bf8;
        case 0x1f3bfcu: goto label_1f3bfc;
        case 0x1f3c00u: goto label_1f3c00;
        case 0x1f3c04u: goto label_1f3c04;
        case 0x1f3c08u: goto label_1f3c08;
        case 0x1f3c0cu: goto label_1f3c0c;
        case 0x1f3c10u: goto label_1f3c10;
        case 0x1f3c14u: goto label_1f3c14;
        case 0x1f3c18u: goto label_1f3c18;
        case 0x1f3c1cu: goto label_1f3c1c;
        case 0x1f3c20u: goto label_1f3c20;
        case 0x1f3c24u: goto label_1f3c24;
        case 0x1f3c28u: goto label_1f3c28;
        case 0x1f3c2cu: goto label_1f3c2c;
        case 0x1f3c30u: goto label_1f3c30;
        case 0x1f3c34u: goto label_1f3c34;
        case 0x1f3c38u: goto label_1f3c38;
        case 0x1f3c3cu: goto label_1f3c3c;
        case 0x1f3c40u: goto label_1f3c40;
        case 0x1f3c44u: goto label_1f3c44;
        case 0x1f3c48u: goto label_1f3c48;
        case 0x1f3c4cu: goto label_1f3c4c;
        case 0x1f3c50u: goto label_1f3c50;
        case 0x1f3c54u: goto label_1f3c54;
        case 0x1f3c58u: goto label_1f3c58;
        case 0x1f3c5cu: goto label_1f3c5c;
        case 0x1f3c60u: goto label_1f3c60;
        case 0x1f3c64u: goto label_1f3c64;
        case 0x1f3c68u: goto label_1f3c68;
        case 0x1f3c6cu: goto label_1f3c6c;
        case 0x1f3c70u: goto label_1f3c70;
        case 0x1f3c74u: goto label_1f3c74;
        case 0x1f3c78u: goto label_1f3c78;
        case 0x1f3c7cu: goto label_1f3c7c;
        case 0x1f3c80u: goto label_1f3c80;
        case 0x1f3c84u: goto label_1f3c84;
        case 0x1f3c88u: goto label_1f3c88;
        case 0x1f3c8cu: goto label_1f3c8c;
        case 0x1f3c90u: goto label_1f3c90;
        case 0x1f3c94u: goto label_1f3c94;
        case 0x1f3c98u: goto label_1f3c98;
        case 0x1f3c9cu: goto label_1f3c9c;
        case 0x1f3ca0u: goto label_1f3ca0;
        case 0x1f3ca4u: goto label_1f3ca4;
        case 0x1f3ca8u: goto label_1f3ca8;
        case 0x1f3cacu: goto label_1f3cac;
        case 0x1f3cb0u: goto label_1f3cb0;
        case 0x1f3cb4u: goto label_1f3cb4;
        case 0x1f3cb8u: goto label_1f3cb8;
        case 0x1f3cbcu: goto label_1f3cbc;
        case 0x1f3cc0u: goto label_1f3cc0;
        case 0x1f3cc4u: goto label_1f3cc4;
        case 0x1f3cc8u: goto label_1f3cc8;
        case 0x1f3cccu: goto label_1f3ccc;
        case 0x1f3cd0u: goto label_1f3cd0;
        case 0x1f3cd4u: goto label_1f3cd4;
        case 0x1f3cd8u: goto label_1f3cd8;
        case 0x1f3cdcu: goto label_1f3cdc;
        case 0x1f3ce0u: goto label_1f3ce0;
        case 0x1f3ce4u: goto label_1f3ce4;
        case 0x1f3ce8u: goto label_1f3ce8;
        case 0x1f3cecu: goto label_1f3cec;
        case 0x1f3cf0u: goto label_1f3cf0;
        case 0x1f3cf4u: goto label_1f3cf4;
        case 0x1f3cf8u: goto label_1f3cf8;
        case 0x1f3cfcu: goto label_1f3cfc;
        case 0x1f3d00u: goto label_1f3d00;
        case 0x1f3d04u: goto label_1f3d04;
        case 0x1f3d08u: goto label_1f3d08;
        case 0x1f3d0cu: goto label_1f3d0c;
        case 0x1f3d10u: goto label_1f3d10;
        case 0x1f3d14u: goto label_1f3d14;
        case 0x1f3d18u: goto label_1f3d18;
        case 0x1f3d1cu: goto label_1f3d1c;
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3d24u: goto label_1f3d24;
        case 0x1f3d28u: goto label_1f3d28;
        case 0x1f3d2cu: goto label_1f3d2c;
        case 0x1f3d30u: goto label_1f3d30;
        case 0x1f3d34u: goto label_1f3d34;
        case 0x1f3d38u: goto label_1f3d38;
        case 0x1f3d3cu: goto label_1f3d3c;
        case 0x1f3d40u: goto label_1f3d40;
        case 0x1f3d44u: goto label_1f3d44;
        case 0x1f3d48u: goto label_1f3d48;
        case 0x1f3d4cu: goto label_1f3d4c;
        case 0x1f3d50u: goto label_1f3d50;
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d58u: goto label_1f3d58;
        case 0x1f3d5cu: goto label_1f3d5c;
        case 0x1f3d60u: goto label_1f3d60;
        case 0x1f3d64u: goto label_1f3d64;
        case 0x1f3d68u: goto label_1f3d68;
        case 0x1f3d6cu: goto label_1f3d6c;
        case 0x1f3d70u: goto label_1f3d70;
        case 0x1f3d74u: goto label_1f3d74;
        case 0x1f3d78u: goto label_1f3d78;
        case 0x1f3d7cu: goto label_1f3d7c;
        case 0x1f3d80u: goto label_1f3d80;
        case 0x1f3d84u: goto label_1f3d84;
        case 0x1f3d88u: goto label_1f3d88;
        case 0x1f3d8cu: goto label_1f3d8c;
        case 0x1f3d90u: goto label_1f3d90;
        case 0x1f3d94u: goto label_1f3d94;
        case 0x1f3d98u: goto label_1f3d98;
        case 0x1f3d9cu: goto label_1f3d9c;
        case 0x1f3da0u: goto label_1f3da0;
        case 0x1f3da4u: goto label_1f3da4;
        case 0x1f3da8u: goto label_1f3da8;
        case 0x1f3dacu: goto label_1f3dac;
        case 0x1f3db0u: goto label_1f3db0;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3db8u: goto label_1f3db8;
        case 0x1f3dbcu: goto label_1f3dbc;
        case 0x1f3dc0u: goto label_1f3dc0;
        case 0x1f3dc4u: goto label_1f3dc4;
        case 0x1f3dc8u: goto label_1f3dc8;
        case 0x1f3dccu: goto label_1f3dcc;
        case 0x1f3dd0u: goto label_1f3dd0;
        case 0x1f3dd4u: goto label_1f3dd4;
        case 0x1f3dd8u: goto label_1f3dd8;
        case 0x1f3ddcu: goto label_1f3ddc;
        case 0x1f3de0u: goto label_1f3de0;
        case 0x1f3de4u: goto label_1f3de4;
        case 0x1f3de8u: goto label_1f3de8;
        case 0x1f3decu: goto label_1f3dec;
        case 0x1f3df0u: goto label_1f3df0;
        case 0x1f3df4u: goto label_1f3df4;
        case 0x1f3df8u: goto label_1f3df8;
        case 0x1f3dfcu: goto label_1f3dfc;
        default: return;
    }

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
            goto label_1f3720;
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
label_1f3710:
    // 0x1f3710: 0xc08f20e  jal         func_23C838
label_1f3714:
    if (ctx->pc == 0x1F3714u) {
        ctx->pc = 0x1F3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3710u;
        // 0x1f3714: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3718u;
        goto label_1f3718;
    }
    ctx->pc = 0x1F3710u;
    SET_GPR_U32(ctx, 31, 0x1F3718u);
    ctx->pc = 0x1F3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3710u;
    // 0x1f3714: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3718u;
label_1f3718:
    // 0x1f3718: 0x10000595  b           . + 4 + (0x595 << 2)
label_1f371c:
    if (ctx->pc == 0x1F371Cu) {
        ctx->pc = 0x1F3720u;
        goto label_1f3720;
    }
    ctx->pc = 0x1F3718u;
    {
        const bool branch_taken_0x1f3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3718) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3720u;
label_1f3720:
    // 0x1f3720: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1f3720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f3724:
    // 0x1f3724: 0x1683000e  bne         $s4, $v1, . + 4 + (0xE << 2)
label_1f3728:
    if (ctx->pc == 0x1F3728u) {
        ctx->pc = 0x1F3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3724u;
        // 0x1f3728: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F372Cu;
        goto label_1f372c;
    }
    ctx->pc = 0x1F3724u;
    {
        const bool branch_taken_0x1f3724 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3724u;
        // 0x1f3728: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3724) {
            ctx->pc = 0x1F3760u;
            goto label_1f3760;
        }
    }
    ctx->pc = 0x1F372Cu;
label_1f372c:
    // 0x1f372c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f372cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3730:
    // 0x1f3730: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3734:
    // 0x1f3734: 0x8c237fd0  lw          $v1, 0x7FD0($at)
    ctx->pc = 0x1f3734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f3738:
    // 0x1f3738: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f373c:
    // 0x1f373c: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3740:
    // 0x1f3740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3744:
    // 0x1f3744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3748:
    // 0x1f3748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f374c:
    // 0x1f374c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f374cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3750:
    // 0x1f3750: 0xc08f20e  jal         func_23C838
label_1f3754:
    if (ctx->pc == 0x1F3754u) {
        ctx->pc = 0x1F3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3750u;
        // 0x1f3754: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3758u;
        goto label_1f3758;
    }
    ctx->pc = 0x1F3750u;
    SET_GPR_U32(ctx, 31, 0x1F3758u);
    ctx->pc = 0x1F3754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3750u;
    // 0x1f3754: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3758u;
label_1f3758:
    // 0x1f3758: 0x10000585  b           . + 4 + (0x585 << 2)
label_1f375c:
    if (ctx->pc == 0x1F375Cu) {
        ctx->pc = 0x1F3760u;
        goto label_1f3760;
    }
    ctx->pc = 0x1F3758u;
    {
        const bool branch_taken_0x1f3758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3758) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3760u;
label_1f3760:
    // 0x1f3760: 0x1683000d  bne         $s4, $v1, . + 4 + (0xD << 2)
label_1f3764:
    if (ctx->pc == 0x1F3764u) {
        ctx->pc = 0x1F3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3760u;
        // 0x1f3764: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3768u;
        goto label_1f3768;
    }
    ctx->pc = 0x1F3760u;
    {
        const bool branch_taken_0x1f3760 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3760u;
        // 0x1f3764: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3760) {
            ctx->pc = 0x1F3798u;
            goto label_1f3798;
        }
    }
    ctx->pc = 0x1F3768u;
label_1f3768:
    // 0x1f3768: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f376c:
    // 0x1f376c: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f376cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3770:
    // 0x1f3770: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3774:
    // 0x1f3774: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3778:
    // 0x1f3778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f377c:
    // 0x1f377c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f377cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3780:
    // 0x1f3780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3784:
    // 0x1f3784: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3788:
    // 0x1f3788: 0xc08f20e  jal         func_23C838
label_1f378c:
    if (ctx->pc == 0x1F378Cu) {
        ctx->pc = 0x1F378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3788u;
        // 0x1f378c: 0x24a5d360  addiu       $a1, $a1, -0x2CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3790u;
        goto label_1f3790;
    }
    ctx->pc = 0x1F3788u;
    SET_GPR_U32(ctx, 31, 0x1F3790u);
    ctx->pc = 0x1F378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3788u;
    // 0x1f378c: 0x24a5d360  addiu       $a1, $a1, -0x2CA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3790u;
label_1f3790:
    // 0x1f3790: 0x10000577  b           . + 4 + (0x577 << 2)
label_1f3794:
    if (ctx->pc == 0x1F3794u) {
        ctx->pc = 0x1F3798u;
        goto label_1f3798;
    }
    ctx->pc = 0x1F3790u;
    {
        const bool branch_taken_0x1f3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3790) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3798u;
label_1f3798:
    // 0x1f3798: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1f3798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f379c:
    // 0x1f379c: 0x1683002e  bne         $s4, $v1, . + 4 + (0x2E << 2)
label_1f37a0:
    if (ctx->pc == 0x1F37A0u) {
        ctx->pc = 0x1F37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F379Cu;
        // 0x1f37a0: 0x2403002b  addiu       $v1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F37A4u;
        goto label_1f37a4;
    }
    ctx->pc = 0x1F379Cu;
    {
        const bool branch_taken_0x1f379c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F379Cu;
        // 0x1f37a0: 0x2403002b  addiu       $v1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f379c) {
            ctx->pc = 0x1F3858u;
            goto label_1f3858;
        }
    }
    ctx->pc = 0x1F37A4u;
label_1f37a4:
    // 0x1f37a4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f37a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f37a8:
    // 0x1f37a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f37a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f37ac:
    // 0x1f37ac: 0x8c297fd0  lw          $t1, 0x7FD0($at)
    ctx->pc = 0x1f37acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f37b0:
    // 0x1f37b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f37b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f37b4:
    // 0x1f37b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f37b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f37b8:
    // 0x1f37b8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f37bc:
    // 0x1f37bc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1f37bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1f37c0:
    // 0x1f37c0: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x1f37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_1f37c4:
    // 0x1f37c4: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1f37c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1f37c8:
    // 0x1f37c8: 0x0  nop
    ctx->pc = 0x1f37c8u;
    // NOP
label_1f37cc:
    // 0x1f37cc: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x1f37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1f37d0:
    // 0x1f37d0: 0x9082367c  lbu         $v0, 0x367C($a0)
    ctx->pc = 0x1f37d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
label_1f37d4:
    // 0x1f37d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f37d8:
    if (ctx->pc == 0x1F37D8u) {
        ctx->pc = 0x1F37DCu;
        goto label_1f37dc;
    }
    ctx->pc = 0x1F37D4u;
    {
        const bool branch_taken_0x1f37d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f37d4) {
            ctx->pc = 0x1F380Cu;
            goto label_1f380c;
        }
    }
    ctx->pc = 0x1F37DCu;
label_1f37dc:
    // 0x1f37dc: 0x8c823674  lw          $v0, 0x3674($a0)
    ctx->pc = 0x1f37dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13940)));
label_1f37e0:
    // 0x1f37e0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f37e4:
    if (ctx->pc == 0x1F37E4u) {
        ctx->pc = 0x1F37E8u;
        goto label_1f37e8;
    }
    ctx->pc = 0x1F37E0u;
    {
        const bool branch_taken_0x1f37e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f37e0) {
            ctx->pc = 0x1F380Cu;
            goto label_1f380c;
        }
    }
    ctx->pc = 0x1F37E8u;
label_1f37e8:
    // 0x1f37e8: 0x8c843670  lw          $a0, 0x3670($a0)
    ctx->pc = 0x1f37e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13936)));
label_1f37ec:
    // 0x1f37ec: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1f37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f37f0:
    // 0x1f37f0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f37f4:
    // 0x1f37f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f37f8:
    // 0x1f37f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f37f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f37fc:
    // 0x1f37fc: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
label_1f3800:
    if (ctx->pc == 0x1F3800u) {
        ctx->pc = 0x1F3804u;
        goto label_1f3804;
    }
    ctx->pc = 0x1F37FCu;
    {
        const bool branch_taken_0x1f37fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1f37fc) {
            ctx->pc = 0x1F380Cu;
            goto label_1f380c;
        }
    }
    ctx->pc = 0x1F3804u;
label_1f3804:
    // 0x1f3804: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f3808:
    if (ctx->pc == 0x1F3808u) {
        ctx->pc = 0x1F3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3804u;
        // 0x1f3808: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F380Cu;
        goto label_1f380c;
    }
    ctx->pc = 0x1F3804u;
    {
        const bool branch_taken_0x1f3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3804u;
        // 0x1f3808: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3804) {
            ctx->pc = 0x1F381Cu;
            goto label_1f381c;
        }
    }
    ctx->pc = 0x1F380Cu;
label_1f380c:
    // 0x1f380c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f380cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f3810:
    // 0x1f3810: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f3810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f3814:
    // 0x1f3814: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f3818:
    if (ctx->pc == 0x1F3818u) {
        ctx->pc = 0x1F3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3814u;
        // 0x1f3818: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F381Cu;
        goto label_1f381c;
    }
    ctx->pc = 0x1F3814u;
    {
        const bool branch_taken_0x1f3814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3814u;
        // 0x1f3818: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3814) {
            ctx->pc = 0x1F37C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f37c8;
        }
    }
    ctx->pc = 0x1F381Cu;
label_1f381c:
    // 0x1f381c: 0x0  nop
    ctx->pc = 0x1f381cu;
    // NOP
label_1f3820:
    // 0x1f3820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3824:
    // 0x1f3824: 0x14c20552  bne         $a2, $v0, . + 4 + (0x552 << 2)
label_1f3828:
    if (ctx->pc == 0x1F3828u) {
        ctx->pc = 0x1F382Cu;
        goto label_1f382c;
    }
    ctx->pc = 0x1F3824u;
    {
        const bool branch_taken_0x1f3824 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3824) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F382Cu;
label_1f382c:
    // 0x1f382c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3830:
    // 0x1f3830: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3834:
    // 0x1f3834: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1f3834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1f3838:
    // 0x1f3838: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f383c:
    // 0x1f383c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3840:
    // 0x1f3840: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1f3840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1f3844:
    // 0x1f3844: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3848:
    // 0x1f3848: 0xc08f20e  jal         func_23C838
label_1f384c:
    if (ctx->pc == 0x1F384Cu) {
        ctx->pc = 0x1F384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3848u;
        // 0x1f384c: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3850u;
        goto label_1f3850;
    }
    ctx->pc = 0x1F3848u;
    SET_GPR_U32(ctx, 31, 0x1F3850u);
    ctx->pc = 0x1F384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3848u;
    // 0x1f384c: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3850u;
label_1f3850:
    // 0x1f3850: 0x10000547  b           . + 4 + (0x547 << 2)
label_1f3854:
    if (ctx->pc == 0x1F3854u) {
        ctx->pc = 0x1F3858u;
        goto label_1f3858;
    }
    ctx->pc = 0x1F3850u;
    {
        const bool branch_taken_0x1f3850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3850) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3858u;
label_1f3858:
    // 0x1f3858: 0x16830011  bne         $s4, $v1, . + 4 + (0x11 << 2)
label_1f385c:
    if (ctx->pc == 0x1F385Cu) {
        ctx->pc = 0x1F385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3858u;
        // 0x1f385c: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3860u;
        goto label_1f3860;
    }
    ctx->pc = 0x1F3858u;
    {
        const bool branch_taken_0x1f3858 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3858u;
        // 0x1f385c: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3858) {
            ctx->pc = 0x1F38A0u;
            goto label_1f38a0;
        }
    }
    ctx->pc = 0x1F3860u;
label_1f3860:
    // 0x1f3860: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3864:
    // 0x1f3864: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f3864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3868:
    // 0x1f3868: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f386c:
    // 0x1f386c: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3870:
    // 0x1f3870: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3874:
    // 0x1f3874: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3878:
    // 0x1f3878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f387c:
    // 0x1f387c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f387cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3880:
    // 0x1f3880: 0xc08f20e  jal         func_23C838
label_1f3884:
    if (ctx->pc == 0x1F3884u) {
        ctx->pc = 0x1F3884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3880u;
        // 0x1f3884: 0x24a5d3c0  addiu       $a1, $a1, -0x2C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3888u;
        goto label_1f3888;
    }
    ctx->pc = 0x1F3880u;
    SET_GPR_U32(ctx, 31, 0x1F3888u);
    ctx->pc = 0x1F3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3880u;
    // 0x1f3884: 0x24a5d3c0  addiu       $a1, $a1, -0x2C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3888u;
label_1f3888:
    // 0x1f3888: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f388c:
    // 0x1f388c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3890:
    // 0x1f3890: 0xc08f20e  jal         func_23C838
label_1f3894:
    if (ctx->pc == 0x1F3894u) {
        ctx->pc = 0x1F3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3890u;
        // 0x1f3894: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3898u;
        goto label_1f3898;
    }
    ctx->pc = 0x1F3890u;
    SET_GPR_U32(ctx, 31, 0x1F3898u);
    ctx->pc = 0x1F3894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3890u;
    // 0x1f3894: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3898u;
label_1f3898:
    // 0x1f3898: 0x10000535  b           . + 4 + (0x535 << 2)
label_1f389c:
    if (ctx->pc == 0x1F389Cu) {
        ctx->pc = 0x1F38A0u;
        goto label_1f38a0;
    }
    ctx->pc = 0x1F3898u;
    {
        const bool branch_taken_0x1f3898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3898) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F38A0u;
label_1f38a0:
    // 0x1f38a0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1f38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1f38a4:
    // 0x1f38a4: 0x16830011  bne         $s4, $v1, . + 4 + (0x11 << 2)
label_1f38a8:
    if (ctx->pc == 0x1F38A8u) {
        ctx->pc = 0x1F38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38A4u;
        // 0x1f38a8: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F38ACu;
        goto label_1f38ac;
    }
    ctx->pc = 0x1F38A4u;
    {
        const bool branch_taken_0x1f38a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38A4u;
        // 0x1f38a8: 0x24030038  addiu       $v1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f38a4) {
            ctx->pc = 0x1F38ECu;
            goto label_1f38ec;
        }
    }
    ctx->pc = 0x1F38ACu;
label_1f38ac:
    // 0x1f38ac: 0x240300de  addiu       $v1, $zero, 0xDE
    ctx->pc = 0x1f38acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
label_1f38b0:
    // 0x1f38b0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f38b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f38b4:
    // 0x1f38b4: 0xac237fd4  sw          $v1, 0x7FD4($at)
    ctx->pc = 0x1f38b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32724), GPR_U32(ctx, 3));
label_1f38b8:
    // 0x1f38b8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f38bc:
    // 0x1f38bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f38bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f38c0:
    // 0x1f38c0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f38c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f38c4:
    // 0x1f38c4: 0x8c237fd4  lw          $v1, 0x7FD4($at)
    ctx->pc = 0x1f38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32724)));
label_1f38c8:
    // 0x1f38c8: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f38cc:
    // 0x1f38cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f38ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f38d0:
    // 0x1f38d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f38d4:
    // 0x1f38d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f38d8:
    // 0x1f38d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f38d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f38dc:
    // 0x1f38dc: 0xc08f20e  jal         func_23C838
label_1f38e0:
    if (ctx->pc == 0x1F38E0u) {
        ctx->pc = 0x1F38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F38DCu;
        // 0x1f38e0: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F38E4u;
        goto label_1f38e4;
    }
    ctx->pc = 0x1F38DCu;
    SET_GPR_U32(ctx, 31, 0x1F38E4u);
    ctx->pc = 0x1F38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F38DCu;
    // 0x1f38e0: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F38E4u;
label_1f38e4:
    // 0x1f38e4: 0x10000522  b           . + 4 + (0x522 << 2)
label_1f38e8:
    if (ctx->pc == 0x1F38E8u) {
        ctx->pc = 0x1F38ECu;
        goto label_1f38ec;
    }
    ctx->pc = 0x1F38E4u;
    {
        const bool branch_taken_0x1f38e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f38e4) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F38ECu;
label_1f38ec:
    // 0x1f38ec: 0x1683003b  bne         $s4, $v1, . + 4 + (0x3B << 2)
label_1f38f0:
    if (ctx->pc == 0x1F38F0u) {
        ctx->pc = 0x1F38F4u;
        goto label_1f38f4;
    }
    ctx->pc = 0x1F38ECu;
    {
        const bool branch_taken_0x1f38ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f38ec) {
            ctx->pc = 0x1F39DCu;
            goto label_1f39dc;
        }
    }
    ctx->pc = 0x1F38F4u;
label_1f38f4:
    // 0x1f38f4: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1f38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1f38f8:
    // 0x1f38f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f38fc:
    // 0x1f38fc: 0x24636d70  addiu       $v1, $v1, 0x6D70
    ctx->pc = 0x1f38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28016));
label_1f3900:
    // 0x1f3900: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f3904:
    // 0x1f3904: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3908:
    // 0x1f3908: 0x3c09002f  lui         $t1, 0x2F
    ctx->pc = 0x1f3908u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)47 << 16));
label_1f390c:
    // 0x1f390c: 0x8c276e00  lw          $a3, 0x6E00($at)
    ctx->pc = 0x1f390cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28160)));
label_1f3910:
    // 0x1f3910: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1f3910u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1f3914:
    // 0x1f3914: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3918:
    // 0x1f3918: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1f3918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1f391c:
    // 0x1f391c: 0x25296db8  addiu       $t1, $t1, 0x6DB8
    ctx->pc = 0x1f391cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 28088));
label_1f3920:
    // 0x1f3920: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1f3920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
label_1f3924:
    // 0x1f3924: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3928:
    // 0x1f3928: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x1f3928u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1f392c:
    // 0x1f392c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f392cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3930:
    // 0x1f3930: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1f3930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1f3934:
    // 0x1f3934: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1f3934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1f3938:
    // 0x1f3938: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f3938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f393c:
    // 0x1f393c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f393cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3940:
    // 0x1f3940: 0xac237fe0  sw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f3940u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32736), GPR_U32(ctx, 3));
label_1f3944:
    // 0x1f3944: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1f3944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f3948:
    // 0x1f3948: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f394c:
    // 0x1f394c: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3950:
    // 0x1f3950: 0x94c9000a  lhu         $t1, 0xA($a2)
    ctx->pc = 0x1f3950u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f3954:
    // 0x1f3954: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3958:
    // 0x1f3958: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f395c:
    // 0x1f395c: 0x1033021  addu        $a2, $t0, $v1
    ctx->pc = 0x1f395cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1f3960:
    // 0x1f3960: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x1f3960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1f3964:
    // 0x1f3964: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1f3964u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1f3968:
    // 0x1f3968: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f3968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f396c:
    // 0x1f396c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f396cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3970:
    // 0x1f3970: 0xac237fe4  sw          $v1, 0x7FE4($at)
    ctx->pc = 0x1f3970u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 3));
label_1f3974:
    // 0x1f3974: 0x94e9000a  lhu         $t1, 0xA($a3)
    ctx->pc = 0x1f3974u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3978:
    // 0x1f3978: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f397c:
    // 0x1f397c: 0x8c237fe4  lw          $v1, 0x7FE4($at)
    ctx->pc = 0x1f397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3980:
    // 0x1f3980: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x1f3980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1f3984:
    // 0x1f3984: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x1f3984u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1f3988:
    // 0x1f3988: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f398c:
    // 0x1f398c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1f398cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f3990:
    // 0x1f3990: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3994:
    // 0x1f3994: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x1f3994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1f3998:
    // 0x1f3998: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1f3998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1f399c:
    // 0x1f399c: 0xac237fe8  sw          $v1, 0x7FE8($at)
    ctx->pc = 0x1f399cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32744), GPR_U32(ctx, 3));
label_1f39a0:
    // 0x1f39a0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f39a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f39a4:
    // 0x1f39a4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f39a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f39a8:
    // 0x1f39a8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1f39a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f39ac:
    // 0x1f39ac: 0x8c227fe8  lw          $v0, 0x7FE8($at)
    ctx->pc = 0x1f39acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32744)));
label_1f39b0:
    // 0x1f39b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f39b4:
    // 0x1f39b4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f39b8:
    // 0x1f39b8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1f39b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f39bc:
    // 0x1f39bc: 0xc08f20e  jal         func_23C838
label_1f39c0:
    if (ctx->pc == 0x1F39C0u) {
        ctx->pc = 0x1F39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39BCu;
        // 0x1f39c0: 0x24a5d220  addiu       $a1, $a1, -0x2DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39C4u;
        goto label_1f39c4;
    }
    ctx->pc = 0x1F39BCu;
    SET_GPR_U32(ctx, 31, 0x1F39C4u);
    ctx->pc = 0x1F39C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F39BCu;
    // 0x1f39c0: 0x24a5d220  addiu       $a1, $a1, -0x2DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F39C4u;
label_1f39c4:
    // 0x1f39c4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f39c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f39c8:
    // 0x1f39c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f39c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f39cc:
    // 0x1f39cc: 0xc08f20e  jal         func_23C838
label_1f39d0:
    if (ctx->pc == 0x1F39D0u) {
        ctx->pc = 0x1F39D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39CCu;
        // 0x1f39d0: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39D4u;
        goto label_1f39d4;
    }
    ctx->pc = 0x1F39CCu;
    SET_GPR_U32(ctx, 31, 0x1F39D4u);
    ctx->pc = 0x1F39D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F39CCu;
    // 0x1f39d0: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F39D4u;
label_1f39d4:
    // 0x1f39d4: 0x100004e6  b           . + 4 + (0x4E6 << 2)
label_1f39d8:
    if (ctx->pc == 0x1F39D8u) {
        ctx->pc = 0x1F39DCu;
        goto label_1f39dc;
    }
    ctx->pc = 0x1F39D4u;
    {
        const bool branch_taken_0x1f39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f39d4) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F39DCu;
label_1f39dc:
    // 0x1f39dc: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1f39dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1f39e0:
    // 0x1f39e0: 0x1683002d  bne         $s4, $v1, . + 4 + (0x2D << 2)
label_1f39e4:
    if (ctx->pc == 0x1F39E4u) {
        ctx->pc = 0x1F39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39E0u;
        // 0x1f39e4: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F39E8u;
        goto label_1f39e8;
    }
    ctx->pc = 0x1F39E0u;
    {
        const bool branch_taken_0x1f39e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39E0u;
        // 0x1f39e4: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39e0) {
            ctx->pc = 0x1F3A98u;
            goto label_1f3a98;
        }
    }
    ctx->pc = 0x1F39E8u;
label_1f39e8:
    // 0x1f39e8: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1f39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1f39ec:
    // 0x1f39ec: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f39ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f39f0:
    // 0x1f39f0: 0x24426d70  addiu       $v0, $v0, 0x6D70
    ctx->pc = 0x1f39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28016));
label_1f39f4:
    // 0x1f39f4: 0x8c266db8  lw          $a2, 0x6DB8($at)
    ctx->pc = 0x1f39f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28088)));
label_1f39f8:
    // 0x1f39f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f39fc:
    // 0x1f39fc: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1f39fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1f3a00:
    // 0x1f3a00: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1f3a00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1f3a04:
    // 0x1f3a04: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3a08:
    // 0x1f3a08: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1f3a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
label_1f3a0c:
    // 0x1f3a0c: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1f3a0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
label_1f3a10:
    // 0x1f3a10: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3a14:
    // 0x1f3a14: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3a18:
    // 0x1f3a18: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3a1c:
    // 0x1f3a1c: 0x9467000a  lhu         $a3, 0xA($v1)
    ctx->pc = 0x1f3a1cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1f3a20:
    // 0x1f3a20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3a24:
    // 0x1f3a24: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3a28:
    // 0x1f3a28: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x1f3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f3a2c:
    // 0x1f3a2c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1f3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f3a30:
    // 0x1f3a30: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1f3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1f3a34:
    // 0x1f3a34: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1f3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1f3a38:
    // 0x1f3a38: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f3a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3a3c:
    // 0x1f3a3c: 0xac227fe4  sw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 2));
label_1f3a40:
    // 0x1f3a40: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f3a40u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f3a44:
    // 0x1f3a44: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3a48:
    // 0x1f3a48: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3a4c:
    // 0x1f3a4c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f3a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f3a50:
    // 0x1f3a50: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f3a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3a54:
    // 0x1f3a54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3a58:
    // 0x1f3a58: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x1f3a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1f3a5c:
    // 0x1f3a5c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3a60:
    // 0x1f3a60: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3a60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3a64:
    // 0x1f3a64: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f3a68:
    // 0x1f3a68: 0xac267fe8  sw          $a2, 0x7FE8($at)
    ctx->pc = 0x1f3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32744), GPR_U32(ctx, 6));
label_1f3a6c:
    // 0x1f3a6c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3a70:
    // 0x1f3a70: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3a74:
    // 0x1f3a74: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f3a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3a78:
    // 0x1f3a78: 0x8c227fe8  lw          $v0, 0x7FE8($at)
    ctx->pc = 0x1f3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32744)));
label_1f3a7c:
    // 0x1f3a7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3a80:
    // 0x1f3a80: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f3a84:
    // 0x1f3a84: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1f3a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3a88:
    // 0x1f3a88: 0xc08f20e  jal         func_23C838
label_1f3a8c:
    if (ctx->pc == 0x1F3A8Cu) {
        ctx->pc = 0x1F3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A88u;
        // 0x1f3a8c: 0x24a5d220  addiu       $a1, $a1, -0x2DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3A90u;
        goto label_1f3a90;
    }
    ctx->pc = 0x1F3A88u;
    SET_GPR_U32(ctx, 31, 0x1F3A90u);
    ctx->pc = 0x1F3A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A88u;
    // 0x1f3a8c: 0x24a5d220  addiu       $a1, $a1, -0x2DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3A90u;
label_1f3a90:
    // 0x1f3a90: 0x100004b7  b           . + 4 + (0x4B7 << 2)
label_1f3a94:
    if (ctx->pc == 0x1F3A94u) {
        ctx->pc = 0x1F3A98u;
        goto label_1f3a98;
    }
    ctx->pc = 0x1F3A90u;
    {
        const bool branch_taken_0x1f3a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a90) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3A98u;
label_1f3a98:
    // 0x1f3a98: 0x1683003c  bne         $s4, $v1, . + 4 + (0x3C << 2)
label_1f3a9c:
    if (ctx->pc == 0x1F3A9Cu) {
        ctx->pc = 0x1F3AA0u;
        goto label_1f3aa0;
    }
    ctx->pc = 0x1F3A98u;
    {
        const bool branch_taken_0x1f3a98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f3a98) {
            ctx->pc = 0x1F3B8Cu;
            goto label_1f3b8c;
        }
    }
    ctx->pc = 0x1F3AA0u;
label_1f3aa0:
    // 0x1f3aa0: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1f3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1f3aa4:
    // 0x1f3aa4: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f3aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f3aa8:
    // 0x1f3aa8: 0x24636d70  addiu       $v1, $v1, 0x6D70
    ctx->pc = 0x1f3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28016));
label_1f3aac:
    // 0x1f3aac: 0x8c286e00  lw          $t0, 0x6E00($at)
    ctx->pc = 0x1f3aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28160)));
label_1f3ab0:
    // 0x1f3ab0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f3ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3ab4:
    // 0x1f3ab4: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1f3ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1f3ab8:
    // 0x1f3ab8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3abc:
    // 0x1f3abc: 0x3c0a002f  lui         $t2, 0x2F
    ctx->pc = 0x1f3abcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)47 << 16));
label_1f3ac0:
    // 0x1f3ac0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3ac4:
    // 0x1f3ac4: 0x25292930  addiu       $t1, $t1, 0x2930
    ctx->pc = 0x1f3ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10544));
label_1f3ac8:
    // 0x1f3ac8: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1f3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1f3acc:
    // 0x1f3acc: 0x254a6db8  addiu       $t2, $t2, 0x6DB8
    ctx->pc = 0x1f3accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28088));
label_1f3ad0:
    // 0x1f3ad0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3ad4:
    // 0x1f3ad4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3ad8:
    // 0x1f3ad8: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3adc:
    // 0x1f3adc: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f3adcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f3ae0:
    // 0x1f3ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3ae4:
    // 0x1f3ae4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3ae8:
    // 0x1f3ae8: 0x1233021  addu        $a2, $t1, $v1
    ctx->pc = 0x1f3ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1f3aec:
    // 0x1f3aec: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1f3aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f3af0:
    // 0x1f3af0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1f3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f3af4:
    // 0x1f3af4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3af8:
    // 0x1f3af8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f3af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3afc:
    // 0x1f3afc: 0xac237fe4  sw          $v1, 0x7FE4($at)
    ctx->pc = 0x1f3afcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 3));
label_1f3b00:
    // 0x1f3b00: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x1f3b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f3b04:
    // 0x1f3b04: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3b08:
    // 0x1f3b08: 0x8c237fe4  lw          $v1, 0x7FE4($at)
    ctx->pc = 0x1f3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3b0c:
    // 0x1f3b0c: 0x94ea000a  lhu         $t2, 0xA($a3)
    ctx->pc = 0x1f3b0cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3b10:
    // 0x1f3b10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3b14:
    // 0x1f3b14: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3b18:
    // 0x1f3b18: 0x1233821  addu        $a3, $t1, $v1
    ctx->pc = 0x1f3b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1f3b1c:
    // 0x1f3b1c: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x1f3b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1f3b20:
    // 0x1f3b20: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x1f3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1f3b24:
    // 0x1f3b24: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3b28:
    // 0x1f3b28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1f3b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1f3b2c:
    // 0x1f3b2c: 0xac237fe8  sw          $v1, 0x7FE8($at)
    ctx->pc = 0x1f3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32744), GPR_U32(ctx, 3));
label_1f3b30:
    // 0x1f3b30: 0x950a000a  lhu         $t2, 0xA($t0)
    ctx->pc = 0x1f3b30u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
label_1f3b34:
    // 0x1f3b34: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3b38:
    // 0x1f3b38: 0x8c237fe8  lw          $v1, 0x7FE8($at)
    ctx->pc = 0x1f3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32744)));
label_1f3b3c:
    // 0x1f3b3c: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x1f3b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1f3b40:
    // 0x1f3b40: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x1f3b40u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_1f3b44:
    // 0x1f3b44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3b48:
    // 0x1f3b48: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x1f3b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1f3b4c:
    // 0x1f3b4c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3b50:
    // 0x1f3b50: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x1f3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1f3b54:
    // 0x1f3b54: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1f3b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1f3b58:
    // 0x1f3b58: 0xac237fec  sw          $v1, 0x7FEC($at)
    ctx->pc = 0x1f3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32748), GPR_U32(ctx, 3));
label_1f3b5c:
    // 0x1f3b5c: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1f3b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3b60:
    // 0x1f3b60: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3b64:
    // 0x1f3b64: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1f3b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3b68:
    // 0x1f3b68: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x1f3b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f3b6c:
    // 0x1f3b6c: 0x8c227fec  lw          $v0, 0x7FEC($at)
    ctx->pc = 0x1f3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32748)));
label_1f3b70:
    // 0x1f3b70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3b74:
    // 0x1f3b74: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1f3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1f3b78:
    // 0x1f3b78: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1f3b78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3b7c:
    // 0x1f3b7c: 0xc08f20e  jal         func_23C838
label_1f3b80:
    if (ctx->pc == 0x1F3B80u) {
        ctx->pc = 0x1F3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B7Cu;
        // 0x1f3b80: 0x24a5d450  addiu       $a1, $a1, -0x2BB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B84u;
        goto label_1f3b84;
    }
    ctx->pc = 0x1F3B7Cu;
    SET_GPR_U32(ctx, 31, 0x1F3B84u);
    ctx->pc = 0x1F3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B7Cu;
    // 0x1f3b80: 0x24a5d450  addiu       $a1, $a1, -0x2BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3B84u;
label_1f3b84:
    // 0x1f3b84: 0x1000047a  b           . + 4 + (0x47A << 2)
label_1f3b88:
    if (ctx->pc == 0x1F3B88u) {
        ctx->pc = 0x1F3B8Cu;
        goto label_1f3b8c;
    }
    ctx->pc = 0x1F3B84u;
    {
        const bool branch_taken_0x1f3b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b84) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3B8Cu;
label_1f3b8c:
    // 0x1f3b8c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1f3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1f3b90:
    // 0x1f3b90: 0x1683001e  bne         $s4, $v1, . + 4 + (0x1E << 2)
label_1f3b94:
    if (ctx->pc == 0x1F3B94u) {
        ctx->pc = 0x1F3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B90u;
        // 0x1f3b94: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3B98u;
        goto label_1f3b98;
    }
    ctx->pc = 0x1F3B90u;
    {
        const bool branch_taken_0x1f3b90 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B90u;
        // 0x1f3b94: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b90) {
            ctx->pc = 0x1F3C0Cu;
            goto label_1f3c0c;
        }
    }
    ctx->pc = 0x1F3B98u;
label_1f3b98:
    // 0x1f3b98: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f3b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f3b9c:
    // 0x1f3b9c: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f3b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f3ba0:
    // 0x1f3ba0: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f3ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f3ba4:
    // 0x1f3ba4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3ba8:
    // 0x1f3ba8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3bac:
    // 0x1f3bac: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f3bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f3bb0:
    // 0x1f3bb0: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f3bb4:
    // 0x1f3bb4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3bb8:
    // 0x1f3bb8: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f3bb8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3bbc:
    // 0x1f3bbc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3bc0:
    // 0x1f3bc0: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3bc4:
    // 0x1f3bc4: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f3bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f3bc8:
    // 0x1f3bc8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f3bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f3bcc:
    // 0x1f3bcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3bd0:
    // 0x1f3bd0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f3bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3bd4:
    // 0x1f3bd4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3bd8:
    // 0x1f3bd8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3bd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3bdc:
    // 0x1f3bdc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3be0:
    // 0x1f3be0: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f3be4:
    // 0x1f3be4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3be4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3be8:
    // 0x1f3be8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3bec:
    // 0x1f3bec: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3bf0:
    // 0x1f3bf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3bf4:
    // 0x1f3bf4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3bf8:
    // 0x1f3bf8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3bfc:
    // 0x1f3bfc: 0xc08f20e  jal         func_23C838
label_1f3c00:
    if (ctx->pc == 0x1F3C00u) {
        ctx->pc = 0x1F3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3BFCu;
        // 0x1f3c00: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C04u;
        goto label_1f3c04;
    }
    ctx->pc = 0x1F3BFCu;
    SET_GPR_U32(ctx, 31, 0x1F3C04u);
    ctx->pc = 0x1F3C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BFCu;
    // 0x1f3c00: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3C04u;
label_1f3c04:
    // 0x1f3c04: 0x1000045a  b           . + 4 + (0x45A << 2)
label_1f3c08:
    if (ctx->pc == 0x1F3C08u) {
        ctx->pc = 0x1F3C0Cu;
        goto label_1f3c0c;
    }
    ctx->pc = 0x1F3C04u;
    {
        const bool branch_taken_0x1f3c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c04) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3C0Cu;
label_1f3c0c:
    // 0x1f3c0c: 0x16830021  bne         $s4, $v1, . + 4 + (0x21 << 2)
label_1f3c10:
    if (ctx->pc == 0x1F3C10u) {
        ctx->pc = 0x1F3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C0Cu;
        // 0x1f3c10: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C14u;
        goto label_1f3c14;
    }
    ctx->pc = 0x1F3C0Cu;
    {
        const bool branch_taken_0x1f3c0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C0Cu;
        // 0x1f3c10: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c0c) {
            ctx->pc = 0x1F3C94u;
            goto label_1f3c94;
        }
    }
    ctx->pc = 0x1F3C14u;
label_1f3c14:
    // 0x1f3c14: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f3c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f3c18:
    // 0x1f3c18: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f3c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f3c1c:
    // 0x1f3c1c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3c20:
    // 0x1f3c20: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3c24:
    // 0x1f3c24: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f3c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f3c28:
    // 0x1f3c28: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f3c2c:
    // 0x1f3c2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3c30:
    // 0x1f3c30: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f3c30u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3c34:
    // 0x1f3c34: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3c38:
    // 0x1f3c38: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3c3c:
    // 0x1f3c3c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f3c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f3c40:
    // 0x1f3c40: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f3c40u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f3c44:
    // 0x1f3c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3c48:
    // 0x1f3c48: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f3c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3c4c:
    // 0x1f3c4c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3c50:
    // 0x1f3c50: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3c50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3c54:
    // 0x1f3c54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3c58:
    // 0x1f3c58: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f3c58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f3c5c:
    // 0x1f3c5c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3c60:
    // 0x1f3c60: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3c64:
    // 0x1f3c64: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3c68:
    // 0x1f3c68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3c6c:
    // 0x1f3c6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3c70:
    // 0x1f3c70: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3c74:
    // 0x1f3c74: 0xc08f20e  jal         func_23C838
label_1f3c78:
    if (ctx->pc == 0x1F3C78u) {
        ctx->pc = 0x1F3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C74u;
        // 0x1f3c78: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C7Cu;
        goto label_1f3c7c;
    }
    ctx->pc = 0x1F3C74u;
    SET_GPR_U32(ctx, 31, 0x1F3C7Cu);
    ctx->pc = 0x1F3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C74u;
    // 0x1f3c78: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3C7Cu;
label_1f3c7c:
    // 0x1f3c7c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3c80:
    // 0x1f3c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c84:
    // 0x1f3c84: 0xc08f20e  jal         func_23C838
label_1f3c88:
    if (ctx->pc == 0x1F3C88u) {
        ctx->pc = 0x1F3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C84u;
        // 0x1f3c88: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C8Cu;
        goto label_1f3c8c;
    }
    ctx->pc = 0x1F3C84u;
    SET_GPR_U32(ctx, 31, 0x1F3C8Cu);
    ctx->pc = 0x1F3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C84u;
    // 0x1f3c88: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3C8Cu;
label_1f3c8c:
    // 0x1f3c8c: 0x10000438  b           . + 4 + (0x438 << 2)
label_1f3c90:
    if (ctx->pc == 0x1F3C90u) {
        ctx->pc = 0x1F3C94u;
        goto label_1f3c94;
    }
    ctx->pc = 0x1F3C8Cu;
    {
        const bool branch_taken_0x1f3c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c8c) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3C94u;
label_1f3c94:
    // 0x1f3c94: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1f3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_1f3c98:
    // 0x1f3c98: 0x16830049  bne         $s4, $v1, . + 4 + (0x49 << 2)
label_1f3c9c:
    if (ctx->pc == 0x1F3C9Cu) {
        ctx->pc = 0x1F3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C98u;
        // 0x1f3c9c: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3CA0u;
        goto label_1f3ca0;
    }
    ctx->pc = 0x1F3C98u;
    {
        const bool branch_taken_0x1f3c98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C98u;
        // 0x1f3c9c: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c98) {
            ctx->pc = 0x1F3DC0u;
            goto label_1f3dc0;
        }
    }
    ctx->pc = 0x1F3CA0u;
label_1f3ca0:
    // 0x1f3ca0: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f3ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f3ca4:
    // 0x1f3ca4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f3ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f3ca8:
    // 0x1f3ca8: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f3cac:
    // 0x1f3cac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3cb0:
    // 0x1f3cb0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3cb4:
    // 0x1f3cb4: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f3cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f3cb8:
    // 0x1f3cb8: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f3cbc:
    // 0x1f3cbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3cc0:
    // 0x1f3cc0: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f3cc0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3cc4:
    // 0x1f3cc4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3cc8:
    // 0x1f3cc8: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3ccc:
    // 0x1f3ccc: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f3cd0:
    // 0x1f3cd0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f3cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f3cd4:
    // 0x1f3cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3cd8:
    // 0x1f3cd8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f3cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3cdc:
    // 0x1f3cdc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3ce0:
    // 0x1f3ce0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3ce0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3ce4:
    // 0x1f3ce4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3ce8:
    // 0x1f3ce8: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f3cec:
    // 0x1f3cec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3cf0:
    // 0x1f3cf0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3cf4:
    // 0x1f3cf4: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3cf8:
    // 0x1f3cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3cfc:
    // 0x1f3cfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3d00:
    // 0x1f3d00: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3d04:
    // 0x1f3d04: 0xc08f20e  jal         func_23C838
label_1f3d08:
    if (ctx->pc == 0x1F3D08u) {
        ctx->pc = 0x1F3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D04u;
        // 0x1f3d08: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D0Cu;
        goto label_1f3d0c;
    }
    ctx->pc = 0x1F3D04u;
    SET_GPR_U32(ctx, 31, 0x1F3D0Cu);
    ctx->pc = 0x1F3D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D04u;
    // 0x1f3d08: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3D0Cu;
label_1f3d0c:
    // 0x1f3d0c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3d10:
    // 0x1f3d10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f3d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3d14:
    // 0x1f3d14: 0x8c297fd0  lw          $t1, 0x7FD0($at)
    ctx->pc = 0x1f3d14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f3d18:
    // 0x1f3d18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d1c:
    // 0x1f3d1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f3d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d20:
    // 0x1f3d20: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3d24:
    // 0x1f3d24: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1f3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1f3d28:
    // 0x1f3d28: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x1f3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_1f3d2c:
    // 0x1f3d2c: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1f3d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1f3d30:
    // 0x1f3d30: 0x0  nop
    ctx->pc = 0x1f3d30u;
    // NOP
label_1f3d34:
    // 0x1f3d34: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x1f3d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1f3d38:
    // 0x1f3d38: 0x9082367c  lbu         $v0, 0x367C($a0)
    ctx->pc = 0x1f3d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
label_1f3d3c:
    // 0x1f3d3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f3d40:
    if (ctx->pc == 0x1F3D40u) {
        ctx->pc = 0x1F3D44u;
        goto label_1f3d44;
    }
    ctx->pc = 0x1F3D3Cu;
    {
        const bool branch_taken_0x1f3d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d3c) {
            ctx->pc = 0x1F3D74u;
            goto label_1f3d74;
        }
    }
    ctx->pc = 0x1F3D44u;
label_1f3d44:
    // 0x1f3d44: 0x8c823674  lw          $v0, 0x3674($a0)
    ctx->pc = 0x1f3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13940)));
label_1f3d48:
    // 0x1f3d48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f3d4c:
    if (ctx->pc == 0x1F3D4Cu) {
        ctx->pc = 0x1F3D50u;
        goto label_1f3d50;
    }
    ctx->pc = 0x1F3D48u;
    {
        const bool branch_taken_0x1f3d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d48) {
            ctx->pc = 0x1F3D74u;
            goto label_1f3d74;
        }
    }
    ctx->pc = 0x1F3D50u;
label_1f3d50:
    // 0x1f3d50: 0x8c843670  lw          $a0, 0x3670($a0)
    ctx->pc = 0x1f3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13936)));
label_1f3d54:
    // 0x1f3d54: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1f3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f3d58:
    // 0x1f3d58: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f3d5c:
    // 0x1f3d5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3d60:
    // 0x1f3d60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f3d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3d64:
    // 0x1f3d64: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
label_1f3d68:
    if (ctx->pc == 0x1F3D68u) {
        ctx->pc = 0x1F3D6Cu;
        goto label_1f3d6c;
    }
    ctx->pc = 0x1F3D64u;
    {
        const bool branch_taken_0x1f3d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1f3d64) {
            ctx->pc = 0x1F3D74u;
            goto label_1f3d74;
        }
    }
    ctx->pc = 0x1F3D6Cu;
label_1f3d6c:
    // 0x1f3d6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f3d70:
    if (ctx->pc == 0x1F3D70u) {
        ctx->pc = 0x1F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D6Cu;
        // 0x1f3d70: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D74u;
        goto label_1f3d74;
    }
    ctx->pc = 0x1F3D6Cu;
    {
        const bool branch_taken_0x1f3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D6Cu;
        // 0x1f3d70: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d6c) {
            ctx->pc = 0x1F3D84u;
            goto label_1f3d84;
        }
    }
    ctx->pc = 0x1F3D74u;
label_1f3d74:
    // 0x1f3d74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f3d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f3d78:
    // 0x1f3d78: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f3d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f3d7c:
    // 0x1f3d7c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f3d80:
    if (ctx->pc == 0x1F3D80u) {
        ctx->pc = 0x1F3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D7Cu;
        // 0x1f3d80: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D84u;
        goto label_1f3d84;
    }
    ctx->pc = 0x1F3D7Cu;
    {
        const bool branch_taken_0x1f3d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D7Cu;
        // 0x1f3d80: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d7c) {
            ctx->pc = 0x1F3D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3d30;
        }
    }
    ctx->pc = 0x1F3D84u;
label_1f3d84:
    // 0x1f3d84: 0x0  nop
    ctx->pc = 0x1f3d84u;
    // NOP
label_1f3d88:
    // 0x1f3d88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3d8c:
    // 0x1f3d8c: 0x14c203f8  bne         $a2, $v0, . + 4 + (0x3F8 << 2)
label_1f3d90:
    if (ctx->pc == 0x1F3D90u) {
        ctx->pc = 0x1F3D94u;
        goto label_1f3d94;
    }
    ctx->pc = 0x1F3D8Cu;
    {
        const bool branch_taken_0x1f3d8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3d8c) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3D94u;
label_1f3d94:
    // 0x1f3d94: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3d98:
    // 0x1f3d98: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3d9c:
    // 0x1f3d9c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1f3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1f3da0:
    // 0x1f3da0: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3da4:
    // 0x1f3da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3da8:
    // 0x1f3da8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1f3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1f3dac:
    // 0x1f3dac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3db0:
    // 0x1f3db0: 0xc08f20e  jal         func_23C838
label_1f3db4:
    if (ctx->pc == 0x1F3DB4u) {
        ctx->pc = 0x1F3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DB0u;
        // 0x1f3db4: 0x24a5d300  addiu       $a1, $a1, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DB8u;
        goto label_1f3db8;
    }
    ctx->pc = 0x1F3DB0u;
    SET_GPR_U32(ctx, 31, 0x1F3DB8u);
    ctx->pc = 0x1F3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DB0u;
    // 0x1f3db4: 0x24a5d300  addiu       $a1, $a1, -0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3DB8u;
label_1f3db8:
    // 0x1f3db8: 0x100003ed  b           . + 4 + (0x3ED << 2)
label_1f3dbc:
    if (ctx->pc == 0x1F3DBCu) {
        ctx->pc = 0x1F3DC0u;
        goto label_1f3dc0;
    }
    ctx->pc = 0x1F3DB8u;
    {
        const bool branch_taken_0x1f3db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3db8) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3DC0u;
label_1f3dc0:
    // 0x1f3dc0: 0x1683001d  bne         $s4, $v1, . + 4 + (0x1D << 2)
label_1f3dc4:
    if (ctx->pc == 0x1F3DC4u) {
        ctx->pc = 0x1F3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DC0u;
        // 0x1f3dc4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DC8u;
        goto label_1f3dc8;
    }
    ctx->pc = 0x1F3DC0u;
    {
        const bool branch_taken_0x1f3dc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DC0u;
        // 0x1f3dc4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dc0) {
            ctx->pc = 0x1F3E38u;
            { ctx->pc = 0x1f3e38; return; }
        }
    }
    ctx->pc = 0x1F3DC8u;
label_1f3dc8:
    // 0x1f3dc8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f3dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f3dcc:
    // 0x1f3dcc: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f3dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f3dd0:
    // 0x1f3dd0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3dd4:
    // 0x1f3dd4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3dd8:
    // 0x1f3dd8: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f3dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f3ddc:
    // 0x1f3ddc: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f3de0:
    // 0x1f3de0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3de4:
    // 0x1f3de4: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f3de4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3de8:
    // 0x1f3de8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3dec:
    // 0x1f3dec: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3df0:
    // 0x1f3df0: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f3df4:
    // 0x1f3df4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f3df4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f3df8:
    // 0x1f3df8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3dfc:
    // 0x1f3dfc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f3dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->pc = 0x1f3e00u;
    return;
}

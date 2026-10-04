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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part83(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1c3890u: goto label_1c3890;
        case 0x1c3894u: goto label_1c3894;
        case 0x1c3898u: goto label_1c3898;
        case 0x1c389cu: goto label_1c389c;
        case 0x1c38a0u: goto label_1c38a0;
        case 0x1c38a4u: goto label_1c38a4;
        case 0x1c38a8u: goto label_1c38a8;
        case 0x1c38acu: goto label_1c38ac;
        case 0x1c38b0u: goto label_1c38b0;
        case 0x1c38b4u: goto label_1c38b4;
        case 0x1c38b8u: goto label_1c38b8;
        case 0x1c38bcu: goto label_1c38bc;
        case 0x1c38c0u: goto label_1c38c0;
        case 0x1c38c4u: goto label_1c38c4;
        case 0x1c38c8u: goto label_1c38c8;
        case 0x1c38ccu: goto label_1c38cc;
        case 0x1c38d0u: goto label_1c38d0;
        case 0x1c38d4u: goto label_1c38d4;
        case 0x1c38d8u: goto label_1c38d8;
        case 0x1c38dcu: goto label_1c38dc;
        case 0x1c38e0u: goto label_1c38e0;
        case 0x1c38e4u: goto label_1c38e4;
        case 0x1c38e8u: goto label_1c38e8;
        case 0x1c38ecu: goto label_1c38ec;
        case 0x1c38f0u: goto label_1c38f0;
        case 0x1c38f4u: goto label_1c38f4;
        case 0x1c38f8u: goto label_1c38f8;
        case 0x1c38fcu: goto label_1c38fc;
        case 0x1c3900u: goto label_1c3900;
        case 0x1c3904u: goto label_1c3904;
        case 0x1c3908u: goto label_1c3908;
        case 0x1c390cu: goto label_1c390c;
        case 0x1c3910u: goto label_1c3910;
        case 0x1c3914u: goto label_1c3914;
        case 0x1c3918u: goto label_1c3918;
        case 0x1c391cu: goto label_1c391c;
        case 0x1c3920u: goto label_1c3920;
        case 0x1c3924u: goto label_1c3924;
        case 0x1c3928u: goto label_1c3928;
        case 0x1c392cu: goto label_1c392c;
        case 0x1c3930u: goto label_1c3930;
        case 0x1c3934u: goto label_1c3934;
        case 0x1c3938u: goto label_1c3938;
        case 0x1c393cu: goto label_1c393c;
        case 0x1c3940u: goto label_1c3940;
        case 0x1c3944u: goto label_1c3944;
        case 0x1c3948u: goto label_1c3948;
        case 0x1c394cu: goto label_1c394c;
        case 0x1c3950u: goto label_1c3950;
        case 0x1c3954u: goto label_1c3954;
        case 0x1c3958u: goto label_1c3958;
        case 0x1c395cu: goto label_1c395c;
        case 0x1c3960u: goto label_1c3960;
        case 0x1c3964u: goto label_1c3964;
        case 0x1c3968u: goto label_1c3968;
        case 0x1c396cu: goto label_1c396c;
        case 0x1c3970u: goto label_1c3970;
        case 0x1c3974u: goto label_1c3974;
        case 0x1c3978u: goto label_1c3978;
        case 0x1c397cu: goto label_1c397c;
        case 0x1c3980u: goto label_1c3980;
        case 0x1c3984u: goto label_1c3984;
        case 0x1c3988u: goto label_1c3988;
        case 0x1c398cu: goto label_1c398c;
        case 0x1c3990u: goto label_1c3990;
        case 0x1c3994u: goto label_1c3994;
        case 0x1c3998u: goto label_1c3998;
        case 0x1c399cu: goto label_1c399c;
        case 0x1c39a0u: goto label_1c39a0;
        case 0x1c39a4u: goto label_1c39a4;
        case 0x1c39a8u: goto label_1c39a8;
        case 0x1c39acu: goto label_1c39ac;
        case 0x1c39b0u: goto label_1c39b0;
        case 0x1c39b4u: goto label_1c39b4;
        case 0x1c39b8u: goto label_1c39b8;
        case 0x1c39bcu: goto label_1c39bc;
        case 0x1c39c0u: goto label_1c39c0;
        case 0x1c39c4u: goto label_1c39c4;
        case 0x1c39c8u: goto label_1c39c8;
        case 0x1c39ccu: goto label_1c39cc;
        case 0x1c39d0u: goto label_1c39d0;
        case 0x1c39d4u: goto label_1c39d4;
        case 0x1c39d8u: goto label_1c39d8;
        case 0x1c39dcu: goto label_1c39dc;
        case 0x1c39e0u: goto label_1c39e0;
        case 0x1c39e4u: goto label_1c39e4;
        case 0x1c39e8u: goto label_1c39e8;
        case 0x1c39ecu: goto label_1c39ec;
        case 0x1c39f0u: goto label_1c39f0;
        case 0x1c39f4u: goto label_1c39f4;
        case 0x1c39f8u: goto label_1c39f8;
        case 0x1c39fcu: goto label_1c39fc;
        case 0x1c3a00u: goto label_1c3a00;
        case 0x1c3a04u: goto label_1c3a04;
        case 0x1c3a08u: goto label_1c3a08;
        case 0x1c3a0cu: goto label_1c3a0c;
        case 0x1c3a10u: goto label_1c3a10;
        case 0x1c3a14u: goto label_1c3a14;
        case 0x1c3a18u: goto label_1c3a18;
        case 0x1c3a1cu: goto label_1c3a1c;
        case 0x1c3a20u: goto label_1c3a20;
        case 0x1c3a24u: goto label_1c3a24;
        case 0x1c3a28u: goto label_1c3a28;
        case 0x1c3a2cu: goto label_1c3a2c;
        case 0x1c3a30u: goto label_1c3a30;
        case 0x1c3a34u: goto label_1c3a34;
        case 0x1c3a38u: goto label_1c3a38;
        case 0x1c3a3cu: goto label_1c3a3c;
        case 0x1c3a40u: goto label_1c3a40;
        case 0x1c3a44u: goto label_1c3a44;
        case 0x1c3a48u: goto label_1c3a48;
        case 0x1c3a4cu: goto label_1c3a4c;
        case 0x1c3a50u: goto label_1c3a50;
        case 0x1c3a54u: goto label_1c3a54;
        case 0x1c3a58u: goto label_1c3a58;
        case 0x1c3a5cu: goto label_1c3a5c;
        case 0x1c3a60u: goto label_1c3a60;
        case 0x1c3a64u: goto label_1c3a64;
        case 0x1c3a68u: goto label_1c3a68;
        case 0x1c3a6cu: goto label_1c3a6c;
        case 0x1c3a70u: goto label_1c3a70;
        case 0x1c3a74u: goto label_1c3a74;
        case 0x1c3a78u: goto label_1c3a78;
        case 0x1c3a7cu: goto label_1c3a7c;
        case 0x1c3a80u: goto label_1c3a80;
        case 0x1c3a84u: goto label_1c3a84;
        case 0x1c3a88u: goto label_1c3a88;
        case 0x1c3a8cu: goto label_1c3a8c;
        case 0x1c3a90u: goto label_1c3a90;
        case 0x1c3a94u: goto label_1c3a94;
        case 0x1c3a98u: goto label_1c3a98;
        case 0x1c3a9cu: goto label_1c3a9c;
        case 0x1c3aa0u: goto label_1c3aa0;
        case 0x1c3aa4u: goto label_1c3aa4;
        case 0x1c3aa8u: goto label_1c3aa8;
        case 0x1c3aacu: goto label_1c3aac;
        case 0x1c3ab0u: goto label_1c3ab0;
        case 0x1c3ab4u: goto label_1c3ab4;
        case 0x1c3ab8u: goto label_1c3ab8;
        case 0x1c3abcu: goto label_1c3abc;
        case 0x1c3ac0u: goto label_1c3ac0;
        case 0x1c3ac4u: goto label_1c3ac4;
        case 0x1c3ac8u: goto label_1c3ac8;
        case 0x1c3accu: goto label_1c3acc;
        case 0x1c3ad0u: goto label_1c3ad0;
        case 0x1c3ad4u: goto label_1c3ad4;
        case 0x1c3ad8u: goto label_1c3ad8;
        case 0x1c3adcu: goto label_1c3adc;
        case 0x1c3ae0u: goto label_1c3ae0;
        case 0x1c3ae4u: goto label_1c3ae4;
        case 0x1c3ae8u: goto label_1c3ae8;
        case 0x1c3aecu: goto label_1c3aec;
        case 0x1c3af0u: goto label_1c3af0;
        case 0x1c3af4u: goto label_1c3af4;
        case 0x1c3af8u: goto label_1c3af8;
        case 0x1c3afcu: goto label_1c3afc;
        case 0x1c3b00u: goto label_1c3b00;
        case 0x1c3b04u: goto label_1c3b04;
        case 0x1c3b08u: goto label_1c3b08;
        case 0x1c3b0cu: goto label_1c3b0c;
        case 0x1c3b10u: goto label_1c3b10;
        case 0x1c3b14u: goto label_1c3b14;
        case 0x1c3b18u: goto label_1c3b18;
        case 0x1c3b1cu: goto label_1c3b1c;
        case 0x1c3b20u: goto label_1c3b20;
        case 0x1c3b24u: goto label_1c3b24;
        case 0x1c3b28u: goto label_1c3b28;
        case 0x1c3b2cu: goto label_1c3b2c;
        case 0x1c3b30u: goto label_1c3b30;
        case 0x1c3b34u: goto label_1c3b34;
        case 0x1c3b38u: goto label_1c3b38;
        case 0x1c3b3cu: goto label_1c3b3c;
        case 0x1c3b40u: goto label_1c3b40;
        case 0x1c3b44u: goto label_1c3b44;
        case 0x1c3b48u: goto label_1c3b48;
        case 0x1c3b4cu: goto label_1c3b4c;
        case 0x1c3b50u: goto label_1c3b50;
        case 0x1c3b54u: goto label_1c3b54;
        case 0x1c3b58u: goto label_1c3b58;
        case 0x1c3b5cu: goto label_1c3b5c;
        case 0x1c3b60u: goto label_1c3b60;
        case 0x1c3b64u: goto label_1c3b64;
        case 0x1c3b68u: goto label_1c3b68;
        case 0x1c3b6cu: goto label_1c3b6c;
        case 0x1c3b70u: goto label_1c3b70;
        case 0x1c3b74u: goto label_1c3b74;
        case 0x1c3b78u: goto label_1c3b78;
        case 0x1c3b7cu: goto label_1c3b7c;
        case 0x1c3b80u: goto label_1c3b80;
        case 0x1c3b84u: goto label_1c3b84;
        case 0x1c3b88u: goto label_1c3b88;
        case 0x1c3b8cu: goto label_1c3b8c;
        case 0x1c3b90u: goto label_1c3b90;
        case 0x1c3b94u: goto label_1c3b94;
        case 0x1c3b98u: goto label_1c3b98;
        case 0x1c3b9cu: goto label_1c3b9c;
        case 0x1c3ba0u: goto label_1c3ba0;
        case 0x1c3ba4u: goto label_1c3ba4;
        case 0x1c3ba8u: goto label_1c3ba8;
        case 0x1c3bacu: goto label_1c3bac;
        case 0x1c3bb0u: goto label_1c3bb0;
        case 0x1c3bb4u: goto label_1c3bb4;
        case 0x1c3bb8u: goto label_1c3bb8;
        case 0x1c3bbcu: goto label_1c3bbc;
        case 0x1c3bc0u: goto label_1c3bc0;
        case 0x1c3bc4u: goto label_1c3bc4;
        case 0x1c3bc8u: goto label_1c3bc8;
        case 0x1c3bccu: goto label_1c3bcc;
        case 0x1c3bd0u: goto label_1c3bd0;
        case 0x1c3bd4u: goto label_1c3bd4;
        case 0x1c3bd8u: goto label_1c3bd8;
        case 0x1c3bdcu: goto label_1c3bdc;
        case 0x1c3be0u: goto label_1c3be0;
        case 0x1c3be4u: goto label_1c3be4;
        case 0x1c3be8u: goto label_1c3be8;
        case 0x1c3becu: goto label_1c3bec;
        case 0x1c3bf0u: goto label_1c3bf0;
        case 0x1c3bf4u: goto label_1c3bf4;
        case 0x1c3bf8u: goto label_1c3bf8;
        case 0x1c3bfcu: goto label_1c3bfc;
        case 0x1c3c00u: goto label_1c3c00;
        case 0x1c3c04u: goto label_1c3c04;
        case 0x1c3c08u: goto label_1c3c08;
        case 0x1c3c0cu: goto label_1c3c0c;
        case 0x1c3c10u: goto label_1c3c10;
        case 0x1c3c14u: goto label_1c3c14;
        case 0x1c3c18u: goto label_1c3c18;
        case 0x1c3c1cu: goto label_1c3c1c;
        case 0x1c3c20u: goto label_1c3c20;
        case 0x1c3c24u: goto label_1c3c24;
        case 0x1c3c28u: goto label_1c3c28;
        case 0x1c3c2cu: goto label_1c3c2c;
        case 0x1c3c30u: goto label_1c3c30;
        case 0x1c3c34u: goto label_1c3c34;
        case 0x1c3c38u: goto label_1c3c38;
        case 0x1c3c3cu: goto label_1c3c3c;
        case 0x1c3c40u: goto label_1c3c40;
        case 0x1c3c44u: goto label_1c3c44;
        case 0x1c3c48u: goto label_1c3c48;
        case 0x1c3c4cu: goto label_1c3c4c;
        case 0x1c3c50u: goto label_1c3c50;
        case 0x1c3c54u: goto label_1c3c54;
        case 0x1c3c58u: goto label_1c3c58;
        case 0x1c3c5cu: goto label_1c3c5c;
        case 0x1c3c60u: goto label_1c3c60;
        case 0x1c3c64u: goto label_1c3c64;
        case 0x1c3c68u: goto label_1c3c68;
        case 0x1c3c6cu: goto label_1c3c6c;
        case 0x1c3c70u: goto label_1c3c70;
        case 0x1c3c74u: goto label_1c3c74;
        case 0x1c3c78u: goto label_1c3c78;
        case 0x1c3c7cu: goto label_1c3c7c;
        case 0x1c3c80u: goto label_1c3c80;
        case 0x1c3c84u: goto label_1c3c84;
        case 0x1c3c88u: goto label_1c3c88;
        case 0x1c3c8cu: goto label_1c3c8c;
        case 0x1c3c90u: goto label_1c3c90;
        case 0x1c3c94u: goto label_1c3c94;
        case 0x1c3c98u: goto label_1c3c98;
        case 0x1c3c9cu: goto label_1c3c9c;
        case 0x1c3ca0u: goto label_1c3ca0;
        case 0x1c3ca4u: goto label_1c3ca4;
        case 0x1c3ca8u: goto label_1c3ca8;
        case 0x1c3cacu: goto label_1c3cac;
        case 0x1c3cb0u: goto label_1c3cb0;
        case 0x1c3cb4u: goto label_1c3cb4;
        case 0x1c3cb8u: goto label_1c3cb8;
        case 0x1c3cbcu: goto label_1c3cbc;
        case 0x1c3cc0u: goto label_1c3cc0;
        case 0x1c3cc4u: goto label_1c3cc4;
        case 0x1c3cc8u: goto label_1c3cc8;
        case 0x1c3cccu: goto label_1c3ccc;
        case 0x1c3cd0u: goto label_1c3cd0;
        case 0x1c3cd4u: goto label_1c3cd4;
        case 0x1c3cd8u: goto label_1c3cd8;
        case 0x1c3cdcu: goto label_1c3cdc;
        case 0x1c3ce0u: goto label_1c3ce0;
        case 0x1c3ce4u: goto label_1c3ce4;
        case 0x1c3ce8u: goto label_1c3ce8;
        case 0x1c3cecu: goto label_1c3cec;
        case 0x1c3cf0u: goto label_1c3cf0;
        case 0x1c3cf4u: goto label_1c3cf4;
        case 0x1c3cf8u: goto label_1c3cf8;
        case 0x1c3cfcu: goto label_1c3cfc;
        case 0x1c3d00u: goto label_1c3d00;
        case 0x1c3d04u: goto label_1c3d04;
        case 0x1c3d08u: goto label_1c3d08;
        case 0x1c3d0cu: goto label_1c3d0c;
        case 0x1c3d10u: goto label_1c3d10;
        case 0x1c3d14u: goto label_1c3d14;
        case 0x1c3d18u: goto label_1c3d18;
        case 0x1c3d1cu: goto label_1c3d1c;
        case 0x1c3d20u: goto label_1c3d20;
        case 0x1c3d24u: goto label_1c3d24;
        case 0x1c3d28u: goto label_1c3d28;
        case 0x1c3d2cu: goto label_1c3d2c;
        case 0x1c3d30u: goto label_1c3d30;
        case 0x1c3d34u: goto label_1c3d34;
        case 0x1c3d38u: goto label_1c3d38;
        case 0x1c3d3cu: goto label_1c3d3c;
        case 0x1c3d40u: goto label_1c3d40;
        case 0x1c3d44u: goto label_1c3d44;
        case 0x1c3d48u: goto label_1c3d48;
        case 0x1c3d4cu: goto label_1c3d4c;
        case 0x1c3d50u: goto label_1c3d50;
        case 0x1c3d54u: goto label_1c3d54;
        case 0x1c3d58u: goto label_1c3d58;
        case 0x1c3d5cu: goto label_1c3d5c;
        case 0x1c3d60u: goto label_1c3d60;
        case 0x1c3d64u: goto label_1c3d64;
        case 0x1c3d68u: goto label_1c3d68;
        case 0x1c3d6cu: goto label_1c3d6c;
        case 0x1c3d70u: goto label_1c3d70;
        case 0x1c3d74u: goto label_1c3d74;
        case 0x1c3d78u: goto label_1c3d78;
        case 0x1c3d7cu: goto label_1c3d7c;
        case 0x1c3d80u: goto label_1c3d80;
        case 0x1c3d84u: goto label_1c3d84;
        case 0x1c3d88u: goto label_1c3d88;
        case 0x1c3d8cu: goto label_1c3d8c;
        case 0x1c3d90u: goto label_1c3d90;
        case 0x1c3d94u: goto label_1c3d94;
        case 0x1c3d98u: goto label_1c3d98;
        case 0x1c3d9cu: goto label_1c3d9c;
        case 0x1c3da0u: goto label_1c3da0;
        case 0x1c3da4u: goto label_1c3da4;
        case 0x1c3da8u: goto label_1c3da8;
        case 0x1c3dacu: goto label_1c3dac;
        case 0x1c3db0u: goto label_1c3db0;
        case 0x1c3db4u: goto label_1c3db4;
        case 0x1c3db8u: goto label_1c3db8;
        case 0x1c3dbcu: goto label_1c3dbc;
        case 0x1c3dc0u: goto label_1c3dc0;
        case 0x1c3dc4u: goto label_1c3dc4;
        case 0x1c3dc8u: goto label_1c3dc8;
        case 0x1c3dccu: goto label_1c3dcc;
        case 0x1c3dd0u: goto label_1c3dd0;
        case 0x1c3dd4u: goto label_1c3dd4;
        case 0x1c3dd8u: goto label_1c3dd8;
        case 0x1c3ddcu: goto label_1c3ddc;
        case 0x1c3de0u: goto label_1c3de0;
        case 0x1c3de4u: goto label_1c3de4;
        case 0x1c3de8u: goto label_1c3de8;
        case 0x1c3decu: goto label_1c3dec;
        case 0x1c3df0u: goto label_1c3df0;
        case 0x1c3df4u: goto label_1c3df4;
        case 0x1c3df8u: goto label_1c3df8;
        case 0x1c3dfcu: goto label_1c3dfc;
        case 0x1c3e00u: goto label_1c3e00;
        case 0x1c3e04u: goto label_1c3e04;
        case 0x1c3e08u: goto label_1c3e08;
        case 0x1c3e0cu: goto label_1c3e0c;
        case 0x1c3e10u: goto label_1c3e10;
        case 0x1c3e14u: goto label_1c3e14;
        case 0x1c3e18u: goto label_1c3e18;
        case 0x1c3e1cu: goto label_1c3e1c;
        case 0x1c3e20u: goto label_1c3e20;
        case 0x1c3e24u: goto label_1c3e24;
        case 0x1c3e28u: goto label_1c3e28;
        case 0x1c3e2cu: goto label_1c3e2c;
        case 0x1c3e30u: goto label_1c3e30;
        case 0x1c3e34u: goto label_1c3e34;
        case 0x1c3e38u: goto label_1c3e38;
        case 0x1c3e3cu: goto label_1c3e3c;
        case 0x1c3e40u: goto label_1c3e40;
        case 0x1c3e44u: goto label_1c3e44;
        case 0x1c3e48u: goto label_1c3e48;
        case 0x1c3e4cu: goto label_1c3e4c;
        case 0x1c3e50u: goto label_1c3e50;
        case 0x1c3e54u: goto label_1c3e54;
        case 0x1c3e58u: goto label_1c3e58;
        case 0x1c3e5cu: goto label_1c3e5c;
        case 0x1c3e60u: goto label_1c3e60;
        case 0x1c3e64u: goto label_1c3e64;
        case 0x1c3e68u: goto label_1c3e68;
        case 0x1c3e6cu: goto label_1c3e6c;
        case 0x1c3e70u: goto label_1c3e70;
        case 0x1c3e74u: goto label_1c3e74;
        case 0x1c3e78u: goto label_1c3e78;
        case 0x1c3e7cu: goto label_1c3e7c;
        case 0x1c3e80u: goto label_1c3e80;
        case 0x1c3e84u: goto label_1c3e84;
        default: return;
    }

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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3724u, 0x1C372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3754u, 0x1C375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    goto label_1c3aa0;
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
label_1c3890:
    // 0x1c3890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3894:
    // 0x1c3894: 0x3e00008  jr          $ra
label_1c3898:
    if (ctx->pc == 0x1C3898u) {
        ctx->pc = 0x1C3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3894u;
        // 0x1c3898: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C389Cu;
        goto label_1c389c;
    }
    ctx->pc = 0x1C3894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3894u;
        // 0x1c3898: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C389Cu;
label_1c389c:
    // 0x1c389c: 0x0  nop
    ctx->pc = 0x1c389cu;
    // NOP
label_1c38a0:
    // 0x1c38a0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c38a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c38a4:
    // 0x1c38a4: 0x3e00008  jr          $ra
label_1c38a8:
    if (ctx->pc == 0x1C38A8u) {
        ctx->pc = 0x1C38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38A4u;
        // 0x1c38a8: 0x8c22fbb0  lw          $v0, -0x450($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C38ACu;
        goto label_1c38ac;
    }
    ctx->pc = 0x1C38A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38A4u;
        // 0x1c38a8: 0x8c22fbb0  lw          $v0, -0x450($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C38A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C38ACu;
label_1c38ac:
    // 0x1c38ac: 0x0  nop
    ctx->pc = 0x1c38acu;
    // NOP
label_1c38b0:
    // 0x1c38b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c38b4:
    // 0x1c38b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c38b8:
    // 0x1c38b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c38b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c38bc:
    // 0x1c38bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c38bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c38c0:
    // 0x1c38c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c38c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c38c4:
    // 0x1c38c4: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c38c8:
    // 0x1c38c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c38c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c38cc:
    // 0x1c38cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c38d0:
    // 0x1c38d0: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1c38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c38d4:
    // 0x1c38d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c38d8:
    // 0x1c38d8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_1c38dc:
    if (ctx->pc == 0x1C38DCu) {
        ctx->pc = 0x1C38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38D8u;
        // 0x1c38dc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C38E0u;
        goto label_1c38e0;
    }
    ctx->pc = 0x1C38D8u;
    {
        const bool branch_taken_0x1c38d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38D8u;
        // 0x1c38dc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38d8) {
            ctx->pc = 0x1C3914u;
            goto label_1c3914;
        }
    }
    ctx->pc = 0x1C38E0u;
label_1c38e0:
    // 0x1c38e0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c38e4:
    // 0x1c38e4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1c38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1c38e8:
    // 0x1c38e8: 0x2442f904  addiu       $v0, $v0, -0x6FC
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965508));
label_1c38ec:
    // 0x1c38ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c38ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c38f0:
    // 0x1c38f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c38f4:
    // 0x1c38f4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c38f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c38f8:
    // 0x1c38f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c38fc:
    // 0x1c38fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c38fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3900:
    // 0x1c3900: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3904:
    // 0x1c3904: 0xc066c72  jal         func_19B1C8
label_1c3908:
    if (ctx->pc == 0x1C3908u) {
        ctx->pc = 0x1C3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3904u;
        // 0x1c3908: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C390Cu;
        goto label_1c390c;
    }
    ctx->pc = 0x1C3904u;
    SET_GPR_U32(ctx, 31, 0x1C390Cu);
    ctx->pc = 0x1C3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3904u;
    // 0x1c3908: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3904u, 0x1C390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C390Cu;
label_1c390c:
    // 0x1c390c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c3910:
    if (ctx->pc == 0x1C3910u) {
        ctx->pc = 0x1C3914u;
        goto label_1c3914;
    }
    ctx->pc = 0x1C390Cu;
    {
        const bool branch_taken_0x1c390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c390c) {
            ctx->pc = 0x1C3940u;
            goto label_1c3940;
        }
    }
    ctx->pc = 0x1C3914u;
label_1c3914:
    // 0x1c3914: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3918:
    // 0x1c3918: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1c3918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1c391c:
    // 0x1c391c: 0x2442f900  addiu       $v0, $v0, -0x700
    ctx->pc = 0x1c391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
label_1c3920:
    // 0x1c3920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3924:
    // 0x1c3924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3928:
    // 0x1c3928: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c3928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c392c:
    // 0x1c392c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c392cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3930:
    // 0x1c3930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3934:
    // 0x1c3934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3938:
    // 0x1c3938: 0xc066c72  jal         func_19B1C8
label_1c393c:
    if (ctx->pc == 0x1C393Cu) {
        ctx->pc = 0x1C393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3938u;
        // 0x1c393c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3940u;
        goto label_1c3940;
    }
    ctx->pc = 0x1C3938u;
    SET_GPR_U32(ctx, 31, 0x1C3940u);
    ctx->pc = 0x1C393Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3938u;
    // 0x1c393c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3938u, 0x1C3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3940u;
label_1c3940:
    // 0x1c3940: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3944:
    // 0x1c3944: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c3944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1c3948:
    // 0x1c3948: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x1c3948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
label_1c394c:
    // 0x1c394c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3950:
    // 0x1c3950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3954:
    // 0x1c3954: 0x24060148  addiu       $a2, $zero, 0x148
    ctx->pc = 0x1c3954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
label_1c3958:
    // 0x1c3958: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c3958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c395c:
    // 0x1c395c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c395cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3960:
    // 0x1c3960: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3964:
    // 0x1c3964: 0xc066c72  jal         func_19B1C8
label_1c3968:
    if (ctx->pc == 0x1C3968u) {
        ctx->pc = 0x1C3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3964u;
        // 0x1c3968: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C396Cu;
        goto label_1c396c;
    }
    ctx->pc = 0x1C3964u;
    SET_GPR_U32(ctx, 31, 0x1C396Cu);
    ctx->pc = 0x1C3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3964u;
    // 0x1c3968: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3964u, 0x1C396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C396Cu;
label_1c396c:
    // 0x1c396c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c396cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3970:
    // 0x1c3970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3974:
    // 0x1c3974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3978:
    // 0x1c3978: 0x3e00008  jr          $ra
label_1c397c:
    if (ctx->pc == 0x1C397Cu) {
        ctx->pc = 0x1C397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3978u;
        // 0x1c397c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3980u;
        goto label_1c3980;
    }
    ctx->pc = 0x1C3978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3978u;
        // 0x1c397c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3980u;
label_1c3980:
    // 0x1c3980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c3984:
    // 0x1c3984: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c3988:
    // 0x1c3988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c3988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c398c:
    // 0x1c398c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c3990:
    // 0x1c3990: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x1c3990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1c3994:
    // 0x1c3994: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_1c3998:
    if (ctx->pc == 0x1C3998u) {
        ctx->pc = 0x1C399Cu;
        goto label_1c399c;
    }
    ctx->pc = 0x1C3994u;
    {
        const bool branch_taken_0x1c3994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3994) {
            ctx->pc = 0x1C3A8Cu;
            goto label_1c3a8c;
        }
    }
    ctx->pc = 0x1C399Cu;
label_1c399c:
    // 0x1c399c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_1c39a0:
    if (ctx->pc == 0x1C39A0u) {
        ctx->pc = 0x1C39A4u;
        goto label_1c39a4;
    }
    ctx->pc = 0x1C399Cu;
    {
        const bool branch_taken_0x1c399c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c399c) {
            ctx->pc = 0x1C3A18u;
            goto label_1c3a18;
        }
    }
    ctx->pc = 0x1C39A4u;
label_1c39a4:
    // 0x1c39a4: 0xc041738  jal         func_105CE0
label_1c39a8:
    if (ctx->pc == 0x1C39A8u) {
        ctx->pc = 0x1C39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39A4u;
        // 0x1c39a8: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C39ACu;
        goto label_1c39ac;
    }
    ctx->pc = 0x1C39A4u;
    SET_GPR_U32(ctx, 31, 0x1C39ACu);
    ctx->pc = 0x1C39A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39A4u;
    // 0x1c39a8: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C39A4u, 0x1C39ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39ACu;
label_1c39ac:
    // 0x1c39ac: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c39acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c39b0:
    // 0x1c39b0: 0xc070080  jal         func_1C0200
label_1c39b4:
    if (ctx->pc == 0x1C39B4u) {
        ctx->pc = 0x1C39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39B0u;
        // 0x1c39b4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C39B8u;
        goto label_1c39b8;
    }
    ctx->pc = 0x1C39B0u;
    SET_GPR_U32(ctx, 31, 0x1C39B8u);
    ctx->pc = 0x1C39B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39B0u;
    // 0x1c39b4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C39B8u;
label_1c39b8:
    // 0x1c39b8: 0x240407f9  addiu       $a0, $zero, 0x7F9
    ctx->pc = 0x1c39b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
label_1c39bc:
    // 0x1c39bc: 0xc0416e4  jal         func_105B90
label_1c39c0:
    if (ctx->pc == 0x1C39C0u) {
        ctx->pc = 0x1C39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39BCu;
        // 0x1c39c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C39C4u;
        goto label_1c39c4;
    }
    ctx->pc = 0x1C39BCu;
    SET_GPR_U32(ctx, 31, 0x1C39C4u);
    ctx->pc = 0x1C39C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39BCu;
    // 0x1c39c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C39BCu, 0x1C39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C39C4u;
label_1c39c4:
    // 0x1c39c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c39c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c39c8:
    // 0x1c39c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c39c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c39cc:
    // 0x1c39cc: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c39ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1c39d0:
    // 0x1c39d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1c39d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1c39d4:
    // 0x1c39d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c39d8:
    if (ctx->pc == 0x1C39D8u) {
        ctx->pc = 0x1C39DCu;
        goto label_1c39dc;
    }
    ctx->pc = 0x1C39D4u;
    {
        const bool branch_taken_0x1c39d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c39d4) {
            ctx->pc = 0x1C39ECu;
            goto label_1c39ec;
        }
    }
    ctx->pc = 0x1C39DCu;
label_1c39dc:
    // 0x1c39dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c39dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c39e0:
    // 0x1c39e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c39e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c39e4:
    // 0x1c39e4: 0xc070ea8  jal         func_1C3AA0
label_1c39e8:
    if (ctx->pc == 0x1C39E8u) {
        ctx->pc = 0x1C39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39E4u;
        // 0x1c39e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C39ECu;
        goto label_1c39ec;
    }
    ctx->pc = 0x1C39E4u;
    SET_GPR_U32(ctx, 31, 0x1C39ECu);
    ctx->pc = 0x1C39E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C39E4u;
    // 0x1c39e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    goto label_1c3aa0;
    ctx->pc = 0x1C39ECu;
label_1c39ec:
    // 0x1c39ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c39ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c39f0:
    // 0x1c39f0: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c39f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1c39f4:
    // 0x1c39f4: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1c39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_1c39f8:
    // 0x1c39f8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1c39fc:
    if (ctx->pc == 0x1C39FCu) {
        ctx->pc = 0x1C39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39F8u;
        // 0x1c39fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A00u;
        goto label_1c3a00;
    }
    ctx->pc = 0x1C39F8u;
    {
        const bool branch_taken_0x1c39f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39F8u;
        // 0x1c39fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39f8) {
            ctx->pc = 0x1C3A84u;
            goto label_1c3a84;
        }
    }
    ctx->pc = 0x1C3A00u;
label_1c3a00:
    // 0x1c3a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a04:
    // 0x1c3a04: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c3a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1c3a08:
    // 0x1c3a08: 0xc070ea8  jal         func_1C3AA0
label_1c3a0c:
    if (ctx->pc == 0x1C3A0Cu) {
        ctx->pc = 0x1C3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A08u;
        // 0x1c3a0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A10u;
        goto label_1c3a10;
    }
    ctx->pc = 0x1C3A08u;
    SET_GPR_U32(ctx, 31, 0x1C3A10u);
    ctx->pc = 0x1C3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A08u;
    // 0x1c3a0c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    goto label_1c3aa0;
    ctx->pc = 0x1C3A10u;
label_1c3a10:
    // 0x1c3a10: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1c3a14:
    if (ctx->pc == 0x1C3A14u) {
        ctx->pc = 0x1C3A18u;
        goto label_1c3a18;
    }
    ctx->pc = 0x1C3A10u;
    {
        const bool branch_taken_0x1c3a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a10) {
            ctx->pc = 0x1C3A80u;
            goto label_1c3a80;
        }
    }
    ctx->pc = 0x1C3A18u;
label_1c3a18:
    // 0x1c3a18: 0xc041738  jal         func_105CE0
label_1c3a1c:
    if (ctx->pc == 0x1C3A1Cu) {
        ctx->pc = 0x1C3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A18u;
        // 0x1c3a1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A20u;
        goto label_1c3a20;
    }
    ctx->pc = 0x1C3A18u;
    SET_GPR_U32(ctx, 31, 0x1C3A20u);
    ctx->pc = 0x1C3A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A18u;
    // 0x1c3a1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C3A18u, 0x1C3A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A20u;
label_1c3a20:
    // 0x1c3a20: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c3a20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c3a24:
    // 0x1c3a24: 0xc070080  jal         func_1C0200
label_1c3a28:
    if (ctx->pc == 0x1C3A28u) {
        ctx->pc = 0x1C3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A24u;
        // 0x1c3a28: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A2Cu;
        goto label_1c3a2c;
    }
    ctx->pc = 0x1C3A24u;
    SET_GPR_U32(ctx, 31, 0x1C3A2Cu);
    ctx->pc = 0x1C3A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A24u;
    // 0x1c3a28: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C3A2Cu;
label_1c3a2c:
    // 0x1c3a2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c3a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c3a30:
    // 0x1c3a30: 0xc0416e4  jal         func_105B90
label_1c3a34:
    if (ctx->pc == 0x1C3A34u) {
        ctx->pc = 0x1C3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A30u;
        // 0x1c3a34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A38u;
        goto label_1c3a38;
    }
    ctx->pc = 0x1C3A30u;
    SET_GPR_U32(ctx, 31, 0x1C3A38u);
    ctx->pc = 0x1C3A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A30u;
    // 0x1c3a34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C3A30u, 0x1C3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A38u;
label_1c3a38:
    // 0x1c3a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a3c:
    // 0x1c3a3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c3a40:
    // 0x1c3a40: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c3a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1c3a44:
    // 0x1c3a44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1c3a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1c3a48:
    // 0x1c3a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c3a4c:
    if (ctx->pc == 0x1C3A4Cu) {
        ctx->pc = 0x1C3A50u;
        goto label_1c3a50;
    }
    ctx->pc = 0x1C3A48u;
    {
        const bool branch_taken_0x1c3a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3a48) {
            ctx->pc = 0x1C3A60u;
            goto label_1c3a60;
        }
    }
    ctx->pc = 0x1C3A50u;
label_1c3a50:
    // 0x1c3a50: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c3a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c3a54:
    // 0x1c3a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a58:
    // 0x1c3a58: 0xc070ea8  jal         func_1C3AA0
label_1c3a5c:
    if (ctx->pc == 0x1C3A5Cu) {
        ctx->pc = 0x1C3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A58u;
        // 0x1c3a5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A60u;
        goto label_1c3a60;
    }
    ctx->pc = 0x1C3A58u;
    SET_GPR_U32(ctx, 31, 0x1C3A60u);
    ctx->pc = 0x1C3A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A58u;
    // 0x1c3a5c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    goto label_1c3aa0;
    ctx->pc = 0x1C3A60u;
label_1c3a60:
    // 0x1c3a60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c3a64:
    // 0x1c3a64: 0x90224af7  lbu         $v0, 0x4AF7($at)
    ctx->pc = 0x1c3a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
label_1c3a68:
    // 0x1c3a68: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1c3a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
label_1c3a6c:
    // 0x1c3a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c3a70:
    if (ctx->pc == 0x1C3A70u) {
        ctx->pc = 0x1C3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A6Cu;
        // 0x1c3a70: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A74u;
        goto label_1c3a74;
    }
    ctx->pc = 0x1C3A6Cu;
    {
        const bool branch_taken_0x1c3a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A6Cu;
        // 0x1c3a70: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a6c) {
            ctx->pc = 0x1C3A80u;
            goto label_1c3a80;
        }
    }
    ctx->pc = 0x1C3A74u;
label_1c3a74:
    // 0x1c3a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a78:
    // 0x1c3a78: 0xc070ea8  jal         func_1C3AA0
label_1c3a7c:
    if (ctx->pc == 0x1C3A7Cu) {
        ctx->pc = 0x1C3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A78u;
        // 0x1c3a7c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A80u;
        goto label_1c3a80;
    }
    ctx->pc = 0x1C3A78u;
    SET_GPR_U32(ctx, 31, 0x1C3A80u);
    ctx->pc = 0x1C3A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A78u;
    // 0x1c3a7c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    goto label_1c3aa0;
    ctx->pc = 0x1C3A80u;
label_1c3a80:
    // 0x1c3a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3a84:
    // 0x1c3a84: 0xc070038  jal         func_1C00E0
label_1c3a88:
    if (ctx->pc == 0x1C3A88u) {
        ctx->pc = 0x1C3A8Cu;
        goto label_1c3a8c;
    }
    ctx->pc = 0x1C3A84u;
    SET_GPR_U32(ctx, 31, 0x1C3A8Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C3A8Cu;
label_1c3a8c:
    // 0x1c3a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3a90:
    // 0x1c3a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3a94:
    // 0x1c3a94: 0x3e00008  jr          $ra
label_1c3a98:
    if (ctx->pc == 0x1C3A98u) {
        ctx->pc = 0x1C3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A94u;
        // 0x1c3a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3A9Cu;
        goto label_1c3a9c;
    }
    ctx->pc = 0x1C3A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3A94u;
        // 0x1c3a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3A9Cu;
label_1c3a9c:
    // 0x1c3a9c: 0x0  nop
    ctx->pc = 0x1c3a9cu;
    // NOP
label_1c3aa0:
    // 0x1c3aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c3aa4:
    // 0x1c3aa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c3aa8:
    // 0x1c3aa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c3aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c3aac:
    // 0x1c3aac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c3aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c3ab0:
    // 0x1c3ab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c3ab4:
    // 0x1c3ab4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c3ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ab8:
    // 0x1c3ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c3abc:
    // 0x1c3abc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c3abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ac0:
    // 0x1c3ac0: 0xc0602c8  jal         func_180B20
label_1c3ac4:
    if (ctx->pc == 0x1C3AC4u) {
        ctx->pc = 0x1C3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AC0u;
        // 0x1c3ac4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3AC8u;
        goto label_1c3ac8;
    }
    ctx->pc = 0x1C3AC0u;
    SET_GPR_U32(ctx, 31, 0x1C3AC8u);
    ctx->pc = 0x1C3AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AC0u;
    // 0x1c3ac4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1C3AC0u, 0x1C3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AC8u;
label_1c3ac8:
    // 0x1c3ac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3acc:
    // 0x1c3acc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1c3accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1c3ad0:
    // 0x1c3ad0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3ad4:
    // 0x1c3ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ad8:
    // 0x1c3ad8: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x1c3ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
label_1c3adc:
    // 0x1c3adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3ae0:
    // 0x1c3ae0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1c3ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3ae4:
    // 0x1c3ae4: 0xc060678  jal         func_1819E0
label_1c3ae8:
    if (ctx->pc == 0x1C3AE8u) {
        ctx->pc = 0x1C3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AE4u;
        // 0x1c3ae8: 0x26510080  addiu       $s1, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3AECu;
        goto label_1c3aec;
    }
    ctx->pc = 0x1C3AE4u;
    SET_GPR_U32(ctx, 31, 0x1C3AECu);
    ctx->pc = 0x1C3AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AE4u;
    // 0x1c3ae8: 0x26510080  addiu       $s1, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1C3AE4u, 0x1C3AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3AECu;
label_1c3aec:
    // 0x1c3aec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3af0:
    // 0x1c3af0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3af4:
    // 0x1c3af4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c3af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c3af8:
    // 0x1c3af8: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1c3af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c3afc:
    // 0x1c3afc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b00:
    // 0x1c3b00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b04:
    // 0x1c3b04: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x1c3b04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c3b08:
    // 0x1c3b08: 0xc060300  jal         func_180C00
label_1c3b0c:
    if (ctx->pc == 0x1C3B0Cu) {
        ctx->pc = 0x1C3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B08u;
        // 0x1c3b0c: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3B10u;
        goto label_1c3b10;
    }
    ctx->pc = 0x1C3B08u;
    SET_GPR_U32(ctx, 31, 0x1C3B10u);
    ctx->pc = 0x1C3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B08u;
    // 0x1c3b0c: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C3B08u, 0x1C3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B10u;
label_1c3b10:
    // 0x1c3b10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b14:
    // 0x1c3b14: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1c3b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1c3b18:
    // 0x1c3b18: 0xc08e93e  jal         func_23A4F8
label_1c3b1c:
    if (ctx->pc == 0x1C3B1Cu) {
        ctx->pc = 0x1C3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B18u;
        // 0x1c3b1c: 0x24061400  addiu       $a2, $zero, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3B20u;
        goto label_1c3b20;
    }
    ctx->pc = 0x1C3B18u;
    SET_GPR_U32(ctx, 31, 0x1C3B20u);
    ctx->pc = 0x1C3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B18u;
    // 0x1c3b1c: 0x24061400  addiu       $a2, $zero, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C3B20u;
label_1c3b20:
    // 0x1c3b20: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3b24:
    // 0x1c3b24: 0x1388c0  sll         $s1, $s3, 3
    ctx->pc = 0x1c3b24u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1c3b28:
    // 0x1c3b28: 0x2442f900  addiu       $v0, $v0, -0x700
    ctx->pc = 0x1c3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965504));
label_1c3b2c:
    // 0x1c3b2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c3b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b30:
    // 0x1c3b30: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c3b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c3b34:
    // 0x1c3b34: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1c3b34u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c3b38:
    // 0x1c3b38: 0xc060668  jal         func_1819A0
label_1c3b3c:
    if (ctx->pc == 0x1C3B3Cu) {
        ctx->pc = 0x1C3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B38u;
        // 0x1c3b3c: 0x26740080  addiu       $s4, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3B40u;
        goto label_1c3b40;
    }
    ctx->pc = 0x1C3B38u;
    SET_GPR_U32(ctx, 31, 0x1C3B40u);
    ctx->pc = 0x1C3B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B38u;
    // 0x1c3b3c: 0x26740080  addiu       $s4, $s3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819A0u, 0x1C3B38u, 0x1C3B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B40u;
label_1c3b40:
    // 0x1c3b40: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1c3b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c3b44:
    // 0x1c3b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c3b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b48:
    // 0x1c3b48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b4c:
    // 0x1c3b4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c3b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3b50:
    // 0x1c3b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b54:
    // 0x1c3b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b58:
    // 0x1c3b58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3b58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b5c:
    // 0x1c3b5c: 0xc060300  jal         func_180C00
label_1c3b60:
    if (ctx->pc == 0x1C3B60u) {
        ctx->pc = 0x1C3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B5Cu;
        // 0x1c3b60: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3B64u;
        goto label_1c3b64;
    }
    ctx->pc = 0x1C3B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B64u);
    ctx->pc = 0x1C3B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B5Cu;
    // 0x1c3b60: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C3B5Cu, 0x1C3B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B64u;
label_1c3b64:
    // 0x1c3b64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c3b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b68:
    // 0x1c3b68: 0x26051440  addiu       $a1, $s0, 0x1440
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5184));
label_1c3b6c:
    // 0x1c3b6c: 0xc08e93e  jal         func_23A4F8
label_1c3b70:
    if (ctx->pc == 0x1C3B70u) {
        ctx->pc = 0x1C3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B6Cu;
        // 0x1c3b70: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3B74u;
        goto label_1c3b74;
    }
    ctx->pc = 0x1C3B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C3B74u);
    ctx->pc = 0x1C3B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B6Cu;
    // 0x1c3b70: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C3B74u;
label_1c3b74:
    // 0x1c3b74: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3b78:
    // 0x1c3b78: 0x2442f904  addiu       $v0, $v0, -0x6FC
    ctx->pc = 0x1c3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965508));
label_1c3b7c:
    // 0x1c3b7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c3b80:
    // 0x1c3b80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c3b80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3b84:
    // 0x1c3b84: 0xc060668  jal         func_1819A0
label_1c3b88:
    if (ctx->pc == 0x1C3B88u) {
        ctx->pc = 0x1C3B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B84u;
        // 0x1c3b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3B8Cu;
        goto label_1c3b8c;
    }
    ctx->pc = 0x1C3B84u;
    SET_GPR_U32(ctx, 31, 0x1C3B8Cu);
    ctx->pc = 0x1C3B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B84u;
    // 0x1c3b88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819A0u, 0x1C3B84u, 0x1C3B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B8Cu;
label_1c3b8c:
    // 0x1c3b8c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1c3b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c3b90:
    // 0x1c3b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b94:
    // 0x1c3b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c3b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3b98:
    // 0x1c3b98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c3b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3b9c:
    // 0x1c3b9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ba0:
    // 0x1c3ba0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ba4:
    // 0x1c3ba4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3ba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ba8:
    // 0x1c3ba8: 0xc060300  jal         func_180C00
label_1c3bac:
    if (ctx->pc == 0x1C3BACu) {
        ctx->pc = 0x1C3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BA8u;
        // 0x1c3bac: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3BB0u;
        goto label_1c3bb0;
    }
    ctx->pc = 0x1C3BA8u;
    SET_GPR_U32(ctx, 31, 0x1C3BB0u);
    ctx->pc = 0x1C3BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BA8u;
    // 0x1c3bac: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C3BA8u, 0x1C3BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3BB0u;
label_1c3bb0:
    // 0x1c3bb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c3bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c3bb4:
    // 0x1c3bb4: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1c3bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1c3bb8:
    // 0x1c3bb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3bbc:
    // 0x1c3bbc: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x1c3bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1c3bc0:
    // 0x1c3bc0: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x1c3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_1c3bc4:
    // 0x1c3bc4: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x1c3bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_1c3bc8:
    // 0x1c3bc8: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x1c3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
label_1c3bcc:
    // 0x1c3bcc: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1c3bccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_1c3bd0:
    // 0x1c3bd0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x1c3bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_1c3bd4:
    // 0x1c3bd4: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x1c3bd4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c3bd8:
    // 0x1c3bd8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1c3bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1c3bdc:
    // 0x1c3bdc: 0x28ea0100  slti        $t2, $a3, 0x100
    ctx->pc = 0x1c3bdcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c3be0:
    // 0x1c3be0: 0x1c85824  and         $t3, $t6, $t0
    ctx->pc = 0x1c3be0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 8));
label_1c3be4:
    // 0x1c3be4: 0x31cc00ff  andi        $t4, $t6, 0xFF
    ctx->pc = 0x1c3be4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_1c3be8:
    // 0x1c3be8: 0xb6a02  srl         $t5, $t3, 8
    ctx->pc = 0x1c3be8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_1c3bec:
    // 0x1c3bec: 0x1c45824  and         $t3, $t6, $a0
    ctx->pc = 0x1c3becu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_1c3bf0:
    // 0x1c3bf0: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1c3bf0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1c3bf4:
    // 0x1c3bf4: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1c3bf4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1c3bf8:
    // 0x1c3bf8: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c3bfc:
    // 0x1c3bfc: 0x6c0019  multu       $v1, $t4
    ctx->pc = 0x1c3bfcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c3c00:
    // 0x1c3c00: 0x1c95824  and         $t3, $t6, $t1
    ctx->pc = 0x1c3c00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
label_1c3c04:
    // 0x1c3c04: 0x0  nop
    ctx->pc = 0x1c3c04u;
    // NOP
label_1c3c08:
    // 0x1c3c08: 0x6010  mfhi        $t4
    ctx->pc = 0x1c3c08u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1c3c0c:
    // 0x1c3c0c: 0xc7042  srl         $t6, $t4, 1
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_1c3c10:
    // 0x1c3c10: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x1c3c10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_1c3c14:
    // 0x1c3c14: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x1c3c14u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1c3c18:
    // 0x1c3c18: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1c3c18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1c3c1c:
    // 0x1c3c1c: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1c3c1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_1c3c20:
    // 0x1c3c20: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c3c20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c3c24:
    // 0x1c3c24: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x1c3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
label_1c3c28:
    // 0x1c3c28: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x1c3c28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c3c2c:
    // 0x1c3c2c: 0x31cbff00  andi        $t3, $t6, 0xFF00
    ctx->pc = 0x1c3c2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
label_1c3c30:
    // 0x1c3c30: 0x31cd00ff  andi        $t5, $t6, 0xFF
    ctx->pc = 0x1c3c30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_1c3c34:
    // 0x1c3c34: 0xb6202  srl         $t4, $t3, 8
    ctx->pc = 0x1c3c34u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_1c3c38:
    // 0x1c3c38: 0x1c45824  and         $t3, $t6, $a0
    ctx->pc = 0x1c3c38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_1c3c3c:
    // 0x1c3c3c: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1c3c3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_1c3c40:
    // 0x1c3c40: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1c3c40u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1c3c44:
    // 0x1c3c44: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1c3c44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c3c48:
    // 0x1c3c48: 0x6c0019  multu       $v1, $t4
    ctx->pc = 0x1c3c48u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c3c4c:
    // 0x1c3c4c: 0x1c95824  and         $t3, $t6, $t1
    ctx->pc = 0x1c3c4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
label_1c3c50:
    // 0x1c3c50: 0x0  nop
    ctx->pc = 0x1c3c50u;
    // NOP
label_1c3c54:
    // 0x1c3c54: 0x6010  mfhi        $t4
    ctx->pc = 0x1c3c54u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1c3c58:
    // 0x1c3c58: 0xc7042  srl         $t6, $t4, 1
    ctx->pc = 0x1c3c58u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_1c3c5c:
    // 0x1c3c5c: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x1c3c5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_1c3c60:
    // 0x1c3c60: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x1c3c60u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1c3c64:
    // 0x1c3c64: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1c3c64u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1c3c68:
    // 0x1c3c68: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1c3c68u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_1c3c6c:
    // 0x1c3c6c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c3c6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c3c70:
    // 0x1c3c70: 0xaccb0004  sw          $t3, 0x4($a2)
    ctx->pc = 0x1c3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 11));
label_1c3c74:
    // 0x1c3c74: 0x8cae0008  lw          $t6, 0x8($a1)
    ctx->pc = 0x1c3c74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1c3c78:
    // 0x1c3c78: 0x31cbff00  andi        $t3, $t6, 0xFF00
    ctx->pc = 0x1c3c78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
label_1c3c7c:
    // 0x1c3c7c: 0x31cd00ff  andi        $t5, $t6, 0xFF
    ctx->pc = 0x1c3c7cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_1c3c80:
    // 0x1c3c80: 0xb6202  srl         $t4, $t3, 8
    ctx->pc = 0x1c3c80u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_1c3c84:
    // 0x1c3c84: 0x1c45824  and         $t3, $t6, $a0
    ctx->pc = 0x1c3c84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_1c3c88:
    // 0x1c3c88: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1c3c88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_1c3c8c:
    // 0x1c3c8c: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1c3c8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1c3c90:
    // 0x1c3c90: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1c3c90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c3c94:
    // 0x1c3c94: 0x6c0019  multu       $v1, $t4
    ctx->pc = 0x1c3c94u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c3c98:
    // 0x1c3c98: 0x1c95824  and         $t3, $t6, $t1
    ctx->pc = 0x1c3c98u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
label_1c3c9c:
    // 0x1c3c9c: 0x0  nop
    ctx->pc = 0x1c3c9cu;
    // NOP
label_1c3ca0:
    // 0x1c3ca0: 0x6010  mfhi        $t4
    ctx->pc = 0x1c3ca0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1c3ca4:
    // 0x1c3ca4: 0xc7042  srl         $t6, $t4, 1
    ctx->pc = 0x1c3ca4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_1c3ca8:
    // 0x1c3ca8: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x1c3ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_1c3cac:
    // 0x1c3cac: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x1c3cacu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1c3cb0:
    // 0x1c3cb0: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1c3cb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1c3cb4:
    // 0x1c3cb4: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1c3cb4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_1c3cb8:
    // 0x1c3cb8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c3cb8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c3cbc:
    // 0x1c3cbc: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x1c3cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
label_1c3cc0:
    // 0x1c3cc0: 0x8cae000c  lw          $t6, 0xC($a1)
    ctx->pc = 0x1c3cc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1c3cc4:
    // 0x1c3cc4: 0x31cbff00  andi        $t3, $t6, 0xFF00
    ctx->pc = 0x1c3cc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
label_1c3cc8:
    // 0x1c3cc8: 0x31cd00ff  andi        $t5, $t6, 0xFF
    ctx->pc = 0x1c3cc8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_1c3ccc:
    // 0x1c3ccc: 0xb6202  srl         $t4, $t3, 8
    ctx->pc = 0x1c3cccu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_1c3cd0:
    // 0x1c3cd0: 0x1c45824  and         $t3, $t6, $a0
    ctx->pc = 0x1c3cd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_1c3cd4:
    // 0x1c3cd4: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1c3cd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_1c3cd8:
    // 0x1c3cd8: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1c3cd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1c3cdc:
    // 0x1c3cdc: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1c3cdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c3ce0:
    // 0x1c3ce0: 0x6c0019  multu       $v1, $t4
    ctx->pc = 0x1c3ce0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c3ce4:
    // 0x1c3ce4: 0x1c95824  and         $t3, $t6, $t1
    ctx->pc = 0x1c3ce4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
label_1c3ce8:
    // 0x1c3ce8: 0x0  nop
    ctx->pc = 0x1c3ce8u;
    // NOP
label_1c3cec:
    // 0x1c3cec: 0x6010  mfhi        $t4
    ctx->pc = 0x1c3cecu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1c3cf0:
    // 0x1c3cf0: 0xc7042  srl         $t6, $t4, 1
    ctx->pc = 0x1c3cf0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_1c3cf4:
    // 0x1c3cf4: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x1c3cf4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_1c3cf8:
    // 0x1c3cf8: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x1c3cf8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1c3cfc:
    // 0x1c3cfc: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1c3cfcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1c3d00:
    // 0x1c3d00: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1c3d00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_1c3d04:
    // 0x1c3d04: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c3d04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c3d08:
    // 0x1c3d08: 0xaccb000c  sw          $t3, 0xC($a2)
    ctx->pc = 0x1c3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
label_1c3d0c:
    // 0x1c3d0c: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x1c3d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1c3d10:
    // 0x1c3d10: 0x31cbff00  andi        $t3, $t6, 0xFF00
    ctx->pc = 0x1c3d10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
label_1c3d14:
    // 0x1c3d14: 0x31cd00ff  andi        $t5, $t6, 0xFF
    ctx->pc = 0x1c3d14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_1c3d18:
    // 0x1c3d18: 0xb6202  srl         $t4, $t3, 8
    ctx->pc = 0x1c3d18u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_1c3d1c:
    // 0x1c3d1c: 0x1c45824  and         $t3, $t6, $a0
    ctx->pc = 0x1c3d1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_1c3d20:
    // 0x1c3d20: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_1c3d24:
    // 0x1c3d24: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1c3d24u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1c3d28:
    // 0x1c3d28: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1c3d28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c3d2c:
    // 0x1c3d2c: 0x6c0019  multu       $v1, $t4
    ctx->pc = 0x1c3d2cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c3d30:
    // 0x1c3d30: 0x1c95824  and         $t3, $t6, $t1
    ctx->pc = 0x1c3d30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
label_1c3d34:
    // 0x1c3d34: 0x0  nop
    ctx->pc = 0x1c3d34u;
    // NOP
label_1c3d38:
    // 0x1c3d38: 0x6010  mfhi        $t4
    ctx->pc = 0x1c3d38u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1c3d3c:
    // 0x1c3d3c: 0xc7042  srl         $t6, $t4, 1
    ctx->pc = 0x1c3d3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_1c3d40:
    // 0x1c3d40: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x1c3d40u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_1c3d44:
    // 0x1c3d44: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x1c3d44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1c3d48:
    // 0x1c3d48: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1c3d48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1c3d4c:
    // 0x1c3d4c: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1c3d4cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_1c3d50:
    // 0x1c3d50: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c3d50u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c3d54:
    // 0x1c3d54: 0xaccb0010  sw          $t3, 0x10($a2)
    ctx->pc = 0x1c3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 11));
label_1c3d58:
    // 0x1c3d58: 0x8cae0014  lw          $t6, 0x14($a1)
    ctx->pc = 0x1c3d58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1c3d5c:
    // 0x1c3d5c: 0x31cbff00  andi        $t3, $t6, 0xFF00
    ctx->pc = 0x1c3d5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
label_1c3d60:
    // 0x1c3d60: 0x31cd00ff  andi        $t5, $t6, 0xFF
    ctx->pc = 0x1c3d60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_1c3d64:
    // 0x1c3d64: 0xb6202  srl         $t4, $t3, 8
    ctx->pc = 0x1c3d64u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_1c3d68:
    // 0x1c3d68: 0x1c45824  and         $t3, $t6, $a0
    ctx->pc = 0x1c3d68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_1c3d6c:
    // 0x1c3d6c: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_1c3d70:
    // 0x1c3d70: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1c3d70u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1c3d74:
    // 0x1c3d74: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1c3d74u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c3d78:
    // 0x1c3d78: 0x6c0019  multu       $v1, $t4
    ctx->pc = 0x1c3d78u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c3d7c:
    // 0x1c3d7c: 0x1c95824  and         $t3, $t6, $t1
    ctx->pc = 0x1c3d7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
label_1c3d80:
    // 0x1c3d80: 0x0  nop
    ctx->pc = 0x1c3d80u;
    // NOP
label_1c3d84:
    // 0x1c3d84: 0x6010  mfhi        $t4
    ctx->pc = 0x1c3d84u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1c3d88:
    // 0x1c3d88: 0xc7042  srl         $t6, $t4, 1
    ctx->pc = 0x1c3d88u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_1c3d8c:
    // 0x1c3d8c: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x1c3d8cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_1c3d90:
    // 0x1c3d90: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x1c3d90u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1c3d94:
    // 0x1c3d94: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1c3d94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1c3d98:
    // 0x1c3d98: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1c3d98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_1c3d9c:
    // 0x1c3d9c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c3d9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c3da0:
    // 0x1c3da0: 0xaccb0014  sw          $t3, 0x14($a2)
    ctx->pc = 0x1c3da0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 11));
label_1c3da4:
    // 0x1c3da4: 0x8cae0018  lw          $t6, 0x18($a1)
    ctx->pc = 0x1c3da4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c3da8:
    // 0x1c3da8: 0x31cbff00  andi        $t3, $t6, 0xFF00
    ctx->pc = 0x1c3da8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
label_1c3dac:
    // 0x1c3dac: 0x31cd00ff  andi        $t5, $t6, 0xFF
    ctx->pc = 0x1c3dacu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_1c3db0:
    // 0x1c3db0: 0xb6202  srl         $t4, $t3, 8
    ctx->pc = 0x1c3db0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_1c3db4:
    // 0x1c3db4: 0x1c45824  and         $t3, $t6, $a0
    ctx->pc = 0x1c3db4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_1c3db8:
    // 0x1c3db8: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1c3db8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_1c3dbc:
    // 0x1c3dbc: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1c3dbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1c3dc0:
    // 0x1c3dc0: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1c3dc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c3dc4:
    // 0x1c3dc4: 0x6c0019  multu       $v1, $t4
    ctx->pc = 0x1c3dc4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c3dc8:
    // 0x1c3dc8: 0x1c95824  and         $t3, $t6, $t1
    ctx->pc = 0x1c3dc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
label_1c3dcc:
    // 0x1c3dcc: 0x0  nop
    ctx->pc = 0x1c3dccu;
    // NOP
label_1c3dd0:
    // 0x1c3dd0: 0x6010  mfhi        $t4
    ctx->pc = 0x1c3dd0u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1c3dd4:
    // 0x1c3dd4: 0xc7042  srl         $t6, $t4, 1
    ctx->pc = 0x1c3dd4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_1c3dd8:
    // 0x1c3dd8: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x1c3dd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_1c3ddc:
    // 0x1c3ddc: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x1c3ddcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1c3de0:
    // 0x1c3de0: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1c3de0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1c3de4:
    // 0x1c3de4: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1c3de4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_1c3de8:
    // 0x1c3de8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c3de8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c3dec:
    // 0x1c3dec: 0xaccb0018  sw          $t3, 0x18($a2)
    ctx->pc = 0x1c3decu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 11));
label_1c3df0:
    // 0x1c3df0: 0x8cae001c  lw          $t6, 0x1C($a1)
    ctx->pc = 0x1c3df0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1c3df4:
    // 0x1c3df4: 0x31cbff00  andi        $t3, $t6, 0xFF00
    ctx->pc = 0x1c3df4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65280);
label_1c3df8:
    // 0x1c3df8: 0x31cd00ff  andi        $t5, $t6, 0xFF
    ctx->pc = 0x1c3df8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_1c3dfc:
    // 0x1c3dfc: 0xb6202  srl         $t4, $t3, 8
    ctx->pc = 0x1c3dfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
label_1c3e00:
    // 0x1c3e00: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1c3e04:
    // 0x1c3e04: 0x1c45824  and         $t3, $t6, $a0
    ctx->pc = 0x1c3e04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
label_1c3e08:
    // 0x1c3e08: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1c3e08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
label_1c3e0c:
    // 0x1c3e0c: 0xb5c02  srl         $t3, $t3, 16
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
label_1c3e10:
    // 0x1c3e10: 0x16c6021  addu        $t4, $t3, $t4
    ctx->pc = 0x1c3e10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c3e14:
    // 0x1c3e14: 0x6c0019  multu       $v1, $t4
    ctx->pc = 0x1c3e14u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c3e18:
    // 0x1c3e18: 0x1c95824  and         $t3, $t6, $t1
    ctx->pc = 0x1c3e18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & GPR_U64(ctx, 9));
label_1c3e1c:
    // 0x1c3e1c: 0x0  nop
    ctx->pc = 0x1c3e1cu;
    // NOP
label_1c3e20:
    // 0x1c3e20: 0x6010  mfhi        $t4
    ctx->pc = 0x1c3e20u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_1c3e24:
    // 0x1c3e24: 0xc7042  srl         $t6, $t4, 1
    ctx->pc = 0x1c3e24u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_1c3e28:
    // 0x1c3e28: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x1c3e28u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
label_1c3e2c:
    // 0x1c3e2c: 0xe6c00  sll         $t5, $t6, 16
    ctx->pc = 0x1c3e2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
label_1c3e30:
    // 0x1c3e30: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x1c3e30u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
label_1c3e34:
    // 0x1c3e34: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x1c3e34u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_1c3e38:
    // 0x1c3e38: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c3e38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c3e3c:
    // 0x1c3e3c: 0xaccb001c  sw          $t3, 0x1C($a2)
    ctx->pc = 0x1c3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 11));
label_1c3e40:
    // 0x1c3e40: 0x1540ff64  bnez        $t2, . + 4 + (-0x9C << 2)
label_1c3e44:
    if (ctx->pc == 0x1C3E44u) {
        ctx->pc = 0x1C3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E40u;
        // 0x1c3e44: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E48u;
        goto label_1c3e48;
    }
    ctx->pc = 0x1C3E40u;
    {
        const bool branch_taken_0x1c3e40 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E40u;
        // 0x1c3e44: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e40) {
            ctx->pc = 0x1C3BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3bd4;
        }
    }
    ctx->pc = 0x1C3E48u;
label_1c3e48:
    // 0x1c3e48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c3e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c3e4c:
    // 0x1c3e4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c3e4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c3e50:
    // 0x1c3e50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c3e50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c3e54:
    // 0x1c3e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c3e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c3e58:
    // 0x1c3e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3e5c:
    // 0x1c3e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3e60:
    // 0x1c3e60: 0x3e00008  jr          $ra
label_1c3e64:
    if (ctx->pc == 0x1C3E64u) {
        ctx->pc = 0x1C3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E60u;
        // 0x1c3e64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E68u;
        goto label_1c3e68;
    }
    ctx->pc = 0x1C3E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E60u;
        // 0x1c3e64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3E68u;
label_1c3e68:
    // 0x1c3e68: 0x0  nop
    ctx->pc = 0x1c3e68u;
    // NOP
label_1c3e6c:
    // 0x1c3e6c: 0x0  nop
    ctx->pc = 0x1c3e6cu;
    // NOP
label_1c3e70:
    // 0x1c3e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c3e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c3e74:
    // 0x1c3e74: 0x24021d70  addiu       $v0, $zero, 0x1D70
    ctx->pc = 0x1c3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7536));
label_1c3e78:
    // 0x1c3e78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c3e7c:
    // 0x1c3e7c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c3e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c3e80:
    // 0x1c3e80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c3e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c3e84:
    // 0x1c3e84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c3e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    ctx->pc = 0x1c3e88u;
    return;
}

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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b37a0u: goto label_1b37a0;
        case 0x1b37a4u: goto label_1b37a4;
        case 0x1b37a8u: goto label_1b37a8;
        case 0x1b37acu: goto label_1b37ac;
        case 0x1b37b0u: goto label_1b37b0;
        case 0x1b37b4u: goto label_1b37b4;
        case 0x1b37b8u: goto label_1b37b8;
        case 0x1b37bcu: goto label_1b37bc;
        case 0x1b37c0u: goto label_1b37c0;
        case 0x1b37c4u: goto label_1b37c4;
        case 0x1b37c8u: goto label_1b37c8;
        case 0x1b37ccu: goto label_1b37cc;
        case 0x1b37d0u: goto label_1b37d0;
        case 0x1b37d4u: goto label_1b37d4;
        case 0x1b37d8u: goto label_1b37d8;
        case 0x1b37dcu: goto label_1b37dc;
        case 0x1b37e0u: goto label_1b37e0;
        case 0x1b37e4u: goto label_1b37e4;
        case 0x1b37e8u: goto label_1b37e8;
        case 0x1b37ecu: goto label_1b37ec;
        case 0x1b37f0u: goto label_1b37f0;
        case 0x1b37f4u: goto label_1b37f4;
        case 0x1b37f8u: goto label_1b37f8;
        case 0x1b37fcu: goto label_1b37fc;
        case 0x1b3800u: goto label_1b3800;
        case 0x1b3804u: goto label_1b3804;
        case 0x1b3808u: goto label_1b3808;
        case 0x1b380cu: goto label_1b380c;
        case 0x1b3810u: goto label_1b3810;
        case 0x1b3814u: goto label_1b3814;
        case 0x1b3818u: goto label_1b3818;
        case 0x1b381cu: goto label_1b381c;
        case 0x1b3820u: goto label_1b3820;
        case 0x1b3824u: goto label_1b3824;
        case 0x1b3828u: goto label_1b3828;
        case 0x1b382cu: goto label_1b382c;
        case 0x1b3830u: goto label_1b3830;
        case 0x1b3834u: goto label_1b3834;
        case 0x1b3838u: goto label_1b3838;
        case 0x1b383cu: goto label_1b383c;
        case 0x1b3840u: goto label_1b3840;
        case 0x1b3844u: goto label_1b3844;
        case 0x1b3848u: goto label_1b3848;
        case 0x1b384cu: goto label_1b384c;
        case 0x1b3850u: goto label_1b3850;
        case 0x1b3854u: goto label_1b3854;
        case 0x1b3858u: goto label_1b3858;
        case 0x1b385cu: goto label_1b385c;
        case 0x1b3860u: goto label_1b3860;
        case 0x1b3864u: goto label_1b3864;
        case 0x1b3868u: goto label_1b3868;
        case 0x1b386cu: goto label_1b386c;
        case 0x1b3870u: goto label_1b3870;
        case 0x1b3874u: goto label_1b3874;
        case 0x1b3878u: goto label_1b3878;
        case 0x1b387cu: goto label_1b387c;
        case 0x1b3880u: goto label_1b3880;
        case 0x1b3884u: goto label_1b3884;
        case 0x1b3888u: goto label_1b3888;
        case 0x1b388cu: goto label_1b388c;
        case 0x1b3890u: goto label_1b3890;
        case 0x1b3894u: goto label_1b3894;
        case 0x1b3898u: goto label_1b3898;
        case 0x1b389cu: goto label_1b389c;
        case 0x1b38a0u: goto label_1b38a0;
        case 0x1b38a4u: goto label_1b38a4;
        case 0x1b38a8u: goto label_1b38a8;
        case 0x1b38acu: goto label_1b38ac;
        case 0x1b38b0u: goto label_1b38b0;
        case 0x1b38b4u: goto label_1b38b4;
        case 0x1b38b8u: goto label_1b38b8;
        case 0x1b38bcu: goto label_1b38bc;
        case 0x1b38c0u: goto label_1b38c0;
        case 0x1b38c4u: goto label_1b38c4;
        case 0x1b38c8u: goto label_1b38c8;
        case 0x1b38ccu: goto label_1b38cc;
        case 0x1b38d0u: goto label_1b38d0;
        case 0x1b38d4u: goto label_1b38d4;
        case 0x1b38d8u: goto label_1b38d8;
        case 0x1b38dcu: goto label_1b38dc;
        case 0x1b38e0u: goto label_1b38e0;
        case 0x1b38e4u: goto label_1b38e4;
        case 0x1b38e8u: goto label_1b38e8;
        case 0x1b38ecu: goto label_1b38ec;
        case 0x1b38f0u: goto label_1b38f0;
        case 0x1b38f4u: goto label_1b38f4;
        case 0x1b38f8u: goto label_1b38f8;
        case 0x1b38fcu: goto label_1b38fc;
        case 0x1b3900u: goto label_1b3900;
        case 0x1b3904u: goto label_1b3904;
        case 0x1b3908u: goto label_1b3908;
        case 0x1b390cu: goto label_1b390c;
        case 0x1b3910u: goto label_1b3910;
        case 0x1b3914u: goto label_1b3914;
        case 0x1b3918u: goto label_1b3918;
        case 0x1b391cu: goto label_1b391c;
        case 0x1b3920u: goto label_1b3920;
        case 0x1b3924u: goto label_1b3924;
        case 0x1b3928u: goto label_1b3928;
        case 0x1b392cu: goto label_1b392c;
        case 0x1b3930u: goto label_1b3930;
        case 0x1b3934u: goto label_1b3934;
        case 0x1b3938u: goto label_1b3938;
        case 0x1b393cu: goto label_1b393c;
        case 0x1b3940u: goto label_1b3940;
        case 0x1b3944u: goto label_1b3944;
        case 0x1b3948u: goto label_1b3948;
        case 0x1b394cu: goto label_1b394c;
        case 0x1b3950u: goto label_1b3950;
        case 0x1b3954u: goto label_1b3954;
        case 0x1b3958u: goto label_1b3958;
        case 0x1b395cu: goto label_1b395c;
        case 0x1b3960u: goto label_1b3960;
        case 0x1b3964u: goto label_1b3964;
        case 0x1b3968u: goto label_1b3968;
        case 0x1b396cu: goto label_1b396c;
        case 0x1b3970u: goto label_1b3970;
        case 0x1b3974u: goto label_1b3974;
        case 0x1b3978u: goto label_1b3978;
        case 0x1b397cu: goto label_1b397c;
        case 0x1b3980u: goto label_1b3980;
        case 0x1b3984u: goto label_1b3984;
        case 0x1b3988u: goto label_1b3988;
        case 0x1b398cu: goto label_1b398c;
        case 0x1b3990u: goto label_1b3990;
        case 0x1b3994u: goto label_1b3994;
        case 0x1b3998u: goto label_1b3998;
        case 0x1b399cu: goto label_1b399c;
        case 0x1b39a0u: goto label_1b39a0;
        case 0x1b39a4u: goto label_1b39a4;
        case 0x1b39a8u: goto label_1b39a8;
        case 0x1b39acu: goto label_1b39ac;
        case 0x1b39b0u: goto label_1b39b0;
        case 0x1b39b4u: goto label_1b39b4;
        case 0x1b39b8u: goto label_1b39b8;
        case 0x1b39bcu: goto label_1b39bc;
        case 0x1b39c0u: goto label_1b39c0;
        case 0x1b39c4u: goto label_1b39c4;
        case 0x1b39c8u: goto label_1b39c8;
        case 0x1b39ccu: goto label_1b39cc;
        case 0x1b39d0u: goto label_1b39d0;
        case 0x1b39d4u: goto label_1b39d4;
        case 0x1b39d8u: goto label_1b39d8;
        case 0x1b39dcu: goto label_1b39dc;
        case 0x1b39e0u: goto label_1b39e0;
        case 0x1b39e4u: goto label_1b39e4;
        case 0x1b39e8u: goto label_1b39e8;
        case 0x1b39ecu: goto label_1b39ec;
        case 0x1b39f0u: goto label_1b39f0;
        case 0x1b39f4u: goto label_1b39f4;
        case 0x1b39f8u: goto label_1b39f8;
        case 0x1b39fcu: goto label_1b39fc;
        case 0x1b3a00u: goto label_1b3a00;
        case 0x1b3a04u: goto label_1b3a04;
        case 0x1b3a08u: goto label_1b3a08;
        case 0x1b3a0cu: goto label_1b3a0c;
        case 0x1b3a10u: goto label_1b3a10;
        case 0x1b3a14u: goto label_1b3a14;
        case 0x1b3a18u: goto label_1b3a18;
        case 0x1b3a1cu: goto label_1b3a1c;
        case 0x1b3a20u: goto label_1b3a20;
        case 0x1b3a24u: goto label_1b3a24;
        case 0x1b3a28u: goto label_1b3a28;
        case 0x1b3a2cu: goto label_1b3a2c;
        case 0x1b3a30u: goto label_1b3a30;
        case 0x1b3a34u: goto label_1b3a34;
        case 0x1b3a38u: goto label_1b3a38;
        case 0x1b3a3cu: goto label_1b3a3c;
        case 0x1b3a40u: goto label_1b3a40;
        case 0x1b3a44u: goto label_1b3a44;
        case 0x1b3a48u: goto label_1b3a48;
        case 0x1b3a4cu: goto label_1b3a4c;
        case 0x1b3a50u: goto label_1b3a50;
        case 0x1b3a54u: goto label_1b3a54;
        case 0x1b3a58u: goto label_1b3a58;
        case 0x1b3a5cu: goto label_1b3a5c;
        case 0x1b3a60u: goto label_1b3a60;
        case 0x1b3a64u: goto label_1b3a64;
        case 0x1b3a68u: goto label_1b3a68;
        case 0x1b3a6cu: goto label_1b3a6c;
        case 0x1b3a70u: goto label_1b3a70;
        case 0x1b3a74u: goto label_1b3a74;
        case 0x1b3a78u: goto label_1b3a78;
        case 0x1b3a7cu: goto label_1b3a7c;
        case 0x1b3a80u: goto label_1b3a80;
        case 0x1b3a84u: goto label_1b3a84;
        case 0x1b3a88u: goto label_1b3a88;
        case 0x1b3a8cu: goto label_1b3a8c;
        case 0x1b3a90u: goto label_1b3a90;
        case 0x1b3a94u: goto label_1b3a94;
        case 0x1b3a98u: goto label_1b3a98;
        case 0x1b3a9cu: goto label_1b3a9c;
        case 0x1b3aa0u: goto label_1b3aa0;
        case 0x1b3aa4u: goto label_1b3aa4;
        case 0x1b3aa8u: goto label_1b3aa8;
        case 0x1b3aacu: goto label_1b3aac;
        case 0x1b3ab0u: goto label_1b3ab0;
        case 0x1b3ab4u: goto label_1b3ab4;
        case 0x1b3ab8u: goto label_1b3ab8;
        case 0x1b3abcu: goto label_1b3abc;
        case 0x1b3ac0u: goto label_1b3ac0;
        case 0x1b3ac4u: goto label_1b3ac4;
        case 0x1b3ac8u: goto label_1b3ac8;
        case 0x1b3accu: goto label_1b3acc;
        case 0x1b3ad0u: goto label_1b3ad0;
        case 0x1b3ad4u: goto label_1b3ad4;
        case 0x1b3ad8u: goto label_1b3ad8;
        case 0x1b3adcu: goto label_1b3adc;
        case 0x1b3ae0u: goto label_1b3ae0;
        case 0x1b3ae4u: goto label_1b3ae4;
        case 0x1b3ae8u: goto label_1b3ae8;
        case 0x1b3aecu: goto label_1b3aec;
        case 0x1b3af0u: goto label_1b3af0;
        case 0x1b3af4u: goto label_1b3af4;
        case 0x1b3af8u: goto label_1b3af8;
        case 0x1b3afcu: goto label_1b3afc;
        case 0x1b3b00u: goto label_1b3b00;
        case 0x1b3b04u: goto label_1b3b04;
        case 0x1b3b08u: goto label_1b3b08;
        case 0x1b3b0cu: goto label_1b3b0c;
        case 0x1b3b10u: goto label_1b3b10;
        case 0x1b3b14u: goto label_1b3b14;
        case 0x1b3b18u: goto label_1b3b18;
        case 0x1b3b1cu: goto label_1b3b1c;
        case 0x1b3b20u: goto label_1b3b20;
        case 0x1b3b24u: goto label_1b3b24;
        case 0x1b3b28u: goto label_1b3b28;
        case 0x1b3b2cu: goto label_1b3b2c;
        case 0x1b3b30u: goto label_1b3b30;
        case 0x1b3b34u: goto label_1b3b34;
        case 0x1b3b38u: goto label_1b3b38;
        case 0x1b3b3cu: goto label_1b3b3c;
        case 0x1b3b40u: goto label_1b3b40;
        case 0x1b3b44u: goto label_1b3b44;
        case 0x1b3b48u: goto label_1b3b48;
        case 0x1b3b4cu: goto label_1b3b4c;
        case 0x1b3b50u: goto label_1b3b50;
        case 0x1b3b54u: goto label_1b3b54;
        case 0x1b3b58u: goto label_1b3b58;
        case 0x1b3b5cu: goto label_1b3b5c;
        case 0x1b3b60u: goto label_1b3b60;
        case 0x1b3b64u: goto label_1b3b64;
        case 0x1b3b68u: goto label_1b3b68;
        case 0x1b3b6cu: goto label_1b3b6c;
        case 0x1b3b70u: goto label_1b3b70;
        case 0x1b3b74u: goto label_1b3b74;
        case 0x1b3b78u: goto label_1b3b78;
        case 0x1b3b7cu: goto label_1b3b7c;
        case 0x1b3b80u: goto label_1b3b80;
        case 0x1b3b84u: goto label_1b3b84;
        case 0x1b3b88u: goto label_1b3b88;
        case 0x1b3b8cu: goto label_1b3b8c;
        case 0x1b3b90u: goto label_1b3b90;
        case 0x1b3b94u: goto label_1b3b94;
        case 0x1b3b98u: goto label_1b3b98;
        case 0x1b3b9cu: goto label_1b3b9c;
        case 0x1b3ba0u: goto label_1b3ba0;
        case 0x1b3ba4u: goto label_1b3ba4;
        case 0x1b3ba8u: goto label_1b3ba8;
        case 0x1b3bacu: goto label_1b3bac;
        case 0x1b3bb0u: goto label_1b3bb0;
        case 0x1b3bb4u: goto label_1b3bb4;
        case 0x1b3bb8u: goto label_1b3bb8;
        case 0x1b3bbcu: goto label_1b3bbc;
        case 0x1b3bc0u: goto label_1b3bc0;
        case 0x1b3bc4u: goto label_1b3bc4;
        case 0x1b3bc8u: goto label_1b3bc8;
        case 0x1b3bccu: goto label_1b3bcc;
        case 0x1b3bd0u: goto label_1b3bd0;
        case 0x1b3bd4u: goto label_1b3bd4;
        case 0x1b3bd8u: goto label_1b3bd8;
        case 0x1b3bdcu: goto label_1b3bdc;
        case 0x1b3be0u: goto label_1b3be0;
        case 0x1b3be4u: goto label_1b3be4;
        case 0x1b3be8u: goto label_1b3be8;
        case 0x1b3becu: goto label_1b3bec;
        case 0x1b3bf0u: goto label_1b3bf0;
        case 0x1b3bf4u: goto label_1b3bf4;
        case 0x1b3bf8u: goto label_1b3bf8;
        case 0x1b3bfcu: goto label_1b3bfc;
        case 0x1b3c00u: goto label_1b3c00;
        case 0x1b3c04u: goto label_1b3c04;
        case 0x1b3c08u: goto label_1b3c08;
        case 0x1b3c0cu: goto label_1b3c0c;
        case 0x1b3c10u: goto label_1b3c10;
        case 0x1b3c14u: goto label_1b3c14;
        case 0x1b3c18u: goto label_1b3c18;
        case 0x1b3c1cu: goto label_1b3c1c;
        case 0x1b3c20u: goto label_1b3c20;
        case 0x1b3c24u: goto label_1b3c24;
        case 0x1b3c28u: goto label_1b3c28;
        case 0x1b3c2cu: goto label_1b3c2c;
        case 0x1b3c30u: goto label_1b3c30;
        case 0x1b3c34u: goto label_1b3c34;
        case 0x1b3c38u: goto label_1b3c38;
        case 0x1b3c3cu: goto label_1b3c3c;
        case 0x1b3c40u: goto label_1b3c40;
        case 0x1b3c44u: goto label_1b3c44;
        case 0x1b3c48u: goto label_1b3c48;
        case 0x1b3c4cu: goto label_1b3c4c;
        case 0x1b3c50u: goto label_1b3c50;
        case 0x1b3c54u: goto label_1b3c54;
        case 0x1b3c58u: goto label_1b3c58;
        case 0x1b3c5cu: goto label_1b3c5c;
        case 0x1b3c60u: goto label_1b3c60;
        case 0x1b3c64u: goto label_1b3c64;
        case 0x1b3c68u: goto label_1b3c68;
        case 0x1b3c6cu: goto label_1b3c6c;
        case 0x1b3c70u: goto label_1b3c70;
        case 0x1b3c74u: goto label_1b3c74;
        case 0x1b3c78u: goto label_1b3c78;
        case 0x1b3c7cu: goto label_1b3c7c;
        case 0x1b3c80u: goto label_1b3c80;
        case 0x1b3c84u: goto label_1b3c84;
        case 0x1b3c88u: goto label_1b3c88;
        case 0x1b3c8cu: goto label_1b3c8c;
        case 0x1b3c90u: goto label_1b3c90;
        case 0x1b3c94u: goto label_1b3c94;
        case 0x1b3c98u: goto label_1b3c98;
        case 0x1b3c9cu: goto label_1b3c9c;
        case 0x1b3ca0u: goto label_1b3ca0;
        case 0x1b3ca4u: goto label_1b3ca4;
        case 0x1b3ca8u: goto label_1b3ca8;
        case 0x1b3cacu: goto label_1b3cac;
        case 0x1b3cb0u: goto label_1b3cb0;
        case 0x1b3cb4u: goto label_1b3cb4;
        case 0x1b3cb8u: goto label_1b3cb8;
        case 0x1b3cbcu: goto label_1b3cbc;
        case 0x1b3cc0u: goto label_1b3cc0;
        case 0x1b3cc4u: goto label_1b3cc4;
        case 0x1b3cc8u: goto label_1b3cc8;
        case 0x1b3cccu: goto label_1b3ccc;
        case 0x1b3cd0u: goto label_1b3cd0;
        case 0x1b3cd4u: goto label_1b3cd4;
        case 0x1b3cd8u: goto label_1b3cd8;
        case 0x1b3cdcu: goto label_1b3cdc;
        case 0x1b3ce0u: goto label_1b3ce0;
        case 0x1b3ce4u: goto label_1b3ce4;
        case 0x1b3ce8u: goto label_1b3ce8;
        case 0x1b3cecu: goto label_1b3cec;
        case 0x1b3cf0u: goto label_1b3cf0;
        case 0x1b3cf4u: goto label_1b3cf4;
        case 0x1b3cf8u: goto label_1b3cf8;
        case 0x1b3cfcu: goto label_1b3cfc;
        case 0x1b3d00u: goto label_1b3d00;
        case 0x1b3d04u: goto label_1b3d04;
        case 0x1b3d08u: goto label_1b3d08;
        case 0x1b3d0cu: goto label_1b3d0c;
        case 0x1b3d10u: goto label_1b3d10;
        case 0x1b3d14u: goto label_1b3d14;
        case 0x1b3d18u: goto label_1b3d18;
        case 0x1b3d1cu: goto label_1b3d1c;
        case 0x1b3d20u: goto label_1b3d20;
        case 0x1b3d24u: goto label_1b3d24;
        case 0x1b3d28u: goto label_1b3d28;
        case 0x1b3d2cu: goto label_1b3d2c;
        case 0x1b3d30u: goto label_1b3d30;
        case 0x1b3d34u: goto label_1b3d34;
        case 0x1b3d38u: goto label_1b3d38;
        case 0x1b3d3cu: goto label_1b3d3c;
        case 0x1b3d40u: goto label_1b3d40;
        case 0x1b3d44u: goto label_1b3d44;
        case 0x1b3d48u: goto label_1b3d48;
        case 0x1b3d4cu: goto label_1b3d4c;
        case 0x1b3d50u: goto label_1b3d50;
        case 0x1b3d54u: goto label_1b3d54;
        case 0x1b3d58u: goto label_1b3d58;
        case 0x1b3d5cu: goto label_1b3d5c;
        case 0x1b3d60u: goto label_1b3d60;
        case 0x1b3d64u: goto label_1b3d64;
        case 0x1b3d68u: goto label_1b3d68;
        case 0x1b3d6cu: goto label_1b3d6c;
        case 0x1b3d70u: goto label_1b3d70;
        case 0x1b3d74u: goto label_1b3d74;
        case 0x1b3d78u: goto label_1b3d78;
        case 0x1b3d7cu: goto label_1b3d7c;
        case 0x1b3d80u: goto label_1b3d80;
        case 0x1b3d84u: goto label_1b3d84;
        case 0x1b3d88u: goto label_1b3d88;
        case 0x1b3d8cu: goto label_1b3d8c;
        case 0x1b3d90u: goto label_1b3d90;
        case 0x1b3d94u: goto label_1b3d94;
        case 0x1b3d98u: goto label_1b3d98;
        case 0x1b3d9cu: goto label_1b3d9c;
        case 0x1b3da0u: goto label_1b3da0;
        case 0x1b3da4u: goto label_1b3da4;
        case 0x1b3da8u: goto label_1b3da8;
        case 0x1b3dacu: goto label_1b3dac;
        case 0x1b3db0u: goto label_1b3db0;
        case 0x1b3db4u: goto label_1b3db4;
        case 0x1b3db8u: goto label_1b3db8;
        case 0x1b3dbcu: goto label_1b3dbc;
        case 0x1b3dc0u: goto label_1b3dc0;
        case 0x1b3dc4u: goto label_1b3dc4;
        case 0x1b3dc8u: goto label_1b3dc8;
        case 0x1b3dccu: goto label_1b3dcc;
        case 0x1b3dd0u: goto label_1b3dd0;
        case 0x1b3dd4u: goto label_1b3dd4;
        case 0x1b3dd8u: goto label_1b3dd8;
        case 0x1b3ddcu: goto label_1b3ddc;
        case 0x1b3de0u: goto label_1b3de0;
        case 0x1b3de4u: goto label_1b3de4;
        case 0x1b3de8u: goto label_1b3de8;
        case 0x1b3decu: goto label_1b3dec;
        case 0x1b3df0u: goto label_1b3df0;
        case 0x1b3df4u: goto label_1b3df4;
        case 0x1b3df8u: goto label_1b3df8;
        case 0x1b3dfcu: goto label_1b3dfc;
        case 0x1b3e00u: goto label_1b3e00;
        case 0x1b3e04u: goto label_1b3e04;
        case 0x1b3e08u: goto label_1b3e08;
        case 0x1b3e0cu: goto label_1b3e0c;
        case 0x1b3e10u: goto label_1b3e10;
        case 0x1b3e14u: goto label_1b3e14;
        case 0x1b3e18u: goto label_1b3e18;
        case 0x1b3e1cu: goto label_1b3e1c;
        case 0x1b3e20u: goto label_1b3e20;
        case 0x1b3e24u: goto label_1b3e24;
        case 0x1b3e28u: goto label_1b3e28;
        case 0x1b3e2cu: goto label_1b3e2c;
        case 0x1b3e30u: goto label_1b3e30;
        case 0x1b3e34u: goto label_1b3e34;
        case 0x1b3e38u: goto label_1b3e38;
        case 0x1b3e3cu: goto label_1b3e3c;
        case 0x1b3e40u: goto label_1b3e40;
        case 0x1b3e44u: goto label_1b3e44;
        case 0x1b3e48u: goto label_1b3e48;
        case 0x1b3e4cu: goto label_1b3e4c;
        case 0x1b3e50u: goto label_1b3e50;
        case 0x1b3e54u: goto label_1b3e54;
        case 0x1b3e58u: goto label_1b3e58;
        case 0x1b3e5cu: goto label_1b3e5c;
        case 0x1b3e60u: goto label_1b3e60;
        case 0x1b3e64u: goto label_1b3e64;
        case 0x1b3e68u: goto label_1b3e68;
        case 0x1b3e6cu: goto label_1b3e6c;
        case 0x1b3e70u: goto label_1b3e70;
        case 0x1b3e74u: goto label_1b3e74;
        case 0x1b3e78u: goto label_1b3e78;
        case 0x1b3e7cu: goto label_1b3e7c;
        case 0x1b3e80u: goto label_1b3e80;
        case 0x1b3e84u: goto label_1b3e84;
        case 0x1b3e88u: goto label_1b3e88;
        case 0x1b3e8cu: goto label_1b3e8c;
        case 0x1b3e90u: goto label_1b3e90;
        case 0x1b3e94u: goto label_1b3e94;
        case 0x1b3e98u: goto label_1b3e98;
        case 0x1b3e9cu: goto label_1b3e9c;
        case 0x1b3ea0u: goto label_1b3ea0;
        case 0x1b3ea4u: goto label_1b3ea4;
        case 0x1b3ea8u: goto label_1b3ea8;
        case 0x1b3eacu: goto label_1b3eac;
        case 0x1b3eb0u: goto label_1b3eb0;
        case 0x1b3eb4u: goto label_1b3eb4;
        case 0x1b3eb8u: goto label_1b3eb8;
        case 0x1b3ebcu: goto label_1b3ebc;
        case 0x1b3ec0u: goto label_1b3ec0;
        case 0x1b3ec4u: goto label_1b3ec4;
        case 0x1b3ec8u: goto label_1b3ec8;
        case 0x1b3eccu: goto label_1b3ecc;
        case 0x1b3ed0u: goto label_1b3ed0;
        case 0x1b3ed4u: goto label_1b3ed4;
        case 0x1b3ed8u: goto label_1b3ed8;
        case 0x1b3edcu: goto label_1b3edc;
        case 0x1b3ee0u: goto label_1b3ee0;
        case 0x1b3ee4u: goto label_1b3ee4;
        case 0x1b3ee8u: goto label_1b3ee8;
        case 0x1b3eecu: goto label_1b3eec;
        case 0x1b3ef0u: goto label_1b3ef0;
        case 0x1b3ef4u: goto label_1b3ef4;
        case 0x1b3ef8u: goto label_1b3ef8;
        case 0x1b3efcu: goto label_1b3efc;
        case 0x1b3f00u: goto label_1b3f00;
        case 0x1b3f04u: goto label_1b3f04;
        case 0x1b3f08u: goto label_1b3f08;
        case 0x1b3f0cu: goto label_1b3f0c;
        case 0x1b3f10u: goto label_1b3f10;
        case 0x1b3f14u: goto label_1b3f14;
        case 0x1b3f18u: goto label_1b3f18;
        case 0x1b3f1cu: goto label_1b3f1c;
        case 0x1b3f20u: goto label_1b3f20;
        case 0x1b3f24u: goto label_1b3f24;
        case 0x1b3f28u: goto label_1b3f28;
        case 0x1b3f2cu: goto label_1b3f2c;
        case 0x1b3f30u: goto label_1b3f30;
        case 0x1b3f34u: goto label_1b3f34;
        case 0x1b3f38u: goto label_1b3f38;
        case 0x1b3f3cu: goto label_1b3f3c;
        case 0x1b3f40u: goto label_1b3f40;
        case 0x1b3f44u: goto label_1b3f44;
        case 0x1b3f48u: goto label_1b3f48;
        case 0x1b3f4cu: goto label_1b3f4c;
        case 0x1b3f50u: goto label_1b3f50;
        case 0x1b3f54u: goto label_1b3f54;
        case 0x1b3f58u: goto label_1b3f58;
        case 0x1b3f5cu: goto label_1b3f5c;
        case 0x1b3f60u: goto label_1b3f60;
        case 0x1b3f64u: goto label_1b3f64;
        case 0x1b3f68u: goto label_1b3f68;
        case 0x1b3f6cu: goto label_1b3f6c;
        default: return;
    }

label_1b37a0:
    // 0x1b37a0: 0x3c044301  lui         $a0, 0x4301
    ctx->pc = 0x1b37a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17153 << 16));
label_1b37a4:
    // 0x1b37a4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1b37a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b37a8:
    // 0x1b37a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b37ac:
    if (ctx->pc == 0x1B37ACu) {
        ctx->pc = 0x1B37B0u;
        goto label_1b37b0;
    }
    ctx->pc = 0x1B37A8u;
    {
        const bool branch_taken_0x1b37a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b37a8) {
            ctx->pc = 0x1B37C8u;
            goto label_1b37c8;
        }
    }
    ctx->pc = 0x1B37B0u;
label_1b37b0:
    // 0x1b37b0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b37b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_1b37b4:
    // 0x1b37b4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b37b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
label_1b37b8:
    // 0x1b37b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b37b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b37bc:
    // 0x1b37bc: 0x10000022  b           . + 4 + (0x22 << 2)
label_1b37c0:
    if (ctx->pc == 0x1B37C0u) {
        ctx->pc = 0x1B37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37BCu;
        // 0x1b37c0: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37C4u;
        goto label_1b37c4;
    }
    ctx->pc = 0x1B37BCu;
    {
        const bool branch_taken_0x1b37bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B37C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37BCu;
        // 0x1b37c0: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37bc) {
            ctx->pc = 0x1B3848u;
            goto label_1b3848;
        }
    }
    ctx->pc = 0x1B37C4u;
label_1b37c4:
    // 0x1b37c4: 0x0  nop
    ctx->pc = 0x1b37c4u;
    // NOP
label_1b37c8:
    // 0x1b37c8: 0x14c40021  bne         $a2, $a0, . + 4 + (0x21 << 2)
label_1b37cc:
    if (ctx->pc == 0x1B37CCu) {
        ctx->pc = 0x1B37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37C8u;
        // 0x1b37cc: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37D0u;
        goto label_1b37d0;
    }
    ctx->pc = 0x1B37C8u;
    {
        const bool branch_taken_0x1b37c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37C8u;
        // 0x1b37cc: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37c8) {
            ctx->pc = 0x1B3850u;
            goto label_1b3850;
        }
    }
    ctx->pc = 0x1B37D0u;
label_1b37d0:
    // 0x1b37d0: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x1b37d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
label_1b37d4:
    // 0x1b37d4: 0x3421aa3c  ori         $at, $at, 0xAA3C
    ctx->pc = 0x1b37d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43580);
label_1b37d8:
    // 0x1b37d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b37d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b37dc:
    // 0x1b37dc: 0x46082041  sub.s       $f1, $f4, $f8
    ctx->pc = 0x1b37dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
label_1b37e0:
    // 0x1b37e0: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x1b37e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_1b37e4:
    // 0x1b37e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b37e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b37e8:
    // 0x1b37e8: 0x0  nop
    ctx->pc = 0x1b37e8u;
    // NOP
label_1b37ec:
    // 0x1b37ec: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1b37f0:
    if (ctx->pc == 0x1B37F0u) {
        ctx->pc = 0x1B37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37ECu;
        // 0x1b37f0: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B37F4u;
        goto label_1b37f4;
    }
    ctx->pc = 0x1B37ECu;
    {
        const bool branch_taken_0x1b37ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37ECu;
        // 0x1b37f0: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b37ec) {
            ctx->pc = 0x1B3854u;
            goto label_1b3854;
        }
    }
    ctx->pc = 0x1B37F4u;
label_1b37f4:
    // 0x1b37f4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b37f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_1b37f8:
    // 0x1b37f8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b37f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
label_1b37fc:
    // 0x1b37fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b37fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3800:
    // 0x1b3800: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b3804:
    if (ctx->pc == 0x1B3804u) {
        ctx->pc = 0x1B3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3800u;
        // 0x1b3804: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3808u;
        goto label_1b3808;
    }
    ctx->pc = 0x1B3800u;
    {
        const bool branch_taken_0x1b3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3800u;
        // 0x1b3804: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3800) {
            ctx->pc = 0x1B3848u;
            goto label_1b3848;
        }
    }
    ctx->pc = 0x1B3808u;
label_1b3808:
    // 0x1b3808: 0x3c0442fc  lui         $a0, 0x42FC
    ctx->pc = 0x1b3808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17148 << 16));
label_1b380c:
    // 0x1b380c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x1b380cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b3810:
    // 0x1b3810: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1b3814:
    if (ctx->pc == 0x1B3814u) {
        ctx->pc = 0x1B3818u;
        goto label_1b3818;
    }
    ctx->pc = 0x1B3810u;
    {
        const bool branch_taken_0x1b3810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3810) {
            ctx->pc = 0x1B3834u;
            goto label_1b3834;
        }
    }
    ctx->pc = 0x1B3818u;
label_1b3818:
    // 0x1b3818: 0x14c4000d  bne         $a2, $a0, . + 4 + (0xD << 2)
label_1b381c:
    if (ctx->pc == 0x1B381Cu) {
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3818u;
        // 0x1b381c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3820u;
        goto label_1b3820;
    }
    ctx->pc = 0x1B3818u;
    {
        const bool branch_taken_0x1b3818 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3818u;
        // 0x1b381c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3818) {
            ctx->pc = 0x1B3850u;
            goto label_1b3850;
        }
    }
    ctx->pc = 0x1B3820u;
label_1b3820:
    // 0x1b3820: 0x46082001  sub.s       $f0, $f4, $f8
    ctx->pc = 0x1b3820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
label_1b3824:
    // 0x1b3824: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x1b3824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3828:
    // 0x1b3828: 0x0  nop
    ctx->pc = 0x1b3828u;
    // NOP
label_1b382c:
    // 0x1b382c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1b3830:
    if (ctx->pc == 0x1B3830u) {
        ctx->pc = 0x1B3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B382Cu;
        // 0x1b3830: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3834u;
        goto label_1b3834;
    }
    ctx->pc = 0x1B382Cu;
    {
        const bool branch_taken_0x1b382c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B382Cu;
        // 0x1b3830: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b382c) {
            ctx->pc = 0x1B3854u;
            goto label_1b3854;
        }
    }
    ctx->pc = 0x1B3834u;
label_1b3834:
    // 0x1b3834: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x1b3834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
label_1b3838:
    // 0x1b3838: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x1b3838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
label_1b383c:
    // 0x1b383c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b383cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3840:
    // 0x1b3840: 0x0  nop
    ctx->pc = 0x1b3840u;
    // NOP
label_1b3844:
    // 0x1b3844: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x1b3844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1b3848:
    // 0x1b3848: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1b384c:
    if (ctx->pc == 0x1B384Cu) {
        ctx->pc = 0x1B384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3848u;
        // 0x1b384c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3850u;
        goto label_1b3850;
    }
    ctx->pc = 0x1B3848u;
    {
        const bool branch_taken_0x1b3848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3848u;
        // 0x1b384c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3848) {
            ctx->pc = 0x1B39F4u;
            goto label_1b39f4;
        }
    }
    ctx->pc = 0x1B3850u;
label_1b3850:
    // 0x1b3850: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x1b3850u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
label_1b3854:
    // 0x1b3854: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1b3854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b3858:
    // 0x1b3858: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1b385c:
    if (ctx->pc == 0x1B385Cu) {
        ctx->pc = 0x1B385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3858u;
        // 0x1b385c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3860u;
        goto label_1b3860;
    }
    ctx->pc = 0x1B3858u;
    {
        const bool branch_taken_0x1b3858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3858u;
        // 0x1b385c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3858) {
            ctx->pc = 0x1B38C0u;
            goto label_1b38c0;
        }
    }
    ctx->pc = 0x1B3860u;
label_1b3860:
    // 0x1b3860: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1b3860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
label_1b3864:
    // 0x1b3864: 0x2463ff82  addiu       $v1, $v1, -0x7E
    ctx->pc = 0x1b3864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967170));
label_1b3868:
    // 0x1b3868: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x1b3868u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_1b386c:
    // 0x1b386c: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x1b386cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b3870:
    // 0x1b3870: 0x815c2  srl         $v0, $t0, 23
    ctx->pc = 0x1b3870u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 23));
label_1b3874:
    // 0x1b3874: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b3878:
    // 0x1b3878: 0x2447ff81  addiu       $a3, $v0, -0x7F
    ctx->pc = 0x1b3878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
label_1b387c:
    // 0x1b387c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_1b3880:
    // 0x1b3880: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3884:
    // 0x1b3884: 0xe31007  srav        $v0, $v1, $a3
    ctx->pc = 0x1b3884u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_1b3888:
    // 0x1b3888: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1b3888u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_1b388c:
    // 0x1b388c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x1b388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_1b3890:
    // 0x1b3890: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b3890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3894:
    // 0x1b3894: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x1b3894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
label_1b3898:
    // 0x1b3898: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1b3898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1b389c:
    // 0x1b389c: 0x460c4201  sub.s       $f8, $f8, $f12
    ctx->pc = 0x1b389cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
label_1b38a0:
    // 0x1b38a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b38a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1b38a4:
    // 0x1b38a4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1b38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1b38a8:
    // 0x1b38a8: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x1b38a8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b38ac:
    // 0x1b38ac: 0x434007  srav        $t0, $v1, $v0
    ctx->pc = 0x1b38acu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1b38b0:
    // 0x1b38b0: 0x82023  negu        $a0, $t0
    ctx->pc = 0x1b38b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_1b38b4:
    // 0x1b38b4: 0x46083800  add.s       $f0, $f7, $f8
    ctx->pc = 0x1b38b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_1b38b8:
    // 0x1b38b8: 0x85400b  movn        $t0, $a0, $a1
    ctx->pc = 0x1b38b8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
label_1b38bc:
    // 0x1b38bc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1b38bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_1b38c0:
    // 0x1b38c0: 0x0  nop
    ctx->pc = 0x1b38c0u;
    // NOP
label_1b38c4:
    // 0x1b38c4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1b38c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b38c8:
    // 0x1b38c8: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x1b38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_1b38cc:
    // 0x1b38cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b38ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b38d0:
    // 0x1b38d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1b38d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b38d4:
    // 0x1b38d4: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x1b38d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
label_1b38d8:
    // 0x1b38d8: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x1b38d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
label_1b38dc:
    // 0x1b38dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b38dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b38e0:
    // 0x1b38e0: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x1b38e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
label_1b38e4:
    // 0x1b38e4: 0x34217218  ori         $at, $at, 0x7218
    ctx->pc = 0x1b38e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29208);
label_1b38e8:
    // 0x1b38e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b38e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b38ec:
    // 0x1b38ec: 0x46086041  sub.s       $f1, $f12, $f8
    ctx->pc = 0x1b38ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
label_1b38f0:
    // 0x1b38f0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b38f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_1b38f4:
    // 0x1b38f4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b38f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b38f8:
    // 0x1b38f8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b38f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1b38fc:
    // 0x1b38fc: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x1b38fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
label_1b3900:
    // 0x1b3900: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x1b3900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
label_1b3904:
    // 0x1b3904: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3908:
    // 0x1b3908: 0x0  nop
    ctx->pc = 0x1b3908u;
    // NOP
label_1b390c:
    // 0x1b390c: 0x46036402  mul.s       $f16, $f12, $f3
    ctx->pc = 0x1b390cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_1b3910:
    // 0x1b3910: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x1b3910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
label_1b3914:
    // 0x1b3914: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x1b3914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
label_1b3918:
    // 0x1b3918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b391c:
    // 0x1b391c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x1b391cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_1b3920:
    // 0x1b3920: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x1b3920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
label_1b3924:
    // 0x1b3924: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x1b3924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
label_1b3928:
    // 0x1b3928: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b3928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b392c:
    // 0x1b392c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x1b392cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_1b3930:
    // 0x1b3930: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x1b3930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
label_1b3934:
    // 0x1b3934: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1b3934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
label_1b3938:
    // 0x1b3938: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b3938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1b393c:
    // 0x1b393c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
label_1b3940:
    // 0x1b3940: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x1b3940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
label_1b3944:
    // 0x1b3944: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b3944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b3948:
    // 0x1b3948: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b3948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1b394c:
    // 0x1b394c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b394cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b3950:
    // 0x1b3950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b3954:
    // 0x1b3954: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b3954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1b3958:
    // 0x1b3958: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b3958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_1b395c:
    // 0x1b395c: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x1b395cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b3960:
    // 0x1b3960: 0x460d8100  add.s       $f4, $f16, $f13
    ctx->pc = 0x1b3960u;
    ctx->f[4] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
label_1b3964:
    // 0x1b3964: 0x46042302  mul.s       $f12, $f4, $f4
    ctx->pc = 0x1b3964u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1b3968:
    // 0x1b3968: 0x46102041  sub.s       $f1, $f4, $f16
    ctx->pc = 0x1b3968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[16]);
label_1b396c:
    // 0x1b396c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b396cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b3970:
    // 0x1b3970: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x1b3970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
label_1b3974:
    // 0x1b3974: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1b3974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1b3978:
    // 0x1b3978: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x1b3978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1b397c:
    // 0x1b397c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b397cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b3980:
    // 0x1b3980: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x1b3980u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b3984:
    // 0x1b3984: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1b3984u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_1b3988:
    // 0x1b3988: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b3988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b398c:
    // 0x1b398c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1b398cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_1b3990:
    // 0x1b3990: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b3990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b3994:
    // 0x1b3994: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b3994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1b3998:
    // 0x1b3998: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b3998u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b399c:
    // 0x1b399c: 0x46002181  sub.s       $f6, $f4, $f0
    ctx->pc = 0x1b399cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_1b39a0:
    // 0x1b39a0: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x1b39a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_1b39a4:
    // 0x1b39a4: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x1b39a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_1b39a8:
    // 0x1b39a8: 0x0  nop
    ctx->pc = 0x1b39a8u;
    // NOP
label_1b39ac:
    // 0x1b39ac: 0x0  nop
    ctx->pc = 0x1b39acu;
    // NOP
label_1b39b0:
    // 0x1b39b0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1b39b0u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_1b39b4:
    // 0x1b39b4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b39b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b39b8:
    // 0x1b39b8: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x1b39b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_1b39bc:
    // 0x1b39bc: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x1b39bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_1b39c0:
    // 0x1b39c0: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x1b39c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1b39c4:
    // 0x1b39c4: 0x815c0  sll         $v0, $t0, 23
    ctx->pc = 0x1b39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 23));
label_1b39c8:
    // 0x1b39c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b39cc:
    // 0x1b39cc: 0x41dc3  sra         $v1, $a0, 23
    ctx->pc = 0x1b39ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 23));
label_1b39d0:
    // 0x1b39d0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_1b39d4:
    if (ctx->pc == 0x1B39D4u) {
        ctx->pc = 0x1B39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39D0u;
        // 0x1b39d4: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B39D8u;
        goto label_1b39d8;
    }
    ctx->pc = 0x1B39D0u;
    {
        const bool branch_taken_0x1b39d0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1B39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39D0u;
        // 0x1b39d4: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39d0) {
            ctx->pc = 0x1B39E8u;
            goto label_1b39e8;
        }
    }
    ctx->pc = 0x1B39D8u;
label_1b39d8:
    // 0x1b39d8: 0xc06d48e  jal         func_1B5238
label_1b39dc:
    if (ctx->pc == 0x1B39DCu) {
        ctx->pc = 0x1B39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39D8u;
        // 0x1b39dc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B39E0u;
        goto label_1b39e0;
    }
    ctx->pc = 0x1B39D8u;
    SET_GPR_U32(ctx, 31, 0x1B39E0u);
    ctx->pc = 0x1B39DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B39D8u;
    // 0x1b39dc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    { ctx->pc = 0x1b5238; return; }
    ctx->pc = 0x1B39E0u;
label_1b39e0:
    // 0x1b39e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b39e4:
    if (ctx->pc == 0x1B39E4u) {
        ctx->pc = 0x1B39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39E0u;
        // 0x1b39e4: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B39E8u;
        goto label_1b39e8;
    }
    ctx->pc = 0x1B39E0u;
    {
        const bool branch_taken_0x1b39e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B39E0u;
        // 0x1b39e4: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b39e0) {
            ctx->pc = 0x1B39ECu;
            goto label_1b39ec;
        }
    }
    ctx->pc = 0x1B39E8u;
label_1b39e8:
    // 0x1b39e8: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1b39e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b39ec:
    // 0x1b39ec: 0x0  nop
    ctx->pc = 0x1b39ecu;
    // NOP
label_1b39f0:
    // 0x1b39f0: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x1b39f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_1b39f4:
    // 0x1b39f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b39f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b39f8:
    // 0x1b39f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b39f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b39fc:
    // 0x1b39fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b39fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3a00:
    // 0x1b3a00: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b3a00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b3a04:
    // 0x1b3a04: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b3a04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b3a08:
    // 0x1b3a08: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b3a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1b3a0c:
    // 0x1b3a0c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1b3a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b3a10:
    // 0x1b3a10: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b3a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b3a14:
    // 0x1b3a14: 0x3e00008  jr          $ra
label_1b3a18:
    if (ctx->pc == 0x1B3A18u) {
        ctx->pc = 0x1B3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A14u;
        // 0x1b3a18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3A1Cu;
        goto label_1b3a1c;
    }
    ctx->pc = 0x1B3A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A14u;
        // 0x1b3a18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3A1Cu;
label_1b3a1c:
    // 0x1b3a1c: 0x0  nop
    ctx->pc = 0x1b3a1cu;
    // NOP
label_1b3a20:
    // 0x1b3a20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b3a24:
    // 0x1b3a24: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x1b3a24u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
label_1b3a28:
    // 0x1b3a28: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b3a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1b3a2c:
    // 0x1b3a2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b3a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b3a30:
    // 0x1b3a30: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b3a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1b3a34:
    // 0x1b3a34: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b3a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b3a38:
    // 0x1b3a38: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x1b3a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_1b3a3c:
    // 0x1b3a3c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b3a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b3a40:
    // 0x1b3a40: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1b3a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_1b3a44:
    // 0x1b3a44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3a48:
    // 0x1b3a48: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1b3a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
label_1b3a4c:
    // 0x1b3a4c: 0x2438024  and         $s0, $s2, $v1
    ctx->pc = 0x1b3a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_1b3a50:
    // 0x1b3a50: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b3a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b3a54:
    // 0x1b3a54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b3a58:
    if (ctx->pc == 0x1B3A58u) {
        ctx->pc = 0x1B3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A54u;
        // 0x1b3a58: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3A5Cu;
        goto label_1b3a5c;
    }
    ctx->pc = 0x1B3A54u;
    {
        const bool branch_taken_0x1b3a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A54u;
        // 0x1b3a58: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a54) {
            ctx->pc = 0x1B3A70u;
            goto label_1b3a70;
        }
    }
    ctx->pc = 0x1B3A5Cu;
label_1b3a5c:
    // 0x1b3a5c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3a60:
    // 0x1b3a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3a64:
    // 0x1b3a64: 0x100000da  b           . + 4 + (0xDA << 2)
label_1b3a68:
    if (ctx->pc == 0x1B3A68u) {
        ctx->pc = 0x1B3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A64u;
        // 0x1b3a68: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3A6Cu;
        goto label_1b3a6c;
    }
    ctx->pc = 0x1B3A64u;
    {
        const bool branch_taken_0x1b3a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A64u;
        // 0x1b3a68: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a64) {
            ctx->pc = 0x1B3DD0u;
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3A6Cu;
label_1b3a6c:
    // 0x1b3a6c: 0x0  nop
    ctx->pc = 0x1b3a6cu;
    // NOP
label_1b3a70:
    // 0x1b3a70: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1b3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
label_1b3a74:
    // 0x1b3a74: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x1b3a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
label_1b3a78:
    // 0x1b3a78: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b3a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b3a7c:
    // 0x1b3a7c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_1b3a80:
    if (ctx->pc == 0x1B3A80u) {
        ctx->pc = 0x1B3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A7Cu;
        // 0x1b3a80: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3A84u;
        goto label_1b3a84;
    }
    ctx->pc = 0x1B3A7Cu;
    {
        const bool branch_taken_0x1b3a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A7Cu;
        // 0x1b3a80: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a7c) {
            ctx->pc = 0x1B3B68u;
            goto label_1b3b68;
        }
    }
    ctx->pc = 0x1B3A84u;
label_1b3a84:
    // 0x1b3a84: 0x1a40001c  blez        $s2, . + 4 + (0x1C << 2)
label_1b3a88:
    if (ctx->pc == 0x1B3A88u) {
        ctx->pc = 0x1B3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A84u;
        // 0x1b3a88: 0x2403fff0  addiu       $v1, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3A8Cu;
        goto label_1b3a8c;
    }
    ctx->pc = 0x1B3A84u;
    {
        const bool branch_taken_0x1b3a84 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1B3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A84u;
        // 0x1b3a88: 0x2403fff0  addiu       $v1, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a84) {
            ctx->pc = 0x1B3AF8u;
            goto label_1b3af8;
        }
    }
    ctx->pc = 0x1B3A8Cu;
label_1b3a8c:
    // 0x1b3a8c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b3a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1b3a90:
    // 0x1b3a90: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1b3a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
label_1b3a94:
    // 0x1b3a94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3a98:
    // 0x1b3a98: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b3a9c:
    // 0x1b3a9c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1b3a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1b3aa0:
    // 0x1b3aa0: 0x34420fd0  ori         $v0, $v0, 0xFD0
    ctx->pc = 0x1b3aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4048);
label_1b3aa4:
    // 0x1b3aa4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1b3aa8:
    if (ctx->pc == 0x1B3AA8u) {
        ctx->pc = 0x1B3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AA4u;
        // 0x1b3aa8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3AACu;
        goto label_1b3aac;
    }
    ctx->pc = 0x1B3AA4u;
    {
        const bool branch_taken_0x1b3aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AA4u;
        // 0x1b3aa8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3aa4) {
            ctx->pc = 0x1B3AC0u;
            goto label_1b3ac0;
        }
    }
    ctx->pc = 0x1B3AACu;
label_1b3aac:
    // 0x1b3aac: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
label_1b3ab0:
    // 0x1b3ab0: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1b3ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
label_1b3ab4:
    // 0x1b3ab4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3ab8:
    // 0x1b3ab8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b3abc:
    if (ctx->pc == 0x1B3ABCu) {
        ctx->pc = 0x1B3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AB8u;
        // 0x1b3abc: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3AC0u;
        goto label_1b3ac0;
    }
    ctx->pc = 0x1B3AB8u;
    {
        const bool branch_taken_0x1b3ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AB8u;
        // 0x1b3abc: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ab8) {
            ctx->pc = 0x1B3AE0u;
            goto label_1b3ae0;
        }
    }
    ctx->pc = 0x1B3AC0u;
label_1b3ac0:
    // 0x1b3ac0: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
label_1b3ac4:
    // 0x1b3ac4: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1b3ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
label_1b3ac8:
    // 0x1b3ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3acc:
    // 0x1b3acc: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1b3accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
label_1b3ad0:
    // 0x1b3ad0: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1b3ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
label_1b3ad4:
    // 0x1b3ad4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3ad8:
    // 0x1b3ad8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1b3ad8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1b3adc:
    // 0x1b3adc: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x1b3adcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_1b3ae0:
    // 0x1b3ae0: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1b3ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_1b3ae4:
    // 0x1b3ae4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3ae8:
    // 0x1b3ae8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b3ae8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b3aec:
    // 0x1b3aec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1b3af0:
    // 0x1b3af0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1b3af4:
    if (ctx->pc == 0x1B3AF4u) {
        ctx->pc = 0x1B3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AF0u;
        // 0x1b3af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3AF8u;
        goto label_1b3af8;
    }
    ctx->pc = 0x1B3AF0u;
    {
        const bool branch_taken_0x1b3af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AF0u;
        // 0x1b3af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3af0) {
            ctx->pc = 0x1B3DD0u;
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3AF8u;
label_1b3af8:
    // 0x1b3af8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b3af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1b3afc:
    // 0x1b3afc: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1b3afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
label_1b3b00:
    // 0x1b3b00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3b04:
    // 0x1b3b04: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b3b08:
    // 0x1b3b08: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1b3b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1b3b0c:
    // 0x1b3b0c: 0x34420fd0  ori         $v0, $v0, 0xFD0
    ctx->pc = 0x1b3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4048);
label_1b3b10:
    // 0x1b3b10: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1b3b14:
    if (ctx->pc == 0x1B3B14u) {
        ctx->pc = 0x1B3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B10u;
        // 0x1b3b14: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3B18u;
        goto label_1b3b18;
    }
    ctx->pc = 0x1B3B10u;
    {
        const bool branch_taken_0x1b3b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B10u;
        // 0x1b3b14: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b10) {
            ctx->pc = 0x1B3B30u;
            goto label_1b3b30;
        }
    }
    ctx->pc = 0x1B3B18u;
label_1b3b18:
    // 0x1b3b18: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
label_1b3b1c:
    // 0x1b3b1c: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1b3b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
label_1b3b20:
    // 0x1b3b20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3b24:
    // 0x1b3b24: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b3b28:
    if (ctx->pc == 0x1B3B28u) {
        ctx->pc = 0x1B3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B24u;
        // 0x1b3b28: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3B2Cu;
        goto label_1b3b2c;
    }
    ctx->pc = 0x1B3B24u;
    {
        const bool branch_taken_0x1b3b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B24u;
        // 0x1b3b28: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b24) {
            ctx->pc = 0x1B3B50u;
            goto label_1b3b50;
        }
    }
    ctx->pc = 0x1B3B2Cu;
label_1b3b2c:
    // 0x1b3b2c: 0x0  nop
    ctx->pc = 0x1b3b2cu;
    // NOP
label_1b3b30:
    // 0x1b3b30: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
label_1b3b34:
    // 0x1b3b34: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1b3b34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
label_1b3b38:
    // 0x1b3b38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3b3c:
    // 0x1b3b3c: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1b3b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
label_1b3b40:
    // 0x1b3b40: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1b3b40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
label_1b3b44:
    // 0x1b3b44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3b48:
    // 0x1b3b48: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x1b3b48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_1b3b4c:
    // 0x1b3b4c: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x1b3b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_1b3b50:
    // 0x1b3b50: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1b3b50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_1b3b54:
    // 0x1b3b54: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3b58:
    // 0x1b3b58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b3b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b3b5c:
    // 0x1b3b5c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1b3b60:
    // 0x1b3b60: 0x1000009b  b           . + 4 + (0x9B << 2)
label_1b3b64:
    if (ctx->pc == 0x1B3B64u) {
        ctx->pc = 0x1B3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B60u;
        // 0x1b3b64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3B68u;
        goto label_1b3b68;
    }
    ctx->pc = 0x1B3B60u;
    {
        const bool branch_taken_0x1b3b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B60u;
        // 0x1b3b64: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b60) {
            ctx->pc = 0x1B3DD0u;
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3B68u;
label_1b3b68:
    // 0x1b3b68: 0x34420f80  ori         $v0, $v0, 0xF80
    ctx->pc = 0x1b3b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
label_1b3b6c:
    // 0x1b3b6c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b3b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b3b70:
    // 0x1b3b70: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
label_1b3b74:
    if (ctx->pc == 0x1B3B74u) {
        ctx->pc = 0x1B3B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B70u;
        // 0x1b3b74: 0x1015c3  sra         $v0, $s0, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3B78u;
        goto label_1b3b78;
    }
    ctx->pc = 0x1B3B70u;
    {
        const bool branch_taken_0x1b3b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b70) {
            ctx->pc = 0x1B3B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3B70u;
            // 0x1b3b74: 0x1015c3  sra         $v0, $s0, 23 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3D08u;
            goto label_1b3d08;
        }
    }
    ctx->pc = 0x1B3B78u;
label_1b3b78:
    // 0x1b3b78: 0xc06d448  jal         func_1B5120
label_1b3b7c:
    if (ctx->pc == 0x1B3B7Cu) {
        ctx->pc = 0x1B3B80u;
        goto label_1b3b80;
    }
    ctx->pc = 0x1B3B78u;
    SET_GPR_U32(ctx, 31, 0x1B3B80u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1B3B80u;
label_1b3b80:
    // 0x1b3b80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b3b84:
    // 0x1b3b84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3b88:
    // 0x1b3b88: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1b3b88u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_1b3b8c:
    // 0x1b3b8c: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x1b3b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
label_1b3b90:
    // 0x1b3b90: 0x3421f984  ori         $at, $at, 0xF984
    ctx->pc = 0x1b3b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63876);
label_1b3b94:
    // 0x1b3b94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3b98:
    // 0x1b3b98: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b3b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1b3b9c:
    // 0x1b3b9c: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1b3b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
label_1b3ba0:
    // 0x1b3ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3ba4:
    // 0x1b3ba4: 0x0  nop
    ctx->pc = 0x1b3ba4u;
    // NOP
label_1b3ba8:
    // 0x1b3ba8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b3ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1b3bac:
    // 0x1b3bac: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
label_1b3bb0:
    // 0x1b3bb0: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1b3bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
label_1b3bb4:
    // 0x1b3bb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b3bb8:
    // 0x1b3bb8: 0x0  nop
    ctx->pc = 0x1b3bb8u;
    // NOP
label_1b3bbc:
    // 0x1b3bbc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b3bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b3bc0:
    // 0x1b3bc0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1b3bc4:
    // 0x1b3bc4: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1b3bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1b3bc8:
    // 0x1b3bc8: 0x0  nop
    ctx->pc = 0x1b3bc8u;
    // NOP
label_1b3bcc:
    // 0x1b3bcc: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x1b3bccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b3bd0:
    // 0x1b3bd0: 0x0  nop
    ctx->pc = 0x1b3bd0u;
    // NOP
label_1b3bd4:
    // 0x1b3bd4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1b3bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_1b3bd8:
    // 0x1b3bd8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1b3bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1b3bdc:
    // 0x1b3bdc: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x1b3bdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_1b3be0:
    // 0x1b3be0: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x1b3be0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_1b3be4:
    // 0x1b3be4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b3be8:
    if (ctx->pc == 0x1B3BE8u) {
        ctx->pc = 0x1B3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BE4u;
        // 0x1b3be8: 0x46012901  sub.s       $f4, $f5, $f1 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3BECu;
        goto label_1b3bec;
    }
    ctx->pc = 0x1B3BE4u;
    {
        const bool branch_taken_0x1b3be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3BE4u;
        // 0x1b3be8: 0x46012901  sub.s       $f4, $f5, $f1 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3be4) {
            ctx->pc = 0x1B3C18u;
            goto label_1b3c18;
        }
    }
    ctx->pc = 0x1B3BECu;
label_1b3bec:
    // 0x1b3bec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b3becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b3bf0:
    // 0x1b3bf0: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1b3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_1b3bf4:
    // 0x1b3bf4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1b3bf8:
    // 0x1b3bf8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b3bfc:
    // 0x1b3bfc: 0x8c84b114  lw          $a0, -0x4EEC($a0)
    ctx->pc = 0x1b3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947092)));
label_1b3c00:
    // 0x1b3c00: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1b3c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1b3c04:
    // 0x1b3c04: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_1b3c08:
    if (ctx->pc == 0x1B3C08u) {
        ctx->pc = 0x1B3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C04u;
        // 0x1b3c08: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3C0Cu;
        goto label_1b3c0c;
    }
    ctx->pc = 0x1B3C04u;
    {
        const bool branch_taken_0x1b3c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C04u;
        // 0x1b3c08: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c04) {
            ctx->pc = 0x1B3C1Cu;
            goto label_1b3c1c;
        }
    }
    ctx->pc = 0x1B3C0Cu;
label_1b3c0c:
    // 0x1b3c0c: 0x10000033  b           . + 4 + (0x33 << 2)
label_1b3c10:
    if (ctx->pc == 0x1B3C10u) {
        ctx->pc = 0x1B3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C0Cu;
        // 0x1b3c10: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3C14u;
        goto label_1b3c14;
    }
    ctx->pc = 0x1B3C0Cu;
    {
        const bool branch_taken_0x1b3c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C0Cu;
        // 0x1b3c10: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c0c) {
            ctx->pc = 0x1B3CDCu;
            goto label_1b3cdc;
        }
    }
    ctx->pc = 0x1B3C14u;
label_1b3c14:
    // 0x1b3c14: 0x0  nop
    ctx->pc = 0x1b3c14u;
    // NOP
label_1b3c18:
    // 0x1b3c18: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x1b3c18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3c1c:
    // 0x1b3c1c: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x1b3c1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
label_1b3c20:
    // 0x1b3c20: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b3c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3c24:
    // 0x1b3c24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b3c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b3c28:
    // 0x1b3c28: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b3c2c:
    // 0x1b3c2c: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1b3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
label_1b3c30:
    // 0x1b3c30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b3c34:
    // 0x1b3c34: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1b3c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b3c38:
    // 0x1b3c38: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1b3c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1b3c3c:
    // 0x1b3c3c: 0x54600028  bnel        $v1, $zero, . + 4 + (0x28 << 2)
label_1b3c40:
    if (ctx->pc == 0x1B3C40u) {
        ctx->pc = 0x1B3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C3Cu;
        // 0x1b3c40: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3C44u;
        goto label_1b3c44;
    }
    ctx->pc = 0x1B3C3Cu;
    {
        const bool branch_taken_0x1b3c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c3c) {
            ctx->pc = 0x1B3C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3C3Cu;
            // 0x1b3c40: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3CE0u;
            goto label_1b3ce0;
        }
    }
    ctx->pc = 0x1B3C44u;
label_1b3c44:
    // 0x1b3c44: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
label_1b3c48:
    // 0x1b3c48: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x1b3c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
label_1b3c4c:
    // 0x1b3c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3c50:
    // 0x1b3c50: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1b3c50u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
label_1b3c54:
    // 0x1b3c54: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1b3c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
label_1b3c58:
    // 0x1b3c58: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x1b3c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
label_1b3c5c:
    // 0x1b3c5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3c60:
    // 0x1b3c60: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1b3c60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1b3c64:
    // 0x1b3c64: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1b3c64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_1b3c68:
    // 0x1b3c68: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1b3c68u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3c6c:
    // 0x1b3c6c: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1b3c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1b3c70:
    // 0x1b3c70: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b3c70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1b3c74:
    // 0x1b3c74: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1b3c74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1b3c78:
    // 0x1b3c78: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1b3c78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3c7c:
    // 0x1b3c7c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3c7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3c80:
    // 0x1b3c80: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1b3c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1b3c84:
    // 0x1b3c84: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1b3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1b3c88:
    // 0x1b3c88: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1b3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
label_1b3c8c:
    // 0x1b3c8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b3c90:
    // 0x1b3c90: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1b3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b3c94:
    // 0x1b3c94: 0x2863001a  slti        $v1, $v1, 0x1A
    ctx->pc = 0x1b3c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
label_1b3c98:
    // 0x1b3c98: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_1b3c9c:
    if (ctx->pc == 0x1B3C9Cu) {
        ctx->pc = 0x1B3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C98u;
        // 0x1b3c9c: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3CA0u;
        goto label_1b3ca0;
    }
    ctx->pc = 0x1B3C98u;
    {
        const bool branch_taken_0x1b3c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c98) {
            ctx->pc = 0x1B3C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3C98u;
            // 0x1b3c9c: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3CE0u;
            goto label_1b3ce0;
        }
    }
    ctx->pc = 0x1B3CA0u;
label_1b3ca0:
    // 0x1b3ca0: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1b3ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
label_1b3ca4:
    // 0x1b3ca4: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x1b3ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
label_1b3ca8:
    // 0x1b3ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3cac:
    // 0x1b3cac: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1b3cacu;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
label_1b3cb0:
    // 0x1b3cb0: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x1b3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
label_1b3cb4:
    // 0x1b3cb4: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x1b3cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
label_1b3cb8:
    // 0x1b3cb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3cbc:
    // 0x1b3cbc: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1b3cbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1b3cc0:
    // 0x1b3cc0: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1b3cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_1b3cc4:
    // 0x1b3cc4: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1b3cc4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3cc8:
    // 0x1b3cc8: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1b3cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1b3ccc:
    // 0x1b3ccc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b3cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1b3cd0:
    // 0x1b3cd0: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1b3cd0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1b3cd4:
    // 0x1b3cd4: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1b3cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3cd8:
    // 0x1b3cd8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3cdc:
    // 0x1b3cdc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3ce0:
    // 0x1b3ce0: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x1b3ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_1b3ce4:
    // 0x1b3ce4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b3ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1b3ce8:
    // 0x1b3ce8: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
label_1b3cec:
    if (ctx->pc == 0x1B3CECu) {
        ctx->pc = 0x1B3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CE8u;
        // 0x1b3cec: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3CF0u;
        goto label_1b3cf0;
    }
    ctx->pc = 0x1B3CE8u;
    {
        const bool branch_taken_0x1b3ce8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CE8u;
        // 0x1b3cec: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ce8) {
            ctx->pc = 0x1B3D00u;
            goto label_1b3d00;
        }
    }
    ctx->pc = 0x1B3CF0u;
label_1b3cf0:
    // 0x1b3cf0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3cf0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b3cf4:
    // 0x1b3cf4: 0x10000033  b           . + 4 + (0x33 << 2)
label_1b3cf8:
    if (ctx->pc == 0x1B3CF8u) {
        ctx->pc = 0x1B3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CF4u;
        // 0x1b3cf8: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3CFCu;
        goto label_1b3cfc;
    }
    ctx->pc = 0x1B3CF4u;
    {
        const bool branch_taken_0x1b3cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CF4u;
        // 0x1b3cf8: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3cf4) {
            ctx->pc = 0x1B3DC4u;
            goto label_1b3dc4;
        }
    }
    ctx->pc = 0x1B3CFCu;
label_1b3cfc:
    // 0x1b3cfc: 0x0  nop
    ctx->pc = 0x1b3cfcu;
    // NOP
label_1b3d00:
    // 0x1b3d00: 0x10000033  b           . + 4 + (0x33 << 2)
label_1b3d04:
    if (ctx->pc == 0x1B3D04u) {
        ctx->pc = 0x1B3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D00u;
        // 0x1b3d04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3D08u;
        goto label_1b3d08;
    }
    ctx->pc = 0x1B3D00u;
    {
        const bool branch_taken_0x1b3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D00u;
        // 0x1b3d04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d00) {
            ctx->pc = 0x1B3DD0u;
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3D08u;
label_1b3d08:
    // 0x1b3d08: 0x2446ff7a  addiu       $a2, $v0, -0x86
    ctx->pc = 0x1b3d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967162));
label_1b3d0c:
    // 0x1b3d0c: 0x61dc0  sll         $v1, $a2, 23
    ctx->pc = 0x1b3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_1b3d10:
    // 0x1b3d10: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1b3d10u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1b3d14:
    // 0x1b3d14: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1b3d14u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3d18:
    // 0x1b3d18: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1b3d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_1b3d1c:
    // 0x1b3d1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3d20:
    // 0x1b3d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3d24:
    // 0x1b3d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b3d28:
    // 0x1b3d28: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b3d2c:
    // 0x1b3d2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b3d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b3d30:
    // 0x1b3d30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b3d34:
    // 0x1b3d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3d38:
    // 0x1b3d38: 0x0  nop
    ctx->pc = 0x1b3d38u;
    // NOP
label_1b3d3c:
    // 0x1b3d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b3d40:
    // 0x1b3d40: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x1b3d40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1b3d44:
    // 0x1b3d44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b3d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b3d48:
    // 0x1b3d48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1b3d4c:
    // 0x1b3d4c: 0x461fff6  bgez        $v1, . + 4 + (-0xA << 2)
label_1b3d50:
    if (ctx->pc == 0x1B3D50u) {
        ctx->pc = 0x1B3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D4Cu;
        // 0x1b3d50: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3D54u;
        goto label_1b3d54;
    }
    ctx->pc = 0x1B3D4Cu;
    {
        const bool branch_taken_0x1b3d4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D4Cu;
        // 0x1b3d50: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d4c) {
            ctx->pc = 0x1B3D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d28;
        }
    }
    ctx->pc = 0x1B3D54u;
label_1b3d54:
    // 0x1b3d54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b3d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3d58:
    // 0x1b3d58: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b3d58u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b3d5c:
    // 0x1b3d5c: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x1b3d5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b3d60:
    // 0x1b3d60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3d64:
    // 0x1b3d64: 0x0  nop
    ctx->pc = 0x1b3d64u;
    // NOP
label_1b3d68:
    // 0x1b3d68: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1b3d6c:
    if (ctx->pc == 0x1B3D6Cu) {
        ctx->pc = 0x1B3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D68u;
        // 0x1b3d6c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3D70u;
        goto label_1b3d70;
    }
    ctx->pc = 0x1B3D68u;
    {
        const bool branch_taken_0x1b3d68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D68u;
        // 0x1b3d6c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d68) {
            ctx->pc = 0x1B3D94u;
            goto label_1b3d94;
        }
    }
    ctx->pc = 0x1B3D70u;
label_1b3d70:
    // 0x1b3d70: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1b3d74:
    // 0x1b3d74: 0x0  nop
    ctx->pc = 0x1b3d74u;
    // NOP
label_1b3d78:
    // 0x1b3d78: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b3d7c:
    // 0x1b3d7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3d80:
    // 0x1b3d80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3d80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3d84:
    // 0x1b3d84: 0x0  nop
    ctx->pc = 0x1b3d84u;
    // NOP
label_1b3d88:
    // 0x1b3d88: 0x0  nop
    ctx->pc = 0x1b3d88u;
    // NOP
label_1b3d8c:
    // 0x1b3d8c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
label_1b3d90:
    if (ctx->pc == 0x1B3D90u) {
        ctx->pc = 0x1B3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D8Cu;
        // 0x1b3d90: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3D94u;
        goto label_1b3d94;
    }
    ctx->pc = 0x1B3D8Cu;
    {
        const bool branch_taken_0x1b3d8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D8Cu;
        // 0x1b3d90: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d8c) {
            ctx->pc = 0x1B3D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d78;
        }
    }
    ctx->pc = 0x1B3D94u;
label_1b3d94:
    // 0x1b3d94: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x1b3d94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
label_1b3d98:
    // 0x1b3d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b3d9c:
    // 0x1b3d9c: 0x2529ae00  addiu       $t1, $t1, -0x5200
    ctx->pc = 0x1b3d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946304));
label_1b3da0:
    // 0x1b3da0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b3da4:
    // 0x1b3da4: 0xc06d00c  jal         func_1B4030
label_1b3da8:
    if (ctx->pc == 0x1B3DA8u) {
        ctx->pc = 0x1B3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DA4u;
        // 0x1b3da8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3DACu;
        goto label_1b3dac;
    }
    ctx->pc = 0x1B3DA4u;
    SET_GPR_U32(ctx, 31, 0x1B3DACu);
    ctx->pc = 0x1B3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3DA4u;
    // 0x1b3da8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4030u;
    { ctx->pc = 0x1b4030; return; }
    ctx->pc = 0x1B3DACu;
label_1b3dac:
    // 0x1b3dac: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
label_1b3db0:
    if (ctx->pc == 0x1B3DB0u) {
        ctx->pc = 0x1B3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DACu;
        // 0x1b3db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3DB4u;
        goto label_1b3db4;
    }
    ctx->pc = 0x1B3DACu;
    {
        const bool branch_taken_0x1b3dac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DACu;
        // 0x1b3db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dac) {
            ctx->pc = 0x1B3DD0u;
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3DB4u;
label_1b3db4:
    // 0x1b3db4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3db8:
    // 0x1b3db8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1b3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_1b3dbc:
    // 0x1b3dbc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3dc0:
    // 0x1b3dc0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3dc0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b3dc4:
    // 0x1b3dc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b3dc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b3dc8:
    // 0x1b3dc8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3dcc:
    // 0x1b3dcc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1b3dd0:
    // 0x1b3dd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b3dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b3dd4:
    // 0x1b3dd4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b3dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b3dd8:
    // 0x1b3dd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b3dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3ddc:
    // 0x1b3ddc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b3de0:
    // 0x1b3de0: 0x3e00008  jr          $ra
label_1b3de4:
    if (ctx->pc == 0x1B3DE4u) {
        ctx->pc = 0x1B3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DE0u;
        // 0x1b3de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3DE8u;
        goto label_1b3de8;
    }
    ctx->pc = 0x1B3DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DE0u;
        // 0x1b3de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3DE8u;
label_1b3de8:
    // 0x1b3de8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1b3de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b3dec:
    // 0x1b3dec: 0x0  nop
    ctx->pc = 0x1b3decu;
    // NOP
label_1b3df0:
    // 0x1b3df0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b3df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b3df4:
    // 0x1b3df4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b3df8:
    // 0x1b3df8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_1b3dfc:
    // 0x1b3dfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b3e00:
    // 0x1b3e00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3e04:
    // 0x1b3e04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1b3e08:
    // 0x1b3e08: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b3e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b3e0c:
    // 0x1b3e0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b3e10:
    if (ctx->pc == 0x1B3E10u) {
        ctx->pc = 0x1B3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E0Cu;
        // 0x1b3e10: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E14u;
        goto label_1b3e14;
    }
    ctx->pc = 0x1B3E0Cu;
    {
        const bool branch_taken_0x1b3e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E0Cu;
        // 0x1b3e10: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e0c) {
            ctx->pc = 0x1B3E2Cu;
            goto label_1b3e2c;
        }
    }
    ctx->pc = 0x1B3E14u;
label_1b3e14:
    // 0x1b3e14: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
label_1b3e18:
    if (ctx->pc == 0x1B3E18u) {
        ctx->pc = 0x1B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E14u;
        // 0x1b3e18: 0x53dc3  sra         $a3, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E1Cu;
        goto label_1b3e1c;
    }
    ctx->pc = 0x1B3E14u;
    {
        const bool branch_taken_0x1b3e14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E14u;
        // 0x1b3e18: 0x53dc3  sra         $a3, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e14) {
            ctx->pc = 0x1B3E38u;
            goto label_1b3e38;
        }
    }
    ctx->pc = 0x1B3E1Cu;
label_1b3e1c:
    // 0x1b3e1c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x1b3e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
label_1b3e20:
    // 0x1b3e20: 0x0  nop
    ctx->pc = 0x1b3e20u;
    // NOP
label_1b3e24:
    // 0x1b3e24: 0x0  nop
    ctx->pc = 0x1b3e24u;
    // NOP
label_1b3e28:
    // 0x1b3e28: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b3e28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_1b3e2c:
    // 0x1b3e2c: 0x3e00008  jr          $ra
label_1b3e30:
    if (ctx->pc == 0x1B3E30u) {
        ctx->pc = 0x1B3E34u;
        goto label_1b3e34;
    }
    ctx->pc = 0x1B3E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E34u;
label_1b3e34:
    // 0x1b3e34: 0x0  nop
    ctx->pc = 0x1b3e34u;
    // NOP
label_1b3e38:
    // 0x1b3e38: 0x24e7ff81  addiu       $a3, $a3, -0x7F
    ctx->pc = 0x1b3e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
label_1b3e3c:
    // 0x1b3e3c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1b3e40:
    // 0x1b3e40: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b3e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b3e44:
    // 0x1b3e44: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x1b3e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1b3e48:
    // 0x1b3e48: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b3e4c:
    // 0x1b3e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b3e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e50:
    // 0x1b3e50: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_1b3e54:
    // 0x1b3e54: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1b3e58:
    // 0x1b3e58: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_1b3e5c:
    // 0x1b3e5c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1b3e60:
    // 0x1b3e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e64:
    // 0x1b3e64: 0x0  nop
    ctx->pc = 0x1b3e64u;
    // NOP
label_1b3e68:
    // 0x1b3e68: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1b3e6c:
    // 0x1b3e6c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b3e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b3e70:
    // 0x1b3e70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1b3e74:
    if (ctx->pc == 0x1B3E74u) {
        ctx->pc = 0x1B3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E70u;
        // 0x1b3e74: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E78u;
        goto label_1b3e78;
    }
    ctx->pc = 0x1B3E70u;
    {
        const bool branch_taken_0x1b3e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e70) {
            ctx->pc = 0x1B3E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3E70u;
            // 0x1b3e74: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3E88u;
            goto label_1b3e88;
        }
    }
    ctx->pc = 0x1B3E78u;
label_1b3e78:
    // 0x1b3e78: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1b3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b3e7c:
    // 0x1b3e7c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1b3e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b3e80:
    // 0x1b3e80: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1b3e84:
    // 0x1b3e84: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1b3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1b3e88:
    // 0x1b3e88: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_1b3e8c:
    if (ctx->pc == 0x1B3E8Cu) {
        ctx->pc = 0x1B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E88u;
        // 0x1b3e8c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E90u;
        goto label_1b3e90;
    }
    ctx->pc = 0x1B3E88u;
    {
        const bool branch_taken_0x1b3e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E88u;
        // 0x1b3e8c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e88) {
            ctx->pc = 0x1B3E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3e68;
        }
    }
    ctx->pc = 0x1B3E90u;
label_1b3e90:
    // 0x1b3e90: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1b3e94:
    if (ctx->pc == 0x1B3E94u) {
        ctx->pc = 0x1B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E90u;
        // 0x1b3e94: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E98u;
        goto label_1b3e98;
    }
    ctx->pc = 0x1B3E90u;
    {
        const bool branch_taken_0x1b3e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E90u;
        // 0x1b3e94: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e90) {
            ctx->pc = 0x1B3E9Cu;
            goto label_1b3e9c;
        }
    }
    ctx->pc = 0x1B3E98u;
label_1b3e98:
    // 0x1b3e98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1b3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b3e9c:
    // 0x1b3e9c: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x1b3e9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_1b3ea0:
    // 0x1b3ea0: 0x71dc0  sll         $v1, $a3, 23
    ctx->pc = 0x1b3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 23));
label_1b3ea4:
    // 0x1b3ea4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1b3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_1b3ea8:
    // 0x1b3ea8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b3eac:
    // 0x1b3eac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b3eb0:
    // 0x1b3eb0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b3eb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3eb4:
    // 0x1b3eb4: 0x3e00008  jr          $ra
label_1b3eb8:
    if (ctx->pc == 0x1B3EB8u) {
        ctx->pc = 0x1B3EBCu;
        goto label_1b3ebc;
    }
    ctx->pc = 0x1B3EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3EBCu;
label_1b3ebc:
    // 0x1b3ebc: 0x0  nop
    ctx->pc = 0x1b3ebcu;
    // NOP
label_1b3ec0:
    // 0x1b3ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3ec4:
    // 0x1b3ec4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b3ec4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b3ec8:
    // 0x1b3ec8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b3ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b3ecc:
    // 0x1b3ecc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b3ed0:
    // 0x1b3ed0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3ed4:
    // 0x1b3ed4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b3ed8:
    // 0x1b3ed8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1b3ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1b3edc:
    // 0x1b3edc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3ee0:
    // 0x1b3ee0: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
label_1b3ee4:
    // 0x1b3ee4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1b3ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b3ee8:
    // 0x1b3ee8: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x1b3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
label_1b3eec:
    // 0x1b3eec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b3ef0:
    // 0x1b3ef0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1b3ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
label_1b3ef4:
    // 0x1b3ef4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b3ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b3ef8:
    // 0x1b3ef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b3efc:
    if (ctx->pc == 0x1B3EFCu) {
        ctx->pc = 0x1B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EF8u;
        // 0x1b3efc: 0x83202a  slt         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3F00u;
        goto label_1b3f00;
    }
    ctx->pc = 0x1B3EF8u;
    {
        const bool branch_taken_0x1b3ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EF8u;
        // 0x1b3efc: 0x83202a  slt         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ef8) {
            ctx->pc = 0x1B3F10u;
            goto label_1b3f10;
        }
    }
    ctx->pc = 0x1B3F00u;
label_1b3f00:
    // 0x1b3f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b3f04:
    // 0x1b3f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3f08:
    // 0x1b3f08: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
label_1b3f0c:
    if (ctx->pc == 0x1B3F0Cu) {
        ctx->pc = 0x1B3F10u;
        goto label_1b3f10;
    }
    ctx->pc = 0x1B3F08u;
    {
        const bool branch_taken_0x1b3f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f08) {
            ctx->pc = 0x1B4028u;
            { ctx->pc = 0x1b4028; return; }
        }
    }
    ctx->pc = 0x1B3F10u;
label_1b3f10:
    // 0x1b3f10: 0x460c6102  mul.s       $f4, $f12, $f12
    ctx->pc = 0x1b3f10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1b3f14:
    // 0x1b3f14: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
label_1b3f18:
    // 0x1b3f18: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x1b3f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
label_1b3f1c:
    // 0x1b3f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3f20:
    // 0x1b3f20: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
label_1b3f24:
    // 0x1b3f24: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x1b3f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
label_1b3f28:
    // 0x1b3f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f2c:
    // 0x1b3f2c: 0x0  nop
    ctx->pc = 0x1b3f2cu;
    // NOP
label_1b3f30:
    // 0x1b3f30: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3f34:
    // 0x1b3f34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b3f38:
    // 0x1b3f38: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
label_1b3f3c:
    // 0x1b3f3c: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
label_1b3f40:
    // 0x1b3f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f44:
    // 0x1b3f44: 0x0  nop
    ctx->pc = 0x1b3f44u;
    // NOP
label_1b3f48:
    // 0x1b3f48: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3f4c:
    // 0x1b3f4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b3f50:
    // 0x1b3f50: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x1b3f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
label_1b3f54:
    // 0x1b3f54: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1b3f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
label_1b3f58:
    // 0x1b3f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f5c:
    // 0x1b3f5c: 0x0  nop
    ctx->pc = 0x1b3f5cu;
    // NOP
label_1b3f60:
    // 0x1b3f60: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3f64:
    // 0x1b3f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b3f68:
    // 0x1b3f68: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x1b3f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
label_1b3f6c:
    // 0x1b3f6c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1b3f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    ctx->pc = 0x1b3f70u;
    return;
}

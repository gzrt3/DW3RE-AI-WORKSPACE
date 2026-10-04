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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part116(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1d3b80u: goto label_1d3b80;
        case 0x1d3b84u: goto label_1d3b84;
        case 0x1d3b88u: goto label_1d3b88;
        case 0x1d3b8cu: goto label_1d3b8c;
        case 0x1d3b90u: goto label_1d3b90;
        case 0x1d3b94u: goto label_1d3b94;
        case 0x1d3b98u: goto label_1d3b98;
        case 0x1d3b9cu: goto label_1d3b9c;
        case 0x1d3ba0u: goto label_1d3ba0;
        case 0x1d3ba4u: goto label_1d3ba4;
        case 0x1d3ba8u: goto label_1d3ba8;
        case 0x1d3bacu: goto label_1d3bac;
        case 0x1d3bb0u: goto label_1d3bb0;
        case 0x1d3bb4u: goto label_1d3bb4;
        case 0x1d3bb8u: goto label_1d3bb8;
        case 0x1d3bbcu: goto label_1d3bbc;
        case 0x1d3bc0u: goto label_1d3bc0;
        case 0x1d3bc4u: goto label_1d3bc4;
        case 0x1d3bc8u: goto label_1d3bc8;
        case 0x1d3bccu: goto label_1d3bcc;
        case 0x1d3bd0u: goto label_1d3bd0;
        case 0x1d3bd4u: goto label_1d3bd4;
        case 0x1d3bd8u: goto label_1d3bd8;
        case 0x1d3bdcu: goto label_1d3bdc;
        case 0x1d3be0u: goto label_1d3be0;
        case 0x1d3be4u: goto label_1d3be4;
        case 0x1d3be8u: goto label_1d3be8;
        case 0x1d3becu: goto label_1d3bec;
        case 0x1d3bf0u: goto label_1d3bf0;
        case 0x1d3bf4u: goto label_1d3bf4;
        case 0x1d3bf8u: goto label_1d3bf8;
        case 0x1d3bfcu: goto label_1d3bfc;
        case 0x1d3c00u: goto label_1d3c00;
        case 0x1d3c04u: goto label_1d3c04;
        case 0x1d3c08u: goto label_1d3c08;
        case 0x1d3c0cu: goto label_1d3c0c;
        case 0x1d3c10u: goto label_1d3c10;
        case 0x1d3c14u: goto label_1d3c14;
        case 0x1d3c18u: goto label_1d3c18;
        case 0x1d3c1cu: goto label_1d3c1c;
        case 0x1d3c20u: goto label_1d3c20;
        case 0x1d3c24u: goto label_1d3c24;
        case 0x1d3c28u: goto label_1d3c28;
        case 0x1d3c2cu: goto label_1d3c2c;
        case 0x1d3c30u: goto label_1d3c30;
        case 0x1d3c34u: goto label_1d3c34;
        case 0x1d3c38u: goto label_1d3c38;
        case 0x1d3c3cu: goto label_1d3c3c;
        case 0x1d3c40u: goto label_1d3c40;
        case 0x1d3c44u: goto label_1d3c44;
        case 0x1d3c48u: goto label_1d3c48;
        case 0x1d3c4cu: goto label_1d3c4c;
        case 0x1d3c50u: goto label_1d3c50;
        case 0x1d3c54u: goto label_1d3c54;
        case 0x1d3c58u: goto label_1d3c58;
        case 0x1d3c5cu: goto label_1d3c5c;
        case 0x1d3c60u: goto label_1d3c60;
        case 0x1d3c64u: goto label_1d3c64;
        case 0x1d3c68u: goto label_1d3c68;
        case 0x1d3c6cu: goto label_1d3c6c;
        case 0x1d3c70u: goto label_1d3c70;
        case 0x1d3c74u: goto label_1d3c74;
        case 0x1d3c78u: goto label_1d3c78;
        case 0x1d3c7cu: goto label_1d3c7c;
        case 0x1d3c80u: goto label_1d3c80;
        case 0x1d3c84u: goto label_1d3c84;
        case 0x1d3c88u: goto label_1d3c88;
        case 0x1d3c8cu: goto label_1d3c8c;
        case 0x1d3c90u: goto label_1d3c90;
        case 0x1d3c94u: goto label_1d3c94;
        case 0x1d3c98u: goto label_1d3c98;
        case 0x1d3c9cu: goto label_1d3c9c;
        case 0x1d3ca0u: goto label_1d3ca0;
        case 0x1d3ca4u: goto label_1d3ca4;
        case 0x1d3ca8u: goto label_1d3ca8;
        case 0x1d3cacu: goto label_1d3cac;
        case 0x1d3cb0u: goto label_1d3cb0;
        case 0x1d3cb4u: goto label_1d3cb4;
        case 0x1d3cb8u: goto label_1d3cb8;
        case 0x1d3cbcu: goto label_1d3cbc;
        case 0x1d3cc0u: goto label_1d3cc0;
        case 0x1d3cc4u: goto label_1d3cc4;
        case 0x1d3cc8u: goto label_1d3cc8;
        case 0x1d3cccu: goto label_1d3ccc;
        case 0x1d3cd0u: goto label_1d3cd0;
        case 0x1d3cd4u: goto label_1d3cd4;
        case 0x1d3cd8u: goto label_1d3cd8;
        case 0x1d3cdcu: goto label_1d3cdc;
        case 0x1d3ce0u: goto label_1d3ce0;
        case 0x1d3ce4u: goto label_1d3ce4;
        case 0x1d3ce8u: goto label_1d3ce8;
        case 0x1d3cecu: goto label_1d3cec;
        case 0x1d3cf0u: goto label_1d3cf0;
        case 0x1d3cf4u: goto label_1d3cf4;
        case 0x1d3cf8u: goto label_1d3cf8;
        case 0x1d3cfcu: goto label_1d3cfc;
        case 0x1d3d00u: goto label_1d3d00;
        case 0x1d3d04u: goto label_1d3d04;
        case 0x1d3d08u: goto label_1d3d08;
        case 0x1d3d0cu: goto label_1d3d0c;
        case 0x1d3d10u: goto label_1d3d10;
        case 0x1d3d14u: goto label_1d3d14;
        case 0x1d3d18u: goto label_1d3d18;
        case 0x1d3d1cu: goto label_1d3d1c;
        case 0x1d3d20u: goto label_1d3d20;
        case 0x1d3d24u: goto label_1d3d24;
        case 0x1d3d28u: goto label_1d3d28;
        case 0x1d3d2cu: goto label_1d3d2c;
        case 0x1d3d30u: goto label_1d3d30;
        case 0x1d3d34u: goto label_1d3d34;
        case 0x1d3d38u: goto label_1d3d38;
        case 0x1d3d3cu: goto label_1d3d3c;
        case 0x1d3d40u: goto label_1d3d40;
        case 0x1d3d44u: goto label_1d3d44;
        case 0x1d3d48u: goto label_1d3d48;
        case 0x1d3d4cu: goto label_1d3d4c;
        case 0x1d3d50u: goto label_1d3d50;
        case 0x1d3d54u: goto label_1d3d54;
        case 0x1d3d58u: goto label_1d3d58;
        case 0x1d3d5cu: goto label_1d3d5c;
        case 0x1d3d60u: goto label_1d3d60;
        case 0x1d3d64u: goto label_1d3d64;
        case 0x1d3d68u: goto label_1d3d68;
        case 0x1d3d6cu: goto label_1d3d6c;
        case 0x1d3d70u: goto label_1d3d70;
        case 0x1d3d74u: goto label_1d3d74;
        case 0x1d3d78u: goto label_1d3d78;
        case 0x1d3d7cu: goto label_1d3d7c;
        case 0x1d3d80u: goto label_1d3d80;
        case 0x1d3d84u: goto label_1d3d84;
        case 0x1d3d88u: goto label_1d3d88;
        case 0x1d3d8cu: goto label_1d3d8c;
        case 0x1d3d90u: goto label_1d3d90;
        case 0x1d3d94u: goto label_1d3d94;
        case 0x1d3d98u: goto label_1d3d98;
        case 0x1d3d9cu: goto label_1d3d9c;
        case 0x1d3da0u: goto label_1d3da0;
        case 0x1d3da4u: goto label_1d3da4;
        case 0x1d3da8u: goto label_1d3da8;
        case 0x1d3dacu: goto label_1d3dac;
        case 0x1d3db0u: goto label_1d3db0;
        case 0x1d3db4u: goto label_1d3db4;
        case 0x1d3db8u: goto label_1d3db8;
        case 0x1d3dbcu: goto label_1d3dbc;
        case 0x1d3dc0u: goto label_1d3dc0;
        case 0x1d3dc4u: goto label_1d3dc4;
        case 0x1d3dc8u: goto label_1d3dc8;
        case 0x1d3dccu: goto label_1d3dcc;
        case 0x1d3dd0u: goto label_1d3dd0;
        case 0x1d3dd4u: goto label_1d3dd4;
        case 0x1d3dd8u: goto label_1d3dd8;
        case 0x1d3ddcu: goto label_1d3ddc;
        case 0x1d3de0u: goto label_1d3de0;
        case 0x1d3de4u: goto label_1d3de4;
        case 0x1d3de8u: goto label_1d3de8;
        case 0x1d3decu: goto label_1d3dec;
        case 0x1d3df0u: goto label_1d3df0;
        case 0x1d3df4u: goto label_1d3df4;
        case 0x1d3df8u: goto label_1d3df8;
        case 0x1d3dfcu: goto label_1d3dfc;
        case 0x1d3e00u: goto label_1d3e00;
        case 0x1d3e04u: goto label_1d3e04;
        case 0x1d3e08u: goto label_1d3e08;
        case 0x1d3e0cu: goto label_1d3e0c;
        case 0x1d3e10u: goto label_1d3e10;
        case 0x1d3e14u: goto label_1d3e14;
        case 0x1d3e18u: goto label_1d3e18;
        case 0x1d3e1cu: goto label_1d3e1c;
        case 0x1d3e20u: goto label_1d3e20;
        case 0x1d3e24u: goto label_1d3e24;
        case 0x1d3e28u: goto label_1d3e28;
        case 0x1d3e2cu: goto label_1d3e2c;
        case 0x1d3e30u: goto label_1d3e30;
        case 0x1d3e34u: goto label_1d3e34;
        case 0x1d3e38u: goto label_1d3e38;
        case 0x1d3e3cu: goto label_1d3e3c;
        case 0x1d3e40u: goto label_1d3e40;
        case 0x1d3e44u: goto label_1d3e44;
        case 0x1d3e48u: goto label_1d3e48;
        case 0x1d3e4cu: goto label_1d3e4c;
        case 0x1d3e50u: goto label_1d3e50;
        case 0x1d3e54u: goto label_1d3e54;
        case 0x1d3e58u: goto label_1d3e58;
        case 0x1d3e5cu: goto label_1d3e5c;
        case 0x1d3e60u: goto label_1d3e60;
        case 0x1d3e64u: goto label_1d3e64;
        case 0x1d3e68u: goto label_1d3e68;
        case 0x1d3e6cu: goto label_1d3e6c;
        case 0x1d3e70u: goto label_1d3e70;
        case 0x1d3e74u: goto label_1d3e74;
        case 0x1d3e78u: goto label_1d3e78;
        case 0x1d3e7cu: goto label_1d3e7c;
        case 0x1d3e80u: goto label_1d3e80;
        case 0x1d3e84u: goto label_1d3e84;
        case 0x1d3e88u: goto label_1d3e88;
        case 0x1d3e8cu: goto label_1d3e8c;
        case 0x1d3e90u: goto label_1d3e90;
        case 0x1d3e94u: goto label_1d3e94;
        case 0x1d3e98u: goto label_1d3e98;
        case 0x1d3e9cu: goto label_1d3e9c;
        case 0x1d3ea0u: goto label_1d3ea0;
        case 0x1d3ea4u: goto label_1d3ea4;
        case 0x1d3ea8u: goto label_1d3ea8;
        case 0x1d3eacu: goto label_1d3eac;
        case 0x1d3eb0u: goto label_1d3eb0;
        case 0x1d3eb4u: goto label_1d3eb4;
        case 0x1d3eb8u: goto label_1d3eb8;
        case 0x1d3ebcu: goto label_1d3ebc;
        case 0x1d3ec0u: goto label_1d3ec0;
        case 0x1d3ec4u: goto label_1d3ec4;
        case 0x1d3ec8u: goto label_1d3ec8;
        case 0x1d3eccu: goto label_1d3ecc;
        case 0x1d3ed0u: goto label_1d3ed0;
        case 0x1d3ed4u: goto label_1d3ed4;
        case 0x1d3ed8u: goto label_1d3ed8;
        case 0x1d3edcu: goto label_1d3edc;
        case 0x1d3ee0u: goto label_1d3ee0;
        case 0x1d3ee4u: goto label_1d3ee4;
        case 0x1d3ee8u: goto label_1d3ee8;
        case 0x1d3eecu: goto label_1d3eec;
        case 0x1d3ef0u: goto label_1d3ef0;
        case 0x1d3ef4u: goto label_1d3ef4;
        case 0x1d3ef8u: goto label_1d3ef8;
        case 0x1d3efcu: goto label_1d3efc;
        case 0x1d3f00u: goto label_1d3f00;
        case 0x1d3f04u: goto label_1d3f04;
        case 0x1d3f08u: goto label_1d3f08;
        case 0x1d3f0cu: goto label_1d3f0c;
        case 0x1d3f10u: goto label_1d3f10;
        case 0x1d3f14u: goto label_1d3f14;
        case 0x1d3f18u: goto label_1d3f18;
        case 0x1d3f1cu: goto label_1d3f1c;
        case 0x1d3f20u: goto label_1d3f20;
        case 0x1d3f24u: goto label_1d3f24;
        case 0x1d3f28u: goto label_1d3f28;
        case 0x1d3f2cu: goto label_1d3f2c;
        case 0x1d3f30u: goto label_1d3f30;
        case 0x1d3f34u: goto label_1d3f34;
        case 0x1d3f38u: goto label_1d3f38;
        case 0x1d3f3cu: goto label_1d3f3c;
        case 0x1d3f40u: goto label_1d3f40;
        case 0x1d3f44u: goto label_1d3f44;
        case 0x1d3f48u: goto label_1d3f48;
        case 0x1d3f4cu: goto label_1d3f4c;
        case 0x1d3f50u: goto label_1d3f50;
        case 0x1d3f54u: goto label_1d3f54;
        case 0x1d3f58u: goto label_1d3f58;
        case 0x1d3f5cu: goto label_1d3f5c;
        case 0x1d3f60u: goto label_1d3f60;
        case 0x1d3f64u: goto label_1d3f64;
        case 0x1d3f68u: goto label_1d3f68;
        case 0x1d3f6cu: goto label_1d3f6c;
        case 0x1d3f70u: goto label_1d3f70;
        case 0x1d3f74u: goto label_1d3f74;
        case 0x1d3f78u: goto label_1d3f78;
        case 0x1d3f7cu: goto label_1d3f7c;
        case 0x1d3f80u: goto label_1d3f80;
        case 0x1d3f84u: goto label_1d3f84;
        case 0x1d3f88u: goto label_1d3f88;
        case 0x1d3f8cu: goto label_1d3f8c;
        case 0x1d3f90u: goto label_1d3f90;
        case 0x1d3f94u: goto label_1d3f94;
        case 0x1d3f98u: goto label_1d3f98;
        case 0x1d3f9cu: goto label_1d3f9c;
        case 0x1d3fa0u: goto label_1d3fa0;
        case 0x1d3fa4u: goto label_1d3fa4;
        case 0x1d3fa8u: goto label_1d3fa8;
        case 0x1d3facu: goto label_1d3fac;
        case 0x1d3fb0u: goto label_1d3fb0;
        case 0x1d3fb4u: goto label_1d3fb4;
        case 0x1d3fb8u: goto label_1d3fb8;
        case 0x1d3fbcu: goto label_1d3fbc;
        case 0x1d3fc0u: goto label_1d3fc0;
        case 0x1d3fc4u: goto label_1d3fc4;
        case 0x1d3fc8u: goto label_1d3fc8;
        case 0x1d3fccu: goto label_1d3fcc;
        case 0x1d3fd0u: goto label_1d3fd0;
        case 0x1d3fd4u: goto label_1d3fd4;
        case 0x1d3fd8u: goto label_1d3fd8;
        case 0x1d3fdcu: goto label_1d3fdc;
        case 0x1d3fe0u: goto label_1d3fe0;
        case 0x1d3fe4u: goto label_1d3fe4;
        case 0x1d3fe8u: goto label_1d3fe8;
        case 0x1d3fecu: goto label_1d3fec;
        case 0x1d3ff0u: goto label_1d3ff0;
        case 0x1d3ff4u: goto label_1d3ff4;
        case 0x1d3ff8u: goto label_1d3ff8;
        case 0x1d3ffcu: goto label_1d3ffc;
        case 0x1d4000u: goto label_1d4000;
        case 0x1d4004u: goto label_1d4004;
        case 0x1d4008u: goto label_1d4008;
        case 0x1d400cu: goto label_1d400c;
        case 0x1d4010u: goto label_1d4010;
        case 0x1d4014u: goto label_1d4014;
        case 0x1d4018u: goto label_1d4018;
        case 0x1d401cu: goto label_1d401c;
        case 0x1d4020u: goto label_1d4020;
        case 0x1d4024u: goto label_1d4024;
        case 0x1d4028u: goto label_1d4028;
        case 0x1d402cu: goto label_1d402c;
        case 0x1d4030u: goto label_1d4030;
        case 0x1d4034u: goto label_1d4034;
        case 0x1d4038u: goto label_1d4038;
        case 0x1d403cu: goto label_1d403c;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4044u: goto label_1d4044;
        case 0x1d4048u: goto label_1d4048;
        case 0x1d404cu: goto label_1d404c;
        case 0x1d4050u: goto label_1d4050;
        case 0x1d4054u: goto label_1d4054;
        case 0x1d4058u: goto label_1d4058;
        case 0x1d405cu: goto label_1d405c;
        case 0x1d4060u: goto label_1d4060;
        case 0x1d4064u: goto label_1d4064;
        case 0x1d4068u: goto label_1d4068;
        case 0x1d406cu: goto label_1d406c;
        case 0x1d4070u: goto label_1d4070;
        case 0x1d4074u: goto label_1d4074;
        case 0x1d4078u: goto label_1d4078;
        case 0x1d407cu: goto label_1d407c;
        case 0x1d4080u: goto label_1d4080;
        case 0x1d4084u: goto label_1d4084;
        case 0x1d4088u: goto label_1d4088;
        case 0x1d408cu: goto label_1d408c;
        case 0x1d4090u: goto label_1d4090;
        case 0x1d4094u: goto label_1d4094;
        case 0x1d4098u: goto label_1d4098;
        case 0x1d409cu: goto label_1d409c;
        case 0x1d40a0u: goto label_1d40a0;
        case 0x1d40a4u: goto label_1d40a4;
        case 0x1d40a8u: goto label_1d40a8;
        case 0x1d40acu: goto label_1d40ac;
        case 0x1d40b0u: goto label_1d40b0;
        case 0x1d40b4u: goto label_1d40b4;
        case 0x1d40b8u: goto label_1d40b8;
        case 0x1d40bcu: goto label_1d40bc;
        case 0x1d40c0u: goto label_1d40c0;
        case 0x1d40c4u: goto label_1d40c4;
        case 0x1d40c8u: goto label_1d40c8;
        case 0x1d40ccu: goto label_1d40cc;
        case 0x1d40d0u: goto label_1d40d0;
        case 0x1d40d4u: goto label_1d40d4;
        case 0x1d40d8u: goto label_1d40d8;
        case 0x1d40dcu: goto label_1d40dc;
        case 0x1d40e0u: goto label_1d40e0;
        case 0x1d40e4u: goto label_1d40e4;
        default: return;
    }

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
            goto label_1d3b9c;
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
label_1d3b80:
    // 0x1d3b80: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b84:
    // 0x1d3b84: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x1d3b84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d3b88:
    // 0x1d3b88: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x1d3b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d3b8c:
    // 0x1d3b8c: 0xe421b540  swc1        $f1, -0x4AC0($at)
    ctx->pc = 0x1d3b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948160), bits); }
label_1d3b90:
    // 0x1d3b90: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d3b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d3b94:
    // 0x1d3b94: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b98:
    // 0x1d3b98: 0xe420b530  swc1        $f0, -0x4AD0($at)
    ctx->pc = 0x1d3b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948144), bits); }
label_1d3b9c:
    // 0x1d3b9c: 0x0  nop
    ctx->pc = 0x1d3b9cu;
    // NOP
label_1d3ba0:
    // 0x1d3ba0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3ba4:
    // 0x1d3ba4: 0xc422b530  lwc1        $f2, -0x4AD0($at)
    ctx->pc = 0x1d3ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3ba8:
    // 0x1d3ba8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_1d3bac:
    // 0x1d3bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3bb0:
    // 0x1d3bb0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1d3bb4:
    // 0x1d3bb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3bb8:
    // 0x1d3bb8: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1d3bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1d3bbc:
    // 0x1d3bbc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1d3bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1d3bc0:
    // 0x1d3bc0: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1d3bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_1d3bc4:
    // 0x1d3bc4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1d3bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_1d3bc8:
    // 0x1d3bc8: 0x24842190  addiu       $a0, $a0, 0x2190
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8592));
label_1d3bcc:
    // 0x1d3bcc: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x1d3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
label_1d3bd0:
    // 0x1d3bd0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1d3bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1d3bd4:
    // 0x1d3bd4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3bd8:
    // 0x1d3bd8: 0x24e7b4d0  addiu       $a3, $a3, -0x4B30
    ctx->pc = 0x1d3bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948048));
label_1d3bdc:
    // 0x1d3bdc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3be0:
    // 0x1d3be0: 0xe422b520  swc1        $f2, -0x4AE0($at)
    ctx->pc = 0x1d3be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948128), bits); }
label_1d3be4:
    // 0x1d3be4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3be8:
    // 0x1d3be8: 0xe420b514  swc1        $f0, -0x4AEC($at)
    ctx->pc = 0x1d3be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948116), bits); }
label_1d3bec:
    // 0x1d3bec: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3bf0:
    // 0x1d3bf0: 0xe420b534  swc1        $f0, -0x4ACC($at)
    ctx->pc = 0x1d3bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948148), bits); }
label_1d3bf4:
    // 0x1d3bf4: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x1d3bf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_1d3bf8:
    // 0x1d3bf8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3bfc:
    // 0x1d3bfc: 0xe422b510  swc1        $f2, -0x4AF0($at)
    ctx->pc = 0x1d3bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948112), bits); }
label_1d3c00:
    // 0x1d3c00: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x1d3c00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1d3c04:
    // 0x1d3c04: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c08:
    // 0x1d3c08: 0xe421b524  swc1        $f1, -0x4ADC($at)
    ctx->pc = 0x1d3c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948132), bits); }
label_1d3c0c:
    // 0x1d3c0c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c10:
    // 0x1d3c10: 0xe421b544  swc1        $f1, -0x4ABC($at)
    ctx->pc = 0x1d3c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948164), bits); }
label_1d3c14:
    // 0x1d3c14: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1d3c14u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1d3c18:
    // 0x1d3c18: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c1c:
    // 0x1d3c1c: 0xe420b574  swc1        $f0, -0x4A8C($at)
    ctx->pc = 0x1d3c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948212), bits); }
label_1d3c20:
    // 0x1d3c20: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c24:
    // 0x1d3c24: 0xe420b554  swc1        $f0, -0x4AAC($at)
    ctx->pc = 0x1d3c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948180), bits); }
label_1d3c28:
    // 0x1d3c28: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c2c:
    // 0x1d3c2c: 0xc420b544  lwc1        $f0, -0x4ABC($at)
    ctx->pc = 0x1d3c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3c30:
    // 0x1d3c30: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c34:
    // 0x1d3c34: 0xe420b584  swc1        $f0, -0x4A7C($at)
    ctx->pc = 0x1d3c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948228), bits); }
label_1d3c38:
    // 0x1d3c38: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c3c:
    // 0x1d3c3c: 0xc067090  jal         func_19C240
label_1d3c40:
    if (ctx->pc == 0x1D3C40u) {
        ctx->pc = 0x1D3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C3Cu;
        // 0x1d3c40: 0xe420b564  swc1        $f0, -0x4A9C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C44u;
        goto label_1d3c44;
    }
    ctx->pc = 0x1D3C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C44u);
    ctx->pc = 0x1D3C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C3Cu;
    // 0x1d3c40: 0xe420b564  swc1        $f0, -0x4A9C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    { ctx->pc = 0x19c240; return; }
    ctx->pc = 0x1D3C44u;
label_1d3c44:
    // 0x1d3c44: 0x1440024c  bnez        $v0, . + 4 + (0x24C << 2)
label_1d3c48:
    if (ctx->pc == 0x1D3C48u) {
        ctx->pc = 0x1D3C4Cu;
        goto label_1d3c4c;
    }
    ctx->pc = 0x1D3C44u;
    {
        const bool branch_taken_0x1d3c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c44) {
            ctx->pc = 0x1D4578u;
            { ctx->pc = 0x1d4578; return; }
        }
    }
    ctx->pc = 0x1D3C4Cu;
label_1d3c4c:
    // 0x1d3c4c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1d3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d3c50:
    // 0x1d3c50: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1d3c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d3c54:
    // 0x1d3c54: 0x10200164  beqz        $at, . + 4 + (0x164 << 2)
label_1d3c58:
    if (ctx->pc == 0x1D3C58u) {
        ctx->pc = 0x1D3C5Cu;
        goto label_1d3c5c;
    }
    ctx->pc = 0x1D3C54u;
    {
        const bool branch_taken_0x1d3c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c54) {
            ctx->pc = 0x1D41E8u;
            { ctx->pc = 0x1d41e8; return; }
        }
    }
    ctx->pc = 0x1D3C5Cu;
label_1d3c5c:
    // 0x1d3c5c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1d3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1d3c60:
    // 0x1d3c60: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d3c64:
    // 0x1d3c64: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1d3c68:
    if (ctx->pc == 0x1D3C68u) {
        ctx->pc = 0x1D3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C64u;
        // 0x1d3c68: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C6Cu;
        goto label_1d3c6c;
    }
    ctx->pc = 0x1D3C64u;
    {
        const bool branch_taken_0x1d3c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C64u;
        // 0x1d3c68: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c64) {
            ctx->pc = 0x1D3C80u;
            goto label_1d3c80;
        }
    }
    ctx->pc = 0x1D3C6Cu;
label_1d3c6c:
    // 0x1d3c6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d3c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d3c70:
    // 0x1d3c70: 0x8c224968  lw          $v0, 0x4968($at)
    ctx->pc = 0x1d3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_1d3c74:
    // 0x1d3c74: 0x90420282  lbu         $v0, 0x282($v0)
    ctx->pc = 0x1d3c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 642)));
label_1d3c78:
    // 0x1d3c78: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d3c7c:
    if (ctx->pc == 0x1D3C7Cu) {
        ctx->pc = 0x1D3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C78u;
        // 0x1d3c7c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C80u;
        goto label_1d3c80;
    }
    ctx->pc = 0x1D3C78u;
    {
        const bool branch_taken_0x1d3c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C78u;
        // 0x1d3c7c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c78) {
            ctx->pc = 0x1D3CA8u;
            goto label_1d3ca8;
        }
    }
    ctx->pc = 0x1D3C80u;
label_1d3c80:
    // 0x1d3c80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d3c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d3c84:
    // 0x1d3c84: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1d3c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1d3c88:
    // 0x1d3c88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d3c8c:
    if (ctx->pc == 0x1D3C8Cu) {
        ctx->pc = 0x1D3C90u;
        goto label_1d3c90;
    }
    ctx->pc = 0x1D3C88u;
    {
        const bool branch_taken_0x1d3c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c88) {
            ctx->pc = 0x1D3CA8u;
            goto label_1d3ca8;
        }
    }
    ctx->pc = 0x1D3C90u;
label_1d3c90:
    // 0x1d3c90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d3c94:
    // 0x1d3c94: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1d3c98:
    if (ctx->pc == 0x1D3C98u) {
        ctx->pc = 0x1D3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C94u;
        // 0x1d3c98: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C9Cu;
        goto label_1d3c9c;
    }
    ctx->pc = 0x1D3C94u;
    {
        const bool branch_taken_0x1d3c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C94u;
        // 0x1d3c98: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c94) {
            ctx->pc = 0x1D3CA8u;
            goto label_1d3ca8;
        }
    }
    ctx->pc = 0x1D3C9Cu;
label_1d3c9c:
    // 0x1d3c9c: 0x8c2249f8  lw          $v0, 0x49F8($at)
    ctx->pc = 0x1d3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_1d3ca0:
    // 0x1d3ca0: 0x90420282  lbu         $v0, 0x282($v0)
    ctx->pc = 0x1d3ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 642)));
label_1d3ca4:
    // 0x1d3ca4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d3ca8:
    // 0x1d3ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3cac:
    // 0x1d3cac: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1d3cb0:
    if (ctx->pc == 0x1D3CB0u) {
        ctx->pc = 0x1D3CB4u;
        goto label_1d3cb4;
    }
    ctx->pc = 0x1D3CACu;
    {
        const bool branch_taken_0x1d3cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3cac) {
            ctx->pc = 0x1D3CBCu;
            goto label_1d3cbc;
        }
    }
    ctx->pc = 0x1D3CB4u;
label_1d3cb4:
    // 0x1d3cb4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d3cb8:
    if (ctx->pc == 0x1D3CB8u) {
        ctx->pc = 0x1D3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CB4u;
        // 0x1d3cb8: 0x26310032  addiu       $s1, $s1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3CBCu;
        goto label_1d3cbc;
    }
    ctx->pc = 0x1D3CB4u;
    {
        const bool branch_taken_0x1d3cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CB4u;
        // 0x1d3cb8: 0x26310032  addiu       $s1, $s1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cb4) {
            ctx->pc = 0x1D3CD0u;
            goto label_1d3cd0;
        }
    }
    ctx->pc = 0x1D3CBCu;
label_1d3cbc:
    // 0x1d3cbc: 0x0  nop
    ctx->pc = 0x1d3cbcu;
    // NOP
label_1d3cc0:
    // 0x1d3cc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3cc4:
    // 0x1d3cc4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_1d3cc8:
    if (ctx->pc == 0x1D3CC8u) {
        ctx->pc = 0x1D3CCCu;
        goto label_1d3ccc;
    }
    ctx->pc = 0x1D3CC4u;
    {
        const bool branch_taken_0x1d3cc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3cc4) {
            ctx->pc = 0x1D3CD0u;
            goto label_1d3cd0;
        }
    }
    ctx->pc = 0x1D3CCCu;
label_1d3ccc:
    // 0x1d3ccc: 0x26310096  addiu       $s1, $s1, 0x96
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 150));
label_1d3cd0:
    // 0x1d3cd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3cd4:
    // 0x1d3cd4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1d3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_1d3cd8:
    // 0x1d3cd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d3cd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3cdc:
    // 0x1d3cdc: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1d3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_1d3ce0:
    // 0x1d3ce0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d3ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d3ce4:
    // 0x1d3ce4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d3ce8:
    // 0x1d3ce8: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1d3cec:
    // 0x1d3cec: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1d3cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1d3cf0:
    // 0x1d3cf0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d3cf4:
    // 0x1d3cf4: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x1d3cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d3cf8:
    // 0x1d3cf8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1d3cfc:
    // 0x1d3cfc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d3d00:
    // 0x1d3d00: 0x2463b4d0  addiu       $v1, $v1, -0x4B30
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948048));
label_1d3d04:
    // 0x1d3d04: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d3d08:
    // 0x1d3d08: 0xc066d7a  jal         func_19B5E8
label_1d3d0c:
    if (ctx->pc == 0x1D3D0Cu) {
        ctx->pc = 0x1D3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D08u;
        // 0x1d3d0c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D10u;
        goto label_1d3d10;
    }
    ctx->pc = 0x1D3D08u;
    SET_GPR_U32(ctx, 31, 0x1D3D10u);
    ctx->pc = 0x1D3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D08u;
    // 0x1d3d0c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1D3D08u, 0x1D3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D10u;
label_1d3d10:
    // 0x1d3d10: 0x27b5025c  addiu       $s5, $sp, 0x25C
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_1d3d14:
    // 0x1d3d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d3d18:
    // 0x1d3d18: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3d1c:
    // 0x1d3d1c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1d3d20:
    // 0x1d3d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3d24:
    // 0x1d3d24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3d28:
    // 0x1d3d28: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d3d28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1d3d2c:
    // 0x1d3d2c: 0x0  nop
    ctx->pc = 0x1d3d2cu;
    // NOP
label_1d3d30:
    // 0x1d3d30: 0x0  nop
    ctx->pc = 0x1d3d30u;
    // NOP
label_1d3d34:
    // 0x1d3d34: 0xc066e14  jal         func_19B850
label_1d3d38:
    if (ctx->pc == 0x1D3D38u) {
        ctx->pc = 0x1D3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D34u;
        // 0x1d3d38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D3Cu;
        goto label_1d3d3c;
    }
    ctx->pc = 0x1D3D34u;
    SET_GPR_U32(ctx, 31, 0x1D3D3Cu);
    ctx->pc = 0x1D3D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D34u;
    // 0x1d3d38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1D3D3Cu;
label_1d3d3c:
    // 0x1d3d3c: 0xc07f198  jal         func_1FC660
label_1d3d40:
    if (ctx->pc == 0x1D3D40u) {
        ctx->pc = 0x1D3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D3Cu;
        // 0x1d3d40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D44u;
        goto label_1d3d44;
    }
    ctx->pc = 0x1D3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D44u);
    ctx->pc = 0x1D3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D3Cu;
    // 0x1d3d40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1D3D44u;
label_1d3d44:
    // 0x1d3d44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d3d44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d3d48:
    // 0x1d3d48: 0xc07f190  jal         func_1FC640
label_1d3d4c:
    if (ctx->pc == 0x1D3D4Cu) {
        ctx->pc = 0x1D3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D48u;
        // 0x1d3d4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D50u;
        goto label_1d3d50;
    }
    ctx->pc = 0x1D3D48u;
    SET_GPR_U32(ctx, 31, 0x1D3D50u);
    ctx->pc = 0x1D3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D48u;
    // 0x1d3d4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1D3D50u;
label_1d3d50:
    // 0x1d3d50: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d3d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d3d54:
    // 0x1d3d54: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d3d58:
    // 0x1d3d58: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1d3d58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d3d5c:
    // 0x1d3d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3d60:
    // 0x1d3d60: 0x0  nop
    ctx->pc = 0x1d3d60u;
    // NOP
label_1d3d64:
    // 0x1d3d64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d3d64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3d68:
    // 0x1d3d68: 0x0  nop
    ctx->pc = 0x1d3d68u;
    // NOP
label_1d3d6c:
    // 0x1d3d6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d3d70:
    if (ctx->pc == 0x1D3D70u) {
        ctx->pc = 0x1D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6Cu;
        // 0x1d3d70: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D74u;
        goto label_1d3d74;
    }
    ctx->pc = 0x1D3D6Cu;
    {
        const bool branch_taken_0x1d3d6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6Cu;
        // 0x1d3d70: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d6c) {
            ctx->pc = 0x1D3D7Cu;
            goto label_1d3d7c;
        }
    }
    ctx->pc = 0x1D3D74u;
label_1d3d74:
    // 0x1d3d74: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d3d78:
    if (ctx->pc == 0x1D3D78u) {
        ctx->pc = 0x1D3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D74u;
        // 0x1d3d78: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D7Cu;
        goto label_1d3d7c;
    }
    ctx->pc = 0x1D3D74u;
    {
        const bool branch_taken_0x1d3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D74u;
        // 0x1d3d78: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d74) {
            ctx->pc = 0x1D3D9Cu;
            goto label_1d3d9c;
        }
    }
    ctx->pc = 0x1D3D7Cu;
label_1d3d7c:
    // 0x1d3d7c: 0x0  nop
    ctx->pc = 0x1d3d7cu;
    // NOP
label_1d3d80:
    // 0x1d3d80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3d80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3d84:
    // 0x1d3d84: 0x0  nop
    ctx->pc = 0x1d3d84u;
    // NOP
label_1d3d88:
    // 0x1d3d88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d3d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3d8c:
    // 0x1d3d8c: 0x0  nop
    ctx->pc = 0x1d3d8cu;
    // NOP
label_1d3d90:
    // 0x1d3d90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d3d94:
    if (ctx->pc == 0x1D3D94u) {
        ctx->pc = 0x1D3D98u;
        goto label_1d3d98;
    }
    ctx->pc = 0x1D3D90u;
    {
        const bool branch_taken_0x1d3d90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3d90) {
            ctx->pc = 0x1D3D9Cu;
            goto label_1d3d9c;
        }
    }
    ctx->pc = 0x1D3D98u;
label_1d3d98:
    // 0x1d3d98: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d3d9c:
    // 0x1d3d9c: 0x0  nop
    ctx->pc = 0x1d3d9cu;
    // NOP
label_1d3da0:
    // 0x1d3da0: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1d3da4:
    // 0x1d3da4: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x1d3da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3da8:
    // 0x1d3da8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1d3dac:
    // 0x1d3dac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3db0:
    // 0x1d3db0: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1d3db4:
    // 0x1d3db4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3db8:
    // 0x1d3db8: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x1d3db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_1d3dbc:
    // 0x1d3dbc: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3dc0:
    // 0x1d3dc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3dc4:
    // 0x1d3dc4: 0xc066e34  jal         func_19B8D0
label_1d3dc8:
    if (ctx->pc == 0x1D3DC8u) {
        ctx->pc = 0x1D3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC4u;
        // 0x1d3dc8: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DCCu;
        goto label_1d3dcc;
    }
    ctx->pc = 0x1D3DC4u;
    SET_GPR_U32(ctx, 31, 0x1D3DCCu);
    ctx->pc = 0x1D3DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DC4u;
    // 0x1d3dc8: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1D3DCCu;
label_1d3dcc:
    // 0x1d3dcc: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1d3dd0:
    // 0x1d3dd0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1d3dd4:
    // 0x1d3dd4: 0xc066d7a  jal         func_19B5E8
label_1d3dd8:
    if (ctx->pc == 0x1D3DD8u) {
        ctx->pc = 0x1D3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD4u;
        // 0x1d3dd8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DDCu;
        goto label_1d3ddc;
    }
    ctx->pc = 0x1D3DD4u;
    SET_GPR_U32(ctx, 31, 0x1D3DDCu);
    ctx->pc = 0x1D3DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DD4u;
    // 0x1d3dd8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1D3DD4u, 0x1D3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DDCu;
label_1d3ddc:
    // 0x1d3ddc: 0x27b5026c  addiu       $s5, $sp, 0x26C
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_1d3de0:
    // 0x1d3de0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d3de4:
    // 0x1d3de4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3de8:
    // 0x1d3de8: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1d3de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1d3dec:
    // 0x1d3dec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3df0:
    // 0x1d3df0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3df4:
    // 0x1d3df4: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d3df4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1d3df8:
    // 0x1d3df8: 0x0  nop
    ctx->pc = 0x1d3df8u;
    // NOP
label_1d3dfc:
    // 0x1d3dfc: 0x0  nop
    ctx->pc = 0x1d3dfcu;
    // NOP
label_1d3e00:
    // 0x1d3e00: 0xc066e14  jal         func_19B850
label_1d3e04:
    if (ctx->pc == 0x1D3E04u) {
        ctx->pc = 0x1D3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E00u;
        // 0x1d3e04: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E08u;
        goto label_1d3e08;
    }
    ctx->pc = 0x1D3E00u;
    SET_GPR_U32(ctx, 31, 0x1D3E08u);
    ctx->pc = 0x1D3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E00u;
    // 0x1d3e04: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1D3E08u;
label_1d3e08:
    // 0x1d3e08: 0xc07f198  jal         func_1FC660
label_1d3e0c:
    if (ctx->pc == 0x1D3E0Cu) {
        ctx->pc = 0x1D3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E08u;
        // 0x1d3e0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E10u;
        goto label_1d3e10;
    }
    ctx->pc = 0x1D3E08u;
    SET_GPR_U32(ctx, 31, 0x1D3E10u);
    ctx->pc = 0x1D3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E08u;
    // 0x1d3e0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1D3E10u;
label_1d3e10:
    // 0x1d3e10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d3e10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d3e14:
    // 0x1d3e14: 0xc07f190  jal         func_1FC640
label_1d3e18:
    if (ctx->pc == 0x1D3E18u) {
        ctx->pc = 0x1D3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E14u;
        // 0x1d3e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E1Cu;
        goto label_1d3e1c;
    }
    ctx->pc = 0x1D3E14u;
    SET_GPR_U32(ctx, 31, 0x1D3E1Cu);
    ctx->pc = 0x1D3E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E14u;
    // 0x1d3e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1D3E1Cu;
label_1d3e1c:
    // 0x1d3e1c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d3e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d3e20:
    // 0x1d3e20: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d3e24:
    // 0x1d3e24: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1d3e24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d3e28:
    // 0x1d3e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3e2c:
    // 0x1d3e2c: 0x0  nop
    ctx->pc = 0x1d3e2cu;
    // NOP
label_1d3e30:
    // 0x1d3e30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d3e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3e34:
    // 0x1d3e34: 0x0  nop
    ctx->pc = 0x1d3e34u;
    // NOP
label_1d3e38:
    // 0x1d3e38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d3e3c:
    if (ctx->pc == 0x1D3E3Cu) {
        ctx->pc = 0x1D3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E38u;
        // 0x1d3e3c: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E40u;
        goto label_1d3e40;
    }
    ctx->pc = 0x1D3E38u;
    {
        const bool branch_taken_0x1d3e38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E38u;
        // 0x1d3e3c: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e38) {
            ctx->pc = 0x1D3E48u;
            goto label_1d3e48;
        }
    }
    ctx->pc = 0x1D3E40u;
label_1d3e40:
    // 0x1d3e40: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d3e44:
    if (ctx->pc == 0x1D3E44u) {
        ctx->pc = 0x1D3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E40u;
        // 0x1d3e44: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E48u;
        goto label_1d3e48;
    }
    ctx->pc = 0x1D3E40u;
    {
        const bool branch_taken_0x1d3e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E40u;
        // 0x1d3e44: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e40) {
            ctx->pc = 0x1D3E64u;
            goto label_1d3e64;
        }
    }
    ctx->pc = 0x1D3E48u;
label_1d3e48:
    // 0x1d3e48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3e4c:
    // 0x1d3e4c: 0x0  nop
    ctx->pc = 0x1d3e4cu;
    // NOP
label_1d3e50:
    // 0x1d3e50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d3e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3e54:
    // 0x1d3e54: 0x0  nop
    ctx->pc = 0x1d3e54u;
    // NOP
label_1d3e58:
    // 0x1d3e58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d3e5c:
    if (ctx->pc == 0x1D3E5Cu) {
        ctx->pc = 0x1D3E60u;
        goto label_1d3e60;
    }
    ctx->pc = 0x1D3E58u;
    {
        const bool branch_taken_0x1d3e58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3e58) {
            ctx->pc = 0x1D3E64u;
            goto label_1d3e64;
        }
    }
    ctx->pc = 0x1D3E60u;
label_1d3e60:
    // 0x1d3e60: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d3e64:
    // 0x1d3e64: 0x0  nop
    ctx->pc = 0x1d3e64u;
    // NOP
label_1d3e68:
    // 0x1d3e68: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1d3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1d3e6c:
    // 0x1d3e6c: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x1d3e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3e70:
    // 0x1d3e70: 0x27b70180  addiu       $s7, $sp, 0x180
    ctx->pc = 0x1d3e70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d3e74:
    // 0x1d3e74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3e78:
    // 0x1d3e78: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1d3e7c:
    // 0x1d3e7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e80:
    // 0x1d3e80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3e84:
    // 0x1d3e84: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x1d3e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_1d3e88:
    // 0x1d3e88: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3e8c:
    // 0x1d3e8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3e90:
    // 0x1d3e90: 0xc066e34  jal         func_19B8D0
label_1d3e94:
    if (ctx->pc == 0x1D3E94u) {
        ctx->pc = 0x1D3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E90u;
        // 0x1d3e94: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E98u;
        goto label_1d3e98;
    }
    ctx->pc = 0x1D3E90u;
    SET_GPR_U32(ctx, 31, 0x1D3E98u);
    ctx->pc = 0x1D3E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E90u;
    // 0x1d3e94: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1D3E98u;
label_1d3e98:
    // 0x1d3e98: 0x87a40170  lh          $a0, 0x170($sp)
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
label_1d3e9c:
    // 0x1d3e9c: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_1d3ea0:
    // 0x1d3ea0: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x1d3ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1d3ea4:
    // 0x1d3ea4: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x1d3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_1d3ea8:
    // 0x1d3ea8: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x1d3ea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d3eac:
    // 0x1d3eac: 0xa6440080  sh          $a0, 0x80($s2)
    ctx->pc = 0x1d3eacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 4));
label_1d3eb0:
    // 0x1d3eb0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d3eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d3eb4:
    // 0x1d3eb4: 0xa6440082  sh          $a0, 0x82($s2)
    ctx->pc = 0x1d3eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 130), (uint16_t)GPR_U32(ctx, 4));
label_1d3eb8:
    // 0x1d3eb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d3eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3ebc:
    // 0x1d3ebc: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x1d3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
label_1d3ec0:
    // 0x1d3ec0: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x1d3ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_1d3ec4:
    // 0x1d3ec4: 0xa6440090  sh          $a0, 0x90($s2)
    ctx->pc = 0x1d3ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 4));
label_1d3ec8:
    // 0x1d3ec8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1d3ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d3ecc:
    // 0x1d3ecc: 0xa6440092  sh          $a0, 0x92($s2)
    ctx->pc = 0x1d3eccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 4));
label_1d3ed0:
    // 0x1d3ed0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3ed4:
    // 0x1d3ed4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1d3ed8:
    if (ctx->pc == 0x1D3ED8u) {
        ctx->pc = 0x1D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ED4u;
        // 0x1d3ed8: 0xae440094  sw          $a0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3EDCu;
        goto label_1d3edc;
    }
    ctx->pc = 0x1D3ED4u;
    {
        const bool branch_taken_0x1d3ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ED4u;
        // 0x1d3ed8: 0xae440094  sw          $a0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ed4) {
            ctx->pc = 0x1D3F00u;
            goto label_1d3f00;
        }
    }
    ctx->pc = 0x1D3EDCu;
label_1d3edc:
    // 0x1d3edc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1d3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d3ee0:
    // 0x1d3ee0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1d3ee4:
    // 0x1d3ee4: 0xa2440070  sb          $a0, 0x70($s2)
    ctx->pc = 0x1d3ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 4));
label_1d3ee8:
    // 0x1d3ee8: 0xa2440071  sb          $a0, 0x71($s2)
    ctx->pc = 0x1d3ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 4));
label_1d3eec:
    // 0x1d3eec: 0xa2440072  sb          $a0, 0x72($s2)
    ctx->pc = 0x1d3eecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 4));
label_1d3ef0:
    // 0x1d3ef0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1d3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d3ef4:
    // 0x1d3ef4: 0xa2440073  sb          $a0, 0x73($s2)
    ctx->pc = 0x1d3ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 4));
label_1d3ef8:
    // 0x1d3ef8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d3efc:
    if (ctx->pc == 0x1D3EFCu) {
        ctx->pc = 0x1D3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EF8u;
        // 0x1d3efc: 0xae450074  sw          $a1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3F00u;
        goto label_1d3f00;
    }
    ctx->pc = 0x1D3EF8u;
    {
        const bool branch_taken_0x1d3ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EF8u;
        // 0x1d3efc: 0xae450074  sw          $a1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ef8) {
            ctx->pc = 0x1D3F1Cu;
            goto label_1d3f1c;
        }
    }
    ctx->pc = 0x1D3F00u;
label_1d3f00:
    // 0x1d3f00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d3f04:
    // 0x1d3f04: 0xa2450070  sb          $a1, 0x70($s2)
    ctx->pc = 0x1d3f04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 5));
label_1d3f08:
    // 0x1d3f08: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d3f0c:
    // 0x1d3f0c: 0xa2450071  sb          $a1, 0x71($s2)
    ctx->pc = 0x1d3f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 5));
label_1d3f10:
    // 0x1d3f10: 0xa2450072  sb          $a1, 0x72($s2)
    ctx->pc = 0x1d3f10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 5));
label_1d3f14:
    // 0x1d3f14: 0xa25e0073  sb          $fp, 0x73($s2)
    ctx->pc = 0x1d3f14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 30));
label_1d3f18:
    // 0x1d3f18: 0xae440074  sw          $a0, 0x74($s2)
    ctx->pc = 0x1d3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
label_1d3f1c:
    // 0x1d3f1c: 0x0  nop
    ctx->pc = 0x1d3f1cu;
    // NOP
label_1d3f20:
    // 0x1d3f20: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x1d3f20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d3f24:
    // 0x1d3f24: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1d3f28:
    if (ctx->pc == 0x1D3F28u) {
        ctx->pc = 0x1D3F2Cu;
        goto label_1d3f2c;
    }
    ctx->pc = 0x1D3F24u;
    {
        const bool branch_taken_0x1d3f24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3f24) {
            ctx->pc = 0x1D3F70u;
            goto label_1d3f70;
        }
    }
    ctx->pc = 0x1D3F2Cu;
label_1d3f2c:
    // 0x1d3f2c: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x1d3f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d3f30:
    // 0x1d3f30: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1d3f34:
    // 0x1d3f34: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d3f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3f38:
    // 0x1d3f38: 0x24a5b260  addiu       $a1, $a1, -0x4DA0
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947424));
label_1d3f3c:
    // 0x1d3f3c: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d3f40:
    // 0x1d3f40: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d3f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1d3f44:
    // 0x1d3f44: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d3f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1d3f48:
    // 0x1d3f48: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1d3f4c:
    // 0x1d3f4c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3f50:
    // 0x1d3f50: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1d3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1d3f54:
    // 0x1d3f54: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x1d3f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_1d3f58:
    // 0x1d3f58: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3f5c:
    // 0x1d3f5c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d3f60:
    // 0x1d3f60: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3f64:
    // 0x1d3f64: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3f68:
    // 0x1d3f68: 0x10000065  b           . + 4 + (0x65 << 2)
label_1d3f6c:
    if (ctx->pc == 0x1D3F6Cu) {
        ctx->pc = 0x1D3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F68u;
        // 0x1d3f6c: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3F70u;
        goto label_1d3f70;
    }
    ctx->pc = 0x1D3F68u;
    {
        const bool branch_taken_0x1d3f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F68u;
        // 0x1d3f6c: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f68) {
            ctx->pc = 0x1D4100u;
            { ctx->pc = 0x1d4100; return; }
        }
    }
    ctx->pc = 0x1D3F70u;
label_1d3f70:
    // 0x1d3f70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d3f74:
    // 0x1d3f74: 0x16040023  bne         $s0, $a0, . + 4 + (0x23 << 2)
label_1d3f78:
    if (ctx->pc == 0x1D3F78u) {
        ctx->pc = 0x1D3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F74u;
        // 0x1d3f78: 0x2a210064  slti        $at, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3F7Cu;
        goto label_1d3f7c;
    }
    ctx->pc = 0x1D3F74u;
    {
        const bool branch_taken_0x1d3f74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F74u;
        // 0x1d3f78: 0x2a210064  slti        $at, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f74) {
            ctx->pc = 0x1D4004u;
            goto label_1d4004;
        }
    }
    ctx->pc = 0x1D3F7Cu;
label_1d3f7c:
    // 0x1d3f7c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1d3f80:
    if (ctx->pc == 0x1D3F80u) {
        ctx->pc = 0x1D3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F7Cu;
        // 0x1d3f80: 0x3c046666  lui         $a0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3F84u;
        goto label_1d3f84;
    }
    ctx->pc = 0x1D3F7Cu;
    {
        const bool branch_taken_0x1d3f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F7Cu;
        // 0x1d3f80: 0x3c046666  lui         $a0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f7c) {
            ctx->pc = 0x1D3FBCu;
            goto label_1d3fbc;
        }
    }
    ctx->pc = 0x1D3F84u;
label_1d3f84:
    // 0x1d3f84: 0x1137c2  srl         $a2, $s1, 31
    ctx->pc = 0x1d3f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1d3f88:
    // 0x1d3f88: 0x34856667  ori         $a1, $a0, 0x6667
    ctx->pc = 0x1d3f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_1d3f8c:
    // 0x1d3f8c: 0xb10018  mult        $zero, $a1, $s1
    ctx->pc = 0x1d3f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d3f90:
    // 0x1d3f90: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d3f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3f94:
    // 0x1d3f94: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d3f98:
    // 0x1d3f98: 0x2810  mfhi        $a1
    ctx->pc = 0x1d3f98u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d3f9c:
    // 0x1d3f9c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1d3f9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_1d3fa0:
    // 0x1d3fa0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3fa4:
    // 0x1d3fa4: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d3fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d3fa8:
    // 0x1d3fa8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d3fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d3fac:
    // 0x1d3fac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3fb0:
    // 0x1d3fb0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d3fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3fb4:
    // 0x1d3fb4: 0x10000052  b           . + 4 + (0x52 << 2)
label_1d3fb8:
    if (ctx->pc == 0x1D3FB8u) {
        ctx->pc = 0x1D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB4u;
        // 0x1d3fb8: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FBCu;
        goto label_1d3fbc;
    }
    ctx->pc = 0x1D3FB4u;
    {
        const bool branch_taken_0x1d3fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB4u;
        // 0x1d3fb8: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fb4) {
            ctx->pc = 0x1D4100u;
            { ctx->pc = 0x1d4100; return; }
        }
    }
    ctx->pc = 0x1D3FBCu;
label_1d3fbc:
    // 0x1d3fbc: 0x0  nop
    ctx->pc = 0x1d3fbcu;
    // NOP
label_1d3fc0:
    // 0x1d3fc0: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1d3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
label_1d3fc4:
    // 0x1d3fc4: 0x3484851f  ori         $a0, $a0, 0x851F
    ctx->pc = 0x1d3fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
label_1d3fc8:
    // 0x1d3fc8: 0x1137c2  srl         $a2, $s1, 31
    ctx->pc = 0x1d3fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1d3fcc:
    // 0x1d3fcc: 0x910018  mult        $zero, $a0, $s1
    ctx->pc = 0x1d3fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d3fd0:
    // 0x1d3fd0: 0x0  nop
    ctx->pc = 0x1d3fd0u;
    // NOP
label_1d3fd4:
    // 0x1d3fd4: 0x0  nop
    ctx->pc = 0x1d3fd4u;
    // NOP
label_1d3fd8:
    // 0x1d3fd8: 0x2810  mfhi        $a1
    ctx->pc = 0x1d3fd8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d3fdc:
    // 0x1d3fdc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d3fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3fe0:
    // 0x1d3fe0: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d3fe4:
    // 0x1d3fe4: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1d3fe4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_1d3fe8:
    // 0x1d3fe8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3fec:
    // 0x1d3fec: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d3fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d3ff0:
    // 0x1d3ff0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d3ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d3ff4:
    // 0x1d3ff4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3ff8:
    // 0x1d3ff8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d3ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3ffc:
    // 0x1d3ffc: 0x10000040  b           . + 4 + (0x40 << 2)
label_1d4000:
    if (ctx->pc == 0x1D4000u) {
        ctx->pc = 0x1D4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FFCu;
        // 0x1d4000: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4004u;
        goto label_1d4004;
    }
    ctx->pc = 0x1D3FFCu;
    {
        const bool branch_taken_0x1d3ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FFCu;
        // 0x1d4000: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ffc) {
            ctx->pc = 0x1D4100u;
            { ctx->pc = 0x1d4100; return; }
        }
    }
    ctx->pc = 0x1D4004u;
label_1d4004:
    // 0x1d4004: 0x0  nop
    ctx->pc = 0x1d4004u;
    // NOP
label_1d4008:
    // 0x1d4008: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d4008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d400c:
    // 0x1d400c: 0x16040023  bne         $s0, $a0, . + 4 + (0x23 << 2)
label_1d4010:
    if (ctx->pc == 0x1D4010u) {
        ctx->pc = 0x1D4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D400Cu;
        // 0x1d4010: 0x2a210064  slti        $at, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4014u;
        goto label_1d4014;
    }
    ctx->pc = 0x1D400Cu;
    {
        const bool branch_taken_0x1d400c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D400Cu;
        // 0x1d4010: 0x2a210064  slti        $at, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d400c) {
            ctx->pc = 0x1D409Cu;
            goto label_1d409c;
        }
    }
    ctx->pc = 0x1D4014u;
label_1d4014:
    // 0x1d4014: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1d4018:
    if (ctx->pc == 0x1D4018u) {
        ctx->pc = 0x1D4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4014u;
        // 0x1d4018: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D401Cu;
        goto label_1d401c;
    }
    ctx->pc = 0x1D4014u;
    {
        const bool branch_taken_0x1d4014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4014u;
        // 0x1d4018: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4014) {
            ctx->pc = 0x1D4048u;
            goto label_1d4048;
        }
    }
    ctx->pc = 0x1D401Cu;
label_1d401c:
    // 0x1d401c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d4020:
    // 0x1d4020: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x1d4020u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d4024:
    // 0x1d4024: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d4024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d4028:
    // 0x1d4028: 0x0  nop
    ctx->pc = 0x1d4028u;
    // NOP
label_1d402c:
    // 0x1d402c: 0x2810  mfhi        $a1
    ctx->pc = 0x1d402cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d4030:
    // 0x1d4030: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d4034:
    // 0x1d4034: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d4034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d4038:
    // 0x1d4038: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d4038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d403c:
    // 0x1d403c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d403cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d4040:
    // 0x1d4040: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1d4044:
    if (ctx->pc == 0x1D4044u) {
        ctx->pc = 0x1D4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4040u;
        // 0x1d4044: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4048u;
        goto label_1d4048;
    }
    ctx->pc = 0x1D4040u;
    {
        const bool branch_taken_0x1d4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4040u;
        // 0x1d4044: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4040) {
            ctx->pc = 0x1D4100u;
            { ctx->pc = 0x1d4100; return; }
        }
    }
    ctx->pc = 0x1D4048u;
label_1d4048:
    // 0x1d4048: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1d4048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1d404c:
    // 0x1d404c: 0x224001a  div         $zero, $s1, $a0
    ctx->pc = 0x1d404cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d4050:
    // 0x1d4050: 0x0  nop
    ctx->pc = 0x1d4050u;
    // NOP
label_1d4054:
    // 0x1d4054: 0x0  nop
    ctx->pc = 0x1d4054u;
    // NOP
label_1d4058:
    // 0x1d4058: 0x3010  mfhi        $a2
    ctx->pc = 0x1d4058u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1d405c:
    // 0x1d405c: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1d405cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_1d4060:
    // 0x1d4060: 0x34856667  ori         $a1, $a0, 0x6667
    ctx->pc = 0x1d4060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_1d4064:
    // 0x1d4064: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d4064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d4068:
    // 0x1d4068: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1d4068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d406c:
    // 0x1d406c: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d4070:
    // 0x1d4070: 0x0  nop
    ctx->pc = 0x1d4070u;
    // NOP
label_1d4074:
    // 0x1d4074: 0x2810  mfhi        $a1
    ctx->pc = 0x1d4074u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d4078:
    // 0x1d4078: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1d4078u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1d407c:
    // 0x1d407c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1d407cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_1d4080:
    // 0x1d4080: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d4080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d4084:
    // 0x1d4084: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d4084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d4088:
    // 0x1d4088: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d4088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d408c:
    // 0x1d408c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d4090:
    // 0x1d4090: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d4090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d4094:
    // 0x1d4094: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1d4098:
    if (ctx->pc == 0x1D4098u) {
        ctx->pc = 0x1D4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4094u;
        // 0x1d4098: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D409Cu;
        goto label_1d409c;
    }
    ctx->pc = 0x1D4094u;
    {
        const bool branch_taken_0x1d4094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4094u;
        // 0x1d4098: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4094) {
            ctx->pc = 0x1D4100u;
            { ctx->pc = 0x1d4100; return; }
        }
    }
    ctx->pc = 0x1D409Cu;
label_1d409c:
    // 0x1d409c: 0x0  nop
    ctx->pc = 0x1d409cu;
    // NOP
label_1d40a0:
    // 0x1d40a0: 0x2a210064  slti        $at, $s1, 0x64
    ctx->pc = 0x1d40a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
label_1d40a4:
    // 0x1d40a4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1d40a8:
    if (ctx->pc == 0x1D40A8u) {
        ctx->pc = 0x1D40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A4u;
        // 0x1d40a8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40ACu;
        goto label_1d40ac;
    }
    ctx->pc = 0x1D40A4u;
    {
        const bool branch_taken_0x1d40a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A4u;
        // 0x1d40a8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40a4) {
            ctx->pc = 0x1D40D0u;
            goto label_1d40d0;
        }
    }
    ctx->pc = 0x1D40ACu;
label_1d40ac:
    // 0x1d40ac: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x1d40acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_1d40b0:
    // 0x1d40b0: 0xa2450070  sb          $a1, 0x70($s2)
    ctx->pc = 0x1d40b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 5));
label_1d40b4:
    // 0x1d40b4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d40b8:
    // 0x1d40b8: 0xa2450071  sb          $a1, 0x71($s2)
    ctx->pc = 0x1d40b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 5));
label_1d40bc:
    // 0x1d40bc: 0x24c6b24e  addiu       $a2, $a2, -0x4DB2
    ctx->pc = 0x1d40bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947406));
label_1d40c0:
    // 0x1d40c0: 0xa2450072  sb          $a1, 0x72($s2)
    ctx->pc = 0x1d40c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 5));
label_1d40c4:
    // 0x1d40c4: 0xa2400073  sb          $zero, 0x73($s2)
    ctx->pc = 0x1d40c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 0));
label_1d40c8:
    // 0x1d40c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d40cc:
    if (ctx->pc == 0x1D40CCu) {
        ctx->pc = 0x1D40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40C8u;
        // 0x1d40cc: 0xae440074  sw          $a0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40D0u;
        goto label_1d40d0;
    }
    ctx->pc = 0x1D40C8u;
    {
        const bool branch_taken_0x1d40c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40C8u;
        // 0x1d40cc: 0xae440074  sw          $a0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40c8) {
            ctx->pc = 0x1D4100u;
            { ctx->pc = 0x1d4100; return; }
        }
    }
    ctx->pc = 0x1D40D0u;
label_1d40d0:
    // 0x1d40d0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d40d4:
    // 0x1d40d4: 0x224001a  div         $zero, $s1, $a0
    ctx->pc = 0x1d40d4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d40d8:
    // 0x1d40d8: 0x0  nop
    ctx->pc = 0x1d40d8u;
    // NOP
label_1d40dc:
    // 0x1d40dc: 0x0  nop
    ctx->pc = 0x1d40dcu;
    // NOP
label_1d40e0:
    // 0x1d40e0: 0x2810  mfhi        $a1
    ctx->pc = 0x1d40e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d40e4:
    // 0x1d40e4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    ctx->pc = 0x1d40e8u;
    return;
}

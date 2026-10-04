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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part83(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1c3e88u: goto label_1c3e88;
        case 0x1c3e8cu: goto label_1c3e8c;
        case 0x1c3e90u: goto label_1c3e90;
        case 0x1c3e94u: goto label_1c3e94;
        case 0x1c3e98u: goto label_1c3e98;
        case 0x1c3e9cu: goto label_1c3e9c;
        case 0x1c3ea0u: goto label_1c3ea0;
        case 0x1c3ea4u: goto label_1c3ea4;
        case 0x1c3ea8u: goto label_1c3ea8;
        case 0x1c3eacu: goto label_1c3eac;
        case 0x1c3eb0u: goto label_1c3eb0;
        case 0x1c3eb4u: goto label_1c3eb4;
        case 0x1c3eb8u: goto label_1c3eb8;
        case 0x1c3ebcu: goto label_1c3ebc;
        case 0x1c3ec0u: goto label_1c3ec0;
        case 0x1c3ec4u: goto label_1c3ec4;
        case 0x1c3ec8u: goto label_1c3ec8;
        case 0x1c3eccu: goto label_1c3ecc;
        case 0x1c3ed0u: goto label_1c3ed0;
        case 0x1c3ed4u: goto label_1c3ed4;
        case 0x1c3ed8u: goto label_1c3ed8;
        case 0x1c3edcu: goto label_1c3edc;
        case 0x1c3ee0u: goto label_1c3ee0;
        case 0x1c3ee4u: goto label_1c3ee4;
        case 0x1c3ee8u: goto label_1c3ee8;
        case 0x1c3eecu: goto label_1c3eec;
        case 0x1c3ef0u: goto label_1c3ef0;
        case 0x1c3ef4u: goto label_1c3ef4;
        case 0x1c3ef8u: goto label_1c3ef8;
        case 0x1c3efcu: goto label_1c3efc;
        case 0x1c3f00u: goto label_1c3f00;
        case 0x1c3f04u: goto label_1c3f04;
        case 0x1c3f08u: goto label_1c3f08;
        case 0x1c3f0cu: goto label_1c3f0c;
        case 0x1c3f10u: goto label_1c3f10;
        case 0x1c3f14u: goto label_1c3f14;
        case 0x1c3f18u: goto label_1c3f18;
        case 0x1c3f1cu: goto label_1c3f1c;
        case 0x1c3f20u: goto label_1c3f20;
        case 0x1c3f24u: goto label_1c3f24;
        case 0x1c3f28u: goto label_1c3f28;
        case 0x1c3f2cu: goto label_1c3f2c;
        case 0x1c3f30u: goto label_1c3f30;
        case 0x1c3f34u: goto label_1c3f34;
        case 0x1c3f38u: goto label_1c3f38;
        case 0x1c3f3cu: goto label_1c3f3c;
        case 0x1c3f40u: goto label_1c3f40;
        case 0x1c3f44u: goto label_1c3f44;
        case 0x1c3f48u: goto label_1c3f48;
        case 0x1c3f4cu: goto label_1c3f4c;
        case 0x1c3f50u: goto label_1c3f50;
        case 0x1c3f54u: goto label_1c3f54;
        case 0x1c3f58u: goto label_1c3f58;
        case 0x1c3f5cu: goto label_1c3f5c;
        case 0x1c3f60u: goto label_1c3f60;
        case 0x1c3f64u: goto label_1c3f64;
        case 0x1c3f68u: goto label_1c3f68;
        case 0x1c3f6cu: goto label_1c3f6c;
        case 0x1c3f70u: goto label_1c3f70;
        case 0x1c3f74u: goto label_1c3f74;
        case 0x1c3f78u: goto label_1c3f78;
        case 0x1c3f7cu: goto label_1c3f7c;
        case 0x1c3f80u: goto label_1c3f80;
        case 0x1c3f84u: goto label_1c3f84;
        case 0x1c3f88u: goto label_1c3f88;
        case 0x1c3f8cu: goto label_1c3f8c;
        case 0x1c3f90u: goto label_1c3f90;
        case 0x1c3f94u: goto label_1c3f94;
        case 0x1c3f98u: goto label_1c3f98;
        case 0x1c3f9cu: goto label_1c3f9c;
        case 0x1c3fa0u: goto label_1c3fa0;
        case 0x1c3fa4u: goto label_1c3fa4;
        case 0x1c3fa8u: goto label_1c3fa8;
        case 0x1c3facu: goto label_1c3fac;
        case 0x1c3fb0u: goto label_1c3fb0;
        case 0x1c3fb4u: goto label_1c3fb4;
        case 0x1c3fb8u: goto label_1c3fb8;
        case 0x1c3fbcu: goto label_1c3fbc;
        case 0x1c3fc0u: goto label_1c3fc0;
        case 0x1c3fc4u: goto label_1c3fc4;
        case 0x1c3fc8u: goto label_1c3fc8;
        case 0x1c3fccu: goto label_1c3fcc;
        case 0x1c3fd0u: goto label_1c3fd0;
        case 0x1c3fd4u: goto label_1c3fd4;
        case 0x1c3fd8u: goto label_1c3fd8;
        case 0x1c3fdcu: goto label_1c3fdc;
        case 0x1c3fe0u: goto label_1c3fe0;
        case 0x1c3fe4u: goto label_1c3fe4;
        case 0x1c3fe8u: goto label_1c3fe8;
        case 0x1c3fecu: goto label_1c3fec;
        case 0x1c3ff0u: goto label_1c3ff0;
        case 0x1c3ff4u: goto label_1c3ff4;
        case 0x1c3ff8u: goto label_1c3ff8;
        case 0x1c3ffcu: goto label_1c3ffc;
        case 0x1c4000u: goto label_1c4000;
        case 0x1c4004u: goto label_1c4004;
        case 0x1c4008u: goto label_1c4008;
        case 0x1c400cu: goto label_1c400c;
        case 0x1c4010u: goto label_1c4010;
        case 0x1c4014u: goto label_1c4014;
        case 0x1c4018u: goto label_1c4018;
        case 0x1c401cu: goto label_1c401c;
        case 0x1c4020u: goto label_1c4020;
        case 0x1c4024u: goto label_1c4024;
        case 0x1c4028u: goto label_1c4028;
        case 0x1c402cu: goto label_1c402c;
        case 0x1c4030u: goto label_1c4030;
        case 0x1c4034u: goto label_1c4034;
        case 0x1c4038u: goto label_1c4038;
        case 0x1c403cu: goto label_1c403c;
        case 0x1c4040u: goto label_1c4040;
        case 0x1c4044u: goto label_1c4044;
        case 0x1c4048u: goto label_1c4048;
        case 0x1c404cu: goto label_1c404c;
        case 0x1c4050u: goto label_1c4050;
        case 0x1c4054u: goto label_1c4054;
        case 0x1c4058u: goto label_1c4058;
        case 0x1c405cu: goto label_1c405c;
        case 0x1c4060u: goto label_1c4060;
        case 0x1c4064u: goto label_1c4064;
        case 0x1c4068u: goto label_1c4068;
        case 0x1c406cu: goto label_1c406c;
        case 0x1c4070u: goto label_1c4070;
        case 0x1c4074u: goto label_1c4074;
        case 0x1c4078u: goto label_1c4078;
        case 0x1c407cu: goto label_1c407c;
        case 0x1c4080u: goto label_1c4080;
        case 0x1c4084u: goto label_1c4084;
        case 0x1c4088u: goto label_1c4088;
        case 0x1c408cu: goto label_1c408c;
        case 0x1c4090u: goto label_1c4090;
        case 0x1c4094u: goto label_1c4094;
        case 0x1c4098u: goto label_1c4098;
        case 0x1c409cu: goto label_1c409c;
        case 0x1c40a0u: goto label_1c40a0;
        case 0x1c40a4u: goto label_1c40a4;
        case 0x1c40a8u: goto label_1c40a8;
        case 0x1c40acu: goto label_1c40ac;
        case 0x1c40b0u: goto label_1c40b0;
        case 0x1c40b4u: goto label_1c40b4;
        case 0x1c40b8u: goto label_1c40b8;
        case 0x1c40bcu: goto label_1c40bc;
        case 0x1c40c0u: goto label_1c40c0;
        case 0x1c40c4u: goto label_1c40c4;
        case 0x1c40c8u: goto label_1c40c8;
        case 0x1c40ccu: goto label_1c40cc;
        case 0x1c40d0u: goto label_1c40d0;
        case 0x1c40d4u: goto label_1c40d4;
        default: return;
    }

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
label_1c3e88:
    // 0x1c3e88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c3e88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3e8c:
    // 0x1c3e8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c3e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c3e90:
    // 0x1c3e90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c3e94:
    // 0x1c3e94: 0x2822818  mult        $a1, $s4, $v0
    ctx->pc = 0x1c3e94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1c3e98:
    // 0x1c3e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c3e9c:
    // 0x1c3e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c3ea0:
    // 0x1c3ea0: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c3ea4:
    // 0x1c3ea4: 0x2484fbc0  addiu       $a0, $a0, -0x440
    ctx->pc = 0x1c3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966208));
label_1c3ea8:
    // 0x1c3ea8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1c3ea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1c3eac:
    // 0x1c3eac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1c3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1c3eb0:
    // 0x1c3eb0: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x1c3eb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1c3eb4:
    // 0x1c3eb4: 0x34463ffc  ori         $a2, $v0, 0x3FFC
    ctx->pc = 0x1c3eb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1c3eb8:
    // 0x1c3eb8: 0x26321d60  addiu       $s2, $s1, 0x1D60
    ctx->pc = 0x1c3eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 7520));
label_1c3ebc:
    // 0x1c3ebc: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1c3ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c3ec0:
    // 0x1c3ec0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c3ec4:
    // 0x1c3ec4: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1c3ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1c3ec8:
    // 0x1c3ec8: 0x862823  subu        $a1, $a0, $a2
    ctx->pc = 0x1c3ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1c3ecc:
    // 0x1c3ecc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1c3eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c3ed0:
    // 0x1c3ed0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1c3ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1c3ed4:
    // 0x1c3ed4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1c3ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1c3ed8:
    // 0x1c3ed8: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1c3edc:
    if (ctx->pc == 0x1C3EDCu) {
        ctx->pc = 0x1C3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3ED8u;
        // 0x1c3edc: 0x2258021  addu        $s0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3EE0u;
        goto label_1c3ee0;
    }
    ctx->pc = 0x1C3ED8u;
    {
        const bool branch_taken_0x1c3ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3ED8u;
        // 0x1c3edc: 0x2258021  addu        $s0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ed8) {
            ctx->pc = 0x1C3F14u;
            goto label_1c3f14;
        }
    }
    ctx->pc = 0x1C3EE0u;
label_1c3ee0:
    // 0x1c3ee0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c3ee4:
    // 0x1c3ee4: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x1c3ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1c3ee8:
    // 0x1c3ee8: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c3eec:
    // 0x1c3eec: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1c3eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c3ef0:
    // 0x1c3ef0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3ef4:
    // 0x1c3ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ef8:
    // 0x1c3ef8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c3efc:
    // 0x1c3efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f00:
    // 0x1c3f00: 0x244236a0  addiu       $v0, $v0, 0x36A0
    ctx->pc = 0x1c3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13984));
label_1c3f04:
    // 0x1c3f04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f08:
    // 0x1c3f08: 0xc066c72  jal         func_19B1C8
label_1c3f0c:
    if (ctx->pc == 0x1C3F0Cu) {
        ctx->pc = 0x1C3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F08u;
        // 0x1c3f0c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F10u;
        goto label_1c3f10;
    }
    ctx->pc = 0x1C3F08u;
    SET_GPR_U32(ctx, 31, 0x1C3F10u);
    ctx->pc = 0x1C3F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F08u;
    // 0x1c3f0c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3F08u, 0x1C3F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F10u;
label_1c3f10:
    // 0x1c3f10: 0xa2000123  sb          $zero, 0x123($s0)
    ctx->pc = 0x1c3f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 0));
label_1c3f14:
    // 0x1c3f14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c3f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c3f18:
    // 0x1c3f18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c3f1c:
    // 0x1c3f1c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1c3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c3f20:
    // 0x1c3f20: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c3f24:
    // 0x1c3f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f28:
    // 0x1c3f28: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1c3f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1c3f2c:
    // 0x1c3f2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f30:
    // 0x1c3f30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3f30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f34:
    // 0x1c3f34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f38:
    // 0x1c3f38: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c3f3c:
    // 0x1c3f3c: 0xc066c72  jal         func_19B1C8
label_1c3f40:
    if (ctx->pc == 0x1C3F40u) {
        ctx->pc = 0x1C3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F3Cu;
        // 0x1c3f40: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F44u;
        goto label_1c3f44;
    }
    ctx->pc = 0x1C3F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F44u);
    ctx->pc = 0x1C3F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F3Cu;
    // 0x1c3f40: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3F3Cu, 0x1C3F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3F44u;
label_1c3f44:
    // 0x1c3f44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c3f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c3f48:
    // 0x1c3f48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f4c:
    // 0x1c3f4c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1c3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c3f50:
    // 0x1c3f50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1c3f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f54:
    // 0x1c3f54: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c3f54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f58:
    // 0x1c3f58: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c3f5c:
    // 0x1c3f5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3f60:
    // 0x1c3f60: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1c3f64:
    // 0x1c3f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c3f68:
    // 0x1c3f68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c3f6c:
    // 0x1c3f6c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c3f70:
    // 0x1c3f70: 0x245002a0  addiu       $s0, $v0, 0x2A0
    ctx->pc = 0x1c3f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
label_1c3f74:
    // 0x1c3f74: 0xc0710c0  jal         func_1C4300
label_1c3f78:
    if (ctx->pc == 0x1C3F78u) {
        ctx->pc = 0x1C3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F74u;
        // 0x1c3f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F7Cu;
        goto label_1c3f7c;
    }
    ctx->pc = 0x1C3F74u;
    SET_GPR_U32(ctx, 31, 0x1C3F7Cu);
    ctx->pc = 0x1C3F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3F74u;
    // 0x1c3f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4300u;
    { ctx->pc = 0x1c4300; return; }
    ctx->pc = 0x1C3F7Cu;
label_1c3f7c:
    // 0x1c3f7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c3f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c3f80:
    // 0x1c3f80: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c3f84:
    // 0x1c3f84: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1c3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c3f88:
    // 0x1c3f88: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c3f8c:
    // 0x1c3f8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f90:
    // 0x1c3f90: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_1c3f94:
    // 0x1c3f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f98:
    // 0x1c3f98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3f98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f9c:
    // 0x1c3f9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c3f9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3fa0:
    // 0x1c3fa0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c3fa4:
    // 0x1c3fa4: 0xc066c72  jal         func_19B1C8
label_1c3fa8:
    if (ctx->pc == 0x1C3FA8u) {
        ctx->pc = 0x1C3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FA4u;
        // 0x1c3fa8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FACu;
        goto label_1c3fac;
    }
    ctx->pc = 0x1C3FA4u;
    SET_GPR_U32(ctx, 31, 0x1C3FACu);
    ctx->pc = 0x1C3FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FA4u;
    // 0x1c3fa8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C3FA4u, 0x1C3FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FACu;
label_1c3fac:
    // 0x1c3fac: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1c3facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1c3fb0:
    // 0x1c3fb0: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_1c3fb4:
    if (ctx->pc == 0x1C3FB4u) {
        ctx->pc = 0x1C3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FB0u;
        // 0x1c3fb4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FB8u;
        goto label_1c3fb8;
    }
    ctx->pc = 0x1C3FB0u;
    {
        const bool branch_taken_0x1c3fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FB0u;
        // 0x1c3fb4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fb0) {
            ctx->pc = 0x1C4010u;
            goto label_1c4010;
        }
    }
    ctx->pc = 0x1C3FB8u;
label_1c3fb8:
    // 0x1c3fb8: 0x24020350  addiu       $v0, $zero, 0x350
    ctx->pc = 0x1c3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
label_1c3fbc:
    // 0x1c3fbc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1c3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c3fc0:
    // 0x1c3fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3fc4:
    // 0x1c3fc4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1c3fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c3fc8:
    // 0x1c3fc8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c3fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c3fcc:
    // 0x1c3fcc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1c3fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c3fd0:
    // 0x1c3fd0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1c3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1c3fd4:
    // 0x1c3fd4: 0x245016c0  addiu       $s0, $v0, 0x16C0
    ctx->pc = 0x1c3fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_1c3fd8:
    // 0x1c3fd8: 0xc07100c  jal         func_1C4030
label_1c3fdc:
    if (ctx->pc == 0x1C3FDCu) {
        ctx->pc = 0x1C3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FD8u;
        // 0x1c3fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FE0u;
        goto label_1c3fe0;
    }
    ctx->pc = 0x1C3FD8u;
    SET_GPR_U32(ctx, 31, 0x1C3FE0u);
    ctx->pc = 0x1C3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FD8u;
    // 0x1c3fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4030u;
    goto label_1c4030;
    ctx->pc = 0x1C3FE0u;
label_1c3fe0:
    // 0x1c3fe0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c3fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c3fe4:
    // 0x1c3fe4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c3fe8:
    // 0x1c3fe8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1c3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c3fec:
    // 0x1c3fec: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c3ff0:
    // 0x1c3ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ff4:
    // 0x1c3ff4: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1c3ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1c3ff8:
    // 0x1c3ff8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3ffc:
    // 0x1c3ffc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4000:
    // 0x1c4000: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c4000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4004:
    // 0x1c4004: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c4004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c4008:
    // 0x1c4008: 0xc066c72  jal         func_19B1C8
label_1c400c:
    if (ctx->pc == 0x1C400Cu) {
        ctx->pc = 0x1C400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4008u;
        // 0x1c400c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4010u;
        goto label_1c4010;
    }
    ctx->pc = 0x1C4008u;
    SET_GPR_U32(ctx, 31, 0x1C4010u);
    ctx->pc = 0x1C400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4008u;
    // 0x1c400c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C4008u, 0x1C4010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4010u;
label_1c4010:
    // 0x1c4010: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c4010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c4014:
    // 0x1c4014: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c4014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c4018:
    // 0x1c4018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c4018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c401c:
    // 0x1c401c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c401cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4020:
    // 0x1c4020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c4024:
    // 0x1c4024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4028:
    // 0x1c4028: 0x3e00008  jr          $ra
label_1c402c:
    if (ctx->pc == 0x1C402Cu) {
        ctx->pc = 0x1C402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4028u;
        // 0x1c402c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4030u;
        goto label_1c4030;
    }
    ctx->pc = 0x1C4028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4028u;
        // 0x1c402c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4030u;
label_1c4030:
    // 0x1c4030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c4030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1c4034:
    // 0x1c4034: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c4034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1c4038:
    // 0x1c4038: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c4038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1c403c:
    // 0x1c403c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c403cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1c4040:
    // 0x1c4040: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c4040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c4044:
    // 0x1c4044: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c4044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c4048:
    // 0x1c4048: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c4048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c404c:
    // 0x1c404c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c404cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c4050:
    // 0x1c4050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c4054:
    // 0x1c4054: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_1c4058:
    if (ctx->pc == 0x1C4058u) {
        ctx->pc = 0x1C4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4054u;
        // 0x1c4058: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C405Cu;
        goto label_1c405c;
    }
    ctx->pc = 0x1C4054u;
    {
        const bool branch_taken_0x1c4054 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4054u;
        // 0x1c4058: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4054) {
            ctx->pc = 0x1C408Cu;
            goto label_1c408c;
        }
    }
    ctx->pc = 0x1C405Cu;
label_1c405c:
    // 0x1c405c: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x1c405cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1c4060:
    // 0x1c4060: 0x290303e8  slti        $v1, $t0, 0x3E8
    ctx->pc = 0x1c4060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1000) ? 1 : 0);
label_1c4064:
    // 0x1c4064: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c4068:
    if (ctx->pc == 0x1C4068u) {
        ctx->pc = 0x1C4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4064u;
        // 0x1c4068: 0x29030064  slti        $v1, $t0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C406Cu;
        goto label_1c406c;
    }
    ctx->pc = 0x1C4064u;
    {
        const bool branch_taken_0x1c4064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4064u;
        // 0x1c4068: 0x29030064  slti        $v1, $t0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4064) {
            ctx->pc = 0x1C4074u;
            goto label_1c4074;
        }
    }
    ctx->pc = 0x1C406Cu;
label_1c406c:
    // 0x1c406c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c4070:
    if (ctx->pc == 0x1C4070u) {
        ctx->pc = 0x1C4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C406Cu;
        // 0x1c4070: 0x24190080  addiu       $t9, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4074u;
        goto label_1c4074;
    }
    ctx->pc = 0x1C406Cu;
    {
        const bool branch_taken_0x1c406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C406Cu;
        // 0x1c4070: 0x24190080  addiu       $t9, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c406c) {
            ctx->pc = 0x1C40B0u;
            goto label_1c40b0;
        }
    }
    ctx->pc = 0x1C4074u;
label_1c4074:
    // 0x1c4074: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c4078:
    if (ctx->pc == 0x1C4078u) {
        ctx->pc = 0x1C4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4074u;
        // 0x1c4078: 0x24190034  addiu       $t9, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C407Cu;
        goto label_1c407c;
    }
    ctx->pc = 0x1C4074u;
    {
        const bool branch_taken_0x1c4074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4074u;
        // 0x1c4078: 0x24190034  addiu       $t9, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4074) {
            ctx->pc = 0x1C4084u;
            goto label_1c4084;
        }
    }
    ctx->pc = 0x1C407Cu;
label_1c407c:
    // 0x1c407c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c4080:
    if (ctx->pc == 0x1C4080u) {
        ctx->pc = 0x1C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C407Cu;
        // 0x1c4080: 0x2419005a  addiu       $t9, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4084u;
        goto label_1c4084;
    }
    ctx->pc = 0x1C407Cu;
    {
        const bool branch_taken_0x1c407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C407Cu;
        // 0x1c4080: 0x2419005a  addiu       $t9, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c407c) {
            ctx->pc = 0x1C40B0u;
            goto label_1c40b0;
        }
    }
    ctx->pc = 0x1C4084u;
label_1c4084:
    // 0x1c4084: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c4088:
    if (ctx->pc == 0x1C4088u) {
        ctx->pc = 0x1C4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4084u;
        // 0x1c4088: 0x8c890008  lw          $t1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C408Cu;
        goto label_1c408c;
    }
    ctx->pc = 0x1C4084u;
    {
        const bool branch_taken_0x1c4084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4084u;
        // 0x1c4088: 0x8c890008  lw          $t1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4084) {
            ctx->pc = 0x1C40B4u;
            goto label_1c40b4;
        }
    }
    ctx->pc = 0x1C408Cu;
label_1c408c:
    // 0x1c408c: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x1c408cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1c4090:
    // 0x1c4090: 0x290303e8  slti        $v1, $t0, 0x3E8
    ctx->pc = 0x1c4090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1000) ? 1 : 0);
label_1c4094:
    // 0x1c4094: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c4098:
    if (ctx->pc == 0x1C4098u) {
        ctx->pc = 0x1C4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4094u;
        // 0x1c4098: 0x29030064  slti        $v1, $t0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C409Cu;
        goto label_1c409c;
    }
    ctx->pc = 0x1C4094u;
    {
        const bool branch_taken_0x1c4094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4094u;
        // 0x1c4098: 0x29030064  slti        $v1, $t0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4094) {
            ctx->pc = 0x1C40A4u;
            goto label_1c40a4;
        }
    }
    ctx->pc = 0x1C409Cu;
label_1c409c:
    // 0x1c409c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c40a0:
    if (ctx->pc == 0x1C40A0u) {
        ctx->pc = 0x1C40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C409Cu;
        // 0x1c40a0: 0x24190050  addiu       $t9, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40A4u;
        goto label_1c40a4;
    }
    ctx->pc = 0x1C409Cu;
    {
        const bool branch_taken_0x1c409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C409Cu;
        // 0x1c40a0: 0x24190050  addiu       $t9, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c409c) {
            ctx->pc = 0x1C40B0u;
            goto label_1c40b0;
        }
    }
    ctx->pc = 0x1C40A4u;
label_1c40a4:
    // 0x1c40a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1c40a8:
    if (ctx->pc == 0x1C40A8u) {
        ctx->pc = 0x1C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40A4u;
        // 0x1c40a8: 0x2419fff0  addiu       $t9, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40ACu;
        goto label_1c40ac;
    }
    ctx->pc = 0x1C40A4u;
    {
        const bool branch_taken_0x1c40a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40A4u;
        // 0x1c40a8: 0x2419fff0  addiu       $t9, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40a4) {
            ctx->pc = 0x1C40B0u;
            goto label_1c40b0;
        }
    }
    ctx->pc = 0x1C40ACu;
label_1c40ac:
    // 0x1c40ac: 0x24190020  addiu       $t9, $zero, 0x20
    ctx->pc = 0x1c40acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c40b0:
    // 0x1c40b0: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x1c40b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c40b4:
    // 0x1c40b4: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x1c40b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
label_1c40b8:
    // 0x1c40b8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c40bc:
    if (ctx->pc == 0x1C40BCu) {
        ctx->pc = 0x1C40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40B8u;
        // 0x1c40bc: 0x29210011  slti        $at, $t1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40C0u;
        goto label_1c40c0;
    }
    ctx->pc = 0x1C40B8u;
    {
        const bool branch_taken_0x1c40b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40B8u;
        // 0x1c40bc: 0x29210011  slti        $at, $t1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40b8) {
            ctx->pc = 0x1C40CCu;
            goto label_1c40cc;
        }
    }
    ctx->pc = 0x1C40C0u;
label_1c40c0:
    // 0x1c40c0: 0x9c100  sll         $t8, $t1, 4
    ctx->pc = 0x1c40c0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1c40c4:
    // 0x1c40c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c40c8:
    if (ctx->pc == 0x1C40C8u) {
        ctx->pc = 0x1C40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C4u;
        // 0x1c40c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40CCu;
        goto label_1c40cc;
    }
    ctx->pc = 0x1C40C4u;
    {
        const bool branch_taken_0x1c40c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C4u;
        // 0x1c40c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40c4) {
            ctx->pc = 0x1C40F0u;
            { ctx->pc = 0x1c40f0; return; }
        }
    }
    ctx->pc = 0x1C40CCu;
label_1c40cc:
    // 0x1c40cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c40d0:
    if (ctx->pc == 0x1C40D0u) {
        ctx->pc = 0x1C40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40CCu;
        // 0x1c40d0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40D4u;
        goto label_1c40d4;
    }
    ctx->pc = 0x1C40CCu;
    {
        const bool branch_taken_0x1c40cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40CCu;
        // 0x1c40d0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40cc) {
            ctx->pc = 0x1C40E0u;
            { ctx->pc = 0x1c40e0; return; }
        }
    }
    ctx->pc = 0x1C40D4u;
label_1c40d4:
    // 0x1c40d4: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x1c40d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x1c40d8u;
    return;
}
